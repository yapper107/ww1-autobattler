# Character animation and arcane projectile presentation

Main includes Plan 023 and the actual male/female artwork. See the
[current integration report](ART_INTEGRATION_023.md) for exact source revisions,
new asset reproduction, tests, projectile design and remaining limits.

The female uses the approved 170 cm grip-C rig. The actual 183.6 cm Tripo male
has his own rig and 49 retargeted clips; the former male proxy is an archived
asset. Both bodies support rifle and refined MG handling, with body-specific MG
aim poses and matching Azure/Ember uniform palettes. Weapon size stays constant.

`BattleGameMode` constructs a compact visual timeline from recorded positions,
facing, stance, aim state, and the first out-of-action snapshot. Simulation owns
movement; animations are in place and cannot move a soldier or change a shot.

The native `USoldierAnimInstance` evaluates the requested clips at explicit times
and uses Unreal's pose blending and two-bone IK. This is a native animation graph,
not a generated Animation Blueprint asset. Its selector is small and independently
testable in `CharacterBlend.h`.

## Selection and blending

1. Derive actual horizontal velocity from adjacent snapshots. Convert it into
   forward/right speed relative to the soldier's facing. An advance order alone
   does not mean a soldier is walking: a blocked soldier plays idle.
2. Blend idle into eight-direction walking; blend walk/run/sprint using the source
   clips' measured travel speeds (about 1.76 / 4.39 / 6.58 m/s). Crouching uses its
   own eight-direction clips, around 1.86 m/s. Adjacent direction sectors blend
   cyclically, including the wrap behind the character.
3. Smooth velocity and aim over 0.12 s and stance over 0.18 s. Integrate a shared
   movement phase using speed, each clip's stride distance and blend weight. The
   left-foot swing peaks are aligned across the source clips. This reduces phase
   cancellation; it is not foot locking or terrain foot IK.
4. Blend a standing upper-body aim/handling pose over spine descendants while
   retaining locomotion hips and legs. Sample procedural weapon/hand keys for recoil,
   bolt lift/pull/push/lock and reload from explicit battle time. Then correct both
   arms after blending using the independent weapon-relative grip
   bones. Elbows preserve the authored bend side; limbs never stretch. These
   control bones are explicitly kept in Unreal's required-bone set.
5. Out-of-action takes priority, blends into standing/crouching fall over 0.15 s,
   plays once and holds the final pose. Hands release by 11/60 s. The rifle then
   follows the separately baked `Weapon_Free` drop track. Both wounded and killed
   currently use the fall presentation; their simulation states remain distinct.
6. Every pose is sampled from battle time. Pause, replay speed changes and arbitrary
   seeks do not restart loops or leave weapon physics in a different state.

