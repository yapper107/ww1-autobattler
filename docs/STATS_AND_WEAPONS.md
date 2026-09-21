# Soldier stats and weapon items (plan 017)

Authoritative formulas for the stat system and the weapon item model. The design and the user's
decisions are in [plan 017](../plans/017-stat-system.md). Phases: 1 stats and fire control (landed),
2 energy ballistics (landed), 3 sway and recoil (landed).

## Stats

Eight stats on a base of 100: perception, dexterity, **endurance**, strength, wisdom, initiative,
composure and **speed** (`Sim/Stats.h`). `StatScale(value) = value / 100` is the single hook where a
curve can replace linearity. Strength is stored and traced but has no consumer yet. Endurance is the
stat plan 017 called *toughness*, renamed by the user on 20 September 2026: it keeps max health and
additionally owns stamina capacity and recovery. Speed is the eighth stat, added by plan 022 for the
sprint pace.

The first seven stats of each soldier are rolled independently from a splitmix64 hash of the roster
seed, the soldier slot and the stat index, in the order above. Speed is NOT an eighth step of that
sequence: it is drawn from its own salted stream (`SoldierHash(roster, slot, 3)`, beside the sway
phases and the recoil direction) through the same inverse CDF, so every soldier of every earlier
battle keeps exactly the seven stats, sway phases and recoil direction he had. The battle RNG is never consumed. `Config::rosterSeed` defaults to 0,
meaning "use the battle seed"; the same roster seed across battle seeds keeps the same soldiers.
Under `equalTroops` both teams hash on the slot within the team so mirrored soldiers are identical.

Distribution (`StatDistribution`, one per team in `Config::statProfiles`):

| Share | Range | Shape |
|---|---|---|
| 50 % | 95 to 105 | triangular, peaked at 100 |
| 40 % | 80 to 100 | density falls linearly to zero at 80 |
| 10 % | 100 to 140 | density falls linearly to zero at 140 |

Encounter fixtures (encounters 1 to 103) are stat-neutral: `NeutraliseStats` sets every soldier to
100, max health 100 and the reference reaction time, and un-scales the officer profile. Only full
battles roll the mixture.

## Consumers

| Stat | Effect |
|---|---|
| Initiative | `reactionBase = 0.425 s / StatScale(initiative)` |
| Endurance | `maxHealth = 100 * StatScale(endurance)`; the wounded cutoff stays a literal 55; stamina capacity and recovery below |
| Speed | sprint pace below; nothing else |
| Composure | near miss `+0.23 / StatScale`, hit `+0.30 / StatScale`, decay `0.15 per s * StatScale`; thresholds untouched |
| Perception | `SightRange = gun.engagementRange * StatScale`; cognition `detectionDelay / StatScale`; aim error below |
| Wisdom | officer judgment, adaptability and communication are the config profile times `StatScale`, clamped to 1; risk untouched. Every report a soldier sends arrives after `base / StatScale(sender wisdom)`. Judgment attenuates estimate bias for all controllers. Drills assessment pause `3 s / StatScale + reactionBase` |
| Dexterity | reload, bolt cycle, settle, aimed-burst re-lay, sway amplitude, recoil kick and recoil decay |

Literals that encode what a soldier assumes about the enemy (`AssumedEnemyReach = 95 m`) stay
literals: a soldier cannot read enemy stats.

## Weapons

A soldier carries a `WeaponItem` (a table id plus a list of modifiers) and caches the resolved
`WeaponStats` as `gun`. `EquipWeapon` is the only writer of the `machineGun` organisation flag, and
`Simulate` throws if the flag or the magazine disagrees with the equipped weapon before frame 0.

| Field | Rifle | Machine gun |
|---|---|---|
| action | Bolt | Automatic |
| cycle / cyclic seconds | 1.25 | 0.10 |
| magazine, reload | 8, 2.5 s | 60, 4.0 s |
| baseDeviation | 0.007 rad | 0.020 rad |
| recoil | 0.012 rad | 0.004 rad |
| sightQuality | 1.0 | 0.67 |
| ergonomics | 1.0 | 0.69 |
| cartridge | 11.3 g, 720 m/s at a 0.74 m barrel, drag 0.0007 per m | same |
| barrelLength | 0.74 m | 0.72 m |
| engagementRange | 70 m | 95 m |

Muzzle velocity is `referenceVelocity * (barrelLength / referenceBarrel) ^ 0.2`. Modifiers apply
`value * multiply + add` to one field each; attachments and enchantments are lists of them.

