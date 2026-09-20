"""Unit tests for the plan 016 improvement loop (tools/loop)."""
import json, os, random, shutil, sys, tempfile, unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
# Always a private root: the loop's own Python-tests guard runs this file with the shared
# tree's ARMY_LOOP_ROOT exported, and a test must never write into the real tree.
os.environ['ARMY_LOOP_ROOT'] = tempfile.mkdtemp(prefix='loop-test-')

from tools.loop import config, pairs, score, static_check, tree, verdict  # noqa: E402


def row(set_name, seed, gen_seed=None, win=1, draw=0, exchange=2.0, shots=500, under=0.05, orders=(100.0, 100.0), squads=(4, 4), ff=0.0):
    r = dict(set=set_name, seed=seed, status='complete', run='/nonexistent', firing_squads=list(squads),
             metrics=dict(shots=shots, win_azure=win, draw=draw, win_ember=int(not win and not draw), casualty_exchange=exchange,
                          casualty_azure=0.3, casualty_ember=0.6, under_2m=under, nearest_m=6.0,
                          orders_azure_per_minute=orders[0], orders_ember_per_minute=orders[1],
                          friendly_hits_per_100_soldier_minutes=ff))
    if gen_seed is None:
        r['terrain'] = 0 if set_name == 'works' else 1
    else:
        r['family'] = 'F1'
        r['gen_seed'] = gen_seed
    return r


def synthetic(candidate_win_rate=0.8, base_win_rate=0.5, seed=1):
    rng = random.Random(seed)
    cand, base = {}, {'legacy': {}, 'candidate90': {}}
    for s in ('works', 'trenches'):
        cand[s] = [row(s, i, under=0.05, orders=(100, 100)) for i in range(100, 110)]
        base['legacy'][s] = [row(s, i, under=0.15, orders=(200, 200)) for i in range(100, 110)]
    for s in ('f1-dev', 'f1-val'):
        cand[s] = [row(s, sd, g, win=int(rng.random() < candidate_win_rate)) for g in range(1, 11) for sd in (107, 108, 109)]
        for b in base:
            base[b][s] = [row(s, sd, g, win=int(rng.random() < base_win_rate), exchange=1.0) for g in range(1, 11) for sd in (107, 108, 109)]
    return cand, base


EXTERNAL_OK = {name: dict(ok=True) for name in ('build', 'selectors', 'python_tests', 'protected_files', 'static_check', 'parity')}
# Score semantics are tested against the preserved v1 spec (authored and F1 sets);
# the current spec is checked for its own set choices below.
V1 = score.load_guards(config.GUARDS_FILE.with_name('guards-v1.json'))


