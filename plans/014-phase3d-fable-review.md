# Plan 014 Phase 3d review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3d report (`.local/handoffs/014-phase3d-report.md`) on fingerprint `f134afb1b5e7a25f` and `Sim/SquadDrillSim.cpp:105`. Verified independently: protected files intact, 62 Python tests pass, diff clean, F1 outcomes reproduced from the manifests (75 wins, 5 draws, 10 losses); native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

D09 passes with its control, the sprint contract pin passes, and the F1 outcome holds at 75/5/10 with the exchange ratio improved against candidate90 (+1.25, interval 0.51 to 2.16) and the win rate improved against legacy (+0.23, interval 0.09 to 0.36). Spacing beats legacy on F1 and Works with the 3 m floor cleared. Two items remain.

1. **D08 and D07 fail on one line.** `SquadDrillSim.cpp:105` requires every `AttackMove` endpoint to be protected from the objective. The final bounds onto the enemy's own cover can never satisfy that, so the assault blocks short of the objective, falls back to supported closure, and the base of fire resumes firing on the original area, which is D07's 15 late rounds. Ruling: `Safe` from the objective applies to rush endpoints farther than 18 m from it; inside 18 m the endpoints are walkable route points covered by the other buddy pair's fire, as the Phase 3c review already ruled, and the final bound ends on the objective's cover slots oriented on remaining known threats. Re-run D08 and D07 unchanged.
2. **Trench spacing median 2.78 m against the 3 m floor.** Trenches force columns; the members bunch at junctions. This is lane and area allocation, which the platoon layer owns, so it is carried as a targeted criterion into Phase 4 rather than blocking Phase 3. Legacy's 3.95 m there is the reference to beat.

## Scoreboard reading, recorded

"Targeted outcome improvement" means: against each reference, at least one of win rate and exchange ratio improves beyond its interval and neither regresses. Phase 3d meets that against both references. The shots guard is the paired mean against candidate90 not regressing beyond its interval (met: +12, interval crossing zero); the per-run literal reading is not used. The authored deathmatch maps require no regression against the previous drills build (met) and their targeted improvements against candidate90 remain Phase 4's.

## Phase 3e and Phase 4 in one run

Phase 3e: the line-105 correction, D08 and D07 re-run, one measured build under the Phase 3d exit as read above, report. If it passes, Phase 3 is complete and the same run proceeds to Phase 4 per plan 014 section 7 and the companion's P01 to P06:

- `Sim/PlatoonTaskSim`: a task tree from the commander's own knowledge (Advance by default, Fix a known enemy group, Flank an objective by side, Secure a sector, Reserve, Merge, Withdraw) with priorities, capacities in squads, an area of operation per task, activation conditions on knowledge, filters (support weapon) and status; greedy assignment minimising travel time plus coordination penalties (a fixing squad without potential lines, a flank without a fix) plus tree balance minus a stickiness credit; reallocation on activation and deactivation and at the 5 s cadence; directives expiring at 60-90 s with renewal.
- Envelopment on contact: group known contacts (minimum spanning tree, 20 m); flanks from the extreme contacts relative to the platoon centroid; candidate flank objectives 30-40 m beyond each flank with a covered route by the planner; the better side by route quality; the fixing squad is the one able to reach positions with lines within weapon range, with the platoon weapon attached; 60 % of available squads flank inside distinct corridors; the remainder reserves in its own area behind the fixing element; corridor claims add cost to other squads' routes; no covered route on either side gives Fix, Observe and Reserve with an honest report; withdraw below a believed strength ratio of one half without support; lift and shift on the assault element's phase-line receipt through the existing fire-lane messages; leader death degrades to squad-autonomous drills under the template's succession rule.
- Areas of operation replace the deployment lane bands for every squad, including in the trenches, which is the intended fix for the trench spacing median.
- Scenarios P01 to P06 with controls in `tests/platoon_tests.h`, production sensing and transport.
- Exit: on the authored maps, total casualties and closure improve against candidate90 beyond their intervals and orders per minute do not regress; on F1, win rate and exchange do not regress against Phase 3e; spacing not worse than legacy on all three sets with the trench median at or above 3 m as the targeted spacing item; 40 authored digests unchanged; drills trace parity; full suite; engagement guard. One measured build; report and stop if it fails.

## Native Windows verification (architect session, 17 September 2026)

On `f134afb1b5e7a25f`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase3d/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
