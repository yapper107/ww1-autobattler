"""Village validation and generate-and-test supportability (plan 029 G-2).

`analyse(m)` checks the geometry contract (layers, stairs, lanes, hedges, craters,
explicit firing positions, budgets and caps), then measures whether an attacker can
be supported across exposed ground:

* approaches: shortest ground/lane routes (8-neighbour, 1 m grid, ramps linked)
  from each team's four squad deployments to the objective;
* observers: up to 16 spread defensive positions of the catalogue (upper windows
  included) within 40 m of the objective; an approach sample is exposed when an
  observer's eye (peek + 1.5 m, prone + 0.9 m) sees the man's torso (+1.3 m) within
  70 m through sight rays (hedges conceal: hidden counts as safe for planning);
* crossings: exposed stretches of an approach of at least 9 m (hidden gaps of up to
  2 m do not break a stretch), crossed in equal bounds of at most 30 m, merged
  across a team's approaches;
* supportable: a catalogue position within 25 m of the crossing, no nearer the
  objective than the crossing's middle (the friendly side), that every observer of
  the crossing either cannot see or cannot hit (solid-only ProtectedAt at the
  position's posture), and that overlooks at least half of them;
* verdict: supportable_share >= 0.70 for each team.

Elevated threats (validator and importer only): every upper window must be
protected crouched from a ground threat 4 m out (the F-A importer rule), each
two-storey building needs at least three; ground covers are elevated-safe when
they are protected at their posture from a second-storey window 20 m along their
facing, and at least 40% must be.

`analyse_and_repair` runs a bounded repair loop (garden wall, hedge line, crater
cluster, demote a storey) on support failures only; structural failures are never
repaired. A deadline aborts by raising; it never returns a partial map.
"""
import heapq
import math
import time
from collections import deque

from .kernel import Kernel, BODY, surface_kind, surface_level, replaces_grade
from .geometry import solid, round_geometry

SUPPORT_SHARE = .70
ELEVATED_SHARE = .40
UPPER_PER_BUILDING = 3
CROSSING = 9.0
BOUND = 30.0
GAP = 2.0
SUPPORT_RANGE = 25.0
SIGHT = 70.0
OBSERVER_RADIUS = 40.0
OBSERVERS = 12
CANDIDATES = 80
REPAIR_ROUNDS = 3
REPAIR_MAP_ROUNDS = 4  # Up to four objectives; avoid spending the whole New+ budget on one layout.
LAYERS = (0.0, -1.4, 3.2)          # ground, lane, upper
EYE = dict(standing=1.5, crouched=1.5, prone=.9)
SOLID_BUDGET = 3400
CAPS = dict(O=6000, S=1500, L=256, C=3000, D=1500, B=128, P=512)


def _check(deadline):
    if deadline is not None and time.monotonic() > deadline:
        from .village import DeadlineExceeded
        raise DeadlineExceeded('village generation deadline exceeded; no map was written')


