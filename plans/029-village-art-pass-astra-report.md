# Plan 029 — Astra village art pass

**Follow-up:** Jordan requested uneven damage across parcel boundaries. The
[generator-v3 report](029-village-uneven-damage-astra-report.md) supersedes the crater allocation
and current measurements below; this report preserves the first layout delivery.

23 September 2026. Implemented by GPT-6 Astra against the uncommitted plan 029 tree at
HEAD `a32a669`. Generator version 2; final generator fingerprint `38a00c5197bd43c6`.
This is a generated-layout delivery for Jordan's visual judgement, not a tactical promotion.

## What changed

- The 20 m socket lattice remains the solver scaffold. Rural cells become holdings of varied
  size and shape, mostly 2–6 cells with occasional boundary slivers. Shared interior vertices
  move up to 4.5 m; physical hedge geometry follows them. Gaps remain 12–16 m apart along each
  shared holding boundary. Joined hedge corners are filled to avoid sub-metre navigation pockets.
- Houses have 13–17 m street frontages, varied close setbacks, rear walls and optional lower
  service buildings. Houses face both sides of the church square; one carries a café label.
- Farms reserve four cells: 34 m walled enclosures with a gateway, a two-storey farmhouse, barn
  and byre, with side/rear posterns. Farm wings and house outbuildings export their actual lower
  roof heights through existing decorative records.
- Orchards occupy plots behind houses; their trunks use irregular spacing. Sparse haystacks
  replace the repeated one-or-two-per-cell pattern.
- Bombardment concentrates around the square and a road approach. Rounded 20% of available
  open cells receive exactly 3–6 craters each. Bounded packing removes rows without silently
  dropping craters. Rim height, physical protection, prone cover and non-blocking flags persist.
- The atlas preview adds field furrows, tree crowns, ragged soil edges, softened hedge outlines,
  lane shading and ramp marks. **Physical hedge / rim edges** exposes the exact exported boxes.
  Roof cutaway, cover, routes and support overlays remain available.

Primary source changes: `tools/mapgen/village.py`, new `village_land.py`, village-only rendering
in `render.py`, the preview controls, lower-roof metadata in the village branch of `native.py`,
and two generator regressions in `tests/test_mapgen.py`. `docs/MAP_GENERATOR.md` describes the
new composition. The overseer's import-following cache fingerprint includes `village_land.py`.
No simulator or Unreal C++ edits were made by this pass. Existing work by other packages remains.

## Requested previews and measurements

[Open the three-seed gallery](../.local/plan029/G/art/index.html). Each seed has a standalone
HTML preview and JSON/ARMYMAP/SVG exports. Overview, cutaway, support and physical-edge PNGs/SVGs
are under `.local/plan029/G/art/village-<seed>-<view>.*`.

| Seed | Support A / B | Elevated-safe | Solids | Attempts | Repair rounds / operations | Linux generation | UE Windows generation + export |
|---|---|---|---|---|---|---|---|
| 17 | 85.71% / 70.00% | 79.89% | 2,761 | 1 | 0 / 0 | 0.36 s | 0.587 s |
| 5 | 100.00% / 71.43% | 80.26% | 2,461 | 4 | 1 / 7 | 2.55 s | 3.412 s |
| 1201 | 100.00% / 87.50% | 74.88% | 2,501 | 1 | 0 / 0 | 0.31 s | 0.414 s |

Final timing was serial, after the concurrent test/sweep work finished. The Windows run used
UE 5.8's bundled Python 3.11.8 with a 30 s deadline, through the WSL checkout, writing only to
`.local/plan029/G/art/windows/`. It is an interpreter/pipeline timing check; the New+ UI was not
launched. Linux/Windows exported text hashes match for all three seeds (LF-normalized).

Across **60 development seeds (0–49 and 1201–1210)**:

- 60/60 accepted and passed a fresh independent re-analysis with identical per-team shares.
- **WFC contradictions: 0/84 attempts (0%)**. Overall rejected attempts: 24/84 (28.6%): 10
  density rejections, 13 supportability rejections, one inaccessible-stair rejection. Maximum
  four attempts; rejected geometry was never exported. The retry limit remains 12.
- Supportability minimum **70% per team**, elevated-safe **73.52–84.94%**, solids **2,238–2,969**.
- 45/60 maps used bounded repairs. Six used the pre-existing ordinary-house storey demotion:
  the 35% house target is initial composition, as before; farmhouses remain two-storey.
- Sweep generation median 0.895 s, range 0.30–2.91 s; largest individual measured attempt
  1.959 s. These sweep timings overlapped checks and are diagnostic, not speedup claims.

No support, elevated-safety, cover, stair, doorway, record-cap, density or retry threshold was
weakened. No held-out 2001–2010 maps were opened. Inspected maps are not promotion sets.

## Verification

- `python3 -m unittest tests.test_mapgen`: 29 tests passed. Includes frozen Town/Trenches
  seed-17 bytes, repeatability under separate hash seeds, Python 3.9 syntax, stairs, lanes,
  support rejection, budgets, previews, farm compounds and the crater-count/distribution rule.
- `python3 -m unittest discover -s tests`: **174 tests run, one skipped; suite passed**. Includes the
  updated generator, loop/cache, native agreement and static-defence seating checks.
- Native agreement on 17, 5, 1201, 1206: **100% sight/solid rays, protection, catalogue,
  surface/grid walkability and strict reachability**. Pad-boundary walkability is 5,999/6,000
  on 1201 and 100% on the others, within the unchanged 99.5% threshold.
- Static-defence seating: **15/15** (five maps × building/spread/clusters), all twelve defenders.
- `scripts/test-mapgen.sh` compiled the native tools; its first run caught a one-node hedge
  pocket on seed 5. The general corner-fill rule repaired the geometry. Final agreement and
  full Python tests then passed without relaxing the strict reachability comparison.
- Final `imported-map-tests` on canonical Town, canonical Trenches and the new village 17:
  all three pass. Village: 64 spawns, eight squad routes, 478 explicit covers, nine stair
  flights up/down, 66 doors, 3,185 derived/explicit catalogue positions, destruction cache
  invalidation and matching warm/cold replay digests. Existing recorded Town/Trenches digests match.
- The initial fractional farm-wall length also exposed a native/Python face-sample rounding
  boundary. Non-integral 14.9 m / 15.9 m wall runs removed it without changing the sampler.

Logs: `.local/plan029/G/art/{stats-final-60.jsonl,timings-linux-final.jsonl,windows-timing.log,
python-all.log,native-agreement-final.log,imported-final.log,loop-tests.log}`. Pre-art source
snapshots and the earlier diagnostic runs remain in that ignored directory.

## Visual review and integration boundary

Astra inspected the actual rendered overview previews of all three seeds and the final layout
includes a lane example (5), two farms (17), and a side-road example (1201). Jordan retains art
acceptance. The atlas presentation remains schematic, particularly the road doglegs and rectangular
building shells. Tree crowns, field tones/furrows and ragged crater soil are SVG illustration;
they are not new Unreal foliage meshes, materials or terrain deformation.

The **physical layout** is exported and ready for the overseer. Unreal still draws imported
geometry with cubes and flat decorative roof boxes. The renderer package must supply organic
foliage, pitched roof meshes and ground blending to carry the softer presentation into the game.
That requires renderer coordination, not a simulator/coverage change. No Fable visual review
was requested, in accordance with the standing ruling. No files were written to
`Unreal/Config/GeneratedMaps/`; no playable default or map was promoted.
