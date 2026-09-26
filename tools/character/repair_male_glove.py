"""Repair measured web/cuff skin weights on the editable male copy.

Two palm-web vertices were dominated by the thumb's second joint: opening the
thumb pulled a triangle into a fin. The cuff also alternated rigid-hand and
forearm weights across adjacent vertices. Positions, topology and bones stay
unchanged. Export bind-position matches for the normalized Unreal mesh.
"""
import json
from pathlib import Path
from mathutils import Vector

HAND='mixamorig:RightHand'
WEB=[((2.8030469,9.8872871,4.6862030),{HAND:.75,HAND+'Index1':.25}),
     ((3.032,8.70,5.05),{HAND:.90,HAND+'Thumb1':.10}),
     ((4.57,7.34,6.18),{HAND:.60,HAND+'Thumb1':.40})]

def repair(rig,body,out,include_left=False):
    inverse=(rig.matrix_world@rig.data.bones[HAND].matrix_local).inverted()
    positions={v.index:inverse@body.matrix_world@v.co*100 for v in body.data.vertices}
    edits={}
    for point,weights in WEB:
        vertex=min(positions,key=lambda i:(positions[i]-Vector(point)).length)
        assert (positions[vertex]-Vector(point)).length<.035,(point,positions[vertex])
        edits[vertex]=weights
    for v in body.data.vertices:
        p=positions[v.index]
        weights={body.vertex_groups[g.group].name:g.weight for g in v.groups}
        connected=sum(w for n,w in weights.items() if n in [HAND,'mixamorig:RightForeArm','mixamorig:RightArm'])
        if connected>.98 and -7<p.y<2 and abs(p.x)<15 and abs(p.z)<15:
            t=max(0.,min(1.,(p.y+3)/5));t=t*t*(3-2*t)
            edits[v.index]={HAND:t,'mixamorig:RightForeArm':1-t}
    assert 10<=len(edits)<=60,len(edits)
    if include_left:
        # The other cuff has the same alternating rigid-hand weights. Keep
        # the sleeve on its forearm and blend only across the wrist seam.
        hand='mixamorig:LeftHand';forearm='mixamorig:LeftForeArm'
        left_inverse=(rig.matrix_world@rig.data.bones[hand].matrix_local).inverted()
        added=0
        for v in body.data.vertices:
            p=left_inverse@body.matrix_world@v.co*100
            weights={body.vertex_groups[g.group].name:g.weight for g in v.groups}
            connected=sum(w for n,w in weights.items() if n in [hand,forearm,'mixamorig:LeftArm'])
            if connected>.98 and -14<p.y<2 and abs(p.x)<15 and abs(p.z)<15:
                t=max(0.,min(1.,(p.y+3)/5));t=t*t*(3-2*t)
                edits[v.index]={hand:t,forearm:1-t};added+=1
        assert 40<=added<=100,added
    rows=[]
    for i,weights in sorted(edits.items()):
        v=body.data.vertices[i]
        before={body.vertex_groups[g.group].name.removeprefix('mixamorig:'):g.weight for g in v.groups}
        for g in list(v.groups):body.vertex_groups[g.group].remove([i])
        for name,w in weights.items():
            if w>1e-6:body.vertex_groups[name].add([i],w,'REPLACE')
        p=body.matrix_world@v.co
        rows.append(dict(position_cm=[p.x*100,-p.y*100,p.z*100],before=before,
                         weights={n.removeprefix('mixamorig:'):w for n,w in weights.items() if w>1e-6}))
    spec=dict(mesh='/Game/Characters/GASP/Bodies/SK_Male_GASP',tolerance_cm=.03,
              changed_source_vertices=len(rows),vertices=rows)
    (Path(out)/'hand-weights.json').write_text(json.dumps(spec,indent=2))
    return spec
