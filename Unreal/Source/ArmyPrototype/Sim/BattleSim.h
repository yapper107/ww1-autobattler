#pragma once
// Engine-independent authoritative simulation. Units are metres and seconds.
#include "Stats.h"
#include "Weapons.h"
#include "SquadPolicy.h"
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
    // Plan 029 (ARMYMAP 2 only; defaults everywhere else). flags: bit0 concealment (blocks sight,
    // not bullets), bit1 crater rim, bit2 reserved. concealment mirrors bit0.
    bool concealment=false;
    uint32_t flags=0;
};
constexpr float UpperFloor = 3.2f;
// authoredStairs: true for AddBuilding's authored house (fixed 10x8 shell, stair, slab, windows);
// false for an imported ARMYMAP 2 footprint (`B` record), which owns no obstacles and whose stairs
// are explicit stair surfaces. id/floors are the `B` record's (0 for authored buildings).
struct Building { Vec3 center; Vec3 half{5,4,0}; size_t firstObstacle=0, obstacleCount=0; bool authoredStairs=true; uint64_t id=0; int floors=0; };
// prone: ARMYMAP 2 `C ... crouch=2` (shelter prone, pop-up crouched); crouch stays true for it.
struct CoverPosition { Vec3 shelter, peek; bool crouch = true, window = false; uint64_t id=0, source=0; bool prone=false; };
struct NavigationCache;
struct RouteGraph;
struct TacticalVisibilityCache;
struct SpatialIndex;
struct SegmentMemo; // Exact-argument memo of line queries for one geometry revision (SpatialSim.cpp).
struct SquadRasterStatic; // Plan 026 4c: static map-view channels of one geometry revision (SquadRaster.h).
struct QueryProfile { double tacticalSeconds=0,corridorSeconds=0;uint64_t tacticalQueries=0,tacticalExpanded=0; double navigationSeconds=0; uint64_t paths=0,sight=0,collision=0,memoLookups=0,memoHits=0;int depth=0; };
// Plan 029: kind 0 floor, 1 ramp, 2 stair; level -1 lane/trench floor, 0 grade, >=1 storey; building
// is the owning `B` id (0 none); replacesGrade = level<=0 || stair. Defaults for ARMYMAP 1 and authored maps.
struct GroundSurface {uint64_t id=0;Vec3 center{},half{},slope{};int kind=0,level=0;uint64_t building=0;bool replacesGrade=true;};
// Plan 029 `P` record: a ground-level door passage (z 0) of an imported building.
struct DoorPassage {Vec3 center{},half{};};
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
    // Plan 033: the line-query memo and the planner's ray table of each revision are 2^cacheScale times smaller (0, the
    // default: their full size). Both are direct-mapped caches, so this changes speed and memory, never an answer; the
    // men's knowledge states of destruction use it (a few men query each).
    uint8_t cacheScale=0;
    mutable uint64_t coverRevision=0;
    mutable std::shared_ptr<const SpatialIndex> spatial;
    mutable std::shared_ptr<SegmentMemo> segments;
    mutable std::shared_ptr<const std::vector<CoverPosition>> coverCatalog;
    mutable std::shared_ptr<const SquadRasterStatic> rasterStatic; // read only by the schema-4 map view
    float halfWidth = 170, halfHeight = 150;
    std::vector<Obstacle> obstacles;
    std::vector<Building> buildings;
    std::vector<CoverPosition> windows;
    mutable std::shared_ptr<NavigationCache> navigation;
    mutable std::shared_ptr<RouteGraph> routeGraph;
    mutable std::shared_ptr<TacticalVisibilityCache> tacticalVisibility;
    // Plan 029 map-format flags, set only by the ARMYMAP 2 importer (and PrepareGeometry for the
    // derived two). Every map-format feature gates on these, so ARMYMAP 1 and authored maps never change.
    int formatVersion=0;           // 0 authored, 1 or 2 imported
    bool stackedSurfaces=false;    // ARMYMAP 2: layered Supported semantics (package F-B)
    bool hasConcealment=false;     // derived in PrepareGeometry: some obstacle has concealment
    bool importedBuildings=false;  // ARMYMAP 2 `B` records filled `buildings` (authoredStairs=false)
    // Plan 029 M-A2, a battle flag, not a map-format one: set by Simulate on its own copy when
    // Config::prone is on. The derived cover catalogue of an ARMYMAP 2 map adds prone cover behind low
    // obstacles only then.
    bool proneCover=false;
    std::vector<size_t> stairSurfaces;     // derived in PrepareGeometry: indices of kind-2 surfaces
    std::vector<DoorPassage> doorPassages; // ARMYMAP 2 `P` records
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
// Plan 033: the mutation interface's add and its batch (one revision for many changes). An obstacle added to a map keeps
// the map's canonical order: every original obstacle in its place, then the added ones by id, so two maps that applied
// the same changes hold the same obstacles in the same order whatever order they applied them in. AddObstacle gives
// the obstacle the next free id (one revision) and returns it.
uint64_t AddObstacle(Map& map,Obstacle obstacle);
// One batched change, applied in order. Remove and Replace name an obstacle by id (the cover records it sources go with
// it, as in RemoveObstacle); Add carries its id already; RemoveSurface drops a surface and its links by id; Floors keeps a
// building (by index) to at most `floors` storeys (an authored house held to one loses its stair and upper floor).
struct GeometryOp { enum class Kind : uint8_t { Remove, Replace, Add, RemoveSurface, Floors };
    Kind kind=Kind::Remove; uint64_t id=0; Obstacle obstacle{}; size_t building=0; int floors=0; };
struct GeometryBatch { std::vector<GeometryOp> ops; };
// Applies a batch as one revision: `revision` becomes the map's (0: the next). incremental: every cache that is provably
// unchanged outside the change is kept (the cover catalogue re-samples only the obstacles near it, the walkable grid and
// its edges are re-derived only there, the route graph re-tests only its nodes there); everything else is rebuilt on
// demand. Surface or building edits rebuild navigation in full. incremental false: InvalidateGeometry's full rebuild.
// The answers are the same either way.
void ApplyGeometryBatch(Map& map,const GeometryBatch& batch,uint64_t revision=0,bool incremental=true);
bool CoverExists(const Map& map,uint64_t id);
// Returns first segment contact in [0,1]; negative means no intersection.
float SegmentBox(Vec3 a, Vec3 b, const Obstacle& box, float padding = 0);
float ObstacleHeight(const Obstacle& box);
float SegmentObstacle(Vec3 a, Vec3 b, const Obstacle& box);
// solidOnly (plan 029): obstacles with `concealment` (hedges) are skipped, so the answer is the
// contact with solid geometry only. Only callers that ask for it change; the default is unchanged.
float IndexedContact(const Map& map,Vec3 from,Vec3 to,bool any,float padding=-1,bool solidOnly=false);
// Memoises compute(map,a,b,pad) by the exact bits of its arguments for the map's
// current revision. kind separates callers whose semantics differ for equal
// arguments. Results are identical to calling compute directly.
bool MemoisedSegment(const Map& map,Vec3 a,Vec3 b,float pad,int kind,bool (*compute)(const Map&,Vec3,Vec3,float));
float MapContact(const Map& map, Vec3 a, Vec3 b);
float SegmentSoldier(Vec3 a, Vec3 b, Vec3 from, Vec3 to, float height = 1.85f);
bool ClearLine3D(const Map& map, Vec3 from, Vec3 to);
// Plan 029 concealment: the line through solid geometry only (a hedge blocks sight, not bullets).
// Bullets (MapContact), cover (ProtectedAt), friendly-fire masking, near-miss suppression and the
// terrain screen use it; every sight caller keeps ClearLine3D. On a map without concealment it is
// ClearLine3D itself (same memo entry, kind 0); otherwise it is memoised as kind 2.
bool ClearLine3DSolid(const Map& map, Vec3 from, Vec3 to);
bool ClearLine(const Map& map, Vec3 a, Vec3 b, float padding = 0);
bool Walkable(const Map& map, Vec3 p);
std::vector<Vec3> FindPath(const Map& map, Vec3 from, Vec3 to);
// Plan 029 M-C, vaulting (Config::vaulting). The class of vault a man can make: None (he walks
// round), Low (garden walls and fences up to 1.2 m, everyone) and High (walls up to 2.0 m, the strong
// and nimble). Ordered: a leg a Low man can vault a High man can vault too.
enum class VaultClass { None, Low, High };
// Every number vaulting uses, in one place. Heights are metres above his feet; seconds are at
// dexterity 100; stamina is seconds of sprint capacity (plan 022), charged up front.
struct VaultTable {
    float lowTop=1.2f;          // m: the highest top a Low vault clears
    float highTop=2.0f;         // m: the highest top a High vault clears
    float depth=1.0f;           // m: the thickest obstacle one vault crosses (along the leg)
    float headroom=1.0f;        // m of clear space above the top
    float maxLeg=3.2f;          // m from take-off to landing
    float lowSeconds=.9f;       // s over a low obstacle at dexterity 100 (divided by StatScale(Dex))
    float highSeconds=1.8f;     // s over a wall
    float lowStamina=1.0f;      // s of stamina a low vault costs
    float highStamina=2.5f;     // s of stamina a wall costs
    float pad=.3f;              // m: obstacles within this of the leg are the ones he goes over
    float highStat=102;         // mean(strength, dexterity) for a High vault (about one man a squad)
    float woundedHealth=55;     // health below this: no vault (the existing wounded cutoff)
    float plannerPace=3.15f;    // m/s: a vault's seconds become this many metres of path in the search
};
inline const VaultTable& Vaulting(){static const VaultTable table;return table;}
// Whether the leg a->b is one vault for a man of class cls, and the class it needs: None when it is not
// (or cls is None), Low when a Low man can make it, High when only a High man can. Pure geometry: both
// ends walkable at the same height, neither on stairs, at most maxLeg long over supported ground; every
// movement-band obstacle within pad of the leg a solid that blocks movement (never a hedge, never a
// building's wall, sill or door), standing on the ground, crossed completely and at most depth thick,
// with its top within the class's height and headroom above it; at least one such obstacle. Memoised
// (kinds 3 and 4) on a prepared map. height (optional, unmemoised) is the top above his feet.
VaultClass VaultCrossing(const Map& map, Vec3 a, Vec3 b, VaultClass cls, float* height=nullptr);
// The class form of FindPath (plan 029 M-C). None is FindPath(map,from,to) exactly; Low and High may
// take vault legs (two or three grid cells over an obstacle the 1-cell step cannot pass).
std::vector<Vec3> FindPath(const Map& map, Vec3 from, Vec3 to, VaultClass cls);
// Every obstacle whose footprint the 2D segment a-b padded by pad touches and whose vertical extent
// overlaps (zlo, zhi) (center.z < zhi && top > zlo), in ascending index order.
void CollectObstacles(const Map& map, Vec3 a, Vec3 b, float pad, float zlo, float zhi, std::vector<size_t>& out);

