#pragma once
#include "BattleSim.h"
namespace army {
struct PendingReaction {
    ObservationCoverage coverage;
    ReactionKind kind=ReactionKind::Sight;
    int recipient=-1, source=-1, enemy=-1;
    int subject=-1;
    Vec3 position{};
    Vec3 velocity{};
    SupportSector supportSector;
    SupportProgress supportProgress;
    FireArea fireArea;
    FireDelivery delivery;
    MoveFailure failedMove;
    TaskReceipt taskReceipt;
    FireLane fireLane;
    float readyAt=0, receivedAt=0;
    Contact contact;
    Assignment order;
    SquadSituation situation;
    PlatoonDirective directive;
    float health=100, suppression=0;
    bool ready=false;
    int rounds=0;
    bool blocked=false;
};
struct ReactionRuntime {
    bool recoveryFixture=false;
    Diagnostics* diagnostics=nullptr;
    std::vector<PendingReaction> pending;
    std::array<std::array<bool,UnitCount>,UnitCount> sensedVisible{};
    std::array<float,UnitCount> nextStressSample{};
    std::array<float,UnitCount> lastStressReceived{}, lastReadyReceived{};
};
float ReactionSeconds(const Soldier& soldier,ReactionKind kind);
const char* ReactionName(ReactionKind kind);
void QueueReaction(const Soldier& soldier, PendingReaction reaction, float time, ReactionRuntime& runtime);
void ProcessReactions(Frame& frame,ReactionRuntime& runtime,std::vector<Event>& events);
}
