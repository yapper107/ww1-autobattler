"""Index intent contexts so pose similarity cannot pick an idle tail for travel."""
import json
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
        for context, marker in [('moving', '_Loop_'), ('starting', '_Start_'), ('stopping', '_Stop_'), ('idle', '_Idle_')]:
            names = ['GASP_' + row['source'].split('/')[-1] for row in catalog
                     if row['group'] == group and marker in row['source'] and (context=='idle' or '_Idle_' not in row['source'])]
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
out = Path(unreal.Paths.project_saved_dir()) / 'AnimationReview' / 'moving-contexts.json'
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text(json.dumps(report, indent=2))
print('ARMY_MOTION_CONTEXTS', [(r['body'], r['group'], r['context'], len(r['clips'])) for r in report])
