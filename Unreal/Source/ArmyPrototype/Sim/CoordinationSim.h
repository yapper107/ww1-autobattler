#pragma once
#include "BattleSim.h"
#include <functional>
namespace army {
int FireTeam(int id);
bool InWindowTeam(const TeamPlan& plan,int id);
const char* SupportStateName(SupportState state);
float SupportCoverage(const Map& map,Vec3 gun,Vec3 crossing,const Soldier& knowledge,float time);
struct Diagnostics;
// diagnostics (plan 028 Stage 0) receives covering_check / covering_clock_reset evidence only.
void UpdateCoordination(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<int>& claimedBuildings,SquadCommand& command,float time,Diagnostics* diagnostics=nullptr,bool coverGraduated=false,bool coverRequests=false,bool coverShift=false,
    bool coverQuiet=false,bool coverRifleBase=false,const Soldier* fallen=nullptr,bool noCovering=false,bool coverSector=false,
    bool drill=false,float drillDeadline=0);
// drill (plan 031 Stage D, Config::fireAndMovement for the squad's team): an internal (fire-team) bound is not held for
// covering fire: it is released 2 s after it is set up, as a protected one, and its moving team is gated man by man by the
// drill (ApplyFireMovement); its execution timeout is extended by drillDeadline (Config::fmDeadline), the drill's own wait.
// noCovering (plan 030 M-S6, Config::noCoveringFire for Legacy): an exposed internal bound is never held for covering
// fire. It is released 8 s after it was set up (or earlier, when credited fire would release it), so it never reaches
// the 12 s covering pause; the caller passes coverRequests false with it.
// coverSector (plan 030 M-S7 P4, Config::coverSector for Legacy): the internal bound's request carries the crossing's
// whole set and its credited-delivery gate reads it (CoveringPath's sector).
// fallen (plan 030 K-1, Config::retireFallen): as UpdateManeuver's; an internal bound watched only by men seen to
// fall counts as covered.
// coverQuiet / coverRifleBase (plan 030 M-S5, Config::coverQuietRelease / coverRifleBase for Legacy): the internal
// bound's gate also counts a quiet crossing (QuietCrossing) as covered; its request tasks the rifle base.
// coverGraduated (plan 028 Stage 3c, Config::coverGraduated for Legacy): the internal bound's gate
// waits on a primary seen within 20 s only, and an uncovered crossing that is stale or low danger
// is released CoverGradeConstants.shortWait after the bound was set up.
// coverRequests (plan 028 Stage 1, Config::coverRequests for Legacy): an exposed internal bound asks for
// covering fire on its primary, and the ready BoundCover men (the readiness count) answer it.
// A directive is carried by the NCO's delayed order, then relayed to individuals.
Order TeamOrder(const Soldier& soldier,const TeamPlan& plan,Vec3 sector);
// Plan 023 A: the one allocator for every place the rifle group is given (a bound's destination,
// a halt on the leader's ordered place, a hold in contact), the give-up test for a station a man
// already holds, and whether a place bears on an enemy the leader knows.
// Plan 023 D: minRange keeps a place no nearer the enemy the leader tracks than the rifle group's
// own lead station (the gun and the platoon officer are both placed with it, 3.9).
// preferEnemy (plan 028 Stage 1): a firing station bears on this enemy of the leader's instead of the
// nearest one he knows (the gun re-stationed while a covering request names a threat); -1 unchanged.
// filter (plan 028 Stage 4, the gun aimed at a covering request's threat): `accept` further restricts a
// candidate before it is scored (within reach of the gun, off the crossing), and `reach` replaces the
// plain path test on the one that would win (a covered way). Null leaves the allocator unchanged.
struct StationFilter { std::function<bool(const CoverPosition&)> accept; std::function<bool(Vec3)> reach; };
bool GroupStation(const Soldier& leader,const Soldier& soldier,StationKind kind,Vec3 objective,Vec3 sector,
    const std::vector<Vec3>& taken,const Map& map,float time,Vec3& place,float standOff=0,float minRange=0,int preferEnemy=-1,
    const StationFilter* filter=nullptr);
bool StationValid(const Soldier& leader,const Soldier& soldier,const std::vector<Soldier>& squad,const Map& map,const GroupStations& stations,int slot,float time);
bool StationBears(const Soldier& leader,const Map& map,Vec3 place,float time);
bool StationCovered(const Soldier& leader,const Map& map,Vec3 place,float time);
// Plan 023 B2: a place the group is sent to, pushed back onto the stand-off line if it is inside it.
Vec3 StandOffPoint(const Soldier& leader,Vec3 place,float standOff,float time);
// Plan 021 A1: one station per rifleman at the running bound's destination, fixed when it starts.
// Plan 023 C (3.7, behind config.orderPace): before the reset, at most coverPair men whose ground
// already bears on a known enemy are kept covering it; the rest are laid out as before.
void PlanGroupStations(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,SquadCommand& command,const Config& config,float time);
// Plan 023 B: the group's axis (centre to objective, or to the enemy it tracks), a man's progress
// along it, and which enemy overlooks a leg the group would have to cross.
struct GroupAxis { Vec3 origin{},direction{}; bool contact=false; };
GroupAxis MakeGroupAxis(const Soldier& leader,Vec3 centre,Vec3 objective,Vec3 sector,float time);
float AxisProgress(const GroupAxis& axis,Vec3 position);
int OverlookingEnemy(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time);
// Plan 023 E (section 11): where a withdrawal ends. The nearest covered ground behind the squad's
// last objective that no enemy the leader knows can look into, chosen once when it is committed.
bool FallbackPosition(const Soldier& leader,const Map& map,Vec3 objective,Vec3 enemy,Vec3 from,float time,Vec3& place);
// ... and whether a place is one no enemy the leader knows can look into at all.
bool OutOfSight(const Soldier& leader,const Map& map,Vec3 place,bool crouch,float time);
// Plan 029 M-A2: the same test at a cover record's own stance (CoverStance: prone at a crater rim).
bool OutOfSight(const Soldier& leader,const Map& map,Vec3 place,Stance posture,float time);
}
