#include "GrenadeSim.h"
#include "CommandSim.h"
#include "Diagnostics.h"
#include "PerceptionSim.h"
#include "ReactionSim.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <sstream>

namespace army {
namespace {
constexpr float Gravity=9.81f;
constexpr float Pi=3.14159265f;
// Salts of the counter-based draws (GrenadeDraw): each kind of draw has its own stream.
enum Salt : uint32_t { SaltFuse=1, SaltScatterX=2, SaltScatterY=3, SaltRoll=4, SaltThrowBack=5, SaltCasualty=6,
    SaltDirectionZ=7, SaltDirectionPhi=8, SaltMass=9, SaltSeverity=10, SaltLung=11, SaltEardrum=12, SaltRegion=13, SaltIncapacitate=14 };
constexpr float PsiKpa=6.894757f;    // kPa per psi
constexpr float KnockStep=.05f;      // m: the knockback's path is tested for where he could not stand at this spacing
constexpr float Forever=1e6f;        // s: a clock that outlasts any battle (a ruptured eardrum)
float Clamp01(float v){return std::max(0.f,std::min(1.f,v));}
float Flat(Vec3 a,Vec3 b){const float dx=a.x-b.x,dy=a.y-b.y;return std::sqrt(dx*dx+dy*dy);}
float DotOf(Vec3 a,Vec3 b){return a.x*b.x+a.y*b.y+a.z*b.z;}
float SegmentDistance3(Vec3 a,Vec3 b,Vec3 p){const Vec3 d=b-a;const float n=DotOf(d,d);const float t=n>0?std::max(0.f,std::min(1.f,DotOf(p-a,d)/n)):0.f;return Distance(p,a+d*t);}
Vec3 FlatUnit(Vec3 v){const float n=std::sqrt(v.x*v.x+v.y*v.y);return n>1e-4f?Vec3{v.x/n,v.y/n,0}:Vec3{1,0,0};}
uint64_t Mix64(uint64_t x){x+=0x9E3779B97F4A7C15ull;x=(x^(x>>30))*0xBF58476D1CE4E5B9ull;x=(x^(x>>27))*0x94D049BB133111EBull;return x^(x>>31);}
// Every obstacle, hedges included (a hedge stops a thrown grenade; fragments pass it as bullets do).
float AnyContact(const Map& m,Vec3 a,Vec3 b){
    if(m.prepared)return IndexedContact(m,a,b,false,-1,false);
    float first=2;
    for(const auto& o:m.obstacles){const float hit=SegmentObstacle(a,b,o);if(hit>=0)first=std::min(first,hit);}
    return first<=1?first:-1;
}
// The face of the obstacle a grenade met at c: its top (a landing), its bottom (it falls back), or a side, whose outward
// normal is returned (the grenade drops at that side's foot). A box's nearest face to c; a descending segment on a top edge
// lands, a rising one never meets a top.
enum class Face { Top, Bottom, Side };
Face ContactFace(const Map& m,Vec3 c,bool descending,Vec3& normal){
    std::vector<size_t> found;CollectObstacles(m,c,c,.03f,c.z-.05f,c.z+.05f,found);
    float best=1e9f;Face face=Face::Side;normal={0,0,0};
    for(size_t i:found){const auto& o=m.obstacles[i];const float top=o.center.z+ObstacleHeight(o);
        const float gaps[6]={std::abs(c.x-(o.center.x-o.half.x)),std::abs(c.x-(o.center.x+o.half.x)),std::abs(c.y-(o.center.y-o.half.y)),std::abs(c.y-(o.center.y+o.half.y)),
            descending?std::abs(c.z-top):1e9f,descending?1e9f:std::abs(c.z-o.center.z)};
        const Vec3 normals[4]={{-1,0,0},{1,0,0},{0,-1,0},{0,1,0}};
        for(int n=0;n<6;++n)if(gaps[n]<best){best=gaps[n];face=n==4?Face::Top:n==5?Face::Bottom:Face::Side;normal=n<4?normals[n]:Vec3{0,0,n==4?1.f:-1.f};}
    }
    return face;
}
bool InsideFootprint(const Building& b,Vec3 p,float pad){return std::abs(p.x-b.center.x)<=b.half.x+pad&&std::abs(p.y-b.center.y)<=b.half.y+pad;}
LiveGrenade* FindLive(GrenadeRuntime& g,int id){for(auto& gr:g.live)if(gr.id==id)return &gr;return nullptr;}
ExplosionTally* FindTally(GrenadeRuntime& g,int id){for(auto& t:g.tallies)if(t.id==id)return &t;return nullptr;}
float Fuse(const GrenadeRuntime& g,int id){return GrenadeFuse(g.k,g.seed,id);}
float RollMax(const GrenadeTuning& k,GrenadeType type){return type==GrenadeType::Fragmentation?k.fragRoll:k.concRoll;}
GrenadeType OtherType(GrenadeType type){return type==GrenadeType::Fragmentation?GrenadeType::Concussion:GrenadeType::Fragmentation;}
Vec3 Hand(const GrenadeTuning& k,const Soldier& s,Stance stance){return s.position+Vec3{0,0,ReleaseHeight(k,stance)};}
float CentreOfMass(const GrenadeTuning& k,Stance stance){return stance==Stance::Prone?k.comProne:stance==Stance::Crouched?k.comCrouched:k.comStanding;}
float FacingArea(const GrenadeTuning& k,Stance stance){return stance==Stance::Prone?k.areaProne:stance==Stance::Crouched?k.areaCrouched:k.areaStanding;}
// The regions a fragment strikes, by the shares of his stance's presented area: 0 head, 1 thorax, 2 abdomen, 3 the limbs.
void RegionShares(const GrenadeTuning& k,Stance stance,float& head,float& thorax,float& abdomen){
    if(stance==Stance::Prone){head=k.headProne;thorax=k.thoraxProne;abdomen=k.abdomenProne;}
    else if(stance==Stance::Crouched){head=k.headCrouched;thorax=k.thoraxCrouched;abdomen=k.abdomenCrouched;}
    else{head=k.headStanding;thorax=k.thoraxStanding;abdomen=k.abdomenStanding;}
}
float RegionK(const GrenadeTuning& k,int region){return region==0?k.kHead:region==1?k.kThorax:region==2?k.kAbdomen:k.kLimbs;}
std::string Json(Vec3 p){std::ostringstream o;o<<std::setprecision(6)<<'['<<p.x<<','<<p.y<<','<<p.z<<']';return o.str();}
void Row(Diagnostics* d,const Frame& f,const Soldier& s,float time,const char* kind,const char* reason,const std::string& extra){
    if(!d||!d->options.enabled)return;
    TraceCoverSupply(d,s,f.command[size_t(s.squad)],time,kind,reason,extra);
}
}

const std::vector<GrenadeParam>& GrenadeParams(){
    static const std::vector<GrenadeParam> table={
        {"fragCharge",&GrenadeTuning::fragCharge},{"fragCasing",&GrenadeTuning::fragCasing},{"fragReact",&GrenadeTuning::fragReact},{"fragRoll",&GrenadeTuning::fragRoll},
        {"concCharge",&GrenadeTuning::concCharge},{"concCasing",&GrenadeTuning::concCasing},{"concBody",&GrenadeTuning::concBody},
        {"concDanger",&GrenadeTuning::concDanger},{"concRoll",&GrenadeTuning::concRoll},
        {"airBurst",&GrenadeTuning::airBurst},{"blastReach",&GrenadeTuning::blastReach},{"coverFactor",&GrenadeTuning::coverFactor},
        {"roomFactor",&GrenadeTuning::roomFactor},{"roomDuration",&GrenadeTuning::roomDuration},
        {"bowenMass",&GrenadeTuning::bowenMass},{"atmosphere",&GrenadeTuning::atmosphere},{"bowenP50",&GrenadeTuning::bowenP50},{"bowenScale",&GrenadeTuning::bowenScale},
        {"bowenExponent",&GrenadeTuning::bowenExponent},{"bowenSlope",&GrenadeTuning::bowenSlope},{"lungInjuryProbit",&GrenadeTuning::lungInjuryProbit},
        {"lungInjuryHealth",&GrenadeTuning::lungInjuryHealth},{"wallBehind",&GrenadeTuning::wallBehind},{"eardrumKpa",&GrenadeTuning::eardrumKpa},{"eardrumSigma",&GrenadeTuning::eardrumSigma},
        {"stunKpa",&GrenadeTuning::stunKpa},{"stunSeconds",&GrenadeTuning::stunSeconds},{"stunExtraSeconds",&GrenadeTuning::stunExtraSeconds},{"stunSpanKpa",&GrenadeTuning::stunSpanKpa},
        {"deafKpa",&GrenadeTuning::deafKpa},{"deafSeconds",&GrenadeTuning::deafSeconds},{"deafReaction",&GrenadeTuning::deafReaction},
        {"frightKpa",&GrenadeTuning::frightKpa},{"frightScaleKpa",&GrenadeTuning::frightScaleKpa},{"woundedShare",&GrenadeTuning::woundedShare},
        {"areaStanding",&GrenadeTuning::areaStanding},{"areaCrouched",&GrenadeTuning::areaCrouched},{"areaProne",&GrenadeTuning::areaProne},
        {"comStanding",&GrenadeTuning::comStanding},{"comCrouched",&GrenadeTuning::comCrouched},{"comProne",&GrenadeTuning::comProne},{"knockMass",&GrenadeTuning::knockMass},
        {"airborne",&GrenadeTuning::airborne},{"friction",&GrenadeTuning::friction},{"impactSpeed",&GrenadeTuning::impactSpeed},{"impactInjury",&GrenadeTuning::impactInjury},
        {"knockStanding",&GrenadeTuning::knockStanding},{"knockCrouched",&GrenadeTuning::knockCrouched},{"knockRise",&GrenadeTuning::knockRise},{"knockMinimum",&GrenadeTuning::knockMinimum},
        {"fragMott",&GrenadeTuning::fragMott},{"concMott",&GrenadeTuning::concMott},{"dustMass",&GrenadeTuning::dustMass},
        {"gurney",&GrenadeTuning::gurney},{"gurneyShape",&GrenadeTuning::gurneyShape},{"dragScale",&GrenadeTuning::dragScale},
        {"fragmentStopEnergy",&GrenadeTuning::fragmentStopEnergy},{"fragmentSeconds",&GrenadeTuning::fragmentSeconds},{"burstHeight",&GrenadeTuning::burstHeight},
        {"fragmentHitSuppression",&GrenadeTuning::fragmentHitSuppression},{"fragmentNearMiss",&GrenadeTuning::fragmentNearMiss},
        {"fragmentDensity",&GrenadeTuning::fragmentDensity},{"fragmentShape",&GrenadeTuning::fragmentShape},{"skinThreshold",&GrenadeTuning::skinThreshold},
        {"headStanding",&GrenadeTuning::headStanding},{"thoraxStanding",&GrenadeTuning::thoraxStanding},{"abdomenStanding",&GrenadeTuning::abdomenStanding},
        {"headCrouched",&GrenadeTuning::headCrouched},{"thoraxCrouched",&GrenadeTuning::thoraxCrouched},{"abdomenCrouched",&GrenadeTuning::abdomenCrouched},
        {"headProne",&GrenadeTuning::headProne},{"thoraxProne",&GrenadeTuning::thoraxProne},{"abdomenProne",&GrenadeTuning::abdomenProne},
        {"kHead",&GrenadeTuning::kHead},{"kThorax",&GrenadeTuning::kThorax},{"kAbdomen",&GrenadeTuning::kAbdomen},{"kLimbs",&GrenadeTuning::kLimbs},{"woundEnergy",&GrenadeTuning::woundEnergy},
        {"rangeStanding",&GrenadeTuning::rangeStanding},{"rangeKneeling",&GrenadeTuning::rangeKneeling},{"rangeProne",&GrenadeTuning::rangeProne},
        {"releaseStanding",&GrenadeTuning::releaseStanding},{"releaseKneeling",&GrenadeTuning::releaseKneeling},{"releaseProne",&GrenadeTuning::releaseProne},
        {"arcFirst",&GrenadeTuning::arcFirst},{"arcSecond",&GrenadeTuning::arcSecond},{"arcThird",&GrenadeTuning::arcThird},{"arcFourth",&GrenadeTuning::arcFourth},
        {"arcStep",&GrenadeTuning::arcStep},{"arcMargin",&GrenadeTuning::arcMargin},{"scatterBase",&GrenadeTuning::scatterBase},{"scatterPerMetre",&GrenadeTuning::scatterPerMetre},
        {"fuseSeconds",&GrenadeTuning::fuseSeconds},{"fuseSpread",&GrenadeTuning::fuseSpread},
        {"cookMax",&GrenadeTuning::cookMax},{"cookLowComposure",&GrenadeTuning::cookLowComposure},{"cookHighComposure",&GrenadeTuning::cookHighComposure},
        {"throwSeconds",&GrenadeTuning::throwSeconds},{"assumedFuse",&GrenadeTuning::assumedFuse},
        {"throwBackReach",&GrenadeTuning::throwBackReach},{"throwBackSpeed",&GrenadeTuning::throwBackSpeed},{"throwBackMargin",&GrenadeTuning::throwBackMargin},
        {"throwBackRelease",&GrenadeTuning::throwBackRelease},{"pickupReach",&GrenadeTuning::pickupReach},{"skillSlope",&GrenadeTuning::skillSlope},{"skillOffset",&GrenadeTuning::skillOffset},
        {"skillMin",&GrenadeTuning::skillMin},{"skillMax",&GrenadeTuning::skillMax},{"runMargin",&GrenadeTuning::runMargin},{"runSearch",&GrenadeTuning::runSearch},
        {"throwCheck",&GrenadeTuning::throwCheck},{"throwCooldown",&GrenadeTuning::throwCooldown},{"targetAge",&GrenadeTuning::targetAge},
        {"bunchCount",&GrenadeTuning::bunchCount},{"bunchRadius",&GrenadeTuning::bunchRadius},{"closingRange",&GrenadeTuning::closingRange},
        {"fragFriendRange",&GrenadeTuning::fragFriendRange},{"fragFriendClear",&GrenadeTuning::fragFriendClear},{"fragSelfOpen",&GrenadeTuning::fragSelfOpen},
        {"fragSelfCover",&GrenadeTuning::fragSelfCover},{"friendMargin",&GrenadeTuning::friendMargin},{"friendAge",&GrenadeTuning::friendAge},
        {"closeInCheck",&GrenadeTuning::closeInCheck},{"closeInRetry",&GrenadeTuning::closeInRetry},{"pinnedQuiet",&GrenadeTuning::pinnedQuiet},
        {"pinnedFireWindow",&GrenadeTuning::pinnedFireWindow},{"pinnedFireRadius",&GrenadeTuning::pinnedFireRadius},{"pinnedTrackAge",&GrenadeTuning::pinnedTrackAge},
        {"closeInReach",&GrenadeTuning::closeInReach},{"spotNear",&GrenadeTuning::spotNear},{"spotFar",&GrenadeTuning::spotFar},
        {"coveredRoute",&GrenadeTuning::coveredRoute},{"closeInMax",&GrenadeTuning::closeInMax},{"burstWait",&GrenadeTuning::burstWait},{"partnerWait",&GrenadeTuning::partnerWait},{"rushSeconds",&GrenadeTuning::rushSeconds},
        {"rushShort",&GrenadeTuning::rushShort},{"closeFireSeconds",&GrenadeTuning::closeFireSeconds}};
    return table;
}
bool SetGrenadeParam(GrenadeTuning& table,const std::string& name,float value){
    for(const auto& p:GrenadeParams())if(name==p.name){table.*p.member=value;return true;}
    return false;
}
bool SameGrenadeTuning(const GrenadeTuning& a,const GrenadeTuning& b){
    for(const auto& p:GrenadeParams())if(a.*p.member!=b.*p.member)return false;
    return true;
}
const char* GrenadeTypeName(GrenadeType type){return type==GrenadeType::Fragmentation?"fragmentation":"concussion";}

float GrenadeCharge(const GrenadeTuning& k,GrenadeType type){return type==GrenadeType::Fragmentation?k.fragCharge:k.concCharge;}
float GrenadeDanger(const GrenadeTuning& k,GrenadeType type){return type==GrenadeType::Fragmentation?k.fragReact:k.concDanger;}
float FragmentSpeed(const GrenadeTuning& k,GrenadeType type){
    const float casing=type==GrenadeType::Fragmentation?k.fragCasing:k.concCasing,charge=GrenadeCharge(k,type);
    return k.gurney/std::sqrt(std::max(1e-6f,casing/std::max(1e-6f,charge)+k.gurneyShape));
}
float FragmentDragK(const GrenadeTuning& k,float mass){const float lambda=k.dragScale*std::cbrt(std::max(1e-9f,mass));return lambda>0?1/lambda:0.f;}
// Mott (1947), as used for naturally fragmenting casings: N(>m) = N0 exp(-sqrt(m/mu)). The mean mass is 2 mu, so a casing
// of mass M breaks into N0 = M / (2 mu) (mass conserved); a uniform draw u gives m = mu (ln 1/u)^2. A fibre-bodied
// concussion grenade (concBody 0, the US Mk 3) has no metal casing to break up: none.
float MottMu(const GrenadeTuning& k,GrenadeType type){return type==GrenadeType::Fragmentation?k.fragMott:k.concMott;}
int FragmentPopulation(const GrenadeTuning& k,GrenadeType type){
    if(type==GrenadeType::Concussion&&k.concBody<.5f)return 0;
    const float mu=MottMu(k,type),casing=type==GrenadeType::Fragmentation?k.fragCasing:k.concCasing;
    return mu>0&&casing>0?int(std::lround(casing/(2*mu))):0;
}
float MottMass(const GrenadeTuning& k,GrenadeType type,float draw){
    const float l=std::log(1/std::max(draw,1e-7f));
    return MottMu(k,type)*l*l;
}
// The presented area of a fragment, A = shape (m/rho)^(2/3) (a chunky fragment; shape 1.5), in mm^2, and the skin's
// threshold on the energy density E/A (0.1 J/mm^2; the wound-ballistics literature's skin-perforation criterion).
float FragmentArea(const GrenadeTuning& k,float mass){
    return k.fragmentShape*std::pow(std::max(0.f,mass)/std::max(1.f,k.fragmentDensity),2.f/3.f)*1e6f;
}
bool Penetrates(const GrenadeTuning& k,float mass,float energy){
    const float area=FragmentArea(k,mass);
    return area>0&&energy>=k.skinThreshold*area;
}
int FragmentRegion(const GrenadeTuning& k,Stance stance,float draw){
    float head=0,thorax=0,abdomen=0;RegionShares(k,stance,head,thorax,abdomen);
    return draw<head?0:draw<head+thorax?1:draw<head+thorax+abdomen?2:3;
}
// ---- The blast -------------------------------------------------------------------------------------------------------
// Kingery-Bulmash for a hemispherical surface burst of TNT, as fitted by Swisdak, "Simplified Kingery Airblast
// Calculations" (NSWC, 1994), metric: each parameter is exp(sum c_i (ln Z)^i) over its range of the scaled distance
// Z = R / W^(1/3) (m/kg^(1/3)); duration (ms) and impulses (kPa ms) are then times W^(1/3). The coefficients are the
// published fits, fixed data here (not run values). Below Z 0.2 the value at 0.2 (contact); beyond the last range its
// last value. The surface fits include the ground's reflection (no x1.8 on the charge).
// ---- Closer is never safer ---------------------------------------------------------------------------------------------
// Inside Z of about 1 the fitted positive phase shortens faster than the pressure grows, and Bowen's tolerance of a short
// pulse would then spare a man closer in (170 g, standing in the open: survival 0.97 at 0.3 m against 0.40 at 0.57 m).
// So his probit is the least over every range from his out (the envelope): on a fixed grid of Z from 0.2 to 2.8 (0.5%
// apart in Z, with the duration fit's joint at Z 1.02 taken from both sides) the running minimum, outward in, of the
// probit his own stance, cover, room and wall would give at each Z, interpolated in ln Z at his own. That is exactly
// monotone in range (an interpolation between non-decreasing values). From Z 2.8 on the fitted pressure only falls and
// the duration only grows, so survival only rises with range and his own value stands (the two meet at Z 2.8).
namespace {
constexpr double NearLow=.2,NearField=2.8;
const std::vector<double>& NearGrid(){
    static const std::vector<double> grid=[]{
        std::vector<double> z;const double span=std::log(NearField/NearLow);const int steps=int(std::ceil(span/std::log(1.005)));
        for(int n=0;n<steps;++n)z.push_back(NearLow*std::exp(span*n/steps));
        z.push_back(NearField);z.push_back(1.02*(1-1e-6));z.push_back(1.02*(1+1e-6));
        std::sort(z.begin(),z.end());return z;}();
    return grid;
}
float ProbitAt(const GrenadeTuning& k,double z,double root,Stance stance,float pressureFactor,float durationFactor,bool wall){
    float probit=99;
    BowenSurvival(k,EquivalentPressure(k,float(KbIncidentPressureAt(z))*pressureFactor,stance,wall),float(root*KbScaledDurationAt(z))*durationFactor,&probit);
    return probit;
}
}
float BlastProbit(const GrenadeTuning& k,float charge,float range,Stance stance,float pressureFactor,float durationFactor,bool wall,bool envelope){
    const double root=std::cbrt(std::max(1e-9,double(charge))),z=std::max(0.,double(range))/root;
    if(!envelope||z>=NearField)return ProbitAt(k,z,root,stance,pressureFactor,durationFactor,wall);
    const auto& grid=NearGrid();std::vector<float> least(grid.size());float running=99;
    for(size_t n=grid.size();n-->0;){running=std::min(running,ProbitAt(k,grid[n],root,stance,pressureFactor,durationFactor,wall));least[n]=running;}
    const double at=std::max(NearLow,z);
    const size_t hi=std::min(grid.size()-1,size_t(std::upper_bound(grid.begin(),grid.end(),at)-grid.begin())),lo=hi>0?hi-1:0;
    const double t=hi>lo?std::min(1.,std::max(0.,(std::log(at)-std::log(grid[lo]))/(std::log(grid[hi])-std::log(grid[lo])))):0.;
    return float(double(least[lo])+(double(least[hi])-double(least[lo]))*t);
}
float BlastOverpressure(const GrenadeTuning& k,float charge,float range,bool ground){
    return KingeryBulmash(ground?charge:charge*k.airBurst,range).pressure;
}
// Bowen, Fletcher and Richmond (1968), "Estimate of man's tolerance to the direct effects of air blast", as written up by
// McMichael, LLNL-TR-468242 (2011). Pressures in psi. By his orientation: side-on to the wave (standing, crouched) the
// incident plus the dynamic pressure q = 2.5 p^2 / (7 p_atm + p); along it (prone) the incident; against a reflecting
// surface the normally reflected p_r = 2 p (7 p_atm + 4 p) / (7 p_atm + p) (Glasstone and Dolan, The Effects of Nuclear
// Weapons, 1977, for air as an ideal gas).
float EquivalentPressure(const GrenadeTuning& k,float incidentKpa,Stance stance,bool wall){
    const float p=std::max(0.f,incidentKpa)/PsiKpa,atm=k.atmosphere;
    if(wall)return 2*p*(7*atm+4*p)/(7*atm+p);
    if(stance==Stance::Prone)return p;
    return p+2.5f*p*p/(7*atm+p);
}
// Scaled duration T = t (70/m)^(1/3) (14.7/p_atm)^(1/2) (ms); p50 = 61.5 (1 + 6.76 T^-1.064) psi; probit
// Z = 5 - ln(p_eq / p50) / 0.1788; survival = Phi(Z - 5).
float BowenSurvival(const GrenadeTuning& k,float equivalentPsi,float durationMs,float* probit){
    if(!(equivalentPsi>0)||!(durationMs>0)){if(probit)*probit=99;return 1;}
    const double scaled=double(durationMs)*std::cbrt(70./std::max(1e-3,double(k.bowenMass)))*std::sqrt(14.7/std::max(1e-3,double(k.atmosphere)));
    const double p50=double(k.bowenP50)*(1+double(k.bowenScale)*std::pow(scaled,double(k.bowenExponent)));
    const double z=std::min(99.,5-std::log(double(equivalentPsi)/p50)/double(k.bowenSlope));
    if(probit)*probit=float(z);
    return NormalCdf(float(z-5));
}
float NormalCdf(float z){return float(.5*std::erfc(-double(z)/std::sqrt(2.)));}
// Hirsch (1968), eardrum rupture: a log-normal probit, Phi(ln(P / 103 kPa) / 0.45) (about 1% at 34 kPa, 50% at 103 kPa).
float EardrumRupture(const GrenadeTuning& k,float kpa){
    if(!(kpa>0)||k.eardrumKpa<=0||k.eardrumSigma<=0)return 0;
    return NormalCdf(std::log(kpa/k.eardrumKpa)/k.eardrumSigma);
}
// Knockback (tertiary blast). A push with an upward part above `airborne` lifts him: he flies 2 v_up / g until his feet are
// back on his floor, keeping his horizontal speed; then (or at once) he slides to rest under friction mu: v^2 / (2 mu g) m
// in v / (mu g) s.
KnockPath KnockTravel(const GrenadeTuning& k,float speed,float up){
    KnockPath path;const float decel=k.friction*Gravity;
    path.air=up>k.airborne?2*up/Gravity:0.f;
    path.slide=decel>0?speed*speed/(2*decel):0.f;
    path.distance=speed*path.air+path.slide;path.seconds=path.air+(decel>0?speed/decel:0.f);
    return path;
}
float KnockAlong(const GrenadeTuning& k,float speed,float air,float tau,float* now){
    const float decel=k.friction*Gravity;
    if(tau<=air){if(now)*now=speed;return speed*std::max(0.f,tau);}
    const float stop=decel>0?speed/decel:0.f,slid=std::min(tau-air,stop);
    if(now)*now=std::max(0.f,speed-decel*slid);
    return speed*air+speed*slid-.5f*decel*slid*slid;
}
static float KnockWhen(const GrenadeTuning& k,float speed,float air,float distance){
    if(speed<=0)return 0;
    if(distance<=speed*air)return distance/speed;
    const float decel=k.friction*Gravity,rest=distance-speed*air;
    if(decel<=0)return air+rest/speed;
    return air+(speed-std::sqrt(std::max(0.f,speed*speed-2*decel*rest)))/decel;
}
float StunSeconds(const GrenadeTuning& k,const Soldier& s,float kpa){
    if(kpa<k.stunKpa)return 0;
    return (k.stunSeconds+k.stunExtraSeconds*std::min(1.f,(kpa-k.stunKpa)/std::max(1e-3f,k.stunSpanKpa)))/StatScale(s.stats.Get(Stat::Composure));
}
float ThrowRange(const GrenadeTuning& k,const Soldier& s,Stance stance){
    return (stance==Stance::Prone?k.rangeProne:stance==Stance::Crouched?k.rangeKneeling:k.rangeStanding)*StatScale(s.stats.Get(Stat::Strength));
}
float ReleaseHeight(const GrenadeTuning& k,Stance stance){return stance==Stance::Prone?k.releaseProne:stance==Stance::Crouched?k.releaseKneeling:k.releaseStanding;}
float LandingScatter(const GrenadeTuning& k,const Soldier& s,float distance){
    return (k.scatterBase+k.scatterPerMetre*distance)/StatScale(s.stats.Get(Stat::Dexterity))*(1+s.suppression);
}
float CookSeconds(const GrenadeTuning& k,const Soldier& s){
    const float span=k.cookHighComposure-k.cookLowComposure;
    const float share=span>1e-4f?Clamp01((StatScale(s.stats.Get(Stat::Composure))-k.cookLowComposure)/span):0.f;
    return k.cookMax*share;
}
float ThrowBackChance(const GrenadeTuning& k,const Soldier& s){
    const float skill=(StatScale(s.stats.Get(Stat::Dexterity))+StatScale(s.stats.Get(Stat::Initiative))+StatScale(s.stats.Get(Stat::Composure)))/3;
    return std::max(k.skillMin,std::min(k.skillMax,k.skillSlope*skill-k.skillOffset));
}
float GrenadeDraw(uint32_t seed,uint32_t event,uint32_t index,uint32_t salt){
    const uint64_t x=Mix64(Mix64((uint64_t(seed)<<32)^uint64_t(event)^0x3200000000000000ull)^((uint64_t(index)<<24)^uint64_t(salt)));
    return float(x>>40)/16777216.f;
}
float GrenadeFuse(const GrenadeTuning& k,uint32_t seed,int grenade){return k.fuseSeconds+(2*GrenadeDraw(seed,uint32_t(grenade),0,SaltFuse)-1)*k.fuseSpread;}
float ThrowBackDraw(uint32_t seed,int grenade,int soldier,int throws){return GrenadeDraw(seed,uint32_t(grenade),uint32_t(soldier)*16u+uint32_t(throws),SaltThrowBack);}
std::array<uint8_t,2> GrenadeKit(const Config& c,int slot,bool gunner){
    std::array<uint8_t,2> kit{};
    if(gunner)return kit;
    const uint32_t roster=c.rosterSeed?c.rosterSeed:c.seed;
    auto draw=[&](uint32_t salt){return float(SoldierHash(roster,slot,salt)>>40)/16777216.f;};
    const int count=draw(32)<.5f?1:2;
    for(int n=0;n<count;++n)++kit[draw(33+uint32_t(n))<.5f?0:1];
    return kit;
}

GrenadeWorld MakeGrenadeWorld(const Map& map){
    GrenadeWorld w;w.map=&map;
    for(size_t i=0;i<map.surfaces.size();++i){const auto& s=map.surfaces[i];if(s.level>=1||s.kind!=0)w.floors.push_back(i);}
    std::vector<size_t> found;
    for(const auto& b:map.buildings){
        float top=0;
        CollectObstacles(map,{b.center.x-b.half.x,b.center.y,0},{b.center.x+b.half.x,b.center.y,0},b.half.y+.3f,-100.f,100.f,found);
        for(size_t i:found){const auto& o=map.obstacles[i];if(o.building&&InsideFootprint(b,o.center,.35f))top=std::max(top,o.center.z+ObstacleHeight(o));}
        w.roofs.push_back(top>0?top:float(std::max(2,b.floors))*UpperFloor);
    }
    return w;
}
float GrenadeFlightContact(const GrenadeWorld& world,Vec3 a,Vec3 b,GrenadeContact& kind){
    const Map& m=*world.map;float best=2;kind=GrenadeContact::None;
    // Roofs first: a wall top under a roof is the roof (the obstacle below must come strictly before it).
    for(size_t n=0;n<m.buildings.size()&&n<world.roofs.size();++n){const auto& bd=m.buildings[n];const float roof=world.roofs[n];
        const float f0=a.z-roof,f1=b.z-roof;
        if((f0>=0)!=(f1>=0)){const float t=f0/(f0-f1);if(t<best&&InsideFootprint(bd,a+(b-a)*t,.25f)){best=t;kind=GrenadeContact::Roof;}}}
    const float obstacle=AnyContact(m,a,b);
    if(obstacle>=0&&obstacle<best){best=obstacle;Vec3 normal;kind=ContactFace(m,a+(b-a)*obstacle,b.z<a.z,normal)==Face::Top?GrenadeContact::Floor:GrenadeContact::Wall;}
    if(a.z<=m.groundBase){if(0<best){best=0;kind=GrenadeContact::Floor;}}
    else if(b.z<=m.groundBase){const float t=(a.z-m.groundBase)/(a.z-b.z);if(t<best){best=t;kind=GrenadeContact::Floor;}}
    for(size_t i:world.floors){const auto& s=m.surfaces[i];
        const float f0=a.z-SurfaceHeight(s,a),f1=b.z-SurfaceHeight(s,b);
        if(f0>=0&&f1<0){const float t=f0/(f0-f1);if(t<best&&InsideSurface(s,a+(b-a)*t)){best=t;kind=GrenadeContact::Floor;}}}
    const float wx=m.halfWidth-.5f,wy=m.halfHeight-.5f;
    for(int axis=0;axis<2;++axis){const float pa=axis?a.y:a.x,pb=axis?b.y:b.x,limit=axis?wy:wx;
        if(std::abs(pb)>limit&&std::abs(pa)<=limit){const float edge=pb>0?limit:-limit;const float t=(edge-pa)/(pb-pa);if(t<best){best=t;kind=GrenadeContact::Edge;}}}
    return best<=1?best:-1.f;
}
Vec3 DropToFloor(const GrenadeWorld& world,Vec3 p){
    const Map& m=*world.map;
    const Vec3 from{p.x,p.y,p.z+.05f},to{p.x,p.y,std::min(p.z,m.groundBase)-.05f};
    GrenadeContact kind;const float t=GrenadeFlightContact(world,from,to,kind);
    if(t<0)return {p.x,p.y,m.groundBase};
    return from+(to-from)*t;
}
bool ArcVelocity(Vec3 release,Vec3 aim,float degrees,Vec3& velocity,float& flight){
    const Vec3 d=aim-release;const float along=std::sqrt(d.x*d.x+d.y*d.y);
    if(along<.05f||!(degrees>0&&degrees<89.f))return false;
    const float angle=degrees*Pi/180,cosine=std::cos(angle),tangent=std::tan(angle);
    const float denominator=2*cosine*cosine*(along*tangent-d.z);
    if(denominator<=1e-4f)return false;
    const float speed=std::sqrt(Gravity*along*along/denominator);
    velocity={d.x/along*speed*cosine,d.y/along*speed*cosine,speed*std::sin(angle)};flight=along/(speed*cosine);
    return std::isfinite(speed);
}
static bool ArcClear(const GrenadeTuning& k,const GrenadeWorld& world,Vec3 release,Vec3 velocity,float flight){
    const float horizontal=std::sqrt(velocity.x*velocity.x+velocity.y*velocity.y);
    const float step=std::max(.02f,k.arcStep/std::max(.1f,horizontal)),landing=flight-.25f/std::max(.1f,horizontal);
    for(float t0=0;t0<landing;t0+=step){
        const float t1=std::min(t0+step,landing);GrenadeContact kind;
        if(GrenadeFlightContact(world,BallisticPosition(release,velocity,t0),BallisticPosition(release,velocity,t1),kind)>=0)return false;
    }
    return true;
}
bool ArcClearFor(const GrenadeTuning& k,const GrenadeWorld& world,Vec3 release,Vec3 aim,float degrees){
    Vec3 velocity;float flight=0;
    return ArcVelocity(release,aim,degrees,velocity,flight)&&ArcClear(k,world,release,velocity,flight);
}
ThrowArc FindThrowArc(const GrenadeTuning& k,const GrenadeWorld& world,Vec3 release,Vec3 aim,float range,float margin){
    ThrowArc arc;
    if(Flat(release,aim)>range)return arc;
    const float lob=std::max(5.f,std::min(85.f,k.arcFirst));
    const float maxSpeed=std::sqrt(Gravity*std::max(.1f,range)/std::sin(2*lob*Pi/180))*1.0001f;
    const Vec3 along=FlatUnit(aim-release),across{-along.y,along.x,0};
    for(float degrees:{k.arcFirst,k.arcSecond,k.arcThird,k.arcFourth}){
        Vec3 velocity;float flight=0;
        if(!ArcVelocity(release,aim,degrees,velocity,flight))continue;
        if(Length(velocity)>maxSpeed||!ArcClear(k,world,release,velocity,flight))continue;
        bool margins=true;
        if(margin>0)for(Vec3 shift:{across*margin,across*-margin,along*margin,along*-margin}){
            Vec3 variant;float variantFlight=0;
            if(!ArcVelocity(release,aim+shift,degrees,variant,variantFlight)||!ArcClear(k,world,release,variant,variantFlight)){margins=false;break;}
        }
        if(!margins)continue;
        arc.clear=true;arc.angle=degrees;arc.speed=Length(velocity);arc.flight=flight;arc.velocity=velocity;return arc;
    }
    return arc;
}
static Vec3 RollOn(const GrenadeWorld& world,Vec3 rest,Vec3 direction,float roll){
    const Map& m=*world.map;Vec3 p=rest;float left=roll;
    while(left>1e-4f){
        const float step=std::min(.25f,left);const Vec3 q=p+direction*step;
        const float blocked=AnyContact(m,{p.x,p.y,p.z+.08f},{q.x,q.y,p.z+.08f});
        if(blocked>=0){p=DropToFloor(world,p+direction*std::max(0.f,step*blocked-.1f)+Vec3{0,0,.02f});break;}
        const Vec3 below=DropToFloor(world,{q.x,q.y,p.z+.3f});
        if(below.z>p.z+.2f)break;                     // a step up stops it
        if(below.z<p.z-.2f){p=below;break;}           // it drops into a trench, a crater or off a wall top
        p=below;left-=step;
    }
    return p;
}
GrenadeLanding SimulateLanding(const GrenadeWorld& world,Vec3 release,Vec3 velocity,float roll,float maxSeconds){
    GrenadeLanding landing;const Map& m=*world.map;
    const Vec3 heading=FlatUnit(velocity);const float dt=.01f;
    for(float t=0;t<maxSeconds;t+=dt){
        const Vec3 a=BallisticPosition(release,velocity,t),b=BallisticPosition(release,velocity,t+dt);
        GrenadeContact kind;const float hit=GrenadeFlightContact(world,a,b,kind);
        if(hit<0)continue;
        const Vec3 c=a+(b-a)*hit;landing.time=t+dt*hit;landing.contact=kind;
        if(kind==GrenadeContact::Floor){
            landing.position=c;
            if(roll>0){landing.position=RollOn(world,c,heading,roll);landing.rolled=true;}
            return landing;
        }
        if(kind==GrenadeContact::Roof){
            // On a roof it rolls off at the nearest eave and drops at the foot of that wall; thrown from inside the building
            // it comes down off the ceiling into the room.
            Vec3 off=c;
            for(const auto& bd:m.buildings)if(InsideFootprint(bd,c,.3f)){
                if(InsideFootprint(bd,release,0)){off=c-heading*.3f;off.z=c.z-.3f;break;}
                const float gaps[4]={c.x-(bd.center.x-bd.half.x),(bd.center.x+bd.half.x)-c.x,c.y-(bd.center.y-bd.half.y),(bd.center.y+bd.half.y)-c.y};
                int nearest=0;for(int n=1;n<4;++n)if(gaps[n]<gaps[nearest])nearest=n;
                if(nearest==0)off.x=bd.center.x-bd.half.x-.45f;else if(nearest==1)off.x=bd.center.x+bd.half.x+.45f;
                else if(nearest==2)off.y=bd.center.y-bd.half.y-.45f;else off.y=bd.center.y+bd.half.y+.45f;
                break;}
            landing.position=DropToFloor(world,off);
            return landing;
        }
        if(kind==GrenadeContact::Edge){
            const Vec3 inside{std::max(-m.halfWidth+.6f,std::min(m.halfWidth-.6f,c.x)),std::max(-m.halfHeight+.6f,std::min(m.halfHeight-.6f,c.y)),c.z};
            landing.position=DropToFloor(world,inside);return landing;
        }
        // Struck an obstacle's side: it drops at the foot of that side (the thrower's); struck from below, it falls back.
        Vec3 normal;const Face face=ContactFace(m,c,b.z<a.z,normal);
        const Vec3 away=face==Face::Side?normal:heading*-1.f;
        landing.position=DropToFloor(world,face==Face::Bottom?c-Vec3{0,0,.05f}:c+away*.3f);
        return landing;
    }
    landing.position=DropToFloor(world,BallisticPosition(release,velocity,maxSeconds));landing.time=maxSeconds;
    return landing;
}
bool BurstShielded(const Map& map,Vec3 burst,Vec3 feet,Stance stance){
    const Vec3 direction=FlatUnit(feet-burst),side{-direction.y,direction.x,0};
    for(float fraction:{.90f,.72f,.5f})for(float lateral:{0.f,-.3f,.3f}){
        const Vec3 p=feet+side*lateral;
        if(ClearLine3DSolid(map,burst,{p.x,p.y,feet.z+BodyHeight(stance)*fraction}))return false;
    }
    return true;
}
bool BurstShielded(const Map& map,Vec3 burst,const Soldier& s){return BurstShielded(map,burst,s.position,s.stance);}
bool SameRoom(const Map& map,Vec3 burst,Vec3 feet){
    for(const auto& b:map.buildings){
        if(!InsideFootprint(b,burst,0)||!InsideFootprint(b,feet,0))continue;
        const int storeyBurst=int(std::floor((burst.z-b.center.z)/UpperFloor+.25f)),storeyFeet=int(std::floor((feet.z-b.center.z)/UpperFloor+.25f));
        if(storeyBurst==storeyFeet)return true;
    }
    return false;
}
bool WallBehind(const GrenadeTuning& k,const Map& map,Vec3 burst,const Soldier& s){
    if(k.wallBehind<=0)return false;
    const Vec3 centre=s.position+Vec3{0,0,CentreOfMass(k,s.stance)};
    return !ClearLine3DSolid(map,centre,centre+FlatUnit(s.position-burst)*k.wallBehind);
}
BlastReading BlastOn(const GrenadeTuning& k,const Map& map,Vec3 burst,float charge,bool ground,const Soldier& s){
    BlastReading reading;
    // R: to the nearest point of his body (his axis, from his feet to the top of his stance).
    const float top=s.position.z+BodyHeight(s.stance),z=std::max(s.position.z,std::min(top,burst.z));
    reading.range=Distance(burst,{s.position.x,s.position.y,z});
    const float w=ground?charge:charge*k.airBurst;const KbBlast kb=KingeryBulmash(w,reading.range);
    reading.scaled=kb.scaled;reading.raw=kb.pressure;
    reading.shielded=BurstShielded(map,burst,s);reading.room=SameRoom(map,burst,s.position);
    // Cover: pressure and impulses x coverFactor. The room: pressure x roomFactor and the positive phase x roomDuration
    // (the walls' reflections; Jordan's rulings), the impulses as in the open.
    const float cover=reading.shielded?k.coverFactor:1.f,pressureFactor=cover*(reading.room?k.roomFactor:1.f),durationFactor=reading.room?k.roomDuration:1.f;
    reading.kpa=kb.pressure*pressureFactor;
    reading.duration=kb.duration*durationFactor;
    reading.impulse=kb.impulse*cover;reading.reflectedImpulse=kb.reflectedImpulse*cover;
    reading.wall=WallBehind(k,map,burst,s);
    reading.psi=EquivalentPressure(k,reading.kpa,s.stance,reading.wall);
    reading.probit=BlastProbit(k,w,reading.range,s.stance,pressureFactor,durationFactor,reading.wall);   // closer is never safer
    reading.survival=NormalCdf(reading.probit-5);
    reading.eardrum=EardrumRupture(k,reading.kpa);
    // The push: the net impulse on the area he presents to the burst, J = A (i_r - i) (kPa ms = Pa s, so N s), along the
    // line from the burst to his centre of mass; dv = J / knockMass.
    const Vec3 line=s.position+Vec3{0,0,CentreOfMass(k,s.stance)}-burst;const float length=Length(line);
    const float dv=FacingArea(k,s.stance)*std::max(0.f,reading.reflectedImpulse-reading.impulse)/std::max(1e-3f,k.knockMass);
    reading.push=length>1e-4f?line*(dv/length):Vec3{0,0,dv};
    return reading;
}
// ---- The calibration's model of the fragments ------------------------------------------------------------------------
namespace {
// The chance that one potential fragment (of N0) strikes a man at horizontal distance `range` from a grenade lying on open
// ground and penetrates, by the energy it strikes with: (weight, energy) samples. Straight lines from the burst
// (burstHeight up) to the bullets' body, the vertical cylinder of radius 0.4 m and his stance's height (at 20 m gravity
// drops a fragment about a centimetre); directions uniform over the sphere (dOmega / 4 pi); masses Mott's (s = ln(1/u) is
// exponential, m = mu s^2; dust not flown); speed v0 (Gurney) and drag, E = m v0^2 exp(-2 d / lambda) / 2 at the distance d
// it meets him; below the stop energy it stopped before; the skin's threshold on E/A.
struct HitSample { double weight, energy; };
std::vector<HitSample> FragmentHits(const GrenadeTuning& k,GrenadeType type,float range,Stance stance){
    std::vector<HitSample> hits;
    const double body=.4,height=BodyHeight(stance),lift=k.burstHeight,R=range,mu=MottMu(k,type),v0=FragmentSpeed(k,type);
    if(R<=body||mu<=0)return hits;
    const double sMin=std::sqrt(std::max(0.,double(k.dustMass)/mu)),alpha=std::asin(body/R);
    constexpr int Azimuths=48,Elevations=48,Masses=280;constexpr double Span=16;
    const double pi=3.141592653589793;
    for(int i=0;i<Azimuths;++i){
        const double phi=-alpha+(i+.5)*2*alpha/Azimuths,sine=std::sin(phi);
        const double rho=R*std::cos(phi)-std::sqrt(std::max(0.,body*body-R*R*sine*sine));   // to his surface, horizontally
        const double low=std::atan(-lift/rho),high=std::atan((height-lift)/rho);
        for(int j=0;j<Elevations;++j){
            const double theta=low+(j+.5)*(high-low)/Elevations,d=rho/std::cos(theta);
            const double direction=std::cos(theta)*((high-low)/Elevations)*(2*alpha/Azimuths)/(4*pi);
            for(int n=0;n<Masses;++n){
                const double sv=sMin+(n+.5)*Span/Masses,mass=mu*sv*sv;
                const double energy=.5*mass*v0*v0*std::exp(-2*d/(double(k.dragScale)*std::cbrt(mass)));
                if(energy<k.fragmentStopEnergy||!Penetrates(k,float(mass),float(energy)))continue;
                hits.push_back({direction*std::exp(-sv)*Span/Masses,energy});
            }
        }
    }
    return hits;
}
double RegionMean(const GrenadeTuning& k,Stance stance){
    float head=0,thorax=0,abdomen=0;RegionShares(k,stance,head,thorax,abdomen);
    return double(head)*k.kHead+double(thorax)*k.kThorax+double(abdomen)*k.kAbdomen+double(1-head-thorax-abdomen)*k.kLimbs;
}
// Out of action from N0 independent potential fragments, each incapacitating with the region mean k (1 - exp(-E / E_v)).
double OutOfActionChance(const std::vector<HitSample>& hits,double regionMean,int population,double woundEnergy){
    double p=0;for(const auto& h:hits)p+=h.weight*(1-std::exp(-h.energy/woundEnergy));
    return 1-std::pow(std::max(0.,1-regionMean*p),double(population));
}
}
float FragmentLethality(const GrenadeTuning& k,GrenadeType type,float range,Stance stance,float woundEnergy){
    return float(OutOfActionChance(FragmentHits(k,type,range,stance),RegionMean(k,stance),FragmentPopulation(k,type),std::max(1e-3,double(woundEnergy))));
}
float CalibrateWoundEnergy(const GrenadeTuning& k,float range,float target){
    const auto hits=FragmentHits(k,GrenadeType::Fragmentation,range,Stance::Standing);
    const double mean=RegionMean(k,Stance::Standing);const int population=FragmentPopulation(k,GrenadeType::Fragmentation);
    double low=std::log(1e-2),high=std::log(1e6);   // the chance falls as E_v grows
    for(int n=0;n<80;++n){const double mid=.5*(low+high);
        if(OutOfActionChance(hits,mean,population,std::exp(mid))>target)low=mid;else high=mid;}
    return float(std::exp(.5*(low+high)));
}

// ---- The battle -----------------------------------------------------------------------------------------------------
namespace {
bool Holding(const Soldier& s,bool defender){
    const Task t=s.assignment.task;
    return defender||t==Task::None||t==Task::Hold||t==Task::Overwatch||t==Task::BoundCover||t==Task::RearGuard||t==Task::Window;
}
Stance Down(const Config& c){return c.prone?Stance::Prone:Stance::Crouched;}
// The nearest of his friends to an aim point, as the thrower knows them: each man he saw within friendAge (and himself
// when `self`).
float NearestFriend(const GrenadeTuning& k,const Soldier& s,Vec3 aim,float time,bool self=true){
    float nearest=self?Distance(s.position,aim):1e9f;
    for(int i=0;i<UnitCount;++i){const auto& a=s.allies[i];if(i!=s.id&&a.known&&a.observedAt<=time&&time-a.observedAt<=k.friendAge)nearest=std::min(nearest,Distance(a.position,aim));}
    return nearest;
}
// A live grenade he can see this close to an aim point (his own sight; never one he cannot see).
bool SeesGrenadeNear(const GrenadeRuntime& g,const Map& map,const Soldier& s,Vec3 aim,float radius){
    const Vec3 eye=s.position+Vec3{0,0,Posture(s.stance).eye};
    for(const auto& gr:g.live){if(gr.stage==GrenadeStage::Held||Distance(gr.position,aim)>radius)continue;
        if(InVisualField(s,gr.position,SightRange(s))&&ClearLine3D(map,eye,gr.position+Vec3{0,0,.1f}))return true;}
    return false;
}
// Where he can stand to take up a grenade lying at `at`: there, if he can stand there, else the standing place within
// 0.9 of his reach of it nearest him; one he has a path to (or is at). False when there is none.
bool PickupSpot(const Map& map,const Soldier& s,const Config& c,Vec3 at,float reach,Vec3& spot){
    struct Place{Vec3 p;float distance;};std::vector<Place> places;
    if(Walkable(map,at))places.push_back({at,Flat(s.position,at)});
    for(float share:{.5f,.9f})for(int n=0;n<8;++n){const float angle=float(n)*Pi/4,radius=share*reach;const Vec3 q=at+Vec3{radius*std::cos(angle),radius*std::sin(angle),0};
        if(Walkable(map,q))places.push_back({q,Flat(s.position,q)});}
    std::stable_sort(places.begin(),places.end(),[](const Place& a,const Place& b){return a.distance<b.distance;});
    int tried=0;
    for(const auto& place:places){
        if(place.distance<.3f){spot=place.p;return true;}
        if(++tried>4)break;
        if(!FindPath(map,s.position,place.p,VaultClassOf(s,c)).empty()){spot=place.p;return true;}
    }
    return false;
}
// Run clear to ground beyond the grenade's reaction radius he can reach before the fuse he assumes is left (`left`), preferring a
// place the burst cannot reach; a static defender never leaves his post; else he dives where he is. Evidence into `o`.
bool ChooseEscape(GrenadeRuntime& g,const Map& map,const Soldier& s,const Config& c,const LiveGrenade& gr,float left,bool defender,Vec3& goal,std::ostringstream& o){
    const auto& k=g.k;const float danger=GrenadeDanger(k,gr.type);
    if(defender||left<=k.runMargin)return false;
    const float pace=(s.machineGun?2.55f:3.15f)*(s.health<55?.72f:1.f)*(1-s.suppression*.45f)*(c.stamina&&CanSprint(s)?SprintPace(s):1.f);
    const float budget=(left-k.runMargin)*pace;
    struct Place{Vec3 p;bool sheltered;float straight;};std::vector<Place> places;
    const Vec3 burst=gr.position+Vec3{0,0,k.burstHeight};
    Soldier probe=s;probe.stance=Down(c);
    for(const auto& cover:CoverPositions(map)){
        const float straight=Distance(s.position,cover.shelter);
        if(straight>budget||Distance(cover.shelter,gr.position)<=danger||Distance(cover.shelter,gr.position)>danger+k.runSearch)continue;
        if(std::abs(cover.shelter.z-s.position.z)>.5f)continue;
        probe.position=cover.shelter;places.push_back({cover.shelter,BurstShielded(map,burst,probe),straight});
    }
    const Vec3 away=FlatUnit(s.position-gr.position);
    for(int n=0;n<8;++n){const float angle=float(n)*Pi/4;const Vec3 dir{away.x*std::cos(angle)-away.y*std::sin(angle),away.x*std::sin(angle)+away.y*std::cos(angle),0};
        Vec3 p=gr.position+dir*(danger+1.f);p.z=s.position.z;
        const float straight=Distance(s.position,p);if(straight>budget||!Walkable(map,p))continue;
        probe.position=p;places.push_back({p,BurstShielded(map,burst,probe),straight});}
    std::stable_sort(places.begin(),places.end(),[](const Place& a,const Place& b){return a.sheltered!=b.sheltered?a.sheltered:a.straight<b.straight;});
    int tried=0;
    for(const auto& place:places){
        if(++tried>6)break;
        const auto path=FindPath(map,s.position,place.p,VaultClassOf(s,c));if(path.empty())continue;
        float length=0;Vec3 at=s.position;for(Vec3 q:path){length+=Distance(at,q);at=q;}
        if(length>budget)continue;
        goal=place.p;o<<",\"run_to\":"<<Json(place.p)<<",\"sheltered\":"<<place.sheltered<<",\"path\":"<<length<<",\"pace\":"<<pace;
        return true;
    }
    return false;
}
// Begins a throw: the pin out, the grenade in his hand; the lever flies `cook` seconds before the release.
void StartThrow(GrenadeRuntime& g,Soldier& s,int target,Vec3 aim,GrenadeType type,Stance stance,float arc,float time,const char* why){
    auto& m=g.men[size_t(s.id)];const auto& k=g.k;
    m.mode=GrenadeMode::Throw;m.target=target;m.aim=aim;m.type=type;m.stance=stance;m.arc=arc;m.startedAt=time;m.releaseAt=time+k.throwSeconds;m.why=why;
    LiveGrenade gr;gr.id=g.nextId++;gr.owner=gr.first=s.id;gr.team=s.team;gr.type=type;gr.stage=GrenadeStage::Held;gr.holder=s.id;
    gr.position=Hand(k,s,stance);gr.spoonAt=m.releaseAt-CookSeconds(k,s);gr.fuseAt=gr.spoonAt+Fuse(g,gr.id);gr.noticedAt.fill(-100.f);
    g.live.push_back(gr);m.grenade=gr.id;
    if(s.grenades[size_t(type)]>0)--s.grenades[size_t(type)];
    ++g.totals.throws;
}
// The throw decision's stance and arc onto `aim`: the lowest stance (prone only if he is down) that reaches and clears.
bool ChooseStance(const GrenadeRuntime& g,const Soldier& s,Vec3 aim,Stance& stance,float& arc){
    const auto& k=g.k;const float along=Flat(s.position,aim);
    for(Stance option:{Stance::Prone,Stance::Crouched,Stance::Standing}){
        if(option==Stance::Prone&&s.stance!=Stance::Prone)continue;
        const float range=ThrowRange(k,s,option);if(along>range)continue;
        const ThrowArc found=FindThrowArc(k,g.world,Hand(k,s,option),aim,range,LandingScatter(k,s,along)*k.arcMargin);
        if(found.clear){stance=option;arc=found.angle;return true;}
    }
    return false;
}
// In cover from the aim, as he can judge it from the map: solid geometry between him (down behind it: crouched, or prone
// if he is) and a burst at the aim, and at each of eight points two sigma of his own throwing scatter around it. So the
// enemy's own wall, which a short throw lands in front of, is not his cover.
bool ShieldedFromAim(const GrenadeRuntime& g,const Map& map,const Soldier& s,Vec3 aim,Stance down){
    const auto& k=g.k;
    if(!BurstShielded(map,aim+Vec3{0,0,k.burstHeight},s.position,down))return false;
    const float spread=2*LandingScatter(k,s,Flat(s.position,aim));
    for(int n=0;n<8;++n){const float angle=float(n)*Pi/4;
        const Vec3 p=DropToFloor(g.world,aim+Vec3{spread*std::cos(angle),spread*std::sin(angle),.5f});
        if(!BurstShielded(map,p+Vec3{0,0,k.burstHeight},s.position,down))return false;}
    return true;
}
// He prefers fragmentation from cover with no other friend within fragFriendRange of the target, else concussion; he throws
// the first of those he carries that is safe as he knows it. Fragmentation (Jordan, 25 Sep 2026): no friend but himself
// within fragFriendClear of the aim, and himself at least fragSelfOpen from it, or fragSelfCover when he is in cover from
// it (ShieldedFromAim). Concussion: nobody, himself included, within concDanger. Friends are where he saw them within
// friendAge; the map is his.
bool ChooseType(const GrenadeRuntime& g,const Soldier& s,const Map& map,Vec3 aim,float time,GrenadeType& type){
    const auto& k=g.k;const float self=Distance(s.position,aim),others=NearestFriend(k,s,aim,time,false);
    const Stance down=s.stance==Stance::Prone?Stance::Prone:Stance::Crouched;
    const bool inCover=ProtectedAt(map,s.position,aim,down);
    const GrenadeType prefer=inCover&&others>k.fragFriendRange?GrenadeType::Fragmentation:GrenadeType::Concussion;
    for(int attempt=0;attempt<2;++attempt){
        const GrenadeType option=attempt?OtherType(prefer):prefer;
        if(!s.grenades[size_t(option)])continue;
        const bool safe=option==GrenadeType::Fragmentation
            ?others>k.fragFriendClear+k.friendMargin&&(self>=k.fragSelfOpen||(self>=k.fragSelfCover&&ShieldedFromAim(g,map,s,aim,down)))
            :std::min(self,others)>k.concDanger+k.friendMargin;
        if(!safe)continue;
        type=option;return true;
    }
    return false;
}
void Release(GrenadeRuntime& g,LiveGrenade& gr,const Soldier& s,Vec3 release,Vec3 aim,float arc,float time){
    const auto& k=g.k;
    const float sigma=LandingScatter(k,s,Flat(release,aim));
    const float u1=std::max(1e-6f,GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(gr.throws),SaltScatterX)),u2=GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(gr.throws),SaltScatterY);
    const float radius=std::sqrt(-2*std::log(u1))*sigma,angle=2*Pi*u2;
    const Vec3 landingAim=aim+Vec3{radius*std::cos(angle),radius*std::sin(angle),0};
    Vec3 velocity;float flight=0;
    if(!ArcVelocity(release,landingAim,arc,velocity,flight)&&!ArcVelocity(release,landingAim,k.arcFirst,velocity,flight)){
        const Vec3 heading=FlatUnit(landingAim-release);velocity=heading*2.f+Vec3{0,0,1.f};} // a toss at his feet
    const float roll=GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(gr.throws),SaltRoll)*RollMax(k,gr.type);
    const GrenadeLanding landing=SimulateLanding(g.world,release,velocity,roll);
    gr.stage=GrenadeStage::Flying;gr.holder=-1;gr.from=release;gr.launch=velocity;gr.velocity=velocity;gr.position=release;
    gr.releasedAt=time;gr.landedAt=time+landing.time;gr.rest=landing.position;gr.ground=false;gr.contact=landing.contact;++gr.throws;
    if(landing.contact==GrenadeContact::Wall||landing.contact==GrenadeContact::Roof)++g.totals.bounced;
    if(Flat(landing.position,release)<=GrenadeDanger(k,gr.type))++g.totals.short_;
    if(!gr.spoon){gr.spoon=true;gr.spoonAt=std::min(gr.spoonAt,time);}
    gr.noticedAt.fill(-100.f);
}
void EndCloseIn(GrenadeRuntime& g,Frame& f,int squad,float time,Diagnostics* d,const char* why){
    auto& ci=g.closeIns[size_t(squad)];if(!ci.active)return;
    for(int id:ci.members){if(id<0)continue;auto& m=g.men[size_t(id)];if(m.closeIn!=squad)continue;
        m.closeIn=-1;f.soldiers[size_t(id)].grenadeRush=false;
        if(m.mode==GrenadeMode::CloseIn){m.mode=GrenadeMode::None;m.justReleased=true;}}
    ci.active=false;ci.nextCheck=time+g.k.closeInRetry;
    if(ci.leader>=0){std::ostringstream o;o<<std::setprecision(6)<<",\"close_in\":"<<ci.serial<<",\"enemy\":"<<ci.enemy<<",\"close_in_phase\":"<<int(ci.phase)<<",\"seconds\":"<<(time-ci.startedAt);
        Row(d,f,f.soldiers[size_t(ci.leader)],time,"grenade_close_in",why,o.str());}
}
// Out of action (health 0): killed outright (a death by the blast itself, Bowen's), else wounded with woundedShare and
// killed otherwise (the bullet rule's split).
void OutOfAction(GrenadeRuntime& g,Frame& f,Record& r,Soldier& v,int explosion,int owner,int team,float when,bool blast,const std::function<void(int)>& downed,bool killed=false){
    v.health=0;
    v.action=!killed&&GrenadeDraw(g.seed,uint32_t(explosion),uint32_t(v.id),SaltCasualty)<g.k.woundedShare?Action::Wounded:Action::Killed;
    v.reason=Reason::Down;v.aim=0;v.aimTarget=-1;v.movingFire=false;v.sprinting=false;v.grenadeRush=false;
    for(auto& contact:v.contacts)contact.visible=false;
    r.events.push_back({when,EventKind::Casualty,v.id,owner,std::string(Name(v.id))+(v.action==Action::Killed?" killed in action":" incapacitated")+(blast?" (grenade blast)":" (grenade fragment)")});
    if(blast)++g.totals.blastCasualties;else ++g.totals.fragmentCasualties;
    if(v.team==team)++g.totals.friendlyCasualties;
    auto& m=g.men[size_t(v.id)];
    if(m.closeIn>=0)EndCloseIn(g,f,m.closeIn,when,nullptr,"member_down");
    m.mode=GrenadeMode::None;m.holding=false;
    downed(v.id);
}
void WriteTally(GrenadeRuntime& g,ExplosionTally& t,const Frame& f,Diagnostics* d){
    t.written=true;
    if(!d||!d->options.enabled)return;
    for(const auto& s:f.soldiers){const size_t i=size_t(s.id);
        if(t.kpa[i]<g.k.frightKpa&&t.hits[i]==0&&!(t.flags[i]&24))continue;
        std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<t.id<<",\"owner\":"<<t.owner<<",\"owner_team\":"<<t.team<<",\"type\":\""<<GrenadeTypeName(t.type)
            <<"\",\"friendly\":"<<(s.team==t.team)<<",\"range\":"<<t.range[i]<<",\"kpa\":"<<t.kpa[i]<<",\"shielded\":"<<((t.flags[i]&1)!=0)<<",\"room\":"<<((t.flags[i]&2)!=0)
            <<",\"stun_seconds\":"<<t.stun[i]<<",\"deafened\":"<<((t.flags[i]&4)!=0)<<",\"fragment_hits\":"<<t.hits[i]<<",\"fragment_damage\":"<<t.damage[i]
            <<",\"out_by\":\""<<((t.flags[i]&8)?"blast":(t.flags[i]&16)?"fragment":"none")<<"\",\"burst\":"<<Json(t.burst)
            <<",\"duration_ms\":"<<t.duration[i]<<",\"psi\":"<<t.psi[i]<<",\"wall\":"<<((t.flags[i]&64)!=0)<<",\"survival\":"<<t.survival[i]<<",\"lung_injury\":"<<t.lung[i]
            <<",\"eardrum_ruptured\":"<<((t.flags[i]&32)!=0)<<",\"push\":"<<t.push[i]<<",\"lift\":"<<t.lift[i]<<",\"knocked\":"<<t.knock[i]
            <<",\"knocked_down\":"<<((t.flags[i]&128)!=0)<<",\"impact_injury\":"<<t.impact[i]<<",\"fragments_penetrating\":"<<t.penetrating[i]
            <<",\"incapacitated_region\":"<<t.region[i];
        TraceCoverSupply(d,s,f.command[size_t(s.squad)],t.time,"grenade_effect",(t.flags[i]&24)?"out_of_action":t.hits[i]?"hit":t.stun[i]>0?"stunned":"blast",o.str());
    }
}
// Knockback (tertiary blast): his push along the burst-to-centre line. He leaves the ground when it lifts him faster than
// `airborne`, flies until his feet are back on his floor, then slides to rest; the first point along the line where he
// could not stand (Walkable, every KnockStep) stops him short, and an obstacle there met faster than impactSpeed is
// tertiary injury, impactInjury (v - impactSpeed)^2 health, taken at the burst (the motion that leads to it is shown over
// the next ticks: GrenadeTickStart moves him). A horizontal push above his stance's limit knocks him down (to the ground
// until knockRise after he stops): that ends what a grenade had him doing, as a stun does (a grenade in his hand falls at
// his feet); a lesser push only holds him while it moves him. A man in the middle of a vault is held by it (assumption).
void Knock(GrenadeRuntime& g,Frame& f,Soldier& s,const Map& map,const BlastReading& b,float when,ExplosionTally& t,Diagnostics* d){
    const auto& k=g.k;const size_t i=size_t(s.id);
    if(s.vaulting||Length(b.push)<k.knockMinimum)return;
    auto& m=g.men[i];
    // Pushed downward (a burst above his centre), the ground takes the downward part.
    const float speed=std::sqrt(b.push.x*b.push.x+b.push.y*b.push.y),up=std::max(0.f,b.push.z);
    const KnockPath path=KnockTravel(k,speed,up);
    m.knocking=true;m.knockFrom=s.position;m.knockDir=speed>1e-5f?Vec3{b.push.x/speed,b.push.y/speed,0}:Vec3{};
    m.knockStart=when;m.knockSpeed=speed;m.knockAir=path.air;m.knockUp=path.air>0?up:0.f;
    float reach=path.distance;bool struck=false;
    if(path.distance>0){
        if(!Walkable(map,s.position))reach=0;   // already where he could not stand: he stays (assumption)
        else{const int steps=int(std::ceil(path.distance/KnockStep));
            for(int n=1;n<=steps;++n){const Vec3 p=s.position+m.knockDir*std::min(path.distance,float(n)*KnockStep);
                if(Walkable(map,p))continue;
                reach=float(n-1)*KnockStep;
                std::vector<size_t> near;CollectObstacles(map,p,p,.48f,p.z+.02f,p.z+1.84f,near);
                for(size_t o:near)struck=struck||map.obstacles[o].blocksMovement;   // else the floor's end or the map's: he stops
                break;}}
    }
    m.knockReach=reach;
    const float moving=reach<path.distance?KnockWhen(k,speed,path.air,reach):path.seconds;
    float at=speed;KnockAlong(k,speed,path.air,moving,&at);
    m.knockEnd=when+moving;
    const float limit=s.stance==Stance::Standing?k.knockStanding:s.stance==Stance::Crouched?k.knockCrouched:1e9f;
    m.knockDown=speed>limit;m.riseAt=m.knockDown?m.knockEnd+k.knockRise:-100.f;
    ++g.totals.knockbacks;t.push[i]=speed;t.lift[i]=m.knockUp;t.knock[i]=reach;
    if(m.knockDown){
        ++g.totals.knockdowns;t.flags[i]|=128;
        if(m.closeIn>=0)EndCloseIn(g,f,m.closeIn,when,d,"member_knocked_down");
        m.mode=GrenadeMode::None;m.holding=false;s.grenadeRush=false;
    }
    if(struck&&at>k.impactSpeed&&s.Active()){
        const float injury=k.impactInjury*(at-k.impactSpeed)*(at-k.impactSpeed);
        s.health=std::max(0.f,s.health-injury);t.impact[i]=injury;++g.totals.knockImpacts;
    }
}
void Explode(GrenadeRuntime& g,LiveGrenade& gr,Frame& f,Record& r,const Map& map,float when,const std::function<void(int)>& downed,Diagnostics* d){
    const auto& k=g.k;
    Vec3 base=gr.position;
    if(gr.stage==GrenadeStage::Held&&gr.holder>=0)base=Hand(k,f.soldiers[size_t(gr.holder)],g.men[size_t(gr.holder)].stance);
    const bool ground=gr.stage==GrenadeStage::Resting;
    const Vec3 burst=ground?base+Vec3{0,0,k.burstHeight}:base;
    ExplosionTally t;t.id=gr.id;t.owner=gr.owner;t.team=gr.team;t.type=gr.type;t.time=when;t.burst=burst;t.region.fill(-1);
    const float charge=GrenadeCharge(k,gr.type);
    for(auto& s:f.soldiers){
        if(!s.Active()||Distance(burst,s.position)>k.blastReach)continue;
        const size_t i=size_t(s.id);const BlastReading b=BlastOn(k,map,burst,charge,ground,s);
        t.range[i]=b.range;t.kpa[i]=b.kpa;t.duration[i]=b.duration;t.psi[i]=b.psi;t.survival[i]=b.survival;
        t.flags[i]=uint16_t((b.shielded?1:0)|(b.room?2:0)|(b.wall?64:0));
        // Fright (from frightKpa: + min(1, dP / frightScaleKpa)), eardrums (Hirsch: a rupture deafens him for the battle;
        // else deafened deafSeconds from deafKpa) and the stun, all from the overpressure he takes.
        if(b.kpa>=k.frightKpa)s.suppression=std::min(1.f,s.suppression+std::min(1.f,b.kpa/std::max(1e-3f,k.frightScaleKpa)));
        if(b.eardrum>0&&GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(s.id),SaltEardrum)<b.eardrum){
            s.deafUntil=Forever;t.flags[i]|=4|32;++g.totals.eardrums;++g.totals.deafened;}
        else if(b.kpa>=k.deafKpa){s.deafUntil=std::max(s.deafUntil,when+k.deafSeconds);t.flags[i]|=4;++g.totals.deafened;}
        const float stun=StunSeconds(k,s,b.kpa);
        if(stun>0){s.stunUntil=std::max(s.stunUntil,when+stun);t.stun[i]=stun;++g.totals.stuns;}
        // Primary blast (Bowen): he dies with 1 - survival (killed outright); a survivor below lungInjuryProbit (99%
        // survival) takes lungInjuryHealth (Zl - Z) / (Zl - 5) of lung injury, clamped to 0..lungInjuryHealth.
        bool killed=false;
        if(b.survival<1&&GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(s.id),SaltLung)>=b.survival){killed=true;s.health=0;++g.totals.blastDeaths;}
        else if(b.probit<k.lungInjuryProbit){
            const float lung=k.lungInjuryHealth*std::min(1.f,std::max(0.f,(k.lungInjuryProbit-b.probit)/std::max(1e-3f,k.lungInjuryProbit-5)));
            s.health=std::max(0.f,s.health-lung);t.lung[i]=lung;++g.totals.blastInjuries;
        }
        Knock(g,f,s,map,b,when,t,d);
        if(!s.Active()){t.flags[i]|=8;OutOfAction(g,f,r,s,gr.id,gr.owner,gr.team,when,true,downed,killed);}
    }
    // Fragments: Mott's population of the casing, each potential fragment's mass and direction by its own draws; dust is
    // not flown.
    const int population=FragmentPopulation(k,gr.type);const float speed=FragmentSpeed(k,gr.type);int count=0;
    for(int n=0;n<population;++n){
        const float mass=MottMass(k,gr.type,GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(n),SaltMass));
        if(mass<k.dustMass)continue;
        const float z=2*GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(n),SaltDirectionZ)-1,phi=2*Pi*GrenadeDraw(g.seed,uint32_t(gr.id),uint32_t(n),SaltDirectionPhi);
        const float across=std::sqrt(std::max(0.f,1-z*z));
        Fragment fr;fr.p=burst;fr.velocity=Vec3{across*std::cos(phi),across*std::sin(phi),z}*speed;
        fr.mass=mass;fr.dragK=FragmentDragK(k,mass);
        fr.born=fr.time=when;fr.explosion=gr.id;fr.index=n;g.fragments.push_back(fr);++count;
    }
    t.flying=count;g.tallies.push_back(t);
    r.explosions.push_back({gr.id,gr.owner,gr.team,gr.type,when,burst,count,ground});
    std::ostringstream text;text<<std::fixed<<std::setprecision(1)<<GrenadeTypeName(gr.type)<<" grenade of "<<(gr.owner>=0?Name(gr.owner):"nobody")<<" explodes at "<<burst.x<<", "<<burst.y;
    r.events.push_back({when,EventKind::Explosion,gr.owner,-1,text.str()});
    ++g.totals.explosions;g.totals.fragmentsFlown+=count;
    if(count==0){auto* last=FindTally(g,gr.id);if(last)WriteTally(g,*last,f,d);}
}
// One fragment through one substep (and on from a body it passes through); false once it has stopped.
bool StepFragment(GrenadeRuntime& g,Fragment& fr,Frame& f,Record& r,const Map& map,const Config& c,int tick,int sub,const std::array<Vec3,UnitCount>& before,const std::function<void(int)>& downed){
    constexpr int Substeps=10;constexpr float Step=TickSeconds/Substeps;
    const auto& k=g.k;
    const float until=std::min(f.time,float(tick-1)*TickSeconds+float(sub+1)*Step);
    float segBegin=float(sub)/Substeps;
    for(;;){
        const float start=fr.time,dt=std::max(0.f,until-start);
        if(dt<=0)return true;
        const Vec3 next=BallisticPosition(fr.p,fr.velocity,dt);
        float first=1;int hit=-1;bool stopped=false;
        const float terrain=MapContact(map,fr.p,next);
        if(terrain>=0&&terrain<=first){first=terrain;stopped=true;}
        if(next.z<=map.groundBase){const float t=(fr.p.z-map.groundBase)/std::max(1e-6f,fr.p.z-next.z);if(t<=first){first=std::max(0.f,t);stopped=true;}}
        for(size_t idx:g.world.floors){const auto& surface=map.surfaces[idx];
            const float f0=fr.p.z-SurfaceHeight(surface,fr.p),f1=next.z-SurfaceHeight(surface,next);
            if((f0>=0)!=(f1>=0)){const float t=f0/(f0-f1);if(t<first&&InsideSurface(surface,fr.p+(next-fr.p)*t)){first=t;stopped=true;}}}
        const float loX=std::min(fr.p.x,next.x)-.45f,hiX=std::max(fr.p.x,next.x)+.45f,loY=std::min(fr.p.y,next.y)-.45f,hiY=std::max(fr.p.y,next.y)+.45f;
        const float fraction=float(sub+1)/Substeps;
        for(const auto& s:f.soldiers){
            if(!s.Active()||((fr.struck>>s.id)&1ull))continue;
            const Vec3 b0=before[size_t(s.id)],delta=s.position-b0,from=b0+delta*segBegin,to=b0+delta*fraction;
            if(std::max(from.x,to.x)<loX||std::min(from.x,to.x)>hiX||std::max(from.y,to.y)<loY||std::min(from.y,to.y)>hiY)continue;
            const float t=SegmentSoldier(fr.p,next,from,to,BodyHeight(s.stance));
            if(t>=0&&t<first){first=t;hit=s.id;}
        }
        const Vec3 end=fr.p+(next-fr.p)*first;const float endTime=std::min(f.time,start+dt*first);
        // Near misses (GrenadeTuning::fragmentNearMiss; 0, the default, adds none and tests nothing): the bullets' rule, a
        // fragment within 2.2 m of a man with solid-clear air between, once per man, whichever side he is on.
        if(k.fragmentNearMiss>0)for(auto& s:f.soldiers){
            if(!s.Active()||((fr.frightened>>s.id)&1ull))continue;
            const Vec3 chest=s.position+Vec3{0,0,BodyHeight(s.stance)*.7f};
            if(SegmentDistance3(fr.p,end,chest)<2.2f&&ClearLine3DSolid(map,end,chest)){
                s.suppression=std::min(1.f,s.suppression+k.fragmentNearMiss/StatScale(s.stats.Get(Stat::Composure)));fr.frightened|=uint64_t(1)<<s.id;
                if(c.stackedSuppression)s.lastNearMissAt=f.time;}
        }
        if(hit>=0){
            auto& v=f.soldiers[size_t(hit)];
            Vec3 velocity=fr.velocity;velocity.z-=Gravity*dt*first;velocity=velocity*std::exp(-fr.dragK*Distance(fr.p,end));
            const float energy=.5f*fr.mass*DotOf(velocity,velocity),remainder=energy-DepositedEnergy(energy);
            const uint32_t draw=uint32_t(fr.index)*uint32_t(UnitCount)+uint32_t(hit);
            const float damage=HitDamage(energy,HitSeverity(GrenadeDraw(g.seed,uint32_t(fr.explosion),draw,SaltSeverity)));
            v.health=std::max(0.f,v.health-damage);
            // The wound model (revision 2, fragments only: bullets keep HitDamage alone). A hit whose energy per presented
            // area reaches the skin's threshold penetrates; it strikes a region drawn by his stance's presented-area shares
            // and incapacitates (out of action) with k_region (1 - exp(-E / woundEnergy)), E at impact.
            const bool through=Penetrates(k,fr.mass,energy);bool incapacitated=false;int region=-1;
            if(through){
                region=FragmentRegion(k,v.stance,GrenadeDraw(g.seed,uint32_t(fr.explosion),draw,SaltRegion));
                const float chance=RegionK(k,region)*(1-std::exp(-energy/std::max(1e-3f,k.woundEnergy)));
                incapacitated=GrenadeDraw(g.seed,uint32_t(fr.explosion),draw,SaltIncapacitate)<chance;
                ++g.totals.penetrating;if(incapacitated)++g.totals.incapacitating;
            }
            v.suppression=std::min(1.f,v.suppression+k.fragmentHitSuppression/StatScale(v.stats.Get(Stat::Composure)));
            if(c.stackedSuppression)v.lastNearMissAt=f.time;
            fr.struck|=uint64_t(1)<<hit;++g.totals.fragmentHits;
            auto* tally=FindTally(g,fr.explosion);
            if(tally){++tally->hits[size_t(hit)];tally->damage[size_t(hit)]+=damage;tally->penetrating[size_t(hit)]+=through?1:0;
                if(incapacitated&&tally->region[size_t(hit)]<0)tally->region[size_t(hit)]=region;}
            if(incapacitated)v.health=0;
            const int owner=tally?tally->owner:-1,team=tally?tally->team:-1;
            r.events.push_back({endTime,EventKind::Hit,owner,hit,std::string(owner>=0?Name(owner):"A grenade")+" hit "+Name(hit)+" (grenade fragment)"});
            if(!v.Active()){if(tally)tally->flags[size_t(hit)]|=16;OutOfAction(g,f,r,v,fr.explosion,owner,team,endTime,false,downed);}
            if(remainder>0){
                fr.p=end;fr.velocity=velocity*(std::sqrt(2*remainder/fr.mass)/std::max(1e-6f,Length(velocity)));fr.time=endTime;
                segBegin+=(fraction-segBegin)*first;continue;
            }
            return false;
        }
        if(stopped)return false;
        const float travelled=Distance(fr.p,next);fr.p=next;fr.velocity=fr.velocity*std::exp(-fr.dragK*travelled);fr.velocity.z-=Gravity*dt;fr.time=until;
        if(.5f*fr.mass*DotOf(fr.velocity,fr.velocity)<k.fragmentStopEnergy||fr.time-fr.born>=k.fragmentSeconds||
           std::abs(fr.p.x)>map.halfWidth+3||std::abs(fr.p.y)>map.halfHeight+3)return false;
        return true;
    }
}
}

