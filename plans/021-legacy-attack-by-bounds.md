# Plan 021: the legacy attack by deliberate bounds, with a job for every squad and every man

Status: **approved by the user on 20 September 2026 with the rulings at the end; implementation by an Opus agent at the user's instruction, reviewed by the architect and evaluated by the loop.** Nothing is implemented yet. Author: Fable
(architect). Questions are at the end. Legacy command code only: no shared soldier code, no re-baseline, no re-root; the
result is evaluated by the improvement loop as one large legacy node on the current survivor `22b8504a0d673627`.

## Why

The user's verdicts on the legacy survivors (replay videos, 20 September 2026):
- "the squads keep moving around very rapidly when there are still enemies... the last enemy was able to gun down a lot of
  guys because the soldiers kept moving around to get into position";
- "a couple soldiers from the flanking squad were hanging back and not doing anything";
- "some of the squads would straight up not move from their positions and let one squad do all of the work".

What the loop measured and traced:
- **Restlessness is how legacy advances, not surplus orders.** At the fight a man gets a new order every 6 s and relocates
  six metres or more every 35 to 45 s; 42 % of wounds are taken while displacing. Of those relocations 46 to 52 % are made
  under a Flank order (the relay re-seats every rifleman around the corporal's LIVE position every two-second cycle, and
  routes are cut into 12 m stages), 15 to 21 % are the soldier's own cover decision under an unchanged Hold, 13 % under
  Advance. Seven loop proposals that deleted, froze or damped re-positioning orders either lost attack or changed
  nothing: freezing the regroup point cut orders 13 to 26 % and attackers lost 3 to 5 points, and cost 6 to 7 points of
  defenders out of action and up to 26 points of men at the fight.
- **Stragglers.** On the survivor 9 to 13 % of living attacker time is spent more than 40 m from the squad's centre
  without having fired for a minute (legacy today: 1 to 4 %): mostly riflemen of one squad holding a Rally order they
  never complete (711 of 1100 straggler seconds on `city-28`), or parked under Hold.
- **Quiet squads.** In every replay one or two of the four squads fire under a tenth of the rounds (on `city-28` one squad
  fired 8 of 616); its sergeant holds a Hold order for the whole battle and creeps forward 50 m in ten minutes. The
  platoon lets one squad manoeuvre and gives the others nothing to do from where they are. Legacy today does the same.
New loop measures for all of this: `relocations_per_soldier_minute`, `relocation_seen_seconds_per_soldier_minute`,
`wounded_moving_share`, `straggler_share`, `least_squad_shot_share`, `quiet_squads` (`tools/conduct_metrics.py`).

## Design

