# Second exact training-battle optimization — 22 September 2026

Source **69962220d762ea04** used **15.2% less total native CPU time** than the
previous optimized source cfcd101678649cb2 across 12 recorded-action battle pairs.
All 6,095 decisions, observations, legal masks, receipts, rewards and final
outcomes matched. This is an additional improvement over the first optimization;
the original 15.9% result came from a separate paired experiment and the two
percentages must not simply be added.

Full Linux suite, 41 historical pairs, exact route-cost comparisons, drills traces,
Windows contracts, six Windows battle pairs and the Unreal 5.8 build passed.
The current three-seed training experiment continues using its original frozen
binary. No policy promotion or learning-method change accompanies this work.

## Implementation

Only `Sim/TacticalRouteSim.cpp` changes in production during this pass:

1. Group reports as before, then stably order the resulting threats by their
   confidence × weapon-weight upper bound. Evaluating stronger bounds first lets
   the existing maximum-exposure calculation skip more reports which cannot raise
   that maximum. Each threat retains the same three-eye float accumulation,
   distance checks and lazy endpoint conversion; equal bounds remain stable.
2. After a miss in the tactical ray cache, prepared maps query the existing
   obstacle index directly. This avoids the second segment-memo lookup on that
   path. The original unprepared-map fallback, geometry revision checks and sight
   counter remain intact. All other visibility callers retain segment memoization.

The route test adds report permutations, tied bounds, cleared and distant reports,
a fully visible maximal threat, both stances and prepared/unprepared geometry.
No candidate count, search budget, route assessment lifetime, decision frequency,
random draw, reward, knowledge boundary or conduct threshold was changed.

## Profiling corrected the original attribution

`perf` was not installed on this host. Instead an isolated copy of the optimized
source added call-site counters; no instrumentation entered the timed production
candidate. All three instrumented recorded replays matched the original complete
protocol and outcome hashes. This establishes query counts, not hardware memory
stall attribution. Whole-battle timing is measured separately below.

| Training seed / map | Tactical ray-cache hits | Segment-memo hits after a tactical miss | Tactical share of sight queries | Cover-shortlist share |
|---|---:|---:|---:|---:|
| 24 / 756 | 71.2% | 8.4% | 29.4% | 4.8% |
| 25 / 713 | 68.8% | 6.7% | 26.0% | 4.7% |
| 26 / 739 | 73.2% | 10.1% | 25.4% | 4.3% |

Most sight calls came from other callers, contrary to the initial Fable inference.
The low conditional second-cache hit rate made a targeted bypass worth testing;
it did not by itself prove a speedup. The cover-shortlist share lowered that
proposal's priority but does not bound its inclusive CPU cost. Planner deferral,
cover-value reuse, cache resizing and approximate geometry were not added.

## Three-arm screening

Three maps compared the previous optimized baseline, threat sorting alone, and
sorting plus bypass. Arm order rotated by seed: 24 baseline/sorted/combined,
25 sorted/combined/baseline, 26 combined/baseline/sorted. Each row matched full
protocol and gameplay/action digests. This screening justified retaining both
changes for the broader benchmark; it is a small sample.

| Seed / map | Previous CPU s | Sorted CPU s | Combined CPU s |
|---|---:|---:|---:|
| 24 / 756 | 34.28 | 31.79 | 29.62 |
| 25 / 713 | 43.09 | 40.42 | 37.36 |
| 26 / 739 | 39.73 | 35.26 | 33.08 |

## Twelve-pair benchmark and timing limits

Same recorded cases as the first optimization: three training seeds × four saved
trajectories, spanning 12 existing training maps. Two pairs ran concurrently;
within each pair builds ran sequentially, alternating which ran first. Both
binaries used GCC 15.2 C++17 `-O2`, without fast-math or architecture-specific flags.

| Measure | Previous optimized build | This build |
|---|---:|---:|
| Total native CPU seconds | 479.68 | 406.66 |
| Maximum native peak memory, MiB | 221.38 | 221.38 |
| Matching decision messages | 6,095 | 6,095 |

Median per-pair CPU reduction: 15.3%. Median wall-time reduction:
11.2%. Training, evaluation and some build/test jobs
were active, so scheduling, cache contention and clock variation affect timing.
These are measured samples, not a guarantee for every scenario or an end-to-end
PPO speedup. Replay supplies recorded actions and excludes neural inference and
weight updates.

