#!/usr/bin/env python3
"""Offline plan015 guards; no observer metric enters policy.

Paired differences use 2000 reproducible bootstrap resamples of map seeds
(authored) or generated-map clusters (F1), following report_family.
"""
import statistics
from report_family import summarize


def battle_failures(row, authored=True):
    if row['status'] != 'complete':
        return ['run failed']
    failed = ['zero-shot battle'] if row['metrics']['shots'] == 0 else []
    if authored and min(len(s) for s in row['firing_squads']) < 3:
        failed.append('fewer than three firing squads on a side')
    return failed


def set_guards(cases, references, authored=True, trenches=False, expected=10):
    def key(r): return (r.get('gen_seed', 0), r['seed'])
    left, right = {key(r): r for r in cases}, {key(r): r for r in references}
    if len(left) != len(cases) or len(right) != len(references):
        raise ValueError('Duplicate paired keys')
    if len(cases) != expected or set(left) != set(right):
        raise ValueError('Incomplete or mismatched paired set')
    if any(r['status'] != 'complete' for r in cases + references):
        raise ValueError('Failed run in paired set')
    pairs = [(left[k], right[k]) for k in sorted(left)]
    checks, information = [], []

    def paired(name, getter, eligible=lambda a, b: True, informational=False):
        samples = [(a['seed'] if authored else a['gen_seed'], getter(a)-getter(b))
                   for a, b in pairs if eligible(a, b)]
        result = summarize(samples)
        # Positive differences are worse. A CI crossing zero is not a failure.
        (information if informational else checks).append(dict(guard=name, paired_delta=result,
                           passed=None if informational else not result['ci95'] or result['ci95'][0] <= 0,
                           eligible_pairs=len(samples)))

    if authored:
        paired('time_to_decision', lambda r: r['metrics']['time_to_decision'])
        paired('stronger_remaining_at_limit',
               lambda r: max(n/i for n, i in zip(r['survivors'], r['initial_actives'])),
               lambda a, b: min(a['metrics']['time_to_decision'], b['metrics']['time_to_decision']) >= 359.9, informational=True)
    # Plan 017: battles that resolve before 360 s drop out of this informational
    # interval; report the eligible-pair count alongside it.
    for side in ('azure', 'ember'):
        paired('orders_'+side+'_per_minute', lambda r, s=side: r['metrics']['orders_'+s+'_per_minute'])
    # C4: disclose the paired spacing interval on every set. Only Trenches
    # changes its pass criterion to the interval; other sets keep their means.
    paired('under_2m', lambda r: r['metrics']['under_2m'])
    delta = statistics.mean(a['metrics']['under_2m']-b['metrics']['under_2m'] for a, b in pairs)
    checks[-1]['mean_delta'] = delta
    if not trenches:
        checks[-1]['passed'] = delta <= 0
    if trenches:
        median_mean = statistics.mean(a['metrics']['nearest_m'] for a, _ in pairs)
        information.append(dict(guard='trench_nearest_m', mean_run_median=median_mean,
                                target_met=median_mean >= 3, passed=None))
    return dict(passed=all(c['passed'] for c in checks), checks=checks, information=information)
