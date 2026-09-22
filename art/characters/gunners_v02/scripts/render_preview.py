import bpy
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gunner_paths import OUTPUT, CHARACTERS
out=(OUTPUT/'preview_frames');out.mkdir(exist_ok=True)
s=bpy.context.scene;s.render.engine='BLENDER_WORKBENCH';s.render.resolution_x=1080;s.render.resolution_y=756;s.render.resolution_percentage=100;s.render.image_settings.file_format='PNG'
s.display.shading.light='STUDIO';s.display.shading.color_type='TEXTURE';s.display.shading.show_shadows=True;s.display.shading.show_cavity=True;s.display.shading.cavity_type='WORLD';s.display.shading.background_type='WORLD';s.world.color=(.16,.16,.16)
s.view_settings.view_transform='Standard';s.view_settings.exposure=0
for i,fr in enumerate(range(61,361,2)):
 s.frame_set(fr);s.render.filepath=str(out/('%04d.png'%i));bpy.ops.render.render(write_still=True)
 if i%30==0:print('PREVIEW_FRAME',i,flush=True)
print('PREVIEW_COMPLETE',flush=True)
