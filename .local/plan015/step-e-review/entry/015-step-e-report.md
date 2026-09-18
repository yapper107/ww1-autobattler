# Plan 015 Step E — platoon leader effects

**Status: FAIL / STOP.** Entry source `26145f87ae81a257`; leader source `4c2ca48bb9c1add9`. No native build or replay approval is claimed.

Step C completes 20 authored and 90 F1 runs: all guards except F1 win share pass. F1 is61/1/28 versus75/5/10, delta-15.56pp, CI[-28.89,-3.33]. The explicit C6 exception authorises this step.

## Fixed comparison contract

[Pre-implementation contract](../plan015/step-e/contract.md). Good=(.9,.5,.9,.9), bad=(.15,.9,.2,.2), ordered judgement/risk/adaptability/communication. Bad is deliberately overconfident, inflexible and a poor communicator; these are fixed generic profiles, not fitted to seeds or outcomes.

Ordinary F1 has asymmetric armies. For this comparison only, the larger attacker is masked to the existing defender roster (4–12 troops), with identical machine-gun configuration. All original map geometry and retained deployment points stay intact. Each draw runs both profile role swaps; scenario digest, roster and weapons match. This is an explicit equal-troop F1 variant, not a new Step C baseline.

Both majority readings are disclosed: bad must lose more than 90/180 battles, and good must win more than 45/90 role-swap pairs by win-count difference; ties are not wins. This conservative interpretation was fixed before measurement. No second measured profile set follows.

## Four dials and boundaries

| Dial | Mechanism | Good / bad value |
|---|---|---|
| Net | quality=(communication+adaptability)/2; extra delay6(1−quality)²; drop probability.35(1−quality)² | +.06 / +3.84s; .35 /22.4% drop probability |
| Picture | entering commander reports blurred by18(1−judgement)²; identity/source/time retained; own perceived force scaled by clamp(1+(1−judgement)(1−2risk),.4,1.6) | .18 /13.005m; multiplier1 /.4 |
| Pivotal calls | withdrawal ratio threshold.5+.7(.5−risk); assessment interval1+20(1−adaptability)²; existing bounded observation and commitment rules retained | .5 /.22;1.2 /13.8s |
| Initiative | quality>=.5 delegates; otherwise volunteer help needs HelpSquad, assault needs a known-target Seize intent, then existing doctrine template gate still applies | delegated / waits for explicit intent |

Net state is the own platoon’s transport; decisions read actor memory, received reports and own orders. Deterministic packet loss uses existing message metadata and battle seed, never diagnostic IDs/RNG or enemy truth. Staff succession uses the actual successor’s own profile. NCO profiles, aim, ammunition, health, weapons and movement speed are untouched. Profile effects are opt-in with `--azure-leader`, `--ember-leader` / `--leader-effects`; `--equal-troops` requires F1 and leader effects. Historical CLI and manifest semantics remain supported.

Implementation: `Sim/LeaderSim.cpp` and `.h`; Config/own directive state in `BattleSim.h`; initial lieutenant assignment and validation in `BattleSim.cpp`; net transport in `PlatoonSim.cpp`; belief/call thresholds in `PlatoonTaskSim.cpp`; own-intent gate in `SquadDrillSim.cpp`/`ReactionSim.cpp`; conditional digest/manifest in `Diagnostics.cpp`; CLI and rerun round trip; Linux test source list.

## Verification

All 35 existing selectors pass; leader unit contracts pass (deterministic drop sample0/44 of200 each, blurred reports retain identity/time, successor profile,30 equal-roster/weapon generated draws, battle-seed/profile-invariant scenario hash, trace equality). Historical authored digests: 40/40 of40. Default-drills trace pairs: 3/3 of3. The full Linux suite passes (236.964s), controller-default/rerun checks pass, and 77 Python tests pass. Default drills also reproduce C6’s three selected digest references exactly. Full-suite/defaults/Python logs and manifest round-trip evidence are under [step-e](../plan015/step-e).

The exported leader/equal-roster CLI manifest reruns to digest `16305133491766026566` on the 12 s configuration. Profile-enabled trace equivalence is tested on that short configuration; the three full-duration trace pairs exercise ordinary drills with effects off, not every profile-enabled branch. New observer metrics have discriminating tests for answered/censored help, received coordination, stale/wrong-target proxies and swapped-pair scenario identity. AAR profile attribution is linked to actual decision trace IDs.

## Measurement and measures

`python3 tools/run_leader_pairs.py --binary .local/plan015/step-e/final/battle-lab --out .local/plan015/step-e/measurement --gen-seeds 1-30 --seeds 107-109 --seconds 360 --jobs 2`. Pool startup initially failed at a sandbox-blocked forkserver socket before any worker or battle started (empty checkpoint and traceback archived). The runner was switched to the existing family runner’s spawn context; source/profiles/draws were unchanged. Two bounded workers, incremental `pairs.json`, no repeats; process failure or zero-shot battle stops new dispatch and drains in-flight work.

