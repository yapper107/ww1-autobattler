"""Geometric checks, not a claim of tactical balance or native certification."""
from collections import deque
from math import ceil, floor, hypot, sqrt
from .geometry import segment_box, rect_contains


def walkable(m,p):
    x,y,w,h=m['bounds']
    if not x+.6<=p[0]<=x+w-.6 or not y+.6<=p[1]<=y+h-.6:
        return False
    if abs(p[2])>.02 and not any(rect_contains(s['rect'],p) and abs(
        s['z']+(p[0]-s['rect'][0]-s['rect'][2]/2)*s['slope'][0]+
        (p[1]-s['rect'][1]-s['rect'][3]/2)*s['slope'][1]-p[2])<.03 for s in m['surfaces']):
        return False
    return not any(s['blocks_movement'] and s['min'][2]<p[2]+1.84 and
        s['max'][2]>p[2]+.02 and s['min'][0]-.48<=p[0]<=s['max'][0]+.48 and
        s['min'][1]-.48<=p[1]<=s['max'][1]+.48 for s in m['solids'])


def navigation(m, team=None):
    """Integer-metre nodes, 0.48m blocking-face clearance (native convention)."""
    x,y,w,h=m['bounds']
    nodes={(xx,yy) for yy in range(ceil(y+.6),floor(y+h-.6)+1)
           for xx in range(ceil(x+.6),floor(x+w-.6)+1)} if m['kind']=='city' else set()
    if m['kind']=='trenches':
        for s in m['surfaces']:
            if s['z'] != -1.4:
                continue
            rx,ry,rw,rh=s['rect']
            for yy in range(ceil(ry+.01),ceil(ry+rh)):
                for xx in range(ceil(rx+.01),ceil(rx+rw)):
                    if team is None or (xx<0)==(team==0):
                        nodes.add((xx,yy))
    else:
        for box in m['solids']:
            if not box['blocks_movement'] or box['min'][2]>=1.84:
                continue
            for yy in range(ceil(box['min'][1]-.48),floor(box['max'][1]+.48)+1):
                for xx in range(ceil(box['min'][0]-.48),floor(box['max'][0]+.48)+1):
                    nodes.discard((xx,yy))
    return nodes


def flood(nodes, start):
    if start not in nodes:
        return set()
    seen={start}
    queue=deque([start])
    while queue:
        x,y=queue.popleft()
        for p in ((x-1,y),(x+1,y),(x,y-1),(x,y+1)):
            if p in nodes and p not in seen:
                seen.add(p)
                queue.append(p)
    return seen


def near_node(nodes, p):
    x,y=round(p[0]),round(p[1])
    candidates=[(xx,yy) for yy in range(y-1,y+2) for xx in range(x-1,x+2)
                if (xx,yy) in nodes and hypot(xx-p[0],yy-p[1])<=1.5]
    return min(candidates,key=lambda q:hypot(q[0]-p[0],q[1]-p[1])) if candidates else None


def cover_protected(c, source):
    """Match native shoulder/torso/head samples and its 3m local-cover limit."""
    x,y,z=c['shelter']; nx,ny=c['facing']; distance=c['probe_distance']
    threat=[x+nx*distance,y+ny*distance,1.7]
    for shoulder in (-.4,0,.4):
        for fraction in (.5,.96):
            body=[x-ny*shoulder,y+nx*shoulder,z+.9*fraction]
            length=sqrt(sum((b-a)**2 for a,b in zip(body,threat)))
            t=min(1,3/length)
            end=[a+(b-a)*t for a,b in zip(body,threat)]
            if not segment_box(body,end,source):
                return False
    return True


