import bpy,json
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
out=(OUTPUT/'exports');reports=[]
for name in ['SK_Male_Gunner_v02.fbx','SK_Female_Gunner_v02.fbx']:
 bpy.ops.wm.read_factory_settings(use_empty=True);bpy.ops.import_scene.fbx(filepath=str(out/name))
 rig=next(o for o in bpy.context.scene.objects if o.type=='ARMATURE');meshes=[o for o in bpy.context.scene.objects if o.type=='MESH'];rows=[]
 for o in meshes:
  names={g.index:g.name for g in o.vertex_groups};sums=[sum(g.weight for g in v.groups if names[g.group] in rig.data.bones) for v in o.data.vertices];fingerweights={d:sum(any(d in names[g.group] and g.weight>.001 for g in v.groups) for v in o.data.vertices) for d in ['HandThumb','HandIndex','HandMiddle','HandRing','HandPinky']}
  rows.append({'mesh':o.name,'verts':len(o.data.vertices),'unweighted':sum(s<1e-6 for s in sums),'weight_sum_error':max(abs(s-1) for s in sums),'finger_vertex_counts':fingerweights})
  assert all(abs(s-1)<1e-4 for s in sums),rows[-1]
 imgs=[n.image for o in meshes for m in o.data.materials if m and m.use_nodes for n in m.node_tree.nodes if n.type=='TEX_IMAGE' and n.image]
 if 'Male' in name:
  assert all(any(r['finger_vertex_counts'][d]>0 for r in rows) for d in ['HandThumb','HandIndex','HandMiddle','HandRing','HandPinky'])
  assert imgs and all(i.has_data for i in imgs)
 report={'file':name,'bones':len(rig.data.bones),'meshes':rows,'textures':[{'name':i.name,'size':list(i.size)} for i in imgs]};reports.append(report);print('VERIFIED',json.dumps(report),flush=True)
(out/'roundtrip_checks.json').write_text(json.dumps(reports,indent=2))
