"""Bind Chaos cloth only to each normalized body's existing lower-coat section."""
import json
from pathlib import Path
import unreal

report = {}
material_path = '/Game/Characters/GASP/Bodies/M_azurecoatcloth_gasp'
material = unreal.load_asset(material_path) if unreal.EditorAssetLibrary.does_asset_exist(material_path) else unreal.EditorAssetLibrary.duplicate_asset('/Game/Characters/FemaleRifle/M_mazurecoatcloth', material_path)
assert material
unreal.MaterialEditingLibrary.set_material_usage(material, unreal.MaterialUsage.MATUSAGE_CLOTHING)
unreal.MaterialEditingLibrary.recompile_material(material)
assert unreal.EditorAssetLibrary.save_loaded_asset(material, only_if_is_dirty=False)
for body in ['Female', 'Male']:
    mesh = unreal.load_asset('/Game/Characters/GASP/Bodies/SK_' + body + '_GASP')
    result = unreal.GaspAuthoringLibrary.create_coat_cloth(mesh)
    assert result.startswith('OK '), result
    slots = list(mesh.get_editor_property('materials'))
    for i, slot in enumerate(slots):
        if 'cloth' in str(slot.material_slot_name).lower():
            slot.set_editor_property('material_interface', material)
            slots[i] = slot
    mesh.set_editor_property('materials', slots)
    physics = unreal.load_asset('/Game/Characters/GASP/Bodies/PHYS_' + body + '_GASP')
    assert unreal.EditorAssetLibrary.save_loaded_asset(physics, only_if_is_dirty=False)
    assert unreal.EditorAssetLibrary.save_loaded_asset(mesh, only_if_is_dirty=False)
    report[body] = result
out = Path(unreal.Paths.project_saved_dir()) / 'AnimationReview' / 'gasp-cloth-authoring.json'
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text(json.dumps(report, indent=2))
print('GASP_CLOTH_READY', report)