void IssueGrenades(GrenadeRuntime& g,const Config& c,const Map& map,Frame& f,Record& r){
    g.k=c.grenade;g.seed=c.seed;g.world=MakeGrenadeWorld(map);
    for(auto& s:f.soldiers){
        if(!Grenades(c,s.team))continue;
        s.grenades=GrenadeKit(c,c.equalTroops?s.id%TeamSize:s.id,s.machineGun);
        g.totals.issued+=s.grenades[0]+s.grenades[1];
    }
    r.grenadeTotals=g.totals;
}
void GrenadeTickStart(GrenadeRuntime& g,Frame& f,float time){
    for(auto& s:f.soldiers){
        const bool stunned=s.Active()&&time<s.stunUntil;
        // A stun that has run out leaves him pinned (suppression 1), to decay as any suppression does.
        if(s.stunned&&!stunned&&s.Active())s.suppression=1;
        s.stunned=stunned;s.deafened=s.Active()&&time<s.deafUntil;s.reactionScale=s.deafened?g.k.deafReaction:1.f;
        // A man thrown by a blast (the living and the body of one it killed) moves along his push line to where it ends;
        // his feet keep to his floor and knockHeight is how high he is in the air.
        auto& m=g.men[size_t(s.id)];
        if(m.knocking){
            const float tau=std::max(0.f,time-m.knockStart);
            s.position=m.knockFrom+m.knockDir*std::min(m.knockReach,KnockAlong(g.k,m.knockSpeed,m.knockAir,tau));
            s.knockHeight=tau<m.knockAir&&time<m.knockEnd?std::max(0.f,m.knockUp*tau-.5f*Gravity*tau*tau):0.f;
            if(time>=m.knockEnd){m.knocking=false;s.knockHeight=0;}
        }
        m.knocked=s.Active()&&(m.knocking||time<m.riseAt);
    }
}

