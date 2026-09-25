"""Plan 028 Stage 0: tools/covering_metrics.py on a small synthetic trace."""
import json
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from tools import covering_metrics as cm  # noqa: E402


def check(time, squad=0, gate='commit', passed=0, covering=0, fresh=1, primary=40, rounds=0, **obs):
    row = dict(kind='covering_check', time=time, squad=squad, soldier=squad*8, reason=gate, gate=gate, **{'pass': passed},
               covering=covering, explain_pass=covering, fresh=fresh, primary=primary, primary_age=2.0, primary_uncertainty=1.7,
               primary_mg=0, overlooking=2, overlooking_fresh=1, mg_overlooks=0, mg_fresh=0, rounds=rounds, late_rounds=0,
               other_rounds=0, credit_age=-1, exposure=0.5, opportunity_since=0, waited=0, platoon_firing=fresh,
               has_waypoint=0, route_present=1, stale_route=1, policy_released=0, pressure=0, refusals=0, ready=-1, paused=0)
    truth = dict(obs_primary=primary, obs_alive=1, obs_track_error=1.0, obs_rounds=0, obs_firing_primary=0, obs_firing_other=0,
                 obs_newest_round_age=-1, obs_bearer_list=[])
    truth.update(obs)
    row.update(truth)
    return row


# Bearer rows: id, group, seen, task, hold, reload, suppressed, moving, shot age, aim, distance, visible, solution.
IDLE = [9, 1, 1, 3, 0, 0, 0, 0, 50.0, -1, 40.0, 1, -1]
UNSEEN = [10, 1, 0, 3, 0, 0, 0, 0, 50.0, -1, 40.0, 0, -1]
HOLDING = [11, 1, 1, 3, 1, 0, 0, 0, 50.0, -1, 40.0, 1, 40]


class LabelTests(unittest.TestCase):
    def test_order(self):
        resets = {0: [10.0]}
        L = lambda **k: cm.label(check(20, **k), resets)
        self.assertEqual(L(passed=1, covering=1), ('pass', None))
        self.assertEqual(L(passed=1, covering=0), ('override', None))
        self.assertEqual(L(fresh=0, obs_bearer_list=[IDLE])[0], 'no_fire')
        self.assertEqual(L(fresh=0, obs_bearer_list=[IDLE])[1], 'bearer_not_firing/no_solution')
        self.assertEqual(L(primary=-1), ('no_primary', None))
        self.assertEqual(L(obs_alive=0), ('unengageable', 'dead'))
        self.assertEqual(L(obs_track_error=15.0), ('unengageable', 'moved'))
        self.assertEqual(L(obs_rounds=3, rounds=1), ('report_late', None))
        self.assertEqual(L(obs_rounds=2), ('rounds_lt3', None))
        self.assertEqual(L(), ('no_bearer', None))
        self.assertEqual(L(obs_bearer_list=[IDLE], obs_firing_other=1), ('wrong_target', None))
        # The least-blocked bearer names the cause.
        self.assertEqual(L(obs_bearer_list=[UNSEEN, HOLDING]), ('bearer_not_firing', 'holding_fire'))
        self.assertEqual(L(obs_bearer_list=[UNSEEN]), ('bearer_not_firing', 'not_seen'))
        # A covered internal bound waiting on its clock: clobbered when reset in the last 8 s.
        self.assertEqual(cm.label(check(15, gate='internal', covering=1), resets), ('clock_clobbered', None))
        self.assertEqual(cm.label(check(30, gate='internal', covering=1), resets), ('clock_running', None))


