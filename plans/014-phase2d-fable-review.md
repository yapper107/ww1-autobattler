# Plan 014 Phase 2d review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 2d report (`.local/handoffs/014-phase2d-report.md`) on fingerprint `cdcfe811c96f3616`. Verified independently: protected files intact, Python suite passes, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict: Phase 2 scope complete, exit re-assigned to Phase 3

Phase 2 was scoped as plumbing, position service, organisation templates, tactical movement and react-to-contact. On that scope the build is sound: five of six mechanism pairs pass with the sixth diagnosed to a corridor defect; the lifecycle and progress-clock pins pass; churn fell from 273 to 89 orders per minute on Works seed 107; formation spacing is the best measured. On the generated defended positions (F1) the drills controller now leads both baselines on every intensity measure and on spacing:

| F1, 90 runs | Shots | Total casualties | Hits per soldier-min | Nearest squadmate | Under 2 m | Orders per min |
|---|---:|---:|---:|---:|---:|---:|
| legacy | 718 | 15.8 | 0.50 | 5.1 m | 13.6 % | 128 |
| candidate90 | 451 | 13.0 | 0.45 | 3.1 m | 38.4 % | 40 |
| drills | 758 | 16.9 | 0.61 | 7.1 m | 3.4 % | 59 |

On the authored deathmatch maps the controller advances to contact and stops: front displacement plateaus at about 75 m from the first minute, and both sides then trade fire at 90 m with a 0.14 hit rate per soldier-minute. That is a symmetric firefight in which neither side can establish superiority, and nothing in Phase 2's drill set is designed to break it. Candidate90 scores higher there only by walking forward uncovered. The intensity and closure criteria on the authored maps therefore measure the absence of Phase 3, not a defect in Phase 2, and I move them to Phase 3's exit rather than iterate Phase 2 against them. The overall promotion bar in plan 014 section 9 is unchanged: the drills controller must beat both baselines on the playable maps before it becomes the default, and it is not close to that yet.

The per-run conjunction of seven criteria produced 0 of 90 passes on F1 while every aggregate improved; closure horizons unavailable because battles ended early count as failures, and candidate90's 40 orders per minute is a floor no controller that moves will meet. From Phase 3 the scoreboard reports criteria individually with paired confidence intervals, and a slice passes when no criterion regresses beyond its interval and the targeted criteria improve. This is the distributional scoreboard section 9 specified; the per-run conjunction was my interim shortcut.

## Defect to fix first

D05's capable control fails because the column retry evaluates candidates against an empty corridor; `CorridorDistance` returns infinity for an empty route, so all 302 candidates are rejected as outside the corridor. Fix: a column contraction reuses the element's accepted route, or builds one from the current position to the stage destination before allocation; never allocate against an empty route. Re-run D05 unchanged.

## Phase 3 brief

Per plan 014 section 6.3 and the companion: `SupportByFire` (element-level delivered-fire evidence on the threat area, lift and shift on the assault element's phase-line receipt), `SquadAttack` (assault only via a covered route to a position 45-55 degrees off the base of fire within 40 m of the objective; buddy rushes of at most 5 s; assault line; consolidate; reorganise), `BreakContact`, `Occupy`, `Observe`, `Withdraw`, gun recovery deferred to its own design note. React-to-contact's assessment gains its doctrinal third branch: when the squad cannot gain superiority and a covered route exists, attack by fire and manoeuvre; when it cannot and none exists, hold and report. Mechanism scenarios D06 to D12 and D16 with their controls. Exit: individual criteria with confidence intervals on F1 and on both authored maps, with intensity and closure on the authored maps as the targeted criteria; no regression of the Phase 2 gains; 40 authored digests unchanged; trace parity; full suite; engagement guard.

## Native Windows verification (architect session, 17 September 2026)

On `cdcfe811c96f3616`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase2d/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged by this revision.
