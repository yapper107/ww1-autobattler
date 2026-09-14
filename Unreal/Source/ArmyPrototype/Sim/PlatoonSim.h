#pragma once
#include "ReactionSim.h"
namespace army {
struct PlatoonMessage {
    bool order=false;
    int sender=-1, recipient=-1;
    float arrives=0;
    SquadSituation situation;
    PlatoonDirective directive;
};
struct PlatoonRuntime {
    const std::array<Map,UnitCount>* geometryViews=nullptr;
    std::vector<PlatoonMessage> messages;
    std::array<float,SquadCount> nextReport{};
    std::array<float,2> nextRelay{};
    std::array<PlatoonDirective,SquadCount> lastOrders{};
    std::array<uint64_t,2> lastSituation{};
    std::array<float,2> lastPlan{};
    int nextSerial=1;
};
struct PlannedPlatoonOrder { int recipient=-1; PlatoonDirective directive; };
// Only this commander's received situations and personal knowledge enter policy.
std::vector<PlannedPlatoonOrder> PlanPlatoon(const Soldier& commander,const Map& map,
    const Config& config,float time);
void ApplyPlatoonDirective(const Soldier& leader,SquadCommand& command,float time);
void UpdatePlatoon(Frame& frame,const Map& map,const Config& config,PlatoonRuntime& runtime,
    ReactionRuntime& reactions,std::vector<Event>& events);
}
