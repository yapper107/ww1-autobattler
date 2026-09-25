# Fable 5.1 request: exact squad-command performance

Jordan explicitly asks for Claude Fable 5.1's architectural advice on the next
squad-command optimizations. Return a bounded read-only review; do not modify
source, start benchmarks, interrupt training, or delegate. Astra implements.
Use the existing subscription and exact model claude-fable-5-1 only.

Source HEAD: c760cae7dd15bf827d23f2cab097920ae14fbb16 with uncommitted Plan 024
implementation and the verified optimization. Current simulator fingerprint:
cfcd101678649cb2. Frozen running experiment: d73667841df73faa.

Objective: reduce whole-battle simulation CPU time while preserving exactly the
same observations, legal actions, decisions, routes, random draws, rewards and
outcomes. No reduced search budget, candidate count, simulation fidelity or
weakened conduct guard. Actor knowledge must remain local; the trained side fights
active Legacy Plan 023. Keep the current three-seed, 40-update experiment frozen.

Read docs/NEURAL_TRAINING_PERFORMANCE.md, plans/024-exact-route-performance.md and
plans/024-route-performance-astra-review.md, then relevant code under
Unreal/Source/ArmyPrototype/Sim/: ManeuverSim.cpp (UpdateManeuver),
TacticalRouteSim.cpp/.h, SpatialSim.cpp, EnvironmentSim.cpp and CommandSim.cpp.
Read tools/neural_worker.h if relevant to measured behavior. Historical command
architecture is documented in plans/023-the-rifle-group-moves-as-one.md.

Measurements: an original-build battle took 33.88 seconds, command logic 26.05
(76.9%), tactical routing an inclusive 19.18 (56.6%), individual decisions 4.98,
perception 1.54. It made 64.9 million sight queries and 73.5 million segment memo
lookups. Original flat sample: EstimatedVisible 29.09% self, MemoisedSegment
26.23%, SpatialIndex::Query 13.43%. These are pre-optimization numbers, not an
updated attribution for cfcd101678649cb2.

Retained change: reuse exact threat weights and lazily snapped/packed sight
endpoints within the immutable planner assessment. Across 12 recorded training
battles on 12 maps, 6,095 decision messages plus receipts/rewards and final digests
match; native CPU 504.46 -> 424.28 seconds (15.9% reduction), peak memory
221.46 -> 221.53 MiB. 41 historical pairs, 441,216 bit-exact Sample comparisons,
full Linux suite, three drills trace pairs plus repeat pass. New Windows/Unreal
verification is unavailable in this sandbox. Independent Astra review found an
eager-conversion issue that was fixed by lazy initialization; no Fable review of
this performance patch has yet succeeded.

Discarded: regional connection/path-copy reuse was flat on timing; shrinking the
visibility and segment caches saved RAM but increased CPU. Do not re-propose
those as proven wins. Local evidence is .local/plan024/performance/.

Astra's possible next steps (hypotheses, not accepted changes):
1. Re-profile the optimized binary across representative recorded battles.
2. Defer TacticalRoutePlanner construction when routeAssessment can be reused;
   inspect constructor side effects and map invalidation before endorsing it.
3. Reuse common per-cover calculations across the five maneuver families while
   preserving float arithmetic, candidate ordering and actor/time dependencies.
4. Optimize exact segment-cache hashing/memory access and obstacle traversal if
   they remain dominant. Existing collision handling must continue to recompute
   exact answers; do not assume a smaller cache is faster.

Please provide: the highest-value next two or three changes grounded in inspected
code; correctness traps and exact cache keys/lifetimes/invalidation; an incremental
implementation order; measurements needed before estimating speedup; and the
acceptance gate for each. Flag any existing behavior-equivalence defect in the
retained patch. Explain where our hypotheses are wrong or unlikely to matter.
Do not invent a speedup estimate or claim current profiling proves a new gain.

## Attempt status — 22 September 2026

The launcher doctor confirmed an existing Claude subscription sign-in. The actual
ask exited before inference: it cannot create the project's `active.lock` under
`/home/jchan/.local/state/astra-fable/` because that directory is read-only in
this session. No Fable response or approval was received and no substitute model
was used. Evidence: `.local/plan024/performance/fable-command-review/status.json`.

## Successful retry — 22 September 2026

After Jordan enabled full filesystem and network access, the same project launcher
completed the consultation in its dedicated architect session. Exact Fable 5.1
responder metadata and successful terminal result were verified. See the
[verbatim review](024-command-performance-fable-review.md) and
[Astra’s disposition](024-command-performance-next-steps.md). The earlier blocked
attempt remains above as history. No simulator or training code changed.
