"""Blender: --background approved_grip_C.blend --python export_variants.py -- output mg.blend.
Shared bind rig, a broader male mesh, and the approved machine gun in rifle socket axes.
"""
import bpy,bmesh,sys,json,math
from pathlib import Path
from mathutils import Matrix,Vector
out=Path(sys.argv[sys.argv.index('--')+1]);out.mkdir(parents=True,exist_ok=True)
mgfile=sys.argv[sys.argv.index('--')+2]
scene=bpy.context.scene;arm=bpy.data.objects['Female_Mixamo_Rig'];palette={}
def remember(o):
 for m in o.data.materials:
  if m:
   p=next((n for n in m.node_tree.nodes if n.type=='BSDF_PRINCIPLED'),None) if m.use_nodes else None
   palette[m.name]=list(p.inputs['Base Color'].default_value if p else m.diffuse_color)
def export(name,obs):
 bpy.ops.object.select_all(action='DESELECT')
 for o in obs:o.hide_set(False);o.hide_viewport=False;o.select_set(True)
 bpy.context.view_layer.objects.active=obs[0]
 bpy.ops.export_scene.fbx(filepath=str(out/(name+'.fbx')),use_selection=True,object_types={'ARMATURE','MESH'},axis_forward='-Y',axis_up='Z',add_leaf_bones=False,bake_anim=False,use_armature_deform_only=False,use_mesh_modifiers=True,mesh_smooth_type='OFF',path_mode='STRIP')
rig=arm.copy();rig.data=arm.data.copy();scene.collection.objects.link(rig);rig.name='SoldierRig';rig.animation_data_clear();rig.data.pose_position='REST'
for b in rig.data.bones:b.use_deform=True
for p in rig.pose.bones:
 for c in list(p.constraints):p.constraints.remove(c)
 p.matrix_basis=Matrix.Identity(4)
meshes=[]
for name in ['Female_Azure_Body_ClothReady','Coat_Lower_Cloth']:
 src=bpy.data.objects[name];o=src.copy();o.data=src.data.copy();scene.collection.objects.link(o);o.animation_data_clear();o.parent=rig;o.matrix_world=src.matrix_world.copy()
 for m in list(o.modifiers):
  if m.type=='ARMATURE':m.object=rig
  else:o.modifiers.remove(m)
 # Keep arm lengths and finger shapes shared; broaden jacket, neck and lower face.
 for v in o.data.vertices:
  x,y,z=v.co
  torso=max(0,1-abs(z-1.16)/.37)*max(0,1-max(0,abs(x)-.17)/.13)
  jaw=max(0,1-abs(z-1.49)/.09) if abs(x)<.115 else 0
  v.co.x*=1+.11*torso+.18*jaw
  if z>1.41 and z<1.57 and y<-.015:v.co.y-=.009*jaw
  if .93<z<1.35 and abs(x)<.19:v.co.y*=1.08
 remember(o);meshes.append(o)
export('SK_Male_Rifle',[rig]+meshes)
# Copy only the approved machine gun mesh, retaining its flat palette.
with bpy.data.libraries.load(mgfile,link=False) as (src,dst):dst.objects=['Machine Gun - Azure']
mg=dst.objects[0];scene.collection.objects.link(mg);mg.parent=None;mg.matrix_world=Matrix.Identity(4)
for v in mg.data.vertices:
 x,y,z=v.co
 # 1.20 m overall; receiver/trigger aligned with the approved right wrist.
 v.co=(y*1.2,-x*1.2+.06,z*1.2-.11)
remember(mg)
boxmesh=mg.copy();boxmesh.data=mg.data.copy();scene.collection.objects.link(boxmesh)
for obj,keep in [(mg,False),(boxmesh,True)]:
 bm=bmesh.new();bm.from_mesh(obj.data)
 bmesh.ops.delete(bm,geom=[f for f in bm.faces if (f.material_index==2)!=keep],context='FACES');bm.to_mesh(obj.data);bm.free()
export('SM_MachineGun',[mg]);export('SM_MGBox',[boxmesh])
# A separate visible bolt/handle for the prototype handling animation.
steel=bpy.data.materials.new('Handling charcoal steel');steel.diffuse_color=(.035,.042,.05,1)
brass=bpy.data.materials.new('Handling brass');brass.diffuse_color=(.48,.28,.065,1)
cyan=bpy.data.materials.new('Handling cyan');cyan.diffuse_color=(.025,.48,.7,1)
def meshpart(name,verts,faces,mat):
 d=bpy.data.meshes.new(name);d.from_pydata(verts,[],faces);d.materials.append(mat);o=bpy.data.objects.new(name,d);scene.collection.objects.link(o);remember(o);return o
def box(name,lo,hi,mat):
 verts=[(x,y,z) for x in [lo[0],hi[0]] for y in [lo[1],hi[1]] for z in [lo[2],hi[2]]]
 return meshpart(name,verts,[(0,4,6,2),(1,3,7,5),(0,1,5,4),(2,6,7,3),(0,2,3,1),(4,5,7,6)],mat)
bolt=box('Bolt',(-.007,-.055,-.007),(.007,.055,.007),steel)
handle=box('BoltHandle',(0,-.036,-.009),(.067,-.024,.005),steel)
export('SM_Bolt',[bolt,handle])
parts=[]
for i in range(8):
 x=(i-3.5)*.009
 parts.append(box('case',(x-.003,-.022,-.003),(x+.003,.012,.003),brass))
 parts.append(meshpart('tip',[(x-.003,-.022,-.003),(x+.003,-.022,-.003),(x+.003,-.022,.003),(x-.003,-.022,.003),(x,-.034,0)],[(0,1,4),(1,2,4),(2,3,4),(3,0,4)],cyan))
export('SM_ReloadClip',parts)
flashmat=bpy.data.materials.new('Handling flash');flashmat.diffuse_color=(.2,.8,1,1)
flash=meshpart('Flash',[(0,0,0),(0,-.09,0),(-.025,-.025,0),(.025,-.025,0),(0,-.025,-.025),(0,-.025,.025)],[(0,2,4),(0,4,3),(0,3,5),(0,5,2),(1,4,2),(1,3,4),(1,5,3),(1,2,5)],flashmat)
export('SM_MuzzleFlash',[flash])
(out/'variants.json').write_text(json.dumps({'palette_linear':palette,'male_height_scale':1.08,'male_description':'Shared bind rig; broader jacket and jaw; runtime 1.08 height scale','mg_muzzle_cm':[0,54,16],'mg_left_grip_cm':[7,1,2],'mg_right_grip_cm':[.67,-35.26,6.717]},indent=2))
print('VARIANTS_EXPORTED',out)
