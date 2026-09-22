"""Blender: approved blend --python measure_phases.py -- export-directory.
Align left-foot swing peaks across locomotion clips before blending their normalized phases.
"""
import bpy,json,sys
from pathlib import Path
out=Path(sys.argv[sys.argv.index('--')+1]);manifest=json.loads((out/'manifest.json').read_text());s=bpy.context.scene;arm=bpy.data.objects['Female_Mixamo_Rig']
for o in s.objects:
 for m in o.modifiers:
  if m.type=='CLOTH':m.show_viewport=False
for t in arm.animation_data.nla_tracks:t.mute=True
for c in manifest['clips']:
 c['phase_offset']=0.
 if not c['name'].endswith('_InPlace'):continue
 arm.animation_data.action=bpy.data.actions[c['source_action']];heights=[]
 for f in range(1,c['frames']):
  s.frame_set(f);bpy.context.view_layer.update()
  points=[arm.matrix_world@arm.pose.bones['mixamorig:'+side+'Foot'].matrix.translation for side in ['Left','Right']]
  heights.append(points[0].z-points[1].z)
 peak=max(range(len(heights)),key=heights.__getitem__)
 c['phase_offset']=peak/len(heights)-.25
 print(c['name'],c['phase_offset'],flush=True)
(out/'manifest.json').write_text(json.dumps(manifest,indent=2))
