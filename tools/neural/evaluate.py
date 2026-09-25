"""Matched ordinary city battles: each candidate faces the same active Legacy opponent."""
from __future__ import annotations
import argparse
from concurrent.futures import ProcessPoolExecutor,as_completed
from multiprocessing import get_context
import hashlib,json,statistics,subprocess,time
from pathlib import Path
from tools.loop import runner,score,config
from tools.neural import native
from tools.neural.scenarios import FAMILIES,active_legacy_specs,ordinary_result


def fight(binary, model, name, spec, out, expected, flags=(), analyze=True, keep_exports=False):
    """One matched battle. flags are extra battle-lab arguments for this arm (plan 026: ablation
    switches). Neural arms also record their squad decisions; the friendly-fire trace joins them
    to the exports before the exports are pruned."""
    out=Path(out);out.mkdir(parents=True,exist_ok=True);flags=list(flags)
    digest=hashlib.sha256(Path(model).read_bytes()).hexdigest() if model else None
    rowfile=out/'row.json'
    if rowfile.exists():
        old=json.loads(rowfile.read_text())
        if (old.get('status')=='complete' and old.get('build')==expected and old.get('model_sha256')==digest
                and old.get('arm_flags',[])==flags and (not analyze or 'friendly_hit_trace' in old)
                and all(old.get(k)==v for k,v in spec.items())):return old
    extra=['--neural-model',str(Path(model).resolve())] if model else []
    decisions=out/'decisions.jsonl' if model else None
    if decisions is not None:
        decisions.unlink(missing_ok=True);extra+=['--record-squad-decisions',str(decisions.resolve())]
    row=runner.run_battle(binary,'legacy',spec,out,extra_args=extra+flags,keep_exports=True)
    row.update(arm=name,model_sha256=digest,arm_flags=flags)
    if row['status']=='complete':
        root=Path(row['run']);manifest=json.loads((root/'manifest.json').read_text())
        if manifest.get('static_defence') or row['build']!=expected:
            raise ValueError('Wrong opponent/scenario/source')
        from tools import conduct_metrics
        # Diagnostics only; static-attack acceptance thresholds do not transfer silently.
        row['metrics'].update(conduct_metrics.evaluate(root))
        if analyze:
            from tools import friendly_fire_trace
            row['friendly_hit_trace']=friendly_fire_trace.evaluate(root,decisions)
        if not keep_exports:
            runner.prune_exports(root)
            if decisions is not None:decisions.unlink(missing_ok=True)
    rowfile.write_text(json.dumps(row,indent=2)+'\n')
    return row


def _tag_rate(row,tag):
    trace=row.get('friendly_hit_trace')
    return trace['tags'][tag]['per_100'] if trace and tag in trace['tags'] else None


def summarize(rows):
    arms=sorted({r['arm'] for r in rows});result={};paired={}
    metrics=['casualty_azure','casualty_ember','orders_azure_per_minute','friendly_hits_per_100_soldier_minutes','straggler_share','behind_corporal_share','replaced_before_arrival_share']
    baseline=[r for r in rows if r['arm']=='legacy']
    tags=sorted({t for r in rows if r.get('friendly_hit_trace') for t in r['friendly_hit_trace']['tags']})
    for arm in arms:
        cases=[r for r in rows if r['arm']==arm and r['status']=='complete']
        if not cases:continue
        result[arm]=dict(battles=len(cases),wins=sum(bool(r['metrics']['win_azure']) for r in cases),
            draws=sum(bool(r['metrics']['draw']) for r in cases),mean_outcome=statistics.mean(ordinary_result(r) for r in cases),
            means={k:statistics.mean(r['metrics'][k] for r in cases if r['metrics'].get(k) is not None) for k in metrics if any(r['metrics'].get(k) is not None for r in cases)})
        if tags:
            result[arm]['friendly_hit_tags']={t:statistics.mean(v) for t in tags
                for v in [[x for x in (_tag_rate(r,t) for r in cases) if x is not None]] if v}
        # Every arm against every other (plan 026 P2 stage 2b), same cluster bootstrap as the guards.
        paired[arm]={}
        for against in arms:
            base=[r for r in rows if r['arm']==against]
            if arm==against or not base:continue
            paired[arm][against]={'outcome':score._summarize(score._paired(cases,base,ordinary_result)[0])}
            for key in metrics:
                paired[arm][against][key]=score._summarize(score._paired(cases,base,lambda r,key=key:r['metrics'].get(key))[0])
            if tags:
                paired[arm][against]['friendly_hit_tags']={t:score._summarize(s) for t in tags
                    for s in [score._paired(cases,base,lambda r,t=t:_tag_rate(r,t))[0]] if s}
        if arm!='legacy' and baseline:
            # Reuse unchanged ordinary-town guard definitions on this paired map set.
            selected=[g for g in score.load_guards(score.GUARDS_FILE.with_name('guards-v7.json'))['guards'] if g['kind']!='external' and 'town-dev' in g.get('sets',[])]  # v7: the town guards (v8 moved them)
            selected=[dict(g,sets=['town-dev']) for g in selected]
            result[arm]['ordinary_guards']=score.evaluate_guards({'guards':selected},{'town-dev':cases},{'legacy':{'town-dev':baseline}}, {})
    return result,paired


