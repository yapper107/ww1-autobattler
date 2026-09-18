import copy
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import family_metrics
import report_family
import run_family


def fixture(root):
    def soldier(sid, x, squad, team):
        return dict(id=sid,position=[x,0,0],squad=squad,team=team,alive=1,health=100,stance=0,suppression=0,
                    route=0,action=4,task=0,rounds=10,solution=False,enemy=-1,distance=-1,track=[0,0,0],
                    observer_targets=[],observer_exposed=False,support=-1,plan=0,goal=[0,0,0],sector=[20,0,0],
                    order=0,order_issued=0,platoon_order=0,platoon_order_issued=0,machine_gun=sid==0,
                    element=None,element_role=None,base_of_fire=False)
    initial=[soldier(0,0,0,0),soldier(1,3,0,0),soldier(32,20,4,1)];frames=[]
    for time in range(3):
        units=copy.deepcopy(initial);units[0]['observer_exposed']=True
        if time:units[0].update(alive=0,health=0)
        units[1].update(position=[3+time,0,0],order=time+1,order_issued=time,goal=[20 if time==1 else 0,0,0],
                        platoon_order=time+1,platoon_order_issued=time,drill_movement=True,known_threat_sector=True)
        frames.append(dict(schema=2,time=time,soldiers=units))
    shots=[dict(schema=1,time=.5,impact_time=.8,owner=0,team=0,squad=0,support_weapon=True,element_role=None,end=[20,0,0]),
           dict(schema=1,time=2,impact_time=2,owner=1,team=0,squad=0,support_weapon=True,element_role=None,end=[20,0,0])]
    manifest=dict(evaluation_schema=2,shots_schema=1,build='test',seed=107,terrain=0,encounter=0,duration=2,duration_limit=2,
                  winner=-1,shots=2,gameplay_digest='42',trace_enabled=False,scenario_family='F1',gen_seed=1)
    root.mkdir(parents=True,exist_ok=True)
    for name,values in [('evaluation.jsonl',frames),('shots.jsonl',shots),('events.jsonl',[dict(time=.8,kind=3,actor=0,target=1,text='hit')]),('trace.jsonl',[])]:
        (root/name).write_text(''.join(json.dumps(v)+'\n' for v in values))
    (root/'manifest.json').write_text(json.dumps(manifest));(root/'scenario.json').write_text(json.dumps(dict(digest='123')))


class FamilyMetricsTests(unittest.TestCase):
    def test_duration_metrics_and_delivered_fire_not_future_shots(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);fixture(root);r=family_metrics.evaluate(root);m=r['metrics']
            self.assertEqual(m['shots'],2);self.assertEqual(m['casualty_azure'],.5);self.assertEqual(m['casualty_ember'],0)
            self.assertEqual(m['nearest_m'],3);self.assertEqual(m['under_2m'],0)
            self.assertAlmostEqual(m['exposed_without_firing'],1/3)
            self.assertEqual(m['friendly_hits'],1);self.assertEqual(m['order_reversals_per_minute'],30)
            self.assertEqual(m['gun_silent_seconds'],1);self.assertEqual(m['covered_movement_share'],.5)
            self.assertIsNone(m['assault_arrival_angle']);self.assertIn('Phase 2',r['unavailable']['assault_arrival_angle'])
            shots=list(family_metrics.rows(root/'shots.jsonl'));shots[0]['team']=1
            self.assertEqual(family_metrics.covered_movement(root,shots),0)
    def test_drill_area_and_contact_latency_require_real_samples(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);fixture(root);frames=list(family_metrics.rows(root/'evaluation.jsonl'))
            for frame in frames:
                u=frame['soldiers'][1];u.update(area_of_operation=dict(min=[0,-1,0],max=[3.5,1,0]),squad_leader=0,drill_instance=2 if frame['time'] else 1,drill_started=1 if frame['time'] else 0)
            (root/'evaluation.jsonl').write_text(''.join(json.dumps(f)+'\n' for f in frames))
            (root/'events.jsonl').write_text(json.dumps(dict(kind=0,actor=0,time=.25,target=32))+'\n')
            area,latency=family_metrics.drill_metrics(root)
            self.assertEqual(area,.5);self.assertEqual(latency,.75)
    def test_missing_schema_and_truncated_shots_fail(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);fixture(root);(root/'shots.jsonl').write_text('')
            with self.assertRaisesRegex(ValueError,'Incomplete shots'):family_metrics.evaluate(root)
            fixture(root);m=json.loads((root/'manifest.json').read_text());m['evaluation_schema']=1;(root/'manifest.json').write_text(json.dumps(m))
            with self.assertRaisesRegex(ValueError,'schema 2'):family_metrics.evaluate(root)


