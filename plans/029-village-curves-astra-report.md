# Plan 029 — curved roads and sunken lanes

23 September 2026. Jordan liked the objective preview and requested curved roads,
more sunken lanes, and curves in those lanes. Implemented in village generator **5**,
fingerprint **be711b3ca7f9d117**. These new previews remain subject to Jordan’s art acceptance.

## Delivered

Roads now bend gently between village landmarks and round their corners. The side-road
junction stays attached to the main street. Houses and fields retain their parcel layout.
Each village reserves **two or three separate sunken lanes**, preferring opposite flanks,
with different lengths, broad turns and bowed stretches. Seeded streams determine their
placement and shape; none of this is a seed-specific correction.

Lane floors, bank hedges, ramps and the earth removed around them follow the new layout.
The nominal 4 m-wide floor is a swept centreline rasterized into 1 m cells, merged into
disjoint native surface rectangles at −1.4 m. The earth is the exact complement of the
union of every floor and ramp. Each lane retains two straight 6 m ramps with the existing
24 ballistic treads each, links and landings. Hedges follow the banks with the existing
gateway spacing, height and concealment flag. The preview’s darker worn track is clipped
to the actual flat floor rectangles, removing the old visual seams between floor pieces.

This uses the existing ARMYMAP 2 boxes and surfaces. Native curves have small rectangular
steps; this does not create a continuous terrain mesh. Road decoration uses dense samples
of the curve rather than large diagonal bounding rectangles. No simulator or Unreal C++
changes, objective records, scoring, or writes to `Unreal/Config/GeneratedMaps/` belong to
this work. Town and Trenches remain unchanged.

All objective/team support checks still require ≥0.70. The validator additionally rejects
a village outside the 2–3 lane band, a lane without two ramps, blocked centreline points,
or earth intersecting a lane floor/ramp. The existing full connectivity, stair, hedge,
elevated-cover and record-cap gates remain in force.

Multiple lanes cost more validation time. Exact optimizations reuse graph neighbour masks,
cover catalogues and cover-to-observer visibility within an unchanged geometry revision;
Dijkstra preserves cost/node tie ordering and stops when all required deployment starts
have settled. Geometry rebuilds discard these caches. Repairs are capped at four applied
rounds per layout, still at most three planning rounds per objective. A fruitless target
repair ends that layout; the next layout must pass every gate, within the unchanged
12-attempt limit and caller deadline. No support threshold or observer count was reduced.
All 60 accepted native payloads match the version before these performance changes.

## Previews

- Gallery: `.local/plan029/G/curves/index.html`.
- Before/after: `.local/plan029/G/curves/comparison.html`, seeds 17, 5 and 1201.
- Each seed folder contains native export, sidecar, SVG and interactive preview with the
  existing cutaway, support/objective selector, cover and physical-edge views.
- Previous accepted-for-further-work objective previews remain under `G/objectives/`.

## Requested seeds

Shares are each team’s minimum across all selected objectives. Lane lengths exclude ramps.
Linux seconds include generation, SVG, JSON serialization and native export.

| Seed | Lanes / lengths (m) | Objectives | Attempts | Repairs / rounds | Team A / B minimum | Solids | Linux seconds |
|---|---|---:|---:|---:|---|---:|---:|
| 17 | 2 / 73.98, 73.98 | 2 | 6 | 10 / 2 | 0.8750 / 0.8889 | 2580 | 7.226 |
| 5 | 3 / 73.98, 40.30, 94.59 | 2 | 2 | 4 / 1 | 0.8000 / 0.7273 | 2960 | 3.054 |
| 1201 | 2 / 73.98, 60.67 | 2 | 2 | 10 / 2 | 1.0000 / 1.0000 | 2573 | 3.778 |

| Seed | Landmark | Position (m) | Team A | Team B |
|---|---|---|---:|---:|
| 17 | Church square | (20, 17, 0) | 0.8750 | 0.8889 |
| 17 | Sunken-lane junction | (−106, −40, 0) | 0.9091 | 1.0000 |
| 5 | Church square | (0, −23, 0) | 1.0000 | 0.7273 |
| 5 | Sunken-lane junction | (60, −54, 0) | 0.8000 | 0.8182 |
| 1201 | Church square | (−20, −3, 0) | 1.0000 | 1.0000 |
| 1201 | Farm compound | (49, −4, 0) | 1.0000 | 1.0000 |

## Development sweep and timing

Development seeds **0–49 and 1201–1210**, serial within each interpreter. Other project
battle benchmarks were running on the machine, and part of these sweeps overlapped this
pass’s regression checks. These are measurements under concurrent load, not quiet-machine
worst-case guarantees. No other session’s work was stopped for timing.

Linux final sweep (`sweep-linux-final2.jsonl`):

- **60/60 accepted**, **137 layout attempts**, maximum six attempts per seed.
- **0 WFC contradictions**, zero rejections for fewer than two spaced landmarks.
- Lanes: **46 maps with two**, **14 with three**.
- Objectives: **37 maps with two**, **22 with three**, **one with four**; 144 objectives,
  288 team/objective checks. Minimum supportable share **0.7000**.
