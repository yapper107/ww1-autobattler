#!/usr/bin/env python3
"""One matched, role-swapped authored-map leader comparison; incremental checkpoints."""
import argparse
from concurrent.futures import ProcessPoolExecutor, as_completed
import json
import multiprocessing
from pathlib import Path
import subprocess
import sys
from run_family import atomic_json, memory_jobs, seed_list
from family_metrics import evaluate
import leader_metrics
import after_action
from report_family import summarize

GOOD=(.9,.5,.9,.9)
BAD=(.15,.9,.2,.2)

def run_case(binary,out,draw,seed,good_side,seconds):
    dest=Path(out)/str(draw)/str(seed)/('good-azure' if good_side==0 else 'good-ember')
    profiles=[GOOD,BAD] if good_side==0 else [BAD,GOOD]
    cmd=[binary,'--drills','--terrain',str(draw),'--seed',str(seed),'--seconds',str(seconds),'--azure-leader',','.join(map(str,profiles[0])),'--ember-leader',','.join(map(str,profiles[1])),'--evaluate','--out',str(dest)]
    p=subprocess.run(cmd,capture_output=True,text=True)
    if p.returncode:return dict(terrain=draw,seed=seed,good_side=good_side,status='failed',command=cmd,error=p.stderr)
    run=dest/json.loads((dest/'latest.json').read_text())['run'];manifest=json.loads((run/'manifest.json').read_text())
    result=dict(terrain=draw,seed=seed,good_side=good_side,status='complete',command=cmd,run=str(run),winner=manifest['winner'],**evaluate(run))
    assert result['initial_actives']==[32,32], 'Authored comparison requires full equal platoons'
    result['leader_metrics']=leader_metrics.evaluate(run)
    assert all(x['profile_decisions']>0 for x in result['leader_metrics']['sides']), 'Both commanders must exercise the leader dials'
    report=after_action.build_report(run);aar=dest/'after-action.md';aar.write_text(after_action.render(report));aar.with_suffix('.json').write_text(json.dumps(report,indent=2)+'\n');result['after_action']=str(aar)
    return result

def paired_summary(cases):
    groups={}
    for c in cases:
        groups.setdefault((c.get('terrain', c.get('gen_seed')),c['seed']),[]).append(c)
    pairs=[]
    for (g,s),rows in sorted(groups.items()):
        if len(rows)!=2 or any(r['status']!='complete' for r in rows):continue
        assert {r['good_side'] for r in rows}=={0,1}
        assert rows[0]['scenario_digest']==rows[1]['scenario_digest']
        assert rows[0]['initial_actives']==rows[1]['initial_actives']
        good=sum(r['winner']==r['good_side'] for r in rows);bad=sum(r['winner']==1-r['good_side'] for r in rows)
        pairs.append(dict(terrain=g,seed=s,good_wins=good,bad_wins=bad,score=good-bad,runs=[r['run'] for r in sorted(rows,key=lambda x:x['good_side'])]))
    return pairs

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--binary',required=True);p.add_argument('--out',required=True);p.add_argument('--terrains',type=seed_list,default=[0,1]);p.add_argument('--seeds',type=seed_list,default=seed_list('100-109,200-209'));p.add_argument('--jobs',type=int,default=2);p.add_argument('--seconds',type=float,default=360);a=p.parse_args()
    root=Path(a.out).resolve();root.mkdir(parents=True,exist_ok=True);path=root/'pairs.json';binary=str(Path(a.binary).resolve());build=subprocess.check_output([binary,'--version'],text=True).strip()
    assert not path.exists(),'One measured paired set only: refuse to overwrite/repeat'
    report=dict(build=build,good_profile=GOOD,bad_profile=BAD,expected=2*len(a.terrains)*len(a.seeds),cases=[],pairs=[],jobs=memory_jobs(a.jobs))
    atomic_json(path,report)
    # Bound the in-flight pool. A process failure or zero-shot battle stops further dispatch.
    keys=iter((g,s,side) for g in a.terrains for s in a.seeds for side in (0,1));failed=None
    from concurrent.futures import wait,FIRST_COMPLETED
    with ProcessPoolExecutor(max_workers=report['jobs'],mp_context=multiprocessing.get_context('spawn')) as pool:
        active={}
        def fill():
            while len(active)<report['jobs'] and not failed:
                key=next(keys,None)
                if key is None:break
                active[pool.submit(run_case,binary,str(root),*key,a.seconds)]=key
        fill()
        while active:
            ready,_=wait(active,return_when=FIRST_COMPLETED)
            for future in ready:
                key=active.pop(future)
                try:row=future.result()
                except Exception as exc:row=dict(terrain=key[0],seed=key[1],good_side=key[2],status='failed',error=str(exc))
                report['cases'].append(row)
                if row['status']!='complete' or row['metrics']['shots']==0:failed='process/zero-shot guard'
                report['failed_guard']=failed;report['pairs']=paired_summary(report['cases']);atomic_json(path,report)
                print(key,row['status'],len(report['cases']),flush=True)
            fill()
    report['good_battle_wins']=sum(r.get('winner')==r['good_side'] for r in report['cases'] if r['status']=='complete')
    report['good_pair_wins']=sum(r['score']>0 for r in report['pairs'])
    report['bad_battle_wins']=sum(r.get('winner')==1-r['good_side'] for r in report['cases'] if r['status']=='complete')
    report['bad_pair_wins']=sum(r['score']<0 for r in report['pairs'])
    report['paired_score']=summarize([((r['terrain'],r['seed']),r['score']) for r in report['pairs']])
    report['bootstrap']='2000 resamples, RNG 1729; matched map/seed role-swap pair is the sampling unit; mean good minus bad wins per pair'
    report['passed']=not failed and len(report['cases'])==report['expected'] and report['good_battle_wins']>report['expected']/2 and report['good_pair_wins']>report['bad_pair_wins']
    atomic_json(path,report);print(json.dumps({k:v for k,v in report.items() if k not in ('cases','pairs')},indent=2));return 0 if report['passed'] else 2
if __name__=='__main__':raise SystemExit(main())
