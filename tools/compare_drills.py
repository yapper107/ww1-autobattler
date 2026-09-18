#!/usr/bin/env python3
"""Directional paired intervals for drill slices; never a conjunction of per-run gates."""
import argparse
import json
from pathlib import Path
from report_family import report

DIRECTIONS = dict(shots=1, casualties_total=1, nearest_m=1, under_2m=-1,
                  closure_120s_m=1, closure_240s_m=1, orders_azure_per_minute=-1)
TARGETED = ('shots', 'casualties_total', 'closure_120s_m', 'closure_240s_m')


def classify(summary, direction):
    ci = summary.get('ci95')
    if ci is None:
        return 'unavailable'
    lo, hi = sorted(direction*x for x in ci)
    if hi < 0:
        return 'regression'
    if lo > 0:
        return 'improved'
    return 'inconclusive'


def compare(cases, candidate='drills-phase3', previous='drills-phase2d', targeted_reference='candidate90'):
    data = report(cases)
    criteria = []
    for pair in data['paired']:
        if pair['controller'] != candidate:
            continue
        for metric, direction in DIRECTIONS.items():
            result = pair['metrics'].get(metric, {})
            criteria.append(dict(family=pair['family'], reference=pair['reference'], metric=metric,
                                 direction=direction, targeted=pair['family'] in ('Works', 'Trenches') and metric in TARGETED,
                                 status=classify(result, direction), **result))
    prior = [r for r in criteria if r['reference'] == previous]
    no_regression = bool(prior) and all(r['status'] not in ('regression', 'unavailable') for r in prior)
    targets = [r for r in criteria if r['reference']==targeted_reference and r['targeted']]
    target_gains = bool(targets) and all(r['status']=='improved' for r in targets)
    prior_targets=[r for r in prior if r['targeted']]
    return dict(schema=2, candidate=candidate, previous=previous,
                targeted_reference=targeted_reference,
                no_regression_vs_previous=no_regression,
                targeted_improvement=target_gains,
                targeted_improvement_vs_previous=bool(prior_targets) and all(r['status']=='improved' for r in prior_targets),
                slice_statistical_exit=no_regression and target_gains,
                historical_no_significant_regression=all(r['status'] not in ('regression', 'unavailable') for r in criteria if r['reference'] != previous),
                criteria=criteria, distributions=data)


def markdown(data):
    lines=['# Paired drill criteria', '',
           '95% percentile paired intervals; F1 resamples generated-map clusters and authored maps resample battle seeds. Missing horizons are excluded pairwise and counts are disclosed. Inconclusive is not demonstrated equivalence.', '',
           '| Set | Reference | Criterion | Paired n | Mean delta | CI95 | Finding |',
           '|---|---|---|---:|---:|---|---|']
    for row in data['criteria']:
        ci=row.get('ci95');interval='NA' if ci is None else f'{ci[0]:.4f} / {ci[1]:.4f}'
        mean=row.get('mean');value='NA' if mean is None else f'{mean:.4f}'
        lines.append(f"| {row['family']} | {row['reference']} | {row['metric']} | {row.get('count',0)} | {value} | {interval} | {row['status']} |")
    return '\n'.join(lines)+'\n'


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('input');p.add_argument('--out',required=True);p.add_argument('--markdown');a=p.parse_args()
    cases=json.loads(Path(a.input).read_text());data=compare(cases);Path(a.out).write_text(json.dumps(data,indent=2,allow_nan=False)+'\n')
    if a.markdown:Path(a.markdown).write_text(markdown(data))
    else:print(markdown(data),end='')
if __name__=='__main__':main()
