"""Index intent contexts so pose similarity cannot pick an idle tail for travel."""
import json
import math
from pathlib import Path
import unreal

catalog = json.loads(Path(__file__).with_name('gasp_motion_catalog.json').read_text())['clips']
report = []
for body in ['Female', 'Male']:
    folder = '/Game/Characters/GASP/Motion/' + body
    schema = unreal.load_asset(folder + '/PSS_Soldier')
    for group in ['standing', 'crouch']:
        def resolve(name):
            own='/Game/Characters/GASP/CombatCrouch/'+body+'/'+name
            return unreal.load_asset(own if group=='crouch' and unreal.EditorAssetLibrary.does_asset_exist(own) else folder+'/Animations/'+name)
        if group=='crouch':
            all_clips=[resolve('GASP_'+row['source'].split('/')[-1]) for row in catalog if row['group']=='crouch']
            database=unreal.GaspAuthoringLibrary.create_soldier_database(schema,all_clips,folder+'/PSD_crouch')
            assert unreal.GaspAuthoringLibrary.build_database(database)>0
            unreal.EditorAssetLibrary.save_loaded_asset(database,only_if_is_dirty=False)
        for context, marker in [('moving', '_Loop_'), ('starting', '_Start_'), ('stopping', '_Stop_'), ('idle', '_Idle_'), ('turning','_Turn_')]:
            names = ['GASP_' + row['source'].split('/')[-1] for row in catalog
                     if row['group'] == group and marker in row['source'] and (context in ('idle','turning') or '_Idle_' not in row['source'])
                     and (context!='turning' or 'M_Neutral_Stand_Turn_' in row['source'] or 'M_Neutral_Crouch_Idle_Turn_' in row['source'])]
            clips = [resolve(name) for name in names]
            assert clips and all(clips), (body, group, context)
            database = unreal.GaspAuthoringLibrary.create_soldier_database(schema, clips, folder + '/PSD_' + group + '_' + context)
            assert database
            for clip in clips:
                unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=True)
            count = unreal.GaspAuthoringLibrary.build_database(database)
            assert count > 0
            assert unreal.EditorAssetLibrary.save_loaded_asset(database, only_if_is_dirty=False)
            report.append(dict(body=body, group=group, context=context, clips=names, poses=count))
        for angle in ['045','090','135','180']:
            for side in ['L','R']:
                names=['GASP_'+row['source'].split('/')[-1] for row in catalog if row['group']==group
                       and ('M_Neutral_Stand_Turn_'+angle+'_'+side in row['source'] or 'M_Neutral_Crouch_Idle_Turn_'+angle+'_'+side in row['source'])]
                clips=[resolve(name) for name in names];assert len(clips)==1 and all(clips),(group,angle,side)
                context='turning_'+angle+'_'+side
                database=unreal.GaspAuthoringLibrary.create_soldier_database(schema,clips,folder+'/PSD_'+group+'_'+context)
                assert database
                for clip in clips:unreal.EditorAssetLibrary.save_loaded_asset(clip,only_if_is_dirty=True)
                count=unreal.GaspAuthoringLibrary.build_database(database);assert count>0
                assert unreal.EditorAssetLibrary.save_loaded_asset(database,only_if_is_dirty=False)
                report.append(dict(body=body,group=group,context=context,clips=names,poses=count))
        if group=='standing':
            # Timed-event similarity alone admitted the deep planted tail of a
            # sprint stop for a 140 cm/s walk. Retain the incoming gait when
            # selecting its braking performance; directions/feet still search.
            for gait in ['Walk','Run','Sprint']:
                names=['GASP_'+row['source'].split('/')[-1] for row in catalog
                       if row['group']=='standing' and row['source'].startswith(gait+'/') and '_Stop_' in row['source']]
                sectors={'':None,'_f':{'F'},'_fr':{'FR'},'_r':{'RL','RR'},'_br':{'BR'},'_b':{'B'},'_bl':{'BL'},'_l':{'LL','LR'},'_fl':{'FL'}}
                for sector,directions in sectors.items():
                    selected=[name for name in names if directions is None or name.split('_Stop_',1)[1].split('_',1)[0] in directions]
                    # Sprint contains no backward stop in this source library.
                    # The runtime retains the general gait fallback for gaps.
                    if not selected:continue
                    clips=[resolve(name) for name in selected]
                    assert all(clips),(body,gait,sector)
                    travels=[]
                    d=math.sqrt(.5)
                    axis={'_f':(0,1),'_fr':(-d,d),'_r':(-1,0),'_br':(-d,-d),'_b':(0,-1),'_bl':(d,-d),'_l':(1,0),'_fl':(d,d)}.get(sector)
                    for clip in clips:
                        delta=unreal.GaspAuthoringLibrary.root_motion_translation(clip,0,clip.get_play_length())
                        if axis:
                            alignment=(delta.x*axis[0]+delta.y*axis[1])/max(.01,math.hypot(delta.x,delta.y))
                            assert alignment>math.cos(math.radians(22.5)),(clip.get_name(),sector,delta,alignment)
                        travels.append([delta.x,delta.y])
                    context='stopping_'+gait.lower()+sector
                    database=unreal.GaspAuthoringLibrary.create_soldier_database(schema,clips,folder+'/PSD_standing_'+context)
                    assert database
                    count=unreal.GaspAuthoringLibrary.build_database(database);assert count>0
                    assert unreal.EditorAssetLibrary.save_loaded_asset(database,only_if_is_dirty=False)
                    report.append(dict(body=body,group=group,context=context,clips=selected,poses=count,root_travel_cm=travels))
out = Path(unreal.Paths.project_saved_dir()) / 'AnimationReview' / 'moving-contexts.json'
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text(json.dumps(report, indent=2))
print('ARMY_MOTION_CONTEXTS', [(r['body'], r['group'], r['context'], len(r['clips'])) for r in report])
