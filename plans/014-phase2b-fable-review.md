# Plan 014 Phase 2b review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 2b report (`.local/handoffs/014-phase2b-report.md`) on fingerprint `d80bca688ebe67ad`, and read `Sim/DrillSim.cpp` and the traced Works seed-107 battle directly. Verified independently: protected files intact, 50 Python tests pass, diff clean, 40 of 40 authored digests unchanged. Advisory review, not acceptance.

## Verdict

The corrected build fails the exit and the report is right not to iterate. The cause is not the closure ruling or the mechanism bounds. It is structural, and it was visible only by reading the code and the trace, which I should have done before issuing tactical rulings:

- `UpdateDrillPlan` re-plans every second, re-queries every position and increments the order generation each time. On Works seed 107 it issued 1630 orders to its own soldiers in six minutes (272 per minute, up to 71 to one soldier) against 454 for cognition on the same seed. Every re-issue restarts execution, so soldiers move instead of aiming: 0.089 hits per soldier-minute against 0.498. That single defect explains the casualty collapse on both authored maps, the failed closure, and the D03 and D17 failures.
- Elements are re-formed from survivors at every drill acceptance (`AssignElements` on each new instance), which violates the plan's frozen-element invariant and is exactly why D05 fails: the gun group refills on the contact transition.
- The plan's method lifecycle (accept, stage, advance on evidence, commit otherwise) was not implemented; the controller is one reactive function with no stage ownership. The foundation work around it (plumbing, position service, harness) is sound.

## Binding structure for Phase 2c

1. **Commitment.** A drill instance owns an accepted stage. Positions are queried and orders issued only at stage transitions, never on a timer. A transition happens only on: stage completion (arrival receipts from at least half the moving element, latched once per stage, with a 3 s grace for the rest); stage deadline; a material knowledge change with hysteresis (a new contact inside 100 m; the current contact unknown for more than 10 s; effective incoming fire beginning or ending, 6 s hysteresis; superiority established or lost, 8 s hysteresis, as cognition's support release and loss already do); a platoon directive; or an element dropping below `minStrength`. Otherwise the planner returns without touching generation or positions. Trace every transition as `drill_stage_advanced` with its trigger; trace nothing for a continue.
2. **Stationary members hold.** An element that is not moving keeps its slots and its `Overwatch`/`Occupy` orders until its stage changes; a slot is invalidated only by a geometry revision or a known enemy inside its uncertainty radius.
3. **Bounding as stages.** In bounding overwatch the moving element receives one order set to positions within 35 m of the overwatch element; the overwatch element receives none during the bound; on completion the roles swap and one new order set is issued.
4. **React to contact as stages.** Stage 1 issues cover-and-return-fire positions once. The assessment at 3 s plus reaction decides once: hold and fire from cover while the contact persists without superiority, or resume closure by the bounding stages above. No per-second re-planning; a fresh contact or fire change re-enters through the hysteresis rules.
5. **Frozen elements.** Elements are assigned at deployment and re-formed only by `Reorganise` at drill completion or failure, or when an element falls below `minStrength`. A new drill instance inherits the current elements.
6. **Arrival is per stage.** `Arrived` latches on the stage's own receipts; it is not re-evaluated as a continuous condition.

## Exit for Phase 2c

The corrected criteria of the Phase 2 review, plus: orders issued per minute to own soldiers not above candidate90 on the same map and seed (traced candidate90 runs are cheap and digest-equal with tracing on). Report hits per soldier-minute alongside as a diagnostic. Mechanism pairs D01 to D05 and D17 re-run under the same rulings; D05 must now pass by frozen elements alone. One measured build; stop and report if it fails.

## Note to the user

Phase 2 has taken three measured builds. The first two failures were partly my rulings; this one is a missing invariant from the plan that I should have checked in the code before measuring. The harness caught each within one build, the playable game was never affected, and the fix is the lifecycle the plan specified rather than new tactical rules.
