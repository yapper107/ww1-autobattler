"""Import articulated MG equipment and body-specific ammunition-pouch anchors."""
import json
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir());folder=project/'Art/authored_mg';dest='/Game/Characters/GASP/Equipment'
assets=unreal.AssetToolsHelpers.get_asset_tools();report=[]
# Interchange's replace path collapsed these palette meshes to one section on
# the second import. Use the explicit legacy FBX factory for these owned props.
unreal.SystemLibrary.execute_console_command(None,'Interchange.FeatureFlags.Import.FBX 0')
materials={
 'wood':'M_mgwarmwood','steel':'M_mgcharcoalsteel','box':'M_mgoliveammunitionbox',
 'brass':'M_mgbrasscases','blue':'M_mgarcanebluetips','lit':'M_mgcrystallitfacets','dark':'M_mgcrystaldarkfacets'}
for part in ['Body','Cover','Belt','Box','ChargingHandle','AmmoPouch']:
    name='SM_MG_'+part;task=unreal.AssetImportTask();task.filename=str(folder/(name+'.fbx'))
    task.destination_path=dest;task.destination_name=name;task.automated=True;task.save=True;task.replace_existing=True
    opt=unreal.FbxImportUI();opt.automated_import_should_detect_type=False
    opt.import_mesh=True;opt.import_materials=False;opt.import_textures=False;opt.import_animations=False
    opt.import_as_skeletal=False;opt.mesh_type_to_import=unreal.FBXImportType.FBXIT_STATIC_MESH
    data=opt.static_mesh_import_data;data.combine_meshes=True;data.auto_generate_collision=False
    data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
    data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory=unreal.FbxFactory();task.options=opt;assets.import_asset_tasks([task])
    prop=unreal.load_asset(dest+'/'+name);assert prop
    assert len(prop.static_materials)==({"Body":5,"Belt":2}.get(part,1)),(name,len(prop.static_materials))
    slots=[]
    for i,slot in enumerate(prop.static_materials):
        label=str(slot.material_slot_name).lower()
        key=next((k for k in materials if k in label),None);assert key,(name,label)
        # Canvas pouch reuses the soldier's matte webbing rather than box metal.
        material=unreal.load_asset('/Game/Characters/FemaleRifle/'+('M_femaleazureolivewebbing' if part=='AmmoPouch' else materials[key]))
        assert material;prop.set_material(i,material);slots.append([label,material.get_path_name()])
    unreal.EditorAssetLibrary.save_loaded_asset(prop,only_if_is_dirty=False)
    report.append({'asset':prop.get_path_name(),'materials':slots,'bounds':str(prop.get_bounding_box())})
profile=unreal.load_asset(dest+'/DA_MachineGun');assert profile
for body in ['Female','Male']:
    manifest=json.loads((folder/body/'manifest.json').read_text());assert manifest['articulated_mg']
    assert manifest['cover_hinge_cm']==[0,-7.5,13.45]
    assert manifest['charge_rest_cm']==[-5.5,-22.5,12.4]
    profile.set_editor_property('mg_ammo_pouch_'+body.lower(),unreal.Vector(*manifest['pouch_bind_cm']))
    profile.set_editor_property('ammunition_box_grip',unreal.Vector(*manifest['box_grip_cm']))
unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
(project/'Saved/AnimationReview/mg-mechanism-import.json').write_text(json.dumps(report,indent=2))
unreal.log('ARMY_MG_MECHANISM '+json.dumps(report))
