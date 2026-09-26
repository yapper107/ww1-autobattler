#pragma once
// Plan 033, building destruction from blast force (Config::destruction: world physics for every controller and both
// sides; off by default, and with it off nothing here runs or is allocated).
//
// The simulator decides what breaks; Unreal shows it (Record::destruction, Record::geometryVersions). Every explosion in
// the world's queue loads the structural panels near it (the walls of buildings, garden walls, sheds) and the window panes
// with the Kingery-Bulmash blast (BlastSim), reduced for obliquity, nothing where another solid shields a point, raised in
// a room. A panel answers as single-degree-of-freedom strips spanning between its supports (numeric integration over the
// pulse: peak deflection, ductility, support rotation, damage state); a charge at or against a wall breaches it locally by
// the FM 5-250 breaching formula. A breached panel is split around its hole, a blown-out one removed with rubble at its foot;
// the wall above a failed section falls; a storey whose walls have lost too much of their length falls with everything above
// it; debris and glass fly as projectiles. Each explosion's changes are one geometry revision of the true map.
//
// Event boxes (DestructionEvent::center, half) are true boxes: the centre at mid-height and half.z half the height (an
// Obstacle's center.z is its base). Materials: 0 stone, 1 brick, 2 timber, 3 glass. The obstacle field: the panel's id
// (cracked, breached, destroyed, collapsed), the new heap's id (rubble: the renderer maps it directly), the pane's id
// (glass: Record::glassPanes lists every pane at the start), 0 for a whole storey's collapse (the footprint over the
// fallen height, for the renderer's floors and roof).
//
// Knowledge boundary. Physics reads the true map and true positions, as bullets do. A man's decisions read his own geometry
// (CommandRuntime::geometryViews): he learns of a change when he sees the changed piece, or is within 3 m of it, after his
// report reaction delay, as with the legacy edits; men who know the same changes share one map object and its caches.
// Every random draw is counter-based (SplitMix64 of the battle seed, the explosion and the item), so the battle's random
// stream is never touched.
#include "BattleSim.h"
#include <array>
#include <functional>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace army {
struct Diagnostics;
// The table by name: CLI --destruction-param NAME=VALUE, the manifest's destruction_params, SameDestructionTuning, the digest.
struct DestructionParam { const char* name; float DestructionTuning::* member; };
const std::vector<DestructionParam>& DestructionParams();
bool SetDestructionParam(DestructionTuning& table,const std::string& name,float value); // false: no such name
enum class BuildMaterial : uint8_t { Stone, Brick, Timber, Glass };
const char* BuildMaterialName(BuildMaterial material);

// ---- The structure -------------------------------------------------------------------------------------------------
// A panel is one obstacle box. Walls span vertically between a storey's floor and the floor or roof above; lintels and
// sills (the masonry over and under a window, bonded into the piers) span horizontally between the piers either side;
// garden walls stand as cantilevers from their foot; a shed is a timber box whose faces are boarding.
enum class PanelKind : uint8_t { Wall, Sill, Lintel, GardenWall, Shed };
enum class Span : uint8_t { Vertical, Cantilever, Horizontal };
struct Panel {
    uint64_t obstacle=0; PanelKind kind=PanelKind::Wall; BuildMaterial material=BuildMaterial::Brick;
    int building=-1, storey=0;   // StructureBuilding index (-1 none); the storey its base stands on
    bool cracked=false, alive=true;
};
// A window's glass, in the opening between a sill and the lintel over it (not an obstacle: shattering never changes the
// geometry). A true box.
struct Pane { uint64_t id=0; Vec3 center{}, half{}; int building=-1, storey=0; bool intact=true; };
constexpr uint64_t PaneIdBase=900000000; // pane n (from 1) has id PaneIdBase + n: never an obstacle's id
struct StoreyWalls { float base=0, top=0, supportLength=0; };
struct StructureBuilding { size_t index=0; bool authored=false; Vec3 center{}, half{}; int storeys=1; std::vector<StoreyWalls> levels; bool roofDown=false; };

// ---- The response ---------------------------------------------------------------------------------------------------
// One strip of a panel (a unit-width slice spanning between its supports). Masonry: elastic to cracking (the tensile bond
// and the axial precompression), then rocking under its axial load (and arching when confined), both falling to zero when
// the deflection reaches the thickness (a horizontal span arches between the piers either side: `spandrel`). Timber:
// elastic-perfectly plastic at its modulus of rupture. Loads: one triangular
// pulse per cell (peak kPa, duration ms), averaged with the strip's mode shape (weight).
struct StripProperties { float span=3, thickness=.5f, density=2000, modulus=2e9f, strength=1e5f, compressive=2e6f, axialTop=0, arching=0, spandrel=0;
    Span support=Span::Vertical; bool masonry=true, confined=false; };
