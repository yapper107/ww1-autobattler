"""Continuous, asymmetric shell damage over an already composed village.

The pattern has no tile/parcel inputs. Physical craters avoid buildings, lane
surfaces and the objective; roads, orchards and boundary furniture are eligible.
Damaged furniture retains its ID as a low remnant. Surviving pieces get new IDs,
so support repairs can still append geometry without reusing an existing ID.
"""
import math

from .geometry import solid, cover

RIM = .6
BREAKABLE = ('hedge', 'garden-wall', 'farm-wall', 'tree', 'haystack', 'shed')


def pattern(seed, attempt, square, damage, stream=None):
    if stream is None:
        from .village import stream
    rng = stream(seed, attempt, 'attack-history')
    side = rng.choice((-1, 1))
    dx, dy = side, rng.uniform(-.45, .45)
    length = math.hypot(dx, dy)
    axis = [dx/length, dy/length]
    sx, sy = square
    distance = rng.uniform(58, 88)
    centre = [sx+axis[0]*distance, sy+axis[1]*distance]
    centre = [max(-108,min(108,centre[0])), max(-78,min(78,centre[1]))]
    near = [sx+axis[0]*20,sy+axis[1]*20]
    count = round(rng.randint(86,104)*min(1.15,.6+1.25*damage))
    return dict(approach='west' if side<0 else 'east', axis=axis, centre=centre,
                square=list(square), near=near, spread=[40,29], target=count,
                description='one battered approach, damage reaching the centre, quieter rear')


def exposure(history, point):
    """Continuous intensity used by house damage as well as the shell pattern."""
    dx,dy = history['axis']
    def blob(centre, along, across):
        x,y = point[0]-centre[0],point[1]-centre[1]
        return math.exp(-.5*(((x*dx+y*dy)/along)**2+((-x*dy+y*dx)/across)**2))
    return min(1, .85*blob(history['centre'],48,34)+.35*blob(history['near'],30,23))


def _distance_rect(point, rect):
    x,y,w,h = rect
    return math.hypot(max(x-point[0],0,point[0]-x-w),max(y-point[1],0,point[1]-y-h))


def bombard(m, seed, attempt, history, stream=None):
    if stream is None:
        from .village import stream
    rng = stream(seed, attempt, 'shell-impacts')
    dx,dy = history['axis']
    objective = m['focal_point']['position']
    forbidden = [b['rect'] for b in m['buildings']]+[s['rect'] for s in m['surfaces']]
    forbidden += [[s['min'][0],s['min'][1],s['max'][0]-s['min'][0],s['max'][1]-s['min'][1]]
                  for s in m['solids'] if s['kind'] in ('tower','memorial')]
    if m['kind']=='city2':
        from .village_curves import tube, rectangles
        for road in m['roads']:
            if road['street_type']=='alley':forbidden.extend(rectangles(tube(road['points'],road['width'])))
    placed = []
    candidates = 0
    # A bounded, map-wide impact budget replaces the old per-cell quota. As a
    # concentration fills, later candidates naturally spread toward its fringes.
    while len(placed)<history['target'] and candidates<history['target']*100:
        candidates += 1
        roll = rng.random()
        if roll < .76:
            cx,cy = history['centre']; along,across = 40,29
        elif roll < .96:
            cx,cy = history['near']; along,across = 31,24
        else:
            cx,cy = history['centre']; along,across = 66,48
        u,v = rng.gauss(0,along),rng.gauss(0,across)
        x,y = cx+u*dx-v*dy,cy+u*dy+v*dx
        r = rng.uniform(2.5,3.7)
        if not (-149+r < x < 149-r and -118+r < y < 118-r):
            continue
        # Keep the far side quiet even when a Gaussian candidate has a long tail.
        toward = (x-history['square'][0])*dx+(y-history['square'][1])*dy
        if toward < -28:
            continue
        if math.dist((x,y),objective[:2]) < r+3:
            continue
        if m['kind'] == 'city2' and any(math.dist((x,y),o['position'][:2]) < r+3 for o in m['objectives']):
            continue
        if any(_distance_rect((x,y),rect) < r+1 for rect in forbidden):
            continue
        if any(math.hypot(x-a,y-b) < r+q+.5 for a,b,q,_ in placed):
            continue
        age = 'old' if rng.random() < .28 else 'fresh'
        placed.append((x,y,r,age))
    # Never return a silently depleted damage budget. The existing attempt loop
    # will reject this composition if there is too little eligible ground.
    if len(placed)!=history['target']:
        from .village import Contradiction
        raise Contradiction('continuous damage budget could not fit')
    for x,y,r,_ in placed:
        for s in list(m['solids']):
            if s['kind'] not in BREAKABLE:
                continue
            rect = [s['min'][0],s['min'][1],s['max'][0]-s['min'][0],s['max'][1]-s['min'][1]]
            if _distance_rect((x,y),rect) < r+.6:
                _break(m,s,(x,y),r+.6)
    for x,y,r,age in placed:
        _crater(m,x,y,r,age)
    history['placed'] = len(placed)
    history['candidates'] = candidates
    history['damaged_furniture'] = sum(s.get('blast_damage',False) for s in m['solids'])
    m['hedges'] = [s['id'] for s in m['solids'] if s.get('flags',0)&1]


