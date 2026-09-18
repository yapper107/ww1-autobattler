import json
from pathlib import Path
import sys
import tempfile
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import leader_metrics

class LeaderMetricsTests(unittest.TestCase):
    def test_received_coordination_censored_help_and_observer_only_staleness(self):
        with tempfile.TemporaryDirectory() as tmp:
            p=Path(tmp);(p/'manifest.json').write_text('{"duration":10}')
            frames=[dict(time=t,soldiers=[dict(id=0,team=0,alive=True,position=[-20,0,0]),dict(id=32,team=1,alive=True,position=[x,0,0])]) for t,x in ((0,0),(5,60),(10,60))]
            (p/'evaluation.jsonl').write_text(''.join(json.dumps(x)+'\n' for x in frames))
            def event(i,t,kind,reason,squad=0):return dict(id=i,time=t,kind=kind,reason=reason,squad=squad,soldier=squad*8,goal=[0,0,0])
            trace=[event(1,1,'radio_broadcast','NeedSupport'),event(2,2,'radio_broadcast','Fixing',1),event(3,2,'radio_received','0'),event(4,2,'platoon_task','FightHere: nearest known group'),event(5,3,'radio_broadcast','Assaulting'),event(6,6,'platoon_task','FightHere: nearest known group'),event(7,7,'radio_broadcast','NeedSupport')]
            (p/'trace.jsonl').write_text(''.join(json.dumps(x)+'\n' for x in trace))
            a,b=leader_metrics.evaluate(p)['sides'];self.assertEqual(a['first_coordinated_assault_s'],3);self.assertEqual(a['help_calls'],2);self.assertEqual(a['help_answered'],1);self.assertEqual(a['help_latency_s'],1);self.assertEqual(a['wrong_target_rate'],.5);self.assertEqual(a['stale_order_squad_seconds'],5)
            self.assertIsNone(b['first_coordinated_assault_s']);self.assertIsNone(b['wrong_target_rate']);self.assertIsNone(b['help_latency_s'])

class LeaderPairTests(unittest.TestCase):
    def test_role_swap_scores_and_scenario_mismatch(self):
        from run_leader_pairs import paired_summary
        def row(side,winner):return dict(gen_seed=1,seed=107,good_side=side,winner=winner,status='complete',scenario_digest='same',initial_actives=[8,8],run=str(side))
        a,b=row(0,0),row(1,1);self.assertEqual(paired_summary([a,b])[0]['score'],2)
        b['winner']=0;self.assertEqual(paired_summary([a,b])[0]['score'],0)
        b['scenario_digest']='changed'
        with self.assertRaises(AssertionError):paired_summary([a,b])

    def test_authored_pairs_keep_maps_distinct(self):
        from run_leader_pairs import paired_summary
        cases=[dict(terrain=m,seed=100,good_side=side,winner=side,status='complete',scenario_digest=None,initial_actives=[32,32],run=f'{m}/{side}') for m in (0,1) for side in (0,1)]
        self.assertEqual(len(paired_summary(cases)),2)
        self.assertEqual([p['score'] for p in paired_summary(cases)],[2,2])
