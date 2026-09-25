# Plan 029 — Village maps, verticality, prone, concealment, vaulting

## Context

Plan 028 showed that on the current generated towns, a covered position that overlooks the enemy
above an exposed crossing almost never exists nearby (about 7% of searches). Legacy's caution is the
best available on that ground, and the neural layer has nothing to learn. Jordan: map generation has
been a weakness overall; do map ideas 1, 3, 4, 5 (2 optional), do verticality well, and add vaulting.

Jordan's rulings (23 September 2026):
- **Village**: a new third map family built with Wave Function Collapse from a WW1 French-village
  vocabulary; Town and Trenches stay byte-identical.
- **Verticality**: upper floors with interior stairs and window firing positions first; roofs later.
- **Hedges**: real concealment from the start (block sight, not bullets). Hidden counts as safe for
  planning; self-preservation uses solid cover only; a new measure watches hits through concealment.
- **Prone** stance with shallow craters, including a short crawl (~0.3× pace, ≤6 m toward cover).
- **Vaulting**: everyone vaults low cover (≤1.2 m) at a small stamina cost; soldiers with the
  requisite stats vault walls (≤2.0 m). Window sills and doorways are not vaultable in phase 1.
- **Generate-and-test**: at least 70% of exposed crossings must have a covered overlooking position
  within 25 m; cover is also validated against upper windows.
- Village defaults accepted: farmhouses always two-storey and 35% of houses; church tower solid;
  lanes 1.4 m deep with hedged banks; hedges 1.8 m with gaps every 12–16 m; objective at the
  church square (80%) or the largest farm (20%). **23 September art amendment:** Jordan chose
  uneven damage across parcel boundaries. A map-wide impact budget replaces the former
  3–6-craters/~20%-of-cells allocation; all physical rim and coverage gates remain unchanged
  ([report](029-village-uneven-damage-astra-report.md)).
- Standing law: every behaviour change behind a Config switch (off = identical digests); defaults
  change only after Jordan's side-by-side video review, then the 40 lean references are re-baselined;
  knowledge boundary; per-case fixes refused; guards not weakened. **Opus 5.5 agents implement; the
  main session oversees** (briefs, file ownership, line review, integration, gates).

## Reconciled design decisions (binding for every package)

| Topic | Decision |
|---|---|
| Format | `ARMYMAP 2 city\|trenches\|village <seed>`; v1 grammar frozen and parsed byte-identically; v2 is a superset. `BOUNDS … groundBase ∈ {0, −1.4}` for any kind. |
| Records (v2) | `O` + optional 12th `flags` (bit0 concealment, bit1 crater rim, bit2 reserved); `S` + `kind level building` (kind 0 floor, 1 ramp \|slope\|≤0.3, 2 stair 0.5–1.05 single axis, one `L` each); `L` cap 256; new `B id cx cy hx hy floors` (building footprint → `Map::buildings`); new `P` door passages; `C crouch ∈ {0,1,2=prone}`, `window` 0/1. Caps: O 6000, S 1500, L 256, C 3000, D 1500, B 128, P 512, 20,000 records, 8 MiB. |
| Storey | Fixed 3.2 m (`UpperFloor`): ground walls 0–3.0, slab `O` non-blocking at 3.0 h 0.2 (open stairwell), upper walls 3.2–6.2, sills 3.2–4.25, lintels 5.55–6.4; never 3.6 m ground walls under a floor. Stair plane 1.2 m wide, 3.2–4 m run, 8 tread boxes, centreline ≥0.75 m from wall faces, landings with a grid node. |
| Layers | `Supported` with layers only when `map.stackedSurfaces` (v2): any containing surface within 0.03 at the queried z; `replacesGrade = level ≤ 0 \|\| stair`. `OnStairs` extended by stair surfaces; `TrafficSim` stair passages from stair surfaces and door passages from `P`. |
| Lanes | Village `groundBase −1.4` with the trench pipeline: lane floors `S level −1`, 6 m ramps + links + treads, merged earth complement over the whole map (bullets), buildings on top at z 0. |
| Hedge | `O` concealment flag, height 1.8, ≥0.6 thick, blocks movement, gaps every 12–16 m; never a cover source; never vaulted. Rays: sight callers keep `ClearLine3D`; bullets, `ProtectedAt`, friendly-fire masking, near-miss suppression and `terrainScreen` use a solid-only ray (`ClearLine3DSolid`, memo kind 2; identical to `ClearLine3D` when the map has no concealment). |
| Crater | Ring of 8 rim `O` boxes, h 0.6, halfCover, non-blocking, flags bit1, radius 2.5–4 m, no bowl; prone `C` (crouch 2) inside facing outward. |
| Prone | `Stance::Prone` appended; posture table (body 0.35, eye/muzzle 0.30, sway 0.5, recoil 0.7, aim ×1.1, crawl 0.3× pace ≤6 m to cover); goes prone only when the emergency cover search fails, not on stairs or in a building, and every known threat within 60 m is ≤2.0 m above; rises after ≥3 s when suppression < duckAt−0.2 and no contact within 30 m, or on a cover order/retreat; 0.8 s rise. Shelter prone / pop-up crouched at craters. |
| Vault | `VaultClass {None, Low ≤1.2, High ≤2.0}`; High = mean(Str,Dex) ≥ 102, not the gunner, stamina ≥ cost; None when off/wounded(<55)/winded/short of stamina. Depth ≤1.0 m, headroom ≥1.0 m, pad 0.3, legs of 2–3 grid cells; cost 0.9/1.8 s ÷ Dex, stamina 1.0/2.5 s up front; no firing while vaulting; standing body at take-off until landing; phase 1 excludes `building` obstacles (sills/doors) and hedges; `FindPath(map,a,b)` stays class None byte-identical, class overloads and class-keyed caches (key extended only when ≠None); squad `TacticalRoute` and crossing grading stay None in phase 1. |
| AI cover filters | Keep the ±0.5 m filters; storeys are used through window teams (imported `B` records) and the Window/Overwatch tasks; measure uptake before relaxing. |
| Elevated-threat validation | Validator and importer only (upper `C` validated against a ground threat; ground covers scored against upper windows); the derived catalogue is not changed (`ProtectedAt` is already 3D at decision time). |
| Switches | `Config::prone`, `concealment`, `vaulting` (default off; CLI `--prone` `--concealment` `--vaulting`; `SameConfig`; manifest only when true; `DigestCore` folds 2901/2902/2903 only when on, vault state 2904 only while vaulting). Map-format features gate on importer-set map flags (`formatVersion`, `stackedSurfaces`, `hasConcealment`, `importedBuildings`), so v1 maps and the 40 references never change. |
| Maps | Hedge/crater/village content only in new seeds; opened seeds are never regenerated. Golden seed-17 `city.army`/`trenches.army` bytes are tested. |

