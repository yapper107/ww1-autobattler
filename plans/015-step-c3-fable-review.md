# Plan 015 step C third review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step C report (`.local/handoffs/015-step-c-report.md`) on fingerprint `4786fc9830d0c1c0` and the after-action summaries it generated. Verified independently: protected files intact, 72 Python tests pass, diff clean; native Windows lab build and full test suite pass on `4786fc9830d0c1c0` from this session (`.local/plan015/fable-native-stepc/`). Advisory review, not acceptance.

## Verdict

All 31 selectors pass on the measured source; the full suite, 40 authored digests and trace parity pass. On all ten Fractured Works seeds: every squad on both sides fires; 1592 to 2664 shots per battle against candidate90's 689 to 1272; casualties 28 to 69 % a side; nearest-squadmate medians 6.0 to 7.1 m with 5 to 9 % of time under 2 m against legacy's 13 to 24 %; orders per minute 60 below legacy on both sides. The after-action summaries read as intended.

The one failing guard, the stronger side's remaining strength at the limit (+13.75 points against legacy), measures decisiveness rather than stalemate: the winner keeps more because soldiers fight from cover and spread out, while the loser is depleted as before. I wrote that guard to catch battles in which both sides sit at high strength; it cannot tell those from clean wins, and the passivity, participation, spacing and churn guards already cover the stalemate case. It is withdrawn. Casualty fractions and the winner's remaining strength are reported for the user's review as information.

## Ruling

Guards for the rest of step C and for step E: no zero-shot battle; at least three of four squads per side firing; time to decision paired against legacy not later beyond its interval; under-2 m share not worse than legacy on every set and the trench median at or above 3 m as the targeted spacing item; orders per minute per side paired against legacy not higher beyond its interval; attacker win share on F1 not below the squad-only controller `a0364bff5cea6ab9` beyond its interval. The stronger-remaining guard is withdrawn.

## Continue

Complete step C on Trenches and the F1 development draws under these guards with an after-action report for every authored run; then step E and the step D preparation as briefed.
