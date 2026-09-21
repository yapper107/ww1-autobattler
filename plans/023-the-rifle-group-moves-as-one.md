# Plan 023: the rifle group moves as one

Draft by the architect (Fable), 21 September 2026, at the user's instruction ("Do it, make the plan") after
generation 19. Status: **all six rulings given by the user on 21 September 2026 (section 6). Stage A is being built by an Opus agent;
single-idea legacy generations are paused.**

## 1. Why

Since the path fix (source `a2c3182b1b6177d8`) the legacy line puts 97 % of the defenders out of action and scores
0.80 to 0.84 on the development attacks. What the user still sees in every replay is one family of faults:

- "the Corporal moves up forward however his men doesn't follow him" (maps 39, 26);
- "the ones who are just in cover and haven't seen enemies they are just standing there";
- "the light blue soldiers who have good positions are called back instead of pushing their advantage" (map 22);
- "some stragglers who are doing nothing take a little too long to get called up to their squad" (map 34);
- "squads keep moving around very rapidly when there are still enemies";
- "one of the cpls got wounded and took his entire squad with him to the backlines".

Two generations of single-idea proposals (18 and 19, ten proposals) went at these one at a time. Four independent traces
ended in the same sixty lines: the rifle group's relay in `UpdateCommands` (`CommandSim.cpp`), the code through which
the group's leader places his riflemen every 2 s. Its defects, each proven by a trace:

1. **"Lagging" has no direction.** A rifleman is `lagging` when his raw distance to the leader exceeds 14 m (7 m while
   regrouping). A man 20 m AHEAD in a covered firing position is recalled exactly like a man 20 m behind (4 of 17
   regroup orders in one traced squad); a man closing on a flank goal crosses 14 m, is recalled, comes back under it
   and is sent out again (about half of all movement orders are replaced before arrival; 174 regroup orders in one
   240 s battle).
2. **The regroup target moves.** A recalled man is sent to the leader's CURRENT position. The leader keeps walking;
   the man chases a point he never reaches (the 31 to 47 s stall of the fast flank on map 28).
3. **The relay goes dark.** It used to be wired to the corporal's roster slot; when he died it never ran again. The
   succession node `f7d7aa48ecc1e453` repaired who the reference is, not the rest: when the group's leader is the
   squad leader himself the relay is still skipped and `PlanSquad`'s fallback places men with no call-up rule.
4. **The leader is not part of his group.** His own destination comes straight from the sergeant's order; his men's
   places are derived later, two message hops and a 2 s cadence behind him, on every bound, so his lead compounds (44
   to 60 m by 172 s on map 39). Pull the riflemen's anchor forward and he pushes on alone into a machine gun
   (generation 19, `e9d98b7abaf157b0`: attackers lost 32 % to 36 %).
5. **Orders have no identity.** A legacy order carries no id, so the relay cannot ask "is this the order he is already
   carrying out"; it re-derives and re-sends. Plan 021 solved this for bound slots only (`rt.lastSent`).
6. **Two members are outside it altogether.** The support gunner is placed by `PlanSquad` from HIS own position (so he
   was left behind for whole battles; `03fcf0867579b9f7` and `e02115d56cda2594` patched it), and the platoon staff
   riding with squad 0 are re-ordered every 4 s to a fixed offset of the squad's centre with no cover search (the "man in
   the back" on map 26; a one-branch fix lost 0.030 because the under-fire cover rule freezes them in transit).

Every one-branch repair traded one failure for another (men left behind; a corporal out alone; riflemen alone at the
front). The relay needs one design.

## 2. The design in one paragraph

Every member of the rifle group, the leader included, always holds a **station**: a fixed, covered, spaced place that
belongs to the group's current objective, not to where the leader happens to stand. Stations are handed out once per
objective by one allocator and kept until the objective changes or the station stops being a place to fight from. "Behind"
and "ahead" are measured along the group's axis toward its objective or the enemy it knows, not as distance to a man.
A man behind his station is called up to it, once. A man who is ahead in a place that bears on the enemy keeps it, and
the group's next objective is laid out from the forward men, so the group comes up to the advantage, leader and all. An
order is re-sent only when its content changes. The relay runs as long as anyone in the group can lead.

## 3. The design in parts

