# Plan 033 — Building destruction from blast force (draft for Jordan's rulings)

Drafted 25 September 2026 by the overseer (claude-opus-5-5). Jordan: "also might be a good time to add destruction to
the buildings, if the current unreal framework cannot handle realistic physic based destructions from force then we
will have to create our own. You can work on that part." Setting: WWII-era. **Jordan's rulings: section 9.** Every change is a switch, off by default. The vision's section 16 ("Destructible environments": structural
sections/nodes; material, thickness, structural health, supports, damage state; collapse; rubble as cover; cheat
visually) is the target.

## 1. Can Unreal do it? Yes for the look, no for the truth

Unreal 5 ships Chaos Destruction (pre-fractured Geometry Collections broken by strain and force fields). It can make a
wall shatter convincingly. It cannot be the authority on what broke:
- the battle is decided by the C++ simulator, which also runs headless on Linux for thousands of measured battles and
  must replay digest-for-digest; Chaos is neither deterministic across machines nor present there;
- cover, lines of sight, routes and each soldier's knowledge of the map must change with the destruction, inside the
  simulator.

So: **our own deterministic structural model in the simulator decides what breaks; Unreal shows it** (debris chunks
with visual-only physics, dust, rubble meshes; Chaos Geometry Collections later for nicer fractures). This matches the
vision's "cheat visually".

Today (survey, 25 Sep): the simulator can remove or replace an obstacle mid-battle, invalidate its caches by revision,
and let each soldier learn of it after an observation delay (`GeometryEdit`, `InvalidateGeometry`, per-soldier
`geometryViews`). Nothing produces such edits in play; obstacles have no material or strength; there is no "add
obstacle" (needed for rubble); Unreal renders the map once and never shows changes; no Chaos or particle plugins.

## 2. The structure

- **Panels.** Every building wall box becomes a structural panel: material, thickness (its thin dimension), span (its
  height between floors, its length), supports (bottom on the ground or a floor, top under a floor or the roof).
  Fences, sheds and garden walls are panels too. Floors and roofs are slabs supported by the panels under them.
- **Materials** (by map family and piece; run values): stone rubble masonry (village), brick masonry (city2 houses),
  reinforced concrete (city2 heavier buildings, if Jordan wants them), timber (fences, sheds, doors later), glazing
  (window panes — see 8.3). Each with density, strength (flexural tension or bending), stiffness, and for masonry the
  arching resistance a wall gains when it is wedged between floors.
- **Damage states:** intact → cracked (cosmetic, and later weaker against the next blast) → breached (a hole: the
  panel is split around it, so a new line of sight and, if large enough, a new way through) → destroyed (the panel is
  gone; rubble at its foot becomes low cover). A floor or roof whose supporting panels are mostly gone collapses:
  rubble below, and the men under or on it are hurt.

## 3. Loading: the same blast the grenades now compute

For each explosion and each panel within reach (scaled distance up to ~20), the face toward the burst is divided into
~0.5 m cells. Each cell gets the Kingery–Bulmash reflected pressure and impulse for its distance, reduced for the angle
at which the wave strikes it, and nothing if another solid stands between it and the burst. Rooms (same footprint and
floor) keep the approved ×2.5 pressure and ×3 duration.

## 4. Response: a single-degree-of-freedom panel (the engineering standard for blast)

- The panel is a mass on a spring: equivalent mass from its density and size, stiffness and ultimate resistance from
  its material and thickness (one-way span between its supports; arching for confined masonry). The load is the
  summed cell pressures over time. Integrated numerically for a few tens of milliseconds, it gives the peak
  deflection.
- Peak deflection → ductility and support rotation → damage state, with limits per material (the standard
  "superficial / moderate / heavy / blowout" levels; constants to calibrate, see 5).
- **Local breach** for charges touching or almost touching a wall: the WWII US Army breaching formula (FM 5-250,
  P = R³ K C: charge needed for a breaching radius R in material K with placement C), which also sets how big the hole
  is.
- **Debris:** a breached or destroyed panel throws its pieces at its own velocity: secondary fragments through the
  existing projectile machinery on the far side (men behind a wall that blows in are hurt), and rubble where they land.

## 5. What realistic physics will say (the calibration anchors)

- A hand grenade (60–230 g TNT) 1–2 m from a brick or stone wall: no breach; at most surface damage.
- Window glass breaks at a few kPa: every window within several metres of a grenade.
- Light timber (fences, sheds, board walls): broken or blown out by a grenade within a metre or two.
- Breaching a brick wall needs a demolition charge on or at the wall (about half a kilogram to a kilogram of TNT for
  one brick thickness, per the breaching formula); artillery shells do it from the outside.
So with grenades alone, destruction will be windows, fences, sheds and cracks; walls come down only with bigger
charges (see 8.1).

## 6. Knowledge, performance, determinism

- Every change goes through the existing mutation interface, extended with **add** (rubble, split panels) and batched
  per explosion (one revision per explosion). Soldiers learn of it the existing way (seeing it, or being within 3 m).
- Performance risk already known (plan 016 review): one change re-samples the whole cover catalogue (~19k candidates),
  once in the true map and once in each of 64 soldier views. Needed: incremental cover and route invalidation near
  the change. Measured before anything is on by default.
