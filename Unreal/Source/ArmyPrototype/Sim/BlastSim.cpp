#include "BlastSim.h"
#include <algorithm>
#include <cmath>

namespace army {
// Kingery-Bulmash for a hemispherical surface burst of TNT, as fitted by Swisdak, "Simplified Kingery Airblast
// Calculations" (NSWC, 1994), metric: each parameter is exp(sum c_i (ln Z)^i) over its range of the scaled distance
// Z = R / W^(1/3) (m/kg^(1/3)); duration (ms) and impulses (kPa ms) are then times W^(1/3). The coefficients are the
// published fits, fixed data here (not run values). Below Z 0.2 the value at 0.2 (contact); beyond the last range its
// last value. The surface fits include the ground's reflection (no x1.8 on the charge).
namespace {
struct KbSegment { double upper; int count; double c[7]; };
constexpr KbSegment KbPressure[3]={{2.9,5,{7.2106,-2.1069,-.3229,.1117,.0685}},{23.8,5,{7.5938,-3.0523,.40977,.0261,-.01267}},{198.5,2,{6.0536,-1.4066}}};
constexpr KbSegment KbDuration[3]={{1.02,6,{.5426,3.2299,-1.5931,-5.9667,-4.0815,-.9149}},{2.8,6,{.5440,2.7082,-9.7354,14.3425,-9.7791,2.8535}},
    {40,6,{-2.4608,7.1639,-5.6215,2.2711,-.44994,.03486}}};
constexpr KbSegment KbImpulse[4]={{.96,5,{5.522,1.117,.6,-.292,-.087}},{2.38,5,{5.465,-.308,-1.464,1.362,-.432}},{33.7,5,{5.2749,-.4677,-.2499,.0588,-.00554}},
    {158.7,2,{5.9825,-1.062}}};
constexpr KbSegment KbReflectedImpulse[1]={{40,4,{6.7853,-1.3466,.101,-.01123}}};
constexpr KbSegment KbReflectedPressure[2]={{2,7,{9.006,-2.6893,-.6295,.1011,.29255,.13505,.019736}},{40,7,{8.8396,-1.733,-2.64,2.293,-.8232,.14247,-.0099}}};
template<size_t N> double KbFit(const KbSegment (&fit)[N],double z){
    z=std::max(z,.2);
    size_t n=0;while(n+1<N&&z>fit[n].upper)++n;
    z=std::min(z,fit[n].upper);
    const double l=std::log(z);double sum=0,power=1;
    for(int i=0;i<fit[n].count;++i){sum+=fit[n].c[i]*power;power*=l;}
    return std::exp(sum);
}
}
double KbIncidentPressureAt(double scaled){return KbFit(KbPressure,scaled);}
double KbScaledDurationAt(double scaled){return KbFit(KbDuration,scaled);}
KbBlast KingeryBulmash(float charge,float range){
    const double root=std::cbrt(std::max(1e-9,double(charge))),z=std::max(0.,double(range))/root;
    KbBlast b;b.scaled=float(z);
    b.pressure=float(KbFit(KbPressure,z));b.duration=float(root*KbFit(KbDuration,z));b.impulse=float(root*KbFit(KbImpulse,z));
    b.reflectedImpulse=float(root*KbFit(KbReflectedImpulse,z));b.reflectedPressure=float(KbFit(KbReflectedPressure,z));
    return b;
}
float ObliqueLoad(float reflected,float incident,float cosine){
    if(!(cosine>0))return incident;
    // The blend dips below the incident value near grazing incidence (a quadratic with its minimum at cos = P_i / (P_r +
    // P_i)); a surface never takes less than the incident wave, so the incident value is its floor (then monotonic).
    const float c=std::min(1.f,cosine);
    return std::max(incident,reflected*c*c+incident*(1+c*c-2*c));
}
SurfaceLoad BlastOnSurface(float charge,Vec3 burst,Vec3 point,Vec3 normal,float pressureFactor,float durationFactor){
    SurfaceLoad load;
    const Vec3 toward=burst-point;const float range=Length(toward);
    const KbBlast kb=KingeryBulmash(charge,range);
    load.scaled=kb.scaled;
    load.cosine=range>1e-6f?(toward.x*normal.x+toward.y*normal.y+toward.z*normal.z)/range:1.f;
    // Kingery-Bulmash's reflected pressure fit ends at Z 40 (the incident one runs on to 198.5): beyond it the reflected
    // value is held at the incident one's normal-reflection ratio at Z 40, so a far pane is not loaded by a clamped number.
    float reflected=kb.reflectedPressure,reflectedImpulse=kb.reflectedImpulse;
    if(kb.scaled>40){const KbBlast edge=KingeryBulmash(1,40);
        reflected=kb.pressure*edge.reflectedPressure/std::max(1e-6f,edge.pressure);
        reflectedImpulse=kb.impulse*edge.reflectedImpulse/std::max(1e-6f,edge.impulse);}
    load.pressure=ObliqueLoad(reflected,kb.pressure,load.cosine)*pressureFactor;
    const float impulse=ObliqueLoad(reflectedImpulse,kb.impulse,load.cosine);
    load.duration=load.pressure>0?2*impulse*pressureFactor/load.pressure*durationFactor:0.f;
    load.impulse=.5f*load.pressure*load.duration;
    return load;
}
}
