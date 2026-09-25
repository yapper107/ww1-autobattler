"""Unit tests for the plan 016 improvement loop (tools/loop)."""
import json, os, random, shutil, sys, tempfile, unittest
import unittest.mock as mock
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
# Score v7 (towns) is preserved beside the current file; its semantics are tested against it, and v8 is
# checked to be v7 moved to the village and city2 sets with every threshold unchanged.
V7 = score.load_guards(config.GUARDS_FILE.with_name('guards-v7.json'))


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

    def test_v7_is_preserved_ranking_the_town_attack_and_keeping_trenches_for_shooting_only(self):
        spec = V7
        self.assertEqual(spec['version'], 'v7')
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
                r['metrics'].update(casualty_ember=defender_loss, casualty_azure=attacker_loss, at_fight_share=0.9, contact_exposed_share=0.06, idle_exposed_share=0.01)
                r['metrics'].update(attack_metrics(r['metrics']))
            return r
        cand = {s: [town(s, g, 'attack' in s) for g in range(21, 31)] for s in ('town-dev', 'trench-dev', 'town-attack-dev', 'town-attack-val')}
        base = {'legacy': {'town-dev': [town('town-dev', g, False) for g in range(21, 31)],
                           'town-attack-dev': [town('town-attack-dev', g, True) for g in range(21, 31)]}}
        return cand, base

    def test_attack_objective_is_defender_loss_less_half_own_loss(self):
        cand, base = self.town_rows(0.75, 0.25)
        result = score.score(V7, cand, base, EXTERNAL_OK)
        self.assertTrue(result['guards_pass'], {k: v for k, v in result['guards'].items() if not v['passed']})
        self.assertAlmostEqual(result['value'], 0.625)
        attack = result['objective']['sets']['town-attack-val']
        self.assertEqual(attack['cleared_share'], 0)
        self.assertEqual(sorted(attack['by_layout']), ['building', 'clusters', 'spread'])
        better, _ = self.town_rows(1.0, 0.25)
        self.assertLess(score.rank_key(score.score(V7, better, base, EXTERNAL_OK)), score.rank_key(result))

    def test_child_is_valued_against_its_root_on_the_same_battles(self):
        # Lucky validation maps: the child's own mean is high, but the root does as well on those maps.
        child, base = self.town_rows(0.9, 0.2)
        root_on_same_maps, _ = self.town_rows(0.9, 0.2)
        lineage = dict(root='r', anchor=0.5, root_rows={k: root_on_same_maps[k] for k in ('town-attack-dev', 'town-attack-val')})
        result = score.score(V7, child, base, EXTERNAL_OK, lineage=lineage)
        self.assertAlmostEqual(result['objective']['sets']['town-attack-val']['mean'], 0.8)
        self.assertAlmostEqual(result['value'], 0.5)      # anchor + zero paired delta, not the lucky 0.8
        better, _ = self.town_rows(1.0, 0.2)
        gain = score.score(V7, better, base, EXTERNAL_OK, lineage=lineage)
        self.assertAlmostEqual(gain['value'], 0.6)
        self.assertEqual(gain['objective']['sets']['town-attack-val']['paired_vs_root']['better'], 10)

    def test_defender_squads_may_be_few_but_attacker_squads_must_fire(self):
        cand, base = self.town_rows(squads=(4, 1))
        self.assertTrue(score.score(V7, cand, base, EXTERNAL_OK)['guards']['attacker_firing_squads']['passed'])
        cand, base = self.town_rows(squads=(2, 2))
        result = score.score(V7, cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['attacker_firing_squads']['passed'])
        self.assertIsNone(result['value'])
        for rows in cand.values():                       # v5: an attack already won is not a stalled one
            for r in rows:
                r['metrics']['attack_cleared'] = 1
        self.assertTrue(score.score(V7, cand, base, EXTERNAL_OK)['guards']['attacker_firing_squads']['passed'])

    def test_a_force_that_hangs_back_or_fights_from_the_open_has_no_score(self):
        cand, base = self.town_rows()
        for r in cand['town-attack-dev']:
            r['metrics']['at_fight_share'] = 0.6
        result = score.score(V7, cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['force_at_the_fight']['passed'])
        self.assertTrue(result['guards']['fights_from_cover']['passed'])
        self.assertIsNone(result['value'])
        cand, base = self.town_rows()
        for r in cand['town-attack-dev']:                # v6: standing in the enemy's sight with no shot of one's own
            r['metrics']['idle_exposed_share'] = 0.05
        self.assertFalse(score.score(V7, cand, base, EXTERNAL_OK)['guards']['fights_from_cover']['passed'])
        for r in cand['town-attack-dev']:                # user decision: half a point above legacy is tolerated
            r['metrics']['idle_exposed_share'] = 0.013
        self.assertTrue(score.score(V7, cand, base, EXTERNAL_OK)['guards']['fights_from_cover']['passed'])
        cand, base = self.town_rows()
        for r in cand['town-attack-dev']:                # seen more because they shoot more: allowed up to the backstop
            r['metrics']['contact_exposed_share'] = 0.085
        result = score.score(V7, cand, base, EXTERNAL_OK)
        self.assertTrue(result['guards']['fights_from_cover']['passed'])
        self.assertTrue(result['guards']['seen_at_the_fight']['passed'])
        for r in cand['town-attack-dev']:
            r['metrics']['contact_exposed_share'] = 0.12
        self.assertFalse(score.score(V7, cand, base, EXTERNAL_OK)['guards']['seen_at_the_fight']['passed'])
        base_seen = base['legacy']['town-attack-dev'][0]['metrics']['contact_exposed_share']
        for r in cand['town-attack-dev']:                # v7 (user): 4.5 points over fails unless the node flanks reliably more
            r['metrics']['contact_exposed_share'] = base_seen + 0.045
        self.assertFalse(score.score(V7, cand, base, EXTERNAL_OK)['guards']['seen_at_the_fight']['passed'])
        for r in base['legacy']['town-attack-dev']:
            r['metrics']['flank_fire_share'] = 0.15
        for r in cand['town-attack-dev']:
            r['metrics']['flank_fire_share'] = 0.30
        self.assertTrue(score.score(V7, cand, base, EXTERNAL_OK)['guards']['seen_at_the_fight']['passed'])
        for r in cand['town-attack-dev']:                # more flanking buys one point, not more
            r['metrics']['contact_exposed_share'] = base_seen + 0.055
        self.assertFalse(score.score(V7, cand, base, EXTERNAL_OK)['guards']['seen_at_the_fight']['passed'])

    def test_the_exploration_policy_continues_the_best_node_and_prefers_an_untried_one(self):
        from tools.loop import policy
        nodes = [dict(id='root', parent=None, scores={'v': dict(guards_pass=False, value=None)}),
                 dict(id='a', parent='root', scores={'v': dict(guards_pass=True, value=0.74)}),
                 dict(id='b', parent='root', scores={'v': dict(guards_pass=True, value=0.73)}),
                 dict(id='c', parent='a', scores={'v': dict(guards_pass=True, value=0.60)}),
                 dict(id='d', parent='a', scores={'v': dict(guards_pass=False, value=0.90)})]
        with mock.patch.object(policy.tree, 'list_nodes', return_value=nodes), mock.patch.object(policy.tree, 'lineage_root', return_value='root'):
            picks = [p['id'] for p in policy.select('root', 'v', 3)]
        self.assertEqual(picks[0], 'b')                  # as good as a within the bonus, and a already has two children
        self.assertIn('a', picks)
        self.assertNotIn('d', picks)                     # a node that fails a guard is never a parent
        self.assertNotIn('c', picks)

    def test_silent_trench_battle_fails_the_shooting_guard(self):
        cand, base = self.town_rows()
        cand['trench-dev'][0]['metrics']['shots'] = 0
        self.assertFalse(score.score(V7, cand, base, EXTERNAL_OK)['guards']['zero_shot']['passed'])


