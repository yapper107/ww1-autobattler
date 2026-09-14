#!/usr/bin/env python3
"""Observer-only flank acceptance, separate from commander-known route costs."""
import argparse, collections, json, math
from pathlib import Path

def evaluate_routes(root):
    root=Path(root)
    if root.name=='latest.json':root=root.parent/json.loads(root.read_text())['run']
    def read(name):
        path=root/name
        return [json.loads(line) for line in path.read_text().splitlines()] if path.exists() else []
    manifest=json.loads((root/'manifest.json').read_text());routes={r['id']:r for r in read('routes.jsonl')};trace=read('trace.jsonl')
    selected={r['route']:r for r in trace if r['kind']=='proposal_accepted' and r.get('route') and r['soldier']<32}
    completed={r.get('route') for r in trace if r['kind']=='plan_completed'};continuous={};outcomes={}
    frames=read('evaluation.jsonl');actual_exposure=collections.Counter()
    for a,b in zip(frames,frames[1:]):
        for unit in a['soldiers']:
            if unit['alive'] and unit.get('route') and unit['task']==9 and unit.get('observer_exposed'):actual_exposure[unit['route']]+=b['time']-a['time']
    for frame in frames:
        time=frame['time'];units={s['id']:s for s in frame['soldiers']};qualified=collections.defaultdict(list)
        for soldier in units.values():
            rid=soldier.get('route',0)
            if rid not in selected or rid not in routes or not soldier['alive'] or soldier['id']>=32:continue
            support=units.get(soldier.get('support',-1))
            if not support or not support['alive'] or support['id']==soldier['id']:continue
            if math.dist(soldier['position'],routes[rid]['destination'])>8:continue
            if math.dist(soldier['position'],routes[rid]['start'])<6:continue
            for target_id in soldier.get('observer_targets',[]):
                target=units[target_id]
                if not target['alive']:continue
                a=[soldier['position'][i]-target['position'][i] for i in (0,1)];b=[support['position'][i]-target['position'][i] for i in (0,1)]
                angle=abs(math.degrees(math.atan2(a[0]*b[1]-a[1]*b[0],a[0]*b[0]+a[1]*b[1])))
                if angle>=45:qualified[(rid,soldier['id'],target_id)].append(angle)
        current=set(qualified)
        for key in list(continuous):
            if key not in current:del continuous[key]
        for key in qualified:continuous.setdefault(key,time)
        by_route=collections.defaultdict(list)
        for key,since in continuous.items():
            if time-since>=3-.001:by_route[key[0]].append(key)
        for rid,keys in by_route.items():
            movers=sorted({key[1] for key in keys})
            if len(movers)>=2 and rid not in outcomes:outcomes[rid]=dict(time=time,movers=movers,decision=selected[rid]['id'],route_completed=rid in completed)
    passed=[rid for rid in outcomes if rid in completed]
    return dict(seed=manifest['seed'],encounter=manifest['encounter'],run=str(root),selected=len(selected),completed=len(completed.intersection(selected)),
        actual_exposed_mover_seconds=dict(actual_exposure),second_angles=outcomes,passed=bool(passed),defenders_eliminated=not any(s['alive'] for s in frames[-1]['soldiers'] if s['id']>=32),
        method='At least two surviving movers within 8m of the final route destination, each with a clear physical firing line to an active defender and >=45 degree separation from assigned support for a continuous 3s interval; route also completes. Observer targets never feed policy.')

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('runs',nargs='+');p.add_argument('--out');a=p.parse_args();results=[evaluate_routes(r) for r in a.runs]
    text=json.dumps(results,indent=2)
    if a.out:Path(a.out).write_text(text+'\n')
    print(text)
