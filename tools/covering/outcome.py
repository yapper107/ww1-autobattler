"""Plan 031 outcome harness: untraced paired battles on the 30 E-6 maps (village + city2), Legacy both sides,
lab defaults. Arms: meeting 360 s — N (no drill), A (drill Azure only), E (drill Ember only); static attack
600 s, 12 defenders, E-6 layouts — SN (none), SA (drill for the attacker, Azure). Per battle: winner,
survivors and casualties per side, duration. Raw output is deleted as each row is written.
Usage: python3 outcome.py BINARY ARMS SEEDS JOBS [extra flags...]   e.g.  outcome.py bin N,A,E 107,108 12
An arm may be written NAME@BASE (e.g. xA@A, oA@N): rows go under NAME, the battle is set up as BASE (one of the arms
above). Extra flags and the environment apply to every arm of the call."""
import json, os, shutil, subprocess, sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path
REPO = Path(__file__).resolve().parents[2]; PKG = REPO/'.local/covering/outcome'   # rows and scratch live outside Git
# Each invocation works in its own scratch folder, so concurrent calls never delete each other's battles.
RUN = os.environ.setdefault('COVER_RUN_ID', str(os.getpid())); WORK = PKG/'work'/RUN
LAYOUTS = ('building', 'spread', 'clusters')
DRILL = {'N': None, 'A': 'azure', 'E': 'ember', 'SN': None, 'SA': 'azure'}
# COVER_DRAW=confirm: the pre-registered confirmation maps (confirm_draw.json, .local/plan031/confirm/maps; give their arms
# their own names). Default: the 30 E-6 maps.
CONFIRM = os.environ.get('COVER_DRAW') == 'confirm'
draw = json.loads((Path(__file__).parent/('confirm_draw.json' if CONFIRM else 'e6_draw.json')).read_text())   # maps: make_maps.py
MAPS = REPO/('.local/plan031/confirm/maps' if CONFIRM else '.local/plan030/E-6/maps')
def last_frame(path):
    with open(path, 'rb') as f:
        f.seek(0, os.SEEK_END); size = f.tell(); chunk = 400000
        f.seek(max(0, size-chunk)); tail = f.read().splitlines()
    return json.loads(tail[-1])
def one(job):
    binary, arm, fam, g, seed, extra = job
    arm, base = arm.split('@') if '@' in arm else (arm, arm)
    dest = PKG/'rows'/arm/f'{fam}-{g}-{seed}.json'
    if dest.exists(): return 'cached'
    work = WORK/f'{arm}-{fam}-{g}-{seed}'; shutil.rmtree(work, ignore_errors=True); work.mkdir(parents=True)
    static = base.startswith('S')
    cmd = [binary, '--legacy-ai', '--map', str(MAPS/f'{fam}-{g}.army'), '--seed', str(seed),
           '--seconds', '600' if static else '360', '--lean', '--evaluate', '--no-trace', '--out', str(work)]
    if static: cmd += ['--static-defence', LAYOUTS[g % 3], '--defenders', '12', '--defence-seed', str(g)]
    if DRILL[base]: cmd += ['--fire-and-movement', DRILL[base]]
    cmd += extra
    subprocess.run(cmd, check=True, capture_output=True)
    run = next(work.glob('battle-*')); m = json.loads((run/'manifest.json').read_text())
    first = json.loads(open(run/'evaluation.jsonl').readline()); last = last_frame(run/'evaluation.jsonl')
    start = [sum(1 for x in first['soldiers'] if x['team'] == t and x['alive']) for t in (0, 1)]
    alive = [sum(1 for x in last['soldiers'] if x['team'] == t and x['alive']) for t in (0, 1)]
    row = dict(arm=arm, family=fam, map=g, seed=seed, winner=m['winner'], duration=m['duration'], start=start, alive=alive,
               lost=[start[t]-alive[t] for t in (0, 1)], digest=m['gameplay_digest'], drill=m.get('fire_and_movement'), flags=extra)
    dest.parent.mkdir(parents=True, exist_ok=True); dest.write_text(json.dumps(row))
    shutil.rmtree(work, ignore_errors=True)
    return 'done'
if __name__ == '__main__':
    binary, arms, seeds, jobs = sys.argv[1], sys.argv[2].split(','), [int(s) for s in sys.argv[3].split(',')], int(sys.argv[4])
    extra = sys.argv[5:]
    todo = [(binary, a, fam, g, s, extra) for a in arms for fam in ('village', 'city2') for g in draw['families'][fam]['seeds'] for s in seeds]
    with ProcessPoolExecutor(jobs) as pool: res = list(pool.map(one, todo))
    print({r: res.count(r) for r in set(res)}); shutil.rmtree(WORK, ignore_errors=True)
