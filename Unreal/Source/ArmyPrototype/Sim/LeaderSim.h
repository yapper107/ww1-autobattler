#pragma once
#include "PlatoonSim.h"
namespace army {
// Command effects use the commander's profile and his own net/report state only.
struct LeaderDials {
    float extraDelay=0,lossProbability=0,pictureRadius=0,enemyScale=1;
    float retreatRatio=.5f,assessmentSeconds=1;
    bool initiative=true;
};
LeaderDials LeaderSettings(const OfficerProfile& profile);
bool ProfileMessage(PlatoonMessage& message,const Soldier& commander,const Config& config,
                    float time,Diagnostics* diagnostics);
GeneratedScenario GenerateLeaderScenario(const Config& config);
}
