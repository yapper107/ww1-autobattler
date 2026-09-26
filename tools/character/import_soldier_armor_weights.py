"""Apply measured rigid pauldron attachments without rebuilding either rig."""
import json
import math
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir());report=[]
for gender in ['Female','Male']:
    path=project/'Art/authored_mg'/gender/'armor-weights.json'
    assert path.is_file(), 'Regenerate the authored MG source and its shoulder-weight manifests: '+str(path)
    spec=json.loads(path.read_text())
    assert spec['mesh']=='/Game/Characters/GASP/Bodies/SK_'+gender+'_GASP'
    mesh=unreal.load_asset(spec['mesh']);assert mesh
    positions=unreal.GaspAuthoringLibrary.skeletal_mesh_vertex_positions(mesh)
    modifier=unreal.SkinWeightModifier();assert modifier.set_skeletal_mesh(mesh)
    count=modifier.get_num_vertices();edits={}
    for row in spec['vertices']:
        matches=[i for i,p in positions.items() if math.dist((p.x,p.y,p.z),row['position_cm'])<spec['tolerance_cm']]
        assert 1<=len(matches)<=8,(row,matches)
        for i in matches:
            assert i not in edits,i
            side=row.get('side') or next(iter(row['weights'])).removesuffix('Shoulder')
            old={str(k):v for k,v in modifier.get_vertex_weights(i).items()}
            allowed=[side+'Arm',side+'Shoulder']
            if row.get('kind')=='shoulder_cloth':allowed.extend([side+'ForeArm','Spine1','Spine2'])
            assert sum(v for k,v in old.items() if k in allowed)>.99,(i,old)
            edits[i]=row['weights'];assert modifier.set_vertex_weights(i,row['weights'],True)
    assert modifier.commit_weights_to_skeletal_mesh()
    check=unreal.SkinWeightModifier();assert check.set_skeletal_mesh(mesh)
    assert check.get_num_vertices()==count
    for i,weights in edits.items():
        actual={str(k):v for k,v in check.get_vertex_weights(i).items()}
        assert all(abs(actual.get(k,0)-weights.get(k,0))<2/65535 for k in actual.keys()|weights.keys()),(i,actual,weights)
    assert unreal.EditorAssetLibrary.save_loaded_asset(mesh,only_if_is_dirty=False)
    report.append(dict(body=gender,modified_vertices=len(edits),vertex_count=count))
report_path=project/'Saved/AnimationReview/armor-weights.json'
report_path.parent.mkdir(parents=True,exist_ok=True)
report_path.write_text(json.dumps(report,indent=2))
unreal.log('ARMY_ARMOR_ATTACHMENTS '+str(report))
