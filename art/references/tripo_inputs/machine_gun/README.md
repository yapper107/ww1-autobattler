# Machine gun — corrected multiview orientation

All four current PNGs are upright: crystal muzzle UP, wooden buttstock DOWN. Upload each file into its matching named slot. Do not rotate or mirror individual inputs.

- FRONT: top of the gun; ammunition box projects to image RIGHT.
- LEFT: ammunition-feed side; five brass rounds with blue tips visible; trigger guard and bipod project RIGHT.
- BACK: underside; ammunition box projects to image LEFT.
- RIGHT: opposite side; ammunition hidden; trigger guard and bipod project LEFT.

The left/right slot assignment follows the top-as-front, muzzle-up convention, rather than the weapon's conventional shooting orientation. The old side labels have been swapped accordingly. This creates a consistent rotation around the long axis while retaining the requested top-as-front and underside-as-back views.

Previous horizontal files and notes are preserved in the previous_orientation backup folder. Use the four PNGs directly in this folder, not the backup set.

Corrections used the built-in image-generation editing tool. Prompts are in orientation_correction_prompts.json; original prompts remain in generation_prompts.json. These images approximate the shared design; they are not exact projections rendered from one 3D mesh. Reconstruction using the corrected set has not yet been tested in Tripo.

## Bipod alignment correction

Both side views now show the bipod legs overlapping in orthographic projection: one visible leg and foot, with the far leg occluded. Front/top and back/underside remain unchanged and retain the two-leg spread. Previous side images are in the before_bipod_alignment backup folder. Edits used the built-in image-generation tool; prompts are in bipod_correction_prompts.json.

## Single-image alternative

machine_gun_single_view.png is the standalone three-quarter reference for single-image input. It shows the ammunition-feed side, top surfaces and both bipod legs against a white background. Upload this image alone in single-image mode. Created using built-in image generation; prompts in single_view_prompts.json. Reconstruction has not been tested.
