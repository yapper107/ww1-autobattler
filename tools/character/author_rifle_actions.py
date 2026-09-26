"""Author editable rifle actions on the approved female rig, then bake portable FBX.

Blender: approved_grip_C.blend --python this.py -- OUTPUT
No motion pack is downloaded. The existing idle supplies the bind-compatible
starting pose; the action, body response, weapon and hand paths are keyed here.
Units below are metres in Blender world space (the soldier faces -Y).
"""
import json
import math
import sys
from pathlib import Path

import bpy
from mathutils import Matrix, Quaternion, Vector

OUT = Path(sys.argv[sys.argv.index('--') + 1])
OUT.mkdir(parents=True, exist_ok=True)
scene = bpy.context.scene
scene.render.fps = 60
rig = bpy.data.objects['Female_Mixamo_Rig']
for track in rig.animation_data.nla_tracks:
    track.mute = True
rig.animation_data.action = bpy.data.actions['Rifle_idle_aiming']
scene.frame_set(1)
bpy.context.view_layer.update()
base = {p.name: p.matrix_basis.copy() for p in rig.pose.bones}
world = {p.name: rig.matrix_world @ p.matrix for p in rig.pose.bones}
rig.animation_data.action = None
inv = rig.matrix_world.inverted()
HIP, CHEST, HEAD = ['mixamorig:' + n for n in ['Hips', 'Spine', 'Head']]
GUN = 'WeaponSocket_R'
gun_base = world[GUN]
grips = {s: gun_base.inverted() @ world['WeaponGrip_' + s] for s in ['R', 'L']}
palm = world['mixamorig:RightHand'].inverted() @ world['mixamorig:RightHandMiddle1'].translation
palm *= .65


def smooth(t):
    t = min(1., max(0., t))
    return t*t*(3-2*t)


def envelope(t, begin, full, release, end):
    return smooth((t-begin)/(full-begin))*(1-smooth((t-release)/(end-release)))


def path(keys, t):
    """Cubic Hermite path; shared tangents keep velocity through intermediate keys.

    Explicit repeated positions create contact/anticipation holds. Endpoint
    tangents are zero so clips can join the reference without a velocity pop.
    """
    if t <= keys[0][0]:
        return Vector(keys[0][1])
    if t >= keys[-1][0]:
        return Vector(keys[-1][1])
    def tangent(i):
        if i == 0 or i == len(keys)-1:
            return Vector((0,0,0))
        before, here, after = [Vector(keys[j][1]) for j in [i-1,i,i+1]]
        if (before-here).length < 1e-7 or (after-here).length < 1e-7:
            return Vector((0,0,0))
        return (after-before)/(keys[i+1][0]-keys[i-1][0])
    for i, (a,b) in enumerate(zip(keys,keys[1:])):
        if a[0] <= t <= b[0]:
            dt=b[0]-a[0];u=(t-a[0])/dt
            return ((2*u**3-3*u*u+1)*Vector(a[1])+(u**3-2*u*u+u)*dt*tangent(i)
                    +(-2*u**3+3*u*u)*Vector(b[1])+(u**3-u*u)*dt*tangent(i+1))


def pose_world(name, matrix):
    rig.pose.bones[name].matrix = inv @ matrix
    bpy.context.view_layer.update()


def rotate_body(name, degrees):
    m=rig.matrix_world @ rig.pose.bones[name].matrix
    q=(Quaternion((0,0,1),math.radians(degrees[2]))
       @Quaternion((0,1,0),math.radians(degrees[1]))
       @Quaternion((1,0,0),math.radians(degrees[0])))
    pose_world(name, Matrix.LocRotScale(m.translation,q@m.to_quaternion(),m.to_scale()))


# Keep the source foot contacts while the pelvis transfers load. Constraints
# live in the editable scene; the export contains their evaluated transforms.
for side in ['Left','Right']:
    foot=world['mixamorig:'+side+'Foot'].translation
    target=bpy.data.objects.new('Authored_'+side+'FootPlant',None)
    scene.collection.objects.link(target);target.location=foot
    constraint=rig.pose.bones['mixamorig:'+side+'Leg'].constraints.new('IK')
    constraint.name='Authored planted ankle';constraint.target=target
    constraint.chain_count=2;constraint.use_stretch=False;constraint.iterations=64
    # Copy the original ankle orientation as the shin solve changes underneath it.
    rotation=rig.pose.bones['mixamorig:'+side+'Foot'].constraints.new('COPY_ROTATION')
    target.rotation_mode='QUATERNION';target.rotation_quaternion=world['mixamorig:'+side+'Foot'].to_quaternion()
    rotation.target=target

