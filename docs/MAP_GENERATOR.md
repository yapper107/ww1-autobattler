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
