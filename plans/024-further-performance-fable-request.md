# Further exact simulator optimization — Fable 5.1 architecture consultation

Jordan requests: "Have Fable look into some further optimization."
Read-only, bounded source review. Return recommendations; do not modify the
checkout, launch other agents, run battles/builds/tests, or change live training.
Astra owns implementation and verification. Use existing subscription only.

## Revision and objective

HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16 plus working changes.
Current simulator fingerprint 69962220d762ea04. Original ongoing training binary
is frozen at d73667841df73faa. Identify the next two or three worthwhile exact
optimizations from the newly measured CURRENT build, with implementation scope,
equivalence/invalidation invariants and decisive experiments. Do not promise a
percentage improvement without measurements. A ranked recommendation is requested;
no implementation is requested in this consultation.

## Fresh evidence

Read docs/NEURAL_TRAINING_CURRENT_PROFILE.md first. Three already-used training
maps 756/713/739, exact saved action sequences from seed24/25/26 update1 episode0.
Six direct pairs (two repeats/map): 257.359 original vs188.659 current native CPU
seconds, 26.7% less. All18 runs including separate stage and sampling probes match
complete protocol and outcome hashes. No final reserved maps were opened.

Stage process CPU: commands68.11%, soldier decisions20.88%, perception6.23%,
recording2.25%, movement1.60%, firing.62%, ballistics.14%. Nested tactical36.35%,
navigation17.05% (overlap; cannot add to stages or to each other).
Fresh flat sampled self CPU: MemoisedSegment26.34%, SpatialIndex::Query18.60%,
TacticalRoutePlanner::EstimatedVisible15.60%, FindFloorPath7.35%, GeometryKey5.69%,
SegmentObstacle4.67%. Memo hits131922972 / lookups184885265 =71.35% aggregate.
No perf installed. Gprof PC sampling via link-time -pg with existing O2 objects,
not function-entry instrumentation. Samples are not hardware memory-stall evidence
and do not identify callers. Stage timers are process CPU in scratch copies only.
Evidence: .local/plan024/profile-current/{summary.json,aggregate-flat.txt,build.py,
run.py,profiles.json,pairs.json}. No need to read large raw logs.

## Relevant code and previous findings

- Unreal/Source/ArmyPrototype/Sim/SpatialSim.cpp: MemoisedSegment, SpatialIndex,
  IndexedContact. Exact float-word memo key and kind, geometry revision.
- TacticalRouteSim.cpp/.h: snapped endpoints/weights reused; already stable-sorts
  grouped threats descending bound; already bypasses segment memo on prepared-map
  tactical-ray misses. Both optimizations retained and fully verified.
- EnvironmentSim.cpp: GeometryKey callers, navigation geometry caches, FindFloorPath,
  ClearLine and Walkable. In particular explain real GeometryKey call paths/map
  preparation if discoverable; do not dismiss fresh 5.69% as attribution artifact.
- BattleSim.cpp: prepared/unprepared ClearLine3D, collision query, simulation stages.
- ManeuverSim.cpp and CommandSim.cpp: callers only as necessary to locate useful
  exact reuse boundaries, not broad controller redesign.
- docs/NEURAL_TRAINING_PERFORMANCE_2.md; plans/024-command-performance-next-steps.md;
  plans/024-command-performance-implementation-review.md: prior advice/disposition.

Previously rejected experiments: regional connection/path copying roughly flat;
shrinking visibility/segment memo tables lowered memory but slowed CPU. Don't
re-propose as a proven win. Previous counters were for cfcd101678649cb2, not current:
tactical misses accounted for25–29% of all ClearLine3D calls, cover shortlist4–5%;
conditional segment hits after tactical misses7–10%. Bypass is already implemented.
Low call count or low self time does not bound inclusive cost. Current aggregate
71% memo hit rate is not a reason to remove the remaining memo wholesale.

## Constraints and acceptance

Identical observations, legal masks, float costs, paths/candidate order and stable
ties, action choices, RNG draws, rewards, execution and outcomes. No fewer rays,
coarser geometry, lower search budgets, less frequent decisions, policy changes,
weaker guards, reduced scenario coverage or neural opponent substitution.
Memory remains bounded for parallel lean workers. Prepared/unprepared maps,
geometry invalidation and exact collision/visibility semantics must remain valid.
No end-to-end learning speed claims from simulator-only measurements. Existing
40-update experiment keeps its binary/configuration/opponent (active Legacy).
No training restart or model promotion.

For every shortlisted idea specify (1) measured evidence vs hypothesis, (2) exact
source locations and API/lifetime boundary, (3) why equivalence can hold and risks,
(4) minimum profiling/ablation that decides whether to implement further. Consider
remaining memo work, per-ray query setup reuse, exact tactical reuse/prefetch and
GeometryKey only where source/evidence support them. Tell us what NOT to pursue
based on actual measured costs; don't assume memory latency without counters.

Implementation acceptance later: original exact Sample oracle882432 comparisons,
12 recorded-action replay pairs with full message/end parity,41 historical pairs,
full Linux suite, drills traces/repeat, Windows native parity and Unreal build;
matched uninstrumented CPU timings with alternating order and repeated outliers.
Please keep the response bounded, concrete and prioritized, with source citations.
