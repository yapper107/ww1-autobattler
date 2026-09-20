#pragma once
// Engine-independent authoritative simulation. Units are metres and seconds.
#include "Stats.h"
#include "Weapons.h"
#include <array>
#include <cstdint>
#include <string>
#include <vector>
#include <memory>
#include <functional>

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
struct SegmentMemo; // Exact-argument memo of line queries for one geometry revision (SpatialSim.cpp).
struct QueryProfile { double tacticalSeconds=0,corridorSeconds=0;uint64_t tacticalQueries=0,tacticalExpanded=0; double navigationSeconds=0; uint64_t paths=0,sight=0,collision=0,memoLookups=0,memoHits=0;int depth=0; };
struct GroundSurface {uint64_t id=0;Vec3 center{},half{},slope{};};
struct SurfaceLink {uint64_t id=0;Vec3 from{},to{};};
bool InsideSurface(const GroundSurface& surface,Vec3 p);
float SurfaceHeight(const GroundSurface& surface,Vec3 p);
struct Map {
    bool linkedSurfaceRouting=false; // Imported layouts only; authored routing is unchanged.
    float groundBase=0;
    std::vector<GroundSurface> surfaces;std::vector<SurfaceLink> surfaceLinks;
    std::shared_ptr<QueryProfile> queryProfile;
    uint64_t revision=1,nextGeometryId=1;
    bool prepared=false;
    mutable uint64_t coverRevision=0;
    mutable std::shared_ptr<const SpatialIndex> spatial;
    mutable std::shared_ptr<SegmentMemo> segments;
    mutable std::shared_ptr<const std::vector<CoverPosition>> coverCatalog;
    float halfWidth = 170, halfHeight = 150;
    std::vector<Obstacle> obstacles;
    std::vector<Building> buildings;
    std::vector<CoverPosition> windows;
    mutable std::shared_ptr<NavigationCache> navigation;
    mutable std::shared_ptr<RouteGraph> routeGraph;
    mutable std::shared_ptr<TacticalVisibilityCache> tacticalVisibility;
};
struct MapDecoration { Vec3 center{},half{}; int kind=0; }; // road, yard, floor, roof, damaged floor
struct ImportedBattlefield {
    Map map;
    std::array<Vec3,UnitCount> positions{},goals{};
    std::vector<MapDecoration> decorations;
    std::vector<Vec3> coverFacing;
    std::string name,kind,source;
    uint32_t seed=0;
    uint64_t digest=0;
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
// Memoises compute(map,a,b,pad) by the exact bits of its arguments for the map's
// current revision. kind separates callers whose semantics differ for equal
// arguments. Results are identical to calling compute directly.
bool MemoisedSegment(const Map& map,Vec3 a,Vec3 b,float pad,int kind,bool (*compute)(const Map&,Vec3,Vec3,float));
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
struct FireLane { Vec3 origin{}, target{}; float spread=0.06f, observedAt=-100; };
struct TeamPlan {
    std::vector<FireLane> friendlyAssaultLanes;
    bool assaultAreaFire=false;Vec3 assaultFireArea{};int assaultFireEnemy=-1;
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
enum class GoalPurpose { None, Seize, Support, Observe, Withdraw };
struct GoalIntent {
    int id=0, parent=0;
    GoalPurpose purpose=GoalPurpose::None;
    Vec3 objective{};
    float radius=8;
    float expiresAt=0;
};
enum class TaskCause { None, Shelter, Passage, Reload, Wounded, Fire, Unreachable, Arrived, Casualty, Replaced, Geometry, BattleEnded, Observed, Support, Timeout, NoObservation, AwaitSupport, InsufficientStrength, LocalSupport };
enum class Completion { Legacy, Transit, Occupy, Observe, Support };
struct ExecutionContract {
    Completion completion=Completion::Legacy;
    int method=0,stage=0,generation=0;
    float deadline=0;
    bool paused=false;
    bool unavailable=false;
    bool rifleSupport=false;int supportThreat=-1;
    bool arrivalCheck=false; // Drills: stage-clock expiry requests a physical arrival receipt.
    float rushSeconds=0; // Drills only: bounded movement permission after activation.
    bool attackMove=false; // Drills only: the moving element of a bound toward the enemy (plan 019 walking fire).
};
struct ObservationCoverage {
    int observer=-1,method=0,stage=0,generation=0;
    Vec3 position{},sector{};
    float observedAt=-100,receivedAt=-100;
    unsigned samples=0; // Nine tested sight lines; never a claim that the region is safe.
};
struct TaskReceipt {
    ExecutionContract execution;
    ObservationCoverage coverage;
    int goalId=0;
    uint64_t id=0; int soldier=-1, serial=0, sequence=0;bool active=true;
    TaskStatus status=TaskStatus::Issued; TaskCause cause=TaskCause::None;
    float at=-100; Vec3 position{},goal{};uint64_t route=0,geometry=1;int target=-1;
    float remaining=-1;
};
struct Assignment {
    ExecutionContract execution;
    GoalIntent intent;
    uint64_t id=0,geometry=1; int target=-1;
    bool hasSlot=false;CoverPosition slot;
    TaskStatus status=TaskStatus::Issued; TaskCause cause=TaskCause::None;
    int statusSequence=0; float statusAt=0; Vec3 statusPosition{};