**3.1 Stations (one allocator).** `PlanBoundSlots` (plan 021, a bound's destination), `HaltSlot` (generation 16, halts)
and the Hold branch's `UsefulFiringPosition` are three allocators with three lifetimes. They become one,
`GroupStations(objective, sector, known enemy)`: covered positions from the catalogue within `slotRadius` of the
objective, `slotSpacing` apart, protected from the known enemy (from the sector when none is known), bearing on him when
the group is in contact, one per able rifleman and one for the leader (the lead station). Assigned once per objective
and stored in the squad's command record with the objective's serial. A station is given up only when: the objective
changes; another man occupies it; it becomes exposed to a known enemy; in contact it stops bearing
(`BoundSlotBears`); or the shared cover rule has taken the man elsewhere under fire (then his new place becomes his
station if it qualifies). No re-ranking per cycle: the lineage measured that re-seating is where the wounds come from.

**3.2 The group's axis; behind and ahead.** The axis runs from the group's centre to its objective (to the tracked
enemy when in contact). A man's progress is his projection on that axis. He is **behind** when he is more than
`behindMargin` short of the rear-most station; **ahead** when beyond the lead station by `aheadMargin`. Raw distance
to the leader is deleted from the relay.

**3.3 What each man is told.**
- On his station or moving toward it: nothing new. His order stands until he arrives (3.5).
- Behind and idle (no shot, no fire solution, not under effective fire) for `callUpSeconds`: called up to HIS STATION,
  a fixed point, once; again only if the station changed. This replaces `lagging`, the Rally-to-the-leader and the
  40 m straggler rule, whatever task label he idles under.
- Ahead in a protected place that bears on a known enemy, or firing: he keeps it; it becomes his station.
- Ahead with no line: the nearest station-quality place that bears, from the same allocator, searched around HIM.
- Known wounded: today's rear-guard rules, unchanged.

**3.4 The group comes up to the advantage (user ruling 1).** When forward men hold bearing stations, the next objective
(the next bound's destination, the halt anchor) is laid out from THEM, the leader's own lead station included: the
leader's route and his men's stations come from one plan, so he cannot outrun them and they cannot outrun him. The
user: "The group should go to them, unless it is unsafe to do so and then they should work with their forward element
to establish a foothold to get them across." So when the way up to the forward men is unsafe (the route planner's own
exposure estimate for that leg is 0.2 or more, or an enemy the leader knows overlooks it), the forward men ARE the
foothold: they stay on their stations as the covering element and are told to fire on the enemy that overlooks the
crossing (the existing covering-fire test for an exposed crossing, `CoveringPath`, is satisfied by THEIR rounds); the
rest cross by bounds under that fire, a few at a time, to stations beside them; if no forward man can bear on the
overlooking enemy, the group looks for a covered way round before it crosses, and the forward men hold meanwhile: they are
never recalled across the unsafe ground.

**3.5 One order at a time.** Each group order gets a serial in the legacy runtime (objective serial plus station). The
relay sends a man an order only when (task, station, serial) differs from what he holds, when he has made no progress
on a movement order for a travel-time window and is behind, or when he comes under effective fire. The per-cycle
re-derivation and its formation offsets around `sergeant.assignment.position` are removed.

**3.6 The leader is a member (user ruling 3: the middle option).** The sergeant's directive to the group's leader
carries the objective; the stations are computed when the LEADER understands that order and he issues them at once. He
does not stand and wait, and he does not run ahead: he steps off immediately at a SLOW pace (`leadSlowPace`, a fraction
of the advance pace) and takes the full pace only once his men are with him: at least half of his able riflemen have
acknowledged their stations AND are within `leadCloseDistance` of him along the group's axis, or `leadSlowSeconds` have
passed. If his lead over the group's centre along the axis grows beyond `leadMaxLead` during a move, he drops back to
the slow pace until it closes. This replaces the 4 s hold of `8946560782173e62`. Transport and reaction delays stay as
they are: only the double derivation goes. At a bound's end plan 021's `boundGrace` and generation 18's uncontested
fast chain apply unchanged. Pace is a soldier-level quantity: the implementation must find a legacy-side way to ask for
it (an order attribute the shared movement code already honours, such as the stance or movement mode of the order); if
none exists without touching shared soldier code, the fallback is short bounds for the leader (his own lead station is
laid out no farther than `leadMaxLead` ahead of the group) and that is reported to the architect before it is built.

**3.7 A covering pair.** The user: "Some could have stayed but not all of them." When the group leaves a position in
contact, at most `coverPair` men whose stations bear on a known enemy stay and fire; they are given stations on the NEXT
objective and follow when the group has arrived or after `coverPairSeconds` (user ruling 2: within 10 s). Nobody stays without a line of fire.

**3.8 Never dark.** The relay runs from `RifleGroupLeader` (succession node) whenever any rifleman can lead; when the
squad leader is the last able man, `PlanSquad` calls the same allocator. One code path, no fallback grid.

**3.9 The support and the staff.** The support's station is a firing position near the group (generation 19's
`SupportFirePosition`: within 60 m of the group's centre, no nearer the enemy than the rifles, protected, bearing, angled
off the rifle group's line), chosen once and kept while it bears. Platoon staff with squad 0 get stations one objective
BEHIND the rifle group, moved only when the group's objective changes, along the group's own covered route.

**What is deleted:** the `lagging` test, Rally to the leader's live position, the 2.4/2.5 m formation offsets, the
separate straggler rule and its gunner copy, the staff's 4 s offset loop, the 4 s step-off hold.

## 4. Constants (one table, `GroupTuning` in the legacy runtime; first values, not tuned)

`behindMargin` 12 m; `aheadMargin` 5 m; `callUpSeconds` 6 s; `leadSlowPace` 0.5 of the advance pace; `leadCloseDistance`
12 m; `leadSlowSeconds` 10 s; `leadMaxLead` 15 m; `coverPair` 2; `coverPairSeconds`
10 s (user); progress window: travel time at the advance pace plus 4 s; stations reuse plan 021's `slotRadius` 6 m and
`slotSpacing` 2.5 m (4.5 m at a halt).

## 5. How it is built and judged

- **Where:** as a loop node on the policy's best parent at the time (today `f7d7aa48ecc1e453`, which already has
  `RifleGroupLeader`), legacy controller code only (`CommandSim`, `CoordinationSim`, `ManeuverSim`, `PlanSim`, the
  legacy runtime in `BattleSim.h`). Cognition, drills and the static defenders must stay bit-identical (the loop's
  parity guard). No shared soldier code.
