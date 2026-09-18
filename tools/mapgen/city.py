"""A small industrial town: roads -> blocks -> frontage lots -> real walls."""
import random
from .geometry import base, solid, cover, round_geometry
from .vendor.lots import subdivide


def building(m, rect, rng, use, damage):
    x, y, w, h = rect
    ident = f"building-{len(m['buildings']):03d}"
    ruined = rng.random() < damage
    b = dict(id=ident, kind='shell', rect=rect, use=use, ruined=ruined, doors=[], walls=[],
             roof=rng.choice(['slate', 'tile', 'zinc']) if use != 'works' else 'zinc')
    m['buildings'].append(b)
    # Each wall has a real central doorway and two embrasures with low sills.
    # All four doors keep courtyards and interiors accessible without stairs.
    for axis, side in [(0, -1), (0, 1), (1, -1), (1, 1)]:
        length = h if axis == 0 else w
        start = y if axis == 0 else x
        fixed = (x if side < 0 else x + w) if axis == 0 else (y if side < 0 else y + h)
        normal = [side, 0] if axis == 0 else [0, side]
        door = length / 2
        openings = [(length * 0.19, 1.5, 'window'), (door, 2.8, 'door'),
                    (length * 0.81, 1.5, 'window')]
        last = 0
        def wall(a, end, height, kind='wall', z=0):
            if end <= a:
                return None
            r = ([fixed - .25, start + a, .5, end - a] if axis == 0 else
                 [start + a, fixed - .25, end - a, .5])
            sid = solid(m, r, height, kind, z, z < 1.8, ident)
            b['walls'].append(sid)
            return sid
        for mid, width, kind in openings:
            a, end = mid - width / 2, mid + width / 2
            wall(last, a, rng.uniform(1.9, 2.8) if ruined else 3.6)
            p = ([fixed - side * .95, start + mid, 0] if axis == 0 else
                 [start + mid, fixed - side * .95, 0])
            if kind == 'window':
                sid = wall(a, end, 1.15, 'sill')
                cover(m, sid, p, normal, 'window')
                if not ruined:
                    wall(a, end, 1.2, 'lintel', 2.4)
            else:
                b['doors'].append(dict(center=([fixed, start + mid, 0] if axis == 0 else
                                              [start + mid, fixed, 0]), width=width,
                                       normal=normal))
            last = end
        wall(last, length, rng.uniform(1.9, 2.8) if ruined else 3.6)
    return b


def generate(seed=17, damage=.32):
    if not 0 <= damage <= 1:
        raise ValueError('damage must be between 0 and 1')
    rng = random.Random(seed)
    m = base('city', seed)
    m['parameters'] = dict(damage=damage)
    # Coherent road hierarchy. Jitter whole streets, never individual houses.
    xs = [-151, -77 + rng.randint(-6, 6), rng.randint(-5, 5), 77 + rng.randint(-5, 5), 151]
    ys = [-113, -39 + rng.randint(-5, 5), 39 + rng.randint(-5, 5), 113]
    for i, x in enumerate(xs):
        m['roads'].append(dict(id=f'road-v{i}', points=[[x, -130], [x, 130]],
                               width=12 if i == 2 else 8, name='Foundry Road' if i == 2 else ''))
    for j, y in enumerate(ys):
        m['roads'].append(dict(id=f'road-h{j}', points=[[-170, y], [170, y]],
                               width=12 if j == 1 else 8, name='Station Street' if j == 1 else ''))
    for row in range(3):
        for col in range(4):
            x0, x1 = xs[col] + 9, xs[col + 1] - 9
            y0, y1 = ys[row] + 9, ys[row + 1] - 9
            w, h = x1 - x0, y1 - y0
            bid = f'block-{col}-{row}'
            use = 'works' if col == 2 and row != 2 else 'housing'
            if (col, row) == (1, 1):
                # A civic square anchors the town; its edges remain flanked by streets.
                m['yards'].append(dict(id=bid, rect=[x0, y0, w, h], use='square'))
                building(m, [x0 + 6, y1 - 18, w - 12, 14], rng, 'civic', 0)
                for xx in (x0 + 5, x1 - 5):
                    sid = solid(m, [xx - .4, y0 + 6, .8, 13], 1.15, 'garden-wall', parent=bid)
                    for side in [-1, 1]:
                        cover(m, sid, [xx + side, y0 + 12, 0], [-side, 0], 'low-wall')
                m['objectives'].append(dict(name='Market square', position=[(x0+x1)/2, y0 + 20, 0]))
                continue
            m['yards'].append(dict(id=bid, rect=[x0, y0, w, h], use='yard' if use == 'works' else 'garden'))
            if use == 'works':
                # Two long mill halls and an open service yard, not random sheds.
                for xx in (x0, x1 - 17):
                    building(m, [xx, y0, 17, h - 10], rng, use, damage)
                building(m, [x0 + 21, y1 - 9, max(10, w - 42), 9], rng, 'office', damage)
                m['labels'].append(dict(text='IRONWORKS' if row == 0 else 'MILL YARD', position=[(x0+x1)/2, y0 + h/2]))
            else:
                depth = rng.uniform(12, 14)
                strips = [(x0, y0, w, depth), (x0, y1-depth, w, depth),
                          (x0, y0+depth+4, depth, h-2*depth-8),
                          (x1-depth, y0+depth+4, depth, h-2*depth-8)]
                for strip in strips:
                    for lx, ly, lw, lh in subdivide(strip, 190, rng, min_side=12):
                        # Three-metre alleys keep plot subdivision useful to infantry.
                        building(m, [lx+1.5, ly+1.5, lw-3, lh-3], rng, use, damage)
    m['labels'] += [dict(text='MARKET SQUARE', position=m['objectives'][0]['position'][:2]),
                    dict(text='WORKERS’ QUARTER', position=[-112, 126])]
    m['deployment'] = [dict(team=0, position=[-161, ys[1], 0]),
                       dict(team=1, position=[161, ys[2], 0])]
    return round_geometry(m)
