import bpy,bmesh,math,json
from pathlib import Path
import os
SOURCE=Path(__file__).resolve().parent
OUTPUT=Path(os.environ.get("ARMY_MALE_OUTPUT", str(SOURCE.parents[3]/".local/male_candidate"))).expanduser().resolve()
OUTPUT.mkdir(parents=True, exist_ok=True)
from mathutils import Vector,Matrix,Quaternion
from mathutils.bvhtree import BVHTree
base=OUTPUT
out=base/'rigged';out.mkdir(exist_ok=True)
scene=bpy.context.scene;src=bpy.data.objects['Female_Mixamo_Rig'];body=bpy.data.objects['Female_Azure_Body_ClothReady']
for ob in list(scene.objects):ob.hide_render=True;ob.hide_set(True)
if src.animation_data:
 for t in src.animation_data.nla_tracks:t.mute=True
src.hide_set(False)
male_source=base/'textured/Male_Azure_Textured_Apose.blend'
if not male_source.exists():male_source=SOURCE/'textured/Male_Azure_Textured_Apose.blend'
with bpy.data.libraries.load(str(male_source),link=False) as (a,b):b.objects=['Male_Azure_Textured_Apose']
o=b.objects[0];scene.collection.objects.link(o);o.hide_render=False;o.hide_set(False)
rig=src.copy();rig.data=src.data.copy();rig.name='Male_Azure_Rig';scene.collection.objects.link(rig);rig.animation_data_clear();rig.hide_set(False);rig.hide_render=False
for p in rig.pose.bones:
 for c in list(p.constraints):p.constraints.remove(c)
 p.matrix_basis=Matrix.Identity(4)
# Fit the inherited hierarchy to observed male landmarks, in the male's Z-up world.
H=1.836/.99951171875
lm={'Hips':(0,0,.54),'Spine':(0,.006,.628),'Spine1':(0,.008,.702),'Spine2':(0,.011,.766),'Neck':(0,.004,.852),'Head':(0,.004,.877),'HeadTop_End':(0,.015,.989)}
for side,sgn in [('Left',1),('Right',-1)]:
 for n,v in {'Shoulder':(.055,.008,.807),'Arm':(.145,.009,.789),'ForeArm':(.206,.008,.680),'Hand':(.265,.005,.579),'UpLeg':(.078,.006,.52),'Leg':(.122,.006,.28),'Foot':(.137,.018,.079),'ToeBase':(.138,-.072,.024),'Toe_End':(.141,-.117,.025)}.items():lm[side+n]=(sgn*v[0],v[1],v[2])
world=src.matrix_world;inv=rig.matrix_world.inverted()
old={b.name:(world@b.head_local,world@b.tail_local) for b in src.data.bones}
heads={('mixamorig:'+k):Vector(v)*H for k,v in lm.items()}
# Finger chains inherit their relative placement from the female glove, scaled to the new palm.
for side,sgn in [('Left',1),('Right',-1)]:
 hand='mixamorig:'+side+'Hand';oldh=old[hand][0];newh=heads[hand]
 olddir=(old[hand][1]-oldh).normalized();newdir=Vector((sgn*.033,-.015,-.075)).normalized();rot=olddir.rotation_difference(newdir)
 for name,(head,tail) in old.items():
  if name.startswith(hand) and name!=hand:heads[name]=newh+rot@(head-oldh)*.88
# Preserve weapon helper hierarchy for future socket work, without treating helpers as skin bones.
for name,(head,tail) in old.items():
 if name not in heads:heads[name]=head*1.08
bpy.ops.object.select_all(action='DESELECT');rig.select_set(True);bpy.context.view_layer.objects.active=rig;bpy.ops.object.mode_set(mode='EDIT')
nextbone={'Hips':'Spine','Spine':'Spine1','Spine1':'Spine2','Spine2':'Neck','Neck':'Head','Head':'HeadTop_End'}
for side in ['Left','Right']:
 for a,b in [('Shoulder','Arm'),('Arm','ForeArm'),('ForeArm','Hand'),('UpLeg','Leg'),('Leg','Foot'),('Foot','ToeBase'),('ToeBase','Toe_End')]:nextbone[side+a]=side+b
