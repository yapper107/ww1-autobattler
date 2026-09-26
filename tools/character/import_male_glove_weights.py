"""Apply position-matched web/cuff weights to the owned normalized male mesh."""
import json
import math
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
spec=json.loads((project/'Art/authored_rifle/Male/hand-weights.json').read_text())
assert spec['mesh']=='/Game/Characters/GASP/Bodies/SK_Male_GASP'
mesh=unreal.load_asset(spec['mesh']);assert mesh
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
        assert sum(v for k,v in old.items() if k.startswith('RightHand') or k in ['RightForeArm','RightArm'])>.98,(i,old)
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
