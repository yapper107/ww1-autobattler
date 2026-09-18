import json
from pathlib import Path
import sys
import tempfile
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import order_metrics

class OrderMetricsTests(unittest.TestCase):
    def test_issued_orders_both_teams_and_actual_minutes(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d)
            (root/'manifest.json').write_text(json.dumps(dict(duration=120,trace_enabled=True)))
            events=[dict(kind=6,actor=0,target=1,text='A orders B: OVERWATCH'),dict(kind=6,actor=0,target=0,text='A orders A: OVERWATCH'),dict(kind=7,actor=0,target=1),dict(kind=6,actor=32,target=33,text='C orders D: OVERWATCH')]
            trace=[dict(kind='order_issued',issuer=e['actor'],soldier=e['target']) for e in events if e['kind']==6]
            events.append(dict(kind=6,actor=5,target=0,text='Officer orders squad 1: SUPPORT'))
            for name,items in [('events',events),('trace',trace)]:
                (root/(name+'.jsonl')).write_text(''.join(json.dumps(x)+'\n' for x in items))
            result=order_metrics.evaluate(root)
            self.assertEqual(result['orders'],[2,1]);self.assertEqual(result['orders_per_minute'],[1,.5]);self.assertTrue(result['trace_event_equal'])
            (root/'trace.jsonl').write_text('')
            with self.assertRaises(ValueError):order_metrics.evaluate(root)

    def test_trace_disabled_does_not_claim_trace_equality(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d);(root/'manifest.json').write_text(json.dumps(dict(duration=360,trace_enabled=False)))
            (root/'events.jsonl').write_text(json.dumps(dict(kind=6,actor=0,target=2,text='A orders B: OVERWATCH'))+'\n')
            result=order_metrics.evaluate(root)
            self.assertIsNone(result['trace_event_equal']);self.assertEqual(result['orders_per_minute'][0],1/6)
