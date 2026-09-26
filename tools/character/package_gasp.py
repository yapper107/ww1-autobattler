"""Package and validate the armed GASP runtime in a marked Windows mirror.

Run scripts/build.sh first, and generate/copy the GASP assets including --runtime.
This does not package the installed sample game or synchronize source directories.
"""
import argparse
from pathlib import Path
import re
import shutil
import subprocess


def windows(path):
    return subprocess.check_output(['wslpath', '-w', str(path.resolve())], text=True).strip()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--engine', type=Path, required=True)
    parser.add_argument('--mirror', type=Path, required=True)
    parser.add_argument('--skip-cook', action='store_true', help='Reuse already cooked assets; native changes only')
    parser.add_argument('--validate', action='store_true')
    args = parser.parse_args()
    mirror, engine = args.mirror.resolve(), args.engine.resolve()
    assert (mirror/'.army-build-mirror').is_file(), 'Requires a marked Windows build mirror'
    assert (mirror/'Content/Characters/GASP/Runtime/ABP_MotionNodeTemplate.uasset').is_file(), 'Generate --runtime first'
    logs = mirror/'Saved/GaspPreparation'
    logs.mkdir(parents=True, exist_ok=True)
    archive = mirror/'Saved/GaspPackage'
    command = [windows(engine/'Engine/Build/BatchFiles/RunUAT.bat'), 'BuildCookRun',
               '-project='+windows(mirror/'ArmyPrototype.uproject'), '-noP4',
               '-platform=Win64', '-clientconfig=Development', '-build',
               '-skipcook' if args.skip_cook else '-cook', '-stage', '-pak', '-archive',
               '-archivedirectory='+windows(archive), '-map=/Engine/Maps/Entry',
               '-utf8output', '-unattended', '-skipbuildeditor']
    batch = mirror/'package-gasp-runtime.cmd'
    batch.write_bytes(('@echo off\r\ncall '+subprocess.list2cmdline(command)+
                       '\r\nexit /b %errorlevel%\r\n').encode())
    with (logs/'package-runtime.log').open('w') as log:
        subprocess.run(['/mnt/c/Windows/System32/cmd.exe', '/d', '/c', windows(batch)],
                       stdout=log, stderr=subprocess.STDOUT, check=True)
    print('Packaged:', archive, flush=True)
    if not args.validate:
        return
    executable = archive/'Windows/ArmyPrototype/Binaries/Win64/ArmyPrototype.exe'
    validation = mirror/'Saved/PackagedValidation'
    validation.mkdir(exist_ok=True)

    def trial(name, flags, report):
        result_path = validation/'Saved'/report
        result_path.unlink(missing_ok=True)
        log_path = validation/(name+'.log')
        with (validation/(name+'-console.log')).open('w') as log:
            subprocess.run([str(executable), *flags, '-unattended', '-nullrhi', '-nosound',
                            '-userdir='+windows(validation), '-abslog='+windows(log_path)],
                           stdout=log, stderr=subprocess.STDOUT, check=True, timeout=180)
        assert result_path.is_file(), 'Missing fresh report: '+str(result_path)
        return result_path.read_text(), log_path.read_text(errors='replace')

    motion, _ = trial('motion', ['/Engine/Maps/Entry?game=/Script/ArmyPrototype.GaspCombatReview',
                                '-ArmyMotionValidate'], 'AnimationReview/gasp-combat-check.txt')
    assert 'passed=1' in motion.split(), motion
    print(motion.strip(), flush=True)
    battle, log = trial('battle', ['-ArmyLegacy', '-ArmyMap=city2', '-ArmySeed=100',
                                  '-ArmyCharacterBattleTest', '-ArmyAnimationBenchmark'],
                        'character-battle-validation.txt')
    assert 'PASS battle_states=' in battle and 'FAIL' not in battle, battle
    counts = re.search(r'gasp_bodies=(\d+) total_bodies=(\d+)', battle)
    assert counts and int(counts[1]) > 0 and counts[1] == counts[2], battle
    assert 'kind=city2' in log and 'ARMY_MAP: missing' not in log, 'Generated city map did not load'
    print(battle.strip(), flush=True)
    # The reports and manifest are the record; raw battle exports regenerate.
    for raw in (validation/'Saved/BattleReports').glob('battle-*'):
        for manifest in raw.glob('*manifest*.json'):
            shutil.copy2(manifest, validation/(raw.name+'-'+manifest.name))
        shutil.rmtree(raw)


if __name__ == '__main__':
    main()
