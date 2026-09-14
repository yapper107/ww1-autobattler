#pragma once
// Engine-independent authoritative simulation. Units are metres and seconds.
#include <array>
#include <cstdint>
#include <string>
#include <vector>
#include <memory>

namespace army {
constexpr int SquadSize = 8, SquadsPerTeam = 4, SquadCount = 8;
constexpr int TeamSize = SquadSize * SquadsPerTeam, UnitCount = TeamSize * 2;
inline float SquadLane(int squad) { return (float(squad % SquadsPerTeam)-1.5f)*48.f; }
constexpr float TickSeconds = 0.05f;
constexpr float FrameSeconds = 0.20f;
struct Vec3 { float x = 0, y = 0, z = 0; };
Vec3 BallisticPosition(Vec3 position, Vec3 velocity, float seconds);
Vec3 operator+(Vec3 a, Vec3 b);
Vec3 operator-(Vec3 a, Vec3 b);
Vec3 operator*(Vec3 a, float b);
float Length(Vec3 a);
float Distance(Vec3 a, Vec3 b);
struct Obstacle {
    Vec3 center, half;
    bool building = false, halfCover = false;
    float height = 0;
    bool blocksMovement = true;
    uint64_t id=0;
};
constexpr float UpperFloor = 3.2f;
struct Building { Vec3 center; Vec3 half{5,4,0}; size_t firstObstacle=0, obstacleCount=0; };
struct CoverPosition { Vec3 shelter, peek; bool crouch = true, window = false; uint64_t id=0, source=0; };
struct NavigationCache;
struct RouteGraph;
struct TacticalVisibilityCache;
struct SpatialIndex;
struct QueryProfile { double tacticalSeconds=0,corridorSeconds=0;uint64_t tacticalQueries=0,tacticalExpanded=0; double navigationSeconds=0; uint64_t paths=0,sight=0,collision=0;int depth=0; };
struct GroundSurface {uint64_t id=0;Vec3 center{},half{},slope{};};
struct SurfaceLink {uint64_t id=0;Vec3 from{},to{};};
bool InsideSurface(const GroundSurface& surface,Vec3 p);
float SurfaceHeight(const GroundSurface& surface,Vec3 p);
struct Map {
    float groundBase=0;
    std::vector<GroundSurface> surfaces;std::vector<SurfaceLink> surfaceLinks;
    std::shared_ptr<QueryProfile> queryProfile;
    uint64_t revision=1,nextGeometryId=1;
    bool prepared=false;
    mutable uint64_t coverRevision=0;
    mutable std::shared_ptr<const SpatialIndex> spatial;
    mutable std::shared_ptr<const std::vector<CoverPosition>> coverCatalog;
    float halfWidth = 170, halfHeight = 150;
    std::vector<Obstacle> obstacles;
    std::vector<Building> buildings;
    std::vector<CoverPosition> windows;
    mutable std::shared_ptr<NavigationCache> navigation;
    mutable std::shared_ptr<RouteGraph> routeGraph;
    mutable std::shared_ptr<TacticalVisibilityCache> tacticalVisibility;
};
Map MakeSkirmishMap();
Map MakeTrenchMap();
void AddBuilding(Map& map, Vec3 center);
bool OnStairs(const Map& map, Vec3 position);
const std::vector<CoverPosition>& CoverPositions(const Map& map);
void PrepareGeometry(Map& map);
void InvalidateGeometry(Map& map);
bool RemoveObstacle(Map& map,uint64_t id);
bool ReplaceObstacle(Map& map,uint64_t id,Obstacle replacement);
bool CoverExists(const Map& map,uint64_t id);
// Returns first segment contact in [0,1]; negative means no intersection.
float SegmentBox(Vec3 a, Vec3 b, const Obstacle& box, float padding = 0);
float ObstacleHeight(const Obstacle& box);
float SegmentObstacle(Vec3 a, Vec3 b, const Obstacle& box);
float IndexedContact(const Map& map,Vec3 from,Vec3 to,bool any,float padding=-1);
float MapContact(const Map& map, Vec3 a, Vec3 b);
float SegmentSoldier(Vec3 a, Vec3 b, Vec3 from, Vec3 to, float height = 1.85f);
bool ClearLine3D(const Map& map, Vec3 from, Vec3 to);
bool ClearLine(const Map& map, Vec3 a, Vec3 b, float padding = 0);
bool Walkable(const Map& map, Vec3 p);
std::vector<Vec3> FindPath(const Map& map, Vec3 from, Vec3 to);

enum class Stance { Standing, Crouched };
float BodyHeight(Stance stance);
bool ProtectedAt(const Map& map, Vec3 position, Vec3 threat, Stance stance);
enum class Doctrine { Balanced, Cautious, Aggressive };
enum class Approach { Center, North, South };
enum class Role { Sergeant, Corporal, Rifleman, MachineGunner, Lieutenant, PlatoonSergeant };
enum class Task { None, Overwatch, Advance, Hold, Rally, RearGuard, ClearLane, Flank, PullBack, BoundMove, BoundCover, Window };
struct TacticalRoute;
struct ManeuverAssessment;
struct TeamPlan {
    bool liftFire=false;Vec3 liftedSector{};int targetEnemy=-1;
    std::shared_ptr<const TacticalRoute> route;
    bool bounding=false, released=false;
    int moving=0, serial=0;
    Vec3 target{};
    std::array<Vec3,SquadSize> holds{}, moves{};
    std::array<int,2> windowTeam{{-1,-1}};
    std::array<Vec3,2> windows{};
};
enum class TaskStatus { Issued, Received, Executing, Interrupted, Blocked, Done, Failed, Superseded };
enum class TaskCause { None, Shelter, Passage, Reload, Wounded, Fire, Unreachable, Arrived, Casualty, Replaced, Geometry, BattleEnded };
struct TaskReceipt {
    uint64_t id=0; int soldier=-1, serial=0, sequence=0;bool active=true;
    TaskStatus status=TaskStatus::Issued; TaskCause cause=TaskCause::None;
    float at=-100; Vec3 position{},goal{};uint64_t route=0,geometry=1;int target=-1;
};
struct Assignment {
    uint64_t id=0,geometry=1; int target=-1;
    bool hasSlot=false;CoverPosition slot;
    TaskStatus status=TaskStatus::Issued; TaskCause cause=TaskCause::None;
    int statusSequence=0; float statusAt=0;

