"""SVG cartography drawn exclusively from the exported map geometry."""
from html import escape
import random


def svg(m):
    if m['kind'] in ('village','city2'):
        return village_svg(m)
    city=m['kind']=='city'
    seed=m['seed']; rng=random.Random(seed+8191)
    out=[]
    def add(s): out.append(s)
    def rect(r, fill, stroke='none', sw=.2, extra=''):
        x,y,w,h=r
        add(f'<rect x="{x}" y="{y}" width="{w}" height="{h}" fill="{fill}" stroke="{stroke}" stroke-width="{sw}" {extra}/>')
    def line(points,stroke,width,extra=''):
        pts=' '.join(f'{p[0]},{p[1]}' for p in points)
        add(f'<polyline points="{pts}" fill="none" stroke="{stroke}" stroke-width="{width}" {extra}/>')
    title='Fractured Works' if city else 'The Trenchworks'
    sub='A mill town built around streets, courts and working yards' if city else 'Two defensive systems. Three lines. Connected under cover.'
    add(f'''<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 1300" role="img" aria-label="{title}, generated map seed {seed}">
<title>{title} — seed {seed}</title>
<defs>
 <pattern id="paving" width="3" height="2" patternUnits="userSpaceOnUse"><rect width="3" height="2" fill="#b7b5a8"/><path d="M0 0H3M0 2H3M0 0V2M1.5 0V2" stroke="#a6a89e" stroke-width=".12"/></pattern>
 <pattern id="rubble" width="3.4" height="3.4" patternUnits="userSpaceOnUse"><rect width="3.4" height="3.4" fill="#c5b298"/><path d="M.3 .3l1 .5-.4 .7zM2 2l.8 .2-.2 .6z" fill="#9c8d7b"/></pattern>
 <pattern id="earth" width="7" height="7" patternUnits="userSpaceOnUse"><rect width="7" height="7" fill="#b6b59c"/><path d="M1 2h.5M4 5h1M6 1h.5" stroke="#888e77" stroke-width=".2"/></pattern>
</defs>
<rect width="1440" height="1300" fill="#eeeade"/>
<text x="40" y="37" font-family="Arial,sans-serif" font-size="13" letter-spacing="3" fill="#6b7368">FIELD ATLAS / GENERATOR STUDY 01</text>
<text x="38" y="88" font-family="Georgia,serif" font-size="45" fill="#283b37">{title}</text>
<text x="41" y="120" font-family="Arial,sans-serif" font-size="16" fill="#65736b">{sub}</text>
<text x="1396" y="77" text-anchor="end" font-family="monospace" font-size="15" fill="#344d45">SEED {seed:06d}</text>
<text x="1396" y="105" text-anchor="end" font-family="monospace" font-size="13" fill="#65736b">340 × 260 METRES</text>
<g transform="translate(720 670) scale(4 -4)">
''')
    rect(m['bounds'],'#d4d2b8' if city else 'url(#earth)')
    add('<g opacity=".15">')
    for x in range(-160,170,20): line([[x,-130],[x,130]],'#7c8475',.12)
    for y in range(-120,130,20): line([[-170,y],[170,y]],'#7c8475',.12)
    add('</g>')
    if city:
        for yard in m['yards']:
            rect(yard['rect'], '#c7bfa8' if yard['use'] in ('yard','square') else '#b9c0a0')
            if yard['use']=='garden':
                x,y,w,h=yard['rect']
                for dy in [-4,2,8]:
                    rect([x+w/2-5,y+h/2+dy,10,2.5],'#9ea886')
        for road in m['roads']:
            line(road['points'],'#efe6d0',road['width']+4)
            line(road['points'],'#9f9f92',road['width']+.5)
            line(road['points'],'url(#paving)',road['width'])
        add('<g id="footprints">')
        for b in m['buildings']:
            x,y,w,h=b['rect']
            rect([x+.8,y-.8,w,h],'#596153',extra='opacity=".22"')
            rect(b['rect'],'url(#rubble)' if b['ruined'] else '#ddd1b9')
        add('</g><g id="collision">')
        for s in m['solids']:
            if s['kind']=='lintel': continue
            x,y,z=s['min']; xx,yy,zz=s['max']
            rect([x,y,xx-x,yy-y],'#b78d58' if s['kind']=='sill' else '#48524a',extra=f'data-source="{s["id"]}"')
        add('</g><g id="roofs">')
        for b in m['buildings']:
            x,y,w,h=b['rect']
            if b['ruined']:
                # Broken rafters and floor scars remain within the actual shell.
                for _ in range(3):
                    px,py=rng.uniform(x+1,x+w-1),rng.uniform(y+1,y+h-1)
                    line([[px-1,py],[px,py+1],[px+1,py-.3]],'#8c7966',.2)
                continue
            palette={'slate':('#6e8080','#92a1a0'),'tile':('#a27761','#bc9578'),'zinc':('#839288','#a3ada1')}
            dark,light=palette[b['roof']]
            rect([x+.25,y+.25,w-.5,h-.5],dark,'#4f6057',.18)
            if w>=h:
                rect([x+.5,y+h/2,w-1,h/2-.5],light)
                line([[x+.5,y+h/2],[x+w-.5,y+h/2]],'#4e5e56',.2)
                if b['use']=='works':
                    for dx in range(3,int(w)-2,4): line([[x+dx,y+1],[x+dx,y+h-1]],'#667d71',.16)
            else:
                rect([x+w/2,y+.5,w/2-.5,h-1],light)
                line([[x+w/2,y+.5],[x+w/2,y+h-.5]],'#4e5e56',.2)
                if b['use']=='works':
                    for dy in range(4,int(h)-2,5): line([[x+1,y+dy],[x+w-1,y+dy]],'#667d71',.16)
            rect([x+1.4,y+1.4,.9,1.4],'#51584e')
        add('</g>')
    else:
        # All paths share one union-like layered stroke: draw all banks first,
        # then all floors, so a junction is never capped by a later bank.
        for stroke,width in [('#92957d',8),('#776d57',6),('#514d3f',4.8),('#a29170',4)]:
            for p in m['paths']:
                line(p['points'],stroke,width, 'stroke-linejoin="miter" stroke-linecap="square"')
        for d in m['decorations']:
            if d['kind']=='dugout':
                rect(d['rect'],'#a29170','#514d3f',.45)
                x,y,w,h=d['rect']
                for dy in range(1,int(h),2): line([[x+.5,y+dy],[x+w-.5,y+dy]],'#6e6650',.2)
            elif d['kind']=='shell-mark':
                x,y=d['center']; r=d['radius']
                add(f'<circle cx="{x}" cy="{y}" r="{r+1}" fill="#a9a58b" opacity=".7"/><circle cx="{x}" cy="{y}" r="{r}" fill="#96967e"/><ellipse cx="{x+.2}" cy="{y-.4}" rx="{r*.68}" ry="{r*.6}" fill="#858c79"/>')
            elif d['kind']=='wire':
                line(d['points'],'#6a6e5d',.3)
                x,ya=d['points'][0]; _,yb=d['points'][1]
                for yy in range(ya,yb,3):
                    line([[x-1,yy-1],[x+1,yy+1]],'#6a6e5d',.22)
                    line([[x+1,yy-1],[x-1,yy+1]],'#6a6e5d',.22)
        for p in m['paths']:
            line(p['points'],'#d0bc91',.8,'stroke-dasharray=".4 1.1" opacity=".7"')
        for link in m['links']:
            a,b=link['from_position'],link['to_position']
            line([a,b],'#beac84',3.8)
            line([a,b],'#7f755d',2.6,'stroke-dasharray=".25 1"')
        for c in m['cover']:
            x,y,z=c['shelter']
            rect([x-.3,y-1.2,.6,2.4],'#d1bd91')
    # Inspection layers are geometry-based and toggled by the preview UI.
    add('<g id="routes" style="display:none">')
    for p in m['paths'] if not city else m['roads']:
        line(p['points'],'#457b86',.55,'stroke-dasharray="2 1.3"')
    add('</g><g id="cover" style="display:none">')
    for c in m['cover']:
        x,y,z=c['shelter']; nx,ny=c['facing']
        add(f'<circle cx="{x}" cy="{y}" r=".55" fill="#267e9b" stroke="#eaf5ed" stroke-width=".18"><title>{escape(c["id"]+": "+c["kind"]+" / "+c["source"])}</title></circle>')
        line([[x,y],[x+nx*2,y+ny*2]],'#267e9b',.26)
    add('</g>')
    for d in m['deployment']:
        x,y,z=d['position'];color='#3e7e89' if d['team']==0 else '#a35e4b'
        add(f'<circle cx="{x}" cy="{y}" r="3.2" fill="{color}" stroke="#eeeade" stroke-width=".6"/>')
    add('</g>')
    def text(x,y,t,size=11,color='#4e5d50',spacing=1.2):
        add(f'<text x="{720+x*4}" y="{670-y*4}" text-anchor="middle" font-family="Arial,sans-serif" font-size="{size}" letter-spacing="{spacing}" fill="{color}" stroke="#eeeade" stroke-width="2.4" paint-order="stroke">{escape(t)}</text>')
    for label in m['labels']: text(*label['position'],label['text'],11)
    if city:
        text(75,m['roads'][6]['points'][0][1]+.5,'STATION STREET',10)
    for d in m['deployment']:
        x,y,z=d['position'];text(x,y+.2,'A' if d['team']==0 else 'B',11,'#ffffff',0)
    add('''<rect x="40" y="150" width="1360" height="1040" fill="none" stroke="#748071" stroke-width="1"/>
<path d="M1352 200V164m0 0-7 13m7-13 7 13" fill="none" stroke="#344d45" stroke-width="2"/>
<text x="1352" y="222" text-anchor="middle" font-family="Arial" font-size="14" fill="#344d45">N</text>
<path d="M48 1220h160m-160-5v10m80-10v10m80-10v10" stroke="#344d45" stroke-width="2"/>
<text x="48" y="1245" font-family="monospace" font-size="12" fill="#344d45">0</text><text x="208" y="1245" text-anchor="end" font-family="monospace" font-size="12" fill="#344d45">40 m</text>''')
    r=m.get('validation',{})
    detail=(f'{len(m["buildings"])} buildings · {r.get("doors",0)} doorways · {len(m["cover"])} cover positions' if city else
            f'6 defensive lines · 16 communication links · {len(m["cover"])} firing positions')
    add(f'<text x="1398" y="1223" text-anchor="end" font-family="Arial" font-size="16" fill="#344d45">{detail}</text>')
    add('<text x="1398" y="1250" text-anchor="end" font-family="Arial" font-size="12" fill="#65736b">OFFLINE GEOMETRY PREVIEW / roofs, gardens, wire and shell marks are visual context</text></svg>')
    return '\n'.join(out)


