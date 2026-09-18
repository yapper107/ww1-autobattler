#!/usr/bin/env python3
"""Offline plan-014 closure and injury diagnostics; never a policy input.

Squad displacement is evaluate_ai.front_line's median paired x displacement of
surviving initial members, with team direction. Platoon displacement is the
unweighted mean of its surviving squads' medians. Extinct platoons and horizons
past recorded battle end are unavailable, not successful closure.
"""
import json
from pathlib import Path
import statistics
from phase0_metrics import rows


def front_sample(frame, initial):
    squads = []
    for squad in range(8):
        alive = [s for s in frame['soldiers'] if s['alive'] and s['id']//8 == squad]
        if not alive:
            continue
        sign = 1 if squad < 4 else -1
        squads.append(dict(squad=squad,
            centre_x=statistics.mean(s['position'][0] for s in alive),
            paired_forward_displacement=statistics.median(
                sign*(s['position'][0]-initial[s['id']]['position'][0]) for s in alive)))
    platoons = []
    for team in (0, 1):
        values = [s['paired_forward_displacement'] for s in squads if s['squad']//4 == team]
        platoons.append(statistics.mean(values) if values else None)
    return dict(time=frame['time'], squads=squads, platoons=platoons)


def evaluate(root):
    root = Path(root)
    stream = iter(rows(root/'evaluation.jsonl'))
    first = previous = next(stream)
    initial = {s['id']: s for s in first['soldiers'] if s['alive']}
    front = []
    soldier_seconds = [0., 0.]
    for frame in stream:
        dt = frame['time']-previous['time']
        for s in previous['soldiers']:
            if s['alive']:
                soldier_seconds[s['id']//32] += dt
        if int(previous['time']//30) != int(frame['time']//30):
            front.append(front_sample(frame, initial))
        previous = frame
    closure = {}
    for at in (120, 240):
        sample = next((r for r in front if at <= r['time'] < at+.201), None)
        closure[f'closure_{at}s_m'] = sample['platoons'][0] if sample else None
    shots_path = root/'shots.jsonl'
    hits = sum(bool(s.get('hit')) for s in rows(shots_path)) if shots_path.exists() else None
    events = list(rows(root/'events.jsonl'))
    hit_events = sum(e['kind'] == 3 for e in events)
    casualties = [e for e in events if e['kind'] == 4]
    killed = sum('killed in action' in e['text'] for e in casualties)
    incapacitated = sum('incapacitated' in e['text'] for e in casualties)
    return dict(**closure, front_line=front, soldier_minutes=[s/60 for s in soldier_seconds],
                hit_rounds=hits, hit_events=hit_events,
                hits_per_soldier_minute=hits/(sum(soldier_seconds)/60) if hits is not None and sum(soldier_seconds) else None,
                non_incapacitating_hits=hit_events-len(casualties),
                wounded_incapacitated=incapacitated, killed=killed,
                casualties_total=len(initial)-sum(s['alive'] for s in previous['soldiers']))


def main():
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run')
    parser.add_argument('--out')
    args = parser.parse_args()
    text = json.dumps(evaluate(args.run), indent=2, allow_nan=False)+'\n'
    if args.out:
        Path(args.out).write_text(text)
    else:
        print(text, end='')


if __name__ == '__main__':
    main()
