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

## Implementation notes (Opus agent, 20 September 2026)

Implemented on the plan-020 source `fa0ce26c574eec38` in the prepared worktree; the worktree source
is `4703559cea2e248f`. Nothing is committed, promoted or re-baselined; the 40 references are
untouched.

**What was built.** One table, `SprintTable` in `Sim/BattleSim.h` with `Sprint()` as its single
accessor, and one switch, `Config::stamina` (`--no-stamina`). The formulas, the table, the trigger
rule and the latch are in [docs/STATS_AND_WEAPONS.md](../docs/STATS_AND_WEAPONS.md), "Stamina and
the sprint to cover".

*Stats (`Sim/Stats.h/.cpp`).* `Stat::Toughness` is renamed `Stat::Endurance` and an eighth stat,
`Stat::Speed`, is appended. `GenerateStats` still walks the original seven-step sampler sequence
(`SampledStatCount`) and draws Speed from `SoldierHash(roster, slot, SpeedStatSalt=3)`, beside the
sway phases (salts 0, 1) and the recoil direction (salt 2). `SoldierHash`'s salt offset is frozen at
`SoldierHashBase = SampledStatCount+1 = 8`, the value it had with seven stats, so adding a stat does
not move a single sway phase.

*Soldier state and the clock (`Sim/BattleSim.cpp`).* `Soldier::stamina`, `Soldier::winded` and
`Soldier::sprinting` are plain public fields. `StaminaCapacity`, `SprintPace`, `StaminaRecovery`,
`CanSprint`, `StaminaPenalty`, `SprintTrigger` and `StepStamina` are the whole feature;
`InitialFrameInto` and `NeutraliseStats` fill a man up. The movement stage decides
`s.sprinting = config.stamina && CanSprint(s) && SprintTrigger(s, revealedAhead, distance to goal)`,
multiplies the pace by `SprintPace(s)` and then calls `StepStamina`, the only writer of the latch.
`RevealedAhead` is the one new query: the next 6 m of his path sampled every metre against the
enemies he knows within 95 m, on its own 0.5 s cadence, stopping at the first line.
`AimSeconds` and `SwayAmplitude` take `StaminaPenalty`; `WalkingFire` refuses a sprinting man.
`RevealedSeconds` (plan 020) gained a sprint pace and a stamina budget, and `CautiousPath` and the
early replan pass the man's own.

**Deviations from the plan, and why.**

1. *A minimum run of 4 m.* The plan says nothing about how short a move may be. Without a floor a
   seated static defender sprinted his two-metre shelter-to-peek hop (`Action::Cover`,
   `Reason::Contact`), burned his stamina ducking and fought the whole battle winded, which is the
   opposite of "fixed defenders never move, so nothing changes for them". A move with less than 4 m
   to go is walked, which also leaves peeks, ducks and slot adjustments alone, exactly as plan 020
   leaves them out of the covered search.
2. *"The final bound of a typed assault" is `ExecutionContract::rushSeconds > 0`.* The task forbids
   inventing order fields, and `attackMove` marks a plan-019 bound, not an assault. `rushSeconds` is
   the drills controller's own bounded-rush permission, set for assault bounds only, and it is
   already on the order the soldier holds. Nothing in the drills controller was changed.
3. *The winded penalty is a function of stamina, not of the latch.* The user asked for the penalty
   to fade "as the stamina returns", so `StaminaPenalty` reads the fraction remaining and is exactly
   1 at full. A man who spent two seconds of stamina therefore pays a little, latch or no latch.
4. *`StepStamina` is a named function rather than inline in the movement stage*, so the drain, the
   two recovery rates and the latch have one writer that the tests can step directly.
5. *The revealed-stretch trigger is measured on its own cadence*, not at plan 020's two-second path
   check: at 5 m/s a two-second check would start the sprint up to ten metres into the open. Half a
   second with a six-metre look-ahead is the compromise, and the 95 m filter (the existing
   `AssumedEnemyReach`) bounds the number of sight lines. Measured cost: 7 % of battle wall clock.
6. *Digest folding is gated on the switch, not on the value.* `stamina` is a float that is equal to
   the capacity, not zero, when nothing has happened, so "fold it when it differs from the default"
   would have to compare against a per-soldier capacity. `if(config.stamina)` is the same guarantee
   and is one branch; the speed stat is folded the same way. Proven: `--no-stamina` reproduces the
   untouched parent binary on 10 of 10 commands.
7. *Float association.* The sprint factor, the walking-fire pace factor and both winded factors are
   multiplications by exactly 1 when the feature is off, appended at the end of the existing
   expressions, so no stationary or walking value changes a bit.

**Tests touched.**

