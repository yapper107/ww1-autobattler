"""A WW1 French village: socket constraints, then composed land parcels (plan 029).

Pipeline: macro pre-collapse (through-road spine with doglegs, church and square on
the spine near column 8, optional side road, two or three curved sunken lanes, deployment edges,
density band) -> deterministic WFC over a socketed tile vocabulary with AC-3
propagation -> coarse budget estimate -> merged fields, road frontage and reserved
farm compounds -> physical geometry -> validation and supportability (support.py)
with a bounded repair loop.

Every random choice draws from its own `random.Random(f'village|{seed}|...')` stream
(per stage, per cell, per edge), candidates are always visited in sorted order, and
no set or dict iteration order reaches the output, so a seed is reproducible under
any PYTHONHASHSEED and any state of the global `random` module.
"""
import math
import random
import time
from collections import deque

from .geometry import base, solid, cover, surface, round_geometry
from .shells import Frame, shell

COLS, ROWS, CELL = 17, 13, 20
X0, Y0 = -170, -130
SOLID_BUDGET = 3400
LINK_BUDGET = 256
MAX_ATTEMPTS = 12
DENSITY = (10, 26)
HOUSE2_SHARE = .35
N, E, S, W = 0, 1, 2, 3
DIRS = ((0, 1), (1, 0), (0, -1), (-1, 0))          # N E S W as (di, dj)
LETTER = 'NESW'
BUILDING_TILES = ('house', 'house2', 'farm', 'church')


class Contradiction(Exception):
    pass


class DeadlineExceeded(Exception):
    pass


class GenerationFailed(Exception):
    def __init__(self, message, history):
        super().__init__(message)
        self.history = history


def stream(seed, *parts):
    return random.Random('village|' + '|'.join(str(p) for p in (seed,) + parts))


# ---------------------------------------------------------------- vocabulary
# Sockets, listed N E S W for rotation 0: R road, L lane, s street side, F building
# front (must face a street side), v village, f field, c church-to-square.
TILES = {
    'road_straight': ('RsRs', (0, 1)), 'road_corner': ('RRss', (0, 1, 2, 3)),
    'road_t': ('RRsR', (0, 1, 2, 3)), 'road_cross': ('RRRR', (0,)),
    'lane_straight': ('LfLf', (0, 1)), 'lane_corner': ('LLff', (0, 1, 2, 3)),
    'lane_ramp': ('Lfff', (0, 1, 2, 3)),
    'house': ('vvFv', (0, 1, 2, 3)), 'house2': ('vvFv', (0, 1, 2, 3)), 'farm': ('ffFf', (0, 1, 2, 3)),
    'square': ('csFs', (0, 1, 2, 3)), 'church': ('vvcv', (0, 1, 2, 3)),
    'orchard': ('vvvv', (0,)), 'garden': ('vvvv', (0,)),
    'field': ('ffff', (0,)), 'hedged': ('ffff', (0,)), 'craters': ('ffff', (0,)),
    'edge': ('ffff', (0,)),
}
COMPATIBLE = {tuple(sorted(p)) for p in ('RR', 'LL', 'cc', 'Fs', 'sv', 'sf', 'vv', 'vf', 'ff')}
FREE_TILES = ('farm', 'field', 'garden', 'hedged', 'house', 'house2', 'orchard', 'craters')
WEIGHTS = {  # (village band, rural)
    'house': (5.0, .35), 'house2': (2.0, .15), 'farm': (1.1, 1.6), 'orchard': (1.4, 1.0),
    'garden': (1.8, .3), 'field': (1.0, 3.0), 'hedged': (1.2, 3.2), 'craters': (.25, 1.55),
}


def _rotate(sockets, r):
    return ''.join(sockets[(d - r) % 4] for d in range(4))


VARIANTS = sorted((name, r, _rotate(sockets, r)) for name, (sockets, rots) in TILES.items() for r in rots)
VARIANT_INDEX = {(name, r): i for i, (name, r, _) in enumerate(VARIANTS)}
COMPAT = [[sum(1 << j for j, w in enumerate(VARIANTS)
               if tuple(sorted(v[2][d] + w[2][(d + 2) % 4])) in COMPATIBLE) for d in range(4)]
          for v in VARIANTS]


def front_of(r):
    """World side a rotation-r building front (socket F / c at S) faces."""
    return LETTER[(S + r) % 4]


def variant_for(name, sockets):
    for i, (tile, r, s) in enumerate(VARIANTS):
        if tile == name and s == sockets:
            return i
    raise ValueError(f'no {name} variant with sockets {sockets}')


def _bits(mask):
    out = []
    while mask:
        low = mask & -mask
        out.append(low.bit_length() - 1)
        mask ^= low
    return out


