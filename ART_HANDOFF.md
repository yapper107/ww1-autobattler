# Integrated on main — 21 September 2026

The latest runtime now uses the actual male, the refined MG and body-specific
poses, with matching faction palettes and the arcane projectile effect.
[Current integration, reproduction and evidence](docs/ART_INTEGRATION_023.md)
supersedes the historical runtime boundary and next steps below. The coats are
skinned in-game; Blender cloth physics is still an authoring-only feature.

The remainder preserves the source-asset handoff before this integration.

# Character art handoff — 21 September 2026

Continue on **`codex/unreal-character-animations`**. The latest editable artwork
is `art/characters/gunners_v02/Azure_Gunners_Hands_Cloth_v02.blend`.
Start with its adjacent five-second MP4 and grip close-ups. This handoff includes
the actual Tripo male, female, machine gun, reference art, textures, source scenes,
FBXs, scripts, and verification evidence. No access to the original computer's
Pictures folder, Tripo account, or Mixamo login is needed to continue editing.

## Get this branch on another computer

Install Git LFS, Blender **5.2.x** (authored and checked with 5.2.2), and Python 3
for the command wrapper. From a terminal:

```sh
git clone --branch codex/unreal-character-animations https://github.com/yapper107/ww1-autobattler.git
cd ww1-autobattler
git lfs install
git lfs pull
git lfs fsck
```

For an existing checkout, fetch origin, switch to the branch, pull with
`--ff-only`, then run `git lfs pull`. Preserve any local work first. Do not use a
GitHub source ZIP as the asset transfer: Git LFS must materialize the binary assets.

Open the latest `.blend` directly. Its texture is packed and all scene objects
are local. Cloth is intentionally **unbaked** in the repository; bake locally
before reviewing its motion. The MP4 is available immediately.

## What we just finished

- The user rejected the earlier male made by broadening the female. The new male
  is the actual Tripo model from the supplied male concept/reference views,
  1.836 m tall versus the female's 1.70 m.
- Male geometry now has coat openings, a matte Azure texture, fitted Mixamo-style
  skeleton, and weighted five-finger hands. `Grip_Left` and `Grip_Right` custom
  properties control hand closure; separate weapon-relative targets and arm IK
  place the palms. The female retains her simpler original finger hierarchy.
- Male and female have separate cloth coat skirts, pinned at the waistband,
  with front/rear vents and leg/pelvis collision proxies.
- The machine gun keeps the low-poly staff/weapon design, narrow muzzle crystal,
  brass cases and blue tips. It has matte materials, aligned folded bipod legs,
  and is fitted to both bodies. The gun follows chest yaw without following the
  torso's downward crouch pitch.
- A shared showcase demonstrates standing aim, walking, crouching and return
  toward standing. Six short animation FBXs bake the evaluated grips; two
  skeletal meshes and a standalone static machine gun are also exported.

The user's latest visual approval has **not** been received. These are reviewable
prototypes. The previous desktop Blender connection stopped responding during
delivery; files were saved, but automatic switching of that viewport failed.

## Resume commands

Run from the repository root. If Blender is on PATH:

```sh
python tools/character/resume_art.py inspect
python tools/character/resume_art.py bake
python tools/character/resume_art.py check
python tools/character/resume_art.py export
python tools/character/resume_art.py verify
python tools/character/resume_art.py preview
```

