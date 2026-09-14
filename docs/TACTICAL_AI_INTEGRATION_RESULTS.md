# Tactical AI integration — implementation and acceptance results

The tactical routing, trench map, route execution, geometry knowledge separation, and investigation tools are implemented and playable. **The overall AI quality targets are not met.** This is an implementation checkpoint with measurable failures, not a declaration that the AI is satisfactory or ready for persistent soldier stats.

Baseline simulation: `f8bbbe8f2b945563`. Candidate: `1e94efaf1bfb21f3`. The original executable and source archive remain available for comparison. Results below use the final candidate, except the separately identified cache experiment.

## Play the build

Open [Play Army Prototype](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/Play Army Prototype.cmd>). In preparation, select **Map: Communication trenches** to try the new map, or leave **Fractured Works** selected for the original 340×300 deathmatch. Click **Run Battle**. During replay, select a soldier and click **Show squad route**: cyan is the accepted approach and yellow is its current stage. The panel states when that squad has no accepted route.

The trench map is 200×140 metres, with communication trenches, junctions, passing pockets, ramps, a sheltered connection, an exposed crossing, and a two-floor building. Both maps retain four eight-person squads and one MG per side.

## What changed

- Leaders evaluate travel time, estimated exposure, reported fire, friendly firing lanes, congestion, and uncertainty. Unknown terrain is uncertain; it is not treated as secretly safe. Enemy knowledge comes through the existing observation and reporting system.
- Squads can consider longer approaches. Accepted routes survive through individual orders, movement, and recovery instead of being replaced by an unrestricted shortest path. Emergency shelter remains available.
- Movement is divided into stages with alternating fireteams. Exposed crossings require recent delivered fire at the relevant overlooking position and sustained preparation. Protected stages have a lighter release requirement. Arriving soldiers claim shelter and a firing peek.
- Remote geometry edits affect physical collision at the tick boundary, but enter an individual's tactical map after observation and recognition delay. Revision changes invalidate geometry-dependent caches and passage data.
- Route and execution traces now connect proposals, orders, stages, paths, pauses, and completions. The strict evaluator checks the fighting relationship achieved, rather than counting any movement as a flank.
- Geometric query caching, bounded search, shared route storage, and reuse reduce the added routing cost. They have not made the complete new build faster than the baseline.

## Measured tactical results

Ten matched full battles: seeds **100, 103, 107, 108, 211, 223, 227, 229, 233, 239**. Durations are weighted by active soldier time. The same corrected analyzer was applied to both builds.

| Measure | Baseline | Candidate | Interpretation |
|---|---:|---:|---|
| Flagged unnecessary cover changes | 54 | 41 | Fewer |
| Flagged rapid order reversals | 2,519 | 2,462 | Still frequent |
| Combined flags / 1,000 active soldier-seconds | 15.80 | 15.17 | **3.94% reduction; misses 50% target** |
| Exposed inactivity / 1,000 active soldier-seconds | 27.64 s | 34.35 s | **Worse** |
| Hold time without a firing solution | 80.72% | 82.03% | **Worse** |
| Maneuver task time | 5.45% | 7.67% | More movement, not proof of better tactics |
| Legacy useful maneuver completions | 11 | 9 | Spatial benefit measure only |
| Flagged unsupported crossing time | 0.85 s | 11.90 s | Requires investigation; flags are not proof of a safety-rule violation |
| Unexplained stalled-search time | 0 s | 0 s | This narrow detector does not establish absence of all inactivity |

The nine controlled flank encounters use three layouts, seeds 107–109, sixteen attackers against eight defenders, and up to 360 seconds. **Strict envelopment success: 0/9; target: 8/9.** Five encounters eliminated the defenders, and several completed routes. Neither substitutes for two surviving movers sustaining a usable second angle of at least 45 degrees for three seconds around a still-active defender, with the route completed.

Two analyzer defects were corrected before the comparison: the Hold action enum was wrong, and a newly issued distant order inherited the preceding nearby hold duration as a stall. The corrections apply to baseline and candidate alike. Analyzer findings remain hypotheses until checked against supporting decisions.

## A concrete failure the new tools explain

Northern layout, seed 107, squad 1 (internal zero-based ID):

| Time | Decision ID | Recorded event |
|---|---:|---|
| 18.65 s | 680 | Accepted protected route `2000000020` |
| 23.65 s | 845 | Reached its next stage |
| 41.65 s | 1403 | Reached another stage |
| 49.65 s | 1651 | Paused due to recognized pressure or matching movement refusal |
| 140.25 s | 3987 | Accepted replacement route `2000000288` |
| 151.25 s | 4198 | Paused because covering fire became unavailable |
| 153.25 s | 4228 | Accepted route `2000000309` |
| 200.25 s | 5164 | Completed that route; strict second-angle criterion still failed |

This confirms a gap between successful travel and a useful coordinated firing position. The specific contributions of destination selection, moving support, and individual order changes remain hypotheses. The [decision excerpt](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/AI investigation/tactical-routes/north-107-decision-excerpt.jsonl>), [selected routes](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/AI investigation/tactical-routes/north-107-selected-routes.jsonl>), and manifest are preserved with the evidence.

## Validation

The complete standalone simulation regression suite passed. It covers projectiles, friendly-fire checks, suppression and aiming, reaction delays, wounded participation, leadership succession, cover, navigation, windows/stairs, geometry revisions, and deterministic replay. The existing MG closure tests passed 9/9 and fixed-defender regressions 3/3; these are weaker checks than the new envelopment test.

