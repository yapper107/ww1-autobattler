"""City building assemblies from the proven rectangular stair/window shell.

A connected wing owns a separate native B footprint and its own floors. The
logical estate joins those footprints without a phantom floor over its courtyard.
"""
import math

from .geometry import solid
from .shells import Frame, shell, default_openings
from .village import Contradiction
from .village_damage import exposure
from .city2_streets import fits, raster

PART_BUDGET=120


def openings(frame, floors, shop=False):
    W,D=frame.W,frame.D
    ground=[(1.3,1.0,'window'),(W/2,2.8 if shop else 2.4,'door'),(W-1.3,1.0,'window')]
    upper=[(W*.2,1.3,'window'),(W*.5,1.3,'window'),(W*.8,1.3,'window')]
    result=[dict(front=ground,back=list(ground),left=[],right=[])]
    if floors==2:
        result.append(dict(front=upper,back=list(upper),left=[],right=[]))
    return result


def civic_sites(plan, reservations=()):
    forbidden=raster(plan['roads'],plan['squares'],2.3)
    occupied=list(reservations);sites=[]
    x,y=plan['squares'][0]['position'][:2]
    for use,target,w,h in (('church',(x-9,y+24),17,21),('mairie',(x+29,y-7),13,19),
                           ('factory',(80,83),42,29),('school',(-107,-108),31,23)):
        choices=sorted((dx*dx+dy*dy,dy,dx) for dy in range(-24,25,2) for dx in range(-24,25,2))
        rect=None
        for _,dy,dx in choices:
            r=[round(target[0])+dx,round(target[1])+dy,w,h]
            reserve=([r[0]-3,r[1]-4,w+6,h+7] if use=='church' else
                     [r[0],r[1],w+4,h] if use=='factory' else r)
            if fits(reserve,occupied,forbidden,4):
                rect=r;break
        if rect is None:
            raise Contradiction('no clear civic site for '+use)
        sites.append(dict(use=use,rect=rect,reservation=reserve));occupied.append(reserve)
    return sites


def _estate(m, use):
    e=dict(id='estate-%03d'%len(m['estates']),use=use,parts=[])
    m['estates'].append(e)
    return e


def _build(m, frame, rng, use, floors, estate, street_type, ruined=False, opening=None, omitted=None):
    b=shell(m,frame,rng,use,floors,ruined,openings=opening,wall_omit=omitted)
    b.update(estate=estate['id'],street_type=street_type)
    estate['parts'].append(b['id'])
    return b


def borrowed_wall(b,side,owner):
    """The neighbour stops at the inner face of the wall owned by `owner`.

    Keep the shell frame for roofs and opening positions; the smaller native
    footprint governs building membership. Wall boxes are never duplicated.
    """
    r=b.setdefault('native_rect',list(b['rect']))
    b.setdefault('party_walls',[]).append(dict(side=side,owner=owner['id']))
    axis=0 if side in ('W','E') else 1
    if side in ('W','S'):r[axis]+=.25
    r[axis+2]-=.25


def clip_slabs(m):
    """No upper slab may overhang its owning footprint onto another wing."""
    bounds={b['id']:b.get('native_rect',b['rect']) for b in m['buildings']}
    for s in m['solids']:
        if s['kind']!='slab':continue
        x,y,w,h=bounds[s['parent']]
        s['min'][:2]=[max(s['min'][0],x),max(s['min'][1],y)]
        s['max'][:2]=[min(s['max'][0],x+w),min(s['max'][1],y+h)]


