# Plan 023 and character integration — 21 September 2026

Main combines Plan 023 (`16592ff`, from `plan-018-static-defence`) with the
art handoff (`b53cdbf`, from `codex/unreal-character-animations`). The simulation
files remain byte-for-byte identical to Plan 023, fingerprint `45da1e25dd1aa9e7`.
Existing controller selection and defaults are preserved. The user explicitly
requested this merge and excluded Fable review for visual work; no visual Fable
consultation or approval is claimed.

## Integrated artwork

The actual 183.6 cm Tripo male replaces the earlier female-derived proxy. He has
his own 67-bone Blender rig (68 bones after FBX import), five-finger hands, and
49 retargeted animation clips. The 170 cm female retains her approved grip-C rig.
Both use the refined machine gun and body-specific baked MG grip poses. Weapon
size is constant between bodies. A rigid carrier adjustment fits both arm reaches
before IK, including reloads, without stretching limbs or moving locomotion hips
and feet.

The male Azure coat, collar/cuffs, helmet and trousers use the female's exact
palette. The source atlas preserves skin, markings and equipment. Ember has a
corresponding atlas and runtime coat tint. Atlas mipmaps are disabled to preserve
the isolated per-triangle color tiles. These are matte low-poly assets.

The new male coat uses a skinned thigh-panel fallback. Blender cloth simulation
is retained in the authoring scene; Chaos cloth, cloth collisions and seekable
cloth physics are still unimplemented. Reload/bolt handling remains procedural,
weapon drops follow authored tracks, and there is no terrain foot IK or ragdoll.

## Arcane rounds

`ArcaneProjectileVisual` replaces the HUD streak and old faceted muzzle flash.
Each shot opens a small double-ring sigil with six glyphs at the visible barrel,
then shows a pale faction-colored core, a tapered trail and orbiting accents.
Terminal contact produces a small expanding ring and seven sparks. Azure uses
blue/cyan; Ember uses orange. Material emission is unlit and depth-tested.

Flight and impacts sample the recorded simulation path and contact times. The
barrel offset blends into that path over the first metre, leaving the terminal
contact exact. Over-penetration gets smaller intermediate contact bursts; leaving
the map or ending without a contact does not invent an impact. No homing, speed,
damage, ammunition or hit-policy changes accompany the effect.

Effects are sampled at replay time and use pooled mesh instances, so pause,
rewind and speed changes cannot accumulate stale particles. The pool also avoids
recreating rendering proxies every frame, which suppressed transient draws in
UE 5.8. The nine-second preview runs at 0.1x so each phase can be inspected.

## Reproduction

Committed FBXs and Unreal assets require Git LFS. `scripts/build.sh` syncs the
character/effect assets and authoring inputs into the configured Windows mirror.
It builds the native module with unity disabled because separately owned Sim
translation units contain colliding private helper names in UE 5.8 unity builds.

To regenerate the integrated assets:

1. Load `art/characters/gunners_v02/Azure_Gunners_Hands_Cloth_v02.blend` in Blender
   5.2 and run `tools/character/match_uniform_palette.py`. This also writes both
   runtime male atlases.
2. Load `art/characters/female_rifle/approved_grip_C.blend` and run
   `tools/character/export_actual_male.py` to bake the male mesh and 49 clips.
3. Load the combined gunner blend again and run
   `tools/character/export_runtime_gunners.py`. Pose exports retain the canonical
   runtime armature names and a 61-frame constant pose at 60 fps.
4. Sync/build, then run UnrealEditor-Cmd on the mirror with
   `-run=pythonscript -script=<mirror>/Tools/character/import_runtime_art.py
   -unattended -nullrhi`. Use forward slashes in Windows script paths. This
   imports the male, gunners and effects; the committed female base must exist.
   The FBX tasks explicitly use `FbxFactory` to retain the expected root mapping.
5. Copy the mirror's `Content/Characters` and `Content/Effects` back to the repo
   before another build sync. Do not overwrite a user's unsaved editor changes.

## Verification and viewing

- Full Linux suite passes, including Plan 023 stages A–E; 126 Python tests pass.
- Portable locomotion tests pass 4,356 states. Handling tests cover reload,
  bolt/automatic distinction, death/sprint priority, live Plan 022 stamina fields,
  fallback fields and 2,000 seeks.
- UE 5.8 Win64 Development builds successfully. A complete importer rerun succeeds
  and verifies all 49 male clip durations.
- Native handling sweep passes 1,588 evaluations for each of four body/weapon
  variants, 6,352 total. Maximum wrist error rounds to 0.00000 cm; muzzle error is
  below 0.00003 cm. Lower-body preservation, rewind equality and death/drop
  checks pass, including after the complete asset reimport.
- A 120-second battle passes 640 sampled character states, 24 exact shot events
  (12 rifle, 12 MG), and movement/pause/seek/rate invariance: 601 frames, 935 shots.
- Projectile checks pass birth, faction selection, recorded flight position,
  contact, expiry, rewind, over-penetration, no false impact and empty-flight cases.
- Actual rendered lineup, rune/flight and impact frames were inspected. Numeric
  pose tests are not a substitute for the user's art judgement.

Commands for the configured mirror:

```sh
scripts/launch.sh -ArmyHandlingReview -unattended -d3d11
scripts/launch.sh -ArmyCharacterBattleTest -unattended -d3d11
scripts/launch.sh -ArmyProjectileTest -unattended -nullrhi
scripts/launch.sh -ArmyArtShowcase -ArmyArtCapture -unattended -d3d11
scripts/launch.sh -ArmyMagicShowcase -ArmyArtCapture -unattended -d3d11
```

The magic capture writes 270 30-fps frames to `Saved/Screenshots/MagicShowcase`.
Encode `magic-%04d.png` with H.264/yuv420p and faststart. The committed
[video](../art/effects/arcane_rounds/arcane-rounds.mp4) and
[evidence](../art/effects/arcane_rounds/evidence/) preserve the result. Initial
failed import/render diagnostics remain locally in `.local/integration023/`.
