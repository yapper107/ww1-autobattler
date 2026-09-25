#!/usr/bin/env python3
"""Development-only village sweep; JSONL per seed plus a final summary.

Defaults to the already inspected 0–49 and 1201–1210, never held-out maps.
Timings include generation, SVG, sidecar serialization and native export, as in
New+. Run serially on a quiet machine; --deadline is the total per-map budget.
"""
import argparse
from collections import Counter
import hashlib
import json
import math
import statistics
import time

from mapgen import village, city2
from mapgen.native import export
from mapgen.render import svg


def measure(seed, deadline=28, kind='village'):
    started = time.perf_counter()
    limit = time.monotonic() + deadline
    row = dict(seed=seed, accepted=False)
    history = []
    try:
        m = (city2 if kind=='city2' else village).generate(seed, deadline=limit)
        history = m['generation']['history']
        payload = export(m)
        svg(m)
        json.dumps(m, indent=2)
        village._check(limit)
        v = m['validation']
        row.update(accepted=True, objective_count=v['objective_count'], objectives=v['objectives'],
                   minimum=v['supportable_share'], by_team=v['supportable_share_by_team'],
                   crossings=v['crossings'], repairs=v['repairs'], repair_rounds=v['repair_rounds'],
                   repairs_by_objective=m['repairs']['by_objective'],
                   solids=v['solids'], surfaces=len(m['surfaces']), lanes=v['lanes'],
                   lane_lengths=[round(sum(math.dist(a,b) for a,b in zip(p['points'],p['points'][1:])),2)
                                 for p in m['paths'] if p['kind']=='lane'],
                   elevated_safe_share=v['elevated_safe_share'],
                   sha256=hashlib.sha256(payload.encode()).hexdigest())
        if kind=='city2':row.update(look=m['look'],buildings=len(m['buildings']),part_budget=m['part_budget'])
    except (village.GenerationFailed, village.DeadlineExceeded) as error:
        history = getattr(error, 'history', history)
        row['error'] = str(error)
    row.update(seconds=round(time.perf_counter() - started, 3), attempts=len(history), history=history)
    return row


def summarize(rows):
    accepted = [r for r in rows if r['accepted']]
    attempts = [h for r in rows for h in r['history']]
    return dict(seeds=len(rows), accepted=len(accepted), acceptance_rate=len(accepted)/len(rows),
                objective_counts=dict(sorted(Counter(r['objective_count'] for r in accepted).items())),
                lane_counts=dict(sorted(Counter(r['lanes'] for r in accepted).items())),
                minimum=min((r['minimum'] for r in accepted), default=None),
                median=statistics.median(r['minimum'] for r in accepted) if accepted else None,
                solids_range=[min(r['solids'] for r in accepted),max(r['solids'] for r in accepted)] if accepted else None,
                building_parts_range=[min(r['buildings'] for r in accepted),max(r['buildings'] for r in accepted)] if accepted and 'buildings' in accepted[0] else None,
                attempts=len(attempts),
                contradictions=sum(h.get('result', '').startswith('contradiction:') for h in attempts),
                landmark_rejections=sum('fewer than two village landmarks' in h.get('result', '') for h in attempts),
                repaired_maps=sum(r['repairs'] > 0 for r in accepted),
                repairs=sum(r['repairs'] for r in accepted),
                repairs_all_attempts=sum(h.get('repairs', 0) for h in attempts),
                max_attempts=max(r['attempts'] for r in rows),
                max_repair_rounds=max((r['repair_rounds'] for r in accepted), default=0),
                worst_attempt_seconds=max((h.get('seconds',0) for h in attempts), default=0),
                total_seconds=round(sum(r['seconds'] for r in rows), 3),
                mean_seconds=round(sum(r['seconds'] for r in rows)/len(rows), 3),
                worst_seconds=max(r['seconds'] for r in rows),
                worst_seed=max(rows, key=lambda r: r['seconds'])['seed'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('seeds', type=int, nargs='*')
    parser.add_argument('--deadline', type=float, default=28)
    parser.add_argument('--kind',choices=('village','city2'),default='village')
    args = parser.parse_args()
    seeds = args.seeds or list(range(50)) + list(range(1201, 1211))
    rows = []
    for seed in seeds:
        rows.append(measure(seed, args.deadline,args.kind))
        print(json.dumps(rows[-1]), flush=True)
    print(json.dumps(dict(summary=summarize(rows))), flush=True)


if __name__ == '__main__':
    main()
