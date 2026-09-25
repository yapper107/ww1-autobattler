# Obstacle candidate: ray-ordered BVH descent for existence queries

Touched: `Sim/SpatialSim.cpp` (only file changed).

## The change

One bounded change to `SpatialIndex` traversal, in two mechanically linked parts:

1. `Overlap` (bool) became `Reach` (float). It runs the *identical* slab
   arithmetic and now returns the entry parameter `lo` along the segment
   (always `>= 0`) instead of `true`, and `-1` instead of `false`. No
   operation, constant, tolerance or division was altered; `lo` was already
   being computed and thrown away.
2. `Query` no longer tests its own box on entry. A parent computes `Reach` for
   both children, skips a child that returns `-1`, and:
   - `any == true`: descends the child with the smaller entry parameter first
     (ties -> left, i.e. the baseline order), returning at the first hit.
   - `any == false`: keeps the original left-then-right descent and the same
     `std::min` combination.
   The root's box test moved to a new `Trace` entry point, which
   `IndexedContact` now calls.

Motivation: the tree is median-split on x or y, so for roughly half of all
segments the baseline DFS walks the far half of the map first and only
early-exits after crossing everything. Sight/clearance queries
(`IndexedClear3D`, `TacticalRouteSim`, `ClearLineCompute`) are the `any=true`
bulk of `SpatialIndex::Query`'s 18.60% sampled self cost, and a blocked ray
usually has its blocker in the near child.

## Exactness argument

- **`any=false` (only caller: `MapContact`, needs the exact minimum hit).**
  The set of leaves visited is unchanged: `Reach` reproduces `Overlap`'s
  arithmetic exactly and returns `-1` on exactly the same branches, so every
  prune decision is bit-identical; the test simply moved from the child's
  prologue to the parent. Descent order is also unchanged (left, then right).
  Identical inputs to `SegmentObstacle`/`SegmentBox`, identical combination,
  identical float out.
- **`any=true` (callers only test the sign).** The answer is an OR over the
  same candidate set with the same per-obstacle predicates, so existence is
  unchanged; reordering cannot skip a hit, because a reordered branch is still
  visited when the first branch finds nothing. Only the *which* positive float
  is returned can change (now the hit of whichever near-side leaf fires first).
  All in-tree callers discard the magnitude: `BattleSim.cpp:86`
  (`...<0`), `TacticalRouteSim.cpp:33` (`...<0`), `EnvironmentSim.cpp:211`
  (`...>=0`).
- `lo >= 0` always (it starts at 0 and is only `std::max`'d), so `-1` stays an
  unambiguous "no overlap" sentinel.
- No NaN can enter the minimum: leaf hits are gated by `hit>=0`, so
  `std::min` over the branch results is order-independent.
- Nothing touched: query budget, geometry, padding/tolerances, divisions (no
  reciprocal substitution), the `SegmentMemo` path, build order, revision
  invalidation, prepared/unprepared split.

## Risks

1. **Returned magnitude for `any=true`.** I verified every `IndexedContact(...,
   true, ...)` caller inside `Sim/`. My file tools were confined to this
   directory, so I could not check `tests/` or `tools/` for a caller that uses
   the positive value of an `any=true` query; `IndexedContact` is public in
   `BattleSim.h`. Parent should confirm before accepting. If such a caller
   exists, the fix is to restrict the reorder to `pad < 0` internal callers or
   drop part 2 and keep only the hoisted child test.
2. **Neutral-to-slightly-negative case.** For an unblocked ray the work is
   identical (both children were tested exactly once before, and are now).
   For a blocked ray whose blocker already lay in the left child, we pay one
   extra `Reach` per internal node on the path to the hit (~depth `log2(n/8)`,
   a handful). The win is skipping the far half when the order was wrong. Net
   effect is a hypothesis until measured; the downside is bounded and small.
3. Heuristic degenerates to baseline order (all ties at `lo = 0`) when the ray
   origin sits inside both child boxes or both axes are degenerate — correct,
   just no gain there.

## Memory

Unchanged. No new allocation, no per-query scratch, no explicit stack, `Node`
layout untouched, recursion depth unchanged (still `~log2(n/8)`, bounded by the
`end-begin>8` split rule). Nothing added to per-worker footprint for parallel
lean workers.

## Suggested focused regression (parent-owned)

- Exact-oracle diff of `MapContact` prepared vs unprepared over randomized
  segments on a cluttered map (guards the `any=false` minimum).
- `ClearLine3D` / `ClearLine` parity prepared vs unprepared, including
  pad >= 0 movement clearance and multi-floor buildings (guards the `any=true`
  existence answer and the z-slab early out).
- Grep `tests/` and `tools/` for any `IndexedContact(..., true, ...)` use of
  the returned magnitude (risk 1).

## Tests actually run

None. No shell tool was provided; I did not compile or execute anything.
Everything above is a static argument, not a measurement.
