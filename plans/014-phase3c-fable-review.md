# Plan 014 Phase 3c review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3c report (`.local/handoffs/014-phase3c-report.md`) on fingerprint `7596d85ca9eb5318`, the F1 manifests of every controller, and the assault code paths in `Sim/SquadDrillSim.cpp`. Verified independently: protected files intact, 57 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict: first evidence of tactical success, and a wrong criterion

Eleven of twelve pairs now pass, including the full chain from covered flank to phase-line receipt to lift order (D07: receipt at 121.35 s, lift 1.45 s later, zero rounds into the assault lane afterwards). Two failures remain and both have code-level causes below.

The distribution result needs a different reading than the report gives it. On the 90 generated defended positions:

| F1 attacker | Wins | Draws | Losses | Shots | Total casualties |
|---|---:|---:|---:|---:|---:|
| legacy | 54 | 2 | 34 | 718 | 15.8 |
| candidate90 | 65 | 7 | 18 | 451 | 13.0 |
| drills Phase 2d | 49 | 3 | 38 | 758 | 16.9 |
| drills Phase 3c | 75 | 5 | 10 | 459 | 10.7 |

The Phase 3c controller is the most effective attacker measured, by a wide margin, and it wins with fewer casualties on both sides. Shots and total casualties fell because suppress-and-flank works: the defender is pinned rather than traded with. The "intensity not below Phase 2d" criterion I set after Phase 2d was measuring a frontal-bounding controller's noise, and it penalises the very efficiency the doctrine exists to produce. It is withdrawn.

## Scoreboard from Phase 3d

1. **Targeted, on F1:** attacker win rate and casualty exchange ratio, paired against candidate90 and legacy with confidence intervals. Phase 3c already leads both.
2. **Guard against passivity:** shots per battle not below candidate90 on the same draw and seed (Phase 3c: 459 against 451), engagement guard active, no zero-shot battle.
3. **Spacing:** under-2 m share not worse than legacy, median not below 3 m (unchanged).
4. **Authored deathmatch maps:** no regression against Phase 3c on any criterion; the targeted intensity and closure improvements against candidate90 move to Phase 4, because on those maps the attack rarely finds a covered route (4 of 10 Works seeds commit, none reach a phase line) and the doctrinal answer to a symmetric firefight is platoon-level envelopment, which is Phase 4's scope. The promotion bar in plan 014 section 9 is unchanged.

## Corrections for Phase 3d

1. **Rushes are sprints.** `Assign` limits a rush to 5 s at crouched speed (9.45 m) and the executor moves crouched. Doctrine's 3-5 s rush is a standing sprint: rush orders execute at standing speed (3.15 m/s in `BattleSim.cpp:871`), endpoint at most 15 m along the route, crouch on arrival. The D08 assault took 121 s to reach its phase line; this roughly halves it.
2. **After the lift, the assault covers itself.** `SquadDrillSim.cpp:304` requires recent stationary base-of-fire delivery near the objective for the final bounds inside 18 m, but the base of fire has just been ordered to lift or shift, so the condition can never hold and the assault pauses at 146.6 s (D08). Inside 18 m after the lift, a buddy pair's rush is covered by the other pair's delivered fire on the objective (fire and movement within the element); the base of fire's shifted fire on the far side is not required.
3. **Support loss has hysteresis; the pause must use it.** D09's control pauses on 2.35 s and 0.7 s delivery gaps. `SupportEvidence` declares loss only after 8 s without qualifying rounds; the `AttackMove` pause must key on that lost flag, never on instantaneous evidence, so reload gaps do not stop an assault. If the pause already keys on the flag, find why the flag flipped inside 8 s and fix that.
4. D08 consolidation and reorganise re-run unchanged after 1 and 2; D09 control unchanged after 3.

## Exit for Phase 3d

All twelve pairs (D12 deferred) passing with controls; the scoreboard above; 40 authored digests unchanged; drills trace parity; full suite. One measured build; report and stop if it fails.

## Native Windows verification (architect session, 17 September 2026)

On `7596d85ca9eb5318`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase3c/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
