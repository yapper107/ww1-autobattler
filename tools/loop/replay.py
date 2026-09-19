"""Put one recorded battle of a node in front of the user in Unreal.

Unreal cannot load an exported battle, so the node's own simulation snapshot is
built into the Windows mirror and the same map, seed, controller and defence are
run again there. Windows and Linux digests differ; the replay shows the same
policy on the same scenario, not a bit-identical battle.
"""
from __future__ import annotations
import os, shutil, subprocess
from pathlib import Path

from tools.loop import config, tree
from tools.loop.config import REPO

CONTROLLER_SWITCH = {'legacy': '-ArmyLegacy', 'candidate90': '-ArmyCognition', 'drills': '-ArmyDrills'}


def find_row(node_id: str, set_name: str, key: str | None):
    rows = [r for r in tree.read_rows(node_id).get(set_name, []) if r.get('status') == 'complete']
    if not rows:
        raise SystemExit(f'{node_id} has no complete battle in {set_name}')
    if key is None:
        return rows[0]
    for r in rows:
        if config.spec_key(r) == key:
            return r
    raise SystemExit(f'no battle {key} in {set_name}; available: ' + ', '.join(config.spec_key(r) for r in rows))


def mirror_dir() -> Path:
    env = REPO/'.local/paths.env'
    value = os.environ.get('ARMY_WINDOWS_BUILD_DIR')
    if not value and env.exists():
        for line in env.read_text().splitlines():
            if line.startswith('ARMY_WINDOWS_BUILD_DIR='):
                value = line.split('=', 1)[1].strip().strip("'\"")
    if not value:
        raise SystemExit('Set ARMY_WINDOWS_BUILD_DIR or .local/paths.env')
    return Path(value)


def launch_arguments(node: dict, row: dict):
    args = [CONTROLLER_SWITCH[node.get('controller', 'drills')], f"-ArmySeed={row['seed']}", f"-ArmyBattleSeconds={row.get('seconds', config.SECONDS)}"]
    if row.get('map'):
        args.append('-ArmyMap=' + ('trenches' if row.get('family') == 'trenches' else 'city'))
    elif row.get('terrain') == 1:
        args.append('-ArmyTrenches')
    if row.get('defence'):
        d = row['defence']
        args += [f"-ArmyStaticDefence={d['layout']}", f"-ArmyDefenders={d['defenders']}", f"-ArmyDefenceSeed={d['seed']}"]
    return args


def replay(node_id: str, set_name: str, key: str | None = None, build: bool = True, launch: bool = True, log=print):
    node = tree.load(node_id)
    row = find_row(node_id, set_name, key)
    source = tree.node_dir(node_id)/'source'
    if build:
        log(f'[{node_id}] building the node snapshot into the Windows mirror')
        code = subprocess.call(['./scripts/build.sh'], cwd=REPO, env=dict(os.environ, ARMY_SIM_OVERLAY=str(source)))
        if code != 0:
            raise SystemExit(f'Unreal build failed with exit {code}')
    if row.get('map'):
        # build.sh mirrors Unreal/Config, so the generated map is placed after it.
        target = mirror_dir()/'Config/GeneratedMaps'
        target.mkdir(parents=True, exist_ok=True)
        shutil.copy2(row['map'], target/('trenches.army' if row.get('family') == 'trenches' else 'city.army'))
    args = launch_arguments(node, row)
    log(f"[{node_id}] {set_name} {config.spec_key(row)}: " + ' '.join(args))
    if launch:
        subprocess.Popen(['./scripts/launch.sh', *args], cwd=REPO, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, start_new_session=True)
    return dict(node=node_id, set=set_name, key=config.spec_key(row), arguments=args, linux=row.get('metrics', {}))