- **Stages, each scored as its own node** (as plan 021's A, AB, ABC): A = stations + order identity (3.1, 3.5, 3.8);
  B = the axis, behind and ahead, the group comes up (3.2 to 3.4); C = the leader as a member and the covering pair
  (3.6, 3.7); D = the support and the staff (3.9).
- **New measure first (architect, before stage A):** `replaced_before_arrival_share` and regroup orders per battle from
  the lean trace, added to `tools/conduct_metrics.py`, so the churn is scored on all 60 development battles instead of
  two hand-traced ones.
- **Acceptance against the parent on the full suite:** every guard; `behind_corporal_share` at or below the root's
  12.5 % (parent 12 to 34 % by node); `straggler_share` at or below the root's 2.5 % (parent 6 %); `at_fight_share` at
  or above the root's 94.6 %; orders per soldier-minute down by a quarter and replaced-before-arrival under 25 %
  (parent about 50 %); flanking fire and attackers lost no worse than the parent; friendly fire not above the root. Then
  the user's videos on maps 39, 26, 22, 34 and 28: the verdict that counts.
- **Tests:** mechanism pins in `tests/` for: a forward bearing man is not recalled; a behind idle man is called to a
  fixed station and the order is not re-sent while he closes; the leader does not step off alone; the relay still runs
  after the corporal and his first successor fall; a station survives a cycle. `ReassessmentTests` already accepts
  succession (restated 21 September).

## 6. The user's rulings (21 September 2026)

1. **Forward men.** "The group should go to them, unless it is unsafe to do so and then they should work with their forward
   element to establish a foothold to get them across." Built into 3.4.
2. **Covering pair.** At most two men with a line of fire stay and cover; they follow "within 10s".
3. **The leader's pace.** "Lets do the middle option": he steps off at once at a slow pace and takes the full pace only
   when his men are with him; he slows again if he gets too far ahead. Built into 3.6.
4. **Platoon staff.** "Yes, the platoon commander stays safe one position behind."
5. **Who builds it.** "opus agent": Opus implements the stages, Fable reviews and scores each as a loop node.
6. **Generations meanwhile.** "Yes": single-idea generations on the legacy line are paused until stage B is scored.

## 7. Risks, stated

- It replaces code that every legacy battle runs: a worse first stage is likely. Staging and scoring each stage bounds it.
- Stations that are kept too long can pin a group on ground that went bad: the give-up conditions in 3.1 are the control,
  and `idle_exposed_share` and wounds while moving are the measures that would show it.
- The shared rule "a man in cover under fire stays whatever order he holds" still overrides any station; the plan works
  with it (his shelter becomes his station when it qualifies) and does not touch it.
- Drills shares none of this. Its own missing men (support elements that never displace) remain a separate subject.
- The queued shared-code change (keep soldiers away from known enemies, end of plan 018) is independent and still
  waits for the end of the AI iterations.
