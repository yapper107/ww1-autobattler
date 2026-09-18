"""Unit tests for the plan 016 improvement loop (tools/loop)."""
import json, os, random, shutil, sys, tempfile, unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
os.environ.setdefault('ARMY_LOOP_ROOT', tempfile.mkdtemp(prefix='loop-test-'))

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


class GuardsFile(unittest.TestCase):
    def test_loads_and_kinds_known(self):
        spec = score.load_guards()
        self.assertEqual(spec['version'], 'v1')
        for g in spec['guards']:
            self.assertIn(g['kind'], ('external', 'battle', 'paired'))
            self.assertTrue(g.get('provenance'), g['name'])
        self.assertIn('f1-val', spec['objective']['reported_sets'])


class Scoring(unittest.TestCase):
    def test_better_candidate_scores_positive_and_passes(self):
        cand, base = synthetic()
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK, diff_lines=12)
        self.assertTrue(result['guards_pass'], {k: v for k, v in result['guards'].items() if not v['passed']})
        self.assertIsNotNone(result['value'])
        self.assertGreater(result['objective']['sets']['f1-val']['mean'], 0)
        self.assertEqual(result['tie_break']['diff_lines'], 12)

    def test_zero_shot_battle_fails_guard(self):
        cand, base = synthetic()
        cand['works'][3]['metrics']['shots'] = 0
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['zero_shot']['passed'])
        self.assertIsNone(result['value'])
        self.assertEqual(result['guards']['zero_shot']['detail']['failures'][0]['key'], 't0-103')

    def test_two_firing_squads_fails_participation(self):
        cand, base = synthetic()
        cand['trenches'][0]['firing_squads'] = [2, 4]
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['firing_squads']['passed'])

    def test_bunching_worse_than_legacy_fails(self):
        cand, base = synthetic()
        for r in cand['works']:
            r['metrics']['under_2m'] = 0.30
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['under_2m']['passed'])
        self.assertFalse(result['guards']['under_2m']['detail']['works']['passed'])
        self.assertTrue(result['guards']['under_2m']['detail']['trenches']['passed'])

    def test_external_failure_removes_value_but_keeps_objective(self):
        cand, base = synthetic()
        external = dict(EXTERNAL_OK, selectors=dict(ok=False, failed=['D08']))
        result = score.score(score.load_guards(), cand, base, external)
        self.assertFalse(result['guards_pass'])
        self.assertIsNone(result['value'])
        self.assertIsNotNone(result['objective']['value'])

    def test_worse_candidate_ranks_below(self):
        good, base = synthetic(0.9, 0.5, seed=3)
        bad, _ = synthetic(0.2, 0.5, seed=3)
        spec = score.load_guards()
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
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
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
        label = pairs.answer(visible['id'], 'A')
        self.assertIn(label['preferred'], ('left', 'right'))
        self.assertEqual(len(pairs.labels()), 1)


if __name__ == '__main__':
    unittest.main()