    Task task = Task::None;
    int issuer = -1, serial = 0;
    Vec3 position{}, sector{};
    float issuedAt = 0, receivedAt = 0, activatedAt = 0;
    TeamPlan teamPlan;
    std::shared_ptr<const TacticalRoute> areaRoute;float areaRouteRadius=0;
    int drillInstance=0,element=-1;bool baseOfFire=false;Vec3 areaMin{},areaMax{},areaDiscCenter{};float areaDiscRadius=0;
    float drillRushPausedAt=0,drillRushPausedSeconds=0;
};
enum class ReactionKind { Sight, Order, Report, Ready, UnderFire, WoundReport, FireReport, FriendlySight, LaneReport, PlatoonReport, PlatoonOrder, MovementReport, DeliveryReport, TaskReport, SupportSector, Coverage, SupportProgress, SquadRadio };
enum class Action { Advance, Cover, Fire, Retreat, Hold, Wounded, Killed };
enum class Reason { Search, Contact, Suppressed, Injury, ClearShot, Watching, LostContact, Down,
    Settle, Peek, CoverFire, Relocate, Flanked, Duck, PopUp, Overwatch, OrderedAdvance, AwaitOrders, Regroup, SuppressiveFire, RearPosition, RearFire, SquadFlank, SquadPullBack, ClearLane, EmergencyCover, ProtectedHold, AtWaypoint, PassageWait, BoundAdvance, BoundSupport, WindowPosition };
enum class EventKind { Contact, Decision, Shot, Hit, Casualty, Result, OrderIssued, OrderReceived, Report, Succession, Reaction };
enum class Terrain { FracturedWorks, Trenches };
struct OfficerProfile { float judgment=.7f, risk=.5f, adaptability=.7f, communication=.7f; };
inline bool SameProfile(const OfficerProfile& a,const OfficerProfile& b){return a.judgment==b.judgment&&a.risk==b.risk&&a.adaptability==b.adaptability&&a.communication==b.communication;}
enum class CognitiveMethod { None, Observe, SupportedAdvance, AlternateApproach, Hold, Withdraw };
enum class MethodStage { Assess, Prepare, Execute, Complete, Blocked };
struct FailedAttempt {
    CognitiveMethod method=CognitiveMethod::None;
    Vec3 objective{},destination{};
    uint64_t geometry=0,threats=0;
    float at=0;
    TaskCause cause=TaskCause::None;
};
struct SupportFailure {int soldier=-1;float observedAt=-100;TaskCause cause=TaskCause::None;};
struct InjuryAssessment {
    int generation=-1;
    float deadline=0,remaining=-1,evidenceAt=-100,updatedAt=0,pauseSince=-1;
    bool pathMetric=false;
    bool operator==(const InjuryAssessment& b)const{return generation==b.generation&&deadline==b.deadline&&remaining==b.remaining&&evidenceAt==b.evidenceAt&&updatedAt==b.updatedAt&&pauseSince==b.pauseSince&&pathMetric==b.pathMetric;}
};
struct AcceptedPlan {
    GoalIntent mission;
    std::array<CoverPosition,SquadSize> slots{};
    std::array<bool,SquadSize> hasSlot{};
    std::array<bool,SquadSize> unavailable{},holders{},scouts{};
    bool scouted=false;float scoutDeadline=0;
    std::array<float,SquadSize> holderDeadline{};
    std::array<InjuryAssessment,SquadSize> injuries{};
    std::array<int,SquadSize> slotRetries{};
    std::array<Vec3,SquadSize> rejectedPositions{};
    std::array<uint64_t,SquadSize> expected{};
    std::array<int,SquadSize> generations{};
    std::vector<FailedAttempt> attempts;
    std::vector<SupportFailure> supportFailures;
    float prepareDeadline=0;
    int support=-1,supportSquad=-1,requiredOccupants=2,supportThreat=-1,requestedThreat=-1;
    int localSupport=-1,localThreat=-1;Vec3 localPosition{},localSector{};
    float localAssignedAt=0,localDeadline=0;bool localUseful=false;
    uint64_t awaitedSupportAssignment=0;
    float supportWaitStarted=-1;
    bool supportRetargeted=false;
    bool supportDeployed=false,supportUseful=false,informationGained=false;
    uint64_t inspectedGeometry=0,inspectedThreats=0;Vec3 inspectedSector{};
    float stageStarted=0,lastProgress=0,safetySince=-1,executionDeadline=0;
    uint64_t geometry=0,threats=0;
    GoalIntent intent;
    CognitiveMethod method=CognitiveMethod::None;
    MethodStage stage=MethodStage::Assess;
    int revision=0, directive=0, routeStage=0, executionGeneration=0;
    std::shared_ptr<const TacticalRoute> route;
    std::array<Vec3,SquadSize> positions{},holds{};
    std::array<bool,SquadSize> movers{};
    int failedMethods=0;
    Vec3 failedDestination{};
    Vec3 destination{}, sector{};
    float started=0, committedUntil=0, supportSince=-1, reconsiderAt=0;
    bool safetyOverride=false, requiresSupport=false, exhausted=false;
    float riskAtCommit=0;
    uint64_t knowledge=0;
    std::string reason;
};
enum class ScenarioFamily { None, F1, F2, F3 };
// Static defence: Ember occupies prepared cover around one locality and never
// manoeuvres, so an attacking controller has a fixed problem to solve.
enum class DefenceLayout { None, Building, Spread, Clusters };
const char* DefenceLayoutName(DefenceLayout layout);
struct Config {
    bool cognition=false, fullVision=false;
    float reportDelay=.75f;
    std::array<StatDistribution,2> statProfiles{};
    uint32_t rosterSeed=0; // 0 means "use seed"; the same roster across battle seeds keeps the same soldiers.
    OfficerProfile officer;
    bool leaderEffects=false, equalTroops=false; // Explicit leader comparison; historical configurations unchanged.
    std::array<OfficerProfile,2> platoonProfiles{};

