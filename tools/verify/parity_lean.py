# Lean reference parity: 0.5 GB a battle instead of 3 GB, ten at a time. References must be lean too (rebaseline_lean.py).
import json,subprocess,sys
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor,as_completed
out=Path(sys.argv[1]);binary=sys.argv[2];out.mkdir(parents=True,exist_ok=True)
refs=[]
for controller in ('candidate90','legacy'):
 for terrain,name in enumerate(('works','trenches')):
  for p in Path('.local/baselines',controller,name).glob('*/manifest.json'):
   m=json.loads(p.read_text())
   if 100<=m['seed']<=109:refs.append((controller,terrain,name,p,m))
assert len(refs)==40,len(refs)
def check(entry):
 controller,terrain,name,reference,old=entry
 dest=out/controller/name/str(old['seed'])
 cmd=[binary,'--cognition' if controller=='candidate90' else '--legacy-ai','--terrain',str(terrain),'--seed',str(old['seed']),'--lean','--seconds','360','--no-trace','--evaluate','--out',str(dest)]
 p=subprocess.run(cmd,capture_output=True,text=True)
 if p.returncode:raise RuntimeError(p.stderr)
 run=dest/json.loads((dest/'latest.json').read_text())['run'];new=json.loads((run/'manifest.json').read_text())
 return dict(controller=controller,map=name,seed=old['seed'],reference=str(reference),manifest=str(run/'manifest.json'),expected=old['gameplay_digest'],actual=new['gameplay_digest'],match=old['gameplay_digest']==new['gameplay_digest'],shots=new['shots'],command=cmd)
results=[]
with ThreadPoolExecutor(max_workers=10) as pool:
 for job in as_completed([pool.submit(check,r) for r in refs]):
  r=job.result();results.append(r);(out/'parity.json').write_text(json.dumps(results,indent=2)+'\n');print(r['controller'],r['map'],r['seed'],r['match'],flush=True)
assert all(r['match'] for r in results)
