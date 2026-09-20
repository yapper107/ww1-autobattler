# Plan 020: threat-aware soldier paths, and orders that beat a comfortable position

Status: **approved by the user on 20 September 2026 with the rulings at the end; implementation by an Opus agent at the user's instruction, reviewed by the architect.** The user approved the direction ("Do it, however we need to
plan this out") and set the threshold idea: a path is judged by the **seconds it reveals the soldier to a particular
enemy, around 3 seconds**, and warned that this "may lead to path finding issues later down the line". Nothing is
implemented. Author: Fable (architect). Questions are at the end.

## Why

The user's replay verdict on the best legacy node: squads "keep moving around into the open ground (which they should not
do, they should do a safer path if they know enemies are around) and get shot multiple times", "some soldiers left behind
in the backline not doing anything", "a lack of general intelligence". Measured on two of those battles: half of all
wounds are taken while displacing, and soldiers know the enemy is there when it happens (they have no enemy in mind only
4 to 6 % of the time near a defender they have faced). Two causes sit in shared soldier code, which no loop lineage may
change:

1. **An individual soldier walks the shortest path.** `TaskExecutionPath` (`BattleSim.cpp`) ends in `FindPath(map,
   position, goal)` for everything except squad corridor routes. The squad-level planner (`TacticalRoutePlanner`,
   `FindCostPath`) already avoids ground the leader's known enemies can see; the man walking to his slot does not.
2. **A comfortable position beats an order.** In `ChooseOrder`, a man whose remembered cover is "useful" (protected, with
   a firing angle on a contact seen in the last 8 s) has its expiry renewed every decision, a `Rally` order is obeyed
   only when the cover is NOT useful, and `Flank`/`PullBack` orders only when he has no assigned cover at all. While a
   threat is known the stale-cover release never runs. So two riflemen can sit in the start building for ten minutes
   whatever their corporal sends them, and flankers "hesitate" to leave for the firing position they were ordered to.

## Part 1: threat-aware paths

**The measure (user's):** for a candidate path, `revealed seconds` = for each enemy the soldier KNOWS (his own contacts
and the reports he has received: `contacts[i].known`, position as he believes it, seen or reported within the memory
window: **30 s, user ruling**), the time he would spend on that path with a clear line between that enemy's believed position and his body at
walking pace; the path's figure is the WORST single enemy. Sampled every metre of path with the existing memoised
line-of-sight query. Own knowledge only: never enemy truth.

**The rule:**
1. Compute the shortest path as today. With no known enemy inside 120 m of the path, use it: nothing changes for a march
   in the rear, for fixtures without enemies, or for a soldier who knows nothing.
2. If the shortest path's revealed seconds are at most the threshold (**3 s**, one table constant), use it: a short dash
   across a gap is fine.
3. Otherwise search for a covered alternative with the existing cost search (`FindCostPath`, cost = distance plus a
   heavy charge for cells seen from a known enemy position, bounded expansion budget). Accept it when it is at most the
   threshold, or at least halves the revealed seconds, AND it is no longer than the detour limit (**1.5 times the shortest path, user ruling**). Otherwise take the shortest path: a man who has been ordered somewhere still goes.
4. The chosen path is kept until the goal changes (as today). It is re-planned early only when a newly known enemy
   reveals the REMAINING path for more than the threshold.

**What is left alone:** emergency shelter moves and peek/duck moves within a slot (they are two metres long and must be
instant); squad corridor routes that the leader's tactical planner already produced (`FollowCorridor`), except the join
leg onto them; the static defenders (they do not move); path finding itself (`FindPath` is untouched: this plan only
decides WHICH path the soldier asks for).

**Against the user's worry, "path finding issues later down the line":**
- The shortest path is always computed first and is always the fallback: failure, budget exhaustion or an over-long
  detour of the covered search can never leave a soldier without a path or send him across the map.
- One switch, `Config::threatAwarePaths` (default on) with `--no-threat-aware-paths`: off reproduces today's battles bit
  for bit (as `--no-moving-fire` does), so any future path bug can be bisected in one run, and the loop can A/B it.
- Every number (threshold, memory window, detour limits, search budget, sight charge) in one table next to the walking
  fire table, reachable by a later parameter search.