## Fire control

- Settle: `0.45 s / (ergonomics * StatScale(dex)) * (1 + 3 * suppression) * (health < 55 ? 1.3 : 1)`.
- Horizontal cone: `baseDeviation + 0.040 / (sightQuality * StatScale(perception)) + suppression * 0.10`,
  plus the existing area and moving penalties. Vertical cone:
  `0.014 / (sightQuality * StatScale(perception)) + suppression * 0.024`.
- Bolt cadence: `cycleSeconds / StatScale(dex) + suppression * 0.5`; aim resets to 0.2.
- Automatic cadence: `cyclicSeconds`, never stat-modified. Sustained fire keeps 18 rounds then a 1 s
  pause. Aimed fire is three-round bursts followed by a re-lay pause of
  `0.6 s / (ergonomics * StatScale(dex))`.
- Magazine: each shot decrements `magazineRemaining`; at zero the reload lasts
  `reloadSeconds / StatScale(dex)` and the magazine refills when it ends. A reload is only ever
  started by an empty magazine.
- Muzzle velocity feeds the shot and the friendly-fire lead.

## Energy ballistics (phase 2)

Each ballistic substep multiplies the velocity by `exp(-dragK * segment)` before gravity, so speed
decays as `v(d) = v0 * exp(-dragK * d)` and the flight time used for lead is
`t = (exp(k d) - 1) / (k v0)` (`FlightTime`, falling back to `d / v0` when `k <= 0`). Impact energy
`E = 0.5 * m * v^2` is taken at the contact point. Deposit `Edep = E * (1 - exp(-2000 J / E))`
(`DepositedEnergy`); if the remainder is under 300 J the round stops in the body and deposits
everything. `damage = Edep / 35 * severity` (`HitDamage`), severity from one RNG draw
(`HitSeverity`): 80 % torso ×1, 10 % limb ×0.5, 7.5 % ×1.5, 2.5 % ×2.

| Range | Impact energy | Deposited | Health lost (torso) | Exits with |
|---|---|---|---|---|
| 0 m | 2.93 kJ | 1.45 kJ | 41 | 1.48 kJ |
| 100 m | 2.55 kJ | 1.39 kJ | 40 | 1.16 kJ |
| 300 m | 1.92 kJ | 1.24 kJ | 36 | 0.68 kJ |

A round that exits continues into whoever is behind and is never allowed to strike the same body
twice; cover, ground and the map boundary still stop it. Every body it strikes is recorded on the
shot as a `Shot::Victim` (soldier, time, impact energy), `hit` means the victim list is not empty,
`target` is the first victim and `impact` is the terminal stop. With the 300 J exit threshold a
rifle round fired at 100 m passes through the first body and stops in the second: the exit energy
1.16 kJ leaves only 0.21 kJ, below the threshold, so the second body absorbs all of it for 33
health. Three bodies are reached only at contact range, where the round leaves the second with
0.38 kJ and the third keeps it for 11 health. Each victim is hashed into the gameplay digest and
exported in `shots.jsonl` as `victims` plus the first victim's `impact_energy`.

## Sway and recoil (phase 3)

Both are aim offsets in radians carried as a `Vec3` with `x` the yaw, `y` the pitch and `z` unused.

Sway is a pure function of recorded state, so the viewer can draw it and nothing has to be replayed:

```
SwayAmplitude(s) = 0.010 / (gun.ergonomics * StatScale(dexterity))
                 * (stance == Crouched ? 0.7 : 1) * (1 + 2 * suppression)
SwayOffset(s,t)  = A * (sin(2π t / 2.3 + φ), sin(2π t / 3.7 + φ'))
```

The two periods are incommensurate, so the aim point wanders instead of retracing a closed figure.
`φ` and `φ'` are `Soldier::swayPhase` and `Soldier::swayPhase2`, set once in `InitialFrame` to
`SoldierHash(rosterSeed, slot, 0)` and `SoldierHash(rosterSeed, slot, 1)` mapped to [0, 2π).
`SoldierHash` is the splitmix64 family that rolls the stats (`Sim/Stats.h`), with salts offset past
the stat indices so a phase never reuses a stat draw; the battle RNG is not consumed. The phases and
the recoil direction carry no talent, so `NeutraliseStats` leaves them alone and fixtures keep a
natural wander.

Recoil accumulates on `Soldier::recoil`. Each shot adds

