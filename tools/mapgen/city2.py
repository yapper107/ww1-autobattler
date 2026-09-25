"""A separate ARMYMAP 2 city family: streets -> civic sites -> frontage parcels
-> assembled buildings -> uneven bombardment -> all-objective support validation.
No legacy Town tiles, village WFC cells, simulator extensions or global RNG state.
"""
import copy
import math
import random
import time

from .geometry import base, round_geometry
from .kernel import Kernel
from .village import Contradiction, DeadlineExceeded, GenerationFailed, _prune_covers, _spawns
from .village_damage import pattern, bombard
from .village_objectives import select
from .city2_streets import spine, network, raster, blocks, parcels, polygon_cells
from .city2_buildings import civic_sites, civic, houses, rear_wings, yards, clip_slabs
from .village_curves import rectangles

MAX_ATTEMPTS=12
SOLID_BUDGET=4500


def stream(seed,*parts):
    return random.Random('city2|'+'|'.join(str(p) for p in (seed,)+parts))


def _check(deadline):
    if deadline is not None and time.monotonic()>deadline:
        raise DeadlineExceeded('city2 generation deadline exceeded; no map was written')


def compose(seed,attempt,damage,plan,sites,lots,demoted=frozenset()):
    m=base('city2',seed)
    m.update(schema='army-map/2',generator_version=2,format_version=2,estates=[],landmarks={},cells=[],
             roads=plan['roads'],blocks=plan['blocks'],parcels=lots,civic_sites=sites,parameters=dict(damage=damage))
    square=plan['squares'][0]
    m['focal_point']=dict(name=square['name'],position=square['position'])
    for s in plan['squares']:
        parts=rectangles(polygon_cells(s['polygon']))
        x=min(p[0] for p in s['polygon']);y=min(p[1] for p in s['polygon'])
        w=max(p[0] for p in s['polygon'])-x;h=max(p[1] for p in s['polygon'])-y
        m['yards'].append(dict(id=s['id'],use='square',rect=[x,y,w,h],pieces=parts,
                               centre=s['position'][:2],area=sum(r[2]*r[3] for r in parts),polygon=s['polygon']))
        m['labels'].append(dict(text='PLACE DU MARCHÉ' if s is square else 'COUR DES TISSERANDS',position=s['position'][:2]))
    civic(m,sites,seed,attempt,stream)
    m['objectives']=select(m,[[dict(kv for kv in square.items() if kv[0]!='polygon')],
                             [m['landmarks']['factory']],plan['junctions'],
                             [dict(kv for kv in plan['squares'][1].items() if kv[0]!='polygon')]])
    history=pattern(seed,attempt,square['position'][:2],damage,stream)
    # Dense city blocks leave less open impact ground than farm fields; retain
    # the same asymmetric field and complete the entire declared impact budget.
    history['target']=round(history['target']*.7)
    m['bombardment']=history
    built=houses(m,lots,seed,attempt,stream,history,demoted)
    reserved=rear_wings(m,lots,built,plan,sites,seed,attempt,stream)
    clip_slabs(m)
    yards(m,lots,built,reserved,plan,seed,attempt,stream)
    bombard(m,seed,attempt,history,stream)
    m['deployment']=[dict(team=0,position=[-161,plan['roads'][0]['points'][0][1],0]),
                     dict(team=1,position=[161,plan['roads'][0]['points'][-1][1],0])]
    m=round_geometry(m)
    K=Kernel(m)
    _prune_covers(m,K)
    _spawns(m,K)
    m['look']=look_measures(m)
    return m


