#pragma once
// Plan 032, grenades and using the pin (Config::grenades, Legacy only, per team). Stage 1 physics: issue, throwing and
// flight, the blast (Kingery-Bulmash; Bowen's lethality, Hirsch's eardrums, the knockback of the net impulse), and
// fragments (Mott's population) flown as bullets, with their own wound model. Stage 2 reactions: throw it back (a skill check),
// run clear, or dive. Stage 3 tactics: throws at known enemies a man cannot shoot, at bunches and (holding) at men
// closing in, and the rifle group's close-in on an enemy pinned as the squad can know it.
//
// Knowledge boundary. Decisions read the man's own tracks and received reports, his own sightings of his mates, his
// own and his squadmates' fire (delivery reports) and the map; a grenade is seen by line of sight within his sight
// range (a man cannot read its fuse: he assumes GrenadeTuning::assumedFuse is left when he sees it land). The flight,
// the blast and the fragments are physics and read true positions, as bullets do. Every random draw is counter-based
// (SplitMix64 of the battle seed, the grenade or explosion, the soldier or fragment, a salt), so the battle's own
// random stream is never touched: with the switch off nothing here runs at all.
#include "BlastSim.h"
#include "BattleSim.h"
#include <functional>
#include <string>
#include <vector>

namespace army {
struct Diagnostics;
// The table by name: CLI --grenade-param NAME=VALUE, the manifest's grenade_params, SameGrenadeTuning, the digest.
struct GrenadeParam { const char* name; float GrenadeTuning::* member; };
const std::vector<GrenadeParam>& GrenadeParams();
bool SetGrenadeParam(GrenadeTuning& table,const std::string& name,float value); // false: no such name
const char* GrenadeTypeName(GrenadeType type);

// Pure physics and rules (the fixtures call these directly).
float GrenadeCharge(const GrenadeTuning& k,GrenadeType type);          // kg TNT equivalent
float GrenadeDanger(const GrenadeTuning& k,GrenadeType type);          // m: its reaction radius (fragReact, concDanger)
float FragmentSpeed(const GrenadeTuning& k,GrenadeType type);          // m/s at the burst (Gurney)
float FragmentDragK(const GrenadeTuning& k,float mass);                // 1/m: 1 / (dragScale * m^(1/3))
// Mott's population: N0 = casing / (2 mu) potential fragments, each of mass mu (ln 1/u)^2 for a uniform draw u (those
// under dustMass are dust and not flown).
float MottMu(const GrenadeTuning& k,GrenadeType type);                 // kg
int FragmentPopulation(const GrenadeTuning& k,GrenadeType type);       // N0 (0: a fibre-bodied concussion grenade)
float MottMass(const GrenadeTuning& k,GrenadeType type,float draw);    // kg
// A fragment's presented area (mm^2) and whether a hit of `energy` J penetrates the skin.
float FragmentArea(const GrenadeTuning& k,float mass);
bool Penetrates(const GrenadeTuning& k,float mass,float energy);
// The region a fragment strikes by a uniform draw on his stance's presented-area shares: 0 head, 1 thorax, 2 abdomen, 3 limbs.
int FragmentRegion(const GrenadeTuning& k,Stance stance,float draw);
// Kingery-Bulmash (KbBlast, KingeryBulmash) lives in BlastSim.h, shared with the structural model (plan 033).
// Incident overpressure (kPa) at range R m of a charge in kg (a burst off the ground: the surface fit at airBurst W).
float BlastOverpressure(const GrenadeTuning& k,float charge,float range,bool ground);
// Bowen via McMichael: the pressure a man takes (psi) by his orientation, and his survival (probit out, when asked).
float EquivalentPressure(const GrenadeTuning& k,float incidentKpa,Stance stance,bool wall);
float BowenSurvival(const GrenadeTuning& k,float equivalentPsi,float durationMs,float* probit=nullptr);
float NormalCdf(float z);
// Bowen's probit for a man at `range` from a burst the fits take as `charge` kg (a ground burst's W, or W airBurst), by his
// stance, the pressure and duration factors of his cover and room and a wall behind him. With `envelope` (BlastOn's) the
// least over every range from his out, so closer is never safer (see GrenadeSim.cpp). Survival: NormalCdf(probit - 5).
float BlastProbit(const GrenadeTuning& k,float charge,float range,Stance stance,float pressureFactor,float durationFactor,bool wall,bool envelope=true);
// Hirsch's eardrum rupture probability at `kpa`.
float EardrumRupture(const GrenadeTuning& k,float kpa);
// Knockback: where a push of `speed` (horizontal) and `up` (m/s) comes to rest on open ground: seconds in the air, metres
// slid after, and the whole distance and time.
struct KnockPath { float air=0, slide=0, distance=0, seconds=0; };
KnockPath KnockTravel(const GrenadeTuning& k,float speed,float up);
// Along the push line: the distance gone and the horizontal speed (now) tau s after a push of `speed` that flew `air` s.
float KnockAlong(const GrenadeTuning& k,float speed,float air,float tau,float* now=nullptr);
// A solid obstacle within wallBehind behind him along the wave from `burst` (at his centre of mass): he takes the reflected
// pressure (Bowen's "near a reflecting surface").
bool WallBehind(const GrenadeTuning& k,const Map& map,Vec3 burst,const Soldier& s);
float StunSeconds(const GrenadeTuning& k,const Soldier& s,float kpa);  // 0 below stunKpa
float ThrowRange(const GrenadeTuning& k,const Soldier& s,Stance stance);
float ReleaseHeight(const GrenadeTuning& k,Stance stance);
float LandingScatter(const GrenadeTuning& k,const Soldier& s,float distance); // sigma, m
float CookSeconds(const GrenadeTuning& k,const Soldier& s);
float ThrowBackChance(const GrenadeTuning& k,const Soldier& s);
float GrenadeDraw(uint32_t seed,uint32_t event,uint32_t index,uint32_t salt); // uniform [0,1)
float GrenadeFuse(const GrenadeTuning& k,uint32_t seed,int grenade);          // s from the lever's release: uniform 4.5 +/- 0.5
// The throw-back skill check's draw: he takes it up when this is below ThrowBackChance (one draw per man, grenade and throw).
float ThrowBackDraw(uint32_t seed,int grenade,int soldier,int throws);
// The kit of soldier `slot` (issue): 1 or 2 grenades, each fragmentation or concussion, from the roster seed only
// (Config::rosterSeed, else the battle seed; the roster slot as the stats take it). A gunner carries none.
std::array<uint8_t,2> GrenadeKit(const Config& c,int slot,bool gunner);

// The map as grenades meet it: every obstacle (a hedge stops a grenade; fragments pass it, as bullets do), the floors
// above grade (surfaces of level >= 1, ramps and stairs, which are not obstacles on an ARMYMAP 2 map), and the roofs:
// a building's footprint is roofed at the top of its walls, so a lob does not drop into a room from above.
struct GrenadeWorld {
    const Map* map=nullptr;
    std::vector<size_t> floors;   // surfaces a grenade lands on and a fragment stops at
    std::vector<float> roofs;     // per building: the roof's height
};
GrenadeWorld MakeGrenadeWorld(const Map& map);
enum class GrenadeContact { None, Floor, Wall, Roof, Edge };
// The first contact of the segment a-b of a grenade's flight: t in [0,1] (-1 none) and what it met.
float GrenadeFlightContact(const GrenadeWorld& world,Vec3 a,Vec3 b,GrenadeContact& kind);
// Where a grenade let go at p comes to rest below it (the floor, an obstacle's top, the ground).
Vec3 DropToFloor(const GrenadeWorld& world,Vec3 p);
// The throw's arc onto `aim` from `release`: the first of the table's arcs (lob first) whose flight, checked every
// arcStep metres, meets nothing before it lands within 0.25 m of the aim, at a speed within the thrower's range.
struct ThrowArc { bool clear=false; float angle=0,speed=0,flight=0; Vec3 velocity{}; };
// margin (m, 0 for none): the arc must also clear for aims this far to either side, beyond and short (the thrower allows
// for his own scatter, so a throw that only just clears is not taken).
ThrowArc FindThrowArc(const GrenadeTuning& k,const GrenadeWorld& world,Vec3 release,Vec3 aim,float range,float margin=0);
// Whether the arc of `degrees` onto `aim` meets nothing before it lands (FindThrowArc's test for one arc, no margin).
bool ArcClearFor(const GrenadeTuning& k,const GrenadeWorld& world,Vec3 release,Vec3 aim,float degrees);
// The velocity that lands a throw from `release` at `aim` on an arc of `degrees`; false when none does.
bool ArcVelocity(Vec3 release,Vec3 aim,float degrees,Vec3& velocity,float& flight);
// Where a thrown grenade lies after landing: the flight simulated from `release` with `velocity` until it meets the map,
// then (a floor) its roll of `roll` metres along the throw, stopped by obstacles and dropping into what is below; a
// grenade that strikes an obstacle's side drops at the foot of that side (the thrower's) and does not roll; one that lands
// on a roof rolls off at the nearest eave and drops at the foot of that wall.
struct GrenadeLanding { Vec3 position{}; float time=0; GrenadeContact contact=GrenadeContact::None; bool rolled=false; };
GrenadeLanding SimulateLanding(const GrenadeWorld& world,Vec3 release,Vec3 velocity,float roll,float maxSeconds=10);
// Blast on one man from a burst (physics: his true position and stance). raw: the open-ground incident overpressure; kpa:
// with cover and room; duration with the room; impulses with cover. psi: the pressure his orientation takes (Bowen), survival
// and probit Bowen's; eardrum the rupture probability; push the knockback velocity (m/s) along the burst-to-centre line.
struct BlastReading { float range=0,raw=0,kpa=0,scaled=0,duration=0,impulse=0,reflectedImpulse=0,psi=0,survival=1,probit=99,eardrum=0;
    bool shielded=false,room=false,wall=false; Vec3 push{}; };
BlastReading BlastOn(const GrenadeTuning& k,const Map& map,Vec3 burst,float charge,bool ground,const Soldier& s);
// The expected out-of-action probability from fragments alone for a man at horizontal distance `range` on open ground from a
// grenade lying there: straight lines to the bullets' body (radius 0.4 m, his stance's height), the Mott population, drag,
// the stop energy, skin penetration and the region-mean incapacitation at woundEnergy (the calibration's model).
float FragmentLethality(const GrenadeTuning& k,GrenadeType type,float range,Stance stance,float woundEnergy);
// The woundEnergy that makes FragmentLethality(fragmentation, range, standing) equal `target`.
float CalibrateWoundEnergy(const GrenadeTuning& k,float range,float target);
// No clear solid line from the burst to any of his 9 body points (the points perception uses).
bool BurstShielded(const Map& map,Vec3 burst,const Soldier& s);
bool BurstShielded(const Map& map,Vec3 burst,Vec3 feet,Stance stance);
// The burst and his feet inside one building's footprint, on the same floor (UpperFloor storeys).
bool SameRoom(const Map& map,Vec3 burst,Vec3 feet);

// The battle's grenade state (one per battle, created only with the switch on).
enum class GrenadeMode : uint8_t { None, Throw, React, ThrowBack, Fumble, Run, Dive, CloseIn };
struct LiveGrenade {
    int id=0, owner=-1, team=-1, first=-1;   // owner/team: the last thrower; first: who threw it first
    GrenadeType type=GrenadeType::Fragmentation;
    GrenadeStage stage=GrenadeStage::Held;
    int holder=-1;                           // Held: whose hand
    Vec3 position{}, velocity{};             // where it is now
    Vec3 from{}, launch{}, rest{};           // the last release point and velocity, and where that throw comes to rest
    float fuseAt=0, spoonAt=0, releasedAt=-100, landedAt=-100;
    bool spoon=false, ground=false;          // spoon: the lever has flown (the fuse runs)
    GrenadeContact contact=GrenadeContact::None; // what the last throw met first (evidence)
    int throws=0;
    std::array<float,UnitCount> noticedAt{}; // when each man saw it at rest (-100: not)
};
struct Fragment { Vec3 p{},velocity{}; float mass=0,dragK=0,born=0,time=0; int explosion=0,index=0; uint64_t struck=0,frightened=0; };
struct ExplosionTally {
    int id=0, owner=-1, team=-1; GrenadeType type=GrenadeType::Fragmentation; float time=0; Vec3 burst{};
    int flying=0; bool written=false;
    // push/lift: his knockback's horizontal and upward speed (m/s); knock: how far it moved him (m); lung and impact: the
    // health the lung injury and an obstacle took.
    std::array<float,UnitCount> range{},kpa{},damage{},stun{},duration{},psi{},survival{},lung{},push{},lift{},knock{},impact{};
    std::array<int,UnitCount> hits{},penetrating{},region{};   // region: the incapacitating hit's (0 head .. 3 limbs; -1 none)
    std::array<uint16_t,UnitCount> flags{};  // 1 shielded, 2 room, 4 deafened, 8 out by blast, 16 out by fragment, 32 eardrum,
                                             // 64 next to a wall, 128 knocked down
};
struct SoldierGrenade {
    GrenadeMode mode=GrenadeMode::None;
    int grenade=-1, target=-1;
    GrenadeType type=GrenadeType::Fragmentation;
    Stance stance=Stance::Standing;
    Vec3 aim{}, goal{};
    float arc=40;                            // degrees of the throw's arc
    float startedAt=-100, releaseAt=-100, reactAt=-100, until=-100, noticed=-100;
    bool success=false, holding=false, arrived=false;
    bool stunHeld=false, justReleased=false; // a hold ended: he thinks at once
    // Knockback (revision 2): thrown from knockFrom at knockStart along knockDir, speed knockSpeed (horizontal) and knockUp;
    // in the air knockAir s, sliding after; the motion ends at knockEnd (or at an obstacle); knocked down: down until riseAt.
    // knockReach: how far along he goes (an obstacle or the floor's end stops him short). knocked: moving or down as this
    // tick began (GrenadeTickStart); knockHeld: the override held him for it (he thinks at once when it ends).
    bool knocking=false, knockDown=false, knocked=false, knockHeld=false;
    Vec3 knockFrom{}, knockDir{};
    float knockStart=-100, knockSpeed=0, knockUp=0, knockAir=0, knockEnd=-100, riseAt=-100, knockReach=0;
    float nextCheck=0, lastThrow=-100;
    int closeIn=-1;                          // the squad whose close-in he is on
    const char* why="";
};
enum class CloseInPhase : uint8_t { Ordered, Approach, Throw, Wait, Rush, CloseFire };
struct CloseIn {
    bool active=false; CloseInPhase phase=CloseInPhase::Ordered;
    int enemy=-1, serial=0, leader=-1;
    Vec3 place{}, spot{}, spot2{};
    std::array<int,2> members{{-1,-1}};
    std::array<float,2> arrives{};
    std::array<bool,2> threw{};
    int thrower=0, grenade=-1;
    float startedAt=-100, phaseAt=-100, nextCheck=0;
};
struct GrenadeRuntime {
    GrenadeTuning k; uint32_t seed=0;
    GrenadeWorld world;
    std::vector<LiveGrenade> live; int nextId=1;
    std::vector<Fragment> fragments;
    std::vector<ExplosionTally> tallies;
    std::array<SoldierGrenade,UnitCount> men{};
    std::array<CloseIn,SquadCount> closeIns{};
    GrenadeTotals totals;
};
// Created by Simulate before the first tick with the switch on: the kits (GrenadeKit) of the teams that have grenades.
void IssueGrenades(GrenadeRuntime& g,const Config& c,const Map& map,Frame& f,Record& r);
// Start of each tick: the stun and deafness clocks (a stun that ends leaves him pinned: suppression 1), and a man thrown by
// a blast moved along his knockback (Soldier::knockHeight his height in the air).
void GrenadeTickStart(GrenadeRuntime& g,Frame& f,float time);
// The decision stage, before a man thinks: while a grenade holds him (stunned, knocked, throwing, reacting, on a close-in) his
// order comes from here (hold); released is true on the tick that hold ends (he thinks at once); direct: a straight
// FindPath, not the cautious path (an escape).
struct GrenadeOrder { bool hold=false, released=false, direct=false; Order order{{},Action::Hold,Reason::Stunned,Stance::Standing}; };
GrenadeOrder GrenadeOverride(GrenadeRuntime& g,Frame& f,Soldier& s,const Map& map,const Config& c,float time,Diagnostics* d,bool defender);
// The decision stage, after a man's own decision: whether he throws now (then `order` holds him for the throw).
// understood is his WithReports view (his own tracks and received reports).
bool GrenadeThrowChoice(GrenadeRuntime& g,const Frame& f,Soldier& s,const Soldier& understood,const Map& map,const Config& c,float time,Order& order,Diagnostics* d,bool defender);
// Pinned, as the knower's side can know it (plan 3): a known enemy (tracks: the knower's WithTracks view) seen within
// pinnedTrackAge and not known to be down, on whose place (within pinnedFireRadius, or aimed at him) the knower's delivery
// reports (his own rounds and those his men reported: they saw their rounds strike) fall within pinnedFireWindow, and not
// seen firing for pinnedQuiet. Never the enemy's own state. firedAt: the last such report's time.
bool PinnedAsKnown(const GrenadeTuning& k,const Soldier& knower,const Soldier& tracks,int enemy,float time,float* firedAt=nullptr);
// After the squads' commands: each rifle group leader's close-in decision.
void GrenadeCloseIns(GrenadeRuntime& g,Frame& f,const Map& map,const Config& c,float time,Diagnostics* d);
// After movement: releases, flights, landings, men noticing grenades at rest, pickups, explosions, and the fragments
// flown through this tick's ten substeps (as bullets are). before: every man's position before this tick's movement.
// downed: called for each man a grenade puts out of action (Simulate drops his cover memory).
void StepGrenades(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int tick,const std::array<Vec3,UnitCount>& before,const std::function<void(int)>& downed);
// A man a grenade holds where he stands (stunned, knocked, throwing, holding one to throw back, fumbling, down flat): the
// passage traffic does not move him.
bool GrenadeHeld(const GrenadeRuntime& g,const Soldier& s);
// The world's grenades into the frame (Frame::grenades) for the renderer.
void SnapshotGrenades(const GrenadeRuntime& g,Frame& f);
}
