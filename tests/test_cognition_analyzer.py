import copy
import sys
import unittest
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from investigate_cognition import obstruction_chain


class CognitionEvidenceTests(unittest.TestCase):
    def setUp(self):
        def row(index, time, kind, goal, parent=0, **extra):
            return dict(id=index, time=time, kind=kind, squad=0, goal_intent=dict(id=goal, parent=parent), **extra)
        self.rows = [row(1, 0, 'method_accepted', 101, 40, phase='supported advance'),
                     row(2, 3, 'task_status', 101, soldier=2, task_status=6, task_cause=10),
                     row(3, 4, 'task_status', 101, soldier=3, task_status=6, task_cause=10),
                     row(4, 7, 'goal_feedback_received', 40),
                     row(5, 7, 'goal_alternative_applied', 41, 40),
                     row(6, 9, 'method_accepted', 102, 41, phase='observe')]

    def test_complete_chain(self):
        self.assertTrue(obstruction_chain(self.rows)['passed'])

    def test_order_without_execution_is_not_success(self):
        self.assertFalse(obstruction_chain(self.rows[:-1])['passed'])

    def test_duplicate_failure_is_not_two_soldiers(self):
        self.rows[2]['soldier'] = 2
        self.assertFalse(obstruction_chain(self.rows)['passed'])

    def test_wrong_goal_does_not_count(self):
        self.rows[-1]['goal_intent']['parent'] = 999
        self.assertFalse(obstruction_chain(self.rows)['passed'])

    def test_instant_feedback_does_not_count(self):
        self.rows[3]['time'] = 3
        self.assertFalse(obstruction_chain(self.rows)['passed'])


if __name__ == '__main__':
    unittest.main()