TILE_FILL={'field':'#c9cda4','hedged':'#bfc79b','craters':'#c4bf9c','orchard':'#b3c091','garden':'#b9c0a0',
           'house':'#c2c6a4','house2':'#c2c6a4','farm':'#c8c09f','church':'#c7bfa8','square':'#c7bfa8','edge':'#cfd2ae'}


def _city2_paving(m):
    """One road/square surface: overlaps never acquire an internal outline.

    Opaque strokes and square polygons union in a mask. The grain belongs to
    map coordinates; only the subdued shoulder underneath is feathered.
    """
    def roads(color, extra_width=0):
        return ''.join(
            '<polyline points="'+ ' '.join(f'{x},{y}' for x,y in r['points'])+
            f'" fill="none" stroke="{color}" stroke-width="{r["width"]+extra_width}" '
            'stroke-linejoin="round" stroke-linecap="round"/>' for r in m['roads'])
    def squares(color):
        return ''.join(
            '<polygon points="'+' '.join(f'{x},{y}' for x,y in yard['polygon'])+
            f'" fill="{color}"/>' for yard in m['yards'] if yard['use']=='square')
    x,y,w,h=m['bounds']
    mask=roads('white')+squares('white')
    shoulder=roads('#b7ae95',1.6)+squares('#b7ae95')
    return f'''<defs>
 <clipPath id="road-bounds"><rect x="{x}" y="{y}" width="{w}" height="{h}"/></clipPath>
 <mask id="road-area" maskUnits="userSpaceOnUse" x="{x-5}" y="{y-5}" width="{w+10}" height="{h+10}" style="mask-type:alpha">{mask}</mask>
 <filter id="shoulder-soft" x="-10%" y="-10%" width="120%" height="120%"><feGaussianBlur stdDeviation=".4"/></filter>
 <pattern id="road-grain" patternUnits="userSpaceOnUse" width="11" height="9"><rect width="11" height="9" fill="#aaa28c"/><path d="M1 2h.9 M7 6h1.4 M4 8h.5" stroke="#857d69" stroke-width=".14" opacity=".4"/><path d="M5 3h.6 M9 1h1" stroke="#d1c7ad" stroke-width=".16" opacity=".45"/></pattern>
 </defs><g clip-path="url(#road-bounds)"><g filter="url(#shoulder-soft)" opacity=".8">{shoulder}</g><rect x="{x-5}" y="{y-5}" width="{w+10}" height="{h+10}" fill="url(#road-grain)" mask="url(#road-area)"/></g>'''


