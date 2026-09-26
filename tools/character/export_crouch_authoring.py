"""Export source performance transforms for measured crouch re-authoring.

Read-only: original GASP assets stay intact. Coordinates are Unreal centimetres,
component/world space including the source root, sampled at 60 Hz.
"""
import json
from pathlib import Path
import unreal

options = unreal.AnimPoseEvaluationOptions()
options.should_retarget = False
names = ['M_Neutral_Crouch_Stop_RR_Lfoot', 'M_Neutral_Crouch_Stop_RR_Rfoot',
         'M_Neutral_Crouch_Idle_Loop']
folder = Path(unreal.Paths.project_saved_dir()) / 'AnimationReview/crouch-authoring'
folder.mkdir(parents=True, exist_ok=True)
for name in names:
    clip = unreal.load_asset('/Game/Characters/GASP/CombatCrouch/Female/GASP_' + name)
    assert clip, name
    frames = []
    for frame in range(round(clip.get_play_length() * 60) + 1):
        pose = unreal.AnimPoseExtensions.get_anim_pose_at_time(clip, frame / 60, options)
        row = {}
        for bone in unreal.AnimPoseExtensions.get_bone_names(pose):
            t = unreal.AnimPoseExtensions.get_bone_pose(pose, bone, unreal.AnimPoseSpaces.WORLD)
            p, q = t.translation, t.rotation
            row[str(bone)] = dict(p=[p.x, p.y, p.z], q=[q.w, q.x, q.y, q.z])
        frames.append(row)
    (folder / (name + '.json')).write_text(json.dumps(dict(source=clip.get_path_name(), fps=60, frames=frames)))
    print('ARMY_CROUCH_AUTHORING_EXPORT', name, len(frames), flush=True)
