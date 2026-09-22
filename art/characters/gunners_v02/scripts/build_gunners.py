import bpy,bmesh,math,json
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
from mathutils import Vector,Matrix,Quaternion
OUT=OUTPUT
scene=bpy.context.scene
male=bpy.data.objects['Male_Azure_Rig'];mbody=bpy.data.objects['Male_Azure_Skinned'];H=1.836/.99951171875
for ob in list(scene.objects):
 if ob not in [male,mbody]:bpy.data.objects.remove(ob,do_unlink=True)
scene.frame_set(1);male.animation_data.action=None
for p in male.pose.bones:p.matrix_basis=Matrix.Identity(4)
# Five anatomical digit chains fitted to the modeled glove, mirrored for the right hand.
landmarks={
'Thumb':[(.266,-.060,.522),(.261,-.070,.505),(.258,-.075,.491),(.256,-.076,.483)],
'Index':[(.299,-.052,.501),(.302,-.052,.477),(.301,-.050,.458),(.296,-.050,.441)],
'Middle':[(.313,-.028,.502),(.315,-.027,.474),(.310,-.025,.453),(.302,-.024,.438)],
'Ring':[(.311,-.006,.500),(.312,-.005,.473),(.306,-.005,.453),(.299,-.004,.441)],
'Pinky':[(.299,.017,.499),(.301,.017,.478),(.297,.016,.461),(.292,.016,.450)]}
bpy.ops.object.select_all(action='DESELECT');male.select_set(True);bpy.context.view_layer.objects.active=male;bpy.ops.object.mode_set(mode='EDIT')
inv=male.matrix_world.inverted();handinfo={}
for side,sgn in [('Left',1),('Right',-1)]:
 prefix='mixamorig:'+side+'Hand';hand=male.data.edit_bones[prefix]
 hand.head=inv@Vector((sgn*.264,-.019,.552))*H;hand.tail=inv@Vector((sgn*.296,-.020,.502))*H
 male.data.edit_bones['mixamorig:'+side+'ForeArm'].tail=hand.head
 handinfo[side]={'contact':Vector((sgn*.283,-.020,.523))*H,'normal':Vector((-sgn,0,0))}
 for digit,points in landmarks.items():
  for i in range(3):
   name=prefix+digit+str(i+1);b=male.data.edit_bones.get(name) or male.data.edit_bones.new(name)
   b.head=inv@Vector((sgn*points[i][0],points[i][1],points[i][2]))*H;b.tail=inv@Vector((sgn*points[i+1][0],points[i+1][1],points[i+1][2]))*H
   b.parent=hand if i==0 else male.data.edit_bones[prefix+digit+str(i)];b.use_connect=i>0;b.use_deform=True
   b.align_roll(inv.to_3x3()@Vector((-sgn,0,0)))
  end=male.data.edit_bones.get(prefix+digit+'4')
  if end:end.head=male.data.edit_bones[prefix+digit+'3'].tail;end.tail=end.head+(end.head-male.data.edit_bones[prefix+digit+'3'].head)*.2;end.use_deform=False
bpy.ops.object.mode_set(mode='OBJECT')
# Strip inherited finger keys; the fitted hand will use explicit weapon-grip controls.
def strip_fingers(action):
 for layer in action.layers:
  for strip in layer.strips:
   for bag in strip.channelbags:
    for fc in list(bag.fcurves):
     if any('Hand'+d in fc.data_path for d in landmarks):bag.fcurves.remove(fc)
for a in bpy.data.actions:strip_fingers(a)
for b in male.data.bones:
 if b.use_deform and not mbody.vertex_groups.get(b.name):mbody.vertex_groups.new(name=b.name)
