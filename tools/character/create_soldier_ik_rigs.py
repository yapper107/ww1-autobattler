"""Create target retarget-chain assets for the two production bodies in UE 5.8.

Run in the isolated ArmyPrototype-GASP mirror with the Python commandlet. These
are target chain definitions, not completed source mappings/retarget poses or
validated foot/hand IK. Original meshes, skeletons and animation clips are untouched.
"""
import json
from pathlib import Path
import unreal

DEST = '/Game/Characters/GASP'
OWNER = 'army-soldier-ik-v1'
BODIES = {
    'Female': ('/Game/Characters/FemaleRifle/SK_Female_Rifle', 'SoldierRig'),
    'Male': ('/Game/Characters/Male/SK_Male', 'Male_Azure_Rig'),
}
assets = unreal.AssetToolsHelpers.get_asset_tools()
report = []
for body, (mesh_path, root) in BODIES.items():
    mesh = unreal.load_asset(mesh_path)
    assert mesh, mesh_path
    component = unreal.SkeletalMeshComponent()
    component.set_skeletal_mesh_asset(mesh)
    parents = {str(component.get_bone_name(i)): str(component.get_parent_bone(component.get_bone_name(i)))
               for i in range(component.get_num_bones())}
    chains = [('Root', root, root), ('Spine', 'Spine', 'Spine2'),
              ('Neck', 'Neck', 'Neck'), ('Head', 'Head', 'Head')]
    for side in ['Left', 'Right']:
        chains += [(side+'Clavicle', side+'Shoulder', side+'Shoulder'),
                   (side+'Arm', side+'Arm', side+'Hand'),
                   (side+'Leg', side+'UpLeg', side+'Foot'),
                   (side+'Toe', side+'ToeBase', side+'ToeBase')]
        for finger in ['Thumb', 'Index', 'Middle', 'Ring', 'Pinky']:
            first, last = side+'Hand'+finger+'1', side+'Hand'+finger+'3'
            if first in parents:
                chains.append((side+finger, first, last))
    # Check every endpoint and complete ancestry before writing anything for this body.
    assert parents[root] == 'None' and parents['Hips'] == root
    for name, start, end in chains:
        assert start in parents and end in parents, (name, start, end)
        bone = end
        while bone != start:
            bone = parents.get(bone, 'None')
            assert bone != 'None', ('Disconnected chain', name)
    name = 'IKR_'+body
    rig = unreal.load_asset(DEST+'/'+name) if unreal.EditorAssetLibrary.does_asset_exist(DEST+'/'+name) else None
    if rig:
        assert str(unreal.EditorAssetLibrary.get_metadata_tag(rig, 'ArmyGenerator')) == OWNER, 'Refuse to replace artist-owned rig'
        # The retarget pass binds a normalized copy and adds FBIK. Do not undo
        # that later stage when this bootstrap script is rerun.
        assigned = unreal.IKRigController.get_controller(rig).get_skeletal_mesh()
        if assigned and str(unreal.EditorAssetLibrary.get_metadata_tag(assigned, 'ArmyNormalizedRig')) in ['army-gasp-retarget-v1','army-gasp-body-v2-unit-root-basis']:
            report.append({'body': body, 'rig': rig.get_path_name(), 'status': 'preserved normalized retarget rig'})
            continue
    else:
        rig = assets.create_asset(name, DEST, unreal.IKRigDefinition, unreal.IKRigDefinitionFactory())
    assert rig
    controller = unreal.IKRigController.get_controller(rig)
    assert controller.set_skeletal_mesh(mesh)
    for chain in list(controller.get_retarget_chains()):
        assert controller.remove_retarget_chain(chain.chain_name)
    assert controller.set_retarget_root('Hips')
    assert controller.set_root_motion_bone(root)
    for name, start, end in chains:
        assert str(controller.add_retarget_chain(name, start, end, 'None')) == name
    actual = {str(chain.chain_name): (str(controller.get_retarget_chain_start_bone(chain.chain_name)),
                                     str(controller.get_retarget_chain_end_bone(chain.chain_name)))
              for chain in controller.get_retarget_chains()}
    assert actual == {name: (start, end) for name, start, end in chains}
    assert str(controller.get_retarget_root()) == 'Hips'
    assert str(controller.get_root_motion_bone()) == root
    unreal.EditorAssetLibrary.set_metadata_tag(rig, 'ArmyGenerator', OWNER)
    assert unreal.EditorAssetLibrary.save_loaded_asset(rig)
    report.append({'body': body, 'mesh': mesh_path, 'rig': rig.get_path_name(),
                   'root_motion_bone': root, 'pelvis': 'Hips', 'chains': actual,
                   'status': 'target chains only; source mapping and visual retarget validation pending'})
output = Path(unreal.Paths.project_saved_dir())/'soldier-ik-rigs.json'
output.write_text(json.dumps(report, indent=2))
print('SOLDIER_IK_RIGS_READY', [(row['body'], row['status']) for row in report])