### A. A manoeuvre is a bound: few, long, covered legs; each man moves once per leg
1. When the sergeant commits a manoeuvre (Flank, Press, Reposition, Advance in contact), he fixes a **leg**: a destination
   firing position for the rifle group (the existing qualifying logic for flanks stays: a line onto the known enemy, 25
   to 60 m from him, 45 degrees off the squad's own gun) and, at that moment, **one slot per rifleman** at the
   destination: a covered position with a line onto the known enemy where one exists, spaced from the others, chosen with
   the existing firing-position search around the destination, not around the corporal's live position.
2. Each rifleman receives that slot ONCE. While the leg runs the relay does not re-seat him: no formation offsets around
   the moving corporal, no regroup chase, no firing-position re-ranking. He walks there by his covered path (plan 020)
   and takes it up. The only re-orders during a leg: his slot became invalid (occupied, no longer protected from a newly
   known enemy), the leg was cancelled, or a squad retreat.
3. **Bounds stay normal length, and the next one is queued (user ruling).** A manoeuvre toward a destination farther than
   one bound is planned as a CHAIN of ordinary bounds (today's leg length) along the route, each with its own slots,
   fixed when the manoeuvre is committed. When a bound completes, the next queued bound starts at once: no fresh
   assessment, no preparation pause, no re-pick of nearly the same place. The chain is dropped only when it is
   invalidated: the enemy it was aimed at is dead or stale, a bound fails on the pause conditions, a newly known enemy
   dominates the next bound, or the platoon orders otherwise.
4. A leg ENDS when the moving men have arrived (majority of those still moving, as now), FAILS on the existing pause
   conditions (crossing pressure, refusals) or at its deadline. On arrival the group FIGHTS from its slots: the existing
   hold-after-arrival applies (while engaged, or 25 s after the last effective fire). The next leg is committed only when
   the enemy that leg was aimed at is dead or unseen for the stale window, a clearly better qualifying position exists
   (the existing margin), or the platoon orders it.
5. Base of fire: the sergeant and the gun stay and fire while the rifle group moves, as now; at the end of a leg, if the
   gun has no line onto any known enemy or is more than its range from the group's fight, the GUN makes the next bound and
   the rifle group covers from its slots.

### B. Nobody is left behind
A rifleman who was not with the group when the leg was committed (wounded slow, pinned, arriving late) gets the same
single order: HIS slot at the leg's destination. He is not sent to chase the corporal. If he is under fire he stays in
cover (the user's plan 020 rule) and goes when it lifts. A man who has held a Rally or Hold order for more than the
straggler limit (20 s) without firing and is more than 40 m from his group is re-slotted at the group's present
position.

### C. Every squad has a job
In `PlatoonSim.cpp`: a squad whose riflemen have had no line of fire onto any known enemy for the no-job limit
(**30 s, user ruling**) while another squad of the platoon is in contact gets a task: a support-by-fire position with a line onto
the enemy the engaged squad is fighting (within rifle and gun range), or, if the platoon already has a base of fire, a
manoeuvre of its own on the side the engaged squad is not using. **At most half of the squads working together manoeuvre at once (user ruling: two of four)** and their routes
must not cross; at least one squad's gun stays engaged on the enemy.

### What is NOT changed
Shared soldier code, path finding, the tactical route planner itself, drills, cognition, the static defenders. The
friendly-fire logic. The flank qualification tests. Everything is behind the existing legacy-only code paths, so the
parity guard (drills, cognition and defender digests unchanged) applies as for any loop node.

## Acceptance (the loop measures it; the user judges the replay)
On the 60 paired development battles against the parent `22b8504a0d673627`:
- `relocations_per_soldier_minute` down by at least 30 %, `wounded_moving_share` down, attackers lost not up;
- `straggler_share` at or below legacy today's (about 3 %);
- `quiet_squads` down and `least_squad_shot_share` up;
- attack score and defenders out of action not significantly below the parent; every guard passes (friendly fire, spacing
  and order rate on the symmetric battles; men at the fight; seen with no shot).
Then side-by-side replays on the four maps the user has been watching (24, 26, 28, 39).

## Risks
- A slot chosen at commit time can be wrong by the time the man arrives (the enemy seen there is dead, a new one appears):
  the validity re-check in A2 is the mitigation; the frozen-rally-point experiments show what happens without it.
- Longer legs are longer exposures when the route is bad; plan 020's covered paths and the pause conditions bound it.
- More squads manoeuvring and supporting at once is how friendly fire rose in earlier proposals; the loop's guard measures it.
- It is a larger change than any loop node so far: several functions in `ManeuverSim.cpp`, `CoordinationSim.cpp`,
  `CommandSim.cpp` and `PlatoonSim.cpp`. It may be delivered in the three parts above, each measured on its own.

## The user's rulings, 20 September 2026
1. Bound length: "a run can just use normal bounds with another bound queued up": no longer legs; a queued chain of normal bounds.
2. Straggler limit: 20 s (the architect's exemptions for the gun group and men under fire were added with it).
3. No-job limit for a squad: 30 s.
4. Squads manoeuvring at once: half of the squads working together.
5. Implementation: an Opus agent.

The user also asked whether this is something the improvement loop cannot change. It can: all of it is legacy command
code inside the loop's reach, and the result is scored as a loop node like any other. What the loop's PROPOSAL FORMAT
cannot do is this kind of change: a proposer makes one small mechanism in one place and is judged on a suite that
cannot resolve effects under about 0.05; seven such proposals showed that the restlessness is structural (how the squad
advances, across four files), so deleting one order class at a time either removes the advance or changes nothing. This
plan is one coordinated change, written once, then handed back to the loop to measure and to refine with ordinary
proposals.

## Implementation notes (Opus agent, 20 September 2026)

Built on the loop's legacy survivor `22b8504a0d673627` in three parts, each kept as a patch in
`.local/p021/` (`A.patch`, `AB.patch`, `ABC.patch`) and measured on a fixed check set of fourteen
static-defence attacks (maps 22/27/33/36/39 with battle seeds 107 and 108, and 23/24/26/28 with
seed 107) plus symmetric town battles. Final source of the worktree: part A + B + C.
Everything is inside the legacy command path: `PlanSquad`/`UpdateCommands` (`CommandSim.cpp`),
`UpdateManeuver` (`ManeuverSim.cpp`), `UpdateCoordination` (`CoordinationSim.cpp`),
`UpdateSquadPlan` (`PlanSim.cpp`) and `PlanPlatoon`/`UpdatePlatoon` (`PlatoonSim.cpp`).
Drills, cognition and the static defenders are digest-identical (three parity battles, unchanged
after every stage), and the full Linux suite and 125 Python tests pass on the final state.

### Where a squad's bound chain lives
`SquadCommand::bounds` (`BoundPlan` in `BattleSim.h`): `active`, the `plan` id and `serial` it was
fixed under, `committedAt`, the mask `known` of the enemies the leader knew at that moment, the
bound's `target`, and one `slots[slot]`/`hasSlot[slot]` per squad member. The chain itself is the
route the manoeuvre committed (`cmd.route`): `cmd.routeStage` is the first planner segment of the
running bound and the new `cmd.boundStage` its last, so the remaining segments are the queue.
`cmd.boundMajorityAt` times the wait for the last men. `cmd.noLineSince` (part C) is the squad's
own clock for "no rifleman has a line onto a known enemy".

### Part A: a manoeuvre is a bound
- `PlanBoundSlots` (`CoordinationSim.cpp`) fixes one slot per rifleman when a bound starts: cover
  within `slotRadius` of the destination, spaced by `slotSpacing`, preferring a line onto the
  nearest known enemy within `slotRange` and protection from him, cheapest by distance from the
  man and by reported fire danger, and reachable. With no cover at the destination the man still
  gets his own fixed place there (the old formation offset, computed once), so nobody is unplaced.
- The corporal's relay in `UpdateCommands` sends that slot ONCE: it skips the send entirely while
  the man already holds exactly that order (or it is still in flight, `reissueSeconds`). The
  formation-offset branch and the `lagging` Rally chase no longer run during a bound.
- A slot that stopped being a fighting position (another man standing on it, or an enemy that was
  NOT known when the bound started overlooking it, `BoundSlotValid`) is given up once and for all
  for that bound; the man falls back to the ordinary formation order. Latching this was necessary:
  the first version re-tested every cycle and alternated slot/formation orders, which raised the
  symmetric order rate and friendly fire.
- Arrival counts a man who stands within `slotArrival` of his own slot, as well as the old
  eight-metre test on the raw destination.
- On arrival the group fights from its slots: the relay's holding branch keeps a man who stands on
  his slot while it still bears on a known enemy (`BoundSlotBears`) instead of re-seating him with
  `UsefulFiringPosition`; the slots are dropped when the squad is stopped, withdraws, or commits
  the next bound.
- A5, the gun: when the last bound of a chain completes and the gun has no useful line
  (`cmd.supportUseful` false), `supportNeedsMove` is raised, which makes the next `PlanSquad`
  anchor search move the gun forward while the rifle group covers from its slots.

### Part B: nobody is left behind
- A latecomer needs nothing new: the bound gives every living, unwounded rifleman a slot whatever
  his distance, and the relay sends it to him once.
- The bound waits for the last men (`boundGrace`): after the arrival majority, the chain only goes
  on when every mover who is neither there nor pinned has arrived, or the grace has run out. Men
  under fire and the gun group are exempt, as the user ruled; the manoeuvre deadline is extended
  by the grace so the wait cannot trip the pause conditions.
- The 20 s re-slot rule: a man who has held Rally or Hold for `stragglerSeconds` without firing,
  is more than `stragglerDistance` from his group, is not suppressed and is not under reported
  fire is sent to a covered place beside the group (`RejoinPosition`) with a line onto the enemy
  the squad knows. Men with a slot on the running bound already have a job and are left alone.

### Part C: every squad has a job
- Each legacy squad leader reports `noLineSeconds` in his `SquadSituation`: how long no rifleman of
  his (the gun aside) has had a line onto an enemy he knows within `jobRangeMax`. The clock is only
  kept while the squad knows an enemy at all; a squad that knows none is searching, which is a job.
  The static defenders never compute or receive this (`PlatoonRuntime::fixedDefender`).
- `PlanPlatoon`: a squad reporting `noJobSeconds` or more is no longer eligible to be the platoon's
  base of fire, and instead of the old "consolidate ten metres from the mover" it is given a real
  support-by-fire position: cover with a clear line onto the enemy the engaged squad is fighting,
  `jobRangeMin` to `jobRangeMax` from him, protected from him, at most `jobTravel` away, at least
  `jobSpacing` from another squad's job, whose approach does not cross the mover's, and preferring
  the side of the enemy the mover is not using. It is issued as the existing `Consolidate`
  directive, so the squad's own candidate comparison walks it there by its own covered route.
- At most half the squads (`SquadsPerTeam/2`, two of four) hold such a moving job at once: the
  platoon's mover counts as the first, so one more squad may be committed. The base-of-fire squad
  is never sent away, so a gun stays on the enemy.
- A squad crossing the no-job limit changes the commander's situation hash, so he re-plans at once
  instead of waiting out his 55 s cycle.

### Constants
All of them are `BoundTuning`/`BoundConstants` in `BattleSim.h`, one struct with comments, for the
loop's parameter search: `boundLength` 35, `slotRadius` 6, `slotSpacing` 2.5, `slotRange` 70,
`slotArrival` 3, `reissueSeconds` 4, `boundGrace` 10, `stragglerSeconds` 20, `stragglerDistance`
40, `stragglerSuppression` 0.35, `rejoinRadius` 10, `noJobSeconds` 30, `jobRangeMin` 25,
`jobRangeMax` 90, `jobTravel` 150, `jobSpacing` 14.

### Deviations from the plan, and why
1. **Merged bounds (`boundLength` 35 m).** The plan's chain of "today's leg length" is the tactical
   route planner's twelve-metre segmentation, and keeping it left a relocation every twelve metres:
   part A at that granularity moved `relocations_per_soldier_minute` by 2 %. The architect's brief
   allows merging stages in legacy code after the planner returns, so a bound merges consecutive
   segments up to `boundLength` (`MergeBoundStage`, with the exposure, the crossing path and the
   release gates computed over the whole merged bound). This is the single biggest contributor to
   the relocation fall: -21 % with 35 m bounds, and the same build with 25 m bounds gives -12 %.
   It is not a longer leg in the plan's sense; the chain and its queue are unchanged.
2. **Slots are fixed per bound, not for the whole chain at commit.** The plan fixes every bound's
   slots when the manoeuvre is committed. Slots for a bound that starts two minutes later would be
   chosen against a picture that no longer holds, which is what the frozen-rally experiments show;
   the chain (the route and its stages) is still fixed at commit and no fresh assessment happens
   between bounds.
3. **The bound waits for the last men (`boundGrace`), which the plan does not have.** The plan keeps
   the arrival majority and re-slots stragglers who hold Rally or Hold. Measured, that rule almost
   never fires: with part A the men who are left behind hold a valid Flank order on a slot they are
   still walking to, not a Rally or a Hold. The majority rule is what splits the squad, so "nobody
   left behind" needed the wait. The 20 s rule of the plan is implemented as well and kept.
   10 s, not the user's 20 s, is used for this new wait: at 20 s the check set lost four points of
   attackers and gained back a fifth of the relocations. The user's 20 s stands where he set it.
4. **The two-fire-team internal bounding is untouched.** The plan's "each man moves once per leg"
   is implemented for the committed manoeuvre (the path that carries 46 to 52 % of relocations);
   where the squad bounds internally in two fire teams, `UpdateCoordination` already gives each
   moving man one covered slot per bound, and that machinery is pinned by selectors.
5. **Part C uses the existing `Consolidate` directive** rather than a new platoon task: a new task
   would change the shared `PlatoonTask` enum that drills and cognition read. The squad's own
   candidate search (family 4) already walks a squad toward its directive position, so giving it a
   firing position instead of a place beside the mover is the whole change.

### What it measured (fourteen battles, mean, parent -> A -> A+B -> A+B+C)
score 0.756 -> 0.773 -> 0.801 -> 0.819; relocations per soldier-minute 1.671 -> 1.312 -> 1.313 ->
1.312 (-21 %); orders per soldier-minute 10.84 -> 10.07 -> 9.73 -> 9.75; straggler share 0.066 ->
0.083 -> 0.072 -> 0.074; quiet squads 0.64 -> 0.43 -> 0.36 -> 0.43; least squad shot share 0.113 ->
0.123 -> 0.124 -> 0.121; men at the fight 0.941 -> 0.950 -> 0.960 -> 0.959; defenders out of action
0.935 -> 0.946 -> 0.976 -> 0.994; attackers lost 0.357 -> 0.346 -> 0.350 -> 0.350; wounds while
moving 0.391 -> 0.419 -> 0.471 -> 0.461; seen and shotless 0.0092 -> 0.0083 -> 0.0095 -> 0.0091;
seen at all 0.113 -> 0.113 -> 0.116 -> 0.116; flank fire share 0.194 -> 0.229 -> 0.445 -> 0.457.
(The A column is `A.patch`, which carries 25 m bounds; 35 m came with part B, so its relocation
figure is not the part-A mechanism alone.)
Eight paired symmetric town battles: friendly hits per 100 soldier-minutes +0.23 [-2.26, +2.72],
men within 2 m -0.011 [-0.027, +0.005], orders per minute -11.8 (azure) and -19.0 (ember).
Not reached: the plan's -30 % on relocations (-21 %), the 3 % straggler share (7.4 %, against the
parent's 6.6 %) and "wounds while moving down" (up 7 points: the men who used to stand still now
come forward). The relocation floor is what is left after the manoeuvre itself: of the remaining
moves of six metres or more, the bound accounts for about a third, the soldier's own cover decision
under an unchanged Hold and the wounded man's rear position for most of the rest.

## Loop result and architect's note, 20 September 2026

Evaluated as loop nodes on the survivor `22b8504a0d673627` (the implementation lives in the loop tree, not on the
branch: it becomes repository source only if it is promoted). Score v6, fifth epoch, paired against the legacy root on
60 development and 45 validation attacks:

| Node | Dev vs root | Val vs root | Defenders out | Attackers lost | Flank fire | Guards |
|---|---|---|---|---|---|---|
| survivor `22b8…` | +0.150 [+0.087, +0.217] | +0.159 [+0.084, +0.245] | 88.5 % | 37.4 % | 0.15 | pass, value 0.692 |
| A+B `d8395eef274a1503` | +0.238 [+0.162, +0.322] | +0.234 [+0.149, +0.329] | 96.8 % | 36.5 % | 0.28 | fails the 4-point seen-at-all backstop |
| **A+B+C `0a562ead03f0fe75`** | **+0.242 [+0.165, +0.326]** | **+0.246 [+0.166, +0.333]** | 97.2 % | 36.5 % | 0.27 | **every guard passes, value 0.774: the best legacy node** |

Friendly fire is below the root's (-1.8), orders per minute on the symmetric battles down 20. Against the plan's own
acceptance: relocations per soldier-minute about -20 % (target -30 %), wounds taken while displacing 45 % (up from 42 %:
more men actually close), stragglers 7.3 % (target 3 %; the men left behind now hold a valid order to a slot they are
still walking to, so the 20 s rule rarely fires), quiet squads 0.45 a battle. Replays on maps 24, 26, 28 and 39 sent to
the user. What remains for the loop's small proposals is listed at the end of the implementation notes.
