import math
import unittest

from tools.character.author_motion_curves import monotone_transit


class TransitCurveTests(unittest.TestCase):
    # Receiver, clearance waypoint, pouch mouth, inside hold, then return.
    keys = [(0, (0., 0., .40)), (.215, (0., 0., .40)),
            (.26, (-.035, 0., .31)), (.32, (.25, -.126, .065)),
            (.37, (.25, -.126, -.155)), (.425, (.25, -.126, -.155)),
            (.485, (.25, -.126, .065)), (.595, (-.035, 0., .31)),
            (.645, (0., 0., .40)), (1., (0., 0., .40))]

    def test_dwell_and_vertical_pouch_clearance(self):
        for i in range(1001):
            t = i / 1000
            p = monotone_transit(self.keys, t)
            if .32 <= t <= .485:
                self.assertAlmostEqual(p[0], .25)
                self.assertAlmostEqual(p[1], -.126)
            if .37 <= t <= .425:
                self.assertAlmostEqual(p[2], -.155)
            for (a, left), (b, right) in zip(self.keys, self.keys[1:]):
                if a <= t <= b:
                    for c in range(3):
                        self.assertGreaterEqual(p[c], min(left[c], right[c]) - 1e-12)
                        self.assertLessEqual(p[c], max(left[c], right[c]) + 1e-12)

    def test_transit_velocity_survives_waypoints(self):
        dt = 1e-7
        for t in [.26, .32, .485, .595]:
            before, at, after = [monotone_transit(self.keys, t + d) for d in [-dt, 0, dt]]
            incoming = [(y - x) / dt for x, y in zip(before, at)]
            outgoing = [(y - x) / dt for x, y in zip(at, after)]
            self.assertGreater(math.sqrt(sum(v*v for v in incoming)), .1)
            self.assertLess(math.dist(incoming, outgoing), .001)


if __name__ == '__main__':
    unittest.main()
