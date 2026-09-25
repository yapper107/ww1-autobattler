"""Village parcel composition after socket solving; no new native record types.

The 20 m lattice is a constraint scaffold. Shared, displaced parcel corners and
2–6 cell holdings erase it from the countryside without moving roads or lanes.
"""
import math

from .geometry import solid
from .shells import Frame

RURAL = ('field', 'hedged', 'garden', 'orchard', 'craters')


def compose(seed, attempt, tiles, plan):
    from .village import stream, VARIANTS, VARIANT_INDEX, cell_rect, front_of
    names = {c: VARIANTS[tiles[c]][0] for c in sorted(tiles)}
    occupied = set()
    farms = {}
    # A farm owns a 2 x 2 holding. Reserve it before placing rural furniture.
    for c in sorted(tiles):
        if names[c] != 'farm':
            continue
        r = VARIANTS[tiles[c]][1]
        frame = Frame(cell_rect(*c), front_of(r))
        choices = []
        for side in (-1, 1):
            du, dv = frame.vec(side, 0), frame.vec(0, 1)
            cells = sorted((c[0] + du[0]*u + dv[0]*v, c[1] + du[1]*u + dv[1]*v)
                           for u in (0, 1) for v in (0, 1))
            if all(q == c or (names.get(q) in RURAL and q not in occupied) for q in cells):
                choices.append((side, cells))
        if choices:
            side, cells = stream(seed, attempt, 'farm-lot', *c).choice(choices)
            farms[c] = dict(rect=frame.rect(-16 if side < 0 else 0, -3, 36, 36), cells=cells)
            occupied.update(cells)
        else:
            # Keep the road-facing shell; never squeeze a miniature farm into a cell.
            tiles[c] = VARIANT_INDEX[('house', r)]
            names[c] = 'house'
    rural = {c for c in sorted(tiles) if names[c] in RURAL and c not in occupied}
    # Orchard strips belong behind a dwelling, rather than arbitrary open fields.
    orchards = set()
    for c in sorted(tiles):
        if names[c] not in ('house', 'house2'):
            continue
        frame = Frame(cell_rect(*c), front_of(VARIANTS[tiles[c]][1]))
        dx, dy = frame.vec(0, 1)
        back = (c[0] + dx, c[1] + dy)
        if back in rural and stream(seed, attempt, 'orchard-lot', *c).random() < .65:
            orchards.add(back)
    # Reserved farm cells no longer expose obsolete WFC terrain labels.
    for c in sorted(occupied):
        if names[c] in RURAL:
            tiles[c] = VARIANT_INDEX[('field', 0)]
    # Land use is independent of the later continuous bombardment layer.
    for c in sorted(rural):
        tiles[c] = VARIANT_INDEX[('orchard' if c in orchards else 'field', 0)]
    # Random frontier growth makes holdings of varied shape, with leftover slivers
    # attached where possible. All candidate iteration is explicitly sorted.
    remaining = rural - orchards
    parcels = []
    while remaining:
        root = min(remaining, key=lambda c: (stream(seed, attempt, 'parcel-order', *c).random(), c))
        rng = stream(seed, attempt, 'parcel', *root)
        target = rng.randint(2, 6)
        cells = [root]
        remaining.remove(root)
        while len(cells) < target:
            frontier = sorted({(i+dx, j+dy) for i, j in cells for dx, dy in ((0,1),(1,0),(0,-1),(-1,0))
                               if (i+dx, j+dy) in remaining})
            if not frontier:
                break
            nxt = rng.choice(frontier)
            remaining.remove(nxt)
            cells.append(nxt)
        parcels.append(dict(cells=sorted(cells), tone=rng.randrange(5), hedged=rng.random()<.68))
    for c in sorted(orchards):
        parcels.append(dict(cells=[c], tone=5, hedged=True))
    owner = {c: n for n, p in enumerate(parcels) for c in p['cells']}
    vertices = {}
    for i, j in sorted({(i+u,j+v) for i,j in rural for u,v in ((0,0),(1,0),(1,1),(0,1))}):
        around = [(i-1,j-1),(i,j-1),(i-1,j),(i,j)]
        rng = stream(seed, attempt, 'parcel-vertex', i, j)
        shift = 4.5 if all(q in rural for q in around) else 0
        vertices[(i,j)] = [-170+20*i+rng.uniform(-shift,shift), -130+20*j+rng.uniform(-shift,shift)]
    return dict(farms=farms, occupied=occupied, parcels=parcels, owner=owner, vertices=vertices,
                open_cells=len(rural-orchards))


