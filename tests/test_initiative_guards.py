import sys
from pathlib import Path
import unittest
sys.path.insert(0, str(Path(__file__).parents[1]/'tools'))
from initiative_guards import battle_failures, set_guards


def row(seed, strength=16, orders=100, duration=360):
    return dict(seed=seed,gen_seed=0,status='complete',survivors=[strength,8],initial_actives=[32,32],firing_squads=[[0,1,2],[4,5,6]],
                metrics=dict(shots=100,time_to_decision=duration,orders_azure_per_minute=orders,orders_ember_per_minute=orders,under_2m=.1,nearest_m=4))


class InitiativeGuardsTests(unittest.TestCase):
    def test_equal_limit_baselines_pass_without_absolute_threshold(self):
        rows=[row(s,28) for s in range(10)]
        self.assertTrue(set_guards(rows,rows)['passed'])

    def test_remaining_strength_is_information_and_each_side_churn_can_fail(self):
        refs=[row(s) for s in range(10)];candidate=[row(s,24,150) for s in range(10)]
        checks={c['guard']:c for c in set_guards(candidate,refs)['checks']}
        self.assertNotIn('stronger_remaining_at_limit',checks)
        information=set_guards(candidate,refs)['information'][0]
        self.assertIsNone(information['passed'])
        self.assertGreater(information['paired_delta']['ci95'][0],0)
        self.assertFalse(checks['orders_azure_per_minute']['passed'])
        self.assertFalse(checks['orders_ember_per_minute']['passed'])
        self.assertTrue(checks['time_to_decision']['passed'])

    def test_more_remaining_strength_alone_no_longer_stops_measurement(self):
        refs=[row(s) for s in range(10)]
        self.assertTrue(set_guards([row(s,28) for s in range(10)],refs)['passed'])

    def test_paired_interval_crossing_zero_and_early_resolution(self):
        refs=[row(s) for s in range(10)];candidate=[row(s,orders=100+(30 if s%2 else -30),duration=200) for s in range(10)]
        result=set_guards(candidate,refs)
        self.assertTrue(result['passed'])
        self.assertEqual(result['information'][0]['eligible_pairs'],0)

    def test_trench_spacing_interval_and_informational_target(self):
        refs=[row(s) for s in range(10)];cases=[row(s) for s in range(10)]
        for s,r in enumerate(cases):
            r['metrics']['under_2m'] += .06 if s%2 else -.04
            r['metrics']['nearest_m']=2.99
        trench=set_guards(cases,refs,trenches=True)
        self.assertTrue(trench['passed'])
        self.assertFalse(trench['information'][-1]['target_met'])
        self.assertFalse(set_guards(cases,refs)['passed'])
        for r in cases:r['metrics']['under_2m']=.15
        self.assertFalse(set_guards(cases,refs,trenches=True)['passed'])

    def test_missing_or_mismatched_pairs_are_not_a_pass(self):
        with self.assertRaises(ValueError):set_guards([row(1)],[row(2)],expected=1)
        with self.assertRaises(ValueError):set_guards([row(1)],[row(1)])

    def test_participation_and_zero_shots_stop_independently(self):
        sample=row(1);self.assertEqual(battle_failures(sample),[])
        sample['metrics']['shots']=0;sample['firing_squads'][1]=[]
        self.assertEqual(len(battle_failures(sample)),2)
        self.assertEqual(battle_failures(sample,authored=False),['zero-shot battle'])


if __name__=='__main__':unittest.main()