# ------------------------------------------------------------------ navigation
class Navigation:
    """Integer-metre nodes on three layers (ground 0, lane -1.4, upper 3.2)."""

    def __init__(self, m, K):
        x, y, w, h = m['bounds']
        self.xmin, self.xmax = int(math.ceil(x + .6)), int(math.floor(x + w - .6))
        self.ymin, self.ymax = int(math.ceil(y + .6)), int(math.floor(y + h - .6))
        self.W = self.xmax - self.xmin + 1
        self.H = self.ymax - self.ymin + 1
        self.plane = self.W * self.H
        self.K = K
        nodes = bytearray(self.plane * 3)
        # Ground: everywhere, then surfaces that replace grade decide their own nodes.
        nodes[0:self.plane] = b'\x01' * self.plane
        for s in m['surfaces']:
            level = surface_level(s)
            rx, ry, rw, rh = s['rect']
            for yy in range(int(math.ceil(ry - .001)), int(math.floor(ry + rh + .001)) + 1):
                for xx in range(int(math.ceil(rx - .001)), int(math.floor(rx + rw + .001)) + 1):
                    if not (self.xmin <= xx <= self.xmax and self.ymin <= yy <= self.ymax):
                        continue
                    i = (yy - self.ymin) * self.W + (xx - self.xmin)
                    if replaces_grade(s):
                        nodes[i] = 1 if K.supported((xx, yy, 0.0)) else 0
                    for layer, z in ((1, -1.4), (2, 3.2)):
                        if (layer == 1 and level < 0) or (layer == 2 and level >= 1):
                            if K.supported((xx, yy, z)):
                                nodes[layer * self.plane + i] = 1
        for k, s in enumerate(m['solids']):
            if not s['blocks_movement']:
                continue
            a, b = s['min'], s['max']
            for layer, z in enumerate(LAYERS):
                if not (a[2] < z + 1.84 and b[2] > z + .02):
                    continue
                off = layer * self.plane
                for yy in range(max(self.ymin, int(math.ceil(a[1] - .48))), min(self.ymax, int(math.floor(b[1] + .48))) + 1):
                    row = off + (yy - self.ymin) * self.W - self.xmin
                    for xx in range(max(self.xmin, int(math.ceil(a[0] - .48))), min(self.xmax, int(math.floor(b[0] + .48))) + 1):
                        nodes[row + xx] = 0
        self.nodes = nodes
        self.links = []          # (node a, node b, link index)
        self.broken = []         # (link index, reason)
        for n, link in enumerate(m['links']):
            a, b = link['from_position'], link['to_position']
            na, nb = self.attach(a), self.attach(b)
            if na is None or nb is None:
                self.broken.append((n, 'landing'))
            elif not K.clear_line(a, b):
                self.broken.append((n, 'blocked'))
            else:
                self.links.append((na, nb, n))
        self._field_steps = None

    def layer_of(self, z):
        return min(range(3), key=lambda k: abs(LAYERS[k] - z))

    def index(self, x, y, layer):
        if not (self.xmin <= x <= self.xmax and self.ymin <= y <= self.ymax):
            return None
        return layer * self.plane + (y - self.ymin) * self.W + (x - self.xmin)

    def point(self, i):
        layer, r = divmod(i, self.plane)
        y, x = divmod(r, self.W)
        return (x + self.xmin, y + self.ymin, LAYERS[layer])

    def attach(self, p):
        """Native endpoint attachment: nearest walkable node within 2 cells with a clear line."""
        layer = self.layer_of(p[2])
        best, chosen = 100.0, None
        cx, cy = int(round(p[0])), int(round(p[1]))
        for dy in range(-2, 3):
            for dx in range(-2, 3):
                i = self.index(cx + dx, cy + dy, layer)
                if i is None or not self.nodes[i]:
                    continue
                q = self.point(i)
                d = math.dist(q, p)
                if d < best and self.K.clear_line(p, q):
                    best, chosen = d, i
        return chosen

    def near(self, p, layer=None, radius=1.5):
        layer = self.layer_of(p[2]) if layer is None else layer
        cx, cy = int(round(p[0])), int(round(p[1]))
        best, chosen = radius + 1e-9, None
        r = int(math.ceil(radius))
        for dy in range(-r, r + 1):
            for dx in range(-r, r + 1):
                i = self.index(cx + dx, cy + dy, layer)
                if i is not None and self.nodes[i]:
                    d = math.hypot(cx + dx - p[0], cy + dy - p[1])
                    if d < best or (d == best and chosen is not None and i < chosen):
                        best, chosen = d, i
        return chosen

    def neighbours(self, i):
        layer, r = divmod(i, self.plane)
        y, x = divmod(r, self.W)
        nodes = self.nodes
        if x > 0 and nodes[i - 1]:
            yield i - 1
        if x < self.W - 1 and nodes[i + 1]:
            yield i + 1
        if y > 0 and nodes[i - self.W]:
            yield i - self.W
        if y < self.H - 1 and nodes[i + self.W]:
            yield i + self.W

    def flood(self, start, layers=(0, 1, 2)):
        seen = bytearray(len(self.nodes))
        if start is None:
            return seen
        extra = {}
        for a, b, _ in self.links:
            if a // self.plane in layers and b // self.plane in layers:
                extra.setdefault(a, []).append(b)
                extra.setdefault(b, []).append(a)
        seen[start] = 1
        queue = deque([start])
        while queue:
            i = queue.popleft()
            for j in self.neighbours(i):
                if not seen[j]:
                    seen[j] = 1
                    queue.append(j)
            for j in extra.get(i, ()):
                if not seen[j]:
                    seen[j] = 1
                    queue.append(j)
        return seen

    def field(self, start, targets=None):
        """Octile distances (10/14); optionally stop once all needed starts settle."""
        n = len(self.nodes)
        limit = 2 * self.plane
        cost = [-1] * limit
        parent = [-1] * limit
        extra = {}
        for a, b, _ in self.links:
            if a < limit and b < limit:
                length = int(round(10 * math.dist(self.point(a), self.point(b))))
                extra.setdefault(a, []).append((b, length))
                extra.setdefault(b, []).append((a, length))
        nodes, W = self.nodes, self.W
        if self._field_steps is None:
            # Every objective uses the same graph. Build its step masks once;
            # preserve the original neighbour and heap tie order exactly.
            masks = bytearray(limit)
            for i in range(limit):
                if not nodes[i]:
                    continue
                y,x = divmod(i % self.plane, W)
                left = x > 0 and nodes[i-1]
                right = x < W-1 and nodes[i+1]
                down = y > 0 and nodes[i-W]
                up = y < self.H-1 and nodes[i+W]
                masks[i] = (int(bool(left)) | int(bool(right)) << 1 | int(bool(down)) << 2 | int(bool(up)) << 3 |
                            int(bool(left and down and nodes[i-W-1])) << 4 |
                            int(bool(right and down and nodes[i-W+1])) << 5 |
                            int(bool(left and up and nodes[i+W-1])) << 6 |
                            int(bool(right and up and nodes[i+W+1])) << 7)
            offsets = ((-1,10),(1,10),(-W,10),(W,10),(-W-1,14),(-W+1,14),(W-1,14),(W+1,14))
            options = [tuple(step for bit,step in enumerate(offsets) if mask & (1 << bit)) for mask in range(256)]
            self._field_steps = masks, options
        masks, options = self._field_steps
        remaining = set(targets) if targets is not None else None
        # Packing preserves (cost, node) heap order without allocating a pair
        # for every relaxation. IDs are always in [0, limit).
        heap = [start]
        cost[start] = 0
        done = bytearray(limit)
        while heap:
            c, i = divmod(heapq.heappop(heap), limit)
            if done[i]:
                continue
            done[i] = 1
            if remaining is not None and i in remaining:
                remaining.remove(i)
                if not remaining:
                    break
            for offset, step in options[masks[i]]:
                j = i + offset
                nc = c + step
                if not done[j] and (cost[j] < 0 or nc < cost[j]):
                    cost[j] = nc
                    parent[j] = i
                    heapq.heappush(heap, nc*limit+j)
            for j, step in extra.get(i, ()):
                nc = c + step
                if not done[j] and (cost[j] < 0 or nc < cost[j]):
                    cost[j] = nc
                    parent[j] = i
                    heapq.heappush(heap, nc*limit+j)
        return cost, parent


# ------------------------------------------------------------------ geometry checks
def _structure(m, K, nav, errors, metrics):
    ids = [s['id'] for s in m['solids']]
    if len(set(ids)) != len(ids):
        errors.append('duplicate solid IDs')
    x, y, w, h = m['bounds']
    for s in m['solids']:
        if any(a >= b for a, b in zip(s['min'], s['max'])):
            errors.append(f"degenerate solid {s['id']}")
        if s['min'][0] < x - 1e-6 or s['min'][1] < y - 1e-6 or s['max'][0] > x + w + 1e-6 or s['max'][1] > y + h + 1e-6:
            errors.append(f"out-of-bounds solid {s['id']}")
        if s['max'][2] - s['min'][2] > 20:
            errors.append(f"solid taller than 20 m {s['id']}")
    counts = dict(O=len(m['solids']), S=len(m['surfaces']), L=len(m['links']), C=len(m['cover']),
                  D=_decoration_count(m), B=len(m['buildings']), P=sum(len(b['doors']) for b in m['buildings']))
    metrics['records'] = counts
    for key, cap in sorted(CAPS.items()):
        if counts[key] > cap:
            errors.append(f'{key} record cap exceeded ({counts[key]} > {cap})')
    budget = 4500 if m['kind'] == 'city2' else SOLID_BUDGET
    if counts['O'] > budget:
        errors.append(f"solid geometry budget exceeded ({counts['O']} > {budget})")
    if m['kind']=='city2' and counts['B']>120:
        errors.append(f"city2 building reserve exceeded ({counts['B']} > 120)")
    buildings = [b for b in m['buildings'] if b['use'] in ('house', 'farmhouse')]
    two = sum(b['floors'] == 2 for b in buildings)
    houses = sum(b['use'] == 'house' for b in buildings)
    farmhouses = sum(b['use'] == 'farmhouse' for b in buildings)
    metrics.update(houses=houses, farmhouses=farmhouses, two_storey=two)
    if two > .4 * houses + farmhouses + 1e-9:
        errors.append('two-storey budget exceeded')
    # Flat surfaces must not overlap a sloped interior (importer rule).
    slopes = [s for s in m['surfaces'] if surface_kind(s) != 0]
    for sl in slopes:
        ax, ay, aw, ah = sl['rect']
        for fl in m['surfaces']:
            if surface_kind(fl) != 0:
                continue
            bx, by, bw, bh = fl['rect']
            if abs((ax + aw / 2) - (bx + bw / 2)) < (aw + bw) / 2 - .001 and abs((ay + ah / 2) - (by + bh / 2)) < (ah + bh) / 2 - .001:
                errors.append(f"flat floor overlaps slope interior {sl['id']}")


