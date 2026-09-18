#pragma once
#include "BattleSim.h"
#include "ReactionSim.h"
#include "ManeuverSim.h"
#include "PlatoonSim.h"
#include <unordered_map>

namespace army {
constexpr float MessageDelay = 0.75f;
struct CommandMessage {
    enum class Kind { Order, Contact, Ready, Wound, Fire, Lane, Movement, Delivery, TaskStatus, SupportSector, SupportProgress };
    Kind kind = Kind::Order;
    int sender = -1, recipient = -1, enemy = -1;
    int subject = -1;
    SupportSector supportSector;
    SupportProgress supportProgress;
    FireArea fireArea;
    FireDelivery delivery;
    MoveFailure failedMove;
    TaskReceipt taskReceipt;
    FireLane fireLane;
    float arrives = 0;
    Assignment assignment;
    Contact contact;
    bool ready = false;
    int rounds = 0;
    bool blocked=false;
    Vec3 supportPosition{};
};
struct CommandRuntime {
    float reportDelay=MessageDelay;
    const std::array<Map,UnitCount>* geometryViews=nullptr;
    Diagnostics* diagnostics=nullptr;
    ReactionRuntime reactions;
    PlatoonRuntime platoon;
    std::vector<CommandMessage> messages;
    std::array<float, UnitCount> nextReport{}, nextNco{};
    std::array<float, UnitCount> nextDeliveryReport{};
    std::array<float, UnitCount> nextSupportProgress{},taskProgressAt{},taskRemaining{};
    std::array<Vec3,UnitCount> taskProgressPosition{};
    std::array<uint64_t,UnitCount> taskProgressAssignment{};
    std::unordered_map<uint64_t,float> sentTargetDeliveryAt;
    std::array<float, SquadCount> nextPlan{}, startedAt{}, lastPlanAt{}, nextSupportSector{};
    std::array<uint64_t,SquadCount> plannedKnowledge{}, plannedTasks{};
    int fixedDefender=-1;
    std::array<int,SquadCount> taskLeaders{};
    std::array<Assignment, UnitCount> lastSent{};
    int nextSerial = 1;
    std::array<ProgressRuntime,SquadCount> progress{};
};
struct PlannedOrder { int recipient; Task task; Vec3 position, sector; TeamPlan teamPlan; bool hasSlot=false;CoverPosition slot; ExecutionContract execution{}; };
bool ResolveOrderPosition(const Map& map,Vec3 from,Vec3 requested,Vec3& resolved);
bool KnowsWounded(const Soldier& commander, const Soldier& soldier);
Vec3 RearPosition(const Soldier& commander, const Soldier& soldier, const std::vector<Soldier>& squad,
    const Map& map, float time, const std::vector<Vec3>& reserved = {});
bool InReportedFireLane(const Soldier& commander,int soldier,Vec3 position,float time);
Vec3 ClearReportedFireLane(const Soldier& commander,const Soldier& soldier,Vec3 desired,const Map& map,float time);
// Policy has only the leader's observations/reports and friendly squad state.
std::vector<PlannedOrder> PlanSquad(const Soldier& leader, const std::vector<Soldier>& friends,
    const Map& map, const Config& config, const SquadCommand& command, float time);
void UpdateSearchMission(const Soldier& leader, const std::vector<Soldier>& squad, const Map& map,
    const Config& config, SquadCommand& command, float time);
float TrackConfidence(const Contact& contact,float time);
float TrackUncertainty(const Contact& contact,float time);
Soldier WithTracks(const Soldier& soldier,float time);
void ObserveEmptyTracks(Soldier& soldier,const Map& map,float time);
Soldier WithReports(const Soldier& soldier, float time);
void UpdateCommands(Frame& frame, const Map& map, const Config& config,
    CommandRuntime& runtime, std::vector<Event>& events);
}