First coordinated assault = Assaulting after same-leader received Fixing within60s/40m. Help latency = NeedSupport to another squad’s Fixing within40m; unanswered calls disclosed, absent episodes null. Wrong-target rate = combat FightHere issued with no living enemy within20m of sector. Stale orders = combat-intent squad-seconds with no enemy in that radius until replacement/end. These last two are offline observer proxies, not claims that the leader knew truth or that holding a cleared objective is necessarily wrong. Casualty exchange is opposing losses/own losses, null for zero own losses.

Completed 180/180 battles and 90/90 complete role-swap pairs. Bad loses 90; good wins 5 pairs. Process/engagement guard: no failure.

Paired good-minus-bad win share (role swaps, generated-map clusters): {'count': 90, 'clusters': 30, 'mean': 0.027777777777777776, 'median': 0.0, 'ci95': [-0.011249999999999993, 0.07777777777777778]}.

### Per-pair outcome

| Gen/seed | Good wins | Bad wins | Score |
|---|---:|---:|---:|
| 1/107 | 1 | 1 | +0 |
| 1/108 | 1 | 1 | +0 |
| 1/109 | 1 | 1 | +0 |
| 2/107 | 1 | 1 | +0 |
| 2/108 | 1 | 1 | +0 |
| 2/109 | 1 | 1 | +0 |
| 3/107 | 1 | 1 | +0 |
| 3/108 | 1 | 1 | +0 |
| 3/109 | 1 | 1 | +0 |
| 4/107 | 1 | 1 | +0 |
| 4/108 | 1 | 1 | +0 |
| 4/109 | 1 | 1 | +0 |
| 5/107 | 1 | 1 | +0 |
| 5/108 | 1 | 1 | +0 |
| 5/109 | 1 | 1 | +0 |
| 6/107 | 1 | 1 | +0 |
| 6/108 | 1 | 1 | +0 |
| 6/109 | 1 | 1 | +0 |
| 7/107 | 1 | 1 | +0 |
| 7/108 | 1 | 1 | +0 |
| 7/109 | 1 | 1 | +0 |
| 8/107 | 1 | 1 | +0 |
| 8/108 | 2 | 0 | +2 |
| 8/109 | 1 | 1 | +0 |
| 9/107 | 1 | 1 | +0 |
| 9/108 | 1 | 1 | +0 |
| 9/109 | 1 | 1 | +0 |
| 10/107 | 1 | 1 | +0 |
| 10/108 | 1 | 1 | +0 |
| 10/109 | 1 | 1 | +0 |
| 11/107 | 2 | 0 | +2 |
| 11/108 | 1 | 1 | +0 |
| 11/109 | 1 | 0 | +1 |
| 12/107 | 1 | 1 | +0 |
| 12/108 | 1 | 1 | +0 |
| 12/109 | 1 | 1 | +0 |
| 13/107 | 1 | 1 | +0 |
| 13/108 | 1 | 1 | +0 |
| 13/109 | 1 | 1 | +0 |
| 14/107 | 1 | 1 | +0 |
| 14/108 | 0 | 1 | -1 |
| 14/109 | 1 | 1 | +0 |
| 15/107 | 1 | 1 | +0 |
| 15/108 | 1 | 1 | +0 |
| 15/109 | 1 | 1 | +0 |
| 16/107 | 1 | 1 | +0 |
| 16/108 | 1 | 1 | +0 |
| 16/109 | 1 | 1 | +0 |
| 17/107 | 1 | 1 | +0 |
| 17/108 | 1 | 1 | +0 |
| 17/109 | 1 | 1 | +0 |
| 18/107 | 1 | 1 | +0 |
| 18/108 | 1 | 1 | +0 |
| 18/109 | 1 | 1 | +0 |
| 19/107 | 1 | 1 | +0 |
| 19/108 | 1 | 1 | +0 |
| 19/109 | 1 | 1 | +0 |
| 20/107 | 1 | 1 | +0 |
| 20/108 | 1 | 1 | +0 |
| 20/109 | 1 | 1 | +0 |
| 21/107 | 1 | 1 | +0 |
| 21/108 | 1 | 1 | +0 |
| 21/109 | 1 | 1 | +0 |
| 22/107 | 1 | 1 | +0 |
| 22/108 | 1 | 1 | +0 |
| 22/109 | 1 | 1 | +0 |
| 23/107 | 1 | 0 | +1 |
| 23/108 | 0 | 1 | -1 |
| 23/109 | 1 | 1 | +0 |
| 24/107 | 1 | 1 | +0 |
| 24/108 | 1 | 1 | +0 |
| 24/109 | 1 | 1 | +0 |
| 25/107 | 1 | 1 | +0 |
| 25/108 | 1 | 1 | +0 |
| 25/109 | 1 | 1 | +0 |
| 26/107 | 1 | 1 | +0 |
| 26/108 | 1 | 1 | +0 |
| 26/109 | 1 | 1 | +0 |
| 27/107 | 0 | 1 | -1 |
| 27/108 | 1 | 1 | +0 |
| 27/109 | 1 | 1 | +0 |
| 28/107 | 1 | 1 | +0 |
| 28/108 | 1 | 1 | +0 |
| 28/109 | 1 | 1 | +0 |
| 29/107 | 1 | 1 | +0 |
| 29/108 | 1 | 1 | +0 |
| 29/109 | 1 | 1 | +0 |
| 30/107 | 1 | 1 | +0 |
| 30/108 | 1 | 1 | +0 |
| 30/109 | 2 | 0 | +2 |

