# Fable 5.1 review: exact squad-command performance

Received 22 September 2026 through the project’s dedicated subscription-backed
architect session. The launcher verified successful completion and exact responder
`claude-fable-5-1`; no substitute model was used. Reviewed simulator source:
`cfcd101678649cb2`, HEAD `c760cae7dd15bf827d23f2cab097920ae14fbb16` plus working changes.
Fable read source and existing evidence; it did not run new benchmarks or edit code.

[Request](024-command-performance-fable-request.md).
[Astra’s assessment and corrections](024-command-performance-next-steps.md).
The following response is preserved verbatim; its hypotheses are not all measured
facts. Raw evidence: `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T153842-a4388d5e/`.

---

Read: the two performance documents, Astra's review, `TacticalRouteSim.{h,cpp}`, `SpatialSim.cpp`, the candidate loop and decision block in `ManeuverSim.cpp`, the station scans in `CommandSim.cpp`, `ClearLine3D`/`ClearLine`/`ProtectedAt`, the gprof flat profile and the profile counters for battle 107.

## Where the time goes, from the counters

The battle recorded 64.85 million sight queries, 73.0 million segment-memo lookups with 42.6 million hits, and 6,113 tactical evaluations expanding 552,748 states. A sight query is counted only when `ClearLine3D` runs (`BattleSim.cpp:88`), and `EstimatedVisible` calls it only on a ray-table miss (`TacticalRouteSim.cpp:27`). Perception, firing solutions and station scans cannot account for tens of millions, so nearly all of those 65 million are ray-table misses from `Sample`. Every such miss then pays a second random access into the 64 MiB segment memo (`SpatialSim.cpp:53`), and 42% of those go on to a BVH walk. That is the whole story of the top three profile lines: two DRAM-bound tables in series per ray, then `SpatialIndex::Query`. The hashing is not the cost; the memory latency is. That is also why shrinking the tables lost.

Two consequences for the hypotheses:

- Hypothesis 4 as stated (faster hashing, obstacle traversal) attacks the wrong thing. Fewer table touches per ray is what matters.
- Hypothesis 2 (defer the planner) is exact but negligible: `WithTracks` is 0.05% self and all `Soldier` copies together 0.95%. In battles the map is prepared, so the constructor's cache reset never runs. Do it for tidiness only.
- Hypothesis 3 is bounded. `ProtectedAt` is 0.58% self, and the candidate loop's rays are a small fraction of the 65 million. Measure before building.
- One profile line is suspect: `GeometryKey` at 3.07% cannot execute on a prepared map, since all three callers guard on `prepared` (`EnvironmentSim.cpp:134,237,402`). That is a gprof attribution artefact at -O2. Hypothesis 1 is right and should use `perf record -g` on the optimized binary over three recorded battles, not gprof.

## Change 1: order threats by their bound weight

`Sample` skips a threat when `seen >= confidence × weight` (`TacticalRouteSim.cpp:60`) and takes `seen = max(seen, visible × confidence × weight)`. The final `seen` is a maximum over a set, so it is independent of threat order, and the skip only removes threats whose value cannot exceed the running maximum, so it never changes that maximum. Each threat's `visible` is a count of visible eyes times one third, accumulated in eye order, so it depends only on the count. Sorting `threats` once in the constructor by descending `confidence × weight` (stable sort, ties in original order) therefore yields bit-identical costs while pruning far more threats early, which removes rays entirely. It helps only when two or more threat groups are in range, which is the active-Legacy case. Trap: the constructor must still snap eyes lazily, and the `Distance > 100 + u` skip stays inside the loop. Gate: the existing 441,216-row `Sample` parity harness extended with multi-threat orderings and equal-weight ties, then the 12 recorded replays.

## Change 2: one memory-bound layer per ray

Add two profile-only counters, ray-table lookups and hits, and measure the ray hit rate on the same battle. Then pick one of three exact options:

- If the ray hit rate is low, make a ray-table miss call `IndexedClear3D` directly instead of `ClearLine3D`, so the segment memo is not touched for these keys. Both caches are transparent: the answer is a deterministic function of the endpoints, and a collision recomputes exactly.
- Replace the ray table with a per-threat triple cache keyed by the three eye keys plus the body key, storing the visible count. One lookup per threat per sample instead of three, same 128 MiB footprint at 32-byte entries. On a miss the three `ClearLine3D` calls run in the original eye order.
- Cheapest variant: compute the three eye hashes first, prefetch the three slots, then probe in order. Prefetch has no semantic effect.

Traps: the `sight` and `memo` counters in `profile.json` will change; confirm no parity tool asserts on them (the replay checks compare protocol hashes and digests, which is correct). The ray table is a `mutable` member of the `Map`; the worker re-imports the battlefield on every RESET, so nothing is shared across episodes. Cache revalidation by `map.revision` must stay in whichever layer survives.

## Change 3: per-cover reuse across the five families, if measured

In the shortlist loop (`ManeuverSim.cpp:343-391`) `ProtectedAt`, the firing-angle ray, `FireDanger`, `travel`, `lateral`, `gain` and the approach penalty depend on the cover and the tracked enemy, never on the family. Compute them once per cover, lazily on the first family that reaches the ray stage, and keep the per-family iteration in catalogue order so shortlist order, `flankQualifies` and the stable sort are unchanged. Overlap is only partial (a cover can be in FlankNorth and Press, or FlankNorth and PullBack), so first instrument the sight-counter delta around this loop on a recorded battle. If it is under about a tenth of the total, skip it.

## Retained patch

No behaviour-equivalence defect found in the inspected code. The eye and body snapping preserve rounding, packing and addition order; endpoints initialise only after the original bounds; the crouched body is not reused for the observer query; threat weights are pure functions of the copied contact and fixed time. The 12 replay hashes and the field-cost harness are the right evidence and they passed.

## Order, measurements, gates

1. Counters plus a `perf` profile of the optimized binary on three recorded battles, including ray hit rate, rays per `Sample`, and the shortlist loop's share of sight queries. No speedup estimate before this.
2. Change 1. Gate: extended `Sample` harness, 12 replay protocol hashes and digests, 41 historical pairs, full suite, trace pairs, paired whole-battle CPU with alternating order.
3. Change 2, option chosen from the measured hit rates. Same gate, plus peak memory.
4. Change 3 only if step 1 justifies it. Same gate.

Every change touches only `TacticalRouteSim.*`, `SpatialSim.cpp` or the candidate loop; none alters budgets, candidate counts, query answers, random draws or the actor's knowledge. The frozen experiment binary stays as it is.
