import importlib.util,json,tempfile,unittest
from pathlib import Path
spec=importlib.util.spec_from_file_location('friendly_fire_trace',Path(__file__).parents[1]/'tools/friendly_fire_trace.py');trace=importlib.util.module_from_spec(spec);spec.loader.exec_module(trace)
def soldier(i,team,squad,position,action=4,order_issued=0.0,mg=0):
    return dict(id=i,alive=1,team=team,squad=squad,position=position,action=action,task=3,order=1,order_issued=order_issued,route=0,machine_gun=mg,goal=position)
def features(family=None,keep=False):
    row=[0.0]*97
    if family is not None:row[33+family]=1
    if keep:row[96]=1
    return row
class FriendlyFireTrace(unittest.TestCase):
    """Three frames 0.5 s apart; soldiers 0 and 1 are Azure (squads 0 and 1), 2 is Ember."""
    def export(self,d,decisions=True):
        p=Path(d)
        (p/'manifest.json').write_text(json.dumps(dict(build='test',seed=1,duration=1,winner=-1,shots=3)))
        frames=[]
        for t,x in ((0.0,0.0),(0.5,2.0),(1.0,4.0)):
            frames.append(dict(time=t,soldiers=[soldier(0,0,0,[0,10,0],order_issued=-10,mg=1),soldier(1,0,1,[x,0,0],action=0,order_issued=0.1),soldier(2,1,4,[50,0,0])]))
        (p/'evaluation.jsonl').write_text('\n'.join(json.dumps(f) for f in frames)+'\n')
        events=[dict(time=0.9,kind=3,actor=0,target=1,text=''),   # Azure gun hits a moving Azure rifleman
                dict(time=0.3,kind=3,actor=2,target=1,text=''),   # enemy hit: not friendly fire
                dict(time=0.95,kind=3,actor=1,target=0,text=''),  # second friendly hit, through a body
                dict(time=0.9,kind=4,actor=1,target=0,text='')]
        (p/'events.jsonl').write_text('\n'.join(json.dumps(e) for e in events)+'\n')
        shots=[dict(schema=1,time=0.8,impact_time=0.9,owner=0,team=0,squad=0,aimed_enemy=2,aimed_point=[3,0.5,1.5],start=[0,10,0],end=[3,0,1],suppressive=1,moving_fire=0,victims=[dict(soldier=1,time=0.9,energy=1)]),
               dict(schema=1,time=0.2,impact_time=0.3,owner=2,team=1,squad=4,aimed_enemy=1,aimed_point=[1,0,1.5],start=[50,0,0],end=[1,0,1],suppressive=0,moving_fire=0,victims=[dict(soldier=1,time=0.3,energy=1)]),
               dict(schema=1,time=0.9,impact_time=0.95,owner=1,team=0,squad=1,aimed_enemy=2,aimed_point=[40,0,1.5],start=[4,0,0],end=[0,10,1],suppressive=0,moving_fire=1,victims=[dict(soldier=2,time=0.92,energy=1),dict(soldier=0,time=0.95,energy=1)])]
        (p/'shots.jsonl').write_text('\n'.join(json.dumps(s) for s in shots)+'\n')
        if not decisions:return p,None
        lines=[dict(schema=3,time=0.0,squad=1,selected=2,outcome='committed',legal=[1,0,1],features=[features(),features(keep=True),features(2)]),
               dict(schema=3,time=0.2,squad=1,selected=1,outcome='preparing',legal=[1,1,1],features=[features(),features(2,True),features(2)]),
               dict(schema=3,time=0.0,squad=0,selected=0,outcome='retain',legal=[1,0],features=[features(),features(keep=True)])]
        (p/'decisions.jsonl').write_text('\n'.join(json.dumps(l) for l in lines)+'\n')
        return p,p/'decisions.jsonl'
    def test_tags_and_rates(self):
        with tempfile.TemporaryDirectory() as d:
            run,decisions=self.export(d)
            r=trace.evaluate(run,decisions)
        # Living seconds: three soldiers for two 0.5 s intervals.
        self.assertAlmostEqual(r['living_soldier_seconds'],3.0)
        self.assertEqual(r['hits'],2);self.assertEqual(r['unmatched_shots'],0)
        self.assertAlmostEqual(r['per_100_soldier_minutes'],2*6000/3.0)
        tags={k:v['hits'] for k,v in r['tags'].items()}
        self.assertEqual(tags['victim_azure'],2);self.assertEqual(tags['victim_ember'],0)
        self.assertEqual(tags['cross_squad'],2);self.assertEqual(tags['same_squad'],0)
        self.assertEqual(tags['victim_moving'],1)          # soldier 1 moved 2 m in the last frame interval
        self.assertEqual(tags['victim_moving_action'],1)
        self.assertEqual(tags['victim_new_order_5s'],1)
        self.assertEqual(tags['shooter_suppressive'],1);self.assertEqual(tags['shooter_moving_fire'],1)
        self.assertEqual(tags['victim_near_aim_point'],1)  # aimed at [3,0.5], victim at [2,0]
        self.assertEqual(tags['through_another_body'],1)   # soldier 0 was the round's second body
        self.assertEqual(tags['shooter_mg'],1)
        self.assertEqual(tags['victim_recent_commit_2s'],1);self.assertEqual(tags['victim_after_keep'],1)
        self.assertEqual(tags['victim_family_press'],1)
        self.assertEqual(tags['shooter_recent_commit_2s'],1);self.assertEqual(tags['shooter_after_keep'],1)
        self.assertAlmostEqual(r['tags']['victim_moving']['per_100'],6000/3.0)
        first=[e for e in r['events'] if e['victim']==1][0]
        self.assertAlmostEqual(first['victim_commit_age'],0.9);self.assertEqual(first['victim_family'],'press')
    def test_without_decisions(self):
        with tempfile.TemporaryDirectory() as d:
            run,_=self.export(d,decisions=False)
            r=trace.evaluate(run)
        self.assertFalse(r['decisions']);self.assertEqual(r['hits'],2)
        self.assertIsNone(r['tags']['victim_after_keep']['hits'])
        self.assertEqual(r['tags']['cross_squad']['hits'],2)
if __name__=='__main__':unittest.main()
