"""Import our baked handling clips; preserve original rig and normalize a duplicate."""
import json
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
report=[]
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
