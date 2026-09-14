import importlib.util,json,tempfile,unittest
from pathlib import Path
spec=importlib.util.spec_from_file_location('evaluation',Path(__file__).parents[1]/'tools/evaluate_ai.py');evaluation=importlib.util.module_from_spec(spec);spec.loader.exec_module(evaluation)
class Metrics(unittest.TestCase):
    def run_rows(self,rows):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d);(p/'manifest.json').write_text(json.dumps(dict(build='test',seed=1,duration=20,winner=-1,shots=0)))
            (p/'trace.jsonl').write_text('');(p/'evaluation.jsonl').write_text('\n'.join(json.dumps(r) for r in rows))
            return evaluation.evaluate(p)
    def rows(self,move=False):
        return [dict(time=t,soldiers=[dict(id=i,alive=True,position=[t if move else 0,i,0],action=0 if move else 2,task=7 if move else 3,rounds=0,solution=t>0,enemy=32,distance=40-t,track=[40,i,0],plan=1,goal=[20,i,0]) for i in (2,3)]) for t in (0,10,20)]
    def test_duration_weighting(self):
        r=self.run_rows(self.rows());self.assertEqual(r['hold_fire_seconds'],40);self.assertEqual(r['hold_no_solution_share'],.5);self.assertEqual(r['completed_useful_maneuvers'],[])
    def test_completed_closure(self):
        r=self.run_rows(self.rows(True));self.assertEqual(len(r['completed_useful_maneuvers']),1)
    def test_casualties_do_not_count_as_arrival(self):
        rows=self.rows(True);rows[-1]['soldiers'][0]['alive']=False
        self.assertEqual(self.run_rows(rows)['completed_useful_maneuvers'],[])
if __name__=='__main__':unittest.main()
