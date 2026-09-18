# Soldier stats and weapon items (plan 017)

Authoritative formulas for the stat system and the weapon item model. The design and the user's
decisions are in [plan 017](../plans/017-stat-system.md). Phases: 1 stats and fire control (landed),
2 energy ballistics (landed), 3 sway and recoil.

## Stats

Seven stats on a base of 100: perception, dexterity, toughness, strength, wisdom, initiative,
composure (`Sim/Stats.h`). `StatScale(value) = value / 100` is the single hook where a curve can
replace linearity. Strength is stored and traced but has no consumer yet.

Each stat of each soldier is rolled independently from a splitmix64 hash of the roster seed, the
soldier slot and the stat index. The battle RNG is never consumed. `Config::rosterSeed` defaults to 0,
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
| Toughness | `maxHealth = 100 * StatScale(toughness)`; the wounded cutoff stays a literal 55 |
| Composure | near miss `+0.23 / StatScale`, hit `+0.30 / StatScale`, decay `0.15 per s * StatScale`; thresholds untouched |
| Perception | `SightRange = gun.engagementRange * StatScale`; cognition `detectionDelay / StatScale`; aim error below |
| Wisdom | officer judgment, adaptability and communication are the config profile times `StatScale`, clamped to 1; risk untouched. Every report a soldier sends arrives after `base / StatScale(sender wisdom)`. Judgment attenuates estimate bias for all controllers. Drills assessment pause `3 s / StatScale + reactionBase` |
| Dexterity | reload, bolt cycle, settle, aimed-burst re-lay, and in phase 3 sway and recoil |

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
| recoil (phase 3) | 0.012 rad | 0.004 rad |
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

## Sway and recoil (phase 3, pending)

Sway is a (yaw, pitch) wander `A * (sin(2π t / 2.3 + φ), sin(2π t / 3.7 + φ'))` with
`A = 0.010 rad / (ergonomics * StatScale(dex)) * (crouched ? 0.7 : 1) * (1 + 2 * suppression)`. Each
shot adds a recoil kick `recoil / (ergonomics * StatScale(dex))` that decays with a quarter-second
time constant at the reference. Both are added to the aim direction before the random cone.

## Verification and references

`scripts/test-sim.sh --stats` runs the stat suite. Reference digests for the 40 authored battles are
regenerated after each phase into `.local/baselines/{legacy,candidate90}/{works,trenches}`; the
pre-017 references are archived under `.local/baselines-pre017/<phase>/`. Weapon values and the
energy constants are chosen once from the pre-017 abstraction and physical reasoning; they are never
retuned to reproduce archived outcomes.
