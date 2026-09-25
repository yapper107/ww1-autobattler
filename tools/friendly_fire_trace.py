#!/usr/bin/env python3
"""Friendly-fire trace (plan 026 P2, stage 2c): what was going on around every same-team hit.

Offline observer analysis of one exported battle; it never feeds a policy. Every Hit event
(events.jsonl kind 3: time, actor = shooter, target = victim) whose shooter and victim are on the
same team is joined to

- the evaluation frames (evaluation.jsonl, 0.2 s apart): the victim's and shooter's state in the
  last frame at or before the hit (the frame after may already show the victim down), and the
  victim's displacement over the second before it;
- the shot that struck him (shots.jsonl: owner = actor, a victim entry for the target at the hit
  time): suppressive, moving_fire, aimed_point, whether he was the first body on the round;
- when given, the recorded Azure squad decisions (--record-squad-decisions): the victim's and the
  shooter's squad's last committed decision, a KEEP selection within 30 s, the committed family.

Tags are NOT exclusive: one hit carries every tag that applies. Each tag has a count and a rate
per 100 soldier-minutes over the same denominator as the friendly_fire guard (living soldier
seconds of both teams, evaluate_tactics), so tag rates of two arms subtract meaningfully.
"""
from __future__ import annotations
import argparse, bisect, json, math, sys
from pathlib import Path

try:
    from phase0_metrics import rows
except ImportError:  # run as tools/friendly_fire_trace.py or imported as tools.friendly_fire_trace
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from phase0_metrics import rows

HIT = 3
MOVING_WINDOW = 1.0      # seconds before the hit over which the victim's displacement is measured
MOVING_METRES = .5       # 0.5 m/s: walking pace is ~1.3 m/s, standing jitter is centimetres
AIM_RADIUS = 2.0         # victim within this horizontal distance of the shooter's aimed point
KEEP_WINDOW = 30.0
COMMIT_AGES = (2, 5, 15)
FAMILIES = ('flank_north', 'flank_south', 'press', 'pull_back', 'reposition')  # feature[33+family]
MOVEMENT_ACTIONS = (0, 3)  # Action::Advance, Action::Retreat

BASE_TAGS = ['all', 'victim_azure', 'victim_ember', 'same_squad', 'cross_squad', 'victim_moving',
             'victim_moving_action', 'victim_new_order_5s', 'shooter_moving_fire', 'shooter_suppressive',
             'victim_near_aim_point', 'through_another_body', 'shooter_mg']
DECISION_TAGS = ([f'victim_recent_commit_{a}s' for a in COMMIT_AGES] + ['victim_after_keep']
                 + [f'shooter_recent_commit_{a}s' for a in COMMIT_AGES] + ['shooter_after_keep']
                 + [f'victim_family_{f}' for f in FAMILIES])
TAGS = BASE_TAGS + DECISION_TAGS


def _run_dir(root: Path) -> Path:
    root = Path(root)
    if (root/'manifest.json').exists():
        return root
    return root/json.loads((root/'latest.json').read_text())['run']


def horizontal(a, b):
    return math.hypot(a[0]-b[0], a[1]-b[1])


def load_decisions(path):
    """Per squad: time-ordered (time, outcome, keep, family) of the recorded decisions."""
    result = {}
    if path is None or not Path(path).exists():
        return None
    with open(path, 'rb') as stream:
        for line in stream:
            if not line.strip():
                continue
            d = json.loads(line)
            selected = d['selected']
            keep = d.get('schema') == 3 and selected == 1
            family = None
            if selected > 0:
                features = d['features'][selected]
                for index, name in enumerate(FAMILIES):
                    if features[33+index] == 1:
                        family = name
                        break
            result.setdefault(d['squad'], []).append((d['time'], d['outcome'], keep, family))
    for entries in result.values():
        entries.sort(key=lambda e: e[0])
    return result


def _squad_history(decisions, squad, time):
    """Age of the squad's last committed decision at or before time, its family, and KEEP within 30 s."""
    entries = decisions.get(squad, [])
    end = bisect.bisect_right([e[0] for e in entries], time)
    commit_age = family = None
    keep = False
    for t, outcome, kept, fam in reversed(entries[:end]):
        if kept and time-t <= KEEP_WINDOW:
            keep = True
        if commit_age is None and outcome == 'committed':
            commit_age, family = time-t, fam
        if commit_age is not None and time-t > KEEP_WINDOW:
            break
    return commit_age, family, keep


