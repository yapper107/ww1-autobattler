#!/usr/bin/env python3
"""Evidence-based, offline battle investigation. IDs are zero-based simulation IDs."""
import argparse, collections, json, math
from pathlib import Path

def distance(a,b): return math.dist(a,b)
def load_run(path):
    path=Path(path)
    if path.name=='latest.json': path=path.parent/json.loads(path.read_text())['run']
    if not (path/'manifest.json').exists() and (path/'latest.json').exists(): path=path/json.loads((path/'latest.json').read_text())['run']
    return path,json.loads((path/'manifest.json').read_text()),[json.loads(line) for line in (path/'trace.jsonl').read_text().splitlines() if line]

def maneuver_outcomes(rows):
    """Observer evidence for whole groups; never assume a fixed corporal remains available."""
    execution={'initial','order_activated','casualty','cover_changed','cover_released','arrived','execution','heartbeat'}
    states=collections.defaultdict(list)
    for r in rows:
        if r['kind'] in execution:states[r['soldier']].append(r)
    starts=[r for r in rows if r['kind'] in ('proposal_accepted','movement_revised') and 'contact quiet' not in r['reason']]
    result=[]
    for start in starts:
        endings=[r for r in rows if r['squad']==start['squad'] and r['time']>start['time'] and
                 (r['kind'] in ('plan_completed','plan_cancelled','movement_abandoned') or
                  (r['kind'] in ('proposal_accepted','movement_revised') and r['plan']!=start['plan']))]
        end=endings[0] if endings else None
        until=min(start['time']+45,end['time'] if end else max((r['time'] for r in rows),default=start['time']))
        members=moved=arrived=lost=0;max_travel=0;rounds=0;evidence=[start['id']]
        for events in states.values():
            before=[r for r in events if r['squad']==start['squad'] and r['time']<=start['time']]
            if not before:continue
            a=before[-1]
            if not a['alive'] or a.get('role') in (3,4,5) or a['task'] in (1,11):continue
            after=[r for r in events if start['time']<r['time']<=until]
            if not after:continue
            members+=1;available=[r for r in after if r['alive']]
            travel=max((distance(a['position'],r['position']) for r in available),default=0)
            moved+=travel>=3;max_travel=max(max_travel,travel)
            arrived+=any(distance(r['position'],start['goal'])<8 for r in available)
            lost+=not after[-1]['alive'];rounds+=max(0,after[-1]['rounds']-a['rounds'])
            evidence.append(after[-1]['id'])
        status='no_available_members' if not members else ('group_arrival' if moved else 'already_at_destination') if arrived>=max(2,math.ceil(members/2)) else 'partial_movement' if moved else 'no_observed_movement'
        result.append(dict(squad=start['squad'],plan=start['plan'],start=start['time'],end=until,
            members=members,moved=moved,near_destination=arrived,casualties=lost,rounds=rounds,
            max_displacement=round(max_travel,2),status=status,
            reported_complete=bool(end and end['kind']=='plan_completed'),
            purpose='unverified: movement or arrival alone does not establish a successful flank',evidence=evidence))
    return result