weighted_fingers={}
for v in mbody.data.vertices:
 x,y,z=v.co/H;a=abs(x)
 if a<.238 or z>.536:continue
 side='Left' if x>0 else 'Right';digit=None;blend=0
 if a<.282 and y<-.045 and z<.53:digit='Thumb';blend=max(0,min(1,(.532-z)/.017))
 elif a>.279 and z<.511:
  digit=min(['Index','Middle','Ring','Pinky'],key=lambda d:abs(y-landmarks[d][1][1]));blend=max(0,min(1,(.511-z)/.014))
 if not digit:continue
 pts=landmarks[digit];joints=[p[2] for p in pts];weights={}
 # Blend near each knuckle; keep neighboring digits independent.
 centers=[(joints[i]+joints[i+1])*.5 for i in range(3)]
 near=sorted(range(3),key=lambda i:abs(z-centers[i]))[:2]
 if z>=centers[0]:fractions={0:1}
 elif z<=centers[-1]:fractions={2:1}
 else:
  i=next(i for i in range(2) if centers[i]>=z>=centers[i+1]);t=(centers[i]-z)/(centers[i]-centers[i+1]);fractions={i:1-t,i+1:t}
 weights['mixamorig:'+side+'Hand']=1-blend
 for i,w in fractions.items():weights['mixamorig:'+side+'Hand'+digit+str(i+1)]=blend*w
 for g in list(v.groups):mbody.vertex_groups[g.group].remove([v.index])
 for name,w in weights.items():
  if w>1e-6:mbody.vertex_groups[name].add([v.index],w,'REPLACE');weighted_fingers[name]=weighted_fingers.get(name,0)+1
# Remove only the old lower coat skin, preserving trousers, equipment and arms.
bm=bmesh.new();bm.from_mesh(mbody.data);bm.faces.ensure_lookup_table();region=bm.faces.layers.int.get('part_region');remove=[]
for f in bm.faces:
 c=f.calc_center_median()/H;ax=abs(c.x)
 if region and f[region]==0 and c.z<.615 and ax<.21-.2*max(c.z-.5,0):remove.append(f)
bmesh.ops.delete(bm,geom=remove,context='FACES');loose=[v for v in bm.verts if not v.link_faces];bmesh.ops.delete(bm,geom=loose,context='VERTS');bm.to_mesh(mbody.data);bm.free()
# Female remains the approved body and bind rig; replace only presentation constraints.
female_path=CHARACTERS/'gunners_v02/source_inputs/female_grip_C_for_male.blend'
with bpy.data.libraries.load(str(female_path),link=False) as (a,b):
 b.objects=['Female_Mixamo_Rig','Female_Azure_Body_ClothReady','Coat_Lower_Cloth'];b.actions=[n for n in a.actions if n in ['Rifle_idle_aiming','Rifle_walk_forward_InPlace','Rifle_idle_crouching_aiming']]
for ob in b.objects:scene.collection.objects.link(ob);ob.hide_set(False);ob.hide_render=False
bpy.context.view_layer.update()
female=next(ob for ob in b.objects if ob.type=='ARMATURE');fbody=next(ob for ob in b.objects if ob.name.startswith('Female_Azure_Body'));fcoat=next(ob for ob in b.objects if ob.name.startswith('Coat_Lower'))
for ob in [male,female]:
 if ob.animation_data:
  for track in list(ob.animation_data.nla_tracks):ob.animation_data.nla_tracks.remove(track)
 for p in ob.pose.bones:
  for con in list(p.constraints):p.constraints.remove(con)
for mod in fbody.modifiers:
 if mod.type=='ARMATURE':mod.object=female
# A single cloth surface with regular quads, open vents and a pinned waistband.
def linear_hex(h):
 vals=[int(h[i:i+2],16)/255 for i in [0,2,4]];return [v/12.92 if v<=.04045 else ((v+.055)/1.055)**2.4 for v in vals]
def material(name,h,rough=.85,emit=0):
 m=bpy.data.materials.new(name);m.use_nodes=True;c=linear_hex(h);m.diffuse_color=(*c,1);p=m.node_tree.nodes.get('Principled BSDF');p.inputs['Base Color'].default_value=(*c,1);p.inputs['Roughness'].default_value=rough;p.inputs['Metallic'].default_value=0;p.inputs['Specular IOR Level'].default_value=.2
 if emit:p.inputs['Emission Color'].default_value=(*c,1);p.inputs['Emission Strength'].default_value=emit
 return m
