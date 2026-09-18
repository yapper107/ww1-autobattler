#!/usr/bin/env python3
"""Offline leader comparison. Truth-based wrong/stale-target proxies never enter policy."""
import argparse
from bisect import bisect_right
import json
from pathlib import Path
import statistics
from after_action import rows, resolve_run


def distance(a, b):
    return sum((a[i]-b[i])**2 for i in (0, 1))**.5


def evaluate(run):
    run = resolve_run(run)
    frames = [(r['time'], r['soldiers']) for r in rows(run/'evaluation.jsonl')]
    times = [t for t, _ in frames]
    events = list(rows(run/'trace.jsonl', {'radio_broadcast', 'radio_received', 'platoon_task', 'leader_call', 'leader_net', 'leader_picture', 'radio_dropped', 'message_dropped'}))
    duration = json.loads((run/'manifest.json').read_text())['duration']
    def kind(e):
        try: return int(e.get('reason', ''))
        except ValueError: return {'Fixing':0,'Assaulting':1,'NeedSupport':2,'PhaseLine':3,'Done':4}.get(e.get('reason'))
    def team(e): return e['squad']//4
    def nearby_enemy(at, goal, side):
        i = bisect_right(times, at)-1
        if i < 0: return None
        return any(s['alive'] and s['team'] != side and distance(s['position'], goal) <= 20 for s in frames[i][1])
    result = []
    for side in (0, 1):
        own = [e for e in events if e.get('squad', -1) >= 0 and team(e) == side]
        radio = [e for e in own if e['kind'] == 'radio_broadcast']
        assaults = [e for e in radio if kind(e) == 1]
        first = next((e['time'] for e in assaults if any(
            r['kind'] == 'radio_received' and kind(r) == 0 and r['soldier'] == e['soldier'] and
            r['time'] <= e['time'] and e['time']-r['time'] <= 60 and distance(r['goal'], e['goal']) <= 40 for r in own)), None)
        needs = [e for e in radio if kind(e) == 2]
        latencies = []
        for need in needs:
            reply = next((e for e in radio if kind(e) == 0 and e['squad'] != need['squad'] and
                          e['time'] >= need['time'] and distance(e['goal'], need['goal']) <= 40), None)
            if reply: latencies.append(reply['time']-need['time'])
        directives = [e for e in own if e['kind'] == 'platoon_task']
        combat = [e for e in directives if 'FightHere: nearest known group' in e.get('reason', '')]
        wrong = [e for e in combat if nearby_enemy(e['time'], e['goal'], side) is False]
        stale = 0.
        for index, order in enumerate(directives):
            # A renewal's stated goal continues the earlier combat intent.
            if order not in combat: continue
            end = next((e['time'] for e in directives[index+1:] if e['squad'] == order['squad'] and 'renew committed intent' not in e['reason']), duration)
            for (at, soldiers), (after, _) in zip(frames, frames[1:]):
                dt = max(0., min(after, end)-max(at, order['time']))
                if dt and not any(s['alive'] and s['team'] != side and distance(s['position'], order['goal']) <= 20 for s in soldiers):stale += dt
        selected = [e for e in own if e['kind'] == 'leader_call']
        evidence = [{k:e.get(k) for k in ('id','time','kind','soldier','squad','reason','goal')} for e in (wrong[:2]+selected[:3])]
        result.append(dict(first_coordinated_assault_s=first, help_latency_s=statistics.mean(latencies) if latencies else None,
            help_calls=len(needs),help_answered=len(latencies),wrong_target_rate=len(wrong)/len(combat) if combat else None,
            wrong_targets=len(wrong),combat_calls=len(combat),stale_order_squad_seconds=stale,
            profile_decisions=len(selected),net_drops=sum(e['kind'] in ('radio_dropped','message_dropped') for e in own),
            evidence=evidence))
    return dict(sides=result, definitions={
        'first_coordinated_assault_s':'First Assaulting broadcast preceded within60s by same-leader received Fixing within40m; null if absent.',
        'help_latency_s':'NeedSupport broadcast to next other-squad Fixing within40m, answered episodes only; unanswered count disclosed.',
        'wrong_target_rate':'Combat FightHere calls with no living enemy within20m of stated sector at issue time, observer-only proxy.',
        'stale_order_squad_seconds':'Sum of combat-intent squad seconds with no living enemy within20m, through renewal until replacement/end; observer-only proxy.'})


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--out');a=p.parse_args()
    result=json.dumps(evaluate(a.run),indent=2,allow_nan=False)+'\n'
    if a.out:Path(a.out).write_text(result)
    else:print(result,end='')
if __name__=='__main__':main()
