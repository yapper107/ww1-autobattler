#!/usr/bin/env python3
"""Observer gate audit of an accepted route; never feeds simulation policy."""
import argparse
import collections
import json
import math
from pathlib import Path

def observer_holds(root):
    """Physical sightline samples, separate from the trace's nearby-cover heuristic."""
    counts = collections.Counter()
    previous = None
    with (Path(root) / 'evaluation.jsonl').open() as file:
        for line in file:
            frame = json.loads(line)
            if previous:
                elapsed = frame['time'] - previous['time']
                current = {s['id']: s for s in frame['soldiers']}
                for s in previous['soldiers']:
                    if not s['alive'] or s.get('action') not in (2, 4):
                        continue
                    if math.dist(s['position'], current[s['id']]['position']) > .1:
                        continue
                    counts['stationary_seconds'] += elapsed
                    if s.get('observer_exposed'):
                        counts['stationary_exposed_seconds'] += elapsed
                        if not s.get('solution'):
                            counts['stationary_exposed_without_solution_seconds'] += elapsed
                    else:
                        counts['stationary_screened_seconds'] += elapsed
            previous = frame
    return dict(counts)

def investigate(root):
    root = Path(root)
    if root.name == 'latest.json':
        root = root.parent / json.loads(root.read_text())['run']
    def rows(name):
        with (root / name).open() as file:
            for line in file:
                yield json.loads(line)
    routes = {r['id']: r for r in rows('routes.jsonl')}
    accepted = {r['route']: r for r in rows('trace.jsonl')
                if r['kind'] == 'proposal_accepted' and r.get('route') and r['soldier'] < 32}
    result = {}
    for rid, event in accepted.items():
        result[rid] = dict(route=rid, decision=event['id'], time=event['time'],
                          squad=event['squad'], destination=routes[rid]['destination'],
                          max_arrived=0, max_firing=0, max_second_angle=0,
                          max_angle=0, events=[], path_recoveries={}, best_arrival=None)
    for r in rows('trace.jsonl'):
        if r.get('route') in result and r['kind'] in ('order_received', 'route_stage_completed', 'movement_paused', 'plan_completed', 'movement_abandoned'):
            if r['kind'] == 'order_received':
                result[r['route']].setdefault('first_receipt', r['time'])
            else:
                result[r['route']]['events'].append({k:r[k] for k in ('id','time','kind','reason')})
    if (root / 'paths.jsonl').exists():
        for r in rows('paths.jsonl'):
            if r.get('route') in result and r['kind']=='path_recovery':
                entry=result[r['route']]['path_recoveries'].setdefault(r['soldier'],
                    dict(count=0,first=r['time'],last=r['time'],first_decision=r['decision'],last_decision=r['decision']))
                entry['count']+=1;entry['last']=r['time'];entry['last_decision']=r['decision']
    for frame in rows('evaluation.jsonl'):
        units = {s['id']: s for s in frame['soldiers']}
        groups = collections.defaultdict(list)
        for s in units.values():
            rid = s.get('route')
            if rid not in result or not s['alive'] or s['id'] >= 32:
                continue
            if math.dist(s['position'], routes[rid]['destination']) <= 8 and math.dist(s['position'], routes[rid]['start']) >= 6:
                groups[rid].append(s)
        for rid, members in groups.items():
            r = result[rid]; firing = []; angled = []
            for s in members:
                targets = [units[i] for i in s.get('observer_targets', []) if units[i]['alive']]
                if targets: firing.append(s['id'])
                support = units.get(s.get('support', -1))
                if not support or not support['alive'] or support['id'] == s['id']: continue
                for target in targets:
                    a = [s['position'][i]-target['position'][i] for i in (0,1)]
                    b = [support['position'][i]-target['position'][i] for i in (0,1)]
                    angle = abs(math.degrees(math.atan2(a[0]*b[1]-a[1]*b[0], a[0]*b[0]+a[1]*b[1])))
                    r['max_angle'] = max(r['max_angle'], angle)
                    if angle >= 45: angled.append(s['id']); break
            if len(members) > r['max_arrived']:
                r['best_arrival'] = dict(time=frame['time'], members=members,
                    support=[units[i] for i in sorted({s.get('support',-1) for s in members}) if i in units],
                    defenders=[s for s in units.values() if s['id'] >= 32 and s['alive']])
            r['max_arrived'] = max(r['max_arrived'], len(members))
            r['max_firing'] = max(r['max_firing'], len(firing))
            r['max_second_angle'] = max(r['max_second_angle'], len(angled))
    return dict(schema=1, run=str(root), routes=list(result.values()), method='Maximum instantaneous gate counts diagnose failure; only evaluate_routes.py determines sustained success.')

if __name__ == '__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--out');args=p.parse_args()
    result=investigate(args.run)
    if args.out:Path(args.out).write_text(json.dumps(result,indent=2)+'\n')
    for r in result['routes']:
        print(f"route {r['route']} / squad {r['squad']} / decision {r['decision']} / t={r['time']}: arrivals={r['max_arrived']} firing={r['max_firing']} second-angle={r['max_second_angle']} max-angle={r['max_angle']:.1f}")
