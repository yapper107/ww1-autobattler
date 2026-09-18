#pragma once
#include "ReactionSim.h"
namespace army {
struct PlatoonMessage {
    bool order=false;bool radio=false;SquadBroadcast broadcast;
    bool profiled=false;
    int sender=-1, recipient=-1;
    float arrives=0;
    SquadSituation situation;
    PlatoonDirective directive;
    bool lane=false;int subject=-1;FireLane fireLane;
    PlatoonMessage()=default;
    PlatoonMessage(bool o,int s,int r,float at,SquadSituation situation_,PlatoonDirective directive_)
        :order(o),sender(s),recipient(r),arrives(at),situation(std::move(situation_)),directive(std::move(directive_)){}
};
struct PlatoonRuntime {
    const std::array<Map,UnitCount>* geometryViews=nullptr;
    std::vector<PlatoonMessage> messages;
    std::array<float,SquadCount> nextReport{};
    std::array<float,2> nextRelay{}, nextSupportRelay{};
    std::array<PlatoonDirective,SquadCount> lastOrders{};
    std::array<uint64_t,2> lastSituation{};
    std::array<float,2> lastPlan{};
    std::array<float,SquadCount> feedbackObserved{};
    std::array<int,SquadCount> radioSent{};
    int nextSerial=1;
};
struct PlannedPlatoonOrder { int recipient=-1; PlatoonDirective directive; };
// Only this commander's received situations and personal knowledge enter policy.
std::vector<PlannedPlatoonOrder> PlanPlatoon(const Soldier& commander,const Map& map,
    const Config& config,float time);
bool GoalAlternative(const SquadSituation& report,const PlatoonDirective& previous,float time,PlatoonDirective& next,bool cognition=false);
void ApplyPlatoonDirective(const Soldier& leader,SquadCommand& command,float time);
void UpdatePlatoon(Frame& frame,const Map& map,const Config& config,PlatoonRuntime& runtime,
    ReactionRuntime& reactions,std::vector<Event>& events);
}
