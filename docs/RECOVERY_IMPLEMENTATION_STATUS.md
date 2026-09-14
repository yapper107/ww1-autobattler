# Latest recovery implementation status

The latest corrected Cause A–E experiment is documented in `RECOVERY_THIRD_PASS_RESULTS.md`. Source `5f53cb886967bd16` scores **2/9 on Linux and Windows**, regressing from the preceding 5/9. The requested mechanisms are implemented and tested, but the candidate is **not accepted** and remains fixture-only. The earlier destination correction and its 3/3 layout-5 result are historical; see `RECOVERY_DESTINATION_FIX.md`.

The report below is the historical status of the preceding `d28f86681c7988cb` implementation. Its 0/3 result and earlier reproduction paths describe that preceding revision.

---

# Recovery plan implementation status

**The recovery plan is not complete. This is an unaccepted, fixture-only implementation.**

The task contract and an initial drill/position-query controller are implemented behind `--recovery`. The required layout-5 seeds 107–109 still fail the unchanged strict envelopment test. This is not an AI-quality improvement claim. Normal battles do not enable this policy; attempting to enable it outside encounters 5–7 is rejected.

## Implemented mechanics

- Stable assignment identity and target parameters; equivalent orders retain their serial. Meaningful target, destination, firing restriction, or selected cover-pair changes create a new assignment.
- Received, Executing, Interrupted, Blocked, Done, Failed, and Superseded status, with reasons and monotonic report sequences. Issuance is recorded separately. Reports travel through message delivery and reaction delays to both squad command roles. Old reports cannot replace newer ones.
- An explicit movement executor. Temporary shelter, suppression, reloads and passage handling retain the received assignment. Navigation failures are reported as Blocked. A reported casualty can invalidate a member's availability after their preceding task was already Done.
- An initial squad drill owns destinations, eliminating the legacy corporal formation refresh for experimental attackers. Its implemented sequence is contact response, establishment of fire, staged travel through form-up cover, and occupation of selected firing positions. Stage completion uses matching task receipts. Replacement members inherit vacated slots.
- Protected firing-position queries with target-area firing lines, angle checks, spacing and reachability. Exact selected shelter/peek parameters travel with the task. Intermediate route points and final assault slots are distinct.
- A reported final-approach prerequisite for shifting supporting fire away from the assault area. Exposed releases retain eight seconds of covering-fire preparation; screened travel does not acquire a compulsory pause at every route sample.
- Additional trace fields for task identity, target, status, cause, observation time, sequence, and geometry. `tools/investigate_tasks.py` reconstructs the lifecycle and explicitly counts battle-ended failures as unfinished execution.
- Revalidation of selected firing positions when a new, received target report materially displaces the target and invalidates their purpose. Casualty availability reports remain valid even when a newer order was still in transit; reserves cannot satisfy a route stage using Done receipts from an unrelated task.
- Local invalidated-cover failure and leader-observed geometry revision handling. Stable cover identifiers remain references to their original geometry.

The investigation also identified and corrected, within the experimental policy, a delivered-fire check originating at the soldier's feet instead of the recorded muzzle; a missing rejoin connection after leaving a route corridor for shelter; intermediate navigation points obstructed by friendly spacing; and a pending stage incorrectly carrying its unreleased final cover slot.

## Acceptance status

| Layout | Seed | Completed routes | Strict envelopment |
| --- | --- | --- | --- |
| 5 | 107 | 0 | Fail |
| 5 | 108 | 1 | Fail |
| 5 | 109 | 0 | Fail |

The baseline was also 0/3 on these cases. Route completion, a victory, and task terminal status are not substitutes for the strict test: two surviving movers must each maintain a physical firing line and at least 45 degrees from assigned support for three continuous seconds, and the route must complete. The evaluator is byte-for-byte unchanged from the preserved baseline.

