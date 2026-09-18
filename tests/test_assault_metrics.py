import json
import sys
import tempfile
from pathlib import Path
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from family_metrics import assault_metrics
class AssaultExportTests(unittest.TestCase):
    def test_physical_angle_and_support_before_movement(self):
        frames=[]
        for time,stage in [(1,10),(2,12)]:
            units=[]
            for n,pos in enumerate(([0,-2,0],[0,2,0],[15,13,0],[15,17,0])):
                units.append(dict(id=n,squad=0,alive=True,element=n//2,position=pos,
                    assault_base=[0,0,0],assault_objective=[30,0,0],drill_instance=1,
                    attack_committed=True,drill_stage=stage,drill_movement=n>=2,action=0 if n>=2 else 2,
                    assault_phase_line=-1 if time==1 else 2,assault_angle=99,
                    support_ever_established=True,believed_own_strength=4,believed_enemy_strength=8,
                    fire_superiority=False,break_contact_selected=True))
            frames.append(dict(time=time,soldiers=units))
        with tempfile.TemporaryDirectory() as tmp:
            Path(tmp,'evaluation.jsonl').write_text(''.join(json.dumps(r)+'\n' for r in frames))
            result=assault_metrics(tmp)
        self.assertAlmostEqual(result['assault_arrival_angle'],45)
        self.assertEqual(result['suppression_before_assault'],1)
        self.assertEqual(result['break_contact_when_outnumbered'],1)
    def test_absent_concepts_are_not_success(self):
        with tempfile.TemporaryDirectory() as tmp:
            Path(tmp,'evaluation.jsonl').write_text(json.dumps(dict(time=0,soldiers=[dict(id=0,squad=0,alive=True)]))+'\n')
            self.assertTrue(all(value is None for value in assault_metrics(tmp).values()))
if __name__=='__main__':unittest.main()
