"""Author a bounded vault segment, excluding GASP's extrapolated falling tail."""
import unreal
for body,root in [('Female','SoldierRig'),('Male','Male_Azure_Rig')]:
    clip=unreal.load_asset('/Game/Characters/GASP/Motion/'+body+'/Animations/GASP_M_Neutral_Traversal_Vault_1_0_stand_F_Lfoot')
    assert clip
    options=unreal.AnimPoseEvaluationOptions()
    airborne=False
    land=None
    for frame in range(int(clip.get_play_length()*60)+1):
        pose=unreal.AnimPoseExtensions.get_anim_pose_at_time(clip,frame/60,options)
        p=unreal.AnimPoseExtensions.get_bone_pose(pose,root,unreal.AnimPoseSpaces.WORLD).translation
        airborne|=p.z>50
        if airborne and p.z<=0:
            land=frame/60
            break
    assert land and .5<land<1.5,(body,land)
    folder='/Game/Characters/GASP/Actions/'+body
    path=folder+'/DA_Vault'
    factory=unreal.DataAssetFactory()
    factory.set_editor_property('data_asset_class',unreal.TraversalAnimationProfile)
    profile=unreal.load_asset(path) if unreal.EditorAssetLibrary.does_asset_exist(path) else unreal.AssetToolsHelpers.get_asset_tools().create_asset('DA_Vault',folder,unreal.TraversalAnimationProfile,factory)
    profile.set_editor_property('animation',clip)
    profile.set_editor_property('land_seconds',land)
    assert unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
print('GASP_TRAVERSAL_PROFILES_READY')