# ---------------------------------------------------------------- macro plan
def macro(seed, attempt):
    """Pre-collapsed cells: {(i, j): variant index} plus the plan's metadata."""
    rng = stream(seed, attempt, 'macro')
    fixed, road, links = {}, set(), set()
    # Through-road spine west -> east with one or two doglegs of one row.
    row = rng.randint(4, 8)
    doglegs = sorted(rng.sample([3, 4, 5, 11, 12, 13], rng.choice((1, 2))))
    if len(doglegs) == 2 and doglegs[1] - doglegs[0] < 2:
        doglegs = doglegs[:1]
    spine, prev = [], None
    for i in range(COLS):
        cell = (i, row)
        spine.append(cell)
        if prev:
            links.add(tuple(sorted((prev, cell))))
        prev = cell
        if i in doglegs:
            step = rng.choice((-1, 1)) if 3 < row < 9 else (1 if row <= 3 else -1)
            row += step
            cell = (i, row)
            spine.append(cell)
            links.add(tuple(sorted((prev, cell))))
            prev = cell
    road.update(spine)
    spine_row = {}
    for i, j in spine:
        spine_row.setdefault(i, j)
    straight = [i for i in (7, 8, 9) if i not in doglegs and i - 1 not in doglegs and i + 1 not in doglegs]
    if not straight:
        raise Contradiction('no straight spine cell near column 8')
    cc = rng.choice(straight)
    rs = spine_row[cc]
    d = rng.choice((-1, 1))
    square, church = (cc, rs + d), (cc, rs + 2 * d)
    reserved = {square, church}
    # Optional side road north or south of the spine, never beside the church or a dogleg.
    side = None
    if rng.random() < .6:
        options = [c for c in range(4, 13) if abs(c - cc) >= 2 and all(abs(c - g) >= 2 for g in doglegs)]
        if options:
            cs = rng.choice(options)
            direction = rng.choice((-1, 1))
            j0 = spine_row[cs]
            cells, j = [], j0 + direction
            while 0 <= j < ROWS:
                cells.append((cs, j))
                j += direction
            if cells:
                prev = (cs, j0)
                for c in cells:
                    links.add(tuple(sorted((prev, c))))
                    prev = c
                road.update(cells)
                side = dict(column=cs, direction=direction)
    # Two or three separate rural approaches, with independent shape streams.
    lanes = []
    target = stream(seed, attempt, 'lane-count').choice((2, 2, 3))
    for n in range(target):
        lane = _plan_lane(stream(seed, attempt, 'lane-plan', n), road, reserved, spine_row, n % 2 == 0)
        if lane:
            lanes.append(lane)
            reserved.update(lane)
    if len(lanes) < 2:
        raise Contradiction('not enough room for two sunken lanes')
    # Road variants from explicit connections; a map-edge cell also connects outward.
    for cell in sorted(road):
        i, j = cell
        sockets = ''
        for di, dj in DIRS:
            other = (i + di, j + dj)
            outside = not (0 <= other[0] < COLS and 0 <= other[1] < ROWS)
            sockets += 'R' if tuple(sorted((cell, other))) in links or (outside and _exits(cell, road, links)) else 's'
        count = sockets.count('R')
        if count == 2:
            name = 'road_straight' if sockets in ('RsRs', 'sRsR') else 'road_corner'
        else:
            name = {3: 'road_t', 4: 'road_cross'}[count]
        fixed[cell] = variant_for(name, sockets)
    fixed[square] = VARIANT_INDEX[('square', 0 if d > 0 else 2)]
    fixed[church] = VARIANT_INDEX[('church', 0 if d > 0 else 2)]
    # The square has active frontages, not a church isolated in a crater field.
    for dx, rotation in ((-1, 3), (1, 1)):
        neighbour = (square[0]+dx, square[1])
        if neighbour not in fixed and neighbour not in reserved and neighbour not in road:
            fixed[neighbour] = VARIANT_INDEX[('house', rotation)]
    for lane in lanes:
        for k, cell in enumerate(lane):
            sockets = ''
            for dd, (di, dj) in enumerate(DIRS):
                other = (cell[0] + di, cell[1] + dj)
                sockets += 'L' if (k > 0 and lane[k - 1] == other) or (k + 1 < len(lane) and lane[k + 1] == other) else 'f'
            count = sockets.count('L')
            name = 'lane_ramp' if count == 1 else ('lane_straight' if sockets in ('LfLf', 'fLfL') else 'lane_corner')
            fixed[cell] = variant_for(name, sockets)
    for i in range(COLS):
        for j in range(ROWS):
            if (i in (0, COLS - 1) or j in (0, ROWS - 1)) and (i, j) not in fixed:
                fixed[(i, j)] = VARIANT_INDEX[('edge', 0)]
    band = set()
    for (i, j) in road:
        if 2 <= i <= 14:
            for di in (-1, 0, 1):
                for dj in (-1, 0, 1):
                    band.add((i + di, j + dj))
    for (i, j) in (square, church):
        for di in (-2, -1, 0, 1, 2):
            for dj in (-2, -1, 0, 1, 2):
                band.add((i + di, j + dj))
    return fixed, dict(spine=spine, doglegs=doglegs, church=church, square=square, side=side,
                       lanes=lanes, band=band, road=road, links=links)