coatmat=material('Male Azure | heavy wool coat','29475f')
verts=[];faces=[];rows=[.635,.622,.608,.590,.570,.550,.535,.510,.490,.460,.425,.390,.355,.320,.290];cols=18
for side,sgn in enumerate([-1,1]):
 for z in rows:
  t=(.635-z)/(.635-.290);rx=.115+.078*t;ry=.085+.030*t
  gapfront=max(0,.030*(.535-z)/(.535-.290));gapback=max(0,.017*(.490-z)/(.490-.290))
  af=math.asin(min(.9,gapfront/rx));ab=math.pi-math.asin(min(.9,gapback/rx))
  for j in range(cols+1):
   theta=af+(ab-af)*j/cols;verts.append((sgn*rx*math.sin(theta)*H,-ry*math.cos(theta)*H,z*H))
 base=side*len(rows)*(cols+1)
 for r in range(len(rows)-1):
  for j in range(cols):
   ids=[base+r*(cols+1)+j,base+r*(cols+1)+j+1,base+(r+1)*(cols+1)+j+1,base+(r+1)*(cols+1)+j];faces.append(ids if sgn>0 else ids[::-1])
mesh=bpy.data.meshes.new('Male coat simulation quads');mesh.from_pydata(verts,[],faces);mesh.materials.append(coatmat);mesh.update()
bm=bmesh.new();bm.from_mesh(mesh);bmesh.ops.remove_doubles(bm,verts=list(bm.verts),dist=.0002);bmesh.ops.recalc_face_normals(bm,faces=list(bm.faces));bm.to_mesh(mesh);bm.free()
mcoat=bpy.data.objects.new('Male_Coat_Cloth',mesh);scene.collection.objects.link(mcoat);mcoat.parent=male;mcoat.matrix_parent_inverse=male.matrix_world.inverted()
vg=mcoat.vertex_groups.new(name='mixamorig:Hips');vg.add(list(range(len(mesh.vertices))),1,'REPLACE');pin=mcoat.vertex_groups.new(name='Coat_Pin')
for v in mesh.vertices:
 z=v.co.z/H;w=max(0,min(1,(z-.572)/(.612-.572)))
 if w:pin.add([v.index],w,'REPLACE')
arm=mcoat.modifiers.new('Waist follows hips','ARMATURE');arm.object=male
# Rebuild the female skirt using the same simulation topology at her waist/hem dimensions.
fmat=fcoat.data.materials[0];bpy.data.objects.remove(fcoat,do_unlink=True)
fcoat=bpy.data.objects.new('Female_Coat_Cloth',mcoat.data.copy());scene.collection.objects.link(fcoat)
for v in fcoat.data.vertices:v.co.x*=.80*1.7/1.836;v.co.y*=.82*1.7/1.836;v.co.z*=1.7/1.836
fcoat.data.materials.clear();fcoat.data.materials.append(fmat);fcoat.parent=female;fcoat.matrix_parent_inverse=female.matrix_world.inverted()
for group in list(fcoat.vertex_groups):fcoat.vertex_groups.remove(group)
fcoat.vertex_groups.new(name='mixamorig:Hips').add(list(range(len(fcoat.data.vertices))),1,'REPLACE');fpg=fcoat.vertex_groups.new(name='Cloth_Pin')
for v in fcoat.data.vertices:
 w=max(0,min(1,(v.co.z/(H*1.7/1.836)-.572)/(.612-.572)))
 if w:fpg.add([v.index],w,'REPLACE')
farm=fcoat.modifiers.new('Waist follows hips','ARMATURE');farm.object=female
for m in list(fcoat.modifiers):
 if m.type!='ARMATURE':fcoat.modifiers.remove(m)
for m in fcoat.modifiers:
 if m.type=='ARMATURE':m.object=female
