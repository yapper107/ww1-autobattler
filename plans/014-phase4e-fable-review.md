# Plan 014 Phase 4e review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 4e report (`.local/handoffs/014-phase4e-report.md`) on fingerprint `d8586da13b539c61` and the traced Works seed-103 and Trenches seed-108 battles. Verified independently: protected files intact, 63 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

The advance loop is gone: P07 passes on the first attempt, all 27 selectors, the full suite, the 40 digests and trace parity pass, all 110 battles completed with the guards clear, and the Works stall is replaced by real movement (three leg completions and eight assignments where there were ninety-four and fifty). The tactical exit still fails, and the traces show why: on Works the planner emitted `platoon_blocked` 110 times in six minutes and on Trenches 82, each time "no covered route on either flank: Fix, Observe, Reserve". Against an equal enemy on open ground a covered flank route rarely exists, so three of four squads spend the battle fixing, observing or in reserve, and the front stops at about 70 m out. Trenches seed 103 fired nothing for the same reason.

That rule was mine, and it is wrong as written. Doctrine offers three answers to a known enemy, not two: envelop when a covered route exists; attack by fire and movement under suppression when it does not and fire superiority can be gained; hold and observe only briefly when neither holds, then withdraw or attack anyway. The Phase 3 squads did the second by default; the platoon layer now forbids it.

## Binding corrections for Phase 4f

1. **Third manoeuvre branch.** When no covered flank route exists, the fixing squad establishes support by fire on the enemy group with the platoon weapon, and the other squads advance in bounding overwatch inside their own corridors toward the flank-most cover of the group, exactly as the Phase 3 closure default does, with Reserve capacity zero. This is the platoon's frontal attack by fire and movement.
2. **Observe is bounded.** Fix plus Observe plus Reserve is chosen only when the believed strength ratio is below 1.0 and superiority is not established; it lasts at most 45 s. On expiry the platoon attacks by fire and movement if superiority has been established since, and withdraws otherwise. It never holds for the rest of the battle.
3. **Scenario P08.** Equal strength, open ground, no covered route on either side: assert the fixing squad's delivered fire on the group, the other squads' front displacement of at least 40 m within 90 s of contact under bounding overwatch, no Reserve directive, and no `platoon_blocked` after the branch is chosen. Control: believed ratio 0.6 with no superiority: Fix and Observe, then Withdraw within 45 s plus transport.
4. Ruling 3 of the Phase 4d review is completed: the loop guard validates the resolved endpoint, and reports route exhaustion when the forward minimum cannot be met.

## Allowance and exit

Up to three local attempts, documented, no distribution runs between them, until P08 and all 27 selectors pass on one source; then the full suite, the 40 digests, trace parity, and the single measured build under the Phase 4 exit. Report and stop if it fails. The Phase 4 exit's targeted authored criteria remain total casualties and closure against candidate90, orders per minute not regressing, F1 outcomes not regressing against Phase 3e, and spacing against legacy with the trench floor targeted.

## Native Windows verification (architect session, 17 September 2026)

On `d8586da13b539c61`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase4e/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
