"""Blender: gunners_v02.blend --python this.py -- OUTPUT.

Editable body-specific MG actions, articulated cover/feed and retained box change.
The approved grip supplies the first pose. All performance keys are authored here.
"""
import json
import math
import sys
from pathlib import Path
import bpy
import bmesh
from mathutils import Matrix, Quaternion, Vector
sys.path.insert(0,str(Path(__file__).resolve().parent))
import author_mg_mechanism as mechanism
import repair_male_glove
import repair_male_sleeve
import repair_soldier_pauldrons

OUT=Path(sys.argv[sys.argv.index('--')+1]);OUT.mkdir(parents=True,exist_ok=True)
scene=bpy.context.scene;scene.render.fps=60
source_objects=list(scene.objects)
preview_sets={}
axes=mechanism.AXES
parts=mechanism.create(OUT)

def smooth(t):
    t=max(0.,min(1.,t));return t*t*(3-2*t)

def env(t,a,b,c,d):
    return smooth((t-a)/(b-a))*(1-smooth((t-c)/(d-c)))

def route(keys,t):
    if t<=keys[0][0]:return Vector(keys[0][1])
    if t>=keys[-1][0]:return Vector(keys[-1][1])
    for (a,p),(b,q) in zip(keys,keys[1:]):
        if a<=t<=b:return Vector(p).lerp(Vector(q),smooth((t-a)/(b-a)))

def export(rig,path):
    bpy.ops.object.select_all(action='DESELECT');rig.hide_set(False);rig.select_set(True)
    bpy.context.view_layer.objects.active=rig
    bpy.ops.export_scene.fbx(filepath=str(path),use_selection=True,object_types={'ARMATURE'},
        axis_forward='-Y',axis_up='Z',add_leaf_bones=False,use_armature_deform_only=False,
        bake_anim=True,bake_anim_use_all_actions=False,bake_anim_use_nla_strips=False,
        bake_anim_simplify_factor=0,bake_anim_step=1)

for obj in scene.objects:
    for mod in obj.modifiers:
        if mod.type=='CLOTH':mod.show_viewport=mod.show_render=False

