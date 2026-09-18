#!/usr/bin/env python3
"""Phase 3d observer scoreboard: paired outcomes, not a casualty-count floor.

Primary exchange retains family_metrics: defender casualty fraction / attacker
casualty fraction, unavailable when attacker losses are zero. Paired counts
disclose those omissions. The supplementary ratio of aggregate raw losses
retains zero-loss battles, with no fabricated infinity cap.
"""
import argparse
from collections import defaultdict
import json
import random
from pathlib import Path

from compare_drills import DIRECTIONS, classify
from report_family import percentile, summarize


def key(row):
    return row['gen_seed'], row['seed']


def casualties(row):
    return tuple(a-b for a, b in zip(row['initial_actives'], row['survivors']))


def exchange(rows):
    losses = [casualties(row) for row in rows]
    own = sum(a for a, _ in losses)
    return sum(b for _, b in losses)/own if own else None


def paired_exchange(left, right, resamples=2000):
    a, b = {key(r): r for r in left}, {key(r): r for r in right}
    keys = sorted(a.keys() & b.keys())
    clusters = defaultdict(list)
    for k in keys:
        clusters[k[0]].append(k)
    groups = [clusters[k] for k in sorted(clusters)]
    rng = random.Random(1729)

    def delta(sample):
        x, y = exchange([a[k] for k in sample]), exchange([b[k] for k in sample])
        return x-y if x is not None and y is not None else None

    values = []
    if groups:
        for _ in range(resamples):
            value = delta([k for _ in groups for k in groups[rng.randrange(len(groups))]])
            if value is not None:
                values.append(value)
    return dict(count=len(keys), clusters=len(groups), mean=delta(keys),
                candidate_exchange=exchange([a[k] for k in keys]), reference_exchange=exchange([b[k] for k in keys]),
                ci95=[percentile(values, .025), percentile(values, .975)] if values else None,
                bootstrap_valid=len(values), bootstrap_unavailable=resamples-len(values),
                unpaired_left=len(a.keys()-b.keys()), unpaired_right=len(b.keys()-a.keys()))


def paired_metric(left, right, name, floor=None):
    a, b = {key(r): r for r in left}, {key(r): r for r in right}
    values = []
    for k in sorted(a.keys() & b.keys()):
        x = a[k]['metrics'].get(name)
        y = floor if floor is not None else b[k]['metrics'].get(name)
        if x is not None and y is not None:
            values.append((k[0], x-y))
    return summarize(values)


def compare(cases, candidate='drills-phase3d', previous='drills-phase3c'):
    seen = set()
    for row in cases:
        identity = (row['family'], row['controller'], *key(row))
        if identity in seen:
            raise ValueError(f'Duplicate case {identity}')
        seen.add(identity)
    good = [r for r in cases if r['status'] == 'complete']
    groups = defaultdict(list)
    for r in good:
        groups[r['family'], r['controller']].append(r)
    summaries = []
    for (family, controller), rows in sorted(groups.items()):
        losses = [casualties(r) for r in rows]
        summaries.append(dict(family=family, controller=controller, runs=len(rows),
            wins=sum(r['metrics']['win_azure'] for r in rows),
            draws=sum(r['metrics']['draw'] for r in rows), losses=sum(r['metrics']['win_ember'] for r in rows),
            attacker_casualties=sum(x[0] for x in losses), defender_casualties=sum(x[1] for x in losses),
            exchange=exchange(rows), metrics={name: summarize([(r['gen_seed'], r['metrics'].get(name)) for r in rows])
                for name in ['win_azure', 'casualty_exchange', 'shots', 'nearest_m', 'under_2m', 'casualty_azure', 'casualty_ember',
                             'closure_120s_m', 'closure_240s_m', 'orders_azure_per_minute', 'hits_per_soldier_minute']}))
    criteria = []

    def add(family, reference, metric, direction, result, targeted=False):
        criteria.append(dict(family=family, reference=reference, metric=metric, direction=direction,
                             targeted=targeted, status=classify(result, direction), **result))

    f1 = groups['F1', candidate]
    aggregate_disclosure = []
    for ref in ('candidate90', 'legacy', previous):
        right = groups['F1', ref]
        add('F1', ref, 'win_azure', 1, paired_metric(f1, right, 'win_azure'), ref != previous)
        add('F1', ref, 'casualty_exchange', 1, paired_metric(f1, right, 'casualty_exchange'), ref != previous)
        aggregate_disclosure.append(dict(reference=ref, **paired_exchange(f1, right)))
        add('F1', ref, 'shots', 1, paired_metric(f1, right, 'shots'))
    for family in ('F1', 'Works', 'Trenches'):
        left, legacy = groups[family, candidate], groups[family, 'legacy']
        add(family, 'legacy', 'under_2m', -1, paired_metric(left, legacy, 'under_2m'))
        add(family, '3 m floor', 'nearest_m', 1, paired_metric(left, left, 'nearest_m', floor=3))
        if family != 'F1':
            for ref in (previous, 'candidate90', 'legacy'):
                for name, direction in DIRECTIONS.items():
                    # Legacy spacing is already listed above.
                    if ref == 'legacy' and name == 'under_2m':
                        continue
                    add(family, ref, name, direction, paired_metric(left, groups[family, ref], name))
    guards = []
    for family in ('F1', 'Works', 'Trenches'):
        cogn = {key(r): r for r in groups[family, 'candidate90']}
        legacy = {key(r): r for r in groups[family, 'legacy']}
        for r in sorted(groups[family, candidate], key=key):
            k, m = key(r), r['metrics']
            guards.append(dict(family=family, gen_seed=k[0], seed=k[1],
                zero_shot=m['shots'] == 0,
                shots_at_least_candidate90=k in cogn and m['shots'] >= cogn[k]['metrics']['shots'],
                nearest_at_least_3m=m['nearest_m'] is not None and m['nearest_m'] >= 3,
                under2_not_above_legacy=k in legacy and m['under_2m'] is not None and m['under_2m'] <= legacy[k]['metrics']['under_2m']))
    targets = [x for x in criteria if x['targeted']]
    authored = [x for x in criteria if x['family'] != 'F1' and x['reference'] == previous]
    spacing = [x for x in criteria if x['reference'] == '3 m floor' or (x['reference'] == 'legacy' and x['metric'] == 'under_2m')]
    outcome_gains = len(targets) == 4 and all(x['status'] == 'improved' for x in targets)
    authored_ok = len(authored) == 14 and all(x['status'] in ('improved', 'inconclusive') for x in authored)
    spacing_ci = all(x['status'] in ('improved', 'inconclusive') for x in spacing)
    passivity = bool(f1) and all(g['shots_at_least_candidate90'] and not g['zero_shot'] for g in guards if g['family'] == 'F1')
    spacing_per_run = bool(guards) and all(g['nearest_at_least_3m'] and g['under2_not_above_legacy'] for g in guards)
    return dict(schema=1, candidate=candidate, previous=previous,
        exchange_definition=__doc__.split('\n\n')[1].strip(),
        bootstrap=dict(resamples=2000, seed=1729, unit='generated-map cluster on F1; battle seed on authored maps'),
        targeted_outcome_gains=outcome_gains, authored_no_significant_regression=authored_ok,
        spacing_ci_no_regression=spacing_ci, spacing_per_run=spacing_per_run,
        passivity_per_run=passivity, zero_shot=sum(g['zero_shot'] for g in guards),
        slice_statistical_exit=outcome_gains and authored_ok and spacing_ci and passivity and spacing_per_run,
        criteria=criteria, aggregate_exchange_disclosure=aggregate_disclosure, summaries=summaries, guards=guards,
        failed_runs=[r for r in cases if r['status'] != 'complete'])


