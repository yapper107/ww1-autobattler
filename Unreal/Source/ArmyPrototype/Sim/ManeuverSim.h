#pragma once
#include "BattleSim.h"
namespace army {
void RememberDelivery(Soldier& soldier,const FireDelivery& delivery);
bool CoveringCrossing(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time);
bool CoveringPath(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time);
float CrossingExposure(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time);
void RememberFireArea(Soldier& soldier,const FireArea& area);
float FireDanger(const Soldier& soldier,Vec3 position,float time);
bool HasMachineGun(const std::vector<Soldier>& squad);
float MovementPressure(const Soldier& leader,const std::vector<Soldier>& squad,float time);
void PauseSquadMovement(const Soldier& leader,const std::vector<Soldier>& squad,SquadCommand& command,MoveBlock reason,float time);
bool RifleCoverReady(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,float time);
const char* ManeuverName(Maneuver maneuver);
const char* ProgressName(SquadProgress progress);
struct ProgressRuntime {
    bool initialized=false;
    int members=0, rounds=0;
    float lastFireAt=-100;
    Vec3 target{}, lastRecovery{};
    float distance=0, lastProgressAt=0, lastMotionAt=0, nextRecovery=0;
};
void UpdateSquadProgress(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<Vec3>& friendlyApproaches,SquadCommand& command,ProgressRuntime& runtime,float time,bool recover=true);
// All danger comes from processed stimuli/reports, and congestion from friendly plans.
void UpdateManeuver(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,const std::vector<Vec3>& friendlyApproaches,SquadCommand& command,float time,Diagnostics* diagnostics=nullptr);
}
