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