# Ensure local pin name and original female upper rim remain intact.
fpin=fcoat.vertex_groups.get('Cloth_Pin') or fcoat.vertex_groups.new(name='Cloth_Pin')
# Collision proxies deform rigidly with the skeleton's pelvis and legs.
def collision_proxy(rig,name,radius):
 vv=[];ff=[];weights=[]
 def ellipsoid(center,radii,bone):
  base=len(vv);segments=16;rings=10
  for r in range(rings+1):
   theta=math.pi*r/rings
   for j in range(segments):
    phi=2*math.pi*j/segments;vv.append(center+Vector((radii[0]*math.sin(theta)*math.cos(phi),radii[1]*math.sin(theta)*math.sin(phi),radii[2]*math.cos(theta))));weights.append(bone)
  for r in range(rings):
   for j in range(segments):ff.append((base+r*segments+j,base+r*segments+(j+1)%segments,base+(r+1)*segments+(j+1)%segments,base+(r+1)*segments+j))
 h=rig.matrix_world@rig.data.bones['mixamorig:Hips'].head_local;ellipsoid(h+Vector((0,0,.045)),(radius*1.8,radius*1.05,.14),'mixamorig:Hips')
 for side in ['Left','Right']:
  for suffix,rad in [('UpLeg',radius),('Leg',radius*.78)]:
   bn='mixamorig:'+side+suffix;b=rig.data.bones[bn];a=rig.matrix_world@b.head_local;c=rig.matrix_world@b.tail_local
   # One continuous capsule per segment: no overlapping collision shells.
   base=len(vv);axis=(c-a).normalized();length=(c-a).length;u=axis.cross(Vector((0,1,0))).normalized();v=axis.cross(u).normalized();segs=16
   profiles=[(-rad,0),(-.866*rad,.5*rad),(-.5*rad,.866*rad),(0,rad),(length,rad),(length+.5*rad,.866*rad),(length+.866*rad,.5*rad),(length+rad,0)]
   for t,r in profiles:
    for j in range(segs):
     phi=2*math.pi*j/segs;vv.append(a+axis*t+r*(math.cos(phi)*u+math.sin(phi)*v));weights.append(bn)
   for k in range(len(profiles)-1):
    for j in range(segs):ff.append((base+k*segs+j,base+k*segs+(j+1)%segs,base+(k+1)*segs+(j+1)%segs,base+(k+1)*segs+j))
 me=bpy.data.meshes.new(name);me.from_pydata(vv,[],ff);me.update();bm=bmesh.new();bm.from_mesh(me);bmesh.ops.recalc_face_normals(bm,faces=list(bm.faces));bm.to_mesh(me);bm.free();ob=bpy.data.objects.new(name,me);scene.collection.objects.link(ob)
 for bn in set(weights):ob.vertex_groups.new(name=bn).add([i for i,n in enumerate(weights) if n==bn],1,'REPLACE')
 ob.parent=rig;ob.matrix_parent_inverse=rig.matrix_world.inverted();mod=ob.modifiers.new('Collider skin','ARMATURE');mod.object=rig;ob.modifiers.new('Cloth collision','COLLISION');ob.collision.thickness_outer=.004;ob.collision.thickness_inner=.001;ob.collision.cloth_friction=4
 ob.hide_render=True;ob.display_type='WIRE';return ob
mc=collision_proxy(male,'Male_cloth_colliders',.091);fc=collision_proxy(female,'Female_cloth_colliders',.080)
cloths=[]
for coat,pinname in [(mcoat,'Coat_Pin'),(fcoat,'Cloth_Pin')]:
 cl=coat.modifiers.new('Heavy coat cloth','CLOTH');s=cl.settings;s.quality=10;s.mass=.45;s.air_damping=5;s.tension_stiffness=35;s.compression_stiffness=35;s.shear_stiffness=20;s.bending_stiffness=8;s.tension_damping=8;s.compression_damping=8;s.shear_damping=8;s.bending_damping=2;s.vertex_group_mass=pinname;s.pin_stiffness=1
 c=cl.collision_settings;c.use_collision=True;c.distance_min=.005;c.collision_quality=6;c.use_self_collision=True;c.self_distance_min=.004;c.self_friction=4
 cl.point_cache.frame_start=1;cl.point_cache.frame_end=360;cl.show_viewport=False;cl.show_render=False
 solid=coat.modifiers.new('Coat edge thickness','SOLIDIFY');solid.thickness=.003;solid.offset=0
 coat['cloth_note']='Pinned waist, free lower panels; pelvis/thigh/shin collisions. Blender simulation; FBX alone does not carry cloth.';cloths.append((coat,cl))
