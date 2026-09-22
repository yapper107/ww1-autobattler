import bpy,json
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
for o in bpy.context.scene.objects:
 for m in o.modifiers:
  if m.type=='CLOTH':m.show_viewport=False
rows=[]
for label in ['Male','Female']:
 rig=bpy.data.objects['Male_Azure_Rig' if label=='Male' else 'Female_Mixamo_Rig']
 for side in ['Left','Right']:
  errors=[]
  for fr in range(61,361,3):
   bpy.context.scene.frame_set(fr);bpy.context.view_layer.update();dep=bpy.context.evaluated_depsgraph_get();p=rig.evaluated_get(dep).pose.bones['mixamorig:'+side+'Hand'];target=bpy.data.objects[label+'_'+side+'_MG_Grip'].evaluated_get(dep)
   errors.append(((rig.matrix_world@p.head-target.matrix_world.translation).length,fr))
  row={'rig':label,'side':side,'max_error_m':max(errors)[0],'worst_frame':max(errors)[1]};rows.append(row)
print('GRIP_SWEEP',json.dumps(rows),flush=True)
(OUTPUT/'grip_sweep.json').write_text(json.dumps(rows,indent=2))