def _break(m, s, centre, radius):
    """Leave a low physical remnant and preserve any unhit ends of a boundary."""
    lo,hi = list(s['min']),list(s['max'])
    kind = s['kind']
    flags = s.get('flags',0)
    height = hi[2]-lo[2]
    if kind in ('hedge','garden-wall','farm-wall'):
        axis = 0 if hi[0]-lo[0] >= hi[1]-lo[1] else 1
        other = 1-axis
        distance = max(lo[other]-centre[other],0,centre[other]-hi[other])
        extent = math.sqrt(max(0,radius*radius-distance*distance))
        cut_lo = max(lo[axis],centre[axis]-extent)
        cut_hi = min(hi[axis],centre[axis]+extent)
        for a,b in ((lo[axis],cut_lo),(cut_hi,hi[axis])):
            if b-a < .6:
                continue
            rect = [a,lo[1],b-a,hi[1]-lo[1]] if axis==0 else [lo[0],a,hi[0]-lo[0],b-a]
            solid(m,rect,height,kind,lo[2],True,s['parent'],flags=flags,half_cover=s['half_cover'])
        # Remnant only occupies the struck interval, not underneath surviving ends.
        if cut_hi-cut_lo >= .05:
            s['min'][axis],s['max'][axis] = cut_lo,cut_hi
    s['max'][2] = s['min'][2]+(.4 if kind=='tree' else .25)
    s['kind'] = 'stump' if kind=='tree' else 'blast-remains'
    s.update(blocks_movement=False,half_cover=False,flags=0,concealment=False,blast_damage=True)


def _crater(m,cx,cy,r,age):
    ident = 'crater-%03d'%len(m['decorations'])
    m['decorations'].append(dict(kind='crater',id=ident,center=[cx,cy],radius=r,age=age,origin='bombardment'))
    t,dg = r*math.tan(math.pi/8),max(.3,.2*r)
    rims = []
    for k in range(8):
        ang = k*math.pi/4
        ux,uy = math.cos(ang),math.sin(ang)
        if k%2==0:
            hx,hy = (RIM/2,t) if abs(ux)>.5 else (t,RIM/2)
        else:
            hx=hy=dg
        px,py = cx+r*ux,cy+r*uy
        rims.append(solid(m,[px-hx,py-hy,2*hx,2*hy],RIM,'rim',0,False,ident,flags=2,half_cover=True))
    for k in (0,2,4,6):
        ux,uy = round(math.cos(k*math.pi/4)),round(math.sin(k*math.pi/4))
        d=r-RIM/2-.5
        cover(m,rims[k],[cx+ux*d,cy+uy*d,0],[ux,uy],'crater',posture='prone',
              firing_height=.72 if m['kind']=='city2' else 1.0)
