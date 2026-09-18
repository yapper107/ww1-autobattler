#pragma once
#include "ManeuverSim.h"
namespace army {
void UpdateSquadPlan(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,const Config& config,
    const std::vector<Vec3>& approaches,const std::vector<int>& claimed,SquadCommand& command,ProgressRuntime& progress,Diagnostics* diagnostics,float time);
}
