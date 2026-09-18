#!/usr/bin/env python3
"""Recreate a recorded configuration with optional focused diagnostic tracing."""
import argparse,json,subprocess,sys
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',default='.local/battles');p.add_argument('--soldier',type=int);p.add_argument('--squad',type=int);p.add_argument('--from',dest='start',type=float,default=0);p.add_argument('--to',type=float,default=600);a=p.parse_args()
root=Path(a.run)
if root.name=='latest.json':root=root.parent/json.loads(root.read_text())['run']
if not (root/'manifest.json').exists():root=root/json.loads((root/'latest.json').read_text())['run']
m=json.loads((root/'manifest.json').read_text())
version=subprocess.check_output([a.binary,'--version'],text=True).strip()
if version!=m['build']:print('Build differs from the recorded run: this rerun is a comparison, not proof of exact reproduction.',flush=True)
output=a.out
if sys.platform=='linux' and Path(a.binary).suffix.lower()=='.exe':
    output=subprocess.check_output(['wslpath','-w',str(Path(a.out).resolve())],text=True).strip()
cmd=[a.binary,'--seed',str(m['seed']),'--seconds',str(m['duration_limit']),'--doctrine',str(m['doctrine']),'--approach',str(m['approach']),'--out',output,'--detail','--from',str(a.start),'--to',str(a.to)]
cmd+=['--legacy-ai']
cmd+=['--terrain',str(m.get('terrain',0))]
if m.get('battlefield_file'):
    map_path=str((root/m['battlefield_file']).resolve())
    if sys.platform=='linux' and Path(a.binary).suffix.lower()=='.exe':
        map_path=subprocess.check_output(['wslpath','-w',map_path],text=True).strip()
    cmd+=['--map',map_path,'--map-digest',str(m['battlefield_digest'])]

cmd+=['--ember-doctrine',str(m.get('ember_doctrine',0))]
if m.get('roster_seed'):cmd+=['--roster-seed',str(m['roster_seed'])]
if m.get('foundations_policy'):cmd+=['--foundations','--estimate-bias',str(m.get('estimate_bias',0))]
if m.get('cognition_policy') or m.get('drills_policy'):
    cmd+=['--drills' if m.get('drills_policy') else '--cognition','--report-delay',str(m.get('report_delay',.75)),'--judgment',str(m.get('judgment',.7)),'--risk',str(m.get('risk',.5)),'--adaptability',str(m.get('adaptability',.7))]
    if m.get('full_vision'):cmd+=['--full-vision']
if m.get('leader_effects'):
    cmd+=['--leader-effects']
    for side,profile in zip(('azure','ember'),m['platoon_profiles']):cmd+=['--'+side+'-leader',','.join(str(v) for v in profile)]
if m.get('equal_troops'):cmd+=['--equal-troops']
if m.get('recovery_policy'):cmd+=['--recovery']
if m.get('scenario_family', 'none') != 'none':cmd+=['--generated',m['scenario_family'],'--gen-seed',str(m['gen_seed'])]
if m.get('encounter'):cmd+=['--encounter',str(m['encounter'])]
if not m['support_weapon']:cmd+=['--no-mg']
if a.soldier is not None:cmd+=['--soldier',str(a.soldier)]
if a.squad is not None:cmd+=['--squad',str(a.squad)]
raise SystemExit(subprocess.call(cmd))
