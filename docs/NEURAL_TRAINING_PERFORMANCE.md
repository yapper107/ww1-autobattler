# Neural training battle performance — 22 September 2026

The retained optimization used **15.9% less native simulation CPU time**
across 12 paired, recorded-action training battles. Every tested observation,
legal-action mask, receipt, reward and final gameplay/action digest matched the
original. Full Linux simulator and historical parity checks passed. This is a
speed improvement with identical tested behavior, not an improvement to the
policy's tactical strength.

## Measured result

Original source: `d73667841df73faa`; optimized source: `cfcd101678649cb2`.
Both use GCC 15.2, C++17, `-O2`, without fast-math or architecture-specific flags.
The benchmark replays recorded actions from training seeds 24, 25 and 26, using
iterations 1, 4 and 10 on existing training maps. It does not open final evaluation
maps or change the ongoing experiment.

| Measure | Original | Optimized |
|---|---:|---:|
| Total native CPU seconds, same 12 battles | 504.46 | 424.28 |
| Sum of individual battle wall seconds | 663.08 | 553.05 |
| Maximum reported native peak memory, MiB | 221.46 | 221.53 |
| Policy decision messages | 6,095 | 6,095 |

Median per-battle CPU reduction: 14.8%. Median paired wall-time
reduction: 14.5%. The total CPU ratio is the ratio of summed CPU times,
not the average of percentages. Two replay pairs run concurrently, alternating
which binary runs first. Background training and other verification were active;
wall time is noisier than process CPU time. Summed wall seconds are not the elapsed
duration of the concurrent benchmark.

This measures native training-battle work plus worker startup. Replay supplies the
original actions, so it excludes neural inference and PPO updates. The exact
end-to-end training reduction has not been measured, and is not guaranteed to equal
the native CPU reduction. Inference was small in the earlier profiling probe.

| Training seed / update / episode index | Map | Original CPU s | Optimized CPU s | Reduction |
|---|---:|---:|---:|---:|
| 24 / 1 / 0 | 756 | 42.40 | 36.63 | 13.6% |
| 24 / 1 / 11 | 732 | 33.88 | 28.45 | 16.0% |
| 24 / 4 / 0 | 709 | 37.35 | 32.38 | 13.3% |
| 24 / 10 / 11 | 737 | 45.94 | 36.61 | 20.3% |
| 25 / 1 / 0 | 713 | 49.65 | 43.45 | 12.5% |
| 25 / 1 / 11 | 701 | 45.68 | 36.50 | 20.1% |
| 25 / 4 / 0 | 750 | 46.56 | 40.91 | 12.1% |
| 25 / 10 / 11 | 731 | 37.35 | 30.33 | 18.8% |
| 26 / 1 / 0 | 739 | 39.79 | 35.89 | 9.8% |
| 26 / 1 / 11 | 759 | 49.55 | 39.11 | 21.1% |
| 26 / 4 / 0 | 740 | 41.82 | 36.42 | 12.9% |
| 26 / 10 / 11 | 729 | 34.50 | 27.62 | 20.0% |

## What changed and why behavior is preserved

Tactical route scoring repeatedly rounds and packs the same reported enemy eye
positions for visibility checks. Each planner now reuses those exact endpoints
and fixed report weights; each sampled body position is rounded and packed once.
Initialization stays behind the original query bounds. Crouched exposure uses
0.9 m and observer visibility still uses 1.5 m. The actor's knowledge remains a
private snapshot. Geometry cache invalidation, query order, hash, capacity and
replacement rules remain unchanged.

Only `TacticalRouteSim.cpp` and `.h` changed for this optimization. Route search
budgets, candidates, ordering, time steps, combat mechanics, random draws, rewards,
training settings and conduct thresholds are unchanged. The two unsuccessful
prototypes were removed. See [implementation plan and discarded experiments](../plans/024-exact-route-performance.md).

## Verification

- **12/12 recorded-action pairs**, including full canonical decision, receipt,
  start and reward message hashes, action/gameplay digests, winner and active counts.
  Each also matched its original recorded training outcome.
- **41/41 historical pairs**: 40 Legacy/cognition authored-map battles plus one
  generated-city static-defence regression. Candidate decision recording remained
  passive; stored reference manifests were not regenerated.
- **441,216 bit-exact field-cost comparisons** against the original implementation:
  three map fixtures, three doctrines, standing/crouched soldiers, random samples,
  quarter-metre rounding boundaries, elevations, no threats, distant skipped
  threats, contact-merge ties and geometry mutation.
- **Full Linux simulator suite passed**, including route, neural, geometry,
  combat and controller contracts. The full suite used the existing machine-wide
  suite lock. No assertions or thresholds were weakened.
- **Three drills trace-on/off pairs and a determinism repeat passed on each binary**;
  all four corresponding final gameplay digests also matched across binaries.
- **15 frozen training input hashes unchanged**, including the active binary,
  initial model, PPO/training code and conduct guards. The previously documented
  evaluator spawn-method adjustment predates this optimization.

The [independent Astra review](../plans/024-route-performance-astra-review.md)
found no remaining gameplay-equivalence defect by source inspection; its lazy
initialization finding was addressed. Fable was unavailable in this session
(read-only launcher state and failed subscription connections), so no new Fable
approval is claimed. New Windows/Unreal builds were unavailable because Windows
interop failed in this sandbox; the Linux result does not claim Windows timing
or a new Unreal build result.

## Availability and reproduction

The verified executable is installed at `.local/lab/battle-lab`, and the source
change is in the working checkout for future builds. The ongoing 40-update
experiment continues using its frozen `d73667841df73faa` executable. Its current
workers were not restarted or silently upgraded, preserving experiment provenance.
Future training runs using the new binary receive the optimization.

Local evidence and exact scripts: `.local/plan024/performance/`. Key files:
`paired_replays.py`, `replay_check.py`, `replay-summary.json`, `replay-parity.json`,
`historical/parity.json`, `sample_parity.cpp`, `sample-parity.log`,
`full-suite.log`, `full-suite-resource.txt`, `trace-comparison.json`, `integrity.json`
and the original two source copies under `before/`. `build.py` and `build_tests.py`
limit compilation to two jobs alongside the active experiment. The custom test
link uses the same simulator translation units and test controls as the standard
suite; only the compilation scheduling differs.

To repeat the recorded-action check after the local experiment is available:

```bash
python3 .local/plan024/performance/paired_replays.py
python3 -m tools.neural.verify \
  --baseline .local/plan024/long-rl/bin/battle-lab \
  --expected-baseline d73667841df73faa \
  --binary .local/plan024/performance/battle-lab \
  --out .local/plan024/performance/historical-repeat --jobs 2
```

These results establish equivalence for the exercised cases and inspected domain;
they are not an exhaustive proof for every possible scenario or malformed input.

## Subsequent architectural review

After full filesystem and network access was enabled on 22 September, Fable 5.1
completed the [requested review](../plans/024-command-performance-fable-review.md)
and found no behavior-equivalence defect in the retained patch.
[Astra’s disposition](../plans/024-command-performance-next-steps.md) accepts the
next measurement/experiment order and corrects unsupported profiling inferences.
This supersedes the consultation-availability limitation above; the reported
measurements and outstanding Windows/Unreal verification are unchanged.

## Second optimization and platform follow-up

The [second performance report](NEURAL_TRAINING_PERFORMANCE_2.md) records an
additional measured gain, exact parity and Windows/Unreal validation of the newer
combined source `69962220d762ea04`. Its timing baseline is this report’s optimized
source; the two reduction percentages are not additive.