def look_measures(m):
    areas=[b['area'] for b in m['blocks']]
    mean=sum(areas)/len(areas) if areas else 0
    cv=math.sqrt(sum((a-mean)**2 for a in areas)/len(areas))/mean if mean else 0
    street_length=bent=0.0;widths={}
    for road in m['roads']:
        p=road['points']
        length=sum(math.dist(a,b) for a,b in zip(p,p[1:]))
        key=str(road['width']);widths[key]=widths.get(key,0)+length
        for i,(a,b) in enumerate(zip(p,p[1:])):
            length=math.dist(a,b);street_length+=length
            lo,hi=p[max(0,i-4)],p[min(len(p)-1,i+5)]
            heading=math.atan2(b[1]-a[1],b[0]-a[0])
            before=math.atan2(a[1]-lo[1],a[0]-lo[0]) if a!=lo else heading
            after=math.atan2(hi[1]-b[1],hi[0]-b[0]) if b!=hi else heading
            angle=abs(math.atan2(math.sin(after-before),math.cos(after-before)))
            # Bends: heading changes >3 degrees across a ~20 m neighbourhood.
            if angle>math.radians(3):bent+=length
    by_id={p['id']:p for p in m['parcels']};jogs=0
    for p in m['parcels']:
        prev=by_id.get(p['previous'])
        if prev and abs(p['line']-prev['line'])>=.5:jogs+=1
    frontage=sum(p['frontage'] for p in m['parcels'])
    shapes=0;building={b['id']:b for b in m['buildings']}
    for estate in m['estates']:
        rs=[building[i]['rect'] for i in estate['parts']]
        x=min(r[0] for r in rs);y=min(r[1] for r in rs)
        width=max(r[0]+r[2] for r in rs)-x;height=max(r[1]+r[3] for r in rs)-y
        if sum(r[2]*r[3] for r in rs)<width*height-.01:shapes+=1
    counts={}
    for b in m['buildings']:
        key=b['street_type'];values=counts.setdefault(key,[0,0]);values[0]+=1;values[1]+=b['floors']==2
    return dict(block_area_cv=round(cv,4),block_count=len(areas),
                street_bend_share=round(bent/street_length,4),street_length_m=round(street_length,2),
                frontage_jogs_per_100m=round(100*jogs/frontage,3),frontage_jogs=jogs,
                nonrectangular_footprint_share=round(shapes/len(m['estates']),4),
                street_width_histogram_m={k:round(v,2) for k,v in sorted(widths.items(),key=lambda kv:float(kv[0]))},
                two_storey_by_street={k:dict(parts=n,two_storey=t,share=round(t/n,4)) for k,(n,t) in sorted(counts.items())})


def generate(seed=17,damage=.32,deadline=None,analyse=True,max_attempts=MAX_ATTEMPTS,_blocked=None):
    if not 0<=damage<=1:raise ValueError('damage must be between 0 and 1')
    from .support import analyse_and_repair
    history=[]
    for attempt in range(max_attempts):
        _check(deadline);started=time.perf_counter();record=dict(attempt=attempt);history.append(record)
        try:
            plan=spine(seed,attempt,stream)
            sites=civic_sites(plan,_blocked or ())
            plan=network(plan,sites,seed,attempt,stream)
            lots=parcels(plan,[s['reservation'] for s in sites],seed,attempt,stream)
            plan['blocks']=blocks(raster(plan['roads'],plan['squares']))
            # Repair rounds normally add cover to the same composition. Keep an
            # untouched base per storey selection; every caller gets its own copy
            # so repairs and reports cannot leak back into a later rebuild.
            compositions={}
            def rebuild(demoted):
                if demoted not in compositions:
                    compositions[demoted]=compose(seed,attempt,damage,plan,sites,lots,demoted)
                return copy.deepcopy(compositions[demoted])
            m=rebuild(frozenset());_check(deadline)
            if analyse:
                m,report=analyse_and_repair(m,rebuild,seed,attempt,deadline)
                m['validation']=report
                record.update(result='passed' if report['passed'] else '; '.join(report['errors'][:8]),
                              seconds=round(time.perf_counter()-started,3),objective_count=len(m['objectives']),
                              supportable_share=report['supportable_share'],repairs=report['repairs'],repair_rounds=report['repair_rounds'])
                if not report['passed']:continue
            else:record.update(result='unvalidated',seconds=round(time.perf_counter()-started,3))
            m['generation']=dict(attempt=attempt,attempts=len(history),history=history,seconds=round(sum(h.get('seconds',0) for h in history),3))
            return m
        except Contradiction as error:
            record.update(result='contradiction: '+str(error),seconds=round(time.perf_counter()-started,3))
        except DeadlineExceeded as error:
            record.update(result='deadline',seconds=round(time.perf_counter()-started,3))
            error.history=history
            raise
    raise GenerationFailed('city2 exhausted %d attempts: %s'%(max_attempts,history[-1]['result']),history)
