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
}
