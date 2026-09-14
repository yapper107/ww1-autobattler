#!/usr/bin/env python3
"""Generate the same full battles and optional fixed-defender fixtures for each named stage."""
import argparse,json,subprocess
from pathlib import Path
from evaluate_ai import evaluate
p=argparse.ArgumentParser(description=__doc__);p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',required=True);p.add_argument('--seeds',nargs='+',type=int,default=[100,103,107,108]);p.add_argument('--defender',action='store_true');p.add_argument('--ember-doctrine',type=int,default=0);a=p.parse_args()
root=Path(a.out);root.mkdir(parents=True,exist_ok=True);results=[]
for encounter,seeds in [(0,a.seeds)]+([(4,[107,108,109])] if a.defender else []):
    for seed in seeds:
        cmd=[a.binary,'--seed',str(seed),'--seconds','360','--evaluate','--out',str(root),'--encounter',str(encounter),'--ember-doctrine',str(a.ember_doctrine)]
        subprocess.run(cmd,check=True)
        result=evaluate(root/'latest.json');result['run']=json.loads((root/'latest.json').read_text())['run'];results.append(result)
        (root/'evaluation.json').write_text(json.dumps(results,indent=2)+'\n')
lines=['# AI evaluation','', '| Seed | Encounter | Hold without solution | Maneuver time | Useful completions | Deferrals | Survivors Azure/Ember |','|---|---|---|---|---|---|---|']
for r in results:lines.append(f"| {r['seed']} | {r['encounter']} | {r['hold_no_solution_share']:.1%} | {r['maneuver_task_share']:.1%} | {len(r['completed_useful_maneuvers'])} | {sum(r['deferrals'].values())} | {r['survivors']} |")
lines+=['',results[0]['method']];(root/'evaluation.md').write_text('\n'.join(lines)+'\n')
