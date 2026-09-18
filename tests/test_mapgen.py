"""Check connectivity, physical cover and deterministic generation."""
import copy
import json
import random
import sys
import unittest
from pathlib import Path
import xml.etree.ElementTree as ET
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from mapgen import city, trenches
from mapgen.geometry import solid
from mapgen.validate import validate, navigation, flood, near_node
from mapgen.render import svg
from mapgen.vendor.lots import subdivide

class MapGeneratorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.city=city.generate(17)
        cls.trenches=trenches.generate(17)

    def test_multiseed_damage_extremes(self):
        for generator in (city,trenches):
            for seed in [*range(10),17,4294967295]:
                with self.subTest(kind=generator.__name__,seed=seed):
                    result=validate(generator.generate(seed,[0,.32,.65,1][seed%4]))
                    self.assertTrue(result['passed'],result['errors'][:8])

    def test_seed_repeatability(self):
        for generator in (city,trenches):
            a=json.dumps(generator.generate(17),sort_keys=True)
            random.seed(92)
            for _ in range(100):random.random()
            generator.generate(19)
            self.assertEqual(a,json.dumps(generator.generate(17),sort_keys=True))
            self.assertNotEqual(a,json.dumps(generator.generate(18),sort_keys=True))

    def test_lot_area_and_translation(self):
        a=subdivide((0,0,60,18),150,random.Random(7))
        b=subdivide((100,-27,60,18),150,random.Random(7))
        self.assertAlmostEqual(sum(w*h for x,y,w,h in a),1080)
        for p,q in zip(a,b):
            for actual,expected in zip(q,(p[0]+100,p[1]-27,p[2],p[3])):
                self.assertAlmostEqual(actual,expected)

    def test_city_interiors_reachable(self):
        nodes=navigation(self.city)
        reached=flood(nodes,near_node(nodes,self.city['deployment'][0]['position']))
        for b in self.city['buildings']:
            x,y,w,h=b['rect']
            self.assertIn(near_node(nodes,[x+w/2,y+h/2]),reached)

    def test_redundant_trench_connections(self):
        for team in (0,1):
            paths=[p for p in self.trenches['paths'] if p['team']==team]
            self.assertEqual(sum(p['kind']=='communication' for p in paths),8)
            self.assertGreaterEqual(sum(c['team']==team for c in self.trenches['cover']),32)
            m=copy.deepcopy(self.trenches)
            removed=next(p['id'] for p in paths if p['kind']=='communication')
            m['surfaces']=[s for s in m['surfaces'] if s['parent']!=removed]
            nodes=navigation(m,team)
            self.assertEqual(len(flood(nodes,min(nodes))),len(nodes))

    def test_cover_requires_physical_shield_and_clear_shot(self):
        for height,message in ((.15,'unprotected body samples'),(2.2,'blocked firing aperture')):
            m=copy.deepcopy(self.city)
            sid=m['cover'][0]['source']
            next(s for s in m['solids'] if s['id']==sid)['max'][2]=height
            self.assertTrue(any(message in e for e in validate(m)['errors']))

    def test_missing_source_rejected(self):
        m=copy.deepcopy(self.city)
        m['solids']=[s for s in m['solids'] if s['id']!=m['cover'][0]['source']]
        self.assertTrue(any('missing cover source' in e for e in validate(m)['errors']))

    def test_sealed_door_rejected(self):
        m=copy.deepcopy(self.city)
        x,y,z=m['buildings'][0]['doors'][0]['center']
        solid(m,[x-.5,y-2,1,4],3)
        self.assertTrue(any('blocked doorway' in e for e in validate(m)['errors']))

    def test_opposing_trench_bridge_rejected(self):
        m=copy.deepcopy(self.trenches)
        m['surfaces'].append(dict(id='bad',rect=[-160,-2,320,4],z=-1.4,slope=[0,0],parent='bad'))
        self.assertTrue(any('opposing trenches' in e for e in validate(m)['errors']))

    def test_bad_ramp_rejected(self):
        m=copy.deepcopy(self.trenches)
        m['links'][0]['to_position'][2]=1
        self.assertIn('invalid ramp endpoints',validate(m)['errors'])

    def test_preview_feature_counts(self):
        for m in (self.city,self.trenches):
            root=ET.fromstring(svg(m))
            ns={'s':'http://www.w3.org/2000/svg'}
            layer=root.find(".//s:g[@id='cover']",ns)
            self.assertEqual(len(layer.findall('s:circle',ns)),len(m['cover']))
            if m['kind']=='city':
                layer=root.find(".//s:g[@id='collision']",ns)
                self.assertEqual(len(layer),sum(s['kind']!='lintel' for s in m['solids']))

if __name__=='__main__':unittest.main()
