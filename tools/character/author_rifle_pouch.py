"""Editable low-poly ammunition pouch with an actual cavity and hinged flap.

Blender module, used by author_rifle_actions.py on its duplicate scene. Static
exports retain the source body's bind-space coordinates; the runtime follows
the pelvis. No character topology, skeleton or cloth asset is reimported.
"""
import math
from pathlib import Path
import bpy
import bmesh
from mathutils import Matrix, Quaternion, Vector

HINGE=Vector((-.133,-.043,1.084))

def smooth(x):
    x=max(0.,min(1.,x));return x*x*(3-2*x)

def opening(phase):
    return smooth((phase-.255)/.040)*(1-smooth((phase-.405)/.075))

def flap_contact(phase):
    rotation=Quaternion((1,0,0),math.radians(-110*opening(phase)))
    return HINGE+rotation@Vector((0,-.104,-.043))

def create(rig,body,out):
    olive=next(m for m in body.data.materials if 'olive' in m.name.lower() and 'webbing' in m.name.lower())
    dark=olive.copy();dark.name='Pouch dark interior'
    shader=next(n for n in dark.node_tree.nodes if n.type=='BSDF_PRINCIPLED')
    shader.inputs['Base Color'].default_value=(.024,.029,.014,1)
    objects=[]
    def mesh(name,vertices,faces,origin=Vector()):
        data=bpy.data.meshes.new(name);data.from_pydata(vertices,[],faces);data.update()
        obj=bpy.data.objects.new(name,data);bpy.context.scene.collection.objects.link(obj)
        obj.location=origin;data.materials.append(olive);data.materials.append(dark)
        uv=data.uv_layers.new(name='PaletteUV')
        for polygon in data.polygons:
            polygon.use_smooth=False
            axes=sorted(range(3),key=lambda a:abs(polygon.normal[a]))[:2]
            points=[data.vertices[data.loops[loop].vertex_index].co for loop in polygon.loop_indices]
            lo=[min(p[a] for p in points) for a in axes];hi=[max(p[a] for p in points) for a in axes]
            for loop,p in zip(polygon.loop_indices,points):
                uv.data[loop].uv=tuple((p[a]-low)/max(high-low,1e-6) for a,low,high in zip(axes,lo,hi))
        objects.append(obj);return obj
    # Eight-sided rim, tapered bottom, inward-facing inner walls and a floor.
    ring=[(-1,-.78),(-.78,-1),(.78,-1),(1,-.78),(1,.78),(.78,1),(-.78,1),(-1,.78)]
    vertices=[]
    for sx,sy,z in [(.061,.050,1.079),(.052,.039,.938),(.050,.039,1.079),(.045,.031,.951)]:
        vertices += [(-.133+x*sx,-.094+y*sy,z) for x,y in ring]
    faces=[]
    for a in range(8):
        b=(a+1)%8
        faces += [(a,b,8+b,8+a),(a,16+a,16+b,b),(16+a,24+a,24+b,16+b)]
    faces += [tuple(range(8,16)),tuple(reversed(range(24,32)))]
    faces=[tuple(reversed(face)) for face in faces]
    bag=mesh('SM_RiflePouch',vertices,faces)
    for polygon in bag.data.polygons:
        if all(v>=16 for v in polygon.vertices):polygon.material_index=1
    # L-shaped solid flap: top spans the opening, short front tongue hangs over
    # the rim. Its origin is the rear hinge, so rotating it exposes the cavity.
    profile=[(0,0),(-.104,0),(-.106,-.048),(-.102,-.048),(-.100,-.004),(0,-.004)]
    vertices=[(x,y,z) for x in [-.063,.063] for y,z in profile]
    faces=[tuple(reversed(range(6))),tuple(range(6,12))]
    faces += [(a,(a+1)%6,(a+1)%6+6,a+6) for a in range(6)]
    flap=mesh('SM_RiflePouchFlap',vertices,faces,HINGE)
    out=Path(out)
    # Export before the pelvis constraints are installed, in the same coordinate
    # conversion as the existing soldier and rifle static meshes.
    for obj in objects:
        bpy.ops.object.select_all(action='DESELECT');obj.select_set(True);bpy.context.view_layer.objects.active=obj
        location=obj.location.copy();obj.location=(0,0,0)
        bpy.ops.export_scene.fbx(filepath=str(out/(obj.name+'.fbx')),use_selection=True,object_types={'MESH'},
            axis_forward='-Y',axis_up='Z',bake_anim=False,mesh_smooth_type='FACE',path_mode='STRIP')
        obj.location=location
    # Remove only the old right-front pouch from the editable duplicate. The
    # runtime uses a scoped webbing mask so its cloth binding stays untouched.
    selected=set()
    for polygon in body.data.polygons:
        if body.data.materials[polygon.material_index]!=olive:continue
        coords=[body.matrix_world@body.data.vertices[v].co for v in polygon.vertices]
        if all(p.x<-.06 and p.y<-.025 and .90<p.z<1.10 for p in coords):selected.update(polygon.vertices)
    assert len(selected)==82,len(selected)
    bm=bmesh.new();bm.from_mesh(body.data);bm.verts.ensure_lookup_table()
    bmesh.ops.delete(bm,geom=[bm.verts[i] for i in selected],context='VERTS');bm.to_mesh(body.data);bm.free()
    bind=rig.matrix_world@rig.data.bones['mixamorig:Hips'].matrix_local
    for obj in objects:
        constraint=obj.constraints.new('CHILD_OF');constraint.target=rig;constraint.subtarget='mixamorig:Hips'
        constraint.inverse_matrix=bind.inverted()
    return flap

def key(flap,phase,frame,active):
    flap.rotation_mode='QUATERNION'
    flap.rotation_quaternion=Quaternion((1,0,0),math.radians(-110*opening(phase))) if active else Quaternion()
    flap.keyframe_insert('rotation_quaternion',frame=frame)