- The trace records for every path choice: shortest length and revealed seconds, alternative length and revealed
  seconds, which was taken and why; the evaluation export gains a per-soldier `covered_path` flag, and
  `tools/battle_video.py` can draw the chosen and the rejected path for a focus squad.
- A new conduct measure, `revealed_moving_share` (attacker-seconds displacing in a known enemy's sight), and the
  existing `wounded_moving_share`, reported before and after.
- Cost: line-of-sight queries are memoised per geometry revision; the search runs only when the shortest path fails the
  threshold. Battle wall clock is measured before and after on twenty battles; more than 15 % slower is a defect to fix
  before landing.

## Part 2: who may leave cover, and when (user ruling)

The user's rule: **"Men should never leave cover under enemy fire unless a squad wide retreat order is given or he has
better cover somewhere close by."** In `ChooseOrder`:
- **Under enemy fire** (the existing danger conditions: suppressed above the duck threshold, `pressure`, `pinned`,
  `openFire`, or rounds received in the last few seconds) a man in cover STAYS in cover whatever movement order he holds
  (`Advance`, `Flank`, `BoundMove`, `Rally`, `ClearLane`), with two exceptions: a squad-wide retreat (`Task::PullBack`),
  which he obeys, by a covered path; and better cover close by (the existing shelter search finds a position within a
  short distance, say 12 m, that protects him from the enemies firing on him when his present one does not, or protects
  him from more of the enemies he knows): then he moves to it. Today some of these orders already wait for
  `!localSafety`; the rule is made uniform and explicit, and a man who is NOT in cover when fired on seeks the nearest
  cover as now.
- **Not under fire**, an order to move well away from his remembered cover (more than 12 m: `Rally`, `Flank`,
  `BoundMove`, `PullBack`, `Advance`) releases that cover: "I have a useful window here" no longer beats the order, and
  `usefulCover` stops renewing the expiry of a position he has been ordered away from. This is what ends the two
  riflemen in the start building and the flankers' hesitancy. With part 1 the move he then makes is by a covered path.

## Verification

- `--stats`-style unit tests on a small authored map with a street, a parallel covered alley and one known enemy
  overlooking the street: street taken when no enemy is known; street taken when it reveals him for under 3 s; alley
  taken when the street reveals him for more and the alley is within the detour limit; street taken when the alley is
  five times longer; the off switch; re-plan on a newly known enemy; an ordered rifleman leaves useful cover for a rally
  point 40 m away when not suppressed, and stays when suppressed.
- Full Linux suite, Python tests, the true-off digest proof against the untouched parent binary on ten commands,
  determinism (twice, traced and untraced), Unreal compile.
- Re-baseline as for plans 018 (stutter) and 019: 40 references archived and regenerated, 40/40 parity, 3/3 drills trace
  parity, both loop lineages re-rooted, the best node of each carried forward. About an hour of machine time.
- Reported, not tuned: the roots' attack score, attackers lost, `wounded_moving_share`, `revealed_moving_share`,
  `moves_per_soldier_minute`, men left more than 60 m behind their squad, battle wall clock; a side-by-side video for the
  user (on/off on the same map) with the chosen and rejected paths drawn.

## Risks

- Covered detours slow the attack; the score counts only ten minutes. The detour limit bounds it, and the loop measures it.
- Men funnel into the same covered alley: more bunching and friendly fire. The existing traffic code and the under-2 m and
  friendly-fire guards measure it; if it shows, the sight charge comes down before anything else.
- Believed enemy positions can be wrong or stale: a man may detour around a dead defender for up to the memory window.
- Timing-sensitive mechanism selectors may move again (they are reported, not repaired, as in plans 017 and 019).

## The user's rulings, 20 September 2026

1. "Men should never leave cover under enemy fire unless a squad wide retreat order is given or he has better cover
   somewhere close by." (Part 2 is rewritten around it.)
2. A soldier keeps avoiding a place an enemy was seen for **30 s** (the architect had assumed 60 s).
3. He may go out of his way up to **1.5 times** the direct distance (the architect had assumed 2.5 times).
4. The revealed-seconds threshold is about **3 s** to a particular enemy.
5. "Just have an Opus agent implement."

## Implementation notes (Opus agent, 20 September 2026)

Implemented on the plan-019 source `24e7fba35634d590` in the prepared worktree. Nothing is
committed, promoted or re-baselined; the 40 references are untouched.

**What was built.** One table, `PathCaution` in `Sim/BattleSim.h` with `Caution()` as its single
accessor, and one switch, `Config::threatAwarePaths` (`--no-threat-aware-paths`), covering both
parts. The formulas, the rule and the exceptions are in
[docs/STATS_AND_WEAPONS.md](../docs/STATS_AND_WEAPONS.md), "Threat-aware paths and the cover rule".

*Part 1, `Sim/BattleSim.cpp`.* `KnownThreats` merges his own contacts with received reports inside
the 30 s window; `RevealedSeconds` walks a candidate path at his own pace, samples every metre and
returns the worst single enemy; `CautiousPath` is the decision (shortest first, three free
early-outs, a `FindCostPath` alternative charged at 8 per seen metre, accepted only inside the 1.5
detour limit and at or below 3 s or half the shortest path's figure). `TaskExecutionPath` takes
`Config` and `time` and routes every leg that crosses ground through it; the local slot branch,
the sub-three-metre branch, emergency departures, static defenders and the squad corridor itself
are untouched, and the corridor *join* leg is cautious. `PathRevealedSeconds` exports the measure
for tests and tools. The early replan lives on the existing two-second `nextPathCheck` cadence and
fires only for an enemy outside the `pathKnown` bitmask taken when the path was chosen.

*Part 2, `ChooseOrder` and `ExecuteTask`.* `BetterCoverNearby` (shared, in `BattleSim.cpp`) is the
one exception; `underFire` is `pressure || suppression > 0.08`.

**Deviations from the plan, and why.**

1. *"Under fire" is suppression only.* The plan lists "the existing danger conditions ... or rounds
   received in the last few seconds". `pinned`, `openFire` and `exposedStop` all already imply
   `suppression > 0.08`, and a man in cover is by definition not `exposed`, so the whole list
   reduces to `pressure || suppression > 0.08`. Suppression decays at 0.15/s from 0.23 per near
   miss, so 0.08 is "a round passed close to me about a second ago" — the user's "under enemy
   fire" without reading the shot record. A wider reading (a known enemy who has just fired can
   see me) was written and dropped: it is true almost continuously in a firefight and would have
   frozen every attacker in place.
2. *The better-cover exception is scoped to men holding a movement order.* The plan states it as
   the exception to "never leave cover", whose subject is a man with somewhere to be. Letting any
   soldier in cover under fire re-shop for cover would have changed `Hold`, `Overwatch`,
   `BoundCover` and `RearGuard` behaviour that this plan does not touch.
3. *"Protects him from more of the enemies he knows" is the whole test.* The plan's first clause
   ("protects him from the enemies firing on him when the present one does not") is already in the
   code as `flanked`, which drops a man out of the memory block into the ordinary cover search.
   `BetterCoverNearby` adds only the second clause, over the 30 s knowledge window, so it is the
   10-to-30-second band that `flanked` and the typed `exposed` test (both 10 s, both visible-only)
   cannot see.
4. *`Task::ClearLane` is gated explicitly.* Every other movement branch in `ChooseOrder` already
   waits on `!memory.assigned`, so a man in remembered cover never took it; `ClearLane` did not.
5. *`PrepareTaskExecution` gained the switch.* It discarded a mover's remembered cover whenever his
   suppression was below 0.35, which is above the under-fire threshold, so the typed cover rule
   would have had nothing to hold. It now keeps the cover while he is under fire; below the
   threshold it is the pre-020 release exactly.
6. *The cost field carries at most four enemies.* The measure uses every enemy he knows, but
   charging all of them in the search costs a line-of-sight query per cell per enemy. The field
   charges the enemies that actually revealed the shortest path, worst first: those are the ones
   the detour has to beat, and the accept test is unchanged.
7. *A free exact early-out on length.* A path shorter than `revealedSeconds * pace` (about 9.5 m
   for a rifleman) cannot reach the threshold however open it is, so it is never measured. This is
   what keeps short cover hops at their pre-020 cost.
8. *Digest folding.* `Soldier::coveredPath` is folded into the gameplay digest only when true, as
   plan 019's flags are, so `--no-threat-aware-paths` is a provable off switch. It is cleared once
   the path has been walked.
9. *The `nearPath` skip is measured from the believed enemy position to the path segments*, not
   from the soldier: a 120 m radius around the walk, as the plan intends.
10. *Only a cover he has reached is released.* Releasing one he is still walking to let the
    ordinary cover search re-choose on every think, which is the shuttle the plan-018 stutter fix
    removed. He now releases on arrival, which also makes the release a bound: arrive, release,
    pick the next position forward, walk. A `Task::PullBack` releases immediately, reached or not.

**Existing tests touched.** `tests/recovery_gate_tests.h` line 38 only: the `TaskExecutionPath`
call gained `Config{},0.f` for the new signature. No assertion was changed anywhere.

**New:** `tests/paths_tests.h`, selector `--paths`, also run by the default suite.

**Measured, not tuned.** Ten commands (legacy and drills town attacks on maps 22, 27, 33 and 36,
battle seed 107, 600 s; two symmetric legacy battles on 33 and 26 at 360 s). `--no-threat-aware-paths`
reproduces the untouched parent binary's digest on **10 of 10**. With the feature on, means over the
ten: attack score 0.388 -> 0.395, attackers lost 0.350 -> 0.350, `wounded_moving_share`
0.369 -> 0.335, `moves_per_soldier_minute` 3.04 -> 3.81, `moving_share` 0.254 -> 0.314,
`stutter_share` 0.0012 -> 0.0027, friendly hits per 100 soldier-minutes 4.66 -> 4.89, `under_2m`
0.129 -> 0.132, battle wall clock 16.5 s -> 17.5 s (+6.2 %, inside the plan's 15 % budget). Across
the ten battles the covered search ran 2063 times and took the covered alternative 174 times, at a
mean detour of 1.23 times the shortest path. On one full traced battle (legacy, map 33) the reasons
were 267 "shortest under the threshold", 23 "covered alternative under the threshold", 3 "halves the
exposure", 14 "detour longer than the limit", 6 "no better"; the cover rule reached six "released by
order" and six "stayed under fire", and eight legs were replanned on a newly known enemy. Single
battles are chaotic divergence, not the feature's effect; the loop's paired suites on re-rooted
lineages are the measurement. The rise in `stutter_share` (still thirteen times below the 3.7 % the
user objected to on 19 September) and in movement rate are the two numbers to watch.

**Selector status, reported not repaired.** On the final source `fa0ce26c574eec38`, the full Linux
suite (including the new `--paths` group), `--stats`, `--leaders`, `--routes`, `--recovery`,
`--foundations`, `--generated`, `--static-defence`, `--moving-fire`, `--cognition` and
`--normal-cognition` pass, and 125 Python tests pass. `--drills` (D02), `--platoon` (Q07),
`--decision-loop` (physical deployment) and `--reliability` (reconnaissance) fail. Each was compared
against a parent binary built from `git archive HEAD` in `.local/p020/parent-src`: the same four
groups fail on the parent, at the same assertion and the same line. Nothing regressed and no
assertion was changed.

## Architect's review, 20 September 2026

The Opus implementation (source `fa0ce26c574eec38`) was read function by function and kept as delivered. Verified by
the architect on the main checkout: full Linux suite, the new `--paths` group and 125 Python tests pass; the 40 authored
references archived to `.local/baselines-pre020/paths/` and regenerated, 40/40 parity, 3/3 drills trace parity with a
determinism repeat; the Unreal module compiles on UE 5.4. `tools/battle_video.py` marks a man on a covered detour with a
green ring. On ten on/off battles about 8 % of path decisions take a covered detour (mean 1.23 times the shortest),
wounds taken while moving fall from 37 % to 34 %, attackers lost and score are flat, battles cost about 6 % more wall
clock, and moves per soldier-minute RISE from 3.0 to 3.8 (men who used to sit behind now follow, and paths are
re-planned when a new enemy becomes known): the user's restlessness complaint is the thing to watch in the paired
suites of the re-rooted lineages, which are the measurement; single battles diverge chaotically.