def _decoration_count(m):
    """D records exactly as export_village writes them."""
    n = sum(len(r['points']) - 1 for r in m['roads']) + sum(len(y.get('pieces',[y['rect']])) for y in m['yards'] if y['use'] in ('square', 'farmyard'))
    n += sum(1 if b['ruined'] else 2 for b in m['buildings'])
    return n


def _stairs(m, K, nav, errors, metrics):
    surfaces = {s['id']: s for s in m['surfaces']}
    per_surface = {}
    for n, link in enumerate(m['links']):
        per_surface.setdefault(link.get('surface'), []).append(n)
    broken = dict(nav.broken)
    stairs = 0
    for b in m['buildings']:
        if b['floors'] != 2:
            continue
        stairs += 1
        if not b.get('stair'):
            errors.append(f"sealed stair {b['id']}: no stair")
            continue
        s = surfaces.get(b['stair']['surface'])
        links = per_surface.get(b['stair']['surface'], [])
        if s is None or surface_kind(s) != 2 or len(links) != 1:
            errors.append(f"stair contract {b['id']}: one kind-2 plane with exactly one link")
            continue
        sx, sy = s['slope']
        rx, ry, rw, rh = s['rect']
        run, width = (rw, rh) if sx else (rh, rw)
        slope = abs(sx or sy)
        if (sx and sy) or not .5 <= slope <= 1.05 or abs(width - 1.2) > .01 or not 3.2 - 1e-6 <= run <= 4 + 1e-6:
            errors.append(f"stair contract {b['id']}: slope {slope:.3f} run {run} width {width}")
        treads = [t for t in m['solids'] if t['kind'] == 'tread' and t['parent'] == b['id']]
        if len(treads) != 8:
            errors.append(f"stair contract {b['id']}: {len(treads)} treads")
        # Centreline at least 0.75 m from any wall face.
        c = (rx + rw / 2, ry + rh / 2)
        clear = [c[0] - rw / 2, c[1] - .75, c[0] + rw / 2, c[1] + .75] if sx else [c[0] - .75, c[1] - rh / 2, c[0] + .75, c[1] + rh / 2]
        for o in m['solids']:
            if o['blocks_movement'] and o['min'][2] < 3.2 + 1.85 and o['max'][2] > 0 and \
                    o['min'][0] < clear[2] - 1e-6 and o['max'][0] > clear[0] + 1e-6 and \
                    o['min'][1] < clear[3] - 1e-6 and o['max'][1] > clear[1] + 1e-6:
                errors.append(f"stair contract {b['id']}: centreline within 0.75 m of {o['id']}")
                break
        if links[0] in broken:
            errors.append(f"sealed stair {b['id']}: {broken[links[0]]}")
    metrics['stairs'] = stairs


def _lanes(m, K, nav, errors, metrics):
    lanes = [p for p in m['paths'] if p.get('kind') == 'lane']
    metrics['lanes'] = len(lanes)
    if m['kind'] == 'village' and m.get('generator_version', 0) >= 5 and not 2 <= len(lanes) <= 3:
        errors.append('village needs two or three sunken lanes')
    earth = [s for s in m['solids'] if s['kind'] == 'earth']
    for lane in lanes:
        floors = [s for s in m['surfaces'] if s['parent'] == lane['id']]
        if sum(surface_kind(s) == 1 for s in floors) != 2:
            errors.append(f"lane {lane['id']} needs two ramps")
        for p in lane['points']:
            if not K.walkable((p[0], p[1], -1.4)):
                errors.append(f"lane centreline obstructed: {lane['id']}")
                break
        for s in floors:
            x,y,w,h = s['rect']
            if any(o['min'][0] < x+w-1e-6 and o['max'][0] > x+1e-6 and
                   o['min'][1] < y+h-1e-6 and o['max'][1] > y+1e-6 for o in earth):
                errors.append(f"earth fills lane surface {s['id']}")
    broken = dict(nav.broken)
    for n, link in enumerate(m['links']):
        if link['kind'] == 'ramp':
            a, b = link['from_position'], link['to_position']
            if abs(a[2] + 1.4) > .001 or abs(b[2]) > .001 or abs(math.hypot(a[0] - b[0], a[1] - b[1]) - 6) > .001:
                errors.append('invalid ramp endpoints')
            if n in broken:
                errors.append(f"sealed lane ramp {link['surface']}: {broken[n]}")
    for s in m['surfaces']:
        if surface_level(s) < 0:
            if surface_kind(s) == 0 and abs(s['z'] + 1.4) > .001:
                errors.append(f"lane floor not at -1.4 {s['id']}")
            if surface_kind(s) == 1 and max(abs(s['slope'][0]), abs(s['slope'][1])) > .3:
                errors.append(f"ramp too steep {s['id']}")
    if m['ground_base'] != -1.4 and m['kind'] != 'city2':
        errors.append('village ground base must be -1.4')
    if m['kind'] == 'city2' and m['ground_base'] not in (0, -1.4):
        errors.append('city2 ground base must be 0 or -1.4')


def _hedges(m, K, errors, metrics):
    hedges = [s for s in m['solids'] if s.get('flags', 0) & 1]
    lines = {}
    for s in hedges:
        dx, dy = s['max'][0] - s['min'][0], s['max'][1] - s['min'][1]
        if abs(s['max'][2] - s['min'][2] - 1.8) > 1e-6 or min(dx, dy) < .6 - 1e-6 or not s['blocks_movement'] or s['half_cover']:
            errors.append(f"hedge contract {s['id']}")
        horizontal = dx >= dy
        key = ('h', round(s['min'][1], 3), round(s['max'][1], 3)) if horizontal else ('v', round(s['min'][0], 3), round(s['max'][0], 3))
        lines.setdefault(key, []).append((s['min'][0], s['max'][0]) if horizontal else (s['min'][1], s['max'][1]))
    longest = 0.0
    for key in sorted(lines):
        runs = []
        for a, b in sorted(lines[key]):
            if runs and a <= runs[-1][1] + 1e-6:
                runs[-1][1] = max(runs[-1][1], b)
            else:
                runs.append([a, b])
        for a, b in runs:
            longest = max(longest, b - a)
            if b - a > 16 + 1e-6:
                errors.append(f'hedge without a gap for {b - a:.1f} m at {key}')
    metrics['hedges'] = len(hedges)
    metrics['longest_hedge'] = round(longest, 2)
    solids = {s['id']: s for s in m['solids']}
    for c in m['cover']:
        s = solids.get(c['source'])
        if s is not None and s.get('flags', 0) & 1:
            errors.append(f"hedge cover source {c['id']}")


