"""Fit the existing articulated pouch to the measured male belt geometry.

The source body, topology and cloth in Unreal remain intact. The editable Blender
copy replaces exactly three disconnected islands; a vertex-stage material mask
selects those same bind positions at runtime, retaining the original atlas.
"""
import json
import math
from pathlib import Path
import bpy
import bmesh
from mathutils import Matrix, Quaternion, Vector
import author_rifle_pouch

FEMALE_CENTER=Vector((-.133,-.094,1.0085))
MALE_CENTER=Vector((-.1578583233,-.1601006389,1.0794460177))
POUCH_SCALE=Vector((1.18364351,1.201875806,1.380369))

def map_point(p):
    return MALE_CENTER+Vector((p[a]-FEMALE_CENTER[a])*POUCH_SCALE[a] for a in range(3))

HINGE=map_point(author_rifle_pouch.HINGE)

def select_islands(body):
    neighbors={}
    for poly in body.data.polygons:
        for v in poly.vertices:neighbors.setdefault(v,set()).update(poly.vertices)
    remaining=set(neighbors);chosen=[]
    while remaining:
        todo=[remaining.pop()];component=set(todo)
        while todo:
            for v in neighbors[todo.pop()]:
                if v in remaining:remaining.remove(v);component.add(v);todo.append(v)
        pts=[body.matrix_world@body.data.vertices[v].co for v in component]
        lo=[min(p[a] for p in pts) for a in range(3)];hi=[max(p[a] for p in pts) for a in range(3)]
        if lo[0]<-.11 and hi[0]<-.075 and lo[1]<-.17 and .97<lo[2] and hi[2]<1.18 and len(component) in [22,8,11]:
            chosen.append(dict(vertices=sorted(component),lo=lo,hi=hi))
    assert sorted(len(x['vertices']) for x in chosen)==[8,11,22],chosen
    return chosen

def mask_spec(body, chosen):
    selected=set(v for x in chosen for v in x['vertices'])
    pts=[body.matrix_world@v.co for v in body.data.vertices]
    def in_boxes(p):return any(all(x['lo'][a]-.00005<=p[a]<=x['hi'][a]+.00005 for a in range(3)) for x in chosen)
    extras=[i for i,p in enumerate(pts) if i not in selected and in_boxes(p)]
    def ue(p):return [p.x*100,-p.y*100,p.z*100]
    # Masking happens before interpolation. Every vertex of a pouch triangle
    # gets zero, and every other triangle retains one; the narrow exclusions
    # protect nearby strap vertices inside the pouch's bounding boxes.
    boxes=[]
    for x in chosen:
        endpoints=[ue(Vector(x[k])) for k in ['lo','hi']]
        boxes.append(dict(lo=[min(v[a] for v in endpoints)-.005 for a in range(3)],
                          hi=[max(v[a] for v in endpoints)+.005 for a in range(3)]))
    return dict(boxes=boxes,exclude_positions_cm=[ue(pts[i]) for i in extras],
                excluded_radius_cm=.02,selected_positions_cm=[ue(pts[i]) for i in sorted(selected)],
                selected_count=len(selected),hinge_cm=ue(HINGE))

def create(rig,body,out):
    out=Path(out);chosen=select_islands(body);spec=mask_spec(body,chosen)
    (out/'pouch-mask.json').write_text(json.dumps(spec,indent=2))
    webbing=bpy.data.materials.new('Male pouch webbing');webbing.use_nodes=True
    shader=next(n for n in webbing.node_tree.nodes if n.type=='BSDF_PRINCIPLED')
    def linear(v):return v/12.92 if v<=.04045 else ((v+.055)/1.055)**2.4
    shader.inputs['Base Color'].default_value=tuple(linear(v) for v in [.4,.404,.282])+(1,)
    shader.inputs['Roughness'].default_value=.95
    objects=[]
    for old,name,flap in [('SM_RiflePouch','SM_MaleRiflePouch',False),('SM_RiflePouchFlap','SM_MaleRiflePouchFlap',True)]:
        original=bpy.data.objects[old]
        obj=original.copy();obj.data=original.data.copy();bpy.context.scene.collection.objects.link(obj)
        obj.name=name;obj.animation_data_clear();obj.parent=None
        for c in list(obj.constraints):obj.constraints.remove(c)
        obj.matrix_world=Matrix.Identity(4)
        for v in obj.data.vertices:
            v.co=Vector(v.co[a]*POUCH_SCALE[a] for a in range(3)) if flap else map_point(v.co)
        obj.data.materials[0]=webbing
        obj.hide_viewport=False;obj.hide_render=False;obj.hide_set(False)
        bpy.ops.object.select_all(action='DESELECT');obj.select_set(True);bpy.context.view_layer.objects.active=obj
        bpy.ops.export_scene.fbx(filepath=str(out/(name+'.fbx')),use_selection=True,object_types={'MESH'},
            axis_forward='-Y',axis_up='Z',bake_anim=False,mesh_smooth_type='FACE',path_mode='STRIP')
        if flap:obj.location=HINGE
        bind=rig.matrix_world@rig.data.bones['mixamorig:Hips'].matrix_local
        c=obj.constraints.new('CHILD_OF');c.target=rig;c.subtarget='mixamorig:Hips';c.inverse_matrix=bind.inverted()
        objects.append(obj)
    selected=set(v for x in chosen for v in x['vertices'])
    bm=bmesh.new();bm.from_mesh(body.data);bm.verts.ensure_lookup_table()
    bmesh.ops.delete(bm,geom=[bm.verts[i] for i in selected],context='VERTS');bm.to_mesh(body.data);bm.free()
    return objects

def key_actions(flap,clips):
    for clip in clips:
        flap.animation_data_create();flap.animation_data.action=bpy.data.actions.new('MalePouch_'+clip['name']);flap.animation_data.action.use_fake_user=True
        for frame in range(1,clip['frames']+1):
            phase=(frame-1)/(clip['frames']-1)
            author_rifle_pouch.key(flap,phase,frame,clip['name'].endswith('Reload'))
        clip['pouch_action']=flap.animation_data.action.name
