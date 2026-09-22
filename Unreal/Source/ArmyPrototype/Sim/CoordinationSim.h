#pragma once
#include "BattleSim.h"
namespace army {
int FireTeam(int id);
bool InWindowTeam(const TeamPlan& plan,int id);
const char* SupportStateName(SupportState state);
float SupportCoverage(const Map& map,Vec3 gun,Vec3 crossing,const Soldier& knowledge,float time);
void UpdateCoordination(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<int>& claimedBuildings,SquadCommand& command,float time);
// A directive is carried by the NCO's delayed order, then relayed to individuals.
Order TeamOrder(const Soldier& soldier,const TeamPlan& plan,Vec3 sector);
// Plan 023 A: the one allocator for every place the rifle group is given (a bound's destination,
// a halt on the leader's ordered place, a hold in contact), the give-up test for a station a man
// already holds, and whether a place bears on an enemy the leader knows.
// Plan 023 D: minRange keeps a place no nearer the enemy the leader tracks than the rifle group's
// own lead station (the gun and the platoon officer are both placed with it, 3.9).
bool GroupStation(const Soldier& leader,const Soldier& soldier,StationKind kind,Vec3 objective,Vec3 sector,
    const std::vector<Vec3>& taken,const Map& map,float time,Vec3& place,float standOff=0,float minRange=0);
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
}
