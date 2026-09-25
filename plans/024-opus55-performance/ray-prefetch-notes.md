# Opus 5.5 follow-up: one exact candidate, not measured

Source: `69962220d762ea04` (this copy). The first candidate (`FindLinkedSurfacePath`) is **not** reimplemented here. Astra's zero-call count on map 756 rules it out for that case.

## Candidate: prefetch the three tactical eye-ray slots in `TacticalRoutePlanner::Sample`

Files touched:
- `Sim/TacticalRouteSim.cpp`
- `Sim/TacticalRouteSim.h`: one private overload declaration.

No other file changed.

### Change
- **Shared hash.** `TacticalVisibilityCache::Slot(a,b)` holds the existing hash expression, character for character. The old expression was inline in `EstimatedVisible`.
- **New overload.** `EstimatedVisible(from,to)` now forwards to `EstimatedVisible(from,to,slot)`. The body is unchanged: allocation/revision check, then the entry compare, then `IndexedContact` or `ClearLine3D` on a miss, then the entry write.
- **Prefetch in `Sample`.** For each threat that reaches the eye loop:
  1. The three slots are computed once.
  2. If the table exists and is current, one prefetch hint is issued per slot.
  3. The three lookups run in the original order, using the precomputed slots.
- **No duplicate hashing.** Each slot is hashed once, as before.
- **Portability.** GCC and Clang (including clang-cl and MinGW) use `__builtin_prefetch`. MSVC x86/x64 uses `_mm_prefetch` from `<xmmintrin.h>`, included only for that configuration. Any other target gets a no-op. The helper is a static member of this file's own struct, so it cannot collide with other names in an Unreal unity build.

### Why this site (source reasoning, not measured)
- **Hot function.** `EstimatedVisible` has 15.60% sampled self time. That is third place, and it has no children on the hit path.
- **Memory-bound.** The table is 8,388,608 × 16 B = 128 MiB. That is far larger than any cache, so a hit is usually a DRAM (and often TLB) miss. The self time is mostly load latency, not arithmetic.
- **No wasted prefetches.** In `Sample` all three eye rays for a threat are always looked up; there is no early exit. The inputs (`ct.eyes[i].packed`, `body.packed`) are already computed before the loop.
- **Where the gain comes from.** On a miss in eye 0 or 1, `IndexedContact` runs a BVH traversal before the next lookup is even issued. The later eyes' DRAM loads are then serialized behind it. With the hint they are already in flight. When all three hit, the out-of-order core may already overlap the loads, so the gain there may be near zero.

### How this differs from rejected work
- **Four-way cache-line sets (−11%).** That changed table layout, associativity and eviction. This candidate leaves layout, capacity, slot choice, eviction and stored contents bit-identical. Only a hardware load hint is added.
- **Three-eye ray reuse (slower).** That changed which lookups happen. Here the same lookups happen in the same order.
- **Front cache, smaller caches, near-first traversal.** None of those is touched.

### Exactness argument
- **Pure hints.** Prefetch instructions cannot fault and do not change program-visible state.
- **Same slots.** Slot indices are the same expression on the same `uint64_t` inputs.
- **Same lookups.** Lookups, misses, `IndexedContact`/`ClearLine3D` calls, `queryProfile->sight` increments and entry writes happen in the same order with the same arguments. So hits, misses and evictions are identical, including when two eyes collide on one slot. The hint is issued before eye 0 can overwrite anything, but it only moves cache lines; the lookups re-read memory.
- **No allocation from the hint.** The hint runs only if `map.tacticalVisibility` already exists and has the current revision. Otherwise nothing is prefetched, and the first `EstimatedVisible` allocates exactly as before.
- **Geometry invalidation.** The prepared/unprepared reset in the constructor and `InvalidateGeometry` are unchanged.
- **No float changes.** No float arithmetic was added or moved. `visible`, `seen`, the bound skip, costs, paths, observations/masks, RNG, rewards and outcomes are unaffected.
- **No memory added.** Just a 24-byte local array.

### Risks and what is not known (honest limits)
- **Nothing compiled, run or timed.** There is no shell in this session, and no test result is claimed.
- **The gain may be zero.** If the hit path dominates and out-of-order execution already overlaps the three loads, the benefit is roughly nil. It could also be slightly negative from the extra branch and the loss of the old inline hash. I expect a small effect at best: a few percent of `EstimatedVisible` self time, which is under about 1% total CPU. That is near the noise floor Astra measured (the 0.96% smoothing result was inconclusive). **The expected value is modest; treat this as a cheap screen, not a likely win.**
- **Hit/miss split unknown.** The fraction of `EstimatedVisible` calls that miss is not in `memo-counters.json`, because `EstimatedVisible` bypasses `MemoisedSegment`. That split decides whether any gain is possible.

## Suggested measurement (Astra)
1. **Cheap relevance counter first** (scratch build, same 3 maps):
   - Count `EstimatedVisible` lookups and hits.
   - Count per-`Sample` eye loops where at least one of eyes 0/1 missed.
   - If that per-loop miss count is well under about 10% of loops, drop the candidate without a timing run.
2. **Exactness:** run the existing 649,332 ray/query/path hash check plus route-field comparisons. Replay the 3 recorded battles for full protocol/outcome parity.
3. **Timing:** run the three-map screen as in round 3 (six paired blocks, order reversed). Broaden only if it is faster in at least 5/6 blocks.

## Other hypotheses reviewed and not implemented (source reasoning only)
- **`MemoisedSegment` (26% self).** At about 185M lookups over 22.7 s, that is roughly 120 ns per lookup, which points to serialized DRAM misses. The same prefetch idea could apply to `ProtectedAt`'s six body rays (BattleSim.cpp:103). There, though, the loop exits early on the first clear ray, so prefetches can be wasted. It also means recomputing the six `nearEnd` endpoints ahead of the loop, which moves float code and needs an FMA-contraction check. I kept it out to hold to one candidate. It is the natural second screen if this one shows any signal.
- **Zero-length movement lookups (10.6M).** `Walkable` → `ClearLine(p,p)`.
  - Skipping the memo would replace a roughly 120 ns probe with a BVH point query plus `Supported`. That is not clearly cheaper, so I did not do it.
  - The redundant double `Supported` on a miss is exact to remove. But `ClearLineCompute`/`Supported` do not appear in the top sampled functions (each is under 0.81%), so any gain is unmeasurable. Rejected as a nominal cleanup.
- **`GeometryKey`.** Measured as zero calls on map 756. Nothing to do.
