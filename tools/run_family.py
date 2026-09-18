#!/usr/bin/env python3
"""Run matched generated draws with a memory-bounded process pool and atomic checkpoints."""
import argparse
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED
import hashlib
import json
import multiprocessing
import os
from pathlib import Path
import subprocess
import sys
import time
from family_metrics import evaluate


def seed_list(value):
    result=[]
    for part in value.split(','):
        if '-' in part:
            a,b=map(int,part.split('-'));result.extend(range(a,b+1))
        else:result.append(int(part))
    if not result or any(n<0 or n>2**32-1 for n in result) or len(set(result))!=len(result):
        raise argparse.ArgumentTypeError('Expected distinct uint32 seeds or ascending inclusive ranges')
    return result


def validation_draws(build, family, salt, count=20):
    fingerprint=build.partition("-")[0]  # Same source draws on Linux and Windows.
    draws=[];seen=set();index=0
    while len(draws)<count:
        raw=hashlib.sha256(f'{fingerprint}|{family}|{salt}|{index}'.encode()).digest();index+=1
        pair=(int.from_bytes(raw[:4],'little'),int.from_bytes(raw[4:8],'little'))
        if pair not in seen:seen.add(pair);draws.append(pair)
    return draws


def memory_jobs(requested=None):
    available=os.sysconf('SC_AVPHYS_PAGES')*os.sysconf('SC_PAGE_SIZE') if hasattr(os,'sysconf') else 4*1024**3
    limit=Path('/sys/fs/cgroup/memory.max')
    if limit.exists() and limit.read_text().strip().isdigit():
        current=Path('/sys/fs/cgroup/memory.current')
        available=min(available,max(0,int(limit.read_text())-(int(current.read_text()) if current.exists() else 0)))
    cap=max(1,min(os.cpu_count() or 1,available//(1536*1024**2),4))
    if requested is not None and requested<1:raise ValueError('jobs must be positive')
    return min(requested or cap,cap)


def atomic_json(path, value):
    temp=path.with_suffix('.tmp');temp.write_text(json.dumps(value,indent=2,allow_nan=False)+'\n');temp.replace(path)


def run_case(binary, out, family, gen_seed, seed, controller, seconds, trace):
    key=dict(family=family,gen_seed=gen_seed,seed=seed,controller=controller)
    dest=Path(out)/controller/family/str(gen_seed)/str(seed)
    flags=[{'legacy':'--legacy-ai','candidate90':'--cognition','drills':'--drills'}[controller]]
    output=str(dest)
    if sys.platform=='linux' and Path(binary).suffix.lower()=='.exe':
        output=subprocess.check_output(['wslpath','-w',str(dest.resolve())],text=True).strip()
    command=[binary,*flags,'--generated',family,'--gen-seed',str(gen_seed),'--seed',str(seed),'--seconds',str(seconds),'--evaluate','--out',output]
    if not trace:command.append('--no-trace')
    started=time.monotonic()
    try:
        proc=subprocess.run(command,capture_output=True,text=True)
        if proc.returncode:raise RuntimeError(f'exit {proc.returncode}: {proc.stderr}')
        directory=dest/json.loads((dest/'latest.json').read_text())['run']
        m=json.loads((directory/'manifest.json').read_text())
        if (m['scenario_family'],m['gen_seed'],m['seed'])!=(family,gen_seed,seed):raise ValueError('Binary returned another scenario')
        result=dict(key,status='complete',run=str(directory),build=m['build'],**evaluate(directory))
    except Exception as exc:
        result=dict(key,status='failed',error=str(exc))
    result.update(command=command,wall_seconds=time.monotonic()-started)
    return result


class EngagementGuard:
    """Abort at the configured zero-shot limit in a fixed ten-draw block per controller.

    Running workers drain into the report; no queued draws start after failure.
    Block membership follows requested draw order, never completion order.
    """
    def __init__(self,draws,zero_limit=3):
        if zero_limit not in (1,3):raise ValueError("zero-shot limit must be 1 or 3")
        self.zero_limit=zero_limit
        self.blocks={tuple(pair):i//10 for i,pair in enumerate(draws)}
        self.zero={};self.failed=False
    def observe(self,row):
        if row['status']=='complete' and row['metrics']['shots']==0:
            key=(row['controller'],self.blocks[(row['gen_seed'],row['seed'])])
            self.zero[key]=self.zero.get(key,0)+1
            self.failed|=self.zero[key]>=self.zero_limit
    def result(self):
        return dict(enabled=True,threshold=self.zero_limit,block_size=10,failed=self.failed,
                    zero_shot_blocks=[dict(controller=c,block=b,count=n) for (c,b),n in sorted(self.zero.items())])

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',required=True)
    p.add_argument('--family',choices=['F1'],default='F1');p.add_argument('--gen-seeds',type=seed_list,default=seed_list('1-30'))
    p.add_argument('--seeds',type=seed_list,default=seed_list('107-109'))
    p.add_argument('--controllers',nargs='+',choices=['legacy','candidate90','drills'],default=['legacy','candidate90'])
    p.add_argument('--seconds',type=float,default=360);p.add_argument('--jobs',type=int);p.add_argument('--trace',action='store_true')
    p.add_argument('--zero-shot-limit',type=int,choices=(1,3),default=3,help='Plan015 uses 1; historical three-in-ten guard remains the default')
    p.add_argument('--validation-salt');p.add_argument('--validation-count',type=int,default=20)
    a=p.parse_args()
    if not 1<=a.seconds<=600 or a.validation_count<1:p.error('Invalid duration or validation count')
    if len(set(a.controllers))!=len(a.controllers):p.error('Duplicate controller')
    binary=str(Path(a.binary).resolve());build=subprocess.check_output([binary,'--version'],text=True).strip()
    draws=validation_draws(build,a.family,a.validation_salt,a.validation_count) if a.validation_salt is not None else [(g,s) for g in a.gen_seeds for s in a.seeds]
    metrics_source=hashlib.sha256(b''.join((Path(__file__).parent/name).read_bytes() for name in ('family_metrics.py','measure_dispersion.py','evaluate_tactics.py','phase0_metrics.py'))).hexdigest()
    config=dict(build=build,metrics_source=metrics_source,family=a.family,draws=draws,controllers=a.controllers,seconds=a.seconds,trace=a.trace,validation_salt=a.validation_salt,engagement_guard=a.zero_shot_limit)
    # Normalize tuple/list shape before comparing a resumed checkpoint.
    config=json.loads(json.dumps(config));out=Path(a.out).resolve();out.mkdir(parents=True,exist_ok=True);path=out/'family.json'
    report=dict(schema=1,config=config,jobs=memory_jobs(a.jobs),expected=len(draws)*len(a.controllers),cases=[])
    if path.exists():
        previous=json.loads(path.read_text())
        if previous['config']!=config:raise ValueError('Refuse to mix different builds or draw configurations in one checkpoint')
        report['cases']=previous['cases']
    done={(r['controller'],r['gen_seed'],r['seed']) for r in report['cases']}
    atomic_json(path,report)
    guard=EngagementGuard(draws,a.zero_shot_limit)
    for row in report['cases']:guard.observe(row)
    pending=iter([(c,g,s) for c in a.controllers for g,s in draws if (c,g,s) not in done])
    with ProcessPoolExecutor(max_workers=report['jobs'],mp_context=multiprocessing.get_context('spawn')) as pool:
        futures={}
        def fill():
            while len(futures)<report['jobs'] and not guard.failed:
                key=next(pending,None)
                if key is None:break
                c,g,s=key
                futures[pool.submit(run_case,binary,str(out),a.family,g,s,c,a.seconds,a.trace)]=key
        fill()
        while futures:
            ready,_=wait(futures,return_when=FIRST_COMPLETED)
            for future in ready:
                futures.pop(future);result=future.result();report['cases'].append(result);guard.observe(result)
                report['engagement_guard']=guard.result();atomic_json(path,report)
                print(f"{result['controller']} {a.family}/{result['gen_seed']}/{result['seed']}: {result['status']} ({len(report['cases'])}/{report['expected']})",flush=True)
            fill()
    report['engagement_guard']=guard.result();atomic_json(path,report)
    if guard.failed:
        print(f'FAILED engagement guard: {a.zero_shot_limit} zero-shot runs in a ten-draw block; no further draws scheduled',flush=True)
        return 1
    return 0 if len(report['cases'])==report['expected'] and all(r['status']=='complete' for r in report['cases']) else 1
if __name__=='__main__':raise SystemExit(main())