class ScoreV8(unittest.TestCase):
    """Plan 029 G-6 (Jordan, 24 Sep 2026: towns are out of the runs): v7 moved to the village and city2 sets."""
    SYM, ATK_DEV = ['village-dev', 'city2-dev'], ['village-attack-dev', 'city2-attack-dev']
    ATK = ['village-attack-dev', 'city2-attack-dev', 'village-attack-val', 'city2-attack-val']

    def test_v8_is_v7_on_the_village_and_city2_sets_with_every_threshold_unchanged(self):
        v8 = score.load_guards()
        self.assertEqual(v8['version'], 'v8')
        self.assertEqual(v8['objective']['ranking_sets'], ['village-attack-val', 'city2-attack-val'])
        self.assertEqual(v8['objective']['reported_sets'], self.ATK)
        self.assertNotIn('ranking_set', v8['objective'])
        self.assertEqual(v8['objective']['attacker_loss_weight'], V7['objective']['attacker_loss_weight'])
        self.assertEqual([g['name'] for g in v8['guards']], [g['name'] for g in V7['guards']])
        expected = dict(zero_shot=self.SYM + self.ATK, firing_squads=self.SYM, attacker_firing_squads=self.ATK,
                        under_2m=self.SYM, orders_azure_per_minute=self.SYM, orders_ember_per_minute=self.SYM, friendly_fire=self.SYM,
                        force_at_the_fight=self.ATK_DEV, fights_from_cover=self.ATK_DEV, seen_at_the_fight=self.ATK_DEV)
        for new, old in zip(v8['guards'], V7['guards']):
            self.assertEqual(new.get('sets'), expected.get(new['name']), new['name'])
            # every field but the sets and the provenance (which records the move) is v7's, thresholds included
            strip = lambda g: {k: v for k, v in g.items() if k not in ('sets', 'provenance')}
            self.assertEqual(strip(new), strip(old), new['name'])
            self.assertTrue(new['provenance'].startswith(old['provenance']), new['name'])
            for set_name in new.get('sets', []):
                self.assertTrue(set_name.startswith(('village-', 'city2-')), set_name)
                self.assertIn(set_name, config.SET_NAMES)

    @staticmethod
    def family_rows(losses=None, squads=(4, 2)):
        """v8 rows: symmetric village and city2 battles, and attacks on 10 maps x 1 seed per set with
        per-family (defender_loss, attacker_loss)."""
        from tools.loop.runner import attack_metrics
        losses = losses or {}

        def battle(set_name, gen, attack):
            family = set_name.split('-')[0]
            r = row(set_name, 107, gen, win=0)
            r.update(family=family, flags=list(config.FAMILY_FLAGS[family]))
            if attack:
                d, a = losses.get(set_name, losses.get(family, (0.75, 0.25)))
                r['defence'] = dict(layout=config.ATTACK_LAYOUTS[gen % 3], defenders=12, seed=gen)
                r['firing_squads'] = list(squads)
                r['metrics'].update(casualty_ember=d, casualty_azure=a, at_fight_share=0.9, contact_exposed_share=0.06, idle_exposed_share=0.01)
                r['metrics'].update(attack_metrics(r['metrics']))
            return r
        sets = ScoreV8.SYM + ScoreV8.ATK
        cand = {s: [battle(s, g, 'attack' in s) for g in range(1201, 1211)] for s in sets}
        base = {'legacy': {s: [battle(s, g, 'attack' in s) for g in range(1201, 1211)] for s in ScoreV8.SYM + ScoreV8.ATK_DEV}}
        return cand, base

    def test_a_root_is_valued_at_the_mean_of_the_two_families(self):
        cand, base = self.family_rows({'village': (0.75, 0.25), 'city2': (0.5, 0.5)})
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertTrue(result['guards_pass'], {k: v for k, v in result['guards'].items() if not v['passed']})
        self.assertAlmostEqual(result['objective']['sets']['village-attack-val']['mean'], 0.625)
        self.assertAlmostEqual(result['objective']['sets']['city2-attack-val']['mean'], 0.25)
        self.assertAlmostEqual(result['value'], (0.625 + 0.25)/2)
        ranking = score.ranking_stats(result['objective'])
        self.assertEqual(ranking['sets'], ['village-attack-val', 'city2-attack-val'])
        self.assertAlmostEqual(ranking['defender_loss'], 0.625)
        # the development sets are reported, not ranked
        worse_dev, _ = self.family_rows({'village-attack-dev': (0.0, 1.0), 'village': (0.75, 0.25), 'city2': (0.5, 0.5)})
        self.assertAlmostEqual(score.score(score.load_guards(), worse_dev, base, EXTERNAL_OK)['value'], result['value'])
        missing = {k: v for k, v in cand.items() if k != 'city2-attack-val'}
        self.assertIsNone(score.score(score.load_guards(), missing, base, EXTERNAL_OK)['objective']['value'])

    def test_a_child_is_its_roots_value_plus_the_stratified_lower_bound(self):
        root_rows, _ = self.family_rows({'village': (0.8, 0.2), 'city2': (0.6, 0.4)})
        lineage = dict(root='r', anchor=0.5, root_rows={k: root_rows[k] for k in self.ATK})
        same, base = self.family_rows({'village': (0.8, 0.2), 'city2': (0.6, 0.4)})
        self.assertAlmostEqual(score.score(score.load_guards(), same, base, EXTERNAL_OK, lineage=lineage)['value'], 0.5)
        better, _ = self.family_rows({'village': (0.9, 0.2), 'city2': (0.6, 0.4)})   # +0.1 on villages only: +0.05 overall
        gain = score.score(score.load_guards(), better, base, EXTERNAL_OK, lineage=lineage)
        self.assertAlmostEqual(gain['value'], 0.55)
        paired = gain['objective']['ranking']['paired_vs_root']
        self.assertEqual((paired['better'], paired['worse'], paired['count']), (10, 0, 20))
        self.assertAlmostEqual(paired['mean_of_lowers'], 0.05)

    def test_the_stratified_bound_is_the_plain_bootstrap_for_one_set_and_tighter_than_averaging_bounds(self):
        rng = random.Random(7)
        a = [(g, rng.gauss(0.05, 0.2)) for g in range(15) for _ in range(3)]
        b = [(g, rng.gauss(0.02, 0.2)) for g in range(15) for _ in range(3)]
        one, plain = score._summarize_strata([a]), score._summarize(a)
        self.assertEqual((one['count'], one['clusters'], one['ci95']), (plain['count'], plain['clusters'], plain['ci95']))
        self.assertAlmostEqual(one['mean'], plain['mean'])
        both = score._summarize_strata([a, b])
        averaged = (score._summarize(a)['ci95'][0] + score._summarize(b)['ci95'][0])/2
        self.assertAlmostEqual(both['mean'], (plain['mean'] + score._summarize(b)['mean'])/2)
        self.assertGreater(both['ci95'][0], averaged)            # same centre, narrower: variances add in quadrature
        self.assertLess(both['ci95'][0], both['mean'])
        self.assertEqual(score._summarize_strata([a, []])['count'], 0)

    def test_every_paired_and_conduct_guard_must_hold_on_each_family(self):
        cand, base = self.family_rows()
        for r in cand['city2-attack-dev']:                      # only the city2 force hangs back
            r['metrics']['at_fight_share'] = 0.6
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['force_at_the_fight']['passed'])
        self.assertTrue(result['guards']['force_at_the_fight']['detail']['village-attack-dev']['passed'])
        self.assertIsNone(result['value'])
        cand, base = self.family_rows()
        for r in cand['village-dev']:                           # friendly fire above legacy on villages only
            r['metrics']['friendly_hits_per_100_soldier_minutes'] = 3.0
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['friendly_fire']['passed'])
        self.assertTrue(result['guards']['friendly_fire']['detail']['city2-dev']['passed'])
        cand, base = self.family_rows()
        cand['city2-attack-val'][3]['metrics']['shots'] = 0     # a silent validation battle
        self.assertFalse(score.score(score.load_guards(), cand, base, EXTERNAL_OK)['guards']['zero_shot']['passed'])
        cand, base = self.family_rows(squads=(2, 4))            # two silent attacking squads on every attack
        self.assertFalse(score.score(score.load_guards(), cand, base, EXTERNAL_OK)['guards']['attacker_firing_squads']['passed'])
        cand, base = self.family_rows()
        cand['city2-dev'][0]['firing_squads'] = [4, 2]
        self.assertFalse(score.score(score.load_guards(), cand, base, EXTERNAL_OK)['guards']['firing_squads']['passed'])

    def test_rows_without_the_family_flags_never_pair_with_rows_with_them(self):
        cand, base = self.family_rows()
        for rows in base['legacy'].values():
            for r in rows:
                r.pop('flags')
        result = score.score(score.load_guards(), cand, base, EXTERNAL_OK)
        self.assertFalse(result['guards']['under_2m']['passed'])
        self.assertEqual(result['guards']['under_2m']['detail']['village-dev']['unpaired'], 10)


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
        self.assertEqual(needed_sets(V7), {'town-dev', 'trench-dev', 'town-attack-dev', 'town-attack-val'})
        self.assertEqual(needed_sets(score.load_guards()), {'village-dev', 'city2-dev', 'village-attack-dev', 'city2-attack-dev',
                                                          'village-attack-val', 'city2-attack-val'})

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
        with mock.patch.object(maps, 'ensure', lambda seed, kinds=maps.DEFAULT_KINDS: {k: f'/m/{k}-{seed}.army' for k in kinds}):
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


