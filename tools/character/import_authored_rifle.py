"""Import our baked handling clips; preserve original rig and normalize a duplicate."""
import json
import runpy
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
report=[]
rifle_manifests=[json.loads((project/'Art/authored_rifle'/body/'manifest.json').read_text()) for body in ['Female','Male']]
assert all(m.get('bolt_side')==-1 for m in rifle_manifests), 'Both rifle bodies must be regenerated with the matching operating-side contract.'
assert all(m.get('bolt_knob_ue_cm')==[-6.2,3,-.2] for m in rifle_manifests), 'Regenerate both bodies with the measured bolt handle contact.'
# Validate against the imported visible handle, including FBX's Y reflection.
# Checking hand-to-profile distance alone can certify a point in empty space.
bolt=unreal.load_asset('/Game/Characters/FemaleRifle/SM_Bolt');assert bolt
handle=[v for v in unreal.GaspAuthoringLibrary.static_mesh_positions(bolt) if v.x>1]
assert handle, 'Imported bolt has no lateral handle geometry.'
assert abs(max(v.x for v in handle)-6.7)<.05
assert min(v.y for v in handle)<=3<=max(v.y for v in handle)
assert min(v.z for v in handle)<=-.2<=max(v.z for v in handle)
profile=unreal.load_asset('/Game/Characters/GASP/Equipment/DA_Rifle');assert profile
profile.set_editor_property('bolt_rest',unreal.Vector(-2.5,-16,13))
profile.set_editor_property('bolt_knob',unreal.Vector(-6.2,3,-.2))
profile.set_editor_property('bolt_open_degrees',-60.)
profile.set_editor_property('reload_palm_offset',unreal.Vector(-3,0,1))
profile.set_editor_property('reload_press_direction',unreal.Vector(.75,.4,-.52))
unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
for family in ['Rifle','MG']:
    for body, old in [('Female','FemaleRifle'),('Male','Male')]:
        folder=project/('Art/authored_'+family.lower())/body
        if not (folder/'manifest.json').exists():continue
        manifest=json.loads((folder/'manifest.json').read_text())
        source_mesh=unreal.load_asset('/Game/Characters/'+old+('/SK_Female_Rifle' if body=='Female' else '/SK_Male'))
        target_mesh=unreal.load_asset('/Game/Characters/GASP/Bodies/SK_'+body+'_GASP')
        for row in manifest['clips']:
            name=row['name'];destination='/Game/Characters/Authored'+family+'/'+body
            task=unreal.AssetImportTask();task.filename=str(folder/(name+'.fbx'))
            task.destination_path=destination;task.destination_name=name
            task.automated=True;task.save=True;task.replace_existing=True
            options=unreal.FbxImportUI();options.automated_import_should_detect_type=False
            options.import_mesh=False;options.import_animations=True;options.import_materials=False;options.import_textures=False
            options.mesh_type_to_import=unreal.FBXImportType.FBXIT_ANIMATION;options.skeleton=source_mesh.skeleton
            data=options.anim_sequence_import_data;data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
            data.set_editor_property('animation_length',unreal.FBXAnimationLengthImportType.FBXALIT_EXPORTED_TIME)
            data.set_editor_property('use_default_sample_rate',False);data.set_editor_property('custom_sample_rate',60);data.set_editor_property('import_custom_attribute',False)
            task.options=options;unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([task])
            source=unreal.load_asset(destination+'/'+name);assert source,(name,task.imported_object_paths)
            assert abs(source.get_play_length()-row['duration'])<.02
            clip=unreal.GaspAuthoringLibrary.normalize_legacy_clip(source,target_mesh.skeleton,'/Game/Characters/GASP/Legacy/'+body+'/'+name)
            assert clip
            clip.set_editor_property('enable_root_motion',False)
            unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=False)
            report.append(dict(body=body,asset=clip.get_path_name(),duration=clip.get_play_length()))
(project/'Saved/AnimationReview/authored-rifle-import.json').write_text(json.dumps(report,indent=2))
print('ARMY_AUTHORED_RIFLE_IMPORTED',report)
female=project/'Art/authored_rifle/Female/manifest.json'
if female.exists() and json.loads(female.read_text()).get('articulated_pouch',False):
    runpy.run_path(str(Path(__file__).with_name('import_rifle_pouch.py')),run_name='__main__')

male=project/'Art/authored_rifle/Male/manifest.json'
if male.exists() and json.loads(male.read_text()).get('articulated_pouch',False):
    runpy.run_path(str(Path(__file__).with_name('import_male_rifle_pouch.py')),run_name='__main__')
if male.exists() and json.loads(male.read_text()).get('hand_weights'):
    runpy.run_path(str(Path(__file__).with_name('import_male_glove_weights.py')),run_name='__main__')