    bool foundations=false; // Opt-in perception/belief experiment; legacy baseline remains reproducible.
    float estimateBias=0; // Interpretation only: -1 underestimates, +1 overestimates.
    bool recoveryFixture=false; // Experimental policy: controlled encounters only until acceptance.

    // Layout None leaves every historical battle untouched. seed 0 means "use seed",
    // like rosterSeed. objective/attackerObjectives are resolved once by Simulate
    // before the first tick: they are the attacker's own pre-battle orders and never
    // carry a defender position.
    struct StaticDefence {
        DefenceLayout layout=DefenceLayout::None;
        int defenders=12;
        uint32_t seed=0;
        bool resolved=false;
        Vec3 objective{};
        std::array<Vec3,SquadsPerTeam> attackerObjectives{};
    } staticDefence;

    // Fire on the move (plan 019). On by default; --no-moving-fire is the A/B control
    // and reproduces the pre-019 battle exactly.
    bool movingFire=true;

    bool drills=false;
    ScenarioFamily family=ScenarioFamily::None;
    uint32_t genSeed=1;
    Terrain terrain=Terrain::FracturedWorks;
    std::shared_ptr<const ImportedBattlefield> battlefield;
    uint32_t seed = 107;
    Doctrine doctrine = Doctrine::Balanced;
    Doctrine emberDoctrine = Doctrine::Balanced;
    Approach approach = Approach::Center;
    bool supportWeapon = true;
    float maxSeconds = 360;
};
inline bool SameConfig(const Config& a,const Config& b) {
    if(bool(a.battlefield)!=bool(b.battlefield)||(a.battlefield&&a.battlefield->digest!=b.battlefield->digest))return false;
    if(a.rosterSeed!=b.rosterSeed||!SameDistribution(a.statProfiles[0],b.statProfiles[0])||!SameDistribution(a.statProfiles[1],b.statProfiles[1]))return false;
    // Only the authored static-defence inputs are compared, and only when a layout
    // is selected: the resolved objective is derived from them and the map.
    if(a.staticDefence.layout!=b.staticDefence.layout)return false;
    if(a.staticDefence.layout!=DefenceLayout::None&&(a.staticDefence.defenders!=b.staticDefence.defenders||a.staticDefence.seed!=b.staticDefence.seed))return false;
    return a.movingFire==b.movingFire&&a.leaderEffects==b.leaderEffects&&a.equalTroops==b.equalTroops&&SameProfile(a.platoonProfiles[0],b.platoonProfiles[0])&&SameProfile(a.platoonProfiles[1],b.platoonProfiles[1])&&a.officer.communication==b.officer.communication&&a.drills==b.drills&&a.family==b.family&&a.genSeed==b.genSeed&&a.cognition==b.cognition&&a.fullVision==b.fullVision&&a.reportDelay==b.reportDelay&&a.officer.judgment==b.officer.judgment&&a.officer.risk==b.officer.risk&&a.officer.adaptability==b.officer.adaptability&&a.foundations==b.foundations&&a.estimateBias==b.estimateBias&&a.recoveryFixture==b.recoveryFixture&&a.terrain==b.terrain&&a.seed==b.seed&&a.doctrine==b.doctrine&&a.emberDoctrine==b.emberDoctrine&&a.approach==b.approach&&
        a.supportWeapon==b.supportWeapon&&a.maxSeconds==b.maxSeconds;
}
inline bool TypedController(const Config& c){return c.cognition||c.drills;}
Map MakeBattleMap(const Config& config);
struct Contact {
    bool known = false, visible = false;
    Vec3 position{};
    float observedAt = -100;
    float aimHeight = 1.45f;
    Vec3 aimOffset{};
    float detectionDelay=0; // Sensory exposure/distance cost, never used by legacy policy.
    float registeredAt = -100;
    int reportSource=-1;
    int originalObserver=-1; // Preserved across relays; never refreshed by forwarding.
    bool automaticWeapon=false;
    float clearedAt=-100, emptySince=-1, passedAt=-1, lastFireAt=-100;
};
struct SupportThreat {int enemy=-1;Contact contact;};
struct FriendlyIntent {int soldier=-1;Vec3 position{},destination{};float observedAt=-100;};
struct SupportSector {int shooter=-1,requester=-1,stage=0;Vec3 focus{};uint64_t route=0;float observedAt=-100;bool lifted=false;std::vector<SupportThreat> threats;std::vector<FriendlyIntent> friendlies;};
struct SupportProgress {
    int shooter=-1,stage=0;uint64_t assignment=0,route=0;
    Vec3 position{},sector{};float observedAt=-100,statusAt=-100,deadline=0;
    TaskStatus status=TaskStatus::Issued;TaskCause cause=TaskCause::None;
};
struct FireArea { Vec3 position{}; float intensity=0, observedAt=-100; };
struct ReportedContact { int track=-1; Contact contact; };
struct RegionEstimate {
    int x=0,y=0,observations=0,automaticWeapons=0;
    float low=0,high=0,estimate=0,observedAt=-100,confidence=0;
    float unseen=0, uncertainty=0;
};
enum class PlatoonTask { None, Support, FlankNorth, FlankSouth, Consolidate, Reserve, Observe, Withdraw, Advance, Merge, FightHere, RetreatThere, HelpSquad };
struct FireDelivery;
struct SquadSituation {
    std::vector<ObservationCoverage> coverage;
    std::vector<FailedAttempt> attempts;
    CognitiveMethod method=CognitiveMethod::None;
    int supportSoldier=-1;
    float lastProgress=-100;
    Vec3 goalObjective{};
    GoalPurpose goalPurpose=GoalPurpose::None;
    bool observationComplete=false;
    std::vector<FireDelivery> deliveries;
    std::vector<ReportedContact> observations;
    int goalId=0,directive=0;
    TaskStatus goalStatus=TaskStatus::Executing;
    int squad=-1, leader=-1, active=0, enemy=-1;
    Vec3 position{};
    bool engaged=false, supportUseful=false, movementBlocked=false;
    int machineGuns=0, mobile=0;
    float suppression=0;
    float danger=0, observedAt=-100;
    Contact contact;
    int drillInstance=0,drillKind=0;
    TaskCause drillCause=TaskCause::None;
    bool drillSuperiority=false;bool drillRecovering=false;std::string drillNote;
    float phaseLineAt=-1,completedAssaultLineAt=-1;Vec3 assaultObjective{},assaultOrigin{};
    std::vector<Vec3> drillMemberPositions;
};
enum class SquadBroadcastKind { Fixing, Assaulting, NeedSupport, PhaseLine, Done };
struct SquadBroadcast {
    int serial=0,sender=-1,squad=-1,enemy=-1,side=0;
    SquadBroadcastKind kind=SquadBroadcastKind::Fixing;
    float sentAt=0,receivedAt=0;Vec3 position{},objective{};Contact contact;
};
struct PlatoonDirective {
    bool initiativeAllowed=true; // Command climate carried by own intent; never read another actor's hidden knowledge.
    int taskNode=0,mergeInto=-1,helpSquad=-1;bool hasArea=false,liftFire=false,fireMovement=false;
    Vec3 areaMin{},areaMax{},areaDiscCenter{};float areaRouteRadius=0,areaDiscRadius=0;FireLane assaultLane;
    std::shared_ptr<const TacticalRoute> corridor;
    int supportSoldier=-1,supportSquad=-1,committedStrength=0;
    bool supportWithdrawn=false;
    GoalIntent intent;
    bool hasAlternative=false;
    PlatoonTask alternativeTask=PlatoonTask::None;
    Vec3 alternativePosition{};
    PlatoonTask task=PlatoonTask::None;
    int issuer=-1, serial=0, enemy=-1;
    Vec3 position{}, sector{};
    Contact contact;
    float issuedAt=0, receivedAt=0, activatedAt=0, expiresAt=0;
};
// Intent persistence and reported advance progress; no platoon roles or corridor claims.
struct PlatoonTaskState {
    int revision=0,commander=-1;float nextAssessment=0;
    std::array<PlatoonDirective,SquadsPerTeam> assigned{};
    std::array<Vec3,SquadsPerTeam> advanceDoneObjectives{};
    std::array<bool,SquadsPerTeam> advanceDoneSeen{},advanceExhausted{};
    float observeStarted=-1;Vec3 observeObjective{};
    bool withdrawing=false;float believedRatio=1;
    std::array<float,SquadsPerTeam> needSince{{-1,-1,-1,-1}};
};
struct PlatoonCommand {
    int leader=-1, sergeant=-1, supportSquad=-1, flankSquad=-1, mainEffortSquad=-1, reserveSquad=-1, plans=0;
    float disruptedUntil=0, nextPlanAt=0;
    PlatoonTask maneuver=PlatoonTask::None;
    Vec3 sector{};
    PlatoonTaskState tasks;
};
struct DeliveredRound {float at=0;Vec3 target{};};
struct FireDelivery { bool supportWeapon=false; int shooter=-1, enemy=-1, rounds=0; Vec3 origin{}, target{}; float firstAt=-100, observedAt=-100; std::array<float,8> times{{-100,-100,-100,-100,-100,-100,-100,-100}}; std::vector<DeliveredRound> history; };
struct MoveFailure { int soldier=-1, order=0; Vec3 destination{}; float observedAt=-100; };
struct Soldier {
    std::array<ObservationCoverage,8> coverage{};
    bool cognition=false;
    OfficerProfile officer;
    bool leaderEffects=false, initiativeAllowed=true;
    float attentionUntil=0;
    int attentionTrack=-1;