### Per-run leader measures

| Gen/seed; good side | Troops A/E; shots | Outcome | Good: assault / help s (answered/calls) | Bad: assault / help s (answered/calls) | Wrong-target good/bad | Stale squad-seconds good/bad | Exchange good/bad | AAR |
|---|---|---|---|---|---|---|---|---|
| 1/107; Azure | 12/12; 533 | bad | — / — (0/6) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/1/107/good-azure/after-action.md) |
| 1/107; Ember | 12/12; 320 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | 9.00/0.11 | [report](../plan015/step-e/measurement/1/107/good-ember/after-action.md) |
| 1/108; Azure | 12/12; 618 | bad | — / — (0/5) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.11/9.00 | [report](../plan015/step-e/measurement/1/108/good-azure/after-action.md) |
| 1/108; Ember | 12/12; 473 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/1/108/good-ember/after-action.md) |
| 1/109; Azure | 12/12; 521 | bad | — / 16.00 (1/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.22/4.50 | [report](../plan015/step-e/measurement/1/109/good-azure/after-action.md) |
| 1/109; Ember | 12/12; 563 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/1/109/good-ember/after-action.md) |
| 2/107; Azure | 4/4; 18 | bad | — / — (0/0) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/2/107/good-azure/after-action.md) |
| 2/107; Ember | 4/4; 18 | good | — / — (0/0) | — / — (0/0) | —/— | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/2/107/good-ember/after-action.md) |
| 2/108; Azure | 4/4; 67 | bad | — / — (0/0) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/2/108/good-azure/after-action.md) |
| 2/108; Ember | 4/4; 37 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/2/108/good-ember/after-action.md) |
| 2/109; Azure | 4/4; 78 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/2/109/good-azure/after-action.md) |
| 2/109; Ember | 4/4; 28 | good | — / — (0/0) | — / — (0/0) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/2/109/good-ember/after-action.md) |
| 3/107; Azure | 6/6; 264 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/3/107/good-azure/after-action.md) |
| 3/107; Ember | 6/6; 116 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/3/107/good-ember/after-action.md) |
| 3/108; Azure | 6/6; 282 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/3/108/good-azure/after-action.md) |
| 3/108; Ember | 6/6; 168 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/3/108/good-ember/after-action.md) |
| 3/109; Azure | 6/6; 207 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/3/109/good-azure/after-action.md) |
| 3/109; Ember | 6/6; 529 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/3/109/good-ember/after-action.md) |
| 4/107; Azure | 6/6; 20 | bad | — / — (0/0) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/4/107/good-azure/after-action.md) |
| 4/107; Ember | 6/6; 20 | good | — / — (0/0) | — / — (0/0) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/4/107/good-ember/after-action.md) |
| 4/108; Azure | 6/6; 187 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/4/108/good-azure/after-action.md) |
| 4/108; Ember | 6/6; 54 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/4/108/good-ember/after-action.md) |
| 4/109; Azure | 6/6; 203 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/4/109/good-azure/after-action.md) |
| 4/109; Ember | 6/6; 139 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/4/109/good-ember/after-action.md) |
| 5/107; Azure | 8/8; 631 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/5/107/good-azure/after-action.md) |
| 5/107; Ember | 8/8; 870 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | 1.50/0.67 | [report](../plan015/step-e/measurement/5/107/good-ember/after-action.md) |
| 5/108; Azure | 8/8; 441 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/5/108/good-azure/after-action.md) |
| 5/108; Ember | 8/8; 621 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | 3.00/0.33 | [report](../plan015/step-e/measurement/5/108/good-ember/after-action.md) |
| 5/109; Azure | 8/8; 669 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/5/109/good-azure/after-action.md) |
| 5/109; Ember | 8/8; 308 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 6.00/0.17 | [report](../plan015/step-e/measurement/5/109/good-ember/after-action.md) |
| 6/107; Azure | 8/8; 389 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.43/2.33 | [report](../plan015/step-e/measurement/6/107/good-azure/after-action.md) |
| 6/107; Ember | 8/8; 307 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/6/107/good-ember/after-action.md) |
| 6/108; Azure | 8/8; 253 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/6/108/good-azure/after-action.md) |
| 6/108; Ember | 8/8; 285 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/6/108/good-ember/after-action.md) |
| 6/109; Azure | 8/8; 331 | bad | — / — (0/7) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.38/2.67 | [report](../plan015/step-e/measurement/6/109/good-azure/after-action.md) |
| 6/109; Ember | 8/8; 149 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/6/109/good-ember/after-action.md) |
| 7/107; Azure | 6/6; 295 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/7/107/good-azure/after-action.md) |
| 7/107; Ember | 6/6; 398 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/7/107/good-ember/after-action.md) |
| 7/108; Azure | 6/6; 552 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.33/3.00 | [report](../plan015/step-e/measurement/7/108/good-azure/after-action.md) |
| 7/108; Ember | 6/6; 813 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 3.00/0.33 | [report](../plan015/step-e/measurement/7/108/good-ember/after-action.md) |
| 7/109; Azure | 6/6; 740 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.20/5.00 | [report](../plan015/step-e/measurement/7/109/good-azure/after-action.md) |
| 7/109; Ember | 6/6; 308 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/7/109/good-ember/after-action.md) |
| 8/107; Azure | 10/10; 154 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/8/107/good-azure/after-action.md) |
| 8/107; Ember | 10/10; 166 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/8/107/good-ember/after-action.md) |
| 8/108; Azure | 10/10; 508 | good | — / — (0/3) | — / — (0/0) | 0.00/— | 24.30/0.00 | 1.33/0.75 | [report](../plan015/step-e/measurement/8/108/good-azure/after-action.md) |
| 8/108; Ember | 10/10; 262 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/8/108/good-ember/after-action.md) |
| 8/109; Azure | 10/10; 543 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 30.25/0.00 | 0.78/1.29 | [report](../plan015/step-e/measurement/8/109/good-azure/after-action.md) |
| 8/109; Ember | 10/10; 461 | good | — / — (0/0) | — / 64.80 (1/4) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/8/109/good-ember/after-action.md) |
| 9/107; Azure | 10/10; 236 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/9/107/good-azure/after-action.md) |
| 9/107; Ember | 10/10; 322 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 6.00/0.17 | [report](../plan015/step-e/measurement/9/107/good-ember/after-action.md) |
| 9/108; Azure | 10/10; 447 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/9/108/good-azure/after-action.md) |
| 9/108; Ember | 10/10; 362 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/9/108/good-ember/after-action.md) |
| 9/109; Azure | 10/10; 543 | bad | — / 17.30 (1/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.11/9.00 | [report](../plan015/step-e/measurement/9/109/good-azure/after-action.md) |
| 9/109; Ember | 10/10; 425 | good | — / — (0/0) | — / 13.65 (1/3) | —/0.00 | 0.00/0.00 | 2.00/0.50 | [report](../plan015/step-e/measurement/9/109/good-ember/after-action.md) |
| 10/107; Azure | 10/10; 196 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/10/107/good-azure/after-action.md) |
| 10/107; Ember | 10/10; 214 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/10/107/good-ember/after-action.md) |
| 10/108; Azure | 10/10; 475 | bad | 72.45 / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/10/108/good-azure/after-action.md) |
| 10/108; Ember | 10/10; 213 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/10/108/good-ember/after-action.md) |
| 10/109; Azure | 10/10; 424 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/10/109/good-azure/after-action.md) |
| 10/109; Ember | 10/10; 125 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/10/109/good-ember/after-action.md) |
| 11/107; Azure | 6/6; 645 | good | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 2.00/0.50 | [report](../plan015/step-e/measurement/11/107/good-azure/after-action.md) |
| 11/107; Ember | 6/6; 503 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 3.00/0.33 | [report](../plan015/step-e/measurement/11/107/good-ember/after-action.md) |
| 11/108; Azure | 6/6; 187 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/11/108/good-azure/after-action.md) |
| 11/108; Ember | 6/6; 457 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/11/108/good-ember/after-action.md) |
| 11/109; Azure | 6/6; 71 | draw | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 1.00/1.00 | [report](../plan015/step-e/measurement/11/109/good-azure/after-action.md) |
| 11/109; Ember | 6/6; 288 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/11/109/good-ember/after-action.md) |
| 12/107; Azure | 4/4; 75 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/12/107/good-azure/after-action.md) |
| 12/107; Ember | 4/4; 88 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/12/107/good-ember/after-action.md) |
| 12/108; Azure | 4/4; 88 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/12/108/good-azure/after-action.md) |
| 12/108; Ember | 4/4; 62 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/12/108/good-ember/after-action.md) |
| 12/109; Azure | 4/4; 142 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/12/109/good-azure/after-action.md) |
| 12/109; Ember | 4/4; 289 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/12/109/good-ember/after-action.md) |
| 13/107; Azure | 12/12; 688 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.20/5.00 | [report](../plan015/step-e/measurement/13/107/good-azure/after-action.md) |
| 13/107; Ember | 12/12; 692 | good | — / — (0/0) | — / — (0/6) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/13/107/good-ember/after-action.md) |
| 13/108; Azure | 12/12; 926 | bad | 75.90 / 9.55 (1/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.18/5.50 | [report](../plan015/step-e/measurement/13/108/good-azure/after-action.md) |
| 13/108; Ember | 12/12; 691 | good | — / — (0/0) | — / 0.50 (1/5) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/13/108/good-ember/after-action.md) |
| 13/109; Azure | 12/12; 907 | bad | — / 29.35 (1/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/13/109/good-azure/after-action.md) |
| 13/109; Ember | 12/12; 857 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 11.00/0.09 | [report](../plan015/step-e/measurement/13/109/good-ember/after-action.md) |
| 14/107; Azure | 8/8; 784 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/14/107/good-azure/after-action.md) |
| 14/107; Ember | 8/8; 429 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/14/107/good-ember/after-action.md) |
| 14/108; Azure | 8/8; 477 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/14/108/good-azure/after-action.md) |
| 14/108; Ember | 8/8; 556 | draw | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 1.00/1.00 | [report](../plan015/step-e/measurement/14/108/good-ember/after-action.md) |
| 14/109; Azure | 8/8; 676 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.40/2.50 | [report](../plan015/step-e/measurement/14/109/good-azure/after-action.md) |
| 14/109; Ember | 8/8; 358 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/14/109/good-ember/after-action.md) |
| 15/107; Azure | 12/12; 338 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/15/107/good-azure/after-action.md) |
| 15/107; Ember | 12/12; 508 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/15/107/good-ember/after-action.md) |
| 15/108; Azure | 12/12; 745 | bad | — / 14.15 (1/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/15/108/good-azure/after-action.md) |
| 15/108; Ember | 12/12; 452 | good | — / — (0/0) | — / — (0/7) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/15/108/good-ember/after-action.md) |
| 15/109; Azure | 12/12; 440 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.36/2.75 | [report](../plan015/step-e/measurement/15/109/good-azure/after-action.md) |
| 15/109; Ember | 12/12; 408 | good | — / — (0/0) | — / — (0/6) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/15/109/good-ember/after-action.md) |
| 16/107; Azure | 8/8; 285 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.40/2.50 | [report](../plan015/step-e/measurement/16/107/good-azure/after-action.md) |
| 16/107; Ember | 8/8; 265 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/16/107/good-ember/after-action.md) |
| 16/108; Azure | 8/8; 41 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/16/108/good-azure/after-action.md) |
| 16/108; Ember | 8/8; 278 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/16/108/good-ember/after-action.md) |
| 16/109; Azure | 8/8; 155 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/16/109/good-azure/after-action.md) |
| 16/109; Ember | 8/8; 134 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 6.00/0.17 | [report](../plan015/step-e/measurement/16/109/good-ember/after-action.md) |
| 17/107; Azure | 12/12; 247 | bad | — / — (0/5) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/17/107/good-azure/after-action.md) |
| 17/107; Ember | 12/12; 321 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 11.00/0.09 | [report](../plan015/step-e/measurement/17/107/good-ember/after-action.md) |
| 17/108; Azure | 12/12; 396 | bad | — / 11.10 (1/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.22/4.50 | [report](../plan015/step-e/measurement/17/108/good-azure/after-action.md) |
| 17/108; Ember | 12/12; 532 | good | — / — (0/0) | — / — (0/7) | —/0.00 | 0.00/0.00 | 7.00/0.14 | [report](../plan015/step-e/measurement/17/108/good-ember/after-action.md) |
| 17/109; Azure | 12/12; 394 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.10/10.00 | [report](../plan015/step-e/measurement/17/109/good-azure/after-action.md) |
| 17/109; Ember | 12/12; 303 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/17/109/good-ember/after-action.md) |
| 18/107; Azure | 12/12; 316 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.14/7.00 | [report](../plan015/step-e/measurement/18/107/good-azure/after-action.md) |
| 18/107; Ember | 12/12; 729 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 3.00/0.33 | [report](../plan015/step-e/measurement/18/107/good-ember/after-action.md) |
| 18/108; Azure | 12/12; 571 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.29/3.50 | [report](../plan015/step-e/measurement/18/108/good-azure/after-action.md) |
| 18/108; Ember | 12/12; 1181 | good | — / — (0/0) | — / 5.60 (1/5) | —/0.00 | 0.00/0.00 | 3.50/0.29 | [report](../plan015/step-e/measurement/18/108/good-ember/after-action.md) |
| 18/109; Azure | 12/12; 479 | bad | — / — (0/6) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.10/10.00 | [report](../plan015/step-e/measurement/18/109/good-azure/after-action.md) |
| 18/109; Ember | 12/12; 771 | good | — / — (0/0) | — / 7.25 (1/6) | —/0.00 | 0.00/0.00 | 4.50/0.22 | [report](../plan015/step-e/measurement/18/109/good-ember/after-action.md) |
| 19/107; Azure | 12/12; 265 | bad | — / 26.75 (1/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.14/7.00 | [report](../plan015/step-e/measurement/19/107/good-azure/after-action.md) |
| 19/107; Ember | 12/12; 442 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 10.00/0.10 | [report](../plan015/step-e/measurement/19/107/good-ember/after-action.md) |
| 19/108; Azure | 12/12; 403 | bad | — / — (0/5) | — / — (0/0) | 0.20/— | 41.90/0.00 | 0.08/12.00 | [report](../plan015/step-e/measurement/19/108/good-azure/after-action.md) |
| 19/108; Ember | 12/12; 479 | good | — / — (0/0) | — / — (0/7) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/19/108/good-ember/after-action.md) |
| 19/109; Azure | 12/12; 138 | bad | — / — (0/5) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/19/109/good-azure/after-action.md) |
| 19/109; Ember | 12/12; 297 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/19/109/good-ember/after-action.md) |
| 20/107; Azure | 10/10; 412 | bad | 67.60 / 9.25 (1/7) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.83/1.20 | [report](../plan015/step-e/measurement/20/107/good-azure/after-action.md) |
| 20/107; Ember | 10/10; 440 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/20/107/good-ember/after-action.md) |
| 20/108; Azure | 10/10; 303 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.11/9.00 | [report](../plan015/step-e/measurement/20/108/good-azure/after-action.md) |
| 20/108; Ember | 10/10; 254 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/20/108/good-ember/after-action.md) |
| 20/109; Azure | 10/10; 208 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/20/109/good-azure/after-action.md) |
| 20/109; Ember | 10/10; 402 | good | — / — (0/0) | 99.35 / 31.55 (1/5) | —/0.00 | 0.00/0.00 | 8.00/0.12 | [report](../plan015/step-e/measurement/20/109/good-ember/after-action.md) |
| 21/107; Azure | 12/12; 548 | bad | 100.30 / 32.20 (1/6) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/21/107/good-azure/after-action.md) |
| 21/107; Ember | 12/12; 407 | good | — / — (0/0) | 115.20 / 58.10 (1/3) | —/0.22 | 0.00/3.00 | 8.00/0.12 | [report](../plan015/step-e/measurement/21/107/good-ember/after-action.md) |
| 21/108; Azure | 12/12; 270 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/21/108/good-azure/after-action.md) |
| 21/108; Ember | 12/12; 462 | good | — / — (0/0) | — / 71.65 (1/5) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/21/108/good-ember/after-action.md) |
| 21/109; Azure | 12/12; 328 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.27/3.67 | [report](../plan015/step-e/measurement/21/109/good-azure/after-action.md) |
| 21/109; Ember | 12/12; 369 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 11.00/0.09 | [report](../plan015/step-e/measurement/21/109/good-ember/after-action.md) |
| 22/107; Azure | 10/10; 257 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/22/107/good-azure/after-action.md) |
| 22/107; Ember | 10/10; 771 | good | — / — (0/0) | — / 17.60 (1/4) | —/0.00 | 0.00/0.00 | 7.00/0.14 | [report](../plan015/step-e/measurement/22/107/good-ember/after-action.md) |
| 22/108; Azure | 10/10; 808 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.20/5.00 | [report](../plan015/step-e/measurement/22/108/good-azure/after-action.md) |
| 22/108; Ember | 10/10; 951 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 2.33/0.43 | [report](../plan015/step-e/measurement/22/108/good-ember/after-action.md) |
| 22/109; Azure | 10/10; 827 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/22/109/good-azure/after-action.md) |
| 22/109; Ember | 10/10; 801 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/22/109/good-ember/after-action.md) |
| 23/107; Azure | 6/6; 414 | draw | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 1.00/1.00 | [report](../plan015/step-e/measurement/23/107/good-azure/after-action.md) |
| 23/107; Ember | 6/6; 185 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/23/107/good-ember/after-action.md) |
| 23/108; Azure | 6/6; 230 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/23/108/good-azure/after-action.md) |
| 23/108; Ember | 6/6; 419 | draw | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 1.00/1.00 | [report](../plan015/step-e/measurement/23/108/good-ember/after-action.md) |
| 23/109; Azure | 6/6; 183 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/23/109/good-azure/after-action.md) |
| 23/109; Ember | 6/6; 273 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/23/109/good-ember/after-action.md) |
| 24/107; Azure | 10/10; 357 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/24/107/good-azure/after-action.md) |
| 24/107; Ember | 10/10; 262 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 9.00/0.11 | [report](../plan015/step-e/measurement/24/107/good-ember/after-action.md) |
| 24/108; Azure | 10/10; 314 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/24/108/good-azure/after-action.md) |
| 24/108; Ember | 10/10; 387 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 1.80/0.56 | [report](../plan015/step-e/measurement/24/108/good-ember/after-action.md) |
| 24/109; Azure | 10/10; 335 | bad | 60.20 / 4.25 (1/5) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/24/109/good-azure/after-action.md) |
| 24/109; Ember | 10/10; 279 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | 7.00/0.14 | [report](../plan015/step-e/measurement/24/109/good-ember/after-action.md) |
| 25/107; Azure | 4/4; 100 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/25/107/good-azure/after-action.md) |
| 25/107; Ember | 4/4; 48 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/25/107/good-ember/after-action.md) |
| 25/108; Azure | 4/4; 54 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/25/108/good-azure/after-action.md) |
| 25/108; Ember | 4/4; 54 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/25/108/good-ember/after-action.md) |
| 25/109; Azure | 4/4; 31 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/25/109/good-azure/after-action.md) |
| 25/109; Ember | 4/4; 22 | good | — / — (0/0) | — / — (0/0) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/25/109/good-ember/after-action.md) |
| 26/107; Azure | 10/10; 288 | bad | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/26/107/good-azure/after-action.md) |
| 26/107; Ember | 10/10; 185 | good | — / — (0/0) | — / — (0/3) | —/0.09 | 0.00/31.20 | 2.00/0.50 | [report](../plan015/step-e/measurement/26/107/good-ember/after-action.md) |
| 26/108; Azure | 10/10; 198 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.25/4.00 | [report](../plan015/step-e/measurement/26/108/good-azure/after-action.md) |
| 26/108; Ember | 10/10; 159 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 6.00/0.17 | [report](../plan015/step-e/measurement/26/108/good-ember/after-action.md) |
| 26/109; Azure | 10/10; 113 | bad | — / — (0/2) | — / — (0/0) | 0.25/— | 14.40/0.00 | 0.50/2.00 | [report](../plan015/step-e/measurement/26/109/good-azure/after-action.md) |
| 26/109; Ember | 10/10; 335 | good | — / — (0/0) | — / — (0/7) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/26/109/good-ember/after-action.md) |
| 27/107; Azure | 6/6; 340 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.67/1.50 | [report](../plan015/step-e/measurement/27/107/good-azure/after-action.md) |
| 27/107; Ember | 6/6; 112 | draw | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | 1.00/1.00 | [report](../plan015/step-e/measurement/27/107/good-ember/after-action.md) |
| 27/108; Azure | 6/6; 62 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/27/108/good-azure/after-action.md) |
| 27/108; Ember | 6/6; 294 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/27/108/good-ember/after-action.md) |
| 27/109; Azure | 6/6; 110 | bad | — / — (0/1) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/27/109/good-azure/after-action.md) |
| 27/109; Ember | 6/6; 248 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 5.00/0.20 | [report](../plan015/step-e/measurement/27/109/good-ember/after-action.md) |
| 28/107; Azure | 10/10; 233 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.12/8.00 | [report](../plan015/step-e/measurement/28/107/good-azure/after-action.md) |
| 28/107; Ember | 10/10; 135 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | —/0.00 | [report](../plan015/step-e/measurement/28/107/good-ember/after-action.md) |
| 28/108; Azure | 10/10; 368 | bad | — / — (0/6) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.33/3.00 | [report](../plan015/step-e/measurement/28/108/good-azure/after-action.md) |
| 28/108; Ember | 10/10; 286 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 2.67/0.38 | [report](../plan015/step-e/measurement/28/108/good-ember/after-action.md) |
| 28/109; Azure | 10/10; 297 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.38/2.67 | [report](../plan015/step-e/measurement/28/109/good-azure/after-action.md) |
| 28/109; Ember | 10/10; 402 | good | — / — (0/0) | — / — (0/4) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/28/109/good-ember/after-action.md) |
| 29/107; Azure | 8/8; 926 | good | — / — (0/3) | — / — (0/0) | 0.00/— | 0.00/0.00 | 1.60/0.62 | [report](../plan015/step-e/measurement/29/107/good-azure/after-action.md) |
| 29/107; Ember | 8/8; 579 | bad | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/51.30 | 0.62/1.60 | [report](../plan015/step-e/measurement/29/107/good-ember/after-action.md) |
| 29/108; Azure | 8/8; 572 | bad | — / — (0/2) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.00/— | [report](../plan015/step-e/measurement/29/108/good-azure/after-action.md) |
| 29/108; Ember | 8/8; 819 | good | — / — (0/0) | — / — (0/1) | —/0.00 | 0.00/0.00 | 4.00/0.25 | [report](../plan015/step-e/measurement/29/108/good-ember/after-action.md) |
| 29/109; Azure | 8/8; 580 | bad | — / — (0/4) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.40/2.50 | [report](../plan015/step-e/measurement/29/109/good-azure/after-action.md) |
| 29/109; Ember | 8/8; 452 | good | — / — (0/0) | — / — (0/2) | —/0.00 | 0.00/0.00 | 2.00/0.50 | [report](../plan015/step-e/measurement/29/109/good-ember/after-action.md) |
| 30/107; Azure | 10/10; 323 | bad | — / 27.70 (1/7) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/30/107/good-azure/after-action.md) |
| 30/107; Ember | 10/10; 412 | good | — / — (0/0) | — / — (0/1) | —/0.17 | 0.00/101.85 | 7.00/0.14 | [report](../plan015/step-e/measurement/30/107/good-ember/after-action.md) |
| 30/108; Azure | 10/10; 439 | bad | — / — (0/6) | — / — (0/0) | 0.00/— | 0.00/0.00 | 0.17/6.00 | [report](../plan015/step-e/measurement/30/108/good-azure/after-action.md) |
| 30/108; Ember | 10/10; 349 | good | — / — (0/0) | — / — (0/3) | —/0.00 | 0.00/0.00 | 1.50/0.67 | [report](../plan015/step-e/measurement/30/108/good-ember/after-action.md) |
| 30/109; Azure | 10/10; 514 | good | — / 27.55 (1/4) | — / — (0/0) | 0.13/— | 19.40/0.00 | 1.29/0.78 | [report](../plan015/step-e/measurement/30/109/good-azure/after-action.md) |
| 30/109; Ember | 10/10; 381 | good | — / — (0/0) | — / — (0/5) | —/0.00 | 0.00/0.00 | 1.75/0.57 | [report](../plan015/step-e/measurement/30/109/good-ember/after-action.md) |

