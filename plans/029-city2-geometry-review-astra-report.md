# City2 shared paving and structural review — 23 September 2026

Jordan accepted **shared paving** after the three-option study. Roads and squares now use one
surface mask, continuous grain and quiet shoulders in the city2 renderer. Seed 17/5/1201 native
files stayed byte-identical for the renderer-only stage, recorded in `shared-paving/`. Overall
city art acceptance, promotion and runtime wiring remain Jordan's.

Jordan then supplied the geometry findings from the actual
[Claude Fable 5.1 overseer review](029-city2-fable-review.md). This report covers their separate
implementation. These geometry changes produce new city2 native bytes; Town, Trenches and
village must retain their goldens. No importer or other simulator/Unreal C++ change was made.

Source snapshot: `fdf5dc397045d998` ([manifest](../.local/plan029/city2/geometry-review/source-manifest.json)).

## Findings addressed

- **Part reserve:** city2 validation now enforces 120 native building parts, below the existing
  hard cap of 128. Optional rear wings are considered largest first; the smallest eligible
  wings yield to the reserve. The sidecar reports the limit, actual parts and omitted wings;
  sweep summaries report the full building-part range. The original 60-seed sweep actually ranged from 100 to 118 parts, and the old validator already enforced
  the 128 record cap, so exceeding it could not silently pass validation as the review feared.
- **Shared walls:** a physical wall remains owned by one shell. The borrowing wing's native
  footprint stops at the inner face, 0.25 m from the wall centre line. Shell coordinates still
  place its roof, walls and apertures; explicit `native_rect` controls B membership. Every
  upper slab is clipped to its owner's footprint. Solid blocks stay contiguous by part. Non-overlapping neighbours retain their complete
  walls rather than acquiring a negative shared-wall interval. The 60 accepted layouts were
  audited: none used that invalid interval, so the guard does not move their native bytes.
  The native suite now probes both directions across intact terrace party walls in all three
  stances. Connected civic/rear wings remain ground-floor extensions; upper storeys of separate
  houses remain separate.
- **Small recesses:** adjoining terrace fronts use a 1.5 m jog when their lines would leave
  a sub-1.2 m step. Shallow rear recesses are filled during parcel construction, or the rear
  wall is extended until its step reaches 1.5 m. This changes actual shells, not just their
  illustration. Existing 3 m alleys remain; crater placement now reserves their footprint.
  This removes that source of unusable corners, not every possible unreachable native cover
  catalogue entry. Native catalogue counts are reported rather than assumed to fall by half.
- **Civic placement:** first establish the old main road and market, reserve the church,
  mairie, factory and school, then route secondary roads/alleys around those reservations.
  A small deterministic visibility graph finds detours only for obstructed segments, followed
  by curvature with explicit clearance checks. Junction endpoints stay on their parent road;
  optional control points can move. This preserves street-led parcel generation while avoiding
  rejection because a late civic building cannot fit. JSON now includes civic reservations
  and an explicit total attempt count alongside the existing attempt history.

The actual importer does not populate `firstObstacle`/`obstacleCount` for imported B records;
those fields are assigned by stock-building construction. Contiguous ownership is preserved
here, but no imported per-building obstacle-range behaviour is claimed. The existing P record
also has no z column; no upper-door extension or format change was attempted.

The supportability floor (0.70 for every objective/team), elevated-safe requirements, repair
limits, solid budget and record contract are unchanged. Existing cache and deterministic
streams remain; generator version advances to 2. No new library or numpy dependency.

## Verification and measurements

The 60-seed sweep uses 0–49 and 1201–1210. These are **contended diagnostic timings**:
the overseer's build/test chain overlapped the runs. They are not quiet-machine final latency.
A quiet CLI timing script refused to start while those processes were active.

| Measure | Linux 3.14.4 | UE Python 3.11.8 |
|---|---:|---:|
| Accepted | 60 | 59 |
| Attempts | 72 | 72 |
| Placement contradictions | 0 | 0 |
| Retained repairs | 699 | 687 |
| Repairs across attempts | 795 | 783 |
| Minimum supportability | 0.7 | 0.7 |
| Median supportability | 0.75 | 0.75 |
| Worst individual attempt (s) | 16.195 | 20.028 |
| Worst request (s) | 16.286 | 28.352 |