    bool directionalSight=false;
    Vec3 look{1,0}; // Head/attention direction; independent of locomotion and weapon facing.
    float estimateBias=0;
    SupportSector supportSector;
    SupportProgress supportProgress;
    std::array<TaskReceipt,SquadSize> taskReports{};
    std::vector<TaskReceipt> taskOutbox;
    bool taskLossReported=false;

    std::array<FireDelivery,16> deliveries{};
    std::array<MoveFailure,SquadSize> movementReports;
    int id = 0, team = 0, squad = 0;
    Stats stats;
    WeaponItem weapon;
    WeaponStats gun;             // Effective weapon values; the only source of combat numbers.
    int magazineRemaining = 8;
    float swayPhase = 0, swayPhase2 = 0;   // Sway yaw and pitch phases, from the roster hash.
    float recoilSign = 1;        // Fixed yaw direction of this soldier's recoil kick.
    Vec3 recoil{};               // Accumulated recoil offset: x yaw, y pitch, z unused.
    Vec3 position{}, facing{1,0}, goal{};
    float maxHealth = 100;
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
    // Walking fire: movingFire is "delivering fire on an attack movement right now" and
    // drives the aim model, the pace and the exports; reloadDeferred is an empty magazine
    // carried at the walk, reloaded at the next halt.
    bool movingFire = false, reloadDeferred = false;
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
    int organisation=1; // Section; only the drills controller uses organisation templates.
    std::vector<SquadBroadcast> squadRadio;
    bool Active() const { return health > 0; }
};
inline bool IsPlatoonStaff(const Soldier& s){return s.role==Role::Lieutenant||s.role==Role::PlatoonSergeant;}
const char* RankTag(Role role);
const char* PlatoonTaskName(PlatoonTask task);
// The only writer of the machineGun organisation flag.
void EquipWeapon(Soldier& soldier,WeaponItem item);
// Wisdom quality of a sent report; base is the site's own resolved delay.
float ReportDelay(float base,const Soldier& sender);
// What a soldier assumes an enemy can reach. A soldier cannot read enemy stats.
constexpr float AssumedEnemyReach=95.f;
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
enum class BattleDrill { None, MoveTactically, ReactToContact, SupportByFire, SquadAttack, BreakContact, Occupy, Observe, Withdraw };
enum class MovementTechnique { Traveling, TravelingOverwatch, BoundingOverwatch };
struct KnownSquadMember {bool known=false;Vec3 position{};float health=0,suppression=0,observedAt=-100;Role role=Role::Rifleman;bool machineGun=false;};
enum class DrillStage { None, Travel, BoundSetup, Bound, ContactCover, ContactHold, Reorganise, BoundCover, SupportPrepare, SupportHold, AttackMove, AssaultLine, Assault, Consolidate, Retire, Occupation, Observation };
struct SquadActionState {
    int boundSupportThreat=-1;bool supportPositionReady=false,supportSearchTried=false,supportSearchExhausted=false;
    bool areaFireOrdered=false,assaultRushRecovered=false;
    float assaultFireSince=-1;
    std::array<bool,SquadSize> assaultRoster{},baseRoster{};
    bool helping=false;bool coveringBound=false,coveringAttempted=false;
    bool closureFallback=false;
    std::array<CoverPosition,SquadSize> pauseSlots{};
    std::array<bool,SquadSize> pauseHasSlot{},resumeMovers{};
    bool active=false,established=false,everEstablished=false,lifted=false,paused=false,attack=false,completed=false;
    float acceptedAt=0,lastEvidence=-100,lostAt=-1,phaseLineAt=-1,clearSince=-1,angle=0;
    Vec3 objective{},base{},assault{},rally{};
    int buddy=0,alternates=0,initialStrength=0;
    size_t routeStep=0;
    TaskCause cause=TaskCause::None;
    std::shared_ptr<const TacticalRoute> route;
    std::array<bool,UnitCount> threats{};
    std::array<bool,SquadSize> pausedOrders{},liftOrders{},supportOrders{},rushOrders{};
    std::array<Task,SquadSize> tasks{};
    std::array<Completion,SquadSize> completions{};
};
struct DrillPlan {
    PlatoonDirective acceptedDirective;bool directiveBoundary=true;
    std::vector<SquadBroadcast> broadcasts;
    bool helpApproach=false;Vec3 helpObjective{};
    int radioLaneRevision=0;
    int radioSequence=0,radioAttackInstance=0,radioSupportSquad=-1,radioLeadSquad=-1;
    std::array<std::array<int,UnitCount>,5> radioConsumed{};
    bool arrivalCheckPending=false;
    float radioFireSince=-1,radioPhaseAt=-1,radioDoneAt=-1;bool radioFixing=false,radioNeed=false;
    Vec3 radioObjective{},radioSupportPosition{};
    bool platoonArea=false,platoonLift=false;int platoonTaskNode=0;float directiveUntil=0;
    SquadActionState action;
    float believedEnemy=0;
    GoalIntent intent;
    BattleDrill kind=BattleDrill::None;
    MovementTechnique technique=MovementTechnique::Traveling;
    int instance=0,generation=0,leg=0,movingElement=0,target=-1,support=-1;
    float started=0,deadline=0,nextStage=0,lastProgress=0;
    bool initialized=false,blocked=false,paused=false,exhausted=false;
    int localRetries=0;std::string lastRejection;float completedAssaultLineAt=-1;
    Vec3 deployment{},destination{},sector{},center{},areaMin{},areaMax{};
    std::array<int,SquadSize> elements{{-1,-1,-1,-1,-1,-1,-1,-1}};
    std::array<Vec3,SquadSize> positions{};
    std::array<CoverPosition,SquadSize> slots{};
    std::array<bool,SquadSize> hasSlot{},movers{};
    std::array<uint64_t,SquadSize> expected{};
    std::array<KnownSquadMember,SquadSize> members{};
    std::array<std::shared_ptr<const TacticalRoute>,2> routes{};
    std::array<std::shared_ptr<const TacticalRoute>,SquadSize> memberRoutes{};
    std::vector<FailedAttempt> attempts;
    bool retreat=false,assessed=false,closing=false;
    float assessmentAt=0,interval=10;
    DrillStage stage=DrillStage::None;
    std::array<bool,SquadSize> issue{},waiting{},arrivals{};
    std::array<int,SquadSize> orderMethods{},orderGenerations{};
    std::array<uint64_t,SquadSize> slotGeometry{};
    std::array<bool,UnitCount> contactInside{};
    std::array<float,UnitCount> contactLastKnown{};
    std::array<int,2> strength{};
    float arrivalQuorumAt=-1,contactLostAt=-1,fireCandidateAt=0,superiorityCandidateAt=0;
    bool arrivalConsumed=false,coverComplete=false,closeAfterCover=false;
    bool effectiveFire=false,fireCandidate=false,superiority=false,superiorityCandidate=false;
    // deadline is a budget of eligible moving seconds, never a wall-clock expiry.
    float stageElapsed=0,clockAt=0;
    int stalledExpiries=0;
    Vec3 expiryPosition{};
    bool forceColumn=false,noProgressBlocked=false;
    std::array<bool,SquadSize> slotWaiting{},memberWasActive{};
    std::array<float,SquadSize> lossTimes{};

};
struct SquadCommand {
    AcceptedPlan accepted;
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
    DrillPlan battleDrill;
};
// Fire on the move (plan 019). AttackMovement is the user's WHO rule: an attack
// movement only, never a move to shelter, a peek, a rally, a pull-back or the rear.
// WalkingFire adds the quiet-flank rule and an empty magazine. Neither reads the map
// or any enemy truth, and neither consults Config: the caller applies config.movingFire.
bool AttackMovementTask(Task task);
bool AttackMovement(const Soldier& soldier);
bool FlankHoldsFire(const Soldier& soldier,float time);
bool WalkingFire(const Soldier& soldier,float time);
// How far the moving shooter may reach, and the reference-scaled movement penalty:
// factor at stats 100, less for a better soldier, more for a worse one.
float WalkingFireRange(const Soldier& soldier);
float MovePenalty(float factor,float statScale);
float AimReady(const Soldier& soldier);
float AimSeconds(const Soldier& soldier);
float ShotSpread(const Soldier& soldier);
float VerticalSpread(const Soldier& soldier);
// Sway and recoil are aim offsets in radians: x is yaw, y is pitch, z is unused.
// SwayOffset is a pure function of recorded state so the viewer can draw it.
float SwayAmplitude(const Soldier& soldier);
Vec3 SwayOffset(const Soldier& soldier,float time);
float RecoilKick(const Soldier& soldier);
void ApplyRecoil(Soldier& soldier);
void DecayRecoil(Soldier& soldier,float seconds);
// Energy ballistics. Speed decays as v0*exp(-dragK*distance), so the flight time
// to a point is the integral of that decay; dragK <= 0 falls back to distance/v0.
float FlightTime(float distance,float muzzleVelocity,float dragK);
// A body absorbs a fixed number of joules; a round that would keep less than the
// exit threshold stops inside and gives up all of its energy.
float DepositedEnergy(float impactEnergy);
float HitSeverity(float roll);
float HitDamage(float impactEnergy,float severity);
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
// Encounter fixtures set every soldier to stats 100 and max health 100.
void NeutraliseStats(Frame& frame);
// Throws std::logic_error if machineGun or the magazine disagrees with the equipped weapon.
void CheckWeaponConsistency(const Frame& frame);
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
    bool hit = false, suppressive = false, movingFire = false;
    Vec3 aimedAt{};
    enum class Impact { None, Ground, Cover, Soldier, OutOfBounds };
    Impact impact = Impact::None;   // The terminal stop; a round that over-penetrates keeps flying.
    int target = -1, aimedEnemy=-1;
    struct Sample { float time; Vec3 position; };
    std::vector<Sample> flight;
    struct Victim { int soldier=-1; float time=0, energy=0; };
    std::vector<Victim> victims;    // hit == !victims.empty(); target == victims.front().soldier.
};
// Returns only the part of the recorded flight reached at this replay time.
bool ProjectilePosition(const Shot& shot, float time, Vec3& position);
struct Record;struct Frame;
// frameSink sees every recorded frame as it is produced. With keepFrames false only the
// first frame stays in the record: a lean consumer (Diagnostics LeanRecorder) folds what
// it needs and the 1.6 MB frame is dropped. Simulation itself never reads later frames.
struct DiagnosticOptions { bool enabled=true, detailed=false; int soldier=-1,squad=-1; float from=0,to=600;
    std::function<void(const Record&,const Frame&)> frameSink; bool keepFrames=true; };
struct Diagnostics;
struct GeometryEdit { float time=0; uint64_t obstacle=0; bool remove=true; Obstacle replacement; };
struct GeometryVersion { float time=0; Map map; std::string reason; };
struct GeneratedScenario {
    ScenarioFamily family=ScenarioFamily::None;
    uint32_t genSeed=1;
    Map map;
    std::array<Vec3,2> deployment{};
    Vec3 objective{};float objectiveRadius=0;
    std::array<uint8_t,SquadCount> squads{};
    std::array<bool,2> machineGun{};
    std::array<Vec3,UnitCount> positions{};
    int corridors=0,screenPieces=0,lowCover=0,tallCover=0;
    float corridorWidth=0;
    std::string description;
};
const char* ScenarioFamilyName(ScenarioFamily family);
GeneratedScenario GenerateScenario(ScenarioFamily family,uint32_t genSeed);
bool ValidateScenario(const GeneratedScenario& scenario,std::string& error);
void ApplyScenario(const GeneratedScenario& scenario,const Config& config,Map& map,Frame& frame);
uint64_t ScenarioDigest(const GeneratedScenario& scenario);
// One occupied defensive position. shelter/peek are the ordinary cover pair, so a
// defender peeks, fires, ducks, reloads and is suppressed through the usual code.
struct DefencePosition { CoverPosition cover; bool sheltered=false; int cluster=-1; };
struct DefencePlan {
    DefenceLayout layout=DefenceLayout::None;
    uint32_t seed=0;
    // threat is the approach point the positions are protected from: sixty metres
    // out from the objective along the attacker's own deployment axis.
    Vec3 objective{},threat{};
    float radius=0;                        // Locality radius actually used for placement.
    int requested=0,exposed=0,clusters=0;  // exposed counts relaxed, unprotected positions.
    std::vector<DefencePosition> positions;
    std::array<int,UnitCount> occupant{};  // index into positions; -1 when not a defender.
    std::array<Vec3,SquadsPerTeam> attackerObjectives{};
    std::string note;
    bool Defends(int id) const { return id>=0&&id<UnitCount&&occupant[id]>=0; }
    const DefencePosition& At(int id) const { return positions[size_t(occupant[id])]; }
};
// Placement never consumes the battle RNG: every draw is a splitmix64 hash of
// (defence seed, layout, index, attempt). Throws std::runtime_error when the map
// cannot seat the requested defenders.
DefencePlan PlanStaticDefence(const Config& config,const Map& map,const std::array<Vec3,UnitCount>& deployment);
void ApplyStaticDefence(const DefencePlan& plan,const Config& config,Frame& frame);
struct Record {
    std::shared_ptr<const DefencePlan> defence;
    std::shared_ptr<const GeneratedScenario> generated;
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
// In-place form; a Frame is large enough that callers should avoid a temporary.
void InitialFrameInto(const Config& config,Frame& frame);
// Investigation layouts use the same authoritative simulation and start without enemy knowledge.
void MakeCognitiveEncounter(const Config& config,int variant,Map& map,Frame& frame);
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
