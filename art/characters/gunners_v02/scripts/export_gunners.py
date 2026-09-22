import bpy,json
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
from mathutils import Matrix,Vector
out=(OUTPUT/'exports');out.mkdir(exist_ok=True)
scene=bpy.context.scene;report=[]
for ob in scene.objects:
 for mod in ob.modifiers:
  if mod.type=='CLOTH':mod.show_viewport=False;mod.show_render=False
def select(obs):
 bpy.ops.object.select_all(action='DESELECT')
 for o in obs:o.hide_set(False);o.hide_viewport=False;o.select_set(True)
 bpy.context.view_layer.objects.active=obs[0]
def export(path,obs,animate=False):
 select(obs);bpy.ops.export_scene.fbx(filepath=str(path),use_selection=True,object_types={'MESH','ARMATURE'},axis_forward='-Y',axis_up='Z',path_mode='COPY',embed_textures=True,add_leaf_bones=False,use_armature_deform_only=False,bake_anim=animate,bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,bake_anim_simplify_factor=0,bake_anim_step=1,use_custom_props=True)
mg=bpy.data.objects['Machine_Gun_Refined'];g=mg.copy();g.data=mg.data.copy();scene.collection.objects.link(g);g.name='SM_Arcane_MachineGun';g.matrix_world=Matrix.Identity(4);g.animation_data_clear();g.hide_set(False)
export(out/'SM_Arcane_MachineGun_v02.fbx',[g]);bpy.data.objects.remove(g,do_unlink=True)
for label,rig_name,body_name,coat_name in [('Male','Male_Azure_Rig','Male_Azure_Skinned','Male_Coat_Cloth'),('Female','Female_Mixamo_Rig','Female_Azure_Body_ClothReady','Female_Coat_Cloth')]:
 src=bpy.data.objects[rig_name];body=bpy.data.objects[body_name];coat=bpy.data.objects[coat_name];gun=bpy.data.objects[label+'_Machine_Gun']
 clips=[('MG_Standing',range(61,101)),('MG_Walking',range(121,181)),('MG_Crouching',range(271,331))];samples={}
 for name,frames in clips:
  arr=[]
  for f in frames:
   scene.frame_set(f);bpy.context.view_layer.update();deps=bpy.context.evaluated_depsgraph_get();ev=src.evaluated_get(deps)
   mats={p.name:p.matrix.copy() for p in ev.pose.bones};mats['MG_Weapon']=src.matrix_world.inverted()@gun.evaluated_get(deps).matrix_world;arr.append(mats)
  samples[name]=arr
 rig=src.copy();rig.data=src.data.copy();scene.collection.objects.link(rig);rig.name='GunnerRig_'+label;rig.animation_data_clear();rig.matrix_world=src.matrix_world.copy();rig.matrix_world.translation=(0,0,0)
 for p in rig.pose.bones:
  for c in list(p.constraints):p.constraints.remove(c)
  p.matrix_basis=Matrix.Identity(4)
 select([rig]);bpy.ops.object.mode_set(mode='EDIT');b=rig.data.edit_bones.new('MG_Weapon');b.head=(0,1.1,.1);b.tail=(0,1.2,.1);b.parent=rig.data.edit_bones['mixamorig:Spine2'];b.use_deform=False;bpy.ops.object.mode_set(mode='OBJECT')
 meshes=[];offset=src.matrix_world.translation
 for orig in [body,coat]:
  o=orig.copy();o.data=orig.data.copy();scene.collection.objects.link(o);o.name=label+('_Body' if orig==body else '_Coat');o.animation_data_clear();m=orig.matrix_world.copy();m.translation-=offset;o.parent=rig;o.matrix_world=m
  for mod in list(o.modifiers):
   if mod.type=='ARMATURE':mod.object=rig
   else:o.modifiers.remove(mod)
  if orig==coat:o['RuntimeCloth']='Configure Unreal Chaos cloth; Blender cloth simulation is not stored in FBX.'
  meshes.append(o)
 rig.data.pose_position='REST';export(out/('SK_'+label+'_Gunner_v02.fbx'),[rig]+meshes);rig.data.pose_position='POSE'
 for name,arr in samples.items():
  rig.animation_data_create();act=bpy.data.actions.new(label+'_'+name);rig.animation_data.action=act
  for frame,mats in enumerate(arr,1):
   for p in rig.pose.bones:
    kwargs={'parent_matrix':mats[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
    p.matrix_basis=p.bone.convert_local_to_pose(mats[p.name],p.bone.matrix_local,invert=True,**kwargs);p.rotation_mode='QUATERNION'
    for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
  scene.frame_start=1;scene.frame_end=len(arr);export(out/('A_'+label+'_'+name+'_v02.fbx'),[rig],True);rig.animation_data_clear()
  print('EXPORTED',label,name,len(arr),flush=True)
 report.append({'character':label,'bones':len(rig.data.bones),'mesh_vertices':{o.name:len(o.data.vertices) for o in meshes},'clips':[{'name':n,'frames':len(a)} for n,a in samples.items()],'weapon_bone':'MG_Weapon','cloth_runtime_exported':False})
 for o in meshes+[rig]:bpy.data.objects.remove(o,do_unlink=True)
(out/'manifest.json').write_text(json.dumps({'fps':60,'assets':report,'scope':'Blender authoring and review exports. Unreal integration/Chaos setup not performed.'},indent=2));print('EXPORT_COMPLETE',flush=True)
