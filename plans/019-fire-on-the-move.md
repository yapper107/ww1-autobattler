# Plan 019: fire on the move

Status: **approved in outline by the user on 19 September 2026, to start after loop generation 8 is recorded.** Nothing
is implemented. Author: Fable (architect). The user's three rulings are recorded at the end and worked into the design;
the remaining numbers are the architect's starting values and can be changed.

## The request

"Something that soldiers should do too after this generation is the ability to shoot and suppress enemies while moving.
This severely decreases aim, recoil recovery, weapon handling, etc. However it is realistic."

## What the simulator does today

Firing is a stationary action. A shot is only produced while `Soldier::action == Action::Fire`
(`BattleSim.cpp`, the fire-control loop and `UpdateAim`), and a soldier's path only advances while his action is NOT
Fire or Hold. A moving soldier who sees an enemy therefore has two choices in `ChooseOrder`: keep walking silently, or
stop where he is and shoot (`ClearShot`, "visible and nearer than the preferred range"). The second is what the user saw
in the drills replay: men shooting from the middle of the road. Aim quality comes from four functions that already carry
stance, suppression, weapon and stat terms (`AimSeconds`, `ShotSpread`/`VerticalSpread`, `SwayAmplitude`,
`RecoilKick`/`DecayRecoil`); suppression of the target comes from rounds passing near him, hit or not.

## Design

1. **A movement factor, not a new firing system.** A soldier is *moving* when his action is Advance, Cover or Retreat and
   he displaced in the last tick. A moving soldier with a target may run the same fire-control path as a stationary one.
   The four aim functions gain one movement term each, from a single table in `Weapons.h` (so the loop's parameter
   search can reach them later), starting values:

   | Quantity | Stationary | Moving (rifle) | Why |
   |---|---|---|---|
   | Aim time (`AimSeconds`) | x1 | x2.5, and aim never settles above 0.5 | no stable stance; snap shooting |
   | Shot spread (`ShotSpread`, `VerticalSpread`) | x1 | x3 | walking gait |
   | Sway amplitude | x1 | x4 | |
   | Recoil kick | x1 | x1.5 | not braced |
   | Recoil recovery rate | 4 /s | 2 /s | |
   | Cycling the bolt, time between shots | x1 | x1.5 | handling on the move |
   | Reload | 2.5 s | not while moving: he finishes the rush first, or halts to reload | stripper clips |
   | Pace while firing | his movement pace | **80 % of his movement pace (user ruling)** | walking fire |

   Dexterity scales the handling terms and composure the spread term, through the existing `StatScale`. Crouched movement
   does not exist in the model and is not added.
2. **What it is for: suppression.** With these numbers a moving rifleman at 50 m puts most rounds within a few metres of
   the man and few into him. The existing near-miss suppression does the rest: the target ducks, which is the point. No
   new suppression rule is needed; the plan measures that it happens.
3. **When a soldier does it (user ruling): only while moving on an attack, not while simply moving to a different
   cover.** In the shared soldier code that is a mover whose order is an attack movement: `Task::Advance`,
   `Task::BoundMove`, `Task::Flank` and `Task::ClearLane` toward the enemy for legacy and cognition, and the typed
   attack stages for drills (bound, attack move, rush, assault). It excludes `Action::Cover` movement to a shelter or a
   peek point, emergency shelter, `Task::Rally`, `Task::PullBack`, `Action::Retreat` and rear-guard movement. The enemy
   must be visible and inside walking-fire range (70 m for a rifle; see the review notes), and the friendly-fire check must pass with the
   wider cone. He still goes to ground when suppressed, exactly as now. Confirmed by the user ("keep the flank quiet"): a
   `Task::Flank` leg holds its fire until the soldier is fired on or is within 30 m of a visible enemy, so a flank is
   not announced by its own shooting from far away.
4. **The machine gun (user ruling): the existing gun may do walking fire, with heavy penalties.** The gunner fires from
   the hip while walking on an attack movement: spread x5, sway x6, recoil kick x2 with recovery at a quarter of the
   stationary rate, bursts cut to 4 to 6 rounds with the normal pause between them, 60 % of his movement pace rather than 80 %
   (the weight), range 40 m, no reload on the move. A gun ordered to support from a position (`Overwatch`, support by
   fire) still sets up and fires stationary as now: walking fire is what it does when it has to move in the attack, not
   a replacement for the base of fire.
5. **Friendly fire.** `FriendlyFireRisk` is evaluated with the moving spread, so a moving shooter holds fire more often
   near his own men. The friendly-fire guard of the loop stays as it is.
6. **Determinism.** No new random draws per shot; the draw order per shot is unchanged. More shots are fired, so every
   digest moves.

## Verification

- `--stats` group: a moving shooter's aim time, spread, sway and recoil against the stationary values, from the table;
  no shot while sprinting; no reload while moving; no fire from a man who is only moving to another cover; the machine
  gun's heavier walking-fire values and short bursts; a Flank leg silent until fired on or within 30 m.
