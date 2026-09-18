# Plan 014 Phase 0b review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 16 September 2026. Reviewed Astra's hotfix report at `.local/handoffs/014-phase0b-report.md`, working source `19fe733644e046d8`. Verified independently: only simulation sources differ from the protected set; the evaluator, both seed lists, the terrain source and the authored encounter function are byte-identical; Python suite passes; the Windows mirror is writable from outside the Codex sandbox. Advisory review, not acceptance.

## Verdict

The hotfix is correctly reported as unpromotable, and the report's honesty is the most valuable thing in it: zero-shot battles were labelled adverse rather than presented as reduced exposure. Two of the four failures are caused by my Phase 0 resolutions, not by the implementation, and I withdraw them below. Candidate90 remains the main build; the working tree stays the unpromoted hotfix while one corrected iteration runs. If that iteration still fails the engagement check, the hotfix stops, the tree is restored from `.local/phase0b/original`, and effort moves to Phase 1.

What the increments established:

- Increment 2 (occupancy on typed and emergency tasks) is the one clean gain: Works nearest-squadmate median 0.98 m to 2.19 m, under-2 m share 80 % to 44 %, with engagement preserved and friendly hits down from 332 to 12. Keep it.
- Increment 1 stopped the war: retaining the first lane leg with no sweep leaves every squad at its own start line. My resolution 3 was wrong as written.
- Increments 3 and 4 also stopped the war: a mandatory protected covering band with a block on shortfall means the method never executes on open ground. My resolution 2 was too strict as written.
- Three cognition suites regress; most likely downstream of the blocking behaviour. They must be re-run after the corrections and any residual failure explained per assertion, never weakened.

## Corrected resolutions

1. **Mission lifecycle (replaces resolution 3).** The cognition default intent is the deployment-lane sweep, not its first leg: a parent `GoalIntent` spanning the sweep, with the current leg as its child. Leg completion receipts advance to the next leg with a new child id and the same parent. A contact within engagement range or a platoon directive supersedes the sweep exactly as it supersedes any mission today. When no legs remain, the squad observes from the last leg. Trace `mission_initialised` and `mission_leg_advanced` with reasons. Pin: on Works with no enemy sightings for a squad, it reaches at least three legs before 120 s; control with a scripted platoon directive at 40 s: the sweep is superseded and never resumed while the directive lives.
2. **Covering allocation (replaces resolution 2).** The 12-25 m protected band is the first preference, not a requirement. Allocation tiers, each traced with `method_covering_tier`: (a) protected slot in the band with a line to the sector; (b) protected slot within 40 m with a line to the sector; (c) the member's current position if protected against known threats; (d) the best-scored available slot under the existing exposure-weighted score with occupancy. The method blocks only when the required occupants cannot obtain slots. Pin: the four-metre corridor fixture with only two protected covering slots: two members take tier (a), the rest take lower tiers, the method executes, and the objective is occupied; control with no objective slot at all: blocked.
3. **Suite reconciliation.** After 1 and 2, re-run `--cognition`, `--decision-loop` and `--reliability`. For any assertion still failing, state whether the assertion encodes candidate90 behaviour that the hotfix intentionally changes (then propose the exact new expectation for my approval) or exposes a defect (then fix it). No test is edited without that classification in the report.
4. **Engagement guard.** The increment runner aborts a ten-seed set and marks it failed as soon as three runs produce zero shots, so a dead configuration costs minutes, not an hour.
5. **Windows verification.** The mirror at the Codex ArmyPrototype directory is writable from outside the sandbox; the corrected run receives it as a writable directory so the existing lab build and test scripts can complete. Unreal builds and replay smoke are not part of this iteration.

## Stop rule

One corrected iteration, measured exactly as before. Exit for the hotfix: engagement preserved on all twenty runs (no zero-shot battle), nearest-squadmate and under-2 m share better than candidate90 on both maps with per-run adverse cases listed, legacy digest parity, trace parity, the full suite and the three optional suites reconciled, frozen 9 and 30 disclosed. Meeting legacy's absolute dispersion is no longer required of a hotfix; it is a target for the drills controller. If the iteration fails the engagement check, restore candidate90 in the tree and proceed to Phase 1.