def _exits(cell, road, links):
    """A road cell with a single connection continues off the map."""
    return sum(cell in pair for pair in links) == 1


def _plan_lane(rng, road, reserved, spine_row, west):
    """A sunken lane that usually leads from one side's fields toward the village
    flank, two to four rows off the spine; otherwise anywhere in the fields."""
    near = set()
    for (i, j) in road | reserved:
        for di in (-1, 0, 1):
            for dj in (-1, 0, 1):
                near.add((i + di, j + dj))
    for attempt in range(100):
        length = rng.randint(3, 5)
        corner = rng.random() < .85
        if attempt < 65 and rng.random() < .65:
            axis, step = 'x', (1, 0)
            col = rng.randint(2, 4) if west else rng.randint(12, 14) - length + 1
            row = spine_row[col] + rng.choice((-1, 1)) * rng.randint(2, 4)
            start = (col, row)
        else:
            axis = rng.choice(('x', 'y'))
            if axis == 'x':
                start, step = (rng.randint(2, 14 - length + 1), rng.randint(1, ROWS - 2)), (1, 0)
            else:
                start, step = (rng.randint(2, 14), rng.randint(1, ROWS - 2 - length + 1)), (0, 1)
        cells = [(start[0] + step[0] * k, start[1] + step[1] * k) for k in range(length)]
        if corner:
            turn = (step[1], step[0]) if rng.random() < .5 else (-step[1], -step[0])
            last = cells[-1]
            cells += [(last[0] + turn[0] * k, last[1] + turn[1] * k) for k in (1, 2)]
        if all(2 <= i <= 14 and 1 <= j <= ROWS - 2 and (i, j) not in near for i, j in cells):
            return cells
    return None


# ---------------------------------------------------------------- WFC solve
def solve(seed, attempt, fixed, band):
    """Collapse every free cell. Raises Contradiction on an empty domain."""
    full = 0
    for name in FREE_TILES:
        for r in TILES[name][1]:
            full |= 1 << VARIANT_INDEX[(name, r)]
    domain = {}
    for i in range(COLS):
        for j in range(ROWS):
            domain[(i, j)] = (1 << fixed[(i, j)]) if (i, j) in fixed else full
    allowed_cache = {}

    def allowed(mask, d):
        key = (mask, d)
        if key not in allowed_cache:
            out = 0
            for v in _bits(mask):
                out |= COMPAT[v][d]
            allowed_cache[key] = out
        return allowed_cache[key]

    def propagate(queue):
        pending = set(queue)
        queue = deque(queue)
        while queue:
            cell = queue.popleft()
            pending.discard(cell)
            for d, (di, dj) in enumerate(DIRS):
                other = (cell[0] + di, cell[1] + dj)
                if other not in domain:
                    continue
                reduced = domain[other] & allowed(domain[cell], d)
                if reduced != domain[other]:
                    if not reduced:
                        raise Contradiction(f'empty domain at {other}')
                    domain[other] = reduced
                    if other not in pending:
                        pending.add(other)
                        queue.append(other)

    propagate(sorted(domain))
    while True:
        open_cells = [(bin(domain[c]).count('1'), c[1], c[0]) for c in sorted(domain) if domain[c] & (domain[c] - 1)]
        if not open_cells:
            break
        _, j, i = min(open_cells)
        cell = (i, j)
        rng = stream(seed, attempt, 'wfc', i, j)
        col = 0 if cell in band else 1
        choices = _bits(domain[cell])
        names = sorted({VARIANTS[v][0] for v in choices})
        weights = [WEIGHTS[name][col] for name in names]
        pick = rng.random() * sum(weights)
        name = names[-1]
        for n, w in zip(names, weights):
            pick -= w
            if pick < 0:
                name = n
                break
        rotations = [v for v in choices if VARIANTS[v][0] == name]
        chosen = rotations[int(rng.random() * len(rotations))]
        domain[cell] = 1 << chosen
        propagate([cell])
    return {c: _bits(domain[c])[0] for c in sorted(domain)}


