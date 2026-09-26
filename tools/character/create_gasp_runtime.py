"""Compile the constant Motion Matching node data required by cooked builds."""
import unreal

database = unreal.load_asset('/Game/Characters/GASP/Motion/Female/PSD_standing')
assert database, 'Build the motion library first'
blueprint = unreal.GaspAuthoringLibrary.create_motion_node_template(database)
assert blueprint, 'Motion template compilation failed'
assert unreal.EditorAssetLibrary.save_loaded_asset(blueprint)
unreal.log('GASP_RUNTIME_TEMPLATE ' + blueprint.get_path_name())