for b in rig.data.edit_bones:
 b.use_connect=False;n=b.name.removeprefix('mixamorig:');h=heads[b.name]
 if n in nextbone:t=heads['mixamorig:'+nextbone[n]]
 elif n.endswith('Hand'):t=h+Vector(((1 if 'Left' in n else -1)*.033,-.015,-.075))*H
 else:
  olddir=old[b.name][1]-old[b.name][0];t=h+olddir*1.08
 b.head=inv@h;b.tail=inv@t
bpy.ops.object.mode_set(mode='OBJECT')
# Warp the female reference surface into the male bind pose using its known skin weights.
newrest={b.name:rig.matrix_world@b.matrix_local for b in rig.data.bones}
oldrest={b.name:world@b.matrix_local for b in src.data.bones}
warp={name:newrest[name]@oldrest[name].inverted() for name in newrest}
refgroups={g.index:g.name for g in body.vertex_groups}
refverts=[];refweights=[]
for v in body.data.vertices:
 p=body.matrix_world@v.co;ws={refgroups[g.group]:g.weight for g in v.groups if g.weight>1e-6 and refgroups[g.group] in warp}
 total=sum(ws.values());ws={k:w/total for k,w in ws.items()};q=sum((warp[k]@p*w for k,w in ws.items()),Vector()) if total else p*1.08
 refverts.append(q);refweights.append(ws)
body.data.calc_loop_triangles();tris=[tuple(t.vertices) for t in body.data.loop_triangles];tree=BVHTree.FromPolygons(refverts,tris,all_triangles=True)
def interpolate(p):
 hit,n,ix,d=tree.find_nearest(p)
 if ix is None:return {'mixamorig:Hips':1.}
 ia,ib,ic=tris[ix];a,b,c=[refverts[i] for i in (ia,ib,ic)];v0=b-a;v1=c-a;v2=hit-a
 d00=v0.dot(v0);d01=v0.dot(v1);d11=v1.dot(v1);d20=v2.dot(v0);d21=v2.dot(v1);den=d00*d11-d01*d01
 if abs(den)<1e-15:abc=[1,0,0]
 else:
  v=(d11*d20-d01*d21)/den;w=(d00*d21-d01*d20)/den;abc=[1-v-w,v,w]
 ws={}
 for i,k in zip((ia,ib,ic),abc):
  for name,val in refweights[i].items():ws[name]=ws.get(name,0)+max(k,0)*val
 return ws
# Connected components keep accessories from stretching with nearby unrelated surfaces.
adj=[set() for v in o.data.vertices]
for e in o.data.edges:a,b=e.vertices;adj[a].add(b);adj[b].add(a)
comps={};parts=[]
for i in range(len(adj)):
 if i in comps:continue
 cid=len(parts);q=[i];comps[i]=cid;part=[]
 while q:
  v=q.pop();part.append(v)
  for j in adj[v]:
   if j not in comps:comps[j]=cid;q.append(j)
 parts.append(part)
fixed={}
for seed in [287,1289,362,286,1250,331,1272,327,1273,363]:fixed[comps[seed]]={'mixamorig:Hips':1}
fixed[comps[470]]={'mixamorig:Spine2':1}
for seed in [374,1330,375,1339]:fixed[comps[seed]]={'mixamorig:Spine':1}
for seed in [410,1374,942,1965]:fixed[comps[seed]]={'mixamorig:Spine2':1}
for seed,side in [(299,'Right'),(1457,'Left')]:fixed[comps[seed]]={'mixamorig:'+side+'Arm':1}
fixed[comps[561]]={'mixamorig:Head':1}
for g in list(o.vertex_groups):o.vertex_groups.remove(g)
for b in rig.data.bones:
 b.use_deform=b.name.startswith('mixamorig:') and not b.name.endswith('_End') and not b.name.endswith('4')
 if b.use_deform:o.vertex_groups.new(name=b.name)