def evaluate(run_root, decisions_path=None):
    run = _run_dir(run_root)
    frames = list(rows(run/'evaluation.jsonl'))
    if not frames:
        raise ValueError('Empty evaluation export')
    times = [f['time'] for f in frames]
    first = frames[0]
    team = {s['id']: s['team'] for s in first['soldiers']}
    squad = {s['id']: s['squad'] for s in first['soldiers']}
    gunner = {s['id']: bool(s.get('machine_gun')) for s in first['soldiers']}
    living = 0.0
    for previous, current in zip(frames, frames[1:]):
        dt = current['time']-previous['time']
        if dt <= 0:
            raise ValueError('Evaluation times must strictly increase')
        living += dt*sum(1 for s in previous['soldiers'] if s['alive'])
    shots = {}
    for shot in rows(run/'shots.jsonl'):
        for index, victim in enumerate(shot.get('victims', [])):
            shots.setdefault((shot['owner'], victim['soldier']), []).append((victim['time'], index, shot))
    decisions = load_decisions(decisions_path)
    counts = {tag: 0 for tag in TAGS}
    hits, unmatched = [], 0
    for event in rows(run/'events.jsonl'):
        if event['kind'] != HIT:
            continue
        shooter, victim, time = event['actor'], event['target'], event['time']
        if shooter not in team or victim not in team or team[shooter] != team[victim]:
            continue
        at = max(0, bisect.bisect_right(times, time+1e-6)-1)
        before = max(0, bisect.bisect_right(times, time-MOVING_WINDOW+1e-6)-1)
        v_now, v_before = frames[at]['soldiers'][victim], frames[before]['soldiers'][victim]
        s_now = frames[at]['soldiers'][shooter]
        if v_now['id'] != victim or s_now['id'] != shooter:
            raise ValueError('Evaluation soldiers are not indexed by id')
        candidates = shots.get((shooter, victim), [])
        match = min(candidates, key=lambda c: abs(c[0]-time)) if candidates else None
        if match is None or abs(match[0]-time) > .01:
            match = None
            unmatched += 1
        tags = ['all', 'victim_azure' if team[victim] == 0 else 'victim_ember',
                'same_squad' if squad[shooter] == squad[victim] else 'cross_squad']
        displacement = horizontal(v_now['position'], v_before['position'])
        if displacement > MOVING_METRES*(times[at]-times[before] or MOVING_WINDOW)/MOVING_WINDOW:
            tags.append('victim_moving')
        if v_now['action'] in MOVEMENT_ACTIONS:
            tags.append('victim_moving_action')
        if v_now.get('order_issued') is not None and 0 <= time-v_now['order_issued'] <= 5:
            tags.append('victim_new_order_5s')
        if gunner.get(shooter):
            tags.append('shooter_mg')
        record = dict(time=time, shooter=shooter, victim=victim, team=team[victim],
                      shooter_squad=squad[shooter], victim_squad=squad[victim],
                      victim_displacement_1s=round(displacement, 3), victim_action=v_now['action'],
                      victim_task=v_now['task'], victim_order=v_now.get('order'), victim_route=v_now.get('route'),
                      shooter_action=s_now['action'])
        if match is not None:
            shot = match[2]
            if shot.get('moving_fire'):
                tags.append('shooter_moving_fire')
            if shot.get('suppressive'):
                tags.append('shooter_suppressive')
            aim_distance = horizontal(v_now['position'], shot['aimed_point'])
            if aim_distance <= AIM_RADIUS:
                tags.append('victim_near_aim_point')
            if match[1] > 0:
                tags.append('through_another_body')
            record.update(aimed_enemy=shot.get('aimed_enemy'), aim_distance=round(aim_distance, 3),
                          range=round(horizontal(shot['start'], v_now['position']), 3))
        if decisions is not None:
            for role, soldier in (('victim', victim), ('shooter', shooter)):
                if team[soldier] != 0:
                    continue
                age, family, keep = _squad_history(decisions, squad[soldier], time)
                record[f'{role}_commit_age'] = age
                record[f'{role}_family'] = family
                record[f'{role}_keep_30s'] = keep
                for limit in COMMIT_AGES:
                    if age is not None and age < limit:
                        tags.append(f'{role}_recent_commit_{limit}s')
                if keep:
                    tags.append(f'{role}_after_keep')
                if role == 'victim' and family and age is not None and age < 15:
                    tags.append(f'victim_family_{family}')
        record['tags'] = tags
        for tag in tags:
            counts[tag] += 1
        hits.append(record)
    rate = (lambda n: n*6000/living) if living else (lambda n: None)
    tag_table = {}
    for tag in TAGS:
        if tag in DECISION_TAGS and decisions is None:
            tag_table[tag] = dict(hits=None, per_100=None)
        else:
            tag_table[tag] = dict(hits=counts[tag], per_100=rate(counts[tag]))
    return dict(schema=1, hits=counts['all'], living_soldier_seconds=living, per_100_soldier_minutes=rate(counts['all']),
                unmatched_shots=unmatched, decisions=decisions is not None, tags=tag_table, events=hits,
                definition=dict(moving_window=MOVING_WINDOW, moving_metres=MOVING_METRES, aim_radius=AIM_RADIUS,
                                keep_window=KEEP_WINDOW, frame='last evaluation frame at or before the hit'))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run')
    parser.add_argument('--decisions')
    args = parser.parse_args()
    result = evaluate(args.run, args.decisions)
    print(json.dumps({k: v for k, v in result.items() if k != 'events'}, indent=2))


if __name__ == '__main__':
    main()