for obj in scene.objects:
    if obj.type=='MESH':
        for mod in obj.modifiers:
            if mod.type=='CLOTH':mod.show_viewport=False;mod.show_render=False

# The belt pouches are rigid equipment. Keep the editable scene consistent with
# the normalized Unreal mesh's pouch-weight repair, without changing its inputs.
body_mesh=bpy.data.objects['Female_Azure_Body_ClothReady']
pouch_vertices=set()
for polygon in body_mesh.data.polygons:
    material=body_mesh.data.materials[polygon.material_index].name.lower()
    if 'olive' in material and 'webbing' in material:
        for vertex in polygon.vertices:
            if .90<(body_mesh.matrix_world@body_mesh.data.vertices[vertex].co).z<1.10:
                pouch_vertices.add(vertex)
assert len(pouch_vertices)==329,len(pouch_vertices)
for vertex in pouch_vertices:
    for group in list(body_mesh.data.vertices[vertex].groups):
        body_mesh.vertex_groups[group.group].remove([vertex])
body_mesh.vertex_groups['mixamorig:Hips'].add(sorted(pouch_vertices),1.,'REPLACE')

# An authored elbow arc must survive the wrist correction. Fit the pole's roll
# to the existing firing pose first, then move it with the operating arm.
elbow_pole=bpy.data.objects.new('Authored_RightElbow',None)
scene.collection.objects.link(elbow_pole)
elbow_home=world['mixamorig:RightForeArm'].translation
elbow_pole.location=elbow_home+Vector((-.15,0,-.05))
elbow_constraint=next(c for c in rig.pose.bones['mixamorig:RightForeArm'].constraints if c.type=='IK')
elbow_constraint.pole_target=elbow_pole
best=(float('inf'),0.)
for degree in range(-180,181,5):
    elbow_constraint.pole_angle=math.radians(degree);bpy.context.view_layer.update()
    ev=rig.evaluated_get(bpy.context.evaluated_depsgraph_get())
    position=(rig.matrix_world@ev.pose.bones['mixamorig:RightForeArm'].matrix).translation
    best=min(best,((position-elbow_home).length,degree))
elbow_constraint.pole_angle=math.radians(best[1])
shoulder_home=world['mixamorig:RightArm'].translation
wrist_home=world['mixamorig:RightHand'].translation
arm_axis_home=(wrist_home-shoulder_home).normalized()
pole_offset_home=elbow_pole.location-(shoulder_home+wrist_home)*.5

finger_names=[f'mixamorig:RightHand{digit}{joint}' for digit in ['Thumb','Index','Middle'] for joint in [1,2,3]]

def finger_pose(tips):
    """Fit a deliberate fingertip pose once; the action keys blend these poses.

    Targets are metres in the glove's own frame. The thumb/index oppose each
    other for extraction, then the thumb straightens to press the cartridges.
    This three-digit low-poly hand retains its existing bones and skin.
    """
    for name in finger_names:rig.pose.bones[name].matrix_basis=Matrix.Identity(4)
    bpy.context.view_layer.update()
    hand=rig.pose.bones['mixamorig:RightHand'].matrix.copy()
    for digit,tip in tips.items():
        goal=hand@Vector(tip)
        end=rig.pose.bones[f'mixamorig:RightHand{digit}3']
        for _ in range(36):
            for joint in [3,2,1]:
                p=rig.pose.bones[f'mixamorig:RightHand{digit}{joint}']
                position=p.matrix.translation.copy()
                current=end.tail-position;desired=goal-position
                delta=current.rotation_difference(desired)
                # Small CCD steps keep the knuckle orientation stable.
                delta=Quaternion().slerp(delta,.55)
                matrix=p.matrix.copy()
                p.matrix=Matrix.LocRotScale(position,delta@matrix.to_quaternion(),matrix.to_scale())
                bpy.context.view_layer.update()
        assert (end.tail-goal).length<.008,(digit,(end.tail-goal).length)
    result={n:rig.pose.bones[n].matrix_basis.to_quaternion().copy() for n in finger_names}
    for name in finger_names:rig.pose.bones[name].matrix_basis=base[name]
    bpy.context.view_layer.update()
    return result