- New: `tests/stamina_tests.h`, selector `--stamina`, also run by the default suite.
- `tests/stats_tests.h`: `Stat::Toughness` renamed in the max-health assertion and its comment
  (rename only). One restatement, disclosed: `OverPenetrationTests` asserted that the single
  default 120 s battle contains a round that passed through two bodies and one that stopped in a
  body. It contained exactly one of each before this change and none after, because the battle
  diverges (34 hits instead of 44 in 120 s). The per-shot bookkeeping is unchanged and is still
  checked on every shot; the *existence* is now asserted over three seeds (107, 108, 109), where it
  holds four times over. Nothing was tuned toward the feature.
- `tests/paths_tests.h` line 61: the exported measure is asked for the same thing the recorded path
  choice measured, `PathRevealedSeconds(..., on.stamina)`. The equality itself is unchanged.

**Selector status, reported not repaired.** On the final source, the full Linux suite (including the
new `--stamina` group), `--stats`, `--leaders`, `--routes`, `--recovery`, `--foundations`,
`--generated`, `--static-defence`, `--moving-fire`, `--paths`, `--cognition`, `--normal-cognition`
and 125 Python tests pass. `--drills` (D02) and `--platoon` (Q07) fail at the same assertion and line
as the parent binary built from `git archive HEAD`. Two groups moved:
`--decision-loop` now PASSES (it fails on the parent, at the physical deployment scenario), and
`--reliability` now fails earlier, in the physical scenario at variant 26 (`crouchedFire`: soldier 2
fires no round from a crouch within the 25 s fixture), where the parent reaches the reconnaissance
scenario before failing. Both were confirmed to be this feature by rebuilding with
`Config::stamina=false` as the default: the suite then fails exactly where the parent fails. These
are the timing-sensitive fixtures plans 017, 019 and 020 recorded; nothing was repaired or relaxed.

**Unreal side.** `BattleGameMode.cpp` only: the inspector's stat lines now read `END` instead of
`TGH`, carry `SPD`, and a new line prints `STAMINA <left> / <capacity> s` with `SPRINTING` or
`WINDED`; the two labels below it moved down 15 px. The animation layer should read
`Soldier::sprinting` (gait), `Soldier::winded` (breathing, weapon handling) and `Soldier::stamina`
(a bar), all plain public fields.

**Measured, not tuned.** Ten commands (legacy and drills town attacks on maps 22, 27, 33 and 36 at
battle seed 107 for 600 s, two symmetric legacy battles on 33 and 26 at 360 s).
`--no-stamina` reproduces the untouched parent binary's digest on **10 of 10**. Means over the ten,
off -> on: attack score 0.395 -> 0.485, attackers lost 0.350 -> 0.363, shots 1723 -> 1849,
`wounded_moving_share` 0.335 -> 0.305, `relocation_seen_seconds_per_soldier_minute` 1.31 -> 1.20,
`relocations_per_soldier_minute` 1.36 -> 1.27, first attacker shot 129.6 s -> 120.9 s, friendly hits
per 100 soldier-minutes 4.89 -> 5.07, battle wall clock 21.2 s -> 22.7 s (+7 %). Of attacker moving
time 6.1 % is spent sprinting (legacy 6 to 10 %, drills 1 to 4 %), and 2.7 % of attacker time is
spent winded. Single battles diverge chaotically (attackers lost swings from -0.25 to +0.34 between
battles); the loop's paired suites on re-rooted lineages are the measurement. In the open-crossing
fixture of the test group, where there is nothing but ground to cross, the same rule produces 18 % of
moving time sprinting and men winded for most of it: the trigger is as aggressive as the terrain
makes it, which is the first thing to question if the loop dislikes the result.

**Determinism.** One 600 s battle run twice gives the same digest; a traced 200 s battle and the
same battle untraced give the same digest.

## Architect's review, 20 September 2026

The Opus implementation (source `4703559cea2e248f`) was reviewed and kept as delivered, including its one deviation (no
sprint for a move under 4 m: a seated defender otherwise sprinted his shelter-to-peek hop and fought winded). Verified by
the architect on the main checkout: full Linux suite with the new `--stamina` group, 125 Python tests, the 40 authored
references archived to `.local/baselines-pre022/stamina/` and regenerated (40/40), 3/3 drills trace parity with a
determinism repeat, the Unreal module compiles on UE 5.4 (HUD: END and SPD, a stamina line). On ten on/off battles
sprinting is 6 % of attacker moving time and men are winded 3 % of the time; wounds taken while displacing 33.5 to 30.5 %,
first attacker shot 130 to 121 s, wall clock +7 %. For the animation layer: `Soldier::sprinting`, `winded`, `stamina`
(with `movingFire` and `coveredPath` from plans 019 and 020). An on/off video was sent to the user.