Recorded same-task interruption/resumption occurs in all three cases (21, 12, and 19 tasks respectively). However, the completed route in seed 108 still does not meet the firing-angle outcome, and other routes lose members or remain unfinished. Seed 108 eliminates the defenders; it still fails the strict test and is not counted as an envelopment. Reports distinguish those failures; they do not resolve them merely by giving them names.

## What remains

| Plan phase | Current state |
| --- | --- |
| 1 — Task contract | Core mechanics and focused regressions implemented; complete encounter exit conditions remain unmet. |
| 2 — Battle drill | Initial attack sequence implemented. Full break-contact, assessment/abandonment, and search/consolidation methods are unfinished. |
| 3 — Firing positions | Query and parameter-preserving execution implemented; strict arrival-purpose acceptance remains unmet. |
| 4 — Tracks | Existing contact persistence/clearing is reused. New leader-scoped proximity track IDs and occupancy fields are not implemented. |
| 5 — Utility and commitment | Full scored method selection and event-driven plan replacement are not implemented. |
| 6 — Platoon scheme | Not started; it depends on the squad gate passing. |

Current covering-fire evidence is tied to a selected target area. It does not yet implement the complete updated-track/overlooking-crossing relationship prescribed by the plan. Updated target reports now trigger position revalidation, but the covering-fire prerequisite still refers to the original target area until reassessment. A replacement member may encounter resistance that the original route did not account for. These remain implementation weaknesses, not reasons to relax the evaluator.

No ten-battle comparison, nine-encounter promotion check, new full-battle performance claim, or Unreal gameplay deployment is justified while the first fixture gate fails. The playable Unreal prototype remains the preceding build.

## Reproduction

Run from `/home/jchan/ww1-autobattler`:

```bash
./scripts/battle-lab.sh --recovery --encounter 5 --seed 107 --seconds 360 --evaluate --out .local/recovery-runs
python3 tools/investigate_tasks.py .local/recovery-runs/latest.json --out .local/recovery-tasks.json
python3 tools/investigate_engagement.py .local/recovery-runs/latest.json --out .local/recovery-gates.json
python3 tools/evaluate_routes.py .local/recovery-runs/latest.json
./scripts/test-sim.sh --recovery
./scripts/test-sim.sh --focused
python3 -m unittest discover -s tests -p 'test_*.py'
```

Use `.local/lab/battle-lab` directly for subsequent seeds without rebuilding. Repeat the first run with seeds 108 and 109. `tools/rerun_battle.py` restores the experimental policy from a run's manifest. Diagnostic options remain separate from this gameplay policy switch.

The native Windows command-line runner also supports `--recovery`. The Unreal preparation UI deliberately does not expose the unaccepted policy.

## Verification of this source revision

Simulation source ID: `d28f86681c7988cb`. Latest gate evidence: `.local/recovery/review-gate/gate.json`, with three distinct manifests and task-investigation reports. The earlier `delivery-gate` directory belongs to a superseded experimental source revision.

- Recovery C++ regressions passed, including same-task resumption, stale status rejection, delayed casualty delivery, reserve assignment, receipt-owned precedence, target-report invalidation, geometry invalidation, and trace parity.
- Focused C++ regression suite passed: geometry, navigation, perception knowledge boundaries, existing squad/platoon behavior, prepared assaults, rifle suppression, and diagnostics.
- Python analyzer suite: 22 tests passed.
- Native Windows CLI compiled successfully. A 30-second layout-5 seed-107 recovery run with tracing and its trace-disabled counterpart both produced gameplay digest `6056547819761348242`.
- The previous and current Linux policy with recovery disabled produced the same 30-second layout-5 seed-107 digest, `372724838988074300`. This is a bounded isolation check, not full-battle equivalence evidence.
- `tools/evaluate_routes.py` is unchanged from the preserved pre-implementation source archive. `git diff --check` passed.

These checks verify specific mechanics and build compatibility. They do not satisfy the recovery plan's tactical acceptance gate. No Unreal module build or in-editor smoke test was performed for this experimental controller, and the required cold/warm performance comparison remains undone.