class FamilyReportTests(unittest.TestCase):
    def test_paired_keys_clusters_nulls_and_failures(self):
        cases=[]
        for controller,delta in [('legacy',0),('candidate90',5)]:
            for gen in (1,2):
                for seed in (107,108):cases.append(dict(controller=controller,family='F1',gen_seed=gen,seed=seed,status='complete',metrics=dict(shots=gen*10+seed+delta,absent=None)))
        cases.append(dict(controller='legacy',family='F1',gen_seed=3,seed=107,status='failed',error='visible failure'))
        r=report_family.report(cases);pair=next(p for p in r['paired'] if p['controller']=='candidate90')
        self.assertEqual(pair['metrics']['shots']['ci95'],[5,5]);self.assertEqual(pair['metrics']['shots']['clusters'],2)
        self.assertEqual(pair['paired_runs'],4);self.assertEqual(len(r['failed']),1);self.assertEqual(pair['metrics']['absent']['count'],0)
        self.assertEqual(r,report_family.report(cases))
        self.assertEqual(report_family.report(cases, len(cases)+1)['pending'],1)
        with self.assertRaisesRegex(ValueError,'More recorded'):report_family.report(cases,1)
        with self.assertRaisesRegex(ValueError,'Duplicate'):report_family.report(cases+[cases[0]])
    def test_cluster_bootstrap_retains_repeats(self):
        r=report_family.summarize([(('F1',1),0),(('F1',1),0),(('F1',2),10),(('F1',2),10)])
        self.assertEqual(r['count'],4);self.assertEqual(r['clusters'],2);self.assertEqual(r['mean'],5);self.assertEqual(r['ci95'],[0,10])


