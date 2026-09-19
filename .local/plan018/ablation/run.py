"""Friendly-fire ablation on a scratch build (plan 018, user decision 19 Sep 2026). Not a tree node."""
import json, os, shutil, subprocess, sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path
REPO = Path('/home/jchan/ww1-autobattler'); sys.path.insert(0, str(REPO)); sys.path.insert(0, str(REPO/'tools'))
BIN = REPO/'.local/ablation/battle-lab'; OUT = REPO/'.local/ablation/runs'
CONDITIONS = {'baseline': (0, 0), 'no hold-fire': (1, 0), 'no lane sidestep': (0, 1), 'neither': (1, 1)}
LAYOUTS = ('building', 'spread', 'clusters')

def one(args):
    controller, kind, seed, name = args
    import family_metrics
    hold, lane = CONDITIONS[name]
    scale = 1 if kind == 'attack' else 2          # attack: Azure only, so the defenders stay the fixed yardstick
    env = dict(os.environ, ARMY_ABLATE_HOLDFIRE=str(hold*scale), ARMY_ABLATE_CLEARLANE=str(lane*scale))
    out = OUT/controller/kind/name.replace(' ', '-')/str(seed)
    cmd = [str(BIN), '--legacy-ai' if controller == 'legacy' else '--drills', '--lean', '--map', str(REPO/f'.local/loop/maps/{seed}/city-{seed}.army'), '--seed', '107', '--evaluate', '--no-trace', '--out', str(out)]
    cmd += ['--static-defence', LAYOUTS[seed % 3], '--defenders', '12', '--defence-seed', str(seed), '--seconds', '600'] if kind == 'attack' else ['--seconds', '360']
    p = subprocess.run(cmd, capture_output=True, text=True, env=env)
    if p.returncode:
        return dict(args=args, error=p.stderr[-300:])
    run = out/json.loads((out/'latest.json').read_text())['run']
    m = family_metrics.evaluate(run)['metrics']
    held = sum(1 for line in open(run/'events.jsonl') if 'holding fire for friendly troops' in line)
    squads = {(s['team'], s['squad']) for s in map(json.loads, open(run/'shots.jsonl'))}
    shutil.rmtree(out)
    return dict(controller=controller, kind=kind, seed=seed, condition=name, shots=m['shots'], azure_lost=m['casualty_azure'], ember_lost=m['casualty_ember'],
                attack=m['casualty_ember'] - 0.5*m['casualty_azure'], cleared=int(bool(m['win_azure'])), ff=m['friendly_hits_per_100_soldier_minutes'], ff_hits=m['friendly_hits'],
                under2=m['under_2m'], hold_fire_events=held, azure_squads_firing=sum(1 for t, _ in squads if t == 0))

if __name__ == '__main__':
    controllers = sys.argv[1:] or ['legacy']
    jobs = [(c, kind, seed, name) for c in controllers for kind in ('attack', 'symmetric') for seed in range(21, 41) for name in CONDITIONS]
    with ProcessPoolExecutor(max_workers=13) as pool:
        rows = list(pool.map(one, jobs))
    (REPO/'.local/ablation'/f"rows-{'-'.join(controllers)}.json").write_text(json.dumps(rows, indent=1))
    print('done', len(rows), 'errors', sum(1 for r in rows if 'error' in r))
