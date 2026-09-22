"""Read-only validation of the movable authoring scene and its dependencies."""
import bpy
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import CHARACTERS, OUTPUT

required = ["Male_Azure_Rig", "Female_Mixamo_Rig", "Male_Machine_Gun",
            "Female_Machine_Gun", "Male_Coat_Cloth", "Female_Coat_Cloth"]
assert all(name in bpy.data.objects for name in required), "Missing authored object"
inputs = [CHARACTERS / "gunners_v02/source_inputs/female_grip_C_for_male.blend",
          CHARACTERS / "female_rifle/approved_machine_gun.blend",
          CHARACTERS / "male/tripo_candidate/rigged/Male_Azure_Rigged_v01.blend"]
for path in inputs:
    assert path.exists(), str(path)
    with path.open("rb") as stream:
        assert not stream.read(50).startswith(b"version https://git-lfs"), str(path)
images = []
for im in bpy.data.images:
    if im.type != "IMAGE":
        continue
    assert im.packed_file or (im.filepath and Path(bpy.path.abspath(im.filepath)).exists()), im.name
    images.append({"name": im.name, "packed": bool(im.packed_file)})
assert all(not lib.filepath for lib in bpy.data.libraries), "External linked Blender library"
report = {"scene": bpy.data.filepath, "objects": required, "images": images,
          "cloth": [{"object": ob.name, "baked": m.point_cache.is_baked}
                    for ob in bpy.context.scene.objects for m in ob.modifiers if m.type == "CLOTH"]}
(OUTPUT / "package_check.json").write_text(json.dumps(report, indent=2) + "\n")
print("PACKAGE_CHECK_OK", json.dumps(report))