Otherwise append `--blender "C:/Program Files/Blender Foundation/Blender 5.2/blender.exe"`
to each command on Windows (or supply the executable's path on your platform).
Run the wrapper with native Python for that platform; do not pass WSL filesystem
paths to a Windows Blender executable.

Generated scenes, caches, reports, FBXs and PNG frames default to
`.local/gunners_v02/`. Override with `--output <working-directory>` consistently
on each command. The wrapper prefers that working scene when it exists; otherwise
it opens the packaged source. `bake` saves a working scene before baking both
coats and rendering the review images. Open **that working scene** for playback.
`check` disables cloth only in its background session to measure wrist placement;
it does not save over the scene. `preview` requires a baked working scene.

To encode a new preview, with FFmpeg installed:

```sh
ffmpeg -framerate 30 -i .local/gunners_v02/preview_frames/%04d.png -c:v libx264 -crf 18 -pix_fmt yuv420p -movflags +faststart .local/gunners_v02/gunners.mp4
```

Use `build` only to reconstruct the gunner scene from its earlier male/female
inputs; it overwrites the generated working scene and does not retain subsequent
manual edits. It is unnecessary for continuing from the included combined scene.
All build inputs are now in this checkout, including the exact female source
revision used for the male fitting. The scene is 60 fps: 1–40 cloth settle,
61–100 standing aim, 121–240 walking, 271–330 crouch, then return toward standing.

## Asset map

| Location | Purpose |
| --- | --- |
| `art/characters/gunners_v02/` | Latest combined male/female source, refined gun, review video/images, six clips, skeletal/static FBXs, checks and scripts |
| `art/characters/gunners_v02/source_inputs/` | Exact female source used for the new male and gunner construction |
| `art/characters/male/tripo_candidate/` | Original Tripo library, coat repair, textured A-pose, fitted first rig, scripts and stage evidence |
| `art/characters/male/reference_candidates/` | A-pose and front/back/left/right generation references and prompts |
| `art/characters/female_rifle/` | Earlier approved grip C, all 49 prepared animation exports, older runtime prototype and its evidence |
| `art/characters/female_rifle/source/Pro_Rifle_Pack.zip` | Original user's 60 fps Mixamo download: 49 animations plus the uploaded character |
| `art/weapons/source_variants/` | Original Azure/Ember bolt-action rifle and machine-gun Blender libraries |
| `art/references/` | User's concept art plus final rifle, machine-gun and female Tripo input images/prompts |
| `tools/character/` | Portable resume wrapper and existing Unreal import/export tools |
| `docs/CHARACTER_ANIMATIONS.md` | Earlier Unreal implementation, controls, blending and validation |
| `art/transfer_sources.json` | Names, sizes and SHA-256 checksums for the additional local source files copied for this handoff |

Original project assets and the user's Mixamo download are included to continue
this game's development, not as a standalone animation library for redistribution.
Working caches, intermediate video frames, installers, machine configuration and
credentials are excluded. There is no need to transfer Blender MCP to open or
run these scripts; reconnect it separately if live remote editing is desired.

## Exact boundary between Blender and the game

The branch's existing Unreal integration is still the **earlier** female-derived
male proxy and weapon setup. The new Tripo male, five-finger rig, gunner clips,
refined MG and simulated coats have **not** replaced it. Do not mistake the older
`art/characters/female_rifle/SK_Male_Rifle.fbx` for the latest male.

Blender cloth does not become runtime cloth through FBX. New exported coats are
skinned rest meshes. Chaos cloth, physics/collision assets, crowd performance and
seekable replay behavior need separate Unreal integration. The new exports have
different bind poses/bone sets: male has 68 bones including `MG_Weapon`, female
56. Do not reimport them blindly onto the earlier shared skeleton. Retarget and
rebuild the appropriate animation/attachment assets together.

The existing game already has native locomotion blending and procedural standing
rifle aim/fire/recoil/bolt/reload, layered over locomotion, plus prototype MG
handling and death weapon drops. Those earlier features are not new male/gunner
validation. Keep simulation shot timing, movement and ammunition authoritative.

## Where to pick up next

1. Review the combined scene and hand close-ups with the user. Adjust fingers,
   shoulder contact or silhouette if requested; retain the low-poly look.
2. Extend the actual male and MG grips beyond the three checked poses: run/sprint,
   directional/crouched movement, aim/fire, reload, bolt handling for the rifle,
   and death/release. Integrate the actual male with the rifle as well. Existing
   clips can be retargeted, but are not certified on the modified male bind pose.
3. Import the approved replacements into Unreal on this art branch. Update the
   skeleton/retargeting and weapon attachment mapping, then verify blending and
   the standing handling layer with movement. Maintain Azure/Ember palettes;
   the latest combined source is Azure only.
4. Author Unreal cloth and collisions; assess performance with a crowd and define
   behavior for pause/seek/replay. Re-run in-game pose/handling checks and inspect
   actual battles after integration.
5. Before merging new simulation work, compare this branch with current
   `plan-018-static-defence`. Its art base is `c34bf68`, from before subsequent
   plan-022/AI work. The old runtime adapter has synthetic tests for
   `sprinting`, `winded`, and `stamina`; those fields are not live on this old
   base. Preserve `movingFire`/`coveredPath` behavior when bringing it forward.
   No simulation merge was performed just to transfer the artwork.

## What was checked

Previous Blender validation: 100 sampled frames, maximum wrist-to-grip error
0.055 mm; finite baked cloth in standing/walking/crouching; both skeletal FBXs
independently reimported with no unweighted vertices and the male texture intact.
The wrist check does not prove every finger's surface contact, and deep crouch
or other motions can still require cloth tuning. The remaining 49-animation
library and new Unreal integration have not been validated.

The handoff additionally runs the portable scene inspection, grip sweep, export
and skeletal FBX reimport from a different directory, without original Pictures
paths. Results are under `art/characters/gunners_v02/handoff_checks/`.
No new Unreal build is claimed for this source-asset/documentation transfer.
