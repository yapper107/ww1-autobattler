"""Village building shells: `city.building` copied and evolved for storeys.

`city.py` is untouched. Every building is described in a local frame whose front
wall faces local south (v = 0) and is rotated in 90 degree steps into the world,
so walls, stairs, slopes and facings stay axis aligned. Storeys follow the plan
029 F contract: ground walls 0-3.0 m, a non-blocking slab at 3.0 m (0.2 m) with an
open stairwell, upper walls 3.2-6.2 m, upper sills 3.2-4.25 m, upper lintels
5.55-6.4 m. A stair is one 1.2 m wide plane with a 4 m run, eight tread boxes and
one link; its centreline stays 0.75 m from the wall faces and both landings hold
an integer grid node.
"""
from .geometry import solid, cover, surface

UPPER = 3.2            # storey height (native UpperFloor)
GROUND_TOP = 3.0       # ground walls under a floor
UPPER_TOP = 6.2
STAIR = dict(u0=.4, u1=1.6, v0=2.0, v1=6.0)   # local stair plane (centreline u = 1)
STAIR_TREADS = 8


class Frame:
    """Local (u, v) -> world. `front` is the world side the local front wall faces."""

    def __init__(self, rect, front):
        x, y, w, h = rect
        self.front = front
        self.W, self.D = (w, h) if front in ('S', 'N') else (h, w)
        self.m, self.o = {
            'S': ((1, 0, 0, 1), (x, y)),
            'N': ((-1, 0, 0, -1), (x + w, y + h)),
            'W': ((0, 1, -1, 0), (x, y + h)),
            'E': ((0, -1, 1, 0), (x + w, y)),
        }[front]

    def p(self, u, v, z=None):
        a, b, c, d = self.m
        q = [self.o[0] + a * u + b * v, self.o[1] + c * u + d * v]
        return q if z is None else q + [z]

    def vec(self, u, v):
        a, b, c, d = self.m
        return [a * u + b * v, c * u + d * v]

    def rect(self, u, v, w, h):
        p, q = self.p(u, v), self.p(u + w, v + h)
        return [min(p[0], q[0]), min(p[1], q[1]), abs(q[0] - p[0]), abs(q[1] - p[1])]


# Side name -> (runs along u?, fixed coordinate getter, local outward normal)
def _side(frame, side):
    return {'front': (True, 0, (0, -1)), 'back': (True, frame.D, (0, 1)),
            'left': (False, 0, (-1, 0)), 'right': (False, frame.W, (1, 0))}[side]


def default_openings(W, D, floors, use):
    """Opening lists per floor and side: (centre along the wall, width, 'door'|'window')."""
    if use == 'barn':
        return [dict(front=[(.15 * W, 1.5, 'window'), (.5 * W, 3.6, 'door'), (.85 * W, 1.5, 'window')],
                     back=[(.5 * W, 2.4, 'door')], left=[], right=[])]
    if use == 'church':
        return [dict(front=[(.5 * W, 2.4, 'door')], back=[(.5 * W, 1.5, 'window')],
                     left=[(.25 * D, 1.5, 'window'), (.5 * D, 1.5, 'window'), (.75 * D, 1.5, 'window')],
                     right=[(.25 * D, 1.5, 'window'), (.5 * D, 1.5, 'window'), (.75 * D, 1.5, 'window')])]
    long_wall = [(.2 * W, 1.5, 'window'), (.5 * W, 2.4, 'door'), (.8 * W, 1.5, 'window')]
    if floors == 1:
        return [dict(front=long_wall, back=list(long_wall),
                     left=[(.5 * D, 1.5, 'window')], right=[(.5 * D, 1.5, 'window')])]
    upper = [(.2 * W, 1.5, 'window'), (.5 * W, 1.5, 'window'), (.8 * W, 1.5, 'window')]
    # The stair runs along the left wall: that gable has no openings on either floor.
    return [dict(front=long_wall, back=list(long_wall), left=[], right=[(.5 * D, 1.5, 'window')]),
            dict(front=upper, back=list(upper), left=[], right=[(.5 * D, 1.5, 'window')])]


