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
    for state in ['Standing', 'Walking', 'Running']:
        source={'Standing':'Stand','Walking':'Walk','Running':'Run'}[state]
        landing=unreal.load_asset('/Game/Characters/GASP/Motion/'+body+'/Animations/GASP_M_Neutral_Jump_F_Land_'+source+'_Light_Rfoot')
        assert landing, (body, state)
        profile.set_editor_property('landing_'+state.lower(),landing)
        idle=unreal.load_asset('/Game/Characters/GASP/Motion/'+body+'/Animations/GASP_M_Neutral_Stand_Idle_Loop')
        idle_pose=unreal.AnimPoseExtensions.get_anim_pose_at_time(idle,0,options)
        floor=min(unreal.AnimPoseExtensions.get_bone_pose(idle_pose,b,unreal.AnimPoseSpaces.WORLD).translation.z for b in ['LeftFoot','RightFoot'])
        contact=None
        for frame in range(int(landing.get_play_length()*60)):
            pose=unreal.AnimPoseExtensions.get_anim_pose_at_time(landing,frame/60,options)
            root_z=unreal.AnimPoseExtensions.get_bone_pose(pose,root,unreal.AnimPoseSpaces.WORLD).translation.z
            feet=min(unreal.AnimPoseExtensions.get_bone_pose(pose,b,unreal.AnimPoseSpaces.WORLD).translation.z for b in ['LeftFoot','RightFoot'])
            if root_z<=1 and feet<=floor+1.5:
                contact=frame/60;break
        assert contact is not None,(body,state)
        profile.set_editor_property(state.lower()+'_contact_seconds',contact)
        print('LANDING_CONTACT',body,state,contact)
    assert unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
print('GASP_TRAVERSAL_PROFILES_READY')
