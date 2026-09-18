"""SVG cartography drawn exclusively from the exported map geometry."""
from html import escape
import random


def svg(m):
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
