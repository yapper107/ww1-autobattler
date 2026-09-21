"""Run with UnrealEditor-Cmd project -run=pythonscript -script=.../Tools/character/import_unreal.py.
Source FBXs live in project/Art/female_rifle (synced by build.sh).
"""
import unreal,json,re
from pathlib import Path
base=Path(unreal.Paths.project_dir())/'Art/female_rifle';manifest=json.loads((base/'manifest.json').read_text())
dest='/Game/Characters/FemaleRifle';assets=unreal.AssetToolsHelpers.get_asset_tools()
def imp(name,kind,skeleton=None):
 t=unreal.AssetImportTask();t.filename=str(base/(name+'.fbx'));t.destination_path=dest;t.destination_name=name;t.automated=True;t.save=True;t.replace_existing=True
 o=unreal.FbxImportUI();o.automated_import_should_detect_type=False;o.import_materials=False;o.import_textures=False;o.create_physics_asset=False
 o.import_mesh=kind!='anim';o.import_as_skeletal=kind=='skeletal';o.import_animations=kind=='anim'
 o.mesh_type_to_import={'anim':unreal.FBXImportType.FBXIT_ANIMATION,'skeletal':unreal.FBXImportType.FBXIT_SKELETAL_MESH,'static':unreal.FBXImportType.FBXIT_STATIC_MESH}[kind]
 if skeleton:o.skeleton=skeleton
 data={'anim':o.anim_sequence_import_data,'skeletal':o.skeletal_mesh_import_data,'static':o.static_mesh_import_data}[kind]
 data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False;data.import_uniform_scale=1.
 if kind=='anim':
  data.set_editor_property('animation_length',unreal.FBXAnimationLengthImportType.FBXALIT_EXPORTED_TIME);data.set_editor_property('use_default_sample_rate',False);data.set_editor_property('custom_sample_rate',60);data.set_editor_property('import_custom_attribute',False)
 else:data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
 if kind=='static':data.combine_meshes=True;data.auto_generate_collision=False
 t.options=o;assets.import_asset_tasks([t]);asset=unreal.load_asset(dest+'/'+name)
 if not asset:raise RuntimeError('Missing imported '+name+': '+str(t.imported_object_paths))
 return asset
mesh=imp('SK_Female_Rifle','skeletal');gun=imp('SM_Rifle','static')
# Make color explicit. Do not use generated wood grain, baked lighting, or metallic textures.
def norm(x):return re.sub('[^a-z0-9]','',str(x).lower()).removesuffix('002')
palette={norm(k):v for k,v in manifest['palette_linear'].items()}
for obj in [mesh,gun]:
 slots=list(obj.materials if isinstance(obj,unreal.SkeletalMesh) else obj.static_materials)
 for i,slot in enumerate(slots):
  key=norm(slot.material_slot_name);color=palette.get(key)
  if color is None:raise RuntimeError('Unknown material slot '+str(slot.material_slot_name))
  name='M_'+key;path=dest+'/'+name
  mat=unreal.load_asset(path) if unreal.EditorAssetLibrary.does_asset_exist(path) else assets.create_asset(name,dest,unreal.Material,unreal.MaterialFactoryNew())
  unreal.MaterialEditingLibrary.delete_all_material_expressions(mat)
  c=unreal.MaterialEditingLibrary.create_material_expression(mat,unreal.MaterialExpressionVectorParameter,-200,0);c.set_editor_property('parameter_name','Tint');c.set_editor_property('default_value',unreal.LinearColor(*color));unreal.MaterialEditingLibrary.connect_material_property(c,'',unreal.MaterialProperty.MP_BASE_COLOR)
  for prop,val,y in [(unreal.MaterialProperty.MP_ROUGHNESS,.95,150),(unreal.MaterialProperty.MP_SPECULAR,.1,250)]:
   n=unreal.MaterialEditingLibrary.create_material_expression(mat,unreal.MaterialExpressionConstant,-200,y);n.set_editor_property('r',val);unreal.MaterialEditingLibrary.connect_material_property(n,'',prop)
  mat.set_editor_property('two_sided','cloth' in key);unreal.MaterialEditingLibrary.set_material_usage(mat,unreal.MaterialUsage.MATUSAGE_SKELETAL_MESH);unreal.MaterialEditingLibrary.recompile_material(mat);slot.set_editor_property('material_interface',mat);slots[i]=slot;unreal.EditorAssetLibrary.save_loaded_asset(mat)
 obj.set_editor_property('materials' if isinstance(obj,unreal.SkeletalMesh) else 'static_materials',slots);unreal.EditorAssetLibrary.save_loaded_asset(obj)
results=[]
for c in manifest['clips']:
 a=imp(c['name'],'anim',mesh.skeleton);results.append({'asset':a.get_path_name(),'duration':a.get_play_length(),'expected':c['duration']})
 if abs(a.get_play_length()-c['duration'])>1/60+.001:raise RuntimeError('Timing changed: '+str(results[-1]))
unreal.EditorAssetLibrary.save_directory(dest,only_if_is_dirty=False)
(Path(unreal.Paths.project_saved_dir())/'character-import.json').write_text(json.dumps({'mesh':mesh.get_path_name(),'animations':results,'materials':len(palette)},indent=2))
print('ARMY_CHARACTER_IMPORT_OK',len(results))