def village_svg(m):
    """Village cartography: fields, roads, lane, buildings with their upper storeys,
    hedges, craters and, for inspection, cover and the supportability overlay."""
    import math
    import random
    seed=m['seed']
    urban=m['kind']=='city2'
    rng=random.Random(f'{m["kind"]}|{seed}|preview')
    out=[]
    def add(s): out.append(s)
    def rect(r, fill, stroke='none', sw=.2, extra=''):
        x,y,w,h=r
        add(f'<rect x="{x}" y="{y}" width="{w}" height="{h}" fill="{fill}" stroke="{stroke}" stroke-width="{sw}" {extra}/>')
    def line(points,stroke,width,extra=''):
        pts=' '.join(f'{p[0]},{p[1]}' for p in points)
        add(f'<polyline points="{pts}" fill="none" stroke="{stroke}" stroke-width="{width}" {extra}/>')
    def box(s):
        x,y,z=s['min'];xx,yy,zz=s['max']
        return [x,y,xx-x,yy-y]
    title='The Old City' if urban else 'The Village'
    sub=('Market streets, workers’ courts and gardens · a town grown around its roads' if urban else
         'An unevenly battered approach · shell scars cross roads, orchards and field boundaries')
    add(f'''<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 1300" role="img" aria-label="{title}, generated map seed {seed}">
<title>{title} — seed {seed}</title>
<defs>
 <pattern id="paving" width="3" height="2" patternUnits="userSpaceOnUse"><rect width="3" height="2" fill="#b7b5a8"/><path d="M0 0H3M0 2H3M0 0V2M1.5 0V2" stroke="#a6a89e" stroke-width=".12"/></pattern>
 <pattern id="rubble" width="3.4" height="3.4" patternUnits="userSpaceOnUse"><rect width="3.4" height="3.4" fill="#c5b298"/><path d="M.3 .3l1 .5-.4 .7zM2 2l.8 .2-.2 .6z" fill="#9c8d7b"/></pattern>
</defs>
<rect width="1440" height="1300" fill="#eeeade"/>
<text x="40" y="37" font-family="Arial,sans-serif" font-size="13" letter-spacing="3" fill="#6b7368">FIELD ATLAS / GENERATOR STUDY 03</text>
<text x="38" y="88" font-family="Georgia,serif" font-size="45" fill="#283b37">{title}</text>
<text x="41" y="120" font-family="Arial,sans-serif" font-size="16" fill="#65736b">{sub}</text>
<text x="1396" y="77" text-anchor="end" font-family="monospace" font-size="15" fill="#344d45">SEED {seed:06d}</text>
<text x="1396" y="105" text-anchor="end" font-family="monospace" font-size="13" fill="#65736b">340 × 260 METRES</text>
<g transform="translate(720 670) scale(4 -4)">
''')
    rect(m['bounds'],'#c8c5ad' if urban else '#cfd2ae')
    add('<g id="cells">')
    if urban:
        tones=('#d4cbb6','#d2c9b0','#c9c7ac','#c4c5a8','#d8cbb4')
        for i,block in enumerate(m['blocks']):
            for r in block['rects']:rect(r,tones[i%len(tones)])
    if m.get('fields'):
        tones=('#cbd0a8','#bcc59b','#d0c8a1','#b5bf95','#d5d0af','#aebc91')
        for field in m['fields']:
            for piece in field['pieces']:
                pts=' '.join(f'{p[0]},{p[1]}' for p in piece)
                add(f'<polygon points="{pts}" fill="{tones[field["tone"]]}"/>')
    else:
        for c in m['cells']:
            i,j=c['cell']
            fill=TILE_FILL.get(c['tile'])
            if fill:rect([-170+20*i,-130+20*j,20,20],fill)
    for field in m.get('fields',[]):
        if field['tone'] not in (1,2,4):continue
        clip='crop-'+field['id']
        add(f'<clipPath id="{clip}">')
        for piece in field['pieces']:
            pts=' '.join(f'{p[0]},{p[1]}' for p in piece)
            add(f'<polygon points="{pts}"/>')
        add('</clipPath>')
        pts=[p for piece in field['pieces'] for p in piece]
        x0=min(p[0] for p in pts);x1=max(p[0] for p in pts)
        y0=min(p[1] for p in pts);y1=max(p[1] for p in pts)
        for k in range(int((y1-y0)/2.4)+1):
            y=y0+k*2.4
            line([[x0,y],[x1,y+2]],'#7e8e62',.13,f'opacity=".22" clip-path="url(#{clip})"')
    add('</g><g id="yards">')
    for y in m['yards']:
        for r in y.get('pieces',[y['rect']]):
            rect(r,'url(#paving)' if y['use']=='square' else ('#afbc91' if y['use']=='garden' else '#c9bf9f'))
    add('</g><g id="roads">')
    if urban:
        add(_city2_paving(m))
    else:
        for road in m['roads']:
            line(road['points'],'#efe6d0',road['width']+3,'stroke-linejoin="round"')
            line(road['points'],'#b0a992',road['width'],'stroke-linejoin="round"')
    add('</g><g id="lanes">')
    for s in m['surfaces']:
        if s.get('level',0)<0:
            rect(s['rect'],'#8f8566' if s.get('kind',0)==0 else '#a39777')
            x,y,w,h=s['rect']
            if s.get('kind',0)==1:
                for k in range(1,6):
                    if s['slope'][0]:line([[x+w*k/6,y],[x+w*k/6,y+h]],'#c2b18e',.16)
                    else:line([[x,y+h*k/6],[x+w,y+h*k/6]],'#c2b18e',.16)
    for lane in (p for p in m['paths'] if p.get('kind')=='lane'):
        clip='floor-'+lane['id']
        add(f'<clipPath id="{clip}">')
        for floor in m['surfaces']:
            if floor['parent']==lane['id'] and floor.get('kind')==0:
                rect(floor['rect'],'white')
        add('</clipPath>')
        line(lane['points'],'#82785d',2.8,f'stroke-linejoin="round" clip-path="url(#{clip})"')
    add('</g><g id="footprints">')
    for b in m['buildings']:
        x,y,w,h=b['rect']
        rect([x+.8,y-.8,w,h],'#596153',extra='opacity=".22"')
        rect(b['rect'],'url(#rubble)' if b['ruined'] else ('#e3d6bb' if b['floors']==2 else '#ddd1b9'))
    add('</g><g id="collision">')
    for s in m['solids']:
        if s['kind'] in ('lintel','earth','slab','tread','hedge','rim') or s['min'][2]>2.9:continue
        color={'sill':'#b78d58','garden-wall':'#8d7d64','farm-wall':'#7b6e5a','tree':'#5f7a4c','haystack':'#c9a95b','memorial':'#6f6a60','tower':'#3d4640','blast-remains':'#a3987d','stump':'#79684b'}.get(s['kind'],'#48524a')
        rect(box(s),color,extra=f'data-source="{s["id"]}"')
    add('</g><g id="upper">')
    for s in m['solids']:
        if s['min'][2]>2.9 and s['kind'] in ('wall','sill'):
            rect(box(s),'#7b5a44' if s['kind']=='wall' else '#c69a5f',extra=f'data-source="{s["id"]}" opacity=".85"')
    for s in m['surfaces']:
        if s.get('kind')==2:
            x,y,w,h=s['rect'];rect(s['rect'],'#a38f6e')
            steps=8
            for k in range(1,steps):
                if s['slope'][0]:line([[x+w*k/steps,y],[x+w*k/steps,y+h]],'#6e604a',.08)
                else:line([[x,y+h*k/steps],[x+w,y+h*k/steps]],'#6e604a',.08)
    add('</g><g id="hedges">')
    for s in m['solids']:
        if s.get('flags',0)&1:
            rect(box(s),'#637c48','#536b3d',.15,f'rx=".35" data-source="{s["id"]}"')
    add('</g><g id="orchards">')
    for tree in m['solids']:
        if tree['kind'] != 'tree':continue
        x=(tree['min'][0]+tree['max'][0])/2;y=(tree['min'][1]+tree['max'][1])/2
        add(f'<circle cx="{x+.5}" cy="{y-.5}" r="1.65" fill="#4c6343" opacity=".16"/><circle cx="{x}" cy="{y}" r="1.5" fill="#778d59"/><circle cx="{x-.4}" cy="{y+.3}" r="1.05" fill="#91a16b"/>')
    add('</g><g id="craters">')
    for d in m['decorations']:
        if d.get('kind')=='crater':
            x,y=d['center'];r=d['radius']
            pts=[]
            for k in range(14):
                angle=k*math.pi/7
                radius=r+rng.uniform(.8,2.2)
                pts.append(f'{x+math.cos(angle)*radius:.3f},{y+math.sin(angle)*radius:.3f}')
            old=d.get('age')=='old'
            soil,rim,bowl=('#adb28a','#a2a481','#929578') if old else ('#bcac89','#ac9873','#7f7056')
            add(f'<polygon points="{" ".join(pts)}" fill="{soil}" opacity=".82"/>')
            add(f'<circle cx="{x}" cy="{y}" r="{r}" fill="{rim}"/><circle cx="{x}" cy="{y+.12}" r="{r-.65}" fill="{bowl}"/><ellipse cx="{x+.3}" cy="{y+.5}" rx="{r*.60}" ry="{r*.45}" fill="#665c47" opacity="{.1 if old else .3}"/>')
    add('</g><g id="roofs">')
    palette={'slate':('#6e8080','#92a1a0'),'tile':('#a27761','#bc9578'),'zinc':('#839288','#a3ada1')}
    for b in m['buildings']:
        if b['ruined']:continue
        x,y,w,h=b['rect']
        dark,light=palette[b['roof']]
        if b['use']=='outbuilding':dark,light='#879087','#a5aa96'
        rect([x+.25,y+.25,w-.5,h-.5],dark,'#4f6057',.18)
        if w>=h:
            rect([x+.5,y+h/2,w-1,h/2-.5],light);line([[x+.5,y+h/2],[x+w-.5,y+h/2]],'#4e5e56',.2)
        else:
            rect([x+w/2,y+.5,w/2-.5,h-1],light);line([[x+w/2,y+.5],[x+w/2,y+h-.5]],'#4e5e56',.2)
        if b['floors']==2:rect([x+1.4,y+1.4,.9,1.4],'#51584e')
        if b.get('damage_exposure',0)>.5:
            rect([x+w*.58,y+h*.25,w*.18,h*.23],'#665d4b',extra='opacity=".3"')
    for s in m['solids']:
        if s['kind'] in ('tower','chimney'):rect(box(s),'#5a6660','#3d4640',.25)
    add('</g>')
    add('<g id="physical" style="display:none">')
    for s in m['solids']:
        if s.get('flags',0)&3 or (urban and s['kind'] in ('wall','sill','garden-wall','rubble')):
            rect(box(s),'none','#64493a',.16,f'data-source="{s["id"]}"')
    add('</g>')
    add('<g id="routes" style="display:none">')
    for road in m['roads']:line(road['points'],'#457b86',.55,'stroke-dasharray="2 1.3"')
    for p in m['paths']:line(p['points'],'#457b86',.55,'stroke-dasharray="2 1.3"')
    for link in m['links']:
        a,b=link['from_position'],link['to_position'];line([a,b],'#1f5f6b',.5)
    add('</g><g id="cover" style="display:none">')
    for c in m['cover']:
        x,y,z=c['shelter'];nx,ny=c['facing']
        color='#8a4fa0' if z>1 else ('#b0602a' if c.get('posture')=='prone' else '#267e9b')
        add(f'<circle cx="{x}" cy="{y}" r=".55" fill="{color}" stroke="#eaf5ed" stroke-width=".18"><title>{escape(c["id"]+": "+c["kind"]+" / "+c["source"])}</title></circle>')
        line([[x,y],[x+nx*2,y+ny*2]],color,.26)
    add('</g><g id="support" style="display:none">')
    support=m.get('validation',{}).get('support',{})
    for objective in support.get('objectives', []):
        add(f'<g data-objective="{escape(objective["id"])}"><title>{escape(objective["name"])}</title>')
        for team in objective['teams']:
            for c in team.get('crossings',[]):
                color='#3f8f4f' if c['supported'] else '#b8452f'
                line(c['points'],color,1.1,f'stroke-linecap="round" opacity=".85" data-team="{team["team"]}"')
                if c.get('support'):
                    x,y,z=c['support']['shelter']
                    add(f'<circle cx="{x}" cy="{y}" r="1.1" fill="none" stroke="{color}" stroke-width=".4"/>')
                    line([c['points'][len(c['points'])//2][:2],[x,y]],color,.2,'stroke-dasharray=".6 .6"')
        x,y,z=objective['position']
        add(f'<circle cx="{x}" cy="{y}" r="3.5" fill="#f5edd7" stroke="#7c2f2a" stroke-width=".6"/><circle cx="{x}" cy="{y}" r=".8" fill="#7c2f2a"/>')
        add('</g>')
    for r in (m.get('repairs') or {}).get('applied',[]):
        add(f'<g data-objective="{escape(r.get("objective", ""))}">')
        for rr in r.get('rects',[]):rect(rr,'none','#d08b1d',.35)
        if r['kind']=='crater':
            x,y=r['center'];add(f'<circle cx="{x}" cy="{y}" r="{r["radius"]+.8}" fill="none" stroke="#d08b1d" stroke-width=".35"/>')
        add('</g>')
    add('</g>')
    for o in [m['focal_point']]:
        x,y,z=o['position']
        add(f'<circle cx="{x}" cy="{y}" r="2.4" fill="none" stroke="#7c2f2a" stroke-width=".6"/><circle cx="{x}" cy="{y}" r=".8" fill="#7c2f2a"/>')
    for d in m['deployment']:
        x,y,z=d['position'];color='#3e7e89' if d['team']==0 else '#a35e4b'
        add(f'<circle cx="{x}" cy="{y}" r="3.2" fill="{color}" stroke="#eeeade" stroke-width=".6"/>')
    add('</g>')
    def text(x,y,t,size=11,color='#4e5d50',spacing=1.2):
        add(f'<text x="{720+x*4}" y="{670-y*4}" text-anchor="middle" font-family="Arial,sans-serif" font-size="{size}" letter-spacing="{spacing}" fill="{color}" stroke="none">{escape(t)}</text>')
    for label in m['labels']:text(label['position'][0],label['position'][1]+2,label['text'],10)
    for b in m['buildings']:
        if b.get('role')=='cafe':
            x,y,w,h=b['rect'];text(x+w/2,y+h/2,'CAFÉ',8)
    for d in m['deployment']:
        x,y,z=d['position'];text(x,y+.2,'A' if d['team']==0 else 'B',11,'#ffffff',0)
    add('''<rect x="40" y="150" width="1360" height="1040" fill="none" stroke="#748071" stroke-width="1"/>
<path d="M1352 200V164m0 0-7 13m7-13 7 13" fill="none" stroke="#344d45" stroke-width="2"/>
<text x="1352" y="222" text-anchor="middle" font-family="Arial" font-size="14" fill="#344d45">N</text>
<path d="M48 1220h160m-160-5v10m80-10v10m80-10v10" stroke="#344d45" stroke-width="2"/>
<text x="48" y="1245" font-family="monospace" font-size="12" fill="#344d45">0</text><text x="208" y="1245" text-anchor="end" font-family="monospace" font-size="12" fill="#344d45">40 m</text>''')
    r=m.get('validation',{})
    two=sum(b['floors']==2 for b in m['buildings'])
    share=r.get('supportable_share')
    detail=f'{len(m["buildings"])} buildings · {two} two-storey · {len(m["cover"])} firing positions'+(f' · supportable {share:.0%}' if share is not None else '')
    add(f'<text x="1398" y="1223" text-anchor="end" font-family="Arial" font-size="16" fill="#344d45">{detail}</text>')
    add('<text x="1398" y="1250" text-anchor="end" font-family="Arial" font-size="12" fill="#65736b">OFFLINE GEOMETRY PREVIEW / roofs and field texture are visual context; hedges conceal, rims shelter prone men</text></svg>')
    return '\n'.join(out)
