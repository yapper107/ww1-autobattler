import bpy,json,math
from pathlib import Path
import os
SOURCE=Path(__file__).resolve().parent
OUTPUT=Path(os.environ.get("ARMY_MALE_OUTPUT", str(SOURCE.parents[3]/".local/male_candidate"))).expanduser().resolve()
OUTPUT.mkdir(parents=True, exist_ok=True)
out=(OUTPUT/'rigged')
if not (out/'SK_Male_Azure_v01.fbx').exists():out=SOURCE/'rigged'
bpy.ops.wm.read_factory_settings(use_empty=True)
bpy.ops.import_scene.fbx(filepath=str(out/'SK_Male_Azure_v01.fbx'))
o=next(o for o in bpy.context.scene.objects if o.type=='MESH');rig=next(o for o in bpy.context.scene.objects if o.type=='ARMATURE')
counts=[len([g for g in v.groups if g.weight>1e-5]) for v in o.data.vertices];sums=[sum(g.weight for g in v.groups) for v in o.data.vertices]
imgs=[n.image for m in o.data.materials if m and m.use_nodes for n in m.node_tree.nodes if n.type=='TEX_IMAGE' and n.image]
report={'vertices':len(o.data.vertices),'polygons':len(o.data.polygons),'bones':len(rig.data.bones),'unweighted':sum(n==0 for n in counts),'max_influences':max(counts),'max_weight_sum_error':max(abs(s-1) for s in sums),'textures':[{'name':i.name,'size':list(i.size),'has_data':i.has_data} for i in imgs],'armature_modifier':any(m.type=='ARMATURE' and m.object==rig for m in o.modifiers)}
assert report['unweighted']==0 and report['max_influences']<=4
assert report['max_weight_sum_error']<1e-4 and report['armature_modifier']
assert imgs and all(i.has_data and i.size[0]>0 for i in imgs)
(out/'fbx_roundtrip_check.json').write_text(json.dumps(report,indent=2));print('FBX_CHECK',json.dumps(report))
