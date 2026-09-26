"""Build normalized soldier motion libraries in the isolated UE 5.8 mirror.

Owned, versioned outputs are resumable. Original GASP and production assets are
read-only inputs. Build indices and save the databases for runtime Pose Search.
"""
import json
import math
from pathlib import Path
import unreal

BASE='/Game/Characters/UEFN_Mannequin'
DEST='/Game/Characters/GASP'
catalog=json.loads(Path(__file__).with_name('gasp_motion_catalog.json').read_text())['clips']
OWNER='army-motion-v3-unit-root'
report={'owner':OWNER,'bodies':[],'complete':False}
output=Path(unreal.Paths.project_saved_dir())/'gasp-motion-library.json'
source_mesh=unreal.load_asset(BASE+'/Meshes/SKM_UEFN_Mannequin')
registry=unreal.AssetRegistryHelpers.get_asset_registry()
registry.search_all_assets(synchronous_search=True)

def save_report():
    output.write_text(json.dumps(report,indent=2))

def clean_clip(clip):
    for notify in list(unreal.AnimationLibrary.get_animation_notify_events(clip)):
        state=notify.get_editor_property("notify_state_class")
        if state and state.get_class().get_name()=="AnimNotifyState_PoseSearchExcludeFromDatabase":continue
        unreal.AnimationLibrary.remove_animation_notify_events_by_name(clip,notify.notify_name)
    assert all(n.get_editor_property("notify_state_class") and n.get_editor_property("notify_state_class").get_class().get_name()=="AnimNotifyState_PoseSearchExcludeFromDatabase" for n in unreal.AnimationLibrary.get_animation_notify_events(clip))
    # Source assets already specify looping/root extraction. Keep their settings.
    unreal.EditorAssetLibrary.set_metadata_tag(clip,'ArmyMotionLibrary',OWNER)
    assert unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=False)

