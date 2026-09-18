#!/usr/bin/env python3
"""Per-family distributions and matched deltas, with 2000 reproducible cluster bootstraps."""
import argparse
from collections import defaultdict
import json
import math
from pathlib import Path
import random
import statistics


def percentile(values, p):
    ordered=sorted(values);at=(len(ordered)-1)*p;lo=math.floor(at);hi=math.ceil(at)
    return ordered[lo]+(ordered[hi]-ordered[lo])*(at-lo)


def summarize(samples, resamples=2000):
    # Keep the three battle seeds of a generated map together: geometry, not
    # each repeated battle, is the independent bootstrap sampling unit.
    values=[v for _,v in samples if v is not None and math.isfinite(v)]
    clusters=defaultdict(list)
    for key,value in samples:
        if value is not None and math.isfinite(value):clusters[key].append(value)
    if not values:return dict(count=0,clusters=0,mean=None,median=None,ci95=None)
    groups=[clusters[k] for k in sorted(clusters)];rng=random.Random(1729);means=[]
    for _ in range(resamples):
        draw=[v for _ in groups for v in groups[rng.randrange(len(groups))]]
        means.append(statistics.mean(draw))
    return dict(count=len(values),clusters=len(groups),mean=statistics.mean(values),median=statistics.median(values),ci95=[percentile(means,.025),percentile(means,.975)])


def report(cases, expected=None):
    expected=len(cases) if expected is None else expected
    if expected<len(cases):raise ValueError("More recorded cases than expected")
    seen=set();good=[]
    for row in cases:
        key=(row['controller'],row['family'],row['gen_seed'],row['seed'])
        if key in seen:raise ValueError(f'Duplicate case key: {key}')
        seen.add(key)
        if row['status']=='complete':good.append(row)
    families=sorted({r['family'] for r in cases});controllers=sorted({r['controller'] for r in cases})
    summaries=[];paired=[]
    for family in families:
        for controller in controllers:
            group=[r for r in good if r['family']==family and r['controller']==controller]
            names=sorted({k for r in group for k in r['metrics']})
            metrics={name:summarize([((r['family'],r['gen_seed']),r['metrics'].get(name)) for r in group]) for name in names}
            summaries.append(dict(family=family,controller=controller,runs=len(group),metrics=metrics))
        for controller in controllers:
            left={(r['gen_seed'],r['seed']):r for r in good if r['family']==family and r['controller']==controller}
            for reference in controllers:
                if reference==controller:continue
                right={(r['gen_seed'],r['seed']):r for r in good if r['family']==family and r['controller']==reference}
                keys=sorted(left.keys()&right.keys());names=sorted({n for k in keys for n in left[k]['metrics']})
                metrics={}
                for name in names:
                    samples=[]
                    for key in keys:
                        a,b=left[key]['metrics'].get(name),right[key]['metrics'].get(name)
                        if a is not None and b is not None:samples.append(((family,key[0]),a-b))
                    metrics[name]=summarize(samples)
                paired.append(dict(family=family,controller=controller,reference=reference,paired_runs=len(keys),unpaired_left=len(left.keys()-right.keys()),unpaired_right=len(right.keys()-left.keys()),metrics=metrics))
    return dict(schema=1,expected=expected,pending=expected-len(cases),bootstrap=dict(resamples=2000,rng_seed=1729,unit='(family, gen_seed) cluster; retain all battle seeds',interval='percentile CI for equal-run mean'),summaries=summaries,paired=paired,failed=[r for r in cases if r['status']!='complete'],cases=cases)


def markdown(data):
    lines=['# Family scoreboard','', '95% percentile CIs for means; 2000 resamples of generated-map clusters. Null means no eligible evidence.','', '| Family | Controller | Metric | n | Mean | Median | Mean CI95 |','|---|---|---|---:|---:|---:|---|']
    fmt=lambda x:'—' if x is None else f'{x:.4f}'
    for row in data['summaries']:
        for name,m in row['metrics'].items():
            ci='—' if m['ci95'] is None else ' / '.join(fmt(v) for v in m['ci95'])
            lines.append(f"| {row['family']} | {row['controller']} | {name} | {m['count']} | {fmt(m['mean'])} | {fmt(m['median'])} | {ci} |")
    lines+=['','| Family | Controller minus reference | Metric | paired n | Mean delta | CI95 |','|---|---|---|---:|---:|---|']
    for row in data['paired']:
        for name,m in row['metrics'].items():
            ci='—' if m['ci95'] is None else ' / '.join(fmt(v) for v in m['ci95'])
            lines.append(f"| {row['family']} | {row['controller']} − {row['reference']} | {name} | {m['count']} | {fmt(m['mean'])} | {ci} |")
    lines+=['',f"Pending runs: {data['pending']}. Failed runs: {len(data['failed'])}. All per-run records and unavailable reasons are retained in the JSON report."]
    return '\n'.join(lines)+'\n'


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('inputs',nargs='+');p.add_argument('--out',required=True);p.add_argument('--markdown');a=p.parse_args()
    cases=[];durations=set();expected=0
    for value in a.inputs:
        data=json.loads(Path(value).read_text());cases.extend(data['cases']);durations.add(data['config']['seconds']);expected+=data['expected']
    if len(durations)!=1:raise ValueError('Cannot pair different battle duration limits')
    data=report(cases,expected);Path(a.out).write_text(json.dumps(data,indent=2,allow_nan=False)+'\n');text=markdown(data)
    if a.markdown:Path(a.markdown).write_text(text)
    else:print(text,end='')
    return int(bool(data['failed']) or data['pending']>0)
if __name__=='__main__':raise SystemExit(main())
