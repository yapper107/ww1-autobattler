"""Covering-fire chain diagnosis: traced battles on the 30 E-6 maps (village + city2), battle seed 107, new
baseline (lab binary defaults), meeting 360 s and static-defence attack 600 s (12 defenders, E-6 layouts).
Each worker runs one battle, analyses it with chain.py, writes rows/<arm>/<name>.json and deletes the raw
output at once. Usage: python3 run.py ARMS JOBS [extra flags...]   (ARMS e.g. M,S)"""
import json, shutil, subprocess, sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path
sys.path.insert(0, str(Path(__file__).parent))
from chain import analyse
REPO = Path(__file__).resolve().parents[2]; PKG = REPO/'.local/covering'   # rows and scratch live outside Git
import os
# Each invocation works in its own scratch folder, so concurrent calls never delete each other's battles.
RUN = os.environ.setdefault('COVER_RUN_ID', str(os.getpid())); WORK = PKG/'work'/RUN
BIN = REPO/'.local/lab/battle-lab'
LAYOUTS = ('building', 'spread', 'clusters')
draw = json.loads((Path(__file__).parent/'e6_draw.json').read_text())   # maps: make_maps.py
def specs(arm):
    out = []
    for fam in ('village', 'city2'):
        for g in draw['families'][fam]['seeds']:
            s = dict(name=f'{fam}-{g}', map=str(REPO/'.local/plan030/E-6/maps'/f'{fam}-{g}.army'), seed=107)
            if arm.startswith('S'):
                s['defence'] = dict(layout=LAYOUTS[g % 3], defenders=12, seed=g); s['seconds'] = 600
            else:
                s['seconds'] = 360
            out.append(s)
    return out
def one(job):
    arm, s, extra, binary = job
    dest = PKG/'rows'/arm/f"{s['name']}.json"
    if dest.exists():
        return 'cached'
    work = WORK/f"{arm}-{s['name']}"
    shutil.rmtree(work, ignore_errors=True); work.mkdir(parents=True)
    cmd = [binary, '--legacy-ai', '--map', s['map'], '--seed', str(s['seed']), '--seconds', str(s['seconds']), '--lean', '--evaluate', '--out', str(work)]
    if 'defence' in s:
        d = s['defence']; cmd += ['--static-defence', d['layout'], '--defenders', str(d['defenders']), '--defence-seed', str(d['seed'])]
    cmd += extra
    subprocess.run(cmd, check=True, capture_output=True)
    run = next(p for p in work.iterdir() if p.is_dir() and p.name.startswith('battle-'))
    row = analyse(run)
    m = json.loads((run/'manifest.json').read_text())
    row.update(name=s['name'], arm=arm, winner=m['winner'], duration=m['duration'], digest=m['gameplay_digest'], flags=extra)
    dest.parent.mkdir(parents=True, exist_ok=True); dest.write_text(json.dumps(row))
    shutil.rmtree(work, ignore_errors=True)
    return 'done'
if __name__ == '__main__':
    arms, jobs = sys.argv[1].split(','), int(sys.argv[2]); extra = sys.argv[3:]
    binary = str(BIN)
    if extra and extra[0].startswith('--binary='):
        binary = extra[0].split('=', 1)[1]; extra = extra[1:]
    work = [(a, s, extra, binary) for a in arms for s in specs(a)]
    with ProcessPoolExecutor(jobs) as pool:
        res = list(pool.map(one, work))
    print({r: res.count(r) for r in set(res)})
    shutil.rmtree(WORK, ignore_errors=True)
