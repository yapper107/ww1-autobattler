"""Bake the reviewed MG grip pose and refined weapon into the runtime contracts."""
import json
from pathlib import Path
import bpy
import bmesh
from mathutils import Matrix, Vector

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / 'art/characters/gunner_runtime'
OUT.mkdir(exist_ok=True)
scene = bpy.context.scene
for ob in scene.objects:
    for mod in ob.modifiers:
        if mod.type == 'CLOTH':
            mod.show_viewport = mod.show_render = False
scene.frame_set(85)
bpy.context.view_layer.update()
# Native refined gun +X becomes the existing runtime socket's +Y after FBX.
axes = Matrix(((0, 1, 0, 0), (-1, 0, 0, .5676), (0, 0, 1, .08224), (0, 0, 0, 1)))


def export(path, objects, animate=False):
    bpy.ops.object.select_all(action='DESELECT')
    for ob in objects:
        ob.hide_set(False)
        ob.hide_viewport = False
        ob.select_set(True)
    bpy.context.view_layer.objects.active = objects[0]
    bpy.ops.export_scene.fbx(filepath=str(path), use_selection=True, object_types={'ARMATURE', 'MESH'},
        axis_forward='-Y', axis_up='Z', add_leaf_bones=False, use_armature_deform_only=False,
        bake_anim=animate, bake_anim_use_all_actions=False, bake_anim_use_nla_strips=False,
        bake_anim_simplify_factor=0, bake_anim_step=1, mesh_smooth_type='OFF', path_mode='STRIP')


original = bpy.data.objects['Machine_Gun_Refined']
tip_x = max(v.co.x for v in original.data.vertices)
tips = [v.co for v in original.data.vertices if v.co.x > tip_x - .005]
tip = sum(tips, Vector()) / len(tips)
muzzle = axes @ tip
palette = {}
for mat in original.data.materials:
    shader = next(n for n in mat.node_tree.nodes if n.type == 'BSDF_PRINCIPLED')
    palette[mat.name] = list(shader.inputs['Base Color'].default_value)
for box in [False, True]:
    ob = original.copy()
    ob.data = original.data.copy()
    scene.collection.objects.link(ob)
    ob.animation_data_clear()
    ob.parent = None
    ob.matrix_world = Matrix.Identity(4)
    for v in ob.data.vertices:
        v.co = axes @ v.co
    bm = bmesh.new()
    bm.from_mesh(ob.data)
    bmesh.ops.delete(bm, geom=[f for f in bm.faces if (f.material_index == 2) != box], context='FACES')
    bm.to_mesh(ob.data)
    bm.free()
    export(OUT / ('SM_MGBox.fbx' if box else 'SM_MachineGun.fbx'), [ob])
    bpy.data.objects.remove(ob, do_unlink=True)
for gender, name in [('Male', 'Male_Azure_Rig'), ('Female', 'Female_Mixamo_Rig')]:
    scene.frame_set(85)
    bpy.context.view_layer.update()
    source = bpy.data.objects[name]
    deps = bpy.context.evaluated_depsgraph_get()
    ev = source.evaluated_get(deps)
    target = {p.name: p.matrix.copy() for p in ev.pose.bones}
    gun = bpy.data.objects[gender + '_Machine_Gun'].evaluated_get(deps)
    socket = source.matrix_world.inverted() @ gun.matrix_world @ axes.inverted()
    print('GUNNER_SOURCE',gender,'hip',list(ev.pose.bones['mixamorig:Hips'].matrix.translation),'gun',list(socket.translation),'hand',list(ev.pose.bones['mixamorig:LeftHand'].matrix.translation),flush=True)
    target['WeaponSocket_R'] = socket
    target['WeaponMuzzle'] = socket @ Matrix.Translation(muzzle)
    for side, suffix in [('Left', 'L'), ('Right', 'R')]:
        target['WeaponGrip_' + suffix] = ev.pose.bones['mixamorig:' + side + 'Hand'].matrix.copy()
    source.name = name + "_Authoring"
    rig = source.copy()
    rig.name = "Male_Azure_Rig" if gender == "Male" else "SoldierRig"
    rig.data = source.data.copy()
    scene.collection.objects.link(rig)
    rig.animation_data_clear()
    rig.matrix_world.translation = (0, 0, 0)
    for p in rig.pose.bones:
        for c in list(p.constraints):
            p.constraints.remove(c)
    for b in rig.data.bones:
        b.use_deform = True
    rig.animation_data_create()
    rig.animation_data.action = bpy.data.actions.new(gender + '_RuntimeMG')
    for p in rig.pose.bones:
        kw = {'parent_matrix': target[p.parent.name], 'parent_matrix_local': p.parent.bone.matrix_local} if p.parent else {}
        p.matrix_basis = p.bone.convert_local_to_pose(target[p.name], p.bone.matrix_local, invert=True, **kw)
        p.rotation_mode = 'QUATERNION'
        for frame in [1, 61]:
            for prop in ['location', 'rotation_quaternion', 'scale']:
                p.keyframe_insert(prop, frame=frame, group=p.name)
    scene.frame_start, scene.frame_end = 1, 61
    scene.render.fps = 60
    scene.frame_set(1)
    bpy.context.view_layer.update()
    print('BAKED_CHECK', gender, 'root', rig.name, list(rig.matrix_world.to_euler()), 'socket', list(rig.evaluated_get(bpy.context.evaluated_depsgraph_get()).pose.bones['WeaponSocket_R'].matrix.translation), flush=True)
    export(OUT / ('A_' + gender + '_mg_aiming.fbx'), [rig], True)
    bpy.data.objects.remove(rig, do_unlink=True)
    source.name = name
(OUT / 'manifest.json').write_text(json.dumps({'palette_linear': palette, 'muzzle_cm': [muzzle.x * 100, -muzzle.y * 100, muzzle.z * 100], 'source': 'gunners_v02 reviewed grips'}, indent=2))
print('RUNTIME_GUNNERS_EXPORTED', list(muzzle * 100), flush=True)
