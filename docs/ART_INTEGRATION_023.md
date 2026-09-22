# Plan 023 and character integration — 21 September 2026

Main combines Plan 023 (`16592ff`, from `plan-018-static-defence`) with the
art handoff (`b53cdbf`, from `codex/unreal-character-animations`). The simulation
files remain byte-for-byte identical to Plan 023, fingerprint `45da1e25dd1aa9e7`.
The latest AI is the Legacy tree's Plan 023 Stage E, node `80dfe8feb994faf2`;
Drills is the separate older controller. Existing selection/defaults are preserved. The user explicitly
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
then shows a saturated faction-colored core, a tapered trail and orbiting accents.
Terminal contact produces a small expanding ring and seven sparks. Azure uses
royal blue; Ember uses orange. Material emission is unlit and depth-tested. The core uses the saturated faction color throughout instead of a white mix;
the core, halo and trail use premultiplied alpha with responsive anti-aliasing.
This preserves faction color against the terrain instead of adding its color to
the background, and keeps moving details from being averaged away. Per the user's correction,
bullet sizes remain at the original values, with no zoom-dependent enlargement.

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
scripts/launch.sh -ArmyLegacy  # the playable demo with the latest Stage E AI
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

## Runtime visibility repair — 22 September 2026

The slowed synthetic preview did not establish visibility during ordinary play.
A real Legacy seed-107 battle was captured through the ordinary orthographic
camera, first paused inside a recorded flight, then sampled at 60 fps / 1x.
The original additive material produced a pale moving core with almost no trail
against the terrain. Premultiplied alpha plus responsive AA preserves the orange
and blue flight effects in the real battle captures. Bullet radii, trail length,
widths, flight speed and hit times are unchanged. These remain tiny at map-wide
zoom; the evidence is at the specified close zoom, not a claim of pixel visibility
at every camera scale or that every sub-frame flight is displayed.

The runtime muzzle correction now starts at `flight.front().position` rather than
`Shot.start` (the soldier's ground position). A native regression case uses the
actual elevated-muzzle/ground-start record convention. All projectile contracts,
including this case, pass on UE 5.8; the native build succeeds. Simulation sources
are still byte-identical to `16592ff`.

Reproduce real flight captures with:

```sh
scripts/launch.sh -ArmyLegacy -ArmySeed=107 -ArmyProjectileCapture -ArmyProjectileTeam=0 -d3d11
# Team 1 selects an Ember round. Optional -ArmyProjectileZoom=.025 sets close zoom.
```

`Saved/Screenshots/ProjectileBattle/battle-0000.png` is the paused flight.
Frames 0001–0120 are the next two seconds at 60 fps / 1x, including the selected
shot, through the ordinary game presentation. Encode those at 60 fps, excluding
frame 0000. Capture logs record replay time and live projectile counts. The
synthetic 0.1x design preview remains separate evidence of the original design.
Material options are documented in Epic's [Material API](https://dev.epicgames.com/documentation/en-us/unreal-engine/python-api/class/Material?application_version=5.7).
