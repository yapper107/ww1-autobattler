Read the roadmap, the retained interfaces in ManeuverSim.h, TacticalRouteSim.h, and CoordinationSim.h, plus the current PlanSim, PlatoonSim, BeliefSim, and CommandSim send path from the prior review. Here is the contract review.

**Interface pitfalls**

- **PlanSquad reads legacy fields, not a record.** It consumes `mission`, `advancing`, `engaged`, `hasWaypoint`, `maneuver`, `movementBlock`, `teamPlan`, `supportUseful`, `supportNeedsMove` and `leader.supportReadyAt` (`CommandSim.cpp:227-330`). If the cognition branch stops the legacy writers, those go stale but are still read. Do not adapt the record into those fields. Give PlanSquad a cognition branch that emits orders only from the accepted record, like the Observe branch already does (`CommandSim.cpp:222-226`). Also bypass the `advancing` gate at `CommandSim.cpp:504`, which is legacy pacing.
- **Order dedup hides method changes.** `send` skips equivalent task, position and intent id (`CommandSim.cpp:415`). A method switch that lands on the same task and position is silently dropped and receipts stay tagged to the old method. Give each method instance its own intent id with the goal as parent, so a switch always re-issues and receipts correlate.
- **Completion recomputed from a sliding window.** `ReportedGoalStatus` counts receipts within 20 s (`BeliefSim.cpp:57`), so a completed stage can un-complete. Latch stage Complete in the record. Compute it once at transition, never re-derive.
- **Two levels react to one receipt.** Platoon `GoalAlternative` and a squad method library both respond to member Blocked. Rule: the squad exhausts its feasible methods first and reports Blocked upward only when none remain, with the last rejection reason. In cognition mode `ReportedGoalStatus` reads the squad record status, not raw member receipts.
- **Route staging lives in TeamPlan.** `ExecuteTask` holds at intermediate stages via `assignment.teamPlan.route` and `released` (`TaskSim.cpp:99-101`). The record must own `route` and `stage` and pass them through `PlannedOrder.teamPlan`, or bound moves break.
- **Support evidence.** "Assigned MG" is `cmd.support`. "Deployed" is the Ready message. "Fire reaching the area" is only a `FireDelivery` whose target lies near the threat overlooking the crossing within the last 6 s and `supportBlocked` false. Gate Execute on the third. Use `SupportCoverage` and `CoveringPath` for geometry only.
- **Config plumbing.** `cognition` must join `SameConfig`, the digest, the manifest and rerun. Encounter gating is hardcoded to 8 (`BattleSim.cpp:585-592`). Feature scenarios need their own fixtures, so gate on a fixture list rather than one number.
- **Safety override.** Member-level Interrupted already exists. The record needs `override{reason, since}` that freezes the stage clock, keeps the goal and method, and resumes without a new intent id. Assert receipts stay under one serial across the pause.

**Minimal feasible methods**

- **Observe.** Assess picks a vantage from cover peeks with a clear line to the objective region using known geometry. Prepare moves the point pair, others hold. Execute sets attention sector to the objective. Complete on a fresh sighting or clearing evidence dated after stage start, or on timeout with an explicit "nothing learned" outcome carried on `SquadSituation`. Never mark the region safe on arrival.
- **SupportedAdvance.** Assess scores support positions with the existing PlanSquad support loop and a route from `TacticalRoutePlanner` on leader knowledge. Prepare issues Overwatch and waits for delivery evidence, with a timeout that yields Blocked cause Support. Execute issues BoundMove by route stages, advancing on arrival receipts. Complete when at least half the movers report Done at the final stage.
- **AlternateApproach.** SupportedAdvance re-run at commit time with the failed corridor excluded, using the planner's other side candidates. No stored route is executed without re-evaluation.
- **Hold and Withdraw.** Hold is Overwatch in current cover and ends only by supersession or expiry. Withdraw is PullBack to rear cover, complete when half arrive.

**Commitment.** Commit once per goal instance. Re-propose only on stage failure, a knowledge revision that places a known threat inside the committed corridor, or stage timeout. Apply a switching cost and stable tie order. Trace every candidate with score and rejection reason at each proposal.

**Discriminating scenarios**

- **Soldier.** Obstacle inserted across the only lane after the order: receipt Blocked Unreachable, goal retained, no silent abandonment. Scripted suppression: Interrupted then Executing under the same serial.
- **Squad.** Mirrored pair: MG cannot see the crossing versus can. First yields Blocked cause Support with zero mover movement. Second starts movement only after a delivery report timestamp. Two-lane fixture with lane A obstructed: method switches to AlternateApproach, corridor excludes lane A, one trace owner.
- **Platoon.** Squad reports no feasible method: platoon issues Observe or reassigns support, one causal trace chain. Same evidence under two seeded profiles: one commits, one observes, both repeatable.

Keep the strict evaluator untouched. These scenarios establish feature behavior, not envelopment success.
