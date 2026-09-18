# Fable review: feasible approaches and persistent support refusal

Actual response from Claude Fable5.1 (`claude-fable-5-1`), existing subscription project session. Evidence `20260915T231329-bada0ab5`; [request010](../plans/010-feasible-approach-review-request.md). Read-only architectural review, not promotion approval.

---

I have what I need. No further reads required.

## Verdict

The structural blocker is two-fold, and the second one is the regression from candidate100 to 103.

1. **Route revision (BetterContinuation) is the 100 to 103 regression.** In both 6/108 and 7/109 the candidate100 and candidate103 traces are identical up to the first `method_route_revised`, and only the 103 runs then fail. Candidate100 passed both without any revision.
2. **After a support refusal the squad loops instead of escalating.** The refusal is not remembered as a feasibility fact, old-sector fire erases the Support failure, the exhausted state is un-stuck within 0.35s by the threat signature, and alternate approaches are exposed viewpoints of the MG. The platoon receives Blocked only after 45 to 90s of this.

Final-position infeasibility is real (the objective sits on enemy cover), but the correct authority to fix it is the platoon, using the squad's Blocked feedback. The squad should not invent a foothold.

## Trace-backed findings

**A. Revision is the divergence point (candidate103 vs 100).**

- 6/108: identical timeline through 48.0 in both runs (`.../original-candidate100/battle-108-1789538128049663773/trace.jsonl` lines 583 to 2377 and 103's lines 583 to 2377). At 49.0, 103 revises (89.7 to 77.4, `trace.jsonl:2425`). 100 keeps the route, completes at 90.6 and passes with no squad 1 casualties. 103 then loses 9 at 58.0 and 10 at 72.1 to enemy 37 (`events.jsonl:908, 1088`), revises again at 59.8, waits at preflight 70.2 to 90, and never completes.
- 7/109: identical through 12.8. 103 revises at 22.2 (95.4 to 67.8). 100's retained route advances through six stages and completes at 64.35. 103's revised route has a different final approach, the gun refuses the final threat at 44.85, and the loop below begins.
- Mechanism: `BetterContinuation` (`TacticalRouteSim.cpp:179-195`) compares only movers' remaining path cost with a 1.5 unit threshold against costs of 75 to 120. It ignores support geometry, the requested final threat, and staging. The adopting branch (`CognitiveSim.cpp:736-750`) resets the stage to 0, bumps every generation, and wipes `requestedThreat` and both refusal records. Whether the new routes were worse by knowledge is a hypothesis; that they replaced passing routes is fact.

**B. Post-refusal loop (7/108 and 7/109).**

- 7/108: refusal received 56.25, exhausted 56.75, alternate approach accepted 57.10 (`trace.jsonl:3184, 3201, 3232`). The alternate's destination is (10,-21.9), 1.5m from the leader, facing sector (29.2,7), the MG. A second alternate at 71.8 targets (16.9,-30.8) with sector 33. Three movers are incapacitated by MG 39 within 0.4s at 81.05 to 81.45 (`events.jsonl:1297-1304`). Blocked feedback first reaches the platoon at 144.25.
- 7/109: refusals at 44.85, 49.35, 62.35, 68.1, 89.25, 93.25, 103.05, 105.55. The squad re-accepts SupportedAdvance to the same objective at 84.75, 90.85 and 100.75 after refusals. The platoon replaces the goal only at 101.45 (`events.jsonl:1452`).
- Code causes: (a) `FailedHere` exempts Support failures whenever `useful` is true (`CognitiveSim.cpp:124-126`), and `useful` is `ReceivedUsefulSupport` at the MG sector (line 681), which the refusing gun keeps firing at by design. The refused final threat is never recorded. (b) The exhausted gate (line 653) requires `p.threats==threats`; `ThreatSignature` flips on any 8m bucket change, so exhaustion lasts one tick. (c) Alternate candidates come from `Viewpoints(sector)` (line 719-720) with no shelter protection or known-exposure test, unlike gun positions at line 778. (d) `GoalAlternative` sets `hasAlternative=false` (`PlatoonSim.cpp:37`), so later Blocked reports are ignored, and `PlanPlatoon` re-derives the same objective because candidate scoring (lines 64-70) considers neither the mover's reported Support failures nor known enemies at the candidate peek.

**C. Refusal itself is correct.** In 7/108 the gun at (-59.2,-7) was asked to cover 38 at (36.6,-26), 97m away behind cover (`trace.jsonl:3041`); no 40m protected redeployment existed. Refusal preserved MG 39 fire. Premature refusal is not the blocker.

## Implementation contract

Authority invariants: the retained accepted route is the single executable authority; re-scoring feeds eligibility only. A refusal is a received feasibility fact bound to (gun, focus, geometry). The squad never changes the objective; the platoon does, on received Blocked feedback. No candidate becomes eligible on assignment or deployment alone.

1. **Revision authority (ship first, re-run the nine).** In the branch at `CognitiveSim.cpp:734`, adopt a replacement only if the retained remaining path is empty for a required mover, or a matching refusal applies to the retained final approach and the replacement's final threat set is different and not refused. Drop the cost-gain trigger. When adopting, preserve `requestedThreat` and refusals if the destination is unchanged. Expectation, to verify not assume: 6/108 and 7/109 return to candidate100 behaviour because their prefixes are identical.
2. **Sticky refusal memory.** Append `Vec3 focus` to `FailedAttempt` (legacy default zero). On refusal-driven `Fail(Support)` record the focus. In `FailedHere`, exempt a Support failure only when `ReceivedThreatSupport` is true for that failure's focus, never for the plan sector. In `routeCandidate`, reject destinations whose fresh final threats (same rule as lines 322-327) lie within 6m of a refused focus for the bound gun and current geometry.
3. **Bounded exhaustion.** Add `exhaustedAt`. Hold the gate at line 653 for at least `4*reportDelay+5` seconds regardless of threat signature, then fall back to the existing signature rule. A new directive always ends it. This guarantees `goalStatus==Blocked` reaches the platoon.
4. **Platoon revision on received refusal.** In `PlanPlatoon`, skip approach candidates within 12m of any objective the mover's report lists as failed with cause Support at the current geometry, and within 4m of a commander-known enemy observed within 8s. Allow one further `GoalAlternative` after an Observe alternative completes instead of `hasAlternative=false` forever. Reserve or Observe remains the honest fallback with one gun.
5. **Alternate candidates must be protected.** Require `ProtectedAt(shelter, sector)` and zero `KnownPositionExposure` for alternate approach viewpoints, matching the gun-position rule.

## Discriminating scenarios

- **Revision authority.** Mid-execution, a newly scored route is 15% cheaper while the retained route stays feasible: no `method_route_revised`. Geometry mutation blocks the retained corridor: exactly one revision, generations bumped, `requestedThreat` preserved if the destination is unchanged. Control: refused retained final approach plus a coverable alternative approach permits one revision.
- **Refusal memory.** Variant 43 style refusal. While the gun keeps firing at the old sector, no SupportedAdvance or AlternateApproach to the same final threat set is traced as eligible. Eligibility returns only after two real rounds at the refused focus are received.
- **Bounded exhaustion.** After refusal, move a durable enemy 9m to flip the signature. Exhaustion persists at least `4*reportDelay+5`; the platoon receives Blocked and issues an alternative inside that window. A new directive ends exhaustion immediately.
- **Platoon revision.** Commander knows a fresh enemy at the best candidate peek: not chosen. After Blocked feedback with a Support failure at objective X, the next plan avoids X by 12m or issues Observe or Reserve. Control without feedback: X allowed.
- **Alternate exposure.** All viewpoints of the sector have exposed shelters: no AlternateApproach candidates, Observe or Hold selected; control with one protected shelter: that one chosen.

Run each focused scenario, then the original nine after step 1 alone before adding steps 2 to 5, so the regression fix is measured in isolation. Do not open seeds 2001 to 2010.