    Task task = Task::None;
    int issuer = -1, serial = 0;
    Vec3 position{}, sector{};
    float issuedAt = 0, receivedAt = 0, activatedAt = 0;
    TeamPlan teamPlan;
};
enum class ReactionKind { Sight, Order, Report, Ready, UnderFire, WoundReport, FireReport, FriendlySight, LaneReport, PlatoonReport, PlatoonOrder, MovementReport, DeliveryReport, TaskReport, SupportSector };
enum class Action { Advance, Cover, Fire, Retreat, Hold, Wounded, Killed };
enum class Reason { Search, Contact, Suppressed, Injury, ClearShot, Watching, LostContact, Down,
    Settle, Peek, CoverFire, Relocate, Flanked, Duck, PopUp, Overwatch, OrderedAdvance, AwaitOrders, Regroup, SuppressiveFire, RearPosition, RearFire, SquadFlank, SquadPullBack, ClearLane, EmergencyCover, ProtectedHold, AtWaypoint, PassageWait, BoundAdvance, BoundSupport, WindowPosition };
enum class EventKind { Contact, Decision, Shot, Hit, Casualty, Result, OrderIssued, OrderReceived, Report, Succession, Reaction };
enum class Terrain { FracturedWorks, Trenches };
struct Config {
    bool recoveryFixture=false; // Experimental policy: controlled encounters only until acceptance.