def validate(m):
    errors=[]
    ids=[s['id'] for s in m['solids']]
    if len(set(ids))!=len(ids):
        errors.append('duplicate solid IDs')
    solids={s['id']:s for s in m['solids']}
    x,y,w,h=m['bounds']
    for s in m['solids']:
        if any(a>=b for a,b in zip(s['min'],s['max'])):
            errors.append(f"degenerate solid {s['id']}")
        if s['min'][0]<x or s['min'][1]<y or s['max'][0]>x+w or s['max'][1]>y+h:
            errors.append(f"out-of-bounds solid {s['id']}")
    nodes=navigation(m)
    components=[]
    remaining=set(nodes)
    while remaining:
        reached=flood(remaining,min(remaining))
        components.append(reached)
        remaining-=reached
    expected=1 if m['kind']=='city' else 2
    if len(components)!=expected:
        errors.append(f'expected {expected} navigation components, got {len(components)}')
    for d in m['deployment']:
        p=near_node(nodes,d['position'])
        if not p or not walkable(m,d['position']):
            errors.append('deployment is blocked')
            continue
        reached=next(c for c in components if p in c)
        goals=[g for g in m['objectives'] if m['kind']=='city' or g['team']==d['team']]
        for goal in goals:
            if near_node(nodes,goal['position']) not in reached:
                errors.append('deployment cannot reach its objective')
    for b in m['buildings']:
        center=[b['rect'][0]+b['rect'][2]/2,b['rect'][1]+b['rect'][3]/2]
        if near_node(nodes,center) is None:
            errors.append(f"building interior inaccessible: {b['id']}")
        for door in b['doors']:
            if door['width']<2 or not walkable(m,door['center']) or near_node(nodes,door['center']) is None:
                errors.append(f"blocked doorway: {b['id']}")
    protected=0
    for c in m['cover']:
        s=solids.get(c['source'])
        if s is None:
            errors.append(f"missing cover source {c['id']}")
            continue
        if not walkable(m,c['shelter']) or not walkable(m,c['fire']) or near_node(nodes,c['shelter']) is None:
            errors.append(f"unreachable cover {c['id']}")
        if not cover_protected(c,s):
            errors.append(f"unprotected body samples {c['id']}")
        else:
            protected+=1
        # Local standing muzzle line must clear the actual source, not just
        # have a cover tag. Distant geometry can still terminate a firing lane.
        a=c['fire'].copy(); a[2]+=c['firing_height']
        b=[a[0]+c['facing'][0]*4,a[1]+c['facing'][1]*4,a[2]]
        if any(segment_box(a,b,other) for other in m['solids'] if other['min'][2]<=a[2]<=other['max'][2]):
            errors.append(f"blocked firing aperture {c['id']}")
    if m['kind']=='trenches':
        for c in components:
            if any(p[0]<0 for p in c) and any(p[0]>0 for p in c):
                errors.append('opposing trenches joined underground')
        for link in m['links']:
            a,b=link['from_position'],link['to_position']
            if abs(a[2]+1.4)>.001 or abs(b[2])>.001 or hypot(a[0]-b[0],a[1]-b[1])!=6:
                errors.append('invalid ramp endpoints')
    budget=3200 if m['kind']=='city' else 800
    if len(m['solids'])>budget:
        errors.append('solid geometry budget exceeded')
    # Existing spawns are intentionally not silently relocated or enabled.
    legacy=[]
    for team in range(2):
        sign=1 if team==0 else -1
        for squad in range(4):
            for slot in range(8):
                p=([-sign*(140+(slot//4)*2),sign*((squad-1.5)*48+(slot%4-1.5)*3.5),0]
                   if m['kind']=='city' else [-sign*(82+slot*1.3),[-44,0,44,58][squad],-1.4])
                legacy.append(walkable(m,p))
    return dict(passed=not errors,errors=errors,buildings=len(m['buildings']),
                solids=len(m['solids']),cover_positions=len(m['cover']),
                protected_positions=protected,navigation_components=len(components),
                walkable_nodes=len(nodes),doors=sum(len(b['doors']) for b in m['buildings']),
                legacy_spawn_walkable=sum(legacy),legacy_spawn_count=len(legacy),
                scope='offline geometry; native pathfinding and battle balance not certified')