def balance_storeys(seed, attempt, tiles):
    """Exactly round(35%) of houses are two-storey (farmhouses always are)."""
    houses = sorted(c for c, v in tiles.items() if VARIANTS[v][0] in ('house', 'house2'))
    target = int(math.floor(HOUSE2_SHARE * len(houses) + .5))
    rng = stream(seed, attempt, 'storeys')
    order = list(houses)
    rng.shuffle(order)
    two = set(order[:target])
    for c in houses:
        r = VARIANTS[tiles[c]][1]
        tiles[c] = VARIANT_INDEX[('house2' if c in two else 'house', r)]
    return tiles


# ---------------------------------------------------------------- budget
TILE_COST = dict(road_straight=0, road_corner=0, road_t=0, road_cross=0, lane_straight=40,
                 lane_corner=40, lane_ramp=50, house=37, house2=87, farm=128, square=6, church=48,
                 orchard=16, garden=6, field=2, hedged=5, craters=40, edge=0)


def estimate(tiles):
    names = [VARIANTS[v][0] for v in tiles.values()]
    solids = sum(TILE_COST[n] for n in names) + 60
    links = sum(n in ('house2', 'farm') for n in names) + sum(n == 'lane_ramp' for n in names)
    return dict(solids=solids, links=links)


# ---------------------------------------------------------------- expansion
def cell_rect(i, j):
    return [X0 + CELL * i, Y0 + CELL * j, CELL, CELL]


def cell_centre(i, j):
    return [X0 + CELL * i + CELL / 2, Y0 + CELL * j + CELL / 2]


def expand(seed, attempt, tiles, plan, damage, demoted=()):
    m = base('village', seed)
    m['schema'] = 'army-map/2'
    m['generator_version'] = 5
    m['parameters'] = dict(damage=damage)
    from .village_land import compose, landscape
    from .village_damage import pattern, exposure, bombard
    tiles = dict(tiles)
    land = compose(seed, attempt, tiles, plan)
    balance_storeys(seed, attempt, tiles)
    m['landscape'] = dict(open_cells=land['open_cells'])
    history = pattern(seed, attempt, cell_centre(*plan['square']), damage)
    m['bombardment'] = history
    m['cells'] = [dict(cell=[i, j], tile=VARIANTS[v][0], rotation=VARIANTS[v][1])
                  for (i, j), v in sorted(tiles.items())]
    m['hedges'] = []
    _roads(m, plan)
    _lane(m, seed, attempt, plan)
    order = sorted(tiles, key=lambda c: (c[1], c[0]))
    farms = []
    for (i, j) in order:
        if (i, j) in land['occupied'] and (i, j) not in land['farms']:
            continue
        name, r, _ = VARIANTS[tiles[(i, j)]]
        rng = stream(seed, attempt, 'expand', i, j)
        frame = Frame(cell_rect(i, j), front_of(r))
        local_damage = min(1, damage*(.08+2.6*exposure(history,cell_centre(i,j))))
        if name in ('house', 'house2'):
            _house(m, frame, rng, name == 'house2' and (i, j) not in demoted, local_damage)
        elif name == 'farm':
            farms.append(_farm(m, Frame(land['farms'][(i, j)]['rect'], frame.front), rng, local_damage, False))
        elif name == 'church':
            _church(m, frame, rng)
        elif name == 'square':
            _square(m, frame, rng, (i, j))
        elif name == 'orchard':
            _orchard(m, cell_rect(i, j), rng)
        elif name == 'garden':
            _garden(m, cell_rect(i, j), rng)
        elif name in ('field', 'hedged'):
            if rng.random() < .12:
                _haystacks(m, cell_rect(i, j), rng)
    landscape(m, seed, attempt, land)
    _focal_point(m, seed, attempt, plan, farms)
    for b in m['buildings']:
        x,y,w,h = b['rect']
        b['damage_exposure'] = exposure(history,(x+w/2,y+h/2))
    bombard(m, seed, attempt, history)
    _deployment(m, plan)
    m = round_geometry(m)
    from .kernel import Kernel
    K = Kernel(m)
    _prune_covers(m, K)
    _spawns(m, K)
    from .village_objectives import select
    m['objectives'] = select(m)
    return m


