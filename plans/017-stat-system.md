# Plan 017: Soldier stats and the weapon item model

Architect plan by Claude Fable 5.1, 17 September 2026. Source revision at planning: `9327959`.
Execution: Opus agents implement, Fable checks and commits (user instruction, 17 September 2026).
Copy into `plans/017-stat-system.md` at implementation time and record acceptance in AGENTS.md/CLAUDE.md.

## Context

The battle simulation has no soldier attributes and no weapon model. Every combat number is a literal
keyed on a single `machineGun` bool: aim settle 0.45/0.65 s, cone 0.047/0.080 rad, muzzle speed 720/680,
cadence 1.25/0.32/0.10 s, magazine 8/60, reload 2.5/4 s, flat damage 32 + 25 × random, sight range 70/95,
and health 100. The only per-soldier variation is reaction time, hashed from the seed.

User decisions recorded 17 September 2026:

- Seven soldier stats on a base of 100: **perception** (aim, sight range, detection), **dexterity**
  (weapon manipulation), **toughness** (health), **strength** (reserved for carry weight), **wisdom**
  (decision making, officer skill, report delay and communication quality), **initiative** (reaction
  time), **composure** (how suppression affects the soldier).
- Stats are hard to build. Natural talent is a mixture, rolled independently for each stat of each
  soldier: 50 % of rolls land in a cluster around 100 (95 to 105), 40 % fall off toward 80 with
  linearly thinning density, 10 % rise toward 140 with linearly thinning density. The shape is a
  per-team parameter so factions can skew it later.
- Linear stat effects with a single hook for a curve later.
- Weapons are **items attached to soldiers**, so attachments and enchantments can modify them later.
  Weapon data: action type and fire rate (automatic fixed, bolt modified by dexterity), magazine,
  reload (dexterity), base deviation, sight quality (aim modifier), ergonomics (handling and sway,
  dexterity), cartridge (bullet mass, velocity), barrel length (velocity).
- Fully simulated ballistics: drag in flight, kinetic energy at impact, over-penetration through
  bodies. Cover stays solid; energy-based cover penetration is a later hook.
- Damage variance from a severity roll: 80 % torso ×1, 10 % limb ×0.5, 7.5 % ×1.5, 2.5 % ×2. Hit
  location proper is later.
- Sway in the style of RimWorld Combat Extended: a time-varying wander of the aim point plus a
  per-shot recoil kick that decays, both in this plan.
- The wounded cutoff stays a static 55 health.
- Magazine only, no carried ammunition total.
- Stats become the only path. Digests are re-measured, never tuned back to the old baseline.

## Invariants

1. **Determinism.** Stats come from a hash of roster seed, soldier slot and stat index. No stat or
   weapon setup consumes the battle RNG. Same config twice gives the same digest.
