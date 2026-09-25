"""Native <-> Python agreement suite for village maps (plan 029 G-3).

The village generator validates its maps with a pure-Python kernel (tools/mapgen/kernel.py and
the navigation grid of tools/mapgen/support.py). This suite asks the simulator itself, through
the native probe (tools/map_probe.cpp, built by scripts/test-mapgen.sh), the same questions on
generated villages and requires agreement:

  sight rays (ClearLine3D) and solid rays (ClearLine3DSolid)  >= 99.5 %
  Walkable                                                     >= 99.5 %
  ProtectedAt                                                  >= 99 %
  CoverPositions catalogue (same ids, same posture)            >= 98 %
  reachability: Python grid reachable <=> FindPath finds a route  100 %
    (the kernel with the native eight-neighbour, swept-clearance step rule; the validator's own
    four-neighbour flood must never be optimistic, and its stricter misses are only reported)

every threshold per map and per sample family. A mismatch prints the exact probe query, so it
can be replayed with `map-probe MAP.army`. Static-defence seating runs the real battle CLI on
villages: `battle_cli --map <village> --static-defence {building,spread,clusters} --defenders 12
--seconds 1 --lean`, five seeds.

Everything is skipped when the probe (or, for seating, the battle binary) has not been built.
Queries are drawn from `random.Random('probe|<seed>|<family>')`: the suite is deterministic.
"""
from concurrent.futures import ThreadPoolExecutor
import json
import math
import os
import random
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO / 'tools'))

from mapgen import village, city2                           # noqa: E402
from mapgen.kernel import Kernel                            # noqa: E402
from mapgen.native import export                            # noqa: E402
from mapgen.probe import Probe, ProbeError                  # noqa: E402
from mapgen.support import Navigation, LAYERS               # noqa: E402

AGREEMENT_SEEDS = (17, 5, 1201, 1206)
SEATING_SEEDS = (17, 5, 1201, 1206, 1210)
SEATING_LAYOUTS = ('building', 'spread', 'clusters')
BATTLE_BINARY = Path(os.environ.get('ARMY_BATTLE_LAB') or REPO / '.local' / 'lab' / 'battle-lab')
MAX_BATTLES = 3            # plan 029: at most three concurrent battles for this package
THRESHOLDS = dict(los=.995, slos=.995, walk=.995, prot=.99, catalogue=.98, path=1.0)
STANCE = dict(standing='standing', crouched='crouched', prone='prone')

_maps = {}


def village_map(seed, folder):
    """Generate (once per process) and export one village; returns (map dict, .army path)."""
    if seed not in _maps:
        _maps[seed] = village.generate(seed)
    m = _maps[seed]
    path = Path(folder) / f'village-{seed}.army'
    if not path.exists():
        path.write_text(export(m))
    return m, path


def city2_map(seed, folder):
    key=('city2',seed)
    if key not in _maps:
        _maps[key]=city2.generate(seed)
    m=_maps[key]
    path=Path(folder)/f'city2-{seed}.army'
    if not path.exists():path.write_text(export(m))
    return m,path


# ------------------------------------------------------------------ samples
def _rng(seed, family):
    return random.Random(f'probe|{seed}|{family}')


def _inside(m, rng, inset=1.0):
    x, y, w, h = m['bounds']
    return rng.uniform(x + inset, x + w - inset), rng.uniform(y + inset, y + h - inset)


def _height(rng):
    layer = rng.choice((0.0, 0.0, 0.0, -1.4, 3.2))
    return layer + rng.choice((.35, .9, 1.5, 1.7, rng.uniform(0, 2.5)))


