# City2 — Astra implementation and evidence, 23 September 2026

**Historical v1 measurements below.** Jordan has since accepted shared paving and supplied
the Fable geometry review. The current generator, updated previews and follow-up checks are
in [the v2 report](029-city2-geometry-review-astra-report.md).

Implemented a separate `city2` generator and offline preview family. Its streets determine the
frontages and civic sites; connected rectangular wings form terraces, L-shaped houses and U-shaped
civic courts. It exports `ARMYMAP 2 city2 <seed>` and does not replace Town or village. **Art
acceptance remains Jordan's. Native family integration is blocked by the current C++ header
allowlist, and the final UE sweep has one retry-budget rejection.**

An exact retry optimization now caches an untouched city composition for each storey selection
within one attempt. Every repair round receives a deep copy, then gets the full unchanged
validation. This avoids repeating street masks, building expansion and bombardment; it does
not cache a validation verdict or alter a random draw.

Generator source snapshot: `b08fad97004198b0` (SHA-256 of ordered paths and source hashes;
[source manifest](../.local/plan029/city2/source-manifest.json)). The existing village cache
fingerprint covers the whole shared source bundle, so its stamp changes even though the
preserved village native bytes do not. No recorded cache was replaced.

The binding brief is [029-city2-astra-request.md](029-city2-astra-request.md). The local
[three-seed gallery](../.local/plan029/city2/index.html) has overview, open roofs, cover/facing,
routes, support with all/one-objective selection, and physical edges. The
[look comparison](../.local/plan029/city2/measures.html) gives the requested measures without art
thresholds. Actual JSON, SVG and `.army` exports are in the `17/`, `5/` and `1201/` subdirectories.

## Composition and physical contract

- `city2_streets.py`: an interpolating main road, independently spaced branches on either side,
  two unequal back streets, court extensions, two 3 m alleys and polygonal squares. Main widths
  are 9–14 m, side widths 5–7 m; branch intervals are 46–78 m. Main width varies between seeds;
  widening at the square comes from its adjoining paving. Curves use the village tube/rectangle
  encoder at 1 m resolution. The block raster measures the spaces left by this street network;
  it is not a tile placement vocabulary.
- Parcels have 8–15 m frontages within the permitted 6–15 m band and 10–17 m depths. Frontages
  follow the street with small setbacks and deliberate 1 m neighbour steps where their lines
  would otherwise coincide. Main-street setbacks are 0.5–1.5 m before raster clearance, side
  gardens 2.5–6 m. A whole frontage's cardinal offset can be larger when following an angled
  road: the axis-aligned limitation is visible, not disguised by rotating the illustration.
- `city2_buildings.py`: terraces share physical party walls. Rear wings connect through actual
  doors; school and factory wings form U-shaped courts. Each rectangular wing owns a native
  `B` footprint and its own floor; there is no phantom courtyard floor. Church nave/loft and
  sacristy, tower and gated churchyard; two-storey mairie; factory head, workshops, walled yard
  and solid chimney; school and classrooms; wider shop doors, back yards, sheds and hedges.
- Up to `floor(0.4 × house parcels)` receive upper floors, prioritising the main street and
  centre; civic heads also have upper floors. Floors remain 3.2 m, with the existing stairs and
  window teams. Garden walls are 1.15 or 1.9 m; sills and door posts retain their non-vaultable
  semantics. Concealing hedges are physical 1.8 m solids with flags bit 1.
- Reused v3 damage exposure creates one battered approach reaching the centre, ruins with
  partial walls and rubble cover, and impacts across streets and yards. The declared city impact
  count is 70% of the village field count because less open impact ground remains between dense
  buildings; the full declared count must fit. All objective centres, stairs and the tower are
  protected. Crater rims and prone positions retain the 0.5 m inside spacing.
- Native import testing found a prone-position firing ray that cleared at the old illustrative
  1 m height but struck city rubble at the simulator's crouched muzzle height. **City2 alone now
  checks that local ray at 0.72 m**, including repairs. Village's output stays unchanged.