    Terrain terrain=Terrain::FracturedWorks;
    uint32_t seed = 107;
    Doctrine doctrine = Doctrine::Balanced;
    Doctrine emberDoctrine = Doctrine::Balanced;
    Approach approach = Approach::Center;
    bool supportWeapon = true;
    float maxSeconds = 360;
};
inline bool SameConfig(const Config& a,const Config& b) {
    return a.recoveryFixture==b.recoveryFixture&&a.terrain==b.terrain&&a.seed==b.seed&&a.doctrine==b.doctrine&&a.emberDoctrine==b.emberDoctrine&&a.approach==b.approach&&
        a.supportWeapon==b.supportWeapon&&a.maxSeconds==b.maxSeconds;
}
Map MakeBattleMap(const Config& config);
struct Contact {
    bool known = false, visible = false;
    Vec3 position{};
    float observedAt = -100;
    float aimHeight = 1.45f;
    Vec3 aimOffset{};
    float registeredAt = -100;
    int reportSource=-1;
    bool automaticWeapon=false;
    float clearedAt=-100, emptySince=-1, passedAt=-1, lastFireAt=-100;
};
struct SupportThreat {int enemy=-1;Contact contact;};
struct SupportSector {uint64_t route=0;float observedAt=-100;bool lifted=false;std::vector<SupportThreat> threats;};
struct FireArea { Vec3 position{}; float intensity=0, observedAt=-100; };
struct FireLane { Vec3 origin{}, target{}; float spread=0.06f, observedAt=-100; };
enum class PlatoonTask { None, Support, FlankNorth, FlankSouth, Consolidate, Reserve };
struct SquadSituation {
    int squad=-1, leader=-1, active=0, enemy=-1;
    Vec3 position{};
    bool engaged=false, supportUseful=false, movementBlocked=false;
    int machineGuns=0, mobile=0;
    float suppression=0;
    float danger=0, observedAt=-100;
    Contact contact;
};
struct PlatoonDirective {
    PlatoonTask task=PlatoonTask::None;
    int issuer=-1, serial=0, enemy=-1;
    Vec3 position{}, sector{};
    Contact contact;
    float issuedAt=0, receivedAt=0, activatedAt=0, expiresAt=0;
};
struct PlatoonCommand {
    int leader=-1, sergeant=-1, supportSquad=-1, flankSquad=-1, mainEffortSquad=-1, reserveSquad=-1, plans=0;
    float disruptedUntil=0, nextPlanAt=0;
    PlatoonTask maneuver=PlatoonTask::None;
    Vec3 sector{};
};
struct DeliveredRound {float at=0;Vec3 target{};};
struct FireDelivery { int shooter=-1, enemy=-1, rounds=0; Vec3 origin{}, target{}; float firstAt=-100, observedAt=-100; std::array<float,8> times{{-100,-100,-100,-100,-100,-100,-100,-100}}; std::vector<DeliveredRound> history; };
struct MoveFailure { int soldier=-1, order=0; Vec3 destination{}; float observedAt=-100; };
struct Soldier {
    SupportSector supportSector;
    std::array<TaskReceipt,SquadSize> taskReports{};
    std::vector<TaskReceipt> taskOutbox;
    bool taskLossReported=false;