- All draws counter-based; off = byte-identical.

## 7. Unreal

- Keep an obstacle-id → instance map; during playback apply the geometry versions at their times (hide, replace, add
  rubble); use the recorded panel velocity and the burst point for visual-only chunks (Chaos rigid bodies or simple
  instanced debris) and dust; the final picture must match the simulator's geometry.
- Enable the Chaos/Geometry Collection plugins only when we move to pre-fractured wall pieces (later, an art task).

## 8. Rulings needed from Jordan

1. **Bigger explosives:** realistic grenades will not bring walls down. Add WWII demolition charges (satchel / pole
   charges carried by assault engineers or one man per squad) and/or mortar or artillery fire, so walls can be
   breached? Or keep destruction grenade-scale for now (windows, fences, sheds, cracks)?
2. **Materials by family:** village = stone rubble masonry, city2 = brick, sheds and fences timber; any concrete?
3. **Glass and doors:** today windows and doors are open gaps. Add glazing as a cosmetic pane that shatters (and throws
   glass fragments)? Doors stay open gaps for now (closed doors would change movement and sight everywhere).
4. **Collapse:** include floors and roofs collapsing when their walls go (the structural level), or stop at breached
   and destroyed walls for the first version?
5. **Visuals:** simple debris chunks and dust from the recorded physics now; Chaos pre-fractured walls later?

## 9. Jordan's rulings (25 September 2026) — "we prototype"

1. **Grenade scale for now.** An artillery shell is the later test case (a `--test-charge` for arbitrary charges
   makes it possible without new weapons).
2. **Materials:** village stone, city2 brick; timber for fences and sheds; **no concrete**.
3. **Window glass** as panes in the window openings that shatter and **throw glass** (secondary fragments), "for fun".
   Doors stay open gaps.
4. **Collapse:** floors and walls collapse when their supports go.
5. **Visuals:** simple debris and dust now (no Chaos yet).

Work split: the simulator side (structure, response, geometry changes, collapse, glass, debris, a generic explosion
queue and `--test-charge`) and the Unreal side (showing geometry changes during playback, debris and dust) are built
in parallel against one interface (`DestructionEvent`, below); the grenade detonations join the explosion queue when
plan 032 is merged.

```
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
```


## 10. Result (25 September 2026): merged, off by default

Built by two Opus 5.5 agents (simulator: `BlastSim`, `DestructionSim`, `tests/destruction_tests.h`; Unreal:
`DestructionEffects`, `DestructionVisual`, `BattleGameMode`), merged with plan 032 by the overseer, who routed the
grenade bursts into the explosion queue and drew the window glass and the grenades in the game.

- **Switch:** `--destruction` (+ `--test-charge x,y,z,kg,time`, repeatable; `--destruction-param NAME=VALUE`;
  `--destruction-full-rebuild` for measurement), game `-ArmyDestruction`. Off: byte-identical (40/40, E-6 8/8). On,
  the merged build equals the module's own build (2/2 village battles with test charges).
- **Model:** walls become panels (village stone, city2 brick, timber sheds; no concrete) with window panes; each
  explosion loads their cells with the Kingery–Bulmash reflected pressure and impulse (obliquity, shielding, rooms
  ×2.5 pressure and ×3 duration); a single-degree-of-freedom response per strip gives the damage state; FM 5-250
  breaching sizes holes for close charges; glass breaks at 7 kPa; storeys whose walls have gone collapse (men on or
  under them fall or are crushed); debris and glass fly as projectiles; one geometry revision per explosion with
  incremental cover and route updates; soldiers learn of changes by seeing them (report delay).
- **Anchors (`sim_tests --destruction`):** grenades (60–230 g) at 1–2 m leave the maps' 0.5 m walls intact or
  cracked, crack a one-brick wall, shatter windows to 6 m, break sheds within 1–2 m; indoors the ×3 pulse blows out
  a 0.23 m wall within about 2 m; 0.5 kg in contact breaches one brick (hole 0.58 m); 2.2 kg at 2–3 m breaches one
  brick and cracks 0.5 m walls; breaching charges needed: 1.86 kg against village stone, 2.84 kg against city2
  brick. Cost: a 90 s village battle 4.20 s off, 4.23 s with five charges (full rebuild 4.34 s).
- **In battle with grenades:** walls crack (up to 25 per battle), windows shatter (up to 22), a shed beside a burst
  was destroyed (city2 E-6 7535 seed 107); no masonry breaches at grenade scale outdoors, as physics says.
- **Game:** geometry versions applied during playback (hide, split, rubble), debris chunks and dust per event, window
  glass whole until it shatters (upper panes go with the F cutaway), stills by `-ArmyBlastCapture` (a real battle) or
  `-ArmyTestDestruction -ArmyDestructionCapture` (fabricated). The top-down `tools/battle_video.py` draws the walls
  as they stood, rubble, panes, cracks and breaches.
- **Open points for Jordan:** whether test charges should also hurt men by blast (they hurt only by debris and
  collapse); the artillery-shell test (a 105 mm shell's 2.2 kg only cracks the maps' walls at 2–3 m); later
  upgrades (finer wall cells, a stress-graph collapse, bullet penetration, Chaos fractures for the look).
