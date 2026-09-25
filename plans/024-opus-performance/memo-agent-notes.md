# Candidate `memo`: inclusive 4096-entry front table in front of the segment memo

Touched: `Sim/SpatialSim.cpp` only (`SegmentMemo`, `MemoisedSegment`, plus `<array>` include).

## Change

`SegmentMemo` gains a second, small direct-mapped table (`front`, 4096 x 32-byte
entries = 128 KiB) alongside the unchanged 2^21-entry / 64 MiB main table. Same
`Entry` layout: seven float-argument key words plus the state word (result bits
+ kind). `MemoisedSegment` now:

1. builds the key and hash exactly as before (hash code moved verbatim into
   `SegmentMemoHash`, so main-table slots are bit-identical to baseline);
2. probes `front[h >> 52]` (high hash bits, so front conflicts are not
   correlated with main-table conflicts) with the full `memcmp` + kind
   equality test — no hash tags, no weakened comparison;
3. on a front miss, probes the main table at `h & (size-1)` exactly as before;
   a main hit also copies the entry into the front slot (re-heats keys that
   were evicted from the front table);
4. on a full miss, computes as before, writes the main slot and the front slot.

**Inclusion invariant (the reason counters stay exact):** before overwriting a
main entry on a miss, the victim key is re-hashed from the entry itself and its
front copy is cleared if still present. Therefore every valid front entry is
also resident in the main table with the same key/kind/result. Front hits are
exactly hits the baseline main table would also have served.

Tunable: `SEGMENT_MEMO_FRONT_BITS` (default 12). Defining it to `0` compiles the
front table out and restores the plain baseline path in the same source, which
gives a clean A/B without a second checkout.

This structure is a **hypothesis**: it assumes repeat segment queries cluster in
time and that the 26.34% self time in `MemoisedSegment` includes real cost from
random access into 64 MiB. Neither locality nor a conflict/capacity split has
been measured here. If the cost is actually the hashing and `memcmp` themselves,
this patch will be neutral-to-slower (it adds a second probe on every miss) and
should be rejected.

## Exactness argument

* Returned booleans: a front hit returns the stored result for a byte-identical
  key/kind under the same `m.revision`; that entry was written by `compute` for
  that exact key, so the value equals what `compute` would return. Misses still
  call `compute` with the unmodified arguments. Float costs, candidate order,
  tie-breaking, RNG and rewards see identical values.
* Main table contents: by induction the main table is bit-identical to baseline
  at every call. A front hit implies a main hit (invariant), and on a main hit
  neither version writes the main table; on a miss both write the same key and
  state to the same slot. Only the front table is extra state.
* Counters: `memoLookups` is incremented once per call as before.
  `memoHits` is incremented on a front hit or a main hit; by the invariant these
  are exactly the baseline's hits, so `profile.json` `memo_lookups`/`memo_hits`
  should be unchanged, not merely "close". This was the main reason for the
  eviction-invalidation step rather than a plain non-inclusive front cache.
* Invalidation: the front table is a member of `SegmentMemo`, so the existing
  `revision` check discards it with the main table. No separate lifetime, no
  path where prepared/unprepared or geometry-revision changes leave a stale
  front entry alive. Nothing is keyed by anything coarser than the exact key.
* `-0.0f` vs `0.0f`, NaN payloads etc. keep baseline behaviour because matching
  is still raw `memcmp` on the float bit patterns.

## Risks

* Extra work on the miss path: one front probe, one victim re-hash (7 FNV steps
  over an already-hot cache line) and one extra 32-byte store. Small next to the
  BVH `compute` it precedes, but it is not free, and misses are ~29% of calls.
* `f` is a reference held across `compute()`, the same hazard class the baseline
  already has with `e`: it is only invalid if `compute` replaced `m.segments`.
  Neither `IndexedClear3D` nor `ClearLineCompute` re-enters `MemoisedSegment`.
  If a future caller did re-enter, the worst case is a broken inclusion
  invariant (counter drift), not a wrong return value.
* `SegmentMemo` objects grow by 128 KiB each; `sizeof(SegmentMemo)` is now large
  and it is still `make_shared`-allocated, which is fine but worth knowing.
* Unity/Unreal builds: two new `static` helpers in `namespace army`
  (`SegmentMemoHash`, `SegmentMemoMatch`); names chosen to avoid unity-build
  collisions. `std::array` needs `<array>`, added.

## Memory

+128 KiB per live `Map` segment memo (0.2% on top of the existing 64 MiB), once
per geometry revision. Nothing scales with obstacle count or worker count beyond
the existing per-map memo, so parallel lean workers are unaffected in practice.

## Suggested focused regression (not run here)

No tests, builds or benchmarks were executed by me — no shell was available.
Suggestions for Astra:

* Exact oracle + the 12 matched replays as usual; additionally diff
  `profile.json` `memo_lookups` / `memo_hits` against baseline — they are
  predicted to match exactly, and any drift means the inclusion invariant is
  broken and is worth investigating before judging the speed number.
* A prepared-map run with mid-battle geometry invalidation (revision bump) to
  confirm the front table is discarded with the main table.
* A/B in the same binary with `-DSEGMENT_MEMO_FRONT_BITS=0` (baseline path) vs
  the default 12, and optionally 10 / 14 to check the size assumption.
* Optional instrumentation, if a locality measurement is wanted before trusting
  the hypothesis: in a scratch build only, add file-local `static uint64_t`
  counters incremented at the three exits (front hit / main hit / miss) plus one
  at the victim-invalidation branch, print them at process exit, and run a
  single-threaded profile capture. Deliberately not in the candidate: it would
  add a store to the hot path and the counters are not thread-safe.