class FamilyRunnerTests(unittest.TestCase):
    def test_engagement_guard_counts_within_fixed_blocks_and_controllers(self):
        draws=[(n,107) for n in range(20)];guard=run_family.EngagementGuard(draws)
        def row(n,shots=0,controller='drills'):
            return dict(status='complete',controller=controller,gen_seed=n,seed=107,metrics=dict(shots=shots))
        for n in (0,1,10,11):guard.observe(row(n))
        guard.observe(row(2,1));guard.observe(row(2,0,'legacy'))
        self.assertFalse(guard.failed)
        guard.observe(row(12));self.assertTrue(guard.failed)
        self.assertEqual(guard.result()['zero_shot_blocks'][-1]['controller'],'legacy')
    def test_draw_separation_and_seed_ranges(self):
        a=run_family.validation_draws('a','F1','salt')
        self.assertEqual(len(a),20);self.assertEqual(len(set(a)),20)
        self.assertEqual(a,run_family.validation_draws('a','F1','salt'))
        self.assertNotEqual(a,run_family.validation_draws('b','F1','salt'))
        self.assertNotEqual(a,run_family.validation_draws('a','F1','other'))
        self.assertEqual(run_family.validation_draws('a-linux','F1','salt'),run_family.validation_draws('a-windows','F1','salt'))
        self.assertEqual(run_family.seed_list('1-3,5'),[1,2,3,5])
        with self.assertRaises(Exception):run_family.seed_list('3-1')
        with self.assertRaises(Exception):run_family.seed_list('1,1')
    def test_engagement_guard_stops_real_process_pool(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);base=root/'fixture';fixture(base)
            m=json.loads((base/'manifest.json').read_text());m['shots']=0
            (base/'manifest.json').write_text(json.dumps(m));(base/'shots.jsonl').write_text('')
            binary=root/'zero-battle'
            binary.write_text('#!/usr/bin/env python3\n'+f'''import json,sys,shutil
from pathlib import Path
if '--version' in sys.argv:print('zero-linux');sys.exit(0)
def arg(name):return sys.argv[sys.argv.index(name)+1]
out=Path(arg('--out'));run=out/'battle';out.mkdir(parents=True,exist_ok=True);shutil.copytree({str(base)!r},run)
m=json.loads((run/'manifest.json').read_text());m['gen_seed']=int(arg('--gen-seed'))
(run/'manifest.json').write_text(json.dumps(m));(out/'latest.json').write_text(json.dumps(dict(run='battle')))
''');binary.chmod(0o755)
            command=[sys.executable,'tools/run_family.py','--binary',str(binary),'--out',str(root/'runs'),'--controllers','drills','--gen-seeds','1-10','--seeds','107','--seconds','2','--jobs','1']
            result=subprocess.run(command,capture_output=True,text=True)
            self.assertEqual(result.returncode,1,result.stderr)
            data=json.loads((root/'runs/family.json').read_text())
            self.assertEqual(len(data['cases']),3);self.assertTrue(data['engagement_guard']['failed'])
            self.assertEqual(report_family.report(data['cases'],data['expected'])['pending'],7)
            strict=command.copy();strict[strict.index('--out')+1]=str(root/'strict')
            strict+=['--zero-shot-limit','1']
            result=subprocess.run(strict,capture_output=True,text=True)
            self.assertEqual(result.returncode,1,result.stderr)
            data=json.loads((root/'strict/family.json').read_text())
            self.assertEqual(len(data['cases']),1)
            self.assertEqual(data['engagement_guard']['threshold'],1)
            self.assertTrue(data['engagement_guard']['failed'])
            self.assertEqual(data['config']['engagement_guard'],1)
            self.assertEqual(report_family.report(data['cases'],data['expected'])['pending'],9)

    def test_process_pool_checkpoints_failure_and_resume(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);base=root/'fixture';fixture(base);binary=root/'fake-battle'
            binary.write_text('#!/usr/bin/env python3\n'+f'''
import json,sys,shutil
from pathlib import Path
if '--version' in sys.argv:print('fake-linux');sys.exit(0)
def arg(name):return sys.argv[sys.argv.index(name)+1]
if arg('--gen-seed')=='2':print('deliberate failure',file=sys.stderr);sys.exit(3)
out=Path(arg('--out'));run=out/'battle';out.mkdir(parents=True,exist_ok=True);shutil.copytree({str(base)!r},run)
(out/'latest.json').write_text(json.dumps(dict(run='battle')))
''');binary.chmod(0o755)
            command=[sys.executable,'tools/run_family.py','--binary',str(binary),'--out',str(root/'runs'),'--controllers','legacy','--gen-seeds','1,2','--seeds','107','--seconds','2','--jobs','2']
            p=subprocess.run(command,capture_output=True,text=True);self.assertEqual(p.returncode,1,p.stderr)
            path=root/'runs/family.json';data=json.loads(path.read_text());self.assertEqual(len(data['cases']),2,p.stderr)
            self.assertEqual(sorted(r['status'] for r in data['cases']),['complete','failed'])
            self.assertIn('deliberate failure',next(r['error'] for r in data['cases'] if r['status']=='failed'))
            p=subprocess.run(command,capture_output=True,text=True);self.assertEqual(p.returncode,1)
            self.assertEqual(data['cases'],json.loads(path.read_text())['cases'])

if __name__=='__main__':unittest.main()