def civic(m, sites, seed, attempt, stream):
    for site in sites:
        use=site['use'];x,y,w,h=site['rect'];e=_estate(m,use)
        rng=stream(seed,attempt,'civic',use)
        if use=='factory':
            # Warehouse head and two workshops form a U around a real open yard.
            f=Frame([x,y+h-11,w,11],'S')
            op=default_openings(f.W,f.D,2,'factory')
            op[0]['front']=[(5,2.4,'door'),(w/2,3.2,'door'),(w-5,2.4,'door')]
            head=_build(m,f,rng,use,2,e,'industrial',opening=op)
            for wx in (x,x+w-10):
                wing=Frame([wx,y,10,h-11],'N')
                wo=default_openings(10,h-11,1,'house')
                wo[0]['front']=[(5,2.4,'door')]
                part=_build(m,wing,rng,'workshop',1,e,'industrial',opening=wo,
                            omitted={(0,'front'):[(0,10)]})
                borrowed_wall(part,'N',head)
            yard=[x+10,y,w-20,h-11]
            centre=[x+w/2,y+(h-11)/2]
            m['yards'].append(dict(id='factory-yard',use='farmyard',rect=yard,centre=centre,area=yard[2]*yard[3]))
            for xx in (x+10,x+w/2+2):solid(m,[xx,y-.5,w/2-12,.5],1.9,'garden-wall')
            solid(m,[x+w+1,y+h-5,2.5,2.5],13,'chimney',parent=e['id'],half_cover=False)
            m['landmarks']['factory']=dict(id='factory-yard',kind='factory_yard',name='Factory yard',position=centre+[0])
        elif use=='school':
            f=Frame([x,y,w,11],'N')
            op=default_openings(f.W,f.D,2,'school')
            op[0]['front']=[(4,2.4,'door'),(w/2,2.4,'door'),(w-4,2.4,'door')]
            head=_build(m,f,rng,use,2,e,'civic',opening=op)
            for wx in (x,x+w-8):
                wing=Frame([wx,y+11,8,h-11],'S')
                wo=default_openings(8,h-11,1,'house');wo[0]['front']=[(4,2.4,'door')]
                part=_build(m,wing,rng,'classroom',1,e,'civic',opening=wo,omitted={(0,'front'):[(0,8)]})
                borrowed_wall(part,'S',head)
            m['yards'].append(dict(id='school-court',use='courtyard',rect=[x+8,y+11,w-16,h-11]))
        elif use=='church':
            nave=Frame([x,y,12,h],'S')
            no=default_openings(12,h,1,'church')
            no[0]['right']=[(4,1.5,'window'),(12,2.4,'door'),(18,1.5,'window')]
            no.append(default_openings(12,h,2,'house')[1])
            head=_build(m,nave,rng,'church',2,e,'square',opening=no)
            # Sacristy connects through the nave's right wall by a 2.4 m door.
            wing=Frame([x+12,y+8,w-12,8],'W')
            op=[dict(front=[(4,2.4,'door')],back=[(4,2.4,'door')],left=[],right=[])]
            part=_build(m,wing,rng,'sacristy',1,e,'square',opening=op,omitted={(0,'front'):[(0,8)]})
            borrowed_wall(part,'W',head)
            solid(m,[x+3,y+h-6,6,6],13,'tower',parent=e['id'],half_cover=False)
            for xx,width in ((x-2,6),(x+9,w-7)):
                solid(m,[xx,y-3,width,.5],1.9,'garden-wall')
            for r in ([x-2,y-3,.5,h+5],[x+w+1.5,y-3,.5,h+5],[x-2,y+h+2,w+4,.5]):
                solid(m,r,1.9,'garden-wall')
            m['yards'].append(dict(id='churchyard',use='churchyard',rect=[x-2,y-3,w+4,h+5]))
        else:
            _build(m,Frame(site['rect'],'W'),rng,use,2,e,'square')
        m['labels'].append(dict(text=dict(church='ÉGLISE',mairie='MAIRIE',school='ÉCOLE',factory='MANUFACTURE')[use],
                               position=[x+w/2,y+h/2]))


