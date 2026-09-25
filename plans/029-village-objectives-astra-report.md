# Plan 029 — multiple village validation objectives

23 September 2026. Jordan’s ruling implemented in generator version **4**; generator
fingerprint **480f62407688605d**. Art acceptance remains Jordan’s. No map was promoted.

## Delivered

`village_objectives.py` draws a requested count of 2–4 using exactly
`random.Random(f'village|{seed}|objectives')`, visiting sorted landmark candidates in
priority order: church square, largest farm, side-road junction, second farm or lane
junction. Largest farm ties use stable yard IDs. The last band uses the seeded draw
between eligible landmarks. Keep the higher-priority landmark when separation is below
60 m; retry the layout if fewer than two remain. No failing objective is removed to make
the support gate pass. The current sunken lane’s junction is its upper ramp mouth meeting
field access, not a bend invented as a road junction.

The church square is always first. Both teams’ four deployment-lane approaches must be
reachable and satisfy the existing ≥0.70 share for **each** objective. Observer selection
still uses the physical cover catalogue within 40 m; sight, protection, support distance,
crossing thresholds and elevated safety are unchanged. Navigation and catalogue work is
shared, while observer sets and paths are constructed separately per objective.

Repairs select a failing objective, with at most three planning rounds there and eight
proposals per round. The complete map and all objectives are rechecked after every
applied round. Progress is measured at the target objective rather than the global
minimum, so tied failures do not prematurely stop useful work. A fruitless round exhausts
that objective. The existing 12 layout attempts and caller deadline remain in force.

JSON lists each objective’s kind, position and ID. `validation.objectives` holds each
objective’s [team A, team B] shares; `validation.support.objectives` contains full observer
and crossing evidence. The CLI’s headline share is the minimum across all team/objective
pairs. `tools/sweep_villages.py` reproduces the serial development sweep and reports counts,
attempts, WFC contradictions, landmark rejections, repairs and timing.

The support overlay offers All objectives or one landmark, including that landmark’s
repair annotations and per-team percentages. Roof, cover, route and physical-edge views
are retained. Current galleries: `.local/plan029/G/objectives/index.html` and the refreshed
`.local/plan029/G/art/index.html`; the earlier damage gallery remains under `uneven/`.

The old 80/20 square/farm focal point is retained separately as `focal_point`, preserving
its spawn-goal and damage-exclusion role. There is **no native objective record**, scored
objective, new defender seating rule or gameplay change. Existing village geometry can
change when repairs or layout retries change; this is not a promise of byte-identical
village exports. The Town and Trenches contract remains byte-identical.

## Requested seeds

Shares below are the minimum over objectives for that team. Every objective’s details are
in the sidecar and the next table. Timings include generation, SVG, JSON and native export.

| Seed | Objectives | Attempts | Repairs / applied rounds | Team A minimum | Team B minimum | Solids | Linux / Windows seconds |
|---|---:|---:|---:|---:|---:|---:|---:|
| 17 | 2 | 1 | 4 / 1 | 0.8750 | 0.8000 | 2847 | 1.168 / 1.810 |
| 5 | 3 | 4 | 16 / 3 | 0.8000 | 0.7778 | 2614 | 3.487 / 5.043 |
| 1201 | 2 | 2 | 8 / 2 | 1.0000 | 0.8333 | 2366 | 1.644 / 2.587 |

| Seed | Landmark | Position (m) | Team A | Team B |
|---|---|---|---:|---:|
| 17 | Church square | (0, 3, 0) | 0.8750 | 0.8000 |
| 17 | Second farm | (91, 4, 0) | 0.8750 | 0.9000 |
| 5 | Church square | (-20, 23, 0) | 0.9091 | 0.7778 |
| 5 | Largest farm | (-109, 24, 0) | 1.0000 | 0.9000 |
| 5 | Sunken-lane junction | (126, -40, 0) | 0.8000 | 0.8889 |
| 1201 | Church square | (-20, -3, 0) | 1.0000 | 0.8333 |
| 1201 | Largest farm | (49, -4, 0) | 1.0000 | 1.0000 |

Seed 17’s largest farm is too close to the square, so its second farm is used. Seeds 5 and
1201 select later layouts than the damage-only pass; all previews show the accepted layouts.

## Development sweep

Seeds **0–49 and 1201–1210**, the same 60 already inspected maps. Linux artifact:
`.local/plan029/G/objectives/sweep.jsonl`.

- **60/60 accepted**, 107 layout attempts, maximum five attempts for a seed.
- **0 WFC contradictions / 107 attempts**; nine layouts rejected for too few spaced
  landmarks. Other rejected attempts retain their structural, density or support reasons
  in the JSONL; none is hidden in the acceptance number.
