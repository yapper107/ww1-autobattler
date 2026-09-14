# Focused engagement results

**The satisfactory-AI target was not achieved.** I implemented and evaluated the proposed repairs, rejected the behavioral revisions after regression checks, and retained the previous AI in the playable build. The delivered changes improve investigation and battle-generation performance. They do not establish reliable flanking.

Delivered build: `3679481d18031c1f`. Comparison baseline: `1e94efaf1bfb21f3`. The ten-seed rejected AI candidate is `b60e92e135dd06a8`.

## What the investigation established

The problem crosses planning, order delivery, movement execution and firing readiness. Individually valid systems do not reliably produce a completed tactical sequence.

In northern layout 5, seed 107, route `2000000020` is accepted at **18.65s** (decision **680**), advances stages at **23.65s** and **41.65s**, then pauses at **49.65s** (decision **1651**). No assigned soldier reaches its final destination during that route. The gate audit distinguishes that failure from simply moving closer or winning a later firefight.

Code/trace investigation found several specific defects: direct orders can lose the corridor when a corporal is unavailable; friendly separation can prevent reaching a waypoint exactly; short cover lacks end-face positions; a high-scoring unsupported proposal can prevent choosing another executable option; and a support refresh can ignore a changed target. Attempts to repair these interfaces exposed further coordination failures. These are diagnosed mechanisms, not claims that an isolated patch has improved the complete battle.

A final replay probe ruled out one suspected cause in this matrix: all 136 sampled support-blocked squad frames had an identified threat overlooking the crossing. Waiting for a nonexistent covering-fire target was not demonstrated in these runs.

One observer defect **is repaired in the delivered build**: a pause originating in fireteam coordination occurred after the logging check and could go unrecorded. Diagnostics now capture that transition, with a regression test. The new gate investigator also retains per-soldier path-recovery counts, timestamps and supporting decision IDs.

## Why the broader AI revision was rejected

The same ten full-battle seeds were compared: **100, 103, 107, 108, 211, 223, 227, 229, 233, 239**. The metrics were not changed to make the candidate pass.

| Measurement | Previous AI | Rejected revision |
|---|---:|---:|
| Rapid order reversals | 2,462 | 1,807 |
| Flagged unnecessary cover changes | 41 | 50 |
| Aim interruptions | 400 | 351 |
| Hold/fire time without an actor firing solution | 82.03% | 80.73% |
| Useful maneuver completions under the existing full-battle evaluator | 9 | 0 |
| Stationary time with an enemy sightline and no firing solution | 3,039.8 soldier-seconds | 3,894.2 soldier-seconds |

The last measure worsened by approximately **28%**, while total active soldier-time was nearly unchanged. Lower order churn therefore did not demonstrate better tactics. The older nearby-cover heuristic also worsened, but that heuristic can flag soldiers screened by distant terrain; it is kept separate from the physical sightline samples above.

The stricter nine-encounter flank test stayed at **0/9**, below the unchanged **8/9** target. Defender elimination fell from **5/9 to 2/9**. Smaller corridor/waypoint repair experiments also failed; one failed the existing fixed-defender regression. Those behavioral edits were rolled back. Their binaries, source snapshots and traces remain archived for investigation.

## Delivered improvements and performance

The route planner reuses exact directed edge costs within an immutable assessment, stores visibility answers compactly in a larger revision-valid cache, and skips visibility work only when its maximum possible contribution cannot change the cost. It preserves geometry ordering, physical collision, simulation frequencies and tactical results. The larger cache has a memory cost; measured Windows values appear below.

All **ten archived full battles reproduced their authoritative gameplay digests** in the isolated performance build. The final build also preserved the complete nine-encounter matrix and matched seed 107 with tracing disabled. The deterministic regression suite checks trace on/off/detailed parity and geometry mutation behavior.

Twenty-four serialized Windows native runs used seeds 107–109, each first and repeated in one process, both with and without tracing. All corresponding gameplay digests matched across builds and trace settings.

| Median native timing | Previous build | Delivered build |
|---|---:|---:|
| Simulation, tracing enabled | 16.57s | 12.29s |
| Report export, tracing enabled | 1.48s | 1.46s |
| Simulation + export, tracing enabled | 17.97s | 13.70s |
| First process run, simulation + export | 17.67s | 13.40s |
| Repeated process run, simulation + export | 18.03s | 13.86s |
| Simulation + export, tracing disabled | 16.82s | 12.65s |
| Maximum measured process working set | 2.021 GiB | 2.099 GiB |

Simulation improved **25.8%**; simulation plus export improved **23.8%**, just below the **25% total** target. Measured tracing overhead on simulation was approximately **2.1%** in the delivered build; writing the standard trace/report adds about **0.86s** relative to tracing disabled. Peak working set increased approximately **80 MiB**. This is a small three-seed timing sample; first/repeated process runs are **not true OS-cache-cold measurements**, and warmer runs were not uniformly faster.

These native timings isolate the synchronous simulation/report work. A separate, uncontended Unreal check of the actual **Run Battle** path measured **15.48s** for seed 107: **14.01s** simulation and **1.47s** export. That is one UI observation, not a three-seed UI median; no matched pre-change UI timing was collected in this pass. [Windows measurements and method](AI%20investigation/focused-engagement/windows-summary.json) preserve the exact values.

## Validation and use

The final full C++ suite passed in **216.6s**, including deterministic replay, geometry invalidation, physical ballistics, reaction delays, leadership, cover, building/stair/window use, friendly-fire safety, and the existing fixed-defender fixtures. The focused suite passed the new coordination-pause diagnostic regression. **21 Python tests passed.** Windows native and Unreal builds passed; main-map and trench Unreal smoke checks passed. Source/config contents match the Windows mirror.

Use [AI Investigation Commands](AI%20Investigation%20Commands.md) for one-run gate audits, detailed reruns, the fixed matrix, matched full-battle comparisons and performance parity checks. Compact evidence is in [the comparison JSON](AI%20investigation/focused-engagement/rejected-ai-comparison.json), [the delivered gate audit](AI%20investigation/focused-engagement/delivery-north-107-gates.json), and [the parity results](AI%20investigation/focused-engagement/performance-parity.json).

The unresolved AI work is an integrated squad execution repair: the same retained route, released membership, covering target and arrival contract must survive leader replacement, local safety reactions and delayed orders. That sequence needs to pass the controlled encounters before another broad behavior revision is promoted. Persistent soldier stats and actual destruction remain future work.