This follows the speed/direction principle in Epic's
[locomotion blending guide](https://dev.epicgames.com/documentation/unreal-engine/locomotion-based-blending-in-unreal-engine),
with explicit sampling added for this project's seekable replay.

## Review in game

Build and launch using this branch's own `.local/paths.env` and dedicated Windows
mirror. `bash scripts/build.sh` copies the imported character Content and source
FBXs. `bash scripts/launch.sh` starts the branch build.

- Select a soldier, press **C** to center, and scroll closer; the close zoom now
  permits character inspection. Q/E orbit and Page Up/Down adjust elevation.
- **V** toggles the selected character's clip names, blend weights, speed, stance
  weight and wrist error. Normal play does not show these implementation details.
- Pause, step, seek and change replay speed with the existing controls.
- `-ArmyArtShowcase` displays a labeled, fixed-camera lineup in this order:
  male MG, female rifle, female MG, male rifle. Add `-ArmyArtRifle` for a close-up
  of standing aim, fire/recoil, bolt cycle, and reload at 1x then 0.5x speed.
  These preview modes use the production character presentation without a battle.
- Add `-ArmyArtCapture` to either showcase to save `lineup.png` or 720 exact-time
  frames under `Saved/Screenshots/ArtShowcase`, then exit. Run
  `tools/character/encode_showcase.sh <frame-directory> <output-directory>` for a
  24-second H.264 video and an animated GIF. Capture waits for screenshot processing;
  the result's timing does not depend on the speed of the computer.
- `-ArmyHandlingReview` shows female/male rifle and MG variants, standing handling
  followed by moving handling. It writes a four-variant native validation report
  and three screenshots, then exits.
- `-ArmyCharacterDemo` opens a 120 s battle paused close to a moving male rifle unit.
- `-ArmyGreybox` selects the previous cylinder presentation for comparison.
- `-ArmyCharacterReview -unattended -d3d11` runs clip/blend/attachment checks and
  captures a close lineup, then exits.
- `-ArmyCharacterBattleTest -unattended -d3d11` runs a 120 s actual battle, checks
  sampled poses and seeking/rate invariance, captures it and exits.

## Historical base-asset reproduction

For the current male, MG and effects, follow [the integration report](ART_INTEGRATION_023.md).
The steps below describe the earlier female/proxy export and should not replace the current male.

Git LFS is required for `.fbx`, `.blend` and `Unreal/Content/**`. The approved source
blend and source inventory are in `art/characters/female_rifle`; original user
files were preserved. No Mixamo account access is needed to reproduce these exports.

1. Run Blender 5.2 in background with `approved_grip_C.blend`, then
   `tools/character/export_blender.py -- <output-dir> <source_inventory.json>`.
   It bakes evaluated constraints into 55 explicit bones, disables Blender cloth,
   and exports only the chosen body/coat, separate rifle and 49 actions.
2. Run `measure_phases.py -- <output-dir>` against the same approved blend to add
   locomotion phase offsets to `manifest.json`.
3. Run `export_variants.py -- <output-dir> <approved_machine_gun.blend>` with
   `approved_grip_C.blend` loaded to export the compatible male and weapon parts.
   Then copy outputs into `art/characters/female_rifle`, run `generate_clips.py`, then
   build the branch. Its mirror receives `Art/female_rifle` and `Tools/character`.
4. Run UnrealEditor-Cmd against the mirror project with
   `-run=pythonscript -script=<mirror>/Tools/character/import_unreal.py -unattended -nullrhi`.
   Copy the generated `Content/Characters` back to `Unreal/Content/Characters`.
   The importer asserts all animation durations and creates explicit matte palette
   materials with skeletal-mesh usage enabled.

Use standard FBX scene conversion, **not Force Front X Axis**. The native mesh
component rotates the imported +Y forward to game +X. Changing FBX axis conventions
requires recreating the generated skeleton/mesh/animations together, not simply
reimporting the mesh against an old bind pose. Static rifle scale is unity because
its vertices are already centimetres; the FBX skeleton retains its unit scale.

## Deliberate first-pass limits

- The pack contains no firing, bolt-cycle or reload clips. These actions are now
  authored procedural standing hand/weapon curves in `WeaponHandling.h`, layered
  over locomotion. They are prototype gestures, not finished hand/finger mocap.
  The rifle uses a separate blockout bolt and eight-round reload prop; the machine
  gun moves its detachable ammunition box. Belt feeding and individual cartridge
  ejection are not animated.
- Shot events use exact `Record.shots` times, including 10 Hz MG bursts between
  snapshots. Reload intervals use recorded end time and the soldier's dexterity.
  A rune, missile and impact burst follow that exact shot clock.
  Simulation owns shots, ammunition and hits; animation cannot change them.
- `movingFire` lowers a firing MG to hip height. `coveredPath` raises a ready pose
  without forcing crouch or changing movement speed. Plan 022 sprint/winded/stamina fields are live on the integrated base; the
  field-detecting adapter also retains its earlier fallback tests. Sprint suppresses handling; winded adds mild breathing.
- Zoom minimum is .003 (previously .01). A shadowless ambient skylight and shallower
  fill light expose the face below the helmet while retaining the main sun shadows.
- Turn and jump clips are imported for inspection, but not auto-triggered: the current
  simulation has no airborne state, and turning clips need turn-in-place thresholds
  and root-yaw handling. Facing currently follows the recorded orientation.
- The lower coat is skinned in this branch. The separate Chaos cloth experiment has
  not been migrated or crowd-performance qualified here.
- Weapon drops use the authored flat-floor track, not Unreal rigid-body collisions
  against buildings or corpses. There is no ragdoll, terrain foot placement or
  elevation aim offset yet. Projectile origins now follow the sampled visible muzzle.
- The two bodies have separate fitted rigs. Rank/accessory variants remain art work.

## Historical verification

Current UE 5.8 and Plan 023 checks are recorded in [the integration report](ART_INTEGRATION_023.md).


The updated handling branch compiles on UE 5.4 Win64. The four-variant sweep runs
1,588 poses per variant (6,352 total), including standing/crouched/walking handling.
Maximum wrist-to-target gap is 0.3294 cm; every variant holds its final death pose,
follows its drop track and restores an identical pose after seeking. A separate
check compares hips and both feet with the standing overlay enabled/disabled.
The 120-second seed-107 battle checks 640 character poses and 24 exact shot events
(12 rifle, 12 MG); rewind, pause and speed changes restore the same pose.
Portable handling tests cover bolt vs automatic fire, reload/death/sprint priority,
2,000 arbitrary seeks, dexterity-scaled reload timing, and both absent/present
plan-022 fields. `handling-*` evidence files contain the current results.

The following paragraph records the **earlier rifle-only checkpoint**:


Run `g++ -std=c++17 -Wall -Wextra -Werror -IUnreal/Source/ArmyPrototype
 tests/presentation/character_blend.cpp -o /tmp/character-blend-test` then the binary.
It covers 4,356 direction/speed/stance combinations, cardinal clips, source pacing,
death priority, clip-end holding and deterministic sampling.

Verified on Unreal 5.4 / Win64 Development (the repository continues to declare
5.8; build.sh adapts only the local mirror). Import checked 49 clip durations. The
native pose sweep evaluated 868 poses, with maximum wrist-target distance 0.7303 cm;
rifle crystal/muzzle alignment was within 0.00001 cm. Death held its final pose,
and the released weapon followed the baked drop track. The actual 120 s seed 107
battle produced 601 snapshots and 625 shots; 620 sampled character states were
finite, and advancing time changed the pose while rewind/pause/rate changes
restored it exactly. These are prototype checks, not a crowd performance benchmark
or a packaged-build certification.

Native results and screenshots are in
[`art/characters/female_rifle/evidence`](../art/characters/female_rifle/evidence).
The configured Fable helper at `/home/jchan/.local/share/astra-fable/fable_architect.py`
was unavailable (file absent); no independent Fable review is claimed.

At the earlier rifle-only checkpoint, the broader `-ArmySmokeTest` reached stage 22, then fails its passage-traffic
fixture: that seed had no active soldier with `waitingPassage >= 0` and more than
0.5 s waiting. The same build with `-ArmyGreybox` failed the identical assertion.
All six recorded outputs (events, geometry, paths, routes, shots, full trace) are
SHA-256 identical across character and greybox runs: 360 s, 1,801 snapshots,
2,434 shots, gameplay digest `6400855589235533992`. Earlier smoke stages, including
crouch, zoom, upstairs/ground-floor fire and command inspections, completed.
This smoke suite is **not** reported as passing. No simulation/fixture change was
made to conceal it; comparison evidence is in `evidence/smoke-comparison.json`.
