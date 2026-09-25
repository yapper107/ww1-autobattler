# Project map generator

The generator is part of this project and integrated into the Unreal development
build. In preparation, cycle the map button through Original Works, Original
trenches, Town and Trenches. **New +** generates the next seed and loads it directly.
**F** opens roofs; **G** reloads a map published by the optional browser workshop.
The header shows the current family and map seed. Battle seed is separate.

`./scripts/build.sh` copies the generator, dependencies and LGPL notices into the
Windows project's `Tools/` directory. The button runs it asynchronously with Unreal's
bundled Python interpreter; no browser, server or extra Python installation is needed.
It validates before atomic publication, retains the current map on failure, permits
one worker per session, terminates the worker on EndPlay and times out after 30 s.
Temporary names include the process ID to avoid concurrent writer collisions.
This is a Windows Unreal development/editor integration, not a packaged-game runtime.

```sh
./scripts/build.sh
./scripts/launch.sh -ArmyMap=city       # or -ArmyMap=trenches
./scripts/test-mapgen.sh
# Optional offline images and browser workshop:
python3 tools/generate_maps.py --seed 17 --output .local/mapgen/preview
python3 tools/generate_maps.py --serve --unreal --port 8766
```

The browser supports damage settings, arbitrary seeds, roof cutaways, example cover
markers, route overlays, SVG downloads and JSON export. Add `--mirror <build-dir>` to
publish there too; it must contain `.army-build-mirror`. In-game generation writes to
the active Windows project. A later build restores the repo's canonical seed-17 maps;
saved battles retain their exact geometry, regardless of subsequent generation.

## Research and reuse

