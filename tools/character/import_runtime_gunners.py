"""Import the refined MG and the baked, body-specific reviewed grip poses."""
import json
import re
from pathlib import Path
import unreal

base = Path(unreal.Paths.project_dir()) / 'Art/gunner_runtime'
assets = unreal.AssetToolsHelpers.get_asset_tools()
palette = json.loads((base / 'manifest.json').read_text())['palette_linear']
normalize = lambda text: re.sub('[^a-z0-9]', '', str(text).lower())
palette = {normalize(k): v for k, v in palette.items()}
for name, gender in [('SM_MachineGun', None), ('SM_MGBox', None), ('A_mg_aiming', 'Female'), ('A_mg_aiming', 'Male')]:
    dest = '/Game/Characters/' + ('Male' if gender == 'Male' else 'FemaleRifle')
    task = unreal.AssetImportTask()
    task.filename = str(base / (('A_' + gender + '_mg_aiming') if gender else name)) + '.fbx'
    task.destination_path, task.destination_name = dest, name
    task.automated = task.save = task.replace_existing = True
    opt = unreal.FbxImportUI()
    opt.automated_import_should_detect_type = False
    opt.import_materials = opt.import_textures = opt.create_physics_asset = False
    opt.import_as_skeletal = False
    opt.import_mesh = gender is None
    opt.import_animations = gender is not None
    opt.mesh_type_to_import = unreal.FBXImportType.FBXIT_ANIMATION if gender else unreal.FBXImportType.FBXIT_STATIC_MESH
    data = opt.anim_sequence_import_data if gender else opt.static_mesh_import_data
    data.convert_scene = data.convert_scene_unit = True
    data.force_front_x_axis = False
    if gender:
        mesh = unreal.load_asset(dest + ('/SK_Male' if gender == 'Male' else '/SK_Female_Rifle'))
        opt.skeleton = mesh.skeleton
        data.set_editor_property('animation_length', unreal.FBXAnimationLengthImportType.FBXALIT_EXPORTED_TIME)
        data.set_editor_property('use_default_sample_rate', False)
        data.set_editor_property('custom_sample_rate', 60)
    else:
        data.combine_meshes = True
        data.auto_generate_collision = False
        data.normal_import_method = unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory = unreal.FbxFactory()
    task.options = opt
    assets.import_asset_tasks([task])
    obj = unreal.load_asset(dest + '/' + name)
    assert obj, task.imported_object_paths
    if gender:
        continue
    slots = list(obj.static_materials)
    for i, slot in enumerate(slots):
        key = normalize(slot.material_slot_name)
        color = palette[key]
        mat_name = 'M_' + key
        mat = unreal.load_asset(dest + '/' + mat_name) or assets.create_asset(mat_name, dest, unreal.Material, unreal.MaterialFactoryNew())
        edit = unreal.MaterialEditingLibrary
        edit.delete_all_material_expressions(mat)
        tint = edit.create_material_expression(mat, unreal.MaterialExpressionVectorParameter, -200, 0)
        tint.set_editor_property('parameter_name', 'Tint')
        tint.set_editor_property('default_value', unreal.LinearColor(*color))
        edit.connect_material_property(tint, '', unreal.MaterialProperty.MP_BASE_COLOR)
        for prop, value, y in [(unreal.MaterialProperty.MP_ROUGHNESS, .95, 150), (unreal.MaterialProperty.MP_SPECULAR, .1, 250)]:
            n = edit.create_material_expression(mat, unreal.MaterialExpressionConstant, -200, y)
            n.set_editor_property('r', value)
            edit.connect_material_property(n, '', prop)
        edit.recompile_material(mat)
        slot.set_editor_property('material_interface', mat)
        slots[i] = slot
        unreal.EditorAssetLibrary.save_loaded_asset(mat)
    obj.set_editor_property('static_materials', slots)
    unreal.EditorAssetLibrary.save_loaded_asset(obj)
print('RUNTIME_GUNNERS_IMPORT_OK')
