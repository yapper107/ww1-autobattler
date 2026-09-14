#!/usr/bin/env python3
"""Recreate a recorded configuration with optional focused diagnostic tracing."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',default='.local/battles');p.add_argument('--soldier',type=int);p.add_argument('--squad',type=int);p.add_argument('--from',dest='start',type=float,default=0);p.add_argument('--to',type=float,default=600);a=p.parse_args()
root=Path(a.run)
if root.name=='latest.json':root=root.parent/json.loads(root.read_text())['run']
if not (root/'manifest.json').exists():root=root/json.loads((root/'latest.json').read_text())['run']
m=json.loads((root/'manifest.json').read_text())
version=subprocess.check_output([a.binary,'--version'],text=True).strip()
if version!=m['build']:print('Build differs from the recorded run: this rerun is a comparison, not proof of exact reproduction.',flush=True)
cmd=[a.binary,'--seed',str(m['seed']),'--seconds',str(m['duration_limit']),'--doctrine',str(m['doctrine']),'--approach',str(m['approach']),'--out',a.out,'--detail','--from',str(a.start),'--to',str(a.to)]
cmd+=['--terrain',str(m.get('terrain',0))]
cmd+=['--ember-doctrine',str(m.get('ember_doctrine',0))]
if m.get('recovery_policy'):cmd+=['--recovery']
if m.get('encounter'):cmd+=['--encounter',str(m['encounter'])]
if not m['support_weapon']:cmd+=['--no-mg']
if a.soldier is not None:cmd+=['--soldier',str(a.soldier)]
if a.squad is not None:cmd+=['--squad',str(a.squad)]
raise SystemExit(subprocess.call(cmd))
