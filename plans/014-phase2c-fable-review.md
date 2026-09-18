# Plan 014 Phase 2c review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 2c report (`.local/handoffs/014-phase2c-report.md`) on fingerprint `26e028623123f46e` and read the traced Works seed-103 battle squad by squad. Verified independently: protected files intact, 52 Python tests pass, diff clean, 40 authored and 110 candidate-trace parity checks reported. Advisory review, not acceptance.

## Verdict

The lifecycle is now real: five of six mechanism pairs pass, the lifecycle pins pass, and continues no longer issue orders. The distribution still fails, and the trace shows exactly why, in two defects that are cheap to fix and one that was my specification error:

1. **Formation slots come from the cover catalogue.** The position service generates candidates from cover, as plan 014 section 6.1 said. A moving wedge on open ground has no cover pieces at its anchors, so on Works seed 103 squad 3 received "no slot, wait within coherence" for all eight members at every plan from 0.1 s to the end and never left its deployment; squad 2 stalled the same way after its first leg. That is a specification error on my side: formation slots for a moving element must be free walkable points snapped to the projected anchor, and cover-catalogue slots are for halted, covering and contact positions only.
2. **Deadlines fail drills that are legitimately halted.** The stage deadline is path time plus allowances from the longest assigned path. A stage with no movers, a squad waiting for slots, a shelter interruption or a contact hold expires it, the drill fails, `Reorganise` runs and the same drill is re-accepted with a fresh order set: nine to eighteen deadline failures per minute in the trace, which is where the remaining churn (184 orders per minute against candidate90's 64) comes from. D05's capable control fails on the same clock.
3. **Emergency retreat without incoming fire.** Astra's own audit found `IssueStage` setting the retreat flag whenever contact cover yields zero protected slots, regardless of fire. Accepted as a defect; fix as described.

The 454 reference order count in my Phase 2b review was taken from the rejected hotfix trace; Astra's digest-equal candidate90 figure of 344 is correct and replaces it.

## Binding corrections for Phase 2d

1. **Two generation modes in the position service.** `formation=true` generates the projected anchor snapped to walkable ground within 3 m, inside the accepted area and corridor, with spacing and lane checks but no cover requirement; `formation=false` keeps the cover-catalogue generation. A member waits only when it is ahead of the squad centre and its anchor lies outside the coherence radius; when no member of an element has a slot, the element contracts to column on the route rather than waiting.
2. **Deadlines measure progress, not time.** A stage's clock runs only while it has movers who are neither sheltering, waiting for a slot, nor in a contact hold; a stage with no movers has no deadline. A deadline expiry fails the stage once; the drill is not re-accepted unchanged. After two consecutive expiries at the same position the squad must change something: contract to column, take the next leg, or report Blocked upward. Trace the rule as `drill_stage_advanced` with reason `no progress`.
3. **Retreat requires fire.** The emergency rearward response needs effective incoming fire and no protected slots, per the Phase 2 ruling.
4. D05's capable control re-runs unchanged; it should pass once the clock is progress-based.

## Exit for Phase 2d

Unchanged from Phase 2c, with the reference orders per minute taken from the digest-equal candidate90 traces. One measured build; report and stop if it fails. Windows and Unreal remain with the architect.
