"""Bake the assembled visible weapon support hull into its portable profile.

Editor-only extraction means packaged playback does not require CPU vertex buffers.
The convex hull preserves every extremal support point against a plane. It is a
coarse collider for concave obstacles, not a claim of exact triangle collision.
"""
import json
from pathlib import Path
import unreal

report=[]
for name,mass,paths in [
    ('Rifle',4.5,['/Game/Characters/FemaleRifle/SM_Rifle']),
    ('MachineGun',11.5,['/Game/Characters/GASP/Equipment/SM_MG_'+part
                      for part in ['Body','Box','Belt','Cover','ChargingHandle']])]:
    profile=unreal.load_asset('/Game/Characters/GASP/Equipment/DA_'+name)
    assert profile,name
    points=[]
    for path in paths:
        mesh=unreal.load_asset(path);assert mesh,path
        points.extend(unreal.GaspAuthoringLibrary.static_mesh_positions(mesh))
    if name=='Rifle':
        bolt=unreal.load_asset('/Game/Characters/FemaleRifle/SM_Bolt');assert bolt
        rest=profile.get_editor_property('bolt_rest')
        points.extend(unreal.Vector(-p.x+rest.x,p.y+rest.y,p.z+rest.z)
                      for p in unreal.GaspAuthoringLibrary.static_mesh_positions(bolt))
    # Welding duplicate render vertices reduces hull creation cost without
    # shrinking visible extremities. Units and axes are the imported UE mesh.
    unique={tuple(round(v,4) for v in [p.x,p.y,p.z]):p for p in points}
    points=list(unique.values());assert len(points)>30
    profile.set_editor_property('drop_hull',points)
    profile.set_editor_property('drop_mass_kg',mass)
    unreal.EditorAssetLibrary.save_loaded_asset(profile,only_if_is_dirty=False)
    report.append(dict(weapon=name,mass_kg=mass,points=len(points),sources=paths))
dest=Path(unreal.Paths.project_dir())/'Saved/AnimationReview/weapon-drop-collision.json'
dest.parent.mkdir(parents=True,exist_ok=True);dest.write_text(json.dumps(report,indent=2))
print('ARMY_WEAPON_DROP_COLLISION',report)
