import importlib.util, unittest
from pathlib import Path
spec=importlib.util.spec_from_file_location('analyzer',Path(__file__).parents[1]/'tools/analyze_battle.py')
analyzer=importlib.util.module_from_spec(spec);spec.loader.exec_module(analyzer)
def row(i,time,**kw):
    r=dict(id=i,parent=i-1,time=time,soldier=1,squad=0,order=1,issuer=0,plan=1,geometry=1,kind='heartbeat',reason='hold',phase='HOLD / SUPPRESS',position=[0,0,0],goal=[0,0,0],order_goal=[0,0,0],cover=[0,0,0],assigned=True,protected=True,near_shelter=True,support_ready=True,blocked=False,alive=True,action=2,task=3,stance=0,rounds=0,aim=.7,suppression=0,knowledge=[dict(enemy=32,position=[30,0,0])])
    r.update(kw);return r
class AnalysisTests(unittest.TestCase):
    def test_new_move_does_not_inherit_previous_hold_time(self):
        rows=[row(1,0,knowledge=[],phase='SEARCH'),row(2,25,knowledge=[],phase='SEARCH'),row(3,26,knowledge=[],phase='SEARCH',goal=[20,0,0],order=2)]
        self.assertNotIn('stalled_search',{f['kind'] for f in analyzer.analyze(rows)['findings']})
        rows.append(row(4,50,knowledge=[],phase='SEARCH',goal=[20,0,0],order=2))
        self.assertIn('stalled_search',{f['kind'] for f in analyzer.analyze(rows)['findings']})
    def test_hold_enum_counts_exposed_inactivity(self):
        rows=[row(1,0,action=4,protected=False,near_shelter=False),row(2,6,action=4,protected=False,near_shelter=False)]
        self.assertIn('exposed_inactivity',{f['kind'] for f in analyzer.analyze(rows)['findings']})
    def test_productive_hold(self):
        result=analyzer.analyze([row(i,i*5,rounds=i*2) for i in range(1,15)])
        self.assertEqual(result['findings'],[]);self.assertGreater(result['soldier_seconds']['firing'],50)
    def test_cover_reversal_has_evidence(self):
        result=analyzer.analyze([row(1,0),row(2,4,cover=[5,0,0]),row(3,8)])
        self.assertEqual(result['metrics']['cover_returns'],1)
        self.assertTrue(all(f['evidence'] and f['hypothesis'] for f in result['findings']))
    def test_geometry_or_new_enemy_not_unnecessary(self):
        for extra in [dict(geometry=2),dict(knowledge=[dict(enemy=40,position=[0,30,0])])]:
            result=analyzer.analyze([row(1,0),row(2,4,cover=[5,0,0],**extra)])
            self.assertEqual(result['metrics'].get('unnecessary_cover_changes',0),0)
    def test_orders_and_exposed_idle(self):
        rows=[row(1,0,assigned=False,near_shelter=False,protected=False,order_goal=[10,0,0]),row(2,3,order=2,assigned=False,near_shelter=False,protected=False,order_goal=[20,0,0]),row(3,6,order=3,assigned=False,near_shelter=False,protected=False,order_goal=[-20,0,0])]
        kinds={f['kind'] for f in analyzer.analyze(rows)['findings']}
        self.assertIn('rapid_order_reversal',kinds);self.assertIn('exposed_inactivity',kinds)
    def test_plan_proposals_not_execution(self):
        self.assertEqual(analyzer.analyze([row(1,0),row(2,5,kind='proposal_deferred',goal=[90,0,0]),row(3,10)])['findings'],[])
    def test_unavailable_corporal_is_not_a_stalled_squad(self):
        rows=[row(1,0,alive=False),row(2,0,soldier=2,role=2),
              row(3,1,kind='proposal_accepted',goal=[12,0,0]),
              row(4,8,alive=False),row(5,8,soldier=2,role=2,position=[9,0,0])]
        m=analyzer.analyze(rows)['maneuvers'][0]
        self.assertEqual(m['members'],1);self.assertEqual(m['moved'],1)
    def test_waypoint_completion_is_not_group_success(self):
        rows=[row(1,0),row(2,1,kind='proposal_accepted',goal=[20,0,0]),
              row(3,5),row(4,6,kind='plan_completed')]
        m=analyzer.analyze(rows)['maneuvers'][0]
        self.assertTrue(m['reported_complete']);self.assertEqual(m['status'],'no_observed_movement')
    def test_pause_is_distinct_from_an_unsupported_release(self):
        rows=[row(1,0,kind='movement_paused'),row(2,1,movement_block=1,task=9,action=0,support_ready=False),row(3,2,position=[1,0,0])]
        m=analyzer.analyze(rows)['metrics'];self.assertEqual(m['movement_paused'],1)
        self.assertEqual(m.get('unsupported_crossing_seconds',0),0)
if __name__=='__main__':unittest.main()