## Packages and agents (each an Opus 5.5 agent with a brief, private copy, patch + REPORT)

### F — Format, importer, sim geometry, renderer (owner of the interfaces)
- **F-A** `ARMYMAP 2` grammar in `ImportedMap.h` (v1 branches untouched; v2 columns, `B`, `P`, caps, validation: stair link endpoints, footprints, `P` walkable, upper `C` vs ground threat, prone `C` rim rules, earth-complement probe when groundBase<0). Structs appended after existing fields: `Obstacle::concealment/flags`, `GroundSurface::kind/level/building/replacesGrade`, `Building::authoredStairs`, `CoverPosition::prone`, `Map` flags/`stairSurfaces`/`doorPassages`. `GeometryKey` adds new fields only when non-default. Golden-bytes Python test added first.
- **F-B** Layers and stairs: `Supported` (EnvironmentSim.cpp ~237-258) gated on `stackedSurfaces`; `OnStairs` (~75) + stair surfaces; `BuildingPassages` (TrafficSim.cpp ~5-15) gated on `authoredStairs`, stair and door passages; window teams use `Building::half` (CoordinationSim.cpp ~324); `FindLinkedSurfacePath` (~517-556) lazy per-row table, locality pruning by building on level ≥1, upper-floor endpoints via `FindFloorPath`, `parent`-only endpoint fields, `importedFloorRoutes` bound 65,536 for v2.
- **F-C** Concealment rays (`IndexedContact(...,solidOnly)`, `ClearLine3DSolid`, callers per the table), lanes (groundBase relaxation), crater flags; geometry JSON emits new fields only when set.
- **F-D** Renderer: imported obstacles with `center.z > 2.9` into `UpperStructure` (F toggle), slab/tread colour, hedge green, rim earth; map slot 4 `village.army`, `-ArmyMap=village`, button cycle of five, `GenerateMap --kind village`, HUD `LANE`/`2ND FLOOR`.
- Tests: `tests/imported_map_tests.cpp` generalised to N files with stair route, upper cover, hedge LOS-vs-bullet, lane route, crater prone cover, warm/cold digest; `ImportedVerticalityTests` fixture in `sim_tests.cpp`; v1 rejection of v2 columns.

### M — Soldier mechanics (order M-A1 prone → M-B concealment behaviour → M-A2 prone cover/craters → M-C vaulting)
- **M-A1 prone**: `PostureTable` replacing every `==Crouched?a:b` site (BattleSim.cpp 105, 362, 425, 435, 475, 525, 1182, 1376, 1708; CommandSim.cpp 178; Diagnostics.cpp 433/436; TacticalRouteSim.cpp 60/111/151 (`==Standing`); PerceptionSim.cpp 9); go-prone rule at the open-ground fallback (BattleSim.cpp ~1131-1137, TaskSim.cpp ~124/138); crawl (`Posture(Prone).speed 0.3`, `crawlRange 6`); rise cost `Runtime::riseUntil`; `Reason::Prone` appended; `Tactics::proneSince`; Unreal Z offset/greybox/label; `tests/prone_tests.h`.
- **M-B concealment behaviour**: caller table (sight vs solid), ruling A for the mixed "protected OR hidden" sites, `hits_through_concealment` in `tools/conduct_metrics.py`; pins `sim_tests.cpp` ~233-237 and ~966-969 skip concealment; `tests/concealment_tests.h`.
- **M-A2 prone cover**: `CoverStance(c)` replacing ~50 `c.crouch?…` sites; derived catalogue prone branch gated on `map.formatVersion ≥ 2`; Duck/PopUp with prone shelter and crouched peek; crater `C` records.
- **M-C vaulting**: `VaultTable`; `VaultCrossing` with `SpatialIndex::Collect` (memo kinds 3/4); `FloorSearch` long edges when the ordinary step is blocked, lazy per-(z,class) edge cache; class-keyed `floorPaths`/`importedFloorRoutes`/`endpointParents`; own-class callers (`TaskExecutionPath`, `CautiousPath`, corridor join, `BetterCoverNearby`, ChooseOrder reachability, TaskSim emergency cover) and None callers (catalogue, spawns, DefenceGen, traffic, raster, planner, `FollowCorridor` fallback); execution in the movement step (~1538-1603: charge stamina via `StepStamina(spend)`, `Reason::Vault`, standing, no think/traffic/stall/sidestep/push, landing then immediate replan if the next leg needs a higher class); firing gate; geometry-edit and corridor leg validity accept vault legs; `VaultBridge` + `A_jump_*` clips; `tests/vault_tests.h`; route_tests leg validity vault-aware only when on.