- `city2|seed|stage` streams, sorted candidates, rounded geometry, Python 3.9 syntax, no numpy.
  Objectives use exactly `random.Random(f'city2|{seed}|objectives')`, independent of retries:
  market square, factory yard, an actual street junction, then the second square, dropping
  weaker candidates inside 60 m. They remain validator/sidecar landmarks, with no scored native
  objective record.
- The existing support rule, observers within 40 m per objective, four approaches per team,
  ≥0.70 for **every** objective/team, elevated-safe ≥0.40 and ≥3 upper positions per two-storey
  building remain in force. Repairs target the worst failing objective, with the existing
  three-round per-objective/four-round per-map limits and twelve-attempt generator bound.
  City repair walls use the agreed 1.15 m height. The family solid budget is 4,500.

The optional railway/cutting is omitted: ground base is 0, with no sunken lane surfaces. This
city therefore has no station. Factory yard fills that objective priority band.

## Per-seed results

Default damage 0.32. “Minimum” means the worst team on the worst selected objective. Timings
here are the serial per-platform sweep measurements including SVG/JSON/native serialization.

| Seed | Objectives | Minimum | Elevated-safe | Solids | B parts | Repairs / rounds | Attempts | Linux s | UE Python s |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| 17 | 4 | 0.7778 | 0.8975 | 3,931 | 109 | 19 / 3 | 2 | 3.611 | 5.992 |
| 5 | 4 | 0.7500 | 0.8969 | 3,987 | 115 | 18 / 4 | 1 | 4.224 | 6.737 |
| 1201 | 3 | 0.8750 | 0.9003 | 3,798 | 110 | 20 / 4 | 1 | 3.857 | 6.455 |

| Seed | Objective | Team A | Team B |
|---|---|---:|---:|
| 17 | Market square | 1.0000 | 1.0000 |
| 17 | Factory yard | 1.0000 | 0.7778 |
| 17 | North junction | 1.0000 | 1.0000 |
| 17 | Weavers' court | 1.0000 | 1.0000 |
| 5 | Market square | 1.0000 | 0.8750 |
| 5 | Factory yard | 1.0000 | 0.8889 |
| 5 | South junction | 1.0000 | 0.7500 |
| 5 | Weavers' court | 0.8000 | 0.7500 |
| 1201 | Market square | 0.8750 | 0.8750 |
| 1201 | Factory yard | 1.0000 | 1.0000 |
| 1201 | South junction | 0.8750 | 1.0000 |

## Sixty-seed development sweep and time budget

Final cached generator, seeds 0–49 and 1201–1210; these are inspected development data, not
promotion evidence. Linux Python 3.14.4 accepted 60/60; UE 5.8's bundled Windows Python 3.11.8
accepted **59/60 (98.33%)**, with seed 28 reaching the unchanged 28 s deadline. The same seed
completed in a separate full UE CLI run in 26.160 s. All completed serialized native payloads
match across platforms, including that separately completed seed 28. All 60 final Linux
payloads also match the pre-cache version: the cache changes cost, not the maps or decisions.
The SHA comparisons operate on the exporter's UTF-8 payload; the Windows text writer uses
CRLF on disk, while Linux uses LF. Syntax is checked for Python 3.9; a 3.9 interpreter was not
used for these timing runs.

| Measure | Linux | UE Python |
|---|---:|---:|
| Accepted within sweep deadline | 60/60 (100%) | 59/60 (98.33%) |
| First attempt accepted | 40/60 | 40/60 |
| Attempts, including rejected | 102 | 102 |
| Placement contradictions | 29/102 (28.4%) | 29/102 (28.4%) |
| Other rejected attempts | 13 support failures | 13 support failures + 1 deadline |
| Final rejected maps | 0 | 1, seed 28 |
| Objective distribution, accepted maps | 2: 19; 3: 17; 4: 24 | 2: 19; 3: 17; 4: 23 |
| Minimum / median map-minimum supportability | 0.7000 / 0.7639 | 0.7000 / 0.7778 |
| Solid range | 3,688–4,032 / 4,500 | 3,688–4,032 / 4,500 |
| Maps needing repair | 60/60 | 59/59 accepted |
| Repair operations retained / all attempts | 756 / 907 | 743 / 894 |
| Largest attempt count / accepted repair rounds | 6 / 4 | 6 / 4 |

