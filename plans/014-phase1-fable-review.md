# Plan 014 Phase 1 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 16 September 2026. Reviewed Astra's restore report and Phase 1 report (`.local/handoffs/014-restore-report.md`, `014-phase1-report.md`) on fingerprint `9ce4051ccbd13ed7`. Verified independently: protected files intact, 45 Python tests pass, diff clean, new files present (`Sim/ScenarioGen.cpp`, `tools/family_metrics.py`, `tools/run_family.py`, `tools/report_family.py`, `tests/test_family.py`). Advisory review, not acceptance.

## Verdict

Phase 1 is accepted as the evaluation harness for every later slice. The playable default is legacy at the user's decision, candidate90 is selectable and byte-identical (20 of 20 digests), and the timeline click crash is fixed in the draw path. The generator produces deterministic, validated defended-position scenarios; the family runner and bootstrap reporter work on 180 real battles; authored-map gameplay is provably unchanged for both controllers.

Points I checked and accept:

- The two generator corrections (defender cover within the engine's 3 m local-cover test; a 6 m minimum on every screening gap) follow pre-existing geometric bounds, were applied before the final baseline, and the preliminary runs were archived rather than mixed in. That is the discipline the plan asks for.
- Bootstrap clusters are generated maps, with the three battle seeds kept together. Correct: the seeds are repeated observations of one geometry.
- Drill-only metrics report as unavailable rather than zero. Correct.
- Fighting intensity: the explicit cognition path equals candidate90 exactly on all 20 authored runs. Legacy's per-run casualty fractions below candidate90 are disclosed; the user chose legacy as the interim default knowingly, and the criterion binds new controllers, not that choice.

## First reading of the F1 baseline (reference only)

On 30 generated defended positions with three seeds each, candidate90 wins more often than legacy (65 against 54 of 90) with fewer shots and far fewer defender casualties, while bunching harder (38 % against 14 % of time under 2 m). Its staged approach is more economical against a defended position; legacy fights harder and loses more. Neither behaviour is a target: the drills controller must beat both on outcome without falling below candidate90 on intensity or legacy on dispersion.

## Rulings for Phase 2

1. Scope stays as plan 014 section 10: controller plumbing with the `drills` flag, `PositionSim`, and `DrillSim` with the organisation templates, `MoveTactically` and `ReactToContact` basics. Nothing in the squad's default behaviour may hold when contact is known within engagement range: the react-to-contact branch must return fire from cover and the squad must close or support, never observe from the last leg.
2. Exit criteria, each reported per run on both authored maps and on the F1 development draws: shots per battle and casualty fractions not below candidate90; nearest-squadmate median and under-2 m share not worse than legacy; legacy and cognition authored digests unchanged; trace on and off parity; full suite; the engagement guard active in every family run.
3. Mechanism scenarios D01 to D05 and D17 from the companion with their paired controls, in `tests/drills_tests.h`, using production sensing and transport.
4. F2 and F3 remain deferred until Phase 2 has a controller to measure; do not spend the family budget on them first.
5. Windows and Unreal verification stay with the architect session; the report should say so rather than attempt them.

## Native verification of this revision

Run from the architect session after the report: native Windows lab build and tests, Unreal editor build with the legacy default, and the unattended smoke check on both maps. Results are appended below when complete.

Completed 16 September 2026 on `9ce4051ccbd13ed7`: native Windows lab build exit 0 and full native test suite exit 0 (455.4 s); Unreal editor build `Result: Succeeded`; unattended smoke check passed on Fractured Works (360 s seed-108 battle, 1962 shots) and on Trenches (120 s seed-108 battle, 705 shots), both with the legacy default (`cognition_policy` 0), rewriting `Saved/smoke-test.txt` and `Saved/trench-smoke-test.txt`. Logs under `.local/phase1/fable-native/`. The playable mirror now carries this revision.
