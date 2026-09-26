# Plan 032 — Using the pin: closing in, and grenades (draft for Jordan's rulings)

Drafted 25 September 2026 by the overseer (claude-opus-5-5); **Jordan's rulings in section 8** (same day). Every
change is a switch, off by default, measured with the lean feature test. The setting is WWII-era (1930s–1960s
technology plus magic), not WWI: the references below are WWII grenades.

## 1. What Jordan asked

"Lets have the soldiers make use of the pin, we should have them close in on pinned enemies, and they should also
be able to utilize grenades. 1-2 per soldier for now. However, i want to get into detail on how explosions, and in
this case grenades will work. I was thinking of a concussive and shrapnel based grenade randomly given. However the
specifics of how to calculate grenade effects i want to go in depth with."

Why it matters (plan 031): a pin both stops the enemy firing and hides him, and Legacy never uses it. A man behind
cover cannot be shot; a grenade reaches him. Closing in while his head is down, then throwing, is what turns
covering fire into kills.

## 2. The explosion model

Every explosion is one event (position, charge, casing, fragment table). When the fuse runs out it is evaluated
once, for every soldier within 40 m, in three parts: blast, fragments, fright. Nothing is simulated per fragment.

### 2.1 Blast (overpressure)

- **Peak overpressure** from the scaled distance `Z = R / W^(1/3)` (R in m, W the TNT-equivalent charge in kg; a burst
  on the ground reflects, so `W × 1.8`): `ΔP [kPa] = 1772/Z³ − 114/Z² + 108/Z` (Mills 1987; within 10–20% of the
  Kingery–Bulmash curves over this range).
- **Cover.** Blast bends round obstacles. If solid cover stands between the burst and every point of his body, his
  ΔP × 0.4. (Proposed; fragments, below, are blocked outright.)
- **Rooms.** A burst inside a building room reflects off the walls: everyone in the same room takes ΔP × 2.5. This
  is what makes the concussion grenade the room-clearing weapon.