- Objective counts: **34 with two, 26 with three, zero with four**. Four is supported and
  tested on a spaced landmark fixture, but no accepted layout in this development sweep
  retained four after availability and spacing. This does not establish natural four-objective
  coverage or acceptance on unseen seeds.
- **146 objectives / 292 team-objective checks** on the accepted maps. Minimum share **0.7000**.
  Landmarks: 60 squares, 50 farms, 11 road junctions, 25 lane junctions.
- **53/60 repaired maps**; 397 repairs retained, 651 including rejected attempts. Maximum
  four applied repair rounds across an accepted map’s objectives (at most three per objective).
- Solids **2242–2935**, below 3400. All other geometry/cap/elevated-cover checks remain required.
- Linux mean **2.741 s**, measured maximum **10.461 s** (seed 8). This run overlapped a portion
  of generator regression testing; the separate Windows sweep measures the New+ interpreter.

The UE-bundled **Windows Python 3.11.8** sweep also accepted **60/60**, with identical
objective stats and all **60 native payload SHA-256 hashes matching Linux**. Mean **4.015 s**,
maximum **14.851 s** (seed 8); slowest individual attempt **5.642 s**. Timed separately,
actual CLI processes with `--deadline 28` (including interpreter startup, UNC reads and all
output writes) took **2.323 / 6.010 / 4.058 s** for **17 / 5 / 1201**, and **20.182 s** for
sweep-worst seed **8**. All returned zero. Thus the **worst observed full invocation is
20.182 s**, within New+’s 30 s budget; this is a measurement on these maps, not a universal
worst-case guarantee. This follow-up did not time the Unreal process after generator return.
Windows artifacts: `sweep-windows.jsonl`, `windows-cli-timings.json`, `cli-*.log` and
`windows-cli/` under `.local/plan029/G/objectives/`.

## Verification and limits

- `scripts/test-mapgen.sh`: rebuilt native importer/probe tools; **38/38 Python tests passed**
  (34 generator tests plus four native tests), and its Town/Trenches/village-17 imports passed.
  Separate native imports for **5 and 1201** also passed (stairs, door routes, warm/cold
  digest repeat and destruction invalidation), giving **5/5 map imports** overall.
  This includes the Town/Trenches golden-byte checks, Python 3.9 syntax/no numpy, global RNG
  and hash-seed determinism, 2–4 count/priority/spacing, real square-pass/farm-fail rejection,
  and no objective data reaching native export.
- Native agreement on **17, 5, 1201, 1206**: **100%** on every sampled LOS, solid LOS,
  walkability, protection, catalogue and path query family. The diagonal-squeeze test still
  pins the intentionally stricter 4-neighbour validator.
- Existing static-defence seating: **15/15** cases (five villages × three layouts) seat
  12 defenders. This tests the existing scenario; it does not seat defenders at the new
  validation landmarks or implement the later objective plan.
- `python3 -m unittest tests.test_loop tests.test_project_docs`: **52/52 passed**,
  including generator-source fingerprint discovery/cache invalidation and doc consistency.
- Browser check in headless Edge: All/one selection, objective percentages, repair filtering,
  disabled selector with overlay off, unchanged physical-edge markup, and zero page errors
  passed. Screenshots `preview-all.png` and `preview-farm.png` were inspected.
- Linux/Windows 60-seed payload/landmark equivalence and full CLI timing checks passed as
  reported above. Actual CLI logs confirm objective count and the per-objective/team minima.

Artifacts for these checks are under `.local/plan029/G/objectives/`: `mapgen-native-suite.log`,
`imported-extra.log`, `integration-tests.log`, `browser-check.log`, the two sweep JSONL files and Windows CLI logs.
The earlier `generator-tests.log` records the initial obsolete wall-deletion assertion;
the final 38-test suite contains its corrected, passing regression.

The new regression uses real seed 0, first layout: square shares **1.0000 / 0.8571** pass,
while farm shares **0.6667 / 0.4000** fail. The validator rejects it. The old test that deleted
nearby walls was corrected: deleting observer walls can also remove the crossing itself.
It now leaves exposure intact and denies support positions, checking rejection across all
objectives. No gate was lowered.

Established: deterministic, bounded offline supportability checks across the selected
landmarks, with unchanged physical contracts. Not established: battle balance, tactical
quality, scored objective behaviour, acceptance on every seed, or final art quality.
The 4-neighbour validator flood remains unchanged; sampled native agreement is reported
separately and is not universal pathfinding equivalence. No simulator or Unreal C++ was
edited, and nothing was written to `Unreal/Config/GeneratedMaps/`.