def analyze(rows):
    findings=[];durations=collections.Counter();metrics=collections.Counter();by_unit=collections.defaultdict(list)
    def flag(kind,a,b,explanation,hypothesis=True):
        findings.append(dict(kind=kind,soldier=b['soldier'],squad=b['squad'],start=a['time'],end=b['time'],evidence=[a['id'],b['id']],explanation=explanation,hypothesis=hypothesis))
    for r in rows:
        if r['kind'] not in ('initial','order_activated','casualty','cover_changed','cover_released','arrived','execution','heartbeat'): continue
        by_unit[r['soldier']].append(r)
    for r in rows:
        r.setdefault("order_goal",r["goal"])
        if r['kind'] in ('movement_paused','movement_resumed','movement_revised','movement_abandoned'):
            metrics[r['kind']]+=1
    for unit,events in by_unit.items():
        previous_cover=None;last_change=None;stationary_since=None;last_motion=events[0];episode_origin=events[0];pending_move=None
        for index,(a,b) in enumerate(zip(events,events[1:])):
            dt=max(0,min(5,b['time']-a['time']))
            if not a['alive']:continue
            state='blocked' if a['blocked'] else 'suppressed' if a['suppression']>.52 else 'firing' if b['rounds']>a['rounds'] else 'aiming' if a['action']==2 and a['aim']>0 else 'moving' if distance(a['position'],b['position'])>.12 else 'waiting'
            durations[state]+=dt
            if distance(last_motion['position'],b['position'])>1:last_motion=b
            # Time spent intentionally holding is not time spent failing a newly issued move.
            if distance(a['position'],a['goal'])<=3 and distance(b['position'],b['goal'])>3:last_motion=b
            if a['assigned'] and b['assigned'] and distance(a['cover'],b['cover'])>2:
                metrics['cover_changes']+=1
                previous_contacts={k['enemy']:k['position'] for k in a['knowledge']}
                new_threat=any(k['enemy'] not in previous_contacts or distance(k['position'],previous_contacts[k['enemy']])>5 for k in b['knowledge'])
                forced=new_threat or b['geometry']!=a['geometry'] or a['suppression']>.52 or not a['near_shelter'] or not a['protected']
                new_order=b['order']!=a['order'] or b['plan']!=a['plan']
                if not forced and not new_order:
                    metrics['unnecessary_cover_changes']+=1
                    flag('unexplained_cover_change',a,b,'Left nearby protected cover without a recorded new assignment or heavy suppression.')
                if b['geometry']!=a['geometry']:metrics['geometry_relocations']+=1
                if previous_cover and distance(previous_cover['cover'],b['cover'])<2 and b['time']-previous_cover['time']<30:
                    metrics['cover_returns']+=1;flag('cover_oscillation',previous_cover,b,'Returned to a recently abandoned cover position.')
                previous_cover=a;last_change=b
            if a['order']!=b['order']:
                metrics['orders']+=1
                if a['aim']>.35 and distance(a['order_goal'],b['order_goal'])>2:metrics['aim_interruptions']+=1;flag('aim_interrupted',a,b,'A changed movement destination interrupted an aimed position.')
                if pending_move and b['time']-pending_move['time']<8 and distance(pending_move['order_goal'],b['order_goal'])>5 and distance(b['position'],pending_move['order_goal'])>3:
                    metrics['order_reversals']+=1;flag('rapid_order_reversal',pending_move,b,'Destination changed again before the previous movement arrived.')
                pending_move=b
            if a['task']==9 and a['action']==0 and not a['support_ready'] and not a.get('movement_block',0) and distance(a['position'],b['position'])>.15:
                metrics['unsupported_crossing_seconds']+=dt
                # Recorded covering fire readiness is extended to rifle teams by the coordinator.
                if index==0 or not (events[index-1]['task']==9 and not events[index-1]['support_ready']):
                    flag('support_not_confirmed',a,b,'Movement began without a recorded ready covering element; inspect plan prerequisites.')
            exposed=bool(b['knowledge']) and not b['protected'] and not b['near_shelter'] and distance(a['position'],b['position'])<.12 and b['action'] in (2,4)
            if exposed:
                stationary_since=stationary_since or a
                if b['time']-stationary_since['time']>=5:
                    metrics['exposed_idle_seconds']+=dt
                    if a['time']-stationary_since['time']<5:flag('exposed_inactivity',stationary_since,b,'Stationary with known threats and no recorded nearby shelter for at least five seconds.')
            else:stationary_since=None
            if b['phase'].lower()=='search' and not b['reason'].startswith('Yielding at') and b['time']-last_motion['time']>20 and not b['knowledge'] and b['suppression']<.08 and distance(b['position'],b['goal'])>3:
                metrics['unexplained_idle_seconds']+=dt
                if a['time']-last_motion['time']<=20:flag('stalled_search',last_motion,b,'Quiet search has not moved one metre in twenty seconds despite a distant goal.')
            if b['task'] in (1,11) and b['time']-episode_origin['time']>=20:
                if b['rounds']==episode_origin['rounds'] and not b['support_ready'] and b['knowledge'] and episode_origin['knowledge']:flag('obsolete_support',episode_origin,b,'Support assignment has produced no rounds or confirmed covering role for twenty seconds.')
                episode_origin=b
            if a['task']!=b['task']:episode_origin=b
            if last_change and b['time']-last_change['time']>=12:
                if distance(last_change['position'],b['position'])<1 and b['rounds']==last_change['rounds']:flag('ineffective_reposition',last_change,b,'Reposition decision produced neither meaningful travel nor firing in twelve seconds.')
                last_change=None
    return dict(metrics=dict(metrics),soldier_seconds=dict(durations),maneuvers=maneuver_outcomes(rows),findings=sorted(findings,key=lambda f: (f['kind']!='exposed_inactivity',- (f['end']-f['start']))))

