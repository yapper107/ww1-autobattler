#pragma once
#include "CommandSim.h"
namespace army {
struct PositionQuery {
    Vec3 center{},target{},support{};float radius=100,minAngle=0,spacing=1.5f,minSupportDistance=0;
    int count=2;bool firing=true,protectedPosition=true;
};
struct TacticalSlot {CoverPosition cover;float angle=0,score=0;};
float CurrentStageExposure(const Soldier& leader,const Map& map,const TacticalRoute& route,int stage,float time);
bool ReslotAssault(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& command,int target,Vec3 targetPosition,float time,Diagnostics* diagnostics);
int RequiredCoveringRounds(float exposureSeconds);
int TrailingCoveringRounds(const Soldier& leader,Vec3 targetArea,float time);
std::vector<TacticalSlot> QueryTacticalPositions(const Soldier& leader,const std::vector<Soldier>& movers,const Map& map,const PositionQuery& query,float time,Diagnostics* diagnostics);
std::vector<PlannedOrder> UpdateRecoveryDrill(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics);
}