- **59 repaired maps**, **464 retained repairs**, **698 including rejected layouts**;
  maximum four applied rounds on an accepted map.
- Solids **2494–3064**, surfaces **48–91**, elevated-safe share **0.7611–0.8593**.
- Mean **4.663 s**, maximum **17.985 s** (seed 16); slowest layout **6.767 s**.

The final UE-bundled Windows Python sweep (`sweep-windows-final2.jsonl`) also accepted
**60/60**, with identical counts, support results, repair results and all **60 native
payload hashes matching Linux**. Mean **6.111 s**, maximum **19.875 s** (seed 16).
A separate six-seed final-code probe passed 6/6, with a maximum of **27.132 s** on seed 16
under concurrent load. Earlier repair policies timed out on that seed (59/60 in the first
Windows sweep); those exploratory runs remain under `sweep-windows-final.jsonl` and
`windows-four-rounds.jsonl`, not the final result.

Separate full Windows CLI invocations, including process startup, UNC reads and output
writes, all returned zero with `--deadline 28`:

| Seed | 16 | 24 | 7 | 17 | 5 | 1201 |
|---|---:|---:|---:|---:|---:|---:|
| Seconds | 21.365 | 17.538 | 15.482 | 9.883 | 4.167 | 5.703 |

The worst measured full CLI invocation is **21.365 s**, within New+’s 30 s process budget.
Timing variation is visible across runs; this is not a guarantee for every seed or machine.
Unreal’s work after generator return was not timed.

## Verification and limits

- `scripts/test-mapgen.sh`: rebuilt native importer/probe, **41/41 Python tests passed**
  (37 generator, four native). Town, Trenches and village 17 imports passed; separate
  imports for 5 and 1201 passed, including stairs, routes, cover, warm/cold digest repeat
  and destruction invalidation. **5/5 maps imported**, the two recorded v1 digests matched.
- New generator regressions cover 2–3 curved lanes, exact disjoint floors/earth complement,
  two clear ramps per lane, curved road samples/junctions/native decoration extents and
  rejection of earth inside a lane. Existing objective count, determinism, spacing and
  square-pass/farm-fail rejection remain tested. The latter uses the new real layout for
  seed 8: square shares 1.0000/0.7778 pass, farm shares 0.6000/0.1429 fail.
- Town/Trenches golden bytes, global RNG and hash-seed determinism, Python 3.9 syntax and
  the no-numpy check pass. Every accepted Linux sweep export matches the pre-optimization
  native payload; timing optimizations did not change accepted geometry in this sample.
- Native agreement on 17, 5, 1201 and 1206 passes every unchanged threshold. LOS, solid LOS,
  grid/surface walkability, protection, catalogues and path queries agree **100%**. Seed
  1201’s movement-pad sample agrees **5999/6000 (99.9833%)**, above the existing 99.5% gate;
  all other movement-pad samples agree 100%. The differing point lies just outside field
  hedge `solid-1632`’s 0.48 m clearance boundary. Moving 0.0001 m either way restores
  agreement; `pad-mismatch.json` records the probe. This small export/float boundary
  discrepancy is reported, not hidden by lowering a threshold. All sampled reachability
  checks agree; the separate diagonal-squeeze test retains the conservative 4-neighbour rule.
- Existing static-defence seating: **15/15 cases** seat 12 defenders. This is the existing
  scenario, not new defender placement at validation objectives.
- `python3 -m unittest tests.test_loop tests.test_project_docs`: **52/52 passed**.
- Headless Edge: All/one objective filtering, overlay on/off, unchanged physical markup,
  expected per-team percentages, all three gallery/comparison selections and zero page
  errors. New overview images were inspected.

Evidence is under `.local/plan029/G/curves/`: `mapgen-native-suite.log`, `imported-extra.log`,
`integration-tests.log`, `browser-check.log`, the sweep JSONL files, `windows-cli-timings.json`,
`cli-*.log`, exported map files and overview/cutaway/support/physical images. Checks here
do not imply battle-quality or visual acceptance.

A bounded geometry-contract consultation was attempted through the authorized Fable
launcher, after a successful doctor check. It failed while refreshing the subscription
OAuth token because another Claude Code process was refreshing it or had exited during
refresh. There is **no Fable response or architectural approval** for this change. Astra
continued implementation and verification; no model substitution, credential copying or
API billing. [Request](029-village-curves-fable-request.md); local failure evidence:
`/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260923T192544-33f9e27b/`.
This consultation concerned physical encoding, not visual taste.

Established: deterministic curved layouts encoded in the current physical contract,
bounded offline acceptance against every selected objective, and the checks reported here.
Not established: improved battle tactics or balance, universal seed acceptance, continuous
terrain rendering, scored objectives, or Jordan’s acceptance of the new art. The validator’s
4-neighbour reachability flood remains unchanged; native agreement is sampled separately.