for gender,source_name in [('Female','Female_Mixamo_Rig'),('Male','Male_Azure_Rig')]:
    scene.frame_set(85);bpy.context.view_layer.update()
    source=bpy.data.objects[source_name];deps=bpy.context.evaluated_depsgraph_get()
    evaluated=source.evaluated_get(deps)
    pose={p.name:p.matrix.copy() for p in evaluated.pose.bones}
    gun_object=bpy.data.objects[gender+'_Machine_Gun'].evaluated_get(deps)
    pose['WeaponSocket_R']=source.matrix_world.inverted()@gun_object.matrix_world@axes.inverted()
    for side,short in [('Left','L'),('Right','R')]:pose['WeaponGrip_'+short]=pose['mixamorig:'+side+'Hand'].copy()
    pose['Weapon_Free']=pose['WeaponSocket_R'].copy()
    pose['WeaponMuzzle']=pose['WeaponSocket_R']@Matrix.Translation(Vector((-.005800765,-.47973645,.09777343)))
    rig=source.copy();rig.data=source.data.copy();scene.collection.objects.link(rig)
    rig.name=gender+'_Authored_MG';rig.animation_data_clear();rig.matrix_world.translation=(0,0,0)
    for p in rig.pose.bones:
        for c in list(p.constraints):p.constraints.remove(c)
        kw={'parent_matrix':pose[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
        p.matrix_basis=p.bone.convert_local_to_pose(pose[p.name],p.bone.matrix_local,invert=True,**kw)
    bpy.context.view_layer.update()
    base={p.name:p.matrix_basis.copy() for p in rig.pose.bones}
    world={n:rig.matrix_world@m for n,m in pose.items()};inverse=rig.matrix_world.inverted()
    hip_name='mixamorig:Hips';chest_name='mixamorig:Spine';head_name='mixamorig:Head'
    gun_base=world['WeaponSocket_R'];grips={s:gun_base.inverted()@world['WeaponGrip_'+s] for s in ['L','R']}
    left_palm=world['mixamorig:LeftHand'].inverted()@world['mixamorig:LeftHandMiddle1'].translation
    left_palm*=.65
    supported_palm=grips['L']@left_palm
    left_hand_name='mixamorig:LeftHand'
    hand_inv=world[left_hand_name].inverted()
    finger=(hand_inv@world[left_hand_name+'Middle1'].translation).normalized()
    thumb=hand_inv@world[left_hand_name+'Thumb1'].translation
    thumb-=finger*thumb.dot(finger);thumb.normalize()
    palm_basis=Matrix((thumb,finger,thumb.cross(finger).normalized())).transposed()
    def hand_orientation(across,forward):
        across,forward=Vector(across),Vector(forward)
        return (Matrix((across,forward,across.cross(forward))).transposed()@palm_basis.inverted()).to_quaternion()
    # Fingers follow the arm's approach within the contact plane. A fixed
    # muzzle-facing palm demanded backward wrists on the broader male body.
    shoulder_reference=gun_base.inverted()@world['mixamorig:LeftArm'].translation
    support_forward=supported_palm-shoulder_reference;support_forward.z=0;support_forward.normalize()
    support_q=hand_orientation(support_forward.cross(Vector((0,0,-1))),support_forward)
    grips['L']=Matrix.LocRotScale(supported_palm-support_q@left_palm,support_q,Vector((1,1,1)))
    palm_down=hand_orientation(support_forward.cross(Vector((0,0,1))),support_forward)
    box_grip=hand_orientation((0,1,0),(0,0,-1))
    charge_grip=hand_orientation((0,-1,0),(0,0,1))
    cover_grip=charge_grip.copy()
    def rotate_route(keys,u):
        if u<=keys[0][0]:return keys[0][1]
        for (a,p),(b,q) in zip(keys,keys[1:]):
            if a<=u<=b:return p.slerp(q,smooth((u-a)/(b-a)))
        return keys[-1][1]
    elbow_targets={}
    preview_sets[gender]=[rig]
    bind_hip=rig.matrix_world@rig.data.bones[hip_name].matrix_local
    bag_bind=bind_hip.translation+Vector((.25,-.08,-.035))
    bag_base=Matrix.Translation(bag_bind)
    preview_parts={}
    for part,original_part in parts.items():
        obj=original_part.copy();obj.data=original_part.data.copy();scene.collection.objects.link(obj)
        obj.name=gender+'_MG_'+part;obj.animation_data_clear();obj.hide_render=False;obj.hide_set(False)
        preview_parts[part]=obj;preview_sets[gender].append(obj)
    for side,short in [('Left','L'),('Right','R')]:
        arm=rig.pose.bones['mixamorig:'+side+'ForeArm']
        c=arm.constraints.new('IK');c.name='Authored MG wrist';c.target=rig;c.subtarget='WeaponGrip_'+short;c.chain_count=2;c.use_stretch=False
        rot=rig.pose.bones['mixamorig:'+side+'Hand'].constraints.new('COPY_ROTATION');rot.target=rig;rot.subtarget='WeaponGrip_'+short
        foot=bpy.data.objects.new(gender+'_'+side+'_MGFootPlant',None);scene.collection.objects.link(foot)
        preview_sets[gender].append(foot)
        foot.matrix_world=world['mixamorig:'+side+'Foot']
        c=rig.pose.bones['mixamorig:'+side+'Leg'].constraints.new('IK');c.target=foot;c.chain_count=2;c.use_stretch=False
        c=rig.pose.bones['mixamorig:'+side+'Foot'].constraints.new('COPY_ROTATION');c.target=foot

    def set_world(name,matrix):
        rig.pose.bones[name].matrix=inverse@matrix;bpy.context.view_layer.update()

    def body_turn(name,degrees):
        p=rig.pose.bones[name];m=rig.matrix_world@p.matrix
        q=Quaternion((0,0,1),math.radians(degrees[2]))@Quaternion((0,1,0),math.radians(degrees[1]))@Quaternion((1,0,0),math.radians(degrees[0]))
        set_world(name,Matrix.LocRotScale(m.translation,q@m.to_quaternion(),m.to_scale()))

    folder=OUT/gender;folder.mkdir(exist_ok=True);clips=[]
    for kind,duration in [('Ready',2.),('Shot',.4),('Reload',6.)]:
        action=bpy.data.actions.new(gender+'_MG_'+kind);action.use_fake_user=True
        rig.animation_data_create();rig.animation_data.action=action;samples=[]
        frames=round(duration*60)+1
        for frame in range(1,frames+1):
            scene.frame_set(frame)
            for p in rig.pose.bones:p.matrix_basis=base[p.name]
            bpy.context.view_layer.update();t=(frame-1)/60;u=t/duration
            loading=env(u,0,.16,.85,1) if kind=='Reload' else 0
            kick=route([(0,(0,0,0)),(.028,(1,0,0)),(.075,(.3,0,0)),(.2,(0,0,0)),(.4,(0,0,0))],t).x if kind=='Shot' else 0
            response=route([(0,(0,0,0)),(.065,(-1.8,0,.7)),(.16,(.6,0,-.2)),(.4,(0,0,0))],t) if kind=='Shot' else Vector((4*loading,-2*loading,-4*loading))
            retrieve=env(u,.24,.35,.475,.635) if kind=='Reload' else 0
            def impulse(keys):return route([(phase,(value,0,0)) for phase,value in keys],u).x if kind=='Reload' else 0
            seat=impulse([(.60,0),(.64,1),(.657,-.28),(.69,0),(1,0)])
            press=impulse([(.70,0),(.735,1),(.755,-.20),(.775,0),(1,0)])
            latch=impulse([(.81,0),(.835,1),(.85,-.25),(.88,0),(1,0)])
            pull=mechanism.charging(u) if kind=='Reload' else 0
            response+=Vector((3*retrieve+2.8*press+2.2*latch-1.8*seat,-2.5*retrieve,7*retrieve-3*pull))
            hip=world[hip_name].copy();hip.translation+=Vector((-.018*loading,.002*kick+.01*retrieve,-.013*loading-.004*seat));set_world(hip_name,hip)
            body_turn(chest_name,response);body_turn(head_name,Vector((8*loading+5*retrieve,0,6*loading+8*retrieve)))
            gun=(rig.matrix_world@rig.pose.bones[chest_name].matrix)@world[chest_name].inverted()@gun_base
            gun.translation+=Vector((0,.018*kick+.03*loading,-.065*loading-.016*seat-.012*press-.012*latch))
            q=Quaternion((1,0,0),math.radians(-2.2*kick-5*loading))@Quaternion((0,-1,0),math.radians(7*loading))
            gun=Matrix.LocRotScale(gun.translation,q@gun.to_quaternion(),gun.to_scale());set_world('WeaponSocket_R',gun)
            set_world('WeaponMuzzle',gun@gun_base.inverted()@world['WeaponMuzzle'])
            box=gun.copy()
            left=gun@grips['L'];right=gun@grips['R']
            if kind=='Reload':
                # Left hand operates the top cover, retains the empty box in the
                # open hip pouch, takes a replacement, feeds and charges the gun.
                cover=mechanism.cover_matrix(u)
                lid=cover@mechanism.CATCH
                dock=mechanism.DOCK
                hip_now=rig.matrix_world@rig.pose.bones[hip_name].matrix
                bag=hip_now@bind_hip.inverted()@bag_base
                # Lift completely above the pouch before crossing its wall.
                # The box also turns into the pouch frame before descending.
                # Its entire replacement belt is below the rim at the exchange.
                above=bag@Matrix.Translation(Vector((0,-.126,.065)))
                inside=bag@Matrix.Translation(Vector((0,-.126,-.155)))
                undocked=gun@Matrix.Translation(Vector((-.035,0,-.09)))
                aligned=above.copy()
                box_keys=[(0,gun),(.215,gun),(.26,undocked),(.32,above),(.37,inside),
                    (.425,inside),(.485,above),(.595,undocked),(.645,gun),(1,gun)]
                for (a,m),(b,n) in zip(box_keys,box_keys[1:]):
                    if a<=u<=b:
                        alpha=smooth((u-a)/(b-a))
                        box=Matrix.LocRotScale(m.translation.lerp(n.translation,alpha),m.to_quaternion().slerp(n.to_quaternion(),alpha),Vector((1,1,1)));break
                bag_hand=gun.inverted()@(box@dock)
                box_offset=gun.inverted()@box.translation
                hand_local=route([(0,tuple(supported_palm)),(.075,(-.065,.203,.14)),
                    (.085,tuple(lid)),(.16,tuple(lid)),(.20,tuple(dock)),(.215,tuple(dock)),
                    (.265,tuple(dock+box_offset)),(.365,tuple(dock+box_offset)),(.405,tuple(bag_hand)),
                    (.465,tuple(bag_hand)),(.535,tuple(dock+box_offset)),(.60,tuple(dock)),
                    (.655,(-.048,.137,.15)),(.70,(-.018,.137,.145)),(.735,(-.007,.137,.137)),
                    (.77,tuple(lid)),(.835,tuple(lid)),(.858,tuple(mechanism.CHARGE+Vector((-.007,0,0)))),
                    (.903,tuple(mechanism.CHARGE+Vector((-.007,.085,0)))),
                    (.94,tuple(mechanism.CHARGE+Vector((-.007,0,0)))),(.985,tuple(supported_palm)),(1,tuple(supported_palm))],u)
                # Inside these contact windows evaluate the hinge/handle directly,
                # so sampled action targets cannot cut across the moving geometry.
                if .085<=u<=.16 or .77<=u<=.835:hand_local=lid
                if .215<=u<=.645:hand_local=gun.inverted()@(box@dock)
                if .868<=u<=.94:hand_local=mechanism.CHARGE+Vector((-.007,.085*mechanism.charging(u),0))
                shoulder=gun.inverted()@(rig.matrix_world@rig.pose.bones['mixamorig:LeftArm'].matrix).translation
                def side_grip(point):
                    approach=point-shoulder;approach.x=0
                    if approach.length<.02:approach=Vector((0,-1,1))
                    approach.normalize()
                    return hand_orientation(approach.cross(Vector((-1,0,0))),approach)
                cover_grip=side_grip(lid)
                charge_grip=side_grip(mechanism.CHARGE)
                raised=cover_grip
                hand_q=rotate_route([(0,grips['L'].to_quaternion()),(.075,cover_grip),(.085,cover_grip),(.16,raised),
                    (.20,box_grip),(.645,box_grip),(.685,palm_down),(.735,palm_down),(.77,raised),(.835,cover_grip),
                    (.858,charge_grip),(.94,charge_grip),(.985,grips['L'].to_quaternion()),(1,grips['L'].to_quaternion())],u)
                if .085<=u<=.16 or .77<=u<=.835:hand_q=cover_grip
                rotation=gun.to_quaternion()@hand_q
                if .215<=u<=.645:rotation=box.to_quaternion()@box_grip
                # Open fingers for pressing surfaces; retain the wrapped grip
                # for box/charging manipulations. The actual bones keep length.
                flat=env(u,.65,.685,.735,.77)
                for bone in rig.pose.bones:
                    if bone.name.startswith(left_hand_name) and bone.name!=left_hand_name:
                        m=base[bone.name]
                        bone.matrix_basis=Matrix.LocRotScale(m.translation,m.to_quaternion().slerp(Quaternion(),flat*.72),m.to_scale())
                left=Matrix.LocRotScale(gun@hand_local-rotation@left_palm,rotation,left.to_scale())
            else:
                bag=(rig.matrix_world@rig.pose.bones[hip_name].matrix)@bind_hip.inverted()@bag_base
            mechanism_u=u if kind=='Reload' else 0
            belt=box.copy()
            if kind=='Reload':
                feed=smooth((u-.65)/.065)
                belt=Matrix.LocRotScale(box.translation.lerp(gun.translation,feed),box.to_quaternion().slerp(gun.to_quaternion(),feed),Vector((1,1,1)))
            transforms={'Body':gun,'Cover':gun@mechanism.cover_matrix(mechanism_u),'Box':box,'Belt':belt,
                'ChargingHandle':gun@Matrix.Translation(mechanism.CHARGE+Vector((0,.085*mechanism.charging(mechanism_u),0))),'AmmoPouch':bag}
            for part,m in transforms.items():
                obj=preview_parts[part];obj.matrix_world=m;obj.rotation_mode='QUATERNION'
                obj.hide_render=(part=='Box' and not mechanism.box_visible(mechanism_u)) or (part=='Belt' and not mechanism.belt_visible(mechanism_u))
                for prop in ['location','rotation_quaternion','scale','hide_render']:obj.keyframe_insert(prop,frame=frame)
            set_world('Weapon_Free',box);set_world('WeaponGrip_L',left);set_world('WeaponGrip_R',right)
            for p in rig.pose.bones:
                p.rotation_mode='QUATERNION'
                for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
            bpy.context.view_layer.update();ev=rig.evaluated_get(bpy.context.evaluated_depsgraph_get())
            mats={p.name:p.matrix.copy() for p in ev.pose.bones}
            # Fit the supporting elbow to the anatomical glove direction on
            # the feasible reach circle. The old IK bend plane put the elbow
            # beyond the wrist and folded the glove back over 140 degrees.
            wm={n:rig.matrix_world@m for n,m in mats.items()}
            upper='mixamorig:LeftArm';lower='mixamorig:LeftForeArm';hand='mixamorig:LeftHand'
            a,e,h=[wm[n].translation.copy() for n in [upper,lower,hand]]
            length1=(e-a).length;length2=(h-e).length;axis=(h-a).normalized()
            d=max(abs(length1-length2)+1e-5,min(length1+length2-1e-5,(h-a).length))
            along=(length1*length1-length2*length2+d*d)/(2*d)
            center=a+axis*along;radius=math.sqrt(max(0,length1*length1-along*along))
            outside=wm['mixamorig:LeftArm'].translation-wm['mixamorig:RightArm'].translation
            outside.z=0;outside.normalize()
            body_forward=outside.cross(Vector((0,0,1)))
            if body_forward.dot(gun.to_quaternion()@Vector((0,-1,0)))<0:body_forward=-body_forward
            transport=body_forward.rotation_difference(axis)
            up=transport@Vector((0,0,1));lateral=transport@outside
            if radius>1e-5:
                forward=(wm[hand+'Middle1'].translation-h).normalized()
                desired=h-forward*length2-center
                angle=math.atan2(desired.dot(up),abs(desired.dot(lateral))+length1*.12)
                angle=max(-1.3,min(.15,angle))
                fitted=center+(up*math.sin(angle)+lateral*math.cos(angle))*radius
                for n,start,end,old_end in [(upper,a,fitted,e),(lower,fitted,h,h)]:
                    old=wm[n];direction=old_end-old.translation
                    q=direction.rotation_difference(end-start)@old.to_quaternion()
                    wm[n]=Matrix.LocRotScale(start,q,old.to_scale())
                mats[upper]=inverse@wm[upper];mats[lower]=inverse@wm[lower]
            # Forearm pronation carries the glove's axial rotation instead of
            # twisting the short wrist/cuff through 180 degrees.
            lower='mixamorig:LeftForeArm';hand='mixamorig:LeftHand'
            neutral=mats[lower].to_quaternion()@rig.data.bones[lower].matrix_local.to_quaternion().inverted()@rig.data.bones[hand].matrix_local.to_quaternion()
            delta=mats[hand].to_quaternion()@neutral.inverted()
            axis=(mats[hand].translation-mats[lower].translation).normalized()
            along=Vector((delta.x,delta.y,delta.z)).dot(axis)
            twist=Quaternion((delta.w,axis.x*along,axis.y*along,axis.z*along))
            if twist.magnitude>1e-6:
                twist.normalize();twist=Quaternion().slerp(twist,1)
                m=mats[lower];mats[lower]=Matrix.LocRotScale(m.translation,twist@m.to_quaternion(),m.to_scale())
            samples.append(mats)
        baked=rig.copy();baked.data=rig.data.copy();scene.collection.objects.link(baked)
        baked.name='SoldierRig' if gender=='Female' else 'Male_Azure_Rig_Export'
        baked.animation_data_clear()
        for p in baked.pose.bones:
            for c in list(p.constraints):p.constraints.remove(c)
        for b in baked.data.bones:b.use_deform=True
        baked.animation_data_create();baked.animation_data.action=bpy.data.actions.new('Baked_'+gender+'_MG_'+kind);baked.animation_data.action.use_fake_user=True
        for frame,mats in enumerate(samples,1):
            for p in baked.pose.bones:
                kw={'parent_matrix':mats[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
                p.matrix_basis=p.bone.convert_local_to_pose(mats[p.name],p.bone.matrix_local,invert=True,**kw);p.rotation_mode='QUATERNION'
                for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
        scene.frame_start=1;scene.frame_end=frames
        if gender=='Male':
            original_name=source.name;source.name='Male_Source_Authoring';baked.name='Male_Azure_Rig'
        name='A_MG_'+kind;export(baked,folder/(name+'.fbx'))
        if kind=='Reload':
            preview_rig=baked;preview_rig.name=gender+'_MG_Deformation';preview_sets[gender].append(preview_rig)
        else:bpy.data.objects.remove(baked,do_unlink=True)
        if gender=='Male':source.name=original_name
        clips.append(dict(name=name,duration=duration,frames=frames,editable_action=action.name,deformation_action='Baked_'+gender+'_MG_'+kind))
        print('ARMY_AUTHORED_MG',gender,name,flush=True)
    (folder/'manifest.json').write_text(json.dumps({'fps':60,'status':'WIP articulated retained-box reload; visual review required','articulated_mg':True,'pouch_bind_cm':[100*bag_bind.x,-100*bag_bind.y,100*bag_bind.z],'box_grip_cm':[100*mechanism.DOCK.x,-100*mechanism.DOCK.y,100*mechanism.DOCK.z],'cover_hinge_cm':[0,-7.5,13.45],'charge_rest_cm':[-5.5,-22.5,12.4],'clips':clips},indent=2))
    # The saved source scene must show the newly authored rig, not the static
    # source showcase. Keep its actual skinned body and coat on the new armature.
    for original in source_objects:
        if original.type!='MESH':continue
        if not any(m.type=='ARMATURE' and m.object==source for m in original.modifiers):continue
        if 'collider' in original.name.lower():continue
        obj=original.copy();obj.data=original.data.copy();scene.collection.objects.link(obj)
        obj.name=gender+'_Authored_'+original.name;obj.animation_data_clear()
        obj.parent=preview_rig
        obj.matrix_world=preview_rig.matrix_world@source.matrix_world.inverted()@original.matrix_world
        for constraint in list(obj.constraints):obj.constraints.remove(constraint)
        for mod in obj.modifiers:
            if mod.type=='ARMATURE':mod.object=preview_rig
        obj.hide_render=False;obj.hide_viewport=False;obj.hide_set(False)
        if gender=='Male' and original.name=='Male_Azure_Skinned':
            repair_male_glove.repair(preview_rig,obj,folder,include_left=True)
            repair_male_sleeve.repair(obj,folder)
        if original.name in ['Male_Azure_Skinned','Female_Azure_Body_ClothReady']:
            repair_soldier_pauldrons.repair(obj,gender,folder)
        for material in obj.data.materials:
            if material and material.use_nodes:
                for node in material.node_tree.nodes:
                    if node.type=='TEX_IMAGE' and node.image and not node.image.packed_file:node.image.pack()
        preview_sets[gender].append(obj)
for obj in source_objects:
    obj.hide_render=True;obj.hide_set(True)
for gender,objects in preview_sets.items():
    collection=bpy.data.collections.new(gender+' authored MG preview');scene.collection.children.link(collection)
    for obj in objects:
        for existing in list(obj.users_collection):existing.objects.unlink(obj)
        collection.objects.link(obj)
    if gender=='Male':
        collection.hide_render=True;collection.hide_viewport=True
scene.frame_set(1)
bpy.ops.wm.save_as_mainfile(filepath=str(OUT/'MachineGun_Handling_Authored.blend'))