class GuardsFile(unittest.TestCase):
    def test_loads_and_kinds_known(self):
        for spec in (score.load_guards(), V1):
            for g in spec['guards']:
                self.assertIn(g['kind'], ('external', 'battle', 'paired'))
                self.assertTrue(g.get('provenance'), g['name'])
        self.assertEqual(V1['version'], 'v1')
        self.assertIn('f1-val', V1['objective']['reported_sets'])

    def test_v2_is_preserved_with_the_symmetric_town_objective(self):
        v2 = score.load_guards(config.GUARDS_FILE.with_name('guards-v2.json'))
        self.assertEqual(v2['version'], 'v2')
        self.assertEqual(v2['objective']['ranking_set'], 'town-val')

    def test_current_spec_ranks_the_attack_and_keeps_trenches_for_shooting_only(self):
        spec = score.load_guards()
        self.assertEqual(spec['version'], 'v3')
        self.assertEqual(spec['objective']['kind'], 'attack')
        self.assertEqual(spec['objective']['ranking_set'], 'town-attack-val')
        for g in spec['guards']:
            trench = [s for s in g.get('sets', []) if s.startswith('trench')]
            if trench:
                self.assertIn(g['name'], ('zero_shot', 'firing_squads'), g['name'])
            for s in g.get('sets', []):
                self.assertTrue(s.startswith(('town-', 'trench-')), f"{g['name']}: {s}")

    @staticmethod
    def town_rows(defender_loss=0.75, attacker_loss=0.25, squads=(4, 2)):
        from tools.loop.runner import attack_metrics

        def town(set_name, gen, attack):
            r = row(set_name, 107, gen, win=int(defender_loss >= 1))
            r['family'] = 'city'
            if attack:
                r['defence'] = dict(layout=config.ATTACK_LAYOUTS[gen % 3], defenders=12, seed=gen)
                r['firing_squads'] = list(squads)
                r['metrics'].update(casualty_ember=defender_loss, casualty_azure=attacker_loss)
                r['metrics'].update(attack_metrics(r['metrics']))
            return r
        cand = {s: [town(s, g, 'attack' in s) for g in range(21, 31)] for s in ('town-dev', 'trench-dev', 'town-attack-dev', 'town-attack-val')}
        base = {'legacy': {'town-dev': [town('town-dev', g, False) for g in range(21, 31)]}}
        return cand, base

    def test_attack_objective_is_defender_loss_less_half_own_loss(self):
        cand, base = self.town_rows(0.75, 0.25)
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertTrue(result['guards_pass'], {k: v for k, v in result['guards'].items() if not v['passed']})
        self.assertAlmostEqual(result['value'], 0.625)
        attack = result['objective']['sets']['town-attack-val']
        self.assertEqual(attack['cleared_share'], 0)
        self.assertEqual(sorted(attack['by_layout']), ['building', 'clusters', 'spread'])
        better, _ = self.town_rows(1.0, 0.25)
        self.assertLess(score.rank_key(score.score(score.load_guards(), better, base, EXTERNAL_OK)), score.rank_key(result))

    def test_child_is_valued_against_its_root_on_the_same_battles(self):
        # Lucky validation maps: the child's own mean is high, but the root does as well on those maps.
        child, base = self.town_rows(0.9, 0.2)
        root_on_same_maps, _ = self.town_rows(0.9, 0.2)
        lineage = dict(root='r', anchor=0.5, root_rows={k: root_on_same_maps[k] for k in ('town-attack-dev', 'town-attack-val')})
        result = score.score(score.load_guards(), child, base, EXTERNAL_OK, lineage=lineage)
        self.assertAlmostEqual(result['objective']['sets']['town-attack-val']['mean'], 0.8)
        self.assertAlmostEqual(result['value'], 0.5)      # anchor + zero paired delta, not the lucky 0.8
        better, _ = self.town_rows(1.0, 0.2)
        gain = score.score(score.load_guards(), better, base, EXTERNAL_OK, lineage=lineage)
        self.assertAlmostEqual(gain['value'], 0.6)
        self.assertEqual(gain['objective']['sets']['town-attack-val']['paired_vs_root']['better'], 10)

    def test_defender_squads_may_be_few_but_attacker_squads_must_fire(self):
        cand, base = self.town_rows(squads=(4, 1))
        self.assertTrue(score.score(score.load_guards(), cand, base, EXTERNAL_OK)['guards']['attacker_firing_squads']['passed'])
        cand, base = self.town_rows(squads=(2, 2))
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['attacker_firing_squads']['passed'])
        self.assertIsNone(result['value'])

    def test_silent_trench_battle_fails_the_shooting_guard(self):
        cand, base = self.town_rows()
        cand['trench-dev'][0]['metrics']['shots'] = 0
        self.assertFalse(score.score(score.load_guards(), cand, base, EXTERNAL_OK)['guards']['zero_shot']['passed'])


