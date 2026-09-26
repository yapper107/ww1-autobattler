"""Run the isolated UE 5.8 GASP preparation/review from WSL.

Build the Army mirror with scripts/build.sh first. Sample assets are staged in
that mirror; this tool never imports the entire sample into the source repository.
"""
import argparse
from datetime import datetime
import json
from pathlib import Path
import shutil
import subprocess

from preflight_gasp import preflight


def windows(path):
    return subprocess.check_output(['wslpath', '-w', str(path.resolve())], text=True).strip()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--engine', type=Path, required=True)
    parser.add_argument('--sample', type=Path, required=True, help='Exact matching GASP .uproject')
    parser.add_argument('--mirror', type=Path, required=True)
    parser.add_argument('--stage', action='store_true')
    parser.add_argument('--motion-library', action='store_true', help='Stage and build the expanded motion library and pose databases')
    parser.add_argument('--retarget', action='store_true')
    parser.add_argument('--review', action='store_true')
    parser.add_argument('--contacts', action='store_true')
    parser.add_argument('--actions', action='store_true')
    parser.add_argument('--cloth', action='store_true')
    parser.add_argument('--runtime', action='store_true', help='Compile runtime Motion Matching node constants')
    parser.add_argument('--combat-crouch', action='store_true', help='Bake the combat crouch duplicate poses')
    parser.add_argument('--contexts', action='store_true', help='Index separate moving-only contexts')
    parser.add_argument('--audit-library', action='store_true', help='Read-only geometry/root-speed inventory; not visual acceptance')
    parser.add_argument('--combat-review', action='store_true')
    parser.add_argument('--motion-validate', action='store_true')
    parser.add_argument('--warp-mask', type=int, choices=range(8), default=7, help='Diagnostic layer mask: orientation=1, stride=2, foot placement=4')
    parser.add_argument('--time', type=float, default=27, help='Combat still time')
    parser.add_argument('--start', type=float, default=0, help='First combat capture second')
    parser.add_argument('--end', type=float, default=46, help='Last combat capture second')
    parser.add_argument('--camera-yaw', type=float, default=43, help='Close camera angle: 0 front, 90 side')
    parser.add_argument('--camera-height', type=float, default=130, help='Close camera height above the focus, centimetres')
    parser.add_argument('--camera-width', type=float, default=390, help='Close view orthographic width in centimetres')
    parser.add_argument('--focus-height', type=float, default=95, help='Close view focus height in centimetres')
    parser.add_argument('--source-clip', help='Raw normalized source clip; bypasses runtime layers for diagnosis')
    parser.add_argument('--hold-crouch', action='store_true', help='Keep crouch after the stop to inspect settling before any rise')
    parser.add_argument('--contact-markers', action='store_true', help='Diagnostic projected thumb/index/middle bones, including occluded points')
    parser.add_argument('--reload-start', type=float, default=30, help='Course reload start; use 29.025 to interrupt a rifle rearward stroke')
    parser.add_argument('--reload-end', type=float, default=34, help='Course reload end')
    parser.add_argument('--body', type=int, choices=range(4), help='Close view: female rifle/MG, male rifle/MG')
    parser.add_argument('--validate', action='store_true')
    parser.add_argument('--capture', action='store_true')
    parser.add_argument('--still', action='store_true')
    parser.add_argument('--clip', type=int, choices=range(10))
    args = parser.parse_args()
    if args.still:
        args.capture = True
    if not 0 <= args.start < args.end <= 46:
        parser.error('Capture range must satisfy 0 <= start < end <= 46')
    if args.source_clip and (not args.combat_review or args.motion_validate):
        parser.error('--source-clip requires --combat-review and cannot validate runtime motion')
    assert any([args.stage, args.retarget, args.review, args.validate, args.motion_library,args.contacts,args.actions,args.cloth,args.runtime,args.contexts,args.combat_crouch,args.audit_library,args.combat_review,args.motion_validate]), 'Choose a preparation or review action'
    assert (args.mirror/'.army-build-mirror').is_file(), 'Requires a marked, separate build mirror'
    assert args.sample.parent.resolve() != args.mirror.resolve()
    if args.stage:
        result = preflight(args.engine, args.sample)
        if not result['can_start_editor_validation']:
            parser.error('\n'.join(result['blockers']))
    sample = json.loads(args.sample.read_text(encoding='utf-8-sig'))
    version = json.loads((args.engine/'Engine/Build/Build.version').read_text())
    assert (version['MajorVersion'],version['MinorVersion'])==(5,8)
    assert sample['EngineAssociation']=='5.8'
    plugins = sorted({p['Name'] for p in sample['Plugins'] if p.get('Enabled')} |
                     {'PythonScriptPlugin', 'EditorScriptingUtilities', 'SkeletalMeshModelingTools'})
    plugin_arg = '-EnablePlugins='+','.join(plugins)
    source = Path(__file__).parent
    dest = args.mirror/'Tools/character'
    dest.mkdir(parents=True, exist_ok=True)
    for name in ['stage_gasp_prototype.py', 'create_soldier_ik_rigs.py', 'retarget_gasp_prototype.py', 'validate_gasp_prototype.py', 'build_gasp_motion_library.py', 'gasp_motion_catalog.json', 'create_gasp_contacts.py', 'create_gasp_actions.py', 'create_gasp_cloth.py', 'create_gasp_runtime.py', 'create_gasp_contexts.py', 'audit_gasp_library.py', 'create_combat_crouch.py']:
        shutil.copy2(source/name, dest/name)
    project = args.mirror/'ArmyPrototype.uproject'
    logs = args.mirror/'Saved/GaspPreparation'
    logs.mkdir(parents=True, exist_ok=True)

    def run_script(project_path, script):
        command = [str(args.engine/'Engine/Binaries/Win64/UnrealEditor-Cmd.exe'), windows(project_path),
                   '-run=pythonscript', '-script='+windows(dest/script), plugin_arg,
                   '-nullrhi', '-unattended', '-nosplash', '-nosound']
        with (logs/(Path(script).stem+'.log')).open('w') as log:
            subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, check=True)
        print('Completed', script, flush=True)

    if args.stage:
        saved = args.sample.parent/'Saved'
        saved.mkdir(exist_ok=True)
        (saved/'army-gasp-transfer.json').write_text(json.dumps({'destination': windows(args.mirror), 'motion_library':args.motion_library}))
        run_script(args.sample, 'stage_gasp_prototype.py')
    if args.retarget:
        run_script(project, 'create_soldier_ik_rigs.py')
        run_script(project, 'retarget_gasp_prototype.py')
    if args.retarget or args.validate:
        run_script(project, 'validate_gasp_prototype.py')
    if args.motion_library:
        run_script(project, 'build_gasp_motion_library.py')
    if args.contacts:
        run_script(project, 'create_gasp_contacts.py')
    if args.actions:
        run_script(project, 'create_gasp_actions.py')
    if args.cloth:
        run_script(project, 'create_gasp_cloth.py')
    if args.runtime:
        run_script(project, 'create_gasp_runtime.py')
    if args.combat_crouch:
        run_script(project, 'create_combat_crouch.py')
    if args.contexts or args.motion_library:
        run_script(project, 'create_gasp_contexts.py')
    if args.audit_library:
        run_script(project, 'audit_gasp_library.py')
    if args.review or args.combat_review or args.motion_validate:
        report_path = args.mirror/'Saved/AnimationReview/gasp-combat-check.txt'
        if args.motion_validate:
            report_path.unlink(missing_ok=True)
        combat=args.combat_review or args.motion_validate
        executable='UnrealEditor-Cmd.exe' if args.motion_validate else 'UnrealEditor.exe'
        command = [str(args.engine/'Engine/Binaries/Win64'/executable), windows(project),
                   '/Engine/Maps/Entry?game=/Script/ArmyPrototype.'+('GaspCombatReview' if combat else 'GaspReviewGameMode'),
                   '-game', plugin_arg, '-windowed', '-ResX=1600', '-ResY=900',
                   '-unattended', '-nosplash', '-nosound']
        if args.motion_validate:
            command.extend(['-nullrhi','-ArmyMotionValidate'])
        if combat:
            command.append('-ArmyMotionWarpMask='+str(args.warp_mask))
            command.append('-ArmyGaspTime='+str(args.time))
            command.extend(['-ArmyGaspStart='+str(args.start), '-ArmyGaspEnd='+str(args.end), '-ArmyGaspCameraYaw='+str(args.camera_yaw), '-ArmyGaspCameraHeight='+str(args.camera_height), '-ArmyGaspCameraWidth='+str(args.camera_width), '-ArmyGaspFocusHeight='+str(args.focus_height)])
            if args.source_clip:command.append('-ArmySourceClip='+args.source_clip)
            if args.hold_crouch:command.append('-ArmyHoldCrouch')
            if args.contact_markers:command.append('-ArmyContactMarkers')
            command.extend(['-ArmyReloadBegin='+str(args.reload_start), '-ArmyReloadFinish='+str(args.reload_end)])
            if args.body is not None:command.append('-ArmyGaspReviewBody='+str(args.body))
        if args.capture:
            # Keep artifact resolution independent of the desktop work area and
            # Windows display scaling (which reduced 1600x900 to 1066x600).
            command.extend(['-RenderOffScreen','-ForceRes'])
            command.append('-ArmyGaspReviewCapture')
            capture_dir=args.mirror/'Saved/Screenshots'/(('GaspCombat-' if combat else 'GaspReview-')+datetime.now().strftime('%Y%m%d-%H%M%S'))
            capture_dir.mkdir(parents=True)
            command.append('-ArmyGaspCaptureDir='+windows(capture_dir))
            command.append('-abslog='+windows(capture_dir/'render.log'))
            print('Capture folder:',capture_dir,flush=True)
        if args.still:
            command.append('-ArmyGaspReviewStill')
        if args.clip is not None:
            command.append('-ArmyGaspClip='+str(args.clip))
        with (logs/('combat-review.log' if combat else 'review.log')).open('w') as log:
            subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, check=True)
        if args.capture:
            rendered_log=(capture_dir/'render.log').read_text(errors='replace')
            material_failures=[line for line in rendered_log.splitlines()
                               if 'failed to compile material' in line.lower()
                               or 'material with missing usage flag' in line.lower()]
            if material_failures:
                (capture_dir/'capture-complete.txt').unlink(missing_ok=True)
                raise RuntimeError('Rendered review used fallback materials:\n'+'\n'.join(material_failures))
            if combat and not args.source_clip:
                # Keep the validation for this exact render. The next capture
                # replaces the shared Saved/AnimationReview diagnostics.
                review=args.mirror/'Saved/AnimationReview'
                for name in ['gasp-combat-check.txt','gasp-arm-continuity.csv','gasp-arm-geometry.csv']:
                    (capture_dir/name).write_bytes((review/name).read_bytes())
                result=(capture_dir/'gasp-combat-check.txt').read_text()
                if 'passed=1' not in result.split():
                    (capture_dir/'capture-complete.txt').unlink(missing_ok=True)
                    raise RuntimeError(result)
        if args.motion_validate:
            result = report_path.read_text()
            assert 'passed=1' in result.split(), result
            print(result.strip(), flush=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
