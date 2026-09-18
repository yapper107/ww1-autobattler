"""Connected trench grammar, following Historic England's Browndown survey.

The military grammar is original, not borrowed from a generic dungeon maze.
Opposing trench networks are separated; each has three traversed lines joined
by four staggered communication routes, with connected dugouts and fire steps.
"""
import random
from .geometry import base, path_rects, rect_contains, solid, cover, round_geometry


def generate(seed=17, damage=.32):
    if not 0 <= damage <= 1:
        raise ValueError('damage must be between 0 and 1')
    rng = random.Random(seed)
    m = base('trenches', seed, 340, 260)
    m['parameters'] = dict(damage=damage, trench_width=4, trench_depth=1.4,
                           minimum_nomansland=44)
    dug = []

    def path(points, kind, team, name=''):
        ident = f"path-{len(m['paths']):03d}"
        m['paths'].append(dict(id=ident, points=points, width=4, kind=kind, team=team, name=name))
        for rect in path_rects(points, 4):
            dug.append(rect)
            m['surfaces'].append(dict(id=f"floor-{len(m['surfaces']):04d}", rect=rect,
                                      z=-1.4, slope=[0, 0], parent=ident))
        return ident

    steps = []
    for team, sign in enumerate([-1, 1]):
        lines = []
        for line, distance in enumerate([30, 89, 132]):
            x = sign * (distance + rng.randint(-3, 3))
            points = [[x, -114]]
            # Crenellations alternate short fire bays and recessed traverses.
            y = -114
            while y < 114:
                bay = min(rng.randint(10, 16), 114-y)
                points.append([x, y+bay])
                if line == 0 and bay >= 9:
                    for slot_y in range(y+2,y+bay-1,3):
                        steps.append((team, sign, x, slot_y))
                y += bay
                if y >= 114:
                    break
                back = x + sign * 6
                points.extend([[back, y], [back, min(y+6, 114)], [x, min(y+6, 114)]])
                y += 6
            ident = path(points, ['front', 'support', 'reserve'][line], team)
            lines.append((x, points, ident))
            m['labels'].append(dict(text=['FIRE LINE', 'SUPPORT', 'RESERVE'][line], position=[x, 123]))

        def line_x(points, y):
            for a, b in zip(points, points[1:]):
                if a[0] == b[0] and min(a[1], b[1]) <= y <= max(a[1], b[1]):
                    return a[0]
            raise ValueError('line junction is outside its trench')

        for idx, y in enumerate([-88, -34, 30, 88]):
            # Different entry heights create doglegs; no uninterrupted enfilade.
            for line in range(2):
                y1 = y + rng.randint(-4, 4)
                y2 = y + rng.choice([-10, 10])
                a = line_x(lines[line][1], y1)
                b = line_x(lines[line+1][1], y2)
                mid = round((a+b)/2)
                path([[a,y1],[mid,y1],[mid,y2],[b,y2]], 'communication', team)
        # Rear dugouts, reached by a real spur and a >=4m mouth.
        for y in [-64, 0, 62]:
            x = line_x(lines[2][1], y)
            end = x + sign*13
            path([[x,y],[end,y]], 'dugout-access', team)
            rect = [end-4, y-5, 8, 10]
            dug.append(rect)
            m['surfaces'].append(dict(id=f"dugout-{team}-{y}", rect=rect, z=-1.4,
                                      slope=[0,0], parent=lines[2][2]))
            m['decorations'].append(dict(kind='dugout', rect=rect, team=team))
        # Two exit ramps per side connect floor to grade; generated as slopes.
        for target_y in [-62, 58]:
            bays=[(a,b) for a,b in zip(lines[0][1],lines[0][1][1:])
                  if a[0]==b[0]==lines[0][0] and abs(b[1]-a[1])>=8]
            y=min((max(min(a[1],b[1])+4,min(max(a[1],b[1])-4,target_y)) for a,b in bays),key=lambda value:abs(value-target_y))
            x = lines[0][0]
            end = x-sign*8
            # The existing four-metre trench ends exactly at the lower ramp
            # boundary. A square-capped exit path would overlap the slope.
            rect = [min(x-sign*2,end), y-2, 6, 4]
            dug.append(rect)
            m['surfaces'].append(dict(id=f'ramp-{team}-{y}', rect=rect, z=-.7,
                                      slope=[-sign*1.4/6,0], parent=lines[0][2]))
            m['links'].append(dict(kind='ramp', team=team, width=4,
                                  from_position=[x-sign*2,y,-1.4], to_position=[end,y,0]))
        front_x = line_x(lines[0][1], 0)
        m['deployment'].append(dict(team=team, position=[front_x,0,-1.4]))
        m['objectives'].append(dict(name=f'Team {team} fire line', team=team, position=[front_x,0,-1.4]))

    # Exact one-metre raster union -> merged solid earth rectangles. Path endpoints
    # and widths are integers, so the raster does not approximate trench boundaries.
    # Terrain volumes are ballistic solids, not artificial movement-blocking walls.
    x0, y0, width, height = map(int, m['bounds'])
    floor = set()
    for rect in dug:
        rx, ry, rw, rh = rect
        for yy in range(round(ry), round(ry+rh)):
            for xx in range(round(rx), round(rx+rw)):
                floor.add((xx,yy))
    active = {}
    earth = []
    for yy in range(y0,y0+height):
        spans=[]
        xx=x0
        while xx<x0+width:
            if (xx,yy) in floor:
                xx+=1
                continue
            start=xx
            while xx<x0+width and (xx,yy) not in floor:
                xx+=1
            spans.append((start,xx))
        current={}
        for span in spans:
            r=active.pop(span, [span[0],yy,span[1]-span[0],0])
            r[3]+=1
            current[span]=r
        earth.extend(active.values())
        active=current
    earth.extend(active.values())
    for rect in earth:
        solid(m,rect,1.4,'earth',-1.4,False)

    for team, sign, x, y in steps:
        # Advisory firing position on the existing floor. No extra height
        # layer: the standing muzzle clears grade at a 1.4m trench depth.
        p=[x-sign*1.25,y,-1.4]
        probe=[x-sign*2.4,y]
        source=next((s['id'] for s in m['solids'] if s['min'][1]+.5<=y<=s['max'][1]-.5 and rect_contains(
            [s['min'][0],s['min'][1],s['max'][0]-s['min'][0],s['max'][1]-s['min'][1]],probe)),None)
        if source:
            cover(m,source,p,[-sign,0],'fire-step',team)

    # Shell marks are deliberately cosmetic; no invented crater protection.
    for _ in range(round(35+damage*100)):
        x,y=rng.uniform(-34,34),rng.uniform(-118,118)
        m['decorations'].append(dict(kind='shell-mark',center=[x,y],radius=rng.uniform(1,3.3)))
    # Wire is an annotation in this prototype, with conspicuous assault gaps.
    for sign in [-1,1]:
        for ya,yb in [(-108,-72),(-50,43),(71,109)]:
            m['decorations'].append(dict(kind='wire',points=[[sign*30,ya],[sign*30,yb]]))
    m['labels'].append(dict(text='NO MAN’S LAND',position=[0,0]))
    return round_geometry(m)
