# Plan 014 Phase 3f review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3f report (`.local/handoffs/014-phase3f-report.md`) on fingerprint `6ade972b0e7de642` and `Sim/SquadDrillSim.cpp:345-357`. Verified independently: protected files intact, Python suite passes, diff clean, only the fixture changed. Advisory review, not acceptance.

## Verdict

Astra's disagreement stands: removing the termination artefact was necessary but did not make D08 pass. With the battle continuing, the assault stalls at 188.55 s in a support-permission pause and never consolidates. The cause is in the assault branch: inside 18 m every bound requires `BuddyCovering`, delivered rounds from the other pair on the objective. Once the objective defender is incapacitated the covering pair has no visible target and delivers nothing, while the leader still holds the defender's track until observation clears it, so the condition can never be met again. That is my Phase 3c ruling applied literally; it lacked the case where there is nothing left to suppress.

## Ruling

Inside 18 m, a bound is covered when the other buddy pair is stationary in overwatch with a line to the objective. Delivered rounds from that pair are required only while a contact at the objective has been observed within the last 6 s; with no fresh contact there, readiness suffices and the bound proceeds. Consolidation keeps its condition (matching objective receipts from at least half the element and no known live enemy inside the radius); the retained track clears through the element's own observation on arrival or expires by the existing rule, so no hidden fact is needed. No fixture or assertion changes. Re-run D08; with it passing, Phase 3 is complete on its scope and Phase 4 proceeds per the Phase 3d brief.