def markdown(data):
    lines = ['# Outcome-first paired scoreboard', '',
             'Differences are candidate minus reference. 95% paired percentile intervals use 2000 cluster resamples. Crossing zero is inconclusive, not equivalence. Primary exchange is the existing per-run ratio of defender/attacker casualty fractions; zero-attacker-loss ratios are unavailable and paired counts disclose omissions. Aggregate raw-loss ratios are supplementary.', '',
             '| Set | Reference | Criterion | Paired n | Delta | CI95 | Finding |',
             '|---|---|---|---:|---:|---|---|']
    fmt = lambda v: 'NA' if v is None else f'{v:.4f}'
    for r in data['criteria']:
        ci = 'NA' if r['ci95'] is None else ' / '.join(fmt(x) for x in r['ci95'])
        lines.append(f"| {r['family']} | {r['reference']} | {r['metric']} | {r['count']} | {fmt(r['mean'])} | {ci} | {r['status']} |")
    return '\n'.join(lines)+'\n'


def reviewed_exit(data):
    """Phase 3d review reading, preserving the prior literal scoreboard fields."""
    criteria = data['criteria']
    acceptable = lambda row: row['status'] in ('improved', 'inconclusive')
    references = {}
    for ref in ('candidate90', 'legacy'):
        rows = [r for r in criteria if r['family']=='F1' and r['reference']==ref and r['metric'] in ('win_azure', 'casualty_exchange')]
        references[ref] = len(rows)==2 and all(acceptable(r) for r in rows) and any(r['status']=='improved' for r in rows)
    shot = [r for r in criteria if r['family']=='F1' and r['reference']=='candidate90' and r['metric']=='shots']
    spacing = [r for r in criteria if (r['reference']=='3 m floor' and r['family']!='Trenches') or (r['reference']=='legacy' and r['metric']=='under_2m')]
    authored = [r for r in criteria if r['family']!='F1' and r['reference']==data['previous']]
    outcome = all(references.values())
    passivity = len(shot)==1 and acceptable(shot[0]) and data['zero_shot']==0
    spaced = len(spacing)==5 and all(acceptable(r) for r in spacing)
    stable = len(authored)==14 and all(acceptable(r) for r in authored)
    return dict(reading='plans/014-phase3d-fable-review.md', outcome_by_reference=references,
                targeted_outcome_gains=outcome, passivity_paired_mean=passivity,
                spacing_ci_no_regression=spaced, authored_no_significant_regression=stable,
                deferred=['Trenches nearest-squadmate 3 m floor; targeted in Phase4'],
                statistical_exit=outcome and passivity and spaced and stable)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('input');parser.add_argument('--out', required=True);parser.add_argument('--markdown')
    args = parser.parse_args();data = compare(json.loads(Path(args.input).read_text()))
    Path(args.out).write_text(json.dumps(data, indent=2, allow_nan=False)+'\n')
    if args.markdown:Path(args.markdown).write_text(markdown(data))


if __name__ == '__main__':
    main()
