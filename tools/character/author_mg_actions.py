"""Blender: gunners_v02.blend --python this.py -- OUTPUT.

Editable body-specific MG shot and ammunition-box reload blocking. The original
approved grip supplies the first pose. All performance keys are authored here.
Reload is WIP: feed-cover and belt geometry still need articulated moving parts.
"""
import json
import math
import sys
from pathlib import Path
import bpy
import bmesh
from mathutils import Matrix, Quaternion, Vector

OUT=Path(sys.argv[sys.argv.index('--')+1]);OUT.mkdir(parents=True,exist_ok=True)
scene=bpy.context.scene;scene.render.fps=60
source_objects=list(scene.objects)
preview_sets={}
axes=Matrix(((0,1,0,0),(-1,0,0,.5676),(0,0,1,.08224),(0,0,0,1)))

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
    elbow_targets={}
    preview_sets[gender]=[rig]
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
    for kind,duration in [('Shot',.4),('Reload',6.)]:
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
            hip=world[hip_name].copy();hip.translation+=Vector((-.01*loading,.002*kick,-.01*loading));set_world(hip_name,hip)
            body_turn(chest_name,response);body_turn(head_name,Vector((8*loading,0,6*loading)))
            gun=(rig.matrix_world@rig.pose.bones[chest_name].matrix)@world[chest_name].inverted()@gun_base
            gun.translation+=Vector((0,.018*kick+.03*loading,-.12*loading))
            q=Quaternion((1,0,0),math.radians(-2.2*kick-5*loading))@Quaternion((0,-1,0),math.radians(7*loading))
            gun=Matrix.LocRotScale(gun.translation,q@gun.to_quaternion(),gun.to_scale());set_world('WeaponSocket_R',gun)
            set_world('WeaponMuzzle',gun@gun_base.inverted()@world['WeaponMuzzle'])
            box=gun.copy()
            left=gun@grips['L'];right=gun@grips['R']
            if kind=='Reload':
                # Empty box leaves its dock, the hand retrieves the replacement,
                # then seats it before preparing the feed and returning to support.
                box_offset=route([(0,(0,0,0)),(.19,(0,0,0)),(.28,(-.03,.01,-.12)),(.38,(-.13,.12,-.17)),(.44,(-.13,.12,-.17)),(.55,(-.03,.01,-.10)),(.62,(0,0,0)),(1,(0,0,0))],u)
                box.translation+=gun.to_quaternion()@box_offset
                dock=Vector((-.035,.12,.075));feed=Vector((-.015,.13,.135))
                hand_local=route([(0,tuple(supported_palm)),(.10,tuple(feed+Vector((0,0,.04)))),(.18,tuple(dock)),(.19,tuple(dock)),(.28,tuple(dock+Vector((-.03,.01,-.12)))),(.38,tuple(dock+Vector((-.13,.12,-.17)))),(.44,tuple(dock+Vector((-.13,.12,-.17)))),(.55,tuple(dock+Vector((-.03,.01,-.10)))),(.62,tuple(dock)),(.69,tuple(feed+Vector((-.02,0,.015)))),(.77,tuple(feed)),(.83,tuple(feed+Vector((0,0,.06)))),(.89,tuple(supported_palm)),(1,tuple(supported_palm))],u)
                grasp=env(u,.05,.16,.84,.96)
                rotation=left.to_quaternion()@Quaternion((1,0,0),math.radians(-25*grasp))
                left=Matrix.LocRotScale(gun@hand_local-rotation@left_palm,rotation,left.to_scale())
            set_world('Weapon_Free',box);set_world('WeaponGrip_L',left);set_world('WeaponGrip_R',right)
            for p in rig.pose.bones:
                p.rotation_mode='QUATERNION'
                for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
            bpy.context.view_layer.update();ev=rig.evaluated_get(bpy.context.evaluated_depsgraph_get())
            samples.append({p.name:p.matrix.copy() for p in ev.pose.bones})
        baked=rig.copy();baked.data=rig.data.copy();scene.collection.objects.link(baked)
        baked.name='SoldierRig' if gender=='Female' else 'Male_Azure_Rig_Export'
        baked.animation_data_clear()
        for p in baked.pose.bones:
            for c in list(p.constraints):p.constraints.remove(c)
        for b in baked.data.bones:b.use_deform=True
        baked.animation_data_create();baked.animation_data.action=bpy.data.actions.new('Baked_'+gender+'_MG_'+kind)
        for frame,mats in enumerate(samples,1):
            for p in baked.pose.bones:
                kw={'parent_matrix':mats[p.parent.name],'parent_matrix_local':p.parent.bone.matrix_local} if p.parent else {}
                p.matrix_basis=p.bone.convert_local_to_pose(mats[p.name],p.bone.matrix_local,invert=True,**kw);p.rotation_mode='QUATERNION'
                for prop in ['location','rotation_quaternion','scale']:p.keyframe_insert(prop,frame=frame,group=p.name)
        scene.frame_start=1;scene.frame_end=frames
        if gender=='Male':
            original_name=source.name;source.name='Male_Source_Authoring';baked.name='Male_Azure_Rig'
        name='A_MG_'+kind;export(baked,folder/(name+'.fbx'))
        bpy.data.objects.remove(baked,do_unlink=True)
        if gender=='Male':source.name=original_name
        clips.append(dict(name=name,duration=duration,frames=frames,editable_action=action.name))
        print('ARMY_AUTHORED_MG',gender,name,flush=True)
    (folder/'manifest.json').write_text(json.dumps({'fps':60,'status':'WIP blocking; cover and belt articulation outstanding','clips':clips},indent=2))
    # The saved source scene must show the newly authored rig, not the static
    # source showcase. Keep its actual skinned body and coat on the new armature.
    for original in source_objects:
        if original.type!='MESH':continue
        if not any(m.type=='ARMATURE' and m.object==source for m in original.modifiers):continue
        if 'collider' in original.name.lower():continue
        obj=original.copy();obj.data=original.data.copy();scene.collection.objects.link(obj)
        obj.name=gender+'_Authored_'+original.name;obj.animation_data_clear()
        obj.parent=rig
        obj.matrix_world=rig.matrix_world@source.matrix_world.inverted()@original.matrix_world
        for constraint in list(obj.constraints):obj.constraints.remove(constraint)
        for mod in obj.modifiers:
            if mod.type=='ARMATURE':mod.object=rig
        obj.hide_render=False;obj.hide_viewport=False;obj.hide_set(False)
        preview_sets[gender].append(obj)
    # Same separated gun/box geometry and axes as the runtime import. COPY_TRANSFORMS
    # displays the box carrier, so contact can also be edited directly in Blender.
    original=bpy.data.objects['Machine_Gun_Refined']
    for box in [False,True]:
        obj=original.copy();obj.data=original.data.copy();scene.collection.objects.link(obj)
        obj.name=gender+('_Authored_Box' if box else '_Authored_Gun')
        obj.animation_data_clear();obj.parent=None;obj.matrix_world=Matrix.Identity(4)
        for constraint in list(obj.constraints):obj.constraints.remove(constraint)
        for vertex in obj.data.vertices:vertex.co=axes@vertex.co
        bm=bmesh.new();bm.from_mesh(obj.data)
        bmesh.ops.delete(bm,geom=[f for f in bm.faces if (f.material_index==2)!=box],context='FACES')
        bm.to_mesh(obj.data);bm.free()
        constraint=obj.constraints.new('COPY_TRANSFORMS');constraint.target=rig
        constraint.subtarget='Weapon_Free' if box else 'WeaponSocket_R'
        obj.hide_render=False;obj.hide_viewport=False;obj.hide_set(False)
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