class BattleTests(unittest.TestCase):
    def setUp(self):
        self.dir = tempfile.TemporaryDirectory()
        run = Path(self.dir.name)/'battle-107-1'
        run.mkdir()
        rows = [
            # Squad 0 waits 4 s on a crossing nobody can see, then crosses covered.
            check(10, obs_bearer_list=[]), check(11), check(12, obs_rounds=1), check(13, obs_rounds=3, rounds=3, credit_age=0.5, obs_newest_round_age=0.2),
            check(14, passed=1, covering=1, rounds=3, obs_rounds=3),
            # Squad 1 waits twice with no fire at all and holds instead (the clock is cleared by retain).
            check(20, squad=1, fresh=0), check(21, squad=1, fresh=0),
            dict(kind='covering_clock_reset', time=22, squad=1, source='retain', before=20, after=-1, restart=0),
            # Squad 2: two short waits far apart are two episodes; the second ends with the battle.
            check(30, squad=2), check(50, squad=2),
            # An internal bound of squad 3 reset by coordination with a stale route, then paused without a waypoint.
            check(40, squad=3, gate='internal', stale_route=1),
            dict(kind='covering_clock_reset', time=40, squad=3, source='coordination_stale_route', before=35, after=-1, restart=0),
            dict(kind='movement_paused', time=52, squad=3, pause_source='coordination_internal_support', had_waypoint=0, gun_move=1, movement_block=2),
            dict(kind='movement_paused', time=53, squad=0, pause_source='maneuver_bound_support', had_waypoint=1, gun_move=0, movement_block=2),
            # A proposal row that is not a covering row is ignored except for episode ends.
            dict(kind='proposal_accepted', time=60, squad=0),
        ]
        with open(run/'trace.jsonl', 'w') as out:
            for r in rows:
                out.write(json.dumps(r, separators=(',', ':')) + '\n')
        shots = [dict(time=t, team=0, squad=0, owner=9, aimed_enemy=40, aimed_point=[30, 0, 1], end=[31, 0, 1]) for t in (11.5, 12.5, 13.0)]
        shots.append(dict(time=12.0, team=0, squad=0, owner=9, aimed_enemy=40, aimed_point=[30, 0, 1], end=[10, 0, 1]))
        with open(run/'shots.jsonl', 'w') as out:
            for s in shots:
                out.write(json.dumps(s) + '\n')
        (run/'summary.md').write_text('# Battle 107\n\nDuration: 55 seconds. Shots: 4. Winner: 0.\n')
        (run/'manifest.json').write_text('{}')
        feature = lambda family, exposure, support: [0]*33 + [1 if i == family else 0 for i in range(5)] + [0]*17 + [exposure] + [0]*4 + [support] + [0]*35
        stay = [0]*32 + [1] + [0]*63
        decisions = [dict(outcome='support_wait', features=[stay, feature(0, 0.5, 0), feature(2, 0.1, 0)]),
                     dict(outcome='support_wait', features=[stay, feature(0, 0.5, 0)]),
                     dict(outcome='committed', features=[stay, feature(1, 0.6, 1)]),
                     dict(outcome='retain', features=[stay])]
        self.decisions = Path(self.dir.name)/'decisions.jsonl'
        self.decisions.write_text(''.join(json.dumps(d) + '\n' for d in decisions))
        self.run = run

    def tearDown(self):
        self.dir.cleanup()

    def test_battle_and_pool(self):
        m = cm.battle(self.run, self.decisions)
        d = m['decisions']
        self.assertEqual(d['decisions'], 4)
        self.assertAlmostEqual(d['support_wait_share'], 0.5)
        self.assertAlmostEqual(d['live_support_share'], 0.25)
        self.assertEqual(d['exposed_candidates'], 3)
        self.assertEqual(d['covered_exposed_candidates'], 1)
        self.assertEqual(m['explain_mismatch'], 0)
        self.assertEqual(m['gates']['commit']['checks'], 9)
        self.assertEqual(m['gates']['internal']['stale_route'], 1)
        self.assertEqual(m['reasons']['no_fire'], 2)
        self.assertEqual(m['reasons']['report_late'], 1)
        self.assertEqual(m['reasons']['rounds_lt3'], 1)
        self.assertEqual(m['reasons']['pass'], 1)
        eps = {(e['squad'], e['start']): e for e in m['episodes']}
        self.assertEqual(len(eps), 4)
        self.assertEqual(eps[(0, 10)]['end'], 'covered')
        self.assertEqual(eps[(0, 10)]['length'], 4)
        self.assertEqual(eps[(0, 10)]['checks'], 4)
        self.assertEqual(eps[(0, 10)]['first_truth'], 12)
        self.assertEqual(eps[(0, 10)]['first_credit'], 13)
        self.assertEqual(eps[(1, 20)]['end'], 'retain')
        self.assertEqual(eps[(1, 20)]['dominant'], 'no_fire')
        self.assertEqual(eps[(2, 30)]['end'], 'lapsed')
        self.assertEqual(eps[(2, 50)]['end'], 'battle_end')
        self.assertEqual(m['clock_resets'], {'retain': 1, 'coordination_stale_route': 1})
        self.assertEqual(m['waypointless_pauses'], 1)
        self.assertEqual(m['waypointless_pause_sources'], {'coordination_internal_support': 1})
        self.assertEqual(m['pause_gun_moves'], 1)
        # Shots at the primary in the 6 s before the check at 13 s: four fired, three landed near.
        c13 = [c for c in m['samples']['shots_at_primary']]
        self.assertIn(4, c13)
        self.assertIn(3, m['samples']['landed_at_primary'])
        self.assertEqual(m['samples']['wait_per_crossing'], [4])
        self.assertEqual(m['samples']['episode_credit_latency'], [1])
        self.assertAlmostEqual(m['samples']['credit_lag'][0], 0.3)
        p = cm.pool([m, m])
        self.assertEqual(p['battles'], 2)
        self.assertEqual(p['episodes'], 8)
        self.assertAlmostEqual(p['support_wait_share'], 0.5)
        self.assertAlmostEqual(p['live_support_share'], 0.25)
        self.assertAlmostEqual(sum(p['reason_share_of_failed_checks'].values()), 1.0)
        self.assertEqual(p['clock_resets']['retain'], 2)
        self.assertIn('grades', p['danger'])
        self.assertIn('support_wait share', cm.markdown(p))



