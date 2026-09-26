"""Retarget the staged ten-clip GASP slice to production bodies in UE 5.8.

Creates assets only below /Game/Characters/GASP. Original source and production
clips are never replaced. Results require visual review before battle integration.
"""
import json
import math
from pathlib import Path
import unreal

BASE = '/Game/Characters/UEFN_Mannequin'
DEST = '/Game/Characters/GASP'
OWNER = 'army-gasp-retarget-v1'
BODY_OWNER = 'army-gasp-body-v2-unit-root-basis'
CLIPS = [
    'Idle/M_Neutral_Stand_Idle_Loop', 'Walk/M_Neutral_Walk_Start_F_Lfoot',
    'Walk/M_Neutral_Walk_Loop_F', 'Walk/M_Neutral_Walk_Stop_F_Lfoot',
    'Walk/M_Neutral_Walk_Reface_Start_F_R_090', 'Run/M_Neutral_Run_Loop_F',
    'Sprint/M_Neutral_Sprint_Loop_F', 'Idle/M_Neutral_Crouch_Idle_Loop',
    'Crouch/M_Neutral_Crouch_Loop_F', 'Idle/M_Neutral_Stand_Turn_090_R',
]
assets = unreal.AssetToolsHelpers.get_asset_tools()
source_mesh = unreal.load_asset(BASE+'/Meshes/SKM_UEFN_Mannequin')
assert source_mesh
source_rig_path = DEST+'/IKR_UEFN_Source'
if not unreal.EditorAssetLibrary.does_asset_exist(source_rig_path):
    unreal.EditorAssetLibrary.duplicate_asset(BASE+'/Rigs/IK_UEFN_Mannequin',source_rig_path)
source_rig = unreal.load_asset(source_rig_path)
source_controller = unreal.IKRigController.get_controller(source_rig)
# Preserve actual source root travel; pelvis motion has a separate retarget op.
assert source_controller.set_root_motion_bone('root')
assert unreal.EditorAssetLibrary.save_loaded_asset(source_rig)
source_chains = {str(c.chain_name) for c in source_controller.get_retarget_chains()}
source_data = [unreal.EditorAssetLibrary.find_asset_data(BASE+'/Animations/'+clip) for clip in CLIPS]
def normalized_body(body, original):
    # UE 5.8's retarget processor strips scale and regenerates globals from local
    # transforms. Use a unit-scale COPY with translations baked to centimetres.
    # Never change the production skeleton or its existing clips.
    mesh_path = DEST+'/Bodies/SK_'+body+'_GASP'
    if unreal.EditorAssetLibrary.does_asset_exist(mesh_path):
        mesh = unreal.load_asset(mesh_path)
        tag=str(unreal.EditorAssetLibrary.get_metadata_tag(mesh,'ArmyNormalizedRig'))
        assert tag in [OWNER,BODY_OWNER]
        if tag==BODY_OWNER:
            assert unreal.GaspAuthoringLibrary.synchronize_normalized_skeleton(mesh)
            assert unreal.EditorAssetLibrary.save_loaded_asset(mesh.skeleton,only_if_is_dirty=False)
            return mesh
    component = unreal.SkeletalMeshComponent()
    component.set_skeletal_mesh_asset(original)
    names=[component.get_bone_name(i) for i in range(component.get_num_bones())]
    local=[component.get_ref_pose_transform(i) for i in range(len(names))]
    scale=local[0].scale3d.x
    assert abs(scale-100)<.001 and abs(local[0].scale3d.y-scale)<.001 and abs(local[0].scale3d.z-scale)<.001
    for transform in local[1:]:
        assert all(abs(v-1)<.0001 for v in [transform.scale3d.x,transform.scale3d.y,transform.scale3d.z])
    skeleton_path=DEST+'/Bodies/SKEL_'+body+'_GASP'
    skeleton=unreal.load_asset(skeleton_path) if unreal.EditorAssetLibrary.does_asset_exist(skeleton_path) else unreal.EditorAssetLibrary.duplicate_asset(original.skeleton.get_path_name(),skeleton_path)
    mesh=unreal.load_asset(mesh_path) if unreal.EditorAssetLibrary.does_asset_exist(mesh_path) else unreal.EditorAssetLibrary.duplicate_asset(original.get_path_name(),mesh_path)
    assert skeleton and mesh
    assert unreal.GaspAuthoringLibrary.assign_prototype_skeleton(mesh,skeleton)
    modifier=unreal.SkeletonModifier()
    assert modifier.set_skeletal_mesh(mesh)
    before={str(name):modifier.get_bone_transform(name,True).translation for name in names}
    root_basis=component.get_ref_pose_transform(0)
    root_basis.scale3d=unreal.Vector(1,1,1)
    root_basis.translation=unreal.Vector(0,0,0)
    for i, transform in enumerate(local):
        if i:
            p=transform.translation
            transform.translation=unreal.Vector(p.x*scale,p.y*scale,p.z*scale)
        transform.scale3d=unreal.Vector(1,1,1)
        if i==0:
            transform.rotation=unreal.Quat(0,0,0,1)
        elif component.get_parent_bone(names[i])==names[0]:
            # FBX's extra object root has a 90-degree basis rotation. Bake that
            # into its direct children, preserving the body's world bind pose.
            # Pose Search XY and root-motion consumers need a Z-up root basis.
            local[i]=unreal.MathLibrary.compose_transforms(transform,root_basis)
    assert modifier.set_bones_transforms(names,local,True)
    for name in names:
        p=modifier.get_bone_transform(name,True).translation
        q=before[str(name)]
        assert max(abs(p.x-q.x),abs(p.y-q.y),abs(p.z-q.z))<.001, str(name)
    assert modifier.commit_skeleton_to_skeletal_mesh()
    assert unreal.GaspAuthoringLibrary.synchronize_normalized_skeleton(mesh)
    unreal.EditorAssetLibrary.set_metadata_tag(mesh,'ArmyNormalizedRig',BODY_OWNER)
    assert unreal.EditorAssetLibrary.save_loaded_asset(mesh)
    assert unreal.EditorAssetLibrary.save_loaded_asset(skeleton)
    return mesh