GrenadeOrder GrenadeOverride(GrenadeRuntime& g,Frame& f,Soldier& s,const Map& map,const Config& c,float time,Diagnostics* d,bool defender){
    GrenadeOrder out;auto& m=g.men[size_t(s.id)];const auto& k=g.k;
    auto hold=[&](Vec3 goal,Action action,Reason reason,Stance stance,bool direct){out.hold=true;out.direct=direct;out.order=Order{goal,action,reason,stance};return out;};
    if(s.stunned){
        if(m.closeIn>=0)EndCloseIn(g,f,m.closeIn,time,d,"member_stunned");
        if(m.mode!=GrenadeMode::None){m.mode=GrenadeMode::None;m.holding=false;}
        m.stunHeld=true;s.grenadeRush=false;
        return hold(s.position,Action::Hold,Reason::Stunned,Down(c),false);
    }
    // Knockback: he cannot act while the blast moves him, nor while he is down from it (a knock-down ended what a grenade
    // had him doing; a lesser push only pauses it).
    if(m.knocked){m.knockHeld=true;return hold(s.position,Action::Hold,Reason::Knocked,m.knockDown?Down(c):s.stance,false);}
    if(m.stunHeld){m.stunHeld=false;out.released=true;}
    if(m.knockHeld){m.knockHeld=false;out.released=true;}
    if(m.justReleased){m.justReleased=false;out.released=true;}
    if(m.mode==GrenadeMode::None&&m.closeIn>=0){
        const auto& ci=g.closeIns[size_t(m.closeIn)];const size_t idx=ci.members[0]==s.id?0:1;
        if(!ci.active)m.closeIn=-1;
        else if(time>=ci.arrives[idx])m.mode=GrenadeMode::CloseIn;
    }
    switch(m.mode){
    case GrenadeMode::None:return out;
    case GrenadeMode::Throw:return hold(s.position,Action::Hold,Reason::GrenadeThrow,m.stance,false);
    case GrenadeMode::React:{
        if(time<m.reactAt)return out;
        LiveGrenade* gr=FindLive(g,m.grenade);
        if(!gr||gr->stage!=GrenadeStage::Resting){m.mode=GrenadeMode::None;out.released=true;return out;}
        const float distance=Distance(s.position,gr->position);
        // The fuse as he can know it: he saw it at rest `noticed` and assumes assumedFuse was left then.
        const float left=k.assumedFuse-(time-m.noticed);
        const bool steady=s.suppression<DuckThreshold(c,s.team);
        const bool inTime=left>=distance/std::max(.1f,k.throwBackSpeed)+k.throwBackMargin;
        Vec3 spot=gr->position;
        const bool reach=distance<=k.throwBackReach&&std::abs(gr->position.z-s.position.z)<1.2f&&PickupSpot(map,s,c,gr->position,k.pickupReach,spot);
        std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<gr->id<<",\"owner\":"<<gr->owner<<",\"type\":\""<<GrenadeTypeName(gr->type)<<"\",\"distance\":"<<distance
            <<",\"assumed_left\":"<<left<<",\"reach\":"<<reach<<",\"steady\":"<<steady<<",\"in_time\":"<<inTime<<",\"own_suppression\":"<<s.suppression;
        if(reach&&steady&&inTime){
            const float p=ThrowBackChance(k,s),u=ThrowBackDraw(g.seed,gr->id,s.id,gr->throws);
            m.mode=GrenadeMode::ThrowBack;m.success=u<p;m.holding=false;m.goal=spot;++g.totals.throwBackAttempts;
            m.until=time+distance/std::max(.1f,k.throwBackSpeed)+k.throwBackMargin;   // by his reckoning he has it by then
            o<<",\"chance\":"<<p<<",\"draw\":"<<u<<",\"success\":"<<m.success<<",\"pickup_at\":"<<Json(spot);
            Row(d,f,s,time,"grenade_reaction","throw_back",o.str());
            return hold(spot,Action::Cover,Reason::GrenadeThrowBack,Stance::Standing,true);
        }
        Vec3 goal;
        if(ChooseEscape(g,map,s,c,*gr,left,defender,goal,o)){
            m.mode=GrenadeMode::Run;m.goal=goal;++g.totals.runs;Row(d,f,s,time,"grenade_reaction","run",o.str());
            return hold(m.goal,Action::Cover,Reason::GrenadeEscape,Stance::Standing,true);
        }
        m.mode=GrenadeMode::Dive;++g.totals.dives;
        Row(d,f,s,time,"grenade_reaction","dive",o.str());
        return hold(s.position,Action::Hold,Reason::GrenadeDive,Down(c),false);
    }
    case GrenadeMode::ThrowBack:{
        LiveGrenade* gr=FindLive(g,m.grenade);
        if(m.holding){
            if(gr&&gr->stage==GrenadeStage::Held&&gr->holder==s.id)return hold(s.position,Action::Hold,Reason::GrenadeThrowBack,Stance::Crouched,false);
            m.mode=GrenadeMode::None;m.holding=false;out.released=true;return out;
        }
        if(!gr){m.mode=GrenadeMode::None;out.released=true;return out;}
        // Taken by another, or not reached when he reckoned to have it: he gives it up, runs clear if he still can, else dives.
        if(gr->stage!=GrenadeStage::Resting||time>m.until){
            std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<gr->id<<",\"gave_up\":1";Vec3 goal;
            if(gr->stage==GrenadeStage::Resting&&ChooseEscape(g,map,s,c,*gr,k.assumedFuse-(time-m.noticed),defender,goal,o)){
                m.mode=GrenadeMode::Run;m.goal=goal;++g.totals.runs;Row(d,f,s,time,"grenade_reaction","run",o.str());
                return hold(m.goal,Action::Cover,Reason::GrenadeEscape,Stance::Standing,true);
            }
            m.mode=GrenadeMode::Dive;++g.totals.dives;Row(d,f,s,time,"grenade_reaction","dive",o.str());
            return hold(s.position,Action::Hold,Reason::GrenadeDive,Down(c),false);
        }
        return hold(m.goal,Action::Cover,Reason::GrenadeThrowBack,Stance::Standing,true);
    }
    case GrenadeMode::Fumble:
        if(time<m.until)return hold(s.position,Action::Hold,Reason::GrenadeThrowBack,Stance::Crouched,false);
        m.mode=GrenadeMode::Dive;
        return hold(s.position,Action::Hold,Reason::GrenadeDive,Down(c),false);
    case GrenadeMode::Run:{
        const LiveGrenade* gr=FindLive(g,m.grenade);
        if(!gr){m.mode=GrenadeMode::None;out.released=true;return out;}
        if(Flat(s.position,m.goal)<.8f){m.mode=GrenadeMode::Dive;return hold(s.position,Action::Hold,Reason::GrenadeDive,Down(c),false);}
        return hold(m.goal,Action::Cover,Reason::GrenadeEscape,Stance::Standing,true);
    }
    case GrenadeMode::Dive:{
        const LiveGrenade* gr=FindLive(g,m.grenade);
        const bool near=gr&&(gr->stage!=GrenadeStage::Flying||Distance(gr->position,s.position)<=GrenadeDanger(k,gr->type)+2);
        if(!near){m.mode=GrenadeMode::None;out.released=true;return out;}
        return hold(s.position,Action::Hold,Reason::GrenadeDive,Down(c),false);
    }
    case GrenadeMode::CloseIn:{
        auto& ci=g.closeIns[size_t(m.closeIn)];const size_t idx=ci.members[0]==s.id?0:1;const size_t other=1-idx;
        const int partner=ci.members[other];
        const bool partnerUp=partner>=0&&f.soldiers[size_t(partner)].Active()&&g.men[size_t(partner)].closeIn==m.closeIn;
        // Break off: he knows the enemy has fired again since the close-in began.
        const float fired=std::max(s.contacts[size_t(ci.enemy)].lastFireAt,s.reports[size_t(ci.enemy)].lastFireAt);
        if(fired>ci.startedAt+.5f){++g.totals.closeInBreaks;EndCloseIn(g,f,m.closeIn,time,d,"enemy_fired");m.justReleased=false;out.released=true;return out;}
        // The enemy's place as he knows it now: his own track or report when fresher than the order's.
        Vec3 place=ci.place;
        {const Contact& own=s.contacts[size_t(ci.enemy)];const Contact& heard=s.reports[size_t(ci.enemy)];
         const Contact& best=own.observedAt>=heard.observedAt?own:heard;if(best.known&&best.observedAt>ci.startedAt)place=best.position;}
        if(ci.thrower!=int(idx)&&!f.soldiers[size_t(ci.members[size_t(ci.thrower)])].Active())ci.thrower=int(idx);
        auto throwNow=[&](){
            GrenadeType type=GrenadeType::Fragmentation;Stance stance=Stance::Crouched;float arc=k.arcFirst;
            if(!ChooseType(g,s,map,place,time,type)||!ChooseStance(g,s,place,stance,arc))return false;
            StartThrow(g,s,ci.enemy,place,type,stance,arc,time,"close_in");ci.threw[idx]=true;ci.grenade=m.grenade;++g.totals.closeInThrows;
            std::ostringstream o;o<<std::setprecision(6)<<",\"close_in\":"<<ci.serial<<",\"enemy\":"<<ci.enemy<<",\"type\":\""<<GrenadeTypeName(type)<<"\",\"throw_stance\":"<<int(stance)
                <<",\"arc\":"<<arc<<",\"distance\":"<<Flat(s.position,place)<<",\"aim_at\":"<<Json(place);
            Row(d,f,s,time,"grenade_throw","close_in",o.str());
            return true;
        };
        switch(ci.phase){
        case CloseInPhase::Ordered:ci.phase=CloseInPhase::Approach;ci.phaseAt=time;[[fallthrough]];
        case CloseInPhase::Approach:{
            const Vec3 spot=idx==0?ci.spot:ci.spot2;
            if(Flat(s.position,spot)>1.5f){m.arrived=false;return hold(spot,Action::Advance,Reason::CloseIn,Stance::Standing,false);}
            if(!m.arrived){m.arrived=true;m.until=time;}
            const bool partnerThere=!partnerUp||g.men[size_t(partner)].arrived;
            if(int(idx)==ci.thrower&&(partnerThere||time-m.until>k.partnerWait)){
                if(throwNow()){ci.phase=CloseInPhase::Throw;ci.phaseAt=time;return hold(s.position,Action::Hold,Reason::GrenadeThrow,m.stance,false);}
                EndCloseIn(g,f,m.closeIn,time,d,"no_throw");m.justReleased=false;out.released=true;return out;
            }
            return hold(s.position,Action::Hold,Reason::CloseIn,Stance::Crouched,false);
        }
        case CloseInPhase::Throw:{
            const LiveGrenade* gr=FindLive(g,ci.grenade);
            if(!gr||gr->stage!=GrenadeStage::Held){ci.phase=CloseInPhase::Wait;ci.phaseAt=time;}
            return hold(s.position,Action::Hold,Reason::CloseIn,Stance::Crouched,false);
        }
        case CloseInPhase::Wait:{
            if(FindLive(g,ci.grenade)&&time-ci.phaseAt<k.burstWait)return hold(s.position,Action::Hold,Reason::CloseIn,Down(c),false);
            // The burst: is the enemy still up, as the pair can see?
            bool up=false;
            for(int id:ci.members){if(id<0||!f.soldiers[size_t(id)].Active())continue;const Contact& seen=f.soldiers[size_t(id)].contacts[size_t(ci.enemy)];
                if(seen.known&&seen.visible&&!seen.seenDown&&time-seen.observedAt<=.5f)up=true;}
            const size_t second=size_t(1-ci.thrower);
            if(up&&!ci.threw[second]&&ci.members[second]>=0&&f.soldiers[size_t(ci.members[second])].Active()){
                ci.thrower=int(second);ci.phase=CloseInPhase::Approach;ci.phaseAt=time; // the second man throws from his spot
                return hold(s.position,Action::Hold,Reason::CloseIn,Stance::Crouched,false);
            }
            ci.phase=CloseInPhase::Rush;ci.phaseAt=time;++g.totals.closeInRushes;
            {std::ostringstream o;o<<std::setprecision(6)<<",\"close_in\":"<<ci.serial<<",\"enemy\":"<<ci.enemy<<",\"still_up\":"<<up;Row(d,f,s,time,"grenade_close_in","rush",o.str());}
            [[fallthrough]];
        }
        case CloseInPhase::Rush:{
            const Vec3 heading=FlatUnit(place-s.position);Vec3 goal=place-heading*k.rushShort;goal.z=s.position.z;
            if(!Walkable(map,goal))goal=DropToFloor(g.world,goal+Vec3{0,0,2.f});
            if(Flat(s.position,place)<=k.rushShort+1.5f||time-ci.phaseAt>k.rushSeconds){ci.phase=CloseInPhase::CloseFire;ci.phaseAt=time;s.grenadeRush=false;
                return hold(s.position,Action::Fire,Reason::ClearShot,Stance::Standing,false);}
            s.grenadeRush=true;
            return hold(goal,Action::Advance,Reason::CloseIn,Stance::Standing,true);
        }
        case CloseInPhase::CloseFire:
            s.grenadeRush=false;
            if(time-ci.phaseAt>k.closeFireSeconds){EndCloseIn(g,f,m.closeIn,time,d,"done");m.justReleased=false;out.released=true;return out;}
            return hold(s.position,Action::Fire,Reason::ClearShot,Stance::Standing,false);
        }
        return out;
    }
    }
    return out;
}

