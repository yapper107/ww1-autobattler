import bpy,bmesh,math,json,zlib,struct
import numpy as np
from pathlib import Path
import os
SOURCE=Path(__file__).resolve().parent
OUTPUT=Path(os.environ.get("ARMY_MALE_OUTPUT", str(SOURCE.parents[3]/".local/male_candidate"))).expanduser().resolve()
OUTPUT.mkdir(parents=True, exist_ok=True)
from mathutils import Vector,Quaternion
out=(OUTPUT/'textured');out.mkdir(exist_ok=True)
scene=bpy.context.scene;o=next(o for o in bpy.data.objects if o.type=='MESH')
if o.name not in scene.objects:scene.collection.objects.link(o)
mesh=o.data
# Identify disconnected modeled parts using the original import's stable vertex IDs.
adj=[set() for v in mesh.vertices]
for e in mesh.edges:
 a,b=e.vertices;adj[a].add(b);adj[b].add(a)
comp={};parts=[]
for i in range(len(adj)):
 if i in comp:continue
 ci=len(parts);stack=[i];comp[i]=ci;part=[]
 while stack:
  v=stack.pop();part.append(v)
  for q in adj[v]:
   if q not in comp:comp[q]=ci;stack.append(q)
 parts.append(part)
seednames={92:'leather',1033:'leather',134:'trousers',1062:'trousers',561:'leather',287:'webbing',1289:'webbing',299:'armour',1457:'armour',362:'steel',286:'webbing',1250:'webbing',374:'webbing',1330:'webbing',470:'armour',375:'steel',1339:'steel',331:'webbing',1272:'webbing',327:'leather',1273:'leather',363:'steel',410:'armour',1374:'armour',942:'armour',1965:'armour'}
partnames={comp[k]:v for k,v in seednames.items()}
for i,p in enumerate(parts):
 if min(p)>=len(mesh.vertices)-16:partnames[i]='trousers'
# Triangulation makes the atlas layout deterministic without moving any surface.
polyclass={f.index:partnames.get(comp[f.vertices[0]],'body') for f in mesh.polygons}
attr=mesh.attributes.new('part_region','INT','FACE');names=['body','leather','trousers','webbing','armour','steel']
for f in mesh.polygons:attr.data[f.index].value=names.index(polyclass[f.index])
bm=bmesh.new();bm.from_mesh(mesh);bmesh.ops.triangulate(bm,faces=list(bm.faces));bm.to_mesh(mesh);bm.free();mesh.update()
palette={'coat':'29475f','collar':'577a94','trousers':'293b4c','armour':'373d42','leather':'27292c','webbing':'666748','steel':'767a73','skin':'b88759','ivory':'eee7d7','helmet':'30495f','brow':'8b613e'}
colors={k:np.array([int(v[i:i+2],16) for i in (0,2,4)],dtype=np.uint8) for k,v in palette.items()}
counts={}
def paint(pos,region,center=None,helmet_face=False):
 x,y,z=pos[...,0],pos[...,1],pos[...,2];a=np.abs(x)
 rgb=np.empty(pos.shape,dtype=np.uint8);rgb[:]=colors['coat' if region=='body' else region]
 original=(x,y,z,a)
 if center is not None:
  x,y,z=[np.full(x.shape,float(q)) for q in center];a=np.abs(x)
 def c(mask,name):rgb[mask]=colors[name]
 if region=='body':
  c((z<.28),'trousers')
  # Wrist planes follow the A-pose arm, avoiding horizontal color bands.
  wrist=(a-.255)*.62-(z-.583)*.785
  arm=a>.21
  c(arm&(wrist>-.018)&(wrist<.018),'collar')
  c(arm&(wrist>=.018),'leather')
  # High turned collar follows its V-shaped lower boundary.
  collar=(a<.122)&(z>.824+.25*np.maximum(.09-a,0))&(z<.886)&(a>.039)&(y<.035)
  collar|=(z>.856)&(z<.886)&(y>=.035)
  c(collar,'collar')
  # Front/back suspenders; the chest plate and pouches are separate components.
  strap=(a>.064)&(a<.091)&(z>.638)&(z<.823)&((y<-.035)|(y>.067))
  c(strap,'webbing')
  c((z>.611)&(z<.644)&(a<.131),'leather')
  # Exposed face, bounded inside the helmet brim and chin strap.
  face=(z>.871)&(z<.937)&(a<.05)&(y<-.024)
  c(face,'skin')
  helmet=(z>=.935)|((z>.919)&((a>.044)|(y<-.063)|(y>.035)))|helmet_face
  c(helmet,'helmet')
  x,y,z,a=original
  # One narrow stripe across the crown; keep the brim blue.
  c(helmet&(a<.010)&(z>.944),'ivory')
  # Small angular ivory eyes with no pupils, centered below the brim.
  ex=(a-.018)/.009;ez=(z-.9215)/.0027
  eyes=(np.abs(ex)+np.abs(ez-.18*ex)<1)&(y<-.037)&face&~helmet
  c(eyes,'ivory')
  brow=(a>.009)&(a<.028)&(z>.9250)&(z<.9266)&(y<-.037)&face&~helmet
  c(brow,'brow')
 if region=='armour':
  x,y,z,a=original
  # Four compact diamonds on the anatomical left shoulder only.
  u=(x-.158);v=(z-.779)
  badge=np.zeros(x.shape,dtype=bool)
  for du in [-.007,.007]:
   for dv in [-.009,.009]:badge|=(np.abs((u-du)/.0055)+np.abs((v-dv)/.007)<1)
  c(badge&(x>.12)&(z>.74)&(y<-.027),'ivory')
 return rgb
