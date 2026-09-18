# Plan 015 step C review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step B completion and step C stop (`.local/handoffs/015-step-b-report.md`, `015-step-c-report.md`) on fingerprint `0b4a4450c274f8e9`, and checked the Phase 0 baseline manifests. Verified independently: protected files intact, 65 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

Step B is complete: all 28 selectors pass, including the two-pronged join and lift, with fixtures and assertions unchanged, so the user's join decision stands. The 40 authored digests, drills trace parity and the full suite pass on the same source.

The seven Works battles that ran before the stop are the first measured battles in this project that are both dispersed and fought: every squad on both sides fires; 1872 to 2862 shots per battle against candidate90's 839 to 1272 on the same seeds; casualties of 31 to 56 % a side; nearest-squadmate medians 6.2 to 7.3 m with 4 to 8 % of time under 2 m against legacy's 13 to 24 %.

The stop was correct under the guard as written and the guard was wrong as written. My resolution guard demanded a median decision under 300 s or both sides under 60 % strength at the limit. Every one of the 40 legacy and candidate90 baseline battles on both maps ran to the 360 s limit, so the absolute rule would fail the baselines it was meant to protect. It is recalibrated below. Astra's reading of the guard and its refusal to reinterpret it are both correct.

Astra also found a real defect: `RadioAction` stores the handled serial of `Fixing` and `NeedSupport` in one field, so the two messages re-trigger each other; squad 3 in Works seed 100 accepted help 114 times and re-evaluated a no-route opportunity 115 times. That is the source of the order-rate spikes to 300 a minute on one side, and it must be fixed before measurement means anything.

## Rulings

1. **Resolution guard, recalibrated.** Paired against legacy on the same map and seed: time to decision not later beyond its interval, and remaining strength of the stronger side at the limit not higher beyond its interval. Absolute thresholds are withdrawn.
2. **Churn guard, recalibrated.** Orders per minute per side paired against legacy, not above beyond its interval, measured after the radio fix. Phase 4f is not a reference: nobody moved.
3. **Radio consumption.** As Astra proposed: consumption is retained per broadcast kind and sender; an existing help commitment and its exhaustion evidence survive an unrelated no-route opportunity; a mixed `NeedSupport` and `Fixing` scenario, Q05, proves the two cannot re-accept each other, with a control that each alone still acts once.
4. **Arrival tolerance for stage-clock bounds.** The 3 m arrival rule applies to `MoveTactically` bounds expiring through the progress clock, with Done receipts at actual member positions and the pause rules preserved; a pin covers it.
5. **Spacing and participation guards** stand as written and were met on all seven runs.

## Continue

Apply rulings 3 and 4 with up to three local attempts each, all 28 selectors plus Q05 and the new pin passing on one source; then step C in full (both authored maps, seeds 100-109, and the F1 development draws) under the recalibrated guards with an after-action report for every authored run; then step E and the step D preparation as briefed. Stop on any guard failure with the traces.

## Ruling 6: after-action report shape

The generated reports are correct but unreadable: a per-transition dump from 0.05 s onward with repeated identical lines per squad. The report opens with a one-page summary for a person: outcome and duration; the turning points (first contact, each assault committed and its result, each call for help and its answer, each withdrawal) with times; per-squad one-line verdicts (what it was told, what it chose, what it achieved, what it lost); leader estimates against squad reports at the decisive moments; net delays and dropped messages; and an attribution paragraph naming the two or three decisions that mattered, each linked to its trace id. Identical consecutive transitions are collapsed; the full timeline follows as an appendix. The in-game screen in step D shows the summary only.

## Native Windows verification (architect session, 17 September 2026)

On the step B completion source `0b4a4450c274f8e9`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/plan015/fable-native-stepb/`. No Unreal rebuild yet: the playable default is legacy and its digests are unchanged.
