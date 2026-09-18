#!/usr/bin/env python3
"""Hand-computable observer fixtures for plan 014; no simulation policy involved."""
import json
import math
import sys
import tempfile
import unittest
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from phase0_metrics import discover_runs, distribution, identity
from measure_dispersion import measure
from evaluate_tactics import evaluate, order_reversals, succession_latencies, summarize
from investigate_engagement import observer_holds


def soldier(sid, x, y=0, z=0, alive=True, **fields):
    return dict(id=sid, position=[x, y, z], alive=alive, action=fields.get('action', 4),
                solution=fields.get('solution', False), observer_exposed=fields.get('exposed', False))


def event(time, kind, actor, target=-1, text=''):
    return dict(time=time, kind=kind, actor=actor, target=target, text=text)


class MetricsTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name) / 'run'
        self.root.mkdir()

    def write_run(self, frames, events=(), trace=(), enabled=False):
        manifest = dict(build='d0e577abab5319b6-linux', seed=100, terrain=0, encounter=0,
                        duration=frames[-1]['time'], winner=-1, cognition_policy=1, trace_enabled=enabled)
        (self.root / 'manifest.json').write_text(json.dumps(manifest))
        for name, data in [('evaluation', frames), ('events', events), ('trace', trace)]:
            (self.root / f'{name}.jsonl').write_text(''.join(json.dumps(row)+'\n' for row in data))

    def test_duration_weighting_horizontal_singletons_and_team_pairs(self):
        # One second at 2 m, three at 6 m; final terminal sample is unweighted.
        first = [soldier(0, 0), soldier(1, 2, z=100), soldier(8, 9), soldier(32, 0)]
        later = [soldier(0, 0), soldier(1, 6), soldier(8, 30), soldier(32, 0)]
        self.write_run([dict(time=0, soldiers=first), dict(time=1, soldiers=later),
                        dict(time=4, soldiers=[soldier(0, 999)])])
        result = measure(self.root)
        self.assertEqual(result['nearest_squadmate_m']['median'], 6)
        self.assertEqual(result['nearest_squadmate_m']['p10'], 2)
        self.assertEqual(result['nearest_squadmate_m']['share_below'], 0)  # strict <2
        self.assertEqual(result['nearest_squadmate_m']['weight_seconds'], 8)
        self.assertEqual(result['squad_rms_radius_m']['mean'], 10/12)
        self.assertEqual(result['minimum_friendly_squad_centroid_m']['median'], 27)
        self.assertEqual(result['minimum_friendly_squad_centroid_m']['share_below'], .25)

    def test_dead_members_and_empty_denominators(self):
        self.write_run([dict(time=t, soldiers=[soldier(0, 0), soldier(1, 0, alive=False)]) for t in (0, 2)])
        result = measure(self.root)
        self.assertIsNone(result['nearest_squadmate_m']['median'])
        self.assertIsNone(result['minimum_friendly_squad_centroid_m']['share_below'])
        self.assertEqual(result['squad_rms_radius_m']['mean'], 0)

    def test_radius_is_rms_not_mean_distance(self):
        self.write_run([dict(time=t, soldiers=[soldier(0, 0), soldier(1, 0), soldier(2, 9)]) for t in (0, 1)])
        self.assertAlmostEqual(measure(self.root)['squad_rms_radius_m']['mean'], math.sqrt(18))

    def test_exposure_hits_outcome_and_existing_definition(self):
        a = [soldier(0, 0, exposed=True), soldier(1, 2), soldier(32, 9, exposed=True)]
        b = [soldier(0, .1, exposed=True), soldier(1, 2, alive=False), soldier(32, 10, exposed=True)]
        c = [soldier(0, .3), soldier(1, 2, alive=False), soldier(32, 10)]
        self.write_run([dict(time=0, soldiers=a), dict(time=2, soldiers=b), dict(time=5, soldiers=c)],
                       [event(1, 3, 0, 1), event(2, 3, 0, 32), event(3, 3, -1, 0)])
        result = evaluate(self.root)
        exposed = result['exposed_without_firing']
        self.assertEqual(exposed['soldier_seconds'], 5)  # id0 first 2s; id32 next 3s
        self.assertEqual(exposed['living_soldier_seconds'], 12)
        self.assertEqual(exposed['seconds_per_initial_active'], 5/3)
        self.assertEqual(observer_holds(self.root)['stationary_exposed_without_solution_seconds'], 5)
        self.assertEqual(result['friendly_fire']['hits'], 1)
        self.assertEqual(result['friendly_fire']['per_100_soldier_minutes'], 500)
        self.assertEqual(result['outcome']['casualty_fractions'], [.5, 0])
        self.assertEqual(result['outcome']['casualty_exchange_azure'], 0)
        self.assertIsNone(result['order_reversals'])
        self.assertEqual(result['succession']['completed'], 0)
        self.assertIsNone(result['succession']['median_seconds'])

    def test_no_exposure_for_fire_solution_or_moving_action(self):
        people = [soldier(0, 0, exposed=True, solution=True), soldier(1, 2, exposed=True, action=1)]
        self.write_run([dict(time=t, soldiers=people) for t in (0, 1)])
        self.assertEqual(evaluate(self.root)['exposed_without_firing']['soldier_seconds'], 0)

    def test_reversal_boundaries_duplicates_and_refreshes(self):
        def order(t, serial, x, sid=0):
            return dict(kind='order_issued', time=t, order=serial, soldier=sid, goal=[x, 0, 0])
        trace = [order(0, 1, 0), order(1, 2, 10), order(1, 2, 10), order(30, 3, 5)]
        result = order_reversals(trace, 60)
        self.assertEqual(result['count'], 1)
        self.assertEqual(result['per_battle_minute'], 1)
        self.assertEqual(order_reversals([order(0, 1, 0), order(1, 2, 10), order(30.01, 3, 0)], 60)['count'], 0)
        self.assertEqual(order_reversals([order(t, t+1, 0) for t in range(3)], 60)['count'], 0)
        self.assertEqual(order_reversals([order(0, 1, 0), order(1, 2, 10, 1), order(2, 3, 0)], 60)['count'], 0)

    def test_succession_actual_death_to_first_order_and_censoring(self):
        events = [event(2, 4, 0), event(2.05, 9, 0, text='Sgt down: squad continues existing orders'),
                  event(5.05, 9, 1, text='Cpl assumes squad command'), event(6, 6, 1),
                  event(7, 6, 1, 2), event(8, 4, 1), event(8.05, 9, 1, text='Cpl down: squad continues existing orders'),
                  event(11.05, 9, 2, text='Rifleman assumes squad command')]
        result = succession_latencies(events, 20)
        self.assertEqual(result['completed'], 1)
        self.assertEqual(result['median_seconds'], 5)
        self.assertEqual(result['censored'], 1)
        self.assertEqual(result['episodes'][1]['observed_without_order_seconds'], 12)

    def test_platoon_and_squad_succession_are_distinct(self):
        events = [event(1, 4, 5), event(1, 4, 0),
                  event(1.05, 9, 5, text='Platoon commander down; squads continue existing orders'),
                  event(1.05, 9, 0, text='Sgt down: squad continues existing orders'),
                  event(4.05, 9, 6, text='PSG assumes platoon command using their own received reports'),
                  event(4.05, 9, 1, text='Cpl assumes squad command'), event(5, 6, 6, 8), event(7, 6, 1, 2)]
        result = succession_latencies(events, 10)
        self.assertEqual([e['latency_seconds'] for e in result['episodes']], [4, 6])

    def test_successor_loss_censors_at_death_and_disabled_fixture_is_not_casualty(self):
        events = [event(.05, 9, 16, text='Wren down: squad continues existing orders'),
                  event(2, 4, 0), event(2.05, 9, 0, text='Sgt down: squad continues existing orders'),
                  event(5.05, 9, 1, text='Cpl assumes squad command'), event(6, 4, 1),
                  event(6.05, 9, 1, text='Cpl down: squad continues existing orders'),
                  event(9.05, 9, 2, text='Rifleman assumes squad command'), event(10, 6, 2, 3)]
        result = succession_latencies(events, 20)
        self.assertEqual(result['missing_casualty'], 1)
        self.assertEqual(result['censored'], 1)
        self.assertEqual(result['episodes'][1]['observed_without_order_seconds'], 4)
        self.assertEqual(result['episodes'][2]['latency_seconds'], 4)

    def test_discovery_collections_pointer_dedup_and_missing(self):
        self.write_run([dict(time=t, soldiers=[soldier(0, 0)]) for t in (0, 1)])
        pointer = self.root.parent / 'latest.json'
        pointer.write_text(json.dumps(dict(run='run')))
        self.assertEqual(discover_runs([self.root.parent, self.root, pointer]), [self.root])
        with self.assertRaises(ValueError):
            discover_runs([self.root / 'absent'])

    def test_invalid_time_and_roster_fail_loudly(self):
        self.write_run([dict(time=0, soldiers=[]) for _ in range(2)])
        with self.assertRaises(ValueError):
            measure(self.root)
        with self.assertRaises(ValueError):
            identity(dict(id=64))
        self.assertEqual(identity(dict(id=64, team=1, squad=8)), (1, 8))

    def test_zero_losses_exchange_is_null_and_json_is_finite(self):
        self.write_run([dict(time=t, soldiers=[soldier(0, 0), soldier(32, 5)]) for t in (0, 2)])
        result = evaluate(self.root)
        self.assertIsNone(result['outcome']['casualty_exchange_azure'])
        json.dumps(result, allow_nan=False)
        json.dumps(summarize([result]), allow_nan=False)
        self.assertEqual(distribution([(1, 1), (2, 3)])['median'], 2)


if __name__ == '__main__':
    unittest.main()
