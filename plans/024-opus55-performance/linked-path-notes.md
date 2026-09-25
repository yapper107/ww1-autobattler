# Opus 5.5 exact-performance investigation — source 69962220d762ea04

## Access caveat (read first)
The file tools in this session are restricted to this directory. The four
reference documents (`docs/NEURAL_TRAINING_CURRENT_PROFILE.md`,
`docs/NEURAL_TRAINING_OPUS_EXPERIMENTS.md`,
`plans/024-further-performance-next-steps.md`,
`plans/024-four-opus-performance-fable-review.md`) **could not be read**. That
means I could not check them directly. My only knowledge of the prior work comes
from `request.md`: four candidates failed, GeometryKey attribution is suspect,
the command stage is 68% and soldier decisions are 21%. **Before benchmarking,
Astra must check that none of the four prior candidates touched
`FindLinkedSurfacePath`'s path matrix.** If one did, discard this candidate.

## Candidate (one, implemented in the copy)
**`Sim/EnvironmentSim.cpp`, `FindLinkedSurfacePath`: stop deep-copying the cached
endpoint-to-endpoint path matrix on every call.**

This is the only touched path. No header, struct layout or other file changed.

### Evidence from source
- On imported maps (`linkedSurfaceRouting && !surfaceLinks.empty()`), every
  `FindPath` call goes to `FindLinkedSurfacePath` (EnvironmentSim.cpp:447).
- Same-floor queries return early when `ImportedFloorPath` finds a route. All
  other queries fall through to the matrix build. That covers cross-floor
  queries (trench z≈-1.4 to grade z=0, ramps, upper floors) and same-floor
  queries with no direct route.
- Before this change, each fall-through call:
  - allocated `n*n` `std::vector<Vec3>` objects, where `n = 2 + 2*links`;
  - **copy-assigned all `count*count` cached `surfacePaths` into them**, which
    means one heap allocation and memcpy for each non-empty leg;
  - freed all of them at return.
  The cache itself (`NavigationCache::surfacePaths`) is revision-owned and
  never changes after `surfaceReady`. The per-call copy was pure overhead.
- `TacticalRoutePlanner::Evaluate` calls `FindPath` directly for cross-floor
  queries and again for its `incumbent` (TacticalRouteSim.cpp:161,167).
  `RegionalPath` calls it per start, edge and tail. `FindPath` also has about 50
  call sites across command, coordination, recovery and drill code. So this runs
  inside the 68% command stage whenever an actor or destination sits off grade.
  **I have not measured how often that happens.** See the counters below.

### Change
- `paths` is now `std::vector<const std::vector<Vec3>*>(n*n, &none)`.
- The two per-query attachment legs per endpoint go into a local
  `attached[count*2]`. It is sized once and never resized after pointers are
  taken.
- Cached legs are referenced as `&cache->surfacePaths[i*count+j]`.
- The Dijkstra loop and the final assembly dereference those pointers. Their
  arithmetic, iteration order and tie rules are unchanged.

### Exactness argument
- **Same leg contents.** Each matrix cell refers to the same sequence of Vec3
  that the old code copied. Cells never written in the old code (row 0 col 1,
  column 0, row 1, the diagonal) were empty vectors. They now point to the empty
  `none`.
- **Same side-effect order.** `attach(from,ends[i])` and then
  `attach(ends[i],to)` still run in increasing `i`. So `ImportedFloorPath`,
  `importedFloorRoutes` insertion (capped at 16384), `endpointParents`, node and
  edge caches, and memo calls happen in the same order with the same arguments.
- **Same float work.** The length sum, the `distance[u]+length<distance[v]`
  comparison and the `u` selection are the same expressions in the same
  function, in the same order. Result assembly inserts the same legs in the same
  order.
- **Lifetime.** `cache` is a local `shared_ptr` copy of `m.navigation`, taken
  after `surfaceReady`. Only the `!surfaceReady` block resizes `surfacePaths`,
  and it runs before any pointer is taken. `attach` → `ImportedFloorPath` →
  `ImportedEndpointPath`/`FindFloorPath`/`Walkable`/`ClearLine`/`Supported`
  never touches `surfacePaths` and cannot re-enter `FindLinkedSurfacePath`. If
  `m.navigation` were ever replaced mid-call, the old code also copied from the
  old `cache` object. The behaviour is the same.
