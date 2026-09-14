#!/usr/bin/env python3
"""Matched ten-seed comparison; keep existing definitions and denominators."""
import argparse,json
from pathlib import Path
from analyze_battle import analyze,load_run
from investigate_engagement import observer_holds
p=argparse.ArgumentParser(description=__doc__);p.add_argument('baseline');p.add_argument('candidate');p.add_argument('--out',required=True);a=p.parse_args()
roots=[Path(a.baseline),Path(a.candidate)];data=[{r['seed']:r for r in json.loads((root/'evaluation.json').read_text()) if r['encounter']==0} for root in roots];rows=[]
if data[0].keys()!=data[1].keys():raise SystemExit('Seed sets differ; run the same fixed seeds before claiming a matched comparison.')
for seed in sorted(data[0].keys()&data[1].keys()):
    result={'seed':seed}
    for label,root,values in zip(('before','after'),roots,data):
        evaluation=values[seed];_,_,trace=load_run(root/evaluation['run']);analysis=analyze(trace);metrics=analysis['metrics'];seconds=evaluation['active_seconds']
        result[label]=dict(metrics=metrics,observer_holds=observer_holds(root/evaluation['run']),active_seconds=seconds,avoidables_per_1000=1000*(metrics.get('unnecessary_cover_changes',0)+metrics.get('order_reversals',0))/max(1,seconds),unexplained_inactivity_per_1000=1000*metrics.get('unexplained_idle_seconds',0)/max(1,seconds),sampled_hypotheses=analysis['findings'][:3])
    rows.append(result)
Path(a.out).write_text(json.dumps(rows,indent=2)+'\n')
for r in rows:print(f"{r['seed']}: avoidables / 1000 active seconds {r['before']['avoidables_per_1000']:.2f} -> {r['after']['avoidables_per_1000']:.2f}")