New route fixtures verify a sheltered detour to a fixed destination, faithful execution, distinguishable budget exhaustion, arrival into usable cover, trench floor/ramp connectivity, and earth blocking sight. The controlled detour reduced **predicted** exposure from about 15.24 to 4.07 seconds. A paired hidden remote-geometry-change test preserved received orders and movement before observation.

Trace-disabled, standard, and detailed 60-second simulations, including contact and firing, produced identical gameplay digests and full fingerprints. Python analyzer/evaluator tests passed: 10 analyzer, 3 evaluation, and 4 route tests. Windows Unreal and native builds succeeded; main-map and trench-map Unreal integration checks passed. These checks establish implementation consistency, not tactical acceptance.

## Windows performance

Native Windows x64, seeds 107–109, 360-second limit, three first/repeated-process pairs per seed with standard tracing and one disabled-trace pair per seed. Serialized with no assistant-started concurrent simulation/build/Unreal workload. First-process is not OS-cold; peak memory is process high-water, not instantaneous per-run usage. Timers cover simulation and export, not process startup or Unreal rendering.

| Median measure | Baseline | Candidate |
|---|---:|---:|
| Simulation, standard tracing | 6.10 s | 18.61 s |
| Export, standard tracing | 1.26 s | 1.52 s |
| Simulation + export, standard tracing | 7.37 s | 20.11 s |
| First-process total | 7.09 s | 20.16 s |
| Repeated-process total | 7.64 s | 20.07 s |
| Peak process memory, standard tracing | 1.959 GiB | 2.020 GiB |
| Simulation + export, tracing disabled | 7.30 s | 19.55 s |

The candidate takes **173.1% longer** in this native simulation-plus-export comparison, missing the plan's maximum 10% increase budget. Median peak memory changes by **+3.1%**. These native timings closely exercise the work performed by Run Battle, but are not a matched measurement of Unreal UI input-to-render latency.

Standard-trace totals span 5.63–8.98 seconds in the baseline and 19.32–22.94 seconds in the candidate; seed-to-seed workload differences are included. The final Unreal main-map smoke run measured 17.77 seconds from Run Battle through export for seed 108, under concurrent validation load, so it is an integration observation rather than an isolated baseline comparison.

The candidate's median tracing overhead estimate is -1.7% for simulation and +2.9% including export. The negative simulation difference is timing noise, not evidence that tracing makes the simulation faster. The disabled-trace sample has only two runs per seed; normal timing noise and the serialized ordering limit precision. All repetitions and trace-on/off runs had the same gameplay digest within each seed and build. No claim of cross-build identical gameplay is made.

| Seed | Baseline total, standard | Candidate total, standard | Candidate total, trace disabled |
|---|---:|---:|---:|
| 107 | 8.66 s | 22.50 s | 22.12 s |
| 108 | 5.98 s | 20.03 s | 19.55 s |
| 109 | 7.37 s | 19.89 s | 18.52 s |

Raw timings and digests: [baseline measurements](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/AI investigation/tactical-routes/windows-baseline-measurements.json>), [candidate measurements](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/AI investigation/tactical-routes/windows-candidate-measurements.json>), and [computed summary](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/AI investigation/tactical-routes/windows-summary.json>).

An isolated earlier cache-size experiment reduced simulation calculation time from 17.60 to 13.17 seconds (25.2%) with the same gameplay digest, `1019566501786547682`. That is a comparison between two cache sizes in an intermediate build. It is **not** a 25% improvement over the original game, and it is not the final Windows benchmark.

## Remaining work before tactical acceptance

1. Investigate completed routes that never produce the required angle: preserve a useful supporting direction, score arrival firing positions, and connect final arrival to an engagement task. Use the failed matrix cases as regressions; keep the existing criterion.
2. Audit rapid individual order changes inside accepted squad plans. The number of reversals barely moved. A stable squad plan alone does not guarantee that NCO formation and individual assignments remain stable.
3. Resolve the increased exposed inactivity and unsupported-crossing flags against their trace evidence before treating increased movement as progress.
4. Reduce repeated tactical cost evaluation without changing decisions. In the final Linux seed-107 profile, tactical queries consumed about 9.41 of 13.79 simulation seconds. Query counts, costs, and geometry validity provide a concrete optimization target.
5. Repeat the fixed and held-out evaluations after those changes. Do not move acceptance thresholds to fit the current output.

The navigation backend remains a region lattice plus the existing physical grid. Cross-floor travel uses physical stair/ramp connections; it is not a general tactical search over arbitrary stacked surfaces. Passage leases are not a complete crowd solver, and this pass does not establish that all opposing traffic combinations clear without delays. Threat forecasts use bounded spatial sampling. Actual weapon-driven destruction, collapse, excavation, arbitrary-mesh cover generation, and persistent soldier stats remain future work.

## Investigation commands and evidence

The [Tactical Route Guide](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/Tactical Route Guide.md>) contains repeatable simulation, tracing, rerun, route evaluation, and matrix commands. Source and the complete run archives are retained in the WSL project at `/home/jchan/ww1-autobattler`.

Compact evidence is in `AI investigation/tactical-routes`: matched ten-seed comparisons, both evaluation summaries, the strict matrix, decision/route excerpts, validation logs, cache-experiment logs, and Windows raw measurements. The summaries preserve original run paths so supporting full traces can be retrieved. No large replay archives are duplicated into the compact evidence bundle.
