import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('after_action', Path(__file__).parents[1] / 'tools/after_action.py')
aar = importlib.util.module_from_spec(spec)
spec.loader.exec_module(aar)


class AfterActionTests(unittest.TestCase):
    def test_memory_timing_delivery_and_observer_outcome(self):
        with tempfile.TemporaryDirectory() as tmp:
            run = Path(tmp)
            (run / 'manifest.json').write_text(json.dumps({'gameplay_digest': 'abc', 'winner': -1, 'duration': 5, 'shots': 4}))
            def write(name, rows):
                (run / name).write_text(''.join(json.dumps(r) + '\n' for r in rows))
            write('trace.jsonl', [
                dict(id=1, time=1, soldier=5, kind='mental_map', regions=[{'estimate': 3}], knowledge=[{'enemy': 32, 'personal': False}]),
                dict(id=2, time=2, soldier=5, squad=0, kind='platoon_task', reason='FightHere'),
                dict(id=3, time=3, soldier=5, kind='mental_map', regions=[{'estimate': 99}]),
                dict(id=4, time=3, soldier=0, issuer=5, order=8, kind='order_issued'),
                dict(id=5, time=3.75, soldier=0, order=8, kind='order_received'),
                dict(id=6, time=4, soldier=0, issuer=5, order=9, kind='order_issued'),
                dict(id=7, time=4, soldier=0, issuer=8, order=8, kind='radio_sent'),
                dict(id=8, time=5, soldier=0, issuer=8, order=8, kind='radio_received')])
            write('evaluation.jsonl', [dict(time=t, soldiers=[dict(id=0, squad=0, alive=alive, rounds=rounds, position=[x, 0, 0])])
                                       for t, alive, rounds, x in [(0, 1, 0, 0), (5, 0, 4, 3)]])
            write('events.jsonl', [dict(time=5, kind=4, actor=32, target=0, text='rifle wound')])
            report = aar.build_report(run)
            self.assertEqual(report['timeline'][0]['knowledge']['regions'][0]['estimate'], 3)
            self.assertEqual(report['timeline'][0]['observed_next']['shots'], 4)
            self.assertEqual(report['timeline'][0]['observed_next']['casualties'], 1)
            self.assertEqual(report['net']['deliveries'][0]['delay'], .75)
            self.assertEqual(report['net']['unmatched_orders'], 1)
            self.assertEqual(report['net']['deliveries'][1]['channel'], 'squad radio')
            self.assertEqual(report['net']['deliveries'][1]['delay'], 1)
            self.assertEqual(report['net']['explicit_losses'], [])
            self.assertEqual(report['outcome']['winner'], -1)
            self.assertEqual(report['casualty_causes'], {'rifle wound': 1})
            self.assertIn('not classified as lost', aar.render(report))

    def test_missing_telemetry_is_unknown(self):
        with tempfile.TemporaryDirectory() as tmp:
            run = Path(tmp)
            (run / 'manifest.json').write_text('{}')
            report = aar.build_report(run)
            self.assertTrue(any('evaluation.jsonl missing' in item for item in report['limitations']))
            self.assertEqual(report['timeline'], [])


class HumanSummaryTests(unittest.TestCase):
    def test_consecutive_duplicates_keep_all_evidence_and_separate_squads(self):
        def row(squad,at,tid,reason):
            return dict(squad=squad,actor=squad*8,time=at,trace_id=tid,kind='drill_accepted',reason=reason)
        result=aar.collapse_transitions([row(0,1,10,'Support'),row(1,2,11,'Support'),row(0,3,12,'Support'),row(0,4,13,'Attack'),row(0,5,14,'Support')])
        self.assertEqual(len(result),4)
        self.assertEqual(result[0]['evidence_ids'],[10,12])
        self.assertEqual(result[0]['repeats'],2)
        self.assertEqual(result[-1]['repeats'],1)

    def test_summary_precedes_appendix_and_uses_decision_time_picture(self):
        decision=dict(time=12,trace_id=42,squad=1,actor=8,kind='drill_accepted',reason='radio opportunity: covered route',
                      knowledge=dict(time=10,trace_id=40,regions=[dict(estimate=4)],contacts=[dict(enemy=32,personal=False)]),
                      observed_next=dict(shots=8,casualties=1,mean_displacement=10,until=20))
        report=dict(outcome=dict(winner=0,duration=60,shots=8),timeline=[decision],net=dict(deliveries=[dict(delay=.75)],explicit_losses=[],unmatched_orders=1))
        frames=[(0,{8:dict(squad=1,alive=True,rounds=0)}),(60,{8:dict(squad=1,alive=False,rounds=8)})]
        report['summary']=aar.human_summary(report,frames,[])
        text=aar.render_summary(report)
        self.assertIn('estimate 4.0 against 1',text)
        self.assertIn('[trace 42](#trace-42)',text)
        self.assertIn('1/1 lost',text)
        self.assertIn('not proof of causation',text)
        self.assertLess(len(text.split()),600)
        self.assertEqual(report['summary']['net']['explicit_drops'],0)


if __name__ == '__main__':
    unittest.main()

class LeaderAttributionTests(unittest.TestCase):
    def test_profile_effect_calls_are_linked_in_summary(self):
        with tempfile.TemporaryDirectory() as tmp:
            p=Path(tmp)
            (p/'manifest.json').write_text(json.dumps(dict(duration=5,winner=-1,shots=0,leader_effects=1,platoon_profiles=[[.9,.5,.9,.9],[.15,.9,.2,.2]])))
            (p/'trace.jsonl').write_text(json.dumps(dict(id=77,time=1,kind='leader_call',soldier=5,squad=0,reason='FightHere; leader risk threshold=.5',goal=[0,0,0]))+'\n')
            report=aar.build_report(p);text=aar.render_summary(report)
            self.assertIn('Platoon leader effects',text);self.assertIn('[trace 77](#trace-77)',text);self.assertIn('risk threshold',text)