- **Geometry invalidation.** No new cache is added. `InvalidateGeometry` still
  resets `navigation`, and the prepared and unprepared key logic is unchanged.
- **Observations, actions, RNG, rewards, outcomes.** These depend on the
  returned path. The returned path is bit-identical under the argument above.
  No RNG is touched.

### Memory and portability risk
- Peak per-call memory goes down. The pointer matrix is 8 bytes per cell, where
  the old matrix was 24 bytes per cell plus the heap copies. No persistent RAM
  is added.
- The code is plain C++17 with no compiler-specific constructs. A default-
  initialised `const std::vector<Vec3> none;` is valid on GCC and MSVC because
  vector has a user-provided default constructor.

### What is not known (no invented results)
- I have not compiled or run anything. There is no shell here.
- The call frequency of the fall-through branch on the training maps is unknown.
  So is `count` (the number of link endpoints). If most `FindPath` calls return
  through the same-floor `direct` branch, this change will be unmeasurable. That
  is a valid negative result. The counter below decides this cheaply before
  anyone spends time on timing runs.

## Discriminating counters and benchmarks
This does not duplicate the parent's memo kind/hit/collision work.

1. **Relevance counter (baseline binary, diagnostic build only).** Add these
   counters in `FindLinkedSurfacePath`:
   - `linkedCalls`: every entry.
   - `linkedDirect`: returned from the `direct` branch.
   - `linkedMatrix`: reached the matrix build.
   - `matrixEnds`: running sum of `count`.
   - `copiedLegs`: non-empty `surfacePaths` cells.
   - `copiedPoints`: the sum of their sizes.

   Add them next to `QueryProfile::paths`, or as local statics printed at exit.
   Run them on the three already-used training maps with saved training
   actions. If `linkedMatrix × copiedLegs` per battle is small (under about 1e5
   allocations), stop here and drop the candidate.
2. **Focused exact oracle and microbenchmark.** On one prepared, already-used
   imported map:
   - Collect every `(from,to)` pair seen by `FindPath` during one saved-action
     replay, for example by logging from the counter build.
   - Replay those pairs through the baseline and candidate `FindPath` in
     separate processes, on a fresh `Map` copy with identical call order.
   - Require `memcmp` equality of every returned `std::vector<Vec3>`: size and
     bytes.
   - Time the loop with interleaved A/B runs, at least 5 repetitions each, and
     report the median and spread.
3. **End-to-end.** Replay saved training actions A/B with the lean worker count
   used in training, interleaved. Compare wall time and the parity hashes of
   observations, legal actions, costs, rewards and outcomes. Then run the full
   suite, parity, the Windows build and Fable review before retention.

## Side diagnoses (not implemented; for Astra's measurement queue)
- **Per-revision table zero-fill.**
  - Sizes: `SegmentMemo` is 2^21 × 32 B = 64 MiB (SpatialSim.cpp:37-49).
    `TacticalVisibilityCache` is 8,388,608 × 16 B = 128 MiB
    (TacticalRouteSim.cpp:13).
  - Both are value-initialised through `make_shared` on first use after every
    revision. `InvalidateGeometry` resets both.
  - So each geometry edit costs about 192 MiB of memset and page faults, and
    each lean worker holds that RSS.
  - Measure: revisions per battle × allocation time, plus worker RSS.
  - A lazily zeroed or smaller table would affect speed only, not results. It
    changes the RAM and speed tradeoff, so it needs its own experiment.
- **`Walkable` on a memo miss evaluates `Supported` three times on the same
  point.** Once in `Walkable`, and twice in `ClearLineCompute(p,p)` because
  `steps=1` samples i=0 and i=1. The saving is small and exact, but only matters
  if the misses are hot.
- **`FloorRouteKey` uses float `==` and `std::hash<float>`.** So `-0.0` and
  `+0.0` endpoints share a cache entry. This existing behaviour is harmless
  unless a path is ever sign-of-zero sensitive. Noted only; this candidate does
  not change it.

## Final result
I implemented one bounded, exact candidate in the copy
(`Sim/EnvironmentSim.cpp`, `FindLinkedSurfacePath`). It removes the per-call
deep copy of the cached endpoint path matrix without changing call order,
arithmetic or cache semantics. Nothing has been measured. It is worth
benchmarking only if counter (1) shows the fall-through branch is frequent on
the training maps. Astra must also confirm against the unread prior-experiment
documents that this has not already been tried.