def houses(m, lots, seed, attempt, stream, history, demoted):
    rng=stream(seed,attempt,'storeys')
    order=sorted(lots,key=lambda p:(p['street_type']!='main',abs(p['rect'][0]+p['rect'][2]/2),p['id']))
    two={p['id'] for p in order[:math.floor(.4*len(lots))]}
    built={}
    for lot in lots:
        rng=stream(seed,attempt,'house',lot['id'])
        frame=Frame(lot['rect'],lot['front']);e=_estate(m,'house')
        degree=exposure(history,frame.p(frame.W/2,frame.D/2))
        ident='building-%03d'%len(m['buildings'])
        floors=2 if lot['id'] in two and ident not in demoted else 1
        ruined=floors==1 and degree>.35 and rng.random()<degree*.55
        op=openings(frame,floors,lot['street_type']=='main')
        omit={}
        prev=built.get(lot['previous'])
        if prev:
            a=prev['rect'];r=lot['rect']
            # World shared side, transformed into this shell's local side.
            horizontal=lot['front'] in ('S','N')
            lo=max(a[1],r[1]) if horizontal else max(a[0],r[0])
            hi=min(a[1]+a[3],r[1]+r[3]) if horizontal else min(a[0]+a[2],r[0]+r[2])
            side='left' if lot['front'] in ('S','E') else 'right'
            start=(lo-r[1] if lot['front']=='S' else r[1]+r[3]-hi) if horizontal else (lo-r[0] if lot['front']=='W' else r[0]+r[2]-hi)
            if hi>lo:
                for floor in range(min(floors,prev['floors'])):
                    omit[(floor,side)]=[(start,start+hi-lo)]
                e['party_with']=prev['estate']
        b=_build(m,frame,rng,'house',floors,e,lot['street_type'],ruined,op,omit)
        if prev and hi>lo:borrowed_wall(b,'W' if horizontal else 'S',prev)
        b.update(parcel=lot['id'],role='shop' if lot['street_type']=='main' else 'house',damage_exposure=degree)
        built[lot['id']]=b
        if ruined:
            # Breaches and low rubble remain physical and own stable geometry IDs.
            for s in m['solids']:
                if s['parent']==b['id'] and s['kind']=='wall' and rng.random()<.55:
                    s['max'][2]=rng.choice((.65,.9,1.15));s['kind']='rubble';s['half_cover']=True
            for k in range(3):
                u=rng.uniform(2,frame.W-2);v=rng.uniform(3,frame.D-3)
                solid(m,frame.rect(u,v,1.5,1.5),rng.choice((.7,.95)),'rubble',parent=b['id'],half_cover=True)
    return built


def rear_wings(m,lots,built,plan,sites,seed,attempt,stream):
    forbidden=raster(plan['roads'],plan['squares'],.7)
    reserved=[s['reservation'] for s in sites]+[b['rect'] for b in m['buildings']]
    candidates=[]
    for lot in lots:
        b=built[lot['id']];rng=stream(seed,attempt,'rear-wing',lot['id'])
        if rng.random()>.35 or b['ruined']:continue
        frame=Frame(b['rect'],b['front']);width=frame.W/2+2;depth=rng.randint(5,9)
        rect=frame.rect(frame.W-width,frame.D,width,depth)
        candidates.append((width*depth,lot['id'],rect,lot,rng))
    dropped=[]
    # Keep the largest useful wings first. Optional small wings give way before
    # any required civic part or main-street house approaches the native cap.
    for _,ident,rect,lot,rng in sorted(candidates,key=lambda c:(-c[0],c[1])):
        b=built[ident];frame=Frame(b['rect'],b['front'])
        others=[r for r in reserved if r!=b['rect']]
        if not fits(rect,others,forbidden,2):continue
        if len(m['buildings'])>=PART_BUDGET:
            dropped.append(ident);continue
        # The existing rear door lies two metres inside the wing's left edge.
        # Omit the wing's duplicate front wall; the house's rear wall is shared.
        f=Frame(rect,b['front']);e=next(e for e in m['estates'] if e['id']==b['estate'])
        width,depth=f.W,f.D
        wo=[dict(front=[],back=[(width/2,2.4,'door')],left=[],right=[(depth/2,1.3,'window')])]
        wing=_build(m,f,rng,'rear-wing',1,e,b['street_type'],opening=wo,omitted={(0,'front'):[(0,width)]})
        borrowed_wall(wing,b['front'],b)
        wing['role']='workroom';reserved.append(rect)
    m['part_budget']=dict(limit=PART_BUDGET,parts=len(m['buildings']),dropped_small_wings=dropped)
    return reserved


def yards(m,lots,built,reserved,plan,seed,attempt,stream):
    forbidden=raster(plan['roads'],plan['squares'],.6)
    for lot in lots:
        b=built[lot['id']];frame=Frame(b['rect'],b['front']);rng=stream(seed,attempt,'backyard',lot['id'])
        r=frame.rect(1,frame.D+2,frame.W-2,5)
        if not fits(r,reserved,forbidden,1):continue
        m['yards'].append(dict(id='yard-'+lot['id'],use='garden' if rng.random()<.3 else 'backyard',rect=r))
        for u,w in ((1,max(1,frame.W/2-2.5)),(frame.W/2+1.5,max(1,frame.W/2-2.5))):
            solid(m,frame.rect(u,frame.D+7,w,.5),rng.choice((1.15,1.9)),'garden-wall')
        if rng.random()<.4:
            solid(m,frame.rect(1,frame.D+2,.7,3),1.8,'hedge',flags=1,half_cover=False)
        if rng.random()<.55:
            solid(m,frame.rect(frame.W-3,frame.D+3,2,2),2.2,'shed',half_cover=False)
