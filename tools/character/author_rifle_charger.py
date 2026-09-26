"""Make a separate low-poly charger rail; cartridges retain their existing mesh.

Dimensions share SM_ReloadClip's local frame. The rail holds the case rims while
the cartridges slide down into the receiver, then leaves as an empty object.
"""
import bpy


def create(out):
    material=bpy.data.materials.get('Handling charcoal steel') or bpy.data.materials.new('Handling charcoal steel')
    material.diffuse_color=(.035,.042,.05,1)
    material.use_nodes=True
    shader=material.node_tree.nodes.get('Principled BSDF')
    shader.inputs['Base Color'].default_value=(.035,.042,.05,1)
    shader.inputs['Roughness'].default_value=.95
    vertices=[];faces=[]
    # U channel around the case rims, with a small upper grasping tab.
    for lo,hi in [((-.036,.012,-.0045),(.036,.015,.0045)),
                  ((-.036,.009,-.0045),(.036,.015,-.003)),
                  ((-.036,.009,.003),(.036,.015,.0045)),
                  ((.033,.012,-.006),(.041,.016,.006))]:
        offset=len(vertices)
        vertices.extend((x,y,z) for x in [lo[0],hi[0]] for y in [lo[1],hi[1]] for z in [lo[2],hi[2]])
        faces.extend(tuple(offset+i for i in f) for f in [(0,2,6,4),(1,5,7,3),(0,4,5,1),(2,3,7,6),(0,1,3,2),(4,6,7,5)])
    mesh=bpy.data.meshes.new('SM_RifleCharger');mesh.from_pydata(vertices,[],faces);mesh.update();mesh.materials.append(material)
    mesh.uv_layers.new(name='PaletteUV')
    obj=bpy.data.objects.new('SM_RifleCharger',mesh);bpy.context.scene.collection.objects.link(obj)
    bpy.ops.object.select_all(action='DESELECT');obj.select_set(True);bpy.context.view_layer.objects.active=obj
    bpy.ops.export_scene.fbx(filepath=str(out/'SM_RifleCharger.fbx'),use_selection=True,object_types={'MESH'},
        axis_forward='-Y',axis_up='Z',bake_anim=False,mesh_smooth_type='FACE',path_mode='STRIP')
    return obj