def graded(time, squad, outcome, result, passed, waited, danger=None, gate='commit'):
    """A Stage 3c commit-wait row: the graduated grade and decision, and what the leader did."""
    row = check(time, squad=squad, gate=gate, passed=passed, fresh=0)
    row.update(cover_graduated=1, graduated_danger=danger if danger is not None else
               {'stale_cross': 'stale', 'low_cross': 'low', 'high_go_round': 'high', 'high_pause': 'high', '': 'pending'}[outcome],
               graduated_outcome=outcome, waited=waited)
    if result:
        row['result'] = result
    return row


class GraduatedTests(unittest.TestCase):
    """Plan 028 Stage 3c rows (--cover-graduated): outcomes, episodes, commits and the bound after them."""

    def test_labels(self):
        self.assertEqual(cm.label(graded(5, 0, 'stale_cross', 'preparing', 1, 2), {}), ('stale_cross', None))
        self.assertEqual(cm.label(graded(5, 0, 'low_cross', 'committed', 1, 8), {}), ('low_cross', None))
        self.assertEqual(cm.label(graded(5, 0, 'high_go_round', 'go_round', 0, 8), {}), ('high_go_round', None))
        # A bound stopped by a fresh high-danger threat is still a covering failure, labelled as one.
        self.assertEqual(cm.label(graded(5, 0, 'high_pause', None, 0, 8, gate='bound'), {})[0], 'no_fire')
        self.assertTrue(cm.committed(graded(5, 0, 'low_cross', 'committed', 1, 8)))
        self.assertFalse(cm.committed(graded(5, 0, 'stale_cross', 'preparing', 1, 7)))
        # Rows written before the result field commit when the gate passed after the 8 s preparation.
        self.assertTrue(cm.committed(check(5, passed=1, covering=1) | dict(waited=8)))
        self.assertFalse(cm.committed(check(5, passed=1, covering=1) | dict(waited=3)))

    def test_battle(self):
        with tempfile.TemporaryDirectory() as tmp:
            run = Path(tmp)/'battle'
            run.mkdir()
            rows = [graded(t, 0, '', 'support_wait', 0, t - 10) for t in range(10, 18)] + [graded(18, 0, 'high_go_round', 'go_round', 0, 8)]
            rows += [graded(t, 1, 'stale_cross', 'preparing', 1, t - 20) for t in range(20, 28)] + [graded(28, 1, 'stale_cross', 'committed', 1, 8)]
            rows += [dict(kind='movement_paused', time=33, squad=1, pause_source='maneuver_bound_support', had_waypoint=1, gun_move=0, movement_block=2)]
            rows += [graded(t, 2, '', 'support_wait', 0, t - 40) for t in range(40, 48)] + [graded(48, 2, 'low_cross', 'committed', 1, 8)]
            rows += [check(50, squad=3, passed=1, covering=1) | dict(waited=8)]   # an older-format covered commit
            with open(run/'trace.jsonl', 'w') as out:
                for r in rows:
                    out.write(json.dumps(r, separators=(',', ':')) + '\n')
            events = [dict(time=30, kind=3, actor=40, target=9), dict(time=31, kind=4, actor=10, target=40),
                      dict(time=40, kind=3, actor=2, target=12), dict(time=35, kind=3, actor=41, target=11)]
            (run/'events.jsonl').write_text(''.join(json.dumps(e) + '\n' for e in events))
            (run/'summary.md').write_text('Duration: 55 seconds. Winner: 0.\n')
            (run/'manifest.json').write_text('{"cover_graduated":true}')
            m = cm.battle(run)
            self.assertTrue(m['graduated'])
            ends = {e['squad']: e['end'] for e in m['episodes']}
            self.assertEqual(ends, {0: 'high_go_round', 2: 'low_cross'})
            self.assertEqual(m['graduated_outcomes'], {'commit:high_go_round': 1, 'commit:stale_cross': 9, 'commit:low_cross': 1})
            self.assertEqual(m['commit_results'], {'support_wait': 16, 'go_round': 1, 'preparing': 8, 'committed': 2})
            commits = {c['squad']: c for c in m['exposed_commits']}
            self.assertEqual(set(commits), {1, 2, 3})
            self.assertEqual((commits[1]['kind'], commits[1]['waited'], commits[1]['bound_seconds']), ('stale_cross', 8, 5))
            self.assertEqual((commits[1]['hits'], commits[1]['casualties']), (1, 1))   # the hit at 35 s is after the pause
            self.assertEqual((commits[2]['kind'], commits[2]['bound_seconds'], commits[2]['hits']), ('low_cross', 7, 0))
            self.assertEqual(commits[3]['kind'], 'covered')
            self.assertEqual(m['friendly_hits'], 1)
            self.assertEqual(m['casualties_by_team'], {'0': 1, '1': 0})
            p = cm.pool([m])
            self.assertEqual(p['exposed_commits']['all']['n'], 3)
            self.assertAlmostEqual(p['exposed_commits']['stale_cross']['hits_per_commit'], 1.0)
            self.assertEqual(p['exposed_commits']['low_cross']['n'], 1)
            self.assertEqual(p['episode_ends'], {'high_go_round': 0.5, 'low_cross': 0.5})
            self.assertIn('Exposed commits', cm.markdown(p))


