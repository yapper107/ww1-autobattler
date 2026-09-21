"""Plan 017 re-baseline: archive the 40 authored reference manifests, regenerate them with the
current lab binary, then verify 40/40 with .local/phase4/parity.py semantics.
Usage: python3 .local/plan017/rebaseline.py <phase-name> <binary>"""
import json,shutil,subprocess,sys
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor,as_completed
phase,binary=sys.argv[1],sys.argv[2]
archive=Path('.local/baselines-pre018b-lean',phase);archive.mkdir(parents=True,exist_ok=True)
for controller in ('legacy','candidate90'):
 src=Path('.local/baselines',controller)
 if src.exists():
  dest=archive/controller
  if dest.exists():raise SystemExit(f'{dest} already exists; refusing to overwrite an archive')
  shutil.move(str(src),str(dest))
jobs=[]
for controller in ('candidate90','legacy'):
 for terrain,name in enumerate(('works','trenches')):
  for seed in range(100,110):jobs.append((controller,terrain,name,seed))
def run(job):
 controller,terrain,name,seed=job
 out=Path('.local/baselines',controller,name);out.mkdir(parents=True,exist_ok=True)
 cmd=[binary,'--cognition' if controller=='candidate90' else '--legacy-ai','--terrain',str(terrain),'--seed',str(seed),'--lean','--seconds','360','--no-trace','--evaluate','--out',str(out)]
 p=subprocess.run(cmd,capture_output=True,text=True)
 if p.returncode:raise RuntimeError(p.stderr)
 return job
with ThreadPoolExecutor(max_workers=10) as pool:
 for f in as_completed([pool.submit(run,j) for j in jobs]):print('done',*f.result(),flush=True)
# Workers share an output directory, so latest.json is unreliable; read every manifest instead.
rows=[]
for controller in ('candidate90','legacy'):
 for name in ('works','trenches'):
  for p in Path('.local/baselines',controller,name).glob('*/manifest.json'):
   m=json.loads(p.read_text());rows.append(dict(controller=controller,map=name,seed=m['seed'],manifest=str(p),digest=m['gameplay_digest'],shots=m['shots'],duration=m['duration'],winner=m['winner'],build=m['build']))
   print(controller,name,m['seed'],m['gameplay_digest'],'shots',m['shots'],'dur',m['duration'],'winner',m['winner'],flush=True)
assert len(rows)==40,len(rows)
rows.sort(key=lambda r:(r['controller'],r['map'],r['seed']))
Path('.local/plan017',phase).mkdir(parents=True,exist_ok=True)
(Path('.local/plan017',phase)/'baselines.json').write_text(json.dumps(rows,indent=1)+'\n')
old=[]
for p in archive.glob('*/*/*/manifest.json'):
 m=json.loads(p.read_text());old.append(dict(controller=p.parts[-4],map=p.parts[-3],seed=m['seed'],digest=m['gameplay_digest'],shots=m['shots'],duration=m['duration'],winner=m['winner']))
old.sort(key=lambda r:(r['controller'],r['map'],r['seed']))
(Path('.local/plan017',phase)/'baselines-before.json').write_text(json.dumps(old,indent=1)+'\n')
print('regenerated',len(rows),'archived',len(old))
