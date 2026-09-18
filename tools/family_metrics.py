#!/usr/bin/env python3
"""Offline family scoreboard. Missing drill concepts are null, never inferred successes."""
import argparse
import json
import math
import statistics
from pathlib import Path
import evaluate_tactics
import measure_dispersion
from phase0_metrics import rows, intervals, horizontal


def frame_command_metrics(root, duration):
    orders, directives = {}, set()
    reversals = 0
    for frame in rows(Path(root) / 'evaluation.jsonl'):
        for s in frame['soldiers']:
            serial = s.get('order', 0)
            if serial:
                history = orders.setdefault(s['id'], [])
                if not history or serial != history[-1][0]:
                    item = (serial, s['order_issued'], s['goal'])
                    if len(history) >= 2:
                        a, b = history[-2:]
                        if 0 <= item[1]-a[1] <= 30 and horizontal(item[2], a[2]) <= 5 and horizontal(b[2], a[2]) > 5:
                            reversals += 1
                    history.append(item)
            if s.get('platoon_order', 0):
                directives.add((s['squad'], s['platoon_order']))
    initial = next(rows(Path(root) / 'evaluation.jsonl'))
    squads = {s['squad'] for s in initial['soldiers'] if s['alive']}
    return (reversals*60/duration if duration else None,
            len(directives)*60/(duration*len(squads)) if duration and squads else None)


def gun_silence(root, shots, duration):
    first = next(rows(Path(root) / 'evaluation.jsonl'))
    guns = {s['id']: s['squad'] for s in first['soldiers'] if s['alive'] and s.get('machine_gun')}
    episodes = []
    for frame in rows(Path(root) / 'evaluation.jsonl'):
        for s in frame['soldiers']:
            if s['id'] in guns and not s['alive']:
                squad = guns.pop(s['id'])
                following = [r['time'] for r in shots if r['squad'] == squad and r['support_weapon'] and r['time'] >= frame['time']]
                end = min(following) if following else duration
                episodes.append(dict(soldier=s['id'], squad=squad, at=frame['time'], seconds=max(0, end-frame['time']), censored=not following))
    return episodes


def covered_movement(root, shots):
    covered = total = 0.0
    for frame, following, dt in intervals(root):
        after = {s['id']: s for s in following['soldiers']}
        for s in frame['soldiers']:
            if not (s['alive'] and s.get('drill_movement') and s.get('known_threat_sector')):
                continue
            if horizontal(s['position'], after[s['id']]['position']) <= .1:
                continue
            total += dt
            if any(r['team'] == s['team'] and (r.get('element_role') == 'base_of_fire' or r['support_weapon'])
                   and 0 <= frame['time']-r['impact_time'] <= 6 and horizontal(r['end'], s['sector']) <= 8 for r in shots):
                covered += dt
    return covered/total if total else None


