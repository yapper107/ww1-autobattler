"""Preserve the imported body; clip narrow V openings into coat surfaces only."""
import bpy,bmesh,json,math
from mathutils import Vector
from pathlib import Path
import os
SOURCE=Path(__file__).resolve().parent
OUTPUT=Path(os.environ.get("ARMY_MALE_OUTPUT", str(SOURCE.parents[3]/".local/male_candidate"))).expanduser().resolve()
OUTPUT.mkdir(parents=True, exist_ok=True)
out=OUTPUT
o=next(o for o in bpy.data.objects if o.type=='MESH')
if o.name not in bpy.context.scene.objects:bpy.context.scene.collection.objects.link(o)
src=o.data
# Connected shell isolates the jacket from the separate trousers/boots/accessories.
neighbors=[set() for v in src.vertices]
for e in src.edges:a,b=e.vertices;neighbors[a].add(b);neighbors[b].add(a)
seen=set();components=[]
for i in range(len(neighbors)):
 if i in seen:continue
 stack=[i];seen.add(i);part=set()
 while stack:
  j=stack.pop();part.add(j)
  for k in neighbors[j]:
   if k not in seen:seen.add(k);stack.append(k)
 components.append(part)
coat=max(components,key=len)
verts=[v.co.copy() for v in src.vertices];faces=[];uvs=[];mats=[];smooth=[]
uv=src.uv_layers.active
cache={tuple(round(float(c),7) for c in v):i for i,v in enumerate(verts)}
def vertex(p):
 key=tuple(round(float(c),7) for c in p)
 if key not in cache:cache[key]=len(verts);verts.append(p.copy())
 return cache[key]
def split(poly,n,d):
 inside=[];outside=[]
 for i,(p,u) in enumerate(poly):
  q,v=poly[(i+1)%len(poly)];a=n.dot(p)-d;b=n.dot(q)-d
  (inside if a<=1e-9 else outside).append((p,u))
  if (a< -1e-9 and b>1e-9) or (a>1e-9 and b< -1e-9):
   t=a/(a-b);hit=(p.lerp(q,t),u.lerp(v,t));inside.append(hit);outside.append(hit)
 return inside,outside
def subtract(poly,planes):
 retained=[];remaining=poly
 for n,d in planes:
  if len(remaining)<3:break
  remaining,exterior=split(remaining,n,d)
  if len(exterior)>=3:retained.append(exterior)
 return retained
# Front opening up toward lower waist; rear vent shorter and narrower.
front_top=.535;back_top=.490
front_slope=.030/(front_top-.295);back_slope=.017/(back_top-.295)
def wedge(top,slope,front):
 return [(Vector((1,0,slope)),slope*top),(Vector((-1,0,slope)),slope*top),(Vector((0,0,-1)),-.265),(Vector((0,-1 if front else 1,0)),.070 if front else .087)]
# Front's depth condition is y <= -.070; rear is y >= .087.
front=wedge(front_top,front_slope,True);front[-1]=(Vector((0,1,0)),0.0)
back=wedge(back_top,back_slope,False);back[-1]=(Vector((0,-1,0)),0.0)
changed=0
for f in src.polygons:
 poly=[(src.vertices[vid].co.copy(),uv.data[li].uv.copy() if uv else Vector((0,0))) for vid,li in zip(f.vertices,f.loop_indices)]
 candidate=all(i in coat for i in f.vertices) and min(p.z for p,u in poly)<front_top and max(p.z for p,u in poly)>.265 and min(p.x for p,u in poly)<.055 and max(p.x for p,u in poly)>-.055
 if not candidate:
  faces.append(list(f.vertices));uvs.append([u for v,u in poly]);mats.append(f.material_index);smooth.append(f.use_smooth);continue
 parts=[poly]
 if candidate:
  for planes in [front,back]:parts=[q for p in parts for q in subtract(p,planes)]
  changed+=1
 for p in parts:
  indices=[vertex(v) for v,u in p]
  if len(set(indices))<3:continue
  faces.append(indices);uvs.append([u for v,u in p]);mats.append(f.material_index);smooth.append(f.use_smooth)