for body,old_folder in [('Female','FemaleRifle'),('Male','Male')]:
    mesh=unreal.load_asset(DEST+'/Bodies/SK_'+body+'_GASP')
    retargeter=unreal.load_asset(DEST+'/RTG_UEFN_'+body)
    assert mesh and retargeter and source_mesh
    folder=DEST+'/Motion/'+body
    pending=[]
    for row in catalog:
        path=folder+'/Animations/GASP_'+row['source'].split('/')[-1]
        if unreal.EditorAssetLibrary.does_asset_exist(path):
            existing=unreal.load_asset(path)
            if str(unreal.EditorAssetLibrary.get_metadata_tag(existing,'ArmyMotionLibrary')).startswith(OWNER):
                assert existing.get_editor_property("skeleton")==mesh.skeleton
                continue
        pending.append(row)
    for start in range(0,len(pending),16):
        chunk=pending[start:start+16]
        args=unreal.IKRetargetBatchOperationInputs()
        args.assets_to_retarget=[unreal.EditorAssetLibrary.find_asset_data(BASE+'/Animations/'+r['source']) for r in chunk]
        args.source_mesh=source_mesh
        args.target_mesh=mesh
        args.ik_retarget_asset=retargeter
        args.target_path=folder+'/Animations'
        args.prefix='GASP_'
        args.include_referenced_assets=False
        args.overwrite_existing_files=True
        result=unreal.IKRetargetBatchOperation.run_batch_retarget(args)
        assert len(result)==len(chunk),(body,start,len(result))
        for asset in result:
            clip=asset.get_asset()
            assert clip.get_editor_property("skeleton")==mesh.skeleton
            clean_clip(clip)
        print('ARMY_MOTION_BATCH',body,start+len(chunk),'/',len(pending),flush=True)
        unreal.SystemLibrary.collect_garbage()
    checks=[]
    options=unreal.AnimPoseEvaluationOptions()
    groups={'standing':[],'crouch':[],'actions':[]}
    for row in catalog:
        clip=unreal.load_asset(folder+'/Animations/GASP_'+row['source'].split('/')[-1])
        assert clip and clip.get_editor_property("skeleton")==mesh.skeleton
        assert all(n.get_editor_property("notify_state_class") and n.get_editor_property("notify_state_class").get_class().get_name()=="AnimNotifyState_PoseSearchExcludeFromDatabase" for n in unreal.AnimationLibrary.get_animation_notify_events(clip))
        for fraction in [0,.5,1]:
            pose=unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,clip.get_play_length()*fraction,options)
            for bone in ['Hips','Head','LeftFoot','RightFoot','LeftHand','RightHand']:
                p=unreal.AnimPoseExtensions.get_bone_pose(pose,bone,unreal.AnimPoseSpaces.WORLD).translation
                assert all(math.isfinite(v) for v in [p.x,p.y,p.z]),(body,row,bone)
        groups[row['group']].append(clip)
        checks.append({'asset':clip.get_path_name(),'duration':clip.get_play_length(),'group':row['group']})
    schema=unreal.GaspAuthoringLibrary.create_soldier_schema(mesh.skeleton,folder+'/PSS_Soldier')
    assert schema
    assert unreal.EditorAssetLibrary.save_loaded_asset(schema,only_if_is_dirty=False)
    databases=[]
    for group in ['standing','crouch']:
        db=unreal.GaspAuthoringLibrary.create_soldier_database(schema,groups[group],folder+'/PSD_'+group)
        assert db
        count=unreal.GaspAuthoringLibrary.build_database(db)
        assert count>0,(body,group,count)
        assert unreal.EditorAssetLibrary.save_loaded_asset(db,only_if_is_dirty=False)
        databases.append({'asset':db.get_path_name(),'poses':count,'clips':len(groups[group])})
    legacy=[]
    for data in registry.get_assets_by_path('/Game/Characters/'+old_folder,recursive=False):
        if str(data.asset_class_path.asset_name)!='AnimSequence':continue
        source=data.get_asset()
        clip=unreal.GaspAuthoringLibrary.normalize_legacy_clip(source,mesh.skeleton,DEST+'/Legacy/'+body+'/'+str(data.asset_name))
        assert clip
        clean_clip(clip)
        # Compare component-space landmarks. This conversion must preserve the
        # original authored gun/hand/death tracks, including their centimetres.
        for fraction in [0,.5,1]:
            a=unreal.AnimPoseExtensions.get_anim_pose_at_time(source,source.get_play_length()*fraction,options)
            b=unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,clip.get_play_length()*fraction,options)
            for bone in ['Hips','Head','LeftHand','RightHand','WeaponSocket_R','WeaponMuzzle']:
                pa=unreal.AnimPoseExtensions.get_bone_pose(a,bone,unreal.AnimPoseSpaces.WORLD).translation
                pb=unreal.AnimPoseExtensions.get_bone_pose(b,bone,unreal.AnimPoseSpaces.WORLD).translation
                assert max(abs(pa.x-pb.x),abs(pa.y-pb.y),abs(pa.z-pb.z))<.15,(body,str(data.asset_name),bone,str(pa),str(pb))
        legacy.append(clip.get_path_name())
    report['bodies'].append({'body':body,'clips':checks,'databases':databases,'legacy':legacy})
    save_report()
for family in ['Rifle','MachineGun']:
    path=DEST+'/Equipment/DA_'+family
    factory=unreal.DataAssetFactory()
    factory.set_editor_property('data_asset_class',unreal.WeaponAnimationProfile)
    profile=unreal.load_asset(path) if unreal.EditorAssetLibrary.does_asset_exist(path) else unreal.AssetToolsHelpers.get_asset_tools().create_asset('DA_'+family,DEST+'/Equipment',unreal.WeaponAnimationProfile,factory)
    assert profile
    if family=='Rifle':
        profile.set_editor_property('bolt_rest',unreal.Vector(-2.5,-16,13))
        profile.set_editor_property('bolt_knob',unreal.Vector(-6.2,3,-.2))
        profile.set_editor_property('bolt_open_degrees',-60.)
        profile.set_editor_property('reload_palm_offset',unreal.Vector(-3,0,1))
        profile.set_editor_property('reload_press_direction',unreal.Vector(.75,.4,-.52))
    if family=='MachineGun':
        profile.set_editor_property('spine_weight',.75)
        profile.set_editor_property('moving_lean_degrees',6.)
        profile.set_editor_property('ready_offset',unreal.Vector(0,-3,-13))
        profile.set_editor_property('ready_pitch',-8.)
        profile.set_editor_property('sprint_offset',unreal.Vector(0,-6,-18))
        profile.set_editor_property('sprint_pitch',-16.)
        profile.set_editor_property('kick_centimetres',1.3)
        profile.set_editor_property('kick_degrees',2.2)
        profile.set_editor_property('manual_bolt',False)
    assert unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
report['complete']=True
save_report()
print('ARMY_MOTION_LIBRARY_READY',[(b['body'],len(b['clips']),b['databases']) for b in report['bodies']],flush=True)