```
kick     = gun.recoil / (gun.ergonomics * StatScale(dexterity)) * (crouched ? 0.8 : 1)
recoil  += (0.3 * sign * kick, kick)          // ApplyRecoil
```

with `sign = ±1` from `SoldierHash(rosterSeed, slot, 2)`, stored once as `Soldier::recoilSign`.
Every tick, for every soldier, next to the suppression decay:

```
recoil *= exp(-TickSeconds * 4 * gun.ergonomics * StatScale(dexterity))   // DecayRecoil
```

Rate 4 at the reference weapon and dexterity is a quarter-second time constant. A rifle kick of
12 mrad is under a tenth of itself again after the 1.25 s bolt cycle. The machine gun's ergonomics
0.69 slow its decay to a 0.36 s time constant, so ten rounds at the 0.10 s cyclic rate settle at
2.95 kicks (17 mrad) and the burst walks upward until the 18-round pause; 1.0 s of that pause leaves
0.19 of a kick, a tenth of the burst offset, and a tenth of a single kick is reached at 1.25 s.

The shot adds both before the random cone, keeping the horizontal-speed convention:

```cpp
const Vec3 off = SwayOffset(s,f.time) + s.recoil;
angle = atan2(...) + off.x + (rng.Next()-0.5f)*2*spread;
vz    = (point.z-muzzle.z)/flightTime + 4.905f*flightTime + speed*std::tan(off.y)
      + (rng.Next()-0.5f)*speed*VerticalSpread(s);
```

The RNG draw count and order per shot are unchanged. Exports (`Sim/BattleSim.h`):
`SwayAmplitude`, `SwayOffset`, `RecoilKick`, `ApplyRecoil`, `DecayRecoil`, plus
`SoldierHash` in `Sim/Stats.h`. The digest hashes both phases and the recoil direction once per
soldier in the frame-0 block and `recoil.x`/`recoil.y` per soldier per frame; the trace entry and
`evaluation.jsonl` carry `sway_yaw`, `sway_pitch`, `recoil_yaw` and `recoil_pitch`; the HUD
inspector shows `SWAY ... RECOIL ... mrad` on the selected soldier.

## Fire on the move (plan 019)

Walking fire is a movement factor on the existing fire control, not a second firing system. Every
number lives in one table, `MovingFire` in `Sim/Weapons.h`, one row per weapon, resolved into
`WeaponStats::moving` so a later parameter search can reach it:

| Quantity | Rifle | Machine gun | Applied to |
|---|---|---|---|
| Aim time (`AimSeconds`) | x2.5 | x2.5 | dexterity |
| Aim cap (`AimReady`) | 0.5 | 0.5 | - |
| Shot and vertical spread | x3 | x5 | composure |
| Sway amplitude | x4 | x6 | dexterity |
| Recoil kick | x1.5 | x2 | dexterity |
| Recoil recovery rate | x0.5 | x0.25 | dexterity |
| Time between shots | x1.5 | x1 (cyclic is mechanical) | dexterity |
| Burst on the move | the weapon's own | 4 to 6 rounds, normal pause | - |
| Walking-fire range | 70 m | 60 m | - |
| Pace while firing | x0.8 | x0.6 | - |

A factor `f` from the table becomes `MovePenalty(f, StatScale(stat)) = 1 + (f-1)/scale`: the
reference soldier (stat 100) suffers exactly the table value, a better soldier less, a worse one
more. The recovery row is a rate multiplier, so its time constant is what is stretched. Only what
the shooter contributes is widened; `gun.baseDeviation` is mechanical and is not multiplied. The
aim cap is also the readiness threshold: a walking shooter fires once `aim` reaches 0.5 and it
never settles further, so a halted man goes on settling to a full aim as before. No new random
draw is made and the per-shot draw order is unchanged.

**Who may do it.** `WalkingFire(soldier, time)` in `Sim/BattleSim.cpp`, from the soldier's own order
and senses only:

- his task is an attack movement: `Task::Advance`, `Task::BoundMove`, `Task::Flank` or
  `Task::ClearLane` (`AttackMovementTask`), and
- he is moving under it: `Action::Advance`, or `Action::Cover` with `Reason::ClearLane`; never
  `Reason::Peek`, `Reason::Regroup` or `Reason::EmergencyCover` (`AttackMovement`), which excludes
  movement to a shelter or a peek point, emergency shelter, `Task::Rally`, `Task::PullBack`,
  `Action::Retreat` and the rear guard, and
