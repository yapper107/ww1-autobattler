import importlib.util, json, tempfile, unittest
from pathlib import Path
spec=importlib.util.spec_from_file_location('routes',Path(__file__).parents[1]/'tools/evaluate_routes.py')
routes=importlib.util.module_from_spec(spec);spec.loader.exec_module(routes)
spec=importlib.util.spec_from_file_location('investigation',Path(__file__).parents[1]/'tools/investigate_engagement.py')
investigation=importlib.util.module_from_spec(spec);spec.loader.exec_module(investigation)
class RouteEvaluationTests(unittest.TestCase):
    def fixture(self, second=True, survives=True, complete=True):
        tmp=tempfile.TemporaryDirectory();self.addCleanup(tmp.cleanup);root=Path(tmp.name)
        (root/'manifest.json').write_text(json.dumps(dict(seed=107,encounter=5)))
        (root/'routes.jsonl').write_text(json.dumps(dict(id=1,start=[-20,20,0],destination=[0,20,0]))+'\n')
        trace=[dict(id=10,kind='proposal_accepted',route=1,soldier=0,time=0,squad=0)]
        if complete:trace.append(dict(id=11,kind='plan_completed',route=1,soldier=0,time=3,reason='arrived'))
        (root/'trace.jsonl').write_text(''.join(json.dumps(r)+'\n' for r in trace))
        frames=[]
        for tick in range(17):
            units=[dict(id=i,alive=True,route=1,position=[i,20,0],support=7,task=9,observer_exposed=True,observer_targets=[32] if i==0 or second else []) for i in range(2)]
            units.extend([dict(id=7,alive=True,route=0,position=[-20,0,0]),dict(id=32,alive=survives or tick<10,route=0,position=[0,0,0])])
            frames.append(dict(time=tick*.2,soldiers=units))
        (root/'evaluation.jsonl').write_text(''.join(json.dumps(f)+'\n' for f in frames));return root
    def test_sustained_second_angle(self):
        result=routes.evaluate_routes(self.fixture());self.assertTrue(result['passed']);self.assertAlmostEqual(result['actual_exposed_mover_seconds'][1],6.4)
    def test_one_mover_not_envelopment(self):self.assertFalse(routes.evaluate_routes(self.fixture(second=False))['passed'])
    def test_dead_defender_not_a_second_angle(self):self.assertFalse(routes.evaluate_routes(self.fixture(survives=False))['passed'])
    def test_arrival_without_completion_is_distinct(self):self.assertFalse(routes.evaluate_routes(self.fixture(complete=False))['passed'])
    def test_gate_audit_distinguishes_instantaneous_and_sustained(self):
        root=self.fixture(survives=False)
        result=investigation.investigate(root)['routes'][0]
        self.assertEqual(result['max_arrived'],2)
        self.assertEqual(result['max_firing'],2)
        self.assertEqual(result['max_second_angle'],2)
        self.assertEqual(result['decision'],10)
        self.assertEqual(result['events'][0]['id'],11)
        self.assertFalse(routes.evaluate_routes(root)['passed'])
    def test_gate_audit_accepts_latest_pointer(self):
        root=self.fixture();(root/'latest.json').write_text(json.dumps({'run':'.'}))
        self.assertEqual(investigation.investigate(root/'latest.json')['routes'][0]['squad'],0)
    def test_observer_holds_distinguishes_screening_and_firing(self):
        root=self.fixture()
        frames=[json.loads(line) for line in (root/'evaluation.jsonl').read_text().splitlines()]
        for frame in frames:
            for s in frame['soldiers'][:2]:
                s['action']=4;s['observer_exposed']=s['id']==0;s['solution']=False
        (root/'evaluation.jsonl').write_text(''.join(json.dumps(f)+'\n' for f in frames))
        result=investigation.observer_holds(root)
        self.assertAlmostEqual(result['stationary_seconds'],6.4)
        self.assertAlmostEqual(result['stationary_screened_seconds'],3.2)
        self.assertAlmostEqual(result['stationary_exposed_without_solution_seconds'],3.2)
    def test_recovery_audit_retains_decision_evidence(self):
        root=self.fixture()
        rows=[dict(kind='path_recovery',route=1,soldier=0,time=t,decision=d) for t,d in [(1,12),(3,18)]]
        (root/'paths.jsonl').write_text(''.join(json.dumps(r)+'\n' for r in rows))
        evidence=investigation.investigate(root)['routes'][0]['path_recoveries'][0]
        self.assertEqual(evidence,dict(count=2,first=1,last=3,first_decision=12,last_decision=18))
if __name__=='__main__':unittest.main()
