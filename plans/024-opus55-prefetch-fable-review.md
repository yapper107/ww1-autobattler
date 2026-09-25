# Fable review of Opus 5.5 ray-prefetch candidate

Exact `claude-fable-5-1` review through the standing project architect session.
[Request](024-opus55-prefetch-fable-request.md). Raw evidence:
`/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T174015-da0d8c1b/`.
Fable reports no correctness blocker. Tests and measurements belong to Astra.

## Astra disposition

- Add the proposed hint-disabled control. Compare paired timings on all12cases
  against current baseline and against this control before attributing a gain to
  the hint. A faster full implementation alone does not prove hardware latency.
- Existing exact Sample oracle starts on maps with no visibility/segment table,
  then removes geometry and compares additional samples. Fresh allocation and
  invalidation paths are already covered; native route tests also run.
- Do not add a unit test that simply repeats the unchanged hash expression. The
  independent old reference hash is already exercised by882432 complete cost
  comparisons, including rounding boundaries and signed zero. Keep behavioral
  evidence instead of a test that mirrors the implementation.
- Windows native/Unreal compilation and recorded battle parity are still required
  for retention; the portable fallback is not a claimed speedup on other targets.
- Opus's claim that the table is larger than any cache and therefore memory-bound
  is unsupported. Cache hit rate is not CPU-cache hit rate. No DRAM/TLB/hardware
  stall counters have been measured. Its expected ceiling is also unsupported.
- The previous four-way visibility-cache proposal and its three-eye motivation
  were one experiment, not two separately measured failures.

The response below is verbatim; timing/verification results are recorded separately.

---

Nothing further is needed; the patch, the candidate source and the counters were all read.

**Verdict: no blocker.** The change is semantically inert and the equivalence argument is simple.

**Why it is exact.**

- `Slot` is the old hash expression and mask moved into a static function, unchanged constant by constant (`patch:16-19` against the baseline inline code). It is pure unsigned integer arithmetic on the packed endpoints, so the slot index is identical, and the three lookups still run in eye order against the same slot, with the same full-key compare, the same miss computation and the same overwrite on miss. Evictions and table contents therefore evolve identically; `visible` accumulates the same `1.f/3` terms in the same order; no floating-point expression was touched.
- The prefetch is a load hint with no architectural effect on memory contents, control flow or the result. The address is always `rays.data() + slot` with `slot < 8388608 == rays.size()`, so it is inside the live allocation; the "cannot fault" property here rests on that bound, not on a universal claim. The guard on `tacticalVisibility` and its revision skips the hint when no table exists; the subsequent lookup allocates as before. Nothing can reallocate or invalidate the table between the hint and the three lookups, since the map is not mutated inside `Sample`, and the slot indices remain valid for any table instance because capacity is fixed.
- The observer ray goes through the two-argument overload, which computes the same slot (`:41`, `:119`).

**ODR and portability.** `TacticalVisibilityCache` is defined only in `TacticalRouteSim.cpp` and forward-declared elsewhere, so adding static members there is safe; the new private overload only changes the planner's method set. The intrinsic guards are consistent: GCC and Clang, including clang-cl, take `__builtin_prefetch`; MSVC x86 and x64 take `_mm_prefetch` with the header included under the same condition; any other MSVC target compiles to the no-op branch. `size_t` is available through the existing includes. Standard C++17 otherwise.

**Attribution risk, and the gate that resolves it.** Two things changed besides the hint: hashing moved out of `EstimatedVisible` into the caller, and an overload was added, so inlining and code layout differ. Any measured gain could come from that rather than from overlapping memory latency, which the counters do not establish. Build a **sham control**: the candidate source with `Prefetch` forced to the `(void)ray` branch. Retain only if the real candidate is reliably faster than both the baseline and the sham on the 12-case benchmark with alternating order; if it only beats the baseline, the benefit is layout and the hint itself is noise. That comparison is cheap and is the only way to say "prefetch helped".

**What the counters do say.** Ray hit rate 68 to 72% per battle, and in about 59% of threat-samples all three rays hit (`miss_mask=0`), with about 20% all-miss. So the three loads are independent in the majority of iterations, which is the precondition for a prefetch to matter; whether they miss the caches is still unmeasured, and Opus's sub-1% ceiling and per-lookup cost figures remain hypotheses.

**Residual tests beyond the existing oracles.**

- A unit test asserting `Slot(a, b)` equals a verbatim copy of the old inline expression for random and boundary packed pairs, so a future edit to either cannot drift silently.
- A test that samples on a fresh map before any table exists, then after `InvalidateGeometry`, so the guarded skip and the reallocation path are both exercised.
- The Windows build at the project's warning level, since the `reinterpret_cast` in the intrinsic branch is compiled only there.
- Note for integration: this patch is written against the flat table; it cannot be merged with the earlier four-way visibility candidate without redoing the set addressing.