mesh=bpy.data.meshes.new('Male coat slit repair');mesh.from_pydata(verts,[],faces);mesh.update()
for m in src.materials:mesh.materials.append(m)
if uv:
 layer=mesh.uv_layers.new(name=uv.name)
 for f,coords in zip(mesh.polygons,uvs):
  for li,u in zip(f.loop_indices,coords):layer.data[li].uv=u
for f,m,s in zip(mesh.polygons,mats,smooth):f.material_index=m;f.use_smooth=s
# Tiny turned-in edges give the new opening a visible cloth thickness, not a painted seam.
bm=bmesh.new();bm.from_mesh(mesh);rims=[]
for e in list(bm.edges):
 if not e.is_boundary:continue
 a,b=[v.co for v in e.verts];mid=(a+b)*.5
 for top,slope,isfront,depth in [(front_top,front_slope,True,0.0),(back_top,back_slope,False,0.0)]:
  if not(.266<mid.z<top+.0001):continue
  if isfront and max(a.y,b.y)>depth+1e-6:continue
  if not isfront and min(a.y,b.y)<depth-1e-6:continue
  onplane=any(abs(sign*a.x+slope*a.z-slope*top)<1e-6 and abs(sign*b.x+slope*b.z-slope*top)<1e-6 for sign in [-1,1])
  if onplane:rims.append((e,1 if isfront else -1));break
rim_cache={}
for e,sign in rims:
 a,b=e.verts
 def inset(v):
  key=(v,sign)
  if key not in rim_cache:rim_cache[key]=bm.verts.new(v.co+Vector((0,.003*sign,0)))
  return rim_cache[key]
 try:f=bm.faces.new((b,a,inset(a),inset(b)));f.smooth=False
 except ValueError:pass
# The import has no pelvis behind the newly opened upper coat. Add a small
# eight-sided trouser waist inside the coat, overlapping the existing leg tops.
rings=[]
for z,rx,ry in [(.452,.085,.066),(.555,.090,.070)]:
 rings.append([bm.verts.new((rx*math.cos(2*math.pi*i/8),ry*math.sin(2*math.pi*i/8),z)) for i in range(8)])
for i in range(8):bm.faces.new((rings[0][i],rings[0][(i+1)%8],rings[1][(i+1)%8],rings[1][i]))
bm.faces.new(tuple(reversed(rings[0])));bm.faces.new(tuple(rings[1]))
bmesh.ops.recalc_face_normals(bm,faces=list(bm.faces));bm.to_mesh(mesh);bm.free()
o.data=mesh;o.name='Male_Azure_CoatSlit_v01'
# Geometry below the coat and outside the central coat area is untouched.
mesh.calc_loop_triangles()
report={'source_vertices':len(src.vertices),'source_faces':len(src.polygons),'new_vertices':len(mesh.vertices),'new_faces':len(mesh.polygons),'triangles':len(mesh.loop_triangles),'coat_faces_processed':changed,'rim_edges':len(rims),'front_apex':front_top,'back_apex':back_top,'coat_rim_thickness':.003,'added_inner_trouser_waist_faces':10,'all_original_vertex_positions_preserved':all((mesh.vertices[i].co-v.co).length<1e-7 for i,v in enumerate(src.vertices))}
(out/'coat_slit_report.json').write_text(json.dumps(report,indent=2))
bpy.ops.wm.save_as_mainfile(filepath=str(out/'male_coat_slit_v01.blend'))
# Include the selected object only for a portable import/rigging copy.
bpy.ops.object.select_all(action='DESELECT');o.select_set(True);bpy.context.view_layer.objects.active=o
bpy.ops.export_scene.gltf(filepath=str(out/'male_coat_slit_v01.glb'),use_selection=True,export_format='GLB')
print('COAT_REPAIR',json.dumps(report))
