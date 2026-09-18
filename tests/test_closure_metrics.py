import json
from pathlib import Path
import sys
import tempfile
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import closure_metrics

class ClosureTests(unittest.TestCase):
    def test_survivor_pairing_and_teams(self):
        def s(i,x,alive=1): return dict(id=i,position=[x,0,0],alive=alive)
        initial={u['id']:u for u in [s(0,0),s(1,20),s(8,-20),s(32,100)]}
        result=closure_metrics.front_sample(dict(time=120,soldiers=[s(0,100,0),s(1,30),s(8,20),s(32,80)]),initial)
        self.assertEqual(result['platoons'],[25,20])
        self.assertEqual(result['squads'][0]['paired_forward_displacement'],10)

    def test_missing_horizon_and_hit_accounting(self):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d)
            frames=[dict(time=t,soldiers=[dict(id=0,position=[t,0,0],alive=1),dict(id=32,position=[40,0,0],alive=int(t<120))]) for t in (0,30,120)]
            events=[dict(kind=3,text='hit'),dict(kind=3,text='hit'),dict(kind=4,text='incapacitated')]
            for name,values in [('evaluation',frames),('events',events),('shots',[dict(hit=1),dict(hit=1),dict(hit=0)])]:
                (p/(name+'.jsonl')).write_text(''.join(json.dumps(x)+'\n' for x in values))
            r=closure_metrics.evaluate(p)
            self.assertEqual(r['closure_120s_m'],120)
            self.assertIsNone(r['closure_240s_m'])
            self.assertEqual(r['soldier_minutes'],[2,2])
            self.assertEqual(r['hits_per_soldier_minute'],.5)
            self.assertEqual((r['casualties_total'],r['non_incapacitating_hits'],r['wounded_incapacitated'],r['killed']),(1,1,1,0))