# Bake a small local preview action with smooth transitions and a cloth settling lead-in.
def make_showcase(rig,source_names,name):
 sources=[bpy.data.actions[n] for n in source_names];samples={}
 for act in sources:
  rig.animation_data.action=act;arr=[]
  end=int(act.frame_range[1])
  for fr in range(1,end+1):
   scene.frame_set(fr);bpy.context.view_layer.update();arr.append({p.name:p.matrix_basis.copy() for p in rig.pose.bones})
  samples[act.name]=arr
 ident={p.name:Matrix.Identity(4) for p in rig.pose.bones}
 def mix(a,b,t):
  result={}
  for n in ident:
   la,qa,sa=a.get(n,Matrix.Identity(4)).decompose();lb,qb,sb=b.get(n,Matrix.Identity(4)).decompose();result[n]=Matrix.LocRotScale(la.lerp(lb,t),qa.slerp(qb,t),sa.lerp(sb,t))
  return result
 aim=samples[sources[0].name];walk=samples[sources[1].name];crouch=samples[sources[2].name]
 frames=[]
 for fr in range(1,361):
  if fr<=40:p=ident
  elif fr<=60:p=mix(ident,aim[0],(fr-40)/20)
  elif fr<=100:p=aim[(fr-61)%len(aim)]
  elif fr<=120:p=mix(aim[39%len(aim)],walk[0],(fr-100)/20)
  elif fr<=240:p=walk[(fr-121)%(len(walk)-1)]
  elif fr<=270:p=mix(walk[-2],crouch[0],(fr-240)/30)
  elif fr<=330:p=crouch[(fr-271)%len(crouch)]
  else:p=mix(crouch[59%len(crouch)],aim[0],(fr-330)/30)
  frames.append(p)
 act=bpy.data.actions.new(name);act.use_fake_user=True;rig.animation_data.action=act
 for fr,pose in enumerate(frames,1):
  for p in rig.pose.bones:
   if any('Hand'+d in p.name for d in landmarks) or p.name.startswith('Weapon'):continue
   p.matrix_basis=pose[p.name];p.rotation_mode='QUATERNION'
   for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=fr,group=p.name)
 return act
ma=make_showcase(male,['Male_idle_aiming','Male_walk_forward_InPlace','Male_idle_crouching_aiming'],'Male_MG_Showcase')
fa=make_showcase(female,['Rifle_idle_aiming','Rifle_walk_forward_InPlace','Rifle_idle_crouching_aiming'],'Female_MG_Showcase')
# Refine the existing approved gun: matte surfaces, blue tips, and stowed paired bipod.
with bpy.data.libraries.load(str(CHARACTERS/'female_rifle/approved_machine_gun.blend'),link=False) as (a,b):b.objects=['Machine Gun - Azure']
mg=b.objects[0];scene.collection.objects.link(mg);mg.name='Machine_Gun_Refined';mg.matrix_world=Matrix.Identity(4)
old_material_indices=[f.material_index for f in mg.data.polygons]
mg.data.materials.clear()
for n,h,e in [('warm wood','795031',0),('charcoal steel','343d43',0),('olive ammunition box','626446',0),('brass cases','b78b37',0),('arcane blue tips','37c8ee',.3),('crystal lit facets','77e4ef',.3),('crystal dark facets','168faf',.1)]:mg.data.materials.append(material('MG | '+n,h,.82,e))
for f,mi in zip(mg.data.polygons,old_material_indices):f.material_index=mi
bm=bmesh.new();bm.from_mesh(mg.data)
kill=[f for f in bm.faces if f.calc_center_median().x>.20 and f.calc_center_median().z<.142]
bmesh.ops.delete(bm,geom=kill,context='FACES');bm.to_mesh(mg.data);bm.free()
# Two clean low-poly folded legs, symmetric across the barrel.
def beam_mesh(a,b,width,mat):
 axis=(b-a).normalized();side=axis.cross(Vector((0,1,0))).normalized()*width/2;other=axis.cross(side).normalized()*width/2
 vs=[a+u*side+v*other for u,v in [(-1,-1),(1,-1),(1,1),(-1,1)]]+[b+u*side+v*other for u,v in [(-1,-1),(1,-1),(1,1),(-1,1)]]
 me=bpy.data.meshes.new('Folded bipod leg');me.from_pydata(vs,[],[(0,3,2,1),(4,5,6,7),(0,1,5,4),(1,2,6,5),(2,3,7,6),(3,0,4,7)]);me.materials.append(mat);ob=bpy.data.objects.new('Folded bipod leg',me);scene.collection.objects.link(ob);return ob