def _roads(m, plan):
    from .village_curves import curve

    def polyline(cells):
        pts = [cell_centre(*c) for c in cells]
        out = [pts[0]]
        for p in pts[1:]:
            if len(out) >= 2 and (out[-2][0] == out[-1][0] == p[0] or out[-2][1] == out[-1][1] == p[1]):
                out[-1] = p
            else:
                out.append(p)
        return out
    spine = polyline(plan['spine'])
    spine[0] = [X0, spine[0][1]]
    spine[-1] = [-X0, spine[-1][1]]
    # Pin the side-road junction so both curved roads share exactly one meeting.
    anchors = []
    if plan['side']:
        cs = plan['side']['column']
        j0 = next(j for i, j in plan['spine'] if i == cs)
        anchors.append(cell_centre(cs, j0))
    curved = curve(spine, stream(m['seed'], 'road-curve'), amplitude=2.4)
    for p in curved:
        for anchor in anchors:
            d = math.dist(p, anchor)
            if d < 12:
                p[1] = anchor[1] + (p[1]-anchor[1])*min(1,d/12)**2
    for anchor in anchors:
        at = next(i for i in range(1,len(curved)) if curved[i-1][0] <= anchor[0] <= curved[i][0])
        curved.insert(at,list(anchor))
    m['roads'].append(dict(id='road-spine', points=curved, width=7, name='Grand-Rue'))
    if plan['side']:
        cs, direction = plan['side']['column'], plan['side']['direction']
        cells = sorted([c for c in plan['road'] if c[0] == cs and c not in plan['spine']],
                       key=lambda c: c[1] * direction)
        j0 = next(j for i, j in plan['spine'] if i == cs)
        pts = [cell_centre(cs, j0), cell_centre(*cells[-1])]
        pts[-1][1] = -Y0 if direction > 0 else Y0
        m['roads'].append(dict(id='road-side', points=curve(pts, stream(m['seed'], 'side-road-curve'), amplitude=2.4), width=6, name='Chemin du Moulin'))


def _lane(m, seed, attempt, plan):
    from .village_curves import curve, simplify, tube, rect_cells, rectangles, offset_line
    from .village_land import _boundary
    dug = set()
    for n, cells in enumerate(plan['lanes']):
        pts = [cell_centre(*c) for c in cells]
        first = [(pts[1][k]-pts[0][k])/CELL for k in (0,1)]
        last = [(pts[-2][k]-pts[-1][k])/CELL for k in (0,1)]
        points = curve(simplify(pts), stream(seed, attempt, 'lane-curve', n), amplitude=3.8, radius=14)
        ident = 'lane-%03d'%n
        m['paths'].append(dict(id=ident, points=points, width=4, kind='lane', team=None, name='Chemin creux'))
        ramps, ramp_cells = [], set()
        for centre, inward in ((pts[0], first), (pts[-1], last)):
            out = [-inward[0], -inward[1]]
            top = [centre[0]+6*out[0], centre[1]+6*out[1]]
            x0,x1 = sorted((centre[0],top[0])); y0,y1 = sorted((centre[1],top[1]))
            rect = [x0-(2 if out[0]==0 else 0), y0-(2 if out[1]==0 else 0), (x1-x0) or 4, (y1-y0) or 4]
            slope = [1.4/6*out[0], 1.4/6*out[1]]
            s = surface(m, rect, -.7, slope, ident, kind=1, level=-1, building=0, prefix='ramp')
            m['links'].append(dict(kind='ramp', surface=s['id'], width=4, team=None,
                                   from_position=centre+[-1.4], to_position=top+[0],
                                   landings=[[centre[0]+inward[0],centre[1]+inward[1],-1.4],
                                             [top[0]+out[0],top[1]+out[1],0]]))
            ramps.append((rect,slope,out))
            ramp_cells.update(rect_cells(rect))
        floor = tube(points, 4) - ramp_cells
        dug.update(floor | ramp_cells)
        for rect in rectangles(floor):
            surface(m, rect, -1.4, (0,0), ident, kind=0, level=-1, building=0, prefix='lane')
        for rect, slope, out in ramps:
            x,y,w,h = rect
            for k in range(24):
                r = [x+k*w/24,y,w/24,h] if out[0] else [x,y+k*h/24,w,h/24]
                cx,cy = r[0]+r[2]/2,r[1]+r[3]/2
                height = -.7+(cx-x-w/2)*slope[0]+(cy-y-h/2)*slope[1]+1.4
                solid(m,r,height,'tread',-1.4,False,ident)
        # Continuous gateway spacing follows the bank's arc length.
        for bank in (-1, 1):
            _boundary(m, offset_line(points, bank*3.7),
                      stream(seed, attempt, 'lane-bank', n, bank), ident)
    _earth(m, rectangles(dug))


def _earth(m, dug):
    """Merged 1 m raster complement of the dug lane over the whole map (bullets)."""
    x0, y0, width, height = map(int, m['bounds'])
    floor = set()
    for rx, ry, rw, rh in dug:
        for yy in range(round(ry), round(ry + rh)):
            for xx in range(round(rx), round(rx + rw)):
                floor.add((xx, yy))
    active, earth = {}, []
    for yy in range(y0, y0 + height):
        spans, xx = [], x0
        while xx < x0 + width:
            if (xx, yy) in floor:
                xx += 1
                continue
            start = xx
            while xx < x0 + width and (xx, yy) not in floor:
                xx += 1
            spans.append((start, xx))
        current = {}
        for span in spans:
            r = active.pop(span, [span[0], yy, span[1] - span[0], 0])
            r[3] += 1
            current[span] = r
        earth.extend(active[k] for k in sorted(active))
        active = current
    earth.extend(active[k] for k in sorted(active))
    for rect in sorted(earth, key=lambda r: (r[1], r[0])):
        solid(m, rect, 1.4, 'earth', -1.4, False)


