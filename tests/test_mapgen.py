"""Check connectivity, physical cover and deterministic generation."""
import copy
import json
import math
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
from mapgen.native import export
from mapgen.vendor.lots import subdivide

class MapGeneratorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.city=city.generate(17)
        cls.trenches=trenches.generate(17)

    def test_golden_seed17_bytes(self):
        # Plan 029: Town and Trenches stay byte-identical. generate_maps.py calls
        # <family>.generate(seed,damage) with its default damage .32 for both families.
        folder=Path(__file__).resolve().parents[1]/'Unreal'/'Config'/'GeneratedMaps'
        for kind,generator in (('city',city),('trenches',trenches)):
            with self.subTest(kind=kind):
                self.assertEqual(export(generator.generate(17,.32)).encode(),(folder/f'{kind}.army').read_bytes())

    def test_golden_village_and_city2_bytes(self):
        # Jordan accepted the village and city2 looks on 23 September 2026 and had seed 17 of each
        # promoted; the repository copies are the generators' exact output (default damage .32).
        folder=Path(__file__).resolve().parents[1]/'Unreal'/'Config'/'GeneratedMaps'
        from mapgen import village, city2
        from mapgen.native import export as export_native
        for kind,generator in (('village',village),('city2',city2)):
            with self.subTest(kind=kind):
                self.assertEqual(export_native(generator.generate(17,.32)).encode(),(folder/f'{kind}.army').read_bytes())

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


# ---------------------------------------------------------------- plan 029 village (G-1/G-2)
import ast
import hashlib
import os
import subprocess
import time
from mapgen import village, support as village_support
from mapgen.kernel import Kernel
from mapgen.native import export as export_native

TOOLS=Path(__file__).resolve().parents[1]/'tools'


def village_digest(m):
    m=dict(m);m.pop('generation',None)
    v=dict(m.get('validation',{}));v.pop('timings',None);m['validation']=v
    return hashlib.sha256(json.dumps(m,sort_keys=True).encode()).hexdigest()


class VillageGeneratorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.m17=village.generate(17)
        cls.lane=village.generate(1206)

    def test_village_multiseed_validation(self):
        for seed in (0,17,1202,1206,4294967295):
            with self.subTest(seed=seed):
                m=self.m17 if seed==17 else self.lane if seed==1206 else village.generate(seed)
                self.assertTrue(m['validation']['passed'],m['validation']['errors'][:8])
                again=village_support.analyse(m)
                self.assertTrue(again['passed'],again['errors'][:8])
                self.assertEqual(again['supportable_share_by_team'],m['validation']['supportable_share_by_team'])
                for share in again['supportable_share_by_team']:
                    self.assertGreaterEqual(share,.70)
                self.assertGreaterEqual(again['elevated_safe_share'],.40)
                self.assertLessEqual(len(m['solids']),village.SOLID_BUDGET)

    def test_objective_count_spacing_and_all_team_gates(self):
        for m in (self.m17, self.lane, village.generate(5), village.generate(1201)):
            self.assertIn(len(m['objectives']), (2, 3, 4))
            self.assertEqual(m['objectives'][0]['kind'], 'church_square')
            for i, obj in enumerate(m['objectives']):
                for other in m['objectives'][:i]:
                    self.assertGreaterEqual(math.dist(obj['position'][:2], other['position'][:2]), 60)
            r = m['validation']
            teams = [t for o in r['support']['objectives'] for t in o['teams']]
            self.assertTrue(all(t['approaches'] == 4 for t in teams))
            self.assertEqual(r['supportable_share'], min(t['supportable_share'] for t in teams))
            self.assertGreaterEqual(r['supportable_share'], .70)
            self.assertTrue(all(n <= village_support.REPAIR_ROUNDS for n in m['repairs']['by_objective'].values()))
            self.assertLessEqual(m['repairs']['rounds'], village_support.REPAIR_MAP_ROUNDS)

    def test_objective_draw_priority_and_determinism(self):
        from mapgen.village_objectives import select
        # All four priority bands can fit. Reordering input and disturbing the
        # global RNG must not change the seed's requested count or chosen landmarks.
        m = dict(yards=[dict(id='square', use='square', centre=[0, 0]),
                        dict(id='large', use='farmyard', centre=[100, 0], area=900),
                        dict(id='small', use='farmyard', centre=[-100, 0], area=600)],
                 roads=[dict(id='road-side', points=[[0, 100], [0, 130]])], links=[])
        counts = set()
        for seed in range(20):
            m['seed'] = seed
            expected = random.Random(f'village|{seed}|objectives').randint(2, 4)
            first = select(m)
            self.assertEqual(len(first), expected)
            self.assertEqual([o['id'] for o in first], ['square', 'large', 'road-side', 'small'][:expected])
            m['yards'].reverse()
            random.seed(819 + seed)
            for _ in range(12): random.random()
            self.assertEqual(first, select(m))
            counts.add(len(first))
        self.assertEqual(counts, {2, 3, 4})
        # A close lower-priority junction is dropped; its position is not moved.
        m['roads'][0]['points'][0] = [0, 59]
        self.assertNotIn('road-side', [o['id'] for o in select(m)])
        m['yards'] = [y for y in m['yards'] if y['id'] == 'square']
        with self.assertRaises(village.Contradiction): select(m)

    def test_square_pass_farm_fail_rejects_map(self):
        # Real unmodified development layout: the old single-square gate passes,
        # while this farm's approaches cannot be supported. No mocked verdicts.
        m = village.generate(8, analyse=False)
        report = village_support.analyse(m)
        self.assertTrue(report['structural'], report['errors'])
        square = report['objectives'][0]
        self.assertGreaterEqual(min(square['supportable_share_by_team']), .70)
        farms = [o for o in report['objectives'] if o['kind'] == 'farm_compound']
        self.assertTrue(any(o['supportable_share'] < .70 for o in farms))
        self.assertFalse(report['passed'])
        self.assertTrue(any('farm_compound' in e and 'supportable share' in e for e in report['errors']))
        self.assertEqual(report['supportable_share'], min(o['supportable_share'] for o in report['objectives']))

    def test_objectives_are_sidecar_only(self):
        m = copy.deepcopy(self.m17)
        before = export_native(m)
        m['objectives'] = []
        m.pop('focal_point')
        m.pop('validation')
        self.assertEqual(export_native(m), before)

    def test_curved_lane_geometry_and_earth_complement(self):
        from mapgen.village_curves import rect_cells
        for m in (self.m17, self.lane):
            K = Kernel(m)
            lanes = [p for p in m['paths'] if p['kind'] == 'lane']
            self.assertIn(len(lanes), (2, 3))
            dug = set()
            for lane in lanes:
                floors = [s for s in m['surfaces'] if s['parent'] == lane['id']]
                ramps = [s for s in floors if s['kind'] == 1]
                self.assertEqual(len(ramps), 2)
                pts = lane['points']
                self.assertTrue(any(abs(a[0]-b[0]) > .01 and abs(a[1]-b[1]) > .01 for a,b in zip(pts,pts[1:])))
                for p in pts:
                    self.assertTrue(K.walkable(p+[-1.4]), (lane['id'],p))
                for s in floors:
                    cells = rect_cells(s['rect'])
                    self.assertFalse(dug & cells, s['id'])
                    dug.update(cells)
                for ramp in ramps:
                    link = next(l for l in m['links'] if l['surface'] == ramp['id'])
                    self.assertTrue(K.clear_line(link['from_position'], link['to_position']))
            earth = set()
            for solid_ in m['solids']:
                if solid_['kind'] != 'earth': continue
                a,b = solid_['min'],solid_['max']
                cells = rect_cells([a[0],a[1],b[0]-a[0],b[1]-a[1]])
                self.assertFalse(earth & cells)
                earth.update(cells)
            self.assertFalse(earth & dug)
            self.assertEqual(len(earth | dug), 340*260)

    def test_curved_roads_keep_junction_and_native_boxes_bounded(self):
        for m in (self.m17, self.lane):
            for road in m['roads']:
                pts = road['points']
                self.assertTrue(any(abs(a[0]-b[0]) > .01 and abs(a[1]-b[1]) > .01 for a,b in zip(pts,pts[1:])))
                self.assertLessEqual(max(math.dist(a,b) for a,b in zip(pts,pts[1:])), 1.6)
            side = next((r for r in m['roads'] if r['id']=='road-side'), None)
            if side:
                self.assertIn(side['points'][0], m['roads'][0]['points'])
            roads = [r.split() for r in export_native(m).splitlines() if r.startswith('D 0 ')]
            self.assertEqual(len(roads), sum(len(r['points'])-1 for r in m['roads']))
            self.assertTrue(all(max(float(r[5]),float(r[6])) <= 4.3 for r in roads))

    def test_lane_earth_overlap_is_rejected(self):
        m = copy.deepcopy(self.m17)
        floor = next(s for s in m['surfaces'] if s.get('level') == -1 and s['kind'] == 0)
        solid(m, floor['rect'], 1.4, 'earth', -1.4, False)
        self.assertTrue(any('earth fills lane surface' in e for e in village_support.analyse(m)['errors']))

    def test_village_contract_shapes(self):
        m=self.m17
        self.assertEqual((m['kind'],m['ground_base'],m['bounds']),('village',-1.4,[-170,-130,340,260]))
        houses=[b for b in m['buildings'] if b['use']=='house']
        farmhouses=[b for b in m['buildings'] if b['use']=='farmhouse']
        self.assertTrue(all(b['floors']==2 for b in farmhouses))
        self.assertEqual(sum(b['floors']==2 for b in houses),int(.35*len(houses)+.5))
        for b in m['buildings']:
            if b['floors']!=2:continue
            self.assertGreaterEqual(len(b['upper_windows']),3)
            link=m['links'][b['stair']['link']]
            self.assertEqual((link['from_position'][2],link['to_position'][2]),(0,3.2))
            walls=[s for s in m['solids'] if s['parent']==b['id']]
            for s in walls:
                if s['kind']=='wall' and s['min'][2]==0:self.assertEqual(s['max'][2],3.0)
                if s['kind']=='wall' and s['min'][2]>0:self.assertEqual((s['min'][2],s['max'][2]),(3.2,6.2))
                if s['kind']=='sill' and s['min'][2]>0:self.assertEqual((s['min'][2],s['max'][2]),(3.2,4.25))
                if s['kind']=='lintel' and s['min'][2]>3:self.assertEqual((s['min'][2],s['max'][2]),(5.55,6.4))
                if s['kind']=='slab':self.assertEqual((s['min'][2],s['max'][2],s['blocks_movement']),(3.0,3.2,False))
            self.assertEqual(sum(s['kind']=='tread' for s in walls),8)
        hedges=[s for s in m['solids'] if s.get('flags',0)&1]
        rims=[s for s in m['solids'] if s.get('flags',0)&2]
        self.assertTrue(hedges and rims)
        for s in hedges:
            self.assertEqual((s['max'][2]-s['min'][2],s['blocks_movement'],s['half_cover']),(1.8,True,False))
        for s in rims:
            self.assertEqual((round(s['max'][2]-s['min'][2],6),s['blocks_movement'],s['half_cover']),(.6,False,True))
        prone=[c for c in m['cover'] if c.get('posture')=='prone']
        self.assertTrue(prone)
        solids={s['id']:s for s in m['solids']}
        self.assertTrue(all(solids[c['source']].get('flags',0)&2 for c in prone))

    def test_kernel_layers_and_rays(self):
        m,K=self.m17,Kernel(self.m17)
        b=next(b for b in m['buildings'] if b['floors']==2)
        x,y,w,h=b['rect'];centre=[x+w/2,y+h/2]
        self.assertTrue(K.walkable(centre+[0]))       # ground under the slab
        self.assertTrue(K.walkable(centre+[3.2]))     # the upper floor
        self.assertFalse(K.walkable(centre+[1.6]))
        link=m['links'][b['stair']['link']]
        mid=[(a+c)/2 for a,c in zip(link['from_position'],link['to_position'])]
        self.assertTrue(K.walkable(mid))
        self.assertFalse(K.walkable(mid[:2]+[0]))     # a stair replaces grade
        hedge=next(s for s in m['solids'] if s.get('flags',0)&1 and s['max'][0]-s['min'][0]>3)
        cx=(hedge['min'][0]+hedge['max'][0])/2;cy=(hedge['min'][1]+hedge['max'][1])/2
        a,c=(cx,cy-3,1.2),(cx,cy+3,1.2)
        if K.first_hit(a,c,False) is None:
            self.assertFalse(K.los(a,c))                  # sight is concealed
            self.assertTrue(K.los(a,c,concealment=False)) # bullets pass
        crater=next(c for c in m['cover'] if c.get('posture')=='prone')
        p=crater['shelter'];f=crater['facing']
        self.assertTrue(K.protected_at(p,(p[0]+f[0]*4,p[1]+f[1]*4,0),'prone'))
        self.assertFalse(K.protected_at(p,(p[0]+f[0]*4,p[1]+f[1]*4,0),'standing'))

    def test_village_determinism(self):
        a=village_digest(self.m17)
        random.seed(92)
        for _ in range(100):random.random()
        village.generate(19,analyse=False)
        self.assertEqual(a,village_digest(village.generate(17)))
        code=("import sys,json,hashlib;sys.path.insert(0,%r);from mapgen import village;"
              "m=village.generate(17);m.pop('generation');m['validation'].pop('timings');"
              "print(hashlib.sha256(json.dumps(m,sort_keys=True).encode()).hexdigest())")%str(TOOLS)
        out=set()
        for seed in ('0','12345'):
            env=dict(os.environ,PYTHONHASHSEED=seed)
            out.add(subprocess.run([sys.executable,'-c',code],env=env,check=True,capture_output=True,text=True).stdout.strip())
        self.assertEqual(len(out),1)
        self.assertEqual(out.pop(),a)
        self.assertEqual(export_native(self.m17),export_native(village.generate(17)))
        self.assertNotEqual(a,village_digest(village.generate(18)))

    def test_contradiction_path(self):
        fixed,plan=village.macro(17,0)
        lane=village.variant_for('lane_straight','fLfL')
        with self.assertRaises(village.Contradiction):
            village.solve(17,0,{**fixed,(5,1):lane,(6,1):village.VARIANT_INDEX[('field',0)]},plan['band'])
        with self.assertRaises(village.GenerationFailed) as caught:
            village.generate(17,_fixed_override={(5,1):lane,(6,1):village.VARIANT_INDEX[('field',0)]})
        self.assertIn('contradiction',str(caught.exception))

    def test_sealed_stair_rejected(self):
        m=copy.deepcopy(self.m17)
        b=next(b for b in m['buildings'] if b['floors']==2)
        stair=next(s for s in m['surfaces'] if s['id']==b['stair']['surface'])
        solid(m,stair['rect'],1.0,'wall',1.1,True,'test')   # a wardrobe across the stair
        errors=village_support.analyse(m)['errors']
        self.assertTrue(any('sealed stair '+b['id'] in e for e in errors),errors[:6])

    def test_sealed_lane_rejected(self):
        m=copy.deepcopy(self.lane)
        for link in m['links']:
            if link['kind']=='ramp':
                p=link['landings'][1]
                solid(m,[p[0]-1.5,p[1]-1.5,3,3],2.0,'wall',0,True,'test')
        errors=village_support.analyse(m)['errors']
        self.assertTrue(any('sealed lane' in e for e in errors),errors[:6])

    def test_hedge_as_source_rejected(self):
        m=copy.deepcopy(self.m17)
        hedge=next(s for s in m['solids'] if s.get('flags',0)&1)
        m['cover'][0]['source']=hedge['id']
        self.assertTrue(any('hedge cover source' in e for e in village_support.analyse(m)['errors']))

    def test_rim_height_rejected(self):
        m=copy.deepcopy(self.m17)
        rim=next(s for s in m['solids'] if s.get('flags',0)&2)
        rim['max'][2]=.4
        self.assertTrue(any('rim height' in e for e in village_support.analyse(m)['errors']))

    def test_unsupported_crossing_rejected(self):
        # Leave defenders and exposure intact while denying supporting positions.
        # Deleting nearby walls also deletes observers and can remove the crossing.
        old=village_support.SUPPORT_RANGE
        try:
            village_support.SUPPORT_RANGE=0.0
            report=village_support.analyse(self.m17)
        finally:
            village_support.SUPPORT_RANGE=old
        self.assertFalse(report['passed'])
        self.assertTrue(any('supportable share' in e for e in report['errors']),report['errors'][:4])
        self.assertTrue(all(not c['supported'] for o in report['support']['objectives'] for t in o['teams'] for c in t['crossings']))

    def test_budget_rejected(self):
        m=copy.deepcopy(self.m17)
        while len(m['solids'])<=village.SOLID_BUDGET:
            n=len(m['solids'])
            solid(m,[-165+(n%300)*.9,-125+(n//300)*.2,.1,.1],.1,'pebble',0,False,None)
        self.assertTrue(any('solid geometry budget' in e for e in village_support.analyse(m)['errors']))
        farm=village.VARIANT_INDEX[('farm',0)]
        self.assertGreater(village.estimate({(i,j):farm for i in range(17) for j in range(13)})['solids'],village.SOLID_BUDGET)

    def test_deadline_aborts_without_writing(self):
        with self.assertRaises(village.DeadlineExceeded):
            village.generate(17,deadline=time.monotonic()-1)
        target=Path(os.environ.get('TMPDIR','/tmp'))/f'village-deadline-{os.getpid()}'
        result=subprocess.run([sys.executable,str(TOOLS/'generate_maps.py'),'--kind','village','--seed','17',
                               '--deadline','0','--output',str(target)],capture_output=True,text=True)
        self.assertEqual(result.returncode,3)
        self.assertFalse(target.exists())

    def test_export_contract(self):
        text=export_native(self.m17)
        rows=[line.split() for line in text.splitlines()]
        self.assertEqual(rows[0],['ARMYMAP','2','village','17'])
        self.assertEqual(rows[1],['BOUNDS','170','130','-1.4'])
        self.assertEqual(rows[-1],['END'])
        tags={}
        for r in rows:tags[r[0]]=tags.get(r[0],0)+1
        caps=dict(O=6000,S=1500,L=256,C=3000,D=1500,B=128,P=512)
        for tag,cap in caps.items():self.assertLessEqual(tags.get(tag,0),cap,tag)
        self.assertEqual(tags['U'],64)
        self.assertLess(len(rows),20000);self.assertLess(len(text),8*1024*1024)
        for r in rows:
            if r[0]=='O':
                self.assertIn(len(r),(11,12))
                if len(r)==12:self.assertIn(int(r[11]),(1,2))
            if r[0]=='S':self.assertEqual(len(r),12)
            if r[0]=='C':self.assertIn(r[11],('0','1','2'));self.assertIn(r[12],('0','1'))
            if r[0]=='B':self.assertEqual(len(r),7)
            if r[0]=='P':self.assertEqual(len(r),5)
        stairs=[r for r in rows if r[0]=='S' and r[9]=='2']
        links=[r for r in rows if r[0]=='L']
        for s in stairs:
            sx,sy=float(s[7]),float(s[8])
            self.assertTrue((sx==0)!=(sy==0) and .5<=abs(sx or sy)<=1.05)
            self.assertEqual(sum(l[1]==s[1] for l in links),1)
        records={r[1] for r in rows if r[0]=='B'}
        for s in rows:
            if s[0]=='S' and int(s[10])>=1:self.assertIn(s[11],records)
        self.assertEqual(sum(r[0]=='C' and r[11]=='2' for r in rows),sum(c.get('posture')=='prone' for c in self.m17['cover']))

    def test_village_preview_layers(self):
        root=ET.fromstring(svg(self.m17))
        ns={'s':'http://www.w3.org/2000/svg'}
        layer=root.find(".//s:g[@id='cover']",ns)
        self.assertEqual(len(layer.findall('s:circle',ns)),len(self.m17['cover']))
        upper=root.find(".//s:g[@id='upper']",ns)
        self.assertEqual(len(upper.findall('s:rect',ns))-sum(s.get('kind')==2 for s in self.m17['surfaces']),
                         sum(s['min'][2]>2.9 and s['kind'] in ('wall','sill') for s in self.m17['solids']))
        support = root.find(".//s:g[@id='support']", ns)
        selected = {node.attrib['data-objective'] for node in support.findall('s:g', ns)}
        self.assertEqual(selected, {o['id'] for o in self.m17['objectives']})
        for name in ('support','hedges','craters','roofs','routes'):
            self.assertIsNotNone(root.find(f".//s:g[@id='{name}']",ns),name)

    def test_village_art_parcels_and_compounds(self):
        m = self.m17
        sizes = [len(f['cells']) for f in m['fields']]
        self.assertGreaterEqual(max(sizes), 4)
        self.assertLessEqual(max(sizes), 6)
        self.assertGreater(len(set(sizes)), 1)
        # Every farm is a real 25–35 m walled court with three separate wings.
        farms = [y for y in m['yards'] if y['use']=='farmyard']
        self.assertTrue(farms)
        buildings = {b['id']:b for b in m['buildings']}
        for yard in farms:
            self.assertTrue(all(25 <= d <= 35 for d in yard['rect'][2:]))
            self.assertEqual(buildings[yard['farmhouse']]['floors'], 2)
            self.assertEqual(len({yard[k] for k in ('farmhouse','barn','byre')}), 3)
        self.assertTrue(any(b['use']=='outbuilding' for b in m['buildings']))
        self.assertTrue(any(b.get('role')=='cafe' for b in m['buildings']))

    def test_village_continuous_bombardment(self):
        for seed in (17, 5, 1201):
            m = self.m17 if seed==17 else village.generate(seed)
            history = m['bombardment']
            craters = [d for d in m['decorations'] if d.get('origin')=='bombardment']
            self.assertEqual(len(craters), history['target'])
            self.assertTrue(all('field' not in d for d in craters))
            self.assertFalse(any(c['tile']=='craters' for c in m['cells']))
            dx,dy = history['axis']; sx,sy = history['square']
            forward = sum((d['center'][0]-sx)*dx+(d['center'][1]-sy)*dy > 0 for d in craters)
            self.assertGreater(forward/len(craters), .75)
            # Impacts actually cross the old tile seams, rather than just losing a label.
            crossed = sum(min((d['center'][0]+170)%20,20-(d['center'][0]+170)%20,
                              (d['center'][1]+130)%20,20-(d['center'][1]+130)%20)<d['radius'] for d in craters)
            self.assertGreater(crossed, len(craters)*.25)
            self.assertEqual({d['age'] for d in craters}, {'fresh','old'})
            self.assertGreater(history['damaged_furniture'],0)
            self.assertEqual(len({s['id'] for s in m['solids']}),len(m['solids']))
            self.assertEqual(len({s['geometry_id'] for s in m['solids']}),len(m['solids']))

    def test_bombardment_pattern_has_no_tile_dependency(self):
        from mapgen.village_damage import pattern, exposure
        history=pattern(17,0,(0,0),.32)
        # Moving through an old cell seam changes a continuous field smoothly.
        self.assertAlmostEqual(exposure(history,(-10-.00001,10)),
                               exposure(history,(-10+.00001,10)),places=5)

    def test_python39_syntax_and_no_numpy(self):
        for name in ('village','village_land','village_damage','village_objectives','village_curves','city2','city2_streets','city2_buildings','kernel','support','shells','native','geometry','render','validate'):
            source=(TOOLS/'mapgen'/f'{name}.py').read_text()
            ast.parse(source,feature_version=(3,9))
            self.assertNotRegex(source,r'(^|\n)\s*(import|from)\s+numpy')

class City2GeneratorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from mapgen import city2
        cls.generator=city2
        cls.maps={seed:city2.generate(seed) for seed in (17,5,1201)}

    def test_city2_separate_native_family(self):
        for seed,m in self.maps.items():
            self.assertEqual(m['schema'],'army-map/2')
            payload=export(m)
            self.assertTrue(payload.startswith(f'ARMYMAP 2 city2 {seed}\n'))
            self.assertIn('\nBOUNDS 170 130 0\n',payload)
            self.assertFalse(any(line.startswith(('OBJECTIVE ','Q ')) for line in payload.splitlines()))

    def test_village_golden_bytes_unchanged(self):
        expected={17:'5cd33371a9796ea16c47fd73e51e9e964af5159738dc756a4a4ffe79b195ca8e',
                  5:'052580140d9dee7825356845b3e882d246d88b0f3cdcd8e318a1466c7aca4b6e',
                  1201:'118080cab5ea29a92d0e1ed59c3e03e47d54f3a3bf6fff550888e03bfb445742'}
        for seed,digest in expected.items():
            self.assertEqual(hashlib.sha256(export(village.generate(seed)).encode()).hexdigest(),digest)

    def test_city2_determinism_and_hash_seeds(self):
        expected=hashlib.sha256(export(self.maps[17]).encode()).hexdigest()
        random.seed(883)
        for _ in range(40):random.random()
        self.assertEqual(hashlib.sha256(export(self.generator.generate(17)).encode()).hexdigest(),expected)
        code=("import sys,hashlib;sys.path.insert(0,%r);from mapgen import city2;from mapgen.native import export;"
              "print(hashlib.sha256(export(city2.generate(17)).encode()).hexdigest())")%str(TOOLS)
        for seed in ('0','393'):
            run=subprocess.run([sys.executable,'-c',code],env=dict(os.environ,PYTHONHASHSEED=seed),capture_output=True,text=True,check=True)
            self.assertEqual(run.stdout.strip(),expected)
        self.assertNotEqual(export(self.maps[17]),export(self.maps[5]))

    def test_city2_objectives_budgets_and_repairs(self):
        for m in self.maps.values():
            r=m['validation'];self.assertTrue(r['passed'],r['errors'])
            self.assertTrue(2<=len(m['objectives'])<=4)
            self.assertEqual(m['objectives'][0]['kind'],'market_square')
            self.assertLessEqual(len(m['solids']),4500)
            self.assertLessEqual(len(m['buildings']),120)
            self.assertLessEqual(r['repair_rounds'],village_support.REPAIR_MAP_ROUNDS)
            for i,obj in enumerate(m['objectives']):
                for other in m['objectives'][:i]:self.assertGreaterEqual(math.dist(obj['position'],other['position']),60)
            for o in r['support']['objectives']:
                for t in o['teams']:
                    self.assertEqual(t['approaches'],4);self.assertGreaterEqual(t['supportable_share'],.7)
            for tag,count in r['records'].items():self.assertLessEqual(count,village_support.CAPS[tag])
            self.assertGreaterEqual(r['elevated_safe_share'],.4)

    def test_city2_real_reservation_contradiction(self):
        with self.assertRaises(village.GenerationFailed) as caught:
            self.generator.generate(17,max_attempts=2,_blocked=[[-170,-130,340,260]])
        self.assertEqual(len(caught.exception.history),2)
        self.assertTrue(all(h['result'].startswith('contradiction: no clear civic site') for h in caught.exception.history))

    def test_city2_civic_sites_survive_secondary_routing(self):
        from mapgen.city2_streets import spine,network,raster
        from mapgen.city2_buildings import civic_sites
        for seed in list(range(50))+list(range(1201,1211)):
            plan=spine(seed,0,self.generator.stream);sites=civic_sites(plan)
            plan=network(plan,sites,seed,0,self.generator.stream)
            streets=raster(plan['roads'],plan['squares'],1)
            for site in sites:
                x,y,w,h=site['reservation']
                self.assertFalse(any((xx,yy) in streets for xx in range(x,x+w) for yy in range(y,y+h)),
                                 (seed,site['use']))

    def test_city2_shared_walls_and_floor_ownership(self):
        for m in self.maps.values():
            buildings={b['id']:b for b in m['buildings']}
            exported={int(r[1]):list(map(float,r[2:6])) for r in (line.split() for line in export(m).splitlines()) if r[0]=='B'}
            for b in m['buildings']:
                x,y,w,h=b.get('native_rect',b['rect'])
                for actual,want in zip(exported[b['record']],(x+w/2,y+h/2,w/2,h/2)):
                    self.assertAlmostEqual(actual,want,places=4)
                for wall in b.get('party_walls',[]):
                    a=buildings[wall['owner']]['rect'];axis=0 if wall['side'] in ('W','E') else 1
                    if wall['side'] in ('W','S'):
                        self.assertAlmostEqual(b['native_rect'][axis],a[axis]+a[axis+2]+.25)
                    else:
                        self.assertAlmostEqual(b['native_rect'][axis]+b['native_rect'][axis+2],a[axis]-.25)
                # Each part's physical boxes remain one contiguous export block.
                indices=[i for i,s in enumerate(m['solids']) if s['parent']==b['id']]
                self.assertEqual(indices,list(range(indices[0],indices[-1]+1)))
                for s in m['solids']:
                    if s['parent']!=b['id'] or s['kind']!='slab':continue
                    self.assertGreaterEqual(s['min'][0],x-1e-4);self.assertGreaterEqual(s['min'][1],y-1e-4)
                    self.assertLessEqual(s['max'][0],x+w+1e-4);self.assertLessEqual(s['max'][1],y+h+1e-4)

    def test_city2_no_shallow_terrace_recesses(self):
        for m in self.maps.values():
            lots={p['id']:p for p in m['parcels']}
            for p in lots.values():
                prev=lots.get(p['previous'])
                if not prev:continue
                side=1 if p['front'] in ('S','W') else -1
                for gap in (abs(p['line']-prev['line']),
                            abs(p['line']+side*p['depth']-prev['line']-side*prev['depth'])):
                    self.assertTrue(gap<1e-4 or gap>=1.2,(p['id'],gap))

    def test_city2_optional_wings_yield_to_the_part_reserve(self):
        from unittest.mock import patch
        # Force the optional-wing limit onto the mandatory civic/house stock.
        # The map must omit optional parts without losing civic assemblies.
        with patch('mapgen.city2_buildings.PART_BUDGET',100):
            m=self.generator.generate(17,analyse=False)
        self.assertEqual(len(m['buildings']),100)
        self.assertTrue(m['part_budget']['dropped_small_wings'])
        self.assertTrue(all(any(b['use']==use for b in m['buildings']) for use in ('church','mairie','factory','school')))

    def test_city2_separated_neighbours_keep_their_walls(self):
        from mapgen.geometry import base
        from mapgen.city2_buildings import houses
        from mapgen.village_damage import pattern
        lots=[dict(id='one',rect=[0,0,10,10],front='S',street_type='side',previous=None),
              dict(id='two',rect=[10,20,10,10],front='S',street_type='side',previous='one')]
        outputs=[]
        for previous in ('one',None):
            m=base('city2',17);m['estates']=[];lots[1]['previous']=previous
            history=pattern(17,0,[0,0],0,self.generator.stream)
            houses(m,lots,17,0,self.generator.stream,history,frozenset())
            outputs.append(m)
        self.assertEqual(outputs[0]['solids'],outputs[1]['solids'])
        self.assertFalse(any(e.get('party_with') for e in outputs[0]['estates']))

    def test_city2_streets_shapes_and_measures(self):
        for m in self.maps.values():
            self.assertTrue(any(r['street_type']=='alley' and r['width']==3 for r in m['roads']))
            for road in m['roads']:
                band={'main':(9,14),'side':(5,7),'alley':(3,3)}[road['street_type']]
                self.assertTrue(band[0]<=road['width']<=band[1])
                self.assertTrue(any(a[0]!=b[0] and a[1]!=b[1] for a,b in zip(road['points'],road['points'][1:])))
            self.assertTrue(all(6<=p['frontage']<=15 for p in m['parcels']))
            self.assertTrue(any(e.get('party_with') for e in m['estates']))
            self.assertTrue(any(len(e['parts'])>=3 for e in m['estates']))
            square=next(y for y in m['yards'] if y['id']=='market-square')
            self.assertLess(square['area'],square['rect'][2]*square['rect'][3])
            for key in ('block_area_cv','street_bend_share','frontage_jogs_per_100m','nonrectangular_footprint_share'):
                self.assertTrue(math.isfinite(m['look'][key]))
            self.assertAlmostEqual(sum(m['look']['street_width_histogram_m'].values()),m['look']['street_length_m'],delta=.1)
            for s in m['solids']:
                if s['kind']=='garden-wall':self.assertIn(round(s['max'][2]-s['min'][2],2),(1.15,1.9))

    def test_city2_views_and_no_scored_objective(self):
        from generate_maps import preview
        m=self.maps[17];source=svg(m);root=ET.fromstring(source);ns={'s':'http://www.w3.org/2000/svg'}
        for name in ('roofs','upper','cover','routes','support','physical'):
            self.assertIsNotNone(root.find(f".//s:g[@id='{name}']",ns))
        html=preview({'city2':dict(map=m,svg=source)})
        self.assertIn('samples.city2',html)
        self.assertIn('The Old City',html)

    def test_city2_deadline(self):
        with self.assertRaises(village.DeadlineExceeded):self.generator.generate(17,deadline=time.monotonic()-1)

    def test_city2_publishes_like_the_village(self):
        # Jordan accepted the city2 look on 23 September 2026: --native-target writes city2.army beside
        # the other families (the repository copy is pinned by test_golden_village_and_city2_bytes).
        import tempfile
        with tempfile.TemporaryDirectory() as folder:
            output=Path(folder)/'preview';target=Path(folder)/'project'
            run=subprocess.run([sys.executable,str(TOOLS/'generate_maps.py'),'--kind','city2','--seed','17',
                                '--output',str(output),'--native-target',str(target),'--deadline','120'],
                               capture_output=True,text=True)
            self.assertEqual(run.returncode,0,run.stderr[-800:])
            written=target/'Config'/'GeneratedMaps'/'city2.army'
            self.assertTrue(written.exists(),sorted(str(p) for p in target.rglob('*')))
            self.assertTrue(written.read_text().startswith('ARMYMAP 2 city2 17\n'))

    def test_city2_craters_clear_native_crouched_muzzle(self):
        from mapgen.kernel import Kernel
        # Native Posture(Crouched).muzzle is 0.72 m. The older 1 m illustration
        # height missed city rubble between .72 and 1 m, caught by imported-map-tests.
        for m in self.maps.values():
            K=Kernel(m)
            for c in m['cover']:
                if c.get('posture')!='prone':continue
                a=[*c['fire'][:2],c['fire'][2]+.72]
                b=[a[0]+c['facing'][0]*4,a[1]+c['facing'][1]*4,a[2]]
                self.assertTrue(K.los(a,b),c['id'])


if __name__=='__main__':unittest.main()