- A new selector pair (mechanism, not outcome): one rifleman crossing 40 m of open ground toward a covered position with
  one enemy in cover at 45 m. With fire on the move the enemy's suppression is above the duck threshold for most of the
  crossing and the mover is hit less often than the silent control; the halting control ("stop and shoot") takes longer
  exposed. Fixed seeds, several repetitions, reported as counts.
- Full Linux suite, Python tests, Unreal compile (UE 5.4 here). The Unreal visual layer needs an upper-body firing pose
  while the legs walk; without it the shot effects simply play on a walking soldier. That is Astra's visual work and does
  not block the simulation.
- Re-baseline as on 19 September 2026 for the stutter fix (`.local/plan018/rebaseline.py`): archive and regenerate the
  40 authored references, 40/40 parity, 3/3 drills trace parity with a determinism repeat, then re-root both loop
  lineages and carry the survivors forward. About an hour of machine time, no proposer tokens.
- Reported, not tuned: shots per battle, hits, friendly fire, the conduct measures (`contact_exposed_share` should fall,
  since men stop halting in the open), attack score of both roots before and after, and a side-by-side video of one
  battle for the user (`tools/battle_video.py`, shots are drawn).

## Risks

- Ammunition and noise: walking fire roughly doubles rounds fired in an advance. Magazines are tracked; resupply is not
  modelled, so nothing runs dry in a ten-minute battle, but shots per battle will rise sharply.
- Friendly fire rose in three earlier legacy proposals that made men more active. The wider-cone check is the mitigation;
  the loop's friendly-fire guard against the pre-change root is the measurement. If it fails, walking-fire range comes
  down before anything else changes.
- The mechanism selectors that are sensitive to timing at the 0.1 s level (D02, D07, D08, D17 already fail) may move
  again. They are reported, not repaired, as in plan 017.

## The user's rulings, 19 September 2026

1. **Machine gun:** "this machine gun can be used with walking fire with heavy penalties." No second weapon.
2. **Who does it:** "if the soldier is moving on an attack and not simply moving to a different cover."
3. **Pace:** 80 % of his movement pace while firing (the model has one pace, not a separate walk and sprint).
4. **Flanks stay quiet:** "keep the flank quiet yah": a flank leg holds its fire until fired on or within 30 m.

## Implementation notes (Opus agent, 19-20 September 2026)

Implemented as approved on source `9613abbd8e140498`; the worktree source is `ed82d9b349d21f81`.
Nothing is committed, promoted or re-baselined.

**What was built.** One table, `MovingFire` in `Sim/Weapons.h` (rifle and machine-gun rows in
`Weapons.cpp`, resolved into `WeaponStats::moving`), and one predicate,
`WalkingFire(soldier,time)` in `Sim/BattleSim.cpp`, built from `AttackMovementTask`,
`AttackMovement` and `FlankHoldsFire`. The four aim functions plus `DecayRecoil` and the bolt
cadence take a movement factor through `MovePenalty(factor,statScale) = 1 + (factor-1)/scale`
(dexterity for the handling terms, composure for the spread). The fire-control loop now admits a
shooter whose action is a movement action when `Config::movingFire` and the predicate hold, and it
requires the selected target to be visible, not an area, and inside the weapon's walking-fire range.
`UpdateAim` clamps the aim at the weapon's moving cap, which is also the new readiness threshold
(`AimReady`). The movement loop multiplies the pace by the weapon's `pace` while the flag is set.
`Soldier::movingFire` and `Soldier::reloadDeferred` are the new per-soldier state;
`Shot::movingFire` marks each round. `ChooseOrder` no longer returns the `ClearShot` halt for a
soldier on an attack movement with a visible enemy inside walking range. The whole section of
`docs/STATS_AND_WEAPONS.md` records the formulas.

**Deviations from the plan, and why.**

1. *Who counts as moving.* The plan says "action is Advance, Cover or Retreat and he displaced in
   the last tick". The user's later WHO ruling narrows this to attack movements, so `Action::Cover`
   is admitted only for a `Task::ClearLane` leg and `Action::Retreat` never. The displacement test
   was dropped: a mover whose path is blocked would otherwise fire with a stationary soldier's
   accuracy, which is a windfall, and the flag would flicker tick by tick. A man under an attack
   movement order pays the walking penalties whether or not he made ground this tick.
2. *Machine-gun aim time and cadence.* The plan gives the gun no aim-time or cadence row. It takes
   the rifle's x2.5 aim time and 0.5 cap (the same "no stable stance" reason) and a cadence factor
   of 1, because the cyclic rate is mechanical and the existing code never stat-modifies it. Its
   walking burst of 4 to 6 rounds replaces the standing three-round burst and keeps the same
   0.6 s pause. The length is `burstMin + (soldier id + bursts fired) % (burstMax-burstMin+1)`: a
   deterministic function of the shooter, because the plan forbids a new random draw.