parts=[mg]
for sg in [-1,1]:parts.append(beam_mesh(Vector((.278,sg*.035,.158)),Vector((.080,sg*.046,.135)),.013,mg.data.materials[1]))
bpy.ops.object.select_all(action='DESELECT')
for ob in parts:ob.select_set(True)
bpy.context.view_layer.objects.active=mg;bpy.ops.object.join()
for f in mg.data.polygons:f.use_smooth=False
# Normalize to a 1.08 m weapon, retaining its native +X muzzle direction.
for v in mg.data.vertices:v.co=(v.co-Vector((-.47,0,.178)))*1.08
bpy.data.libraries.write(str(OUT/'Machine_Gun_Refined_v02.blend'),{mg},fake_user=True)
# Weapon carrier follows chest motion; each arm solves to its own grip target.
scene.frame_set(80);bpy.context.view_layer.update();targets=[];guns=[]
def empty(name):
 ob=bpy.data.objects.new(name,None);scene.collection.objects.link(ob);ob.empty_display_type='PLAIN_AXES';ob.empty_display_size=.035;return ob
for rig,body,label,info in [(male,mbody,'Male',handinfo),(female,fbody,'Female',None)]:
 gun=mg.copy();gun.data=mg.data;scene.collection.objects.link(gun);gun.name=label+'_Machine_Gun';guns.append(gun)
 chest=rig.pose.bones['mixamorig:Spine2'];restchest=rig.data.bones['mixamorig:Spine2']
 delta=(rig.matrix_world@chest.matrix).to_quaternion()@(rig.matrix_world@restchest.matrix_local).to_quaternion().inverted()
 gunrot=delta.to_matrix()@Matrix.Rotation(math.radians(-42),3,'Z')
 forward=gunrot@Vector((1,0,0));forward.z=-.04;forward.normalize();across=Vector((0,0,1)).cross(forward).normalized();up=forward.cross(across).normalized();gunrot=Matrix((forward,across,up)).transposed()
 shoulder=rig.matrix_world@rig.pose.bones['mixamorig:RightArm'].head
 butt=shoulder+delta@Vector((.015,-.018,-.040));origin=butt
 gun.matrix_world=Matrix.Translation(origin)@gunrot.to_4x4()
 con=gun.constraints.new('CHILD_OF');con.name='Machine gun follows upper body';con.target=rig;con.subtarget='mixamorig:Spine2';con.inverse_matrix=(rig.matrix_world@chest.matrix).inverted()
 heading=empty(label+'_MG_Aim_Orientation');heading.matrix_world=gunrot.to_4x4();heading.rotation_euler.z-=(rig.matrix_world@chest.matrix).to_euler('XYZ').z
 yaw=heading.constraints.new('COPY_ROTATION');yaw.name='Follow chest yaw, keep pitch level';yaw.target=rig;yaw.subtarget='mixamorig:Spine2';yaw.use_x=False;yaw.use_y=False;yaw.use_z=True;yaw.mix_mode='OFFSET';yaw.owner_space='WORLD';yaw.target_space='WORLD'
 level=gun.constraints.new('COPY_ROTATION');level.name='Keep gun on aim line while crouching';level.target=heading;level.owner_space='WORLD';level.target_space='WORLD'
 for side in ['Right','Left']:
  bn='mixamorig:'+side+'Hand';b=rig.data.bones[bn];restmat=rig.matrix_world@b.matrix_local;restlong=(rig.matrix_world.to_3x3()@(b.tail_local-b.head_local)).normalized();normal=Vector((1 if side=='Right' else -1,0,0));normal=(normal-restlong*normal.dot(restlong)).normalized()
  basis=Matrix((restlong,normal,restlong.cross(normal))).transposed()
  desiredlong=Vector((1,0,0));desirednormal=Vector((0,1,0)) if side=='Right' else Vector((0,0,1));desired=Matrix((desiredlong,desirednormal,desiredlong.cross(desirednormal))).transposed()
  handrotlocal=desired@basis.inverted()@restmat.to_3x3()
  if info:contact=info[side]['contact']
  else:contact=Vector(((1 if side=='Left' else -1)*.420,-.014,.858))
  delta_hand=desired@basis.inverted();contact_from_wrist=contact-restmat.translation
  contactgun=Vector((-.265,-.037,.166))*1.08 if side=='Right' else Vector((.065,0,.163))*1.08
  wristgun=contactgun-Vector((-.47,0,.178))*1.08-delta_hand@contact_from_wrist
  target=empty(label+'_'+side+'_MG_Grip');target.parent=gun;target.matrix_parent_inverse=Matrix.Identity(4);target.matrix_basis=Matrix.Translation(wristgun)@handrotlocal.to_4x4();targets.append((rig,side,target))
  fore=rig.pose.bones['mixamorig:'+side+'ForeArm'];ik=fore.constraints.new('IK');ik.name='Machine gun two hand grip';ik.target=target;ik.chain_count=2;ik.use_stretch=False;ik.iterations=100
  rot=rig.pose.bones[bn].constraints.new('COPY_ROTATION');rot.name='Palm orientation at grip';rot.target=target;rot.target_space='WORLD';rot.owner_space='WORLD'
 # Explicit finger curl: trigger index stays relaxed, other fingers wrap the grip.
 for side in ['Left','Right']:
  for digit in landmarks:
   for j in range(1,4):
    p=rig.pose.bones.get('mixamorig:'+side+'Hand'+digit+str(j))
    if not p:continue
    p.rotation_mode='XYZ';p.location=(0,0,0);p.scale=(1,1,1)
    if rig==male:
     angles=([22,32,24] if side=='Right' and digit=='Index' else [38,48,32])
     if digit=='Thumb':angles=[18,28,22]
     p.rotation_euler=(math.radians(angles[j-1]),0,0)
    # Existing female Mixamo digits retain their natural bend in the source pose.
    elif digit in ['Index','Middle','Thumb']:
     p.rotation_euler=(math.radians([25,40,28][j-1]),0,0)
