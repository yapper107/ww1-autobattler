#!/usr/bin/env python3
"""Duration-weighted observer metrics. Run CLI with --evaluate first; no AI inputs are changed."""
import argparse, collections, json, math, statistics
from pathlib import Path

def evaluate(root):
    root=Path(root)
    if root.name=='latest.json': root=root.parent/json.loads(root.read_text())['run']
    manifest=json.loads((root/'manifest.json').read_text())
    rows=[json.loads(x) for x in (root/'evaluation.jsonl').read_text().splitlines()]
    trace=[json.loads(x) for x in (root/'trace.jsonl').read_text().splitlines()]
    totals=collections.Counter();front=[];episodes={};first_casualty=None
    plans={(e['squad'],e['plan']):e for e in trace if e['kind'] in ('proposal_accepted','movement_revised')}
    plan_goals={key:e['goal'] for key,e in plans.items()}
    plan_tracks={key:min(e['knowledge'],key=lambda k: math.dist(e['position'],k['position'])-(25 if k.get('automatic_weapon') else 0))['position'] for key,e in plans.items() if e.get('knowledge')}
    initial={s['id']:s for s in rows[0]['soldiers'] if s['alive']}
    for a,b in zip(rows,rows[1:]):
        dt=b['time']-a['time']
        for s in a['soldiers']:
            if not s['alive']:continue
            totals['active_seconds']+=dt
            stationary=s['action'] in (2,4) # Fire/Hold actions, measured separately from orders
            if stationary:
                totals['hold_fire_seconds']+=dt
                totals['hold_fire_no_solution_seconds']+=dt*(not s['solution'])
            if s['task'] in (7,9,10):totals['maneuver_task_seconds']+=dt
            if s['action']==2:
                totals['fire_action_seconds']+=dt
                totals['fire_action_no_solution_seconds']+=dt*(not s['solution'])
            if s['task'] in (2,7,9) and (s['enemy']>=0 or (s['id']//8,s['plan']) in plan_tracks) and s['plan']>0:
                key=(s['id']//8,s['plan'])
                ep=episodes.setdefault(key,{'start':a['time'],'end':a['time'],'members':{},'last':{}})
                ep['end']=b['time'];ep['members'].setdefault(s['id'],s);ep['last'][s['id']]=next(t for t in b['soldiers'] if t['id']==s['id'])
        if first_casualty is None and any(not s['alive'] and s['id'] in initial for s in b['soldiers']):first_casualty=b['time']
        if int(a['time']//30)!=int(b['time']//30):
            sample={'time':b['time'],'squads':[]}
            for squad in range(8):
                alive=[s for s in b['soldiers'] if s['alive'] and s['id']//8==squad]
                if not alive:continue
                sign=1 if squad<4 else -1
                sample['squads'].append({'squad':squad,'centre_x':statistics.mean(s['position'][0] for s in alive),'paired_forward_displacement':statistics.median(sign*(s['position'][0]-initial[s['id']]['position'][0]) for s in alive)})
            front.append(sample)
    completed=[]
    for (squad,plan),ep in episodes.items():
        # Evaluate available original participants at the last assignment sample, not replacements or centroid drift.
        useful=arrived=0
        for sid,start in ep['members'].items():
            end=ep['last'][sid];p=start['position'];q=end['position'];target=plan_tracks.get((squad,plan),start['track'])
            moved=math.dist(p,q);gain=math.dist(p,target)-math.dist(q,target)
            u=[p[k]-target[k] for k in (0,1)];v=[q[k]-target[k] for k in (0,1)]
            angle=abs(math.degrees(math.atan2(u[0]*v[1]-u[1]*v[0],sum(x*y for x,y in zip(u,v)))))
            at=end['alive'] and math.dist(q,plan_goals.get((squad,plan),start['goal']))<8
            arrived+=at;useful+=at and moved>=6 and (gain>=8 or angle>=15)
        n=len(ep['members'])
        if useful>=2 and arrived>=math.ceil(n/2):
            evidence=[e['id'] for e in trace if e['squad']==squad and e['plan']==plan and ep['start']<=e['time']<=ep['end']][:12]
            completed.append({'squad':squad,'plan':plan,'from':ep['start'],'to':ep['end'],'useful_arrivals':useful,'participants':n,'decisions':evidence})
    deferrals=collections.Counter(e['reason'] for e in trace if e['kind']=='proposal_deferred')
    return {'schema':1,'build':manifest['build'],'seed':manifest['seed'],'encounter':manifest.get('encounter',0),'duration':manifest['duration'],'winner':manifest['winner'],'shots':manifest['shots'],'first_casualty':first_casualty,'casualties':len(initial)-sum(s['alive'] for s in rows[-1]['soldiers']),'survivors':[sum(s['alive'] for s in rows[-1]['soldiers'] if s['id']//32==team) for team in (0,1)],'defender_mg_neutralized':not next(s['alive'] for s in rows[-1]['soldiers'] if s['id']==39) if manifest.get('encounter') else None,**totals,'hold_no_solution_share':totals['hold_fire_no_solution_seconds']/max(1,totals['hold_fire_seconds']),'fire_no_solution_share':totals['fire_action_no_solution_seconds']/max(1,totals['fire_action_seconds']),'maneuver_task_share':totals['maneuver_task_seconds']/max(1,totals['active_seconds']),'completed_useful_maneuvers':completed,'deferrals':dict(deferrals),'front_line':front,'method':'0.2s duration weighting; Fire/Hold action means stationary intent, solution means valid target not ammunition/readiness. Useful maneuver requires >=2 arrivals after >=6m travel, >=8m closure or >=15 degree angle change about fixed initial leader-known track (personal track fallback); >=half assigned participants reach within 8m of the squad waypoint (individual cover dispersion allowed). Spatial benefit is not proof of suppression or tactical success.'}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('runs',nargs='+');p.add_argument('--out');a=p.parse_args()
    result=[evaluate(r) for r in a.runs]
    text=json.dumps(result,indent=2)
    if a.out:Path(a.out).write_text(text+'\n')
    for r in result:print(f"seed={r['seed']} encounter={r['encounter']} hold_no_solution={r['hold_no_solution_share']:.1%} maneuver={r['maneuver_task_share']:.1%} useful_completed={len(r['completed_useful_maneuvers'])} deferrals={sum(r['deferrals'].values())} casualties={r['casualties']}")
