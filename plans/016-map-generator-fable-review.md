Read: AGENTS.md, CLAUDE.md, `BattleSim.h`, `BattleSim.cpp` (geometry and spawn sections), `TerrainSim.cpp`, `EnvironmentSim.cpp`, `scripts/test-sim.sh`, the upstream `polygon_util.ts`, and the existing `tools/mapgen/vendor/` license files. No COLLABORATION.md exists. No images were supplied, so no art verdict is given.

## Verdict and assumptions

The plan is sound and correctly scoped as an offline tool with no simulation edits. The main risk is not the generator but the gap between free-form town/trench geometry and what the C++ `Map` can actually represent. Design the JSON to the C++ representation from day one, or the previews will show layouts the adapter can never load.

Assumptions: Works keeps the default 170 × 150 half-extents and Trenches keeps 100 × 70 with ground base -1.4 (`BattleSim.h:50`, `TerrainSim.cpp:8`). Spawns and goals stay hardcoded in `BattleSim.cpp:168-170` until a later, separately authorised sim change.

## Schema, invariants and gotchas

**Representation limits the adapter must inherit** (these are hard constraints, not preferences):

- **Axis-aligned boxes only.** `Obstacle` is centre, half-extents, base z, height, three flags (`BattleSim.h:22-28`). No rotation exists anywhere in collision, cover, or navigation. Town streets must be an orthogonal grid with jogs and offsets for variety. Trench traverses must be rectilinear crenellations, which is historically correct for British traversed lines.
- **Two-storey buildings are a fixed 10 × 8 stock footprint.** Stairs, upper-floor support, and `buildingAt` all hardcode 5 × 4 halves (`EnvironmentSim.cpp:43-47, 136-143, 290`). Generated buildings must be either `kind: "shell"` (single-storey wall boxes, arbitrary rectangular footprint) or `kind: "stock_two_storey"` (centre only, instantiated by `AddBuilding`). Reserve landmark plots of at least 10.5 × 8.5 for the stock kind.
- **Shell walls should copy the stock wall vocabulary** so cover derivation and window sourcing work unchanged: wall half-thickness 0.22, full wall height 3.2, window sill 1.05 with lintel at 2.35 height 0.85, ground-floor door gap 2.2 wide (`EnvironmentSim.cpp:55-69`). Windows only get a `source` automatically when the sill box is `building=true` and height 1.05 (`EnvironmentSim.cpp:13`).
- **Low walls** are `halfCover=true`, height 1.05 to 1.2, `blocksMovement=true`. Anything a standing soldier cannot fire over is `halfCover=false`, height at least 2.2 (`BattleSim.cpp:36`, `BodyHeight` 1.85 at `:86`).
- **Trench floors are axis-aligned `GroundSurface` rectangles at z -1.4; earth is the complement.** In the existing map, earth blocks are `halfCover=true, height 1.4, blocksMovement=false` (`TerrainSim.cpp:24`). That flag combination is load-bearing: walkability below ground comes only from `Supported` requiring a surface at the exact z (`EnvironmentSim.cpp:137`), earth still occludes bullets between -1.4 and 0, and the cover catalog picks these up through the `halfCover && z<0` rule (`EnvironmentSim.cpp:125`). Emit earth in the JSON with exactly these semantics; do not invent isolated wall props for trench cover.
- **Ramps** are a sloped surface plus a `SurfaceLink` whose endpoints lie on the ramp boundary at floor and ground height (`TerrainSim.cpp:13-15`, `EnvironmentSim.cpp:266-278`). Keep the existing 6 m run for a 1.4 m rise. Ramp tread collision boxes should be derived by the adapter, not stored in JSON.
- **Fire steps: do not model as raised surfaces in v1.** Every extra height layer needs its own link, and `FindPath` tries every link with two floor searches each (`EnvironmentSim.cpp:269-277`). Record fire steps as cover entries of `kind: "fire_step"` on the front-wall side with `crouch=true`, sourced from the adjacent earth block. The trench is already crouch cover: a standing head at 0.96 × 1.85 sits above ground level.

**Navigation lattice invariant.** Path nodes are integer metre coordinates with 0.48 m clearance (`EnvironmentSim.cpp:162-177`). So every walkable passage (door, alley, trench floor, ramp) must contain a continuous strip of integer lattice nodes with at least 0.5 m clearance to any blocking face. Practical rule: snap all footprint edges to a 0.5 m grid, keep walkable widths at least 2 m, and put passage centrelines on integer coordinates. Fire trench floors of 3 m width centred on integers give three walkable rows. The Python generator should emulate this lattice and test connectivity on it, which is the closest local proxy to the real `FindPath`.

