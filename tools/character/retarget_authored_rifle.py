"""Blender: authored female .blend --python this.py -- OUT MALE_SOURCE FEMALE_MANIFEST.

Use the fitted male bind pose and existing glove pose. Weapon size stays unchanged;
body translation scales with the rig, and runtime contact IK finishes the grips.
"""
import json
import math
import sys
from pathlib import Path
import bpy
from mathutils import Matrix, Quaternion, Vector

args=sys.argv[sys.argv.index('--')+1:]
out=Path(args[0]);out.mkdir(parents=True,exist_ok=True)
manifest=json.loads(Path(args[2]).read_text())
scene=bpy.context.scene;source=bpy.data.objects['Female_Mixamo_Rig']
source.animation_data.action=bpy.data.actions[manifest['clips'][0]['editable_action']]
scene.frame_set(1);bpy.context.view_layer.update()
source_finger_base={p.name:p.matrix_basis.to_quaternion() for p in source.pose.bones if 'Hand' in p.name and p.name.rsplit('Hand',1)[1]}
with bpy.data.libraries.load(args[1],link=False) as (_, loaded):
    loaded.objects=['Male_Azure_Rig','Male_Azure_Skinned','Male_Coat_Cloth']
for obj in loaded.objects:
    assert obj is not None
    scene.collection.objects.link(obj)
rig=loaded.objects[0];source_origin=rig.matrix_world.copy()
scene.frame_set(85);bpy.context.view_layer.update()
evaluated=rig.evaluated_get(bpy.context.evaluated_depsgraph_get());fingers={}
for bone in rig.data.bones:
    if 'Hand' in bone.name and bone.name.rsplit('Hand',1)[1]:
        p=evaluated.pose.bones[bone.name]
        fingers[bone.name]=bone.convert_local_to_pose(p.matrix,bone.matrix_local,invert=True,
            parent_matrix=p.parent.matrix,parent_matrix_local=bone.parent.matrix_local)
rig.animation_data_clear();rig.matrix_world.translation=(0,0,0)
for p in rig.pose.bones:
    for constraint in list(p.constraints):p.constraints.remove(constraint)
    p.matrix_basis=Matrix.Identity(4)
for bone in rig.data.bones:bone.use_deform=True
rest_s={b.name:b.matrix_local.copy() for b in source.data.bones}
rest_m={b.name:b.matrix_local.copy() for b in rig.data.bones}
chest='mixamorig:Spine2'

def smooth(x):
    x=max(0.,min(1.,x))
    return x*x*(3-2*x)

def envelope(t,a,b,c,d):
    return smooth((t-a)/(b-a))*(1-smooth((t-c)/(d-c)))

def fit_male_arms(target, operating):
    """Author the broad-chested body's reach, including its elbow volume.

    Copying female rotations left the male wrists 12–16 cm off their controls.
    The male opens his bladed stance during manipulation and carries the receiver
    nearer his operating side. Solve both arms in the editable source, retaining
    bone lengths and the original finger pose relative to each wrist.
    """
    world={n:rig.matrix_world@m for n,m in target.items()}
    spine='mixamorig:Spine';pivot=world[spine].translation.copy()
    turn=Quaternion((0,0,1),math.radians(30*operating))
    for bone in rig.data.bones:
        if bone.name.startswith('Weapon'):continue
        parent=bone
        while parent and parent.name!=spine:parent=parent.parent
        if parent:
            m=world[bone.name]
            world[bone.name]=Matrix.LocRotScale(pivot+turn@(m.translation-pivot),turn@m.to_quaternion(),m.to_scale())
    for name,m in world.items():
        if name.startswith('Weapon'):m.translation+=Vector((-.06*operating,0,0))
    for side in ['Left','Right']:
        upper,lower,hand=['mixamorig:'+side+n for n in ['Arm','ForeArm','Hand']]
        control='WeaponGrip_'+side[0]
        a,e,h=[world[n].translation.copy() for n in [upper,lower,hand]]
        wrist=world[control].translation.copy()
        l1=(e-a).length;l2=(h-e).length
        axis=(wrist-a).normalized();distance=min((wrist-a).length,(l1+l2)*.999)
        wrist=a+axis*distance
        bend=(e-a)-axis*(e-a).dot(axis)
        if bend.length<1e-5:bend=Vector((-1 if side=='Right' else 1,-1,-1))
        if side=='Right':
            # The wide vest needs a forward operating elbow throughout the
            # insertion/withdrawal arc, including between its held key poses.
            outside=Vector((-.20,-.28,-.20))
            outside-=axis*outside.dot(axis)
            if outside.length>1e-5:
                bend=bend.normalized().lerp(outside.normalized(),.8*operating)
        along=(l1*l1-l2*l2+distance*distance)/(2*distance)
        elbow=a+axis*along+bend.normalized()*math.sqrt(max(0,l1*l1-along*along))
        old_hand=world[hand].copy()
        for name,start,end,old_end in [(upper,a,elbow,e),(lower,elbow,wrist,h)]:
            old_start=world[name].translation.copy()
            q=(old_end-old_start).rotation_difference(end-start)@world[name].to_quaternion()
            world[name]=Matrix.LocRotScale(start,q,world[name].to_scale())
        world[hand]=Matrix.LocRotScale(wrist,world[control].to_quaternion(),old_hand.to_scale())
        for bone in rig.data.bones:
            if bone.name.startswith(hand) and bone.name!=hand:
                world[bone.name]=world[hand]@old_hand.inverted()@world[bone.name]
    inverse=rig.matrix_world.inverted()
    return {n:inverse@m for n,m in world.items()}

