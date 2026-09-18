# Plan 014 Phase 4 redesign — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Written after the user's direction that the platoon layer is too controlling, on source `01462c286da88358` (Phase 4f, tree verified unchanged after the stopped round). Records the user's decision (plan 014 section 7a) and translates it into contracts. Advisory, not acceptance.

## Why the direction is right on the evidence

The squad-drill controller alone won 75 of 90 generated defended positions with 10 losses. Every platoon build since then orchestrated fixing, flanking, corridors, reserves and lift-and-shift from above, and every measured build fought less: the last one won 71 with 16 losses, and on the deathmatch maps three of four squads spent the battle holding on the platoon's orders. The mechanism scenarios kept passing because they test the orchestration, not the fight. Orkin's F.E.A.R. lesson applies directly: keep the squad behaviours simple and let complex manoeuvre emerge from members reacting to each other.

## Platoon contract (replaces section 7)

- **Orders:** `FightHere{group or area}`, `RetreatThere{rally}`, `HelpSquad{squad, position}`. Each is a long-lived intent with the existing id, expiry and renewal; it changes only when the commander's knowledge changes materially (the group dies or moves, a squad reports need, the believed ratio crosses one half) or a squad reports Done or Blocked.
- **Assignment:** every squad in the platoon gets `FightHere` on the nearest known group or the advance objective by default; `HelpSquad` goes to the nearest squad with capacity when a squad reports need; `RetreatThere` to all when the believed ratio falls below one half without support, as now. No fixing or flanking roles, no corridors, no per-squad areas beyond the advance lanes, no lift-and-shift orchestration, no reserve unless the template says so.
- **Kept from the task tree:** persistence of orders, bounded observation before withdrawal, expiry and renewal, succession to squad autonomy. Removed: Fix, Flank, Secure, Reserve, Merge as platoon tasks, corridor claims and areas, the phase-line lift path.

## Squad contract additions (lateral coordination)

- **Broadcasts** through the existing report transport, with its delay, to squads of the same platoon within 120 m: `Fixing{group, from}` when SupportByFire establishes on a group; `Assaulting{group, side, assault position}` when SquadAttack commits; `NeedSupport{position, group}` when a squad is below `minStrength` on an element or under effective fire without superiority for 15 s; `PhaseLine{group}` on the assault element's phase-line receipt; `Done{group}` on consolidation.
- **Opportunity:** a squad that receives `Fixing` for a group it also knows, has no assault of its own, and finds a covered route to the group's flank commits `SquadAttack` on that group from its own position and broadcasts `Assaulting`; the fixing squad shifts or lifts on the received `PhaseLine`. If two squads broadcast `Assaulting` for one group, the later one yields and takes support by fire from its own position.
- **Help:** a squad receiving `NeedSupport` from a neighbour and holding `FightHere` on the same group, or idle, moves to a support-by-fire position covering the neighbour's group if within 100 m, else continues its own order; the platoon's `HelpSquad` overrides.
- **Template gate:** initiative-driven templates (Teams, Gun-centric) volunteer opportunities and help without a platoon order; the Section template volunteers help but waits for the platoon before assaulting; the Rush template waits for the platoon for both. `requiresPlatoonOrder` already exists on the template.

## Scenarios (replace P01 to P03, P08; keep P04 to P07)

- **Q01 fight here.** Platoon issues `FightHere` on a known group to two squads; assert one squad establishes support by fire and the other commits a covered flank or fire and movement by its own assessment, with no fixing or flanking role in any directive; control: the group beyond a covered route on both sides: both squads attack by fire and movement.
- **Q02 opportunity.** Squad A fixes a group and broadcasts; squad B, idle with a covered route, commits an assault and broadcasts; A lifts on B's phase-line broadcast within one hop plus 1 s; control: B under the Rush template waits and does not assault.
- **Q03 help.** Squad A broadcasts `NeedSupport`; the nearest squad with capacity establishes support by fire on A's group within 60 s; control: no squad within 100 m: the platoon issues `HelpSquad` to the nearest.
- **Q04 two assaults.** Two squads both find routes; the later broadcast yields to support by fire; no two assaults on one group.
- **P04 to P07** as they stand.

## Exit

The Phase 4 exit as stated in the Phase 3d review, with one change: F1 win rate and exchange not regressing against the Phase 3 completion source `a0364bff5cea6ab9`, since that is the squad controller the platoon layer must not degrade. One measured build after all scenarios pass; report and stop if it fails. Astra may iterate locally up to three attempts per scenario.