def fake_maps(seed, kinds=('city', 'trenches')):
    return {k: f'/m/{k}-{seed}.army' for k in kinds}


class MapCacheCase(unittest.TestCase):
    """A temporary loop map cache with a fake generator (no tests of its own)."""

    def setUp(self):
        from tools.loop import maps
        self.maps = maps
        self.tmp = Path(tempfile.mkdtemp(prefix='maps-'))
        self.calls = []

        def generate(seed, out, kind):   # stands in for tools/generate_maps.py
            self.calls.append((seed, kind))
            for k in (maps.DEFAULT_KINDS if kind is None else (kind,)):
                (out/f'{k}-{seed}.army').write_text(f'{k} {seed}\n')
            (out/f'x-{seed}.json').write_text('{}')
            return 0, out/'generate.log'
        self.patches = [mock.patch.object(maps, 'MAPS_ROOT', self.tmp), mock.patch.object(maps, '_generate', generate)]
        for patch in self.patches:
            patch.start()

    def tearDown(self):
        for patch in self.patches:
            patch.stop()
        shutil.rmtree(self.tmp, ignore_errors=True)


class VillageMaps(MapCacheCase):
    """Plan 029 G-4: villages are a third map family that is generated only when asked for."""

    def test_existing_ensures_never_generate_a_village(self):
        paths = self.maps.ensure(21)
        self.assertEqual(sorted(paths), ['city', 'trenches'])
        self.assertEqual(self.calls, [(21, None)])
        self.maps.ensure(21, ('city',))
        self.maps.specs('town-dev', 'city', [21, 22], 107)
        self.assertEqual(self.calls, [(21, None), (22, None)])   # cached seed 21 is not generated again
        self.assertFalse(any(kind == 'village' for _, kind in self.calls))
        self.assertFalse((self.tmp/'21'/'village-21.army').exists())
        self.assertFalse((self.tmp/'21'/'x-21.json').exists())    # previews are still pruned

    def test_a_village_is_generated_on_its_own_and_stamped(self):
        paths = self.maps.ensure(1201, ('village',))
        self.assertEqual(list(paths), ['village'])
        self.assertEqual(self.calls, [(1201, 'village')])
        self.assertFalse((self.tmp/'1201'/'city-1201.army').exists())
        stamp = (self.tmp/'1201'/'village-1201.generator').read_text().strip()
        self.assertEqual(stamp, self.maps.village_generator())
        self.maps.ensure(1201, ('village',))
        self.assertEqual(len(self.calls), 1)
        both = self.maps.ensure(1201, ('city', 'village'))
        self.assertEqual(sorted(both), ['city', 'village'])
        self.assertEqual(self.calls, [(1201, 'village'), (1201, None)])

    def test_a_village_from_another_generator_is_refused(self):
        self.maps.ensure(1202, ('village',))
        (self.tmp/'1202'/'village-1202.generator').write_text('0123456789abcdef\n')
        with self.assertRaises(RuntimeError):
            self.maps.ensure(1202, ('village',))
        (self.tmp/'1202'/'village-1202.generator').unlink()
        with self.assertRaises(RuntimeError):   # a village with no recorded generator is not trusted either
            self.maps.ensure(1202, ('village',))
        self.maps.ensure(1202, ('city',))       # other kinds of that seed are unaffected
        with self.assertRaises(ValueError):
            self.maps.ensure(1202, ('castle',))

    def test_the_village_fingerprint_follows_the_generator_imports(self):
        real = self.maps.village_sources()
        self.assertTrue({'village.py', 'native.py', 'shells.py', 'support.py', 'kernel.py', 'geometry.py'} <= set(real))
        self.assertFalse({'render.py', 'city.py', 'trenches.py', 'probe.py'} & set(real))
        pkg = self.tmp/'mapgen'
        pkg.mkdir()
        (pkg/'village.py').write_text('from .a import x, y\nfrom . import b\ndef f():\n    from .c import z\n')
        (pkg/'native.py').write_text('import math\n')
        for name, text in (('a', 'from .d import q\n'), ('b', ''), ('c', ''), ('d', ''), ('render', '')):
            (pkg/f'{name}.py').write_text(text)
        with mock.patch.object(self.maps, 'TOOLS_MAPGEN', pkg):
            self.assertEqual(self.maps.village_sources(), ['a.py', 'b.py', 'c.py', 'd.py', 'native.py', 'village.py'])
            before = self.maps.village_generator()
            (pkg/'render.py').write_text('changed')
            self.assertEqual(self.maps.village_generator(), before)
            (pkg/'d.py').write_text('changed')
            self.assertNotEqual(self.maps.village_generator(), before)

    def test_village_specs_and_sets(self):
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            plain = self.maps.specs('village-dev', 'village', [1201], 107)
            attack = self.maps.specs('village-attack-dev', 'village', [1201, 1202], 107, attack=True)
            sets = config.scenario_sets('abc-linux', wanted={'village-dev', 'village-val', 'village-attack-dev', 'village-attack-val', 'town-val'})
        self.assertEqual(plain, [dict(set='village-dev', family='village', gen_seed=1201, seed=107, map='/m/village-1201.army')])
        self.assertEqual(config.spec_key(plain[0]), 'village-1201-107')
        self.assertEqual(len(attack), 2*len(config.ATTACK_BATTLE_SEEDS))
        self.assertTrue(all(s['family'] == 'village' and s['defence']['defenders'] == config.ATTACK_DEFENDERS for s in attack))
        self.assertTrue({'village-dev', 'village-val', 'village-attack-dev', 'village-attack-val'} <= set(config.SET_NAMES))
        self.assertEqual([s['gen_seed'] for s in sets['village-dev']], config.VILLAGE_DEV_SEEDS)
        self.assertEqual(len(sets['village-attack-dev']), len(config.VILLAGE_DEV_SEEDS)*len(config.ATTACK_BATTLE_SEEDS))
        val = [s['gen_seed'] for s in sets['village-val']]
        self.assertEqual(len(val), config.VILLAGE_VALIDATION_COUNT)
        self.assertTrue(all(g >= config.VILLAGE_VALIDATION_LOW for g in val))   # never the reserved dev seeds
        self.assertNotEqual(val, [s['gen_seed'] for s in sets['town-val']])
        self.assertTrue(all(s['map'].endswith(f"village-{s['gen_seed']}.army") for s in sets['village-attack-val']))
        # A village and a town battle on the same numbers never pair with each other.
        town = dict(set='town-dev', family='city', gen_seed=1201, seed=107, map='/m/city-1201.army')
        self.assertNotEqual(config.pair_key(plain[0]), config.pair_key(town))

    def test_config_digest_covers_the_village_sets(self):
        before = config.config_digest()
        with mock.patch.object(config, 'VILLAGE_DEV_SEEDS', config.VILLAGE_DEV_SEEDS[:-1]):
            self.assertNotEqual(config.config_digest(), before)
        self.assertEqual(config.config_digest(), before)

    def test_replay_maps_every_family_to_its_slot(self):
        from tools.loop.replay import launch_arguments, map_slot
        row = dict(set='village-attack-dev', family='village', gen_seed=1201, seed=108, map='/x/village-1201.army', seconds=600,
                   defence=dict(layout='clusters', defenders=12, seed=1201))
        self.assertEqual(launch_arguments(dict(controller='legacy'), row),
                         ['-ArmyLegacy', '-ArmySeed=108', '-ArmyBattleSeconds=600', '-ArmyMap=village', '-ArmyStaticDefence=clusters',
                          '-ArmyDefenders=12', '-ArmyDefenceSeed=1201'])
        self.assertEqual([map_slot(dict(family=f)) for f in ('city', 'trenches', 'village', 'F1', None)],
                         ['city', 'trenches', 'village', 'city', 'city'])

    def test_neural_scenarios_take_a_family(self):
        from tools.neural import scenarios
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            city = scenarios.active_legacy_specs('train', [501], (107,))
            village = scenarios.active_legacy_specs('train', [1201], (107, 108), seconds=600, family='village')
        self.assertEqual(city, [dict(set='train', family='city', gen_seed=501, seed=107, map='/m/city-501.army', seconds=360)])
        self.assertEqual([(s['family'], s['map'], s['seed'], s['seconds']) for s in village],
                         [('village', '/m/village-1201.army', 107, 600), ('village', '/m/village-1201.army', 108, 600)])
        with self.assertRaises(ValueError):
            scenarios.map_file(1201, 'castle')
        from tools.neural import run
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            collect = run.specifications('collect', 2, 1201, opponent='static-defence', family='village')
        self.assertTrue(collect and all(s['family'] == 'village' and s.get('defence') for s in collect))
        self.assertEqual(run.EVALUATION_SETS['city'], ['town-attack-dev', 'town-attack-val', 'town-dev', 'trench-dev'])



