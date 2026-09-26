"""Fresh-process checks of saved GASP outputs; never changes source or target assets."""
import json
import math
from pathlib import Path
import unreal

DEST = '/Game/Characters/GASP'
report = []
for body, original_path, root in [
    ('Female','/Game/Characters/FemaleRifle/SK_Female_Rifle','SoldierRig'),
    ('Male','/Game/Characters/Male/SK_Male','Male_Azure_Rig'),
]:
    original = unreal.load_asset(original_path)
    normalized = unreal.load_asset(DEST+'/Bodies/SK_'+body+'_GASP')
    assert original and normalized and original.skeleton != normalized.skeleton
    components = []
    for mesh in [original, normalized]:
        c = unreal.SkeletalMeshComponent()
        c.set_skeletal_mesh_asset(mesh)
        components.append(c)
    old, new = components
    assert abs(old.get_ref_pose_transform(0).scale3d.x-100)<.001
    assert new.get_num_bones() in [old.get_num_bones(),old.get_num_bones()+2]
    assert abs(new.get_ref_pose_transform(0).rotation.w)>.99999, "Root basis must be identity"
    for i in range(old.get_num_bones()):
        assert new.get_bone_name(i) == old.get_bone_name(i)
        s = new.get_ref_pose_transform(i).scale3d
        assert max(abs(s.x-1),abs(s.y-1),abs(s.z-1))<.0001
    paths = unreal.EditorAssetLibrary.list_assets(DEST+'/'+body, recursive=False, include_folder=False)
    assert len(paths)==10, paths
    clips = []
    for path in paths:
        clip = unreal.load_asset(path)
        assert isinstance(clip,unreal.AnimSequence)
        assert clip.get_editor_property('skeleton') == normalized.skeleton
        assert not unreal.AnimationLibrary.get_animation_notify_events(clip), path
        options = unreal.AnimPoseEvaluationOptions()
        options.evaluation_type = unreal.AnimDataEvalType.COMPRESSED
        poses = [unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,t,options)
                 for t in [0,clip.get_play_length()*.5,clip.get_play_length()]]
        roots = []
        # Rendered skin can be correct while the separate USkeleton root still
        # has FBX scale 100. Check the engine's actual root-motion extractor too.
        start=min(.5,clip.get_play_length()*.5)
        duration=min(1/30,clip.get_play_length()-start)
        p0=unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,start,options)
        p1=unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,start+duration,options)
        a=unreal.AnimPoseExtensions.get_bone_pose(p0,root,unreal.AnimPoseSpaces.WORLD).translation
        b=unreal.AnimPoseExtensions.get_bone_pose(p1,root,unreal.AnimPoseSpaces.WORLD).translation
        actual=unreal.GaspAuthoringLibrary.root_motion_translation(clip,start,duration)
        distance=lambda v:math.sqrt(v.x*v.x+v.y*v.y+v.z*v.z)
        assert abs(distance(actual)-distance(b-a))<.03,(path,"Root extraction scale mismatch",str(actual),str(b-a))
        for pose in poses:
            for bone in [root,'Hips','Head','LeftFoot','RightFoot','LeftHand','RightHand']:
                transform = unreal.AnimPoseExtensions.get_bone_pose(pose,bone,unreal.AnimPoseSpaces.WORLD)
                p = transform.translation
                assert all(math.isfinite(v) for v in [p.x,p.y,p.z]), (path,bone)
                if bone == root:
                    rotation=transform.rotation.rotator()
                    assert abs(rotation.pitch)<.01 and abs(rotation.roll)<.01,(path,"Root must remain Z-up",str(rotation))
                    roots.append({'position':[p.x,p.y,p.z],'yaw':transform.rotation.rotator().yaw})
        clips.append({'path':path,'duration':clip.get_play_length(),'root_samples':roots})
    report.append({'body':body,'original_root_scale':100,'normalized_bones':new.get_num_bones(),
                   'notifies':0,'clips':clips})
output = Path(unreal.Paths.project_saved_dir())/'gasp-saved-validation.json'
output.write_text(json.dumps(report,indent=2))
print('GASP_SAVED_VALIDATED',[(row['body'],len(row['clips'])) for row in report])
