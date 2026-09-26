#pragma once
// Plan 033: blast loading, in one place. The Kingery-Bulmash hemispherical surface burst of TNT (Swisdak's 1994 fits,
// metric) and the load it puts on a surface. The structural model (DestructionSim) reads it; the grenade module (plan 032)
// switches to it when both merge: KbBlast and KingeryBulmash below are its own declarations, computed with the same
// arithmetic, so its copy can simply be deleted and this header included.
#include "BattleSim.h"

namespace army {
// Kingery-Bulmash hemispherical surface burst (Swisdak 1994, metric) of `charge` kg TNT at `range` m: Z (m/kg^(1/3)),
// incident overpressure (kPa), positive-phase duration (ms), incident and normally reflected impulse (kPa ms) and reflected
// pressure (kPa).
struct KbBlast { float scaled=0, pressure=0, duration=0, impulse=0, reflectedImpulse=0, reflectedPressure=0; };
KbBlast KingeryBulmash(float charge,float range);
// The incident-pressure (kPa) and scaled positive-phase duration (ms per kg^(1/3)) fits at a scaled distance Z, in double:
// what KingeryBulmash computes before it rounds to float (the grenade module's near-field envelope samples them on a grid).
double KbIncidentPressureAt(double scaled);
double KbScaledDurationAt(double scaled);
// Oblique reflection (Randers-Pehrson and Bannister 1997, "Airblast loading model for DYNA2D and DYNA3D", the ConWep load
// that LS-DYNA's LOAD_BLAST applies): a surface whose normal makes the angle theta with the line to the burst takes
// P = P_r cos^2 theta + P_i (1 + cos^2 theta - 2 cos theta) while it faces the burst (cos theta > 0), P_i otherwise; the same
// blend holds for the impulse. At normal incidence the reflected value, at grazing incidence the incident one; never less
// than the incident value (the blend dips below it just short of grazing).
float ObliqueLoad(float reflected,float incident,float cosine);
// The blast's load on one point of a surface (unit `normal` pointing out of the surface into the air it faces): the peak
// pressure (kPa) and impulse (kPa ms, which is Pa s) with the obliquity, then the duration (ms) of the equivalent
// triangular pulse, 2 i / P (UFC 3-340-02 section 2-15: the fictitious duration that keeps the impulse). pressureFactor
// and durationFactor scale the peak and the pulse (a room: 2.5 and 3), and so the impulse.
struct SurfaceLoad { float pressure=0, impulse=0, duration=0, scaled=0, cosine=0; };
SurfaceLoad BlastOnSurface(float charge,Vec3 burst,Vec3 point,Vec3 normal,float pressureFactor=1,float durationFactor=1);
}