- his magazine is not empty, and
- the target he selects is a man he sees or saw within the last two seconds (the same memory a
  halted rifleman fires on: keeping a man who has just ducked down is the purpose), within the
  weapon's walking-fire range, and
- the friendly-fire check passes, evaluated with the moving spread, so he holds fire more often
  near his own men.

Suppression is unchanged: at 0.8 he cannot fire at all, and below that the existing cover, pinned
and pressure rules take him to ground exactly as before, which ends the walking fire.

**The quiet flank.** On a `Task::Flank` leg he holds his fire until he has been fired on
(suppression above 0.08 or a wound) or a visible enemy is within 30 m (`FlankHoldsFire`), so a flank
is not announced by its own shooting. This applies to walking fire only; a flanker who has stopped
fires as before.

**Reloading.** A magazine emptied on the move is carried empty (`Soldier::reloadDeferred`): he keeps
moving silently and the reload starts at his first halt, that is, the first tick on which his action
is not Advance, Cover or Retreat. A magazine emptied while stationary reloads as before.

**Pressing on.** A soldier on an attack movement who sees an enemy inside walking-fire range no
longer takes the `ClearShot` "stop where you are and shoot" return in `ChooseOrder`: he continues to
his ordered objective and fires as he goes. Outside that range, and for every other movement,
today's behaviour is unchanged.

**A gun ordered to support from a position** (`Task::Overwatch`, support by fire, `BoundCover` area
fire) is not a mover, so nothing above applies to it: walking fire never replaces a base of fire.

**Switch and evidence.** `Config::movingFire` defaults to true; `--no-moving-fire` is the A/B control
and reproduces the pre-019 battle bit for bit. `Soldier::movingFire` is true exactly while he is
delivering walking fire; it drives the aim model, the pace on the next tick, the trace entry,
`evaluation.jsonl` (`moving_fire`, `reload_deferred`) and `shots.jsonl` (`moving_fire`). The digest
hashes both soldier flags, folded only when one of them is true, so a battle in which nobody fires
on the move keeps its historical digest.

## Threat-aware paths and the cover rule (plan 020)

Two shared soldier-level rules, both behind one switch, `Config::threatAwarePaths`
(`--no-threat-aware-paths`, `-ArmyNoThreatAwarePaths` is not wired; the CLI flag is the A/B
control and reproduces the pre-020 battle bit for bit). Every number is in one table,
`PathCaution` in `Sim/BattleSim.h`, reachable by a later parameter search:

| Quantity | Value | Why |
|---|---|---|
| `revealedSeconds` | 3 s | the seconds a path may reveal him to ONE known enemy (user ruling) |
| `memorySeconds` | 30 s | how long a place an enemy was seen keeps being avoided (user ruling) |
| `detour` | 1.5 | the covered alternative may be this many times the shortest path (user ruling) |
| `nearPath` | 120 m | no known enemy this close to the path means nothing is searched |
| `budget` | 4000 | expansion budget of the covered cost search |
| `sightCharge` | 8 | extra cost of a metre seen from a known enemy position |
| `chargedThreats` | 4 | enemies the cost field may carry; the measure still uses every one |
| `betterCover` | 12 m | how far "better cover close by" may be while under fire |
| `orderedAway` | 12 m | an order this far from his remembered cover releases it |
| `underFireSuppression` | 0.08 | rounds this recently close enough to suppress him: he is under fire |
| `sampleStep` | 1 m | spacing of the samples along a candidate path |
| `bodyHeight` | 1.3 m | the standing body a path reveals |

### Part 1: which path he asks for

`FindPath` is untouched. `TaskExecutionPath` (`Sim/BattleSim.cpp`) now decides *which* path a
soldier asks for:

1. The shortest path is computed first and is always the fallback.
2. **Revealed seconds.** For each enemy he KNOWS (his own `contacts[i]` merged with the
   `reports[i]` he has received, at the position he believes, observed or reported inside
   `memorySeconds`), the time he would spend on that path with a clear line from that enemy's
   believed position at its `aimHeight` to his body at `bodyHeight`, sampled every `sampleStep`
   at his own pace (the gunner's 2.55 m/s, a badly wounded man's 0.72 factor; suppression is left
   out, because the figure judges the whole crossing and not the instant he starts it). The
   path's figure is the **worst single enemy**, never the sum.
3. The search is skipped entirely when he knows no enemy, when no known enemy lies within
   `nearPath` of the path, and when the path is so short that `length / pace` cannot reach the
   threshold. A march in the rear and a fixture without enemies are the pre-020 path exactly.