enum class Stance { Standing, Crouched, Prone }; // Prone: plan 029 M-A1, only with Config::prone
// Plan 029 M-A2: the stance a cover record shelters a man in. A prone record (a crater rim, `crouch=2`)
// exists only in a battle with Config::prone on (Simulate clears it otherwise), so with the switch off
// this is exactly the `crouch ? Crouched : Standing` it replaces.
inline Stance CoverStance(const CoverPosition& c){return c.prone?Stance::Prone:c.crouch?Stance::Crouched:Stance::Standing;}
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
// Plan 021, the legacy attack by deliberate bounds. Every constant the bound machinery
// introduces lives here, named, so a later parameter search reaches all of them in one place.
struct BoundTuning {
    float boundLength=35;            // a bound covers this much of the route (the planner cuts 12 m segments)
    float slotArrival=3;             // a man standing this close to his own station has arrived
    float boundGrace=10;             // the group waits this long at the bound's destination for the
                                     // men who can still come (the user's rule, nobody left behind)
    float stragglerSeconds=10;       // user ruling: this long on Rally/Hold without firing
    float stragglerDistance=40;      // ... this far from his group re-stations the man
    float stragglerSuppression=.35f; // a man under fire is exempt: he stays in his cover
    float noJobSeconds=15;           // user ruling: this long with no rifle line onto a known enemy
    float jobRangeMin=25,jobRangeMax=90; // band a platoon support-by-fire position sits in
    float jobTravel=150;             // how far a squad is sent for such a position
    float jobSpacing=14;             // two squads' jobs stay this far apart
    float exposedWaitSeconds=20;     // an exposed crossing waiting on fire at its exact overlooking
                                      // threat goes anyway once the platoon's own fire has been
                                      // running this long: the wait was not buying anything more
};
inline constexpr BoundTuning BoundConstants{};
// Plan 028 Stage 3c, Jordan's thresholds of 23 Sep 2026 (Config::coverGraduated). All ages are the
// leader's own track ages (time - observedAt of his WithTracks view).
struct CoverGradeTuning {
    float primaryAge=20;     // the covering gate's primary is chosen among tracks seen within this
    float shortWait=8;       // T: a crossing nobody can cover is held this long, then graded
    float dangerAge=10;      // the danger tests count overlooking tracks seen within this
    int highTracks=5;        // high danger: this many such tracks overlook the crossing ...
    float highExposure=.6f;  // ... or a machine gun among them, or the crossing's exposure reaches this
};
inline constexpr CoverGradeTuning CoverGradeConstants{};
// Plan 028 Stage 1 (Config::coverRequests, Legacy only): the call for covering fire and its answer.
struct CoverRequestTuning {
    float lifetime=8;        // a request lives this long after the leader last renewed it
    float resendSeconds=4;   // a payload is re-sent to a man at most this often ...
    float newerContact=4;    // ... and only for a new enemy, a contact this much newer, or before it lapses
    int riflemen=2;          // stationary riflemen whose own spot bears on the threat, at most
    float gunNoLine=8;       // the gun is re-stationed onto the threat only after this long without a line
    int creditRounds=3;      // the covering gate's own bar (CoveringPath), for request_to_credit_seconds
};
inline constexpr CoverRequestTuning CoverRequestConstants{};
// Plan 028 Stage 4, "finish the supply side" (Jordan, 23 Sep 2026): the gun aimed at the crossing's
// threat (Config::coverGunAim), short covered shifts for covering riflemen (Config::coverShift) and
// the platoon's support squad aimed at the mover's threat (Config::coverPlatoon). First values, not tuned.
struct CoverSupplyTuning {
    float gunAimRange=25;     // m: the gun's new station bearing on the threat lies within this of him
    float gunAimCooldown=10;  // s: the gun is re-aimed at most this often (a gun that moves is silent)
    float gunReach=100;       // m: a gun whose station has a clear line onto the threat within this (his weapon's
                              // reach, SelectFireSolution) already bears on it and is not moved
    float creditWindow=6;     // s: the leader's own delivery reports that make the gun "credited" (never moved)
    float shiftRange=8;       // m: a covering rifleman's shift to a place with a line, at most
    float shiftMin=1;         // m: ... and at least (a shift is a move to another cover, not a step)
    float shiftRevealed=1;    // s: a shift reveals him to one known enemy at most this long (plan 020's
                              // 3 s is a whole 8 m walk, so the shift's own bar is tighter)
    float pinnedSuppression=.35f; // a man this suppressed is pinned: never shifted
    float shiftTrackAge=6;    // s: men are shifted only onto a threat the leader saw this recently
    float shiftCooldown=20;   // s: a man is not shifted again this soon (no shuttling between two places)
    float crossingClear=3;    // m: a shifted man or the re-aimed gun stays this far off the crossing
    float platoonLineBonus=6; // the support squad's score for a line onto the mover's threat (a gun is 8)
    float platoonPayloadAge=20; // s: the platoon support payload lives while its track is this fresh
};
inline constexpr CoverSupplyTuning CoverSupplyConstants{};
// Plan 030 M-S5 (S5, Config::coverQuietRelease, Legacy only): the covering gate released on observed
// silence. A known threat overlooking the crossing is quiet when the leader's knowledge (his own
// sighting or a report, contact lastFireAt) has not seen it fire for quietSeconds, or when it is under
// credited fire and has not fired since that fire began and for at least creditedQuiet. The credited-
// delivery test alone (CoveringPath) passes the commit wait only after fallbackSeconds of waiting.
struct CoverQuietTuning {
    float quietSeconds=3;     // s: an overlooking threat not seen firing this long is quiet
    float creditedQuiet=1;    // s: ... or this long, under credited fire that began after his last shot
    float creditWindow=6;     // s: the leader's delivery reports that make a threat "under credited fire"
    float fallbackSeconds=8;  // s: the credited-delivery test alone releases the commit wait after this
};
inline constexpr CoverQuietTuning CoverQuietConstants{};
// Plan 030 M-S5 (Config::coverRifleBase, Legacy only): with no gun station bearing on a request's threat,
// the covering pair is tasked from the cover its men already hold, if that cover bears on the threat.
struct CoverRifleBaseTuning {
    float coverSnap=1.5f;     // m: a man this close to a cover's shelter holds that cover (and fires from its peek)
};
inline constexpr CoverRifleBaseTuning CoverRifleBaseConstants{};
// Plan 023, the rifle group moves as one. One table for the whole design, next to the bound's:
// the geometry of a station and the margins the later stages need. First values, not tuned.
struct GroupTuning {
    float boundRadius=6,boundSpacing=2.5f;  // plan 021's slot geometry at a bound's destination
    float haltRadius=12,haltSpacing=4.5f;   // generation 16's halt geometry around the anchor
    float holdRadius=12,holdMinTravel=2;    // a firing station is searched this close to the man himself
    float stationRange=70,holdRange=65;     // a station bears on an enemy within this
    float anchorMove=5;                     // the objective is a new one once it has moved this far
    float reissueSeconds=4;                 // an order not taken up within this is sent once more
    float seatedSeconds=12,firedSeconds=8;  // a man just seated, or firing, keeps the place he has
    float holdSuppression=.45f;             // ... and so does a man under fire
    // Stage B: behind and ahead along the group's axis, and the advantage it comes up to.
    float behindMargin=12,aheadMargin=5;    // short of the rear-most station / beyond the lead one
    float callUpSeconds=6;                  // behind and idle this long is a man who needs calling up
    float axisRange=120;                    // the tracked enemy that turns the axis, within this
    float unsafeExposure=.2f;               // a leg the enemy can watch for this share of its length
    float standOff=25;                      // no order puts a man nearer a known enemy than this: the near
                                            // edge of the band a flank firing position must already satisfy
    float sectorChange=6;                   // the sector is a direction to watch: this much of a move is a new one
    int forwardMen=2;                       // this many forward bearing men are an advantage to come up to
    // Stage C: the leader's own pace (3.6) and the covering pair (3.7). stepOffSeconds is unused:
    // the user's later ruling that shared code may carry a pace replaced the step-off hold it was
    // for with leadSlowPace itself, so the leader never has to stand still to begin with.
    float stepOffSeconds=6,coverPairSeconds=10,leadSlowPace=.5f,leadCloseDistance=12,leadSlowSeconds=10,leadMaxLead=15;
    int coverPair=2;
    // Stage D: the support gun's own firing position and the platoon staff's places (3.9).
    float supportRange=60;                 // the gun's station lies within this of the rifle group's centre
    float supportAngleCos=.8660254f;       // cosine of 30 degrees: the least angle off the rifles' own line
    float supportWideCos=.7071068f;        // cosine of 45 degrees: taken instead when the ground offers it
    float staffBehind=20;                  // the platoon sergeant stands this far behind the group's rear station
    // Stage E (section 11): the shattered squad, and where a withdrawal ends.
    int shatteredRiflemen=3;               // fewer able riflemen than this and the squad no longer fights alone
    int baseOfFireMen=2;                   // ... with its gun up and this many able men it is attached as a base of fire
    float fallbackTravel=60;               // how far back a withdrawal looks for its fall-back position
};
inline constexpr GroupTuning GroupConstants{};
// Plan 031 Stage D, the squad fire-and-movement drill (Config::fireAndMovement, Legacy only). Every constant the drill
// uses lives here; legLength, fireWindow and deadline are also run values (Config::fmLeg, fmFireWindow, fmDeadline, CLI
// --fm-leg, --fm-fire-window, --fm-deadline) for sweeps. First values, set sensibly, not measured.
struct FireMovementTuning {
    float legLength=15;      // m: in contact a running bound is cut to the route stages that fit in this (at least one stage;
                             // the planner's stages are 12-18 m, so a leg is one stage unless this is raised past 24)
    float fireWindow=3;      // s: a leg starts only if the riflemen heard their gun fire on a leg threat this recently
    float deadline=20;       // s: the gate closed this long while men still wait at the leg start: Legacy for this leg
    float threatAge=20;      // s: a leg threat is a known track seen within this (plan 028 3c: an older one is not waited on)
    float threatReach=95;    // m: a track overlooks a point of the leg within this (AssumedEnemyReach)
    float gunReach=100;      // m: the gun bears on a threat within this (SelectFireSolution's reach)
    float setRadius=6;       // m: a round the gun fires within this of his station is fired "set" (his overwatch cover search radius)
    float stationRadius=40;  // m: a new station for the gun is searched this close to him or to the leg's start (the group)
    float leash=60;          // m: his station stays within this of the leg's end (the rifle group not too far ahead)
    float keepGrace=6;       // s: within a leg his station is kept until it has borne on none of the leg's threats this long
    float laneClear=4;       // m: his line onto a threat passes at least this far from the leg's path and the men at its start
    float spacing=4.5f;      // m: his station is this far from any rifle station (haltSpacing)
    float payloadSeconds=8;  // s: the gun's fire payload lives this long after a plan renews it (CoverRequestConstants.lifetime)
    float departMin=4;       // m: a decision that moves him less than this is a step, a peek, a duck or a slot adjustment, not a
                             // departure (SprintTable::minimumRun: the hops a man walks)
    float waitCover=1.5f;    // m: waiting at the leg start he takes catalogue cover this close to him (CoverRifleBaseConstants.coverSnap)
    float waitReach=8;       // m: ... and with none that close, he goes to cover this close that shelters him from the enemy he
                             // watches, rather than wait in the open (where his exposed-stop rule would send him running for any)
    float downReach=3;       // m: at the leg end he gets down behind catalogue cover this close to his station, else crouches
    float arriveRadius=8;    // m: an advance leg is reached when most of the group is this close to its end (the bound's arrival)
    float advanceMin=6;      // m: an advance shorter than this is not cut into legs
    float backstop=1.5f;     // x deadline: a rifleman who has waited this long goes whatever he hears (should the leader's
                             // deadline not reach him: a squad between leaders)
};
inline constexpr FireMovementTuning FireMovementConstants{};
// Plan 031 Stage G, the gun as a support weapon (Config::gunSupport and Config::gunBipod, Legacy only, per team). burst,
// beat, rotate, threatBonus, moverWeight and bipodFactor are also run values (Config::gunBurst, gunBeat, gunRotate,
// gunThreatBonus, gunMoverWeight, gunBipodFactor; CLI --gun-burst, --gun-beat, --gun-rotate, --gun-threat-bonus,
// --gun-mover-weight, --gun-bipod-factor) for sweeps. Values of the overseer's prototype (25 Sep 2026); to be
// calibrated by measurement.
struct GunSupportTuning {
    int burst=5;              // rounds: set, a support gun fires bursts of this many ...
    float beat=.5f;           // s: ... pauses this long after each, and takes a new target (the burst's own is dropped)
    float rotate=3;           // s: an enemy he fired a round on within this ...
    float rotatePenalty=60;   // m of target score: ... is this much less preferred, so the threats are worked in turn
    float threatBonus=15;     // m of target score taken off an enemy per squadmate his known position overlooks
    float moverWeight=1;      // a squadmate seen moving counts 1 + this
    float rescore=.5f;        // s: those overlooks are counted again at most this often
    float trackAge=6;         // s: an enemy overlooks the squad only through the gunner's own track of him, seen within this
    float mateAge=3;          // s: a squadmate counts where the gunner himself saw him within this (the gunner where he is)
    float moverAge=1.5f;      // s: ... and as a mover if seen within this ...
    float moverSpeed=.8f;     // m/s: ... moving at least this fast (his own sighting's velocity)
    float reach=95;           // m: an enemy overlooks a squadmate within this (AssumedEnemyReach)
    float chest=1.3f;         // m: the line runs from the track's eye to this height over the squadmate's feet
    float bipodFactor=.5f;    // a set gun's shot spread (the yaw cone ShotSpread feeds) times this
};
inline constexpr GunSupportTuning GunSupportConstants{};
// Plan 032, grenades and using the pin (Config::grenades, Legacy only, per team). Every number the grenades use lives
// here, in one table; each is also a run value (Config::grenade, CLI --grenade-param NAME=VALUE, the names in
// GrenadeParams()) so Jordan can workshop the tuning. Values of the plan's sections 2 and 3 and of Jordan's rulings of
// 25 Sep 2026 (plan 032 section 8); the entries marked "assumption" are implementation choices, not rulings. All floats
// (counts included) so the one table can be listed, compared, digested and overridden by name.
struct GrenadeTuning {
    // The two grenades (plan 2.3). Fragmentation ("defensive": US Mk 2, Soviet F-1, British No. 36M) and concussion
    // ("offensive": US Mk 3, German M24, British No. 69). Charge in kg of TNT equivalent, casing in kg.
    float fragCharge=.070f, fragCasing=.550f;
    float fragReact=12;           // m: men who see one land this close react (dive, run clear beyond it, throw it back) (Jordan, 25 Sep 2026)
    float fragRoll=2;             // m: it rolls on 0..this along the throw after landing
    float concCharge=.170f, concCasing=.100f;
    // The concussion grenade's body. 0 fibre: the US Mk 3 "offensive" grenade, a pressed-fibre body that throws no metal
    // fragments (the default: a blast, stun, eardrum and knockback weapon). 1 steel: the German M24's thin 100 g can
    // (concCasing), broken up as Mott's population with concMott (the documented alternative; CLI concBody=steel).
    float concBody=0;
    float concDanger=4, concRoll=2; // concDanger m: both its radii: the friend check (the thrower too) and the reaction
    // Blast (revision 2): the Kingery-Bulmash hemispherical surface-burst fits as published by Swisdak (1994) give the
    // incident overpressure, the positive-phase duration and the incident and normally reflected impulses of the scaled
    // distance Z = R / W^(1/3) (the fits are fixed data in GrenadeSim.cpp, not run values). R: to the nearest point of his
    // body. Below Z 0.2 the contact value; beyond a fit's range its last value.
    float airBurst=.5556f;        // assumption: a burst off the ground (in a hand, in the air) is the surface fit at this share of W (1/1.8)
    float blastReach=40;          // m: every soldier this close to a burst is evaluated (fragments fly as far as they fly)
    float coverFactor=.4f;        // pressure and impulses times this when no clear solid line runs from the burst to any of his 9 body points
    float roomFactor=2.5f;        // pressure times this in the burst's room: the same building footprint and the same floor
    float roomDuration=3;         // positive-phase duration times this in the room (reflections prolong the pulse; Jordan, 25 Sep 2026)
    // Primary blast lethality: Bowen (1968), as written up by McMichael, LLNL-TR-468242 (2011). Pressures in psi, t in ms.
    // T = t (70/m)^(1/3) (14.7/p_atm)^(1/2); p50 = bowenP50 (1 + bowenScale T^bowenExponent); probit Z = 5 - ln(p_eq/p50) /
    // bowenSlope; survival = Phi(Z - 5). Closer is never safer: his probit is the least over every range from his out
    // (BlastOn's envelope; the fitted duration shortens so fast inside Z 1 that Bowen alone would spare a closer man). p_eq: standing or crouched p_i + q, q = 2.5 p_i^2 / (7 p_atm + p_i); prone p_i; a
    // solid obstacle within wallBehind behind him along the wave: the reflected p_r = 2 p_i (7 p_atm + 4 p_i) / (7 p_atm + p_i)
    // (Glasstone). A death is out of action (killed); a survivor below lungInjuryProbit takes lungInjuryHealth (Zl - Z)/(Zl - 5).
    float bowenMass=70, atmosphere=14.7f;
    float bowenP50=61.5f, bowenScale=6.76f, bowenExponent=-1.064f, bowenSlope=.1788f;
    float lungInjuryProbit=7.33f, lungInjuryHealth=100;
    float wallBehind=1;           // m
    // Eardrum (Hirsch 1968): rupture probit Phi(ln(P / eardrumKpa) / eardrumSigma); a rupture deafens him for the battle.
    float eardrumKpa=103, eardrumSigma=.45f;
    float stunKpa=50, stunSeconds=2, stunExtraSeconds=6, stunSpanKpa=150; // (2 + 6 min(1, (dP-50)/150)) / Composure s
    float deafKpa=35, deafSeconds=30, deafReaction=1.5f; // deafened this long: his reaction times times deafReaction
    float frightKpa=5, frightScaleKpa=40;                // suppression + min(1, dP / 40)
    float woundedShare=.55f;      // out of action: wounded with this chance, killed otherwise (the bullet rule)
    // Knockback (tertiary blast, revision 2): the net impulse J = A (i_r - i) (x coverFactor behind cover), N s, along the
    // line from the burst to his centre of mass; dv = J / knockMass. Above `airborne` upward he flies (ballistic) until his
    // feet are back on his floor, then slides to rest with friction (d = v^2 / (2 mu g)); an obstacle stops him, and at more
    // than impactSpeed it is tertiary injury, impactInjury (v - impactSpeed)^2 health. Knocked down (to the ground, then
    // knockRise s before he can get up) above knockStanding (knockCrouched) of horizontal dv. He cannot act while he moves.
    float areaStanding=.60f, areaCrouched=.40f, areaProne=.15f;   // m^2 facing the burst
    float comStanding=1, comCrouched=.6f, comProne=.2f;           // m: his centre of mass above his feet
    float knockMass=85;           // kg: a 70 kg man and 15 kg of kit
    float airborne=.15f, friction=.6f, impactSpeed=3, impactInjury=20, knockStanding=.6f, knockCrouched=.9f, knockRise=1;
    float knockMinimum=.1f;       // m/s: a smaller push moves nobody (assumption)
    // Fragments (ruling 2): ballistic projectiles of the bullet machinery. The population is Mott's (1947), mass conserved:
    // N(>m) = N0 exp(-sqrt(m/mu)), N0 = casing / (2 mu), each mass drawn as mu (ln 1/u)^2; lighter than dustMass is dust
    // and not flown. Speed at the burst from Gurney's sphere, v0 = gurney / sqrt(casing/charge + gurneyShape); drag
    // dragK = 1/lambda, lambda = dragScale m^(1/3) (m in kg).
    float fragMott=.00025f, concMott=.0001f, dustMass=.00005f;    // kg
    float gurney=2440, gurneyShape=.6f, dragScale=338;
    float fragmentStopEnergy=5;   // J: a fragment stops below this ...
    float fragmentSeconds=1.5f;   // s: ... or after this long in flight
    float burstHeight=.05f;       // m: the burst is this far above the floor the grenade lies on
    float fragmentHitSuppression=.3f; // assumption: a fragment that strikes a man suppresses him as a bullet hit does (/ Composure)
    float fragmentNearMiss=0;     // assumption: fragments add no near-miss suppression (the blast's fright is the explosion's fear);
                                  // above 0, a fragment passing within 2.2 m of any man adds this / Composure once (the bullets' rule)
    // Fragment wounds (revision 2; fragments only: bullets keep their own damage model). A hit penetrates when E/A reaches
    // skinThreshold J/mm^2, A = fragmentShape (m/rho)^(2/3) its presented area. It strikes a region drawn by the shares of his
    // stance's presented area (head, thorax, abdomen; the limbs the rest); a penetrating hit incapacitates (out of action,
    // the bullet rule's wounded/killed) with P = k_region (1 - exp(-E / woundEnergy)). Every hit also does HitDamage.
    float fragmentDensity=7850, fragmentShape=1.5f, skinThreshold=.1f;
    float headStanding=.09f, thoraxStanding=.22f, abdomenStanding=.13f;
    float headCrouched=.12f, thoraxCrouched=.26f, abdomenCrouched=.12f;
    float headProne=.25f, thoraxProne=.30f, abdomenProne=.10f;    // prone, facing the burst
    float kHead=1, kThorax=1, kAbdomen=.5f, kLimbs=.1f;
    float woundEnergy=137.9f;     // J, E_v: calibrated so a standing man in the open, 5 m from a fragmentation grenade, is out
                                  // of action with probability 0.5 (CalibrateWoundEnergy: 137.89 J; Jordan's 5 m lethal radius)
    // Throwing (plan 2.4). Ranges are times StatScale(Strength).
    float rangeStanding=30, rangeKneeling=24, rangeProne=12;
    float releaseStanding=1.9f, releaseKneeling=1.2f, releaseProne=.4f; // m: the hand at release (assumption)
    float arcFirst=40, arcSecond=55, arcThird=70, arcFourth=25; // degrees: the lob, then the alternative arcs, in order (0: none)
    float arcStep=1;              // m of flight between the obstacle checks of an arc
    float arcMargin=1;            // assumption: a throw is taken only if its arc also clears for aims this many scatter sigmas to
                                  // either side, beyond and short (0: the nominal arc alone)
    float scatterBase=.5f, scatterPerMetre=.08f; // sigma = (base + perMetre * distance) / Dexterity * (1 + suppression)
    float fuseSeconds=4.5f, fuseSpread=.5f;       // fuse from the release of the lever, uniform in 4.5 +/- 0.5 s
    float cookMax=1.5f, cookLowComposure=.8f, cookHighComposure=1.4f; // cook 0..1.5 s, linear in StatScale(Composure) between these
    float throwSeconds=1.5f;      // s: pin, rise, throw: he is exposed and silent this long (the cook is inside it)
    // Reactions (ruling 5).
    float assumedFuse=2.5f;       // assumption (the knowledge boundary): the seconds a man assumes are left on a grenade he
                                  // sees land (the plan's 2-3 s); he cannot read its fuse
    float throwBackReach=2.5f, throwBackSpeed=3, throwBackMargin=1; // within reach; time left >= distance/speed + margin
    float throwBackRelease=.5f;   // s from his hand on it to the release (assumption)
    float pickupReach=1;          // m: he takes it up within this of where he stands (assumption; he stands at least 0.46 m off a wall)
    float skillSlope=.5f, skillOffset=.1f, skillMin=.05f, skillMax=.8f; // p = clamp(slope * skill - offset, min, max)
    float runMargin=.3f;          // s: a run to cover must end this long before the fuse he assumes
    float runSearch=14;           // m: cover this far beyond the danger radius is considered for a run
    // Throw decisions (plan 3).
    float throwCheck=1.5f;        // s between a man's throw decisions (assumption)
    float throwCooldown=6;        // s after a throw before his next (assumption)
    float targetAge=8;            // s: a known enemy is a target while his track is this fresh (assumption)
    float bunchCount=3, bunchRadius=4; // a bunch: this many known enemies within this of the aim
    float closingRange=15;        // m: a man holding his position throws at a known enemy this close (defenders)
    float fragFriendRange=15;     // m: he prefers fragmentation (from cover) with no other friend this close to the target, else
                                  // concussion (the throw decision's and the close-in's choice)
    // Fragmentation safety (Jordan, 25 Sep 2026: "make it safer"): a fragmentation throw only with no friend but himself
    // within fragFriendClear of the aim, and himself at least fragSelfOpen from it in the open, or fragSelfCover when solid
    // geometry shields him (down behind his cover) from a burst at the aim and anywhere within two sigma of his scatter.
    float fragFriendClear=15, fragSelfOpen=20, fragSelfCover=8;
    float friendMargin=0;         // m added to the friend radii near the aim (assumption: none)
    float friendAge=2;            // s: a friend counts where the thrower saw him within this
    // Using the pin: the close-in (plan 3).
    float closeInCheck=2;         // s between a rifle-group leader's close-in decisions
    float closeInRetry=8;         // s after a close-in that found no pair or no covered route
    float pinnedQuiet=3;          // s: pinned, as his side can know it: not seen firing for this long ...
    float pinnedFireWindow=4;     // s: ... while our men saw their own rounds strike his place within this ...
    float pinnedFireRadius=5;     // m: ... this close to his known place
    float pinnedTrackAge=20;      // s: and his track this fresh
    float closeInReach=70;        // m: from the rifle group to the pinned enemy
    float spotNear=15, spotFar=20; // m: the throwing spot's distance from the enemy's place
    float coveredRoute=3;         // s: a route revealing more than this to a known enemy is no covered route
    float closeInMax=45;          // s: a close-in ends after this whatever happens
    float burstWait=7;            // s: the pair waits this long at most for the burst
    float partnerWait=6;          // s: at his spot the thrower waits this long at most for his partner to reach his (assumption)
    float rushSeconds=8;          // s: a rush not ended within this ends where it is (assumption)
    float rushShort=4;            // m: the rush ends this short of the enemy's place
    float closeFireSeconds=4;     // s of fire at close range after the rush
};
enum class GrenadeType : uint8_t { Fragmentation, Concussion };
// Plan 032: a grenade in the world as the frame records it for the renderer (Config::grenades; empty otherwise). state:
// Held (in a hand, lever released), Flying, Resting. fuseAt: when it goes off.
enum class GrenadeStage : uint8_t { Held, Flying, Resting };
struct GrenadeState { int id=0, owner=-1, team=-1; GrenadeType type=GrenadeType::Fragmentation; GrenadeStage stage=GrenadeStage::Held;
    Vec3 position{}, velocity{}; float fuseAt=0, releasedAt=0; };
