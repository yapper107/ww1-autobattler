# Azure machine gunners: hands and cloth

Blender 5.2.2 authoring scene for the actual Tripo male and the approved female,
with a refined machine gun fitted to both. This is a prototype asset package;
it has not been imported into Unreal or approved as the final art direction.

## Contents and controls

- `Azure_Gunners_Hands_Cloth_v02.blend`: editable scene, packed male texture,
  unbaked cloth. The original male and female source scenes are preserved.
- `Machine_Gun_Refined_v02.blend`: standalone gun with matte materials,
  brass cases, cyan tips/crystal, and symmetric folded bipod legs.
- `exports/`: two skeletal meshes, one static weapon, and standing, walking,
  and crouching animation clips for each character. Animation keys include
  evaluated hand IK and finger poses plus an `MG_Weapon` attachment bone.
- PNGs and `azure_gunners_hands_cloth_v02.mp4`: rendered review evidence.
- `scripts/`: construction, baking, export, and verification scripts.

The male now has separate weighted thumb, index, middle, ring, and pinky
chains on both hands. The female retains her original simplified finger rig.
Each rig's `Grip_Left` and `Grip_Right` custom properties run from 0 (open)
to 1 (closed). Grip target empties parented to each gun control wrist placement;
two-bone arm IK follows them. Thumb contact targets wrap the stocks.
The weapon follows chest yaw while maintaining its aimed pitch.

Each coat has a separate 554-vertex simulated skirt, front/back vents,
graded waistband pinning, and skinned pelvis/leg collision proxies.
The 60 fps showcase settles for frames 1–40, transitions into standing aim,
walks for frames 121–240, transitions into crouch, holds crouch at 271–330,
then returns toward standing. Re-bake from frame 1 after rig or cloth edits.

## Playback and reproduction on another computer

Start with [the handoff guide](../../../ART_HANDOFF.md) from the repository root
(the root file is `ART_HANDOFF.md`). It records branch setup, exact working state,
asset locations, validation, and the remaining Unreal integration.

With Git LFS assets downloaded and Blender 5.2 available, run from the repo root:

```sh
python tools/character/resume_art.py inspect --blender <blender-executable>
python tools/character/resume_art.py bake --blender <blender-executable>
```

Open `.local/gunners_v02/Azure_Gunners_Hands_Cloth_v02.blend` for cached playback.
The repository scene is deliberately unbaked; its 4096-square texture is packed.
The wrapper also provides `check`, `export`, `verify`, and `preview` stages,
plus `build` for reconstructing the scene from earlier inputs. Use `--output`
for a different working directory. `build` replaces that working scene, so keep
manual changes elsewhere before rebuilding. No source asset is overwritten by
these commands. Scripts use checkout-relative input paths and `ARMY_ART_OUTPUT`
for generated output; the wrapper supplies it automatically.

All construction inputs are included: the prior male rig under
`../male/tripo_candidate/rigged/`, the exact female input under `source_inputs/`,
and the original machine gun under `../female_rifle/approved_machine_gun.blend`.
The earlier approved female source differs slightly from the exact male-fitting
revision, so both are retained. The combined scene is self-contained for editing.

## Validation and limits

The 100-frame sampled grip sweep found a maximum wrist-to-target error of
0.055 mm across both characters. This checks wrist attachment, not every
finger's surface contact. Standing, walking, and crouching were visually
reviewed. Both cloth caches baked successfully and remained finite in those
poses. All six animation clips and both skeletal meshes exported.

Independent skeletal FBX reimports found no unweighted vertices, normalized
weights, all five male finger groups populated, and the male texture intact.
The male export has 68 bones including the weapon bone; the female has 56.
Reports are `grip_sweep.json`, `cloth_and_grip_checks.json`, and
`exports/roundtrip_checks.json`. The preview is 150 frames, five seconds,
1080×756, H.264.

Blender cloth simulation does not become Unreal runtime cloth through FBX.
The exports contain a skinned coat in its rest shape. Unreal Chaos cloth,
collision setup, and in-game animation/weapon attachment integration remain
to be configured and tested. Death, reload, firing, and the rest of the
49-animation library have not been validated with this gunner setup.
No simulation or Unreal code was changed. The live Blender bridge became
unavailable at delivery, so automatic switching of the user's viewport was
not completed; the scene and previews are saved on disk.