def los_samples(m, seed, n=2400):
    """Random rays, rays across hedges (sight vs solid differ there) and rays out of firing positions."""
    rng = _rng(seed, 'los')
    out = []
    hedges = [s for s in m['solids'] if s.get('flags', 0) & 1]
    covers = m['cover']
    for k in range(n):
        family = k % 3
        if family == 0 or (family == 1 and not hedges) or (family == 2 and not covers):
            ax, ay = _inside(m, rng)
            bx, by = _inside(m, rng)
            out.append(((ax, ay, _height(rng)), (bx, by, _height(rng))))
        elif family == 1:
            s = rng.choice(hedges)
            (x0, y0, z0), (x1, y1, z1) = s['min'], s['max']
            cx, cy = (x0 + x1) / 2, (y0 + y1) / 2
            across_x = (x1 - x0) < (y1 - y0)
            along = rng.uniform(-.5, .5) * ((y1 - y0) if across_x else (x1 - x0))
            d1, d2 = rng.uniform(1, 30), rng.uniform(1, 30)
            ha, hb = rng.uniform(.2, 2.4), rng.uniform(.2, 2.4)
            if across_x:
                a, b = (cx - d1, cy + along, ha), (cx + d2, cy + along + rng.uniform(-8, 8), hb)
            else:
                a, b = (cx + along, cy - d1, ha), (cx + along + rng.uniform(-8, 8), cy + d2, hb)
            out.append((a, b) if rng.random() < .5 else (b, a))
        else:
            c = rng.choice(covers)
            p = c['fire']
            eye = (p[0], p[1], p[2] + (.3 if c.get('posture') == 'prone' else 1.5))
            angle = math.atan2(c['facing'][1], c['facing'][0]) + rng.uniform(-.7, .7)
            d = rng.uniform(3, 70)
            out.append((eye, (eye[0] + math.cos(angle) * d, eye[1] + math.sin(angle) * d, rng.uniform(.3, 1.8))))
    return out


def walk_samples(m, K, seed, n=6000):
    """Grid nodes on the three layers (where a layer can exist), points straddling the movement pad of
    blocking solids, and points on and just off every kind of surface (floors, ramps, stairs)."""
    rng = _rng(seed, 'walk')
    grid, pad, surf = [], [], []
    x, y, w, h = m['bounds']
    for yy in range(int(math.ceil(y + .6)), int(math.floor(y + h - .6)) + 1, 2):
        for xx in range(int(math.ceil(x + .6)), int(math.floor(x + w - .6)) + 1, 2):
            grid.append((float(xx), float(yy), 0.0))
    for s in m['surfaces']:
        rx, ry, rw, rh = s['rect']
        z = -1.4 if s['z'] < -.5 else 3.2 if s['z'] > 2.5 else None
        if z is None:
            continue
        for yy in range(int(math.ceil(ry - 1)), int(math.floor(ry + rh + 1)) + 1):
            for xx in range(int(math.ceil(rx - 1)), int(math.floor(rx + rw + 1)) + 1):
                grid.append((float(xx), float(yy), z))
    blocking = [s for s in m['solids'] if s['blocks_movement']]
    for _ in range(n):
        s = rng.choice(blocking)
        (x0, y0, z0), (x1, y1, z1) = s['min'], s['max']
        z = min(LAYERS, key=lambda layer: abs(layer - z0) if z0 < layer + 1.84 else 99)
        side = rng.randrange(4)
        gap = rng.uniform(.38, .62)
        if side == 0:
            p = (x0 - gap, rng.uniform(y0 - .5, y1 + .5), z)
        elif side == 1:
            p = (x1 + gap, rng.uniform(y0 - .5, y1 + .5), z)
        elif side == 2:
            p = (rng.uniform(x0 - .5, x1 + .5), y0 - gap, z)
        else:
            p = (rng.uniform(x0 - .5, x1 + .5), y1 + gap, z)
        pad.append(p)
    for _ in range(n):
        s = rng.choice(m['surfaces'])
        rx, ry, rw, rh = s['rect']
        px, py = rng.uniform(rx, rx + rw), rng.uniform(ry, ry + rh)
        cx, cy = rx + rw / 2, ry + rh / 2
        z = s['z'] + (px - cx) * s['slope'][0] + (py - cy) * s['slope'][1]
        surf.append((px, py, z + rng.choice((0.0, 0.0, .01, -.01, .02, .05, -.05))))
    return dict(grid=grid, pad=pad, surface=surf)


