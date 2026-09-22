# Transfer validation — 21 September 2026

Copied the source package and exact reconstruction inputs into a different Windows
folder and ran Blender 5.2.2 with `--python-exit-code 1` through these stages:
`inspect_package.py`, `check_grips.py`, `export_gunners.py`, `verify_gunners.py`.
All completed successfully without the original Pictures paths.

The reports retain the actual validation directory for traceability; it is not an
input requirement. The packed male texture and all six expected scene objects
were present. Both cloth caches are intentionally unbaked in the source scene.
Re-exported and independently reimported meshes have no unweighted vertices and
retain the finger groups and male texture. Grip errors match the original sweep.
This portability check did not rerun a cloth bake or build Unreal.
