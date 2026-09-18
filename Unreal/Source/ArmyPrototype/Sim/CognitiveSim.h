#pragma once
#include "CommandSim.h"
namespace army {
const char* CognitiveMethodName(CognitiveMethod method);
void UpdateCognitivePlan(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,SquadCommand& command,Diagnostics* diagnostics,float time);
std::vector<PlannedOrder> CognitiveOrders(const Soldier& leader,const std::vector<Soldier>& squad,const SquadCommand& command,float time=0);
Vec3 SupportDeploymentSector(const AcceptedPlan& plan,const Soldier& leader,float time);
bool ReceivedUsefulSupport(const Soldier& leader,Vec3 sector,float time,int shooter=-1);
bool ReceivedThreatSupport(const Soldier& leader,Vec3 sector,float time,int shooter,int threat);
float RememberedRisk(const Soldier& leader,Vec3 position,float time);
}