valid={g.name for g in o.vertex_groups};bad=[]
for v in o.data.vertices:
 p=o.matrix_world@v.co;x,y,z=p/H;side='Left' if x>=0 else 'Right';a=abs(x);cid=comps[v.index]
 ws=fixed.get(cid)
 if ws is None:
  ws=interpolate(p)
  # Hard head gear and simplified face must not stretch with the collar.
  if .615<z<.865 and a<.12:
   levels=[(.615,'Spine'),(.702,'Spine1'),(.766,'Spine2'),(.865,'Spine2')]
   for (za,ba),(zb,bb) in zip(levels,levels[1:]):
    if za<=z<=zb:
     t=(z-za)/(zb-za);ws={'mixamorig:'+ba:1-t};ws['mixamorig:'+bb]=ws.get('mixamorig:'+bb,0)+t;break
  if z>.855 and a<.058 or z>.93 and a<.10:ws={'mixamorig:Head':1}
  # Coat panels follow their own thigh progressively below the waist.
  if cid not in [comps[k] for k in [92,1033,134,1062,561]] and .265<z<.615 and a<.21-.2*max(z-.5,0):
   t=max(0,min(1,(.615-z)/.14));t=t*t*(3-2*t)
   venttop=.535 if y<0 else .49;blend=max(.001,min(.07,(z-venttop)*.6));left=max(0,min(1,.5+x/blend));ws={'mixamorig:Hips':1-t,'mixamorig:LeftUpLeg':t*left,'mixamorig:RightUpLeg':t*(1-left)}
  # The three-chain reference glove does not match this import's finger topology.
  # Keep the modeled glove shape on the hand for this prototype; retain the
  # inherited finger bones for a later weapon-specific grip pass.
  wrist=(a-.255)*.62-(z-.583)*.785
  if a>.215 and wrist>.012:ws={'mixamorig:'+side+'Hand':1}
  if v.index>=len(o.data.vertices)-16:ws={'mixamorig:Hips':1}
  if cid in [comps[92],comps[1033]]:
   t=max(0,min(1,(z-.075)/.06));t=t*t*(3-2*t)
   ws={'mixamorig:'+side+'Foot':1-t,'mixamorig:'+side+'Leg':t}
 # Omit nondeforming end/helper influences and normalize strongest four.
 ws={k:max(0,w) for k,w in ws.items() if k in valid and w>1e-5};ws=dict(sorted(ws.items(),key=lambda kv:-kv[1])[:4]);total=sum(ws.values())
 if total<1e-7:bad.append(v.index);ws={'mixamorig:Hips':1};total=1
 for k,w in ws.items():o.vertex_groups[k].add([v.index],w/total,'REPLACE')
