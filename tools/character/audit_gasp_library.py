"""Read-only source coverage/geometry audit. Technical evidence is not visual approval."""
import json
import math
from pathlib import Path
import unreal

catalog = json.loads(Path(__file__).with_name('gasp_motion_catalog.json').read_text())['clips']
options = unreal.AnimPoseEvaluationOptions()
options.evaluation_type = unreal.AnimDataEvalType.COMPRESSED
report = {'visual_acceptance': False, 'clips': []}
for body in ['Female', 'Male']:
    for row in catalog:
        name = 'GASP_' + row['source'].split('/')[-1]
        path = '/Game/Characters/GASP/Motion/' + body + '/Animations/' + name
        clip = unreal.load_asset(path)
        assert clip, path
        duration = clip.get_play_length()
        speeds = []
        for i in range(max(1, math.floor(duration * 10))):
            start = i / 10
            delta = unreal.GaspAuthoringLibrary.root_motion_translation(clip, start, min(.1, duration-start))
            speeds.append(math.hypot(delta.x, delta.y) / min(.1, duration-start))
        poses = []
        for fraction in [0, .25, .5, .75, 1]:
            pose = unreal.AnimPoseExtensions.get_anim_pose_at_time(clip, duration*fraction, options)
            bones = {}
            for bone in ['Hips', 'Head', 'LeftFoot', 'RightFoot', 'LeftHand', 'RightHand']:
                p = unreal.AnimPoseExtensions.get_bone_pose(pose, bone, unreal.AnimPoseSpaces.WORLD).translation
                bones[bone] = [p.x, p.y, p.z]
                assert all(math.isfinite(v) for v in bones[bone]), (path, fraction, bone)
            poses.append(bones)
        report['clips'].append(dict(body=body, name=name, group=row['group'], duration=duration,
            mean_root_speed_cm_s=sum(speeds)/len(speeds), max_root_speed_cm_s=max(speeds), poses=poses,
            readiness='UNREVIEWED', reason='Finite/root-motion checks only; requires rendered motion and transition review.'))
    print('ARMY_AUDIT_BODY', body, flush=True)
out = Path(unreal.Paths.project_saved_dir()) / 'AnimationReview' / 'library-audit.json'
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text(json.dumps(report, indent=2))
print('ARMY_LIBRARY_AUDIT', len(report['clips']), out, flush=True)
