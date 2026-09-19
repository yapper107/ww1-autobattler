"""Paths, scenario sets, baselines and selector names for the loop.

Everything here is data. Changing a scenario set or a baseline is a config change,
recorded in the node it affects through ``config_digest``.
"""
from __future__ import annotations
import hashlib, json, os, sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO/'tools'
if str(TOOLS) not in sys.path:
    sys.path.insert(0, str(TOOLS))
SIM = REPO/'Unreal/Source/ArmyPrototype/Sim'
LOOP_ROOT = Path(os.environ.get('ARMY_LOOP_ROOT', REPO/'.local/loop'))
TREE_ROOT = LOOP_ROOT/'tree'
BASELINE_ROOT = LOOP_ROOT/'baselines'
PAIRS_ROOT = LOOP_ROOT/'pairs'
GUARDS_FILE = Path(__file__).with_name('guards.json')
PROTECTED_FILE = REPO/'.local/phase0b/original/protected.json'

SECONDS = 360
CONTROLLER_FLAG = {'legacy': '--legacy-ai', 'candidate90': '--cognition', 'drills': '--drills'}

# Sparring partners. ``binary`` None means "the candidate binary": legacy and
# cognition are digest-identical across builds (the parity guard proves it on
# every candidate), and old binaries lack the generated-scenario flags.
BASELINES = {
    'legacy': dict(controller='legacy', binary=None),
    'candidate90': dict(controller='candidate90', binary=None),
    # Plan 017: this pinned binary predates the stat model, so it is no longer a
    # comparable reference; legacy and candidate90 follow the candidate binary.
    'squad-only': dict(controller='drills', binary=str(REPO/'.local/phase3h/final/battle-lab'),
                       version='a0364bff5cea6ab9-linux'),
    'drills': dict(controller='drills', binary=None),
}
OBJECTIVE_BASELINES = ('legacy', 'candidate90')
# Plan 018: a node belongs to one lineage and may change only that controller's
# behaviour. The others are its parity partners and must stay digest-identical.
LINEAGES = ('legacy', 'drills')
CONTROLLERS = ('legacy', 'candidate90', 'drills')


def parity_partners(controller: str):
    return [c for c in CONTROLLERS if c != controller]

AUTHORED_SEEDS = list(range(100, 110))
F1_DEV_GEN_SEEDS = list(range(1, 31))
F1_DEV_SEEDS = [107, 108, 109]
VALIDATION_COUNT = 30
VALIDATION_SALT = 'plan016'
# Generated town and trench maps (tools/generate_maps.py), one battle per map seed.
MAP_DEV_SEEDS = list(range(21, 41))
MAP_VALIDATION_COUNT = 10
MAP_BATTLE_SEED = 107
# Trench maps only prove soldiers still shoot (user decision 18 Sep 2026): ten are enough.
TRENCH_DEV_SEEDS = MAP_DEV_SEEDS[:10]
# Plan 018 static-defence attack scenarios on town maps: Ember holds cover and never
# relocates; the layout rotates with the map seed so every set mixes all three.
ATTACK_LAYOUTS = ('building', 'spread', 'clusters')
ATTACK_DEFENDERS = 12
ATTACK_VALIDATION_COUNT = 15
# Measured 18 Sep 2026: the defended locality is 165 to 235 m from the attacker's start line and
# legacy squads were still closing at 340 to 360 s, so a 360 s attack mostly measures the walk.
ATTACK_SECONDS = 600

# Spot checks proving legacy and cognition are unchanged on the candidate binary.
PARITY_SPECS = [dict(set='works', terrain=0, seed=107), dict(set='trenches', terrain=1, seed=107)]

# Mechanism selectors (tests/sim_tests.cpp). Names starting P or Q, and
# retention, are platoon selectors; the rest are drills selectors.
SELECTORS = ['Q06', 'Q07', 'Q08', 'Q09', 'retention', 'Q01', 'Q05', 'clock-arrival', 'P04', 'P05', 'P06', 'P07',
             'Q02', 'Q03', 'Q04', 'D01', 'D02', 'D03', 'D04', 'D05', 'D06', 'D07', 'D08', 'D09', 'D10', 'D11',
             'D16', 'D17', 'close', 'sprint', 'projection', 'sector', 'positions', 'plumbing', 'lifecycle']
SELECTOR_GROUPS = ['--leaders', '--stats']

# Policy sources that may only see officer memory, own orders, received reports
# and permitted squad-member fields. The static check forbids these tokens there.
# Implementation files only: the headers declare fixture builders (DrillFixtures,
# PlatoonFixtures) that take the frame by design; a policy .cpp that implemented
# one would carry the token itself.
POLICY_FILES = ['DrillSim.cpp', 'SquadDrillSim.cpp', 'PlatoonTaskSim.cpp', 'PositionSim.cpp', 'LeaderSim.cpp']
FORBIDDEN_TOKENS = ['Frame&', 'const Frame', '.soldiers[', 'f.soldiers', 'frame.soldiers', 'observer_', 'observer',
                    'Record&', '.shots', 'fullVision', 'full_vision']


