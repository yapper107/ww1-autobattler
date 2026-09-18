#!/usr/bin/env python3
"""Offline Phase 0 tactics: exposure, friendly hits, losses and command evidence.

Exposure follows investigate_engagement.observer_holds: living Fire/Hold action,
<=0.1 m 3D movement to next frame, observer_exposed and no actor firing solution.
Report soldier-seconds, seconds per initial active, and share of living time.
Reversals use per-recipient issued assignments A-B-A within 30 s, with A/C within
5 m and B more than 5 m from A; refreshes and duplicate serials are not reversals.
Succession joins casualty actor, explicit succession events, and successor's first
OrderIssued event with a recipient; absence of an order is right-censored, not zero.
"""
import argparse
import collections
import math
import statistics
from phase0_metrics import (discover_runs, frames, identity, intervals, metadata,
                            rows, write_report)

HIT, CASUALTY, ORDER_ISSUED, SUCCESSION = 3, 4, 6, 9


def order_reversals(trace, duration):
    history = collections.defaultdict(list)
    seen = set()
    evidence = []
    for event in trace:
        if event['kind'] != 'order_issued':
            continue
        key = (event['soldier'], event['order'])
        if key in seen:
            continue
        seen.add(key)
        prior = history[event['soldier']]
        if len(prior) >= 2:
            a, b = prior[-2:]
            if (0 <= event['time'] - a['time'] <= 30 and
                    math.dist(event['goal'], a['goal']) <= 5 and
                    math.dist(b['goal'], a['goal']) > 5):
                evidence.append(dict(soldier=event['soldier'], time=event['time'],
                                     orders=[a['order'], b['order'], event['order']]))
        prior.append(event)
    return dict(count=len(evidence), per_battle_minute=len(evidence)*60/duration if duration else None,
                evidence=evidence)