def _craters(m, K, errors, metrics):
    rims = [s for s in m['solids'] if s.get('flags', 0) & 2]
    by_parent = {}
    for s in rims:
        by_parent.setdefault(s['parent'], []).append(s)
        if abs(s['max'][2] - s['min'][2] - .6) > 1e-6:
            errors.append(f"rim height {s['id']}")
        if s['blocks_movement'] or not s['half_cover']:
            errors.append(f"rim contract {s['id']}")
    craters = [d for d in m['decorations'] if d.get('kind') == 'crater']
    for d in craters:
        if len(by_parent.get(d['id'], [])) != 8:
            errors.append(f"crater {d['id']} needs 8 rim boxes")
        if not 2.5 - 1e-6 <= d['radius'] <= 4 + 1e-6:
            errors.append(f"crater radius {d['id']}")
    metrics['craters'] = len(craters)


def _explicit_covers(m, K, nav, reached, errors, metrics):
    solids = {s['id']: s for s in m['solids']}
    protected = upper_ok = 0
    per_building = {}
    for c in m['cover']:
        s = solids.get(c['source'])
        if s is None:
            errors.append(f"missing cover source {c['id']}")
            continue
        posture = c.get('posture', 'crouched')
        shelter, fire = c['shelter'], c['fire']
        if not K.walkable(shelter) or not K.walkable(fire):
            errors.append(f"unwalkable cover {c['id']}")
            continue
        node = nav.near(shelter)
        if node is None or not reached[node]:
            errors.append(f"unreachable cover {c['id']}")
        nx, ny = c['facing']
        upper = shelter[2] > 1
        threat = (shelter[0] + nx * 4, shelter[1] + ny * 4, 0.0 if upper else shelter[2])
        if posture == 'prone' and not s.get('flags', 0) & 2:
            errors.append(f"prone cover without a rim source {c['id']}")
        if K.protected_at(shelter, threat, posture):
            protected += 1
            if upper:
                upper_ok += 1
                per_building[s['parent']] = per_building.get(s['parent'], 0) + 1
        else:
            errors.append(f"unprotected body samples {c['id']}")
        a = (fire[0], fire[1], fire[2] + c['firing_height'])
        b = (a[0] + nx * 4, a[1] + ny * 4, a[2])
        if not K.los(a, b):
            errors.append(f"blocked firing aperture {c['id']}")
    metrics['protected_positions'] = protected
    metrics['upper_windows'] = upper_ok
    for b in m['buildings']:
        if b['floors'] == 2 and per_building.get(b['id'], 0) < UPPER_PER_BUILDING:
            errors.append(f"elevated firing positions {b['id']}: {per_building.get(b['id'], 0)} < {UPPER_PER_BUILDING}")


def _connectivity(m, K, nav, errors, metrics):
    for d in m['deployment']:
        if not K.walkable(d['position']):
            errors.append('deployment is blocked')
    starts = [nav.near(d['position']) for d in m['deployment']]
    reached = nav.flood(starts[0])
    if any(s is None or not reached[s] for s in starts):
        errors.append('deployments are not connected')
    for obj in m['objectives']:
        node = nav.near(obj['position'])
        if node is None or not reached[node]:
            errors.append('deployment cannot reach its objective')
    for sp in m['spawns']:
        for key in ('position', 'goal'):
            p = sp[key]
            if not K.walkable(p):
                errors.append(f"unwalkable {key} {sp['slot']}")
            elif m['ground_base'] < 0 and abs(p[2]) < .02 and K.first_hit((p[0], p[1], -.01), (p[0], p[1], -1.39)) is None:
                errors.append(f"no earth under {key} {sp['slot']}")
    for b in m['buildings']:
        x, y, w, h = b['rect']
        inside = [i for i in _nodes_in(nav, [x + .5, y + .5, w - 1, h - 1], 0) if nav.nodes[i]]
        if not any(reached[i] for i in inside):
            errors.append(f"building interior inaccessible: {b['id']}")
        for door in b['doors']:
            if door['width'] < 2 or not K.walkable(door['center']):
                errors.append(f"blocked doorway: {b['id']}")
        if b['floors'] == 2:
            upper = [i for sid in b.get('upper_surfaces', ()) for i in _nodes_in(nav, _rect_of(m, sid), 2) if nav.nodes[i]]
            if not upper or not any(reached[i] for i in upper):
                errors.append(f"sealed stair {b['id']}: upper floor unreachable")
    for lane in (p for p in m['paths'] if p.get('kind') == 'lane'):
        floor = [i for s in m['surfaces'] if s['parent'] == lane['id'] and surface_kind(s) == 0
                 for i in _nodes_in(nav, s['rect'], 1) if nav.nodes[i]]
        if not floor or not all(reached[i] for i in floor):
            errors.append(f"sealed lane {lane['id']}")
    total = sum(nav.nodes)
    metrics['walkable_nodes'] = total
    metrics['reached_nodes'] = sum(reached)
    return reached


def _rect_of(m, sid):
    return next(s['rect'] for s in m['surfaces'] if s['id'] == sid)


def _nodes_in(nav, rect, layer):
    x, y, w, h = rect
    out = []
    for yy in range(int(math.ceil(y)), int(math.floor(y + h)) + 1):
        for xx in range(int(math.ceil(x)), int(math.floor(x + w)) + 1):
            i = nav.index(xx, yy, layer)
            if i is not None:
                out.append(i)
    return out


# ------------------------------------------------------------------ supportability
def _observers(catalogue, objective, toward, exclude=frozenset()):
    """Up to 12 spread defensive positions within 40 m of the objective whose cover
    faces the attacking team (static-defence seating: 12 defenders by default).
    Positions on generator repairs are the attacker's, never a defender's seat."""
    tx, ty = toward[0] - objective[0], toward[1] - objective[1]
    n = math.hypot(tx, ty) or 1.0
    tx, ty = tx / n, ty / n
    near = []
    for c in catalogue:
        dx, dy = c['shelter'][0] - objective[0], c['shelter'][1] - objective[1]
        f = c['facing']
        fn = math.hypot(f[0], f[1]) or 1.0
        if math.hypot(dx, dy) <= OBSERVER_RADIUS and (f[0] * tx + f[1] * ty) / fn >= .5 and c['source'] not in exclude:
            near.append(c)
    near.sort(key=lambda c: c['id'])
    if not near:
        return []

    def gap(a, b):
        return math.hypot(a['shelter'][0] - b['shelter'][0], a['shelter'][1] - b['shelter'][1]) + 6 * abs(a['shelter'][2] - b['shelter'][2])
    first = min(near, key=lambda c: (math.hypot(c['shelter'][0] - objective[0], c['shelter'][1] - objective[1]), c['id']))
    chosen = [first]
    best = [gap(c, first) for c in near]
    while len(chosen) < OBSERVERS:
        k = max(range(len(near)), key=lambda n: (best[n], -near[n]['id']))
        if best[k] <= 1e-9:
            break
        chosen.append(near[k])
        best = [min(best[n], gap(near[n], near[k])) for n in range(len(near))]
    return chosen