class Lineage(unittest.TestCase):
    def test_child_may_keep_root_failures_but_not_add_one(self):
        from tools.loop.evaluate import needed_sets, selectors_against_root
        root = dict(selectors=dict(ok=False, failed=['D02', 'D08']))
        same = selectors_against_root(dict(ok=False, failed=['D08']), root)
        self.assertTrue(same['ok'])
        self.assertEqual(same['known_failures'], ['D08'])
        worse = selectors_against_root(dict(ok=False, failed=['D08', 'Q04']), root)
        self.assertFalse(worse['ok'])
        self.assertEqual(worse['new_failures'], ['Q04'])
        self.assertTrue(selectors_against_root(dict(ok=False, failed=['D02']), None)['ok'])  # a root defines the known set
        unbuilt = selectors_against_root(dict(ok=False, reason='test build failed'), root)
        self.assertFalse(unbuilt['ok'])
        self.assertEqual(needed_sets(score.load_guards()), {'town-dev', 'trench-dev', 'town-attack-dev', 'town-attack-val'})

    def test_lineage_root_and_partners(self):
        for node_id, parent in (('r', None), ('c1', 'r'), ('c2', 'c1')):
            tree.save(tree.new_node(node_id, parent, dict(kind='human')))
        self.assertEqual(tree.lineage_root('c2'), 'r')
        self.assertEqual(tree.lineage_root('r'), 'r')
        self.assertIsNone(tree.lineage_root('missing'))
        self.assertEqual(config.parity_partners('legacy'), ['candidate90', 'drills'])
        self.assertEqual(config.parity_partners('drills'), ['legacy', 'candidate90'])

    def test_defence_is_part_of_the_scenario_identity(self):
        plain = dict(set='town-dev', family='city', gen_seed=21, seed=107)
        attack = dict(plain, defence=dict(layout='spread', defenders=12, seed=21))
        self.assertNotEqual(config.spec_key(plain), config.spec_key(attack))
        self.assertNotEqual(config.pair_key(plain), config.pair_key(attack))

    def test_baseline_cache_is_keyed_by_epoch(self):
        from tools.loop import baselines
        spec = dict(set='town-dev', family='city', gen_seed=21, seed=107)
        baselines.set_epoch('aaaa-legacy')
        first = baselines._cache_path('legacy', spec, 360)
        baselines.set_epoch('bbbb')
        self.assertNotEqual(first, baselines._cache_path('legacy', spec, 360))
        self.assertIn('aaaa', str(first))

    def test_diagnosis_finds_a_static_attacking_squad_and_a_cancelled_flank(self):
        from tools.loop.diagnose import summarise_run
        with tempfile.TemporaryDirectory() as tmp:
            run = Path(tmp)
            records = [dict(kind='plan_phase', time=5, squad=1, soldier=8, reason='BLOCKED / HOLD', position=[0, 0, 0])]
            for t in range(0, 130, 10):
                for soldier in (8, 9):   # squad 1 never moves
                    records.append(dict(kind='heartbeat', time=t, squad=1, soldier=soldier, reason='', position=[-50, 10 + soldier, 0], alive=1, health=100))
                for soldier in (0, 1):   # squad 0 walks 3 m every 10 s
                    records.append(dict(kind='heartbeat', time=t, squad=0, soldier=soldier, reason='', position=[-50 + 0.3*t, soldier, 0], alive=1, health=100))
            records += [dict(kind='order_issued', time=60, squad=1, soldier=9, reason='FLANK', position=[0, 0, 0]),
                        dict(kind='order_issued', time=61, squad=1, soldier=9, reason='HOLD', position=[0, 0, 0]),
                        dict(kind='position_query', time=1, squad=1, soldier=9, reason='', position=[1, 1, 0])]
            (run/'trace.jsonl').write_text(''.join(json.dumps(r, separators=(',', ':')) + '\n' for r in records))
            (run/'shots.jsonl').write_text(json.dumps(dict(team=0, squad=0, time=42.0)) + '\n')
            summary = summarise_run(run, seconds=120)
        self.assertEqual([w['squad'] for w in summary['static_windows']], [1])
        self.assertEqual(summary['static_windows'][0]['stated'], 'BLOCKED / HOLD')
        self.assertEqual(summary['static_windows'][0]['end'] - summary['static_windows'][0]['start'], 120)
        self.assertEqual(summary['movement_orders_replaced_within_3s'], {'FLANK -> HOLD': 1})
        self.assertEqual(summary['first_attacker_shot'], 42.0)

    def test_brief_locates_a_stated_reason_in_the_snapshot(self):
        from tools.loop.propose import locate
        with tempfile.TemporaryDirectory() as tmp:
            (Path(tmp)/'SquadDrillSim.cpp').write_text('int a;\nStage(l,p,d,time,DrillStage::SupportHold,"established base of fire; hold and report no covered assault route");\n')
            self.assertEqual(locate(Path(tmp), 'established base of fire; hold and report no covered assault route'), 'SquadDrillSim.cpp:2')
            self.assertIsNone(locate(Path(tmp), 'short'))

    def test_replay_arguments_repeat_the_scenario(self):
        from tools.loop.replay import launch_arguments
        row = dict(set='town-attack-val', family='city', gen_seed=22, seed=107, map='/x/city-22.army', seconds=600, defence=dict(layout='spread', defenders=12, seed=22))
        self.assertEqual(launch_arguments(dict(controller='legacy'), row),
                         ['-ArmyLegacy', '-ArmySeed=107', '-ArmyBattleSeconds=600', '-ArmyMap=city', '-ArmyStaticDefence=spread', '-ArmyDefenders=12', '-ArmyDefenceSeed=22'])
        self.assertEqual(launch_arguments(dict(controller='drills'), dict(set='trench-dev', family='trenches', gen_seed=21, seed=107, map='/x/t.army'))[-1], '-ArmyMap=trenches')

    def test_audit_lists_added_frame_reads_only(self):
        with tempfile.TemporaryDirectory() as tmp:
            diff = Path(tmp)/'diff.patch'
            diff.write_text('--- a/CommandSim.cpp\n+++ b/CommandSim.cpp\n@@\n-    auto x=f.soldiers[enemy].position;\n+    auto y=f.soldiers[enemy].position;\n+    int wait=12;\n')
            audit = static_check.audit_added_lines(diff)
        self.assertTrue(audit['required'])
        self.assertEqual(len(audit['lines']), 1)
        self.assertEqual(audit['lines'][0]['file'], 'CommandSim.cpp')
        self.assertFalse(static_check.audit_added_lines(None)['required'])