finger_poses={'trigger':{n:base[n].to_quaternion() for n in finger_names},
              'open':{n:Quaternion() for n in finger_names}}
finger_poses['pinch']=finger_pose({'Thumb':(.004,.133,.035),'Index':(.004,.142,.037),'Middle':(-.025,.128,.047)})
finger_poses['knob']=finger_pose({'Thumb':(.012,.110,.037),'Index':(-.005,.117,.057),'Middle':(-.026,.115,.048)})
finger_poses['press']=finger_pose({'Thumb':(-.004,.132,.015),'Index':(.010,.154,.060),'Middle':(-.02,.140,.066)})


def author(kind, duration):
    editable=bpy.data.actions.new('Authored_Rifle_'+kind)
    rig.animation_data.action=editable
    elbow_pole.animation_data_create();elbow_pole.animation_data.action=bpy.data.actions.new('Elbow_'+kind)
    elbow_pole.animation_data.action.use_fake_user=True
    frames=round(duration*60)+1
    samples=[]
    for frame in range(1,frames+1):
        scene.frame_set(frame)
        for name,m in base.items():rig.pose.bones[name].matrix_basis=m
        bpy.context.view_layer.update()
        t=(frame-1)/60;u=t/duration
        body=Vector((0,0,0));head=Vector((0,0,0));hip=Vector((0,0,0))
        offset=Vector((0,0,0));pitch=roll=yaw=0.;opened=back=bolt=insert=retrieve=0.;elbow_lift=0.
        if kind=='ShotBolt':
            # A brief recoil impulse, delayed shoulder compression, cheek lift,
            # unlock/pull/push/lock, and sight reacquisition before the next shot.
            kick=path([(0,(0,0,0)),(.035,(0,1,0)),(.095,(0,.38,0)),(.21,(0,0,0)),(duration,(0,0,0))],t).y
            support=envelope(u,.10,.22,.72,.94)
            response=path([(0,(0,0,0)),(.07,(-2.8,0,1.2)),(.19,(1,0,0)),(.3,(0,0,0)),(duration,(0,0,0))],t)
            body=response+Vector((1.5*support,0,-2.8*envelope(u,.32,.44,.55,.75)))
            head=Vector((-3*support,0,6*support))
            hip=Vector((.008*support,.004*kick,0))
            offset=Vector((0,.023*kick,-.065*support));pitch=3.5*kick-4*support;roll=-4*support
            # Unlock, pull to the rear stop, push, lock, and release are
            # deliberately separate beats. Leave the final quarter for the
            # hand to recover the firing grip and the eye to reacquire aim.
            bolt=envelope(u,.12,.22,.74,.90)
            opened=envelope(u,.22,.31,.60,.70)
            back=envelope(u,.32,.42,.46,.59)
            elbow_lift=envelope(u,.12,.25,.63,.87)
        elif kind=='Reload':
            hold=envelope(u,0,.16,.90,1)
            retrieve=envelope(u,.17,.29,.36,.48)
            body=Vector((4*hold+4*retrieve,-1.5*retrieve,2*hold+6*retrieve))
            head=Vector((9*hold+5*retrieve,0,-6*retrieve))
            hip=Vector((.018*hold,-.014*hold,-.012*hold))
            offset=Vector((-.02*hold,.055*hold,-.155*hold));pitch=7*hold;roll=-10*hold
            opened=envelope(u,.04,.12,.84,.90)
            back=envelope(u,.10,.17,.77,.84)
            bolt=max(envelope(u,.01,.06,.16,.22),envelope(u,.72,.77,.89,.97))
            insert=envelope(u,.455,.49,.665,.715)
            elbow_lift=.55*bolt+.25*insert
        else:
            # Relaxed two-hand carry, with the barrel down and across the body.
            # This is a looped reference pose; the runtime owns the transition
            # into aim and lets the locomotion chest contribute gait motion.
            breath=math.sin(u*math.tau)
            body=Vector((1+.2*breath,0,1))
            offset=Vector((.015,.025,-.16+.0015*breath))
            pitch=-28;roll=-5;yaw=16
        hip_matrix=world[HIP].copy();hip_matrix.translation+=hip;pose_world(HIP,hip_matrix)
        rotate_body(CHEST,body)
        rotate_body(HEAD,head)
        # The weapon follows the chest, with authored manipulation relative to it.
        chest=rig.matrix_world @ rig.pose.bones[CHEST].matrix
        gun=chest @ world[CHEST].inverted() @ gun_base
        gun.translation+=offset
        q=Quaternion((0,0,1),math.radians(yaw))@Quaternion((1,0,0),math.radians(-pitch))@Quaternion((0,-1,0),math.radians(roll))
        gun=Matrix.LocRotScale(gun.translation,q@gun.to_quaternion(),gun.to_scale())
        pose_world(GUN,gun)
        for side in ['L','R']:
            hand=gun @ grips[side]
            if side=='R':
                knob_rotation=Quaternion((0,1,0),math.radians(-60*opened))
                knob=Vector((.025,.16+.08*back,.13))+knob_rotation@Vector((.062,.03,-.002))
                # The operating grip is a different wrist pose from the trigger
                # grip. Approach the knob from below/outside; preserving the
                # trigger axis puts the back of the glove into the cheek.
                trigger_rotation=grips['R'].to_quaternion()
                palm_direction=(trigger_rotation@palm).normalized()
                operating_direction=(knob_rotation@Vector((-.3,-.25,.92))).normalized()
                operating_rotation=palm_direction.rotation_difference(operating_direction)@trigger_rotation
                hand_rotation=gun.to_quaternion()@operating_rotation
                bolt_hand=Matrix.LocRotScale(gun@knob-hand_rotation@palm,hand_rotation,hand.to_scale())
                hand=hand.lerp(bolt_hand,bolt)
                if kind=='Reload':
                    # One continuous palm route: release the bolt, enter the
                    # pouch, extract, align, press, clear, regrasp the bolt.
                    # Overlapping reach/insert envelopes used to pull the wrist
                    # toward the trigger in the middle of ammunition transport.
                    belt=world[HIP].translation+hip+Vector((-.17,-.12,.185))
                    extracted=belt+Vector((-.025,-.035,.095))
                    feed=Vector((0,.10,.14+.036*(1-2*smooth((u-.50)/.20))))
                    palm_target=gun@(feed+Vector((.03,0,.01)))
                    outside=gun@Vector((.115,.10,.22))
                    clear=gun@Vector((.10,.115,.215))
                    if .17<=u<=.77:
                        route=path([(.17,tuple(gun@knob)),(.205,tuple(gun@(knob+Vector((.025,0,-.035))))),
                                    (.275,tuple(belt)),(.31,tuple(belt)),(.365,tuple(extracted)),
                                    (.445,tuple(outside)),(.48,tuple(palm_target)),
                                    (.67,tuple(palm_target)),(.72,tuple(clear)),(.77,tuple(gun@knob))],u)
                        operating=hand_rotation
                        downward=(operating@palm).normalized().rotation_difference(Vector((0,0,-1)))@operating
                        down=gun.to_quaternion()@Vector((-.8,0,-.6))
                        pressing=(operating@palm).normalized().rotation_difference(down)@operating
                        rotations=[(.17,operating),(.265,downward),(.365,downward),(.465,pressing),
                                   (.69,pressing),(.77,operating)]
                        rotation=rotations[-1][1]
                        for (ta,qa),(tb,qb) in zip(rotations,rotations[1:]):
                            if ta<=u<=tb:
                                rotation=qa.slerp(qb,smooth((u-ta)/(tb-ta)));break
                        hand=Matrix.LocRotScale(route-rotation@palm,rotation,hand.to_scale())
            pose_world('WeaponGrip_'+side,hand)
        # Transport the pole with the shoulder-to-wrist axis. A fixed world
        # pole passed through that axis during pouch extraction, causing the
        # two-bone IK elbow to whip across the chest despite a smooth hand path.
        shoulder=(rig.matrix_world@rig.pose.bones['mixamorig:RightArm'].matrix).translation
        wrist=(rig.matrix_world@rig.pose.bones['WeaponGrip_R'].matrix).translation
        transport=arm_axis_home.rotation_difference((wrist-shoulder).normalized())
        elbow_pole.location=(shoulder+wrist)*.5+transport@pole_offset_home+Vector((-.06,0,.03))*elbow_lift
        elbow_pole.keyframe_insert('location',frame=frame)
        bpy.context.view_layer.update()
        # Opening precedes contact; closure follows arrival. Release precedes
        # withdrawal. The glove no longer keeps one fixed fist through a reload.
        finger_keys=([(0,'trigger'),(.11,'trigger'),(.17,'open'),(.24,'knob'),(.73,'knob'),
                      (.82,'open'),(.94,'trigger'),(1,'trigger')] if kind=='ShotBolt' else
                     [(0,'trigger'),(.03,'open'),(.07,'knob'),(.17,'knob'),(.22,'open'),
                      (.265,'open'),(.305,'pinch'),(.465,'pinch'),(.535,'press'),(.665,'press'),
                      (.715,'open'),(.745,'open'),(.79,'knob'),(.89,'knob'),(.94,'open'),(1,'trigger')]
                     if kind=='Reload' else [(0,'trigger'),(1,'trigger')])
        for (ta,a),(tb,b) in zip(finger_keys,finger_keys[1:]):
            if ta<=u<=tb:
                blend=smooth((u-ta)/(tb-ta))
                for name in finger_names:
                    p=rig.pose.bones[name];p.rotation_mode='QUATERNION'
                    p.rotation_quaternion=finger_poses[a][name].slerp(finger_poses[b][name],blend)
                break
        for p in rig.pose.bones:
            p.rotation_mode='QUATERNION'
            for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
        bpy.context.view_layer.update()
        ev=rig.evaluated_get(bpy.context.evaluated_depsgraph_get())
        samples.append({p.name:p.matrix.copy() for p in ev.pose.bones})
    editable.use_fake_user=True
    # Separate baked armature leaves all editable IK, controls and action keys intact.
    baked=rig.copy();baked.data=rig.data.copy();baked.name='SoldierRig';scene.collection.objects.link(baked)
    baked.animation_data_clear()
    for p in baked.pose.bones:
        for c in list(p.constraints):p.constraints.remove(c)
        p.matrix_basis=Matrix.Identity(4)
    for b in baked.data.bones:b.use_deform=True
    baked.animation_data_create();baked.animation_data.action=bpy.data.actions.new('Baked_'+kind)
    for frame,mats in enumerate(samples,1):
        for p in baked.pose.bones:
            kwargs={'parent_matrix':mats[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
            p.matrix_basis=p.bone.convert_local_to_pose(mats[p.name],p.bone.matrix_local,invert=True,**kwargs)
            p.rotation_mode='QUATERNION'
            for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
    scene.frame_start=1;scene.frame_end=frames
    bpy.ops.object.select_all(action='DESELECT');baked.hide_set(False);baked.select_set(True);bpy.context.view_layer.objects.active=baked
    name='A_Rifle_'+kind
    bpy.ops.export_scene.fbx(filepath=str(OUT/(name+'.fbx')),use_selection=True,object_types={'ARMATURE'},
        axis_forward='-Y',axis_up='Z',add_leaf_bones=False,use_armature_deform_only=False,bake_anim=True,
        bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,bake_anim_simplify_factor=0,bake_anim_step=1)
    bpy.data.objects.remove(baked,do_unlink=True)
    print('ARMY_AUTHORED',name,frames,flush=True)
    elbow_steps=[(b['mixamorig:RightForeArm'].translation-a['mixamorig:RightForeArm'].translation).length*100
                 for a,b in zip(samples,samples[1:])]
    return dict(name=name,frames=frames,duration=duration,editable_action=editable.name,
                max_elbow_step_cm=max(elbow_steps),diagnostic_fps=60)


results=[author('ShotBolt',1.25),author('Reload',4.),author('LowReady',2.)]
rig.animation_data.action=bpy.data.actions['Authored_Rifle_Reload']
elbow_pole.animation_data.action=bpy.data.actions['Elbow_Reload'];scene.frame_set(1)
bpy.context.view_layer.update()
bpy.ops.wm.save_as_mainfile(filepath=str(OUT/'Rifle_Handling_Authored.blend'))
(OUT/'manifest.json').write_text(json.dumps({'fps':60,'status':'WIP — visual review required','clips':results},indent=2))
