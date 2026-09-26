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
    parser.add_argument('--combat-review', action='store_true')
    parser.add_argument('--motion-validate', action='store_true')
    parser.add_argument('--time', type=float, default=27, help='Combat still time')
    parser.add_argument('--body', type=int, choices=range(4), help='Close view: female rifle/MG, male rifle/MG')
    parser.add_argument('--validate', action='store_true')
    parser.add_argument('--capture', action='store_true')
    parser.add_argument('--still', action='store_true')
    parser.add_argument('--clip', type=int, choices=range(10))
    args = parser.parse_args()
    assert any([args.stage, args.retarget, args.review, args.validate, args.motion_library,args.contacts,args.actions,args.cloth,args.runtime,args.combat_review,args.motion_validate]), 'Choose a preparation or review action'
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
    for name in ['stage_gasp_prototype.py', 'create_soldier_ik_rigs.py', 'retarget_gasp_prototype.py', 'validate_gasp_prototype.py', 'build_gasp_motion_library.py', 'gasp_motion_catalog.json', 'create_gasp_contacts.py', 'create_gasp_actions.py', 'create_gasp_cloth.py', 'create_gasp_runtime.py']:
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
            command.append('-ArmyGaspTime='+str(args.time))
            if args.body is not None:command.append('-ArmyGaspReviewBody='+str(args.body))
        if args.capture:
            command.append('-ArmyGaspReviewCapture')
            capture_dir=args.mirror/'Saved/Screenshots'/(('GaspCombat-' if combat else 'GaspReview-')+datetime.now().strftime('%Y%m%d-%H%M%S'))
            capture_dir.mkdir(parents=True)
            command.append('-ArmyGaspCaptureDir='+windows(capture_dir))
            print('Capture folder:',capture_dir,flush=True)
        if args.still:
            command.append('-ArmyGaspReviewStill')
        if args.clip is not None:
            command.append('-ArmyGaspClip='+str(args.clip))
        with (logs/('combat-review.log' if combat else 'review.log')).open('w') as log:
            subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, check=True)
        if args.motion_validate:
            result = report_path.read_text()
            assert 'passed=1' in result.split(), result
            print(result.strip(), flush=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