class Scoring(unittest.TestCase):
    def test_better_candidate_scores_positive_and_passes(self):
        cand, base = synthetic()
        result = score.score(V1, cand, base, EXTERNAL_OK, diff_lines=12)
        self.assertTrue(result['guards_pass'], {k: v for k, v in result['guards'].items() if not v['passed']})
        self.assertIsNotNone(result['value'])
        self.assertGreater(result['objective']['sets']['f1-val']['mean'], 0)
        self.assertEqual(result['tie_break']['diff_lines'], 12)

    def test_zero_shot_battle_fails_guard(self):
        cand, base = synthetic()
        cand['works'][3]['metrics']['shots'] = 0
        result = score.score(V1, cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['zero_shot']['passed'])
        self.assertIsNone(result['value'])
        self.assertEqual(result['guards']['zero_shot']['detail']['failures'][0]['key'], 't0-103')

    def test_two_firing_squads_fails_participation(self):
        cand, base = synthetic()
        cand['trenches'][0]['firing_squads'] = [2, 4]
        result = score.score(V1, cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['firing_squads']['passed'])

    def test_bunching_worse_than_legacy_fails(self):
        cand, base = synthetic()
        for r in cand['works']:
            r['metrics']['under_2m'] = 0.30
        result = score.score(V1, cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['under_2m']['passed'])
        self.assertFalse(result['guards']['under_2m']['detail']['works']['passed'])
        self.assertTrue(result['guards']['under_2m']['detail']['trenches']['passed'])

    def test_external_failure_removes_value_but_keeps_objective(self):
        cand, base = synthetic()
        external = dict(EXTERNAL_OK, selectors=dict(ok=False, failed=['D08']))
        result = score.score(V1, cand, base, external)
        self.assertFalse(result['guards_pass'])
        self.assertIsNone(result['value'])
        self.assertIsNotNone(result['objective']['value'])

    def test_worse_candidate_ranks_below(self):
        good, base = synthetic(0.9, 0.5, seed=3)
        bad, _ = synthetic(0.2, 0.5, seed=3)
        spec = V1
        a = score.score(spec, good, base, EXTERNAL_OK)
        b = score.score(spec, bad, base, EXTERNAL_OK)
        self.assertLess(score.rank_key(a), score.rank_key(b))

    def test_log_exchange_clips_and_handles_zero_own_loss(self):
        f = score.log_exchange(3)
        self.assertEqual(f(dict(metrics=dict(casualty_exchange=100))), 3)
        self.assertEqual(f(dict(metrics=dict(casualty_exchange=None, casualty_ember=0.5, casualty_azure=0))), 3)
        self.assertIsNone(f(dict(metrics=dict(casualty_exchange=None, casualty_ember=0, casualty_azure=0))))


