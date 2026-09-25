"""Bounded masked PPO experiment against active Legacy, starting from imitation."""
from __future__ import annotations
import argparse
import copy
import functools
import hashlib
import json
from pathlib import Path
import time
import numpy as np
import torch
from tools.loop import runner
from tools.neural import native
from tools.neural.actor import read_policy, Critic, distribution, anchor_kl, save_actor, migrate, seed_map_view, FEATURES, TIMINGS
from tools.neural.map_identity import attach_map_identity
from tools.neural.scenarios import FAMILIES,active_legacy_specs
from tools.neural.worker import ElasticPool, ProcessPool


def calibrate(actor, data, target=.7):
    # Schema 4 is calibrated on its through-the-gates head over the same teacher rows, so a
    # migrated actor gets the temperature its schema-3 origin had.
    width=getattr(actor,'features',FEATURES);schema4=getattr(actor,'schema',3)==4
    rows=[];masks=[]
    for path in sorted(Path(data).rglob('decisions.jsonl')):
        with path.open() as stream:
            for line in stream:
                item=json.loads(line);x=np.asarray(item['features'],dtype=np.float32)
                if sum(item['legal'])<2:continue
                padded=np.zeros((32,width),dtype=np.float32);padded[:len(x),:x.shape[1]]=x
                mask=np.zeros(32,dtype=bool);mask[:len(x)]=item['legal'];rows.append(padded);masks.append(mask)
                if len(rows)>=2000:break
        if len(rows)>=2000:break
    if not rows:raise ValueError('No calibration observations')
    with torch.no_grad():
        scores=actor(torch.from_numpy(np.asarray(rows)));legal=torch.tensor(np.asarray(masks))
        if schema4:scores=scores[...,0::TIMINGS]
        low,high=.01,10.
        for _ in range(30):
            mid=(low+high)/2
            confidence=float(torch.softmax((scores/mid).masked_fill(~legal,-torch.inf),-1).max(-1).values.median())
            if confidence>target:low=mid
            else:high=mid
    return (low+high)/2


def outcome_stats(episodes):
    """Shares of the receipt outcomes over all decisions of the given battles, and for schema 4
    the share of decisions that chose go now (go_now_share) and that had it available."""
    counts={}
    for row in episodes:
        for outcome,count in row.get('outcomes',{}).items():counts[outcome]=counts.get(outcome,0)+count
    total=sum(counts.values())
    result=dict(outcome_shares={k:v/total for k,v in sorted(counts.items())} if total else {})
    decisions=sum(r.get('decisions',0) for r in episodes if 'go_now_share' in r)
    if decisions:
        result['go_now_share']=sum(r['go_now_share']*r['decisions'] for r in episodes if 'go_now_share' in r)/decisions
        result['now_legal_share']=sum(r['now_legal_share']*r['decisions'] for r in episodes if 'go_now_share' in r)/decisions
        result['committed_now']=sum(r.get('committed_now',0) for r in episodes)
    return result


def stacked_rasters(rows):
    """Pooled map views of the rows (plan 026 4c), or None when no row has one. A batch never mixes."""
    present=['raster' in r for r in rows]
    if not any(present):return None
    if not all(present):raise ValueError('Rollout mixes rows with and without a map view')
    return torch.tensor(np.stack([r['raster'] for r in rows]))