bool GrenadeThrowChoice(GrenadeRuntime& g,const Frame& f,Soldier& s,const Soldier& understood,const Map& map,const Config& c,float time,Order& order,Diagnostics* d,bool defender){
    auto& m=g.men[size_t(s.id)];const auto& k=g.k;
    if(!Grenades(c,s.team)||m.mode!=GrenadeMode::None||m.closeIn>=0||s.stunned||s.vaulting||s.grenades[0]+s.grenades[1]==0)return false;
    if(time<m.nextCheck||time-m.lastThrow<k.throwCooldown)return false;
    m.nextCheck=time+k.throwCheck;
    const bool still=order.action==Action::Fire||order.action==Action::Hold||Distance(order.goal,s.position)<1.5f;
    if(!still||s.suppression>=DuckThreshold(c,s.team))return false;
    const float reach=ThrowRange(k,s,Stance::Standing);
    const bool holding=Holding(s,defender);
    const Vec3 muzzle{s.position.x,s.position.y,s.position.z+Posture(Stance::Standing).muzzle};
    struct Candidate{int enemy;Vec3 aim;float score,distance;GrenadeType type;const char* why;int bunch;};
    std::vector<Candidate> list;
    for(int e=0;e<UnitCount;++e){
        const auto& ct=understood.contacts[size_t(e)];
        if(!ct.known||ct.seenDown||ct.observedAt>time||time-ct.observedAt>k.targetAge)continue;
        const Vec3 aim=ct.position;const float distance=Flat(s.position,aim);
        if(distance>reach)continue;
        const bool cannotShoot=!ClearLine3D(map,muzzle,{ct.position.x+ct.aimOffset.x,ct.position.y+ct.aimOffset.y,ct.aimHeight});
        int bunch=0;
        for(int o=0;o<UnitCount;++o){const auto& other=understood.contacts[size_t(o)];
            if(other.known&&!other.seenDown&&other.observedAt<=time&&time-other.observedAt<=k.targetAge&&Distance(other.position,aim)<=k.bunchRadius)++bunch;}
        const bool bunched=float(bunch)>=k.bunchCount;
        const bool closing=holding&&distance<=k.closingRange;
        if(!cannotShoot&&!bunched&&!closing)continue;
        GrenadeType type=GrenadeType::Fragmentation;
        if(!ChooseType(g,s,map,aim,time,type))continue;
        if(SeesGrenadeNear(g,map,s,aim,GrenadeDanger(k,type)))continue;
        const float score=distance-(cannotShoot?10.f:0.f)-(closing?10.f:0.f)-(bunched?5.f*float(bunch):0.f);
        list.push_back({e,aim,score,distance,type,cannotShoot?"cannot_shoot":bunched?"bunch":"closing",bunch});
    }
    if(list.empty())return false;
    std::stable_sort(list.begin(),list.end(),[](const Candidate& a,const Candidate& b){return a.score<b.score;});
    for(size_t n=0;n<list.size()&&n<3;++n){
        const auto& pick=list[n];Stance stance=Stance::Standing;float arc=k.arcFirst;
        if(!ChooseStance(g,s,pick.aim,stance,arc))continue;
        StartThrow(g,s,pick.enemy,pick.aim,pick.type,stance,arc,time,pick.why);
        order=Order{s.position,Action::Hold,Reason::GrenadeThrow,stance};
        std::ostringstream o;o<<std::setprecision(6)<<",\"enemy\":"<<pick.enemy<<",\"type\":\""<<GrenadeTypeName(pick.type)<<"\",\"throw_stance\":"<<int(stance)<<",\"arc\":"<<arc
            <<",\"distance\":"<<pick.distance<<",\"track_age\":"<<(time-understood.contacts[size_t(pick.enemy)].observedAt)<<",\"bunch\":"<<pick.bunch
            <<",\"holding\":"<<holding<<",\"nearest_friend\":"<<NearestFriend(k,s,pick.aim,time)<<",\"candidates\":"<<list.size()<<",\"carried\":["<<int(s.grenades[0])<<','<<int(s.grenades[1])
            <<"],\"aim_at\":"<<Json(pick.aim);
        Row(d,f,s,time,"grenade_throw",pick.why,o.str());
        return true;
    }
    return false;
}

