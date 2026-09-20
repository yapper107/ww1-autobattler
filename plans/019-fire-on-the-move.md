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
   | Pace while firing | 1.9 m/s walk, sprint in rushes | **80 % of a walk (user ruling)**, never while sprinting | walking fire |

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
   must be visible and inside walking-fire range (50 m for a rifle), and the friendly-fire check must pass with the
   wider cone. He still goes to ground when suppressed, exactly as now. Confirmed by the user ("keep the flank quiet"): a
   `Task::Flank` leg holds its fire until the soldier is fired on or is within 30 m of a visible enemy, so a flank is
   not announced by its own shooting from far away.
4. **The machine gun (user ruling): the existing gun may do walking fire, with heavy penalties.** The gunner fires from
   the hip while walking on an attack movement: spread x5, sway x6, recoil kick x2 with recovery at a quarter of the
   stationary rate, bursts cut to 4 to 6 rounds with the normal pause between them, 60 % of a walk rather than 80 %
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
3. **Pace:** 80 % of a walk while firing.
4. **Flanks stay quiet:** "keep the flank quiet yah": a flank leg holds its fire until fired on or within 30 m.
