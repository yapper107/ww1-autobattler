# Training performance assessment — 22 September 2026

Jordan asks whether battles can run faster while preserving performance. These
bounded probes leave all active experiment code, model settings and native
executables unchanged. They do not establish an implemented speedup.

## Measurements

At the start of inspection each seed had completed 11/40 updates. Recent update
batches took 223–258 seconds, with 24 battles per seed and three seeds concurrent.
Recent training battles averaged about 38 seconds wall time. Native peak memory was
about 386–387 MiB per worker. A two-second host sample reported 99.8% CPU busy across
16 logical CPUs, about 35 GiB available memory and no swap use. This is evidence of
CPU saturation under the current 12 training plus 4 evaluation worker allocation;
more concurrent workers or RAM is unlikely to solve the present throughput limit.

An exact replay of seed 24's first recorded training episode (map 756, combat seed 107)
returned identical gameplay digest, action hash, winner and active counts. It took
41.20 seconds wall time,39.57 native CPU seconds,0.095 Python CPU seconds, and0.056 seconds
of JSON parsing for 431 decisions and 3.17 MB of messages. Replay excludes neural
inference, and its machine load differs from the original rollout, so it does not
measure an end-to-end training speedup. Evidence:
`.local/plan024/long-rl/profile-replay.json`.

A separate microbenchmark used 500 real stored feature rows and the current
update 11 actor/critic, with synthetic critic truth. Packing, actor/critic inference
and sampling took 0.169 seconds with one thread, or 0.453 seconds with four threads
(0.713 CPU seconds). This isolates one small part of training and is not a full
rollout benchmark. Evidence: `.local/plan024/long-rl/profile-inference.json`.

A full 360-second ordinary native battle on map 756, combat seed 107, using seed 24's
update 11 deterministic model and lean recording without evaluation exports took
33.88 seconds of simulation. Its profile attributes:

| Stage | Seconds | Fraction of total |
|---|---:|---:|
| Command logic |26.05|76.9%|
| Soldier decisions |4.98|14.7%|
| Perception |1.54|4.6%|
| Recording |0.66|2.0%|
| Movement |0.43|1.3%|
| Firing |0.17|0.5%|
| Ballistics |0.04|0.1%|

**Tactical search is an inclusive substage, not additional time:** 19.18 seconds,
56.6% of total, 6,113 queries and 552,748 expanded states. The run recorded 64.9 million
sight queries and 73.5 million memo lookups,43.1 million hits. Native profile:
`.local/plan024/long-rl/profile-native/battle-107-1790113651316849023/profile.json`.
This single battle identifies a profiling target; it does not prove the same
fractions hold across every training map and sampled policy trajectory.

## Recommended optimization boundary

Prioritize equivalent tactical-search and geometry-query computation: investigate
repeated visibility work, cache effectiveness and repeated calculations for static
map geometry. Existing memoization already exists, so do not assume adding a cache
alone is new or sufficient. Retain candidate ordering, observations, legal masks,
route outputs, random draw order, time steps, combat mechanics and reward.

Use a separate candidate executable and compare identical recorded-action replays,
including decision observations/masks and final digests, across representative
maps. Then perform the existing parity/contracts and measured throughput comparison
before integrating. Do not swap the frozen simulator in the active 40-update
experiment without an explicit experiment amendment and compatibility evidence.

As an illustrative calculation only, halving a component that takes 56.6% of the
battle would reduce total time by 28.3%, approximately 1.39× throughput; it is not an
achieved or promised speedup. Faster neural inference or a GPU would not address
the largest measured native simulation cost. Reallocating CPUs from evaluation to
training could bring training checkpoints sooner but need not shorten the complete
experiment, since the evaluations still have to run.
