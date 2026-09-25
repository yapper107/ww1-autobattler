# Fable 5.1 implementation review — 22 September 2026

Exact responder verified through the dedicated project session. Source
`69962220d762ea04`. Review only; no tests run by Fable. Raw evidence: `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T160013-76f2c8cd/`.
[Request](024-command-performance-implementation-request.md).

The response below is verbatim. Astra’s disposition: no blocker; add the suggested
cleared/far/maximal threat cases to the permanent route test, retain the existing
exact oracle, record the frozen training-binary hash, and finish all gates before
claiming a gain. The counter ratios identify a useful bypass experiment, but
its speed benefit is established by timing, not the hit-rate ratio alone. The
small shortlist query share lowers its priority; it is not an inclusive CPU bound.

---

Nothing further is needed; the constructor, `Sample`, `EstimatedVisible`, `IndexedContact`, the new route test and the counter summary were all inspected.

**Verdict: no blocker. Both changes are behaviour-identical by construction, and the test covers the right axes.**

**Sorting equivalence.** `Sample` computes `seen` as a maximum over threats and skips a threat only when `seen >= confidence × weight` (`TacticalRouteSim.cpp:74,84`). A skipped threat's value is `visible × confidence × weight` with `visible` in {0, 1/3, 2/3, 1}; in float32 the three-term sum of `1.f/3` rounds to exactly 1.0, multiplication by a factor at most 1 cannot exceed the multiplicand, and multiplication by the same positive weight is monotone, so every skipped value is at most the bound and at most `seen`. The maximum is therefore the same for any evaluation order, including ties, and a zero-confidence report (bound 0) is skipped in every order. The observer query is also order-safe: `body` is the same value whichever threat first snaps it, and for the standing case the fallback expression is the identical snap, so a shrunken evaluated set cannot change the observer endpoint. Grouping happens before the stable sort (`:46-63`), the comparator is a strict weak ordering on finite values, and nothing but `Sample` reads `threats`. The only observable differences are which cache entries get inserted and the profile counters.

**Bypass equivalence.** On a prepared map the original miss path was `ClearLine3D` → `MemoisedSegment(kind 0, IndexedClear3D)`, and `IndexedClear3D` is exactly `IndexedContact(map, from, to, true) < 0` (`BattleSim.cpp:86-89`). Kind 0 has no other producer, so a memo hit could only ever return a value computed by that same function on the same bit-identical arguments. Calling `IndexedContact` directly returns the same answer, the empty-obstacle case included, and revision revalidation still happens in both the ray table and the spatial index. The `sight` counter is incremented once in the prepared branch and once inside `ClearLine3D` in the unprepared branch, so no double count. The unprepared path is unchanged, and the new test's prepared-versus-unprepared comparison is the strongest check here, since it pits the BVH against the linear scan on the same rays.

**Counter semantics.** `memoLookups` and `memoHits` now exclude tactical misses. That is correct and disclosed, but any later comparison of memo hit rates against the summary you just recorded must use the new denominator, or it will read as a regression.

**Portability.** No floating-point expression, order or compiler-visible dependence changed. `std::stable_sort` allocates a temporary buffer per planner, which is trivial at these sizes.

**Useful acceptance additions**, none blocking:

- In `RouteThreatOrderTests`, add one cleared contact (`clearedAt >= observedAt`, bound 0), one contact beyond 100 m plus uncertainty, and one fully visible high-confidence contact placed first so every later threat is bound-skipped. That exercises the smallest evaluated set and the observer fallback.
- Keep the 882,432-row harness as the gate for this and any later change to `Sample`; it is the exact oracle.
- Record the frozen experiment binary's hash beside the new source fingerprint in the performance report, since the two now differ by two optimisations.
- Report the three-arm timings with the alternation order, as you did, and let the 12-pair benchmark, 41 pairs and full suite finish before any claim.

On the counters themselves: tactical misses at 25 to 29% of sight queries, a 69 to 73% ray hit rate, and a 7 to 10% conditional memo hit rate after a tactical miss confirm the bypass was the right layer to remove and that the earlier attribution of nearly all sight queries to tactical misses was wrong. Shortlist rays at under 5% confirm that cross-family cover reuse is not worth building.