### G — Village generator, validator, probe, pipeline
- **G-1** `tools/mapgen/village.py`: 20 m cells over 340×260 (17×13), edge rows/columns forced; vocabulary (road straight/corner/T/cross, lane straight/corner/ramp, farm courtyard, house, house2, church+square macro, orchard, hedged field, open field, crater field, edge tiles) with sorted socket adjacency; macro pre-collapse (through-road spine with 1–2 doglegs, church at the spine near column 8, side road 60%, 0–1 lane, deployments at the edges, density band 10–26 building tiles); deterministic solve with per-stage/per-cell `random.Random(f'village|{seed}|…')` streams, sorted candidates, AC-3 propagation, ≤12 retries; expansion per tile via a shared `shells.py` copy of `city.building` (city.py untouched); two-storey per the F contract; hedges, lanes, craters per the decisions; budget estimate before validation (village budget 3400 solids, stairs+ramps within L 256, two-storey ≤ 40% of houses + farmhouses).
- **G-2** `tools/mapgen/kernel.py` (grid index, `los` with/without concealment, `walkable` with stacked surfaces, `protected_at` for three stances, `catalogue` port) and `tools/mapgen/support.py` (approaches from each spawn lane to the objective, exposed segments ≥9 m, supportable = catalogue position within 25 m on the friendly side, protected from the observers and overlooking ≥50% of them; verdict ≥0.70 per team; elevated-safe ≥40% of ground covers and ≥3 per two-storey building; lane/hedge/crater/stair invariants; bounded repair loop: garden wall, hedge gap/line, crater cluster, demote a storey; `generate_maps.py --deadline` aborts, never alters a map).
- **G-3** `tools/map_probe.cpp` (batched stdin `LOS/PROT/WALK/PATH/COVERS` through the real functions), built by `scripts/test-mapgen.sh`; `tests/test_mapgen_native.py` agreement suite (LOS/WALK ≥99.5%, PROT ≥99%, catalogue ≥98%, PATH reachability 100%) and static-defence seating on villages.
- **G-4** Pipeline: `generate_maps.py` FAMILIES + `--kind village` + `--deadline`; `tools/loop/maps.py` `KINDS` + per-kind `ensure`; `tools/loop/config.py` village sets; `replay.py`; `tools/neural/scenarios.py` family parameter; `render.py`/`preview.html` village branch with a `#support` overlay; docs (`MAP_GENERATOR.md`, PROJECT_LOG, AGENTS/CLAUDE current state); golden `Unreal/Config/GeneratedMaps/village.army` seed 17.
- Tests: `test_mapgen.py` village multi-seed, determinism under two `PYTHONHASHSEED`s, contradiction path, sealed stair/lane, hedge-as-source rejection, rim height, unsupported-crossing rejection, budget, golden bytes, SVG layers; `test_loop.py` mocks.

## Sequencing

1. **F-A** (format + structs + golden test) first: both other packages compile against it.
2. In parallel: **M-A1** (prone), **M-B** (concealment behaviour, needs F-A/F-C rays), **G-1/G-2** (generator, Python only, against the F contract).
3. **F-B** (layers/stairs), **F-C** (rays/lanes/craters), then **M-A2** (prone cover) and **G-3/G-4** (probe, pipeline) once a village file exists.
4. **M-C** (vaulting) after M-B (hedges exist) and M-A1 (posture helpers).
5. **F-D** renderer, Windows New+ timing (30 s budget) and Jordan's first look at a village.
6. **Evaluation** (below), then Jordan's video review; defaults flip only after approval, then re-baseline.

Packages that touch the same file are serialised by the overseer (BattleSim.h Config, Diagnostics.cpp folds, ImportedMap.h, native.py).

## Verification

- Every package, switches off: `scripts/test-sim.sh` (full, incl. new groups `--prone`, `--concealment`, `--vault`, `--cover-*`), `python3 -m unittest discover -s tests`, `scripts/test-mapgen.sh`, 40/40 lean parity, 3/3 trace parity, 41/41 neural verify, 12 exact recorded training replays, golden seed-17 bytes and the recorded 8 s imported digests, MSVC lab build, Unreal build.
- Native ↔ Python agreement suite (G-3) is the gate for every F change that alters geometry semantics.
- Village: `imported_map_tests` on `village.army`; static-defence seating on 5 seeds × 3 layouts; New+ generates seed+1 within 30 s on the Windows machine; a 6-minute Legacy smoke battle per family with timing on a quiet machine.
- **Does the village fix the measured problem?** Re-run plan 028's covering-fire measurement (`tools/covering_metrics.py`, `--cover-requests --cover-reports --cover-gun-aim`) on `village-attack-dev` vs `town-attack-dev` (same 20 seeds × 3 battle seeds): the "covered gun station within 25 m bearing on the threat" share (town ≈ 7%) must rise materially (target ≥ 30%), and the generator's `supportable_share` must correlate with it per map. Then the neural authority probes (`tools/neural/authority.py` random vs greedy, `--timing-rules`) on villages: whether the squad layer now has headroom.
- Loop: a re-rooted Legacy on the village sets; conduct measures (friendly fire incl. `hits_through_concealment`, order rates, idle_exposed_share, stragglers) paired against the town root; per-case fixes refused.
- Jordan: side-by-side videos (town vs village; prone/vault/hedge on vs off on the same map and seed), chosen by distribution.

## Risks

- WFC contradictions (bounded retries; contradiction rate reported), solid budgets (6000 cap; village budget 3400), `FindLinkedSurfacePath` scaling (lazy rows, pruning, measured on the village), sight-ray cost with more windows (memo hit rates measured), 30 s New+ budget on UE Python (deadline aborts only).
- Friendly fire through hedges (masking is solid-only; guard and new measure), restlessness from prone/crawl (3 s minimum, rise cost; order-rate and exposure guards), vault exploitation (buildings and hedges excluded; own-class only for the mover), digest drift (every path gated; goldens recorded before each stage).
- Art: no prone or vault clips yet (`A_jump_*` as a stand-in; noted for the art handoff).

## Decisions still open for Jordan (defaults applied unless he objects)

- Lane depth 1.4 m (reusing the trench pipeline) rather than 1.2 m.
- Crater rim 0.6 m (the minimum that protects a prone man at 4 m is 0.56).
- High-vault stat rule mean(Str,Dex) ≥ 102 (≈16% of soldiers, about one per squad).
- Reserved map range for hedge/crater/village content: 1201–1230 and above; opened seeds untouched.

## Progress

- 23 Sep 2026: **Curved roads and more sunken lanes (Astra)**: generator v5 uses 2–3 curved
  lanes with matching floors, earth and banks; all objective coverage gates retained.
  [Report and preview evidence](029-village-curves-astra-report.md). Jordan retains new-art acceptance.

