"""Blender 5.2: --background approved.blend --python export_blender.py -- output-dir inventory.json.
Evaluates the approved constraints; exports portable FBX instead of relying on Blender IK.
"""
import bpy, sys, json, math
from pathlib import Path
from mathutils import Matrix
args=sys.argv[sys.argv.index('--')+1:];out=Path(args[0]);out.mkdir(parents=True,exist_ok=True)
clips=json.loads(Path(args[1]).read_text())['clips'];scene=bpy.context.scene
arm=bpy.data.objects['Female_Mixamo_Rig'];gun=bpy.data.objects['Rifle_Azure_Equipped']
meshes=[bpy.data.objects[n] for n in ['Female_Azure_Body_ClothReady','Coat_Lower_Cloth']]
for o in meshes:
 for m in o.modifiers:
  if m.type=='CLOTH':m.show_viewport=False;m.show_render=False
for t in arm.animation_data.nla_tracks:t.mute=True
scene.render.fps=60
# Keep identical bind transforms and control bones in the mesh and every sequence.
rig=arm.copy();rig.data=arm.data.copy();rig.name='SoldierRig';scene.collection.objects.link(rig);rig.animation_data_clear()
for p in rig.pose.bones:
 for c in list(p.constraints):p.constraints.remove(c)
 p.matrix_basis=Matrix.Identity(4)
for b in rig.data.bones:b.use_deform=True
rig.hide_set(False);rig.hide_viewport=False;rig.hide_render=False
export_meshes=[];palette={}
for obj in meshes:
 o=obj.copy();o.data=obj.data.copy();scene.collection.objects.link(o);o.animation_data_clear();o.parent=rig;o.matrix_world=obj.matrix_world.copy();o.hide_set(False);o.hide_viewport=False
 for m in list(o.modifiers):
  if m.type=='ARMATURE':m.object=rig
  else:o.modifiers.remove(m)
 export_meshes.append(o)
for obj in meshes+[gun]:
 for mat in obj.data.materials:
  if mat:
   bs=next((n for n in mat.node_tree.nodes if n.type=='BSDF_PRINCIPLED'),None) if mat.use_nodes else None
   palette[mat.name]=list(bs.inputs['Base Color'].default_value if bs else mat.diffuse_color)
def select(objects):
 bpy.ops.object.select_all(action='DESELECT')
 for o in objects:o.select_set(True)
 bpy.context.view_layer.objects.active=objects[0]
def export(path,objects,animate):
 select(objects);bpy.ops.export_scene.fbx(filepath=str(path),use_selection=True,object_types={'ARMATURE','MESH'},axis_forward='-Y',axis_up='Z',add_leaf_bones=False,use_armature_deform_only=False,bake_anim=animate,bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,bake_anim_simplify_factor=0.,bake_anim_step=1.,use_mesh_modifiers=True,mesh_smooth_type='OFF',path_mode='STRIP')
rig.data.pose_position='REST';export(out/'SK_Female_Rifle.fbx',[rig]+export_meshes,False);rig.data.pose_position='POSE'
# The rifle mesh origin and axes coincide with WeaponSocket_R; export without scene constraints.
g=gun.copy();g.data=gun.data.copy();scene.collection.objects.link(g);g.animation_data_clear();g.parent=None;g.matrix_world=Matrix.Identity(4);g.hide_set(False);g.hide_viewport=False
for c in list(g.constraints):g.constraints.remove(c)
export(out/'SM_Rifle.fbx',[g],False)
report=[]
for item in clips:
 action=bpy.data.actions[item['action']];arm.animation_data.action=action
 end=241 if 'Rifle_death' in action.name else item['frames'];samples=[]
 for f in range(1,end+1):
  scene.frame_set(f);bpy.context.view_layer.update()
  ev=arm.evaluated_get(bpy.context.evaluated_depsgraph_get());samples.append({p.name:p.matrix.copy() for p in ev.pose.bones})
 rig.animation_data_create();rig.animation_data.action=bpy.data.actions.new('Baked_'+action.name)
 for f,mats in enumerate(samples,1):
  for p in rig.pose.bones:
   kwargs={'parent_matrix':mats[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
   p.matrix_basis=p.bone.convert_local_to_pose(mats[p.name],p.bone.matrix_local,invert=True,**kwargs);p.rotation_mode='QUATERNION'
   for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=f,group=p.name)
 scene.frame_start=1;scene.frame_end=end
 name='A_'+action.name.removeprefix('Rifle_');export(out/(name+'.fbx'),[rig],True)
 travel=item['source_horizontal_travel_m'];speed=math.hypot(travel[0],travel[2])/item['duration_seconds']
 report.append(dict(name=name,source_action=action.name,frames=end,duration=(end-1)/60,reference_speed_mps=speed))
 print('EXPORTED',name,end,flush=True)
 rig.animation_data_clear()
(out/'manifest.json').write_text(json.dumps({'fps':60,'grip':'C_forward','clips':report,'palette_linear':palette,'bones':[b.name for b in rig.data.bones]},indent=2))
print('EXPORT_COMPLETE',len(report),flush=True)