2. **Nothing reads `machineGun` to decide a combat number.** Fire control, ballistics and sight range
   read the soldier's effective weapon stats. `machineGun` survives only as a cached organisation flag
   (this soldier carries the squad's automatic support weapon), written only by `EquipWeapon`, and
   `Simulate` asserts the two agree before frame 0 is recorded.
3. **One scale hook.** Every stat effect goes through `StatScale(value)`; linear today, curve later.
4. **Each stat has one entry point per effect.** Composure touches suppression accumulation and decay
   only, never the thresholds. Toughness touches max health only. Perception touches sight range,
   detection delay and aim error only.
5. **Perception boundary unchanged.** `SenseEnemy` remains the only place that inspects an enemy body;
   the contact's `automaticWeapon` is derived from the target's weapon action. Literals that encode
   what a soldier *assumes* about the enemy (`TaskSim.cpp:91-92`, `RecoverySim.cpp:78`) stay
   literals, renamed to a named doctrine constant, because a soldier cannot read the enemy's stats.
6. **Fixtures are stat-neutral.** Encounter fixtures set every soldier to 100 and the default rifle
   or machine gun, so behaviour tests keep their timing bounds. Only full battles roll the mixture.
7. **No calibration to old digests.** Weapon table values are chosen once from the current
   abstraction as the 100-stat reference and from physical reasoning for energy. They are not iterated
   to reproduce archived outcomes or to bring back a behaviour a test used to see.

## Data model

New files `Unreal/Source/ArmyPrototype/Sim/Stats.h/.cpp` and `Sim/Weapons.h/.cpp`.

```cpp
enum class Stat { Perception, Dexterity, Toughness, Strength, Wisdom, Initiative, Composure, Count };
struct Stats { std::array<float,size_t(Stat::Count)> value{100,100,100,100,100,100,100};
               float Get(Stat s) const; };
float StatScale(float value);              // value/100. The only curve hook.

struct StatDistribution {                  // per team, in Config; all seven stats share it for now
    float baseShare=.5f, lowShare=.4f, highShare=.1f;
    float baseHalfWidth=5;                 // base cluster spans 100 ± this
    float lowEdge=80, highEdge=140;        // ends of the two tails
    float shape=2;                         // tail density falls as (1 - x/edge)^(shape-1); 2 = linear
    static StatDistribution Fixed();       // baseShare 1, baseHalfWidth 0: every stat exactly 100
};
float SampleStat(const StatDistribution&, float u);   // inverse CDF, u in [0,1)
Stats GenerateStats(const StatDistribution&, uint32_t rosterSeed, int slot);
```

Sampler, with `u` uniform in [0,1) and `v` the position inside the chosen piece rescaled to [0,1):
`u < baseShare` gives a triangular value on `100 ± baseHalfWidth` peaked at 100
(`v < .5 ? 100 - w*(1 - sqrt(2v)) : 100 + w*(1 - sqrt(2(1-v)))`). The next `lowShare` of mass maps to
`100 - (100 - lowEdge) * (1 - (1 - v)^(1/shape))`, density highest at 100 and zero at `lowEdge`.
The remaining `highShare` maps to `100 + (highEdge - 100) * (1 - (1 - v)^(1/shape))`. Shape 2 is a
linear fall-off. Expected mean about 98.7. Each of the seven stats is sampled with its own `u`.

Hash: `uint64` splitmix over `(rosterSeed, slot, statIndex)` so the seven rolls of one soldier are
independent and the pattern at `BattleSim.cpp:178` is not reused for stats. Under `equalTroops` hash
on `id % TeamSize` so mirrored slots on both teams get identical stats.

Roster seed: `Config::rosterSeed` (default 0, meaning "use `seed`"). Talent belongs to the soldier, not
the battle, per the AGENTS.md principle of persistent soldier identities. A later roster feature
replaces the hash with explicit stats; until then the same roster seed across battle seeds keeps the
same soldiers. Carried in `SameConfig`, the manifest and `--roster-seed` in `tools/battle_cli.cpp`.

```cpp
enum class WeaponAction { Bolt, SemiAuto, Automatic };
enum class WeaponId { Rifle, MachineGun };
struct Cartridge { const char* name; float bulletMass /*kg*/, referenceVelocity /*m/s*/,
                   referenceBarrel /*m*/, dragK /*1/m*/; };
struct WeaponDef {
    const char* name; WeaponAction action;
    float cyclicSeconds;      // Automatic: fixed interval between rounds. SemiAuto: trigger minimum.
    float cycleSeconds;       // Bolt: manual cycle at dexterity 100
    int   magazine; float reloadSeconds;          // at dexterity 100
    float baseDeviation;      // rad, mechanical, irreducible
    float sightQuality;       // 1 = iron-sight reference; divides the shooter's aiming error
    float ergonomics;         // 1 = reference; divides settle time, recovery, sway and recoil
    float recoil;             // rad of aim displacement per shot at the reference
    Cartridge cartridge; float barrelLength /*m*/;
    float engagementRange;    // m, replaces the 70/95 sight-range split (see perception)
};
struct WeaponModifier { enum class Field {...}; Field field; float multiply=1, add=0; }; // future items
struct WeaponItem  { WeaponId def=WeaponId::Rifle; std::vector<WeaponModifier> modifiers; };
struct WeaponStats { /* effective values after modifiers, plus muzzleVelocity, bulletMass, dragK */ };
WeaponStats Resolve(const WeaponItem&);
void EquipWeapon(Soldier&, WeaponItem);   // sets weapon, gun, machineGun, magazineRemaining = magazine
```

Muzzle velocity: `referenceVelocity * pow(barrelLength / referenceBarrel, 0.2f)`.

Initial table (two entries, values are the 100-stat reference taken from today's abstraction):

| Field | Rifle | Machine gun |
|---|---|---|
| action | Bolt | Automatic |
| cycleSeconds / cyclicSeconds | 1.25 | 0.10 |
| magazine, reload | 8, 2.5 s | 60, 4.0 s |
| baseDeviation | 0.007 rad | 0.020 rad |
| recoil | 0.012 rad | 0.004 rad |
| sightQuality | 1.0 | 0.67 |
| ergonomics | 1.0 | 0.69 |
| cartridge | shared: 0.0113 kg, 720 m/s at 0.74 m, dragK 0.0007 | same |
| barrelLength | 0.74 m | 0.72 m |
| engagementRange | 70 m | 95 m |

With aiming error base 0.040 rad this reproduces today's 0.047 and 0.080 horizontal cones at stat
100. The cartridge is fictional; the numbers are in the range of a full-power rifle round. The same
cartridge in both guns is accepted by the user.

Soldier additions (`BattleSim.h:371`): `Stats stats; float maxHealth=100; WeaponItem weapon;
WeaponStats gun; int magazineRemaining; float swayPhase; Vec2 recoil;`. About 130 bytes per soldier
per frame, roughly 15 MB per 360 s battle against a 2.9 GB record; `Soldier` already carries vectors.

Config additions (`BattleSim.h:238`): `std::array<StatDistribution,2> statProfiles; uint32_t
rosterSeed=0;`. Extend `SameConfig` (`BattleSim.h:261`), validation (`BattleSim.cpp:679-688`),
manifest (`Diagnostics.cpp:286`) and `tools/battle_cli.cpp` so a battle can be rerun from its manifest.

## Where soldiers get stats and weapons

- `InitialFrame` (`BattleSim.cpp:165-188`): `s.stats = GenerateStats(c.statProfiles[team],
  rosterSeed, slot)`, `maxHealth`, `EquipWeapon` by slot (the rule at `:174`).
- `ApplyScenario` (`ScenarioGen.cpp:106`) runs after `InitialFrame` and may move the gun: it calls
  `EquipWeapon` for both the gunner and any slot it demotes to rifle. `LeaderSim.cpp:58` likewise.
- Fixture makers `MakeMGEncounter`, `MakeCognitiveEncounter` (`CognitiveSim.cpp:883` sets the flag),
  `MakeDrillEncounter` (`DrillFixtures.cpp:80`), `MakePlatoonEncounter` (`PlatoonFixtures.cpp:87`)
  call a helper `NeutraliseStats(Frame&)` first (every soldier `Stats{}`, `maxHealth 100`) and use
  `EquipWeapon` wherever they wrote `machineGun`.
- The belief proxy `Soldier` built in `DrillSim.cpp:33-45` from `KnownSquadMember.machineGun` is never
  equipped and never handed to anything reading `gun`.
- `Simulate` (`BattleSim.cpp:698-710`), after all makers and before `r.frames.push_back(f)`: throw
  `std::logic_error` if `s.machineGun != (s.gun.action==Automatic)` or `magazineRemaining > magazine`.

## Stat consumers (one entry point each)

| Stat | Entry point | Rule |
|---|---|---|
| Initiative | `BattleSim.cpp:179` | `reactionBase = 0.425 / StatScale(initiative)`; the hash range 0.25..0.60 goes away |
| Toughness | `InitialFrame` | `maxHealth = 100 * StatScale(toughness)`; `health = maxHealth`. Cutoff stays literal 55. HUD "WOUNDED" at `BattleGameMode.cpp:715`, bars at `:716, :777` and the smoke seek at `:485` use `maxHealth` |
| Composure | `BattleSim.cpp:979`, `:985`, `:764` | near miss `+0.23 / StatScale(composure)`, hit `+0.30 / StatScale(composure)`, decay `0.15 * StatScale(composure)`. Thresholds untouched |
| Perception | `SightRange` `BattleSim.cpp:649`; `detectionDelay` `:659`; aim error (below) | `SightRange = gun.engagementRange * StatScale(perception)`; `detectionDelay /= StatScale(perception)`. The literal 70 at `BattleSim.cpp:776` becomes `SightRange(observer)`. The literal 95 at `TaskSim.cpp:91-92` and `RecoverySim.cpp:78` becomes a named constant `AssumedEnemyReach=95` (invariant 5) |
| Wisdom, officers | `BattleSim.cpp:172, 181-187` | Every soldier's `officer` profile is the config profile with `judgment`, `adaptability`, `communication` each multiplied by `StatScale(wisdom)` and clamped to [0,1]; `risk` untouched. The Lieutenant's base is `platoonProfiles[team]`. Remove the cognition `vary()` jitter |
| Wisdom, reports | new `float ReportDelay(float base, const Soldier& sender)` | `base / StatScale(sender.wisdom)` where `base` is each site's existing resolved expression (`rt.reportDelay`, or `TypedController(c) ? c.reportDelay : MessageDelay`). Sites: `CommandSim.cpp:466,478,493,516,537,547,554,560,564,571,575,604,657`; `PlatoonSim.cpp:160` (and `:162` which copies it), `:240,247,255,266,292,314,352`; `TaskSim.cpp:62`. Reasoning budgets such as `2*reportDelay+5` keep the config value. Queues are drained by `arrives <= time`, not FIFO, and same-sender order is preserved because wisdom is constant |
| Wisdom, judgment | `BeliefSim.cpp:27`, `DrillSim.cpp:357` | judgment attenuation of `estimateBias` applies to all controllers; drills assessment pause `3 / StatScale(wisdom) + reactionBase` |
| Dexterity | fire control | reload, bolt cycle, settle, recovery, sway, recoil (below) |
| Strength | none | stored, traced, unused |

## Fire control (`BattleSim.cpp:1020-1061`, `AimSeconds` `:238`, `ShotSpread` `:241`, `VerticalSpread` `:242`)

- Settle: `AimSeconds = 0.45 / (gun.ergonomics * StatScale(dex)) * (1 + 3*supp) * (health<55 ? 1.3 : 1)`.
- Random cone: `spread = gun.baseDeviation + 0.040 / (gun.sightQuality * StatScale(perception))
  + supp*0.10 + area/moving penalties as today`. Vertical:
  `0.014 / (gun.sightQuality * StatScale(perception)) + supp*0.024`. Sight quality now applies to
  both axes, so the machine gun's vertical base widens from 0.014 to 0.021; this is a stated change.
- Sway: `SwayOffset(const Soldier&, float time)` returns (yaw, pitch) radians
  `A * (sin(2π t/2.3 + φ), sin(2π t/3.7 + φ'))`, `A = 0.010 / (gun.ergonomics * StatScale(dex))
  * (crouched ? 0.7 : 1) * (1 + 2*supp)`, `φ, φ'` from the soldier hash. Two incommensurate periods
  give a wandering figure. Pure function of recorded state so the viewer can draw it.
- Recoil: `Soldier::recoil` is a (yaw, pitch) offset. Each shot adds `(0.3 * sign(hash) * kick, kick)`
  with `kick = gun.recoil / (gun.ergonomics * StatScale(dex)) * (crouched ? 0.8 : 1)`. Every tick
  `recoil *= exp(-TickSeconds * 4 * gun.ergonomics * StatScale(dex))`, a quarter-second time constant
  at the reference. Between bolt shots it decays to nothing; in a sustained burst at 0.10 s it settles
  near three kicks and the burst walks upward until the 18-round pause.
- Shot construction at `:1047-1052` keeps the horizontal-speed convention (horizontal velocity is
  `direction*speed`, vertical is a velocity offset):
  ```cpp
  const Vec2 off = SwayOffset(s,f.time) + s.recoil;
  float angle = atan2(...) + off.yaw + (rng.Next()-0.5f)*2*spread;
  float vz = (solution.point.z-muzzle.z)/flightTime + 4.905f*flightTime
           + speed*std::tan(off.pitch) + (rng.Next()-0.5f)*speed*VerticalSpread(s);
  ```
- Cadence after a shot:
  - Bolt: `cooldown = gun.cycleSeconds / StatScale(dex) + supp*0.5`; aim resets to 0.2 as today.
    The random `+0.35` is dropped, variance now comes from stats, sway and recoil.
  - Automatic: `cooldown = gun.cyclicSeconds`, never stat-modified. Burst structure is behaviour:
    sustained keeps 18 rounds then 1.0 s; aimed fire is bursts of 3 rounds then a re-lay pause of
    `0.6 / (gun.ergonomics * StatScale(dex))`, which keeps aimed volume close to today's one round per
    0.32 s. Aim resets to 0.98 sustained, 0.8 aimed as today.
  - SemiAuto: `cooldown = gun.cyclicSeconds`; aim resets to 0.5. No table entry uses it yet.
- Magazine: `EquipWeapon` starts it full. Each shot decrements `magazineRemaining`; when it reaches
  zero the shot sets `reloadUntil = time + gun.reloadSeconds / StatScale(dex)`. The refill
  `if(magazineRemaining<=0 && time>=reloadUntil) magazineRemaining = gun.magazine` sits just before
  the fire gate at `:1022`. `a.tactics.readyAt = max(time + cooldown, reloadUntil)`. Fixtures that
  drive `reloadUntil` directly to silence soldiers keep working because a reload is only started by an
  empty magazine. `rounds` stays the monotonic total for `/6` rotation (`:348`), `%18` (`:1059`),
  `roundsAtPeek` (`:558`), `ManeuverSim.cpp:122`, `CommandSim.cpp:580`, the digest and the viewer.
- Lead (`BattleSim.cpp:270`, `:1049`): flight time with drag `t = (exp(k d) - 1) / (k v0)` using
  `gun.muzzleVelocity` and `gun.dragK`.
- `ShouldHoldFire` and the friendly-lane widths (`:269, :276, :304`) keep their automatic/rifle split
  but key on `gun.action == Automatic`.

## Ballistics (`BattleSim.cpp:420` Projectile, `:950-1015` loop, `BallisticPosition` `:33`)

- Projectile gains `float mass, dragK; std::array<bool,UnitCount> struck{};`.
- `Shot` gains `struct Victim { int soldier; float time, energy; }; std::vector<Victim> victims;`.
  `hit = !victims.empty()`, `target = victims.front().soldier`. `impact` is the terminal stop kind: a
  round that stops in a body is `Soldier`; a round that exits leaves `impact == None` for that pass so
  the erase at `:1013` does not fire, and later stops as `Cover`, `Ground` or `OutOfBounds`. One Hit
  event per victim at that victim's time. `tests/sim_tests.cpp:888` becomes `!victims.empty()` and
  `:890` matches each victim's time; the viewer at `BattleGameMode.cpp:628` keeps reading `hit`.
- Energy deposit is continuous so damage rises monotonically with impact energy and saturates as a
  round over-penetrates: `Edep = E * (1 - exp(-B / E))` with body absorption `B = 2000 J`. If the
  remainder `E - Edep` is below the exit threshold `300 J` the round stops and deposits all of `E`.
  `damage = Edep / 35 * severity`. Reference numbers for the rifle, torso, severity 1:

  | Range | Impact energy | Deposited | Health lost | Exits with |
  |---|---|---|---|---|
  | 0 m | 2.93 kJ | 1.45 kJ | 41 | 1.48 kJ |
  | 100 m | 2.54 kJ | 1.38 kJ | 40 | 1.16 kJ |
  | 300 m | 1.92 kJ | 1.24 kJ | 36 | 0.68 kJ |

  A second body on the line at 100 m takes about 24 health and lets 0.2 kJ through; a third body stops
  it for about 6. These constants are chosen once here and not retuned after re-baseline.
- Severity: one RNG draw `u`: `u<.80` ×1.0 torso, `<.90` limb ×0.5, `<.975` ×1.5, else ×2.0.
- Substep control flow, replacing `:983-995` and the tail at `:1013-1014`. `dt` already derives from
  `shot.impactTime` (`:957, :959`), so re-running a bullet after a penetration means `continue` without
  `++i`. A local `segBegin` (initially `float(sub)/Substeps`) tracks where in the substep the bullet
  segment starts so the soldier sweep at `:967-969` interpolates `from = before + delta*segBegin`; on
  the normal path it is not recomputed, so float rounding is unchanged for ordinary bullets.
  ```cpp
  for(const auto& s:f.soldiers) if(s.Active()&&s.id!=b.owner&&!b.struck[s.id]) { ...sweep... }
  ...
  if(hit>=0){
      Vec3 v=b.velocity; v.z-=9.81f*dt*first; v=v*std::exp(-b.dragK*Distance(b.p,end));
      const float E=0.5f*b.mass*Dot(v,v);
      /* severity roll, Edep, damage, suppression, Hit/Casualty events at endTime */
      shot.victims.push_back({hit,endTime,E}); b.struck[hit]=true;
      if(E-Edep<ExitThreshold) impact=Shot::Impact::Soldier;
      else { b.p=end; b.velocity=v*(std::sqrt(2*(E-Edep)/b.mass)/Length(v));
             segBegin+=(1-segBegin)*first; shot.impact=Shot::Impact::None; continue; }
  }
  /* :996-1012 unchanged: suppression pass and delivery report are per-bullet flags, no double count */
  if(impact!=Shot::Impact::None) bullets.erase(bullets.begin()+i);
  else { b.p=next; b.velocity.z-=9.81f*dt; b.velocity=b.velocity*std::exp(-b.dragK*Distance(b.p,next)); ++i; }
  ```
  The `struck` guard is load-bearing: `SegmentSoldier` returns 0 for a segment starting inside a body
  (`tests/sim_tests.cpp:61`), so without it the re-run would loop forever on the same victim.
- `shot.flight` gains one sample per pass; `ProjectilePosition` tolerates equal-time samples.
  `tests/sim_tests.cpp:897` changes from `distance == dt*speed` to the drag form
  `distance == dt * v0 * exp(-k * cumulative)` and resets the expected speed at each victim time.
- Suppression on hit and the wounded/killed roll are unchanged apart from the composure divisor.
  Cover and ground still stop the round. `BodyHeight`, `SegmentSoldier`, the near-miss pass and
  delivery reporting are unchanged.

## Organisation flag and the AI

`machineGun` stays as a field but is written only by `EquipWeapon` as `gun.action == Automatic`. The
~40 AI reads listed in the survey (CommandSim, DrillSim, SquadDrillSim, ManeuverSim, RecoverySim,
CognitiveSim, PlatoonSim, TacticalRouteSim) are unchanged. Movement speed (`BattleSim.cpp:920`,
`TacticalRouteSim.cpp:25`) keeps the 2.55/3.15 split keyed on the flag; weight is strength's job later.

## Diagnostics, export and viewer

- `GameplayDigest` (`Diagnostics.cpp:119-208`) reads only `Record`, so trace parity is automatic.
  In the unconditional section right after `i(r.winner); f(r.duration);` at `:121`, hash
  `config.statProfiles`, `rosterSeed`, and for each soldier of `r.frames.front()` the seven stats,
  `maxHealth`, `int(weapon.def)`, modifier count and each modifier. Add `i(s.magazineRemaining)` and
  each shot victim (soldier, time) to the per-frame loop at `:122`. Nothing goes inside the
  `cognition`, `leaderEffects` or `drills` blocks, or legacy battles would miss stat changes.
- Trace entry and `evaluation.jsonl` (`Diagnostics.cpp:35-56, 211-243`) gain the seven stats, weapon
  name, `max_health` and `magazine`. `scenario.json` (`:280`) gains per-soldier stats and weapon ids.
  `shots.jsonl` (`:275`) gains impact energy and victims. Manifest (`:286`): stat profiles, roster seed.
- HUD (`BattleGameMode.cpp:712-725`): the seven stats, weapon name and magazine on the selected
  soldier. Optional: draw the sway point from `SwayOffset` and `recoil`.
- `tests/sim_tests.cpp:14-48` Fingerprint serialises stats, weapon id, `maxHealth`, victims.

## Which suites see the mixture

Full battles built from a plain `Config` roll the mixture: the whole-battle sweep at
`tests/sim_tests.cpp:789-918`, the 40 authored parity battles, the three trace-parity cases, generated
scenarios and the improvement loop. Every encounter fixture (encounters 1 to 103, reached through the
makers at `BattleSim.cpp:693-698`) is neutralised to 100 and the default weapons by `NeutraliseStats`,
so the timing bounds in `tests/platoon_tests.h:92,121,144`, `tests/reliability_tests.h` (including the
`reportDelay=7` case at `:193`), `tests/squad_drills_tests.h:27` and `tests/drills_tests.h:98` keep
their meaning. Wounded fixtures pinned at health 40 stay below the static 55 cutoff. Fixtures that use
health 10000 as invulnerability still work: a ×2 severity hit deposits under 120.

## Verification

New selector `--stats` in `tests/sim_tests.cpp`, new file `tests/stats_tests.h`:

- Sampler: 100 000 uniform draws give 50/40/10 shares within one percentage point; base values in
  [95,105], low tail in [80,100), high tail in (100,140]; density in each tail decreases
  monotonically across ten bins; `Fixed()` returns exactly 100 for every `u`.
- Generation: same roster seed and slot give identical stats twice; different stat indices differ;
  different roster seeds differ with the same battle seed; `equalTroops` mirrors slot stats across
  teams; the battle RNG state is untouched by `InitialFrame`.
- Weapon resolve: a `multiply` modifier on ergonomics changes the resolved value; muzzle velocity
  follows the barrel power law; the machine gun is `Automatic` and sets `machineGun`; the consistency
  assertion in `Simulate` throws on a hand-corrupted frame.
- Ballistics: rifle muzzle energy about 2.9 kJ; speed at 300 m about 583 m/s; a standing soldier at
  100 m hit with severity 1 loses about 40 health; a second soldier directly behind is struck by the
  exiting round with lower energy and its own Hit event time; a third stops the round; a round slowed
  below the exit threshold stops in the first body with `impact == Soldier`; drag-aware lead lands on
  a target moving at 3 m/s at 100 m within the cone.
- Sway: each component never exceeds `A` in magnitude; the same soldier and time give the same
  offset; dexterity 140 has smaller amplitude than dexterity 80.
- Recoil: after one rifle shot the offset equals the kick and falls below a tenth of it within one
  bolt cycle; ten sustained machine-gun rounds leave an offset near three kicks; the 18-round pause
  returns it below a tenth of a kick.
- Composure: two soldiers under the same near miss accumulate suppression in inverse proportion to
  `StatScale(composure)` and decay in direct proportion.
- Magazine: a rifle fires eight rounds, reloads for 2.5 s at dexterity 100 and 2.08 s at 120, then
  fires again; `readyAt` never precedes `reloadUntil`.

Existing tests to update:

- `tests/sim_tests.cpp:797` and `:897`: read the owner's frame-0 `gun.muzzleVelocity` and use the drag
  flight formula; `:888` and `:890` use `victims`.
- `tests/sim_tests.cpp:70-75` and `tests/cognition_tests.h:26`: observers at stats 100 keep 70 m and
  95 m; add one case at perception 120.
- Tests that write `s.machineGun=true` call `EquipWeapon(s, {WeaponId::MachineGun})`.

Suites and gates, run after every phase:

```bash
scripts/test-sim.sh
```
```bash
python3 -m unittest discover -s tests -p 'test_*.py'
```
```bash
python3 -m tools.loop selectors
```

The whole-battle sweep at `tests/sim_tests.cpp:835-918` and the Unreal smoke test at
`BattleGameMode.cpp:467-496` assert that certain behaviours occur (a wounded rear guard firing, an MG
aiming on overwatch, duck and pop-up). If the new model makes one absent, report it and stop; do not
adjust stats or weapon data to bring it back.

## Re-baseline procedure (once per phase, after the suite passes)

1. Build the lab binary with `scripts/battle-lab.sh` and record its source id.
2. Move `.local/baselines/legacy` and `.local/baselines/candidate90` to
   `.local/baselines-pre017/<phase>/`. They are the only stored absolute digests.
3. Re-run the 40 authored battles with the commands `.local/phase4/parity.py` uses (seeds 100 to 109,
   Works and Trenches, `--legacy-ai` and `--cognition`, 360 s, `--evaluate`) and archive the new
   manifests in the original locations. Run the parity script against the new binary and confirm
   40/40 against the new references.
4. Run the three drills trace-parity cases (Works, Trenches, F1 gen seed 1, seed 107, traced and
   `--no-trace`) and confirm 3/3 equal digests. Run one a second time to show determinism.
5. Re-run `tools/run_ai_acceptance.py` for the frozen nine and thirty and store the new
   `acceptance.json` next to the old, marked informational after plan 017.
6. Record in the phase report: source id, new digest table, shots per battle, casualties per side,
   mean hits to incapacitate, multi-victim shot count, and the behaviours from the sweep that changed.
   No stat is retuned from these numbers.

The improvement loop has no cached rows yet, so nothing there is stale. Note in
`tools/loop/config.py` that the `squad-only` pinned binary predates the stat model and is no longer a
comparable reference, and that the 360 s eligibility rule in `tools/initiative_guards.py:47` may
lose pairs if battles now resolve early.

## Phasing

1. **Stats and fire control.** Stats struct, sampler, roster seed, config, all stat consumers,
   weapon table, `EquipWeapon`, `NeutraliseStats`, consistency assertion, fire control on `gun`,
   magazine tracking, diagnostics and HUD. Ballistics unchanged except muzzle velocity from the gun.
   Re-baseline.
2. **Ballistics.** Drag, energy deposit, severity, over-penetration with `victims`, drag-aware lead.
   Re-baseline.
3. **Sway and recoil.** Wander offset, recoil kick and decay, viewer hook. Re-baseline.

Each phase ends with the full Linux suite, Python tests, the loop selectors, the determinism check
and the re-baseline procedure.

## Execution model

Per the user's instruction of 17 September 2026, Opus agents implement and Fable checks. One Opus
agent per phase, sequential, on a branch `plan-017-stats` from the current head. Each agent gets this
plan, the phase scope, the file list, and the verification commands, and reports test output verbatim.
Fable reads the full diff, runs the suites and the re-baseline itself, and commits with the attribution
line. Fable owns `Sim/Stats.*`, `Sim/Weapons.*`, `Sim/BattleSim.h/.cpp`, `Sim/Diagnostics.*`,
`Sim/ReactionSim.cpp`, `Sim/BeliefSim.cpp`, `Sim/LeaderSim.cpp`, `Sim/PlatoonSim.cpp`,
`Sim/CommandSim.cpp`, `Sim/TaskSim.cpp`, `Sim/ScenarioGen.cpp`, `Sim/DrillSim.cpp`, the fixture
files, `tests/`, `tools/battle_cli.cpp` and `BattleGameMode.cpp` until the plan lands. Astra does not
edit them meanwhile. Windows and Unreal builds are verified by whoever has the Windows host, after the
Linux suite.

Docs: prepend a section to AGENTS.md and CLAUDE.md recording the user's decisions, the new digest
references and the file ownership; add `plans/017-stat-system.md` (this plan) and update
`plans/README.md`. Add `docs/STATS_AND_WEAPONS.md` with the formulas, the weapon table and the energy
reference table.

## Assumptions the user has not ruled on

- Aimed automatic fire becomes three-round bursts at the cyclic rate with a re-lay pause, instead of
  single rounds every 0.32 s. Volume is similar; replays will show bursts.
- The rifle's random `+0.35 s` cadence jitter is removed.
- Sight range keeps its rifle/machine-gun split as weapon `engagementRange`, scaled by perception.
- Sight quality applies to the vertical cone as well as the horizontal one.
- Judgment attenuation of estimate bias applies to all controllers, not only cognition.
- Body absorption 2000 J, exit threshold 300 J, 35 J per health point.
- A roster seed separate from the battle seed, defaulting to the battle seed.
