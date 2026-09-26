"""Apply position-matched web/cuff weights to the owned normalized male mesh."""
import json
import math
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
spec=json.loads((project/'Art/authored_rifle/Male/hand-weights.json').read_text())
mg_spec=project/'Art/authored_mg/Male/hand-weights.json'
if mg_spec.exists():
    extra=json.loads(mg_spec.read_text());assert extra['mesh']==spec['mesh']
    # Both weapon families share this body. The MG source includes the left
    # operating cuff as well as the rifle's existing right-hand repairs.
    spec['vertices'].extend(row for row in extra['vertices']
                            if all(name.startswith('Left') for name in row['weights']))
assert spec['mesh']=='/Game/Characters/GASP/Bodies/SK_Male_GASP'
mesh=unreal.load_asset(spec['mesh']);assert mesh
repair=project/'Art/authored_mg/Male/sleeve-repair.json'
if repair.exists():
    patch=json.loads(repair.read_text());assert patch['mesh']==spec['mesh']
    assert unreal.GaspAuthoringLibrary.repair_male_sleeve_triangle(mesh,[unreal.Vector(*p) for p in patch['boundary_cm']])
positions=unreal.GaspAuthoringLibrary.skeletal_mesh_vertex_positions(mesh)
modifier=unreal.SkinWeightModifier();assert modifier.set_skeletal_mesh(mesh)
count=modifier.get_num_vertices();assert len(positions)==count
edits={};before={}
for row in spec['vertices']:
    matches=[i for i,p in positions.items() if math.dist((p.x,p.y,p.z),row['position_cm'])<spec['tolerance_cm']]
    assert 1<=len(matches)<=8,(row['position_cm'],matches)
    for i in matches:
        assert i not in edits,('Overlapping source matches',i)
        old={str(k):v for k,v in modifier.get_vertex_weights(i).items()}
        side='Left' if any(k.startswith('Left') for k in row['weights']) else 'Right'
        assert sum(v for k,v in old.items() if k.startswith(side+'Hand') or k in [side+'ForeArm',side+'Arm'])>.98,(i,old)
        edits[i]=row['weights'];before[i]=old
for i,weights in edits.items():assert modifier.set_vertex_weights(i,weights,True)
assert modifier.commit_weights_to_skeletal_mesh()
check=unreal.SkinWeightModifier();assert check.set_skeletal_mesh(mesh)
assert check.get_num_vertices()==count
for i,weights in edits.items():
    actual={str(k):v for k,v in check.get_vertex_weights(i).items()}
    assert all(abs(actual.get(n,0)-w)<.001 for n,w in weights.items()),(i,actual,weights)
assert unreal.EditorAssetLibrary.save_loaded_asset(mesh,only_if_is_dirty=False)
(project/'Saved/AnimationReview/male-glove-weights.json').write_text(json.dumps(dict(
    changed_vertices=len(edits),vertex_count=count,before=before,after=edits),indent=2))
unreal.log('ARMY_MALE_GLOVE_WEIGHTS '+str(len(edits)))