mod=o.modifiers.new('Male skin from fitted Mixamo reference','ARMATURE');mod.object=rig;mod.use_deform_preserve_volume=False
o.parent=rig;o.matrix_parent_inverse=rig.matrix_world.inverted();o.name='Male_Azure_Skinned'
# Retarget selected evaluated clips. World rotation deltas preserve the fitted A-pose.
clips=[('Rifle_idle_aiming',127),('Rifle_walk_forward_InPlace',61),('Rifle_idle_crouching_aiming',117),('Rifle_run_forward_InPlace',31)]
restrot_src={b.name:b.matrix_local.to_quaternion() for b in src.data.bones};restrot_dst={b.name:b.matrix_local.to_quaternion() for b in rig.data.bones};rest_dst={b.name:b.matrix_local.copy() for b in rig.data.bones}
report=[];created=[]
for actionname,end in clips:
 src.animation_data.action=bpy.data.actions[actionname]
 act=bpy.data.actions.new('Male_'+actionname.removeprefix('Rifle_'));act.use_fake_user=True;rig.animation_data_create();rig.animation_data.action=act;created.append(act)
 for frame in range(1,end+1):
  scene.frame_set(frame);bpy.context.view_layer.update();ev=src.evaluated_get(bpy.context.evaluated_depsgraph_get());target={}
  for b in rig.data.bones:
   sp=ev.pose.bones[b.name];rot=sp.matrix.to_quaternion()@restrot_src[b.name].inverted()@restrot_dst[b.name]
   if b.parent:
    local=rest_dst[b.parent.name].inverted()@rest_dst[b.name];pos=target[b.parent.name]@local.translation
   else:pos=b.head_local+(sp.matrix.translation-src.data.bones[b.name].head_local)*1.08
   target[b.name]=Matrix.Translation(pos)@rot.to_matrix().to_4x4()
  for p in rig.pose.bones:
   kwargs={'parent_matrix':target[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
   p.matrix_basis=p.bone.convert_local_to_pose(target[p.name],p.bone.matrix_local,invert=True,**kwargs);p.rotation_mode='QUATERNION'
   for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
 # Bound checks across the whole retargeted clip catch gross explosions/unweighted meshes.
 samples=[]
 for f in range(1,end+1,5):
  scene.frame_set(f);bpy.context.view_layer.update();em=o.evaluated_get(bpy.context.evaluated_depsgraph_get());pts=[em.matrix_world@v.co for v in em.data.vertices]
  lo=[min(p[i] for p in pts) for i in range(3)];hi=[max(p[i] for p in pts) for i in range(3)];samples.append({'frame':f,'min':lo,'max':hi})
 report.append({'action':act.name,'frames':end,'bounds_samples':samples});print('RETARGET',act.name,flush=True)
src.hide_set(True)
for ob in list(scene.objects):
 if ob not in [rig,o]:bpy.data.objects.remove(ob,do_unlink=True)
for action in list(bpy.data.actions):
 if action not in created:bpy.data.actions.remove(action)
bpy.data.orphans_purge(do_recursive=True)
scene.render.fps=60;scene.frame_start=1;scene.frame_end=61;rig.animation_data.action=created[1];scene.frame_set(15)
rig.show_in_front=True;rig.data.display_type='STICK'
for screen in bpy.data.screens:
 for ar in screen.areas:
  if ar.type=='VIEW_3D':
   sp=ar.spaces.active;sp.shading.type='SOLID';sp.shading.color_type='TEXTURE';sp.region_3d.view_location=(0,0,.92);sp.region_3d.view_rotation=Quaternion((.70710678,.70710678,0,0));sp.region_3d.view_distance=2.7;sp.region_3d.view_perspective='ORTHO'
bpy.ops.object.select_all(action='DESELECT');o.select_set(True);rig.select_set(True);bpy.context.view_layer.objects.active=rig
bpy.ops.wm.save_as_mainfile(filepath=str(out/'Male_Azure_Rigged_v01.blend'))
rig.data.pose_position='REST'
bpy.ops.export_scene.fbx(filepath=str(out/'SK_Male_Azure_v01.fbx'),use_selection=True,object_types={'MESH','ARMATURE'},axis_forward='-Y',axis_up='Z',path_mode='COPY',embed_textures=True,bake_anim=False,add_leaf_bones=False,use_armature_deform_only=False)
rig.data.pose_position='POSE'
(out/'rig_report.json').write_text(json.dumps({'method':'fitted inherited skeleton, warped reference surface weight transfer, rigid accessory/coat overrides','bone_count':len(rig.data.bones),'unweighted_vertices':bad,'max_influences':4,'limitations':['Gloves weighted rigidly to hands; inherited finger chains retained but not yet fitted for a weapon grip','Coat skinned to thighs; no cloth simulation or collision'],'height_m':1.836,'clips':report},indent=2))
# Clear neutral render setup, separate from game presentation.
scene.render.engine='CYCLES';scene.cycles.samples=16;scene.render.resolution_x=900;scene.render.resolution_y=1100;scene.render.resolution_percentage=100
scene.world=bpy.data.worlds.new('Male rig preview');scene.world.use_nodes=True;scene.world.node_tree.nodes['Background'].inputs[0].default_value=(.45,.45,.45,1);scene.world.node_tree.nodes['Background'].inputs[1].default_value=.7
scene.view_settings.view_transform='Standard';scene.view_settings.exposure=-.8;scene.view_layers[0].material_override=None
center=Vector((0,0,.9))
for name,loc,power,size in [('Key',(2,-3,4),500,5),('Fill',(-2,-2,2),350,4),('Rim',(1,3,3),400,4)]:
 d=bpy.data.lights.new(name,'AREA');d.energy=power;d.shape='DISK';d.size=size;l=bpy.data.objects.new(name,d);scene.collection.objects.link(l);l.location=Vector(loc);l.rotation_euler=(center-l.location).to_track_quat('-Z','Y').to_euler()
d=bpy.data.cameras.new('Male preview camera');cam=bpy.data.objects.new('Male preview camera',d);scene.collection.objects.link(cam);scene.camera=cam;d.type='ORTHO';d.ortho_scale=2.1;cam.location=Vector((2,-4,1.5));cam.rotation_euler=(center-cam.location).to_track_quat('-Z','Y').to_euler()
for act,f in [(created[0],40),(created[1],15),(created[2],40),(created[3],8)]:
 rig.animation_data.action=act;scene.frame_set(f);scene.render.filepath=str(out/(act.name+'.png'));bpy.ops.render.render(write_still=True)
print('RIG_COMPLETE',str(out),flush=True)