report = []
for body, mesh_path in [('Female','/Game/Characters/FemaleRifle/SK_Female_Rifle'),
                        ('Male','/Game/Characters/Male/SK_Male')]:
    mesh = normalized_body(body,unreal.load_asset(mesh_path))
    rig = unreal.load_asset(DEST+'/IKR_'+body)
    assert mesh and rig
    rig_controller = unreal.IKRigController.get_controller(rig)
    assert rig_controller.set_skeletal_mesh(mesh)
    fbik = rig_controller.apply_auto_fbik()
    assert unreal.EditorAssetLibrary.save_loaded_asset(rig)
    name = 'RTG_UEFN_'+body
    if unreal.EditorAssetLibrary.does_asset_exist(DEST+'/'+name):
        retargeter = unreal.load_asset(DEST+'/'+name)
        assert str(unreal.EditorAssetLibrary.get_metadata_tag(retargeter,'ArmyGenerator'))==OWNER
    else:
        retargeter = assets.create_asset(name, DEST, unreal.IKRetargeter, unreal.IKRetargetFactory())
    controller = unreal.IKRetargeterController.get_controller(retargeter)
    src, dst = unreal.RetargetSourceOrTarget.SOURCE, unreal.RetargetSourceOrTarget.TARGET
    controller.set_ik_rig(src, source_rig)
    controller.set_ik_rig(dst, rig)
    controller.set_preview_mesh(src, source_mesh)
    controller.set_preview_mesh(dst, mesh)
    controller.remove_all_ops()
    controller.add_default_ops()
    mapping = {}
    for chain in rig_controller.get_retarget_chains():
        chain_name = str(chain.chain_name)
        assert chain_name in source_chains, chain_name
        assert controller.set_source_chain(chain_name,chain_name), chain_name
        mapping[chain_name] = str(controller.get_source_chain(chain_name))
    controller.auto_align_all_bones(dst, unreal.RetargetAutoAlignMethod.CHAIN_TO_CHAIN)
    unreal.EditorAssetLibrary.set_metadata_tag(retargeter, 'ArmyGenerator', OWNER)
    assert unreal.EditorAssetLibrary.save_loaded_asset(retargeter)
    inputs = unreal.IKRetargetBatchOperationInputs()
    inputs.assets_to_retarget = source_data
    inputs.source_mesh = source_mesh
    inputs.target_mesh = mesh
    inputs.ik_retarget_asset = retargeter
    inputs.target_path = DEST+'/'+body
    inputs.prefix = 'GASP_'
    inputs.include_referenced_assets = False
    inputs.overwrite_existing_files = True
    outputs = unreal.IKRetargetBatchOperation.run_batch_retarget(inputs)
    assert len(outputs)==len(CLIPS), (body,len(outputs))
    checks = []
    options = unreal.AnimPoseEvaluationOptions()
    for data in outputs:
        clip = data.get_asset()
        assert clip.get_editor_property('skeleton')==mesh.skeleton, clip.get_path_name()
        # Source notifies point back to Epic's gameplay/audio/search Blueprints.
        # Keep curve data, but let the army's eventual event/contact layer author
        # its own notifies. Never carry source database branch-ins into this rig.
        for notify in list(unreal.AnimationLibrary.get_animation_notify_events(clip)):
            unreal.AnimationLibrary.remove_animation_notify_events_by_name(clip,notify.notify_name)
        assert not unreal.AnimationLibrary.get_animation_notify_events(clip)
        duration = clip.get_play_length()
        samples = []
        for fraction in [0,.25,.5,.75,1]:
            pose = unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,duration*fraction,options)
            landmarks = {}
            for bone in ['Hips','Head','LeftFoot','RightFoot','LeftHand','RightHand']:
                transform = unreal.AnimPoseExtensions.get_bone_pose(pose,bone,unreal.AnimPoseSpaces.WORLD)
                p=transform.translation
                assert all(math.isfinite(v) for v in [p.x,p.y,p.z]), (body,bone)
                landmarks[bone]=[p.x,p.y,p.z]
            assert 35 < landmarks['Head'][2]-landmarks['Hips'][2] < 100, ('Collapsed torso',body,clip.get_path_name())
            samples.append({'time':duration*fraction,'bones':landmarks})
        # Notify edits do not mark the package dirty in this engine API.
        assert unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=False)
        checks.append({'asset':clip.get_path_name(),'duration':duration,'samples':samples})
    report.append({'body':body,'mesh':mesh.get_path_name(),'auto_fbik':fbik,'mapping':mapping,'retargeter':retargeter.get_path_name(),
                   'ops':[str(controller.get_op_name(i)) for i in range(controller.get_num_retarget_ops())],
                   'clips':checks,'source_notifies_removed':True,'visual_acceptance':False})
    (Path(unreal.Paths.project_saved_dir())/'gasp-retarget-report.json').write_text(json.dumps(report,indent=2))
print('GASP_RETARGET_PROTOTYPE', [(r['body'],len(r['clips']),r['auto_fbik']) for r in report])