bool PinnedAsKnown(const GrenadeTuning& k,const Soldier& knower,const Soldier& tracks,int enemy,float time,float* firedAt){
    if(enemy<0||enemy>=UnitCount)return false;
    const auto& ct=tracks.contacts[size_t(enemy)];
    if(!ct.known||ct.seenDown||KnowsFallen(knower,enemy)||ct.observedAt>time||time-ct.observedAt>k.pinnedTrackAge)return false;
    if(time-ct.lastFireAt<k.pinnedQuiet)return false;
    float fired=-1;
    for(const auto& dl:knower.deliveries)if(dl.shooter>=0&&dl.observedAt<=time&&time-dl.observedAt<=k.pinnedFireWindow&&
        (dl.enemy==enemy||Flat(dl.target,ct.position)<=k.pinnedFireRadius))fired=std::max(fired,dl.observedAt);
    if(firedAt)*firedAt=fired;
    return fired>=0;
}
void GrenadeCloseIns(GrenadeRuntime& g,Frame& f,const Map& map,const Config& c,float time,Diagnostics* d){
    const auto& k=g.k;
    for(int q=0;q<SquadCount;++q){
        auto& ci=g.closeIns[size_t(q)];
        if(!Grenades(c,q/SquadsPerTeam))continue;
        if(ci.active){
            bool any=false;
            for(int id:ci.members)if(id>=0&&f.soldiers[size_t(id)].Active()&&g.men[size_t(id)].closeIn==q)any=true;
            if(!any)EndCloseIn(g,f,q,time,d,"members_lost");
            else if(time-ci.startedAt>k.closeInMax)EndCloseIn(g,f,q,time,d,"timeout");
            continue;
        }
        if(time<ci.nextCheck)continue;
        ci.nextCheck=time+k.closeInCheck;
        const auto& cmd=f.command[size_t(q)];
        if(cmd.leader<0||!f.soldiers[size_t(cmd.leader)].Active())continue;
        const Soldier& officer=f.soldiers[size_t(cmd.leader)];
        // The rifle group's leader (RifleGroupLeader's rule: the corporal unless known wounded, else the senior rifleman).
        const Soldier* leader=nullptr;
        for(int i=q*SquadSize;i<(q+1)*SquadSize&&!leader;++i){const auto& s=f.soldiers[size_t(i)];
            if(s.Active()&&s.role==Role::Corporal&&s.id!=officer.id&&!KnowsWounded(officer,s))leader=&s;}
        for(int i=q*SquadSize;i<(q+1)*SquadSize&&!leader;++i){const auto& s=f.soldiers[size_t(i)];
            if(s.Active()&&s.id!=officer.id&&s.id!=cmd.support&&!IsPlatoonStaff(s)&&!KnowsWounded(officer,s))leader=&s;}
        if(!leader||leader->stunned||g.men[size_t(leader->id)].mode!=GrenadeMode::None)continue;
        const Soldier known=WithTracks(*leader,time);
        int enemy=-1;float nearest=1e9f,fireAge=-1,quiet=-1;
        for(int e=0;e<UnitCount;++e){
            float fired=-1;
            if(!PinnedAsKnown(k,*leader,known,e,time,&fired))continue;
            const auto& ct=known.contacts[size_t(e)];
            const float distance=Flat(leader->position,ct.position);if(distance>k.closeInReach)continue;
            if(distance<nearest){nearest=distance;enemy=e;fireAge=time-fired;quiet=time-ct.lastFireAt;}
        }
        if(enemy<0)continue;
        const Contact track=known.contacts[size_t(enemy)];
        // The pair: two riflemen he knows are up (not the squad leader, himself, the gun or the platoon staff), carrying
        // grenades, whom he saw within 3 s, nearest the enemy.
        struct Man{int id;Vec3 at;float distance;};std::vector<Man> men;
        for(int i=q*SquadSize;i<(q+1)*SquadSize;++i){const auto& s=f.soldiers[size_t(i)];
            if(i==cmd.leader||i==leader->id||!s.Active()||s.machineGun||IsPlatoonStaff(s)||KnowsWounded(*leader,s)||s.stunned)continue;
            if(s.grenades[0]+s.grenades[1]==0||g.men[size_t(i)].mode!=GrenadeMode::None||g.men[size_t(i)].closeIn>=0)continue;
            const auto& seen=leader->allies[size_t(i)];if(!seen.known||seen.observedAt>time||time-seen.observedAt>3)continue;
            men.push_back({i,seen.position,Flat(seen.position,track.position)});}
        std::stable_sort(men.begin(),men.end(),[](const Man& a,const Man& b){return a.distance<b.distance;});
        std::ostringstream evidence;evidence<<std::setprecision(6)<<",\"enemy\":"<<enemy<<",\"place\":"<<Json(track.position)<<",\"track_age\":"<<(time-track.observedAt)
            <<",\"fire_age\":"<<fireAge<<",\"quiet\":"<<quiet<<",\"distance\":"<<nearest<<",\"candidates\":"<<men.size();
        if(men.size()<2){ci.nextCheck=time+k.closeInRetry;Row(d,f,*leader,time,"grenade_close_in","no_pair",evidence.str());continue;}
        const Vec3 centre=(men[0].at+men[1].at)*.5f,toward=FlatUnit(centre-track.position);
        struct Spot{Vec3 p;bool sheltered;float travel;};std::vector<Spot> spots;
        for(float radius:{k.spotNear,(k.spotNear+k.spotFar)*.5f,k.spotFar})for(int b=0;b<16;++b){
            const float angle=float(b)*2*Pi/16;const Vec3 dir{std::cos(angle),std::sin(angle),0};
            if(dir.x*toward.x+dir.y*toward.y<-.17f)continue;                  // within about 100 degrees of the pair's side
            Vec3 p=track.position+dir*radius;p=DropToFloor(g.world,{p.x,p.y,centre.z+2.f});
            if(!Walkable(map,p))continue;
            spots.push_back({p,ProtectedAt(map,p,track.position,Stance::Crouched),Flat(p,centre)});
        }
        std::stable_sort(spots.begin(),spots.end(),[](const Spot& a,const Spot& b){return a.sheltered!=b.sheltered?a.sheltered:a.travel<b.travel;});
        const Soldier& first=f.soldiers[size_t(men[0].id)];
        bool found=false;Vec3 spot{},spot2{};float revealed[2]={0,0};int tested=0;
        for(const auto& candidate:spots){
            if(tested>=6)break;
            Stance stance=Stance::Crouched;float arc=0;
            Soldier probe=first;probe.position=candidate.p;probe.stance=Stance::Crouched;
            if(!ChooseStance(g,probe,track.position,stance,arc))continue;
            ++tested;
            const Vec3 side{-toward.y,toward.x,0};Vec3 second=candidate.p;
            for(float offset:{2.5f,-2.5f}){const Vec3 p=DropToFloor(g.world,candidate.p+side*offset+Vec3{0,0,1.f});if(Walkable(map,p)){second=p;break;}}
            bool covered=true;
            for(int n=0;n<2&&covered;++n){
                const Vec3 dest=n?second:candidate.p;
                const auto path=FindPath(map,men[size_t(n)].at,dest,VaultClassOf(f.soldiers[size_t(men[size_t(n)].id)],c));
                if(path.empty()){covered=false;break;}
                revealed[n]=PathRevealedSeconds(map,*leader,men[size_t(n)].at,path,time);
                if(revealed[n]>k.coveredRoute)covered=false;
            }
            if(!covered)continue;
            found=true;spot=candidate.p;spot2=second;break;
        }
        if(!found){ci.nextCheck=time+k.closeInRetry;evidence<<",\"spots\":"<<spots.size()<<",\"tested\":"<<tested;Row(d,f,*leader,time,"grenade_close_in","no_route",evidence.str());continue;}
        ci.active=true;ci.phase=CloseInPhase::Ordered;ci.enemy=enemy;ci.place=track.position;ci.spot=spot;ci.spot2=spot2;++ci.serial;ci.leader=leader->id;
        ci.members={{men[0].id,men[1].id}};ci.threw={{false,false}};ci.thrower=0;ci.grenade=-1;ci.startedAt=ci.phaseAt=time;
        const float delivered=time+ReportDelay(MessageDelay,*leader);ci.arrives={{delivered,delivered}};
        for(int id:ci.members){auto& m=g.men[size_t(id)];m.closeIn=q;m.arrived=false;}
        ++g.totals.closeIns;
        evidence<<",\"close_in\":"<<ci.serial<<",\"members\":["<<men[0].id<<','<<men[1].id<<"],\"spot\":"<<Json(spot)<<",\"spot2\":"<<Json(spot2)
            <<",\"revealed\":["<<revealed[0]<<','<<revealed[1]<<"],\"arrives\":"<<delivered;
        Row(d,f,*leader,time,"grenade_close_in","start",evidence.str());
    }
}

