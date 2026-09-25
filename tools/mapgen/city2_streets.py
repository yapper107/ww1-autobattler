"""Street-first city parcels. Metres throughout; the one-metre raster is an
encoding and block measurement, never a tile vocabulary or placement lattice."""
import math
import heapq
from collections import deque

from .village import Contradiction
from .village_curves import tube, rectangles


def smooth(anchors, step=2.4, tension=1):
    """Interpolating cubic curve, sampled by arc length; landmarks remain on it."""
    out = [list(anchors[0])]
    for i in range(len(anchors)-1):
        a, b = anchors[i:i+2]
        before, after = anchors[max(0, i-1)], anchors[min(len(anchors)-1, i+2)]
        n = max(2, math.ceil(math.dist(a, b)/step))
        for k in range(1, n+1):
            t = k/n
            curved=[.5*((2*a[d])+(-before[d]+b[d])*t+
                            (2*before[d]-5*a[d]+4*b[d]-after[d])*t*t+
                            (-before[d]+3*a[d]-3*b[d]+after[d])*t*t*t) for d in (0,1)]
            out.append([a[d]+(b[d]-a[d])*t+tension*(curved[d]-a[d]-(b[d]-a[d])*t) for d in (0,1)])
    return out


def at_x(points, x):
    for a,b in zip(points,points[1:]):
        if a[0] <= x <= b[0]:
            t = (x-a[0])/(b[0]-a[0])
            return [x,a[1]+t*(b[1]-a[1])]
    return list(min(points,key=lambda p:abs(p[0]-x)))


def sample(points, distance):
    for a,b in zip(points,points[1:]):
        length = math.dist(a,b)
        if distance <= length:
            t = distance/length
            return [a[k]+t*(b[k]-a[k]) for k in (0,1)]
        distance -= length
    return list(points[-1])


def polygon_cells(points):
    cells = set()
    for y in range(math.floor(min(p[1] for p in points)),math.ceil(max(p[1] for p in points))):
        py = y+.5
        intersections = []
        for a,b in zip(points,points[1:]+points[:1]):
            if (a[1] <= py < b[1]) or (b[1] <= py < a[1]):
                intersections.append(a[0]+(py-a[1])*(b[0]-a[0])/(b[1]-a[1]))
        for left,right in zip(sorted(intersections)[::2],sorted(intersections)[1::2]):
            cells.update((x,y) for x in range(math.ceil(left-.5),math.ceil(right-.5)))
    return cells


def spine(seed, attempt, stream):
    """The old through road and its market precede the civic reservations."""
    rng = stream(seed, attempt, 'streets')
    # An old through route, widened around the market, bends between older nodes.
    sy = rng.randint(-8,8)
    anchors = [[-170,sy+rng.randint(-19,-9)],[-104,sy+rng.randint(-13,-3)],
               [-38,sy+rng.randint(-7,4)],[28,sy+rng.randint(8,19)],
               [91,sy+rng.randint(10,24)],[170,sy+rng.randint(-2,10)]]
    main = smooth(anchors)
    road=dict(id='street-main',name='Grande Rue',street_type='main',points=main,
              width=rng.randint(9,14),anchors=anchors)
    square=at_x(main,stream(seed,attempt,'market').randint(-12,12))
    x,y=square
    plaza=[[x-23,y-10],[x-12,y-18],[x+16,y-15],[x+25,y-3],[x+19,y+17],[x-14,y+19],[x-25,y+6]]
    return dict(roads=[road],squares=[dict(id='market-square',kind='market_square',
                name='Market square',position=square+[0],polygon=plaza)])


def _crosses(a,b,rect):
    """Open rectangle intersection; travelling along its outside face is legal."""
    x,y,w,h=rect;lo,hi=0.0,1.0
    for axis,left,right in ((0,x+1e-6,x+w-1e-6),(1,y+1e-6,y+h-1e-6)):
        delta=b[axis]-a[axis]
        if abs(delta)<1e-10:
            if not left<a[axis]<right:return False
        else:
            u,v=(left-a[axis])/delta,(right-a[axis])/delta
            lo,hi=max(lo,min(u,v)),min(hi,max(u,v))
            if lo>hi:return False
    return True


