# Plan 015 step B third review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step B area-fire continuation (`.local/handoffs/015-step-b-report.md`) on fingerprint `aea3516355ab7f4a`. Verified independently: protected files intact, Python suite passes, diff clean. Advisory review, not acceptance.

## Verdict

The core of plan 015 now works end to end: a squad suppressing a group broadcasts it, an idle neighbour with a covered route volunteers an assault six seconds later, reaches its phase line at 78.65 s, and the fixing squad lifts 1.35 s after hearing it, while the rigid-template control waits (Q02). Help arrives 21 s after a call (Q04). D05 and D08 are restored, the latter consolidating at 161.55 s with a 4.95 s longest rush. 26 of 28 selectors pass.

Two items remain:

1. **Q03 (two-pronged assault).** The lead squad's rush of 2.3 m times out at 45 s, the leader reports failure and returns to closure, and no phase line follows. A rush that ends within 3 m of its endpoint has arrived; treating it as a failure is a contract defect, not a tactical one.
2. **D09 regression.** Longer rushes leave three members without a protected hold within 8 m when support is lost, so they hold exposed. The 8 m pause radius predates 15 m rushes.

Astra's additional implementation repairs (tick-level rush cap, one bounded recovery bound after a timeout receipt with more than 3 m of progress, waking the squad planner on a lateral phase-line receipt) are accepted as implementation detail within the ruled contracts.

## Rulings

1. **Arrival tolerance.** A rush or bound whose member is within 3 m of its endpoint at timeout is complete, not failed; the receipt is Done with the actual position. This applies to every movement stage.
2. **Pause radius follows the rush.** On support loss, paused rushers seek the nearest protected slot within the rush length (15 m) along the corridor, not 8 m; the protected-hold assertion is unchanged.
3. **Bounded deferral of the join.** Up to three local attempts for Q03 and D09. D09 must pass. If Q03 still fails after three attempts, the join behaviour is gated off for this build (a second squad that finds a route supports by fire from its position instead of assaulting), Q03 is recorded as deferred with the user's decision explicitly unmet, and steps C, E and D proceed so the user has a replay build to judge. The join is revisited immediately after step E. This is a sequencing decision, not a change to the user's choice.