// Plan 032: one explosion, recorded for the renderer and the tools (the Explosion event carries the same moment).
struct GrenadeExplosion { int id=0, owner=-1, team=-1; GrenadeType type=GrenadeType::Fragmentation; float time=0; Vec3 position{};
    int fragments=0; bool ground=true; };
// Plan 032 battle totals (manifest only when on).
struct GrenadeTotals {
    int issued=0, throws=0, explosions=0, fragmentsFlown=0, fragmentHits=0, stuns=0, deafened=0;
    int blastCasualties=0, fragmentCasualties=0, friendlyCasualties=0, blastInjuries=0;
    int blastDeaths=0, eardrums=0, knockbacks=0, knockdowns=0, knockImpacts=0, penetrating=0, incapacitating=0;
    int reactions=0, dives=0, runs=0, throwBackAttempts=0, throwBacks=0, fumbles=0, dropped=0;
    int bounced=0, short_=0;   // throws that struck a wall or a roof; throws that came to rest within their danger radius of the hand
    int closeIns=0, closeInThrows=0, closeInRushes=0, closeInBreaks=0;
};
// Plan 031 D: what an order of the drill carries. gun: the squad's gun whose fire opens the leg (-1: no drill, every
// field inert); leg: the leader's leg (or hold spell) serial; displace: the gun's own order sends him to a new station
// (he may sprint). On the group's orders (the leader's, the NCO's and those the relay sends) it names the group's leg;
// on the gun's order gun is the gunner himself.
struct FireMovementOrder {
    int gun=-1,leg=0;
    bool displace=false;
};
inline bool SameFireMovementOrder(const FireMovementOrder& a,const FireMovementOrder& b){return a.gun==b.gun&&a.leg==b.leg&&a.displace==b.displace;}
// Plan 023 A (3.1). What the group's objective is: a bound's destination, a halt on the place the
// leader was ordered to, or a hold in contact where the group already stands and fights.
// Stage D adds two kinds of its own: the support gun's firing position, angled off the rifle
// group's line onto the enemy, and the platoon sergeant's place behind the group (3.9).
enum class StationKind { Halt, Bound, Hold, Support, Staff };
// One record of where the rifle group stands. Every member slot has a station — the riflemen's,
// the leader's own lead station, and the entries kept free for the support and the platoon staff
// (stages C and D) — with the serial of the objective it was allocated for. One allocator fills
// it, once per objective; a station is given up only for the reasons in the plan and is never
// re-picked under the same objective, because re-seating is where the lineage's wounds come from.
struct GroupStations {
    StationKind kind=StationKind::Halt;
    bool bound=false;                // the objective is a running bound (plan 021's chain)
    int plan=0,serial=1;             // the squad plan the objective was fixed under, and its identity
    float committedAt=-1;
    uint64_t known=0;                // enemies already known when a bound's stations were fixed
    Vec3 objective{};
    std::array<Vec3,SquadSize> station{};
    std::array<bool,SquadSize> held{};
    std::array<int,SquadSize> issued{};    // the objective serial this member's station was allocated for
    // Stage B (3.3/3.4): who stands forward on a place that bears, and since when a man has been
    // behind the group with nothing to do. behindSince is 0 or less while he is not.
    std::array<bool,SquadSize> forward{};
    std::array<float,SquadSize> behindSince{};
    Vec3 forwardCentre{};                  // the advantage the group comes up to, and whether it can
    int forwardCount=0;
    bool comeUp=false;                     // enough forward men, and the way up to them is not unsafe
    Vec3 footholdSector{};                 // the enemy overlooking an unsafe way up, for the covering element
    bool foothold=false;
    float objectiveAt=-1;                  // when the leader was given it: his men's stations date from then (3.6)
    std::array<bool,SquadSize> covering{}; // the pair that stays and fires as the group leaves (3.7)
    std::array<Vec3,SquadSize> coverSector{}; // the enemy each covering man was set against, for his sector
    float coverUntil=-1;int coverSerial=0;
    float standOffFloor=0;                 // ... and no nearer than the forward men already are (3.4/B2)
    // Stage D (3.9): the gun's and the platoon staff's own stations live in this record too, in the
    // slots the rifle group never uses; they belong to a man and not to the group's objective, so
    // they carry no objective serial (issued stays 0) and a new bound does not wipe them. Index 0
    // is the officer with the leading squad, index 1 the platoon sergeant behind it.
    int supportStationFor=-1;
    std::array<int,2> staffLead{{-1,-1}},staffSerial{{0,0}};
    // Plan 028 Stage 4 (Config::coverShift): the covered place a man was shifted to for a covering request
    // stays his station for the rest of this objective (shiftSerial), whatever becomes of the request, so
    // he is never walked back; and when he was last shifted (he is not shifted again within shiftCooldown).
    std::array<int,SquadSize> shiftSerial{};
    std::array<Vec3,SquadSize> shiftPlace{};
    std::array<float,SquadSize> shiftedAt=[]{std::array<float,SquadSize> a{};a.fill(-100.f);return a;}();
    std::array<bool,SquadSize> shiftArrived{}; // evidence only: the cover_shift arrival row was written
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
    // Plan 030 K-1 (Config::retireFallen, Legacy only; never set otherwise): the holder of this observation saw
    // the man put out of action while he had a line on him (observedAt is then when he saw him down), or holds
    // a report of such an observation. Carried whole through every report path.
    bool seenDown=false;
};
struct FriendlyIntent {int soldier=-1;Vec3 position{},destination{};float observedAt=-100;};
struct SupportThreat {int enemy=-1;Contact contact;};
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
    // Plan 023 stage C: a fraction of the walking speed (1 = full, down to 0), multiplied into
    // the shared movement step behind Config::orderPace. Soldier-level, carried by the plain
    // struct copy on delivery like every other order field. Never above 1 here.
    float pace=1.f;
    // Plan 028 Stage 1 (Config::coverRequests, Legacy only): a covering-fire payload. The leader's own
    // track of the enemy he wants covered (fireContact, as he held it when he sent the order), how long
    // the request lives, who asked (the direct reply of Stage 2a goes to him) and the ordered mover
    // stations the shooter must not fire through. fireEnemy -1 is no payload: every field is then inert.
    int fireEnemy=-1,fireRequester=-1;
    Contact fireContact;
    float fireUntil=-100;
    std::shared_ptr<const std::vector<FriendlyIntent>> fireFriendlies;
    // Plan 028 Stage 4 (Config::coverShift): this order shifts him to a covered place with a line on the
    // payload's enemy; he gives up the cover he holds for it unless pinned (plan 020's better cover close by).
    bool fireShift=false;
    // Plan 030 M-S7 P4 (Config::coverSector, Legacy only; null otherwise): the gun's share of the request's sector,
    // every known threat overlooking the crossing that no covering rifleman took, loudest first, each with the
    // leader's track of it. The gun works it a burst at a time (SelectFireSolution).
    std::shared_ptr<const std::vector<SupportThreat>> fireSector;
    // Plan 031 Stage D (Config::fireAndMovement, Legacy only; gun -1 otherwise): the drill's leg this order belongs to.
    FireMovementOrder fm;
};
enum class ReactionKind { Sight, Order, Report, Ready, UnderFire, WoundReport, FireReport, FriendlySight, LaneReport, PlatoonReport, PlatoonOrder, MovementReport, DeliveryReport, TaskReport, SupportSector, Coverage, SupportProgress, SquadRadio };
enum class Action { Advance, Cover, Fire, Retreat, Hold, Wounded, Killed };
// Plan 032 (Config::grenades only): Stunned, GrenadeThrow, GrenadeEscape, GrenadeDive, GrenadeThrowBack, CloseIn, Knocked.
enum class Reason { Search, Contact, Suppressed, Injury, ClearShot, Watching, LostContact, Down,
    Settle, Peek, CoverFire, Relocate, Flanked, Duck, PopUp, Overwatch, OrderedAdvance, AwaitOrders, Regroup, SuppressiveFire, RearPosition, RearFire, SquadFlank, SquadPullBack, ClearLane, EmergencyCover, ProtectedHold, AtWaypoint, PassageWait, BoundAdvance, BoundSupport, WindowPosition, Prone, Vault,
    Stunned, GrenadeThrow, GrenadeEscape, GrenadeDive, GrenadeThrowBack, CloseIn, Knocked };