def _house(m, cell, rng, two, damage):
    W = rng.choice((13, 15, 17))
    a = rng.randint(1, 19 - W)
    setback = rng.choice((-3, -2, -1))
    frame = Frame(cell.rect(a, setback, W, rng.choice((8, 9, 10))), cell.front)
    ruined = (not two) and rng.random() < damage * .6
    shell(m, frame, rng, 'house', 2 if two else 1, ruined, b_id=len(m['buildings']) + 1)
    # Street frontage opens directly onto the verge; walls enclose the rear yard.
    # Back garden: low walls with a gate, clear of the house and the cell boundary.
    gate = rng.uniform(4, 15)
    _low(m, cell, [1, 18.5, gate - 1.3 - 1, .5])
    _low(m, cell, [gate + 1.3, 18.5, 19 - gate - 1.3, .5])
    for u in (.75, 18.75):
        if rng.random() < .75:
            gap = rng.uniform(14, 17)
            _low(m, cell, [u, 12.5, .5, gap - 1.3 - 12.5])
            _low(m, cell, [u, gap + 1.3, .5, 18.5 - gap - 1.3])
    if rng.random() < .5:
        # A lower rear service wing breaks up the roof line, with a real doorway.
        # Its footprint and passages remain independent of the main house.
        wing = Frame(cell.rect(rng.choice((2, 12)), 11.5, 5, 4.5), cell.front)
        openings = [dict(front=[(2.5, 2.4, 'door')], back=[(2.5, 1.5, 'window')], left=[], right=[])]
        b = shell(m, wing, rng, 'outbuilding', 1, wall_height=2.8,
                  b_id=len(m['buildings'])+1, openings=openings)
        b['roof'] = 'zinc'
        b['roof_height'] = 2.9


def _low(m, cell, local, height=1.15, kind='garden-wall', parent=None):
    if local[2] < .5 or local[3] < .5:
        return None
    return solid(m, cell.rect(*local), height, kind, 0, True, parent)


def _farm(m, cell, rng, damage, demoted):
    """A 34 m enclosure: farmhouse, barn and byre around a gated working yard."""
    house = shell(m, Frame(cell.rect(3, 3.5, 13, 9), cell.front), rng, 'farmhouse',
                  2, b_id=len(m['buildings']) + 1)
    barn = shell(m, Frame(cell.rect(3, 25, 20, 7), cell.front), rng, 'barn', 1,
                 rng.random() < damage * .5, wall_height=4.5, b_id=len(m['buildings']) + 1)
    byre_frame = Frame(cell.rect(25, 14, 7, 18), {'S':'W','W':'N','N':'E','E':'S'}[cell.front])
    byre = shell(m, byre_frame, rng, 'barn', 1, False, wall_height=3.4,
                 b_id=len(m['buildings']) + 1)
    byre['role'] = 'byre'
    byre['roof_height'] = 3.5
    gate = 22
    for u, width in ((1, gate-3-1), (gate+3, 35-gate-3)):
        _low(m, cell, [u, 1, width, .6], 2.0, 'farm-wall')
    # Rear and side posterns keep all door passages and the court connected.
    for v, length in ((1.6, 14.9), (20, 14.4)):
        _low(m, cell, [1, v, .6, length], 2.0, 'farm-wall')
        _low(m, cell, [34.4, v, .6, length], 2.0, 'farm-wall')
    for u, width in ((1, 14), (19, 15.9)):
        _low(m, cell, [u, 34.4, width, .6], 2.0, 'farm-wall')
    ident = f"yard-{len(m['yards']):03d}"
    m['yards'].append(dict(id=ident, rect=cell.rect(1, 1, 34, 34), use='farmyard',
                           centre=cell.p(21, 17), area=34*34-13*9-20*7-7*18,
                           farmhouse=house['id'], barn=barn['id'], byre=byre['id']))
    return m['yards'][-1]


def _church(m, cell, rng):
    nave = shell(m, Frame(cell.rect(6, 1, 9, 16), cell.front), rng, 'church', 1, False,
                 wall_height=5.0, b_id=len(m['buildings']) + 1)
    nave['roof'] = 'slate'
    tower = solid(m, cell.rect(1.75, 15, 4, 4), 14, 'tower', 0, True, nave['id'])
    nave['tower'] = tower
    _low(m, cell, [10.6, 18.5, 8.4, .5], 1.15)