These contradictions are real failures to fit reserved civic footprints around the street
network, not WFC contradictions. No threshold or seed-specific override was used. Windows'
accepted-map counts omit seed 28; its separately completed map has the same four objectives
and thirteen retained repairs as Linux.

| Final sweep time | Linux | UE Python |
|---|---:|---:|
| Mean request seconds, including failures | 3.672 | 5.998 |
| Worst request, seed 28 | 16.533, accepted | 28.090, deadline |
| Worst accepted map | 16.533, seed 28 | 18.611, seed 45 |
| Worst individual attempt | 5.184 | 9.249 |
| Total seconds | 220.348 | 359.894 |

The final platform sweeps ran sequentially, with no competing city2 verification job. Other
project/host activity is outside this task's control; no user's process was stopped. Sweep
time includes generation, SVG, JSON and native serialization. The deadline is 28 s within
New+'s 30 s allowance; the individual-attempt maxima are well inside it, but repeated failing
attempts can exhaust the request budget. Full Unreal process launch and import are unmeasured
because city2 is not integrated there.

Full UE CLI measurements after the exact cache change, including process startup, filesystem
writes and HTML:

| Seed | Exit | Full process seconds |
|---|---:|---:|
| 28 | 0 | 26.160 |
| 45 | 0 | 18.115 |
| 17 | 0 | 5.801 |
| 5 | 0 | 6.622 |
| 1201 | 0 | 6.371 |

Before caching, both platform sweeps accepted 60/60, with worst complete requests of
17.039/27.168 s and individual attempts of 5.115/11.085 s Linux/UE. However, repeated full CLI
checks timed out: seed 28 at 29.415 s with overlapping jobs, then 28 and 45 at 28.781 and
29.500 s after our other jobs finished. Profiling found repeated composition across repair
rounds; caching the untouched base reduced work without changing geometry. The successful
post-cache CLI checks do **not** erase the final sweep's seed-28 timeout. Dependable completion
of every New+ request remains **unestablished**; budget exhaustion rejects the request without
publishing a partial or failing map. These observed failures are retained, not removed by
changing deadlines or dropping seeds.

Evidence: [final Linux sweep](../.local/plan029/city2/sweep-linux-cached.jsonl),
[final UE sweep](../.local/plan029/city2/sweep-windows-cached.jsonl),
[pre-cache Linux](../.local/plan029/city2/sweep-linux-final.jsonl),
[pre-cache UE](../.local/plan029/city2/sweep-windows-final.jsonl),
[final CLI timings](../.local/plan029/city2/windows-cli-timings.json),
[pre-cache serial CLI](../.local/plan029/city2/windows-cli-before-cache-timings.json),
[overlapping CLI](../.local/plan029/city2/windows-cli-overlapping-timings.json),
[collated results](../.local/plan029/city2/results.json).

## Look measures, without thresholds

| Measure | 17 | 5 | 1201 | 60-seed min / median / max |
|---|---:|---:|---:|---|
| Block-area CV | 1.1581 | 1.2125 | 1.0425 | 0.9132 / 1.1540 / 1.3097 |
| Street length in bends | 22.86% | 17.39% | 17.95% | 12.84% / 19.80% / 30.55% |
| Frontage jogs / 100 m | 5.222 | 6.151 | 5.742 | 5.152 / 5.967 / 6.578 |
| Non-rectangular estate footprints | 13.83% | 20.21% | 14.89% | 10.64% / 15.96% / 23.40% |
| Two-storey main-street parts | 95.00% | 78.95% | 78.57% | See per-seed sidecars |
| Two-storey square parts | 66.67% | 66.67% | 66.67% | Includes one-storey sacristy |
| Two-storey side-street parts | 21.25% | 24.14% | 25.29% | Includes rear wings |