## Attribution and adverse cases

Every measured run has an AAR with profile values, timed calls, actor-memory evidence, observed subsequent effects, and explicit net drops. Trace association explains a possible chain; it does not establish that one selected call caused the outcome. All losing-good and tied pairs remain in the tables above. The first positive and first negative pair, when available, provide contrasting examples:

Pair 8/108, score2:
- good on Azure: 21 explicit drops; 0/9 wrong-target proxies; 24.3 stale squad-seconds. First recorded evidence: [{'id': 694, 'time': 3.95, 'kind': 'leader_call', 'soldier': 5, 'squad': 0, 'reason': 'FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated', 'goal': [10.735508, -8.9653015, 0]}].
- bad on Ember: 224 explicit drops; 0/0 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [].
- bad on Azure: 409 explicit drops; 0/5 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [{'id': 1322, 'time': 12.75, 'kind': 'leader_call', 'soldier': 5, 'squad': 1, 'reason': 'FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent', 'goal': [18.008591, 8.5548706, 0]}].
- good on Ember: 9 explicit drops; 0/0 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [].

Pair 14/108, score-1:
- good on Azure: 6 explicit drops; 0/2 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [{'id': 538, 'time': 3.95, 'kind': 'leader_call', 'soldier': 5, 'squad': 0, 'reason': 'FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated', 'goal': [-1.3702621, -8.9690189, 0]}].
- bad on Ember: 243 explicit drops; 0/0 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [].
- bad on Azure: 249 explicit drops; 0/3 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [{'id': 1358, 'time': 13.75, 'kind': 'leader_call', 'soldier': 5, 'squad': 0, 'reason': 'FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent', 'goal': [3.9642982, -8.5075073, 0]}].
- good on Ember: 1 explicit drops; 0/0 wrong-target proxies; 0.0 stale squad-seconds. First recorded evidence: [].

