"""Read-only UE editor audit; run with -run=pythonscript -script=<this file>.

Writes Saved/animation-asset-audit.json. Loads animation assets without saving or
retargeting them. A successful audit establishes inventory, not visual quality.
"""
from collections import Counter
import json
from pathlib import Path
import unreal

registry = unreal.AssetRegistryHelpers.get_asset_registry()
registry.search_all_assets(synchronous_search=True)
assets = registry.get_assets_by_path('/Game', recursive=True)
report = {'engine': unreal.SystemLibrary.get_engine_version(),
          'project': unreal.Paths.get_project_file_path(),
          'classes': {}, 'assets': [], 'meshes': [], 'errors': []}
classes = Counter()
for data in assets:
    kind = str(data.asset_class_path.asset_name)
    classes[kind] += 1
    path = str(data.package_name)
    if kind in {'SkeletalMesh', 'Skeleton', 'AnimSequence', 'AnimBlueprint',
                'IKRigDefinition', 'IKRetargeter', 'PoseSearchDatabase',
                'PoseSearchSchema', 'ChooserTable', 'ControlRigBlueprint', 'BlendSpace'}:
        report['assets'].append({'path': path, 'class': kind})
    if kind != 'SkeletalMesh':
        continue
    try:
        mesh = data.get_asset()
        component = unreal.SkeletalMeshComponent()
        component.set_skeletal_mesh_asset(mesh)
        bones = []
        for index in range(component.get_num_bones()):
            name = component.get_bone_name(index)
            transform = component.get_ref_pose_transform(index)
            p, q, scale = transform.translation, transform.rotation, transform.scale3d
            bones.append({'name': str(name), 'parent': str(component.get_parent_bone(name)),
                          'local_position_cm': [p.x, p.y, p.z],
                          'local_rotation_xyzw': [q.x, q.y, q.z, q.w],
                          'local_scale': [scale.x, scale.y, scale.z]})
        report['meshes'].append({'path': path,
                                'skeleton': mesh.skeleton.get_path_name(), 'bones': bones})
    except Exception as error:
        report['errors'].append({'path': path, 'error': str(error)})
report['classes'] = dict(sorted(classes.items()))
report['assets'].sort(key=lambda row: row['path'])
output = Path(unreal.Paths.project_saved_dir()) / 'animation-asset-audit.json'
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text(json.dumps(report, indent=2))
print('ANIMATION_ASSET_AUDIT', json.dumps({'output': str(output), 'classes': report['classes'],
                                        'meshes': len(report['meshes']), 'errors': report['errors']}))
if report['errors']:
    raise RuntimeError('Animation asset audit incomplete; see JSON errors')