class RequestTests(unittest.TestCase):
    """Plan 028 Stage 1 + 2a rows (--cover-requests / --cover-reports): requests, tasking, latency, rounds."""

    def test_requests(self):
        with tempfile.TemporaryDirectory() as tmp:
            run = Path(tmp)/'battle'
            run.mkdir()
            req = lambda id, time, squad, reason, serial, **k: dict(id=id, kind='cover_request', time=time, squad=squad, soldier=squad*8, reason=reason,
                                                                   request=serial, enemy=40, gate='commit', **k)
            rows = [req(1, 10, 0, 'start', 1, started_at=10, contact_age=2.0, mg=0, gun=15, tasked=[10]),
                    req(2, 11, 0, 'retask', 1, started_at=10, contact_age=1.0, mg=0, gun=15, tasked=[10, 12]),
                    dict(id=3, kind='cover_credit', time=12, squad=0, reason='first', request=1, enemy=40, request_to_credit_seconds=2.0),
                    dict(id=4, kind='cover_credit', time=13, squad=0, reason='credited', request=1, enemy=40, request_to_credit_seconds=3.0),
                    req(5, 18, 0, 'end', 1, started_at=10, until=18, credited=1),
                    req(6, 30, 1, 'start', 1, started_at=30, contact_age=25.0, mg=1, gun=-1, tasked=[]),
                    dict(id=7, kind='order_issued', time=10.5, squad=0, soldier=15, fire_enemy=40),
                    dict(id=8, kind='order_issued', time=10.5, squad=0, soldier=10, fire_enemy=40),
                    dict(id=9, kind='order_issued', time=11, squad=0, soldier=11),
                    dict(id=10, kind='order_issued', time=11, squad=5, soldier=41)]
            with open(run/'trace.jsonl', 'w') as out:
                for r in rows:
                    out.write(json.dumps(r, separators=(',', ':')) + '\n')
            shot = lambda t, owner, end: dict(time=t, team=0, squad=0, owner=owner, aimed_enemy=40, aimed_point=[30, 0, 1], end=end)
            shots = [shot(9, 15, [30, 0, 1]), shot(11, 15, [31, 0, 1]), shot(12.5, 12, [10, 0, 1]), shot(20, 15, [30, 0, 1])]
            (run/'shots.jsonl').write_text(''.join(json.dumps(s) + '\n' for s in shots))
            (run/'summary.md').write_text('Duration: 55 seconds. Winner: 0.\n')
            (run/'manifest.json').write_text('{"cover_requests":true,"cover_reports":true}')
            m = cm.battle(run)
            r = m['requests']
            self.assertEqual(r['orders'], {'0': 3, '1': 1})
            self.assertEqual(r['payload_orders'], {'0': 2, '1': 0})
            a, b = r['requests']
            self.assertEqual((a['squad'], a['tasked'], a['gun'], a['seconds'], a['contact_age']), (0, 2, True, 8, 2.0))
            self.assertEqual((a['first_round'], a['first_credit'], a['credited']), (1, 2.0, 3.0))
            self.assertEqual((a['rounds'], a['landed'], a['tasked_rounds'], a['gun_rounds']), (2, 1, 2, 1))
            self.assertEqual((b['squad'], b['tasked'], b['gun'], b['seconds'], b['rounds'], b['first_round'], b['credited']), (1, 0, False, 25, 0, None, None))
            p = cm.pool([m])
            q = p['requests']
            self.assertEqual((q['n'], q['fired_share'], q['credited_share'], q['tasked_riflemen'], q['with_gun']), (2, 0.5, 0.5, {0: 1, 2: 1}, 0.5))
            self.assertAlmostEqual(q['orders_per_minute']['0'], 3/(55/60))
            self.assertAlmostEqual(q['gun_share_of_rounds'], 0.5)
            self.assertEqual(p['requests_azure']['n'], 2)
            self.assertIn('Covering requests', cm.markdown(p))



