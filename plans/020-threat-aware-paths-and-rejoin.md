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
