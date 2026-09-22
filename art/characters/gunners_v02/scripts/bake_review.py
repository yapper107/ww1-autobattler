import bpy,json,math,time
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
from mathutils import Vector
out=OUTPUT;scene=bpy.context.scene
bpy.ops.ptcache.free_bake_all()
for cache in (out/'blendcache_Azure_Gunners_Hands_Cloth_v02').glob('*.bphys'):cache.unlink()
cloths=[(o,m) for o in scene.objects for m in o.modifiers if m.type=='CLOTH']
for o,m in cloths:
 m.show_viewport=True;m.show_render=True;m.point_cache.use_disk_cache=True;m.point_cache.frame_start=1;m.point_cache.frame_end=360
scene.frame_set(1);bpy.ops.wm.save_as_mainfile(filepath=str(out/'Azure_Gunners_Hands_Cloth_v02.blend'))
print('CLOTH_BAKE_START',[(o.name,len(o.data.vertices)) for o,m in cloths],flush=True)
bpy.ops.ptcache.bake_all(bake=True)
print('CLOTH_BAKE_DONE',[(o.name,m.point_cache.is_baked) for o,m in cloths],flush=True)
report={'cloth':[],'grips':[]}
for frame in [85,175,300]:
 scene.frame_set(frame);bpy.context.view_layer.update();deps=bpy.context.evaluated_depsgraph_get()
 for o,m in cloths:
  ev=o.evaluated_get(deps);rig=next(mod.object for mod in o.modifiers if mod.type=='ARMATURE');bone=rig.data.bones['mixamorig:Hips'];pose=rig.pose.bones['mixamorig:Hips'];xf=rig.matrix_world@pose.matrix@bone.matrix_local.inverted()@rig.matrix_world.inverted()@o.matrix_world
  delta=[(ev.matrix_world@ev.data.vertices[v.index].co-xf@v.co).length for v in o.data.vertices]
  report['cloth'].append({'object':o.name,'frame':frame,'baked':m.point_cache.is_baked,'max_motion_from_skin_m':max(delta),'mean_motion_from_skin_m':sum(delta)/len(delta),'finite':all(math.isfinite(d) for d in delta)})
 for prefix in ['Male','Female']:
  rig=bpy.data.objects['Male_Azure_Rig' if prefix=='Male' else 'Female_Mixamo_Rig'];ev=rig.evaluated_get(deps)
  for side in ['Left','Right']:
   target=bpy.data.objects[prefix+'_'+side+'_MG_Grip'].evaluated_get(deps);p=ev.pose.bones['mixamorig:'+side+'Hand'];err=(rig.matrix_world@p.head-target.matrix_world.translation).length
   report['grips'].append({'rig':prefix,'side':side,'frame':frame,'wrist_error_m':err})
 scene.render.filepath=str(out/('gunners_'+{85:'standing',175:'walking',300:'crouching'}[frame]+'.png'));bpy.ops.render.render(write_still=True)
cam=scene.camera;scene.frame_set(85);bpy.context.view_layer.update();scene.render.resolution_x=1400;scene.render.resolution_y=1000
for prefix in ['Male','Female']:
 for ob in scene.objects:
  if ob.type=='MESH' and ('Skinned' in ob.name or 'Body_ClothReady' in ob.name or 'Coat_Cloth' in ob.name or ob.name in ['Male_Machine_Gun','Female_Machine_Gun']):ob.hide_render=not ob.name.startswith(prefix)
 gun=bpy.data.objects[prefix+'_Machine_Gun'].evaluated_get(bpy.context.evaluated_depsgraph_get());target=gun.matrix_world@Vector((.34,0,.015));cam.location=target+gun.matrix_world.to_3x3()@Vector((0,-2,.55));cam.rotation_euler=(target-cam.location).to_track_quat('-Z','Y').to_euler();cam.data.ortho_scale=1.42
 scene.render.filepath=str(out/(prefix.lower()+'_machine_gun_grip.png'));bpy.ops.render.render(write_still=True)
(out/'cloth_and_grip_checks.json').write_text(json.dumps(report,indent=2))
for ob in scene.objects:
 if ob.type=='MESH' and ('Skinned' in ob.name or 'Body_ClothReady' in ob.name or 'Coat_Cloth' in ob.name or ob.name in ['Male_Machine_Gun','Female_Machine_Gun']):ob.hide_render=False
scene.frame_set(85);scene.frame_start=41;scene.frame_end=360
# Save an uncluttered pair view for opening the working file.
cam.location=(2,-5,2.1);center=Vector((0,-.05,.87));cam.rotation_euler=(center-cam.location).to_track_quat('-Z','Y').to_euler();cam.data.ortho_scale=3.15
for screen in bpy.data.screens:
 for ar in screen.areas:
  if ar.type=='VIEW_3D':
   sp=ar.spaces.active;sp.shading.type='SOLID';sp.shading.color_type='TEXTURE';sp.overlay.show_overlays=False;sp.region_3d.view_location=center;sp.region_3d.view_rotation=(Vector((2,-5,1.23))).to_track_quat('Z','Y');sp.region_3d.view_distance=4.3;sp.region_3d.view_perspective='ORTHO'
bpy.ops.wm.save_as_mainfile(filepath=str(out/'Azure_Gunners_Hands_Cloth_v02.blend'))
print('REVIEW_COMPLETE',json.dumps(report),flush=True)