**Spacing invariants from the current map** (`EnvironmentSim.cpp:96-99, 126-131`): cover shelters sit 0.6 m off a face and need a 1.1 m clear strip; the authored map keeps 2 m between free-standing cover pieces and 6 to 7 m from buildings. Carry these as generator parameters, not constants scattered in code.

**Count budget.** The existing earth partition slices the whole map by every surface edge (`TerrainSim.cpp:20-25`). With a dense network that explodes to tens of thousands of boxes and slows `GeometryKey`, unprepared line checks and the spatial index. Emit earth as a merged rectangle cover of the complement (greedy row merging is enough) and assert a budget, say under 800 earth boxes and under 1500 obstacles total.

**Spawn compatibility is the real blocker for any adapter.** Works spawns at |x| ≈ 140 to 142 in four lanes and goals at x = 0; Trenches spawns at |x| ≈ 82 to 91, y in {-44, 0, 44, 58}, z -1.4 (`BattleSim.cpp:168-170`). JSON should carry `spawn_zones` and `objectives`, and validation should report a non-gating "legacy spawn compatibility" check: all 32 hardcoded points per side walkable on the generator lattice. If a design fails it, the adapter needs a `BattleSim.cpp` change and that is a separate authorisation.

**IDs.** `PrepareGeometry` assigns sequential ids only when zero, and windows and cover derive ids as `obstacle × 16 + slot` (`EnvironmentSim.cpp:11-12, 128-131`). Give every JSON feature a stable positive integer id in deterministic emission order so a future adapter preserves them across regeneration, as AGENTS.md requires for destruction.

**Cover records in JSON are advisory, not a contract.** The C++ derives its own catalog from obstacle edges. State this in the schema `meta`. The Python geometric test should mirror `ProtectedAt` rather than reinvent it: threat eye at 1.7 m, body samples at 0.5 and 0.96 of stance height, shoulders at ±0.4 m, and the blocker must intersect within 3 m of the body (`BattleSim.cpp:87-99`).

**LGPL port.** The rectangular specialisation of `subdividePolygon` (`polygon_util.ts:80-136`) is a derivative work. Put it alone in one module under LGPL-3.0-only with the upstream URL, commit, and a modification list; keep the rest of `tools/mapgen` under the project licence and import through a single function. Corrections to record: the split point scales the endpoint sum by 0.4 to 0.6 instead of interpolating (`:113-115`), `Math.random` becomes the seeded generator, the perpendicular split of a rectangle needs no polygon slicing library. Keep the shape-index rejection and the drop of plots under half the minimum area; those gaps are your courtyards and waste ground.

## Order, tests, adapter decision

Implementation order: schema and validator first, then the trench graph generator (harder representational constraints), then the town, then SVG/HTML from the same JSON, then the C++ validation tool.

Minimum tests, all in Python except the last:

- Same seed produces byte-identical canonical JSON; ten seeds each pass validation.
- No overlapping blocking footprints within a layer; all edges on the 0.5 m grid; every value within map bounds minus the 0.6 m border.
- Lattice connectivity: every spawn zone reaches every objective; each trench network is one component on the -1.4 layer; the two networks are disjoint on that layer and connect only via ramps.
- Every door and passage contains a clear lattice strip; every window and door opening is at least 2 m wide or on the stock template.
- Every cover record: shelter and peek walkable, source exists, facing ray blocked within 3 m by the source, at both body samples for the declared stance.
- Ramp links: endpoints on ramp boundary, heights match floor and ground within 0.03.
- Count budgets and the non-gating legacy spawn report.
- Preview: SVG feature count equals JSON feature count per layer.

On the C++ validation adapter: proportionate, but sequence it after the user has accepted a preview, so effort is not spent certifying rejected layouts. Build it as a standalone tool compiled like `scripts/test-sim.sh` (plain g++ over the Sim sources, so no engine and no sim edits). The repo has no JSON parser; have Python export a flat line-per-record text file alongside the JSON so the tool reads it with iostreams. It constructs a `Map` directly, calls `PrepareGeometry`, then runs `Walkable`, `FindPath` spawn-to-objective, and `ProtectedAt` over the cover records. That is a read-only certification step and still not a runtime adapter.

Unresolved decisions for the user: whether spawn and objective points move into JSON (a sim change), whether shell-only town buildings are acceptable versus reserving stock two-storey plots, and whether parapet sandbags above the trench lip are wanted in v1 given they block a standing soldier's line of fire from the floor.
