# Fable 5.1: further exact simulator optimization — 22 September 2026

[Request](024-further-performance-fable-request.md). Current simulator source
`69962220d762ea04`, HEAD `c760cae7dd15bf827d23f2cab097920ae14fbb16` plus working
changes. Exact assistant model `claude-fable-5-1` verified from all assistant
messages and successful terminal result/model usage. Subscription launcher;
no billing or model settings changed. Raw evidence: `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T163036-733b890c/`.

This is a source review and proposed experiments, not implemented improvements
or new performance measurements. [Astra disposition and experiment order](024-further-performance-next-steps.md)
records corrections to the claims below. Fable's response follows verbatim.

---

Read: `NEURAL_TRAINING_CURRENT_PROFILE.md`, `summary.json`, the aggregate flat profile, `SpatialSim.cpp`, the current `TacticalRouteSim.cpp` sampling loop, the three `GeometryKey` sites and the per-soldier ray callers in `BattleSim.cpp`.

## What the counters say now

Per battle (three-battle totals divided by three): about 69 million sight queries, 62 million memo lookups at 71% hits, so about 18 million misses reach `SpatialIndex::Query`, each visiting roughly 19 to 22 nodes (the earlier `overlaps` counters). The tactical sampler evaluates about 23 million threat-samples per battle and issues three ray probes for each, which is the 69 million ray-table probes behind `EstimatedVisible`'s 15.6% self time. Everything in the top three lines is one random table access or one tree walk per call. The exact levers left are: fewer probes per unit of information, fewer misses at equal memory, and fewer nodes per walk. Ranked:

## 1. One probe per threat-sample instead of three (strongest, mechanical)

**Evidence.** All three eye rays of a threat are always queried together (`TacticalRouteSim.cpp:76-83`), and the measured ray hit rate is 69 to 73%. So on a hit the sampler pays three 128 MiB-table accesses to learn one number in {0, 1, 2, 3}.

**Change.** Replace the per-ray table with a per-threat table keyed by the four snapped points (three eyes plus body, 4 × 48 bits = 24 bytes) storing the visible count; 4M entries × 32 bytes keeps the 128 MiB footprint. On a miss, run the three rays in eye order exactly as now (`IndexedContact` on prepared maps, `ClearLine3D` otherwise), store the count, and rebuild `visible` by the same `+= 1.f/3` loop the count times, so the float sum is bit-identical. Keep the observer ray as it is; it is one probe per sample within 20 m and is not worth a second structure. Revision revalidation stays on the table as today; the constructor's unprepared reset stays.

**Equivalence.** The count is a pure function of the three exact ray answers, which are pure functions of the snapped endpoints and geometry revision. Probe count falls from 3 per evaluated threat to 1; miss work is unchanged.

**Decisive check.** Counter of table probes before and after (expect about 69M to 23M per battle), the 882,432-row `Sample` oracle, replay parity, paired CPU.

## 2. Fewer memo misses and cheaper hits at equal memory

**Evidence.** `MemoisedSegment` is 26% self at 62 million lookups per battle: about 120 ns each, the cost of one random access into a 64 MiB direct-mapped table (`SpatialSim.cpp:40-58`). What is not yet measured is *why* the 29% miss: cold keys or conflicts, and how far apart the hits are in time.

**Measure first (scratch build only).** In `MemoisedSegment`, classify each miss as empty slot, same-kind different key, or different kind; and for each hit record the reuse distance in lookups since the entry was written. Two histograms decide between:

- **4-way set-associative table at the same 64 MiB** if conflict misses are a large share: each set is two adjacent cache lines, replacement by the oldest write. Answers are unchanged because the memo is transparent; only the miss count changes. Do not shrink the table; that experiment already lost.
- **A small exact-key front cache (about 4,096 entries, L2-resident)** if most hits recur within a few thousand lookups, as they would for the per-tick perception pairs of stationary soldiers and for the repeated rays of `RevealedAhead` every half second (`BattleSim.cpp:1385`).

Do not store a hash tag instead of the 28-byte key: a tag collision would return a wrong answer, which breaks exactness.

**Also under this heading, an exact query-count reduction:** the legacy string-pulling loop in `FindFloorPath` (`EnvironmentSim.cpp:304-311`) tests every later node to find the furthest clear one. Scanning from the end backwards and stopping at the first clear node returns the same `furthest` with never more, and usually far fewer, `ClearLine` calls. Note the imported-endpoint smoothing (`:359-363`) uses a different prefix rule and must not be changed. Count smoothing `ClearLine` calls per battle before deciding whether it matters.

## 3. Cheaper `SpatialIndex::Query` walks

**Evidence.** 18.6% self plus 4.7% in `SegmentObstacle`, about 20 node tests per query.

**Exact options.** For `any` queries the result is a boolean, so visiting the child whose slab interval starts nearer to `a` first is exact and finds blockers sooner; for min queries the minimum is order-independent. A different build (leaf size 4, or a surface-area split instead of the median) changes which nodes are visited but not which obstacles are hit, so it is exact for both modes. Convert the recursion to an explicit stack. **Not exact:** replacing the slab division by a reciprocal multiply; rounding differences at tangent boundaries could skip a node holding a real hit.

**Decisive check.** The existing `overlaps` counter per query before and after; the same parity suite.

## GeometryKey, measured not dismissed

All three callers are guarded by `m.prepared` (`EnvironmentSim.cpp:134,237,402`), and every map a training battle touches comes from `ImportBattlefield`, which calls `PrepareGeometry`. So either an unprepared copy exists that I could not find by reading, or the samples belong to symbol-less code laid out after `GeometryKey` in `.text`. Decide it in one scratch run: a call counter per call site inside `GeometryKey` recording `obstacles.size()` and `linkedSurfaceRouting`, plus `nm -n` on the `-pg` executable to list what follows the `GeometryKey` symbol. If calls are nonzero the fix is exact and small once the copy is found, since `revision` already identifies prepared geometry; if zero, reattribute the 5.7% to its true neighbour before targeting it.

## Not worth pursuing on this evidence

- Deferring planner construction: `WithTracks` and `Soldier` copies total about 1.2%.
- Cross-family cover reuse in the shortlist: 4 to 5% of sight queries.
- Removing the segment memo or shrinking either table: measured losses or 71% hits.
- A faster A* heap: exact only if the `(f, node)` total order is preserved exactly; yield is a fraction of 7%.
- `DigestCore` and lean recording: the hash must stay identical.

**Order:** the counters in section 2 and the `GeometryKey` probe first (one scratch build), then item 1, then whichever of the section 2 structures the histograms select, then item 3. Each step gated by the oracle, the 12 replay pairs, the 41 historical pairs, full suite, trace pairs, Windows parity and Unreal build, with alternating-order CPU timings.