class FamilyFlags(MapCacheCase):
    """Plan 029 G-6: village and city2 battles run in the family's natural state, recorded on the spec."""

    def test_the_family_flags_are_the_plan_029_switches(self):
        self.assertEqual(config.FAMILY_FLAGS, {'village': ('--concealment', '--prone', '--vaulting'),
                                               'city2': ('--concealment', '--prone', '--vaulting')})
        self.assertIn('flags', config.SPEC_FIELDS)

    def test_village_and_city2_sets_carry_the_flags_and_town_sets_do_not(self):
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            sets = config.scenario_sets('abc-linux', wanted={'village-dev', 'city2-attack-val', 'town-dev', 'trench-dev', 'town-attack-dev'})
            plain = self.maps.specs('village-dev', 'village', [1201], 107)
        for name in ('village-dev', 'city2-attack-val'):
            self.assertTrue(all(s['flags'] == ['--concealment', '--prone', '--vaulting'] for s in sets[name]), name)
        for name in ('town-dev', 'trench-dev', 'town-attack-dev'):
            self.assertTrue(all('flags' not in s for s in sets[name]), name)
        self.assertNotIn('flags', plain[0])             # maps.specs (the neural tools' entry) is unchanged
        self.assertEqual(config.spec_key(sets['village-dev'][0]), 'village-1201-107')   # display keys unchanged

    def test_flags_reach_the_command_the_pairing_and_the_sparring_cache(self):
        from tools.loop import baselines, runner
        spec = dict(set='village-dev', family='village', gen_seed=1201, seed=107, map='/m/village-1201.army')
        flagged = config.with_family_flags([spec])[0]
        with mock.patch.object(runner, 'supports_lean', return_value=True):
            cmd = runner.battle_command('/fake/lab', 'legacy', flagged, out='o')
            self.assertNotIn('--prone', runner.battle_command('/fake/lab', 'legacy', spec, out='o'))
        self.assertTrue({'--concealment', '--prone', '--vaulting', '--lean'} <= set(cmd))
        self.assertNotEqual(config.pair_key(spec), config.pair_key(flagged))
        town = dict(set='town-dev', family='city', gen_seed=21, seed=107)
        self.assertEqual(config.pair_key(town), ('city', -1, 21, 107, ''))   # rows without flags keep their v7 key
        baselines.set_epoch('abcd')
        self.assertNotEqual(baselines._cache_path('legacy', spec, 360), baselines._cache_path('legacy', flagged, 360))
        self.assertEqual({k: flagged[k] for k in config.SPEC_FIELDS if k in flagged}, flagged)   # reruns rebuild it

    def test_a_binary_that_ignores_a_flag_is_refused(self):
        from tools.loop import runner
        lab = self.tmp/'lab'
        manifest = '{"seed":107,"battlefield_digest":"x","build":"b","concealment":true,"prone":true}'
        lab.write_text('#!/bin/sh\nout=""\nwhile [ $# -gt 0 ]; do [ "$1" = --out ] && out="$2"; shift; done\n'
                       '[ -z "$out" ] && exit 0\nmkdir -p "$out/r1"\n'
                       f"echo '{manifest}' > \"$out/r1/manifest.json\"\n"
                       'echo \'{"run":"r1"}\' > "$out/latest.json"\n')
        lab.chmod(0o755)
        spec = config.with_family_flags([dict(set='village-dev', family='village', gen_seed=1201, seed=107, map='/m/village-1201.army')])[0]
        result = runner.run_battle(str(lab), 'legacy', spec, self.tmp/'out')
        self.assertEqual(result['status'], 'failed')
        self.assertIn("did not apply ['--vaulting']", result['error'])

    def test_parity_spot_battles_are_village_and_city2_in_their_natural_state(self):
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            specs = config.parity_specs()
        self.assertEqual(specs[:2], config.PARITY_SPECS)
        generated = specs[2:]
        self.assertEqual(sorted({s['family'] for s in generated}), ['city2', 'village'])
        self.assertTrue(all(s['flags'] == ['--concealment', '--prone', '--vaulting'] for s in generated))
        for family in ('village', 'city2'):
            attacks = [s for s in generated if s['family'] == family and s.get('defence')]
            self.assertEqual(len(attacks), len(config.ATTACK_BATTLE_SEEDS))
            self.assertEqual(len([s for s in generated if s['family'] == family and not s.get('defence')]), 1)
        self.assertEqual(len({config.spec_key(s) for s in specs}), len(specs))

    def test_replay_diagnose_and_brief_follow_the_family(self):
        from tools.loop import diagnose, propose
        from tools.loop.replay import UNREAL_SLOTS, launch_arguments
        row = dict(set='city2-attack-val', family='city2', gen_seed=4242, seed=108, map='/x/city2-4242.army', seconds=600,
                   defence=dict(layout='spread', defenders=12, seed=4242), flags=list(config.FAMILY_FLAGS['city2']))
        self.assertIn('city2', UNREAL_SLOTS)
        self.assertEqual(launch_arguments(dict(controller='drills'), row),
                         ['-ArmyDrills', '-ArmySeed=108', '-ArmyBattleSeconds=600', '-ArmyMap=city2', '-ArmyStaticDefence=spread',
                          '-ArmyDefenders=12', '-ArmyDefenceSeed=4242', '-ArmyConcealment', '-ArmyProne', '-ArmyVaulting'])
        with self.assertRaises(SystemExit):
            launch_arguments(dict(controller='drills'), dict(row, flags=['--cover-requests']))
        self.assertEqual(diagnose.development_attack_sets(), ['village-attack-dev', 'city2-attack-dev'])
        self.assertEqual(propose.FLAGS, ['--concealment', '--prone', '--vaulting'])


