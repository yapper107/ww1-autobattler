"""Run in the official GASP with Saved/army-gasp-transfer.json specifying destination.

Uses Unreal's dependency-aware migration into a marked Army build mirror. Does
not modify the original sample assets. Migrates a small, named locomotion slice.
"""
import json
from pathlib import Path
import unreal

CLIPS = [
    'Idle/M_Neutral_Stand_Idle_Loop',
    'Walk/M_Neutral_Walk_Start_F_Lfoot',
    'Walk/M_Neutral_Walk_Loop_F',
    'Walk/M_Neutral_Walk_Stop_F_Lfoot',
    'Walk/M_Neutral_Walk_Reface_Start_F_R_090',
    'Run/M_Neutral_Run_Loop_F',
    'Sprint/M_Neutral_Sprint_Loop_F',
    'Idle/M_Neutral_Crouch_Idle_Loop',
    'Crouch/M_Neutral_Crouch_Loop_F',
    'Idle/M_Neutral_Stand_Turn_090_R',
]
BASE = '/Game/Characters/UEFN_Mannequin'
roots = [BASE+'/Meshes/SKM_UEFN_Mannequin', BASE+'/Rigs/IK_UEFN_Mannequin']
roots += [BASE+'/Animations/'+name for name in CLIPS]
config = json.loads((Path(unreal.Paths.project_saved_dir())/'army-gasp-transfer.json').read_text())
if config.get('motion_library'):
    CLIPS = [row['source'] for row in json.loads(Path(__file__).with_name('gasp_motion_catalog.json').read_text())['clips']]
    roots = [BASE+'/Meshes/SKM_UEFN_Mannequin', BASE+'/Rigs/IK_UEFN_Mannequin']
    roots += [BASE+'/Animations/'+name for name in CLIPS]
target = Path(config['destination'])
assert (target/'.army-build-mirror').is_file(), 'Destination must be an isolated Army mirror'
assert json.loads((target/'ArmyPrototype.uproject').read_text())['EngineAssociation']=='5.8'
registry = unreal.AssetRegistryHelpers.get_asset_registry()
registry.search_all_assets(synchronous_search=True)
for package in roots:
    assert unreal.EditorAssetLibrary.does_asset_exist(package), package
options = unreal.AssetRegistryDependencyOptions()
options.include_hard_package_references = True
options.include_soft_package_references = True
options.include_searchable_names = False
options.include_soft_management_references = False
options.include_hard_management_references = False
packages, pending = set(), list(roots)
while pending:
    path = str(pending.pop())
    if path in packages or not path.startswith('/Game/'):
        continue
    packages.add(path)
    pending.extend(registry.get_dependencies(path, options))
rig = unreal.load_asset(BASE+'/Rigs/IK_UEFN_Mannequin')
controller = unreal.IKRigController.get_controller(rig)
chains = {str(c.chain_name): [str(controller.get_retarget_chain_start_bone(c.chain_name)),
                             str(controller.get_retarget_chain_end_bone(c.chain_name))]
          for c in controller.get_retarget_chains()}
report = {'engine': unreal.SystemLibrary.get_engine_version(), 'source': unreal.Paths.get_project_file_path(),
          'destination': str(target), 'roots': roots, 'dependencies': sorted(packages),
          'source_chains': chains, 'source_pelvis': str(controller.get_retarget_root()),
          'source_root_motion': str(controller.get_root_motion_bone()), 'clips': CLIPS}
output = Path(unreal.Paths.project_saved_dir())/'army-gasp-transfer-report.json'
output.write_text(json.dumps(report, indent=2))
# UE 5.8 source mesh/notify dependencies include the CMC animation library and
# Foley assets: reviewed closure is 1,188 packages (~1.08 GB), staged locally only.
assert len(packages)<1600, 'Inspect changed dependency closure before transfer'
migration = unreal.MigrationOptions()
migration.prompt = False
migration.ignore_dependencies = False
migration.asset_conflict = unreal.AssetMigrationConflict.SKIP
unreal.AssetToolsHelpers.get_asset_tools().migrate_packages(roots, str(target/'Content'), migration)
for package in packages:
    assert (target/'Content'/Path(package.removeprefix('/Game/')).with_suffix('.uasset')).is_file(), package
print('GASP_PROTOTYPE_MIGRATED', len(packages), 'packages')