# The fields of a row that define its scenario; enough to run the battle again.
SPEC_FIELDS = ('set', 'terrain', 'family', 'gen_seed', 'seed', 'map', 'defence', 'seconds')
SET_NAMES = ('works', 'trenches', 'f1-dev', 'f1-val', 'town-dev', 'town-val', 'trench-dev', 'trench-val', 'town-attack-dev', 'town-attack-val')


def scenario_sets(build: str, validation_count: int = VALIDATION_COUNT, salt: str = VALIDATION_SALT, wanted=None):
    """Battle specs grouped by set. Validation draws hash from the build. Only the
    ``wanted`` sets are built, so maps are generated for the sets that will be run."""
    from run_family import validation_draws
    from tools.loop import maps
    val_seeds = lambda: maps.validation_seeds(build, salt, MAP_VALIDATION_COUNT)
    attack_val = lambda: maps.validation_seeds(build, salt + '|attack', ATTACK_VALIDATION_COUNT)
    builders = {
        'works': lambda: [dict(set='works', terrain=0, seed=s) for s in AUTHORED_SEEDS],
        'trenches': lambda: [dict(set='trenches', terrain=1, seed=s) for s in AUTHORED_SEEDS],
        'f1-dev': lambda: [dict(set='f1-dev', family='F1', gen_seed=g, seed=s) for g in F1_DEV_GEN_SEEDS for s in F1_DEV_SEEDS],
        'f1-val': lambda: [dict(set='f1-val', family='F1', gen_seed=g, seed=s) for g, s in validation_draws(build, 'F1', salt, validation_count)],
        'town-dev': lambda: maps.specs('town-dev', 'city', MAP_DEV_SEEDS, MAP_BATTLE_SEED),
        'town-val': lambda: maps.specs('town-val', 'city', val_seeds(), MAP_BATTLE_SEED),
        'trench-dev': lambda: maps.specs('trench-dev', 'trenches', TRENCH_DEV_SEEDS, MAP_BATTLE_SEED),
        'trench-val': lambda: maps.specs('trench-val', 'trenches', val_seeds(), MAP_BATTLE_SEED),
        'town-attack-dev': lambda: maps.specs('town-attack-dev', 'city', MAP_DEV_SEEDS, MAP_BATTLE_SEED, attack=True),
        'town-attack-val': lambda: maps.specs('town-attack-val', 'city', attack_val(), MAP_BATTLE_SEED, attack=True),
    }
    return {name: build_set() for name, build_set in builders.items() if wanted is None or name in wanted}


def parity_specs():
    """Spot battles for the lineage parity guard: both static maps, one town map and
    one static-defence battle, so a candidate cannot move the defender either."""
    from tools.loop import maps
    town = maps.specs('parity-town', 'city', MAP_DEV_SEEDS[:1], MAP_BATTLE_SEED)
    attack = maps.specs('parity-attack', 'city', MAP_DEV_SEEDS[:1], MAP_BATTLE_SEED, attack=True)
    return PARITY_SPECS + town + attack


def defence_key(spec: dict) -> str:
    d = spec.get('defence')
    return f"-{d['layout']}{d['defenders']}s{d['seed']}" if d else ''


def spec_key(spec: dict) -> str:
    if 'family' in spec:
        return f"{spec['family']}-{spec['gen_seed']}-{spec['seed']}" + defence_key(spec)
    return f"t{spec['terrain']}-{spec['seed']}"


def pair_key(spec_or_row: dict):
    """Pairing key across controllers on the same scenario."""
    return (spec_or_row.get('family') or 'authored', spec_or_row.get('terrain', -1), spec_or_row.get('gen_seed', 0), spec_or_row['seed'],
            defence_key(spec_or_row))


def cluster_key(row: dict):
    """Bootstrap cluster: generated map for families, seed for authored maps."""
    return row['gen_seed'] if row.get('family') else row['seed']


def config_digest() -> str:
    payload = json.dumps(dict(seconds=SECONDS, authored=AUTHORED_SEEDS, f1_dev=[F1_DEV_GEN_SEEDS, F1_DEV_SEEDS],
                              validation=[VALIDATION_COUNT, VALIDATION_SALT], baselines=BASELINES,
                              maps=[MAP_DEV_SEEDS, MAP_VALIDATION_COUNT, MAP_BATTLE_SEED, TRENCH_DEV_SEEDS],
                              attack=[ATTACK_LAYOUTS, ATTACK_DEFENDERS, ATTACK_VALIDATION_COUNT, ATTACK_SECONDS], lineages=LINEAGES,
                              selectors=SELECTORS + SELECTOR_GROUPS, policy=POLICY_FILES, tokens=FORBIDDEN_TOKENS),
                         sort_keys=True)
    return hashlib.sha256(payload.encode()).hexdigest()[:16]