def route_analysis(directory, rows):
    def read(name):
        p=Path(directory)/name
        return [json.loads(line) for line in p.read_text().splitlines() if line] if p.exists() else []
    routes=read('routes.jsonl');paths=read('paths.jsonl')
    selected={r.get('route') for r in rows if r['kind']=='proposal_accepted' and r.get('route')}
    episodes=[]
    for route in routes:
        if route['id'] not in selected:continue
        events=[r for r in rows if r.get('route')==route['id']]
        execution=[p for p in paths if p.get('route')==route['id']]
        episodes.append(dict(route=route['id'],owner=route['owner'],time=route['time'],query_status=route['status'],predicted_exposed_seconds=route['exposed_seconds'],cost=route['cost'],
            received_by=sorted({r['soldier'] for r in events if r['kind']=='order_received'}),
            stages_completed=sum(r['kind']=='route_stage_completed' for r in events),
            completed=any(r['kind']=='plan_completed' for r in events),
            pauses=[dict(time=r['time'],reason=r['reason'],decision=r['id']) for r in events if r['kind']=='movement_paused'],
            paths=len(execution),failed_refinements=sum(p['status']=='no_executable_path' for p in execution),
            emergency_departures=sum(p['kind']=='emergency_departure' for p in execution),evidence=[r['id'] for r in events if r['kind'] in ('proposal_accepted','route_stage_completed','plan_completed')]))
    return dict(query_status=dict(collections.Counter(r['status'] for r in routes)),selected=len(selected),episodes=episodes,
        interpretation='Predicted exposure uses commander-known tracks. Completion and path issue do not prove a useful firing angle. A budget-exhausted query may retain a measured physical incumbent.')

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--soldier',type=int);p.add_argument('--squad',type=int);p.add_argument('--from',dest='start',type=float,default=0);p.add_argument('--to',type=float,default=600);p.add_argument('--why-left-cover',action='store_true');p.add_argument('--compare');p.add_argument('--write',action='store_true');p.add_argument('--json',action='store_true');a=p.parse_args()
    directory,manifest,all_rows=load_run(a.run)
    rows=[r for r in all_rows if (a.soldier is None or r['soldier']==a.soldier) and (a.squad is None or r['squad']==a.squad) and a.start<=r['time']<=a.to]
    result=analyze(rows);result['routes']=route_analysis(directory,rows);result['manifest']=manifest;result['selection']=dict(soldier=a.soldier,squad=a.squad,start=a.start,end=a.to)
    if a.compare:
        _,_,baseline=load_run(a.compare);before=analyze(baseline)['metrics'];result['comparison']={k:dict(before=before.get(k,0),after=result['metrics'].get(k,0)) for k in sorted(before.keys()|result['metrics'].keys())}
    lines=[f"# Battle {manifest['seed']} investigation",'',f"Build: {manifest['build']}. Duration: {manifest['duration']}s. Findings are hypotheses unless marked confirmed.",'', '## Measurements','',json.dumps(result['metrics'],indent=2),'','## Episodes','']
    for f in result['findings'][:30]:lines.append(f"- {f['start']:.2f}–{f['end']:.2f}s, soldier {f['soldier']}, squad {f['squad']}: **{f['kind']}** — {f['explanation']} Evidence: {f['evidence']}.")
    if result['routes']['episodes']:
        lines+=['','## Routes','',json.dumps(result['routes'],indent=2)]
    if result['maneuvers']:
        lines+=['','## Maneuver execution','', 'Arrival is spatial progress; tactical purpose still requires checking enemy effects.','']
        for m in result['maneuvers']:
            lines.append(f"- {m['start']:.2f}–{m['end']:.2f}s, squad {m['squad']}, plan {m['plan']}: {m['status']}; {m['moved']}/{m['members']} available participants moved ≥3m, {m['near_destination']} observed near the destination, {m['casualties']} became casualties. Evidence: {m['evidence']}.")
    if a.soldier is not None or a.squad is not None:
        lines+=['','## Decision timeline','']
        for r in rows:
            if a.why_left_cover and r['kind'] not in ('cover_changed','cover_released','order_activated'):continue
            if r['kind']=='heartbeat' and not a.why_left_cover:continue
            known=', '.join(f"{k['enemy']}{' (MG)' if k.get('automatic_weapon') else ''} last observed {r['time']-k['observed_at']:.1f}s ago ({'personal' if k['personal'] else 'report'})" for k in r['knowledge']) or 'no fresh contacts'
            lines.append(f"- {r['time']:.2f}s #{r['id']} ← #{r['parent']} / order {r['order']} from {r['issuer']} / {r['phase']}: {r['kind']} — {r['reason']}. Known: {known}. Goal: {r['goal']}; support ready: {bool(r['support_ready'])}.")
    markdown='\n'.join(lines)+'\n'
    if a.write:
        name='analysis' if a.soldier is None and a.squad is None and a.start==0 and a.to==600 else 'selection'
        (directory/(name+'.json')).write_text(json.dumps(result,indent=2));(directory/(name+'.md')).write_text(markdown)
    print(json.dumps(result,indent=2) if a.json else markdown)
if __name__=='__main__':main()
