# Plan 014 Phase 3b review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3b report (`.local/handoffs/014-phase3b-report.md`) on fingerprint `9b338688d4ab02e0` and read `Sim/SquadDrillSim.cpp` in full, `Sim/PositionSim.h`, and the failing assertion logs. Verified independently: protected files intact, 57 Python tests pass, diff clean. Advisory review, not acceptance.

## Verdict

The attack chain now commits: the covered flank is found on the fixture with the observer confirming the screen blocks 100 % of the defender's line, buddy rushes start, D06, D10, D11 and D16 pass. It then stalls one link further along, and every remaining failure has a specific cause in the code:

1. **Rush endpoints are cover-catalogue queries.** `Assign` with `rush` sets the anchor 8 m along the route but leaves `formation=false` and `radius=3`, so `QueryPositions` generates only catalogue cover within 3 m of that point. On any open stretch of a screened route there is none, the rush is "not executable", and the drill fails with "no executable protected five-second rush" (D08 at 101.65 s). Same class of defect as the Phase 2c formation slots. D07 and the rest of D08 are unexercised because of it.
2. **A failed attack holds forever.** `Fail` sets `SupportHold` with `blocked=true`, after which `UpdateSquadAction` returns without ever leaving that state. A blocked attack must fall back to the closure default, not hold.
3. **A support pause leaves rushers in the open.** `Pause` freezes rush permissions in place; rush endpoints are route points, not protected slots, so D09's protected-hold check fails.
4. **The no-route fallback preempts the emergency response.** `BeginContactAction` issues "no covered route: continue supported bounding closure" before the contact-cover stage can detect effective fire with zero protected slots, so D04's bare control never breaks contact.
5. **The lifecycle pin asserts the wrong field.** `TaskSim`'s shared support-completion path writes a bounded execution deadline into `assignment.execution.deadline` for `Completion::Support` orders. That is the soldier's execution contract, not the planner's stage clock. The pin should assert on the drill stage clock and exclude that field for support completions.
6. **F1 regression** follows from 1 and 2: attacks fail into indefinite holds, and holding squads shoot little. No separate tactical cause is evident.

## Binding corrections for Phase 3c

1. Rush endpoints use projected generation (`formation=true` semantics): the point 8 m along the route snapped to walkable ground, inside the corridor and attack area, with `Safe` from known threats evaluated by line-block as `Covered` already does; catalogue cover is preferred when a slot lies within 3 m, never required.
2. A blocked `SquadAttack` (unreachable rush, alternate exhausted, support lost beyond 30 s) reports its cause upward, runs `Reorganise`, and resumes the closure default: bounding overwatch with the gun group in `SupportByFire`. No indefinite `SupportHold`.
3. `Pause` moves paused rushers to the nearest protected slot within 8 m inside the corridor, retaining instance and generation through the existing paused-order path; with no such slot they hold in place and the pause is traced as exposed.
4. Precedence in contact handling: effective incoming fire with zero protected slots triggers the emergency `BreakContact` before any attack or fallback decision.
5. The lifecycle pin asserts the drill stage clock and ignores `assignment.execution.deadline` on `Completion::Support` orders, with the reason recorded in the test.
6. D07 re-runs unchanged once D08 reaches the assault line.

## Exit for Phase 3c

Unchanged from Phase 3b. One measured build; report and stop if it fails.
