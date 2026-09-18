"""Lossless native geometry exchange plus explicit 64-soldier deployment."""
import math


def sample_path(points,distance):
    for a,b in zip(points,points[1:]):
        length=math.dist(a,b)
        if distance<=length:
            return [a[i]+(b[i]-a[i])*distance/length for i in range(2)]+[-1.4]
        distance-=length
    return list(points[-1])+[-1.4]


def export(m):
    lines=[]
    def row(*values):
        lines.append(' '.join(format(v,'.7g') if isinstance(v,float) else str(v) for v in values))
    row('ARMYMAP',1,m['kind'],m['seed'])
    row('BOUNDS',m['bounds'][2]/2,m['bounds'][3]/2,m['ground_base'])
    source_ids={s['id']:s['geometry_id'] for s in m['solids']}
    next_id=max(source_ids.values())+1
    for s in m['solids']:
        a,b=s['min'],s['max']
        row('O',s['geometry_id'],(a[0]+b[0])/2,(a[1]+b[1])/2,a[2],
            (b[0]-a[0])/2,(b[1]-a[1])/2,b[2]-a[2],int(s['building']),int(s['half_cover']),int(s['blocks_movement']))
    surfaces={}
    # Slopes first: at a shared endpoint both heights match, while points just
    # inside the ramp cannot be swallowed by the flat surface's tolerance.
    for s in sorted(m['surfaces'],key=lambda s:s['slope']==[0,0]):
        x,y,w,h=s['rect']; sx,sy=s['slope']
        sid=next_id;next_id+=1;surfaces[s['id']]=sid
        row('S',sid,x+w/2,y+h/2,s['z'],w/2,h/2,sx,sy)
        if sx or sy:
            # Native bullet collision uses 24 physical treads below the slope.
            for i in range(24):
                xx=x+(i+.5)*w/24
                height=s['z']+(xx-x-w/2)*sx-m['ground_base']
                row('O',next_id,xx,y+h/2,m['ground_base'],w/48,h/2,height,0,0,0)
                next_id+=1
    for link in m['links']:
        a,b=link['from_position'],link['to_position']
        surface=next(s for s in m['surfaces'] if (s['slope'][0] or s['slope'][1]) and
                     abs(s['rect'][1]+s['rect'][3]/2-a[1])<.001 and
                     abs(s['rect'][0]+s['rect'][2]/2-(a[0]+b[0])/2)<.001)
        row('L',surfaces[surface['id']],*a,*b)
    for i,c in enumerate(m['cover']):
        # High ID namespace avoids the native obstacle*16+slot cover IDs.
        # Ground-floor apertures use ordinary cover routing. Native window=true
        # requires the stock-building Window task and excludes ordinary searches.
        row('C',1000000+i,source_ids[c['source']],*c['shelter'],*c['fire'],*c['facing'],1,0)
    for team in range(2):
        sign=-1 if team==0 else 1
        reserve=next((p for p in m['paths'] if p['team']==team and p['kind']=='front'),None)
        length=sum(math.dist(a,b) for a,b in zip(reserve['points'],reserve['points'][1:])) if reserve else 0
        road=next((p['points'][0][0] for p in m['roads'] if p['id']=='road-v2'),0)
        for q in range(4):
            lane=(-1.5+q)*52
            for slot in range(8):
                p=(sample_path(reserve['points'],length*(q+.5)/4+(slot-3.5)*3) if reserve else
                   [sign*(160+4*(slot//4)),lane+(slot%4-1.5)*3,0])
                goal=[0 if reserve else road,lane*.7,0]
                row('U',team*32+q*8+slot,*p,*goal)
    def decor(rect,z,thickness,kind):
        x,y,w,h=rect;row('D',kind,x+w/2,y+h/2,z,w/2,h/2,thickness/2)
    for road in m['roads']:
        a,b=road['points'];w=road['width']
        decor([min(a[0],b[0])-w/2,min(a[1],b[1])-w/2,abs(b[0]-a[0])+w,abs(b[1]-a[1])+w],.015,.025,0)
    for yard in m['yards']:decor(yard['rect'],.018,.025,1)
    for b in m['buildings']:
        decor(b['rect'],.03,.04,4 if b['ruined'] else 2)
        if not b['ruined']:decor(b['rect'],3.7,.3,3)
    row('END')
    return '\n'.join(lines)+'\n'