Street-width histograms, metres of centreline by width:

| Width | 17 | 5 | 1201 |
|---|---:|---:|---:|
| 3 m | 174.37 | 149.48 | 170.69 |
| 5 m | 516.23 | 140.07 | 259.21 |
| 6 m | 384.89 | 500.88 | 90.28 |
| 7 m | 316.88 | 539.77 | 920.90 |
| 10 m | — | — | 344.07 |
| 13 m | 347.80 | 346.67 | — |

School/civic and industrial each have one two-storey head among three building parts (33.33%)
on these seeds. Every requested category is present in each sidecar's `look` object.

Definitions: block CV is population standard deviation / mean over connected non-road areas
inside the fixed 301 × 237 m inner measurement domain, including clipped peripheral pieces.
Bends change heading by >3° over approximately 20 m of centreline. Jog counts use ≥0.5 m
change between neighbouring cardinal frontage lines divided by total generated frontage
length; this includes road-following offsets. A non-rectangular logical estate has a union
area smaller than its bounding rectangle. Two-storey shares count native `B` parts, including
single-storey wings. Width histograms omit extra square paving and do not measure road area.

**Visible limitation:** smooth street centre lines are achievable with boxes, while facades
remain cardinal. Inspect the northern terraced row in
[seed 5's physical view](../.local/plan029/city2/city2-5-physical.png): connected steps follow
the road, but an individual facade does not turn with it. Truly slanted masonry faces are not
representable by this contract. A rotated-box format would be a separate simulator decision.
The street scaffold also deliberately retains one through road, two flanking streets and
stable civic zoning (factory northeast, school southwest); it is not an arbitrary historical
street graph. These are concrete limits for Jordan to judge, not claims of visual acceptance.

## Native checks and the integration boundary

Actual city2 files were passed to the native probe and `imported_map_tests`. They are rejected
with **Unsupported map header**: `ImportedMap.h`'s `VersionTwoHeader` and subsequent kind check
allow only city/trenches/village. Correct city2 exports were retained; no C++ was changed.
The actual-family agreement and seating classes are added to `tests/test_mapgen_native.py`,
with explicit skips for this known header rejection. They become active when the overseer
adds city2 support.

To check the physical geometry now, `tools/check_city2_native.py --geometry-alias` creates
clearly named **GEOMETRY-ONLY-as-village** files in its local diagnostic output. Only the header
kind differs. This is an opt-in diagnostic, never an exported family substitution or promotion.

- Agreement seeds 17, 5, 1201, 1206: sight/solid rays, all three walkability sample families,
  protection and both reachability gates **100%**. Catalogue agreement: seed 17 6583/6601
  (99.727%), seed 5 6492/6502 (99.846%), the other two 100%; all exceed the unchanged 98% gate.
  A few short-face catalogue samples differ at Python/native floating boundaries; this is
  agreement within the existing tolerance, not exact catalogue identity.
- The validator still uses four-neighbour reachability; the native agreement path test uses
  native eight-neighbour edges. There were no optimistic-validator reachability disagreements
  in these four city geometries. This compares reachability, not path length or shape.
- Geometry-only `imported_map_tests`: **3/3**, including 40/40/37 stairs climbed and descended,
  64 spawns each, eight squad routes each, 825/826/866 explicit covers, warm/cold repeated
  digests, derived catalogue and destruction invalidation. Actual city2 import remains blocked.
- Geometry-only static-defence seating: **15/15**, seeds 17/5/1201/1206/1210 ×
  building/spread/clusters, all twelve defenders, three workers maximum, one-second lean runs.
  These establish seating, not full battle quality or real city2 runtime routing.
- The ordinary Town/Trenches/village import regression also passed (three files and two
  historical digests). No older map was regenerated in the canonical directory.

Seating manifests identify the tested native build as `e767b6471b9ca2f1-linux`. Parallel
simulator work can change the current checkout and rebuild binaries after these measurements.

Evidence: [native report](../.local/plan029/city2/native-final/report.json),
[actual import rejection](../.local/plan029/city2/native-final/import-actual.log),
[geometry-only import](../.local/plan029/city2/native-final/import-geometry.log),
[legacy imports](../.local/plan029/city2/legacy-imports.log).

The overseer needs to add city2 to **both** v2 header checks and its name/runtime family
mapping, then rerun the actual-family suites. Loop/neural sets, Unreal map slot and promotion
remain outside this pass. CLI publication flags and the browser publisher reject city2 until
that boundary is deliberately changed; offline `--output` works.

## Tests, preservation and provenance

Final post-cache command: `python3 -m unittest tests.test_mapgen tests.test_loop
tests.test_project_docs` — **99 tests pass** in 99.189 s, including the schema/contract check,
preserved goldens, two hash seeds, publication refusal and existing project/loop regressions.
[Final test log](../.local/plan029/city2/final-python-tests.log). No geometry or threshold
changed after the native diagnostics; all sixty native payloads matched before/after caching.

`python3 -m unittest discover -s tests -p 'test_mapgen*.py' -v`: 50 tests, passing, with the two
explicit actual-city2 integration class skips above. After adding the publication guard,
its test and the preview test both passed. Coverage includes two hash seeds plus global RNG
perturbation, real impossible civic reservations, objective band/spacing, per-team gates,
budgets, contract records, shape/width checks, deadline and the native crouched-muzzle
regression. Browser checks on all three seeds exercised every objective choice, all/one
filtering, roof cutaway, physical overlay stability and disabled publication: no page errors.

`python3 -m unittest tests.test_loop tests.test_project_docs`: 52 tests pass.
`git diff --check` passes.

Town and Trenches seed 17 match their canonical bytes. Village seeds 17/5/1201 match the
pre-city2 hashes, including village v5 curves and damage. Shared shell wall omissions, custom
objective bands, damage streams and support differences are opt-in to city2; legacy defaults
stay unchanged. [Baseline hashes](../.local/plan029/city2/baseline/golden.json) and
[test output](../.local/plan029/city2/mapgen-native-final2.log) preserve the evidence. **No city2
golden is pinned before Jordan accepts the look.**

No simulator/Unreal C++ edit, canonical GeneratedMaps write, loop/neural wiring, training-map
replacement or held-out 2001–2010 opening was made by this task. The working tree contains
substantial pre-existing parallel work, so this report does not attribute those changes to city2.

A bounded structural consultation was attempted through the authorised exact
`claude-fable-5-1` subscription launcher. Doctor succeeded; the city2 request timed out at 240 s
without a final architect response. **There is no Fable review or approval.** Request:
[029-city2-fable-request.md](029-city2-fable-request.md); launcher evidence:
`/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260923T205045-3783f2b6/`.
No model substitution, API billing or visual review was requested.

Reproduce locally without publication:

```sh
python3 tools/generate_maps.py --kind city2 --seed 17 --deadline 28 --output .local/plan029/city2/recheck
python3 tools/sweep_villages.py --kind city2 > .local/plan029/city2/recheck-sweep.jsonl
python3 -m unittest discover -s tests -p 'test_mapgen*.py'
python3 tools/check_city2_native.py --geometry-alias --out .local/plan029/city2/recheck-native
```

Established: deterministic sampled geometry, unchanged legacy bytes, unchanged acceptance
thresholds, correct preview controls and the separately labelled native geometry checks.
Not established: art acceptance, arbitrary-seed reliability, reliable New+ success under all
loads, native city2 family integration, full-length battle quality, loop promotion or scoring
of objectives.

Road-blending follow-up research and visual comparison: [notes](029-city2-road-blending-notes.md).
