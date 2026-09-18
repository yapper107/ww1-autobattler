"""Plan 017 trace parity: three drills cases traced vs --no-trace on one binary, plus a repeat of the
first case to show determinism. Usage: python3 .local/plan017/trace_checks.py <phase-name> <binary>"""
import json,subprocess,sys
from pathlib import Path
phase,binary=sys.argv[1],sys.argv[2];root=Path('.local/plan017',phase,'trace-parity');results=[]
def battle(dest,flags,traced):
 cmd=[binary,'--drills','--seed','107','--seconds','360',*flags,'--out',str(dest)]+([] if traced else ['--no-trace'])
 p=subprocess.run(cmd,capture_output=True,text=True);assert not p.returncode,p.stderr
 run=dest/json.loads((dest/'latest.json').read_text())['run'];return dict(command=cmd,manifest=str(run/'manifest.json'),digest=json.loads((run/'manifest.json').read_text())['gameplay_digest'])
for name,flags in [('works',['--terrain','0']),('trenches',['--terrain','1']),('F1',['--generated','F1','--gen-seed','1'])]:
 on=battle(root/name/'on',flags,True);off=battle(root/name/'off',flags,False)
 row=dict(case=name,on=on,off=off,match=on['digest']==off['digest']);results.append(row);print(name,row['match'],on['digest'],flush=True)
again=battle(root/'works'/'repeat',['--terrain','0'],False);results.append(dict(case='works-repeat',digest=again['digest'],match=again['digest']==results[0]['off']['digest']));print('works repeat',results[-1]['match'],flush=True)
(root/'trace-parity.json').write_text(json.dumps(results,indent=2)+'\n')
assert all(r['match'] for r in results)