3. *The quiet flank applies to walking fire only.* A flanker who has stopped and taken a firing
   position fires as before. Extending the silence to stationary fire would change behaviour that
   `--no-moving-fire` is supposed to restore exactly, and would put the rule outside the switch.
4. *Dead code removed.* The fire loop carried `if(s.action==Action::Advance||s.action==Action::Cover)
   spread += 0.030f;`, unreachable while only `Action::Fire` could shoot. It is deleted; the same
   effect now comes from the table, which otherwise would have been applied twice.
5. *Digest folding.* The two new soldier flags are folded into the gameplay digest only when one of
   them is true. An unconditional fold would change every historical digest even with the feature
   off, and the architect's proof that `--no-moving-fire` is a true off (it is, on all ten commands
   measured) would have been impossible.
6. *Float association.* `ShotSpread`, `VerticalSpread` and `DecayRecoil` were first rewritten with
   the movement factor in a different order of operations; that alone moved a `--no-moving-fire`
   digest away from the parent binary. They are now written so that the stationary path multiplies
   by exactly 1 and keeps its original association.
7. *Deferred reload.* The plan's "he finishes the rush first, or halts to reload" is implemented as
   a flag rather than by pushing `reloadUntil` forward, because `reloadUntil > time` means "he is
   reloading" to the cover, peek and drill code and would have halted him.

**Tests touched.**

- `Sim/CognitiveSim.cpp`, cognitive fixture variant 33 (the control of the reliability local-cover
  scenario): it silenced forward rifleman 2 only, and its premise is that no forward rifleman can
  deliver covering fire. With walking fire another forward mover (soldier 4) delivered rounds and
  was selected as local cover, so `assert(!assigned)` failed at `tests/reliability_tests.h:414`.
  Judged a fixture premise and restated: every mover (1, 2, 3, 4) is silenced. The scenario then
  passes and `--reliability` fails exactly where it failed before, on reconnaissance.
- `tests/reliability_tests.h`: the local-cover diagnostic line now prints the selected source
  soldier. No assertion changed.
- New: `tests/moving_fire_tests.h` (selector `--moving-fire`, also run by the default suite) and
  `MovingFireValueTests` / `MovingFireRuleTests` in `tests/stats_tests.h`.

**Measured, not tuned.** With the plan's starting values the feature is rare on the loop's town
attacks: on maps 22, 27, 33 and 36 at seed 107, legacy fires 2 to 6 rounds on the move in a
ten-minute battle and drills none at all, because an attacker who can see a defender inside 50 m is
almost always already stopped. The evidence and the whole-battle table are in the agent's report;
the first parameters to question are the walking-fire range and the requirement that the target be
visible this instant rather than seen in the last second or two.

## Architect's review, 20 September 2026

The Opus implementation was reviewed line by line and kept, with two changes made after measuring it on legacy town
attacks, where it had almost never fired (2 to 6 rounds on the move in a 600 s battle):
- **Range 70 m for the rifle and 60 m for the gun** instead of 50 m and 40 m. On `city-36`, of the seconds an advancing
  attacker has an enemy in view, 81 % are at 50 to 80 m: the rifle's sight is 70 m and that is where a town fight is
  joined. The range was the architect's starting value, not a user ruling.
- **The target may be a man seen within the last two seconds**, not only one visible this instant: the halted rifleman
  already fires on that memory, and keeping down a defender who has just ducked is what walking fire is for.
- **The drills bound.** The implementation recognised attack movement by soldier task only, and a drills bound's
  moving element carries an Overwatch/Occupy order, so drills never fired on the move (157 s of drills soldiers moving with
  an enemy in view on `city-36`, none eligible; the three drills trace-parity digests had not moved). The order now
  carries `ExecutionContract::attackMove` for the moving element of a `Bound` stage (`DrillOrders`), and
  `AttackMovement` accepts it. Two fixture assertions in `tests/moving_fire_tests.h` were restated for the sample in
  which an order changes or the magazine empties after the firing stage.
After the first two, four legacy attacks fire 10 to 55 rounds on the move each, with one hit in 115: a suppression weapon, as
designed. More than half of the remaining opportunities are flank legs, which stay quiet by the user's ruling, and an
`Advance` man who is seen in the open goes to cover as before (user ruling: no fire while moving to cover). Whole-battle
on/off differences on single battles are chaotic divergence, not the feature's effect; the loop's paired suites on the
re-rooted lineages are the measurement. The crossing fixture does not show a suppression benefit on its own (defenders
suppressed 470 s with fire on the move against 463 s without, attackers hit 62 against 58, three seeds): reported, not
tuned. Final source `24e7fba35634d590`: full Linux suite, `--stats`, `--moving-fire` and the Python tests pass; 40 references archived
to `.local/baselines-pre019/moving-fire/` and regenerated, 40/40 parity, 3/3 drills trace parity with a determinism
repeat; the Unreal module compiles on UE 5.4 (no walking-fire animation yet: the shot plays on a walking soldier).
