"""Plan 029 M-B: hits_through_concealment in tools/conduct_metrics.py on a synthetic battle directory.
Proposed for tests/ (the overseer owns that directory)."""
import json
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools'))
import conduct_metrics  # noqa: E402


def soldier(i, team, x, y, alive=True):
    return dict(id=i, team=team, squad=i//8, alive=alive, position=[x, y, 0.0], rounds=0, health=100, order=0, task=0,
                goal=[x, y, 0.0], action=4, observer_exposed=False, solution=False, machine_gun=False)


def battle(directory, concealment, victims_at):
    """Two soldiers 40 m apart for 60 s (one soldier-minute each), a hedge between them at x=0 when concealment is set,
    and one shot per victim position: a round from (-20,0) east along y=0 that hits the victim standing at victims_at."""
    d = Path(directory)
    hedge = dict(id=1, center=[0, 0, 0], half=[.3, 6, 0], height=1.8, blocks_movement=True)
    if concealment:
        hedge['concealment'] = True
    wall = dict(id=2, center=[0, 20, 0], half=[.3, 2, 0], height=1.0, blocks_movement=True)
    (d/'geometry.jsonl').write_text(json.dumps(dict(time=0, revision=1, reason='initial', obstacles=[hedge, wall])) + '\n')
    frames = [dict(time=round(t*.2, 3), soldiers=[soldier(0, 0, -20, 0)] + [soldier(1 + k, 1, x, y) for k, (x, y) in enumerate(victims_at)])
              for t in range(301)]
    (d/'evaluation.jsonl').write_text(''.join(json.dumps(f) + '\n' for f in frames))
    shots = []
    for k, (x, y) in enumerate(victims_at):
        shots.append(dict(schema=1, time=10.0 + k, impact_time=10.05 + k, owner=0, team=0, squad=0, aimed_enemy=1 + k,
                          start=[-20, 0, 1.5], end=[x + 5, y, 1.4], hit=True, victims=[dict(soldier=1 + k, time=10.04 + k, energy=3000)]))
    shots.append(dict(schema=1, time=30.0, impact_time=30.05, owner=0, team=0, squad=0, aimed_enemy=1, start=[-20, 0, 1.5],
                      end=[20, 0, 1.4], hit=False, victims=[]))
    (d/'shots.jsonl').write_text(''.join(json.dumps(s) + '\n' for s in shots))
    return [json.loads(line) for line in (d/'evaluation.jsonl').read_text().splitlines()]


class HitsThroughConcealment(unittest.TestCase):
    def test_counts_only_hits_behind_a_hedge(self):
        with tempfile.TemporaryDirectory() as tmp:
            # Victims: behind the hedge (x=10, y=0), in front of it (x=-10), beside it (the line passes x=0 at y=8.9, beyond the hedge's end).
            frames = battle(tmp, True, [(10, 0), (-10, 0), (10, 20)])
            got = conduct_metrics.hits_through_concealment(tmp, frames)['hits_through_concealment']
            minutes = 4*60.2/60  # four living soldiers over 301 frames of 0.2 s
            self.assertAlmostEqual(got, 100/minutes, places=6)

    def test_zero_without_concealment_and_none_without_geometry(self):
        with tempfile.TemporaryDirectory() as tmp:
            frames = battle(tmp, False, [(10, 0)])
            self.assertEqual(conduct_metrics.hits_through_concealment(tmp, frames)['hits_through_concealment'], 0.0)
            (Path(tmp)/'geometry.jsonl').unlink()
            self.assertIsNone(conduct_metrics.hits_through_concealment(tmp, frames)['hits_through_concealment'])
            self.assertIsNone(conduct_metrics.hits_through_concealment(tmp, [])['hits_through_concealment'])

    def test_in_evaluate(self):
        with tempfile.TemporaryDirectory() as tmp:
            battle(tmp, True, [(10, 0)])
            row = conduct_metrics.evaluate(tmp)
            self.assertIn('hits_through_concealment', row)
            self.assertGreater(row['hits_through_concealment'], 0)


if __name__ == '__main__':
    unittest.main()