struct StripCell { float pressure=0, duration=0, weight=1; };
struct StripResponse { float peak=0, velocity=0, yield=0, ductility=0, rotation=0; int state=0; }; // state 0 intact 1 cracked 2 breached 3 blown out
StripResponse RespondStrip(const StripProperties& strip,const std::vector<StripCell>& cells,const DestructionTuning& k);
// FM 5-250: the breaching radius (m) of `charge` kg TNT: R = (P / (K C))^(1/3) ft, P in lb.
float BreachRadius(float charge,float factor,float placement);

// ---- The battle's state ---------------------------------------------------------------------------------------------
// One explosion's changes, which men learn of together: seen when a man is within 3 m of a changed piece (boxes) or sees one
// of the sample points (the corners of the pieces that went, as the legacy edits' test has them); its edits need the
// earlier units (needs) that made the pieces they remove.
struct ChangeUnit { int explosion=0; std::vector<Obstacle> boxes; std::vector<Vec3> samples; GeometryBatch batch; std::vector<int> needs; };
struct KnowledgeState { std::shared_ptr<Map> map; std::vector<int> units; };
struct DebrisFragment { Vec3 p{}, velocity{}; float mass=0, dragK=0, born=0, time=0; int explosion=0, index=0; uint64_t struck=0; BuildMaterial material=BuildMaterial::Stone; };
struct DestructionRuntime {
    DestructionTuning k; uint32_t seed=0; BuildMaterial masonry=BuildMaterial::Brick;
    bool incremental=true;          // ApplyGeometryBatch's incremental caches (false: the full rebuild; same answers)
    std::vector<Explosion> queue; size_t next=0; int explosions=0; uint64_t nextId=1;
    std::vector<Panel> panels; std::unordered_map<uint64_t,size_t> panelOf;
    std::vector<Pane> panes; std::vector<StructureBuilding> buildings;
    std::vector<ChangeUnit> units; std::unordered_map<uint64_t,int> createdBy;
    std::vector<DebrisFragment> fragments;
    // Knowledge: per man the state he knows (null: the true map, every change known), the units he knows, and per unit his
    // receipt (-1 unseen, >= 0 known from then, -2 known and applied).
    bool viewsActive=false; uint64_t viewSerial=0;
    std::array<std::shared_ptr<KnowledgeState>,UnitCount> view{};
    std::array<std::vector<int>,UnitCount> known{};
    std::array<std::vector<float>,UnitCount> receipt{};
    std::vector<std::weak_ptr<KnowledgeState>> states;
    std::array<const Map*,UnitCount> pointers{};
    DestructionTotals totals;
};
// What Simulate lends the module: its casualty and displacement bookkeeping and its event log.
struct DestructionHooks {
    std::function<void(int)> downed;      // a man put out of action (his cover memory released)
    std::function<void(int)> displaced;   // a man moved by a fall (his path and cover dropped)
    std::function<void(int)> beforeChange; // just before an explosion's batch changes the map (the units that came before it)
    Diagnostics* diagnostics=nullptr;
};
// Before the first tick: the structure of `map` (the battle's map), the test charges queued.
void StartDestruction(DestructionRuntime& d,const Config& c,const Map& map);
void QueueExplosion(DestructionRuntime& d,const Explosion& explosion);
// One explosion on `map`, now: loads, responses, the change units and the batch (applied to `map`, one revision, when it
// changes anything), events appended to `events`, fragments spawned, men in the frame (if any) falling or crushed. The
// fixtures call it without a battle.
void Explode(DestructionRuntime& d,Map& map,const Explosion& explosion,Frame* frame,std::vector<DestructionEvent>& events,std::vector<Event>* log,const DestructionHooks& hooks);
// Start of each tick: every queued explosion due by `time`; true when the true map changed (r.map, its versions and
// events, and the men's views before the change are kept).
bool StepExplosions(DestructionRuntime& d,Frame& f,Record& r,float time,const DestructionHooks& hooks);
// Each man's look at the changes he has not seen (every observeEvery s); his view takes them once his report delay has run.
void ObserveChanges(DestructionRuntime& d,Frame& f,const Map& truth,float time,int tick,Diagnostics* diagnostics);
// The views to hand to the command code: null until the first change.
const std::array<const Map*,UnitCount>* DestructionViews(const DestructionRuntime& d);
// The ballistics stage: debris and glass in flight through this tick's substeps (men swept from where they stood before
// this tick's movement).
void StepDebris(DestructionRuntime& d,Frame& f,Record& r,int tick,const std::array<Vec3,UnitCount>& before,const DestructionHooks& hooks);
inline bool DebrisFlying(const DestructionRuntime& d){return !d.fragments.empty();}
// A strip's properties for a panel of this runtime (the fixtures' view of the model).
StripProperties PanelStrip(const DestructionRuntime& d,const Panel& panel,const Obstacle& box);
}
