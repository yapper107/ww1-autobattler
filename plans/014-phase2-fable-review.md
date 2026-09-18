# Plan 014 Phase 2 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 2 report (`.local/handoffs/014-phase2-report.md`) on fingerprint `70abe8f2c9abc0e3`. Verified independently: protected files intact, 48 Python tests pass, diff clean, new modules present (`Sim/DrillSim`, `Sim/PositionSim`, `tests/drills_tests.h`); native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

The foundation is accepted: controller plumbing proven by all five parity checks before any tactical content, 40 of 40 authored digests unchanged, drills trace parity, the position service unit-tested on the authored layouts, and the family harness exercised end to end with the engagement guard. The tactical exit is not met, and the report says so with the full per-run tables. Two of the failures are mine to fix: one exit criterion points the wrong way, and several mechanism bounds were frozen before the mechanism existed and now need rulings, which is what the freeze-first rule anticipated.

What the measurements show. The drills controller fights: F1 shots 628 per battle against candidate90's 450, defender casualties 59 % against 34 %, time under 2 m 9.6 % against legacy's 13.6 %. On Trenches it is the most intense controller measured (1797 shots, 47/43 % casualties) and passes six of ten runs outright. On Fractured Works it keeps candidate90's shot volume (1024 against 988) but casualties collapse to 17/19 % against 69/53 %. Hit rates from the new shot exports are similar across controllers (6.9 to 9.6 %), and the median engagement distance on Works is about 90 m for every controller, so the collapse is not aim: it is squads that react to contact by firing from cover at long range and then do not close, because Phase 2 has no attack drill and my ruling said "closes or supports" without saying how.

## Corrected exit criteria (binding from Phase 2b)

1. **Intensity.** Shots per battle and total casualties across both sides not below candidate90 on the same map and seed. Own-side casualty reduction is not a failure; the previous wording penalised surviving.
2. **Dispersion.** Time under 2 m not worse than legacy on the same map and seed, and nearest-squadmate median not below 3 m, the plan's minimum restrictive-terrain interval. Legacy's per-run median (2.6 to 7.5 m) was too noisy to serve as a floor.
3. **Closure.** New: on F1 and Works, the attacking platoon's front-line displacement toward the objective at 120 s and 240 s (the existing `front_line` measure in `evaluate_ai.py`) not below candidate90 on the same seed. This is what the Works collapse actually measures.
4. Unchanged: authored digests, trace parity, full suite, engagement guard, and the mechanism pairs.

## Ruling on the Works collapse

In `ReactToContact`, after the assessment, a squad that has fire superiority or whose contact lies beyond 70 m resumes `MoveTactically` toward its objective in bounding overwatch, one element halted with lines over the bound while the other moves; it holds in cover only while incoming fire is effective and superiority is not established. This is doctrine (react to contact ends in a decision, not a firing line), it stays inside Phase 2's scope, and it gives the closure criterion something to measure. `SupportByFire` and `SquadAttack` remain Phase 3.

## Rulings on the mechanism pairs

| Pair | Ruling |
|---|---|
| D01 | Measure the 6-14 m share only over samples where the squad's technique is traveling and the terrain class is open; keep 80 % on that window. Column and contact segments are not wedge samples. |
| D02 | The control's failure is a fixture artefact: its geometry contains a corridor mouth that legitimately triggers overwatch. Place the control on open ground with no mouth within 60 m of the route; keep the assertion. |
| D03 | The bound limit is separation, not path: at the end of each bound, straight-line distance from the bounding element to the overwatch element at most two-thirds of the overwatch weapon range (47 m for rifles). Path length may exceed it. |
| D04 | The fixture must contain a durable target that actually fires, so fire is received. Return fire from at least three members within 4 s of the first receipt (0.6 s reaction plus two 0.75 s hops plus aim), not 2.5 s. The rearward control needs the same firing target with no cover within 25 m. |
| D05 | Delivery bound 4 s by the same arithmetic. The weak fixture may reduce only the gun group; rifle strength stays at the template minimum. |
| D17 | Verify the ample fixture offers at least eight valid slots 2 m apart. If it does and seven are assigned, that is an allocation defect to fix; if it does not, fix the fixture. Either way, the assertion stays. |

## Next slice (Phase 2b)

Apply the closure ruling and the six mechanism rulings; one measured build; the corrected criteria reported per run on both authored maps and the F1 development draws; the diagnostic pull requested below; then stop. Windows and Unreal verification remain with the architect; no Unreal rebuild is needed until the exit is met, since the playable default is legacy and its digests are unchanged.

Diagnostic pull with the report: per controller on Works seeds 100-109, from `shots.jsonl` and events, hits per soldier-minute, wound against kill counts, and the front-line displacement series, so the closure criterion is grounded before Phase 3.

## Native Windows verification (architect session, 17 September 2026)

On `70abe8f2c9abc0e3`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0, in 457.8 s. Logs under `.local/phase2/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged by this revision.
