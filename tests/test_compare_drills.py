import sys
from pathlib import Path
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from compare_drills import classify, compare
class PairedCriteriaTests(unittest.TestCase):
    def test_direction_and_missing(self):
        self.assertEqual(classify({'ci95':[-3,-1]},-1),'improved')
        self.assertEqual(classify({'ci95':[-3,-1]},1),'regression')
        self.assertEqual(classify({'ci95':[-1,1]},1),'inconclusive')
        self.assertEqual(classify({'ci95':None},1),'unavailable')
    def test_pairwise_horizons_and_clusters(self):
        rows=[]
        for controller in ('drills-phase2d','drills-phase3'):
            for gen in (1,2):
                for seed in (107,108):
                    rows.append(dict(controller=controller,family='F1',gen_seed=gen,seed=seed,status='complete',metrics={'shots':10+(controller=='drills-phase3'), 'closure_120s_m':None if gen==1 else 4}))
        data=compare(rows);shot=next(x for x in data['criteria'] if x['metric']=='shots');closure=next(x for x in data['criteria'] if x['metric']=='closure_120s_m')
        self.assertEqual((shot['count'],shot['clusters'],shot['status']),(4,2,'improved'))
        self.assertEqual((closure['count'],closure['clusters']),(2,1))
        self.assertFalse(data['slice_statistical_exit']) # Unmeasured criteria cannot be certified.
    def test_authored_targets_use_candidate_and_include_trenches_closure(self):
        from compare_drills import DIRECTIONS
        rows=[]
        for controller,offset in [('drills-phase2d',0),('drills-phase3',1),('candidate90',2)]:
            for seed in (1,2):
                rows.append(dict(controller=controller,family='Trenches',gen_seed=seed,seed=seed,status='complete',
                                 metrics={k:10+offset*v for k,v in DIRECTIONS.items()}))
        result=compare(rows)
        self.assertTrue(result['no_regression_vs_previous'])
        self.assertTrue(result['targeted_improvement_vs_previous'])
        self.assertFalse(result['targeted_improvement'])
        self.assertFalse(result['slice_statistical_exit'])
        self.assertTrue(any(r['metric']=='closure_240s_m' for r in result['criteria']))
if __name__=='__main__':unittest.main()
