"""Contracts for temporal credit and masked updates, independent of game outcomes."""
import unittest
from pathlib import Path
try:
    import numpy as np
    import torch
except ImportError:
    raise unittest.SkipTest("Optional neural training dependencies: use .local/neural-venv")
from tools.neural.returns import advantages,team_potential,terminal_reward
from tools.neural.actor import Actor,Critic,distribution,anchor_kl,read_policy,FEATURES
from tools.neural.actor import FEATURES4,TIMINGS,migrate,save_actor,pack,critic_features
from tools.neural.actor import raster_pool,pack_raster,seed_map_view,RASTER_POOLED,RASTER_BYTES
from tools.neural.ppo import update,outcome_stats,stacked_rasters


class ReturnsTests(unittest.TestCase):
    def test_team_events_telescope_and_terminal_bonus_once(self):
        initial=[32,32];states=[[32,32],[30,27],[25,20]]
        changes=[team_potential(b,initial)-team_potential(a,initial) for a,b in zip(states,states[1:])]
        self.assertAlmostEqual(sum(changes)+terminal_reward(0),5/32+.25)
        self.assertEqual(terminal_reward(-1),0)

    def test_elapsed_time_discount_and_bootstrap(self):
        row=dict(elapsed=10,reward=2.,value=1.,next_value=4.,terminal=False)
        a,r=advantages([row],half_life=10)
        self.assertAlmostEqual(a[0],3.);self.assertAlmostEqual(r[0],4.)
        row['terminal']=True;a,r=advantages([row],half_life=10)
        self.assertAlmostEqual(r[0],2.)

    def test_terminal_cuts_trajectory(self):
        rows=[dict(elapsed=1,reward=1.,value=0.,next_value=10.,terminal=True),
              dict(elapsed=1,reward=99.,value=0.,next_value=0.,terminal=True)]
        a,_=advantages(rows,half_life=0,lambda_half_life=0)
        self.assertEqual(a.tolist(),[1.,99.])

    def test_empty_and_negative_interval(self):
        self.assertEqual(len(advantages([])[0]),0)
        with self.assertRaises(ValueError):advantages([dict(elapsed=-1)])


class ActorTests(unittest.TestCase):
    def setUp(self):torch.set_num_threads(1);torch.manual_seed(1)

    def test_illegal_actions_have_no_probability(self):
        actor=Actor();x=torch.zeros((3,32,FEATURES));legal=torch.zeros((3,32),dtype=torch.bool);legal[:,0]=True
        d=distribution(actor,x,legal,.2)
        self.assertTrue(torch.equal(d.probs[:,0],torch.ones(3)))
        self.assertEqual(float(d.probs[:,1:].sum().detach()),0.)

    def test_anchor_kl_remains_finite_when_legal_probability_underflows(self):
        reference=torch.distributions.Categorical(logits=torch.tensor([[0.,-90.,-1e9]]))
        logits=torch.tensor([[0.,-110.,-1e9]],requires_grad=True)
        current=torch.distributions.Categorical(logits=logits)
        self.assertEqual(float(current.probs[0,1].detach()),0.)
        loss=anchor_kl(reference.logits,current).mean()
        loss.backward()
        self.assertTrue(torch.isfinite(loss))
        self.assertTrue(torch.isfinite(logits.grad).all())

    def test_migration_preserves_schema2_logits(self):
        from tools.neural.train import Scorer
        path='models/squad/plan024-imitation-v1/squad.policy'
        new,_,_=read_policy(path);old=Scorer()
        old.input.weight.data.copy_(new.input.weight[:,:96]);old.input.bias.data.copy_(new.input.bias)
        old.output.load_state_dict(new.output.state_dict())
        x=torch.randn(20,96);padded=torch.cat([x,torch.zeros(20,1)],dim=-1)
        self.assertTrue(torch.allclose(old(x),new(padded),atol=1e-6))
        self.assertEqual(float(new.input.weight[:,96].abs().sum().detach()),0.)

    def test_masked_update_is_finite_and_changes_actor(self):
        import copy
        actor=Actor();frozen=copy.deepcopy(actor);critic=Critic();rows=[]
        for i in range(16):
            x=np.zeros((32,FEATURES),dtype=np.float32);x[1,0]=1
            legal=np.zeros(32,dtype=bool);legal[:2]=True
            d=distribution(actor,torch.from_numpy(x),torch.from_numpy(legal),1.)
            action=i%2
            rows.append(dict(features=x,legal=legal,critic=np.zeros(FEATURES+3,dtype=np.float32),
                action=action,log_prob=float(d.log_prob(torch.tensor(action)).detach()),advantage=float(action),returns=float(action)))
        before=copy.deepcopy(actor.state_dict())
        optimizer=torch.optim.Adam(list(actor.parameters())+list(critic.parameters()),lr=1e-4)
        result=update(actor,critic,frozen,rows,optimizer,1.,torch.Generator().manual_seed(1),epochs=2)
        self.assertTrue(result['steps']>0)
        self.assertTrue(all(torch.isfinite(p).all() for p in actor.parameters()))
        self.assertTrue(any(not torch.equal(before[k],v) for k,v in actor.state_dict().items()))


