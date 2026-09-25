# Further performance experiments: Astra disposition

22 September 2026. Jordan requested Fable advice on further optimization.
[Attributed response](024-further-performance-fable-review.md),
[fresh current-build evidence](../docs/NEURAL_TRAINING_CURRENT_PROFILE.md).
This task produces reviewed recommendations. No production code, binary, training
configuration or learning settings change. Current simulator remains
`69962220d762ea04`; ongoing training remains frozen at `d73667841df73faa`.

## Accepted experiment order

1. **One scratch profiling pass.** Attribute remaining memo requests and occupied
   slot replacements to query kind/caller; count last-access intervals separately
   from entry age. Measure the non-tactical smoothing loop's clearance calls.
   Count GeometryKey at its three call sites and log prepared state/geometry
   identity if invoked. Keep counters outside timed production builds. Instrumented
   replays must remain exact. Do not open final reserved maps.
2. **Reverse the ordinary path-smoothing search as the first small candidate.**
   EnvironmentSim.cpp:307–313 currently scans every later waypoint and retains the
   largest index with clear swept clearance. Descending search stopping at the first
   clear waypoint selects that same largest index. If none is clear, retain the
   existing fallback `furthest=i`. Handle unsigned reverse iteration safely.
   Preserve padding, endpoints and the returned waypoint sequence. Do not alter
   tactical collinear compaction or imported endpoint prefix smoothing. This
   reduces query count, not the clearance requirement. It changes cache access
   order, so whole-battle timings are necessary; fewer calls alone is not a speedup.
3. **Three-ray result reuse as an independent candidate.** Fable's exact visible-count
   cache is plausible: key all three snapped eyes and body, preserve geometry
   invalidation and sum `1.f/3` in the original order. First measure present-day
   triple reuse and collisions. Specify a bounded layout that supports both triple
   and observer-ray queries within the existing per-worker memory budget; do not
   quietly add another 128 MiB table. Compare retaining individual-ray reuse versus
   replacing it. A low-risk related Astra candidate is deduplicating bit-identical
   eye rays within one triple, while applying each answer in the original three
   float additions; measure how often the eyes coincide before prioritizing it.
4. **Remaining segment-memo layout and obstacle traversal.** Test a small exact-key
   front cache or associativity only if measured traces/counters suggest useful
   reuse. Preserve all seven float-word keys, kind and revision invalidation;
   hashes alone cannot establish equality. Consider obstacle-tree layout or child
   traversal order separately, preserving min-hit results and boolean-any callers.
   Keep original slab divisions/tolerances. No reciprocal-multiply approximation.

Each idea is a separate ablation against current source. Retain only measured wins
with bounded RAM and exact observations/actions/outcomes. Ordinary path smoothing
is the smallest clear code-level candidate; the larger caches are hypotheses.

## Corrections and limits in Fable's response

- **Old counters are not current counts.** The 69–73% tactical-ray hit rates and
  node-visit ratios came from the earlier `cfcd101678649cb2` profile, before sorting
  and bypass. The fresh profile does not measure current triple counts. Fable's
  estimate of 23 million threat samples/69 million tactical probes per battle is
  not established. Global sight-query counts are not tactical-ray-table probes.
- **Memo misses are not all tree queries.** Current tactical-ray misses bypass
  the segment memo. Dividing current memo misses by three gives about 17.7 million
  misses per battle, not the full current IndexedContact/SpatialIndex query count.
- **A triple cache changes miss work.** It loses or changes sharing of individual
  rays across triples and between threat/observer queries. Thus three-ray miss work
  and overall hit rate need not stay the same. Fable's 4M × 32-byte layout consumes
  the full 128 MiB tactical budget before accounting for the retained observer-ray
  cache; a concrete combined/split layout is needed before implementation.
- **Occupied-slot replacements do not prove avoidable conflict misses.** A first-ever
  key may map to an occupied slot. Entry age since write is not last-access reuse
  distance. Use accurate labels, and a bounded sampled trace/shadow-cache experiment
  when deciding whether associativity or a front cache helps. A shadow-cache
  experiment must preserve the original live query stream.
- **The memory-latency explanation is still unproven.** The sampled self time per
  lookup covers hashing/comparison and other work as well as memory effects. These
  measurements do not identify stalled cycles or prove every operation is random.
- **GeometryKey requires evidence before a fix.** Source guards and preparation
  suggest it should be skipped in these battles. `nm -n -S -C` on the current
  sampled executable shows compiler-generated heap helpers immediately after its
  symbol, consistent with an attribution hypothesis but not proof. A call counter
  plus symbol/address-level attribution should settle this. If actual unprepared
  calls exist, do not simply mark the map prepared: establish geometry ownership,
  mutation/invalidation and preparation side effects first.
- **Low self time/query share does not bound inclusive savings.** Planner setup
  includes more than Soldier copies; shortlist queries may be disproportionately
  expensive. Keep these lower priority pending inclusive measurements, not ruled
  out by Fable's claimed ceilings. Likewise the GeometryKey discrepancy means
  heap time is not reliably bounded by FindFloorPath's flat percentage alone.
- **Traversal results have an API contract.** Current `any=true` callers test only
  whether contact is negative, so a different positive contact is harmless there.
  Confirm this remains true for every caller; `any=false` must preserve the exact
  minimum contact result, including geometry edge cases. New stack traversal must
  have a safe capacity/fallback. Tree changes still require exact ray/battle parity.

## Acceptance and scope

No fewer tactical candidates, coarser visibility, smaller search budgets, slower
reaction cadence, changed rewards, weaker conduct guards, or opponent substitution.
The actor remains trained against active Legacy. No model promotion or automatic
upgrade/restart of the frozen duration experiment.

For a retained implementation: original Sample oracle (882,432 exact cost checks),
12 recorded training-action pairs with full protocol/gameplay parity, 41 historical
pairs, full Linux suite, drills traces and repeat, Windows native parity and Unreal
build. Include direct geometry/clearance boundary tests appropriate to the changed
code. Time uninstrumented builds with alternating order, multiple maps, repeated
outliers and peak RAM. Current verified comparison remains 26.7% less simulation
CPU versus the frozen original in six pairs; no further gain is yet established.