def _square(m, cell, rng, where):
    ident = f"yard-{len(m['yards']):03d}"
    m['yards'].append(dict(id=ident, rect=cell.rect(0, 0, 20, 20), use='square', cell=list(where),
                           centre=cell.p(10, 13)))
    memorial = solid(m, cell.rect(9, 8, 2, 2), 1.3, 'memorial', 0, True, ident, half_cover=True)
    for u0 in (2.5, 12.5):
        sid = solid(m, cell.rect(u0, 4, 5, .6), 1.1, 'garden-wall', 0, True, ident)
        for side in (-1, 1):
            p = cell.p(u0 + 2.5, 4.3 + side * 1.0, z=0)
            cover(m, sid, p, cell.vec(0, -side), 'low-wall')
    for side in (-1, 1):
        p = cell.p(10 + side * 1.9, 9, z=0)
        cover(m, memorial, p, cell.vec(-side, 0), 'memorial')


def _orchard(m, rect, rng):
    # Loose, staggered fruit trees in rear plots. Spacing is agricultural but the
    # silhouette is not a repeated 4 x 4 dot tile.
    placed = []
    for _ in range(rng.randint(7, 11)):
        for trial in range(30):
            cx, cy = rect[0]+rng.uniform(2.8,17.2), rect[1]+rng.uniform(2.8,17.2)
            if all(math.hypot(cx-x,cy-y)>3.5 for x,y in placed):
                placed.append((cx,cy))
                solid(m, [cx-.3,cy-.3,.6,.6], 3.0, 'tree', 0, True, None)
                break


def _garden(m, rect, rng):
    cell = Frame(rect, 'S')
    gap = rng.uniform(5, 15)
    _low(m, cell, [2, 3, gap - 1.3 - 2, .5])
    _low(m, cell, [gap + 1.3, 3, 18 - gap - 1.3, .5])
    if rng.random() < .6:
        gap = rng.uniform(5, 15)
        _low(m, cell, [2, 16.5, gap - 1.3 - 2, .5])
        _low(m, cell, [gap + 1.3, 16.5, 18 - gap - 1.3, .5])
    if rng.random() < .5:
        solid(m, cell.rect(rng.uniform(4, 13), rng.uniform(7, 11), 3, 2.5), 2.4, 'shed', 0, True, None)


def _haystacks(m, rect, rng):
    for k in range(rng.choice((0, 1, 1, 2))):
        cx = rect[0] + (rng.uniform(4, 8) if k == 0 else rng.uniform(12, 16))
        cy = rect[1] + rng.uniform(4, 16)
        solid(m, [round(cx, 1) - 1, round(cy, 1) - 1, 2, 2], 1.8, 'haystack', 0, True, None)



def _focal_point(m, seed, attempt, plan, farms):
    rng = stream(seed, attempt, 'objective')
    square = next(y for y in m['yards'] if y['use'] == 'square')
    if farms and rng.random() < .2:
        farm = max(farms, key=lambda y: (y['area'], -int(y['id'].split('-')[1])))
        m['focal_point'] = dict(name='Farm courtyard', position=farm['centre'] + [0], yard=farm['id'])
        m['labels'].append(dict(text='FERME', position=farm['centre']))
    else:
        m['focal_point'] = dict(name='Church square', position=square['centre'] + [0], yard=square['id'])
    sx, sy = square['centre']
    houses = [b for b in m['buildings'] if b['use']=='house']
    if houses:
        b = min(houses, key=lambda b: ((b['rect'][0]+b['rect'][2]/2-sx)**2 +
                                      (b['rect'][1]+b['rect'][3]/2-sy)**2, b['id']))
        b['role'] = 'cafe'
    m['labels'].append(dict(text='PLACE DE L’ÉGLISE', position=square['centre']))


def _deployment(m, plan):
    west = next(j for i, j in plan['spine'] if i == 0)
    east = [j for i, j in plan['spine'] if i == COLS - 1][-1]
    m['deployment'] = [dict(team=0, position=[-161, cell_centre(0, west)[1], 0]),
                       dict(team=1, position=[161, cell_centre(COLS - 1, east)[1], 0])]


def _prune_covers(m, K):
    """Keep only explicit firing positions that pass their own local contract:
    walkable, protected at their posture (upper windows from a ground threat 4 m
    out), a clear 4 m firing lane, never a concealment source."""
    solids = {s['id']: s for s in m['solids']}
    kept = []
    for c in m['cover']:
        s = solids[c['source']]
        posture = c.get('posture', 'crouched')
        p, f = c['shelter'], c['facing']
        upper = p[2] > 1
        threat = (p[0] + f[0] * 4, p[1] + f[1] * 4, 0.0 if upper else p[2])
        a = (c['fire'][0], c['fire'][1], c['fire'][2] + c['firing_height'])
        ok = (not s.get('flags', 0) & 1 and (posture != 'prone' or s.get('flags', 0) & 2) and
              K.walkable(p) and K.walkable(c['fire']) and K.protected_at(p, threat, posture) and
              K.los(a, (a[0] + f[0] * 4, a[1] + f[1] * 4, a[2])))
        if ok:
            kept.append(c)
    dropped = {c['id'] for c in m['cover']} - {c['id'] for c in kept}
    for b in m['buildings']:
        b['windows'] = [w for w in b['windows'] if w not in dropped]
        b['upper_windows'] = [w for w in b['upper_windows'] if w not in dropped]
    m['cover'] = kept