class Schema4Tests(unittest.TestCase):
    """Plan 026 P4a: schema-4 actor, migration from schema 3 and the flat timing mask."""
    SCHEMA3='models/squad/plan024-legacy-rl-v1/squad.policy'

    def setUp(self):torch.set_num_threads(1);torch.manual_seed(3)

    def test_migration_preserves_schema3_logits_and_zero_initialises_the_rest(self):
        old,schema,_=read_policy(self.SCHEMA3);self.assertEqual(schema,3)
        new=migrate(old)
        self.assertEqual((new.schema,new.features),(4,FEATURES4))
        x=torch.randn(50,FEATURES)*2;padded=torch.cat([x,torch.zeros(50,FEATURES4-FEATURES)],dim=-1)
        with torch.no_grad():
            both=new.heads(padded);before=old(x)
        self.assertEqual(tuple(both.shape),(50,TIMINGS))
        self.assertTrue(torch.allclose(both[:,0],before,atol=1e-6))
        self.assertTrue(torch.equal(both[:,1],both[:,0]))          # go-now head starts as a copy
        self.assertEqual(float(new.input.weight[:,FEATURES:].abs().sum()),0.)
        for p in (new.raster.weight,new.raster.bias,new.project.weight):self.assertEqual(float(p.abs().sum()),0.)
        # Reserved and raster columns carry no weight: filling them changes nothing.
        noisy=padded.clone();noisy[:,FEATURES:]=torch.randn(50,FEATURES4-FEATURES)
        with torch.no_grad():self.assertTrue(torch.equal(new.heads(noisy),new.heads(padded)))
        biased=migrate(old,now_bias=-5.)
        with torch.no_grad():
            shifted=biased.heads(padded)
            self.assertTrue(torch.allclose(shifted[:,1]-shifted[:,0],torch.full((50,),-5.),atol=1e-5))

    def test_migrated_go_now_head_is_the_gates_head_plus_the_bias(self):
        old,_,_=read_policy(self.SCHEMA3)
        x=torch.randn(400,FEATURES)*3;padded=torch.cat([x,torch.zeros(400,FEATURES4-FEATURES)],dim=-1)
        for bias in (0.,-.15,.4,-2.):
            new=migrate(old,now_bias=bias)
            self.assertTrue(torch.equal(new.output.weight[1],new.output.weight[0]))
            with torch.no_grad():both=new.heads(padded)
            self.assertLess(float((both[:,1]-both[:,0]-bias).abs().max()),1e-5)
            # So P(now)/P(gates)=exp(bias/T) on every row, whatever the row's own logit.
            with torch.no_grad():logp=torch.log_softmax(new(padded[:8].unsqueeze(0))/.0508,-1)[0].reshape(8,2)
            self.assertLess(float((logp[:,1]-logp[:,0]-bias/.0508).abs().max()),1e-3)  # log P(now)/P(gates)

    def test_very_negative_now_bias_plays_schema3_greedily(self):
        old,_,_=read_policy(self.SCHEMA3);new=migrate(old,now_bias=-100.)
        generator=torch.Generator().manual_seed(5)
        for _ in range(50):
            n=int(torch.randint(2,32,(1,),generator=generator))
            x=torch.randn(n,FEATURES,generator=generator)*2;legal=torch.rand(n,generator=generator)<.7;legal[0]=True
            padded=torch.cat([x,torch.zeros(n,FEATURES4-FEATURES)],dim=-1)
            # Go now is legal wherever the gates are, except HOLD (row 0), as in the simulator.
            now=legal.clone();now[0]=False
            flat=torch.stack([legal,now],-1).reshape(-1)
            with torch.no_grad():
                three=old(x).masked_fill(~legal,-1e9).argmax()
                four=new(padded).masked_fill(~flat,-1e9).argmax()
            self.assertEqual(int(four)%TIMINGS,0);self.assertEqual(int(four)//TIMINGS,int(three))

    def test_schema4_artifact_round_trips_exactly(self):
        import tempfile,os
        actor=Actor(4)
        with torch.no_grad():
            for p in actor.parameters():p.copy_(torch.randn_like(p))
        with tempfile.TemporaryDirectory() as work:
            path=os.path.join(work,'squad.policy');save_actor(actor,30,path,schema=4)
            header=Path(path).read_text().split('\n',1)[0].split()
            self.assertEqual(header,['ARMY_SQUAD_POLICY','4','128','32','30','128','16'])
            back,schema,candidates=read_policy(path)
            self.assertEqual((schema,candidates,back.schema),(4,30,4))
            for (name,a),(_,b) in zip(actor.state_dict().items(),back.state_dict().items()):
                self.assertTrue(torch.equal(a,b),name)
            with self.assertRaises(ValueError):save_actor(actor,0,path,schema=3)
            # A schema-3 artifact still reads as schema 3 and saves byte for byte as before.
            old,_,_=read_policy(self.SCHEMA3);save_actor(old,0,path)
            again,schema,_=read_policy(path);self.assertEqual(schema,3)
            for (name,a),(_,b) in zip(old.state_dict().items(),again.state_dict().items()):
                self.assertTrue(torch.equal(a,b),name)
            text=Path(path).read_text().split('\n',1)
            self.assertEqual(text[0],'ARMY_SQUAD_POLICY 3 97 32 0')

    def test_truncated_schema4_artifact_is_refused(self):
        import tempfile,os
        with tempfile.TemporaryDirectory() as work:
            path=os.path.join(work,'squad.policy');save_actor(Actor(4),0,path,schema=4)
            text=Path(path).read_text().split()
            Path(path).write_text(' '.join(text[:-1]))
            with self.assertRaises(ValueError):read_policy(path)
            Path(path).write_text(' '.join(text[:5]+['128','8']+text[7:]))
            with self.assertRaises(ValueError):read_policy(path)

    def test_pack_returns_flat_timing_mask(self):
        rows=[[0.]*FEATURES4 for _ in range(3)]
        features,legal=pack(dict(schema=4,features=rows,legal=[1,0,1],legal_now=[0,0,1]))
        self.assertEqual(features.shape,(32,FEATURES4));self.assertEqual(legal.shape,(64,))
        self.assertEqual(legal[:6].tolist(),[True,False,False,False,True,True])
        self.assertFalse(legal[6:].any())
        with self.assertRaises(ValueError):pack(dict(schema=4,features=[[0.]*FEATURES for _ in range(3)],legal=[1,0,1],legal_now=[0,0,1]))
        # Schema 3 is unchanged.
        f3,l3=pack(dict(schema=3,features=[[0.]*FEATURES]*2,legal=[1,1]))
        self.assertEqual((f3.shape,l3.shape),((32,FEATURES),(32,)))
        # The critic averages legal rows, whichever timing made them legal.
        features[2,0]=4.;value=critic_features(features,legal,[1,1,0])
        self.assertEqual(value.shape,(FEATURES4+3,));self.assertEqual(float(value[0]),2.)

    def test_distribution_over_flat_logits_masks_timing(self):
        actor=Actor(4)
        x=torch.zeros((2,32,FEATURES4));legal=torch.zeros((2,64),dtype=torch.bool);legal[:,0]=True;legal[:,3]=True
        d=distribution(actor,x,legal,1.)
        self.assertEqual(tuple(d.probs.shape),(2,64))
        self.assertAlmostEqual(float(d.probs[:,[0,3]].sum()/2),1.,places=6)
        self.assertEqual(float(d.probs[:,[1,2]+list(range(4,64))].sum()),0.)
        # Flat index row*2+timing: logit 3 is row 1, go now.
        with torch.no_grad():
            actor.output.bias.copy_(torch.tensor([0.,5.]))
            self.assertEqual(int(distribution(actor,x,legal,1.).probs[0].argmax()),3)

    def test_schema4_update_is_finite(self):
        import copy
        actor=migrate(read_policy(self.SCHEMA3)[0]);frozen=copy.deepcopy(actor);critic=Critic(FEATURES4);rows=[]
        for i in range(16):
            x=np.zeros((32,FEATURES4),dtype=np.float32);x[:3,0]=np.arange(3)
            legal=np.zeros(64,dtype=bool);legal[[0,2,3,4,5]]=True
            d=distribution(actor,torch.from_numpy(x),torch.from_numpy(legal),1.)
            action=[0,3,5][i%3]
            rows.append(dict(features=x,legal=legal,critic=np.zeros(FEATURES4+3,dtype=np.float32),
                action=action,log_prob=float(d.log_prob(torch.tensor(action)).detach()),advantage=float(action%2),returns=0.))
        optimizer=torch.optim.Adam(list(actor.parameters())+list(critic.parameters()),lr=1e-3)
        result=update(actor,critic,frozen,rows,optimizer,1.,torch.Generator().manual_seed(1),epochs=2)
        self.assertTrue(result['actor_steps']>0)
        self.assertTrue(all(torch.isfinite(p).all() for p in actor.parameters()))

    def test_outcome_shares_and_go_now_share(self):
        episodes=[dict(outcomes={'committed':2,'committed_now':2,'retain':4},decisions=8,go_now_share=.25,now_legal_share=.5,committed_now=2),
                  dict(outcomes={'retain':2},decisions=2,go_now_share=0.,now_legal_share=0.,committed_now=0)]
        stats=outcome_stats(episodes)
        self.assertEqual(stats['outcome_shares'],{'committed':.2,'committed_now':.2,'retain':.6})
        self.assertAlmostEqual(stats['go_now_share'],.2);self.assertAlmostEqual(stats['now_legal_share'],.4)
        self.assertEqual(stats['committed_now'],2)
        self.assertNotIn('go_now_share',outcome_stats([dict(outcomes={'retain':1},decisions=1)]))


class MapViewTests(unittest.TestCase):
    """Plan 026 4c: the map-view raster, its pooling and its embedding."""
    def setUp(self):torch.set_num_threads(1);torch.manual_seed(4)

    @staticmethod
    def raster(seed):
        return np.random.default_rng(seed).integers(0,256,RASTER_BYTES,dtype=np.uint8)

    def test_hex_round_trip_and_pooling_matches_a_loop(self):
        data=self.raster(1);text=data.tobytes().hex()
        self.assertEqual(bytes.fromhex(text),data.tobytes())
        pooled=raster_pool(text)
        self.assertEqual((pooled.dtype,pooled.shape),(np.float32,(RASTER_POOLED,)))
        self.assertTrue(np.array_equal(pooled,raster_pool(data.tobytes())))
        for c in range(8):
            for py in range(4):
                for px in range(4):
                    total=sum(int(data[c*256+(py*4+j)*16+px*4+i]) for j in range(4) for i in range(4))
                    self.assertEqual(pooled[c*16+py*4+px],np.float32(total)/np.float32(4080))
        self.assertEqual(float(raster_pool(bytes(RASTER_BYTES)).sum()),0.)
        self.assertEqual(float(raster_pool(bytes([255])*RASTER_BYTES).min()),1.)
        with self.assertRaises(ValueError):raster_pool(text[:-2])

    def test_pack_raster_only_for_schema4(self):
        self.assertIsNone(pack_raster(dict(schema=4,features=[],legal=[],legal_now=[])))
        text=self.raster(2).tobytes().hex()
        self.assertTrue(np.array_equal(pack_raster(dict(schema=4,legal_now=[],raster=text)),raster_pool(text)))
        with self.assertRaises(ValueError):pack_raster(dict(schema=3,raster=text))

    def test_embedding_matches_numpy_and_enters_every_row(self):
        actor=Actor(4)
        with torch.no_grad():
            for p in actor.parameters():p.copy_(torch.randn_like(p)*.3)
        pooled=np.stack([raster_pool(self.raster(s).tobytes()) for s in range(4)])
        x=torch.randn(4,32,FEATURES4)
        with torch.no_grad():
            got=actor.heads(x,torch.from_numpy(pooled)).numpy()
            hidden=actor.input(x).double().numpy()
        w=actor.raster.weight.detach().double().numpy();b=actor.raster.bias.detach().double().numpy()
        p=actor.project.weight.detach().double().numpy()
        embedding=np.maximum(pooled.astype(np.float64)@w.T+b,0)@p.T                 # (4,32)
        out=np.maximum(hidden+embedding[:,None,:],0)@actor.output.weight.detach().double().numpy().T+actor.output.bias.detach().double().numpy()
        self.assertLess(float(np.abs(got-out).max()),1e-5)
        # Zero raster weights (a migrated actor): the map view changes nothing.
        old,_,_=read_policy(Schema4Tests.SCHEMA3);new=migrate(old)
        with torch.no_grad():self.assertTrue(torch.equal(new.heads(x,torch.from_numpy(pooled)),new.heads(x)))
        with self.assertRaises(ValueError):old(x[...,:FEATURES],torch.from_numpy(pooled))

    def test_critic_and_update_with_map_view(self):
        import copy
        actor=migrate(read_policy(Schema4Tests.SCHEMA3)[0]);frozen=copy.deepcopy(actor);critic=Critic(FEATURES4,raster=True);rows=[]
        # A zero map view gets no gradient; seeding its embedding layer changes no logit.
        x0=torch.randn(3,32,FEATURES4);view0=torch.from_numpy(raster_pool(self.raster(99).tobytes()))
        with torch.no_grad():before_logits=actor(x0,view0)
        state=torch.get_rng_state()
        self.assertTrue(seed_map_view(actor,7));self.assertTrue(torch.equal(state,torch.get_rng_state()))
        self.assertFalse(seed_map_view(actor,7))           # already seeded: left alone
        with torch.no_grad():self.assertTrue(torch.equal(actor(x0,view0),before_logits))
        self.assertTrue(critic.raster);self.assertEqual(critic.net[0].in_features,FEATURES4+3+RASTER_POOLED)
        self.assertFalse(Critic(FEATURES4).raster);self.assertEqual(Critic(FEATURES4).net[0].in_features,FEATURES4+3)
        for i in range(24):
            x=np.zeros((32,FEATURES4),dtype=np.float32);x[:3,0]=np.arange(3)
            legal=np.zeros(64,dtype=bool);legal[[0,2,3,4,5]]=True
            view=raster_pool(self.raster(i).tobytes())
            d=distribution(actor,torch.from_numpy(x),torch.from_numpy(legal),1.,torch.from_numpy(view))
            action=[0,3,5][i%3]
            value_input=critic_features(x,legal,[1,1,0],view)
            self.assertEqual(value_input.shape,(FEATURES4+3+RASTER_POOLED,))
            self.assertTrue(np.array_equal(value_input[-RASTER_POOLED:],view))
            rows.append(dict(features=x,legal=legal,critic=value_input,raster=view,
                action=action,log_prob=float(d.log_prob(torch.tensor(action)).detach()),advantage=float(i%2),returns=0.))
        self.assertEqual(tuple(stacked_rasters(rows).shape),(24,RASTER_POOLED))
        self.assertIsNone(stacked_rasters([{k:v for k,v in r.items() if k!='raster'} for r in rows]))
        with self.assertRaises(ValueError):stacked_rasters(rows[:2]+[{k:v for k,v in rows[2].items() if k!='raster'}])
        # Unseeded, the zero map view is a saddle: the same update leaves it at exactly zero.
        unseeded=migrate(read_policy(Schema4Tests.SCHEMA3)[0]);spare=Critic(FEATURES4,raster=True)
        update(unseeded,spare,frozen,rows,torch.optim.Adam(list(unseeded.parameters())+list(spare.parameters()),lr=1e-2),
               1.,torch.Generator().manual_seed(1),epochs=2)
        for p in (unseeded.raster.weight,unseeded.raster.bias,unseeded.project.weight):self.assertEqual(float(p.abs().sum()),0.)
        optimizer=torch.optim.Adam(list(actor.parameters())+list(critic.parameters()),lr=1e-2)
        result=update(actor,critic,frozen,rows,optimizer,1.,torch.Generator().manual_seed(1),epochs=2)
        self.assertTrue(result['actor_steps']>0)
        self.assertTrue(all(torch.isfinite(p).all() for p in actor.parameters()))
        # Seeded, the gradient reaches the projection and the map view starts to count.
        self.assertFalse(torch.equal(actor.project.weight.detach(),torch.zeros_like(actor.project.weight)))


def _pool_task(worker, task):
    """Module-level so a spawned rollout process can unpickle it (ProcessPoolTests)."""
    import os,time
    index,delay,fail=task
    time.sleep(delay)
    if fail:raise ValueError(f'task {index} failed on purpose')
    return index,os.getpid(),worker.proc.pid,worker.hello['build']


def _alive(pid):
    """True while pid exists and is not a zombie."""
    try:state=Path(f'/proc/{pid}/stat').read_text().rsplit(')',1)[1].split()[0]
    except OSError:return False
    return state!='Z'


class ProcessPoolTests(unittest.TestCase):
    """Plan 026 P3c: one process per worker keeps ElasticPool's contract. Real simulator workers
    are started (for their hello only; no battle is fought)."""
    def setUp(self):
        import tempfile
        from tools.neural import native
        if not Path(native.BINARY).exists():self.skipTest('No training binary')
        self.binary=native.BINARY;self.dir=tempfile.TemporaryDirectory();self.addCleanup(self.dir.cleanup)

    def test_order_capacity_and_error_leave_no_process(self):
        import time,multiprocessing
        from tools.neural.worker import ProcessPool
        schedule=[]
        def capacity():
            # 3 for the first 0.8 s of a run, then 1, then 2 (rechecked between tasks).
            elapsed=time.monotonic()-schedule[0]
            return 3 if elapsed<.8 else 1 if elapsed<1.6 else 2   # before the start (negative): 3
        pool=ProcessPool(self.binary,self.dir.name,capacity);seen=set()
        try:
            schedule[:]=[time.monotonic()]
            self.assertEqual(pool.hello()['schema'],3)
            # Warm up three children first, so starting them (seconds) does not eat the timed window.
            schedule[:]=[time.monotonic()+60]
            self.assertEqual([r[0] for r in pool.run([(i,0.,False) for i in range(3)],_pool_task)],[0,1,2])
            self.assertEqual(len(pool.idle),3)
            tasks=[(i,.25,False) for i in range(14)]
            pool.peak=0;schedule[:]=[time.monotonic()]
            results=pool.run(tasks,_pool_task)
            self.assertEqual([r[0] for r in results],list(range(14)))
            self.assertEqual(pool.peak,3)
            self.assertEqual(pool.created,3)
            self.assertGreaterEqual(len({r[1] for r in results}),2)
            self.assertEqual(len(pool.idle),2)            # trimmed to the cap at the end of the run
            self.assertTrue(all(r[1]!=__import__('os').getpid() for r in results))
            seen|={(r[1],r[2]) for r in results}|{(c.process.pid,c.simulator) for c in pool.children}
            # A failing task propagates with the child's traceback; the other tasks finish.
            schedule[:]=[time.monotonic()-10]              # cap 2
            with self.assertRaises(ValueError) as caught:
                pool.run([(i,.2,i==3) for i in range(6)],_pool_task)
            self.assertIn('task 3 failed',str(caught.exception))
            self.assertIn('_pool_task',''.join(getattr(caught.exception,'__notes__',[])))
            # The pool stays usable after an error.
            again=pool.run([(i,0.,False) for i in range(4)],_pool_task)
            self.assertEqual([r[0] for r in again],[0,1,2,3])
            seen|={(r[1],r[2]) for r in again}|{(c.process.pid,c.simulator) for c in pool.children}
        finally:
            pool.close()
        deadline=time.monotonic()+10
        while any(_alive(p) for pair in seen for p in pair) and time.monotonic()<deadline:time.sleep(.1)
        self.assertFalse([p for pair in seen for p in pair if _alive(p)])
        self.assertEqual(multiprocessing.active_children(),[])

    def test_failing_child_exits_with_its_simulator(self):
        import time
        from tools.neural.worker import ProcessPool
        pool=ProcessPool(self.binary,self.dir.name,lambda:1)
        try:
            pool.hello();child=pool.idle[0];pids=(child.process.pid,child.simulator)
            self.assertTrue(all(_alive(p) for p in pids))
            with self.assertRaises(ValueError):pool.run([(0,0.,True)],_pool_task)
            self.assertEqual(pool.children,[])
            deadline=time.monotonic()+10
            while any(_alive(p) for p in pids) and time.monotonic()<deadline:time.sleep(.1)
            self.assertFalse([p for p in pids if _alive(p)])   # before close(): the child cleaned up itself
        finally:pool.close()


class HoldHandicapTests(unittest.TestCase):
    """Plan 027 hold probe (tools/neural/authority.py --hold-arms)."""
    def setUp(self):
        torch.set_num_threads(1);torch.manual_seed(3)
        from tools.neural import authority
        self.authority=authority;self.addCleanup(lambda:setattr(authority._hold,'offset',None))
        self.actor=Actor()
        with torch.no_grad():self.actor.output.bias.fill_(0.)

    def run_arm(self,offset,features,legal,temperature=.05):
        hold=self.authority._hold;hold.offset,hold.gaps,hold.alternatives=offset,[],0
        with torch.no_grad():d=self.authority.hold_distribution(self.actor,features,legal,temperature)
        gaps,count=list(hold.gaps),hold.alternatives;hold.offset=None
        return d,gaps,count

    def test_offset_zero_and_no_handicap_are_plain_distribution(self):
        x=torch.randn((32,FEATURES));legal=torch.zeros(32,dtype=torch.bool);legal[:5]=True
        with torch.no_grad():plain=distribution(self.actor,x,legal,.05).logits
        self.authority._hold.offset=None
        with torch.no_grad():self.assertTrue(torch.equal(self.authority.hold_distribution(self.actor,x,legal,.05).logits,plain))
        d,_,count=self.run_arm(0.,x,legal)
        self.assertTrue(torch.equal(d.logits,plain));self.assertEqual(count,1)

    def test_offset_moves_hold_by_its_gap_and_records_it(self):
        # HOLD 1.3 beats the best legal alternative (row 2, 1.0) by 0.3; illegal row 5 is higher still.
        fixed=torch.zeros(32);fixed[0],fixed[1],fixed[2],fixed[5]=1.3,.4,1.,9.
        class Fixed(torch.nn.Module):
            def forward(s,f,r=None):return fixed.clone()
        self.actor=Fixed();x=torch.zeros((32,FEATURES));legal=torch.zeros(32,dtype=torch.bool);legal[:4]=True
        d,gaps,_=self.run_arm(-.2,x,legal)
        self.assertEqual(int(d.probs.argmax()),0);self.assertAlmostEqual(gaps[0],.3,places=6)
        d,gaps,_=self.run_arm(-.4,x,legal)
        self.assertEqual(int(d.probs.argmax()),2);self.assertAlmostEqual(gaps[0],.3,places=6)  # raw gap recorded

    def test_never_hold_masks_hold_only_when_something_else_is_legal(self):
        x=torch.randn((32,FEATURES));legal=torch.zeros(32,dtype=torch.bool);legal[0]=True
        d,gaps,count=self.run_arm('never',x,legal)
        self.assertEqual(float(d.probs[0]),1.);self.assertEqual((gaps,count),([],0))
        legal[3]=True
        d,_,count=self.run_arm('never',x,legal)
        self.assertEqual(float(d.probs[0]),0.);self.assertEqual(int(d.probs.argmax()),3);self.assertEqual(count,1)

    def test_arm_names(self):
        self.assertEqual(self.authority.hold_arm_names('0,-0.2,never'),{'hold+0':0.,'hold-0.2':-.2,'never-hold':'never'})
        with self.assertRaises(ValueError):self.authority.hold_arm_names('-0.2,0')