def route(anchors,width,sites):
    """Bend secondary streets around reserved civic ground, then smooth safely.

    A tiny visibility graph (four sites) is only used for obstructed segments.
    The extra metre around its corners leaves room to round the resulting bends.
    """
    def expanded(pad):
        return [[x-pad,y-pad,w+2*pad,h+2*pad] for x,y,w,h in (s['reservation'] for s in sites)]
    obstacles=expanded(width/2+1.2)
    def clear(a,b):return not any(_crosses(a,b,r) for r in obstacles)
    if not clear(anchors[0],anchors[0]) or not clear(anchors[-1],anchors[-1]):
        raise Contradiction('reserved civic site blocks a street endpoint')
    # Discretionary control points may fall in a reserved site; junctions may not.
    guides=[list(a) for a in anchors if clear(a,a)]
    corners=sorted({(xx,yy) for x,y,w,h in expanded(width/2+2.2) for xx in (x,x+w) for yy in (y,y+h)
                    if -165<xx<165 and -123<yy<123 and clear((xx,yy),(xx,yy))})
    joined=[guides[0]]
    for a,b in zip(guides,guides[1:]):
        if clear(a,b):joined.append(b);continue
        nodes=[a,b]+[list(p) for p in corners];cost={0:0};parent={};heap=[(0,0)]
        while heap:
            distance,i=heapq.heappop(heap)
            if distance!=cost[i]:continue
            if i==1:break
            for j,p in enumerate(nodes):
                candidate=distance+math.dist(nodes[i],p)
                if candidate<cost.get(j,math.inf) and clear(nodes[i],p):
                    cost[j]=candidate;parent[j]=i;heapq.heappush(heap,(candidate,j))
        if 1 not in cost:raise Contradiction('no street route around civic reservations')
        path=[];i=1
        while i: path.append(nodes[i]);i=parent[i]
        joined.extend(reversed(path))
    clearance=expanded(width/2+1.2)
    for tension in (1,.5,.25,0):
        points=smooth(joined,tension=tension)
        if not any(_crosses(a,b,r) for a,b in zip(points,points[1:]) for r in clearance):
            return points,joined
    raise Contradiction('street curve enters reserved civic ground')


def junction(points,x,width,sites):
    wanted=at_x(points,x);pad=width/2+1.3
    forbidden=[[a-pad,b-pad,w+pad*2,h+pad*2] for a,b,w,h in (s['reservation'] for s in sites)]
    def clear(p):return not any(_crosses(p,p,r) for r in forbidden)
    if clear(wanted):return wanted
    choices=[(math.dist(p,wanted),i,p) for i,p in enumerate(points) if clear(p)]
    if not choices:raise Contradiction('no junction clear of civic sites')
    return list(min(choices)[2])


def network(plan,sites,seed,attempt,stream):
    rng=stream(seed,attempt,'secondary-streets')
    roads=list(plan['roads']);main=roads[0]['points']
    junctions=[]
    for side,name in ((1,'north'),(-1,'south')):
        # Unequal branch intervals, independently drawn on the two sides.
        xs=[rng.randint(-126,-109)]
        while xs[-1] < 83:
            xs.append(xs[-1]+rng.randint(46,78))
        xs=xs[:4]
        backanchors=[[-145,side*rng.randint(67,85)],[-66,side*rng.randint(57,78)],
                     [29,side*rng.randint(67,91)],[143,side*rng.randint(63,82)]]
        backwidth=rng.randint(5,7)
        back,backanchors=route(backanchors,backwidth,sites)
        roads.append(dict(id='street-'+name,name='Rue des Jardins' if side>0 else 'Rue des Ateliers',
                          street_type='side',points=back,width=backwidth,anchors=backanchors))
        for i,x in enumerate(xs):
            width=rng.randint(5,7)
            a=junction(main,x,width,sites)
            b=junction(back,max(-138,min(136,x+rng.choice((-1,1))*rng.randint(7,19))),width,sites)
            mid=[(a[0]+b[0])/2+rng.uniform(-4,4),(a[1]+b[1])/2]
            guides=[a,mid,b]
            if i==1:
                tip=[b[0]+rng.choice((-1,1))*6,b[1]+side*rng.randint(15,23)]
                pad=width/2+1.3
                if not any(_crosses(tip,tip,[xx-pad,yy-pad,w+2*pad,h+2*pad]) for xx,yy,w,h in (s['reservation'] for s in sites)):
                    guides.append(tip)
            ident='branch-%s-%d'%(name,i)
            points,guides=route(guides,width,sites)
            roads.append(dict(id=ident,name='Passage des Tisserands' if i==1 else 'Rue du Faubourg',
                              street_type='side',points=points,width=width,anchors=guides))
            junctions.append(dict(id=ident,kind='crossroads',name='Street junction',position=a+[0]))
    court=at_x(roads[1]['points'],-137)
    x,y=court
    second=[[x-9,y-9],[x+10,y-8],[x+13,y+4],[x+4,y+11],[x-10,y+7]]
    squares=plan['squares']+[dict(id='court-square',kind='second_square',name='Weavers’ court',position=court+[0],polygon=second)]
    # Three-metre rear passages split long blocks, attached at both ends.
    for side,back in ((1,roads[1]),(-1,next(r for r in roads if r['id']=='street-south'))):
        x=rng.randint(-65,-38) if side>0 else rng.randint(48,72)
        a=at_x(main,x);b=at_x(back['points'],x+rng.randint(-8,8))
        points,guides=route([a,[(a[0]+b[0])/2+3,(a[1]+b[1])/2],b],3,sites)
        roads.append(dict(id='alley-%d'%side,name='Venelle',street_type='alley',
                          points=points,width=3,anchors=guides))
    return dict(roads=roads,squares=squares,junctions=junctions)