| Candidate | Finding | Decision |
| --- | --- | --- |
| [ProbableTrain / MapGenerator](https://github.com/ProbableTrain/MapGenerator) | Street/block/lot pipeline; TypeScript; SVG/PNG/STL exports; LGPL-3.0-only | Best fit among inspected candidates for this cheap town preview. Reuse its recursive lot subdivision as a small, attributed Python rectangular specialization. |
| [josauder / procedural_city_generation](https://github.com/josauder/procedural_city_generation) | Python generator visualized through Blender; MPL-2.0 | More 3D tooling than this slice needs; no code reused. |
| [Dynamic Trench Generator](https://steamcommunity.com/sharedfiles/filedetails/?id=3717585757) | Arma 3 composition script advertising connected trench networks | Engine-specific and no verified reusable source license found; no code copied. |
| [Historic England: Browndown](https://historicengland.org.uk/whats-new/research/back-issues/browndown-training-for-trench-warfare-in-the-first-world-war/) | Documents crenellated fire lines, support/reserve lines and communication trenches | Structural reference for our original trench grammar, not an imported generator. |

No suitable standalone military-trench generator was established by the search.
Do not describe the trench implementation as borrowed software, or the town as a
complete port of ProbableTrain. Reuse is specifically `subdividePolygon`, pinned to
`f487e4cee321d105d5b0e14258363fa8b4d004ef`. Original source, modifications, attribution
and both license texts are in `tools/mapgen/vendor/`.

## Maps and geometry contract

Both first previews cover 340 by 260 metres. Works builds an orthogonal street
hierarchy, perimeter housing blocks around accessible courts, a market square and
two mill yards. Damage changes roof state and surviving wall height; it does not
scatter arbitrary cover across roads. Every building is a ground-floor shell with
four actual doorway gaps and eight low firing-window sills. Roofs are decorative.

Trenches creates two separate opposing networks. Each has front, support and reserve
lines, traverses, eight dogleg communication links, three dugouts and two six-metre
exit ramps. The floor is -1.4 m. Earth is the merged rectangular complement of the
dug space; it blocks bullets but is not marked as a movement-blocking prop. Front
firing positions are spaced three metres apart and are excluded beside open exits
and source boundaries where that source cannot protect both shoulders. Shell marks
and wire are illustrative: they confer no cover or movement effects.

`army-map/1` is deterministic, seed-local JSON with x right, y up, z up, metres.
Solids have min/max, flags, stable string IDs and positive integer geometry IDs;
surfaces have rectangular extents, centre height and planar slopes. Cover records
reference their source and carry shelter, firing point, facing and probe parameters.
IDs are stable for the same seed/parameters/version; parameter changes regenerate
geometry, not a live destruction history. The native export places all 64 soldiers explicitly. Town deployments use the outer streets; trenches start along their front lines. Opposing front lines are approximately 60 m apart to fit the existing 70 m rifle sight range. The support and reserve networks remain fully connected behind them.

## Native cover and navigation

`ARMYMAP 1` is a bounded line exchange format for solids, surfaces, ramp links,
example cover positions, 64 spawn/goal pairs and decorative boxes. The pure importer
checks counts, finite coordinates, bounds, ID namespaces, surface overlap, source
references, walkability and deployment separation before exposing immutable data.
Only imported maps enter the new navigation/cover branches; original maps and AI
controllers retain their existing behavior. Imported ground-floor window sills use
ordinary cover semantics, avoiding the stock building's special Window task filter.

Cover is **derived from every movement-blocking or half-cover solid**, including
building walls and trench earth. Each physical face is sampled at 3 m spacing;
walkability and six head/torso/shoulder rays remove inaccessible or unprotected
positions. Internal earth seams disappear through those geometric checks. Standing
protection can fall back to crouching. Generator-marked firing positions supplement
this catalog; they do not limit it. The result is cached by geometry revision and
rebuilt after destruction. Seed17 produces **5,520 town / 2,431 trench positions**;
the browser overlay shows only its **644 / 81** explicitly validated examples.

Trench routes can traverse floor, ramp, grade, another ramp and another floor.
Spatial bins accelerate surface queries while preserving surface precedence. Flat
components reject impossible below-grade searches, exact-coordinate route results
are cached with a 16,384-entry bound, and reusable shortest-path fields at exit
endpoints eliminate repeated searches across the same grid. Every returned segment
still passes native swept clearance. Non-integer custom exit endpoints fall back
to A*. All caches belong to the map revision; no controller decision policy changed.

Saved battles include `battlefield.army` and its content digest in the manifest.
`tools/rerun_battle.py` restores that file through `--map` and `--map-digest`; a
mismatch is rejected. Gameplay digests incorporate the imported map identity.

## Architecture review and resolutions

The attributed exact-model Fable responses are preserved in
[generator review](../plans/016-map-generator-fable-review.md),
[integration review](../plans/016-map-integration-fable-review.md) and
[performance review](../plans/016-map-performance-fable-review.md).
No architect art approval or tactical promotion is claimed.

The integration findings were resolved with ordinary ground-floor cover flags,
multi-link routing, replay payloads, a four-state selector that clears incompatible
fixtures, and strict rejection of flat/ramp interior overlap. Ramp placement avoids
traverse ends. Rendering batches imported geometry into instanced meshes; decorative
roofs are optional and do not create upper-floor gameplay. Twenty-four ballistic
treads per ramp match its surface. The general link graph implements the reviewed
multi-ramp requirement rather than hardcoding one up/down pair.

The performance review's ID gap is closed by reserving [1,000,000,2,000,000) for
imported cover and a separate per-solid range for derived cover. Process termination,
timeout and unique publication files address its lifetime findings. Warm/cold and
repeated simulations, mutation invalidation and same-floor/cross-network routes are
pinned in native tests. The only fixture-source change is MSVC's required explicit
bool conversion (`id%2` to `(id%2)!=0`); fixture behavior and assertions are unchanged.

## Verification and limits

- Python geometry tests cover 24 seed/damage combinations, determinism, door/interior
  connectivity, protected firing positions and malformed networks. The complete
  Python suite passes 102 tests.
- Native checks cover all64 spawns, eight squad routes, every explicit cover's body
  protection and muzzle ray, chained ramps, rear-floor routes, malformed/truncated
  payload rejection, cover-ID collisions and destruction invalidation. Repeated
  warm-cache and fresh-import simulations produce identical gameplay digests.
- Both maps run under legacy, cognition and drills and reproduce eight-second
  traces from their exported map payload. This verifies integration, not AI quality.
- Full Linux simulation suite passes. Historical 40-case legacy/cognition digests
  and three drills trace-on/off pairs are checked separately. Evidence is under
  `.local/mapgen/`; [the integration report](MAP_GENERATOR_INTEGRATION.md) records source fingerprints.
- Unreal builds and native screenshots show town, roof cutaway and trenches. The
  automated **New +** check creates trench seed18 and loads it without rebuilding.
- Six-minute legacy smoke battles fire1,342 town /2,923 trench shots. These are one
  seed per map and establish functioning combat, not balance or replay approval.

Performance diagnosis: the initial imported trench eight-second test took308.789 s.
An exact-route cache alone reduced it to60.996 s with an unchanged battle digest.
The revised geometry-derived cover catalog plus surface indexing and reusable exit
fields reduced that older-layout test to0.420 s (more path queries, different cover
choices). This last comparison changes cover and path selection, so it is not a
same-behavior benchmark. Six-minute town and final-trench runs took about25.1 s and
9.7 s respectively on this host; their replay records peaked near3 GB RAM. Geometry
and balance costs for other seeds or much larger maps remain unmeasured.

The new trench deployment replaced an unsuitable reserve-line setup that produced
zero shots in a full battle. Front-line deployment and approximately60 m separation
fit the existing rifle sight range without changing AI rules. Objectives are still
in no man's land; both sides attack. Wire, shell marks and vegetation remain
illustrative. Walls are single-storey shells and roofs decorative. Legacy remains
the default controller; original maps remain selectable.

## Village maps (plan 029): format, pipeline and limits

The village is a third generated family (`tools/mapgen/village.py`, plan 029 G-1/G-2). Its
appearance is being reworked separately (`plans/029-village-art-pass-astra-request.md`); this
section covers only the exchange format, the native checks and the pipeline, which do not depend
on the look. Town and trench generation and their files are unchanged, and no village is
published into `Unreal/Config/GeneratedMaps/` yet: do not run `--unreal --kind village` until the
renderer (plan 029 F-D) lands and the look is approved.

```sh
python3 tools/generate_maps.py --kind village --seed 1201 --output .local/mapgen/village
python3 tools/generate_maps.py --kind village --seed 1201 --deadline 30   # exit 3, nothing written, if late
./scripts/test-mapgen.sh     # generator tests, native agreement suite, village import checks
```

**Format.** A village is written as `ARMYMAP 2 village <seed>`, the plan 029 superset of the frozen
`ARMYMAP 1`: an optional `flags` column on `O` (bit 0 concealment: a hedge blocks sight, not
bullets; bit 1 crater rim), `S` records with `kind level building` (floor, ramp, stair; lane floor
level -1, upper storey level 1), `B` building footprints with their storey count, `P` door
passages, and `C` covers with `crouch 2` (prone, crater) and `window 1` (upper-floor window). The
ground base is -1.4 (sunken lanes use the trench pipeline). The battle CLI and the neural worker
treat a village like a town (`FracturedWorks` terrain; the Unreal slot is plan 029 F-D); every village feature
reaches the simulation through importer-set map flags, so town, trench and authored battles
never change. Only `tools/generate_maps.py --kind village` writes a village: a plain call still
writes exactly the town and trench pair.

**Village art pass (generator version 5, 23 September 2026).** The WFC lattice remains a
constraint scaffold. `village_land.py` reserves four-cell farm holdings, groups rural cells
into varied parcels (mostly 2–6 cells, with boundary slivers), and displaces shared interior
vertices by up to 4.5 m. Adjacent parcels share the same boundary. Physical hedges follow
those lines as short overlapping boxes, with continuous 12–16 m gateway spacing along each
shared boundary and bushes at joined corners to eliminate tiny navigation pockets. Hedge
height, concealment, movement blocking and minimum thickness are unchanged.

Houses have 13–17 m frontages, varied setbacks close to the street, walled rear yards and
optional low outbuildings. The church square has facing houses and a café label. Farms reserve
36 m holdings with 34 m enclosures, a gateway, two-storey farmhouse, barn and byre. Rear/side
posterns and real door records keep the courts connected. Outbuilding and byre roof decoration
heights match their lower shells. Farmhouses stay two-storey; ordinary houses start at the
rounded 35% target, with the existing bounded support-repair storey demotion retained.

Orchards occupy rear plots behind houses, with irregular tree spacing. Jordan's 23 September
follow-up replaces per-cell crater quotas with **uneven damage across parcel boundaries**.
`village_damage.py` creates a continuous bombardment pattern: one battered east/west approach,
a smaller concentration reaching the village centre, sparse outliers and a quiet rear. The
normal damage setting requests 86–104 impacts for the whole map; lighter/heavier settings
scale that budget. Placement has no field/tile inputs. Impacts may cross roads, gardens and
orchards, while keeping clear of building footprints, the solid church tower, memorial, lane
surfaces/ramps and the objective. Soil scars can overlap; the eight-box physical rim rings stay
separate and retain their 0.6 m/prone/non-blocking contract.

The same continuous exposure field controls house ruin probability. Nearby hedge and wall
sections become low, non-blocking remnants with their original IDs; unhit ends become new
pieces. Hit trees become stumps. Cover validation removes positions that the damage no longer
protects. No cached or runtime map is mutated: this happens during deterministic generation,
before the normal geometry/coverage checks and bounded repair loop. Existing support repairs
can still append a small number of extra craters. The SVG distinguishes older, greener scars
from fresher exposed soil; their physical rim heights remain identical.

The SVG preview adds field furrows, tree crowns, softened hedge edges and irregular earth
scars; these are **preview illustration**, separate from physical geometry. The **Physical hedge /
rim edges** checkbox reveals exact box bounds; roof cutaway, covers and support overlays remain.
These SVG details are not Unreal foliage assets or new terrain materials. The imported layout,
solids, footprints, doors, lower roofs and cover positions are exported through the existing
`ARMYMAP 2` records. No simulator edits or canonical map promotion belong to this art pass.

Previews for 17, 5 and 1201, plus cutaway, support and physical-edge views, are in
`.local/plan029/G/art/`. See [the art-pass report](../plans/029-village-art-pass-astra-report.md)
for the initial layout delivery, and [the uneven-damage report](../plans/029-village-uneven-damage-astra-report.md)
for the damage measurements. The [multi-objective report](../plans/029-village-objectives-astra-report.md)
records the v4 validation, native agreement and timings; the v5 follow-up is documented below.
Support ≥70% per side, elevated safety ≥40%, three protected upper windows per two-storey
building, all record caps, the 3,400-solid budget and the bounded repair loop remain unchanged.

**Curved roads and more sunken lanes (Jordan, 23 September 2026).** `village_curves.py`
rounds the road scaffold’s corners with circular arcs and adds gentle bends along its longer
stretches. Side-road junctions remain pinned to the main street. The existing road `D` records
follow centreline samples at most 1.5 m apart; this is still an axis-aligned native format.

Each village now reserves **two or three** separate lane corridors, preferentially on opposite
flanks, using independent seeded streams. Their centre lines use broader corner radii and
bounded curvature so the inside hedge cannot fold over at a short bend. The last metres at
each end remain straight for the existing 6 m ramps. The floor is a nominal 4 m-wide tube,
rasterized at 1 m and merged into exact, non-overlapping rectangles at −1.4 m. Earth is the
complement of **all** lane floors and ramps, computed once for the map. Physical hedges follow
the curved banks with the same 12–16 m gateway spacing, 1.8 m height and concealment flag.
No new native record, simulator code, Unreal C++ or terrain mesh was introduced.

Validation checks the lane-count band, two ramps per lane, walkable centre lines and no earth
inside any lane floor or ramp, in addition to the existing full connectivity and support gates.
The preview’s worn centre track is clipped to the exported floor rectangles; it does not paint
a traversable route over undug ground. Native curves remain fine box steps, not continuous
curved meshes. See the [curves report](../plans/029-village-curves-astra-report.md) and
`.local/plan029/G/curves/` for current previews, native checks and timing measurements.

To keep multiple lanes and objectives within the existing New+ budget, each validation pass
reuses its immutable graph’s neighbour masks, its physical cover catalogue for repair planning,
and exact cover-to-observer sight queries. Dijkstra keeps its original cost/node tie ordering
and may stop after all eight deployment starts have settled. Rebuilding geometry discards these
caches. No observer, support, distance, crossing or acceptance threshold is reduced. Curved villages
allow at most four applied repair rounds per layout (still at most three planning rounds per
objective); a fruitless target repair immediately rejects that layout instead of spending
further rounds elsewhere. A new layout retries within the existing 12-attempt limit.

**Multiple validation objectives (Jordan, 23 September 2026).** `village_objectives.py`
uses `random.Random(f'village|{seed}|objectives')` to draw a requested count of 2–4.
Candidates come from actual landmarks, ordered before the draw: the church square (always),
the largest farm by courtyard area (stable ID breaks ties), the side-road junction, then
one second farm or sunken-lane junction. For the current lane geometry, that junction is an
upper ramp mouth meeting field access; a road bend does not count as a crossroads. Within
the last band the seeded stream chooses between the available landmarks. A candidate closer
than 60 m to an earlier objective is dropped; candidates are not moved. If fewer than two
remain, the layout retries. The draw is independent of repair progress and global RNG.

Every team’s four deployment-lane approaches are evaluated against **every** selected
objective, using the existing 40 m defensive observer construction and unchanged ≥0.70
support rule. All four approaches must be reachable. Geometry, navigation and the physical
cover catalogue are shared across those evaluations. Overall supportability is the **minimum
of all objective/team shares**; each team’s summary is its minimum across objectives.
A failed objective can receive at most three repair-planning rounds, at most eight proposed
repairs per round. Every applied round rebuilds and checks the full map and all objectives;
a round with no improvement at its target ends that layout attempt. There are still at most
12 layout attempts and the existing caller deadline (New+ passes 28 s within its 30 s budget).
The 4-neighbour flood remains unchanged and conservative relative to native 8-neighbour paths.

The JSON sidecar’s `objectives` lists kind, position, stable landmark ID and display name.
`validation.objectives` provides each objective’s shares in team order [A, B]; detailed
crossings and observer IDs live under `validation.support.objectives`. `generate_maps.py`
prints objective count, per-objective shares and the overall/team minima. Its Supportability
overlay offers All objectives or a single landmark, including only that landmark’s crossings
and repairs. The physical-edge layer is unchanged.

The pre-existing 80/20 square/farm focal-point draw is retained separately as `focal_point`
for spawn goals and the damage exclusion. Validation landmarks add **no native objective
record**, score, defender seating or gameplay rule. Existing `.army` geometry may change
because stricter validation selects a later layout or adds repairs. Town/Trenches bytes stay
identical. Objective export and hold scoring remain a later plan.

Reproduce the serial 60-seed **development** sweep (0–49, 1201–1210):

```sh
python3 tools/sweep_villages.py > .local/village-sweep.jsonl
```

It reports each seed and a summary with the objective-count distribution, worst objective/team
share, acceptance, WFC contradictions, landmark rejections, repairs across accepted and rejected
attempts, and timings including SVG/JSON/native serialization. Supply explicit seeds to inspect
a smaller set. These are inspected development maps, never a promotion set.

**Native agreement.** The generator validates villages with a pure-Python kernel
(`tools/mapgen/kernel.py`, navigation grid in `support.py`). `tools/map_probe.cpp`, built by
`scripts/test-mapgen.sh` to `.local/mapgen/tests/map-probe`, reads one `.army` file and answers
batched stdin queries through the simulator's own functions:

| Query | Answer | Native function |
| --- | --- | --- |
| `LOS ax ay az bx by bz` / `SLOS …` | `1`/`0` | `ClearLine3D` / `ClearLine3DSolid` |
| `PROT px py pz tx ty tz stance` | `1`/`0` | `ProtectedAt` (standing, crouched, prone) |
| `WALK x y z` | `1`/`0` | `Walkable` |
| `PATH ax ay az bx by bz` | `n` then n points | `FindPath` |
| `COVERS` | count, then `id source shelter peek crouch window prone` rows | `CoverPositions` |
| `INFO`, `END` | map summary / stop | |

`tools/mapgen/probe.py` wraps it (`Probe.find(path)` returns None when the probe is not built).
`tests/test_mapgen_native.py` generates villages 17, 5, 1201 and 1206 and compares, per map and
per sample family: random, hedge-crossing and window rays (sight and solid), walkability on the
layer grids, across the 0.48 m movement pad and on/off every surface kind, protection at
catalogue positions from threats on the ground, in lanes and at windows, the whole cover
catalogue, and reachability (Python grid flood from the attached node versus a non-empty
`FindPath`) for spawn-to-goal, spawn-to-any-layer and node-to-node pairs. Thresholds: rays and
walkability 99.5 %, protection 99 %, catalogue 98 %, reachability 100 %; a mismatch prints the
exact probe query. Reachability uses the native step rule (eight neighbours on the 1 m grid, an
edge valid when the swept 0.48 m movement line is clear). The validator's own flood
(`support.Navigation.flood`) steps to four neighbours only, so it is stricter: it can call a
pocket unreachable that a diagonal squeeze reaches (seen once on an intermediate village 5). That
direction is reported only; the other (the validator calling reachable what the simulator cannot
reach, which would pass a sealed map) is gated at 100 %. Measured on 23 September 2026 (source
`0c59ea67b5264b3b`, generator as of that evening): every family at least 99.95 % on all four maps
(one protection query and one walkability query at float-precision boundaries), catalogues of
2,300 to 3,700 positions identical in ids, posture and shelter. It is the gate for any change to
geometry semantics (F packages), to the kernel, and to the village exporter.

The same file seats a static defence on villages 17, 5, 1201, 1206 and 1210 with the real battle
CLI (`--static-defence building|spread|clusters --defenders 12 --seconds 1 --lean`, three at a
time; `.local/lab/battle-lab` or `ARMY_BATTLE_LAB`): 15/15 seat all twelve. The native
`--static-defence` group also seats every layout on a small ARMYMAP 2 village fixture (house with
stairs and upper windows, hedges, crater): no seat uses a hedge, placement is the same with the
concealment switch on, and the defence holds. `scripts/test-mapgen.sh` also runs the native
imported-map checks (spawns, squad routes, stairs, covers, warm/cold digests) on a freshly
generated village 17.

**Loop.** `tools/loop/maps.py` knows `city`, `trenches`, `village` and (plan 029 G-5) `city2`.
`ensure(seed)` is unchanged (town and trenches, one generator call); `ensure(seed, ('village',))`
or `('city2',)` generates that kind alone (its own `generate-<kind>.log`), and `specs` asks only for
its own kind, so no existing set ever generates a village or a city2. A cached village or city2 is
stamped with the fingerprint of the generator sources that built it (`<kind>-<seed>.generator`,
from `generator(kind)`: the kind's root module and `native.py` plus everything they import from
`tools/mapgen`); while the generators are still changing, a map built by another generator is
refused with an explanation rather than silently reused or overwritten, since node rows already
scored on it carry its battlefield digest. Because `support.py` imports `city2`, the village and
city2 source sets currently coincide: a change to any shared module invalidates both caches. The scenario sets (`tools/loop/config.py`):

| Set | Maps | Battles |
| --- | --- | --- |
| `village-dev` | 1201–1220 (reserved village seeds) | one a map, seed 107, 360 s |
| `village-val` | 10 drawn from the build, salt `plan016\|village`, seeds ≥ 1231 | one a map |
| `village-attack-dev` | 1201–1220 | static defence as `town-attack-dev`: layout by map seed, 12 defenders, 600 s, battle seeds 107–109 |
| `village-attack-val` | 15 drawn from the build, salt `plan016\|village\|attack`, seeds ≥ 1231 | as above |

Adding them changes `config_digest` from `e6696b2047e314bc` to `94227add267ac886` for nodes
evaluated from now on; recorded nodes keep their digest. The guards in `tools/loop/guards.json` are
defined on the town sets only; nothing is ranked on villages yet. `python3 -m tools.loop replay`
maps a row to the Unreal map slot of its family (`-ArmyMap=village`, `Config/GeneratedMaps/village.army`
in the Windows mirror); the village slot needs the F-D renderer build.

**Neural tools.** `tools/neural/scenarios.py` `active_legacy_specs(..., family='city')` and
`--family city|village|city2` on `tools/neural/run.py` (training maps for collect; the family's sets
for evaluate, where the town-set guards are reported as not evaluated), `video.py`, `verify.py`
(the static-defence parity case on village 1201 or city2 1201; needs a `--baseline` that reads
ARMYMAP 2), and (G-5) `authority.py`, `ppo.py` and `evaluate.py`, which record a non-town family in
their report. The defaults are unchanged. `evaluate.py` pins the frozen Legacy baseline
`45da1e25dd1aa9e7`, which rejects every ARMYMAP 2 header, so `evaluate --family village|city2`
cannot run until a baseline that reads ARMYMAP 2 is chosen.

**City2 in the pipeline (G-5, 23 September 2026).** The loop sets mirror the village sets, on the
same reserved numbers (a city2 and a village of one seed are different files and never pair):

| Set | Maps | Battles |
| --- | --- | --- |
| `city2-dev` | 1201–1220 | one a map, seed 107, 360 s |
| `city2-val` | 10 drawn from the build, salt `plan016\|city2`, seeds ≥ 1231 | one a map |
| `city2-attack-dev` | 1201–1220 | static defence as `town-attack-dev`, battle seeds 107–109, 600 s |
| `city2-attack-val` | 15 drawn from the build, salt `plan016\|city2\|attack`, seeds ≥ 1231 | as above |

They change `config_digest` from `94227add267ac886` to `d9306866bf9b2084`. Nothing is ranked on
city2; the guards stay on the town sets. `replay` writes `city2.army` and passes `-ArmyMap=city2`,
but `BattleGameMode` has no city2 slot yet (it loads the town slot for any unknown kind), so a city2
replay logs a warning until that slot exists. The shared cache holds city2 1201–1220 and villages
1201–1220 regenerated with generator stamp `b4b635355d181df4` (the villages cached under
`2f528538c515a6c1` were moved to `.local/plan029/G5/old-village-cache/`; every one of the twenty
changed bytes).

First real city2 battle costs (Fable review finding 7): Legacy against a static defence of 12
(layout by map seed), battle seed 107, 600 s limit, `--lean --no-trace`, binary `ae3224df477f0f4c`,
ten maps a family, three rounds with 8 concurrent battles (digests identical in every round). CPU is
the battle process's user + system time; the interval is a 95% bootstrap over maps.

| Family | Maps | CPU s / battle | 95% interval | Battle s | Shots | Attacker wins | Attackers lost | Catalogue |
| --- | --- | ---: | --- | ---: | ---: | ---: | ---: | ---: |
| Town | 21–30 | 7.15 | 6.28–8.08 | 357 | 1,322 | 10/10 | 9.2 | 5,136–5,504 |
| Village | 1201–1210 | 11.67 | 10.21–13.11 | 459 | 1,004 | 8/10 | 9.6 | 2,248–3,392 |
| City2 | 1201–1210 | 14.40 | 12.16–16.44 | 420 | 1,323 | 9/10 | 10.5 | 6,450–6,633 |

City2 costs **2.01× a town battle** (interval 1.64–2.43) and 1.23× a village (1.00–1.49), above the
review's 30–50% estimate and its 40% trigger. The catalogue is not the cause: it is 1.22× the
town's, and the command and navigation stages cost no more than the village's. The difference is the
movement stage (4.7 s against 0.6 on villages and 0.2 on towns): a gprof build of the same source
puts 32% of a city2 battle in `CoordinatePassages`, nearly all of it 14.3 million `OnStairs` calls,
each a linear scan of the stair surfaces and buildings (city2 maps average 40 stair links and 111
buildings, villages 11 and 29). Indexing that lookup, not pruning the catalogue, is the
first lever; it is a simulator change, not made here.

**Limits.** The agreement suite checks that the Python kernel answers the simulator's questions the
same way; it says nothing about tactical quality. Reachability is compared, not route shape or
length. Samples are drawn from four seeds of today's generator; a reworked generator is covered
because the suite generates its maps afresh. Villages have not been measured in full-length
battles by this work: the plan's covering-fire, loop and neural evaluations remain to run.

## City2: separate street-first ARMYMAP 2 family

`city2` is the fourth generated family, built under Jordan's 23 September 2026 instruction and
accepted by him the same day. Town remains `city.py` / ARMYMAP 1; its reference and training maps
are preserved. City2's header is `ARMYMAP 2 city2 <seed>`; the importer accepts it (source
ae3224df477f0f4c), seed 17 is promoted as `Unreal/Config/GeneratedMaps/city2.army` (golden-byte
tested), the demo's sixth map slot "City" loads it (`-ArmyMap=city2`, New+ `--kind city2`), and the
loop and neural pipelines know the family (`city2-*` sets, `--family city2`; see "City2 in the
pipeline" below). `--unreal`, `--native-target` and browser publication work as for the village.
Ordinary output is available with:

```sh
python3 tools/generate_maps.py --kind city2 --seed 17 --deadline 28 --output .local/plan029/city2/17
python3 tools/sweep_villages.py --kind city2 > .local/plan029/city2/sweep.jsonl
```

The v2 pipeline is main road/market → reserved civic sites → secondary streets routed around
those sites → frontage parcels → connected
shell assemblies → asymmetric damage → the shared supportability validator and bounded
repairs. Streets have curved centre lines, independently spaced branches, 3 m alleys and
polygonal squares. A one-metre street mask prevents buildings entering the roads and measures
the remaining blocks; it is an encoding of the street graph, not a WFC placement vocabulary.
Street masks and square paving reuse the village curve/rectangle helpers; road decorations
retain the existing axis-aligned segment boxes. Axis-aligned building wings form
terraces, L-shaped houses, a church complex, mairie, school court and factory yard. Connected
wings use shared walls and real door passages; each owns its native rectangular `B` footprint
and its own surfaces. Courtyards do not receive a fictitious building floor.

Ground base is 0; no railway or sunken cutting is generated in this version. Storeys are 3.2 m;
upper floors have stairs and window teams. Up to 40% of house parcels receive upper floors,
prioritising main streets, plus civic heads. Garden walls are 1.15/1.9 m, hedges conceal with
flags bit 1, crater rims use bit 2 and prone positions 0.5 m inside. The same v3 damage field
protects stairs, tower and immediate objective ground; the city declares 70% of the village
open-field impact count. City2 checks a prone position's local firing line at the native
crouched muzzle height, 0.72 m. This does not change village bytes.

The unchanged ARMYMAP 2 caps are O 6000, S 1500, L 256, C 3000, D 1500, B 128 and P 512;
city2 additionally enforces **4,500 solids** and **120 building parts**, leaving eight B records
below the hard cap. Small optional wings yield to this part reserve. Borrowing wings stop at
the shared wall's inner face, upper slabs stay within their native footprint, and sub-1.2 m
terrace recesses are filled or enlarged during parcel construction. It uses sorted candidates, per-stage
`city2|seed|...` random streams, rounded geometry and Python 3.9 syntax without numpy. Default
generation still produces only Town and Trenches. City2 must be named explicitly.

Validation draws 2–4 actual landmarks with `random.Random(f'city2|{seed}|objectives')`: market
square, factory yard, crossroads, second square, with at least 60 m spacing. These are JSON
landmarks, **not scored native objectives**. Every team has four approaches and must pass
supportability ≥0.70 at every objective, using the existing observers within 40 m, protection
and overlook rules. Elevated-safe ≥0.40 and ≥3 upper positions per two-storey building remain
unchanged. Repairs retain the three-round per-objective/four-round per-map bounds and the
generator's twelve-attempt limit. Deadline failure publishes nothing.

JSON carries objectives, per-team/per-objective support shares, repairs and a `look` object:
block-area CV, bent street-length share, frontage jogs per 100 m, non-rectangular logical-estate
share, street-width histogram in metres, and two-storey share by street type. The last measure
counts native building parts, including one-storey rear wings. These are descriptive measures
with no art thresholds; their full definitions and results are in the
[city2 report](../plans/029-city2-astra-report.md). The preview offers the same inspection views
and all/one-objective selector as village, plus physical wall/rubble edges. Jordan accepted
shared paving on 23 September: city2 roads and squares use one surface mask with continuous
grain and subdued shoulders, so individual road outlines no longer cross junctions. This is
preview presentation; the native record grammar is unchanged.

The v2 60-seed sweep (0–49, 1201–1210) accepted 60/60 on Linux and 59/60 on UE Python,
with zero civic-placement contradictions in 72 attempts (v1: 29 in 102). UE seed 38 exhausted
its 28 s deadline under overlapping build/test load, then passed a standalone CLI run
(16.854 s generation, still contended) with the same payload as Linux. Minimum supportability remains 0.70;
solids range 3,817–4,021, building parts 106–118. All 59 completed native payloads match across
platforms. These are contended diagnostic timings; reliable New+ completion and final quiet
latency remain unestablished. City2 retains the exact composition cache within each attempt;
validation runs fully on every repair. JSON includes the total attempts, attempt history,
reserved civic sites and part-budget decisions. Sweep summaries include the B-part range.

The [v2 follow-up report](../plans/029-city2-geometry-review-astra-report.md) contains per-seed
supportability, timings, review resolutions and limitations. All 52 generator tests pass.
Native agreement passes on four separately labelled geometry-only header aliases; the three
alias imports, all 15 seating cases and all 1,014 bidirectional party-wall protection probes
pass. The binaries used for that diagnostic still rejected actual city2 headers. The overseer
owns the kind allowlist change and the real-family rerun; no simulator edit was made by Astra.
No overall catalogue reduction or battle CPU improvement is claimed. Ten real-family battle
CPU comparisons remain required before a training/loop set. The inspection views and requested
look measures are refreshed under `.local/plan029/city2/`. Overall city art acceptance and
promotion remain Jordan's; Town/Trenches/village goldens remain unchanged.