enum class EventKind { Contact, Decision, Shot, Hit, Casualty, Result, OrderIssued, OrderReceived, Report, Succession, Reaction, Explosion };
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
// Threat-aware paths and the cover rule (plan 020). Every number the feature uses lives
// here, in one place, so a later parameter search can reach it; nothing else carries them.
struct PathCaution {
    float revealedSeconds=3;         // s a path may reveal him to ONE known enemy before a covered search (user ruling)
    float memorySeconds=30;          // s a place an enemy was seen keeps being avoided (user ruling)
    float detour=1.5f;               // the covered alternative may be this many times the shortest (user ruling)
    float nearPath=120;              // m; no known enemy this close to the path means no search at all
    int   budget=4000;               // expansion budget of the covered cost search
    float sightCharge=8;             // extra cost of a metre seen from a known enemy position
    int   chargedThreats=4;          // enemies the cost field may carry; the measure still uses every one
    float betterCover=12;            // m; how far "better cover close by" may be while under fire
    float orderedAway=12;            // m; an order this far from his remembered cover releases it
    float underFireSuppression=.08f; // rounds close enough to suppress him this recently: he is under fire
    float sampleStep=1;              // m between samples of a candidate path
    float bodyHeight=1.3f;           // m; the standing body a path reveals
};
inline const PathCaution& Caution(){static const PathCaution table;return table;}
// Stamina and the sprint to cover (plan 022). Every number the feature uses lives here, in one
// place, so a later parameter search can reach it; nothing else carries them. Paces are
// multiples of the man's own walking pace, capacity and recovery are seconds at stat 100.
struct SprintTable {
    float pace=1.6f;            // sprint pace of a rifleman at Speed 100, times his walking pace
    float gunnerPace=1.35f;     // the gun is heavy: his own multiple of his own slower pace
    float capacitySeconds=8;    // s of sprinting he holds at Endurance 100
    float recoverySeconds=30;   // s from empty to full at rest at Endurance 100
    float walkRecovery=.5f;     // fraction of the resting recovery rate while he is walking
    float gunnerDrain=4.f/3.f;  // the gunner drains a third faster
    float woundedHealth=55;     // health below this: no sprint (the existing wounded cutoff)
    float windedSway=1.5f;      // sway amplitude multiplier at empty, fading to 1 at full
    float windedAim=1.3f;       // aim-time multiplier at empty, fading to 1 at full
    float lookAhead=6;          // m of the path ahead tested for a known enemy's sight
    float checkSeconds=.5f;     // s between those tests; never one per tick per enemy
    float lookThreats=95;       // m; a believed enemy farther than this is not tested (AssumedEnemyReach)
    float minimumRun=4;         // m; a shorter hop (a peek, a duck, a slot adjustment) is walked
};
inline const SprintTable& Sprint(){static const SprintTable table;return table;}
// The three postures (plan 029 M-A1). Every number a stance changes lives here, in one place.
// Standing and crouched are exactly the literals each site carried before the table existed, so a
// battle without Config::prone is bit for bit what it was; only the prone row is new.
struct PostureEntry {
    float body;        // m; the body a round or a sight line meets (BodyHeight)
    float eye;         // m above his feet; what he sees from
    float muzzle;      // m above his feet; where his rounds start
    float speed;       // multiple of his walking pace (a prone man crawls)
    float sway;        // sway amplitude multiple
    float recoil;      // recoil kick multiple
    float aim;         // aim-time multiple
    float plannerBody; // m; the body the tactical route planner tests for exposure
};
struct PostureTable {
    PostureEntry standing{1.85f,1.7f,1.5f,1.f,1.f,1.f,1.f,1.5f};
    PostureEntry crouched{0.9f,0.82f,0.72f,0.6f,0.7f,0.8f,1.f,0.9f};
    PostureEntry prone{0.35f,0.30f,0.30f,0.3f,0.5f,0.7f,1.1f,0.35f};
    // The prone rules (Jordan's rulings, plan 029). Nothing reads them while Config::prone is off.
    float crawlRange=6;       // m of path to cover he crawls to lying down; beyond it he stays down
    float riseSeconds=.8f;    // s to get up at dexterity 100: frozen and silent until he is up
    float minimumSeconds=3;   // s he stays down before quiet raises him, or a cover order does
    float riseMargin=.2f;     // quiet: suppression below his duck threshold minus this
    float riseContact=30;     // m; quiet: no enemy in sight this close
    float threatRange=60;     // m; the known threats the height test reads
    float threatAbove=2;      // m; a known enemy eye this far above his prone body: prone is no use
    float threatEye=1.7f;     // m; the eye height he assumes on a known enemy
};
inline constexpr PostureTable PostureValues{};
inline const PostureTable& Postures(){return PostureValues;}
// Plan 030 suppression mechanics (S1 impacts on cover, S2 nerve, S3 stacked suppression). Every number
// the three switches use lives here, in one place; nothing reads it while its switch is off.
struct SuppressionTable {
    float impactRadius=1.5f;    // S1: default of Config::impactRadius (m from his shelter or position to a round stopped by a solid)
    float impactWeight=.15f;    // S1: suppression such a round adds, divided by StatScale(composure)
    float impactBack=.05f;      // S1: m back along the round's last leg from which "the solid shelters him" is tested
    float nerveGain=.25f;       // S2: nerve gained per s while his suppression is above his duck threshold
    float nerveDecay=.03f;      // S2: nerve lost per s otherwise, times StatScale(composure)
    float pinnedAt=.5f;         // S2: nerve above this: the rise and pop-up rules do not release him
    int firstShots=3;           // S2: rounds after a release fired with the shaken cone and settle
    float shakenSuppression=1;  // S2: the suppression those rounds' cone and settle are computed at (fully suppressed)
    float stackWindow=2;        // S3: s after a round reached him during which his suppression does not decay
};
inline const SuppressionTable& SuppressionRules(){static const SuppressionTable table;return table;}
// Plan 030 M-S7, Jordan's suppression design (24 Sep 2026): the defaults of the Config run values (P1 peek floor and
// curve, P2 weight and grace, P3 effect) and the fixed geometry and timings of the four rules. Nothing reads it while
// the rules are off.
struct PinTable {
    float peekFloor=.15f;       // P1: default Config::peekFloor: the least chance per settle of a peek above his duck threshold
    float peekCurve=2;          // P1: default Config::peekCurve: the chance is max(floor, (1 - suppression)^curve)
    float settleSeconds=.7f;    // P1: one settle: the 0.7 s a man stays down after a duck before he may come up
    float peekHold=4;           // P1: a graded peek ends when he has fired a round, is hit, or after this many s
    float keepDownWeight=.15f;  // P2: default Config::keepDownWeight (suppression per round in his cover, / composure)
    float keepDownRadius=2.2f;  // P2: S1's detection of a round in his cover, at S1b's 2.2 m
    float keepDownGrace=2;      // P2: default Config::keepDownGrace: s after his suppression was last above his threshold
    float neighbourEffect=.10f; // P3: default Config::neighbourEffect: the floor a pinned man puts on the men near him
    float neighbourRadius=8;    // P3: m; squadmates this close, in cover, with a line to him
    float neighbourMargin=.2f;  // P3: the floor never reaches his duck threshold less this (the come-up band)
    int sectorGunCapacity=2;    // P4: threats the gun works alone; above it the covering pair takes the nearest
    int sectorMax=6;            // P4: threats a request carries at most
    float sectorLoud=1.5f;      // P4: a sector threat the gunner saw fire this recently gets the next burst at once
};
inline const PinTable& PinRules(){static const PinTable table;return table;}
inline const PostureEntry& Posture(Stance stance){
    return stance==Stance::Crouched?PostureValues.crouched:stance==Stance::Prone?PostureValues.prone:PostureValues.standing;}