def _spawns(m, K):
    """All 64 soldiers: four squads per side on the edge column, squad goals spread
    around the objective on its own side, snapped to the nearest walkable open metre
    (never inside a building)."""
    objective = m['focal_point']['position']
    m['spawns'] = []
    for team in range(2):
        sign = -1 if team == 0 else 1
        for q in range(4):
            lane = (-1.5 + q) * 52
            want = [objective[0] + sign * 6, objective[1] + (q - 1.5) * 4]
            goal = None
            for r in range(0, 12):
                ring = sorted((math.hypot(dx, dy), dy, dx) for dy in range(-r, r + 1) for dx in range(-r, r + 1)
                              if max(abs(dx), abs(dy)) == r)
                for _, dy, dx in ring:
                    p = [round(want[0]) + dx, round(want[1]) + dy, 0]
                    if K.walkable(p) and not any(b['rect'][0] - .5 <= p[0] <= b['rect'][0] + b['rect'][2] + .5 and
                                                 b['rect'][1] - .5 <= p[1] <= b['rect'][1] + b['rect'][3] + .5
                                                 for b in m['buildings']):
                        goal = p
                        break
                if goal:
                    break
            goal = goal or [round(want[0]), round(want[1]), 0]
            for slot in range(8):
                p = [sign * (160 + 4 * (slot // 4)), lane + (slot % 4 - 1.5) * 3, 0]
                m['spawns'].append(dict(slot=team * 32 + q * 8 + slot, team=team, squad=q, position=p, goal=goal))


# ---------------------------------------------------------------- driver
def generate(seed=17, damage=.32, deadline=None, analyse=True, max_attempts=MAX_ATTEMPTS, _fixed_override=None):
    """Generate, validate and (bounded) repair one village. `deadline` is an absolute
    time.monotonic() value; exceeding it raises DeadlineExceeded and returns no map."""
    if not 0 <= damage <= 1:
        raise ValueError('damage must be between 0 and 1')
    from .support import analyse_and_repair
    history = []
    for attempt in range(max_attempts):
        _check(deadline)
        started = time.perf_counter()
        record = dict(attempt=attempt)
        history.append(record)
        try:
            fixed, plan = macro(seed, attempt)
            if _fixed_override:
                fixed.update(_fixed_override)
            tiles = balance_storeys(seed, attempt, solve(seed, attempt, fixed, plan['band']))
        except Contradiction as error:
            record['result'] = f'contradiction: {error}'
            continue
        count = sum(VARIANTS[v][0] in BUILDING_TILES for v in tiles.values())
        if not DENSITY[0] <= count <= DENSITY[1]:
            record['result'] = f'density {count} outside {DENSITY}'
            continue
        guess = estimate(tiles)
        if guess['solids'] > SOLID_BUDGET or guess['links'] > LINK_BUDGET:
            record['result'] = f'budget estimate {guess}'
            continue
        record['solve_seconds'] = round(time.perf_counter() - started, 3)
        try:
            m = expand(seed, attempt, tiles, plan, damage)
        except Contradiction as error:
            record['result'] = f'layout: {error}'
            record['seconds'] = round(time.perf_counter()-started,3)
            continue
        if not analyse:
            m['generation'] = dict(attempt=attempt, history=history)
            return round_geometry(m)
        rebuild = lambda demoted: expand(seed, attempt, tiles, plan, damage, demoted)
        m, report = analyse_and_repair(m, rebuild, seed, attempt, deadline)
        record['result'] = 'passed' if report['passed'] else '; '.join(report['errors'][:3])
        record['seconds'] = round(time.perf_counter() - started, 3)
        record.update(objective_count=len(m['objectives']), supportable_share=report['supportable_share'],
                      repairs=report['repairs'], repair_rounds=report['repair_rounds'])
        if report['passed']:
            m['generation'] = dict(attempt=attempt, history=history)
            m['validation'] = report
            return round_geometry(m)
    raise GenerationFailed(f'village seed {seed}: no valid attempt in {max_attempts}: ' +
                           '; '.join(str(h.get('result')) for h in history[-3:]), history)


def _check(deadline):
    if deadline is not None and time.monotonic() > deadline:
        raise DeadlineExceeded('village generation deadline exceeded; no map was written')
