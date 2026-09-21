# Plan 022: stamina and the sprint to cover

Status: **approved by the user on 20 September 2026 with the rulings at the end; an Opus agent implements, in parallel with plan 021 (user instruction).** Requested by the user: "when a soldier needs to go to cover
under fire or if there are enemies nearby, he can sprint to the cover and use up some stamina... pull these numbers from
the stat system for how fast they sprint and how much stamina they have. If they run out of stamina they stop sprinting
until they regain all their stamina." Nothing is implemented. Author: Fable (architect). Questions at the end. Runs in parallel with plan 021 at the user's instruction (plan 021 is legacy command code, this is shared soldier code:
the two do not touch the same files); the loop still measures them separately.

## Why it fits
A soldier has ONE pace today (3.15 m/s for a rifleman, 2.55 m/s for the gunner, slower when wounded, suppressed or
crouched), whether he is strolling up a safe street or crossing a gap a defender is watching. A third to a half of all
attacker wounds are taken while displacing, and plan 020 already measures how many seconds a path reveals a man to an
enemy he knows. A sprint shortens exactly those seconds. It is also the first use of the stat system for movement.

## Design
1. **State.** `Soldier::stamina` (0 to his capacity) and `Soldier::winded` (true from the moment he empties it until it
   is FULL again: the user's rule). Both in the digest, the evaluation export and the inspector; the HUD can show a bar.
2. **From the stats (user ruling).** The stat `toughness` is RENAMED `endurance` (it keeps everything toughness does
   today) and additionally gives the stamina capacity and the recovery rate; a NEW eighth stat, `speed`, gives the sprint
   speed. Both through the existing `StatScale` on a base of 100. The new stat is sampled from its own hashed stream
   (as the sway phases are) so that the seven existing stats of every soldier stay exactly as they are, and it is folded
   into the digest only when the feature is on, so the off switch stays bit-exact. At the reference soldier: sprint 1.6
   times his pace (about 5 m/s), capacity 8 s of sprinting (about 40 m), full recovery in 30 s standing still or in
   cover, half that rate while walking, none while sprinting (user: "sounds good"). The gunner sprints at 1.35 times his
   slower pace and drains a third faster (the weight). A wounded man (health under 55) cannot sprint. One table of
   constants, as for plans 019 and 020.
3. **When he sprints (user ruling; the soldier's own decision, shared code, every controller).** While moving, not
   winded, and any of:
   - he is under fire and moving to cover or shelter;
   - he has just come under fire, or has just seen an enemy, and needs to get into cover: the reaction move to cover
     is a sprint, whatever order he holds;
   - the stretch of his path he is on is in the sight of an enemy he knows (the plan 020 revealed-path measure, per
     segment): he walks the covered parts and sprints the revealed ones;
   - an emergency shelter move, a squad retreat, or the last bound of an assault.
   Otherwise he walks and recovers. A controller may later forbid or force it per order; that is loop work, not this plan.
4. **What it costs him.** No fire while sprinting (plan 019 already says so). While winded his sway and aim time are
   worse, fading as the stamina returns (user: "yes, add those"; starting values: sway 1.5 times, aim time 1.3 times at empty). He cannot sprint
   again until FULL, so a man who burns it crossing the first street walks the second one.
5. **Plan 020 coupling.** The revealed-seconds measure of a path uses the pace he will actually have on each stretch:
   a gap he can sprint counts for fewer seconds, a gap he must walk because he is winded counts for more. The 3 s
   threshold stays as ruled.
6. **Determinism.** No random draws. Every digest moves (men arrive sooner); an off switch (`--no-stamina`) reproduces
   the previous battles bit for bit.

## Verification
`--stats` tests for the table, the stat scaling, the winded latch (no sprint until full), the gunner, the wounded man,
no fire while sprinting, the recovery rates; a crossing fixture (one man, one watched gap: seconds in sight with and
without); the off-switch digest proof; full suite, Python tests, Unreal compile; re-baseline (40 references, 40/40, 3/3
trace parity) and a re-root of both loop lineages with the best nodes carried forward; an on/off video for the user
(sprinting men drawn with a marker, a stamina readout for the focus squad).
Reported, not tuned: wounds taken while displacing, seconds seen while relocating, attackers lost, time to first contact,
attack score of both roots, friendly fire.

## Risks
- Everything gets faster: attacks arrive sooner and the ten-minute battles resolve earlier; timing-sensitive mechanism
  selectors will move again (reported, not repaired, as before).
- Men who sprint at different speeds string a squad out; the arrival rules of bounds (plan 021) absorb it or they do not:
  measured.
- Winded men who cannot shoot straight arrive at the fight: that is the intended cost, and it may lower attack score.

## The user's rulings, 20 September 2026
1. Triggers: "under fire to cover, and also across any stretch a known enemy can see, and also if they start getting fired
   upon or see an enemy and need to get into cover."
2. The winded aim penalty: yes.
3. The numbers (1.6 times pace, 8 s, 30 s): "sounds good".
4. "Change toughness name to endurance and add the capacity and recovery, also add a new stat for speed."
5. An Opus agent implements; plan 021 goes on at the same time.
The user is pointing the art branch at this work for animations: the simulator exposes per soldier, for the Unreal layer,
`movingFire` (plan 019), `coveredPath` (plan 020), and with this plan `sprinting`, `winded` and `stamina`.