def prot_samples(m, K, catalogue, seed, n=2400):
    """Catalogue positions against threats in front of them (the protected case), and against threats
    from anywhere, at every stance; threats on the ground, in lanes and at upper windows."""
    rng = _rng(seed, 'prot')
    out = []
    for k in range(n):
        c = rng.choice(catalogue)
        p = c['shelter']
        if k % 2 == 0:
            angle = math.atan2(c['facing'][1], c['facing'][0]) + rng.uniform(-1.2, 1.2)
        else:
            angle = rng.uniform(-math.pi, math.pi)
        d = rng.uniform(4, 45)
        tz = rng.choice((0.0, 0.0, p[2], 3.2, -1.4))
        threat = (p[0] + math.cos(angle) * d, p[1] + math.sin(angle) * d, tz)
        stance = c['posture'] if k % 3 else rng.choice(('standing', 'crouched', 'prone'))
        out.append((p, threat, stance))
    return out


def path_samples(m, K, nav, seed, n=120):
    """Spawn -> goal for every squad, spawn -> random grid nodes on every layer, node -> node, and
    nodes the Python grid cannot reach from the deployments (the native search must fail there too)."""
    rng = _rng(seed, 'path')
    spawns = sorted(m['spawns'], key=lambda s: s['slot'])
    start = nav.near(spawns[0]['position'])
    reached = nav.flood(start)
    walkable = [i for i in range(len(nav.nodes)) if nav.nodes[i]]
    good = [i for i in walkable if reached[i]]
    lost = [i for i in walkable if not reached[i]]
    by_layer = {}
    for i in good:
        by_layer.setdefault(i // nav.plane, []).append(i)
    pairs = [(tuple(s['position']), tuple(s['goal'])) for s in spawns[::8]]
    for k in range(n):
        a = tuple(rng.choice(spawns)['position'])
        layer = rng.choice(sorted(by_layer))
        pairs.append((a, nav.point(rng.choice(by_layer[layer]))))
    for k in range(n // 2):
        pairs.append((nav.point(rng.choice(good)), nav.point(rng.choice(good))))
    for k in range(min(len(lost), n // 4)):
        pairs.append((tuple(rng.choice(spawns)['position']), nav.point(rng.choice(lost))))
    return pairs


class Reach:
    """Reachability on the Python grid with the native search's step rule.

    Native FindPath steps to all eight neighbours on the 1 m grid, an edge being valid when the
    swept movement line between the nodes is clear (ClearLine, 0.48 m pad); ramp and stair links
    join the layers. The validator's own flood (support.Navigation.flood) steps to four neighbours
    only, so it is stricter: it can call a pocket unreachable that a diagonal squeeze reaches.
    Here the four-neighbour components (plus links) are merged across every diagonal the kernel's
    `clear_line` admits, which is the native rule."""

    def __init__(self, nav, K):
        self.nav, self.K = nav, K
        nodes, W, plane = nav.nodes, nav.W, nav.plane
        label = [-1] * len(nodes)
        extra = {}
        for a, b, _ in nav.links:
            extra.setdefault(a, []).append(b)
            extra.setdefault(b, []).append(a)
        count = 0
        for i in range(len(nodes)):
            if not nodes[i] or label[i] >= 0:
                continue
            label[i] = count
            stack = [i]
            while stack:
                j = stack.pop()
                for k in list(nav.neighbours(j)) + extra.get(j, []):
                    if label[k] < 0:
                        label[k] = count
                        stack.append(k)
            count += 1
        self.parent = list(range(count))
        self.label = label
        for i in range(len(nodes)):
            if not nodes[i]:
                continue
            r = i % plane
            y, x = divmod(r, W)
            for dx in (-1, 1):
                if not (0 <= x + dx < W and y + 1 < nav.H):
                    continue
                j = i + W + dx
                if nodes[j] and self.find(label[i]) != self.find(label[j]) \
                        and K.clear_line(nav.point(i), nav.point(j)):
                    self.parent[self.find(label[i])] = self.find(label[j])

    def find(self, c):
        while self.parent[c] != c:
            self.parent[c] = self.parent[self.parent[c]]
            c = self.parent[c]
        return c

    def reachable(self, a, b):
        na, nb = self.nav.attach(a), self.nav.attach(b)
        if na is None or nb is None:
            return False
        return self.find(self.label[na]) == self.find(self.label[nb])


def validator_reachable(nav, a, b, cache):
    """The validator's four-neighbour flood (support.Navigation.flood) from the attached node."""
    na, nb = nav.attach(a), nav.attach(b)
    if na is None or nb is None:
        return False
    if na not in cache:
        cache[na] = nav.flood(na)
    return bool(cache[na][nb])


# ------------------------------------------------------------------ comparison
def _share(agree, total):
    return agree / total if total else 1.0


def agreement(m, path, probe):
    """Per family: (agreeing, total, [mismatching probe queries])."""
    K = Kernel(m)
    report = {}

    def record(name, queries, native, python):
        bad = [(q, n, p) for q, n, p in zip(queries, native, python) if n != p]
        report[name] = (len(queries) - len(bad), len(queries), bad)

    rays = los_samples(m, m['seed'])
    record('los', [probe.los_query(a, b) for a, b in rays], probe.los(rays), [K.los(a, b) for a, b in rays])
    record('slos', [probe.los_query(a, b, True) for a, b in rays], probe.los(rays, solid=True),
           [K.los(a, b, concealment=False) for a, b in rays])
    for family, points in walk_samples(m, K, m['seed']).items():
        record(f'walk:{family}', [probe.walk_query(p) for p in points], probe.walkable(points),
               [K.walkable(p) for p in points])
    catalogue = K.catalogue()
    items = prot_samples(m, K, catalogue, m['seed'])
    record('prot', [probe.prot_query(*it) for it in items], probe.protected(items),
           [K.protected_at(p, t, s) for p, t, s in items])
    native = {c['id']: c for c in probe.covers()}
    mine = {c['id']: c for c in catalogue}
    union = sorted(set(native) | set(mine))
    bad = []
    for i in union:
        n, p = native.get(i), mine.get(i)
        if n is None or p is None or n['crouch'] != (p['posture'] != 'standing') \
                or max(abs(a - b) for a, b in zip(n['shelter'], p['shelter'])) > .01:
            bad.append((f'COVERS id {i}', n and (n['shelter'], n['crouch']), p and (p['shelter'], p['posture'])))
    report['catalogue'] = (len(union) - len(bad), len(union), bad)
    nav = Navigation(m, K)
    pairs = path_samples(m, K, nav, m['seed'])
    routes = probe.paths(pairs)
    queries = [probe.path_query(a, b) for a, b in pairs]
    found = [bool(r) for r in routes]
    reach = Reach(nav, K)
    record('path', queries, found, [reach.reachable(a, b) for a, b in pairs])
    # The validator's stricter flood may miss a diagonal squeeze (informational), but it must never
    # call reachable what the simulator cannot reach: that would pass a sealed map (gated).
    cache = {}
    grid = [validator_reachable(nav, a, b, cache) for a, b in pairs]
    optimistic = [(q, f, g) for q, f, g in zip(queries, found, grid) if g and not f]
    report['path:validator-never-optimistic'] = (len(pairs) - len(optimistic), len(pairs), optimistic)
    stricter = [(q, f, g) for q, f, g in zip(queries, found, grid) if f and not g]
    report['info:validator-stricter'] = (len(pairs) - len(stricter), len(pairs), stricter)
    return report


def threshold(name):
    """Gate for a report family; `info:` families are printed, never gated."""
    return 0.0 if name.startswith('info:') else THRESHOLDS[name.split(':')[0]]


def describe(seed, report, kind='village'):
    lines = []
    for name, (agree, total, bad) in report.items():
        lines.append(f'{kind} {seed} {name}: {agree}/{total} = {_share(agree, total):.4%}'
                     f' (need {threshold(name):.1%})')
        for q, n, p in bad[:8]:
            lines.append(f'    mismatch: {q}  native={n} python={p}')
    return '\n'.join(lines)


@unittest.skipIf(Probe.find('x') is None, 'native map probe not built (scripts/test-mapgen.sh builds it)')
class NativeAgreement(unittest.TestCase):
    family='village'
    map_for=staticmethod(village_map)
    @classmethod
    def setUpClass(cls):
        cls.tmp = tempfile.TemporaryDirectory()

    @classmethod
    def tearDownClass(cls):
        cls.tmp.cleanup()

    def test_probe_answers_through_the_real_functions(self):
        m, path = self.map_for(17, self.tmp.name)
        probe = Probe.find(path)
        info = probe.info()
        self.assertEqual((info['kind'], info['seed'], info['format_version']), (self.family, 17, 2))
        self.assertEqual(info['obstacles'], len(m['solids']))
        self.assertEqual(info['has_concealment'], int(any(s.get('flags', 0) & 1 for s in m['solids'])))
        answers = probe.run(['WALK 1 2', 'NONSENSE', 'LOS 0 0 1 0 0 1'])
        self.assertTrue(answers[0].startswith('ERR') and answers[1].startswith('ERR'))
        self.assertIn(answers[2], ('0', '1'))
        spawn = sorted(m['spawns'], key=lambda s: s['slot'])[0]
        route = probe.paths([(spawn['position'], spawn['goal'])])[0]
        self.assertTrue(route and math.dist(route[-1][:2], spawn['goal'][:2]) < 1.5)

    def test_python_kernel_agrees_with_the_simulator(self):
        failures = []
        for seed in AGREEMENT_SEEDS:
            m, path = self.map_for(seed, self.tmp.name)
            report = agreement(m, path, Probe.find(path))
            text = describe(seed, report,self.family)
            print('\n' + text, flush=True)
            for name, (agree, total, _) in report.items():
                if _share(agree, total) < threshold(name):
                    failures.append(f'{self.family} {seed} {name}: {agree}/{total}')
        self.assertEqual(failures, [], 'Python and native geometry disagree; mismatching queries are printed above')


class City2NativeAgreement(NativeAgreement):
    family='city2'
    map_for=staticmethod(city2_map)

    @classmethod
    def setUpClass(cls):
        super().setUpClass()
        _,path=cls.map_for(17,cls.tmp.name)
        try:
            Probe.find(path).info()
        except ProbeError as error:
            if 'Unsupported map header' not in str(error):raise
            cls.tmp.cleanup()
            raise unittest.SkipTest('city2 header requires overseer importer support; geometry alias diagnostics are separate')

    def test_shared_party_walls_protect_all_three_stances(self):
        for seed in (17,5,1201):
            m,path=self.map_for(seed,self.tmp.name)
            queries=party_wall_queries(m)
            self.assertTrue(queries)
            self.assertTrue(all(Probe.find(path).protected(queries)),seed)


def party_wall_queries(m):
    """Across intact terrace walls, excluding doors in connected civic wings."""
    K=Kernel(m);by_id={b['id']:b for b in m['buildings']};queries=[]
    for b in m['buildings']:
        if b['use']!='house' or b['ruined']:continue
        for shared in b.get('party_walls',[]):
            owner=by_id[shared['owner']]
            if owner['ruined']:continue
            axis=0 if shared['side']=='W' else 1;other=1-axis
            a,r=owner['rect'],b['rect'];fixed=r[axis]
            lo=max(a[other],r[other]);hi=min(a[other]+a[other+2],r[other]+r[other+2])
            for t in (.5,.3,.7):
                p=[0,0,0];q=[0,0,0];p[axis]=fixed+1.25;q[axis]=fixed-1.25
                p[other]=q[other]=lo+(hi-lo)*t
                if K.walkable(p) and K.walkable(q):
                    queries.extend((p,q,stance) for stance in ('standing','crouched','prone'))
                    queries.extend((q,p,stance) for stance in ('standing','crouched','prone'))
                    break
    return queries


def squeeze_map():
    """A node whose four grid neighbours are blocked by small posts, reachable only diagonally."""
    posts = [(1, -.35), (-.35, 1), (-1, 0), (0, -1)]
    m = dict(bounds=[-30, -30, 60, 60], surfaces=[], links=[], cover=[],
             solids=[dict(id=f'post{i}', geometry_id=i, min=[x - .1, y - .1, 0], max=[x + .1, y + .1, 2],
                          blocks_movement=True, half_cover=False, building=False) for i, (x, y) in enumerate(posts, 1)])
    lines = ['ARMYMAP 1 city 3', 'BOUNDS 30 30 0']
    lines += [f'O {i} {x} {y} 0 0.1 0.1 2 0 0 1' for i, (x, y) in enumerate(posts, 1)]
    for i in range(64):
        y = -24 + (i % 32) * 1.5
        lines.append(f"U {i} {-25 if i < 32 else 25} {y} 0 10 {y * .1:.3f} 0")
    return m, '\n'.join(lines + ['END']) + '\n'


class ReachabilityRule(unittest.TestCase):
    def test_a_diagonal_squeeze_is_reachable_as_in_the_simulator(self):
        m, text = squeeze_map()
        K = Kernel(m)
        nav = Navigation(m, K)
        self.assertTrue(K.walkable((0, 0, 0)))
        self.assertFalse(any(K.walkable(p) for p in ((1, 0, 0), (0, 1, 0), (-1, 0, 0), (0, -1, 0))))
        self.assertTrue(Reach(nav, K).reachable((0, 0, 0), (5, 5, 0)))
        self.assertFalse(validator_reachable(nav, (0, 0, 0), (5, 5, 0), {}))   # the validator is stricter
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / 'squeeze.army'
            path.write_text(text)
            probe = Probe.find(path)
            if probe is not None:
                self.assertEqual(probe.walkable([(0, 0, 0), (1, 0, 0)]), [True, False])
                self.assertTrue(probe.paths([((0, 0, 0), (5, 5, 0))])[0])


def seat(binary, army, seed, layout, out):
    """One 1 s lean battle with a static defence on a village; returns (exit, text)."""
    cmd = [str(binary), '--legacy-ai', '--map', str(army), '--static-defence', layout, '--defenders', '12',
           '--defence-seed', str(seed), '--seed', '107', '--seconds', '1', '--lean', '--no-trace', '--out', str(out)]
    proc = subprocess.run(cmd, capture_output=True, text=True, timeout=600)
    return proc.returncode, ' '.join(cmd) + '\n' + proc.stdout + proc.stderr


@unittest.skipIf(not (BATTLE_BINARY.is_file() and os.access(BATTLE_BINARY, os.X_OK)),
                 f'battle binary {BATTLE_BINARY} not built')
class VillageStaticDefence(unittest.TestCase):
    family='village'
    map_for=staticmethod(village_map)
    def test_static_defence_seats_twelve_on_villages(self):
        with tempfile.TemporaryDirectory() as tmp:
            jobs = []
            for seed in SEATING_SEEDS:
                _, army = self.map_for(seed, tmp)
                for layout in SEATING_LAYOUTS:
                    jobs.append((seed, layout, army, Path(tmp) / f'{seed}-{layout}'))
            with ThreadPoolExecutor(max_workers=MAX_BATTLES) as pool:
                results = list(pool.map(lambda j: (j[0], j[1], j[3], *seat(BATTLE_BINARY, j[2], j[0], j[1], j[3])), jobs))
            failures = []
            for seed, layout, out, code, text in results:
                if code:
                    failures.append(f'{self.family} {seed} {layout}: exit {code}\n{text}')
                    continue
                run = out / json.loads((out / 'latest.json').read_text())['run']
                manifest = json.loads((run / 'manifest.json').read_text())
                defence = manifest.get('static_defence') or {}
                print(f'{self.family} {seed} {layout}: {json.dumps(defence)[:160]}', flush=True)
                # PlanStaticDefence throws (exit 1) unless every requested defender is seated.
                if defence.get('layout') != layout or defence.get('defenders') != 12 or manifest.get('battlefield_digest') is None:
                    failures.append(f'{self.family} {seed} {layout}: {defence}')
            self.assertEqual(failures, [])


class City2StaticDefence(VillageStaticDefence):
    family='city2'
    map_for=staticmethod(city2_map)

    @classmethod
    def setUpClass(cls):
        with tempfile.TemporaryDirectory() as tmp:
            _,path=city2_map(17,tmp)
            code,text=seat(BATTLE_BINARY,path,17,'building',Path(tmp)/'header-check')
            if code and 'Unsupported map header' in text:
                raise unittest.SkipTest('city2 header requires overseer importer support; seating alias diagnostics are separate')
            if code:raise RuntimeError(text)


if __name__ == '__main__':
    unittest.main()
