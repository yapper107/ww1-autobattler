"""Regenerate a matched pair as lean battles and render the established short squad video."""
import argparse
from concurrent.futures import ThreadPoolExecutor
import json
from pathlib import Path
import subprocess
import sys

from tools.loop import maps
from tools.neural import native
from tools.neural.run import job


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--model', required=True)
    ap.add_argument('--opponent',choices=['active-legacy','static-defence'],default='active-legacy')
    ap.add_argument('--label',default='Neural RL pilot')
    ap.add_argument('--binary', default=native.BINARY)
    ap.add_argument('--baseline-binary', default='.local/plan024/baseline/battle-lab')
    ap.add_argument('--family', choices=['city', 'village', 'city2'], default='city', help='Map family of --map')
    ap.add_argument('--map', type=int, default=24)
    ap.add_argument('--seed', type=int, default=107)
    ap.add_argument('--squad', type=int, default=1)
    ap.add_argument('--overview', action='store_true', help='Show all attacking squads')
    ap.add_argument('--from', dest='start', type=float, default=60)
    ap.add_argument('--to', dest='end', type=float, default=360)
    ap.add_argument('--speed', type=float, default=10)
    ap.add_argument('--out', required=True)
    args = ap.parse_args()
    native.checked(args.binary)
    native.huge_pages()
    out = Path(args.out).resolve()
    out.mkdir(parents=True, exist_ok=True)
    if args.opponent=='static-defence':
        spec=next(s for s in maps.specs('video',args.family,[args.map],attack=True) if s['seed']==args.seed)
    else:
        from tools.neural.scenarios import active_legacy_specs
        spec=active_legacy_specs('video',[args.map],[args.seed],family=args.family)[0]
    with ThreadPoolExecutor(max_workers=2) as pool:
        legacy = pool.submit(job, args.baseline_binary, spec, out/'legacy', None, 0, False, True)
        neural = pool.submit(job, args.binary, spec, out/'neural', str(Path(args.model).resolve()), 0, True, True)
        rows = [legacy.result(), neural.result()]
    if any(row['status']!='complete' for row in rows):
        raise RuntimeError(str(rows))
    view = 'overview' if args.overview else f'squad-{args.squad}'
    result = out/f'{args.family}-{args.map}-{view}.mp4'
    cmd = [sys.executable, 'tools/battle_video.py', '--run', f"Legacy Plan 023={rows[0]['run']}",
           '--run', f"{args.label}={rows[1]['run']}", '--out', str(result),
           '--from', str(args.start), '--to', str(args.end), '--speed', str(args.speed)]
    if args.opponent=='active-legacy':cmd+=['--opponent-label','Legacy']
    if not args.overview:
        cmd += ['--focus-squad', str(args.squad)]
    subprocess.run(cmd, check=True)
    (out/'video.json').write_text(json.dumps(dict(rows=rows, command=cmd, video=str(result)), indent=2)+'\n')
    print(result)


if __name__=='__main__':
    main()