def update(actor, critic, frozen, rows, optimizer, temperature, generator, epochs=4, anchor_weight=.05):
    raster=stacked_rasters(rows)
    def view(ids):return None if raster is None else raster[ids]
    features=torch.tensor(np.stack([r['features'] for r in rows]))
    legal=torch.tensor(np.stack([r['legal'] for r in rows]))
    critic_x=torch.tensor(np.stack([r['critic'] for r in rows]))
    actions=torch.tensor([r['action'] for r in rows]);old=torch.tensor([r['log_prob'] for r in rows])
    actor_rows=legal.sum(-1)>1
    advantages=torch.tensor([r['advantage'] for r in rows])
    if actor_rows.any():
        values=advantages[actor_rows]
        advantages=(advantages-values.mean())/(values.std(unbiased=False)+1e-8)
    returns=torch.tensor([r['returns'] for r in rows])
    with torch.no_grad():reference=distribution(frozen,features,legal,temperature,raster)
    history=[];actor_stopped=False;actor_steps=0;critic_steps=0;epoch_kl=[]
    for epoch in range(epochs):
        for ids in torch.randperm(len(rows),generator=generator).split(256):
            value_loss=.5*(critic(critic_x[ids])-returns[ids]).square().mean()
            loss=.5*value_loss
            policy_ids=ids[actor_rows[ids]]
            anchor_value=0.
            if not actor_stopped and len(policy_ids):
                current=distribution(actor,features[policy_ids],legal[policy_ids],temperature,view(policy_ids))
                logp=current.log_prob(actions[policy_ids]);ratio=(logp-old[policy_ids]).exp()
                surrogate=torch.minimum(ratio*advantages[policy_ids],ratio.clamp(.8,1.2)*advantages[policy_ids])
                anchor=anchor_kl(reference.logits[policy_ids],current).mean()
                loss=loss-surrogate.mean()-.003*current.entropy().mean()+anchor_weight*anchor
                anchor_value=float(anchor.detach());actor_steps+=1
            if not torch.isfinite(loss):raise ValueError('Nonfinite PPO loss')
            optimizer.zero_grad(set_to_none=True);loss.backward()
            torch.nn.utils.clip_grad_norm_(list(actor.parameters())+list(critic.parameters()),.5)
            optimizer.step();critic_steps+=1
            history.append(dict(loss=float(loss.detach()),anchor_kl=anchor_value))
        # A full-batch statistic controls actor stopping; value fitting always finishes.
        with torch.no_grad():
            total=count=0
            for ids in torch.nonzero(actor_rows).flatten().split(512):
                delta=distribution(actor,features[ids],legal[ids],temperature,view(ids)).log_prob(actions[ids])-old[ids]
                total+=float(((delta.exp()-1)-delta).sum());count+=len(ids)
            measured=total/max(1,count);epoch_kl.append(measured)
            if measured>.02:actor_stopped=True
    return dict(samples=len(rows),actor_samples=int(actor_rows.sum()),early_stop=actor_stopped,
                steps=len(history),actor_steps=actor_steps,critic_steps=critic_steps,
                epoch_kl=epoch_kl,last=history[-1])


def rollout_battle(context, worker, request):
    # Any free worker takes the next battle. Results come back in episode order, so sample
    # order, and so the update, does not depend on the worker count or which worker ran it.
    # Module level so a rollout process can unpickle it (context carries actor and critic).
    number,spec=request;c=context
    return worker.episode(number,spec,c['actor'],c['critic'],c['temperature'],c['seed']*100000+number,
                c['candidates'],c['half_life'],schema=c['schema'],start_only=c.get('start_only',False))