## Comparison limitation found during measurement

The equal-roster comparison retains F1’s fixed-defender branch: `BattleSim.cpp:697` sets fixedDefender=1, and `CommandSim.cpp:635` replaces defender squad planning with scripted Hold/Overwatch. The defender therefore has no active drill instance for the intent planner’s report filter. The [first matched-pair trace audit](../plan015/step-e/comparison-evidence.json) shows no defender leader_call decisions and no accepted defender drills; the attacker has 16 versus 9 profile calls across the role swaps. Net profile effects still apply, but the defender cannot exercise all four dials. This is an implementation/harness gap, not evidence that a bad active platoon commander competes equally with a good one. The retained fixed-defender contract means this experiment cannot certify the requested fully two-sided leader-effect comparison even if an outcome threshold happened to pass. No post-measurement repair or second paired run is made.

## Stop and remaining work

STOP: bad loses 90/180 battles, exactly 50%, so the user’s majority requirement fails. Good-favouring/bad-favouring/split-or-tied pairs are 5/3/82; overall good/bad/draw battle outcomes 90/85/5. All 180 battles fired and have AARs, with180 unique keys,90 matching scenario pairs, and equal rosters/weapons verified. The fixed-defender gap independently prevents certification of a fully two-sided comparison. No profile tuning, repair or second measured run follows. Step D’s in-game summary screen and leader controls are not prepared because this step failed; [Step D stop note](015-step-d-report.md). Unreal build/smoke remains the architect’s work. Blind replay identification is pending the user’s return. Legacy remains default; no promotion, commit, reset, stash or Fable call. No F2/F3 or gun pickup.