def drill_metrics(root):
    inside=total=0.0;accepted={};leaders=set()
    for frame,_,dt in intervals(root):
        for unit in frame['soldiers']:
            if unit.get('squad_leader',-1)>=0:leaders.add(unit['squad_leader'])
            area=unit.get('area_of_operation')
            if unit['alive'] and area:
                total+=dt;p=unit['position']
                if all(area['min'][i]<=p[i]<=area['max'][i] for i in (0,1)) or (area.get('disc_radius',0)>0 and horizontal(p,area['disc_center'])<=area['disc_radius']):inside+=dt
            if unit.get('drill_instance',0):accepted[(unit['squad'],unit['drill_instance'])]=unit['drill_started']
    first={}
    for event in rows(Path(root)/'events.jsonl'):
        if event['kind']==0 and event['actor'] in leaders:first.setdefault(event['actor']//8,event['time'])
    latencies=[]
    for squad,at in first.items():
        following=[t for (owner,_),t in accepted.items() if owner==squad and t>=at]
        if following:latencies.append(min(following)-at)
    return inside/total if total else None,statistics.mean(latencies) if latencies else None

def assault_metrics(root):
    angles=[];supported=[];breaks=[];seen_phase=set();seen_move=set();outnumbered=set()
    for frame in rows(Path(root)/'evaluation.jsonl'):
        squads={s['squad'] for s in frame['soldiers'] if s.get('assault_base') is not None}
        for squad in squads:
            members=[s for s in frame['soldiers'] if s['squad']==squad and s['alive'] and s.get('element') is not None]
            if not members:continue
            unit=members[0];key=(squad,unit['drill_instance'])
            if unit.get('attack_committed') and unit.get('drill_stage') in (10,12) and key not in seen_move and any(s['drill_movement'] and s['action']==0 for s in members):
                seen_move.add(key);supported.append(int(unit['support_ever_established']))
            if unit.get('assault_phase_line',-1)>=0 and key not in seen_phase:
                seen_phase.add(key);assault=[s for s in members if s['element']==1]
                if assault:
                    point=[statistics.mean(s['position'][i] for s in assault) for i in (0,1)];base=unit['assault_base'];target=unit['assault_objective']
                    a=[base[i]-target[i] for i in (0,1)];b=[point[i]-target[i] for i in (0,1)]
                    angles.append(abs(math.degrees(math.atan2(a[0]*b[1]-a[1]*b[0],a[0]*b[0]+a[1]*b[1]))))
            eligible=unit.get('believed_own_strength',0)>0 and unit.get('believed_enemy_strength',0)>=2*unit['believed_own_strength'] and not unit.get('fire_superiority')
            if eligible:
                outnumbered.add(squad)
                if unit.get('break_contact_selected'):breaks.append(squad)
    return dict(assault_arrival_angle=statistics.mean(angles) if angles else None,
                assault_angle_at_least_45=sum(x>=45 for x in angles)/len(angles) if angles else None,
                suppression_before_assault=statistics.mean(supported) if supported else None,
                break_contact_when_outnumbered=len(set(breaks))/len(outnumbered) if outnumbered else None)


def evaluate(root):
    root = Path(root)
    manifest = json.loads((root/'manifest.json').read_text())
    if manifest.get('evaluation_schema') != 2 or manifest.get('shots_schema') != 1:
        raise ValueError('Family metrics require evaluation schema 2 and shots schema 1')
    first = next(rows(root/'evaluation.jsonl'))
    if first['schema'] != 2:
        raise ValueError('Evaluation schema does not match manifest')
    shots = list(rows(root/'shots.jsonl'))
    if len(shots) != manifest['shots']:
        raise ValueError('Incomplete shots export')
    spatial = measure_dispersion.measure(root)
    tactics = evaluate_tactics.evaluate(root)
    duration = manifest['duration']
    reversals, churn = frame_command_metrics(root, duration)
    silence = gun_silence(root, shots, duration)
    succession = [r['latency_seconds'] for r in tactics['succession']['episodes'] if r['latency_seconds'] is not None]
    area,latency=drill_metrics(root)
    metrics = dict(shots=len(shots), casualty_azure=tactics['outcome']['casualty_fractions'][0],
        casualty_ember=tactics['outcome']['casualty_fractions'][1], casualty_exchange=tactics['outcome']['casualty_exchange_azure'],
        win_azure=int(manifest['winner']==0), draw=int(manifest['winner']==-1), win_ember=int(manifest['winner']==1),
        time_to_decision=duration, nearest_m=spatial['nearest_squadmate_m']['median'],
        nearest_p10=spatial['nearest_squadmate_m']['p10'], nearest_p90=spatial['nearest_squadmate_m']['p90'],
        under_2m=spatial['nearest_squadmate_m']['share_below'], radius_m=spatial['squad_rms_radius_m']['mean'],
        centroid_m=spatial['minimum_friendly_squad_centroid_m']['median'],
        centroid_under_10m=spatial['minimum_friendly_squad_centroid_m']['share_below'],
        exposed_without_firing=tactics['exposed_without_firing']['seconds_per_initial_active'],
        friendly_hits=tactics['friendly_fire']['hits'], friendly_hits_per_100_soldier_minutes=tactics['friendly_fire']['per_100_soldier_minutes'],
        gun_silent_seconds=statistics.mean(e['seconds'] for e in silence) if silence else None,
        succession_latency=statistics.mean(succession) if succession else None,
        order_reversals_per_minute=reversals, directive_churn=churn,
        covered_movement_share=covered_movement(root, shots), area_of_operation_compliance=area,
        assault_arrival_angle=None, assault_angle_at_least_45=None, suppression_before_assault=None,
        break_contact_when_outnumbered=None, contact_to_drill_latency=latency)
    metrics.update(assault_metrics(root))
    unavailable = {k:'No eligible samples/episodes' for k,v in metrics.items() if v is None}
    for k in ('assault_arrival_angle','assault_angle_at_least_45','suppression_before_assault','break_contact_when_outnumbered'):
        if metrics[k] is not None:continue
        unavailable[k]='Legacy/candidate90 have no drill elements, drill stages or assigned areas; Phase 2+ instrumentation required'
    return dict(metrics=metrics, unavailable=unavailable, gun_silence_episodes=silence,
                initial_actives=tactics['outcome']['initial_actives'], survivors=tactics['outcome']['survivors'],
                digest=manifest['gameplay_digest'], scenario_digest=json.loads((root/'scenario.json').read_text())['digest'] if (root/'scenario.json').exists() else None)


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--out');a=p.parse_args()
    text=json.dumps(evaluate(a.run),indent=2,allow_nan=False)+'\n'
    if a.out:Path(a.out).write_text(text)
    else:print(text,end='')
if __name__=='__main__':main()