def parse_arm(item):
    """NAME=MODEL[;FLAG;FLAG...]: a model and extra battle-lab flags for that arm only."""
    name,rest=item.split('=',1);parts=rest.split(';')
    model,flags=parts[0],[p for p in parts[1:] if p]
    if not name or name=='legacy' or not model:raise ValueError(f'Bad arm {item!r}: NAME=MODEL[;FLAG...], not legacy')
    for flag in flags:
        if not flag.startswith('--'):raise ValueError(f'Bad flag {flag!r} in arm {name}')
    return name,(model,flags)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--binary',default=native.BINARY);ap.add_argument('--baseline-binary',default='.local/plan024/baseline/battle-lab')
    ap.add_argument('--arm',action='append',default=[],help='NAME=MODEL[;FLAG;FLAG...]; legacy is always included')
    ap.add_argument('--anchor-binary',help='re-fight every flag-free neural arm on this binary; every case digest must match')
    ap.add_argument('--keep-exports',action='store_true',help='keep battle exports and decision records')
    ap.add_argument('--out',required=True);ap.add_argument('--first-map',type=int,default=901);ap.add_argument('--maps',type=int,default=10)
    ap.add_argument('--jobs',type=int,default=12);ap.add_argument('--phase',choices=['development','heldout'],default='development')
    ap.add_argument('--family',choices=FAMILIES,default='city',help='map family; village and city2 need binaries that read ARMYMAP 2')
    ap.add_argument('--expected-baseline',default='45da1e25dd1aa9e7',help='source id the --baseline-binary must report (the frozen Legacy baseline by default; village/city2 use a frozen ARMYMAP 2 baseline, e.g. .local/plan029/baseline/battle-lab)')
    args=ap.parse_args();native.checked(args.binary);native.huge_pages();out=Path(args.out).resolve();out.mkdir(parents=True,exist_ok=True)
    if args.anchor_binary:native.checked(args.anchor_binary)
    arms={'legacy':(None,[])};arms.update(parse_arm(item) for item in args.arm)
    specs=active_legacy_specs(args.phase,range(args.first_map,args.first_map+args.maps),family=args.family)
    binaries=[args.binary,args.baseline_binary]+([args.anchor_binary] if args.anchor_binary else [])
    builds={b:subprocess.check_output([b,'--version'],text=True).strip() for b in binaries}
    if builds[args.baseline_binary].split('-')[0]!=args.expected_baseline:raise ValueError(f'Wrong frozen Legacy baseline: {builds[args.baseline_binary]} is not {args.expected_baseline}')
    report=dict(schema=1,opponent='active_legacy',phase=args.phase,maps=list(range(args.first_map,args.first_map+args.maps)),rows=[],complete=False,
                arms={n:dict(model=m,flags=f) for n,(m,f) in arms.items()},builds=builds)
    if args.family!='city':report['family']=args.family
    anchored=[n for n,(m,f) in arms.items() if m and not f] if args.anchor_binary else []
    anchor_rows=[]
    jobs=runner.default_jobs(args.jobs,lean=True);start=time.monotonic()
    with ProcessPoolExecutor(max_workers=jobs, mp_context=get_context('spawn')) as pool:
        futures={}
        for name,(model,flags) in arms.items():
            binary=args.baseline_binary if model is None else args.binary
            for spec in specs:futures[pool.submit(fight,binary,model,name,spec,out/name/config.spec_key(spec),builds[binary],flags,True,args.keep_exports)]=False
        for name in anchored:
            model=arms[name][0]
            for spec in specs:futures[pool.submit(fight,args.anchor_binary,model,name,spec,out/'anchor'/name/config.spec_key(spec),builds[args.anchor_binary],[],False,args.keep_exports)]=True
        for future in as_completed(futures):
            row=future.result();(anchor_rows if futures[future] else report['rows']).append(row)
            (out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
            print(f"{len(report['rows'])+len(anchor_rows)}/{len(futures)} {'anchor ' if futures[future] else ''}{row['arm']} {row['gen_seed']}:{row['seed']} {row['status']}",flush=True)
    report['complete']=all(r['status']=='complete' for r in report['rows']+anchor_rows)
    if args.anchor_binary:
        primary={(r["arm"],config.spec_key(r)):r for r in report["rows"]}
        cases=[]
        for a in sorted(anchor_rows,key=lambda r:(r['arm'],config.spec_key(r))):
            m=primary.get((a['arm'],config.spec_key(a)),{})
            cases.append(dict(arm=a['arm'],case=config.spec_key(a),binary=m.get('digest'),anchor=a.get('digest'),
                              match=a.get('status')=='complete' and m.get('status')=='complete' and a.get('digest')==m.get('digest')))
        report['switch_parity']=dict(binary=builds[args.binary],anchor_binary=builds[args.anchor_binary],arms=anchored,
                                     cases=cases,matched=sum(c['match'] for c in cases),total=len(cases),passed=bool(cases) and all(c['match'] for c in cases))
    report['summary'],report['paired']=summarize(report['rows']);report['wall_seconds']=time.monotonic()-start;report['jobs']=jobs
    (out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report['summary'],indent=2))
    if args.anchor_binary:print(f"switch parity {report['switch_parity']['matched']}/{report['switch_parity']['total']}",flush=True)
    if not report['complete']:raise SystemExit('Incomplete evaluation')
    if args.anchor_binary and not report['switch_parity']['passed']:raise SystemExit('Switch parity failed: the ablation binary does not reproduce the anchor')


if __name__=='__main__':main()
