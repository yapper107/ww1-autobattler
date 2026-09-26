"""Bake a higher combat crouch into duplicates, retaining authored foot contacts."""
import json
from pathlib import Path
import unreal

catalog=json.loads(Path(__file__).with_name('gasp_motion_catalog.json').read_text())['clips']
report=[]
for body,height in [('Female',60.),('Male',64.8)]:
    for row in catalog:
        if row['group']!='crouch':continue
        name='GASP_'+row['source'].split('/')[-1]
        source=unreal.load_asset('/Game/Characters/GASP/Motion/'+body+'/Animations/'+name)
        path='/Game/Characters/GASP/CombatCrouch/'+body+'/'+name
        clip=unreal.GaspAuthoringLibrary.create_combat_crouch(source,height,path)
        assert clip,path
        unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=False)
        report.append(dict(body=body,asset=path,minimum_hip_cm=height,status='WIP; rendered acceptance required'))
    print('ARMY_COMBAT_CROUCH',body,flush=True)
(Path(unreal.Paths.project_saved_dir())/'AnimationReview/combat-crouch.json').write_text(json.dumps(report,indent=2))