for clip in manifest['clips']:
    source.animation_data.action=bpy.data.actions[clip['editable_action']]
    pole=bpy.data.objects.get('Authored_RightElbow')
    if pole:pole.animation_data.action=bpy.data.actions['Elbow_'+clip['name'].removeprefix('A_Rifle_')]
    action=bpy.data.actions.new('Authored_Male_'+clip['name']);action.use_fake_user=True
    rig.animation_data_create();rig.animation_data.action=action
    previous_elbow=None;max_elbow_step=0.
    for frame in range(1,clip['frames']+1):
        scene.frame_set(frame);bpy.context.view_layer.update()
        ev=source.evaluated_get(bpy.context.evaluated_depsgraph_get());target={}
        for bone in rig.data.bones:
            name=bone.name
            if name.startswith('Weapon'):continue
            if name in fingers:
                gesture=(source_finger_base[name].inverted()@source.pose.bones[name].matrix_basis.to_quaternion()
                         if name in source_finger_base else Quaternion())
                local=fingers[name].copy()
                local=Matrix.LocRotScale(local.translation,local.to_quaternion()@gesture,local.to_scale())
                target[name]=bone.convert_local_to_pose(local,bone.matrix_local,
                    parent_matrix=target[bone.parent.name],parent_matrix_local=bone.parent.matrix_local)
                continue
            sp=ev.pose.bones[name]
            rotation=sp.matrix.to_quaternion()@rest_s[name].to_quaternion().inverted()@rest_m[name].to_quaternion()
            position=(target[bone.parent.name]@(rest_m[bone.parent.name].inverted()@rest_m[name]).translation) if bone.parent else bone.head_local+(sp.matrix.translation-source.data.bones[name].head_local)*1.08
            target[name]=Matrix.Translation(position)@rotation.to_matrix().to_4x4()
        socket=ev.pose.bones['WeaponSocket_R'].matrix.copy()
        relative=ev.pose.bones[chest].matrix.inverted()@socket;relative.translation*=1.08
        gun=target[chest]@rest_m[chest].inverted()@rest_s[chest]@relative
        gun.translation=(target[chest]@relative).translation
        for bone in rig.data.bones:
            name=bone.name
            if not name.startswith('Weapon'):continue
            target[name]=gun@socket.inverted()@ev.pose.bones[name].matrix
            if name in ['WeaponGrip_L','WeaponGrip_R']:
                hand='mixamorig:'+('Left' if name.endswith('_L') else 'Right')+'Hand'
                rotation=target[name].to_quaternion()@rest_s[hand].to_quaternion().inverted()@rest_m[hand].to_quaternion()
                target[name]=Matrix.Translation(target[name].translation)@rotation.to_matrix().to_4x4()
        phase=(frame-1)/(clip['frames']-1)
        operating=(envelope(phase,.10,.22,.72,.94) if clip['name'].endswith('ShotBolt') else
                   envelope(phase,0,.16,.90,1) if clip['name'].endswith('Reload') else 0.)
        target=fit_male_arms(target,operating)
        for p in rig.pose.bones:
            kwargs={'parent_matrix':target[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
            p.matrix_basis=p.bone.convert_local_to_pose(target[p.name],p.bone.matrix_local,invert=True,**kwargs)
            p.rotation_mode='QUATERNION'
            for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
        elbow=target['mixamorig:RightForeArm'].translation.copy()
        if previous_elbow is not None:max_elbow_step=max(max_elbow_step,(elbow-previous_elbow).length*100)
        previous_elbow=elbow
    scene.frame_start=1;scene.frame_end=clip['frames'];scene.render.fps=60
    bpy.ops.object.select_all(action='DESELECT');rig.hide_set(False);rig.select_set(True);bpy.context.view_layer.objects.active=rig
    bpy.ops.export_scene.fbx(filepath=str(out/(clip['name']+'.fbx')),use_selection=True,object_types={'ARMATURE'},
        axis_forward='-Y',axis_up='Z',add_leaf_bones=False,use_armature_deform_only=False,bake_anim=True,
        bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,bake_anim_simplify_factor=0,bake_anim_step=1)
    clip['editable_action']=action.name
    clip['max_elbow_step_cm']=max_elbow_step;clip['diagnostic_fps']=60
    print('ARMY_AUTHORED_MALE',clip['name'],flush=True)
(out/'manifest.json').write_text(json.dumps(manifest,indent=2))
# Keep the saved file useful for actual pose editing: show his skinned body and
# the rifle on his new action, rather than leaving the female source visible.
for obj in scene.objects:
    obj.hide_render=True;obj.hide_set(True)
for obj in loaded.objects:
    if obj!=rig:
        original_world=obj.matrix_world.copy();obj.parent=rig
        obj.matrix_world=rig.matrix_world@source_origin.inverted()@original_world
        for modifier in obj.modifiers:
            if modifier.type=='ARMATURE':modifier.object=rig
            elif modifier.type=='CLOTH':modifier.show_viewport=modifier.show_render=False
    obj.hide_render=False;obj.hide_viewport=False;obj.hide_set(False)
gun=bpy.data.objects['Rifle_Azure_Equipped'].copy();gun.data=gun.data.copy();scene.collection.objects.link(gun)
gun.name='Male_Authored_Rifle';gun.animation_data_clear();gun.parent=None;gun.matrix_world=Matrix.Identity(4)
for constraint in list(gun.constraints):gun.constraints.remove(constraint)
constraint=gun.constraints.new('COPY_TRANSFORMS');constraint.target=rig;constraint.subtarget='WeaponSocket_R'
gun.hide_render=False;gun.hide_viewport=False;gun.hide_set(False)
scene.frame_set(1)
bpy.ops.wm.save_as_mainfile(filepath=str(out/'Male_Rifle_Handling_Authored.blend'))