def landscape(m, seed, attempt, land):
    from .village import stream
    vertices, owner = land['vertices'], land['owner']
    m['fields'] = []
    for n, parcel in enumerate(land['parcels']):
        pieces = [[vertices[(i+u,j+v)] for u,v in ((0,0),(1,0),(1,1),(0,1))] for i,j in parcel['cells']]
        m['fields'].append(dict(id='field-%03d'%n, cells=[list(c) for c in parcel['cells']],
                                pieces=pieces, tone=parcel['tone'], hedged=parcel['hedged']))
    # Join each shared holding boundary before spacing gaps, so an old cell seam
    # cannot accidentally reset the 12–16 m interval.
    boundaries = {}
    for i, j in sorted(owner):
        n = owner[(i,j)]
        for other, va, vb in (((i+1,j),(i+1,j),(i+1,j+1)), ((i,j+1),(i,j+1),(i+1,j+1))):
            if other not in owner or owner[other] == n:
                continue
            q = owner[other]
            if land['parcels'][n]['hedged'] or land['parcels'][q]['hedged']:
                boundaries.setdefault(tuple(sorted((n,q))), []).append(tuple(sorted((va,vb))))
    for pair in sorted(boundaries):
        edges = set(boundaries[pair])
        run = 0
        while edges:
            degrees = {}
            for a,b in sorted(edges):
                degrees[a] = degrees.get(a,0)+1
                degrees[b] = degrees.get(b,0)+1
            ends = sorted(v for v in degrees if degrees[v]==1)
            at = ends[0] if ends else min(degrees)
            path = [vertices[at]]
            while True:
                choices = sorted(e for e in edges if at in e)
                if not choices:
                    break
                edge = choices[0]
                edges.remove(edge)
                at = edge[1] if edge[0]==at else edge[0]
                path.append(vertices[at])
            rng = stream(seed, attempt, 'parcel-boundary', *pair, run)
            _boundary(m, path, rng, 'field-%03d'%pair[0])
            run += 1
    # Fill tight inside corners with a hedge bush. Otherwise two stepped runs
    # can leave a sub-metre pocket that has one walkable grid node and no edge.
    # Never bridge a gateway: both incident runs must actually reach the vertex.
    hedges = [s for s in m['solids'] if s.get('flags',0)&1 and
              (s.get('parent') or '').startswith('field-')]
    for vertex in sorted(vertices):
        x,y = vertices[vertex]
        touching = [s for s in hedges if s['min'][0] <= x <= s['max'][0] and
                    s['min'][1] <= y <= s['max'][1]]
        if len(touching) < 2:
            continue
        sid = solid(m,[x-1.2,y-1.2,2.4,2.4],1.8,'hedge',0,True,
                    touching[0]['parent'],flags=1,half_cover=False)
        m['hedges'].append(sid)


def _boundary(m, path, rng, parent):
    lengths = [math.dist(a,b) for a,b in zip(path,path[1:])]
    total = sum(lengths)
    gap = rng.uniform(4,8)
    spans = []
    start = 0
    while gap < total-1.2:
        spans.append((start, gap-1.2))
        start = gap+1.2
        gap += rng.uniform(12,16)
    spans.append((start,total))
    travelled = 0
    for a,b,length in zip(path,path[1:],lengths):
        dx,dy = b[0]-a[0],b[1]-a[1]
        for start,end in spans:
            lo,hi = max(0,start-travelled),min(length,end-travelled)
            if hi-lo < .6:
                continue
            count = 1 if min(abs(dx),abs(dy))<.001 else max(1,int(math.ceil((hi-lo)/3)))
            for k in range(count):
                t0 = (lo+(hi-lo)*k/count)/length
                t1 = (lo+(hi-lo)*(k+1)/count)/length
                p = [a[0]+dx*t0,a[1]+dy*t0]
                q = [a[0]+dx*t1,a[1]+dy*t1]
                rect = [min(p[0],q[0])-.4,min(p[1],q[1])-.4,abs(q[0]-p[0])+.8,abs(q[1]-p[1])+.8]
                sid = solid(m,rect,1.8,'hedge',0,True,parent,flags=1,half_cover=False)
                m['hedges'].append(sid)
        travelled += length