N=4096;tile=64;cols=N//tile;atlas=np.zeros((N,N,3),dtype=np.uint8);atlas[:]=colors['coat']
while mesh.uv_layers:mesh.uv_layers.remove(mesh.uv_layers[0])
uv=mesh.uv_layers.new(name='AzureAtlas')
# Fixed padding around every triangle prevents adjoining colors bleeding at seams.
grid=np.arange(tile,dtype=float)+.5;uu,vv=np.meshgrid(grid,grid)
b=(uu-5)/54;c=(vv-5)/54;aa=1-b-c
weights=np.stack([aa,b,c],axis=-1);weights=np.maximum(weights,0);weights/=weights.sum(axis=-1,keepdims=True)
for f in mesh.polygons:
 ix=f.index%cols;iy=f.index//cols
 verts=np.array([mesh.vertices[i].co[:] for i in f.vertices]);region=names[mesh.attributes['part_region'].data[f.index].value]
 pts=np.einsum('ijk,kl->ijl',weights,verts)
 atlas[iy*tile:(iy+1)*tile,ix*tile:(ix+1)*tile]=paint(pts,region,verts.mean(axis=0),bool(verts[:,2].max()>.934 and verts[:,2].min()>.919))
 for li,(u,v) in zip(f.loop_indices,[(5,5),(59,5),(5,59)]):uv.data[li].uv=((ix*tile+u)/N,(iy*tile+v)/N)
 f.use_smooth=False
 counts[region]=counts.get(region,0)+1
# Write an sRGB PNG bottom-to-top to match Blender UV coordinates.
def chunk(t,d):return struct.pack('!I',len(d))+t+d+struct.pack('!I',zlib.crc32(t+d)&0xffffffff)
raw=b''.join(b'\x00'+row.tobytes() for row in atlas[::-1]);png=b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',struct.pack('!2I5B',N,N,8,2,0,0,0))+chunk(b'sRGB',b'\x00')+chunk(b'IDAT',zlib.compress(raw,9))+chunk(b'IEND',b'')
texpath=out/'Male_Azure_BaseColor.png';texpath.write_bytes(png)
img=bpy.data.images.load(str(texpath),check_existing=False);img.pack()
mat=bpy.data.materials.new('Male Azure | matte color atlas');mat.use_nodes=True
bs=mat.node_tree.nodes.get('Principled BSDF');bs.inputs['Roughness'].default_value=.87;bs.inputs['Metallic'].default_value=0;bs.inputs['Specular IOR Level'].default_value=.18
tex=mat.node_tree.nodes.new('ShaderNodeTexImage');tex.image=img;tex.interpolation='Linear';mat.node_tree.links.new(tex.outputs['Color'],bs.inputs['Base Color'])
mesh.materials.clear();mesh.materials.append(mat)
for f in mesh.polygons:f.material_index=0
# Set intended prototype height: 1.836 m, eight percent above 1.70 m female.
scale=1.836/max(v.co.z for v in mesh.vertices)
for v in mesh.vertices:v.co*=scale
o.name='Male_Azure_Textured_Apose';o['height_m']=1.836;o['texture_style']='matte palette, flat face shading';o['source']='male_coat_slit_v01.blend';o['palette_srgb']=json.dumps(palette)
scene.unit_settings.system='METRIC';scene.unit_settings.scale_length=1
bpy.ops.object.select_all(action='DESELECT');o.select_set(True);bpy.context.view_layer.objects.active=o
for screen in bpy.data.screens:
 for ar in screen.areas:
  if ar.type=='VIEW_3D':
   sp=ar.spaces.active;sp.shading.type='MATERIAL';sp.region_3d.view_location=(0,0,.918);sp.region_3d.view_rotation=Quaternion((.70710678,.70710678,0,0));sp.region_3d.view_distance=2.7;sp.region_3d.view_perspective='ORTHO'
