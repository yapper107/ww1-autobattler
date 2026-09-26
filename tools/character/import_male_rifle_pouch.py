"""Import the male articulated pouch with an exact bind-vertex mask.

No skeletal mesh rebuild or clothing rebind. The atlas, including its faction
texture parameter, remains available; only the selected rigid pouch is hidden.
"""
import json
import math
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir());folder=project/'Art/authored_rifle/Male'
spec=json.loads((folder/'pouch-mask.json').read_text())
assert spec['selected_count']==41
mesh=unreal.load_asset('/Game/Characters/GASP/Bodies/SK_Male_GASP');assert mesh
atlas_slot=next(slot.material_slot_name for slot in mesh.materials if 'maleatlas' in slot.material_interface.get_name())
vertices=unreal.GaspAuthoringLibrary.skeletal_mesh_positions(mesh,atlas_slot);assert vertices
positions={tuple(round(v,4) for v in (p.x,p.y,p.z)) for p in vertices}
def selected(p):
    return (any(all(b['lo'][a]<=p[a]<=b['hi'][a] for a in range(3)) for b in spec['boxes']) and
            not any(math.dist(p,q)<spec['excluded_radius_cm'] for q in spec['exclude_positions_cm']))
actual=[p for p in positions if selected(p)]
(project/'Saved/AnimationReview/male-pouch-mask-diagnostic.json').write_text(json.dumps(dict(actual=actual,expected=spec['selected_positions_cm'],all_positions=sorted(positions)),indent=2))
assert len(actual)==41,('Imported mask selection differs from measured source',len(actual))
assert all(min(math.dist(p,q) for q in actual)<.03 for p in spec['selected_positions_cm'])
edit=unreal.MaterialEditingLibrary;assets=unreal.AssetToolsHelpers.get_asset_tools();dest='/Game/Characters/GASP/Equipment'
def material(name):
    m=unreal.load_asset(dest+'/'+name) or assets.create_asset(name,dest,unreal.Material,unreal.MaterialFactoryNew())
    assert m;edit.delete_all_material_expressions(m);return m

def constant(m,prop,value,y):
    e=edit.create_material_expression(m,unreal.MaterialExpressionConstant,-200,y);e.set_editor_property('r',value)
    assert edit.connect_material_property(e,'',prop)

webbing=material('M_MalePouchWebbing')
color=edit.create_material_expression(webbing,unreal.MaterialExpressionConstant3Vector,-300,0)
def linear(v):return v/12.92 if v<=.04045 else ((v+.055)/1.055)**2.4
color.set_editor_property('constant',unreal.LinearColor(*(linear(v) for v in [.4,.404,.282]),1))
assert edit.connect_material_property(color,'',unreal.MaterialProperty.MP_BASE_COLOR)
constant(webbing,unreal.MaterialProperty.MP_ROUGHNESS,.95,150);constant(webbing,unreal.MaterialProperty.MP_SPECULAR,.1,250)
edit.recompile_material(webbing);unreal.EditorAssetLibrary.save_loaded_asset(webbing)
interior=unreal.load_asset(dest+'/M_PouchInterior');assert interior
report=[]
for name in ['SM_MaleRiflePouch','SM_MaleRiflePouchFlap']:
    task=unreal.AssetImportTask();task.filename=str(folder/(name+'.fbx'));task.destination_path=dest;task.destination_name=name
    task.automated=task.save=task.replace_existing=True
    opt=unreal.FbxImportUI();opt.automated_import_should_detect_type=False
    opt.import_mesh=True;opt.import_materials=False;opt.import_textures=False;opt.import_animations=False;opt.import_as_skeletal=False
    opt.mesh_type_to_import=unreal.FBXImportType.FBXIT_STATIC_MESH
    data=opt.static_mesh_import_data;data.combine_meshes=True;data.auto_generate_collision=False
    data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
    data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory=unreal.FbxFactory();task.options=opt;assets.import_asset_tasks([task])
    prop=unreal.load_asset(dest+'/'+name);assert prop
    for i,slot in enumerate(prop.static_materials):prop.set_material(i,interior if 'interior' in str(slot.material_slot_name).lower() else webbing)
    unreal.EditorAssetLibrary.save_loaded_asset(prop,only_if_is_dirty=False);report.append(prop.get_path_name())

mat=material('M_maleatlasArticulatedPouch')
texture=edit.create_material_expression(mat,unreal.MaterialExpressionTextureSampleParameter2D,-500,-350)
texture.set_editor_property('parameter_name','BaseColorTexture')
texture.set_editor_property('texture',unreal.load_asset('/Game/Characters/Male/T_Male_Azure'))
assert edit.connect_material_property(texture,'RGB',unreal.MaterialProperty.MP_BASE_COLOR)
constant(mat,unreal.MaterialProperty.MP_ROUGHNESS,.95,-150);constant(mat,unreal.MaterialProperty.MP_SPECULAR,.1,-50)
mat.set_editor_property('blend_mode',unreal.BlendMode.BLEND_MASKED)
position=edit.create_material_expression(mat,unreal.MaterialExpressionPreSkinnedPosition,-1000,200)
mask=edit.create_material_expression(mat,unreal.MaterialExpressionCustom,-750,200)
mask.set_editor_property('description','Exact male pouch bind vertices; preserve adjacent straps')
mask.set_editor_property('output_type',unreal.CustomMaterialOutputType.CMOT_FLOAT1)
argument=unreal.CustomInput();argument.set_editor_property('input_name','Position');mask.set_editor_property('inputs',[argument])
def vector(p):return 'float3('+','.join(format(v,'.9g') for v in p)+')'
boxes=['(all(Position>='+vector(b['lo'])+') && all(Position<='+vector(b['hi'])+'))' for b in spec['boxes']]
code='if (!('+' || '.join(boxes)+')) return 1.0;\n'
for p in spec['exclude_positions_cm']:
    code+='if (distance(Position,'+vector(p)+') < '+str(spec['excluded_radius_cm'])+') return 1.0;\n'
code+='return 0.0;'
mask.set_editor_property('code',code)
assert edit.connect_material_expressions(position,'',mask,'Position')
# Classify in the vertex stage, then interpolate the 0/1 triangle membership.
# A pixel-stage box would also cut through overlapping cloth and belt surfaces.
interpolator=edit.create_material_expression(mat,unreal.MaterialExpressionVertexInterpolator,-300,200)
assert edit.connect_material_expressions(mask,'',interpolator,'')
assert edit.connect_material_property(interpolator,'',unreal.MaterialProperty.MP_OPACITY_MASK)
edit.set_material_usage(mat,unreal.MaterialUsage.MATUSAGE_SKELETAL_MESH)
assert unreal.GaspAuthoringLibrary.finalize_articulated_pouch_material(mat)
errors=edit.recompile_material(mat);assert not errors,errors
unreal.EditorAssetLibrary.save_loaded_asset(mat,only_if_is_dirty=False)
result=dict(assets=report,masked_unique_positions=len(actual),protected_adjacent_vertices=len(spec['exclude_positions_cm']),hinge_cm=spec['hinge_cm'],mask=mat.get_path_name(),skeletal_mesh_rebuilt=False)
(project/'Saved/AnimationReview/male-rifle-pouch-import.json').write_text(json.dumps(result,indent=2))
unreal.log('ARMY_MALE_RIFLE_POUCH '+json.dumps(result))
