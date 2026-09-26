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
sys.path.insert(0,str(Path(__file__).resolve().parent))
import author_male_rifle_pouch
import fit_authored_fingers
import repair_male_glove

args=sys.argv[sys.argv.index('--')+1:]
out=Path(args[0]);out.mkdir(parents=True,exist_ok=True)
manifest=json.loads(Path(args[2]).read_text())
articulated=manifest.get('articulated_pouch',False)
scene=bpy.context.scene;source=bpy.data.objects['Female_Mixamo_Rig']
source.animation_data.action=bpy.data.actions[manifest['clips'][0]['editable_action']]
scene.frame_set(1);bpy.context.view_layer.update()
with bpy.data.libraries.load(args[1],link=False) as (_, loaded):
    loaded.objects=['Male_Azure_Rig','Male_Azure_Skinned','Male_Coat_Cloth']
for obj in loaded.objects:
    assert obj is not None
    scene.collection.objects.link(obj)
rig=loaded.objects[0]
scene.frame_set(85);bpy.context.view_layer.update()
source_origin=rig.matrix_world.copy()
source_mesh_world={obj.name:obj.matrix_world.copy() for obj in loaded.objects if obj!=rig}
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

def fit_male_arms(target, operating, pouch_contact=None, pouch_weight=0.):
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
    if pouch_contact is not None and pouch_weight>0:
        old=world['WeaponGrip_R']
        world['WeaponGrip_R']=Matrix.LocRotScale(old.translation.lerp(pouch_contact.translation,pouch_weight),
            old.to_quaternion().slerp(pouch_contact.to_quaternion(),pouch_weight),old.to_scale())
    for side in ['Left','Right']:
        upper,lower,hand=['mixamorig:'+side+n for n in ['Arm','ForeArm','Hand']]
        control='WeaponGrip_'+side[0]
        a,e,h=[world[n].translation.copy() for n in [upper,lower,hand]]
        wrist=world[control].translation.copy()
        l1=(e-a).length;l2=(h-e).length
        axis=(wrist-a).normalized();distance=min((wrist-a).length,(l1+l2)*.999)
        wrist=a+axis*distance
        old_axis=(h-a).normalized()
        old_bend=e-a-old_axis*(e-a).dot(old_axis)
        bend=old_axis.rotation_difference(axis)@old_bend
        if bend.length<1e-5:bend=axis.cross(Vector((0,0,1)))
        if side=='Right':
            outward=world[upper].translation-world['mixamorig:LeftArm'].translation
            outward.z=0;outward.normalize()
            forward=Vector((0,0,1)).cross(outward).normalized()
            if forward.dot(world['WeaponSocket_R'].to_quaternion()@Vector((0,-1,0)))<0:forward=-forward
            # Carry a bend frame from a forward reach to the live wrist. A
            # fixed down/out pole became parallel to the close pouch reach,
            # swapping elbow sides as the wrist crossed that line.
            outside=forward.rotation_difference(axis)@(outward*.7+Vector((0,0,-.7)))
            outside.normalize();bend.normalize()
            if operating>.999:bend=outside
            else:
                angle=math.atan2(axis.dot(bend.cross(outside)),bend.dot(outside))
                bend=Quaternion(axis,angle*operating)@bend
        along=(l1*l1-l2*l2+distance*distance)/(2*distance)
        elbow=a+axis*along+bend.normalized()*math.sqrt(max(0,l1*l1-along*along))
        old_hand=world[hand].copy()
        for name,start,end,old_end in [(upper,a,elbow,e),(lower,elbow,wrist,h)]:
            old_start=world[name].translation.copy()
            q=(old_end-old_start).rotation_difference(end-start)@world[name].to_quaternion()
            world[name]=Matrix.LocRotScale(start,q,world[name].to_scale())
        world[hand]=Matrix.LocRotScale(wrist,world[control].to_quaternion(),old_hand.to_scale())
        if side=='Right' and operating>0:
            # Pronate the forearm with the grasp. Leaving all axial rotation
            # in the wrist twisted the cuff nearly 180 degrees at extraction,
            # producing an apparent hole even with repaired skin weights.
            # Swing remains the authored wrist bend; twist moves into the
            # forearm without changing any joint position or bone length.
            neutral=world[lower].to_quaternion()@rest_m[lower].to_quaternion().inverted()@rest_m[hand].to_quaternion()
            delta=world[hand].to_quaternion()@neutral.inverted()
            axis=(wrist-elbow).normalized()
            along=Vector((delta.x,delta.y,delta.z)).dot(axis)
            twist=Quaternion((delta.w,axis.x*along,axis.y*along,axis.z*along))
            if twist.magnitude>1e-6:
                twist.normalize();twist=Quaternion().slerp(twist,operating)
                world[lower]=Matrix.LocRotScale(elbow,twist@world[lower].to_quaternion(),world[lower].to_scale())
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
    previous_elbow=None;max_elbow_step=0.;max_elbow_frame=0;max_fingertip_error=0.
    for frame in range(1,clip['frames']+1):
        scene.frame_set(frame);bpy.context.view_layer.update()
        ev=source.evaluated_get(bpy.context.evaluated_depsgraph_get());target={}
        for bone in rig.data.bones:
            name=bone.name
            if name.startswith('Weapon'):continue
            if name in fingers:
                local=fingers[name].copy()
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
                   # Open the broad torso before the operating palm closes on
                   # the bolt (.06), not after the receiver has been drawn back.
                   # The old .16 ramp put the early reload elbow inside the vest,
                   # even when no action-to-action interpolation was active.
                   envelope(phase,0,.055,.90,1) if clip['name'].endswith('Reload') else 0.)
        pouch_contact=None;pouch_weight=0.
        if articulated and clip['name'].endswith('Reload'):
            hip_name='mixamorig:Hips';hand_name='mixamorig:RightHand'
            source_frame=(source.matrix_world@ev.pose.bones[hip_name].matrix)@(source.matrix_world@rest_s[hip_name]).inverted()
            male_frame=(rig.matrix_world@target[hip_name])@(rig.matrix_world@rest_m[hip_name]).inverted()
            bind_hand=source_frame.inverted()@(source.matrix_world@ev.pose.bones['WeaponGrip_R'].matrix)
            rest_delta=(source.matrix_world@rest_s[hand_name]).to_quaternion().inverted()@(rig.matrix_world@rest_m[hand_name]).to_quaternion()
            mapped=Matrix.LocRotScale(author_male_rifle_pouch.map_point(bind_hand.translation),bind_hand.to_quaternion()@rest_delta,bind_hand.to_scale())
            pouch_contact=male_frame@mapped
            # Fit the same fingertip pinch to the male glove, not a scaled
            # female wrist. Scaling that offset also scaled glove length and
            # left his wrist behind the pouch during extraction.
            tip_names=['mixamorig:RightHandThumb4','mixamorig:RightHandIndex4']
            source_tip=sum(((source.matrix_world@ev.pose.bones[n].matrix).translation for n in tip_names),Vector())/2
            source_hand=source.matrix_world@ev.pose.bones[hand_name].matrix
            source_tip_local=source_hand.inverted()@source_tip
            source_control=source.matrix_world@ev.pose.bones['WeaponGrip_R'].matrix
            bind_tip=source_frame.inverted()@(source_control@source_tip_local)
            mapped_tip=male_frame@author_male_rifle_pouch.map_point(bind_tip)
            male_hand=rig.matrix_world@target[hand_name]
            male_tip=sum(((rig.matrix_world@target[n]).translation for n in tip_names),Vector())/2
            male_tip_local=male_hand.inverted()@male_tip
            desired_direction=(male_frame.to_quaternion()@source_frame.to_quaternion().inverted()@source_control.to_quaternion()@source_tip_local).normalized()
            q=pouch_contact.to_quaternion()
            q=(q@male_tip_local).normalized().rotation_difference(desired_direction)@q
            pouch_contact=Matrix.LocRotScale(mapped_tip-q@male_tip_local,q,pouch_contact.to_scale())
            pouch_weight=envelope(phase,.205,.245,.405,.48)
        target=fit_male_arms(target,operating,pouch_contact,pouch_weight)
        finger_weight=(envelope(phase,.10,.20,.74,.95) if clip['name'].endswith('ShotBolt') else
                       envelope(phase,.03,.10,.89,.98) if clip['name'].endswith('Reload') else 0.)
        max_fingertip_error=max(max_fingertip_error,fit_authored_fingers.fit(target,ev,rest_s,rest_m,finger_weight))
        for p in rig.pose.bones:
            kwargs={'parent_matrix':target[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
            p.matrix_basis=p.bone.convert_local_to_pose(target[p.name],p.bone.matrix_local,invert=True,**kwargs)
            p.rotation_mode='QUATERNION'
            for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
        elbow=target['mixamorig:RightForeArm'].translation.copy()
        if previous_elbow is not None:
            step=(elbow-previous_elbow).length*100
            if step>max_elbow_step:max_elbow_step=step;max_elbow_frame=frame
        previous_elbow=elbow
    scene.frame_start=1;scene.frame_end=clip['frames'];scene.render.fps=60
    bpy.ops.object.select_all(action='DESELECT');rig.hide_set(False);rig.select_set(True);bpy.context.view_layer.objects.active=rig
    bpy.ops.export_scene.fbx(filepath=str(out/(clip['name']+'.fbx')),use_selection=True,object_types={'ARMATURE'},
        axis_forward='-Y',axis_up='Z',add_leaf_bones=False,use_armature_deform_only=False,bake_anim=True,
        bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,bake_anim_simplify_factor=0,bake_anim_step=1)
    clip['editable_action']=action.name
    clip['max_fingertip_fit_error_cm']=max_fingertip_error
    clip['max_elbow_step_cm']=max_elbow_step;clip['max_elbow_step_frame']=max_elbow_frame;clip['diagnostic_fps']=60
    print('ARMY_AUTHORED_MALE',clip['name'],flush=True)
# Keep the saved file useful for actual pose editing: show his skinned body and
# the rifle on his new action, rather than leaving the female source visible.
for obj in scene.objects:
    obj.hide_render=True;obj.hide_set(True)
for obj in loaded.objects:
    if obj!=rig:
        # Capture these before moving the parent rig. Reading matrix_world
        # afterward applies the rig's bind rotation a second time to the mesh.
        obj.parent=rig;obj.matrix_parent_inverse=Matrix.Identity(4)
        obj.matrix_world=rig.matrix_world@source_origin.inverted()@source_mesh_world[obj.name]
        for modifier in obj.modifiers:
            if modifier.type=='ARMATURE':modifier.object=rig
            elif modifier.type=='CLOTH':modifier.show_viewport=modifier.show_render=False
    obj.hide_render=False;obj.hide_viewport=False;obj.hide_set(False)
repair_male_glove.repair(rig,bpy.data.objects['Male_Azure_Skinned'],out)
manifest['hand_weights']='hand-weights.json'
if articulated:
    pouch_parts=author_male_rifle_pouch.create(rig,bpy.data.objects['Male_Azure_Skinned'],out)
    author_male_rifle_pouch.key_actions(pouch_parts[1],manifest['clips'])
    manifest['pouch_mask']='pouch-mask.json'
    manifest['pouch_hinge_cm']=[author_male_rifle_pouch.HINGE.x*100,-author_male_rifle_pouch.HINGE.y*100,author_male_rifle_pouch.HINGE.z*100]
(out/'manifest.json').write_text(json.dumps(manifest,indent=2))
gun=bpy.data.objects['Rifle_Azure_Equipped'].copy();gun.data=gun.data.copy();scene.collection.objects.link(gun)
gun.name='Male_Authored_Rifle';gun.animation_data_clear();gun.parent=None;gun.matrix_world=Matrix.Identity(4)
for constraint in list(gun.constraints):gun.constraints.remove(constraint)
constraint=gun.constraints.new('COPY_TRANSFORMS');constraint.target=rig;constraint.subtarget='WeaponSocket_R'
gun.hide_render=False;gun.hide_viewport=False;gun.hide_set(False)
# The editable male body uses an atlas; keep it available on another computer.
for obj in loaded.objects:
    if obj.type!='MESH':continue
    for material in obj.data.materials:
        if not material or not material.use_nodes:continue
        for node in material.node_tree.nodes:
            if node.type=='TEX_IMAGE' and node.image and not node.image.packed_file:
                node.image.pack()
scene.frame_set(1)
bpy.ops.wm.save_as_mainfile(filepath=str(out/'Male_Rifle_Handling_Authored.blend'))