    std::array<FireDelivery,16> deliveries{};
    std::array<MoveFailure,SquadSize> movementReports;
    int id = 0, team = 0, squad = 0;
    Vec3 position{}, facing{1,0}, goal{};
    float health = 100, suppression = 0;
    int rounds = 0;
    float lastShotAt=-100;
    uint64_t knowledgeRevision=0;
    float reactionBase = 0.35f, reactionUntil = 0;
    ReactionKind reactingTo = ReactionKind::Sight;
    int pendingReactions = 0;
    float understoodHealth = 100, understoodSuppression = 0, supportReadyAt = -100;
    float supportActivityAt = -100;
    int reportedSupportRounds = 0;
    float supportReportAt=-100, supportContactAt=-100;
    Vec3 reportedSupportPosition{}, reportedSupportAim{};
    bool supportBlocked=false;
    int waitingPassage=-1;
    float passageWaitSeconds=0;
    float reloadUntil = 0;
    bool areaFire = false;
    bool holdingFire = false;
    float friendlyRisk = 0;
    float blockedSince = -100;
    float blockedSeconds = 0, lastBlockedAt = -100;
    float aim = 0;
    int aimTarget = -1;
    Vec3 aimPoint{};
    bool machineGun = false;
    Role role = Role::Rifleman;
    Assignment assignment;
    bool regrouping = false;
    Stance stance = Stance::Standing;
    Action action = Action::Advance;
    Reason reason = Reason::Search;
    std::array<Contact, UnitCount> contacts{};
    std::array<Contact, UnitCount> reports{};
    std::array<bool, UnitCount> knownWounded{};
    std::array<FireArea, 8> fireAreas{};
    std::array<Contact, UnitCount> allies{};
    std::array<Vec3, UnitCount> allyVelocity{};
    std::array<FireLane, UnitCount> blockedLanes{};
    std::array<SquadSituation,SquadsPerTeam> platoonReports{};
    PlatoonDirective platoonOrder;
    bool Active() const { return health > 0; }
};
inline bool IsPlatoonStaff(const Soldier& s){return s.role==Role::Lieutenant||s.role==Role::PlatoonSergeant;}
const char* RankTag(Role role);
const char* PlatoonTaskName(PlatoonTask task);
// Perception boundary: only the sensory producer may inspect an enemy body.
float SightRange(const Soldier& observer);
Contact SenseEnemy(const Soldier& observer,const Soldier& target,const Map& map,float time);
enum class Maneuver { Advance, FlankNorth, FlankSouth, PullBack, Reposition, Press };
enum class SquadProgress { Deploying, Moving, Supporting, UnderFire, Regrouping, Waiting, Recovering, RearGuard };
enum class SupportState { Deploying, Watching, Effective, Blocked, Stale, WrongAngle, Moving };
enum class SquadPhase { Search, EstablishFire, HoldSuppress, PrepareMovement, Bound, Withdraw, Regroup, Blocked };
enum class MoveBlock { None, Fire, Support, Execution };
struct MovementBlock {
    MoveBlock reason=MoveBlock::None;
    float started=0, pressure=0, improvedSince=-1;
    Vec3 origin{}, target{}, supportPosition{}, alternative{};
    bool hasAlternative=false;
    float nextRouteAt=0;
    int support=-1;
    bool hadSupport=false;
};
const char* SquadPhaseName(SquadPhase phase);
enum class DrillNode { Search, EstablishFire, Traverse, Occupy, Assess, Withdraw };
struct DrillState {
    DrillNode node=DrillNode::Search; int generation=0, target=-1;
    Vec3 targetPosition{},supportPosition{};
    std::array<Vec3,SquadSize> slots{},stageSlots{},issuedSlots{};
    std::array<CoverPosition,SquadSize> assaultSlots{};
    std::array<uint64_t,SquadSize> coverIds{},expected{};
    std::array<bool,SquadSize> movers{};
    bool initialized=false,selected=false,released=false,fireShifted=false;
    bool closeOccupation=false,finalQueryDone=false;int occupationLead=-1;
    uint64_t screenedKnowledge=0,screenedGeometry=0;int screenedStage=-1;
    float currentExposure=0;bool screeningBlocked=false;
    float nextAssessment=0,opportunity=-1;uint64_t knowledge=0,geometry=0;
};
struct SquadCommand {
    DrillState drill;

