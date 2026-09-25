# Candidate: ordinary FindFloorPath string-pulling back-scan

Owned edit: `Sim/EnvironmentSim.cpp`, the non-tactical string-pulling loop at the end of
`FindFloorPath` (only that loop; tactical compaction and `ImportedEndpointPath` prefix
smoothing are untouched).

## Change

Before, per anchor `i` the inner loop tested every candidate `j` in `[i, n)` and kept the
last clear one:

```cpp
size_t furthest=i;
for(size_t j=i;j<path.size();++j) if(ClearLine(m,p,path[j],0.48f)) furthest=j;
```

Now it scans from the end and stops at the first clear candidate:

```cpp
size_t furthest=i;
for(size_t j=path.size()-1;j>i;--j) if(ClearLine(m,p,path[j],0.48f)) {furthest=j;break;}
```

No other change: same anchor advance `i=furthest+1`, same `smooth.push_back(path[furthest])`,
same pad `0.48f`, same `p` update.

## Exactness argument

- Selection: the old loop computes `max{ j in [i,n) : ClearLine(p,path[j]) }`, falling back to
  `i` when that set is empty. The new loop returns the largest clear `j` in `(i,n)` and
  otherwise `i`. The two differ only over candidate `j==i`: if `i` is the only clear index the
  old loop sets `furthest=i`, and if nothing is clear it also sets `furthest=i`. Both cases
  yield `i`, so testing `j==i` cannot change the result and is skipped. Every other index is
  selected identically, so the emitted waypoint sequence is bit-identical, hence identical
  path costs, chosen paths, orders, ties, observations, actions, RNG draws, rewards, outcomes.
- Index safety: the loop body only runs with `i<path.size()`, so `path.size()-1` is well
  defined and `>= i`; `j>i` terminates without unsigned wrap. When `i==n-1` the inner loop
  performs zero iterations and `furthest=i`, matching the old single `j==i` test.
- Purity of the predicate: `ClearLine` is a pure function of `(m,a,b,pad)` for a fixed map
  revision. Under `m.prepared` it goes through `MemoisedSegment`, a direct-mapped table whose
  collisions evict and recompute exactly (`SpatialSim.cpp:40-58`), so a different query order
  or a smaller query set changes only table occupancy, never returned values. The map is const
  through this loop; no candidate ordering feedback exists.
- Query count is never higher than before: the descending scan issues at most `n-1-i` calls
  versus the old `n-i`, and terminates early exactly when a far candidate is clear (the common
  string-pulling case, where the old loop kept scanning the whole tail after finding it).
- Untouched: tactical branch (`if(tactical)` compaction, budgets, `RouteStatus`), the A*
  search itself, `nodes`/`edges`/`visited` navigation caches, prepared/unprepared key
  selection and all geometry invalidation paths.

## Expected memory

Unchanged. No new allocations, containers or statics; `smooth` has the same contents and the
same growth pattern. Segment-memo pressure is slightly lower (fewer entries written per path),
which can only reduce eviction of other entries; safe for parallel lean workers since every
structure touched is already per-map.

## Risks

- Diagnostic counters `QueryProfile::memoLookups` / `memoHits` will drop and their ratio will
  shift, since fewer clearance queries are issued. That is instrumentation only (`BattleSim.h:41`,
  reported via `Diagnostics.cpp`); it feeds no observation, receipt or reward. If any gate pins
  exact memo counts, the gate's expected numbers are what moved, not gameplay — do not relax a
  gameplay gate to accommodate it.
- Timing-sensitive fields already present in the profile (`tacticalSeconds`, etc.) are
  wall-clock and change with any speedup; unrelated to determinism.
- Upside is workload-dependent: paths where the string pull rarely reaches far (dense
  geometry, short paths) keep nearly the old call count. FindFloorPath self time was 7.35%, so
  the honest ceiling here is a fraction of that; Astra's paired measurement decides.

## GeometryKey attribution (probe suggestion only, deliberately not patched)

`GeometryKey` (`EnvironmentSim.cpp:46`) is called from exactly three sites — `CoverPositions`
(:134), `FindFloorPath` (:237), `FindLinkedSurfacePath` (:402) — and in all three only when
`!m.prepared`; prepared maps use `m.revision` instead. Its body is an O(surfaces+obstacles+
buildings) FNV fold, so 5.69% self time is only explicable if either (a) a meaningful share of
training traffic runs on unprepared maps, or (b) the sampler folded inlined callee code (it is
`static`, and neighbours like `Supported`/`ClearLineCompute` inline aggressively) into this
symbol. Minimal probe to distinguish, in a build-gated block so uninstrumented runs are
untouched:

```cpp
#ifdef SIM_PROBE_GEOMETRY_KEY
static std::atomic<uint64_t> gGeometryKeyCalls{0},gGeometryKeyItems{0};
// at top of GeometryKey:
gGeometryKeyCalls.fetch_add(1,std::memory_order_relaxed);
gGeometryKeyItems.fetch_add(m.surfaces.size()+m.obstacles.size(),std::memory_order_relaxed);
#endif
```

plus a per-call-site tally of `m.prepared==false`, dumped once at run end. If calls are
near-zero the 5.69% is attribution noise and should be chased with `perf annotate` on the
symbol (check whether the hot instructions are the multiply chain or foreign inlined code)
rather than with a code change. If calls are genuinely high, the fix would be an incrementally
maintained key on mutation, which is a separate measured candidate and is not folded in here.

## Tests

None executed — this directory has no build or shell access; Astra owns compilation, the exact
oracle, replays and measurement. I make no claim that anything was run.

Suggested focused regression for Astra: a path-equality harness that runs `FindFloorPath`
through its public entry points over a grid of from/to pairs on prepared and unprepared
skirmish and imported maps, comparing full waypoint vectors bit-for-bit against the baseline
snapshot. Coverage should include the fallback case (anchor where no later candidate is clear,
e.g. a start pushed to a snapped node inside a doorway), single-node paths (`path.size()==1`),
and paths where the goal append `if(ClearLine(position(goal),to)) path.push_back(to)` fires,
since that is the candidate most often clear from the far end.