class StaticCheck(unittest.TestCase):
    def test_flags_frame_access_and_ignores_comments(self):
        with tempfile.TemporaryDirectory() as d:
            (Path(d)/'DrillSim.cpp').write_text('int x;\n// f.soldiers in a comment is fine\nauto& s=f.soldiers[3]; // bad\n')
            result = static_check.check(Path(d), ['DrillSim.cpp'])
            self.assertFalse(result['ok'])
            self.assertEqual(result['hits'][0]['line'], 3)

    def test_current_policy_sources_are_clean(self):
        result = static_check.check()
        self.assertTrue(result['ok'], result['hits'])


class Tree(unittest.TestCase):
    def setUp(self):
        self.tmp = Path(tempfile.mkdtemp(prefix='tree-'))
        self.old = tree.TREE_ROOT
        tree.TREE_ROOT = self.tmp/'tree'
        pairs.PAIRS_ROOT = self.tmp/'pairs'

    def tearDown(self):
        tree.TREE_ROOT = self.old
        shutil.rmtree(self.tmp, ignore_errors=True)

    def _source(self, name, text):
        d = self.tmp/name
        d.mkdir()
        (d/'A.cpp').write_text(text)
        return d

    def test_nodes_diff_and_scores_are_append_only(self):
        parent_src = self._source('p', 'int a;\nint b;\n')
        child_src = self._source('c', 'int a;\nint c;\nint d;\n')
        tree.save(tree.new_node('parent', None, dict(kind='baseline')))
        tree.snapshot_source('parent', parent_src)
        tree.save(tree.new_node('child', 'parent', dict(kind='llm', model='sonnet')))
        tree.snapshot_source('child', child_src)
        self.assertEqual(tree.diff_lines('child', 'parent'), 3)
        self.assertTrue(Path(tree.write_diff('child', 'parent')).read_text().startswith('--- a/A.cpp'))
        cand, base = synthetic()
        tree.write_rows('child', cand)
        result = score.score(V1, cand, base, EXTERNAL_OK)
        tree.write_score('child', result)
        self.assertEqual(tree.load('child')['scores']['v1']['guards_pass'], True)
        self.assertEqual([n['id'] for n in tree.list_nodes()], ['parent', 'child'])

    def test_verdict_records_open_rejection(self):
        tree.save(tree.new_node('n1', None, dict(kind='human')))
        verdict.add('n1', 'reject', battle='works:107', at=120, squad=5, wrong='two men on one shelter', expected='separate slots')
        self.assertEqual(tree.load('n1')['verdict'], 'reject')
        self.assertEqual(verdict.open_rejections()[0]['squad'], 5)

    def test_pair_hides_identity_until_answered(self):
        for node_id in ('left', 'right'):
            tree.save(tree.new_node(node_id, None, dict(kind='human')))
            run = self.tmp/f'run-{node_id}'
            run.mkdir()
            (run/'manifest.json').write_text(json.dumps(dict(seed=107, terrain=0)))
            r = row('works', 107)
            r['run'] = str(run)
            tree.write_rows(node_id, {'works': [r]})
        visible = pairs.make('left', 'right', 'works', 't0-107', random.Random(0))
        text = (pairs.PAIRS_ROOT/visible['id']/'pair.json').read_text()
        self.assertNotIn('left', text)
        self.assertNotIn('right', text)
        self.assertNotIn('runs', visible)   # raw battle output is never copied; a side is replayed instead
        self.assertIn('pairs watch', visible['note'])
        label = pairs.answer(visible['id'], 'A')
        self.assertIn(label['preferred'], ('left', 'right'))
        self.assertEqual(len(pairs.labels()), 1)

    def test_scored_battle_keeps_only_manifest_and_summary(self):
        from tools.loop.runner import prune_exports
        run = self.tmp/'battle'
        run.mkdir()
        for name in ('manifest.json', 'summary.md', 'evaluation.jsonl', 'shots.jsonl', 'events.jsonl', 'geometry.jsonl', 'battlefield.army'):
            (run/name).write_text('x')
        prune_exports(run)
        self.assertEqual(sorted(p.name for p in run.iterdir()), ['manifest.json', 'summary.md'])

    def test_generated_map_folder_keeps_only_battlefields(self):
        from tools.loop import maps
        out = self.tmp/'maps21'
        out.mkdir()
        for name in ('city-21.army', 'trenches-21.army', 'city-21.json', 'city-21.svg', 'index.html', 'generate.log'):
            (out/name).write_text('x')
        maps.prune_previews(out)
        self.assertEqual(sorted(p.name for p in out.iterdir()), ['city-21.army', 'generate.log', 'trenches-21.army'])

    def test_longer_battles_get_fewer_parallel_jobs(self):
        from tools.loop import runner
        short, long = runner.default_jobs(None, True, 360), runner.default_jobs(None, True, 600)
        self.assertLessEqual(long, short)
        self.assertGreaterEqual(long, 1)

    def test_lean_binaries_get_many_more_parallel_jobs(self):
        from tools.loop import runner
        self.assertGreaterEqual(runner.default_jobs(None, True, 600, lean=True), runner.default_jobs(None, True, 600))
        self.assertFalse(runner.supports_lean('/nonexistent/battle-lab'))
        runner._LEAN_SUPPORT['/fake/lean'] = True
        self.assertIn('--lean', runner.battle_command('/fake/lean', 'legacy', dict(set='works', terrain=0, seed=107), out='o'))
        self.assertNotIn('--lean', runner.battle_command('/fake/lean', 'legacy', dict(set='works', terrain=0, seed=107), trace=True, out='o'))

    def test_attack_maps_are_fought_with_three_battle_seeds(self):
        import unittest.mock as mock
        from tools.loop import maps
        with mock.patch.object(maps, 'ensure', lambda seed: {'city': f'/m/city-{seed}.army', 'trenches': f'/m/trenches-{seed}.army'}):
            attack = maps.specs('town-attack-dev', 'city', [21, 22], 107, attack=True)
            plain = maps.specs('town-dev', 'city', [21, 22], 107)
        self.assertEqual(len(attack), 2*len(config.ATTACK_BATTLE_SEEDS))
        self.assertEqual(len(plain), 2)
        self.assertEqual(len({config.spec_key(s) for s in attack}), len(attack))
        self.assertEqual({config.cluster_key(s) for s in attack}, {21, 22})   # still clustered on the map

    def test_a_generation_shares_one_validation_draw_and_the_next_gets_another(self):
        from tools.loop import maps
        six = maps.validation_seeds('efce1ef0fb0e378a|generation6', 'plan016|attack', 5)
        self.assertEqual(six, maps.validation_seeds('efce1ef0fb0e378a|generation6', 'plan016|attack', 5))
        self.assertNotEqual(six, maps.validation_seeds('efce1ef0fb0e378a|generation7', 'plan016|attack', 5))
        self.assertNotEqual(six, maps.validation_seeds('efce1ef0fb0e378a-linux', 'plan016|attack', 5))

    def test_evaluation_export_is_parsed_once_and_streams_everything_else(self):
        import phase0_metrics
        run = self.tmp/'parse'
        run.mkdir()
        (run/'evaluation.jsonl').write_text('{"time":0.0,"soldiers":[]}\n\n{"time":0.2,"soldiers":[]}\n')
        (run/'shots.jsonl').write_text('{"time":1.5}\n')
        first = list(phase0_metrics.rows(run/'evaluation.jsonl'))
        self.assertEqual([r['time'] for r in first], [0.0, 0.2])
        self.assertIs(next(phase0_metrics.rows(run/'evaluation.jsonl')), first[0])   # reused, not parsed again
        self.assertEqual(list(phase0_metrics.rows(run/'shots.jsonl')), [{'time': 1.5}])
        (run/'evaluation.jsonl').write_text('{"time":9.0,"soldiers":[]}\n')
        self.assertEqual([r['time'] for r in phase0_metrics.rows(run/'evaluation.jsonl')], [9.0])   # a changed file is read again

    def test_only_wanted_sets_are_built(self):
        sets = config.scenario_sets('abc-linux', wanted={'works'})
        self.assertEqual(list(sets), ['works'])
        self.assertEqual(set(config.SET_NAMES) >= {'town-attack-val', 'trench-dev'}, True)


if __name__ == '__main__':
    unittest.main()
