"""Retarget the approved 49-clip library onto the fitted Tripo male bind pose.

Run in Blender with approved_grip_C.blend loaded. The new skeleton has its own
animation assets; it must never be assigned the earlier female/proxy skeleton.
"""
import json
from pathlib import Path

import bpy
from mathutils import Matrix, Vector

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / 'art/characters/male_runtime'
OUT.mkdir(exist_ok=True)
scene = bpy.context.scene
source = bpy.data.objects['Female_Mixamo_Rig']
manifest = json.loads((ROOT / 'art/characters/female_rifle/manifest.json').read_text())
for track in source.animation_data.nla_tracks:
    track.mute = True
with bpy.data.libraries.load(str(ROOT / 'art/characters/gunners_v02/Azure_Gunners_Hands_Cloth_v02.blend'), link=False) as (a, b):
    b.objects = ['Male_Azure_Rig', 'Male_Azure_Skinned', 'Male_Coat_Cloth']
for obj in b.objects:
    if obj.name not in scene.objects:
        scene.collection.objects.link(obj)
rig, body, coat = b.objects
scene.frame_set(85)
bpy.context.view_layer.update()
evaluated = rig.evaluated_get(bpy.context.evaluated_depsgraph_get())
fingers = {}
for bone in rig.data.bones:
    if 'Hand' in bone.name and bone.name.rsplit('Hand', 1)[1]:
        pose = evaluated.pose.bones[bone.name]
        fingers[bone.name] = bone.convert_local_to_pose(pose.matrix, bone.matrix_local, invert=True,
            parent_matrix=pose.parent.matrix, parent_matrix_local=bone.parent.matrix_local)
offset = rig.matrix_world.translation.copy()
for obj in [body, coat]:
    world = obj.matrix_world.copy()
    world.translation -= offset
    obj.parent = None
    obj.matrix_world = world
rig.animation_data_clear()
rig.matrix_world.translation = (0, 0, 0)
for pose in rig.pose.bones:
    for constraint in list(pose.constraints):
        pose.constraints.remove(constraint)
    pose.matrix_basis = Matrix.Identity(4)
for bone in rig.data.bones:
    bone.use_deform = True
for obj in [body, coat]:
    world = obj.matrix_world.copy()
    obj.animation_data_clear()
    obj.parent = rig
    obj.matrix_world = world
    for mod in list(obj.modifiers):
        if mod.type == 'ARMATURE':
            mod.object = rig
        else:
            obj.modifiers.remove(mod)
# The runtime fallback follows the two thighs independently. Blender's cloth
# remains in the authoring scene; no claim that FBX contains its simulation.
for group in list(coat.vertex_groups):
    coat.vertex_groups.remove(group)
for name in ['Hips', 'LeftUpLeg', 'RightUpLeg']:
    coat.vertex_groups.new(name='mixamorig:' + name)
for v in coat.data.vertices:
    p = coat.matrix_world @ v.co
    t = max(0, min(.9, (1.13 - p.z) / .27))
    side = 'Left' if p.x >= 0 else 'Right'
    coat.vertex_groups['mixamorig:Hips'].add([v.index], 1 - t, 'REPLACE')
    if t:
        coat.vertex_groups['mixamorig:' + side + 'UpLeg'].add([v.index], t, 'REPLACE')


def export(name, objects, animated=False):
    bpy.ops.object.select_all(action='DESELECT')
    for obj in objects:
        obj.hide_set(False)
        obj.hide_viewport = False
        obj.select_set(True)
    bpy.context.view_layer.objects.active = objects[0]
    bpy.ops.export_scene.fbx(filepath=str(OUT / (name + '.fbx')), use_selection=True,
        object_types={'ARMATURE', 'MESH'}, axis_forward='-Y', axis_up='Z',
        add_leaf_bones=False, use_armature_deform_only=False, bake_anim=animated,
        bake_anim_use_all_actions=False, bake_anim_use_nla_strips=False,
        bake_anim_simplify_factor=0, bake_anim_step=1, mesh_smooth_type='OFF',
        path_mode='COPY', embed_textures=True)