def _eye(c):
    p = c['peek']
    return (p[0], p[1], p[2] + EYE[c['posture']])


def _body(c):
    p = c['shelter']
    return (p[0], p[1], p[2] + BODY[c['posture']] * .8)


def _seg_distance(p, a, b):
    dx, dy = b[0] - a[0], b[1] - a[1]
    L = dx * dx + dy * dy
    t = 0.0 if L == 0 else max(0.0, min(1.0, ((p[0] - a[0]) * dx + (p[1] - a[1]) * dy) / L))
    return math.hypot(p[0] - a[0] - t * dx, p[1] - a[1] - t * dy)


def support_analysis(m, K, nav, catalogue, objective, deadline=None, visibility=None):
    goal = nav.near(objective, 0, 3.0)
    result = dict(observers=[], teams=[])
    if goal is None:
        result['teams'] = [dict(team=t, crossings=[], exposed=0, supported=0, approaches=0,
                               supportable_share=0.0) for t in (0, 1)]
        return result
    starts = {}
    for team in (0, 1):
        for squad in range(4):
            members = [s for s in m['spawns'] if s['team'] == team and s['squad'] == squad]
            if members:
                centre = (sum(s['position'][0] for s in members)/len(members),
                          sum(s['position'][1] for s in members)/len(members), 0.0)
                starts[(team, squad)] = nav.near(centre, 0, 4.0)
    cost, parent = nav.field(goal, [s for s in starts.values() if s is not None])
    _check(deadline)
    repaired = frozenset(s['id'] for s in m['solids'] if str(s.get('parent') or '').startswith('repair-'))
    exposure = {}
    los_cache = {}
    visibility = {} if visibility is None else visibility

    def overlooks(c, o):
        key = (c['id'], o['id'])
        if key not in visibility:
            eye = _eye(c)
            target = (o['peek'][0], o['peek'][1], o['peek'][2] + 1.2)
            visibility[key] = math.dist(eye, target) <= SIGHT and K.los(eye, target)
        return visibility[key]

    def sees(o, target):
        key = (o['id'], target)
        if key not in los_cache:
            e = _eye(o)
            los_cache[key] = math.dist(e, target) <= SIGHT and K.los(e, target)
        return los_cache[key]

    def exposed_by(i, observers):
        key = (i, id(observers))
        if key not in exposure:
            p = nav.point(i)
            target = (p[0], p[1], p[2] + 1.3)
            exposure[key] = tuple(n for n, o in enumerate(observers)
                                  if math.hypot(o['shelter'][0] - p[0], o['shelter'][1] - p[1]) <= SIGHT and sees(o, target))
        return exposure[key]

    for team in (0, 1):
        observers = _observers(catalogue, objective, m['deployment'][team]['position'], repaired)
        result['observers'].append([o['id'] for o in observers])
        crossings = []
        approaches = 0
        for squad in range(4):
            start = starts.get((team, squad))
            if start is None or cost[start] < 0:
                continue
            approaches += 1
            path, i = [], start
            while i != -1:
                path.append(i)
                i = parent[i]
            pts = [nav.point(i) for i in path]
            flags = []
            for i, p in zip(path, pts):
                far = math.hypot(p[0] - objective[0], p[1] - objective[1]) > 10
                flags.append(exposed_by(i, observers) if far else ())
            # Exposed stretches (gaps <= 2 m merged), length >= 9 m.
            runs, current, gap, travelled = [], None, 0.0, [0.0]
            for k in range(1, len(pts)):
                travelled.append(travelled[-1] + math.dist(pts[k - 1][:2], pts[k][:2]))
            for k, f in enumerate(flags):
                if f:
                    if current is None:
                        current = [k, k]
                    current[1] = k
                    gap = 0.0
                elif current is not None:
                    gap = travelled[k] - travelled[current[1]]
                    if gap > GAP:
                        runs.append(current)
                        current = None
            if current is not None:
                runs.append(current)
            pieces = []
            for a, b in runs:
                length = travelled[b] - travelled[a]
                if length < CROSSING:
                    continue
                # A long exposed stretch is crossed in bounds of at most 30 m; each needs support.
                n = int(math.ceil(length / BOUND))
                cuts = [a]
                for q in range(1, n):
                    target = travelled[a] + length * q / n
                    cuts.append(next(k for k in range(cuts[-1], b + 1) if travelled[k] >= target))
                cuts.append(b)
                pieces.extend(zip(cuts, cuts[1:]))
            for a, b in pieces:
                nodes = set(path[a:b + 1])
                if any(len(nodes & c['_nodes']) >= .5 * min(len(nodes), len(c['_nodes'])) for c in crossings):
                    continue
                seen_by = sorted({n for k in range(a, b + 1) for n in flags[k]})
                crossings.append(dict(team=team, squad=squad, start=pts[a], end=pts[b],
                                      length=round(travelled[b] - travelled[a], 2),
                                      points=[pts[k] for k in range(a, b + 1, 2)] + [pts[b]],
                                      observers=seen_by, _nodes=nodes))
        _check(deadline)
        for c in crossings:
            c.update(_supported(c, observers, catalogue, objective, K, sees, overlooks))
            del c['_nodes']
        supported = sum(c['supported'] for c in crossings)
        result['teams'].append(dict(team=team, crossings=crossings, exposed=len(crossings), supported=supported, approaches=approaches,
                                    supportable_share=round(supported / len(crossings), 4) if crossings else 1.0))
    result['approach_samples'] = len(exposure)
    result['sight_rays'] = len(los_cache)
    return result