Both runs used at most three attempts per seed and four repair rounds per map. Solids:
3,817–4,021; building parts: 106–118. Linux objective counts: 2→19, 3→17, 4→24;
UE counts: 2→19, 3→17, 4→23. Linux accepted 60/60; UE accepted 59/60. UE seed 38
hit the 28 s deadline under the overlapping load (28.352 s including unwind/serialization
boundary). Seed 38 then passed a separate UE CLI run within the unchanged deadline, with 16.854 s
recorded generation time and a payload matching Linux. That run was still contended; the
number is generation time, not a measured full-process latency. No thresholds or retry limits
were weakened. All 59 completed native payloads
match across platforms. The earlier v1 sweep had 29 civic-placement contradictions in 102
attempts; v2 has zero in 72. Linux’s twelve failed completed attempts are supportability rejections.

| Seed | Objectives | Minimum | Solids | B parts | Repairs / rounds | Attempts | Linux s | UE s |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| 17 | 4 | 0.8000 | 3873 | 110 | 21 / 4 | 2 | 6.110 | 10.668 |
| 5 | 4 | 0.7500 | 3922 | 110 | 15 / 3 | 1 | 3.319 | 5.704 |
| 1201 | 3 | 0.9000 | 3831 | 108 | 18 / 3 | 1 | 3.016 | 8.014 |

| Seed | Objective | Team A | Team B |
|---|---|---:|---:|
| 17 | market_square | 0.8571 | 0.8000 |
| 17 | factory_yard | 1.0000 | 0.9091 |
| 17 | crossroads | 1.0000 | 1.0000 |
| 17 | second_square | 0.8889 | 1.0000 |
| 5 | market_square | 0.8571 | 0.7500 |
| 5 | factory_yard | 1.0000 | 1.0000 |
| 5 | crossroads | 1.0000 | 1.0000 |
| 5 | second_square | 0.8571 | 1.0000 |
| 1201 | market_square | 1.0000 | 1.0000 |
| 1201 | factory_yard | 1.0000 | 1.0000 |
| 1201 | crossroads | 0.9000 | 1.0000 |

All **52 generator tests pass**, including legacy goldens, Python 3.9 syntax, determinism,
120-part reserve/drop behaviour, separated-neighbour regression, floor ownership and a
60-seed first-attempt civic-clearance check. Existing Town/Trenches/village native bytes are
unchanged. City2 native bytes intentionally change for the structural fixes; no city2 golden
is pinned before overall art acceptance.

Browser checks pass on all three refreshed previews: every objective choice, roofs, physical
edges and disabled publication, no page errors. Shared paving on the saved v1 geometry is
pixel-identical to Jordan's accepted prototype for all three seeds. PNGs are rendered through
the same browser so mask/blur support matches the preview.

Native diagnostics used **explicitly named geometry-only village-header copies** because the
available probe/import-test binaries still rejected actual city2 headers at the time of this
run. Four seeds pass every unchanged agreement threshold: rays, walkability, protection and
sampled reachability 100%; catalogue agreement 99.8453–100%. Three geometry imports pass;
all fifteen seating cases (five seeds × three layouts) seat twelve defenders. Actual-header
imports in this diagnostic run fail; they are not counted as passes. The overseer has since
added the kind to the shared C++ source and owns rebuilding/running the real-family suites.

The new party-wall probe covers both directions across intact terrace walls in all three
stances: **318/318**, **354/354** and **342/342** protected queries on 17, 5 and 1201.

| Seed | Earlier native catalogue | Current native catalogue |
|---|---:|---:|
| 17 | 6592 | 6577 |
| 5 | 6498 | 6452 |
| 1201 | 6305 | 6461 |

There is **no demonstrated overall catalogue reduction**: these layouts differ, and seed 1201
has more entries. The terrace recess invariant is fixed; blanket catalogue reachability and
battle CPU improvement are not established.

Look measures (no acceptance thresholds), street-width histograms and two-storey shares are
refreshed in the [comparison](../.local/plan029/city2/measures.html). Evidence is under
`.local/plan029/city2/geometry-review/`: both sweep JSONL files, generator log, native report,
per-query mismatches, import/seating logs, catalogue comparison and updated preview measurements.
The read-only source review is attributed to the actual Fable overseer response, not the earlier
timed-out launcher. Runtime source edits in the shared checkout were made by the overseer.


## Remaining boundaries

The overseer owns the importer change and real-family suites after the current chain. Geometry diagnostics with an explicitly labelled village-header copy do not
establish native city2 integration. Ten real-family battle CPU comparisons have not been run;
the review's runtime-cost estimate is a hypothesis, not a measurement. They remain required
before any city2 training or loop set is built. Axis-aligned facade limits remain visible.