- **What overpressure does** (for a grenade's millisecond pulse; human thresholds after Bowen and Richmond):

| ΔP | Effect |
|---|---|
| ≥ 500 kPa | killed or incapacitated (blast lung) |
| 150–500 kPa | blast injury: `100 × (ΔP − 150) / 350` health |
| ≥ 50 kPa | stunned: cannot fire or start a move for `2 + 6 × min(1, (ΔP − 50)/150)` s ÷ StatScale(Composure); he drops down; then pinned (suppression 1) |
| ≥ 35 kPa | deafened for 30 s: his reactions are 1.5× slower (he hears no calls) |
| ≥ 5 kPa | fright: suppression `+ min(1, ΔP / 40)` (pins him at about 25 kPa) |

### 2.2 Fragments (shrapnel)

- **Speed at the burst** (Gurney, sphere): `v0 = 2440 / √(M/C + 0.6)` m/s, M the casing mass, C the charge.
- **Slowing in air:** `v(R) = v0 × e^(−R/λ)`, `λ = 338 × m^(1/3)` m (m in kg; a tumbling steel fragment):
  27 m for a 0.5 g fragment, 39 m for 1.5 g, 54 m for 4 g.
- **Spread:** a ground burst throws its N fragments over a hemisphere: `N / (2π R²)` per m² at distance R.
- **Expected hits on a man** = that density × his presented area × the share of his body the burst can see.
  Presented area: standing 0.55 m², crouched 0.35 m², prone 0.15 m² (a prone man meets only the low fragments). The
  share seen uses the 9 body points perception already uses; solid cover blocks a fragment, a hedge does not.
- **Hits** are drawn as Poisson(expected hits). Each hit draws its size class and does the existing bullet damage,
  `HitDamage(½ m v², severity)`. A fragment wound is therefore on the same scale as a rifle wound (a rifle hit is
  about 41 health; a 4 g fragment at 5 m about 33, a 0.5 g one about 3.5).
- **No flight simulation** for fragments (cost). The renderer can later show a handful of visual ones.

### 2.3 The two grenades

| | Fragmentation ("defensive") | Concussion ("offensive") |
|---|---|---|
| WWII analogues | US Mk 2, Soviet F-1, British No. 36M | US Mk 3 "offensive", German M24 stick, British No. 69 |
| Charge / casing | 70 g / 550 g cast iron | 170 g / 100 g thin can or fibre |
| Fragments | 200: 50% 0.5 g, 35% 1.5 g, 15% 4 g, at 840 m/s | 30 × 0.5 g at 2,240 m/s |
| Kills (blast) | inside ~1 m | inside ~1.2 m |
| Stuns | inside ~2 m | inside ~3 m (about 8 m in a room) |
| Wounds (fragments, standing) | ~50% at 5 m, ~25% at 8 m, ~10% at 12 m | ~50% at 2 m, ~10% at 5 m |
| Doctrine | thrown from cover: stray fragments reach 20–30 m | thrown while advancing: safe beyond ~5–8 m |

Per distance, open ground, a standing man (expected hits and damage from the existing damage model):

| Distance | Frag: blast kPa | Frag: hits (P ≥ 1) | Frag: damage | Frag: prone hits | Conc: blast kPa | Conc: hits (P ≥ 1) | Conc: damage |
|---|---|---|---|---|---|---|---|
| 1 m | 249 (injury, stun) | 17.5 (100%) | 207 | 4.8 | 563 (lethal) | 2.6 (93%) | 87 |
| 2 m | 48 (deafened) | 4.4 (99%) | 55 | 1.2 | 91 (stun) | 0.7 (48%) | 20 |
| 3 m | 23 (fright) | 1.9 (86%) | 23 | 0.5 | 39 (deafened) | 0.3 (25%) | 8 |
| 5 m | 11 | 0.7 (50%) | 8 | 0.2 | 17 (fright) | 0.1 (10%) | 3 |
| 8 m | 7 | 0.3 (24%) | 3 | 0.07 | 9 | 0.04 (4%) | 1 |
| 12 m | 4 | 0.12 (11%) | 1 | 0.03 | 6 | 0.02 (2%) | 0.3 |
| 20 m | 3 | 0.04 (4%) | 0.2 | 0.01 | 4 | 0.01 (1%) | 0.1 |

### 2.4 Throwing and the fuse

- **Range:** 30 m standing × StatScale(Strength); 24 m kneeling; 12 m prone.
- **Arc:** a 40° lob. It must clear the obstacles on the way (checked every metre against the map); a grenade that
  strikes an obstacle drops at its foot, on the thrower's side if it bounced back.
- **Accuracy:** landing scatter `σ = (0.5 m + 0.08 × distance) / StatScale(Dexterity) × (1 + suppression)`, about
  1.4 m at 15 m and 2.1 m at 20 m.
- **Roll:** 0–2 m on along the throw (a stick grenade 0–1 m), stopped by obstacles; it can drop into a trench or
  crater.
- **Fuse:** 4.5 ± 0.5 s from release. A steady man cooks it 0–1.5 s (Composure), so the enemy has about 2–3 s after
  it lands.
- **Exposure:** a throw takes about 1.5 s (pin, rise, throw); to throw over cover he stands or kneels, in view.
- **Duds:** 3% (proposed).

### 2.5 Issue ("randomly given")

Each soldier carries 1 or 2 grenades; each grenade is independently fragmentation or concussion. Proposed: 50/50
for both, drawn from the roster seed so a soldier's kit is stable across his battles.

## 3. Using the pin: closing in

- **"Pinned", as his side can know it:** a known enemy (a track) whose place our men have been firing on (they see
  their own rounds strike there) and who has not been seen firing for 3 s or more. Observer truth (his actual
  suppression) is never read.
- **The close-in:** the rifle group's leader sends a pair: the two riflemen with the best covered route. They go to
  a spot within throwing range (15–20 m) that has an arc onto the enemy's place. The rest of the squad, and the gun
  working the position (Stage G, keep-down), keep him down.
- **The throw and the rush:** at the spot, one man throws. Fragmentation if he is in cover and no friend is within
  15 m of the target; concussion if he is in the open or friends are close. The pair waits for the burst, then rushes
  the last metres and fires at close range. If the enemy is still up, the second man throws.
- **Breaking off:** if the enemy fires again (no longer pinned) the pair takes cover. No covered route: no close-in.
- **Defenders** throw at attackers within range whom they cannot shoot (in cover, or bunched), and at men closing in.
- **Reaction:** a man who sees a grenade land within about 5 m of him (his own sight, or a mate's shout) dives prone
  or runs to cover if he has a second or more. No throwing it back.

## 4. Knowledge boundary

Throw decisions read tracks, own sightings, own and squadmates' fire, and the map. A grenade in flight or on the
ground is seen like anything else: by line of sight within range. The explosion's effects are physics (like a round
in flight) and read true positions, as bullets do.

## 5. Implementation notes

- Explosion effects use a counter-based draw (SplitMix of battle seed, explosion id, soldier id), as graded peek
  does, so the battle's random stream is untouched when grenades are off: off stays byte-identical.
- A grenade in flight is simple ballistic state (position, velocity, fuse) with ground and obstacle contact.
- Switches: `--grenades both|azure|ember` (issue and use); constants in a table with CLI overrides for sweeps.
- Trace rows (traced runs only): throw decisions with their reasons; per explosion, each soldier's ΔP, expected and
  drawn hits, damage, stun.
- Unreal: the grenade in its arc and the explosion effect (an art task, after the simulation lands). Damage to
  geometry (craters, walls) is not in this plan; the geometry mutation interface is there for later.

## 6. Measurement (lean feature test)

- Fixtures: effects at fixed distances match the tables; cover blocks fragments; rooms amplify blast; off is
  byte-identical.
- Screen: meeting battles, one orientation, 30 maps × one seed, grenades and closing in for one side against none.
- Finalist: both orientations, attacks (the assault on buildings is where grenades should matter most), the
  confirmation set, then side-by-side videos.

## 7. Rulings needed from Jordan

1. **Blast:** physical overpressure (proposed), or simple fixed radii?
2. **Fragments:** the analytic spray (proposed), or simulated fragments (slower, prettier)?
3. **Concussion effects:** stun (cannot act for a few seconds), deafness, fright, and the ×2.5 in rooms? The
   thresholds in 2.1?
4. **Issue:** 1 or 2 per man at 50/50, and each grenade 50/50 fragmentation or concussion? Gunners too?
5. **Reactions:** may a man who sees a grenade land dive or run? (Proposed yes; no throw-backs.)
6. **Friendly fire and duds:** grenades hurt friends too (with the throwers' safety rules); 3% duds?
7. **The two grenades' numbers** (2.3): the charge, casing and fragment counts set the radii. Keep, or aim for
   particular radii instead?
8. **Setting:** keep grenades mundane for now. Later magical variants (an arcane concussion charge, say) can reuse the
   same model with other numbers.

## 8. Jordan's rulings (25 September 2026)

1. **Blast:** the physical overpressure model (2.1).
2. **Fragments: simulated flying fragments**, not the analytic spray. Each fragment is a ballistic projectile (the
   bullet machinery: swept flight, drag, cover, the body by stance, the energy damage model). Directions are uniform
   over the sphere from the burst point; those going down strike the ground. The per-distance tables in 2.3 become
   the expectation the fixtures check, not the mechanism.
3. **Concussion effects** as in 2.1: stun, deafness, fright, ×2.5 in rooms, and the thresholds.
4. **Issue:** 1 or 2 grenades per man at 50/50, each 50/50 fragmentation or concussion. **Gunners carry none.**
5. **Reactions:** a man who sees a grenade land near him dives or runs. **If he is close enough and has the stats,
   he may throw it back: a skill check** (reach, time left on the fuse, Dexterity, Initiative, Composure).
6. **Friendly fire: yes. No duds.**
7. **Tuning** (charges, casings, fragment counts, thresholds): to be workshopped later with Jordan; the numbers in
   2.3 stand until then, all run values.
8. **Mundane grenades** for now.

## 9. Revision 2 rulings (25 September 2026, afternoon)

Jordan: "get the 5m lethal radius for the fragment grenade, get the realistic lethality of the concussion grenade.
On the topic of concussion, it should throw the soldier a bit, calculate the real force the concussion emanates and
use physics to determine how far the soldier moves." Implemented as `.local/plan032/BRIEF-R2.md`:
- Blast from the Kingery–Bulmash surface-burst fits (Swisdak 1994): pressure, positive-phase duration, incident and
  reflected impulse. Primary-blast lethality from Bowen (1968, as fitted in LLNL-TR-468242) by orientation (standing,
  prone, next to a wall); eardrum rupture from Hirsch (1968).
- Knockback: net impulse A × (i_r − i) on the body (85 kg with kit), then ballistic flight, ground friction and
  obstacle impact (tertiary injury above 3 m/s); knocked down past the balance threshold.
- Fragments: a Mott population with mass conserved; skin penetration; hit location by stance; incapacitation per
  penetrating hit with one constant calibrated to a 50% out-of-action chance for a standing man in the open at 5 m.
  Bullets keep their damage model.
- **Rooms (Jordan: "roomers, yup"): pressure ×2.5 and positive-phase duration ×3.**
- **Concussion grenade = US Mk 3 (fibre body, no fragments)** by default after revision 2 showed the thin steel can
  putting 33% out of action at 5 m; the German M24 steel can stays as `concBody=steel`. Near-field blast lethality is
  made monotonic (closer is never safer).
- **Fragmentation safety (Jordan, 25 Sep: "I say make it safer"):** no friend within 15 m of the aim point; the thrower
  at least 20 m from it unless he is in cover shielded from it; men react to a fragmentation grenade landing within
  12 m. The concussion grenade keeps 4 m.


## 10. Result (25 September 2026): merged, off by default

Built by an Opus 5.5 agent (`GrenadeSim.h/.cpp`, `tests/grenade_tests.h`), merged with plan 033 by the overseer. The
Kingery–Bulmash fits now live once, in `BlastSim` (shared with the destruction model); the merged build equals the
module's own build digest for digest with grenades on (4/4 E-6 battles).

- **Switch:** `--grenades azure|ember|both` (battle_cli), `-ArmyGrenades[=azure|ember|both]` (the game); Legacy only;
  the table by `--grenade-param NAME=VALUE`. Off: byte-identical (40/40 lean parity, E-6 8/8 digests).
- **Calibration (fixtures, `sim_tests --grenades`):** E_v 137.9 J gives a standing man in the open at 5 m from a
  fragmentation grenade p 0.50 out of action (0.494 in the battle's physics over 6,000 men). Standing: 2 m 0.98,
  3 m 0.86, 8 m 0.22, 12 m 0.09, 20 m 0.025; prone: 2 m 0.80, 5 m 0.19, 8 m 0.07. Concussion (Mk 3, blast only):
  out of action within about 0.5 m standing in the open (survival 0.40 there), none from 0.75 m; stun 8 s within
  1 m, 5.8 s at 1.5 m, 3.2 s at 2 m; eardrum rupture 0.77 at 1.5 m, 0.28 at 2 m; knockback 0.98 m at 0.5 m (knocked
  down), 0.16 m at 1 m (knocked down), 0.05 m at 1.5 m; in a room at 1 m survival 0.0005.
- **In battle** (8 E-6 and seed-17 battles, both sides): 6–21 bursts, 0–4 casualties from them per battle.
- **With destruction on (plan 033):** each burst joins the world's explosion queue and loads the walls, windows and
  sheds near it (checked: every burst reaches the queue).
- **Game:** grenades in flight or at rest are drawn (olive for fragmentation, pale for the fibre concussion body),
  each burst gets a flash and smoke.
- **Screen (section 6, lean rule):** meeting battles, grenades and closing in for Azure against none, 30 E-6 maps ×
  seed 107 (`tools/covering/outcome.py`, arms `grenA@N` with `--grenades azure` and `gren0@N`): flat. Exchange +0.022
  [−0.072, +0.120], win share +0.10 [−0.05, +0.27], own lost −0.17 [−1.97, +1.60], enemy lost +0.53 [−1.00, +2.13];
  stopped there. The attack arm (the assault on buildings, where grenades should matter most) was not screened.
  The switch stays off.
