"""Import the authored female pouch and preserve the runtime body's cloth binding.

Only its webbing material is duplicated. A bind-space mask hides the original
right-front rigid pouch; its replacement has an open interior and a separate lid.
"""
import json
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
dest='/Game/Characters/GASP/Equipment'
assets=unreal.AssetToolsHelpers.get_asset_tools();edit=unreal.MaterialEditingLibrary
mesh=unreal.load_asset('/Game/Characters/GASP/Bodies/SK_Female_GASP')
bind_center=(-13.25,9.2,100.6);bind_extents=(6.9,6.5,8.4)
vertices=unreal.GaspAuthoringLibrary.female_belt_pouch_positions(mesh)
selected=[p for p in vertices if all(abs(v-c)<r for v,c,r in zip((p.x,p.y,p.z),bind_center,bind_extents))]
assert len(vertices)==329 and len(selected)==82,(len(vertices),len(selected))
webbing=next(s.material_interface for s in mesh.materials if 'webbing' in s.material_interface.get_name())
interior=unreal.load_asset(dest+'/M_PouchInterior') or unreal.EditorAssetLibrary.duplicate_asset(webbing.get_path_name(),dest+'/M_PouchInterior')
edit.delete_all_material_expressions(interior)
color=edit.create_material_expression(interior,unreal.MaterialExpressionConstant3Vector,-200,0)
color.set_editor_property('constant',unreal.LinearColor(.024,.029,.014,1))
edit.connect_material_property(color,'',unreal.MaterialProperty.MP_BASE_COLOR)
rough=edit.create_material_expression(interior,unreal.MaterialExpressionConstant,-200,150);rough.set_editor_property('r',1)
edit.connect_material_property(rough,'',unreal.MaterialProperty.MP_ROUGHNESS)
edit.recompile_material(interior);unreal.EditorAssetLibrary.save_loaded_asset(interior)
report=[]
for name in ['SM_RiflePouch','SM_RiflePouchFlap','SM_RifleCharger']:
    task=unreal.AssetImportTask();task.filename=str(project/'Art/authored_rifle/Female'/(name+'.fbx'))
    task.destination_path=dest;task.destination_name=name;task.automated=True;task.save=True;task.replace_existing=True
    opt=unreal.FbxImportUI();opt.automated_import_should_detect_type=False
    opt.import_mesh=True;opt.import_materials=True;opt.import_textures=False;opt.import_animations=False
    opt.import_as_skeletal=False;opt.mesh_type_to_import=unreal.FBXImportType.FBXIT_STATIC_MESH
    data=opt.static_mesh_import_data;data.combine_meshes=True;data.auto_generate_collision=False
    data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
    data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
    task.factory=unreal.FbxFactory();task.options=opt;assets.import_asset_tasks([task])
    prop=unreal.load_asset(dest+'/'+name);assert prop
    for slot in range(len(prop.static_materials)):
        label=str(prop.static_materials[slot].material_slot_name).lower()
        material=(unreal.load_asset('/Game/Characters/FemaleRifle/M_handlingcharcoalsteel')
                  if name=='SM_RifleCharger' else interior if 'interior' in label else webbing)
        assert material,(name,label)
        prop.set_material(slot,material)
    unreal.EditorAssetLibrary.save_loaded_asset(prop,only_if_is_dirty=False)
    report.append({'asset':prop.get_path_name(),'sections':prop.get_num_sections(0)})

path=dest+'/M_WebbingArticulatedPouch'
material=unreal.load_asset(path) or unreal.EditorAssetLibrary.duplicate_asset(webbing.get_path_name(),path)
# This tool owns its generated material; recreate the flat palette to keep repeat
# imports deterministic without accumulating duplicate mask expressions.
edit.delete_all_material_expressions(material)
tint=edit.create_material_expression(material,unreal.MaterialExpressionVectorParameter,-600,-300)
tint.set_editor_property('parameter_name','Tint')
base=edit.get_material_default_vector_parameter_value(webbing,'Tint')
tint.set_editor_property('default_value',base)
edit.connect_material_property(tint,'',unreal.MaterialProperty.MP_BASE_COLOR)
rough=edit.create_material_expression(material,unreal.MaterialExpressionConstant,-400,-200);rough.set_editor_property('r',.95)
edit.connect_material_property(rough,'',unreal.MaterialProperty.MP_ROUGHNESS)
specular=edit.create_material_expression(material,unreal.MaterialExpressionConstant,-400,-100);specular.set_editor_property('r',.1)
edit.connect_material_property(specular,'',unreal.MaterialProperty.MP_SPECULAR)
material.set_editor_property('blend_mode',unreal.BlendMode.BLEND_MASKED)
def node(cls,x,y):return edit.create_material_expression(material,cls,x,y)
def link(a,b,pin):assert edit.connect_material_expressions(a,'',b,pin)
bind_position=node(unreal.MaterialExpressionPreSkinnedPosition,-1450,0)
# Pre-skinned position is vertex-stage data. Interpolate it for the pixel-stage
# opacity test; direct use compiles under NullRHI but fails on D3D11/SM5.
position=node(unreal.MaterialExpressionVertexInterpolator,-1200,0);link(bind_position,position,'')
origin=node(unreal.MaterialExpressionVectorParameter,-1200,150)
origin.set_editor_property('parameter_name','PouchBindCenter');origin.set_editor_property('default_value',unreal.LinearColor(*bind_center,0))
relative=node(unreal.MaterialExpressionSubtract,-1000,0);link(position,relative,'A');link(origin,relative,'B')
axes=[]
for i,label in enumerate('XYZ'):
    axis=node(unreal.MaterialExpressionVectorParameter,-1200,350+i*170)
    axis.set_editor_property('parameter_name','PouchBindAxis'+label)
    axis.set_editor_property('default_value',unreal.LinearColor(*(1/bind_extents[a] if i==a else 0 for a in range(3)),0))
    dot=node(unreal.MaterialExpressionDotProduct,-800,350+i*170);link(relative,dot,'A');link(axis,dot,'B')
    absolute=node(unreal.MaterialExpressionAbs,-600,350+i*170);link(dot,absolute,'');axes.append(absolute)
maximum=node(unreal.MaterialExpressionMax,-400,400);link(axes[0],maximum,'A');link(axes[1],maximum,'B')
last=node(unreal.MaterialExpressionMax,-200,450);link(maximum,last,'A');link(axes[2],last,'B')
edge=node(unreal.MaterialExpressionSubtract,0,450);link(last,edge,'A');edge.set_editor_property('const_b',1)
sharp=node(unreal.MaterialExpressionMultiply,200,450);link(edge,sharp,'A');sharp.set_editor_property('const_b',100)
edit.connect_material_property(sharp,'',unreal.MaterialProperty.MP_OPACITY_MASK)
# Duplicating the opaque palette carries this cached flag into the new material.
# In UE 5.8, changing BlendMode and recompiling leaves GetBlendMode() opaque until
# the flag is cleared, so even a constant-zero opacity mask was ignored in game.
assert unreal.GaspAuthoringLibrary.finalize_articulated_pouch_material(material)
errors=edit.recompile_material(material);assert not errors,errors
unreal.EditorAssetLibrary.save_loaded_asset(material,only_if_is_dirty=False)
report.append({'mask':material.get_path_name(),'base':webbing.get_path_name(),'tint':str(base),'masked_pouch_vertices':len(selected),'all_pouch_vertices':len(vertices)})
(project/'Saved/AnimationReview/rifle-pouch-import.json').write_text(json.dumps(report,indent=2))
unreal.log('ARMY_RIFLE_POUCH '+json.dumps(report))
