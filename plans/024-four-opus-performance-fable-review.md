# Fable review of four Opus candidates — 22 September 2026

[Request](024-four-opus-performance-review-request.md). Exact `claude-fable-5-1`
assistant identity and successful terminal/model-usage metadata verified. Raw:
`/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T165441-b81d1995/`. Read-only review; testing is Astra's evidence, not Fable execution.

Astra disposition: accept exactness reasoning for current callers, subject to the
measured gates. Before retaining visibility, remove the latent self-pointer copy
hazard (delete copying/moving or store an offset); before retaining obstacle
traversal, clarify `any=true` sign-only contract in the header. The existing parent
query probe already compares any-hit signs and exact nearest-hit values, so that
requested test is covered. Add directed smoothing and scratch memo-inclusion checks
if those candidates survive timing.

Corrections: near-first traversal changes which nodes are visited before an early
exit; the unchanged property is valid intersection semantics, not an identical
visited-node set. Copying the visibility cache is unsafe; moving its vector can
transfer the allocation, so the blanket claim about both implicit operations is
overstated, but deleting unused copy/move remains a reasonable safeguard. Cache and
tree optimizations can interact in CPU/cache performance even when their returned
answers compose exactly; a winning stack still needs its own benchmark. GeometryKey
has zero calls on the specifically measured map756; its actual sample attribution
on every other map remains unverified. No additional speedup is established here.

Response below is verbatim.

---

Nothing further is needed; all four candidates were read in full against the baseline `SpatialSim.cpp`, `EnvironmentSim.cpp` and `TacticalRouteSim.cpp`.

## Per-candidate verdicts

**Smoothing (`EnvironmentSim.cpp:314-320`). Exact. No blocker.** The original kept the largest index `j ≥ i` with a clear line; the backward scan stopping at the first clear `j > i` returns the same index, and when nothing beyond `i` is clear both versions choose `i`, so skipping the `j == i` test cannot change the result. Query count is never higher. Loop bounds are safe: `j > i` is checked before each decrement, so no `size_t` underflow, and an empty path never enters the loop. The imported-endpoint smoothing with its prefix rule is untouched, which is correct since its semantics differ. Acceptance addition: one directed test with a blocked middle segment and a clear later one, so the "furthest, not first" semantics are pinned explicitly rather than only by the aggregate hash.

**Visibility (`TacticalRouteSim.cpp:11-67,116-129`). Exact. One latent hazard, not a blocker.** Every way still stores and compares both full 48-bit endpoints, the occupancy bit sits in bit 63 of `from` where packed coordinates never reach, and the answer bit is unchanged, so the set only decides residency. Ray order and the `+= 1.f/3` accumulation are untouched; the observer ray uses its own key as anchor. Alignment is sound: the buffer carries 48 spare bytes, which is exactly the worst case for aligning a 16-byte-aligned allocation to 64, and the unaligned fallback still indexes inside the buffer. Footprint is the stated 128 MiB plus 48 bytes. `std::align` with `<memory>` is portable C++17. The hazard: `TacticalVisibilityCache` holds a raw `sets` pointer into its own `storage`, and the implicit copy and move constructors would leave a copy pointing into the source. Nothing copies it today, since it lives only behind `std::make_shared` and `Map` copies share the pointer, but delete the copy and move operations, or store an offset, before this lands in production source.

**Memo (`SpatialSim.cpp:41-102`). Exact, counters exact. No blocker.** A front hit compares the full seven-word key and kind, so answers cannot differ. The inclusion invariant holds: the front is written only when the main slot is written or hit, and a main overwrite first clears the victim's front copy by recomputing its own hash. Main-table contents evolve identically to the baseline because front hits, like baseline hits, write nothing, and misses write the same slot, so `memoLookups` and `memoHits` keep their meaning. The same-slot case where the victim's front index equals the new key's index is handled by the write order. Revision reset value-initialises the front array. Cost is 128 KiB per map, trivial for parallel workers. Acceptance note: the inclusion invariant is a counter property, not a correctness property, so if a later change breaks it nothing in the parity suite will notice; add a debug assertion in the scratch build that a front hit's key is present in its main slot.

**Obstacles (`SpatialSim.cpp:20-55`). Exact for current callers. Guard needed.** `Reach` uses the identical slab arithmetic and divisions and returns -1 in exactly the cases `Overlap` returned false, so the set of visited nodes is unchanged; the parent tests each child once, as the original tested each node once, and `Trace` restores the root test. For `any == false` the left-then-right order and the minimum are unchanged. For `any == true` the *value* returned can be a different obstacle's entry parameter than before, because the first hit found now depends on near-first order. Every current `any == true` caller uses the sign only: `IndexedClear3D`, `ClearLineCompute` and `EstimatedVisible` (`BattleSim.cpp:86`, `EnvironmentSim.cpp:211`, `TacticalRouteSim.cpp:59`). That is what makes this exact today. Add a one-line comment on `IndexedContact` in `BattleSim.h` stating that with `any` the returned parameter is unspecified beyond its sign, and a test that asserts the sign agreement of `any` queries against the baseline over the existing 649,332-case corpus, so a future caller cannot silently depend on the old left-first value.

## Combination and portability

- Smoothing and visibility touch separate files and separate mechanisms; combining them needs no merge work.
- Memo and obstacles edit disjoint functions of `SpatialSim.cpp`; a textual merge is straightforward, and the two mechanisms do not interact: the memo wraps `compute`, and near-first ordering changes only which hit `compute` finds, never whether it finds one.
- All four are plain C++17 with no compiler-specific intrinsics, no floating-point expression changes, and no new dependence on evaluation order that MSVC could resolve differently. The Windows parity run remains the gate for that claim.

## Two corrections to the authors' notes, confirmed

Changed cache query order does alter later evictions, so the retained test that matters is the answer-level parity corpus, not any expectation that cache contents match. And with zero `GeometryKey` calls measured on map 756, its earlier 5.69% sample label is layout attribution, not hashing cost; none of these four patches should carry a geometry-hashing change.