# User-facing grip controls and thumb contact targets, independent of locomotion.
for rig,gun,label in [(male,guns[0],'Male'),(female,guns[1],'Female')]:
 for side in ['Left','Right']:
  prop='Grip_'+side;rig[prop]=1.0;rig.id_properties_ui(prop).update(min=0.0,max=1.0,description='Open hand to closed machine-gun grip')
  for digit in landmarks:
   for j in range(1,4):
    pb=rig.pose.bones.get('mixamorig:'+side+'Hand'+digit+str(j))
    if not pb:continue
    angle=pb.rotation_euler.x;fc=pb.driver_add('rotation_euler',0);dr=fc.driver;dr.type='SCRIPTED';var=dr.variables.new();var.name='grip';var.targets[0].id=rig;var.targets[0].data_path='["'+prop+'"]';dr.expression=repr(angle)+'*grip'
  thumb=rig.pose.bones.get('mixamorig:'+side+'HandThumb3')
  if thumb:
   target=empty(label+'_'+side+'_Thumb_Contact');target.parent=gun;target.matrix_parent_inverse=Matrix.Identity(4)
   contact=Vector((-.29,.006,.202)) if side=='Right' else Vector((.055,-.022,.203))
   target.location=(contact-Vector((-.47,0,.178)))*1.08
   ik=thumb.constraints.new('IK');ik.name='Thumb wraps stock';ik.target=target;ik.chain_count=3;ik.iterations=100;ik.use_stretch=False
   fc=ik.driver_add('influence');dr=fc.driver;var=dr.variables.new();var.name='grip';var.targets[0].id=rig;var.targets[0].data_path='["'+prop+'"]';dr.expression='grip'
