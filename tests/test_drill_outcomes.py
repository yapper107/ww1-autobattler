import copy
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
from compare_drill_outcomes import exchange, paired_exchange, compare, reviewed_exit


def row(draw, seed, own, enemy, controller='drills-phase3d', family='F1'):
    return dict(gen_seed=draw, seed=seed, controller=controller, family=family, status='complete',
                initial_actives=[24, 12], survivors=[24-own, 12-enemy],
                metrics=dict(win_azure=1, draw=0, win_ember=0, shots=100, nearest_m=5, under_2m=.01,
                             casualty_azure=own/24, casualty_ember=enemy/12, casualties_total=own+enemy,
                             casualty_exchange=(enemy/12)/(own/24) if own else None,
                             closure_120s_m=50, closure_240s_m=60, orders_azure_per_minute=10))


class OutcomeTests(unittest.TestCase):
    def test_zero_loss_battle_is_not_dropped(self):
        cases = [row(1, 107, 0, 4), row(2, 107, 2, 0)]
        self.assertEqual(exchange(cases), 2)
        self.assertIsNone(exchange(cases[:1]))
        paired = paired_exchange(cases, copy.deepcopy(cases))
        self.assertEqual(paired['mean'], 0)
        self.assertEqual(paired['ci95'], [0, 0])
        self.assertGreater(paired['bootstrap_unavailable'], 0)
        self.assertEqual(paired['count'], 2)

    def test_exchange_is_ratio_of_totals_and_paired_on_draw_seed(self):
        left = [row(1, 107, 1, 4), row(1, 108, 3, 0)]
        right = [row(1, 107, 2, 2), row(1, 108, 2, 2), row(8, 107, 1, 9)]
        result = paired_exchange(left, right)
        self.assertEqual(result['mean'], 0)
        self.assertEqual(result['ci95'], [0, 0])
        self.assertEqual(result['clusters'], 1)
        self.assertEqual(result['unpaired_right'], 1)

    def test_identical_build_is_inconclusive_not_targeted_improvement(self):
        cases = [row(1, 107, 2, 4, c, f) for c in ['drills-phase3d', 'drills-phase3c', 'candidate90', 'legacy']
                 for f in ['F1', 'Works', 'Trenches']]
        data = compare(cases)
        self.assertFalse(data['targeted_outcome_gains'])
        self.assertTrue(data['authored_no_significant_regression'])
        self.assertTrue(data['passivity_per_run'])
        self.assertTrue(data['spacing_per_run'])
        self.assertFalse(data['slice_statistical_exit'])
        self.assertFalse(any(x['metric'] == 'casualties_total' and x['family'] == 'F1' for x in data['criteria']))
        changed = copy.deepcopy(cases);changed[0]['metrics']['shots'] = 99
        self.assertFalse(compare(changed)['passivity_per_run'])

    def test_duplicate_identity_rejected(self):
        r = row(1, 107, 1, 1)
        with self.assertRaises(ValueError):compare([r, r])

    def test_primary_exchange_preserves_initial_strength_normalization(self):
        cases = [row(1, 107, 2 if c == 'drills-phase3d' else 4, 4, c, f)
                 for c in ['drills-phase3d', 'drills-phase3c', 'candidate90', 'legacy']
                 for f in ['F1', 'Works', 'Trenches']]
        data = compare(cases)
        primary = next(r for r in data['criteria'] if r['family']=='F1' and r['reference']=='legacy' and r['metric']=='casualty_exchange')
        self.assertEqual(primary['mean'], 2)
        raw = next(r for r in data['aggregate_exchange_disclosure'] if r['reference']=='legacy')
        self.assertEqual(raw['mean'], 1)

    def test_review_requires_one_gain_and_no_regression_per_reference(self):
        criteria=[]
        def add(family,ref,metric,status='inconclusive'):
            criteria.append(dict(family=family,reference=ref,metric=metric,status=status))
        for ref in ['candidate90','legacy']:
            add('F1',ref,'win_azure','improved' if ref=='legacy' else 'inconclusive')
            add('F1',ref,'casualty_exchange','improved' if ref=='candidate90' else 'inconclusive')
        add('F1','candidate90','shots')
        for family in ['F1','Works','Trenches']:
            add(family,'legacy','under_2m')
            add(family,'3 m floor','nearest_m','regression' if family=='Trenches' else 'improved')
        for family in ['Works','Trenches']:
            for metric in ['shots','casualties_total','nearest_m','under_2m','closure_120s_m','closure_240s_m','orders_azure_per_minute']:
                add(family,'previous',metric)
        data=dict(criteria=criteria,previous='previous',zero_shot=0)
        self.assertTrue(reviewed_exit(data)['statistical_exit'])
        criteria[0]['status']='regression'
        self.assertFalse(reviewed_exit(data)['statistical_exit'])
        criteria[0]['status']='inconclusive';data['zero_shot']=1
        self.assertFalse(reviewed_exit(data)['statistical_exit'])


if __name__ == '__main__':
    unittest.main()
