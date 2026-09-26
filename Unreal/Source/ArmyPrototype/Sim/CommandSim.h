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
    // Each soldier's own geometry as he knows it (the array is null while no change has happened). Pointers (plan 033):
    // men who know the same changes share one map object and its caches.
    const std::array<const Map*,UnitCount>* geometryViews=nullptr;
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
    // Plan 023 A (3.5): a legacy order carries no id of its own, so the relay could not ask "is
    // this the order he is already carrying out". The identity of a group order is the objective
    // it belongs to (this serial) with the station and task in lastSent; it is sent only when
    // that identity changes, or when he has not taken it up.
    std::array<int, UnitCount> groupOrder{};
    // Plan 028 Stage 1: when each man was last sent a covering-fire payload (the resend rate limit).
    std::array<float, UnitCount> payloadAt=[]{std::array<float,UnitCount> a{};a.fill(-100.f);return a;}();
    int nextSerial = 1;
    std::array<ProgressRuntime,SquadCount> progress{};
};
// fire (plan 028 Stage 1): the order carries the squad's live covering request as its payload.
// fm (plan 031 D, Config::fireAndMovement): the drill's leg the order belongs to; gun -1 is none.
struct PlannedOrder { int recipient; Task task; Vec3 position, sector; TeamPlan teamPlan; bool hasSlot=false;CoverPosition slot; ExecutionContract execution{}; float pace=1.f; bool fire=false; FireMovementOrder fm{}; };
bool ResolveOrderPosition(const Map& map,Vec3 from,Vec3 requested,Vec3& resolved);
bool KnowsWounded(const Soldier& commander, const Soldier& soldier);
// Plan 018 gen18b: who leads the rifle group today. The corporal, unless known wounded or down;
// then the senior surviving rifleman (array order); the hand-off is the same rule again if he
// too falls, and it never lands on the squad's own officer, who runs the gun group. Null only
// when nobody in the rifle group is left to lead.
const Soldier* RifleGroupLeader(const Soldier& officer, const std::vector<Soldier>& squad, int support);
Vec3 RearPosition(const Soldier& commander, const Soldier& soldier, const std::vector<Soldier>& squad,
    const Map& map, float time, const std::vector<Vec3>& reserved = {});
bool InReportedFireLane(const Soldier& commander,int soldier,Vec3 position,float time);
Vec3 ClearReportedFireLane(const Soldier& commander,const Soldier& soldier,Vec3 desired,const Map& map,float time);
// Policy has only the leader's observations/reports and friendly squad state.
// Plan 023 C (3.6): the leader's own order and his men's stations are one derivation, made here
// when he is given the objective, so the command record is written as the plan is made.
// diagnostics (plan 028 Stage 4) receives cover_gun_aim / cover_platoon_payload evidence only.
std::vector<PlannedOrder> PlanSquad(const Soldier& leader, const std::vector<Soldier>& friends,
    const Map& map, const Config& config, SquadCommand& command, float time, Diagnostics* diagnostics=nullptr);
// Plan 028 Stage 4: the covering request the squad's gun answers: its leader's own live request, else
// (Config::coverPlatoon) the live platoon Support payload. Null when neither lives.
CoverRequest* GunCoverRequest(const Config& config,SquadCommand& command,float time);
// Plan 028 Stage 4 (Config::coverPlatoon): refresh the platoon Support payload from the squad leader's
// received directive and his own track of its enemy (whichever is fresher). Legacy only.
void RefreshPlatoonCover(const Soldier& leader,const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics=nullptr);
void UpdateSearchMission(const Soldier& leader, const std::vector<Soldier>& squad, const Map& map,
    const Config& config, SquadCommand& command, float time);
float TrackConfidence(const Contact& contact,float time);
float TrackUncertainty(const Contact& contact,float time);
Soldier WithTracks(const Soldier& soldier,float time);
void ObserveEmptyTracks(Soldier& soldier,const Map& map,float time);
Soldier WithReports(const Soldier& soldier, float time);
// Plan 030 K-1 (Config::retireFallen, Legacy only): whether the soldier holds an observation that this enemy was
// seen to fall (his own contact or a report); whether he holds any; and the soldier with those tracks forgotten
// (contact and report both empty), the view his covering-fire, commit, bound and danger decisions read.
inline bool KnowsFallen(const Soldier& s,int enemy){return enemy>=0&&enemy<UnitCount&&(s.contacts[enemy].seenDown||s.reports[enemy].seenDown);}
bool KnowsAnyFallen(const Soldier& soldier);
Soldier WithoutFallen(const Soldier& soldier);
// Plan 030 K-1: a live covering request (or platoon cover payload) on an enemy the leader knows is down is
// withdrawn at once (a "retired" cover_request row); the next gate check asks for fire on a live threat.
void RetireFallenRequests(const Soldier& leader,SquadCommand& command,float time,Diagnostics* diagnostics=nullptr);
void UpdateCommands(Frame& frame, const Map& map, const Config& config,
    CommandRuntime& runtime, std::vector<Event>& events);
}
