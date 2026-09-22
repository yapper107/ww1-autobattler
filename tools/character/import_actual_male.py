"""Unreal commandlet: import the actual Tripo male and its own 49-clip skeleton."""
import json
from pathlib import Path
import unreal

base = Path(unreal.Paths.project_dir()) / 'Art/male_runtime'
dest = '/Game/Characters/Male'
assets = unreal.AssetToolsHelpers.get_asset_tools()
manifest = json.loads((base / 'manifest.json').read_text())
edit = unreal.MaterialEditingLibrary

def expression(mat, kind, x, y):
    for node in edit.get_material_expressions(mat):
        if isinstance(node, kind) and tuple(edit.get_material_expression_node_position(node)) == (x, y):
            return node
    return edit.create_material_expression(mat, kind, x, y)



def import_fbx(name, skeleton=None):
    task = unreal.AssetImportTask()
    task.filename = str(base / (name + '.fbx'))
    task.destination_path, task.destination_name = dest, name
    task.automated = task.save = task.replace_existing = True
    options = unreal.FbxImportUI()
    options.automated_import_should_detect_type = False
    options.import_materials = options.import_textures = options.create_physics_asset = False
    options.import_mesh = options.import_as_skeletal = skeleton is None
    options.import_animations = skeleton is not None
    options.mesh_type_to_import = unreal.FBXImportType.FBXIT_ANIMATION if skeleton else unreal.FBXImportType.FBXIT_SKELETAL_MESH
    if skeleton:
        options.skeleton = skeleton
    data = options.anim_sequence_import_data if skeleton else options.skeletal_mesh_import_data
    data.convert_scene = data.convert_scene_unit = True
    data.force_front_x_axis = False
    if skeleton:
        data.set_editor_property('animation_length', unreal.FBXAnimationLengthImportType.FBXALIT_EXPORTED_TIME)
        data.set_editor_property('use_default_sample_rate', False)
        data.set_editor_property('custom_sample_rate', 60)
    else:
        data.normal_import_method = unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory = unreal.FbxFactory()
    task.options = options
    assets.import_asset_tasks([task])
    result = unreal.load_asset(dest + '/' + name)
    assert result, task.imported_object_paths
    return result


textures = []
for faction in ['Azure', 'Ember']:
    task = unreal.AssetImportTask()
    task.filename = str(base / ('Male_' + faction + '.png'))
    task.destination_path, task.destination_name = dest, 'T_Male_' + faction
    task.automated = task.save = task.replace_existing = True
    assets.import_asset_tasks([task])
    texture_asset=unreal.load_asset(dest + '/T_Male_' + faction)
    texture_asset.set_editor_property('mip_gen_settings',unreal.TextureMipGenSettings.TMGS_NO_MIPMAPS)
    texture_asset.set_editor_property('never_stream',True)
    unreal.EditorAssetLibrary.save_loaded_asset(texture_asset)
    textures.append(texture_asset)
mesh = import_fbx('SK_Male')
name = 'M_maleatlas'
mat = unreal.load_asset(dest + '/' + name) or assets.create_asset(name, dest, unreal.Material, unreal.MaterialFactoryNew())
texture = expression(mat, unreal.MaterialExpressionTextureSampleParameter2D, -400, 0)
texture.set_editor_property('parameter_name', 'BaseColorTexture')
texture.set_editor_property('texture', textures[0])
unreal.MaterialEditingLibrary.connect_material_property(texture, 'RGB', unreal.MaterialProperty.MP_BASE_COLOR)
for prop, value, y in [(unreal.MaterialProperty.MP_ROUGHNESS, .95, 200), (unreal.MaterialProperty.MP_SPECULAR, .1, 300)]:
    node = expression(mat, unreal.MaterialExpressionConstant, -200, y)
    node.set_editor_property('r', value)
    unreal.MaterialEditingLibrary.connect_material_property(node, '', prop)
unreal.MaterialEditingLibrary.set_material_usage(mat, unreal.MaterialUsage.MATUSAGE_SKELETAL_MESH)
unreal.MaterialEditingLibrary.recompile_material(mat)
slots = list(mesh.materials)
for index, slot in enumerate(slots):
    coat = 'cloth' in str(slot.material_slot_name).lower()
    slot.set_editor_property('material_interface', unreal.load_asset('/Game/Characters/FemaleRifle/M_mazurecoatcloth') if coat else mat)
    assert slot.material_interface
    slots[index] = slot
mesh.set_editor_property('materials', slots)
checks = []
for clip in manifest['clips']:
    anim = import_fbx(clip['name'], mesh.skeleton)
    assert abs(anim.get_play_length() - clip['duration']) < 1 / 60 + .001
    checks.append({'name': clip['name'], 'duration': anim.get_play_length()})
unreal.EditorAssetLibrary.save_directory(dest, only_if_is_dirty=False)
(Path(unreal.Paths.project_saved_dir()) / 'actual-male-import.json').write_text(json.dumps(checks, indent=2))
print('ACTUAL_MALE_IMPORT_OK', len(checks))
