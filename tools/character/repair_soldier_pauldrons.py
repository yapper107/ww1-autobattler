"""Keep the two rigid shoulder shells on their clavicle attachments."""
import json
from pathlib import Path


def repair(body,gender,out):
    adjacency={v.index:set() for v in body.data.vertices}
    for face in body.data.polygons:
        for i in face.vertices:adjacency[i].update(face.vertices)
    remaining=set(adjacency);chosen=[]
    expected={'Left':114,'Right':42} if gender=='Female' else {'Left':30,'Right':30}
    while remaining:
        first=remaining.pop();todo=[first];component={first}
        while todo:
            for i in adjacency[todo.pop()]:
                if i in remaining:remaining.remove(i);component.add(i);todo.append(i)
        if len(component) not in expected.values():continue
        points=[body.matrix_world@body.data.vertices[i].co for i in component]
        lo=[min(p[a] for p in points) for a in range(3)];hi=[max(p[a] for p in points) for a in range(3)]
        if not (lo[2]>1.20 and hi[2]<1.55 and (lo[0]>.14 or hi[0]<-.14)):continue
        side='Left' if lo[0]>0 else 'Right'
        if len(component)!=expected[side]:continue
        for i in component:
            w={body.vertex_groups[g.group].name:g.weight for g in body.data.vertices[i].groups}
            assert sum(w.get('mixamorig:'+side+n,0) for n in ['Arm','Shoulder'])>.99,(i,w)
        chosen.append((side,component))
    assert sorted(s for s,_ in chosen)==['Left','Right'],[(s,len(c)) for s,c in chosen]
    rows=[]
    for side,component in chosen:
        name='mixamorig:'+side+'Shoulder'
        group=body.vertex_groups.get(name) or body.vertex_groups.new(name=name)
        for i in sorted(component):
            vertex=body.data.vertices[i];p=body.matrix_world@vertex.co
            for g in list(vertex.groups):body.vertex_groups[g.group].remove([i])
            group.add([i],1.,'REPLACE')
            rows.append(dict(position_cm=[p.x*100,-p.y*100,p.z*100],side=side,kind='plate',weights={side+'Shoulder':1.}))
    if gender=='Male':
        # The cap of the coat was weighted to the rotating upper arm, including
        # vertices ABOVE its joint. That pulls blue triangles through the fixed
        # plate. Keep the shoulder cap with the clavicle and fade into the arm
        # over its first 8 cm; retain all existing spine contributions.
        rig=next(m.object for m in body.modifiers if m.type=='ARMATURE')
        count=0
        for side in ['Left','Right']:
            arm='mixamorig:'+side+'Arm';forearm='mixamorig:'+side+'ForeArm'
            shoulder='mixamorig:'+side+'Shoulder'
            bone=rig.data.bones[arm];head=rig.matrix_world@bone.head_local
            axis=(rig.matrix_world.to_3x3()@(bone.tail_local-bone.head_local)).normalized()
            for vertex in body.data.vertices:
                weights={body.vertex_groups[g.group].name:g.weight for g in vertex.groups}
                p=body.matrix_world@vertex.co;t=(p-head).dot(axis)*100
                if weights.get(arm,0)<=.01 or not -10<t<8 or (p-head).length>.18:continue
                u=max(0.,min(1.,t/8));follow=1-u*u*(3-2*u)
                moved=0.
                for name in [arm,forearm]:
                    delta=weights.get(name,0)*follow;moved+=delta
                    if name in weights:weights[name]-=delta
                weights[shoulder]=weights.get(shoulder,0)+moved
                weights={n:w for n,w in weights.items() if w>1e-6}
                total=sum(weights.values());weights={n:w/total for n,w in weights.items()}
                for g in list(vertex.groups):body.vertex_groups[g.group].remove([vertex.index])
                for name,w in weights.items():body.vertex_groups[name].add([vertex.index],w,'REPLACE')
                rows.append(dict(position_cm=[p.x*100,-p.y*100,p.z*100],side=side,kind='shoulder_cloth',
                                 weights={n.removeprefix('mixamorig:'):w for n,w in weights.items()}))
                count+=1
        assert count==22,count
    spec=dict(mesh='/Game/Characters/GASP/Bodies/SK_'+gender+'_GASP',vertices=rows,
              source_vertices=len(rows),tolerance_cm=.03)
    (Path(out)/'armor-weights.json').write_text(json.dumps(spec,indent=2))
    return spec