def shell(m, frame, rng, use, floors=1, ruined=False, wall_height=3.6, b_id=None, openings=None, wall_omit=None):
    """Build one shell in `frame`. Returns the building record appended to m['buildings']."""
    if floors == 2 and (frame.D < 8 or frame.W < 8 or ruined):
        raise ValueError('two-storey shells need an intact 8 m x 8 m footprint')
    ident = f"building-{len(m['buildings']):03d}"
    W, D = frame.W, frame.D
    world = frame.rect(0, 0, W, D)
    b = dict(id=ident, kind='shell', rect=world, use=use, ruined=ruined, floors=floors,
             front=frame.front, doors=[], walls=[], windows=[], upper_windows=[], stair=None,
             roof=rng.choice(['slate', 'tile', 'zinc']) if use != 'barn' else 'zinc',
             record=b_id if b_id is not None else len(m['buildings']) + 1)
    m['buildings'].append(b)
    openings = openings or default_openings(W, D, floors, use)
    for floor in range(floors):
        base = floor * UPPER
        top = (GROUND_TOP if floors == 2 else wall_height) if floor == 0 else UPPER_TOP
        for side in ('front', 'back', 'left', 'right'):
            along_u, fixed, normal = _side(frame, side)
            length = W if along_u else D
            world_normal = frame.vec(*normal)

            def wall(a, end, z0, z1, kind='wall', movement=True):
                if end - a <= 1e-6 or z1 - z0 <= 1e-6:
                    return None
                if wall_omit and kind == 'wall' and (floor, side) in wall_omit:
                    spans = [(a, end)]
                    for lo, hi in sorted(wall_omit[(floor, side)]):
                        spans = [(x, y) for left, right in spans
                                 for x, y in ((left, min(right, lo)), (max(left, hi), right)) if y > x + 1e-6]
                    first = None
                    for left, right in spans:
                        r = [left, fixed-.25, right-left, .5] if along_u else [fixed-.25, left, .5, right-left]
                        sid = solid(m, frame.rect(*r), z1-z0, kind, z0, movement, ident)
                        b['walls'].append(sid)
                        first = first or sid
                    return first
                r = [a, fixed - .25, end - a, .5] if along_u else [fixed - .25, a, .5, end - a]
                sid = solid(m, frame.rect(*r), z1 - z0, kind, z0, movement, ident)
                b['walls'].append(sid)
                return sid

            last = 0
            for mid, width, kind in sorted(openings[floor][side]):
                a, end = mid - width / 2, mid + width / 2
                height = rng.uniform(1.9, 2.8) if ruined else top - base
                wall(last, a, base, base + height)
                local = ((mid, fixed - normal[1] * .95) if along_u else (fixed - normal[0] * .95, mid))
                if kind == 'window':
                    sill_top = base + (1.15 if floor == 0 else 1.05)
                    sid = wall(a, end, base, sill_top, 'sill')
                    p = frame.p(*local, z=base)
                    if floor == 0:
                        b['windows'].append(cover(m, sid, p, world_normal, 'window'))
                    else:
                        b['upper_windows'].append(cover(m, sid, p, world_normal, 'upper-window',
                                                        posture='crouched', window=True, level=1))
                    if not ruined:
                        lintel = (2.4, top) if floor == 0 else (5.55, 6.4)
                        wall(a, end, lintel[0], lintel[1], 'lintel', False)
                else:
                    centre = frame.p(mid, fixed) if along_u else frame.p(fixed, mid)
                    b['doors'].append(dict(center=centre + [base], width=width, normal=world_normal,
                                           along=[abs(v) for v in frame.vec(1, 0)] if along_u
                                           else [abs(v) for v in frame.vec(0, 1)]))
                last = end
            wall(last, length, base, base + (rng.uniform(1.9, 2.8) if ruined else top - base))
    if floors == 2:
        _upper_floor(m, frame, b)
    return b


def _upper_floor(m, frame, b):
    """Slab, upper floor surfaces, stair plane, treads and the stair link."""
    W, D, ident = frame.W, frame.D, b['id']
    s = STAIR
    run = s['v1'] - s['v0']
    # Slab over the full outer footprint minus the stairwell (non-blocking, sight/bullets).
    for u, v, w, h in ([-.25, -.25, W + .5, s['v0'] + .25], [-.25, s['v1'], W + .5, D + .25 - s['v1']],
                       [-.25, s['v0'], s['u0'] + .25, run], [s['u1'], s['v0'], W + .25 - s['u1'], run]):
        b['walls'].append(solid(m, frame.rect(u, v, w, h), .2, 'slab', GROUND_TOP, False, ident))
    # Walkable upper floor: the interior between wall faces, minus the stairwell.
    pieces = [(.25, .25, W - .5, s['v0'] - .25), (.25, s['v1'], W - .5, D - .25 - s['v1']),
              (s['u1'], s['v0'], W - .25 - s['u1'], run)]
    b['upper_surfaces'] = [surface(m, frame.rect(*r), UPPER, (0, 0), ident, kind=0, level=1,
                                   building=b['record'], prefix='floor')['id'] for r in pieces]
    grad = frame.vec(0, UPPER / run)
    stair = surface(m, frame.rect(s['u0'], s['v0'], s['u1'] - s['u0'], run), UPPER / 2,
                    grad, ident, kind=2, level=1, building=b['record'], prefix='stair')
    for i in range(STAIR_TREADS):
        v = s['v0'] + i * run / STAIR_TREADS
        b['walls'].append(solid(m, frame.rect(s['u0'], v, s['u1'] - s['u0'], run / STAIR_TREADS),
                                (i + 1) * UPPER / STAIR_TREADS, 'tread', 0, False, ident))
    centre = (s['u0'] + s['u1']) / 2
    link = dict(kind='stair', surface=stair['id'], building=ident,
                from_position=frame.p(centre, s['v0'], z=0), to_position=frame.p(centre, s['v1'], z=UPPER),
                landings=[frame.p(centre, s['v0'] - 1, z=0), frame.p(centre, s['v1'] + 1, z=UPPER)])
    m['links'].append(link)
    b['stair'] = dict(surface=stair['id'], link=len(m['links']) - 1)