def _supported(crossing, observers, catalogue, objective, K, sees, overlooks):
    rel = [observers[n] for n in crossing['observers']]
    need = int(math.ceil(.5 * len(rel)))
    pts = crossing['points']
    mid = pts[len(pts) // 2]
    mid_d = math.hypot(mid[0] - objective[0], mid[1] - objective[1])
    x0 = min(p[0] for p in pts) - SUPPORT_RANGE
    x1 = max(p[0] for p in pts) + SUPPORT_RANGE
    y0 = min(p[1] for p in pts) - SUPPORT_RANGE
    y1 = max(p[1] for p in pts) + SUPPORT_RANGE
    near = []
    for c in catalogue:
        p = c['shelter']
        if not (x0 <= p[0] <= x1 and y0 <= p[1] <= y1):
            continue
        d = min(_seg_distance(p, a, b) for a, b in zip(pts, pts[1:])) if len(pts) > 1 else math.hypot(p[0] - pts[0][0], p[1] - pts[0][1])
        if d <= SUPPORT_RANGE and math.hypot(p[0] - objective[0], p[1] - objective[1]) >= mid_d:
            near.append((d, c['id'], c))
    near.sort(key=lambda t: (t[0], t[1]))
    for d, _, c in near[:CANDIDATES]:
        body = _body(c)
        overlook = sum(overlooks(c, o) for o in rel)
        if overlook < need:
            continue
        safe = True
        for o in rel:
            if sees(o, body) and not K.protected_at(c['shelter'], o['shelter'], c['posture']):
                safe = False
                break
        if safe:
            return dict(supported=True, support=dict(id=c['id'], shelter=list(c['shelter']), posture=c['posture'],
                                                     distance=round(d, 2), overlooks=overlook))
    return dict(supported=False, support=None)


def _elevated(catalogue, K, metrics, errors):
    ground = [c for c in catalogue if c['shelter'][2] < 1 and c['posture'] != 'prone']
    safe = 0
    for c in ground:
        p, f = c['shelter'], c['facing']
        n = math.hypot(f[0], f[1]) or 1.0
        threat = (p[0] + f[0] / n * 20, p[1] + f[1] / n * 20, 3.2)
        if K.protected_at(p, threat, c['posture']):
            safe += 1
    share = safe / len(ground) if ground else 1.0
    metrics['ground_covers'] = len(ground)
    metrics['elevated_safe_share'] = round(share, 4)
    if share < ELEVATED_SHARE:
        errors.append(f'elevated-safe share {share:.3f} < {ELEVATED_SHARE}')
    return share


# ------------------------------------------------------------------ driver
def analyse(m, deadline=None, timings=None, _context=None):
    """Full village report. `passed` requires no structural error and every verdict."""
    t = time.perf_counter()
    timings = {} if timings is None else timings
    errors, metrics = [], {}
    K = Kernel(m)
    nav = Navigation(m, K)
    timings['navigation'] = round(time.perf_counter() - t, 3)
    _structure(m, K, nav, errors, metrics)
    _stairs(m, K, nav, errors, metrics)
    _lanes(m, K, nav, errors, metrics)
    _hedges(m, K, errors, metrics)
    _craters(m, K, errors, metrics)
    from .village_objectives import check
    check(m['objectives'], errors, primary=('church_square', 'market_square') if m['kind'] == 'city2' else ('church_square',))
    reached = _connectivity(m, K, nav, errors, metrics)
    _explicit_covers(m, K, nav, reached, errors, metrics)
    structural = list(errors)
    _check(deadline)
    t = time.perf_counter()
    catalogue = K.catalogue()
    if _context is not None:
        _context.update(kernel=K, catalogue=catalogue)
    timings['catalogue'] = round(time.perf_counter() - t, 3)
    metrics['catalogue'] = len(catalogue)
    _check(deadline)
    t = time.perf_counter()
    _elevated(catalogue, K, metrics, errors)
    timings['elevated'] = round(time.perf_counter() - t, 3)
    t = time.perf_counter()
    objectives = []
    visibility = {}
    for obj in m['objectives']:
        _check(deadline)
        result = support_analysis(m, K, nav, catalogue, obj['position'], deadline, visibility)
        objectives.append(dict(obj, **result))
        for team in result['teams']:
            if team['approaches'] != 4:
                errors.append(f"objective {obj['id']} ({obj['kind']}) team {team['team']}: fewer than four reachable deployment lanes")
            if team['supportable_share'] < SUPPORT_SHARE:
                errors.append(f"objective {obj['id']} ({obj['kind']}) team {team['team']} supportable share {team['supportable_share']:.3f} < {SUPPORT_SHARE}")
    timings['support'] = round(time.perf_counter() - t, 3)
    shares = [min((o['teams'][team]['supportable_share'] for o in objectives), default=0.0) for team in (0, 1)]
    objective_stats = [dict(id=o['id'], kind=o['kind'], position=o['position'],
                            supportable_share_by_team=[team['supportable_share'] for team in o['teams']],
                            supportable_share=min(team['supportable_share'] for team in o['teams'])) for o in objectives]
    report = dict(passed=not errors, errors=errors, structural=not structural,
                  supportable_share=min(shares), supportable_share_by_team=shares,
                  objective_count=len(objectives), objectives=objective_stats,
                  crossings=sum(team['exposed'] for o in objectives for team in o['teams']),
                  buildings=len(m['buildings']), solids=len(m['solids']), cover_positions=len(m['cover']),
                  navigation_components=1 if not any('connected' in e for e in errors) else 2,
                  doors=sum(len(b['doors']) for b in m['buildings']),
                  scope='offline geometry and supportability; native pathfinding and battle balance not certified')
    report.update(metrics)
    report['support'] = dict(objectives=objectives)
    report['timings'] = timings
    return report


def analyse_and_repair(m, rebuild, seed, attempt, deadline=None):
    """Analyse; on support-only failures plan bounded repairs, rebuild the attempt's
    map (demoting storeys if planned), re-apply every repair in order, re-analyse."""
    from .village import stream
    urban = m['kind'] == 'city2'
    if urban:
        from .city2 import stream
    t0 = time.perf_counter()
    context = {}
    report = analyse(m, deadline, _context=context)
    repairs, demoted = [], set()
    rounds = 0
    per_objective = {o['id']: 0 for o in m['objectives']}
    while not report['passed'] and report['structural'] and rounds < REPAIR_MAP_ROUNDS:
        _check(deadline)
        failing = [o for o in report['support']['objectives'] if
                   any(t['supportable_share'] < SUPPORT_SHARE for t in o['teams'])]
        if not failing:
            break
        objective = min(failing, key=lambda o: (min(t['supportable_share'] for t in o['teams']), o['id']))
        ident = objective['id']
        local_round = per_objective[ident]
        if local_round >= REPAIR_ROUNDS:
            break
        ops = plan_repairs(m, objective, local_round, stream(seed, attempt, 'repair', ident, local_round), repairs,
                           context['kernel'], context['catalogue'])
        per_objective[ident] += 1
        if not ops:
            break
        for op in ops:
            op['objective'] = ident
            if op['kind'] == 'demote':
                demoted.add(op['building'] if urban else tuple(op['cell']))
            else:
                repairs.append(op)
        m = rebuild(frozenset(demoted))
        for n, op in enumerate(repairs):
            apply_repair(m, op, n)
        m = round_geometry(m)
        rounds += 1
        before = sum(max(0, SUPPORT_SHARE - t['supportable_share']) for t in objective['teams'])
        report = analyse(m, deadline, _context=context)
        after = next(o for o in report['support']['objectives'] if o['id'] == ident)
        if sum(max(0, SUPPORT_SHARE - t['supportable_share']) for t in after['teams']) >= before:
            break  # This objective still fails; spend the remaining budget on a new layout.
    m['repairs'] = dict(rounds=rounds, by_objective=per_objective, applied=repairs,
                        demoted=sorted(demoted) if urban else sorted(list(c) for c in demoted))
    report['repair_rounds'] = rounds
    report['repairs'] = len(repairs) + len(demoted)
    report['timings']['total'] = round(time.perf_counter() - t0, 3)
    return m, report


# ------------------------------------------------------------------ repairs
REPAIR_WALL = 1.25     # low enough to fire over standing (1.5 m eye), high enough to beat a window at 10 m
REPAIR_KINDS = (('wall', 'crater', 'hedge', 'demote'), ('hedge', 'wall', 'crater', 'demote'),
                ('demote', 'wall', 'crater', 'hedge'))


def _free(m, rect, margin, taken):
    """Nothing within `margin` of rect: solids (earth aside), surfaces, doors, spawns,
    goals, the objective, link landings, explicit firing lanes or planned repairs."""
    x0, y0 = rect[0] - margin, rect[1] - margin
    x1, y1 = rect[0] + rect[2] + margin, rect[1] + rect[3] + margin
    bx, by, bw, bh = m['bounds']
    if x0 < bx + 2 or y0 < by + 2 or x1 > bx + bw - 2 or y1 > by + bh - 2:
        return False
    for r in taken:
        if r[0] < x1 + 1 and x0 - 1 < r[0] + r[2] and r[1] < y1 + 1 and y0 - 1 < r[1] + r[3]:
            return False
    for s in m['solids']:
        if s['kind'] != 'earth' and s['min'][0] < x1 and s['max'][0] > x0 and s['min'][1] < y1 and s['max'][1] > y0:
            return False
    for s in m['surfaces']:
        rx, ry, rw, rh = s['rect']
        if rx < x1 + 1 and rx + rw > x0 - 1 and ry < y1 + 1 and ry + rh > y0 - 1:
            return False
    points = [d['center'] for b in m['buildings'] for d in b['doors']]
    points += [s['position'] for s in m['spawns']] + [s['goal'] for s in m['spawns']]
    points += [o['position'] for o in m['objectives']]
    points += [p for l in m['links'] for p in l.get('landings', [])]
    for p in points:
        if x0 - 3 < p[0] < x1 + 3 and y0 - 3 < p[1] < y1 + 3:
            return False
    for c in m['cover']:
        f, d = c['fire'], c['facing']
        for t in (0, 1, 2, 3, 4):
            if x0 - .3 < f[0] + d[0] * t < x1 + .3 and y0 - .3 < f[1] + d[1] * t < y1 + .3:
                return False
    return True


def plan_repairs(m, objective, rounds, rng, planned, K, catalogue):
    """One verified repair per unsupported crossing (longest first, at most eight a
    round). Each candidate is added to a trial kernel and kept only if the crossing
    then meets the support rule (or, for a hedge, is no longer a 9 m crossing)."""
    by_id = {c['id']: c for c in catalogue}
    observers = [[by_id[i] for i in ids if i in by_id] for ids in objective['observers']]
    unsupported = [c for t in objective['teams'] if t['supportable_share'] < SUPPORT_SHARE
                   for c in t['crossings'] if not c['supported']]
    unsupported.sort(key=lambda c: (-c['length'], c['team'], c['squad'], tuple(c['start'])))
    solids = {s['id']: s for s in m['solids']}
    position = objective['position']
    taken = [r for op in planned for r in _op_rects(op)]
    ops = []
    for c in unsupported[:8]:
        rel = [observers[c['team']][n] for n in c['observers'] if n < len(observers[c['team']])]
        if not rel:
            continue
        for kind in REPAIR_KINDS[min(rounds, 2)]:
            op = _repair_for(m, K, c, rel, kind, position, solids, taken, ops + list(planned))
            if op:
                ops.append(op)
                taken.extend(_op_rects(op))
                break
    return ops


def _op_rects(op):
    if op['kind'] == 'crater':
        (cx, cy), r = op['center'], op['radius'] + .3
        return [[cx - r, cy - r, 2 * r, 2 * r]]
    return [list(r) for r in op.get('rects', ())]


def _spots(m, K, crossing, objective):
    pts = crossing['points']
    mid = pts[len(pts) // 2]
    mid_d = math.hypot(mid[0] - objective[0], mid[1] - objective[1])
    xs = [p[0] for p in pts]
    ys = [p[1] for p in pts]
    out = []
    for y in range(int(min(ys)) - 20, int(max(ys)) + 21, 2):
        for x in range(int(min(xs)) - 20, int(max(xs)) + 21, 2):
            d = min(_seg_distance((x, y), a, b) for a, b in zip(pts, pts[1:])) if len(pts) > 1 else math.hypot(x - pts[0][0], y - pts[0][1])
            if 2.5 <= d <= 20 and math.hypot(x - objective[0], y - objective[1]) >= mid_d:
                out.append((d, y, x))
    out.sort()
    return [(x, y, 0.0) for _, y, x in out]


def _trial(K, rects, height, kind, flags=0):
    """Add solids to the kernel; returns an undo function."""
    count = len(K.solids)
    for r in rects:
        box = dict(id=f'trial-{len(K.solids)}', min=[r[0], r[1], 0.0], max=[r[0] + r[2], r[1] + r[3], height],
                   blocks_movement=kind != 'rim', half_cover=kind in ('garden-wall', 'rim'), kind=kind,
                   flags=flags)
        K.add_solid(box)

    def undo():
        while len(K.solids) > count:
            k = len(K.solids) - 1
            (x0, y0, _), (x1, y1, _) = K.lo[k], K.hi[k]
            for j in range(K._cy(y0), K._cy(y1) + 1):
                for i in range(K._cx(x0), K._cx(x1) + 1):
                    cell = K.cells[j * K.nx + i]
                    if cell and cell[-1] == k:
                        cell.pop()
            for arr in (K.solids, K.lo, K.hi, K.move, K.conceal, K.stamp):
                arr.pop()
    return undo


def _meets(K, q, posture, rel):
    eye = (q[0], q[1], q[2] + EYE[posture])
    body = (q[0], q[1], q[2] + BODY[posture] * .8)
    need = int(math.ceil(.5 * len(rel)))
    over = 0
    for o in rel:
        target = (o['peek'][0], o['peek'][1], o['peek'][2] + 1.2)
        if math.dist(eye, target) <= SIGHT and K.los(eye, target):
            over += 1
    if over < need:
        return False
    for o in rel:
        if math.dist(_eye(o), body) <= SIGHT and K.los(_eye(o), body) and not K.protected_at(q, o['shelter'], posture):
            return False
    return True


def _own_contract(K, q, facing, posture, firing_height):
    """The explicit position a repair adds must pass the validator's own rules."""
    threat = (q[0] + facing[0] * 4, q[1] + facing[1] * 4, q[2])
    a = (q[0], q[1], q[2] + firing_height)
    return K.protected_at(q, threat, posture) and K.los(a, (a[0] + facing[0] * 4, a[1] + facing[1] * 4, a[2]))


def _wall_rects(q, directions):
    rects = []
    for dx, dy in directions:
        if dx:
            rects.append([q[0] + dx * .9 - .25, q[1] - 1.5, .5, 3.0])
        else:
            rects.append([q[0] - 1.5, q[1] + dy * .9 - .25, 3.0, .5])
    return rects


def _repair_for(m, K, crossing, rel, kind, objective, solids, taken, pending):
    if kind == 'demote':
        for o in rel:
            s = solids.get(o['source'])
            if s is None or o['shelter'][2] < 1:
                continue
            b = next((b for b in m['buildings'] if b['id'] == s.get('parent')), None)
            if b is None or b['use'] != 'house' or b['floors'] != 2:
                continue
            x, y, w, h = b['rect']
            cell = [int((x + w / 2 + 170) // 20), int((y + h / 2 + 130) // 20)]
            if any(op['kind'] == 'demote' and (op['building'] == b['id'] if m['kind'] == 'city2' else op['cell'] == cell) for op in pending):
                continue
            return dict(kind='demote', cell=cell, building=b['id'])
        return None
    spots = _spots(m, K, crossing, objective)
    if kind in ('wall', 'crater'):
        tried = 0
        for q in spots:
            if tried >= 60:
                break
            if not K.walkable(q):
                continue
            posture = 'crouched' if kind == 'wall' else 'prone'
            eye = (q[0], q[1], q[2] + EYE[posture])
            if sum(math.dist(eye, (o['peek'][0], o['peek'][1], o['peek'][2] + 1.2)) <= SIGHT and
                   K.los(eye, (o['peek'][0], o['peek'][1], o['peek'][2] + 1.2)) for o in rel) < math.ceil(.5 * len(rel)):
                continue
            tried += 1
            body = (q[0], q[1], BODY[posture] * .8)
            seers = [o for o in rel if K.los(_eye(o), body)]
            aim = seers or rel
            vx = sum(o['shelter'][0] - q[0] for o in aim)
            vy = sum(o['shelter'][1] - q[1] for o in aim)
            if kind == 'crater':
                r = 3.0
                ux, uy = (1 if vx > 0 else -1, 0) if abs(vx) >= abs(vy) else (0, 1 if vy > 0 else -1)
                d = r - RIM_HEIGHT / 2 - .5
                centre = (q[0] - ux * d, q[1] - uy * d)
                box = [centre[0] - r - .3, centre[1] - r - .3, 2 * r + .6, 2 * r + .6]
                if not _free(m, box, .5, taken):
                    continue
                undo = _trial(K, _rim_rects(centre, r), RIM_HEIGHT, 'rim', 2)
                muzzle = .72 if m['kind'] == 'city2' else 1.0
                ok = _meets(K, q, 'prone', rel) and _own_contract(K, q, (ux, uy), 'prone', muzzle)
                undo()
                if ok:
                    return dict(kind='crater', center=[centre[0], centre[1]], radius=r, facing=[ux, uy])
                continue
            options = []
            main = (1 if vx > 0 else -1, 0) if abs(vx) >= abs(vy) else (0, 1 if vy > 0 else -1)
            other = (0, 1 if vy > 0 else -1) if main[0] else (1 if vx > 0 else -1, 0)
            options.append([main])
            options.append([main, other])
            for dirs in options:
                rects = _wall_rects(q, dirs)
                if not all(_free(m, r, .6, taken) for r in rects):
                    continue
                height = 1.15 if m['kind'] == 'city2' else REPAIR_WALL
                undo = _trial(K, rects, height, 'garden-wall')
                ok = K.walkable(q) and _meets(K, q, 'crouched', rel) and _own_contract(K, q, dirs[0], 'crouched', 1.65)
                undo()
                if ok:
                    return dict(kind='wall', rects=rects, height=height, shelter=list(q), facing=list(dirs[0]))
        return None
    if kind == 'hedge':
        pts = crossing['points']
        a, b = pts[0], pts[-1]
        horizontal = abs(b[0] - a[0]) >= abs(b[1] - a[1])
        mid = pts[len(pts) // 2]
        vx = sum(o['shelter'][0] - mid[0] for o in rel)
        vy = sum(o['shelter'][1] - mid[1] for o in rel)
        side = (1 if vy > 0 else -1) if horizontal else (1 if vx > 0 else -1)
        length = min(12.0, crossing['length'] + 4)
        for offset in (2.5, 3.5, 4.5):
            if horizontal:
                rect = [round(mid[0] - length / 2, 1), round(mid[1] + side * offset - .4, 1), length, .8]
            else:
                rect = [round(mid[0] + side * offset - .4, 1), round(mid[1] - length / 2, 1), .8, length]
            if not _free(m, rect, .6, taken):
                continue
            undo = _trial(K, [rect], 1.8, 'hedge', 1)
            exposed = 0.0
            for p, q in zip(pts, pts[1:]):
                target = (q[0], q[1], q[2] + 1.3)
                if any(math.dist(_eye(o), target) <= SIGHT and K.los(_eye(o), target) for o in rel):
                    exposed += math.dist(p[:2], q[:2])
            undo()
            if exposed < CROSSING:
                return dict(kind='hedge', rects=[rect])
        return None
    return None


RIM_HEIGHT = .6


def _rim_rects(centre, r):
    cx, cy = centre
    t, dg = r * math.tan(math.pi / 8), max(.3, .2 * r)
    rects = []
    for k in range(8):
        ang = k * math.pi / 4
        ux, uy = math.cos(ang), math.sin(ang)
        if k % 2 == 0:
            hx, hy = (RIM_HEIGHT / 2, t) if abs(ux) > .5 else (t, RIM_HEIGHT / 2)
        else:
            hx = hy = dg
        px, py = cx + r * ux, cy + r * uy
        rects.append([px - hx, py - hy, 2 * hx, 2 * hy])
    return rects


def apply_repair(m, op, n):
    from .geometry import cover
    parent = f'repair-{n:02d}'
    if op['kind'] == 'wall':
        ids = [solid(m, r, op['height'], 'garden-wall', 0, True, parent) for r in op['rects']]
        cover(m, ids[0], op['shelter'], op['facing'], 'repair-wall')
    elif op['kind'] == 'hedge':
        for r in op['rects']:
            solid(m, r, 1.8, 'hedge', 0, True, parent, flags=1, half_cover=False)
    elif op['kind'] == 'crater':
        cx, cy = op['center']
        r = op['radius']
        m['decorations'].append(dict(kind='crater', id=parent, center=[cx, cy], radius=r))
        ids = [solid(m, rect, RIM_HEIGHT, 'rim', 0, False, parent, flags=2, half_cover=True) for rect in _rim_rects((cx, cy), r)]
        ux, uy = op['facing']
        k = {(1, 0): 0, (0, 1): 2, (-1, 0): 4, (0, -1): 6}[(ux, uy)]
        d = r - RIM_HEIGHT / 2 - .5
        cover(m, ids[k], [cx + ux * d, cy + uy * d, 0], [ux, uy], 'crater', posture='prone',
              firing_height=.72 if m['kind'] == 'city2' else 1.0)
