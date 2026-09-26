"""Restore the refined MG's FBX material sections without changing its geometry.

A prior reimport kept one wood slot for all six sections. Import a disposable
fresh mesh with material creation enabled to recover the original section map,
then apply the already authored flat palette to the existing runtime mesh.
"""
import json
import re
import uuid
from pathlib import Path
import unreal

base=Path(unreal.Paths.project_dir())/'Art/gunner_runtime'
normalize=lambda name:re.sub('[^a-z0-9]','',str(name).lower())
palette={normalize(k):v for k,v in json.loads((base/'manifest.json').read_text())['palette_linear'].items()}
assets=unreal.AssetToolsHelpers.get_asset_tools()
editor=unreal.get_default_object(unreal.StaticMeshEditorSubsystem)
folder='/Game/Characters/GASP/Equipment/MaterialRepair_'+uuid.uuid4().hex
try:
    task=unreal.AssetImportTask();task.filename=str(base/'SM_MachineGun.fbx')
    task.destination_path=folder;task.destination_name='SM_MachineGun';task.automated=True;task.save=False
    options=unreal.FbxImportUI();options.automated_import_should_detect_type=False
    options.import_mesh=True;options.import_materials=True;options.import_textures=False
    options.import_as_skeletal=False;options.import_animations=False
    options.mesh_type_to_import=unreal.FBXImportType.FBXIT_STATIC_MESH
    data=options.static_mesh_import_data;data.combine_meshes=True;data.auto_generate_collision=False
    data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
    data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory=unreal.FbxFactory();task.options=options;assets.import_asset_tasks([task])
    fresh=unreal.load_asset(folder+'/SM_MachineGun');target=unreal.load_asset('/Game/Characters/FemaleRifle/SM_MachineGun')
    assert fresh and target
    assert fresh.get_num_sections(0)==target.get_num_sections(0)==6
    slots=list(fresh.static_materials);assert len(slots)>=6
    mapping=[editor.get_lod_material_slot(fresh,0,i) for i in range(fresh.get_num_sections(0))]
    assert len(set(mapping))==6,mapping
    edit=unreal.MaterialEditingLibrary
    for i,slot in enumerate(slots):
        key=normalize(slot.material_slot_name);color=palette[key]
        name='M_'+key;dest='/Game/Characters/FemaleRifle'
        mat=unreal.load_asset(dest+'/'+name) or assets.create_asset(name,dest,unreal.Material,unreal.MaterialFactoryNew())
        edit.delete_all_material_expressions(mat)
        tint=edit.create_material_expression(mat,unreal.MaterialExpressionVectorParameter,-200,0)
        tint.set_editor_property('parameter_name','Tint');tint.set_editor_property('default_value',unreal.LinearColor(*color))
        edit.connect_material_property(tint,'',unreal.MaterialProperty.MP_BASE_COLOR)
        for prop,value,y in [(unreal.MaterialProperty.MP_ROUGHNESS,.95,150),(unreal.MaterialProperty.MP_SPECULAR,.1,250)]:
            node=edit.create_material_expression(mat,unreal.MaterialExpressionConstant,-200,y);node.set_editor_property('r',value)
            edit.connect_material_property(node,'',prop)
        edit.recompile_material(mat);unreal.EditorAssetLibrary.save_loaded_asset(mat)
        slot.set_editor_property('material_interface',mat);slots[i]=slot
    target.set_editor_property('static_materials',slots)
    for section,slot in enumerate(mapping):editor.set_lod_material_slot(target,slot,0,section)
    unreal.EditorAssetLibrary.save_loaded_asset(target,only_if_is_dirty=False)
    actual=[editor.get_lod_material_slot(target,0,i) for i in range(target.get_num_sections(0))]
    assert actual==mapping
    report={'mesh':target.get_path_name(),'material_slots':[str(s.material_slot_name) for s in slots],'sections':actual}
    (Path(unreal.Paths.project_saved_dir())/'AnimationReview/mg-material-repair.json').write_text(json.dumps(report,indent=2))
    unreal.log('ARMY_MG_MATERIAL_REPAIR '+json.dumps(report))
finally:
    # Only this invocation's disposable import directory; shared palette stays.
    if unreal.EditorAssetLibrary.does_directory_exist(folder):unreal.EditorAssetLibrary.delete_directory(folder)