bpy.ops.wm.save_as_mainfile(filepath=str(out/'Male_Azure_Textured_Apose.blend'))
bpy.ops.export_scene.fbx(filepath=str(out/'Male_Azure_Mixamo.fbx'),use_selection=True,object_types={'MESH'},apply_unit_scale=True,axis_forward='-Z',axis_up='Y',path_mode='COPY',embed_textures=True,bake_anim=False,add_leaf_bones=False,use_mesh_modifiers=True)
bpy.ops.export_scene.gltf(filepath=str(out/'Male_Azure_Textured_Apose.glb'),use_selection=True,export_format='GLB')
(out/'texture_report.json').write_text(json.dumps({'triangles':len(mesh.polygons),'vertices':len(mesh.vertices),'height_m':1.836,'atlas':[N,N],'palette_srgb':palette,'triangle_regions':counts,'rigged':False},indent=2))
print('TEXTURED',len(mesh.polygons),'triangles',counts)
# Render inspection views with the actual export material.
scene.render.engine='CYCLES';scene.cycles.samples=24;scene.render.resolution_x=1000;scene.render.resolution_y=1400;scene.render.resolution_percentage=100
scene.world=bpy.data.worlds.new('Azure preview world');scene.world.use_nodes=True;scene.world.node_tree.nodes['Background'].inputs[0].default_value=(.5,.5,.5,1);scene.world.node_tree.nodes['Background'].inputs[1].default_value=.7
scene.view_settings.view_transform='Standard';scene.view_settings.exposure=-.8;scene.view_layers[0].material_override=None
center=Vector((0,0,.918));h=1.836
for name,loc,power,size in [('Key',(2,-3,4),500,5),('Fill',(-2,-2,2),350,4),('Rim',(1,3,3),400,4)]:
 d=bpy.data.lights.new(name,'AREA');d.energy=power;d.shape='DISK';d.size=size;l=bpy.data.objects.new(name,d);scene.collection.objects.link(l);l.location=center+Vector(loc);l.rotation_euler=(center-l.location).to_track_quat('-Z','Y').to_euler()
d=bpy.data.cameras.new('PreviewCamera');cam=bpy.data.objects.new('PreviewCamera',d);scene.collection.objects.link(cam);scene.camera=cam;d.type='ORTHO';d.ortho_scale=h*1.12
for name,direction in [('front',(0,-3,0)),('back',(0,3,0)),('angle',(1.5,-3,.25))]:
 cam.location=center+Vector(direction)*h;cam.rotation_euler=(center-cam.location).to_track_quat('-Z','Y').to_euler();scene.render.filepath=str(out/('male_azure_'+name+'.png'));bpy.ops.render.render(write_still=True)
cam.location=Vector((0,-3,1.66));target=Vector((0,-.03,1.66));cam.rotation_euler=(target-cam.location).to_track_quat('-Z','Y').to_euler();d.ortho_scale=.44
scene.render.resolution_x=1000;scene.render.resolution_y=1000;scene.render.filepath=str(out/'male_azure_face.png');bpy.ops.render.render(write_still=True)