| Seed / update / episode index | Map | Previous CPU s | New CPU s | Reduction |
|---|---:|---:|---:|---:|
| 24 / 1 / 0 | 756 | 39.56 | 33.19 | 16.1% |
| 24 / 1 / 11 | 732 | 31.34 | 29.26 | 6.6% |
| 24 / 4 / 0 | 709 | 34.30 | 37.25 | -8.6% |
| 24 / 10 / 11 | 737 | 58.31 | 35.59 | 39.0% |
| 25 / 1 / 0 | 713 | 56.17 | 40.16 | 28.5% |
| 25 / 1 / 11 | 701 | 35.94 | 30.74 | 14.5% |
| 25 / 4 / 0 | 750 | 38.19 | 45.42 | -18.9% |
| 25 / 10 / 11 | 731 | 36.56 | 26.18 | 28.4% |
| 26 / 1 / 0 | 739 | 38.30 | 32.07 | 16.3% |
| 26 / 1 / 11 | 759 | 41.50 | 40.58 | 2.2% |
| 26 / 4 / 0 | 740 | 36.12 | 32.02 | 11.3% |
| 26 / 10 / 11 | 729 | 33.39 | 24.20 | 27.5% |

Two initially slower cases (maps 709 and 750) were each repeated twice with build
jobs finished and before/after order reversed. Both the initial slower observations
and repeats are retained; repeats are not substituted into the headline result.
Other training/testing still ran during repeats, so they do not remove all noise.

| Map / repeat | Previous CPU s | New CPU s | Reduction |
|---|---:|---:|---:|
| 709 / 0 | 37.53 | 35.11 | 6.4% |
| 709 / 1 | 35.70 | 29.13 | 18.4% |
| 750 / 0 | 39.94 | 32.63 | 18.3% |
| 750 / 1 | 36.99 | 32.46 | 12.2% |

## Verification and provenance

- 882,432 bit-exact field-cost comparisons against the original pre-optimization
  implementation, for each of sorting alone and the combined change.
- 12/12 complete recorded-action protocol/end comparisons; three screening cases
  and four repeated pairs also matched their recorded outcomes.
- 41/41 historical Legacy/cognition pairs, including the generated-city static
  regression. Stored references and conduct thresholds were not regenerated.
- Full Linux simulator suite passed. Additional final route-test cases passed in
  a targeted run after adding the Fable review's cleared/far/maximal-report cases.
- Three drills trace-on/off pairs and repeat passed; all four digests matched the
  prior optimized source's saved trace checks.
- MSVC native build and route/neural contracts passed. Final expanded route cases
  were rebuilt and passed. Six Windows before/after pairs (three generated cities,
  Legacy and a fixed neural checkpoint against active Legacy) matched within
  Windows. No cross-platform gameplay-digest equality or Windows CPU percentage
  is inferred from those checks.
- Unreal 5.8 editor-module build succeeded. This is a compilation result, not a
  new visual-quality assessment.
- Frozen experiment input hashes remain unchanged, including initial policy,
  training/PPO code and guards. Its executable remains d73667841df73faa-linux,
  SHA-256 `4afbb09ef31f5656def8699d0c2bcb1b6e73e86936a3c03b9fe15ae653cfcc62`. The earlier evaluator spawn adjustment is separate.

Exact Fable 5.1 [design review](../plans/024-command-performance-fable-review.md),
[Astra's corrections](../plans/024-command-performance-next-steps.md), and
[implementation review/disposition](../plans/024-command-performance-implementation-review.md).
Fable found no blocker; Astra performed the tests and benchmarks.

Local evidence and reproduction scripts: `.local/plan024/performance2/`.
`profile/summary.json`, `screen-summary.json`, `replay-summary.json`,
`replay-parity.json`, `repeat-summary.json`, `repeat750-summary.json`,
`historical/parity.json`, `combined-sample-parity.log`, `full-suite.log`,
`routes-final.log`, `trace-comparison.json`, `windows-parity.json`,
`windows-routes-final.log`, `windows-neural.log`, `unreal-build.log`, `integrity.json`.
The original optimized source and executable are preserved in `before/` and
`baseline`. The working source and `.local/lab/battle-lab` now contain this change;
new training runs using that binary benefit, while current frozen workers continue
unchanged.

## How the current neural training works

There are three independent actor/critic training runs (seeds 24, 25 and 26).
Each actor starts from the same imitation weights and is shared by that run's
Azure squads. Its four lean workers collect 24 complete active-Legacy battles
per update with actor weights fixed. The critic estimates expected returns;
elapsed-time advantages guide four PPO passes over minibatches. Clipping and
an imitation anchor constrain updates. Updates can regress; the next weights are
not accepted only when that batch's outcome improves.

Every update is saved; every fifth update is evaluated on separate development
maps. Selection chooses one checkpoint by mean outcome among guard-passing
candidates, then fewer own casualties and deterministic tie breaks. If none pass,
the selected model is diagnostic only. All three final policies plus the selected
checkpoint get fresh-map evaluation. No actor weights are averaged or crossed.
Averaging evaluation scores across seeds is statistical reporting, not a merged
brain. The current experiment does not automatically promote its selected policy.
