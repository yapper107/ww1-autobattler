"""Replay the forty historical reference configurations against a frozen source binary.

This paired check also enables decision recording in the candidate to prove it is passive.
It does not regenerate or replace any stored reference manifests.
"""
import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
import json
from pathlib import Path
import subprocess

from tools.loop import runner
from tools.neural import native


# The one static-defence case on a generated map: its map seed per family (a village lives only in the
# reserved plan 029 seeds, as does a city2). Village and city2 need a baseline binary that reads their
# ARMYMAP 2 header (--baseline; city2 from source ae3224df477f0f4c).
FAMILY_MAP_SEED = {'city': 24, 'village': 1201, 'city2': 1201}


def pair(baseline, candidate, out, controller, terrain, seed, extra=(), expected_baseline="45da1e25dd1aa9e7", family='city'):
    results = []
    for label, binary in [('baseline', baseline), ('recording', candidate)]:
        dest = Path(out)/controller/(family if extra else str(terrain))/str(seed)/label
        dest.mkdir(parents=True, exist_ok=True)
        cmd = [binary, '--cognition' if controller == 'candidate90' else '--legacy-ai',
               '--terrain', str(terrain), '--seed', str(seed), '--seconds', '360',
               '--lean', '--no-trace', '--out', str(dest)]
        cmd += list(extra)
        if label == 'recording':
            cmd += ['--record-squad-decisions', str(dest/'decisions.jsonl')]
        proc = subprocess.run(cmd, text=True, capture_output=True, timeout=600)
        (dest/'run.log').write_text(proc.stdout+proc.stderr)
        if proc.returncode:
            raise RuntimeError(f'{cmd}: {proc.stderr}')
        run = dest/json.loads((dest/'latest.json').read_text())['run']
        manifest = json.loads((run/'manifest.json').read_text())
        if label=='baseline' and manifest['build'].split('-')[0]!=expected_baseline:
            raise RuntimeError('Baseline source identity mismatch')
        results.append(dict(digest=manifest['gameplay_digest'], build=manifest['build'], command=cmd))
        runner.prune_exports(run)
    return dict(controller=controller, terrain=terrain, seed=seed,
                baseline=results[0], candidate=results[1], match=results[0]['digest']==results[1]['digest'])


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--baseline', default='.local/plan024/baseline/battle-lab')
    ap.add_argument('--binary', default=native.BINARY)
    ap.add_argument('--expected-baseline', default='45da1e25dd1aa9e7')
    ap.add_argument('--out', required=True)
    ap.add_argument('--jobs', type=int)
    ap.add_argument('--family', choices=sorted(FAMILY_MAP_SEED), default='city',
                    help='Map family of the static-defence case (village, city2: pass an ARMYMAP 2 --baseline)')
    args = ap.parse_args()
    native.checked(args.binary)
    native.huge_pages()
    out = Path(args.out)
    out.mkdir(parents=True, exist_ok=True)
    rows = []
    with ThreadPoolExecutor(max_workers=runner.default_jobs(args.jobs, lean=True)) as pool:
        futures = [pool.submit(pair, args.baseline, args.binary, out, controller, terrain, seed, (),args.expected_baseline)
                   for controller in ('candidate90', 'legacy') for terrain in (0,1) for seed in range(100,110)]
        from tools.neural.scenarios import map_file
        seed=FAMILY_MAP_SEED[args.family]
        generated=map_file(seed,args.family)
        futures.append(pool.submit(pair,args.baseline,args.binary,out,'legacy',0,107,
            ['--map',str(generated),'--static-defence','building','--defenders','12','--defence-seed',str(seed)],args.expected_baseline,args.family))
        for future in as_completed(futures):
            row = future.result()
            rows.append(row)
            (out/'parity.json').write_text(json.dumps(rows, indent=2)+'\n')
            print(len(rows), row['controller'], row['terrain'], row['seed'], row['match'], flush=True)
    if not all(row['match'] for row in rows):
        raise SystemExit('Reference parity failed')


if __name__ == '__main__':
    main()
