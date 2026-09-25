# Exact tactical-ray prefetch optimization — 22 September 2026

Exact Opus 5.5 proposed the change; Astra measured and integrated it; exact Fable
5.1 reviewed its correctness and requested the hint-disabled timing control.
Source **6ff5c2010bc64352** uses **6.7% less native battle CPU time** than
69962220d762ea04 across 12 recorded training cases. Cluster-bootstrap 95% interval:
**3.8% to 9.4% less CPU**. Ten of 12 cases were faster; all full
recorded protocol and outcome checks matched. No gameplay/search/learning settings
changed, and Legacy remains the default controller.

This is an additional measured improvement over the existing optimized build,
not a new end-to-end PPO timing or a percentage to add to earlier measurements.
The completed 40-update training experiment and its final evaluation retain their
frozen d73667841df73faa executable.

## Implementation

TacticalRouteSim.cpp computes the same three unsigned cache-slot hashes before
reading them, requests those cache lines with a hardware prefetch hint, then
performs all three lookups in their original order. Float arithmetic, full keys,
table layout/capacity, cache writes/evictions, geometry revision checks, query
results and observer rays remain unchanged. TacticalRouteSim.h adds one private
method overload. There is no new persistent cache or increased search budget.
GCC/Clang use their prefetch builtin, MSVC x86/x64 the intrinsic, other targets a
no-op fallback. No speedup is claimed for unmeasured platforms.

## Benchmarks and control

| Comparison | Pairs | Control CPU seconds | Candidate CPU seconds | CPU reduction |
|---|---:|---:|---:|---:|
| Current build, 3 cases with reversed repeats | 6 | 155.568 | 146.555 | 5.79% |
| Current build, 12 cases | 12 | 269.676 | 251.653 | 6.68% |
| Hint disabled, 12 cases with reversed repeats | 24 | 511.945 | 490.875 | 4.12% |

The hint-disabled control keeps the same integer batching and overload changes.
Its combined 24-pair interval is [0.34%,
7.82%], with 18/24
pairs faster. The first control pass alone was 4.26% with interval [-0.32%, 8.94%],
so it was inconclusive. The entire 12-case corpus was repeated in reverse order;
both passes are retained in the combined result, not selected by outcome.
The reversed repeat included two large opposite outliers on maps 756/732 while
Unreal compilation was active: 42.13% slower and 30.10% faster than the control.
Compilation/load is a plausible explanation, not a proven cause. Both remain in
the 24-pair figures. With compilation finished, two reversed pairs per case used
4.36% less CPU overall; 4/4
were faster, all exact. These follow-ups are separate, not substitutions into
the headline or combined-control estimate.

This supports a benefit from the hinted implementation on this host; it is not
hardware-counter proof of DRAM/TLB latency or a universal prefetch rule.

All timing runs use uninstrumented GCC 15.2 C++17 -O2 binaries without fast-math or
architecture-specific flags. Two sequentially paired cases run concurrently,
alternating arm order. Other evaluation, compilation and validation jobs run on
the machine, so CPU frequency/cache contention and scheduling remain sources of
noise. Timings include native worker startup and recorded-action simulation;
neural inference and PPO updates are excluded. The intervals describe these
12 case clusters, not all future maps or hardware.

Peak native memory in the broad comparison: current
221.79 MiB; candidate 221.92 MiB.
The two small baseline-relative slower cases remain in the headline totals.

| Training seed / update / episode | Map | Current CPU s | Candidate CPU s | Reduction |
|---|---:|---:|---:|---:|
| 24 / 1 / 0 | 756 | 23.100 | 21.777 | 5.73% |
| 24 / 1 / 11 | 732 | 19.296 | 18.147 | 5.96% |
| 24 / 4 / 0 | 709 | 20.735 | 20.176 | 2.70% |
| 24 / 10 / 11 | 737 | 23.129 | 21.662 | 6.34% |
| 25 / 1 / 0 | 713 | 30.035 | 30.484 | -1.50% |
| 25 / 1 / 11 | 701 | 25.935 | 23.195 | 10.56% |
| 25 / 4 / 0 | 750 | 23.892 | 21.574 | 9.70% |
| 25 / 10 / 11 | 731 | 17.929 | 18.215 | -1.59% |
| 26 / 1 / 0 | 739 | 20.189 | 18.985 | 5.96% |
| 26 / 1 / 11 | 759 | 25.593 | 22.184 | 13.32% |
| 26 / 4 / 0 | 740 | 21.847 | 19.194 | 12.14% |
| 26 / 10 / 11 | 729 | 17.996 | 16.059 | 10.76% |

## New diagnostic measurements

Three existing training maps 756, 713, 739, each with full counter-build protocol
and outcome parity. Instrumented timings are not used for speed claims.

- Shared segment memo: 155,554,470 sight lookups, 69.45% hits; 29,334,931 movement
  lookups, 81.43% hits. Movement had 10,579,450 zero-length queries. Occupied-slot
  misses do not distinguish new queries, capacity pressure and hash conflicts.
- Tactical ray cache: 165,387,309 lookups, 69.64% hits.
  At least one of the first two eye queries missed in
  36.46% of threat-sample loops.
- Opus's initial linked-surface copy proposal had zero calls on all three maps.
  It is archived but not retained or described as a training speedup.

These are software-cache counts. Large table size and cache hit rate alone do
not establish memory-bound execution, CPU-cache misses or a speedup ceiling.
Astra explicitly corrected those overstatements in the review disposition.

## Verification

- 882,432 bit-exact complete route-cost comparisons against the independent old
 reference, including fresh caches, geometry mutation and coordinate boundaries.
- 649,332 exact geometry/path query comparisons; targeted route tests pass.
- All 46 timed recorded-action pairs match decisions, legal observations/masks,
 receipts, rewards, starts, action/gameplay digests, winners and active counts.
 Nine diagnostic replays also match. No final reserved maps were used for tuning.
- 41 historical Legacy/cognition/static-city cases match saved current-build digests;
 stored references and conduct thresholds unchanged.
- Full Linux simulator suite passes under the existing suite lock.
- Three drills trace-on/off cases and a determinism repeat pass, with all four
 final digests matching the previous optimized build.
- MSVC native route and neural contracts pass; six paired Windows battles
 (three cities, Legacy and fixed neural policy) match within Windows.
- Unreal 5.8 module build succeeds. No Windows timing percentage, cross-platform
 gameplay-digest equality or new visual-quality claim is implied.
- 15 frozen experiment input hashes verified unchanged; the previously
 documented evaluator spawn adjustment is excluded. Frozen binary SHA256 remains
 `4afbb09ef31f5656def8699d0c2bcb1b6e73e86936a3c03b9fe15ae653cfcc62`.

## Attribution and availability

[Opus investigation and access limitation](../plans/024-opus55-performance-investigation.md),
[archived patch and notes](../plans/024-opus55-performance/ray-prefetch-notes.md),
[exact Fable review and Astra disposition](../plans/024-opus55-prefetch-fable-review.md).
The first Opus session could not read documents outside its sandbox; they were
copied into the follow-up session, along with fresh counters. Both sessions have
verified exact claude-opus-5-5 identity and successful terminal/model-usage metadata.

Working source and default native Linux/Windows lab now contain 6ff5c2010bc64352.
Unreal was built from that source. The live neural evaluation remains frozen.
Evidence/scripts: `.local/plan024/opus55-performance/`, especially screen/,
broad/, control/, control-repeat/, control-outliers/, control-combined.json, memo-counters.json,
ray-counters.json, linked-counters.json, linux-gates.json, windows-gates.json,
trace-parity.json, unreal-build.log and integrity-final.json.
