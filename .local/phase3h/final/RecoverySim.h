#pragma once
#include "CommandSim.h"
namespace army {
struct PositionQuery {
    Vec3 center{},target{},support{};float radius=100,minAngle=0,spacing=1.5f,minSupportDistance=0;
    int count=2;bool firing=true,protectedPosition=true;
};
struct TacticalSlot {CoverPosition cover;float angle=0,score=0;};
bool TacticalPairLaneClear(const Map& map,const CoverPosition& a,const CoverPosition& b,const std::vector<Vec3>& targets);
float CurrentStageExposure(const Soldier& leader,const Map& map,const TacticalRoute& route,int stage,float time);
bool ReslotAssault(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& command,int target,Vec3 targetPosition,float time,Diagnostics* diagnostics);
SupportSector AssaultSupportSector(const Soldier& leader,const SquadCommand& command,const Map& map,float time);
int RequiredCoveringRounds(float exposureSeconds);
int TrailingCoveringRounds(const Soldier& leader,Vec3 targetArea,float time,const std::vector<SupportThreat>* threats=nullptr);
std::vector<TacticalSlot> QueryTacticalPositions(const Soldier& leader,const std::vector<Soldier>& movers,const Map& map,const PositionQuery& query,float time,Diagnostics* diagnostics);
std::vector<PlannedOrder> UpdateRecoveryDrill(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics);
}
