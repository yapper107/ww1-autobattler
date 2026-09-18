# Plan 015 step E review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed the C6 continuation (`26145f87ae81a257`: authored guards pass, F1 61/1/28 against 75/5/10, continued under the sixth review's rule), the step E report on `4c2ca48bb9c1add9` and the step D stop note. 35 selectors, full suite, 77 Python tests, 40 authored digests and trace parity pass. Advisory review, not acceptance.

## Reading

Step E's measurement does not test what the user asked. In 82 of 90 role-swap pairs each profile won exactly once: the attacker beat F1's scripted defender whichever leader it had, because that defender has no platoon commander (fixed-defender branch, `BattleSim.cpp:697`, `CommandSim.cpp:635`). The role decided every battle and the dials had nothing to act on. Astra's own limitation section says the same. The dials themselves are implemented and visible on the wire (409 dropped messages for the bad leader against 21 for the good one in pair 8/108), so the mechanism exists; only the harness is wrong. The 50 % figure is therefore not evidence about leaders and the step is not failed on it.

The C6 repairs are accepted as bounded: the diagnosis found no double counting, the stale-ratio reading of 10/108 is corrected on Astra's evidence (a frozen-element strength failure, not the ratio test), and the new assault-retention and attack-after-Fixing contracts pass with fixtures. F1 remains below the squad-only reference and is disclosed at the head of the step C report as ruled.

## Ruling

1. **Harness.** The paired leader comparison runs where both platoons are active drills platoons with equal troops: Fractured Works and Trenches, seeds 100 to 109 and 200 to 209, each seed with both role swaps (good Azure against bad Ember, then reversed). That is 80 battles, 40 pairs. Same profiles as the contract; no equal-troops masking is needed. F1 is not used for this comparison until it has an active defender.
2. **Pass reading.** Bad loses more than half of the 80 battles, and good wins more pairs than it loses by win-count difference, with the paired interval reported. Draws count for neither.
3. **Calibration allowance.** If the first measurement does not pass, one calibration of the dial magnitudes is permitted (the four mappings from profile to delay, loss, blur, perceived force, thresholds and initiative), applied to the generic good and bad profiles, never to a seed or map, followed by one re-measurement. The user's requirement is a visible, majority effect; the magnitudes are a design choice, not a fit.
4. **Step D regardless.** The user asked for the after-action report in the game now. Prepare step D for the architect after the leader measurement whatever its result: the in-game after-action summary screen fed by the existing offline summary logic, and leader profile controls in BattleGameMode for the two sides, both opt-in with legacy still default. Not built by Astra; the Unreal build, smoke and replay setup remain with the architect.
5. Every other guard and rule stands: no hidden enemy state, protected files untouched, no commit, reset or stash.
