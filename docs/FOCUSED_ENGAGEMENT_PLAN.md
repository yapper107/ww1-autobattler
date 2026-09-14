# Focused engagement repair plan

Implement one reliable support–movement–firing sequence before adding more AI systems. Preserve the current build (`1e94efaf1bfb21f3`) and archived evaluation as the comparison baseline.

1. **Explain the first failed engagement.** Extend the offline route evaluator with a gate-by-gate breakdown: accepted route, receipt, progress, arrival, surviving support, physical firing solution, second angle, sustained engagement. Link failures to route/order/decision IDs. Audit the evaluator itself without weakening its existing success criterion.
2. **Repair the first demonstrated execution failure.** Use northern layout 5, seed 107. Check that the squad's stage destination remains the soldier's actual assignment, that support retains its role, and that arrival becomes useful observation/fire. Add focused regressions for confirmed causes. Preserve suppression, friendly-fire holds, reaction delays, and actor-only knowledge.
3. **Prove the sequence and generalize.** Repeat the same encounter, then northern/southern/bent layouts with seeds 107–109. Keep defender elimination separate from the unchanged strict second-angle measure. Investigate remaining failed gates before expanding scope.
4. **Reduce measured planning cost separately.** Reuse repeated route-cost calculations within a valid planning context. Verify any performance-only change against the preceding executable's gameplay digest before mixing it with behavior changes.
5. **Validate and deliver.** Compare ten matched full battles for order reversals, unnecessary cover changes, exposed inactivity, and useful engagement. Run deterministic/safety/geometry regressions, Python analysis tests, Windows builds, main/trench Unreal checks, and serialized Windows timings. Deliver a playable build and an evidence-backed report with remaining failures.

Research will address a concrete unresolved mechanism when the trace/code audit cannot explain it. Existing Days Gone coordination and Killzone corridor references guide responsibility boundaries; no additional general AI framework is planned.

Acceptance remains visible: target 8/9 strict controlled flanks, substantially reduced avoidable order churn without increased unexplained inactivity, and recovery of the previous pass's loading regression. Isolated movement or defender elimination will not be relabeled as successful envelopment.


## Execution outcome

- **Gate investigator: delivered.** Accepted routes now have offline receipt, execution, arrival, firing-angle and path-recovery evidence. A missing diagnostic for pauses originating in fireteam coordination is repaired. Observer sightline metrics remain separate from nearby-cover heuristics.
- **Behavior experiments: evaluated and rejected.** The broad candidate reduced rapid order reversals but increased stationary exposure without a firing solution and eliminated useful maneuver completions in the ten-seed comparison. Smaller route/waypoint repairs also failed controlled engagements; the direct-order repair failed an existing fixed-defender regression. These changes were not retained in the playable build.
- **Strict tactical acceptance: not achieved.** The delivered build preserves the baseline's 0/9 strict second-angle result. The 8/9 target was not relaxed, and defender elimination was not counted as a successful flank.
- **Performance: delivered separately.** Exact route-cost reuse, compact revision-valid visibility caching, and conservative cost bounds retained identical gameplay in ten archived full battles. Windows timing evidence is in the results report.
- **Delivery scope:** improved investigation and generation speed, with the preceding AI behavior preserved. The planned satisfactory AI repair remains unfinished; no persistent soldier stats or destruction mechanics were introduced.