mg.hide_render=True;mg.hide_set(True)
# Place the pair side by side without altering their local bind coordinates.
male.location.x+=.85;female.location.x-=.85
# Guns use world-space Child Of offsets; add character offset to their original placement.
# Child Of already carries the skeleton's new world offset.
scene.render.fps=60;scene.frame_start=1;scene.frame_end=360
# Clean preview lighting.
scene.render.engine='CYCLES';scene.cycles.samples=24;scene.render.resolution_x=1500;scene.render.resolution_y=1050;scene.render.resolution_percentage=100
scene.world=bpy.data.worlds.new('Gunner studio');scene.world.use_nodes=True;scene.world.node_tree.nodes['Background'].inputs[0].default_value=(.4,.4,.4,1);scene.world.node_tree.nodes['Background'].inputs[1].default_value=.7
scene.view_settings.view_transform='Standard';scene.view_settings.exposure=-.6;scene.view_layers[0].material_override=None
center=Vector((0,-.05,.87))
for name,loc,power,size in [('Key',(1,-4,4),650,5),('Fill',(-3,-2,2),450,4),('Rim',(1,3,3),500,4)]:
 d=bpy.data.lights.new(name,'AREA');d.energy=power;d.shape='DISK';d.size=size;ob=bpy.data.objects.new(name,d);scene.collection.objects.link(ob);ob.location=loc;ob.rotation_euler=(center-ob.location).to_track_quat('-Z','Y').to_euler()
d=bpy.data.cameras.new('Gunner pair camera');cam=bpy.data.objects.new('Gunner pair camera',d);scene.collection.objects.link(cam);scene.camera=cam;d.type='ORTHO';d.ortho_scale=3.15;cam.location=(2,-5,2.1);cam.rotation_euler=(center-cam.location).to_track_quat('-Z','Y').to_euler()
scene.frame_set(1);bpy.context.view_layer.update()
for coat,cl in cloths:cl.show_viewport=True;cl.show_render=True
bpy.ops.wm.save_as_mainfile(filepath=str(OUT/'Azure_Gunners_Hands_Cloth_v02.blend'))
# First inspect grips before spending time on cloth baking.
for coat,cl in cloths:cl.show_viewport=False;cl.show_render=False
scene.frame_set(85);bpy.context.view_layer.update()
errors=[]
for rig,side,target in targets:
 p=rig.evaluated_get(bpy.context.evaluated_depsgraph_get()).pose.bones['mixamorig:'+side+'Hand'];wp=rig.matrix_world@p.head;tp=target.evaluated_get(bpy.context.evaluated_depsgraph_get()).matrix_world.translation;errors.append({'rig':rig.name,'side':side,'wrist_error_m':(wp-tp).length,'wrist':list(wp),'target':list(tp)})
print('GRIP_ERRORS',json.dumps(errors),flush=True)
scene.render.filepath=str(OUT/'gunners_initial_grip.png');bpy.ops.render.render(write_still=True)
(OUT/'setup_report.json').write_text(json.dumps({'male_bones':len(male.data.bones),'finger_weights':weighted_fingers,'grip_errors':errors,'male_cloth_vertices':len(mcoat.data.vertices),'male_cloth_faces':len(mcoat.data.polygons),'timeline_frames':360},indent=2))
print('SETUP_COMPLETE',flush=True)