    std::shared_ptr<const TacticalRoute> route;
    int routeSerial=0,routeStage=0;
    std::shared_ptr<const ManeuverAssessment> routeAssessment;
    SquadPhase phase=SquadPhase::Search;
    int planId=0;float planStarted=0,commitUntil=0,opportunitySince=-1;
    bool coveringReady=false;
    float moveExposure=0, lastEffectiveAt=0, preparationSeconds=8;
    std::string candidateScores;
    MovementBlock movementBlock;
    std::array<Vec3,4> failedMoves{};
    int failedMoveCount=0;
    std::string planReason="search assigned sector";
    Vec3 preparedTarget{};
    int trackedEnemy=-1;Vec3 enemyReference{};float enemyReferenceAt=-100,heavyFireAt=-100;
    int leader = -1, support = -1;
    bool advancing = false, supportReady = false;
    float disruptedUntil = 0;
    Maneuver maneuver=Maneuver::Advance;
    bool hasWaypoint=false;
    Vec3 waypoint{};
    float maneuverUntil=0, danger=0;
    bool engaged=false;
    float pressureSince=-1, nextManeuverAt=0;
    float friendlyStrength=0, enemyStrength=0, favorableSince=-1, unfavorableSince=-1;
    float lastContactAt=-100, nextAssessmentMove=0;
    int presses=0, withdrawals=0, searchesResumed=0;
    bool searching=true;
    SquadProgress progress=SquadProgress::Deploying;
    float idleSeconds=0;
    int recoveries=0;
    bool supportNeedsMove=false;
    Vec3 supportMoveFrom{};
    bool supportUseful=false;
    SupportState supportState=SupportState::Deploying;
    float supportProblemSince=-1, nextSupportMove=0;
    int supportRepositions=0;
    TeamPlan teamPlan;
    int boundsCompleted=0, building=-1;
    float boundStarted=-1, boundReleasedAt=-1, boundRetryAt=0, buildingUntil=0, buildingRetryAt=0;
    Vec3 mission{}, boundOrigin{};
    int searchLeg=0, platoonOrderSerial=0;
    PlatoonTask platoonTask=PlatoonTask::None;
    float platoonUntil=0, platoonReadySince=-1;
    int preparedPlatoonSerial=0;
};
float AimSeconds(const Soldier& soldier);
float ShotSpread(const Soldier& soldier);
float VerticalSpread(const Soldier& soldier);
struct FireSolution { int enemy=-1; Vec3 point{}; float observedAt=-100; bool area=false; };
FireSolution SelectFireSolution(const Soldier& soldier,const Map& map,float time);
float FriendlyFireRisk(const Soldier& soldier,const Map& map,Vec3 aim,float time);
bool ShouldHoldFire(const Soldier& soldier,float risk);
void UpdateAim(Soldier& soldier, int target, Vec3 position, float dt);
struct Frame {
    float time = 0;
    std::array<Soldier, UnitCount> soldiers;
    std::array<SquadCommand, SquadCount> command{};
    std::array<PlatoonCommand,2> platoon{};
};
// Tactical input contains personal observations and friendly reservations only.
struct Tactics {
    uint64_t coverId=0,geometryRevision=0;
    bool assigned = false, peeking = false, halfCover = false;
    bool defensiveOnly = false, emergency = false;
    int roundsAtPeek = 0;
    float healthAtPeek = 100, readyAt = 0;
    Vec3 shelter{}, peek{};
    Vec3 travelPosition{};
    float phaseUntil = -1, expires = 0, lastProgress = 0, lastDistance = 1e9f;
};
struct DecisionAlternatives;
struct Order { Vec3 goal; Action action; Reason reason; Stance stance = Stance::Standing; };
Order ChooseOrder(const Soldier& self, const Map& map, const Config& config,
    const std::vector<Vec3>& friendlyReservations, Tactics& memory, float time, DecisionAlternatives* alternatives=nullptr);
struct Event {
    float time = 0;
    EventKind kind = EventKind::Decision;
    int actor = -1, target = -1;
    std::string text;
};
struct Shot {
    float time = 0, impactTime = 0;
    int owner = -1;
    Vec3 start{}, end{};
    bool hit = false, suppressive = false;
    Vec3 aimedAt{};
    enum class Impact { None, Ground, Cover, Soldier, OutOfBounds };
    Impact impact = Impact::None;
    int target = -1, aimedEnemy=-1;
    struct Sample { float time; Vec3 position; };
    std::vector<Sample> flight;
};
// Returns only the part of the recorded flight reached at this replay time.
bool ProjectilePosition(const Shot& shot, float time, Vec3& position);
struct DiagnosticOptions { bool enabled=true, detailed=false; int soldier=-1,squad=-1; float from=0,to=600; };
struct Diagnostics;
struct GeometryEdit { float time=0; uint64_t obstacle=0; bool remove=true; Obstacle replacement; };
struct GeometryVersion { float time=0; Map map; std::string reason; };
struct Record {
    std::vector<GeometryVersion> geometryVersions;
    std::shared_ptr<Diagnostics> diagnostics;
    Config config;
    int encounter=0;
    Map map;
    std::vector<Frame> frames;
    std::vector<Event> events;
    std::vector<Shot> shots;
    int winner = -1;
    std::string conclusion;
    float duration = 0;
};
// Outcome uses active combatants; location never awards points.
bool ResolveDeathmatch(Record& record, const Frame& frame, bool projectilesPending, bool timeLimit);
Frame InitialFrame(const Config& config);
// Investigation layouts use the same authoritative simulation and start without enemy knowledge.
void MakeMGEncounter(const Config& config,int variant,Map& map,Frame& frame);
Record Simulate(const Config& config,const DiagnosticOptions& diagnostics={},const std::vector<GeometryEdit>& geometry={},int encounter=0);
const Map& GeometryAt(const Record& record,float time);
const char* Name(int id);
const char* RoleName(Role role);
const char* TaskName(Task task);
const char* ActionName(Action action);
const char* ReasonText(Reason reason);
const char* DoctrineName(Doctrine doctrine);
const char* ApproachName(Approach approach);
std::string EventLog(const Record& record);
}
