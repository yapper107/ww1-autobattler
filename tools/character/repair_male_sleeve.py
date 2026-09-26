"""Close the measured three-edge opening in the source male left forearm."""
import json
from pathlib import Path
import bmesh


def repair(body,out):
    bm=bmesh.new();bm.from_mesh(body.data);bm.verts.ensure_lookup_table()
    vertices=[bm.verts[i] for i in [1834,1384,1843]]
    edges=[next(e for e in a.link_edges if b in e.verts)
           for a,b in zip(vertices,vertices[1:]+vertices[:1])]
    assert all(e.is_boundary for e in edges), 'Measured sleeve opening changed'
    adjacent=edges[0].link_faces[0]
    loop=next(l for l in adjacent.loops if l.vert==vertices[0] and l.edge==edges[0]) if any(
        l.vert==vertices[0] and l.edge==edges[0] for l in adjacent.loops) else None
    if loop:vertices.reverse()
    face=bm.faces.new(vertices);face.material_index=adjacent.material_index;face.smooth=adjacent.smooth
    for uv in bm.loops.layers.uv.values():
        color_uv=sum((l[uv].uv for l in adjacent.loops),adjacent.loops[0][uv].uv*0)/len(adjacent.loops)
        for l in face.loops:
            l[uv].uv=color_uv
    bm.normal_update()
    points=[body.matrix_world@v.co for v in vertices]
    spec=dict(mesh='/Game/Characters/GASP/Bodies/SK_Male_GASP',
              boundary_cm=[[p.x*100,-p.y*100,p.z*100] for p in points],added_triangles=1)
    bm.to_mesh(body.data);bm.free()
    (Path(out)/'sleeve-repair.json').write_text(json.dumps(spec,indent=2))
    return spec