def succession_latencies(events, duration):
    """Schema 1 lacks structured rank/office, so use the exported succession text."""
    casualties = {}
    pending = {}
    episodes = []
    for event in events:
        actor, time = event['actor'], event['time']
        if event['kind'] == CASUALTY:
            casualties[actor] = time
            for key, episode in list(pending.items()):
                if episode['successor'] == actor:
                    episode['censor_time'] = time
                    episode['censor_reason'] = 'Successor became a casualty before issuing an order'
                    del pending[key]
        elif event['kind'] == SUCCESSION:
            text = event['text'].lower()
            level = 'platoon' if 'platoon' in text else 'squad'
            key = (level, actor // (32 if level == 'platoon' else 8))
            if 'down' in text:
                episode = dict(level=level, unit=key[1], leader=actor,
                               casualty_time=casualties.get(actor), loss_observed_time=time,
                               successor=None, first_order_time=None, latency_seconds=None,
                               censored=True)
                episodes.append(episode)
                pending[key] = episode
            elif 'assumes' in text and key in pending:
                pending[key]['successor'] = actor
                pending[key]['assumed_time'] = time
        elif event['kind'] == ORDER_ISSUED and event['target'] >= 0:
            for key, episode in list(pending.items()):
                if episode['successor'] == actor:
                    episode['first_order_time'] = time
                    if episode['casualty_time'] is not None:
                        episode['latency_seconds'] = time - episode['casualty_time']
                    episode['censored'] = False
                    del pending[key]
    for episode in episodes:
        if episode['censored']:
            start = episode['casualty_time']
            episode.setdefault('censor_time', duration)
            episode.setdefault('censor_reason', 'Battle ended before a successor issued an order')
            episode['observed_without_order_seconds'] = episode['censor_time']-start if start is not None else None
    values = [e['latency_seconds'] for e in episodes if e['latency_seconds'] is not None]
    return dict(episodes=episodes, completed=len(values),
                censored=sum(e['censored'] and e['casualty_time'] is not None for e in episodes),
                missing_casualty=sum(e['casualty_time'] is None for e in episodes),
                median_seconds=statistics.median(values) if values else None)


def evaluate(root):
    result, manifest = metadata(root)
    first = next(frames(root))
    initial = {s['id']: s for s in first['soldiers'] if s['alive']}
    roster = {s['id']: identity(s)[0] for s in first['soldiers']}
    initial_counts = [sum(identity(s)[0] == team for s in initial.values()) for team in (0, 1)]
    living_seconds = exposure = 0.0
    final = first
    for frame, following, dt in intervals(root):
        current = {s['id']: s for s in following['soldiers']}
        for s in frame['soldiers']:
            if not s['alive']:
                continue
            living_seconds += dt
            if (s['action'] in (2, 4) and math.dist(s['position'], current[s['id']]['position']) <= .1
                    and s['observer_exposed'] and not s['solution']):
                exposure += dt
        final = following
    survivors = [sum(s['alive'] and s['id'] in initial and roster[s['id']] == team
                     for s in final['soldiers']) for team in (0, 1)]
    losses = [a-b for a, b in zip(initial_counts, survivors)]
    fractions = [lost/count if count else None for lost, count in zip(losses, initial_counts)]
    events = list(rows(root / 'events.jsonl'))
    hits = [e for e in events if e['kind'] == HIT and e['actor'] in roster
            and e['target'] in roster and roster[e['actor']] == roster[e['target']]]
    ratio = fractions[1]/fractions[0] if fractions[0] and fractions[1] is not None else None
    result.update(
        exposed_without_firing=dict(soldier_seconds=exposure, living_soldier_seconds=living_seconds,
                                    seconds_per_initial_active=exposure/len(initial) if initial else None,
                                    share_living_time=exposure/living_seconds if living_seconds else None),
        friendly_fire=dict(hits=len(hits), per_100_soldier_minutes=len(hits)*6000/living_seconds
                           if living_seconds else None),
        outcome=dict(winner=manifest['winner'], initial_actives=initial_counts, survivors=survivors,
                     casualties=losses, casualty_fractions=fractions,
                     casualty_exchange_azure=ratio,
                     exchange_definition='Ember casualty fraction / Azure casualty fraction; null if denominator zero',
                     time_of_decision=manifest['duration']),
        order_reversals=order_reversals(rows(root / 'trace.jsonl'), manifest['duration'])
                        if manifest.get('trace_enabled') else None,
        succession=succession_latencies(events, manifest['duration']),
        unavailable={'order_reversals': 'Tracing disabled'} if not manifest.get('trace_enabled') else {})
    result['deferred'] = ['area_of_operation_compliance', 'covered_movement_share', 'assault_arrival_angle',
                          'suppression_before_assault', 'break_contact_when_outnumbered',
                          'gun_silent_seconds', 'contact_to_drill_latency', 'directive_churn']
    return result


def summarize(cases):
    groups = collections.defaultdict(list)
    for case in cases:
        groups[(case['build'], case['controller'], case['terrain'], case['encounter'])].append(case)
    output = []
    for (build, controller, terrain, encounter), group in sorted(groups.items()):
        active = sum(c['exposed_without_firing']['living_soldier_seconds'] for c in group)
        hits = sum(c['friendly_fire']['hits'] for c in group)
        latencies = [e['latency_seconds'] for c in group for e in c['succession']['episodes']
                     if e['latency_seconds'] is not None]
        output.append(dict(build=build, controller=controller, terrain=terrain, encounter=encounter,
            runs=len(group), wins_azure_draw_ember=[sum(c['outcome']['winner'] == w for c in group) for w in (0, -1, 1)],
            mean_casualty_fractions=[statistics.mean(c['outcome']['casualty_fractions'][t] for c in group
                                                   if c['outcome']['casualty_fractions'][t] is not None)
                                     if any(c['outcome']['casualty_fractions'][t] is not None for c in group) else None
                                     for t in (0, 1)],
            mean_exposed_seconds_per_initial_active=statistics.mean(c['exposed_without_firing']['seconds_per_initial_active']
                                                                    for c in group if c['exposed_without_firing']['seconds_per_initial_active'] is not None)
                if any(c['exposed_without_firing']['seconds_per_initial_active'] is not None for c in group) else None,
            friendly_hits=hits, friendly_hits_per_100_soldier_minutes=hits*6000/active if active else None,
            succession_completed=len(latencies), succession_censored=sum(c['succession']['censored'] for c in group),
            succession_median_seconds=statistics.median(latencies) if latencies else None,
            reversal_available_runs=sum(c['order_reversals'] is not None for c in group)))
    return output


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('runs', nargs='+')
    parser.add_argument('--out')
    args = parser.parse_args()
    cases = [evaluate(root) for root in discover_runs(args.runs)]
    write_report(dict(schema=1, method=__doc__, cases=cases, summary=summarize(cases)), args.out)


if __name__ == '__main__':
    main()