class City2Maps(MapCacheCase):
    """Plan 029 G-5: city2 is a fourth family, generated on its own and stamped like a village."""

    def test_existing_ensures_never_generate_a_city2(self):
        self.maps.ensure(21)
        self.maps.specs('town-dev', 'city', [21, 22], 107)
        self.maps.ensure(1201, ('village',))
        self.assertFalse(any(kind == 'city2' for _, kind in self.calls))
        self.assertFalse((self.tmp/'21'/'city2-21.army').exists())

    def test_a_city2_is_generated_on_its_own_and_stamped(self):
        self.assertIn('city2', self.maps.KINDS)
        paths = self.maps.ensure(1201, ('city2',))
        self.assertEqual(list(paths), ['city2'])
        self.assertEqual(self.calls, [(1201, 'city2')])
        self.assertEqual(paths['city2'], self.tmp/'1201'/'city2-1201.army')
        self.assertFalse((self.tmp/'1201'/'city-1201.army').exists())
        stamp = (self.tmp/'1201'/'city2-1201.generator').read_text().strip()
        self.assertEqual(stamp, self.maps.generator('city2'))
        self.maps.ensure(1201, ('city2',))
        self.assertEqual(len(self.calls), 1)
        both = self.maps.ensure(1201, ('village', 'city2'))
        self.assertEqual(self.calls, [(1201, 'city2'), (1201, 'village')])
        self.assertEqual(sorted(both), ['city2', 'village'])

    def test_a_city2_from_another_generator_is_refused(self):
        self.maps.ensure(1203, ('city2', 'village'))
        (self.tmp/'1203'/'city2-1203.generator').write_text('0123456789abcdef\n')
        with self.assertRaises(RuntimeError):
            self.maps.ensure(1203, ('city2',))
        self.maps.ensure(1203, ('village',))    # the village of that seed keeps its own stamp
        (self.tmp/'1203'/'city2-1203.generator').unlink()
        with self.assertRaises(RuntimeError):
            self.maps.ensure(1203, ('city2',))

    def test_the_city2_fingerprint_follows_its_own_roots(self):
        real = self.maps.generator_sources('city2')
        self.assertTrue({'city2.py', 'city2_streets.py', 'city2_buildings.py', 'native.py', 'support.py'} <= set(real))
        self.assertFalse({'render.py', 'city.py', 'trenches.py', 'probe.py'} & set(real))
        self.assertEqual(self.maps.village_generator(), self.maps.generator('village'))
        pkg = self.tmp/'mapgen'
        pkg.mkdir()
        (pkg/'city2.py').write_text('from .streets import x\n')
        (pkg/'village.py').write_text('')
        for name in ('native', 'streets', 'render'):
            (pkg/f'{name}.py').write_text('')
        with mock.patch.object(self.maps, 'TOOLS_MAPGEN', pkg):
            self.assertEqual(self.maps.generator_sources('city2'), ['city2.py', 'native.py', 'streets.py'])
            city2, village = self.maps.generator('city2'), self.maps.generator('village')
            (pkg/'streets.py').write_text('changed')
            self.assertNotEqual(self.maps.generator('city2'), city2)
            self.assertEqual(self.maps.generator('village'), village)

    def test_city2_specs_and_sets(self):
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            plain = self.maps.specs('city2-dev', 'city2', [1201], 107)
            sets = config.scenario_sets('abc-linux', wanted={'city2-dev', 'city2-val', 'city2-attack-dev', 'city2-attack-val',
                                                             'village-val', 'village-attack-val', 'town-val'})
        self.assertEqual(plain, [dict(set='city2-dev', family='city2', gen_seed=1201, seed=107, map='/m/city2-1201.army')])
        self.assertEqual(config.spec_key(plain[0]), 'city2-1201-107')
        self.assertTrue({'city2-dev', 'city2-val', 'city2-attack-dev', 'city2-attack-val'} <= set(config.SET_NAMES))
        self.assertEqual(config.CITY2_DEV_SEEDS, list(range(1201, 1221)))
        self.assertEqual([s['gen_seed'] for s in sets['city2-dev']], config.CITY2_DEV_SEEDS)
        self.assertEqual(len(sets['city2-attack-dev']), len(config.CITY2_DEV_SEEDS)*len(config.ATTACK_BATTLE_SEEDS))
        self.assertTrue(all(s['family'] == 'city2' and s['defence']['defenders'] == config.ATTACK_DEFENDERS for s in sets['city2-attack-dev']))
        val = [s['gen_seed'] for s in sets['city2-val']]
        attack_val = sorted({s['gen_seed'] for s in sets['city2-attack-val']})
        self.assertEqual(len(val), config.CITY2_VALIDATION_COUNT)
        self.assertEqual(len(attack_val), config.CITY2_ATTACK_VALIDATION_COUNT)
        self.assertTrue(all(g >= config.CITY2_VALIDATION_LOW > max(config.CITY2_DEV_SEEDS) for g in val + attack_val))
        # Its own draw: neither the village nor the town draw of the same build.
        self.assertNotEqual(val, [s['gen_seed'] for s in sets['village-val']])
        self.assertNotEqual(attack_val, sorted({s['gen_seed'] for s in sets['village-attack-val']}))
        self.assertNotEqual(val, [s['gen_seed'] for s in sets['town-val']])
        self.assertTrue(all(s['map'].endswith(f"city2-{s['gen_seed']}.army") for s in sets['city2-attack-val']))
        village = dict(set='village-dev', family='village', gen_seed=1201, seed=107, map='/m/village-1201.army')
        self.assertNotEqual(config.pair_key(plain[0]), config.pair_key(village))

    def test_config_digest_covers_the_city2_sets(self):
        # G-5 made it d9306866bf9b2084; G-6 (score v8, the family flags) makes it c1e8c1d041bc6932.
        self.assertEqual(config.config_digest(), 'c1e8c1d041bc6932')
        with mock.patch.object(config, 'CITY2_DEV_SEEDS', config.CITY2_DEV_SEEDS[:-1]):
            self.assertNotEqual(config.config_digest(), 'c1e8c1d041bc6932')
        with mock.patch.object(config, 'CITY2_SALT', '|other'):
            self.assertNotEqual(config.config_digest(), 'c1e8c1d041bc6932')
        with mock.patch.object(config, 'FAMILY_FLAGS', dict(config.FAMILY_FLAGS, city2=('--concealment',))):
            self.assertNotEqual(config.config_digest(), 'c1e8c1d041bc6932')

    def test_replay_writes_the_city2_slot(self):
        from tools.loop.replay import launch_arguments, map_slot
        row = dict(set='city2-attack-dev', family='city2', gen_seed=1201, seed=107, map='/x/city2-1201.army', seconds=600,
                   defence=dict(layout='spread', defenders=12, seed=1201))
        self.assertEqual(map_slot(row), 'city2')
        self.assertEqual(launch_arguments(dict(controller='legacy'), row),
                         ['-ArmyLegacy', '-ArmySeed=107', '-ArmyBattleSeconds=600', '-ArmyMap=city2', '-ArmyStaticDefence=spread',
                          '-ArmyDefenders=12', '-ArmyDefenceSeed=1201'])

    def test_neural_entry_points_take_city2(self):
        from tools.neural import scenarios, run, verify
        with mock.patch.object(self.maps, 'ensure', fake_maps):
            specs = scenarios.active_legacy_specs('train', [1201], (107,), family='city2')
            collect = run.specifications('collect', 2, 1201, opponent='active-legacy', family='city2')
            attack = run.specifications('collect', 1, 1201, opponent='static-defence', family='city2')
        self.assertEqual(specs, [dict(set='train', family='city2', gen_seed=1201, seed=107, map='/m/city2-1201.army', seconds=360)])
        self.assertEqual({s['map'] for s in collect}, {'/m/city2-1201.army', '/m/city2-1202.army'})
        self.assertTrue(attack and all(s['family'] == 'city2' and s.get('defence') for s in attack))
        self.assertEqual(run.EVALUATION_SETS['city2'], ['city2-attack-dev', 'city2-attack-val', 'city2-dev'])
        self.assertEqual(run.ATTACK_SETS['city2'], ('city2-attack-dev', 'city2-attack-val'))
        self.assertEqual(run.EVALUATION_SETS['city'], ['town-attack-dev', 'town-attack-val', 'town-dev', 'trench-dev'])
        self.assertEqual(verify.FAMILY_MAP_SEED, {'city': 24, 'village': 1201, 'city2': 1201})
        self.assertEqual(scenarios.FAMILIES, ('city', 'village', 'city2'))

    def test_family_is_threaded_through_authority_ppo_and_evaluate(self):
        # These modules import torch; check their command lines and calls in the source instead.
        root = Path(__file__).resolve().parents[1]/'tools'/'neural'
        authority, ppo, evaluate = ((root/f'{m}.py').read_text() for m in ('authority', 'ppo', 'evaluate'))
        self.assertEqual(authority.count("family=args.map_family)"), 2)
        self.assertIn("'--family', dest='map_family', choices=MAP_FAMILIES, default='city'", authority)
        self.assertEqual(ppo.count('family=args.family)'), 2)
        self.assertIn("'--family',choices=FAMILIES,default='city'", ppo)
        self.assertEqual(evaluate.count('family=args.family)'), 1)
        self.assertIn("'--family',choices=FAMILIES,default='city'", evaluate)

if __name__ == '__main__':
    unittest.main()
