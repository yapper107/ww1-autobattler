#!/usr/bin/env python3
"""Three distinct controlled layouts x three seeds, with strict observer-only scoring."""
import argparse, json, subprocess
from pathlib import Path
from evaluate_routes import evaluate_routes
p=argparse.ArgumentParser(description=__doc__);p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',required=True);p.add_argument('--check',action='store_true');p.add_argument('--recovery',action='store_true',help='Use the recovery controller; require all layout-5 cases before proceeding');p.add_argument('--cognition',action='store_true');a=p.parse_args()
if a.cognition and a.recovery:p.error('Choose one controller')
root=Path(a.out);root.mkdir(parents=True,exist_ok=True);results=[]
for layout in (5,6,7):
    for seed in (107,108,109):
        subprocess.run([a.binary,'--seed',str(seed),'--seconds','360','--encounter',str(layout),'--evaluate','--out',str(root)]+(['--recovery'] if a.recovery else ['--cognition'] if a.cognition else ['--legacy-ai']),check=True)
        results.append(evaluate_routes(root/'latest.json'));(root/'matrix.json').write_text(json.dumps(results,indent=2)+'\n')
    if a.recovery and layout==5 and not all(r['passed'] for r in results):
        print('Layout-5 prerequisite failed; layouts 6 and 7 were not run.')
        break
passed=sum(r['passed'] for r in results);lines=['# Controlled flank matrix','',f'Sustained second angle plus completed route: {passed}/{len(results)} executed; target: 8/9.','', '| Layout | Seed | Routes completed | Second angle | Defender eliminated |','|---|---|---|---|---|']
for r in results:lines.append(f"| {r['encounter']} | {r['seed']} | {r['completed']} | {r['passed']} | {r['defenders_eliminated']} |")
lines+=['',results[0]['method']];(root/'matrix.md').write_text('\n'.join(lines)+'\n')
if a.check and passed<8:raise SystemExit(1)
