# Next command-performance experiments: Astra/Fable disposition

22 September 2026. Jordan requested Fable’s review, which has now succeeded after
filesystem/network access was enabled. [Actual attributed response](024-command-performance-fable-review.md).
This document records reviewed experiments, not another implemented speedup.
The verified source remains `cfcd101678649cb2`, and the live duration experiment
continues on its frozen `d73667841df73faa` binary.

## Accepted direction

First re-profile the optimized build across three existing recorded training
battles. Prefer sampling with `perf` if available, with profiling-only counters
for tactical-ray lookups/hits, downstream segment-cache lookups/hits attributable
to those misses, rays per sample, and the candidate loop’s ray/CPU contribution.
Measure whole-battle CPU and wall time. Keep instrumentation separate from the
candidate timed for acceptance, and verify instrumented behavior is unchanged.
Do not open the reserved final maps for performance tuning.

The first behavioral-equivalence experiment should be **descending threat-bound
order inside one planner**. Retain the current contact grouping/replacement order;
only sort the resulting threat groups, stably, by the existing confidence × weapon
weight upper bound. Stronger bounds considered first can let the existing maximum
skip more lower-bound threats. Preserve each threat’s three-eye accumulation,
weights, distance checks and lazy endpoint conversion. The argument depends on
finite nonnegative weights, exact visibility results and monotone floating-point
operations. Measure the actual pruning gain; do not assume it helps every map.

Then investigate repeated visibility-cache access using the measured call-site
and hit-rate data. Candidate experiments are prefetching existing three ray slots,
a correctly keyed cache of the three-eye visible result, or selectively bypassing
the segment memo for tactical rays. Test one change at a time. Retain geometry
revision checks, exact endpoint identity and bounded memory. A triple cache must
include all three eye keys and the body key; retain the original visibility
accumulation arithmetic. Counters and query/cache access order may change, while
observations, legal masks, costs, routes, decisions, RNG, rewards and gameplay
must match.

Treat planner deferral and shared per-cover values as secondary until inclusive
profiling justifies them. Keep the five families and catalogue iteration order,
stable ties, candidate counts and existing assessment lifetime. Do not revive the
flat regional-copy prototype or the slower smaller-cache prototype as established
wins.

## Corrections and safeguards to Fable’s claims

1. **Memory latency is a hypothesis, not an established cause.** The flat profile
   attributes sampled CPU to functions, not stalled memory cycles. It does not
   prove hashing is cheap or that table latency explains the entire hotspot.
   Smaller tables losing could also reflect more misses and recomputation.
   Confirm with counters/hardware sampling where available before choosing a fix.
2. **Global sight counts do not identify their callers.** We cannot attribute
   almost all 64.85 million queries to tactical ray-table misses from the current
   counters. Cover/protection and other command code also call `ClearLine3D`.
   The overall segment-memo hit rate is not necessarily the conditional hit rate
   after a tactical-ray miss. Add call-site attribution instead of assuming it.
3. **Self time does not bound inclusive time.** Low self time for `ProtectedAt`
   does not include the visibility functions it calls. Likewise `WithTracks` and
   Soldier-copy self time alone do not quantify planner setup/allocation costs.
   Fable’s priority change is plausible, but the proposed tiny payoff is unproven.
4. **GeometryKey attribution needs investigation.** Its visible callers bypass
   it when `map.prepared` is true. The existing profile alone does not establish
   that every map passed to those callers was prepared. Check call paths/map
   state and a fresh profile before calling the sample an attribution artifact.
5. **Memo bypass can be slower and needs an explicit interface.** The second cache
   can save obstacle-tree walks after an outer-cache miss. `IndexedClear3D` is
   currently private to `BattleSim.cpp`; preserve the prepared/unprepared dispatch,
   exact geometry semantics and revision handling in any exposed query. Do not
   directly bypass the fallback for unprepared maps. Prefetch must not reuse stale
   entry references across cache allocation/invalidation.
6. **Planner deferral must retain side effects.** Its constructor resets route and
   visibility caches on unprepared maps. A deferred construction must preserve
   that behavior rather than assume the normal prepared case is the only caller.

Fable found no behavior-equivalence defect in the retained endpoint-reuse patch.
That is an architectural source review supported by the existing tests, not new
independent execution evidence. Its 15.9% measured CPU reduction remains the only
newly established performance gain in this phase.

## Acceptance for every retained experiment

Extend the original bit-exact Sample comparison with varied multi-threat orders,
equal weights, skipped distant threats, partial visibility and both stances. Keep
rounding/geometry invalidation cases. Require the 12 recorded training replays to
match complete decision/receipt/reward messages and final gameplay/action digests;
then 41 historical pairs, full simulator suite, drills trace checks/repeat and
matched whole-battle timings with alternating order. Include peak memory and
repeat sufficient timing cases to distinguish improvement from scheduling noise.
Do not weaken guards, budgets or candidate counts. New Windows/Unreal checks remain
outstanding for the retained optimization; access is now available to attempt them
when that validation is resumed.

No code, training configuration, opponent or frozen executable was changed by
this consultation. Astra owns implementation and must retain only measured wins.

## Implemented follow-up

The scoped threat-order and tactical-cache-bypass experiments are now implemented
and validated on source `69962220d762ea04`. See [results, timing variability and
platform verification](../docs/NEURAL_TRAINING_PERFORMANCE_2.md). The earlier
sections record the pre-implementation plan and corrections.