4. Above the threshold he asks `FindCostPath` for a covered alternative: cost one per metre plus
   `sightCharge` for a metre any charged enemy can see, bounded by `budget`. The cost field
   carries only the enemies that actually revealed the shortest path (at most `chargedThreats`,
   worst first), because those are the ones the detour has to beat; the accept test still measures
   against every enemy he knows.
5. It is accepted when it is at most `detour` times the shortest path AND its revealed seconds are
   at most the threshold or at most half the shortest path's. Otherwise he takes the shortest path:
   a man who has been ordered somewhere still goes.
6. The chosen path is kept until the goal changes. The one early replan is an enemy he did **not**
   know when he chose it who now reveals more than the threshold of what is LEFT of it; that check
   runs on the existing two-second path cadence.

**Left alone:** emergency shelter departures (`Tactics::emergency`), peek and duck moves inside a
slot, moves under three metres, static defenders, and the squad corridor a leader's tactical
planner already produced (`FollowCorridor`/`FollowFinalApproach`) — except the join leg back onto
it, which is the soldier's own walk and is chosen this way.

### Part 2: who may leave cover (the user's rule)

> "Men should never leave cover under enemy fire unless a squad wide retreat order is given or he
> has better cover somewhere close by."

**Under fire** is what the soldier himself has: rounds close enough to suppress him above
`underFireSuppression` within the last second or two (suppression decays at 0.15/s, so 0.08 is
about one near miss a second ago), or suppression above his doctrine's duck threshold. The shot
record and enemy truth are never read.

- **In cover and under fire**, he stays, whatever movement order he holds (`Advance`, `Rally`,
  `Flank`, `BoundMove`, `ClearLane`), and his remembered position's expiry is renewed so it cannot
  time out under him. In `ChooseOrder` most movement orders already waited on `!memory.assigned`;
  `Task::ClearLane` did not, and is now stopped explicitly. In `ExecuteTask` the typed controllers
  get the same rule between "rounds are landing near me" and the duck threshold, and
  `PrepareTaskExecution` no longer discards a remembered cover for a movement order while he is
  under fire.
- **The two exceptions.** A squad-wide retreat (`Task::PullBack`) releases the cover whatever the
  fire, and he goes by a covered path. `BetterCoverNearby` is the other: a position within
  `betterCover` that protects him from strictly more of the enemies he knows than the one he holds,
  unoccupied, walkable and reachable. A man who is NOT in cover when fired on seeks the nearest
  cover exactly as before.
- **Not under fire**, a movement order more than `orderedAway` from his remembered cover releases
  it, so "I have a useful window here" no longer beats the order and `UsefulCover` can no longer
  renew the expiry of a position he has been ordered away from. This is what ends the two riflemen
  who sat in the start building and the flankers' hesitancy.

### Evidence

`Soldier::coveredPath` is true while his current path is the covered alternative; it appears in
`evaluation.jsonl` (`covered_path`), in the trace entry, and is folded into the gameplay digest
**only when true**, so a battle in which nobody detours keeps its historical digest and
`--no-threat-aware-paths` is a provable off switch. `paths.jsonl` gains a `path_choice` row per
searched decision (shortest length and revealed seconds, alternative length and revealed seconds,
which was taken and why) and a `cover_rule` row per verdict change (stayed under fire, released by
order, moved to better cover, obeyed retreat); a replan carries the kind `path_rethreat`. The
manifest carries `threat_aware_paths`, `path_choices`, `covered_paths`, `covered_path_detour`,
`path_revealed_seconds` and `covered_revealed_seconds`, so the rate is readable from a trace-free
export. `scripts/test-sim.sh --paths` is the mechanism group (also part of the default suite).

## Stamina and the sprint to cover (plan 022)

A soldier has one walking pace (3.15 m/s, the gunner 2.55 m/s, less when wounded, suppressed or
crouched). Plan 022 adds a second gear he pays for. One table, `SprintTable` in `Sim/BattleSim.h`
with `Sprint()` as its single accessor; one switch, `Config::stamina` (`--no-stamina`), which
reproduces the pre-022 battle bit for bit.