def development_battle(context, worker, item):
    # Greedy play of the current actor on fixed development cases (never training maps).
    i,spec=item;c=context
    _,end=worker.episode(900000000+c['update']*1000+i,spec,c['actor'],c['critic'],c['temperature'],0,greedy=True,schema=c['schema'],start_only=c.get('start_only',False))
    return dict(map=spec['gen_seed'],seed=spec['seed'],winner=end['winner'],team_return=end['team_return'],digest=end['digest'])


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--binary',default=native.BINARY);ap.add_argument('--initial',default='models/squad/plan024-imitation-v1/squad.policy')
    ap.add_argument('--calibration-data',default='.local/plan024/data-v2');ap.add_argument('--out',required=True)
    ap.add_argument('--seed',type=int,default=24);ap.add_argument('--iterations',type=int,default=4)
    ap.add_argument('--episodes',type=int,default=24);ap.add_argument('--jobs',type=int,default=12,help='used only when no .local/neural/max_jobs cap file exists')
    ap.add_argument('--share-index',type=int,default=0);ap.add_argument('--share-count',type=int,default=1,help='concurrent runs splitting the neural cap')
    ap.add_argument('--candidates',type=int,choices=[0,30],default=0)
    ap.add_argument('--schema',type=int,choices=[3,4],default=3,help='4: plan 026 go-now interface (a schema-2/3 initial model is migrated)')
    ap.add_argument('--now-bias',type=float,default=0.,help='when migrating to schema 4: the go-now head copies the through-the-gates head, its bias offset by this (0: equal odds; about -0.15 at T 0.0508 gives ~5%% go-now per row)')
    ap.add_argument('--temperature',type=float);ap.add_argument('--seconds',type=int,default=360)
    ap.add_argument('--half-life',type=float,default=0,help='0 means undiscounted finite-horizon objective')
    ap.add_argument('--actor-lr',type=float,default=1e-4);ap.add_argument('--anchor',type=float,default=.05,help='weight of the KL anchor to the initial policy')
    ap.add_argument('--dev-every',type=int,default=0,help='greedy development check every N updates (0: off)')
    ap.add_argument('--dev-first-map',type=int,default=901);ap.add_argument('--dev-maps',type=int,default=30)
    ap.add_argument('--first-map',type=int,default=701);ap.add_argument('--maps',type=int,default=60)
    ap.add_argument('--family',choices=FAMILIES,default='city',help='map family of the training and development maps; village and city2 need an ARMYMAP 2 binary')
    ap.add_argument('--max-jobs',type=int,help='never run more battles than this, whatever .local/neural/max_jobs says')
    ap.add_argument('--rollout-processes',action='store_true',help='one Python process per worker (plan 026 P3c) instead of threads; same results')
    ap.add_argument('--start-only',action='store_true',help='plan 027 (schema 4 only): go-now skips only the commit-time gates and releases no later bound')
    args=ap.parse_args();native.checked(args.binary)
    if args.start_only and args.schema!=4:ap.error('--start-only needs --schema 4')
    if args.iterations<1 or args.episodes<1 or args.maps<1 or args.episodes>args.maps*3:ap.error('Invalid experiment sizes')
    if args.temperature is not None and (not np.isfinite(args.temperature) or args.temperature<=0):ap.error('Temperature must be finite and positive')
    if args.half_life<0 or not np.isfinite(args.half_life):ap.error('Half-life must be finite and nonnegative')
    if args.max_jobs is not None and args.max_jobs<1:ap.error('--max-jobs must be positive')
    torch.set_num_threads(1);torch.manual_seed(args.seed);torch.use_deterministic_algorithms(True)
    out=Path(args.out).resolve();out.mkdir(parents=True,exist_ok=True)
    actor,initial_schema,_=read_policy(args.initial)
    if args.schema==4 and actor.schema!=4:actor=migrate(actor,args.now_bias)
    if args.schema==3 and actor.schema!=3:ap.error('A schema-4 initial model needs --schema 4')
    frozen=copy.deepcopy(actor).eval()
    def make_critic(map_view):
        # Plan 026 4c: a schema-4 run on a map-view binary gives the critic the pooled raster too.
        # Built after the first worker's hello; no torch random draw happens in between, so a run
        # without a map view gets exactly the critic it got before.
        critic=Critic(actor.features,raster=map_view)
        return critic,torch.optim.Adam([{'params':actor.parameters(),'lr':args.actor_lr},{'params':critic.parameters(),'lr':3e-4}])
    temperature=args.temperature or calibrate(actor,args.calibration_data)
    save_actor(actor,args.candidates,out/'initial.policy',schema=args.schema);torch.save(actor.state_dict(),out/'initial.pt')
    specs=attach_map_identity(args.binary,active_legacy_specs('rl-train',range(args.first_map,args.first_map+args.maps),seconds=args.seconds,family=args.family),out/'maps')
    ceiling=runner.default_jobs(None,seconds=args.seconds,lean=True)
    def jobs():
        # This run's share of the machine-wide neural cap (tools/neural/native.py), rechecked between battles.
        wanted=native.share(native.capacity(0),args.share_index,args.share_count) if native.CAPACITY_FILE.exists() else args.jobs
        return max(1,min(args.episodes,ceiling,wanted,args.max_jobs or wanted))
    start=time.monotonic();rng=np.random.default_rng(args.seed);generator=torch.Generator().manual_seed(args.seed)
    report=dict(schema=1,method='masked_ppo',opponent='active_legacy',candidates=args.candidates,
        seed=args.seed,policy_schema=args.schema,initial_schema=initial_schema,temperature=temperature,actor_lr=args.actor_lr,anchor=args.anchor,episodes_per_update=args.episodes,calibration_target_argmax_probability=.7,calibration_source='schema-2 teacher rows without KEEP; actual rollout statistics reported separately',half_life_seconds=args.half_life,lambda_half_life_seconds=30,
        reward='enemy_loss_fraction - own_loss_fraction + 0.25*(win-loss)',
        training_maps=list(range(args.first_map,args.first_map+args.maps)),iterations=[],
        initial_sha256=hashlib.sha256(Path(args.initial).read_bytes()).hexdigest(),complete=False,
        rollout_processes=args.rollout_processes)
    if args.start_only:report['start_only']=True
    if args.family!='city':report['family']=args.family
    probe_dir=out/'export-observations';probe_dir.mkdir(exist_ok=True);probes=0
    pool=(ProcessPool if args.rollout_processes else ElasticPool)(args.binary,out,jobs)
    try:
        hello=pool.hello();report['build']=hello['build']
        map_view=args.schema==4 and bool(hello.get('map_view',0))
        # A zero map view is a saddle (no gradient reaches it); seed its embedding layer. The
        # projection stays zero, so the initial policy and the frozen anchor score exactly as before.
        report['map_view']=map_view;report['map_view_seeded']=bool(map_view and seed_map_view(actor,args.seed))
        critic,optimizer=make_critic(map_view)
        # The same picklable task function for threads and processes; a process pool pickles it
        # (with the actor and critic as they are then) when each run starts.
        context=dict(actor=actor,critic=critic,temperature=temperature,seed=args.seed,
                     candidates=args.candidates,half_life=args.half_life,schema=args.schema,start_only=args.start_only)
        battle=functools.partial(rollout_battle,context)
        dev_specs=attach_map_identity(args.binary,active_legacy_specs('development',range(args.dev_first_map,args.dev_first_map+args.dev_maps),family=args.family),out/'maps') if args.dev_every else []
        def development(update_number):
            rows=pool.run(list(enumerate(dev_specs)),functools.partial(development_battle,dict(context,update=update_number)))
            return dict(cases=len(rows),wins=sum(r['winner']==0 for r in rows),draws=sum(r['winner']==-1 for r in rows),
                losses=sum(r['winner']==1 for r in rows),mean_team_return=float(np.mean([r['team_return'] for r in rows])),rows=rows)
        for iteration in range(args.iterations):
            selected=rng.choice(len(specs),size=args.episodes,replace=False)
            requests=[(iteration*args.episodes+i+1,specs[int(index)]) for i,index in enumerate(selected)]
            results=pool.run(requests,battle)
            samples=[r for rows,_ in results for r in rows]
            with (probe_dir/'decisions.jsonl').open('a') as stream:
                for row in samples[:max(0,2000-probes)]:
                    legal=row['legal'].astype(int)
                    item=dict(features=row['features'].tolist(),legal=legal.tolist()) if args.schema==3 else \
                        dict(features=row['features'].tolist(),legal=legal[0::TIMINGS].tolist(),legal_now=legal[1::TIMINGS].tolist())
                    if 'raster_hex' in row:item['raster']=row['raster_hex']
                    stream.write(json.dumps(item)+'\n');probes+=1
            if not samples:raise RuntimeError('Rollout had no squad decisions')
            torch.save(dict(samples=samples,episodes=[r for _,r in results]),out/'last-rollout.pt')
            # Whole completed battles, never interleave different squads into one trajectory.
            learning=update(actor,critic,frozen,samples,optimizer,temperature,generator,anchor_weight=args.anchor)
            episode_rows=[row for _,row in results]
            checkpoint=out/f'iteration-{iteration+1:03}'
            checkpoint.mkdir(exist_ok=True);save_actor(actor,args.candidates,checkpoint/'squad.policy',schema=args.schema)
            torch.save(actor.state_dict(),checkpoint/'scorer.pt')
            torch.save(dict(critic=critic.state_dict(),optimizer=optimizer.state_dict()),checkpoint/'trainer.pt')
            stats=dict(iteration=iteration+1,learning=learning,episodes=episode_rows,
                mean_team_return=float(np.mean([r['team_return'] for r in episode_rows])),
                wins=sum(r['winner']==0 for r in episode_rows),
                mean_entropy=float(np.mean([r['mean_entropy'] for r in episode_rows])),
                argmax_share=float(np.mean([r['sampled_argmax_share'] for r in episode_rows])),
                mean_top_probability=float(np.mean([r['mean_top_probability'] for r in episode_rows])),
                keep_legal_share=float(np.mean([r['keep_legal_share'] for r in episode_rows])),
                **outcome_stats(episode_rows),
                peak_workers=pool.peak,wall_seconds=time.monotonic()-start)
            pool.peak=0
            if args.dev_every and (iteration+1)%args.dev_every==0:stats['development']=development(iteration+1)
            report['iterations'].append(stats)
            (out/'training.json').write_text(json.dumps(report,indent=2)+'\n')
            print(json.dumps({k:v for k,v in stats.items() if k!='episodes'}),flush=True)
        save_actor(actor,args.candidates,out/'squad.policy',schema=args.schema);torch.save(actor.state_dict(),out/'scorer.pt')
        report.update(complete=True,wall_seconds=time.monotonic()-start,model_sha256=hashlib.sha256((out/'squad.policy').read_bytes()).hexdigest())
        (out/'training.json').write_text(json.dumps(report,indent=2)+'\n')
    finally:
        pool.close()


if __name__=='__main__':main()
