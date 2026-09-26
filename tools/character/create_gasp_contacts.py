"""Add independent virtual feet for Epic foot planting; preserve weighted bones."""
import unreal
for body in ['Female','Male']:
    mesh=unreal.load_asset('/Game/Characters/GASP/Bodies/SK_'+body+'_GASP')
    assert unreal.GaspAuthoringLibrary.synchronize_normalized_skeleton(mesh)
    skeleton=unreal.load_asset('/Game/Characters/GASP/Bodies/SKEL_'+body+'_GASP')
    assert skeleton and unreal.GaspAuthoringLibrary.create_foot_targets(skeleton)
    assert unreal.EditorAssetLibrary.save_loaded_asset(skeleton,only_if_is_dirty=False)
print('GASP_FOOT_TARGETS_READY')