| Quantity | Value at stat 100 | Scaling |
|---|---|---|
| Sprint pace | 1.6 times his own walking pace (about 5.0 m/s) | `* StatScale(speed)`, never below 1 |
| Machine gunner's sprint | 1.35 times his own slower pace (about 3.4 m/s) | the same |
| Capacity | 8 s of sprinting (about 40 m) | `* StatScale(endurance)` |
| Drain | 1 s of stamina per second sprinting; the gunner 4/3 | the weight of the gun |
| Recovery | empty to full in 30 s standing still | `capacity * StatScale(endurance) / 30` per second |
| Recovery while walking | half that rate | |
| Recovery while sprinting | none | |
| Wounded | health below 55: no sprint | the existing wounded cutoff |
| Winded aim time | `AimSeconds` x1.3 at empty | fading linearly to x1 at full |
| Winded sway | `SwayAmplitude` x1.5 at empty | fading linearly to x1 at full |
| Look-ahead | 6 m of path, tested every 0.5 s, enemies within 95 m | cost bound, not policy |
| Shortest run | 4 m: a peek, a duck or a slot adjustment is walked | |

`StaminaCapacity`, `SprintPace`, `StaminaRecovery`, `CanSprint`, `StaminaPenalty` and `StepStamina`
are in `Sim/BattleSim.cpp`. `StaminaPenalty(soldier, atEmpty) = 1 + (atEmpty-1)*(1 - stamina/capacity)`
is **exactly 1** at full stamina, so a fresh man's aim and sway keep their pre-022 values and the
factor changes no float association.

### When he sprints (the user's rule)

He must be moving, able (not winded, stamina left, health at or above 55) and still at least 4 m
from his goal. Then any one of:

1. the stretch of path just ahead of him is in the sight of an enemy he **knows** (plan 020's
   `KnownThreats`, sampled every metre over the next 6 m, re-tested every 0.5 s so he is already
   running when he enters the open);
2. a squad retreat (`Task::PullBack` or `Action::Retreat`), or the bounded rush of a typed assault
   (`ExecutionContract::rushSeconds`, which the drills controller sets for an assault bound);
3. he is under fire (`suppression` above plan 020's under-fire threshold) and is moving to cover;
4. his move to cover is a reaction: `Reason::EmergencyCover`, `Contact`, `Suppressed`, `Flanked` or
   `Relocate`, whatever order he holds.

Otherwise he walks and recovers. `SprintTrigger(soldier, revealedAhead, remaining)` is the whole
rule and is shared by every controller: legacy, cognition and drills soldiers obey it, and a seated
static defender never sprints, because shelter-to-peek is under the 4 m minimum.

### The latch and the cost

`winded` is set the moment stamina reaches zero and is cleared **only when it is full again** (the
user's ruling), so a man who burns his stamina crossing the first street walks the second one. He
cannot fire while sprinting (`WalkingFire` returns false) and may fire again the instant he drops to
a walk. While his stamina is down his aim time and sway carry the winded factors above.

### The plan 020 coupling

`RevealedSeconds` now charges the revealed stretches of a candidate path at the pace he will
actually have: samples an enemy can see are covered at his sprint pace while his remaining stamina
lasts and at his walking pace after that, so a gap he can sprint counts for fewer seconds and one he
must walk counts for more. With `--no-stamina`, with a winded man or with a wounded one the budget is
zero and the measure is the pre-022 arithmetic exactly. `PathRevealedSeconds(..., stamina)` exports
the same measure for tests and tools.

### Evidence

`Soldier::stamina`, `Soldier::winded` and `Soldier::sprinting` are plain public fields: the Unreal
animation layer reads them, the HUD prints them, `evaluation.jsonl` carries `stamina`, `winded` and
`sprinting` per soldier, and the trace entry carries all three. They are folded into the gameplay
digest **only when `Config::stamina` is on**, as is the speed stat itself, so every historical digest
is unchanged and `--no-stamina` is a provable off switch. The manifest carries `stamina`.
`scripts/test-sim.sh --stamina` is the mechanism group (also part of the default suite):
the table, the clock, the latch, the triggers, the speed stat's own stream, the crossing estimate
and one crossing battle under both controllers.

## Verification and references

`scripts/test-sim.sh --stats` runs the stat suite, including the walking-fire table, its stat
scaling and the rule for who may use it; `scripts/test-sim.sh --moving-fire` runs the crossing
mechanism pair, `--paths` the threat-aware path and cover-rule group and `--stamina` the sprint group
(all part of the default suite). Reference digests for the 40 authored battles are
regenerated after each phase into `.local/baselines/{legacy,candidate90}/{works,trenches}`; the
pre-017 references are archived under `.local/baselines-pre017/<phase>/`. Weapon values and the
energy constants are chosen once from the pre-017 abstraction and physical reasoning; they are never
retuned to reproduce archived outcomes.