class SupplyTests(unittest.TestCase):
    """Plan 028 Stage 4: gun re-stations, covered rifle shifts and aimed platoon support, counted from the trace."""

    def test_supply(self):
        with tempfile.TemporaryDirectory() as d:
            run = Path(d)
            rows = [dict(id=1, kind='cover_gun_aim', reason='restation', time=5, squad=0, soldier=0, request=1, enemy=40, gate='commit', gun=7, travel=8.0),
                    dict(id=2, kind='cover_gun_aim', reason='no_station', time=6, squad=1, soldier=8, request=1, enemy=41, gate='commit', gun=15),
                    dict(id=3, kind='cover_shift', reason='start', time=7, squad=0, soldier=0, request=1, enemy=40, man=3, travel=5.0),
                    dict(id=4, kind='cover_shift', reason='start', time=8, squad=0, soldier=0, request=1, enemy=40, man=4, travel=3.0),
                    dict(id=5, kind='cover_shift', reason='arrived', time=10, squad=0, soldier=0, man=3, shifted_at=7.5),
                    dict(id=6, kind='cover_shift', reason='arrived', time=50, squad=0, soldier=0, man=4, shifted_at=45),
                    dict(id=7, kind='cover_platoon', reason='changed_squad', time=9, squad=1, soldier=5, support_squad=1, mover_squad=2, enemy=41, line=1, previous_squad=0),
                    dict(id=8, kind='cover_platoon', reason='same_squad', time=19, squad=1, soldier=5, support_squad=1, mover_squad=2, enemy=41, line=0, previous_squad=1),
                    dict(id=9, kind='cover_platoon_payload', reason='start', time=10, squad=1, soldier=8, request=7, enemy=41, gun=15),
                    dict(id=10, kind='cover_platoon_payload', reason='start', time=30, squad=1, soldier=8, request=9, enemy=41, gun=15)]
            with open(run/'trace.jsonl', 'w') as out:
                for r in rows:
                    out.write(json.dumps(r, separators=(',', ':')) + '\n')
            shots = [dict(time=12, team=0, squad=1, owner=15, aimed_enemy=41, aimed_point=[30, 0, 1], end=[30, 0, 1]),
                     dict(time=9, team=0, squad=0, owner=7, aimed_enemy=40, aimed_point=[30, 0, 1], end=[30, 0, 1]),
                     dict(time=55, team=0, squad=1, owner=15, aimed_enemy=41, aimed_point=[30, 0, 1], end=[30, 0, 1])]
            (run/'shots.jsonl').write_text(''.join(json.dumps(x) + '\n' for x in shots))
            (run/'summary.md').write_text('Duration: 60 seconds. Winner: 0.\n')
            (run/'manifest.json').write_text('{"cover_gun_aim":true,"cover_shift":true,"cover_platoon":true}')
            m = cm.battle(run)['supply']
            self.assertEqual((m['gun_restations'], m['gun_no_station'], m['gun_restations_by_gate'], m['gun_restation_fired']), (1, 1, {'commit': 1}, 1))
            # the second man arrived 42 s later: not counted as the arrival of that shift
            self.assertEqual((m['shifts'], m['shifts_arrived']), (2, 1))
            self.assertEqual((m['platoon_directives'], m['platoon_line'], m['platoon_changed']), (2, 1, 1))
            self.assertEqual((m['platoon_payloads'], m['platoon_payload_fired']), (2, 1))
            p = cm.pool([cm.battle(run)])['supply']
            self.assertEqual(p['totals']['shifts'], 2)
            self.assertAlmostEqual(p['shift_arrival_share'], .5)
            self.assertAlmostEqual(p['platoon_line_share'], .5)
            self.assertAlmostEqual(p['platoon_payload_fired_share'], .5)
            self.assertIn('Supply mechanisms', cm.markdown(cm.pool([cm.battle(run)])))


if __name__ == '__main__':
    unittest.main()