void StepGrenades(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int tick,const std::array<Vec3,UnitCount>& before,const std::function<void(int)>& downed){
    const float time=f.time;const auto& k=g.k;Diagnostics* d=r.diagnostics.get();
    // A grenade in the hand of a man down, stunned or knocked down falls at his feet (the lever flies if it had not).
    for(auto& gr:g.live){
        if(gr.stage!=GrenadeStage::Held||gr.holder<0)continue;
        const auto& h=f.soldiers[size_t(gr.holder)];const auto& hm=g.men[size_t(gr.holder)];
        if(h.Active()&&time>=h.stunUntil&&!(hm.knockDown&&time<hm.riseAt))continue;
        gr.stage=GrenadeStage::Resting;gr.position=DropToFloor(g.world,h.position+Vec3{0,0,.3f});gr.rest=gr.position;gr.ground=true;gr.landedAt=time;
        if(!gr.spoon){gr.spoon=true;gr.spoonAt=time;gr.fuseAt=time+Fuse(g,gr.id);}
        gr.noticedAt.fill(-100.f);
        auto& m=g.men[size_t(gr.holder)];if(m.grenade==gr.id){m.mode=GrenadeMode::None;m.holding=false;}
        gr.holder=-1;++g.totals.dropped;
    }
    // Releases: throws whose time has come, and throw-backs (not while a blast moves him).
    for(auto& s:f.soldiers){
        auto& m=g.men[size_t(s.id)];
        if(!s.Active()||s.stunned||m.knocked)continue;
        LiveGrenade* gr=FindLive(g,m.grenade);
        if(m.mode==GrenadeMode::Throw){
            if(gr&&gr->stage==GrenadeStage::Held&&!gr->spoon&&time>=gr->spoonAt)gr->spoon=true;
            if(time<m.releaseAt||(gr&&gr->spoon&&gr->fuseAt<=time))continue;   // its fuse out first: it goes off in his hand
            if(gr&&gr->stage==GrenadeStage::Held&&gr->holder==s.id){
                // The arc he chose, if it still clears from where he is now (he may be a step from where he decided); else
                // the table's arcs from his stance, allowing for his scatter and then not, then standing up; failing all he
                // throws the arc he chose and it meets what it meets.
                if(!ArcClearFor(k,g.world,Hand(k,s,m.stance),m.aim,m.arc)){
                    const float along=Flat(s.position,m.aim);ThrowArc now;
                    for(Stance option:{m.stance,Stance::Standing}){
                        if(now.clear||(option==Stance::Standing&&m.stance==Stance::Standing))break;
                        const float range=ThrowRange(k,s,option);
                        now=FindThrowArc(k,g.world,Hand(k,s,option),m.aim,range,LandingScatter(k,s,along)*k.arcMargin);
                        if(!now.clear)now=FindThrowArc(k,g.world,Hand(k,s,option),m.aim,range);
                        if(now.clear)m.stance=option;
                    }
                    if(now.clear)m.arc=now.angle;
                }
                const Vec3 release=Hand(k,s,m.stance);Release(g,*gr,s,release,m.aim,m.arc,time);
                std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<gr->id<<",\"type\":\""<<GrenadeTypeName(gr->type)<<"\",\"aim_at\":"<<Json(m.aim)<<",\"lands\":"<<Json(gr->rest)
                    <<",\"flight\":"<<(gr->landedAt-time)<<",\"fuse_left\":"<<(gr->fuseAt-time)<<",\"why\":\""<<m.why<<"\",\"release\":"<<Json(release)<<",\"launch\":"<<Json(gr->launch)
                    <<",\"contact\":"<<int(gr->contact)<<",\"arc\":"<<m.arc;
                Row(d,f,s,time,"grenade_release",m.why,o.str());
            }
            m.mode=GrenadeMode::None;m.lastThrow=time;m.nextCheck=time+k.throwCheck;m.justReleased=true;
        }else if(m.mode==GrenadeMode::ThrowBack&&m.holding&&time>=m.releaseAt&&!(gr&&gr->fuseAt<=time)){
            if(gr&&gr->stage==GrenadeStage::Held&&gr->holder==s.id){
                // An enemy's grenade goes back at its thrower where he knows him (his own track or a report within 10 s),
                // else back along its flight as far as it came; one of his own side's goes on along its flight, away from
                // his side. Within his kneeling range.
                const float range=ThrowRange(k,s,Stance::Crouched);
                Vec3 aim;bool knows=false;const bool friendly=gr->team==s.team;
                if(gr->owner>=0&&!friendly){const Contact& own=s.contacts[size_t(gr->owner)];const Contact& heard=s.reports[size_t(gr->owner)];
                    const Contact& best=own.observedAt>=heard.observedAt?own:heard;
                    if(best.known&&best.observedAt<=time&&time-best.observedAt<=10){aim=best.position;knows=true;}}
                if(!knows){const Vec3 flight=FlatUnit(friendly?gr->rest-gr->from:gr->from-gr->rest);
                    aim=s.position+flight*std::min(range*.8f,std::max(8.f,Flat(gr->from,gr->rest)));aim=DropToFloor(g.world,aim+Vec3{0,0,.5f});}
                if(Flat(s.position,aim)>range){const Vec3 heading=FlatUnit(aim-s.position);aim=s.position+heading*range;aim=DropToFloor(g.world,aim+Vec3{0,0,.5f});}
                const Vec3 release=Hand(k,s,Stance::Crouched);
                const ThrowArc arc=FindThrowArc(k,g.world,release,aim,range);
                gr->owner=s.id;gr->team=s.team;
                Release(g,*gr,s,release,aim,arc.clear?arc.angle:k.arcFirst,time);++g.totals.throwBacks;
                std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<gr->id<<",\"type\":\""<<GrenadeTypeName(gr->type)<<"\",\"first\":"<<gr->first<<",\"aim_at\":"<<Json(aim)
                    <<",\"knows_thrower\":"<<knows<<",\"lands\":"<<Json(gr->rest)<<",\"flight\":"<<(gr->landedAt-time)<<",\"fuse_left\":"<<(gr->fuseAt-time)
                    <<",\"release\":"<<Json(release)<<",\"contact\":"<<int(gr->contact)<<",\"arc\":"<<(arc.clear?arc.angle:k.arcFirst);
                Row(d,f,s,time,"grenade_release","throw_back",o.str());
            }
            m.mode=GrenadeMode::None;m.holding=false;m.justReleased=true;
        }
    }
    // Flights: a grenade in the air follows its arc and lies where it landed once it has.
    for(auto& gr:g.live){
        if(gr.stage!=GrenadeStage::Flying)continue;
        if(time>=gr.landedAt){gr.stage=GrenadeStage::Resting;gr.position=gr.rest;gr.velocity={};gr.ground=true;}
        else{const float t=time-gr.releasedAt;gr.position=BallisticPosition(gr.from,gr.launch,t);gr.velocity=gr.launch-Vec3{0,0,Gravity*t};}
    }
    // Throw-backs: a man at the grenade takes it up (his skill check decided whether he holds it or fumbles).
    for(auto& s:f.soldiers){
        auto& m=g.men[size_t(s.id)];
        if(!s.Active()||s.stunned||m.knocked||m.mode!=GrenadeMode::ThrowBack||m.holding)continue;
        LiveGrenade* gr=FindLive(g,m.grenade);
        if(!gr||gr->stage!=GrenadeStage::Resting||Flat(s.position,gr->position)>k.pickupReach||std::abs(s.position.z-gr->position.z)>1.3f)continue;
        std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<gr->id<<",\"fuse_left\":"<<(gr->fuseAt-time);
        if(m.success){gr->stage=GrenadeStage::Held;gr->holder=s.id;gr->position=Hand(k,s,Stance::Crouched);m.holding=true;m.releaseAt=time+k.throwBackRelease;
            Row(d,f,s,time,"grenade_pickup","taken",o.str());}
        else{m.mode=GrenadeMode::Fumble;m.until=time+k.throwBackMargin;++g.totals.fumbles;Row(d,f,s,time,"grenade_pickup","fumbled",o.str());}
    }
    for(auto& gr:g.live)if(gr.stage==GrenadeStage::Held&&gr.holder>=0)gr.position=Hand(k,f.soldiers[size_t(gr.holder)],g.men[size_t(gr.holder)].stance);
    // Men see grenades at rest near them (line of sight within sight range, his field of view).
    for(auto& gr:g.live){
        if(gr.stage!=GrenadeStage::Resting)continue;
        const float danger=GrenadeDanger(k,gr.type);
        for(const auto& s:f.soldiers){
            if(!s.Active()||s.stunned||gr.noticedAt[size_t(s.id)]>-50||Distance(s.position,gr.position)>danger)continue;
            const Vec3 eye=s.position+Vec3{0,0,Posture(s.stance).eye};
            if(!InVisualField(s,gr.position,SightRange(s))||!ClearLine3D(map,eye,gr.position+Vec3{0,0,.1f}))continue;
            gr.noticedAt[size_t(s.id)]=time;
        }
    }
    // A free man who has seen one within its danger radius reacts after his reaction time (a close-in is broken off).
    for(auto& s:f.soldiers){
        auto& m=g.men[size_t(s.id)];
        if(!s.Active()||s.stunned||(m.mode!=GrenadeMode::None&&m.mode!=GrenadeMode::CloseIn))continue;
        const LiveGrenade* pick=nullptr;
        for(const auto& gr:g.live)if(gr.stage==GrenadeStage::Resting&&gr.noticedAt[size_t(s.id)]>-50&&Distance(s.position,gr.position)<=GrenadeDanger(k,gr.type)&&
            (!pick||gr.noticedAt[size_t(s.id)]<pick->noticedAt[size_t(s.id)]))pick=&gr;
        if(!pick)continue;
        if(m.closeIn>=0)EndCloseIn(g,f,m.closeIn,time,d,"grenade_near");
        m.mode=GrenadeMode::React;m.grenade=pick->id;m.noticed=pick->noticedAt[size_t(s.id)];m.reactAt=std::max(time,m.noticed+ReactionSeconds(s,ReactionKind::Sight));
        ++g.totals.reactions;
        std::ostringstream o;o<<std::setprecision(6)<<",\"grenade\":"<<pick->id<<",\"owner\":"<<pick->owner<<",\"type\":\""<<GrenadeTypeName(pick->type)<<"\",\"distance\":"<<Distance(s.position,pick->position)
            <<",\"react_at\":"<<m.reactAt<<",\"deafened\":"<<s.deafened;
        Row(d,f,s,time,"grenade_reaction","noticed",o.str());
    }
    // Explosions whose fuse has run out (never before the lever has flown).
    for(size_t n=0;n<g.live.size();){
        LiveGrenade& gr=g.live[n];
        if(!gr.spoon||gr.fuseAt>time){++n;continue;}
        const float when=std::max(time-TickSeconds,gr.fuseAt);
        if(gr.stage==GrenadeStage::Flying){const float t=when-gr.releasedAt;gr.position=BallisticPosition(gr.from,gr.launch,t);}
        Explode(g,gr,f,r,map,when,downed,d);
        if(gr.holder>=0){auto& m=g.men[size_t(gr.holder)];if(m.grenade==gr.id){m.mode=GrenadeMode::None;m.holding=false;m.justReleased=true;}}
        g.live.erase(g.live.begin()+long(n));
    }
    // Fragments: ten substeps as the bullets fly.
    if(!g.fragments.empty()){
        constexpr int Substeps=10;
        std::vector<char> alive(g.fragments.size(),1);
        for(int sub=0;sub<Substeps;++sub)for(size_t n=0;n<g.fragments.size();++n){
            if(!alive[n])continue;
            if(!StepFragment(g,g.fragments[n],f,r,map,c,tick,sub,before,downed)){alive[n]=0;auto* t=FindTally(g,g.fragments[n].explosion);if(t)--t->flying;}
        }
        size_t kept=0;for(size_t n=0;n<g.fragments.size();++n)if(alive[n])g.fragments[kept++]=g.fragments[n];
        g.fragments.resize(kept);
    }
    for(auto& t:g.tallies)if(!t.written&&t.flying<=0)WriteTally(g,t,f,d);
    g.tallies.erase(std::remove_if(g.tallies.begin(),g.tallies.end(),[](const ExplosionTally& t){return t.written;}),g.tallies.end());
    r.grenadeTotals=g.totals;
}
bool GrenadeHeld(const GrenadeRuntime& g,const Soldier& s){
    const auto& m=g.men[size_t(s.id)];
    return s.stunned||m.knocked||m.mode==GrenadeMode::Throw||m.mode==GrenadeMode::Fumble||m.mode==GrenadeMode::Dive||(m.mode==GrenadeMode::ThrowBack&&m.holding);
}
void SnapshotGrenades(const GrenadeRuntime& g,Frame& f){
    f.grenades.clear();
    for(const auto& gr:g.live)f.grenades.push_back({gr.id,gr.owner,gr.team,gr.type,gr.stage,gr.position,gr.velocity,gr.fuseAt,gr.releasedAt});
}
}