rig.data.pose_position = 'REST'
export('SK_Male', [rig, body, coat])
rig.data.pose_position = 'POSE'
rest_s = {b.name: b.matrix_local.copy() for b in source.data.bones}
rest_m = {b.name: b.matrix_local.copy() for b in rig.data.bones}
chest = 'mixamorig:Spine2'
report = []
for clip in manifest['clips']:
    source.animation_data.action = bpy.data.actions[clip['source_action']]
    action = bpy.data.actions.new('RuntimeMale_' + clip['name'])
    rig.animation_data_create()
    rig.animation_data.action = action
    for frame in range(1, clip['frames'] + 1):
        scene.frame_set(frame)
        bpy.context.view_layer.update()
        ev = source.evaluated_get(bpy.context.evaluated_depsgraph_get())
        target = {}
        for bone in rig.data.bones:
            name = bone.name
            if name.startswith('Weapon'):
                continue
            if name in fingers:
                # Release fingers with the same death window as runtime hand IK.
                grip = 1 if 'death' not in clip['name'] else max(0, 1 - (frame - 7) / 5)
                local = Matrix.Identity(4).lerp(fingers[name], grip)
                target[name] = bone.convert_local_to_pose(local, bone.matrix_local,
                    parent_matrix=target[bone.parent.name], parent_matrix_local=bone.parent.matrix_local)
                continue
            sp = ev.pose.bones[name]
            rotation = sp.matrix.to_quaternion() @ rest_s[name].to_quaternion().inverted() @ rest_m[name].to_quaternion()
            if bone.parent:
                position = target[bone.parent.name] @ (rest_m[bone.parent.name].inverted() @ rest_m[name]).translation
            else:
                position = bone.head_local + (sp.matrix.translation - source.data.bones[name].head_local) * 1.08
            target[name] = Matrix.Translation(position) @ rotation.to_matrix().to_4x4()
        socket = ev.pose.bones['WeaponSocket_R'].matrix.copy()
        # Preserve weapon size while placing its carrier on the new torso.
        relative = ev.pose.bones[chest].matrix.inverted() @ socket
        relative.translation *= 1.08
        # Body-rest axis fitting must not rotate the independently authored gun.
        gun = target[chest] @ rest_m[chest].inverted() @ rest_s[chest] @ relative
        gun.translation = (target[chest] @ relative).translation
        for bone in rig.data.bones:
            name = bone.name
            if not name.startswith('Weapon'):
                continue
            if name == 'Weapon_Free':
                target[name] = ev.pose.bones[name].matrix.copy()
                target[name].translation *= 1.08
            else:
                target[name] = gun @ socket.inverted() @ ev.pose.bones[name].matrix
                if name in ['WeaponGrip_L', 'WeaponGrip_R']:
                    hand = 'mixamorig:' + ('Left' if name.endswith('_L') else 'Right') + 'Hand'
                    rotation = target[name].to_quaternion() @ rest_s[hand].to_quaternion().inverted() @ rest_m[hand].to_quaternion()
                    target[name] = Matrix.Translation(target[name].translation) @ rotation.to_matrix().to_4x4()
        for pose in rig.pose.bones:
            kwargs = {'parent_matrix': target[pose.parent.name], 'parent_matrix_local': pose.parent.bone.matrix_local} if pose.parent else {}
            pose.matrix_basis = pose.bone.convert_local_to_pose(target[pose.name], pose.bone.matrix_local, invert=True, **kwargs)
            pose.rotation_mode = 'QUATERNION'
            for prop in ['location', 'rotation_quaternion', 'scale']:
                pose.keyframe_insert(prop, frame=frame, group=pose.name)
    scene.frame_start, scene.frame_end = 1, clip['frames']
    scene.render.fps = 60
    export(clip['name'], [rig], True)
    rig.animation_data_clear()
    bpy.data.actions.remove(action)
    report.append(clip)
    print('MALE_EXPORTED', clip['name'], flush=True)
manifest['clips'] = report
manifest['bones'] = [b.name for b in rig.data.bones]
manifest['body'] = 'Actual Tripo male, fitted 67-bone bind pose, 1.836 m; five-finger hands'
manifest['cloth'] = 'Skinned two-panel fallback; authoring cloth remains in gunners_v02'
(OUT / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
print('ACTUAL_MALE_COMPLETE', len(report), flush=True)
