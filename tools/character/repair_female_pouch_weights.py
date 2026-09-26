"""Keep the four belt pouches rigid on the pelvis; preserve torso straps and cloth."""
import json
from pathlib import Path
import unreal

mesh=unreal.load_asset('/Game/Characters/GASP/Bodies/SK_Female_GASP')
assert mesh
vertices=unreal.GaspAuthoringLibrary.female_belt_pouch_vertices(mesh)
assert 329<=len(vertices)<=600, ('Unexpected pouch selection',len(vertices))
modifier=unreal.SkinWeightModifier();assert modifier.set_skeletal_mesh(mesh)
count=modifier.get_num_vertices();before={}
for vertex in vertices:
    before[str(vertex)]={str(k):v for k,v in modifier.get_vertex_weights(vertex).items()}
    assert modifier.set_vertex_weights(vertex,{'Hips':1.0},True)
assert modifier.commit_weights_to_skeletal_mesh()
check=unreal.SkinWeightModifier();assert check.set_skeletal_mesh(mesh)
assert check.get_num_vertices()==count
for vertex in vertices:
    weights={str(k):v for k,v in check.get_vertex_weights(vertex).items()}
    assert weights=={'Hips':1.0},(vertex,weights)
assert unreal.EditorAssetLibrary.save_loaded_asset(mesh,only_if_is_dirty=False)
out=Path(unreal.Paths.project_saved_dir())/'AnimationReview/female-pouch-weights.json'
out.write_text(json.dumps({'mesh':mesh.get_path_name(),'vertices':len(vertices),'before':before,'after':{'Hips':1.0}},indent=2))
unreal.log('ARMY_RIGID_POUCHES '+str(len(vertices)))