// What one path decision cost, for the trace and the battle totals. Never read by policy.
struct PathChoice {
    bool searched=false,covered=false;
    float shortestLength=0,shortestRevealed=0,alternativeLength=0,alternativeRevealed=0;
    uint64_t known=0;            // the enemies he knew when the path was chosen, one bit per id
    const char* why="shortest";
};
// Which cover-rule decision the last order carried (plan 020): trace only, never behaviour.
enum class CoverRule { None, StayedUnderFire, ReleasedByOrder, BetterCover, ObeyedRetreat };
enum class ScenarioFamily { None, F1, F2, F3 };
// Static defence: Ember occupies prepared cover around one locality and never
// manoeuvres, so an attacking controller has a fixed problem to solve.
enum class DefenceLayout { None, Building, Spread, Clusters };
const char* DefenceLayoutName(DefenceLayout layout);
// Plan 033: one explosion in the world's queue: when, where (the burst point) and its TNT equivalent (kg). Test charges
// (Config::testCharges, --test-charge) enter it at the start; the grenades' detonations (plan 032) join it as they go off.
struct Explosion { float time=0; Vec3 position{}; float tnt=0; };
inline bool SameExplosions(const std::vector<Explosion>& a,const std::vector<Explosion>& b){
    if(a.size()!=b.size())return false;
    for(size_t i=0;i<a.size();++i)if(a[i].time!=b[i].time||a[i].tnt!=b[i].tnt||a[i].position.x!=b[i].position.x||a[i].position.y!=b[i].position.y||a[i].position.z!=b[i].position.z)return false;
    return true;
}
// Plan 033, building destruction from blast force (Config::destruction). Every number the structural model uses lives
// here, in one table; each is a run value (CLI --destruction-param NAME=VALUE, the names in DestructionParams()), folded
// into the digest and written to the manifest only when it differs from these defaults. Sources per entry; "assumption"
// marks an implementation choice, not a published value. All floats, so the table can be listed, compared and digested.
struct DestructionTuning {
    // Loading (plan 033 section 3; the Kingery-Bulmash surface-burst fits in BlastSim).
    float cellSize=.5f;          // m: a panel face is loaded in cells about this big (the plan's ~0.5 m)
    float reach=20;              // m/kg^(1/3): a panel or pane is loaded when its nearest point lies within this scaled distance
    float roomPressure=2.5f;     // pressure times this on a face in the burst's room (same footprint and storey; Jordan's
    float roomDuration=3;        // ruling for the grenades) and its positive phase times this (reflections prolong the pulse)
    // Masonry (mean dynamic values). Stone: rubble in lime mortar (village); brick: solid clay brick in lime-cement mortar
    // (city2 and the authored maps). Density: 2000-2300 and 1800-2000 kg/m^3. Tensile: flexural (bond) strength with the
    // plane of failure parallel to the bed joints, which cracks a wall spanning between floor and roof (EN 1996-1-1 Table
    // 3.6 gives characteristic 0.05-0.10 MPa; mean and strain-rate values are higher). Modulus: about 1000 f_k (EN 1996-1-1
    // 3.7.2). Compressive: the mean masonry strength f_m that the arching resistance uses.
    float stoneDensity=2200, stoneTensile=.10f, stoneModulus=2, stoneCompressive=2.5f;   // kg/m^3, MPa, GPa, MPa
    float brickDensity=1900, brickTensile=.20f, brickModulus=4, brickCompressive=6;
    // Timber boarding (sheds): a 20 mm softwood board nailed to the frame's rails, timberSpans spans up the wall (three rails:
    // two); density 450-500 kg/m^3; modulus of rupture of weathered, knotty boards (clear softwood 60-80 MPa, EN 338 C16 mean
    // about 25); modulus C16-C24 (8-11 GPa).
    float timberBoard=.02f, timberDensity=480, timberRupture=30, timberModulus=9, timberSpans=2;  // m, kg/m^3, MPa, GPa
    // Rigid arching (McDowell, McKee and Sevin 1956; UFC 3-340-02 section 7): a wall wedged between rigid supports resists
    // about 0.72 f_m (t/L)^2 until it deflects its own thickness. arching: the share applied to walls spanning floor to floor
    // under a storey; 0 by default: the houses have timber floors and no concrete (Jordan's ruling), so nothing confines a
    // wall rigidly top and bottom. spandrelArching: the share for masonry spanning horizontally between the piers either
    // side of an opening (a lintel, a sill, the wall over or under a hole), wedged between them (assumption: half the rigid
    // value).
    float arching=0, spandrelArching=.5f;
    // Response limits (the PDC-TR 06-08 / ASCE 59-11 form: ductility, then support rotation in degrees). Masonry cracks at
    // ductility 1 (the tensile bond gone; cosmetic, and a cracked panel keeps no bond for the next blast); it is breached
    // (a hole where it was pushed through) from masonryHeavy and blown out from masonryBlowout, or when a cracked strip's
    // deflection reaches its thickness (it rocks over). Timber boards: cracked, broken through, blown in, by ductility.
    float masonryHeavy=2, masonryBlowout=8;                 // degrees
    float timberCrack=.7f, timberBreach=1, timberBlowout=2; // ductility
    // Local breach (US Army FM 5-250, 1992, breaching charges): P = R^3 K C, P in lb of TNT, R the breaching radius in feet
    // (to the far face of the wall), K the material factor (0.23 poor masonry and good timber, 0.35 good masonry), C the
    // placement (tamping) factor, 3.6 for an untamped charge against the wall. The charge's own R, (P / (K C))^(1/3), sizes
    // the hole: it breaches a wall when R reaches the far face; the hole is the breaching sphere's section at the near face.
    float breachStone=.23f, breachBrick=.35f, breachTimber=.23f, breachPlacement=3.6f;
    // Glass (window panes; not obstacles): a pane shatters when the load on it (reflected, reduced for obliquity, x room)
    // reaches glassBreak (about 1 psi; typical annealed windows fail at 3.5-7 kPa, Glasstone and Dolan 1977).
    float glassBreak=7, glassThickness=.003f, glassDensity=2500;                         // kPa, m, kg/m^3
    // Collapse (Jordan: "collapse floors and walls"). A storey's floor or roof falls when the walls under it have lost more
    // than collapseShare of their length, with everything above it; masonry above a hole narrower than archSpan stands (it
    // arches over), wider and the wall above falls. Men on a falling level: fallDamage health per storey fallen (x 0.5-1.5);
    // men under it inside the footprint: crushed with crushChance, crushDamage (x 0.5-1.5). Assumptions.
    float collapseShare=.5f, archSpan=1.2f, fallDamage=30, crushChance=.5f, crushDamage=60;
    // Debris (assumptions). A breached or blown-out piece throws debrisShare of its mass as chunks of about chunkMass kg (at
    // most maxChunks a piece) at its own response velocity (x 1 +/- speedSpread), in a cone of chunkCone radians about the
    // direction the blast pushed it; the rest falls as rubble at its foot (bulked by rubbleBulking, rubbleMin-rubbleMax m
    // high, rubbleSpread m either side). A shattered pane throws maxShards shards of shardMass kg in a cone of shardCone.
    float debrisShare=.25f, chunkMass=.4f, maxChunks=24, speedSpread=.3f, chunkCone=.35f;
    float maxShards=12, shardMass=.004f, shardCone=.6f, maxDebrisSpeed=120;
    float rubbleBulking=1.4f, rubbleMin=.25f, rubbleMax=1.2f, rubbleSpread=.8f;
    // Flying debris: the bullets' flight (drag, gravity, first contact with the map or a man), drag coefficient
    // dragCoefficient over the area 1.2 (m / density)^(2/3); it stops after flightSeconds or below stopSpeed m/s. A hit does
    // the bullets' HitDamage by its energy and suppresses the man by hitSuppression / Composure (the bullet hit's 0.3).
    float dragCoefficient=1, flightSeconds=2.5f, stopSpeed=2, hitSuppression=.3f;
    // Knowledge: a man looks for changes he has not seen every observeEvery s (the legacy edits look every tick).
    float observeEvery=.2f;
};
bool SameDestructionTuning(const DestructionTuning& a,const DestructionTuning& b);
// Plan 033 battle totals (manifest only when on). Seconds are wall clock (not digested).
struct DestructionTotals {
    int explosions=0, revisions=0, cracked=0, breached=0, destroyed=0, fallen=0, collapses=0, panes=0, rubble=0;
    int fragments=0, fragmentHits=0, falls=0, crushed=0, casualties=0, units=0, viewStates=0, viewUpdates=0, liveStates=0;
    double physicsSeconds=0, geometrySeconds=0, viewSeconds=0, observeSeconds=0, debrisSeconds=0;
};
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

    // Threat-aware paths and the cover rule (plan 020). On by default; one switch covers
    // both parts, and --no-threat-aware-paths reproduces the pre-020 battle exactly.
    bool threatAwarePaths=true;

    // Stamina and the sprint to cover (plan 022). On by default; --no-stamina reproduces the
    // pre-022 battle exactly, and no stamina state is then digested.
    bool stamina=true;
    // A legacy order carries no typed-task id, so the rejoin through the route entry never ran
    // for it: a man off the ordered lane, or sent to a goal off it, got no path and stood with
    // his order (plan 018, 21 September 2026). On by default; --no-off-lane-paths reproduces
    // the previous battles bit for bit.
    bool offLanePaths=true;
    // Plan 023 stage C, user ruling: an order can carry a pace (Assignment::pace), multiplied
    // into the shared movement step. On by default. --no-order-pace is the kill switch for all
    // of stage C's legacy-only additions (3.6's leader pace and 3.7's covering pair), so that a
    // legacy battle fought with it reproduces stage B2 exactly; the pace factor itself is folded
    // into the digest only when it differs from 1, so cognition, drills and the static defenders
    // (which never set it) are bit-identical whether the switch is on or off.
    bool orderPace=true;
    // Plan 026 P2 ablation switches for the three schema-3 (KEEP) interface differences. On by
    // default = current behaviour; each is folded into the digest and written to the manifest only
    // when false, so every existing battle keeps its digest.
    bool keepAction=true,keepKindReset=true,keepCommitClear=true;
    // Plan 028 Stage 3c (Jordan's ruling 4 of 23 Sep 2026), Legacy only: the covering gate waits
    // only on an overlooking enemy seen within 20 s; a stale threat crosses after the short wait,
    // and a fresh one nobody covers is graded (CoverGradeConstants): high danger goes round, low
    // danger crosses. Off by default; folded into the digest and the manifest only when true.
    bool coverGraduated=false;
    // Plan 028 Stage 1 + 2a, Legacy only, off by default; each folded into the digest and the manifest
    // only when true. coverRequests: a leader waiting on, or running, an exposed crossing asks for fire on
    // its primary; the gun and at most two stationary riflemen already bearing on it answer through a
    // payload on their order. coverReports: fire deliveries travel on the 0.5 s channel with a direct
    // reply to the requester, and are remembered per shooter and enemy.
    bool coverRequests=false,coverReports=false;
    // Plan 028 Stage 4 (Jordan's "finish the supply side"), Legacy only, off by default; each folded
    // into the digest and the manifest only when true. coverGunAim: with a covering request live and no
    // line onto its threat, the gun takes a covered station within 25 m that bears on it, at once.
    // coverShift: at most two covering riflemen in cover without a line shift up to 8 m to cover that has
    // one (with coverRequests). coverPlatoon: the platoon commander picks the mover first, then the
    // support squad by line onto the enemy overlooking the mover's approach; its gun gets that payload.
    bool coverGunAim=false,coverShift=false,coverPlatoon=false;
    // Plan 029 M-A1, every controller, off by default: a man caught in the open with no cover found
    // goes prone, crawls up to 6 m to cover and gets up again (PostureTable). Folded into the digest
    // and written to the manifest only when true.
    bool prone=false;
    // Plan 029 M-B, every controller, off by default: hedges (ARMYMAP 2 `O` concealment) block sight,
    // not bullets. Off, Simulate clears the flag on the battle's map and a hedge is an ordinary solid.
    // Folded into the digest and written to the manifest only when true.
    bool concealment=false;
    // Plan 029 M-C, every controller, off by default: a man's own paths may go over low walls and
    // fences (and, strong and nimble, over walls to 2 m) at a stamina cost (VaultTable). Folded into
    // the digest and written to the manifest only when true.
    bool vaulting=false;
    // Plan 029 F-E, every controller, off by default: the covering-fire delivery credit ray starts
    // at the shooter's muzzle and is solid-only (a hedge the round passed through does not deny it).
    // Off, Legacy keeps the ray from his feet, which low cover (and a village's earth complement,
    // whose top is at z 0) always blocks. Folded into the digest and written to the manifest only when true.
    bool muzzleCredit=true;   // plan 029 F-E, default on since 23 Sep 2026 (Jordan); --no-muzzle-credit restores the feet ray
    // Plan 030 M-S4, every controller, off by default: a gunner firing an automatic weapon holds his
    // burst against the recoil walk-up (GunnerCompensationTable). Rifles are unchanged. Folded into the
    // digest and written to the manifest only when true.
    bool gunnerCompensation=false;
    // Plan 030 (SuppressionTable), every controller, off by default; each folded into the digest and written to
    // the manifest only when on. impactSuppression (S1): a round stopped by the solid a man shelters behind, within
    // impactRadius of him, suppresses him at impactWeight. nerve (S2): a slow pinned state that holds him down after
    // the fire stops, and shakes his first shots after it lets him go. stackedSuppression (S3): his suppression does
    // not decay for stackWindow after each round that reached him, so rounds arriving together stack.
    bool impactSuppression=false,nerve=false,stackedSuppression=false;
    // Plan 030 S1b: S1's radius as a run value (--impact-radius), default SuppressionTable::impactRadius (1.5 m). Read only
    // with impactSuppression on; folded into the digest and written to the manifest only then and only when not 1.5.
    float impactRadius=1.5f;
    // Plan 030 M-S5, Legacy only, off by default; each folded into the digest and written to the manifest only
    // when on. coverQuietRelease (S5): the covering gate releases a crossing when every known threat overlooking
    // it is quiet (CoverQuietConstants), the credited-delivery test alone being the fallback; a contact then
    // remembers when its enemy was last seen firing across later sightings and reports. coverStationRadius: the
    // gun's station search radius when re-aimed at a request's threat (25 = CoverSupplyConstants.gunAimRange,
    // unchanged). coverUpperStations: that search also takes the upper-floor windows of the squad's own building
    // on an ARMYMAP 2 map (importedBuildings). coverRifleBase: with no gun station bearing on the threat, the
    // covering pair is tasked from the cover its men hold if it bears on it (CoverRifleBaseConstants).
    bool coverQuietRelease=false;float coverStationRadius=25;bool coverUpperStations=false,coverRifleBase=false;
    // Plan 030 K-1, Legacy only, off by default; folded into the digest and written to the manifest only when on.
    // retireFallen: a soldier who sees an enemy he has a line on put out of action marks his contact seenDown, and
    // the report paths carry the mark; a leader's covering-fire requests, commit and bound gates (quiet release,
    // support wait) and the manoeuvre's danger reads no longer count a track he knows is down (WithoutFallen).
    bool retireFallen=false;
    // spawnLanes (24 Sep 2026; battle_cli and the game turn it on, --no-spawn-lanes / -ArmyNoSpawnLanes restore;
    // Config{} keeps it off for the fixtures): on an imported map a squad's no-contact search lane follows its
    // team's actual spawn order. The lane code mirrored Ember's lanes, which matches the authored maps (Ember
    // spawns mirrored) but not the generated ones (both teams spawn in the same order), so every Ember squad
    // first crossed to the far lane. Authored maps are unchanged; not folded into the digest; in the manifest.
    bool spawnLanes=false;
    // Plan 030 M-S6, Legacy only, off by default; folded into the digest and written to the manifest only when on.
    // noCoveringFire: a squad never waits for covering fire and never asks for it. The commit gate, the running-bound
    // gate and the internal-bound gate treat every exposed crossing as released (no support_wait, no 20 s override
    // clock, no covering pause; the fixed 8 s exposed preparation, pressure and refusals are unchanged) and
    // RaiseCoverRequest is not called. The gun keeps its ordinary fire control; the candidate scores still read
    // CoveringPath.
    bool noCoveringFire=false;
    // Plan 030 M-S7, Jordan's suppression design (PinTable), off by default; each folded into the digest (with its
    // constants when they differ from the table) and written to the manifest only when on.
    // gradedPeek (P1, every controller): above his duck threshold a man at his cover is not hard-ducked; each settle
    // he comes up for one round with chance max(peekFloor, (1 - suppression)^peekCurve).
    // keepDown (P2, every controller): a round stopping in the cover he shelters behind (S1's detection at 2.2 m) adds
    // keepDownWeight / composure, only while his suppression is above his duck threshold or was within keepDownGrace s.
    // pinnedNeighbours (P3, every controller): while a man is above his duck threshold, each squadmate in cover within
    // 8 m with a line to him holds at least neighbourEffect suppression (never his come-up level); men moving, in the
    // open or holding a movement order are left alone.
    // coverSector (P4, Legacy only): a covering request names every known threat overlooking the crossing, loudest
    // first; the gun works them a burst each, back at once to one that fires; above the gun's capacity the covering
    // pair takes the nearest; the credited-delivery gate reads the whole set.
    bool gradedPeek=false;float peekFloor=.15f,peekCurve=2;
    bool keepDown=false;float keepDownWeight=.15f,keepDownGrace=2;
    bool pinnedNeighbours=false;float neighbourEffect=.10f;
    bool coverSector=false;
    // Plan 031 Stage D, the squad fire-and-movement drill, Legacy only, per team (bit 0 Azure, bit 1 Ember), off by
    // default; folded into the digest and written to the manifest only when on, its run constants (FireMovementTuning)
    // only when they differ from the table. While a squad of such a team is in contact, every deliberate move of its rifle
    // group (flank, advance, running and fire-team bounds, clear-lane, platoon-ordered repositions) is cut into short
    // cover-to-cover legs, each started only when the squad's gun, set on ground that bears on the known enemies
    // overlooking the leg, is heard firing on them; its station is kept while it bears; a deadline falls back to Legacy.
    int fireAndMovement=0;
    float fmLeg=FireMovementConstants.legLength,fmFireWindow=FireMovementConstants.fireWindow,fmDeadline=FireMovementConstants.deadline;
    // Plan 031 Stage G, the gun as a support weapon, Legacy only, per team (bit 0 Azure, bit 1 Ember), each off by default;
    // folded into the digest and written to the manifest only when on, its run constants (GunSupportTuning) only when they
    // differ from the table. gunSupport: a machine gunner of such a team is a support shooter for every enemy he knows (his
    // own tracks and received reports, under the support shooters' usable and area-aim rules); set (not walking) he fires
    // bursts of gunBurst rounds with a pause of gunBeat after each, and prefers the threats he fired on least recently
    // (gunRotate) and those whose known position overlooks the most of his squad (gunThreatBonus per squadmate, a moving
    // one counting 1 + gunMoverWeight). Knowledge: his own tracks and the reports he has received, his own sightings of his
    // squadmates, his own rounds and the map; never observer truth. gunBipod: a machine gunner of such a team firing set has
    // his shot spread times gunBipodFactor; physics only.
    int gunSupport=0;
    int gunBurst=GunSupportConstants.burst;
    float gunBeat=GunSupportConstants.beat,gunRotate=GunSupportConstants.rotate,gunThreatBonus=GunSupportConstants.threatBonus,gunMoverWeight=GunSupportConstants.moverWeight;
    int gunBipod=0;
    float gunBipodFactor=GunSupportConstants.bipodFactor;
    // Plan 032, grenades and using the pin, Legacy only, per team (bit 0 Azure, bit 1 Ember), off by default; folded into
    // the digest and written to the manifest only when on, its table (GrenadeTuning) only when it differs from the
    // defaults. Issue: every man of such a team but the gunners carries 1 or 2 grenades, each fragmentation or concussion
    // (from the roster seed). Physics: thrown, flying, landing, rolling and going off; the blast by overpressure, the
    // fragments as bullets. Reactions: a man who sees one land near him throws it back (a skill check), runs or dives.
    // Tactics: throws at known enemies he cannot shoot, at bunches and (holding) at men closing in; the rifle group's
    // close-in on an enemy pinned as the squad can know it. Knowledge: tracks, reports, own sightings, own and squadmates'
    // fire, the map; a grenade is seen by line of sight; the explosion is physics and reads true positions, as bullets do.
    int grenades=0;
    GrenadeTuning grenade;

    bool drills=false;
    // Plan 024: optional Azure squad ranker. Existing controllers stay unchanged.
    std::shared_ptr<const SquadPolicy> neuralPolicy;
    int policyCandidates=0;
    bool externalPolicy=false; // explicit training-only decision callback
    // Plan 026 P4: 0 = the schema-2/3 interface exactly as before; 4 = 128-column rows with the
    // go-now timing head. Set by a schema-4 model, --policy-schema 4 or a worker RESET; folded
    // into the digest only when non-zero.
    int policySchema=0;
    ScenarioFamily family=ScenarioFamily::None;
    uint32_t genSeed=1;
    Terrain terrain=Terrain::FracturedWorks;
    std::shared_ptr<const ImportedBattlefield> battlefield;
    uint32_t seed = 107;
    Doctrine doctrine = Doctrine::Balanced;
    Doctrine emberDoctrine = Doctrine::Balanced;
    Approach approach = Approach::Center;
    bool supportWeapon = true;
    // Jordan, 24 Sep 2026: every squad a machine gunner (each squad's slot 8, both sides; Azure's
    // guns still follow supportWeapon). battle_cli and the game turn it on (--platoon-mg / -ArmyPlatoonMG
    // restore one gun per platoon); Config{} keeps the historical one per platoon so unit fixtures and
    // their recorded digests stay valid. The roster itself carries it into the digest (weapon per man).
    bool squadMachineGuns = false;
    float maxSeconds = 360;
    // Plan 033, building destruction from blast force: world physics for every controller and both sides, off by default;
    // folded into the digest and written to the manifest only when on (its test charges with it, its table only where it
    // differs from DestructionTuning's defaults). Explosions (the test charges; the grenades' detonations, plan 032, with
    // grenades on) load the walls, sheds and window panes near them; walls crack, are breached or blown out, sheds are broken,
    // glass shatters, walls above a failed section and storeys whose walls have gone fall; debris and glass fly as
    // projectiles; each explosion's changes are one geometry revision, and every man learns of them by seeing them.
    // Test charges act on structures only: they injure nobody by blast (the grenade module owns blast on men).
    bool destruction=false;
    std::vector<Explosion> testCharges;
    DestructionTuning destructionTable;
    // Plan 033, a measurement switch: every explosion's change rebuilds the geometry caches in full instead of re-deriving
    // them near the change. The answers are the same (a fixture checks the digests), so it is not digested; manifest only.
    bool destructionFullRebuild=false;
};
// Plan 032: every entry of the two tables equal (GrenadeParams, GrenadeSim.cpp).
bool SameGrenadeTuning(const GrenadeTuning& a,const GrenadeTuning& b);
inline bool SameConfig(const Config& a,const Config& b) {
    // Plan 032: the grenade teams and, while on, the table.
    if(a.grenades!=b.grenades||(a.grenades&&!SameGrenadeTuning(a.grenade,b.grenade)))return false;
    if(a.externalPolicy!=b.externalPolicy||bool(a.neuralPolicy)!=bool(b.neuralPolicy)||a.policyCandidates!=b.policyCandidates||a.policySchema!=b.policySchema||
        (a.neuralPolicy&&a.neuralPolicy->digest!=b.neuralPolicy->digest))return false;
    if(bool(a.battlefield)!=bool(b.battlefield)||(a.battlefield&&a.battlefield->digest!=b.battlefield->digest))return false;
    if(a.rosterSeed!=b.rosterSeed||!SameDistribution(a.statProfiles[0],b.statProfiles[0])||!SameDistribution(a.statProfiles[1],b.statProfiles[1]))return false;
    // Only the authored static-defence inputs are compared, and only when a layout
    // is selected: the resolved objective is derived from them and the map.
    if(a.staticDefence.layout!=b.staticDefence.layout)return false;
    if(a.staticDefence.layout!=DefenceLayout::None&&(a.staticDefence.defenders!=b.staticDefence.defenders||a.staticDefence.seed!=b.staticDefence.seed))return false;
    if(a.gunnerCompensation!=b.gunnerCompensation)return false;   // plan 030 M-S4
    if(a.noCoveringFire!=b.noCoveringFire)return false;   // plan 030 M-S6
    // Plan 030 M-S7: each rule and, while it is on, its constants.
    if(a.gradedPeek!=b.gradedPeek||(a.gradedPeek&&(a.peekFloor!=b.peekFloor||a.peekCurve!=b.peekCurve)))return false;
    if(a.keepDown!=b.keepDown||(a.keepDown&&(a.keepDownWeight!=b.keepDownWeight||a.keepDownGrace!=b.keepDownGrace)))return false;
    if(a.pinnedNeighbours!=b.pinnedNeighbours||(a.pinnedNeighbours&&a.neighbourEffect!=b.neighbourEffect))return false;
    if(a.coverSector!=b.coverSector)return false;
    // Plan 031 D: the drill's teams and, while it is on, its run constants.
    if(a.fireAndMovement!=b.fireAndMovement||(a.fireAndMovement&&(a.fmLeg!=b.fmLeg||a.fmFireWindow!=b.fmFireWindow||a.fmDeadline!=b.fmDeadline)))return false;
    // Plan 031 G: each switch's teams and, while it is on, its run constants.
    if(a.gunSupport!=b.gunSupport||(a.gunSupport&&(a.gunBurst!=b.gunBurst||a.gunBeat!=b.gunBeat||a.gunRotate!=b.gunRotate||a.gunThreatBonus!=b.gunThreatBonus||a.gunMoverWeight!=b.gunMoverWeight)))return false;
    if(a.gunBipod!=b.gunBipod||(a.gunBipod&&a.gunBipodFactor!=b.gunBipodFactor))return false;
    // Plan 033: destruction and, while it is on, its test charges and its table.
    if(a.destruction!=b.destruction||(a.destruction&&(!SameExplosions(a.testCharges,b.testCharges)||!SameDestructionTuning(a.destructionTable,b.destructionTable))))return false;
    return a.movingFire==b.movingFire&&a.threatAwarePaths==b.threatAwarePaths&&a.stamina==b.stamina&&a.offLanePaths==b.offLanePaths&&a.orderPace==b.orderPace&&a.keepAction==b.keepAction&&a.keepKindReset==b.keepKindReset&&a.keepCommitClear==b.keepCommitClear&&a.coverGraduated==b.coverGraduated&&a.coverRequests==b.coverRequests&&a.coverReports==b.coverReports&&a.coverGunAim==b.coverGunAim&&a.coverShift==b.coverShift&&a.coverPlatoon==b.coverPlatoon&&a.prone==b.prone&&a.concealment==b.concealment&&a.vaulting==b.vaulting&&a.muzzleCredit==b.muzzleCredit&&a.impactSuppression==b.impactSuppression&&(!a.impactSuppression||a.impactRadius==b.impactRadius)&&a.nerve==b.nerve&&a.stackedSuppression==b.stackedSuppression&&a.coverQuietRelease==b.coverQuietRelease&&a.coverStationRadius==b.coverStationRadius&&a.coverUpperStations==b.coverUpperStations&&a.coverRifleBase==b.coverRifleBase&&a.retireFallen==b.retireFallen&&a.spawnLanes==b.spawnLanes&&a.leaderEffects==b.leaderEffects&&a.equalTroops==b.equalTroops&&SameProfile(a.platoonProfiles[0],b.platoonProfiles[0])&&SameProfile(a.platoonProfiles[1],b.platoonProfiles[1])&&a.officer.communication==b.officer.communication&&a.drills==b.drills&&a.family==b.family&&a.genSeed==b.genSeed&&a.cognition==b.cognition&&a.fullVision==b.fullVision&&a.reportDelay==b.reportDelay&&a.officer.judgment==b.officer.judgment&&a.officer.risk==b.officer.risk&&a.officer.adaptability==b.officer.adaptability&&a.foundations==b.foundations&&a.estimateBias==b.estimateBias&&a.recoveryFixture==b.recoveryFixture&&a.terrain==b.terrain&&a.seed==b.seed&&a.doctrine==b.doctrine&&a.emberDoctrine==b.emberDoctrine&&a.approach==b.approach&&
        a.supportWeapon==b.supportWeapon&&a.squadMachineGuns==b.squadMachineGuns&&a.maxSeconds==b.maxSeconds;
}
inline bool TypedController(const Config& c){return c.cognition||c.drills;}
// Plan 030 K-1: the switch where it acts, the Legacy command path only.
inline bool RetireFallen(const Config& c){return c.retireFallen&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
// Plan 030 M-S6: the switch where it acts, the Legacy command path only.
inline bool NoCoveringFire(const Config& c){return c.noCoveringFire&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
// Plan 030 M-S7 P4: the switch where it acts, the Legacy command path only.
inline bool CoverSector(const Config& c){return c.coverSector&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
// Plan 031 D: the drill where it acts, the Legacy command path only, for this team (0 Azure, 1 Ember) or for either.
inline bool FireAndMovement(const Config& c,int team){return team>=0&&team<2&&((c.fireAndMovement>>team)&1)&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
inline bool FireAndMovementAny(const Config& c){return FireAndMovement(c,0)||FireAndMovement(c,1);}
const char* FireAndMovementName(int teams); // "azure", "ember", "both" (or "off")
// Plan 031 G: each switch where it acts, the Legacy command path only, for this team (0 Azure, 1 Ember) or for either.
inline bool GunSupport(const Config& c,int team){return team>=0&&team<2&&((c.gunSupport>>team)&1)&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
inline bool GunSupportAny(const Config& c){return GunSupport(c,0)||GunSupport(c,1);}
inline bool GunBipod(const Config& c,int team){return team>=0&&team<2&&((c.gunBipod>>team)&1)&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
inline bool GunBipodAny(const Config& c){return GunBipod(c,0)||GunBipod(c,1);}
// Plan 032: grenades where they act, the Legacy command path only, for this team (0 Azure, 1 Ember) or for either.
inline bool Grenades(const Config& c,int team){return team>=0&&team<2&&((c.grenades>>team)&1)&&!c.foundations&&!c.recoveryFixture&&!TypedController(c);}
inline bool GrenadesAny(const Config& c){return Grenades(c,0)||Grenades(c,1);}
Map MakeBattleMap(const Config& config);
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
    float noLineSeconds=0; // plan 021 C: how long no rifleman of the squad has had a line onto a known enemy
    // Plan 023 E (section 11): what the commander needs to see that a squad is shattered: its able
    // riflemen (its own and any merged into it), and whether its gun is still in action.
    int ableRiflemen=0;bool gunUp=false;
    int mergedInto=-1;     // E3: the squad this one's men already obey, so a merge is never undone
    Contact contact;
    int drillInstance=0,drillKind=0;
    TaskCause drillCause=TaskCause::None;
    bool drillSuperiority=false;bool drillRecovering=false;std::string drillNote;
    float phaseLineAt=-1,completedAssaultLineAt=-1;Vec3 assaultObjective{},assaultOrigin{};
    std::vector<Vec3> drillMemberPositions;
    // Plan 028 Stage 4 (Config::coverPlatoon, Legacy only): where the squad's men are, as its leader
    // reports them, so the commander can judge which squad has a line onto a threat.
    std::vector<Vec3> memberPositions;
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
    // Plan 023 E (section 11): the squad this one is attached to, and how. attachMerge is the
    // user's merge ruling (E3): the two shattered squads become one under the host's leader.
    int attachTo=-1;bool attachBaseOfFire=false,attachMerge=false;
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
    // Plan 028 Stage 4 (Config::coverPlatoon, Legacy only): a Support directive aimed at the enemy
    // overlooking the mover's approach (enemy/contact above): the mover's leader (-1 none), his approach,
    // and whether the commander's reports gave the chosen squad a line onto that enemy.
    int coverMover=-1,coverPrevious=-1;bool coverLine=false; // coverPrevious: the squad the old rule would have picked (evidence)
    Vec3 coverFrom{},coverTo{};
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
    float recoilHold = 0;        // Plan 030 M-S4: share of his recoil a gunner holds against (0 unless Config::gunnerCompensation).
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
    // Plan 020: his current path was the covered alternative, not the shortest one.
    bool coveredPath = false;
    // Plan 022, the three fields the animation layer reads: seconds of sprint left in him,
    // the latch that keeps him at a walk until he is full again, and what the movement stage
    // applied this tick. stamina starts at his capacity; with the feature off nothing moves.
    float stamina = 8;
    bool winded = false, sprinting = false;
    // Plan 029 M-C (Config::vaulting): going over an obstacle right now, how far through the vault
    // (0..1) and the height of the top above his feet. The animation layer reads these three.
    bool vaulting = false;
    float vaultProgress = 0, vaultHeight = 0;
    // Plan 029 M-C2: his last vault, as he knows it: where he took off, where it lands him (his position stays
    // the take-off until then) and when; vaultLandsAt is -1 until his first vault (always with the switch off).
    Vec3 vaultTakeoff{}, vaultLanding{};
    float vaultLandsAt = -1;
    // Plan 030 (only moved with the switches on; 0 / 0 / -100 otherwise). nerve (Config::nerve): 0..1, gained while his
    // suppression is above his duck threshold and lost slowly after; shakenShots: rounds left to fire with the shaken
    // cone and settle after nerve released him. lastNearMissAt (Config::stackedSuppression): when a round last reached him.
    float nerve = 0;
    int shakenShots = 0;
    float lastNearMissAt = -100;
    // Plan 030 M-S7 (Config::keepDown or pinnedNeighbours; -100 otherwise): when his suppression was last above his
    // duck threshold.
    float aboveDuckAt = -100;
    // Plan 031 D (Config::fireAndMovement; -100 otherwise). fmFireAt: the drill's gun's last round fired set at his station
    // on a threat of his sector. fmHeardAt: when this man last heard his own squad's gun fire such a round (local
    // perception: every man of the squad hears it at once, no report and no delay). fmWaitSince: since when he has been
    // holding for the gate (his leader sees his man stay put instead of going where he was sent).
    float fmFireAt = -100, fmHeardAt = -100, fmWaitSince = -100;
    // Plan 031 G (Config::gunSupport for his team, Legacy only; set by Simulate before the first tick, false otherwise): his
    // team fights its machine guns as support weapons. Read together with machineGun (SelectFireSolution, the firing stage).
    bool supportGun = false;
    // Plan 032 (Config::grenades for his team, Legacy only; never set otherwise). grenades: those he carries, by type
    // (GrenadeType), issued before the first tick from the roster seed, never to a gunner. stunUntil / deafUntil: a
    // blast's effects on him; stunned (no fire, no new move, down) and deafened are those clocks as the tick began, and
    // reactionScale is GrenadeTuning::deafReaction while he is deafened (ReactionSeconds multiplies by it; 1 otherwise).
    // grenadeRush: he is on a close-in's rush and sprints.
    std::array<uint8_t,2> grenades{};
    float stunUntil = -100, deafUntil = -100, reactionScale = 1;
    bool stunned = false, deafened = false, grenadeRush = false;
    float knockHeight = 0;       // plan 032 R2: how high a blast has thrown him (m above his floor; 0 on the ground), for the renderer
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
// Plan 028 Stage 1: a covering-fire payload a soldier holds and may still act on at this time. Only the
// Legacy command path writes one (Config::coverRequests), so it is never live anywhere else.
inline bool FirePayloadLive(const Soldier& s,float time){return !s.cognition&&s.assignment.fireEnemy>=0&&s.assignment.fireEnemy<UnitCount&&time<=s.assignment.fireUntil;}
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
// Plan 030 K-1 (Config::retireFallen): the fall of a man the observer had in sight at his last look. The same
// sight test as SenseEnemy, made on the body; only when that line is clear is the target's state read. Returns a
// known, not visible contact marked seenDown at `time`, or an unknown one.
Contact SenseFall(const Soldier& observer,const Soldier& target,const Map& map,float time);
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
// Plan 028 Stage 1 (Config::coverRequests, Legacy only): the leader's call for covering fire on the
// primary overlooking the crossing he waits on or runs. Written only by his own planning
// (RaiseCoverRequest) from his own knowledge: the enemy, his track of it, the crossing and until when
// it lives. Who answers is tasked from it: the gun; at most two riflemen whose own spot already bears
// on the threat (tasked); the ready BoundCover men of an internal bound (boundCover); the foothold men.
struct CoverRequest {
    int enemy=-1,serial=0,requester=-1;
    Contact contact;
    Vec3 from{},to{};
    float startedAt=-100,until=-100,gunNoLineSince=-1;
    const char* gate="";
    std::array<bool,SquadSize> tasked{},boundCover{};
    std::shared_ptr<const std::vector<FriendlyIntent>> friendlies;
    // Plan 028 Stage 4: the crossing's path from `from` (the gun and a shifted man keep off it); the men
    // shifted to a place with a line (Config::coverShift; they are tasked too) and where to; whether the
    // gun search has been reported as finding nothing for this request.
    std::shared_ptr<const std::vector<Vec3>> crossing;
    std::array<bool,SquadSize> shift{};
    std::array<Vec3,SquadSize> shiftTo{};
    bool gunAimReported=false;
    // Plan 030 M-S5 (Config::coverRifleBase): the tasked men taken as the rifle base of fire (from the cover
    // they hold, not their ordered place) because no gun station bore on the threat. Trace only.
    std::array<bool,SquadSize> rifleBase{};
    // Plan 030 M-S7 P4 (Config::coverSector; null and -1 otherwise): every known threat overlooking the crossing
    // (QuietCrossing's set), loudest first (the leader's last sighting or report of his fire), each with the leader's
    // track; the gun's share of it (the threats no covering rifleman took); and, per slot, the sector threat a tasked
    // rifleman was given instead of the primary.
    std::shared_ptr<const std::vector<SupportThreat>> sector,gunSector;
    std::array<int,SquadSize> sectorEnemy=[]{std::array<int,SquadSize> a{};a.fill(-1);return a;}();
};
// Plan 031 Stage D (Config::fireAndMovement): the drill's state of one squad, written only by UpdateFireMovement (the
// leader's plan) from his knowledge, his squad's own state and what he hears of his gun. kind: what the drill governs now:
// nothing, a leg of a running route bound, a leg of an advance, or (Hold) the group in contact between legs, when every
// move of its men waits for the gun just the same. A leg is identified by its serial (a hold spell has one too); its
// threats are the leader's fresh tracks overlooking it (for a hold spell: watching the group's ground); gated: its men wait
// for the gun (threats known, a gun able and set up, no fallback). The gun's station and fire payload live here too.
enum class FmKind { None, Route, Advance, Hold };
struct FireMovementState {
    FmKind kind=FmKind::None;
    int leg=0;                        // serial of the leg in hand (0 before the first)
    uint64_t route=0;int routeStage=-1,boundStage=-1; // a route leg's identity
    Vec3 from{},to{};                 // the leg's start and end
    std::shared_ptr<const std::vector<Vec3>> path; // the leg's path from `from` (the gun keeps his line off it)
    Vec3 mission{};                   // an advance leg: the mission it was cut from
    float plannedAt=-1,startedAt=-1;  // when the leg was planned, when the leader first saw a man of it go
    float closedSince=-1;             // the gate (as the leader hears the gun) has been closed since, -1 while open
    float fallbackAt=-1;              // when the leg fell back (a hold spell re-arms after deadline, or when the gun is heard)
    bool gated=false,open=false,fallback=false;
    const char* fallbackWhy="";
    std::vector<int> threats;         // the leg threats, loudest first
    bool governsGun=false;            // the gun's station and order are the drill's
    int gun=-1;                       // the gun it governs
    Vec3 station{},stationPeek{};bool hasStation=false,displacing=false;int stationGun=-1;float stationAt=-1,bearsAt=-1;
    CoverRequest payload;             // the gun's fire payload (gate "drill")
};
inline bool CoverRequestLive(const CoverRequest& r,float time){return r.enemy>=0&&r.enemy<UnitCount&&time<=r.until;}
// Plan 030 M-S7 P4: the enemy, and the leader's track of him, that the man in this slot covers: the sector threat the
// request gave him (Config::coverSector only), else the request's primary.
inline int RequestEnemy(const CoverRequest& r,int slot){return r.sectorEnemy[slot]>=0?r.sectorEnemy[slot]:r.enemy;}
inline const Contact& RequestTrack(const CoverRequest& r,int slot){
    if(r.sectorEnemy[slot]>=0&&r.sector)for(const auto& t:*r.sector)if(t.enemy==r.sectorEnemy[slot])return t.contact;
    return r.contact;}
struct SquadCommand {
    AcceptedPlan accepted;
    DrillState drill;

    std::shared_ptr<const TacticalRoute> route;
    int routeSerial=0,routeStage=0,boundStage=0; // boundStage: last route segment merged into the running bound
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
    Maneuver preparedKind=Maneuver::Advance; // schema-3 pending intent family
    // Plan 026 P4b: a schema-4 "go now" commit releases this route's bounds from the readiness
    // gates (covering fire on the crossing, the eight-second preparation) until its deadline.
    // Cleared by a pause or at the destination; chained segments of the same route keep it.
    bool policyRelease=false;float policyReleaseUntil=-1;uint64_t policyReleaseRoute=0;
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
    GroupStations stations;
    // Plan 023 E (section 11): a withdrawal's fixed end point and the enemy it was made against
    // (the squad's own tracks age out behind cover, so the sector it watches is remembered here);
    // the host it is attached to or merged into, what that host was doing, and how many able
    // riflemen it has (its own and any merged into it), counted where every squad is visible.
    Vec3 fallback{},fallbackSector{};
    float fallbackAt=-1;
    int attachedTo=-1,mergedInto=-1,ableRiflemen=SquadSize;
    bool attachBaseOfFire=false;
    Vec3 attachPosition{},attachSector{};
    float noLineSince=-1,boundMajorityAt=-1;
    int boundsCompleted=0, building=-1;
    float boundStarted=-1, boundReleasedAt=-1, boundRetryAt=0, buildingUntil=0, buildingRetryAt=0;
    Vec3 mission{}, boundOrigin{};
    int searchLeg=0, platoonOrderSerial=0;
    PlatoonTask platoonTask=PlatoonTask::None;
    float platoonUntil=0, platoonReadySince=-1;
    int preparedPlatoonSerial=0;
    DrillPlan battleDrill;
    CoverRequest coverRequest; // plan 028 Stage 1, Legacy with Config::coverRequests only
    // Plan 028 Stage 4 (Config::coverPlatoon): the platoon Support directive's threat, as the payload the
    // squad's gun carries (gate "platoon"; its requester is the mover's leader). Legacy only.
    CoverRequest platoonCover;
    float gunAimAt=-100; // plan 028 Stage 4 (Config::coverGunAim): when the gun was last re-aimed
    FireMovementState fm; // plan 031 Stage D (Config::fireAndMovement only; untouched otherwise)
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
// Stamina and the sprint (plan 022). Capacity and recovery come from endurance, the sprint
// pace from speed. StaminaPenalty is exactly 1 at full stamina, so every formula it enters
// keeps its pre-022 value while the feature is off. SprintTrigger is the user's rule on the
// soldier's own state: revealedAhead is "the stretch of path ahead is in the sight of an
// enemy he knows", which the movement stage measures for him.
float StaminaCapacity(const Soldier& soldier);
float SprintPace(const Soldier& soldier);
// The movement stage's own speed formula (health, suppression, stance, walking fire, sprint and,
// plan 023 stage C, an order's own pace), pulled out so it has one place and can be tested
// directly instead of only through a whole battle.
float MovementSpeed(const Soldier& soldier,const Config& config);
float StaminaRecovery(const Soldier& soldier);
bool CanSprint(const Soldier& soldier);
float StaminaPenalty(const Soldier& soldier,float factorAtEmpty);
bool SprintTrigger(const Soldier& soldier,bool revealedAhead,float remaining);
// spend (plan 029 M-C) is stamina charged at once before the tick, a vault's cost; 0 is the old step.
void StepStamina(Soldier& soldier,bool sprinting,bool displaced,float seconds,float spend=0);
// Plan 029 M-C: the vault a man can make now, from his own state (understood health, stamina, stats,
// organisation role, stance). None when Config::vaulting is off, wounded (<55), prone, or, with
// stamina on, winded or short of a low vault's cost; High when he is not the gunner, mean(strength,
// dexterity) >= 102 and (stamina on) he has a wall's cost; otherwise Low.
VaultClass VaultClassOf(const Soldier& soldier,const Config& config);
// Seconds one vault takes him: the needed class's seconds divided by his dexterity.
float VaultSeconds(const Soldier& soldier,VaultClass need);
// The movement stage's choice for the leg from where he stands to dest, the next point of his path:
// Walk (a leg he can walk, or one that is no vault: the ordinary step), Vault (over it now) or Replan
// (a vault that needs more than he has left). need and height describe the vault. Walk when off.
enum class VaultStep { Walk, Vault, Replan };
VaultStep VaultStepFor(const Map& map,const Soldier& soldier,Vec3 dest,const Config& config,VaultClass* need=nullptr,float* height=nullptr);
// Plan 029 M-C2: a path's length as his own-class search costs it: the sum of its legs from `from`, with
// every vault leg (a leg he cannot walk that is a vault of class cls) its table seconds at dexterity 100
// as metres at VaultTable::plannerPace. With cls None it is the plain length. The cover searches rank by
// it when Config::vaulting is on, so cover over a wall costs the vault, not the 2 m it looks.
float PathTravel(const Map& map,Vec3 from,const std::vector<Vec3>& path,VaultClass cls);
// The metres PathTravel adds for the one leg a->b: a vault's, or 0 for a leg he walks (or cls None).
float VaultLegMetres(const Map& map,Vec3 a,Vec3 b,VaultClass cls);
float AimReady(const Soldier& soldier);
// Plan 030. DuckThreshold is his doctrine's (0.40 cautious, 0.52 balanced, 0.65 aggressive). NervePinned: with
// Config::nerve on, his nerve is above pinnedAt and the rise and pop-up rules do not release him. AimSuppression is
// the suppression his cone and settle are computed at: his own, or shakenSuppression for his first shots after a
// release (only ever differs with Config::nerve on). StepSuppression is the per-tick decay of suppression (and, with
// the switches on, the nerve clock and the stacking pause); with every switch off it is the historical decay exactly.
float DuckThreshold(const Config& c,int team);
bool NervePinned(const Soldier& s,const Config& c);
float AimSuppression(const Soldier& s);
void StepSuppression(Soldier& s,const Config& c,float time,float seconds);
float AimSeconds(const Soldier& soldier);
float ShotSpread(const Soldier& soldier);
// Plan 031 G (Config::gunBipod, Legacy only): a machine gunner of such a team firing set (not walking) is on his bipod.
inline bool GunBipodSet(const Soldier& s,const Config& c,bool walking){return s.machineGun&&!walking&&GunBipod(c,s.team);}
// The yaw cone of the round the firing stage fires now: ShotSpread, a rifle's allowance for area fire, and (plan 031 G) a
// machine gun on its bipod times Config::gunBipodFactor. The vertical spread is unchanged.
float FiredSpread(const Soldier& soldier,const Config& c,bool walking,bool area);
float VerticalSpread(const Soldier& soldier);
// Sway and recoil are aim offsets in radians: x is yaw, y is pitch, z is unused.
// SwayOffset is a pure function of recorded state so the viewer can draw it.
float SwayAmplitude(const Soldier& soldier);
Vec3 SwayOffset(const Soldier& soldier,float time);
float RecoilKick(const Soldier& soldier);
void ApplyRecoil(Soldier& soldier);
void DecayRecoil(Soldier& soldier,float seconds);
// Plan 030 M-S4 (Config::gunnerCompensation), automatic weapons only. After each shot the gunner pulls
// the aim back against the recoil he has just felt: RecoilHold is the share he holds, share * StatScale(dex)
// * (1 - suppressionLoss * suppression), clamped to 0..1, stored on Soldier::recoilHold after ApplyRecoil
// and applied on his next shot. The physical recoil (Soldier::recoil, its kick and its decay) is unchanged;
// HeldRecoil is the part of it that still reaches the aim, recoil * (1 - recoilHold). No random draw.
struct GunnerCompensationTable {
    float share=0.7f;             // the share of the recoil vector a dexterity-100 gunner holds, unsuppressed
    float suppressionLoss=0.5f;   // fully suppressed he holds half as much
};
inline constexpr GunnerCompensationTable GunnerCompensationValues{};
inline const GunnerCompensationTable& GunnerCompensation(){return GunnerCompensationValues;}
float RecoilHold(const Soldier& soldier);
Vec3 HeldRecoil(const Soldier& soldier);
// Energy ballistics. Speed decays as v0*exp(-dragK*distance), so the flight time
// to a point is the integral of that decay; dragK <= 0 falls back to distance/v0.
float FlightTime(float distance,float muzzleVelocity,float dragK);
// A body absorbs a fixed number of joules; a round that would keep less than the
// exit threshold stops inside and gives up all of its energy.
float DepositedEnergy(float impactEnergy);
float HitSeverity(float roll);
float HitDamage(float impactEnergy,float severity);
struct FireSolution { int enemy=-1; Vec3 point{}; float observedAt=-100; bool area=false; };
// Plan 031 Stage G (Config::gunSupport): a support gun's fire-control memory, one per gunner per battle, kept by the firing
// stage (never static, never on the soldier or his copies). firedAt: when he last fired a round on each enemy (-100:
// never). overlooks: for each enemy, the squadmates his own track of that enemy overlooks (ScoreGunThreats), counted at
// scoredAt (0: never). lastTarget: his last burst's target, for the evidence rows only.
struct GunSupportMemory {
    std::array<float,UnitCount> firedAt{},overlooks{};
    float scoredAt=0;
    int lastTarget=-1;
    GunSupportMemory(){firedAt.fill(-100.f);}
};
// What the firing stage hands SelectFireSolution for a support gun: his memory and the run values; back come the chosen
// candidate's score, its two support terms and the number of candidates scored (the evidence rows). Only the firing stage
// passes one: every other caller asks only whether he has a solution at all, which these terms never decide (they move a
// candidate's score; they never admit or refuse one).
struct GunSupportControl {
    const GunSupportMemory* memory=nullptr;
    float rotate=GunSupportConstants.rotate,threatBonus=GunSupportConstants.threatBonus;
    float value=0,threatTerm=0,rotationTerm=0;
    int candidates=0;
};
// control: Plan 031 G, the firing stage's support-gun terms (null everywhere else, and always with Config::gunSupport off).
FireSolution SelectFireSolution(const Soldier& soldier,const Map& map,float time,GunSupportControl* control=nullptr);
// Plan 031 G: counts, at most every GunSupportTuning::rescore seconds, how many of his squadmates each enemy he tracks
// overlooks: a clear line from his own track's eye (seen within trackAge) to a mate's chest within reach, the mate where he
// himself saw him within mateAge (himself where he stands), one who was moving counting 1 + moverWeight. Knowledge: his
// own tracks, his own sightings of his squadmates, the map; never observer truth.
void ScoreGunThreats(const Soldier& gunner,const Map& map,float time,float moverWeight,GunSupportMemory& memory);
// Plan 030 M-S7 P4 (a sector payload, Config::coverSector): the threat of his sector he saw fire most recently, within
// PinTable::sectorLoud; -1 when none (or no sector payload).
int SectorLoud(const Soldier& soldier,float time);
// Plan 030 M-S7 P1 (Config::gradedPeek): the counter-based draw of one settle, in [0,1); and the chance of a graded peek.
float SettleDraw(uint32_t seed,int soldier,float time);
float GradedPeekChance(const Config& c,float suppression);
// Plan 030 M-S7 P3 (Config::pinnedNeighbours): while a man is above his duck threshold, each squadmate within
// PinTable::neighbourRadius with a line to him (eye to eye) who is at his cover (atCover), not moving and not holding a
// movement order (Advance, Rally, Flank, BoundMove, ClearLane, PullBack) is raised to at least Config::neighbourEffect,
// capped at his duck threshold less PinTable::neighbourMargin; a floor, never added. Returns the men raised.
int PinnedNeighbours(std::array<Soldier,UnitCount>& soldiers,const Map& map,const Config& c,const std::function<bool(const Soldier&)>& atCover);
// Plan 030 M-S7 P2 (Config::keepDown): whether a round stopped in his cover counts for him now: his suppression is above
// his duck threshold, or was within Config::keepDownGrace (Soldier::aboveDuckAt).
bool KeepDownApplies(const Soldier& s,const Config& c,float time);
float FriendlyFireRisk(const Soldier& soldier,const Map& map,Vec3 aim,float time);
bool ShouldHoldFire(const Soldier& soldier,float risk);
// graded (plan 030 M-S7 P1, Config::gradedPeek): he is up on a graded peek and settles his aim whatever the fire on
// him (off, suppression 0.8 or more keeps his aim at nothing).
void UpdateAim(Soldier& soldier, int target, Vec3 position, float dt, bool graded=false);
struct Frame {
    float time = 0;
    std::array<Soldier, UnitCount> soldiers;
    std::array<SquadCommand, SquadCount> command{};
    std::array<PlatoonCommand,2> platoon{};
    // Plan 032 (Config::grenades; empty otherwise): the grenades in the world as the frame was recorded (for the renderer).
    std::vector<GrenadeState> grenades;
};
// Encounter fixtures set every soldier to stats 100 and max health 100.
void NeutraliseStats(Frame& frame);
// Throws std::logic_error if machineGun or the magazine disagrees with the equipped weapon.
void CheckWeaponConsistency(const Frame& frame);
// Tactical input contains personal observations and friendly reservations only.
struct Tactics {
    uint64_t coverId=0,geometryRevision=0;
    CoverRule coverRule=CoverRule::None; // Plan 020 trace only; Tactics is runtime state, never digested.
    bool assigned = false, peeking = false, halfCover = false;
    bool defensiveOnly = false, emergency = false;
    int roundsAtPeek = 0;
    float healthAtPeek = 100, readyAt = 0;
    Vec3 shelter{}, peek{};
    Vec3 travelPosition{};
    float phaseUntil = -1, expires = 0, lastProgress = 0, lastDistance = 1e9f;
    // Plan 029 M-A1 (Config::prone): when he went down, -1 when he is not prone. Runtime only, never
    // digested; the decision wrappers keep it across the resets the cover search makes.
    float proneSince = -1;
    // Plan 029 M-A2: the held cover is prone cover (a crater rim): he shelters prone and pops up
    // crouched to fire. Set only from a CoverPosition with prone, so never while Config::prone is off.
    bool proneCover = false;
    // Plan 030 M-S7 P1 (Config::gradedPeek; never set otherwise): he is up on a graded peek taken above his duck
    // threshold, since gradedAt; it lasts until he fires a round, is hit, or PinTable::peekHold has passed.
    bool gradedPeek = false;
    float gradedAt = -100, gradedDrawAt = -100; // gradedDrawAt: when he last drew for one (counted, never read)
    // Plan 031 D (Config::fireAndMovement; never set otherwise): this is the cover he waits in for his gun's fire before a leg;
    // fmRushLeg: the leg whose rush he started through the open gate (he finishes it whatever he hears after).
    // fmHeldAt: the decision time at which he last held for the gate (the decision loop reads it for Soldier::fmWaitSince).
    bool fmWait = false;
    int fmRushLeg = 0;
    float fmHeldAt = -100;
};
// The stance he shelters in at his remembered cover, and the one he fires from at its peek.
inline Stance ShelterStance(const Tactics& t){return t.proneCover?Stance::Prone:t.halfCover?Stance::Crouched:Stance::Standing;}
inline Stance PeekStance(const Tactics& t){return t.proneCover?Stance::Crouched:Stance::Standing;}
struct DecisionAlternatives;
// Plan 020, the one way out of cover while under fire: a position within PathCaution::betterCover
// that protects him from more of the enemies he knows than the one he holds. Rewrites memory and
// returns true when it found one. Own knowledge only; never an enemy body.
// cls (plan 029 M-C): his own vault class for the reachability test; None is the test as it always was.
// byPath (plan 029 M-C2, Config::vaulting): candidates rank by PathTravel and its limit applies to it; false is
// the straight-line ranking as it always was.
bool BetterCoverNearby(const Map& map,const Soldier& soldier,const std::vector<Vec3>& friendlyReservations,Tactics& memory,float time,VaultClass cls=VaultClass::None,bool byPath=false);
// Plan 020's measure, for tests and tools: the seconds this walk would leave him with a clear
// line to ONE enemy he knows, at his own pace; the figure is the worst single enemy.
// stamina true charges the revealed stretches at the pace he will actually have: he sprints
// them while his stamina lasts and walks the rest (plan 022).
float PathRevealedSeconds(const Map& map,const Soldier& soldier,Vec3 from,const std::vector<Vec3>& path,float time,bool stamina=false);
struct Order { Vec3 goal; Action action; Reason reason; Stance stance = Stance::Standing; };
Order ChooseOrder(const Soldier& self, const Map& map, const Config& config,
    const std::vector<Vec3>& friendlyReservations, Tactics& memory, float time, DecisionAlternatives* alternatives=nullptr);
// ChooseOrder without the fire-and-movement gate (plan 031 D): what ChooseOrder was before it, and what it still is for
// every order that is not the drill's (FireMovementOrder::gun < 0, always with Config::fireAndMovement off).
Order ChooseOrderPlain(const Soldier& self, const Map& map, const Config& config,
    const std::vector<Vec3>& friendlyReservations, Tactics& memory, float time, DecisionAlternatives* alternatives=nullptr);
// Plan 029 M-A1. ChooseOrder is ChooseOrderBase followed by ApplyProne when Config::prone is on, and
// ChooseOrderBase alone when it is off. openGround (may be null) is set when the decision is the
// open-ground fallback: every cover search failed and he is to back off or hold where he is.
Order ChooseOrderBase(const Soldier& self, const Map& map, const Config& config,
    const std::vector<Vec3>& friendlyReservations, Tactics& memory, float time, DecisionAlternatives* alternatives, bool* openGround);
// The prone rules on top of a decision already made, from his own state and knowledge only.
Order ApplyProne(const Soldier& self, const Map& map, const Config& config, Tactics& memory, float time, const Order& decided, bool openGround);
// Whether lying down would help him here: not on stairs, not inside a building, and no enemy he knows
// of within 60 m looking down on him from more than 2 m above his prone body.
bool ProneUseful(const Soldier& self, const Map& map, float time);
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
// The covering-fire delivery credit ray (plan 029 F-E): is the line from where the round was fired
// to `end` (where it now is) clear? Off (Config::muzzleCredit false) Legacy tests from shot.start, his
// feet, with the sight ray; the typed controllers from the muzzle. On, every controller tests from the
// muzzle with the solid-only ray.
bool DeliveryLineClear(const Map& map,const Config& c,const Shot& shot,const Soldier& shooter,Vec3 end);
// Returns only the part of the recorded flight reached at this replay time.
bool ProjectilePosition(const Shot& shot, float time, Vec3& position);
struct Record;struct Frame;
// frameSink sees every recorded frame as it is produced. With keepFrames false only the
// first frame stays in the record: a lean consumer (Diagnostics LeanRecorder) folds what
// it needs and the 1.6 MB frame is dropped. Simulation itself never reads later frames.
struct DiagnosticOptions { bool enabled=true, detailed=false; int soldier=-1,squad=-1; float from=0,to=600;
    std::function<void(const SquadDecision&)> squadDecisionSink;
    std::function<int(const SquadObservation&,int,float)> squadActionCallback;
    std::function<void(const Frame&)> trainingStateSink; // privileged training truth, separate from actor
    std::function<void(const Record&,const Frame&)> frameSink; bool keepFrames=true; };
struct Diagnostics;
struct GeometryEdit { float time=0; uint64_t obstacle=0; bool remove=true; Obstacle replacement; };
struct GeometryVersion { float time=0; Map map; std::string reason; };
enum class DestructionKind { Cracked, Breached, Destroyed, Collapsed, GlassShattered, Rubble };
struct DestructionEvent {
    float time = 0; DestructionKind kind = DestructionKind::Cracked;
    uint64_t obstacle = 0;   // the obstacle id affected (0 for glass panes and new rubble)
    Vec3 center{}, half{};   // the affected piece as a box (for a breach: the hole)
    Vec3 velocity{};         // mean velocity of its debris, m/s (from the panel response)
    int material = 0;        // 0 stone, 1 brick, 2 timber, 3 glass
    float mass = 0;          // kg of debris thrown
};
// Record::destruction (std::vector<DestructionEvent>), in time order; the geometry itself stays in
// Record::geometryVersions (GeometryAt(time)).
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
// Threat-aware path totals of one battle, so the covered-path rate and the detour are
// readable from a trace-free export (the per-choice rows need the trace).
struct PathCautionTotals { int searched=0,covered=0; double detour=0,shortestRevealed=0,coveredRevealed=0; };
// Plan 033: a window's glass as the battle began (Record::glassPanes, with destruction on): its id (the obstacle field of
// its GlassShattered event; never an obstacle's id) and its box (centre at mid-height, half extents).
struct GlassPane { uint64_t id=0; Vec3 center{}, half{}; };
struct Record {
    PathCautionTotals caution;
    std::shared_ptr<const DefencePlan> defence;
    std::shared_ptr<const GeneratedScenario> generated;
    std::vector<GeometryVersion> geometryVersions;
    std::vector<DestructionEvent> destruction;
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
    int vaults = 0; // plan 029 M-C: vaults begun (Config::vaulting); manifest only when on
    DestructionTotals destructionTotals; // plan 033 (Config::destruction; zero otherwise): manifest only when on
    std::vector<GlassPane> glassPanes;   // plan 033: every window pane at the start (Config::destruction; empty otherwise)
    int keepDownImpacts = 0, gradedPeeks = 0, gradedSettles = 0, neighbourLifts = 0; // plan 030 M-S7 P2 / P1 / P3 counts; manifest only when on
    int impactSuppressions = 0; // plan 030 S1: (round, soldier) suppressions by a round stopped in his cover; manifest only when on
    int gunSupportBursts = 0, gunBipodRounds = 0; // plan 031 G: support-gun bursts begun, rounds fired on the bipod; manifest only when on
    // Plan 032 (Config::grenades; zero and empty otherwise): the battle's grenade totals and every explosion.
    GrenadeTotals grenadeTotals;
    std::vector<GrenadeExplosion> explosions;
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
