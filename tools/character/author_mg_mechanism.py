"""Articulate the approved MG; retain its palette, silhouette and muzzle crystal.

All positions are Blender weapon metres. Cover, charge handle, belt and box are
separate rigid meshes. The pouch is open so ammunition can actually enter it.
"""
import math
import bpy
from mathutils import Matrix, Vector

AXES=Matrix(((0,1,0,0),(-1,0,0,.5676),(0,0,1,.08224),(0,0,0,1)))
HINGE=Vector((0,.075,.1345))
CHARGE=Vector((-.055,.225,.124))
DOCK=Vector((-.046,.126,.065))
CATCH=Vector((-.055,.128,0))

def smooth(x):
    x=max(0.,min(1.,x));return x*x*(3-2*x)

def opening(u):return smooth((u-.085)/.075)*(1-smooth((u-.77)/.065))
def charging(u):return smooth((u-.868)/.035)*(1-smooth((u-.905)/.035))
def box_grasp(u):return smooth((u-.20)/.025)*(1-smooth((u-.645)/.025))
def pouch_contact(u):return smooth((u-.28)/.04)*(1-smooth((u-.485)/.11))
def box_visible(u):return not .375<u<.415
def belt_visible(u):return u<.18 or u>=.415

def cover_matrix(u):
    return Matrix.Translation(HINGE)@Matrix.Rotation(math.radians(100*opening(u)),4,'X')

def create(out):
    original=bpy.data.objects['Machine_Gun_Refined']
    points=[AXES@v.co for v in original.data.vertices]
    groups={k:[] for k in ['Body','Cover','Belt','Box','ChargingHandle']}
    for polygon in original.data.polygons:
        p=[points[i] for i in polygon.vertices];m=polygon.material_index
        if m==2:part='Box'
        elif m==3 or (m==4 and min(v.y for v in p)>0):part='Belt'
        elif m==1 and min(v.x for v in p)<-.041 and min(v.y for v in p)>.215 and max(v.y for v in p)<.24 and min(v.z for v in p)>.11 and max(v.z for v in p)<.137:part='ChargingHandle'
        elif m==1 and min(v.y for v in p)>.065 and max(v.y for v in p)<.225 and min(v.z for v in p)>=.1345:part='Cover'
        else:part='Body'
        groups[part].append(polygon)
    assert all(groups.values()),{k:len(v) for k,v in groups.items()}
    result={}
    for part,polygons in groups.items():
        origin=HINGE if part=='Cover' else CHARGE if part=='ChargingHandle' else Vector()
        ids=sorted({i for p in polygons for i in p.vertices});remap={v:i for i,v in enumerate(ids)}
        vertices=[points[i]-origin for i in ids];faces=[tuple(remap[i] for i in p.vertices) for p in polygons]
        data=bpy.data.meshes.new('SM_MG_'+part);data.from_pydata(vertices,[],faces);data.update()
        for material in original.data.materials:data.materials.append(material)
        for polygon,source in zip(data.polygons,polygons):polygon.material_index=source.material_index;polygon.use_smooth=False
        obj=bpy.data.objects.new(data.name,data);bpy.context.scene.collection.objects.link(obj);result[part]=obj
    # A recessed feed tray remains below the opening lid, without an empty shell.
    def cuboid(obj,lo,hi,material):
        data=obj.data;verts=[v.co.copy() for v in data.vertices];faces=[tuple(p.vertices) for p in data.polygons];mats=[p.material_index for p in data.polygons];n=len(verts)
        verts.extend(Vector((x,y,z)) for x in [lo[0],hi[0]] for y in [lo[1],hi[1]] for z in [lo[2],hi[2]])
        faces.extend(tuple(n+i for i in f) for f in [(0,2,6,4),(1,5,7,3),(0,4,5,1),(2,3,7,6),(0,1,3,2),(4,6,7,5)])
        data.clear_geometry();data.from_pydata(verts,[],faces);data.update()
        for p,m in zip(data.polygons,mats+[material]*6):p.material_index=m
    cuboid(result['Body'],(-.024,.085,.119),(.024,.210,.122),1)
    cuboid(result['Cover'],(-.025,.006,-.004),(.025,.138,-.002),1)
    cuboid(result['Cover'],(-.049,.116,-.007),(-.026,.14,.009),1)
    # Open canvas pouch: its origin is the mouth, body attachment is separate.
    data=bpy.data.meshes.new('SM_MG_AmmoPouch');data.from_pydata([],[],[])
    for material in original.data.materials:data.materials.append(material)
    pouch=bpy.data.objects.new(data.name,data);bpy.context.scene.collection.objects.link(pouch);result['AmmoPouch']=pouch
    # Clearance includes the measured glove envelope while carrying the box:
    # female X -8.52..2.03/Y -4.63..7.47 cm, male -8.56..6.77/-6.72..9.66.
    # A box-only 12.6 cm mouth put the retrieving fingers through its wall.
    for lo,hi in [((-.100,-.115,-.245),(.100,.115,-.237)),((-.100,-.115,-.237),(-.093,.115,0)),((.093,-.115,-.237),(.100,.115,0)),((-.093,-.115,-.237),(.093,-.108,0)),((-.093,.108,-.237),(.093,.115,0))]:cuboid(pouch,lo,hi,2)
    for obj in result.values():
        obj.data.uv_layers.new(name='PaletteUV')
        bpy.ops.object.select_all(action='DESELECT');obj.select_set(True);bpy.context.view_layer.objects.active=obj
        bpy.ops.export_scene.fbx(filepath=str(out/(obj.data.name+'.fbx')),use_selection=True,object_types={'MESH'},axis_forward='-Y',axis_up='Z',bake_anim=False,mesh_smooth_type='FACE',path_mode='STRIP')
        obj.hide_render=True;obj.hide_set(True)
    print('ARMY_MG_PARTITIONS',{k:len(v) for k,v in groups.items()},flush=True)
    return result