- 23 Sep 2026: **F-A integrated** (agent claude-opus-5-5; `.local/plan029/F-A/`): `ARMYMAP 2` grammar as
  the plan's table, with these agreed deviations: `P cx cy hx hy` (no z/id); `Building::id/floors`;
  v2 `S` requires all three new columns; kind 0 exactly flat, kind 1 must slope; level −1..3 within
  `floors`; level ≥1 surfaces must name a building; stair endpoints ±0.1 m; a hedge is refused as a
  cover source natively; stacked-storey overlap rule (a floor is refused only where its height falls
  within a ramp's heights over the shared rectangle); `formatVersion=1` for v1 imports; crouch=2 sets
  `crouch` and `prone` (crouched cover until M-A2). Golden seed-17 bytes test and the recorded 8 s
  imported digests (`.local/plan029/imported-digests.txt`) are in `imported_map_tests`.
- 23 Sep 2026: **M-A1 integrated** (agent claude-opus-5-5; `.local/plan029/M-A1/`): `Stance::Prone`,
  `PostureTable`, go-prone rule with one added condition (suppression must be above his duck
  threshold, otherwise he bounced down every ~3.8 s), crawl ≤6 m at 0.3×, rise rules, `--prone`,
  Unreal patch (no prone clips yet: art handoff). Measurement on flat town ground: no protection
  (8.0 vs 8.2 hits per 100 s pooled); the benefit is expected from rims and craters (M-A2).
- Integrated source **446be5e8caf817fb**: full suite exit 0, 40/40, 3/3 (digests equal), 41/41,
  12 exact replays, Python tests, MSVC and Unreal builds. `tools/rerun_battle.py` maps `--prone`.
- G (village generator) still running; its determinism test is failing mid-work on its own files.
- 23 Sep 2026: **G-1/G-2 landed** (Python only, in the main tree; agent claude-opus-5-5;
  `.local/plan029/G/`): 50/50 seeds pass, ≤1.8 s per attempt, median supportability 0.89 after
  repairs (0.57 before), solids 1,629–2,284, elevated-safe 0.58–0.74, contradiction rate 0/69,
  UE 5.8 Python 3.11 exports byte-identical to Linux. Interpretations recorded in its report (two-storey
  ≤ 0.4×houses + farmhouses; 30 m bounds; observers never on repair features; hedge-gap repair not
  built). **Look judged unsatisfactory** (a 20 m checkerboard, thin house strip): Jordan assigned the
  art pass to Astra: `plans/029-village-art-pass-astra-request.md`.
- 23 Sep 2026: **F-B integrated** (`.local/plan029/F-B/`): layered `Supported`, imported stairs
  (`OnStairs`, passages), door passages from `P` (read as the door opening, ±1.25 m along the wall),
  window teams on imported buildings, lazy-edge link search (first cross-level query on a 100-link map
  8.2 s → 43 ms; byte-identical routes vs the eager reference on 2,700 queries).
- 23 Sep 2026: **Concealment (F-C+M-B) integrated** (`.local/plan029/conceal/`): `--concealment`,
  `IndexedContact(solidOnly)`, `ClearLine3DSolid` (kind 2), solid rays for bullets, `ProtectedAt`,
  friendly-fire masking, near-miss suppression and `terrainScreen`; sight rays elsewhere (ruling A);
  hedges never cover sources; `hits_through_concealment` in `tools/conduct_metrics.py`; the fire-
  delivery credit stays on the sight ray (a blind round through a hedge is not credited support).
- Integrated source **0c59ea67b5264b3b**: full suite exit 0, 40/40, 3/3 (digests equal), 41/41, 12 exact replays
  (CPU −0.8% [−1.1, −0.4]), Python tests, mapgen tests, village-17 and the two-storey fixture pass
  `imported_map_tests`, MSVC and Unreal builds. Full suite: see `.local/plan029/integration-2/`.
- Next: M-A2 (prone cover/craters), M-C (vaulting), G-3/G-4 (probe, pipeline), F-D (renderer).
- 23 Sep 2026: **F-D integrated** (`.local/plan029/F-D/`, agent claude-opus-5-5): upper-floor
  obstacles (z > 2.9) in `UpperStructure` (F hides them), timber slabs/treads/lintels on v2 maps, earth
  crater rims, map slot 4 "Village" (`-ArmyMap=village`, five-entry cycle, New+ `--kind village
  --deadline 28`), terrain from the map kind, HUD `LANE`, smoke stages 100–112. UE 5.8 build and both
  map previews exit 0 on the identical file; New+ village 1.3–3.9 s. Deviations recorded in its REPORT.
  `village.army` is **not yet promoted** to `Unreal/Config/GeneratedMaps/` (awaits Astra's art pass);
  slot 4 therefore has no file in the repo until then.
- 23 Sep 2026: **G-3/G-4 integrated** (`.local/plan029/G34/`, agent claude-opus-5-5): native
  `tools/map_probe.cpp` + `tools/mapgen/probe.py` + `tests/test_mapgen_native.py` agreement suite
  (LOS/WALK/PROT/catalogue/PATH at or above thresholds on villages 17, 5, 1201, 1206); loop `KINDS`
  with village, `ensure(seed, kinds)` default unchanged, generator fingerprint stamp on cached villages;
  village sets (dev 1201–1220, val ≥1231 by salt; `config_digest` → `94227add267ac886`); `--family`
  on the neural entry points; village seating test in `static_defence_tests.h`; `MAP_GENERATOR.md`
  village section. Finding for the art pass: `support.py` flood is 4-neighbour against native
  8-neighbour (stricter only). Open: `authority.py`/`ppo.py`/`evaluate.py` need the `family` argument
  before village probes; village `verify` needs a v2-capable baseline binary.

## Ruling: the village objective (Jordan, 23 September 2026)

Asked why the supportability overlay radiates from one focal point, Jordan ruled **2 and 3**:
- **(3, now, generator/validator, Astra's art pass):** supportability is tested against **2–4
  objectives per map** (Jordan, 23 Sep 2026: "I want 2–4 objectives"; church square, largest farm, a
  crossroads, a second farm or lane junction), not one axis; the map passes when each team's approaches
  to each objective meet the ≥ 0.70 rule. Still validator-only; nothing in the `.army` file changes.
  Prompt handed to Jordan for Astra: `plans/029-village-objectives-astra-prompt.md`.
  Implemented 23 Sep 2026 in generator v4; [Astra report](029-village-objectives-astra-report.md)
  records the 60-seed results, native agreement, preview selector and New+ timings.
- **(2, later, marked for its own plan):** make the objective real: export it in the map, seat static
  defenders around it, score "hold the objective" beside attrition. A scenario/design change under
  `DESIGN_VISION.md`; to be tested after plan 029's evaluation. Not started.
- 23 Sep 2026: **M-A2 integrated** (`.local/plan029/M-A2/`, agent claude-opus-5-5): `CoverStance`,
  `ShelterStance`/`PeekStance`, prone shelter with crouched pop-up at craters, derived prone catalogue
  branch (v2 maps, switch on), stricter prone-record import. Source **56786365fbad9b99**; lab and train
  rebuilt. Agent gates off: 40/40, 3/3, 41/41, 12 exact replays, 12/12 village battles identical.
  Measured on (5 villages × 2 seeds): 30% of rounds fired from craters, prone hit rate 0.067/100 s vs
  standing 0.751, outcomes within noise. Overseer gates: `.local/plan029/integration-3/`.
  M-A2 overseer gates (`.local/plan029/integration-3/`): 40/40, 3/3 (same digests), 41/41, Python OK,
  MSVC and Unreal builds pass (the overseer's replay call used a stale baseline path and was re-run on
  the combined tree below; the agent's own 12 replays were exact).
- 23 Sep 2026: **M-C integrated** (`.local/plan029/M-C/`, agent claude-opus-5-5): `--vaulting`,
  `VaultTable`, `VaultClass`/`VaultClassOf`, `VaultCrossing` (memo kinds 3/4, `SpatialIndex::Collect`),
  class overloads of `FindPath`/`FindFloorPath`/`FloorSearch`/`FindCostPath`/`ImportedFloorPath` with
  per-class caches (None byte-identical), own-class callers per the plan, `VaultStepFor` execution
  (stamina up front, `Reason::Vault`, no fire, take-off hold, landing, replan on a higher class),
  supported-ground rule (no leaps over lanes/trenches), Unreal `VaultBridge` + `A_jump_*` stand-in
  clips, `--vault` test group in the full run. Three hunks merged by hand against M-A2 (`own` class in
  the two `FindPath(map,s.position,p)` cover-search sites of `BattleSim.cpp` and the TaskSim emergency
  cover search). Combined source **aca3a8350cad7018**; lab and train rebuilt; overseer gates in
  `.local/plan029/integration-4/` (parity, trace, neural, 12 replays against `battle-lab-cover4`,
  Python, mapgen, full suite, MSVC, Unreal).
  Agent measurement with the switch on: towns 7.9 vaults/battle (only ~2 free-standing walls per
  town; sills never vaulted; no High vaults), villages 20–70. **Open for Jordan:** in villages 20–34%
  of vaults are reversals over the same wall within 10 s (HOLD names the take-off spot; emergency cover
  scored by straight-line distance). Overseer recommends scoring emergency/relocation cover by path
  length inside the `vaulting` switch (fixes the cause) over a post-vault cooldown.
  Combined-tree gates (`.local/plan029/integration-4/`, 23 Sep 2026): 40/40, 3/3 (digests
  18053383882261480224 / 11469538106494081511 / 845562492892007389), 41/41, 12 replays exact against
  `battle-lab-cover4`, Python OK, mapgen suite exit 0, MSVC and Unreal builds, **full Linux suite exit 0**
  after one fixture fix: G-3's inline village fixture placed its crater prone record 1.1 m inside the rim,
  which M-A2's import rule refuses; moved to 0.5 m (`tests/static_defence_tests.h`). No simulator source
  changed by the fix. **All plan 029 simulator packages are integrated** (F-A, F-B, F-C+M-B, M-A1, M-A2,
  M-C, F-D, G-1..G-4); every switch off; `village.army` not yet promoted (Astra's art pass in progress).
- 23 Sep 2026: **E-1 measurement** (`.local/plan029/E-1/`, agent claude-opus-5-5; generator fingerprint
  2f528538c515a6c1, villages 1201–1220, Legacy attack on 12 static defenders, 600 s, seeds 107–109,
  plan 028 switches on, 420 battles): covered gun station within 25 m bearing on the threat per Azure
  gun search: **town 15.2% [10.1, 22.5]; village 24.6% [16.7, 33.0]; village + concealment 14.9%
  [9.1, 20.3]; village + concealment + prone + vaulting 24.5% [18.2, 30.8]**. Target ≥ 30% not met
  (7/20 village maps reach it). Correction: plan 028's 7% was the meeting-battle figure; its
  town-attack figure was 10.5%. The generator's `supportable_share` does not predict the measured share
  per map (Spearman −0.02 … −0.30; the validator's range is compressed at 0.71–1.00 and it scores towns
  0.40–0.90 against a measured 15%; the static defence sits 25–122 m from the generator's objective).
  Prone + vaulting vs concealment-only: attackers lost −3.4 [−5.8, −1.0], attack score +0.10 [+0.03,
  +0.18], 13 vaults/battle; `hits_through_concealment` 1.9–3.8 per 100 soldier-minutes.
  **Blocking defect found:** the fire-delivery credit ray (`BattleSim.cpp` ~1864) starts at the
  shooter's feet (z = 0 for Legacy); the village's earth complement box tops at z = 0, so the ray is
  always blocked: 0 credited deliveries in 180 village battles (towns 257 of 9,425 checks), hence no
  covered commit and no 20 s override on villages, switches or not (default Legacy: 0/760 on villages).
  Trench maps may share it (earth top at z = 0; not measured). Fix (F-E package): start the ray at the
  muzzle, behind a switch; it will also credit fire over low cover on towns, so flipping it changes
  Legacy digests and needs Jordan's decision plus a re-baseline. Re-measure with
  `python3 .local/plan029/E-1/run.py T0,V0,T1,V1,V2,Tn,Vn 10 && python3 .local/plan029/E-1/analyse.py`.
- 23 Sep 2026: **F-E integrated** (`.local/plan029/F-E/`, agent claude-opus-5-5): `Config::muzzleCredit`
  (`--muzzle-credit`, off by default, byte-identical off): the covering-fire delivery credit ray starts
  at the muzzle (`DeliveryLineClear`, solid-only ray) instead of the shooter's feet. Audit: no other
  simulator ray shares the defect; `tools/conduct_metrics.py` `hits_through_concealment` draws from the
  feet (open). New `--credit` group. Source **f94afcb7a132a7cb**; overseer gates in
  `.local/plan029/integration-5/`. Agent gates off: 40/40, 3/3, 41/41, 12 replays exact, Python 183.
  **With the switch on** (E-1's battles re-run): villages 0 → ~16,000 credited deliveries per 60
  battles, commit-gate passes 0 → 1,338 (V0) and 0 → 3,261 (V2); covered-station share town 14.2%,
  village 18.1%, village + all plan 029 switches 24.4% [18.9, 29.0] (V2 − town +10.2 [+1.2, +17.9]);
  target ≥ 30% still not met; `supportable_share` still does not predict it. Town outcomes unchanged
  (57/3 → 56/4), gate passes ×6.5, exposed commits +2.35/battle. **Trenches share the defect** (0 credits
  off): on, attackers commit across open ground and lose more (6/9 → 3/12 on 15 battles). Default
  Legacy on villages: attack score +0.068 [+0.012, +0.141]. V2 shows friendly hits +1.30 [+0.25, +2.30]
  and close dither +0.053. **Decisions for Jordan:** flip `muzzleCredit` by default (changes Legacy on
  every family; needs his side-by-side review, then re-baseline); credit through hedges (F-E: solid-only
  ray credits blind fire through a hedge; the concealment package had kept the sight ray).
- 23 Sep 2026: **M-C2 delivered** (`.local/plan029/M-C2/`, agent claude-opus-5-5; candidate
  d79daaabb56e0e40 on aca3a8350cad7018; to be integrated after the F-E gates): inside `vaulting`,
  cover ranked by own-class path length (`PathTravel`, vault legs at seconds × plannerPace) at
  `ChooseOrderBase`, `BetterCoverNearby` and the TaskSim emergency search, and a receiver-side rule: a
  HOLD issued during a vault that names the take-off spot is held at the landing (the suggested
  "known enemy has a line on the ordered spot" rule would never fire: the return comes from the
  contact-lost branch after the 10 s memory window; a leader-side fix caused duelling HOLDs). 40 village
  battles: reversals 8.40 → 5.73 per battle [−4.75, −0.70], vaults 45.2 → 37.2, close dither
  0.426 → 0.403 (n.s.); path length alone did not cut the reversal share. Off: 40/40, 3/3, 41/41, 12
  replays exact, off digests equal on 15 maps. Remaining reversals: fire from the side the wall does not
  cover (15/32), orders issued before the vault (4), new orders over the wall; a further cut needs a
  design decision (a cost on cover that puts a vault between a man and his objective, or fire memory
  beyond 10 s). Hypothesis noted: TaskSim's exposed test and `ChooseOrderBase`'s disagree on which
  contacts count (predates vaulting).
  F-E overseer gates (`.local/plan029/integration-5/`, source f94afcb7a132a7cb): 40/40, 3/3 (same
  digests), 41/41, 12 replays exact, Python OK, mapgen exit 0, full suite exit 0, MSVC and Unreal builds.
- 23 Sep 2026: **M-C2 integrated** on the F-E tree: source **e767b6471b9ca2f1**; lab and train rebuilt;
  overseer gates in `.local/plan029/integration-6/`.
- 23 Sep 2026: Jordan: Astra's village work is done; next Astra task is **a new city family built with
  the village's parameters and organic streets/buildings** ("built by people, not by an algorithm"):
  `plans/029-city2-astra-request.md` (working name `city2`; Town v1 stays byte-identical; overseer wires
  loop/neural/Unreal after look acceptance).
  M-C2 overseer gates (`.local/plan029/integration-6/`, source e767b6471b9ca2f1): 40/40, 3/3 (same
  digests), 41/41, 12 replays exact, Python OK, mapgen exit 0, full suite exit 0, MSVC and Unreal
  builds. **Simulator side of plan 029 complete, including both follow-ups; every switch off.**
- 23 Sep 2026: **Videos for the `muzzleCredit` decision** sent to Jordan (`.local/plan029/videos/`):
  town 21 and village 1201, seed 107, default Legacy vs 12 spread defenders, off vs on. These single
  battles: town off cleared at 398 s with 27/32 alive, on at 497 s with 22/32; village off 396 s 26/32,
  on 431 s 21/32 (all four cleared). Single battles are chaotic; the 60-battle paired E-1 re-measure
  showed no significant outcome change on towns or villages. Decision pending.
- 23 Sep 2026: **Loop evaluation of `muzzleCredit` on by default** (node `5c7b4ffdc140a7bf`, forced past
  `protected_files`; parity fails as expected for a shared-code change): objective 0.793 against the
  root's 0.841. Paired vs root: development −0.015 [−0.054, +0.019] (27 better / 27 worse), validation
  −0.023 [−0.048, +0.001]; attackers lost 34.1% → 35.7% (dev) and 30.8% → 35.7% (val); defenders out and
  cleared share unchanged (0.92 / 0.96); worst on the spread layout (0.80 → 0.73 dev). **Every conduct
  guard passes**: friendly fire, under-2 m, both order rates (Azure −10.7/min, n.s.), force at the fight,
  fights from cover, seen at the fight (−0.004, within limit). Trench meeting battles: attacker
  casualties 0.73 → 0.69, defender 0.52 → 0.59. Reading: the repaired credit opens the commit gate as
  designed; against static defenders with overlapping arcs that costs a few attackers for no gain in
  defenders out. Plan 028's graduated covering fire was measured while credit was partly dead on towns
  and wholly dead elsewhere; re-testing it on the repaired credit is proposed (Jordan's call: plan 028
  was closed by his stop rule).

## Ruling: `muzzleCredit` on by default (Jordan, 23 September 2026)

Jordan: "We can flip muzzleCredit." Flipped on source **3db4b7c553c58257**: `Config::muzzleCredit=true`,
`--no-muzzle-credit` restores the feet ray for A/B, manifest writes `"muzzle_credit":false` and the
digest folds `2905/0` only when off. Legacy changes on every family, so: the 40 lean references are
re-baselined (`tools/verify/rebaseline_lean.py flip-credit`), neural verify's passivity baseline is the
new lab build, the recorded 8 s imported digests are re-recorded, the loop is re-rooted for both
lineages and the protected-file pins are re-pinned. The frozen training binary `d73667841df73faa` and
the frozen Legacy baseline `45da1e25dd1aa9e7` are untouched (history). Evidence: `.local/plan029/flip-credit/`.
Then: re-measure the plan 028 covering-fire stack on the repaired credit, town and village (E-2), and
Jordan's question on suppression mechanics (below).
- 23 Sep 2026: **Flip landed.** Final source **ae3224df477f0f4c** (`muzzleCredit` on, `--no-muzzle-credit`,
  importer accepts `city2`). Gates: 40 references re-baselined and 40/40; 3/3 trace (drills digests
  unchanged); 41/41 neural passivity against the new build; Python OK; mapgen exit 0 with Astra's
  real-header city2 suites active; full suite exit 0 after re-pinning three prone/vault fixture
  digests (level 17887772779024154910, crater 7718332071265670208, vault hold 16972941566334419232;
  the trench 8 s imported digest 7781453859672743359); MSVC and Unreal builds. Loop re-rooted on this
  source for both lineages (`.local/plan029/flip-credit/reroot-*-2.log`). Gate protocol trimmed at
  Jordan's instruction (common briefs): agents prove 40/40 + own groups; overseer gates once per batch.
  Loop re-rooted on ae3224df477f0f4c: **Legacy root `ae3224df477f0f4c-legacy` value +0.819, every guard
  passing** (old root 0.841: the credit flip costs about two points on the static-defence attack sets,
  the price recorded above); drills root `ae3224df477f0f4c-drills` fails guards as every drills root
  has since plan 022. Node `422987091a8601ee-legacy` is the previous epoch's root (history).

## Ruling: looks accepted (Jordan, 23 September 2026)

"I accept the village and city2 looks, promote them." Village seed 17 and city2 seed 17 are promoted to
`Unreal/Config/GeneratedMaps/` with golden-byte tests; the Unreal map slot for city2 (F-D2), the loop
and neural wiring for city2 plus the village cache refresh and the first real-city2 battle costs (G-5)
follow. Acceptance is of the generated layouts (the look); no AI behaviour or default changes. Also:
gunner compensation's hold applies on the move as built (Jordan: "keep the hold on move").
- 23 Sep 2026: **F-D2 integrated** (`.local/plan029/F-D2/`, agent claude-opus-5-5): map slot 5 "City"
  (`city2.army`, `-ArmyMap=city2`, six-entry cycle, New+ `--kind city2 --deadline 28`), preview branch
  keyed by starting slot. UE 5.8 build on the identical file and both previews exit 0 (city2 New+ seed
  18 in 9.9 s; village 8.9 s on a loaded machine). Unreal build of the main tree deferred to the plan
  030 batch gate.
- 23 Sep 2026: **G-5 landed** (`.local/plan029/G5/`, agent claude-opus-5-5, Python only): city2 in
  `tools/loop` (`KINDS`, per-kind generator stamps, sets `city2-dev` 1201–1220, `city2-val`/attack
  sets ≥ 1231 by salt; `config_digest` → d9306866bf9b2084), `--family city2` through the neural tools
  including `authority.py`/`ppo.py`/`evaluate.py`; villages 1201–1220 regenerated with the accepted
  generator (all 20 changed; old cache kept in `G5/old-village-cache/`; stamp b4b635355d181df4 for
  both families); city2 1201–1220 generated. Seating 15/15 through the real header. **First real-city2
  battle costs (10 maps per family, seed 107, 3 rounds, digests identical): town 7.15 s, village
  11.67 s, city2 14.40 s per battle: city2/town 2.01× [1.64, 2.43].** Cause (gprof): `OnStairs` from
  `CoordinatePassages`, 14.6 M calls on city2 (21.7% of run time) against 2.4 M on a village; the
  catalogue is only 1.22× the town's. Open: `evaluate --family village|city2` needs an ARMYMAP 2 baseline
  binary; Astra's doc section still says city2 is unwired. **Next: P-1, an exact stair-lookup index.**
- 24 Sep 2026: **Legacy root on the new families** (node `321600b6d945e49c-legacy-villages`, 60 battles
  per set, score computed from the rows since the loop's objective is town-only): village-attack-dev
  attack score **0.811 [0.764, 0.852]**, W/D/L 50/0/10, cleared 0.83, attackers lost 31.4%, defenders
  lost 96.8%, 10.2 s wall per battle; city2-attack-dev **0.793 [0.741, 0.834]**, 45/0/15, cleared 0.75,
  attackers lost 32.2%, defenders lost 95.4%, 16.8 s wall (before the P-1 stair index). Town root on
  the same protocol: 0.810 development. Legacy performs about the same on all three families; the
  loop's objective and guards remain town-only (a family-aware objective is a later tools/loop change).
- 24 Sep 2026: **P-1 integrated** (`.local/plan029/P-1/`, agent claude-opus-5-5, exact): `OnStairs` answered
  once per moving man in `CoordinatePassages` (14.6 M → 0.73 M calls on city2 1201) and an 8 m-cell
  stair index in the navigation cache (full scan kept for unprepared maps and pre-cache calls).
  Exactness: 40/40, 12 replays identical base vs P-1 (with the credit flag off, via a private harness),
  G-5's 30 cost battles × 3 rounds 180/180 equal, a checked build comparing every call (13.5 M) with
  no mismatch, 38.1 M points on 56 maps equal, broken-index controls caught. **City2 CPU −30.2%
  [27.0, 33.1] (30/30 pairs): 12.15 → 8.48 s per battle, now 1.47× a town and 0.90× a village**; town
  and village unchanged. Remaining city2 cost is path search (commands 4.5 s vs town 2.7 s).
  P-1 batch gate (`.local/plan029/integration-p1/`, source 8ea01c458ae4fdd3, which also carries the
  plan 030 S1b parameter): 40/40, 3/3 trace, full suite exit 0, MSVC and Unreal builds.
- 24 Sep 2026: **E-3, covering fire on city2** (`.local/plan029/E-3/`, agent claude-opus-5-5, source
  321600b6d945e49c, 720 battles): covered-station share per search **city2 18.8% [14.8, 23.2]**, town
  15.6%, village 21.4% (no family reaches 30%; differences not significant). Covering fire works on
  city2 (220 credited deliveries per default battle, gate passes almost all covered, request → first
  round p50 1.85 s). Default city2 scores like the other families (0.793) but clears less than towns
  (0.75 vs 0.92) with far fewer friendly hits (7.4 vs 13.8). **The plan 028 subset R (requests + reports +
  gun-aim) helps on city2 and only there:** attack score +0.033 [+0.006, +0.060] over the plan 029
  switches alone, cleared +0.117 [+0.017, +0.217], battles 42 s shorter; a hypothesis (one positive among
  many comparisons) to be checked on `city2-attack-val` (E-3b). CPU 2.27× a town on this pre-P-1
  binary (P-1 brings it to about 1.6×).
- 24 Sep 2026: **E-3b** (`.local/plan029/E-3b/`, agent claude-opus-5-5, `city2-attack-val` 15 maps × 3
  seeds, now opened): **E-3's R result does not replicate**: R − B attack score −0.023 [−0.053, +0.007],
  cleared −0.044, friendly hits +2.0 [+0.44, +3.47]; R still doubles covered gate passes mechanically.
  Sanity: development digests identical to E-3's 20/20 across the P-1 binary change. After-the-fact
  positive to be treated as a hypothesis only: the plan 029 switches alone (B − D) +0.066 [+0.014,
  +0.126], cleared +0.178, attackers lost −2.1, on 12 of 15 maps; needs a fresh pre-fixed draw. Covered-
  station share on unopened city2 16.5% [9.1, 24.8]. Plan 028 stays closed.
- 24 Sep 2026: **E-4, pre-fixed test** (`.local/plan029/E-4/`, agent claude-opus-5-5; hypothesis and a
  fresh 15-map city2 draw fixed before any battle; 90 battles): **`--concealment --prone --vaulting`
  beats default on city2: attack score +0.097 [+0.039, +0.164], attackers lost −3.11 [−5.33, −1.18],
  cleared +0.156 [+0.022, +0.289]**, defenders out +0.58, battles 52 s shorter, 11 of 15 maps up;
  friendly hits +0.98 [−0.67, +2.80] (n.s.), `hits_through_concealment` +0.125. Replicates E-3b's
  after-the-fact +0.066. On towns the same switches are neutral (E-3 TB − TD +0.014) and on villages
  not significant (VB − VD −0.048 [−0.127, +0.021]). **A default-flip candidate for Jordan's video
  review (city2 and village side-by-sides prepared); nothing promoted.**
  Videos for Jordan (`.local/plan029/videos/city2-472471-switches.mp4`, `village-1201-switches.mp4`):
  city2 median map, default cleared at 509 s with 24/32 alive vs switches 351 s with 28/32; village 1201
  seed 107, default 566 s 23/32 vs switches 554 s **8/32** (a bad seed for the switches on villages, in
  line with VB − VD −0.048 n.s.). Decision for Jordan: flip the three plan 029 switches on for city2
  only (per-family defaults do not exist yet: a flip is global, so a village check on a pre-fixed draw
  would be needed first) or keep them opt-in.
- 24 Sep 2026: **E-5, pre-fixed village and town tests** (`.local/plan029/E-5/`, agent claude-opus-5-5,
  15 fresh maps per family, 180 battles): the plan 029 switches change nothing detectable on villages
  (+0.038 [−0.045, +0.136]; the earlier hint of a loss did not replicate) or towns (+0.020 [−0.014,
  +0.059]); on villages they triple covered commits (12.7 → 42.4 per battle), raise credited deliveries
  +98, and cut close dither and stragglers; `hits_through_concealment` 1.4 per battle. **Across the three
  pre-fixed tests the global flip of `--concealment --prone --vaulting` wins on city2 (+0.097) and is
  neutral elsewhere: the night's default-flip candidate for Jordan's video review** (city2 and village
  videos sent; a town video can be added). Nothing promoted.

## Ruling: towns are out of the runs (Jordan, 24 September 2026, night)

"Towns should no longer be included in our runs." From now on measurements, loop sets and training use
the **village and city2** families (the plan 029 switches `--concealment --prone --vaulting` as each
family's natural state where a run says so); the old town family (`city.py`, maps 21–40, 701–760,
901–930 …) is kept only for the 40 historical references (parity) and history. The loop's objective and
guards move to village/city2 sets (G-6); running agents M-S6 and M-S7 were told to drop their town arms.
- 24 Sep 2026: **G-6, loop score v8 on the new families** (`.local/plan029/G6/`, agent claude-opus-5-5,
  Python only): objective ranks on `village-attack-val` + `city2-attack-val` (root value = mean of the
  two validation means; a child's value = root + lower 95% bound of the equally weighted paired mean,
  bootstrapped within family); guards pair on `village-dev` + `city2-dev` and the two attack-dev sets,
  thresholds unchanged (`guards-v7.json` preserved; a test pins that each guard differs only in its
  sets); `FAMILY_FLAGS` fight village and city2 with `--concealment --prone --vaulting` and are part of
  the pairing key; trenches and towns out of the default run; `config_digest` → c1e8c1d041bc6932;
  parity spot check per family. **Roots on source 2730fe73fadce803** (the tree with M-S6 merged):
  `2730fe73fadce803-legacy-v8` value **+0.809 [0.761, 0.849]**, every guard passing (village-attack-val
  0.805, city2-attack-val 0.812); `2730fe73fadce803-drills-v8` 0.185, failing the four guards every
  drills root has failed. Neural tools pinned to `guards-v7.json` (town rows). Known, left as is: the
  `draw_key` trailing-comment bug in `evaluate.py` (children without `--generation` share the root's
  validation draw; unchanged since 422987091a8601ee).