def raster(roads, squares, pad=0):
    cells=set()
    for r in roads:
        cells.update(tube(r['points'],r['width']+2*pad))
    for square in squares:
        cells.update(polygon_cells(square['polygon']))
    return cells


def blocks(road_cells):
    remaining={(x,y) for y in range(-118,119) for x in range(-150,151)}-road_cells
    out=[]
    while remaining:
        start=min(remaining,key=lambda p:(p[1],p[0]))
        remaining.remove(start);q=deque([start]);cells={start}
        while q:
            x,y=q.popleft()
            for p in ((x-1,y),(x+1,y),(x,y-1),(x,y+1)):
                if p in remaining:
                    remaining.remove(p);cells.add(p);q.append(p)
        if len(cells)<40:
            continue
        out.append(dict(id='block-%03d'%len(out),area=len(cells),rects=rectangles(cells),
                        clipped=any(x in (-150,150) or y in (-118,118) for x,y in cells)))
    return out


def fits(rect, occupied, road_cells, gap=2):
    x,y,w,h=rect
    if x < -148 or y < -115 or x+w > 148 or y+h > 115:
        return False
    if any(x < a+c+gap and x+w > a-gap and y < b+d+gap and y+h > b-gap for a,b,c,d in occupied):
        return False
    return not any((xx,yy) in road_cells for yy in range(math.floor(y-.3),math.ceil(y+h+.3))
                   for xx in range(math.floor(x-.3),math.ceil(x+w+.3)))


def parcels(plan, occupied, seed, attempt, stream):
    """Frontages follow the nearest cardinal wall direction, jogging with the street.
    Adjacent lots share a party wall where their actual depth intervals overlap."""
    road_cells=raster(plan['roads'],plan['squares'],.4)
    lots=[]
    for road in plan['roads']:
        if road['street_type']=='alley':
            continue
        rng=stream(seed,attempt,'frontages',road['id'])
        points=road['points']
        horizontal=abs(points[-1][0]-points[0][0])>=abs(points[-1][1]-points[0][1])
        axis=0 if horizontal else 1
        lo=max(-135 if horizontal else -109,min(p[axis] for p in points)+7)
        hi=min(135 if horizontal else 109,max(p[axis] for p in points)-7)
        for side in (-1,1):
            along=math.ceil(lo)+rng.randint(0,6)
            previous=None
            while along+8 <= hi:
                width=rng.randint(8,15)
                if along+width>hi:break
                near=[p[1-axis] for p in points if along-1 <= p[axis] <= along+width+1]
                if not near:
                    along+=width;continue
                offset=(max(near)+road['width']/2) if side>0 else (min(near)-road['width']/2)
                setback=rng.choice((.5,1,1.5)) if road['street_type']=='main' else rng.choice((2.5,4,6))
                front=math.ceil(offset+setback) if side>0 else math.floor(offset-setback)
                # Small deliberate frontage steps, without exceeding street clearance.
                if previous and abs(front-previous['line'])<1.2:
                    front=previous['line']+side*1.5
                depth=rng.randint(10,17)
                if previous:
                    rear=front+side*depth;old_rear=previous['line']+side*previous['depth']
                    if 0<abs(rear-old_rear)<1.2:
                        # Fill a shallow rear recess by extending the current lot;
                        # otherwise retain at least 1.5 m between rear wall lines.
                        depth+=abs(rear-old_rear) if side*(old_rear-rear)>0 else 1.5-abs(rear-old_rear)
                cross=front if side>0 else front-depth
                rect=[along,cross,width,depth] if horizontal else [cross,along,depth,width]
                facing=('S' if side>0 else 'N') if horizontal else ('W' if side>0 else 'E')
                other=[b['rect'] for b in lots if b is not previous]
                accepted=fits(rect,occupied+other,road_cells,2)
                if previous and not fits(rect,[previous['rect']],set(),-.05):
                    accepted=False
                if accepted:
                    lot=dict(id='parcel-%03d'%len(lots),rect=rect,front=facing,street=road['id'],
                             street_type=road['street_type'],frontage=width,depth=depth,line=front,
                             row='%s:%d'%(road['id'],side),previous=previous['id'] if previous else None)
                    lots.append(lot);previous=lot
                else:previous=None
                along+=width
    if len(lots)<28:
        raise Contradiction('street graph leaves too few viable frontages')
    # Reserve native records for civic wings, gardens, damage and coverage repairs.
    # Keep the main-street stock; the least central peripheral parcels become yards.
    if len(lots)>90:
        keep={p['id'] for p in sorted(lots,key=lambda p:(p['street_type']!='main',
              math.hypot(p['rect'][0]+p['rect'][2]/2,p['rect'][1]+p['rect'][3]/2),p['id']))[:90]}
        lots=[p for p in lots if p['id'] in keep]
        for p in lots:
            if p['previous'] not in keep:p['previous']=None
    return lots
