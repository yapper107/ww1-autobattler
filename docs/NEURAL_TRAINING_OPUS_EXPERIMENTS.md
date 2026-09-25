# Four Opus performance experiments — 22 September 2026

**No candidate retained.** Two cache experiments were consistently slower; the broader check found no reliable gain from ordinary path smoothing and a slowdown from near-first obstacle traversal. The verified current build remains `69962220d762ea04`.

## Agents and isolation

Jordan requested four Opus 5.5 agents with Opus 5 as the explicit fallback. The Opus 5.5 probe returned a service error requiring Claude Code 2.1.280 or newer; this host has 2.1.275. Opus 5 succeeded. Four independent implementation sessions completed with exact `claude-opus-5` assistant metadata and successful terminal results. No client, account, billing or model settings were changed.

Each agent edited its own source copy starting from the same current working source, preserving uncommitted user work. Astra built and tested all four. The two SpatialSim proposals used separate files and were never mixed during individual measurements. The [experiment plan](../plans/024-four-opus-performance-experiments.md) and [Fable implementation review with Astra corrections](../plans/024-four-opus-performance-fable-review.md) record scope, ownership and review.

## Repeated three-map screen

Three already-used recorded training maps (756,713,739), two runs of each baseline/candidate, order reversed on the second pass: 30 full battles, six paired blocks per candidate. Positive numbers below mean less CPU; negative numbers mean more CPU.

| Candidate | CPU reduction | Faster blocks | Measured peak MiB | Decision |
|---|---:|---:|---:|---|
| Reverse ordinary path-smoothing scan | +0.65% | 4/6 | 221.93 | Broadened: small effect |
| Group tactical rays in four-way cache-line sets | -11.04% | 0/6 | 221.81 | Rejected: slower in every block |
| 128 KiB inclusive segment front cache | -3.62% | 0/6 | 221.98 | Rejected: slower in every block |
| Near-first any-hit obstacle traversal | -1.19% | 2/6 | 221.73 | Broadened: small effect |

Screen baseline total CPU: 136.811 seconds across its six runs. Baseline peak: 221.71 MiB. Small RSS differences include allocator/process noise; no substantive memory saving was established.

## Broader check of the two small effects

Twelve predeclared recorded training cases: seeds24/25/26 × (update1 episode0, update1 episode11, update4 episode0, update10 episode11). Baseline plus two candidates in rotated order, three concurrent blocks: 36 more full battles.

| Candidate | Baseline CPU s | Candidate CPU s | CPU reduction | Faster cases | Descriptive 95% bootstrap interval |
|---|---:|---:|---:|---:|---|
| Reverse ordinary path-smoothing scan | 253.072 | 251.854 | +0.48% | 7/12 | [-0.10%, +1.14%] |
| Near-first any-hit obstacle traversal | 253.072 | 254.128 | -0.42% | 3/12 | [-1.07%, +0.39%] |

## Final smoothing confirmation

One further full 12-case baseline/smoothing repeat added 24 battles. It measured 1.31% less CPU, with its descriptive 95% interval [-0.24%, +2.87%].

Combining the two full-corpus passes gives **0.96% less CPU** (606.848 -> 600.993 CPU seconds), faster in **15/24** paired runs. Resampling the 12 cases with both repetitions kept together gives **[-0.12%, +2.13%]**. The interval still includes a slowdown. This is a promising small point estimate, not a demonstrated repeatable improvement; the candidate is parked, not installed.


The smoothing result does not demonstrate a repeatable CPU gain on the broader workload. The traversal experiment used slightly more CPU overall and demonstrated no gain. We retain neither merely because the source-level idea is plausible. No stack was built: there are no individual survivors to combine.

Intervals resample recorded case clusters with a fixed seed, retaining repeated screen observations together. They describe these timing samples, not a guarantee of future workloads. Screen has only three unique maps. Training and development evaluation continued in the background; CPU frequency/shared-cache contention can affect CPU time. No end-to-end training-speed claim follows from these replay measurements.

## Exactness and review evidence

- All four candidates compiled and passed 882,432 bit-exact route-field comparisons each against the original pre-optimization Sample implementation.
- Each matched the baseline hash across 649,332 ray/query/path checks: repeated exact keys, kinds and padding, zero-length/vertical/tangent/signed-zero cases, replaced and removed geometry, prepared/unprepared paths, and imported city paths.
- All four passed the existing targeted route test group.
- All 90 benchmark battles matched saved training outcomes. Every paired candidate matched full decision/receipt/reward/start message hashes, legal actions, gameplay/action digests, winners and active counts.
- Fable 5.1 reviewed all four implementations. It found no current-call blocker; it requested a copy/lifetime safeguard before retaining the visibility cache and documentation of the sign-only any-hit query contract before retaining traversal. Those rejected candidates were not installed.
- The original Sample oracle now uses a separate reference cache type/storage, avoiding a C++ one-definition-rule conflict when the candidate changes its cache layout. This changes the testing harness storage only, not the reference arithmetic.
- No candidate reached retention, so there was no reason to run the full simulator suite, 41 historical pairs, drill traces, Windows parity or Unreal build on these rejected changes. Those gates are not claimed for this round.

## GeometryKey follow-up

A scratch current-build replay of map756 counted calls at all three GeometryKey sites: cover0, floor0, linked0. It matched the recorded battle. The earlier 5.69% sample label therefore does not establish geometry-hashing cost in that case; address/symbol attribution needs further work. Compiler-generated heap helpers follow that symbol. No geometry-hashing fix was made, and this one-map counter does not prove the same attribution on every other map.

## Preserved state and reproducibility

Production simulator files and fingerprint `69962220d762ea04` are unchanged. Current lab executable and frozen training executable SHA-256 hashes match their pre-experiment values. Training settings/opponent are unchanged; no neural policy was promoted.

Evidence root: `.local/plan024/performance-round3/`. It contains exact model probes and four model-attributed streams, immutable baseline, isolated implementations, build/benchmark scripts, individual raw timing/protocol records, screen and broad summary JSON, focused check logs, geometry counter replay and integrity verification. Use build_candidate.py/check_candidate.py for a candidate; benchmark.py runs the common corpus. Source snapshots include existing uncommitted work, so do not reconstruct them from git HEAD alone.

Original agent patches and notes are archived below. Notes are author hypotheses; timing evidence and Astra/Fable dispositions above take precedence.

- smoothing: [patch](../plans/024-opus-performance/smoothing.patch), [Opus 5 notes](../plans/024-opus-performance/smoothing-agent-notes.md).
- visibility: [patch](../plans/024-opus-performance/visibility.patch), [Opus 5 notes](../plans/024-opus-performance/visibility-agent-notes.md).
- memo: [patch](../plans/024-opus-performance/memo.patch), [Opus 5 notes](../plans/024-opus-performance/memo-agent-notes.md).
- obstacles: [patch](../plans/024-opus-performance/obstacles.patch), [Opus 5 notes](../plans/024-opus-performance/obstacles-agent-notes.md).
