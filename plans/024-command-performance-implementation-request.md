# Fable 5.1 implementation review: threat bounds and tactical memo bypass

Read-only bounded review of the implemented follow-up to your performance advice.
Do not edit source, run tests, delegate, or change the running training experiment.
Current native source: 69962220d762ea04. Original first-optimization source:
cfcd101678649cb2, copies in .local/plan024/performance2/before/. HEAD remains
c760cae7dd15bf827d23f2cab097920ae14fbb16 plus existing working changes.

Only new production change is in
Unreal/Source/ArmyPrototype/Sim/TacticalRouteSim.cpp:
1. Stable-sort already-merged ThreatSamples by descending confidence × weapon
   weight in the constructor, preserving grouping, per-threat arithmetic and lazy
   snapping. Sample's existing maximum-bound skip and distance checks stay intact.
2. On a tactical ray-table miss, prepared maps call the existing public
   IndexedContact(map, from, to, true) < 0 directly; preserve the sight counter.
   Unprepared maps still call ClearLine3D. Geometry revision handling remains in
   both the tactical ray table and IndexedContact. No new visibility approximation.

Tests/route_tests.h adds a small regression comparing report permutations, tied
weights, both stances and prepared/unprepared geometry. Our extended standalone
reference harness compares against the original pre-performance Sample: 882,432
exact field-cost comparisons pass for sorting alone and the combined change.
The first full recorded battle matches all protocol/end hashes. Three-arm rotated
screening on three existing training maps compares cfcd baseline, sorting alone,
and combined; two completed cases: CPU 34.28 ->31.79 ->29.62 seconds, and
43.09 ->40.42 ->37.36. Third is running. Broader 12-pair benchmark, 41 historical
pairs and full suite are running; do not claim them passed yet.

Updated profile-only counters on three recorded cfcd battles corrected an earlier
attribution: tactical misses are 25.4–29.4% of all ClearLine3D queries, shortlist
queries 4.3–4.8%, other callers the rest. Tactical outer ray hit rate 68.8–73.2%;
conditional segment-memo hit rate after a tactical miss only 6.7–10.1%.
`perf` was not installed (no CPU hardware attribution claim). Instrumented replays
match original complete protocol/outcome hashes. Exact counts in
.local/plan024/performance2/profile/summary.json. Memory-latency dominance remains
unproven; we selected a measured, scoped bypass experiment rather than assuming it.

Assess exact float/max/skip equivalence, stable grouping, cache invalidation,
prepared/unprepared dispatch, counter semantics, and any overlooked behavior or
portability risk. Cite only concrete blockers or useful acceptance additions.
Do not propose broader optimization redesigns. Return a concise verdict;
Astra owns all testing and integration. Frozen training binary and settings stay
unchanged, as required. We need identical behavior with measured speed improvement.
