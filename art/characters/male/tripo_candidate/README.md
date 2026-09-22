# Male Tripo prototype — textured and rigged

The user's imported male model, built from the male concept-art references. This asset is a reviewable prototype and has not replaced the earlier Unreal male proxy.

## Files

- `male_tripo_original_v01.blend`: untouched original object library; append its mesh.
- `male_coat_slit_v01.blend` / `.glb`: front/rear coat openings, thin rims and inner trouser waist. The slit also cuts the inner coat bridge, required for independent panel movement.
- `textured/Male_Azure_Textured_Apose.blend`: unrigged A-pose source at 1.836 m, with packed Azure atlas.
- `textured/Male_Azure_BaseColor.png`: 4096-square sRGB matte palette atlas, with a dedicated UV tile per triangle. No surface noise, normal map or metallic shader.
- `textured/Male_Azure_Mixamo.fbx`: optional unrigged export with embedded texture.
- `rigged/Male_Azure_Rigged_v01.blend`: fitted 55-bone Mixamo hierarchy and four retargeted test actions: aim, walk, crouch-aim, run. Opens on the walk clip.
- `rigged/SK_Male_Azure_v01.fbx`: rest-pose skeletal mesh with embedded texture; no baked animation in this FBX.
- Reports and rendered previews live beside each stage. The original root-level clay previews show the initial slit repair before its inner bridge was opened.

The newer five-finger hands, simulated coat, and machine-gun grips are in
[`../../gunners_v02`](../../gunners_v02/README.md). The limitations below describe
this preserved **v01** stage, not that newer combined scene.

## Rigging method and limits

The female rig supplies the hierarchy, reference skin weights and evaluated animation. Joint landmarks are fitted to the wider male torso and different leg proportions. The female reference surface is warped into the male bind pose before nearest-surface weight transfer. Helmet/armor/pouches receive explicit rigid weights; coat panels follow their own thighs. All vertices are weighted, normalized, with at most four influences. The FBX is independently reimported to verify bones, modifiers, texture and weights.

This is not final animation approval. Gloves currently follow the hand bones rigidly: the female's three finger chains do not fit the male glove topology, so a weapon-grip pass remains necessary. The coat is skinned, not simulated cloth; deep crouching still produces angular folds and some leg/coat intersections. Shoulder transitions also need visual review. The four test clips were retargeted explicitly; the remaining female animation library has not yet been retargeted to the modified male bind pose. No Unreal import or gameplay changes were made.

## Reproduction

Prefer continuing from the newer combined scene; see the repository-root
`ART_HANDOFF.md`. For rebuilding this earlier stage, execute `open_vents.py` in
Blender against `male_tripo_original_v01.blend`, then `texture_male.py` against
its generated `male_coat_slit_v01.blend`. Execute `rig_male.py` with
`../../gunners_v02/source_inputs/female_grip_C_for_male.blend` loaded. It loads
the generated textured male when available, otherwise the bundled textured male,
transfers weights, and retargets four clips. `verify_export.py` reimports the
resulting FBX (falling back to the bundled export when no output exists).

Scripts default to `<repo>/.local/male_candidate/`, with `textured/` and `rigged/`
subfolders. Set `ARMY_MALE_OUTPUT` to override the working directory. Input paths
are checkout-relative; original female files and the untouched male import remain
preserved. To reproduce all intermediate changes, inspect `open_vents.py` and the
saved coat-slit scene: the saved scene includes an additional inner-bridge repair
made during the original interactive pass.
