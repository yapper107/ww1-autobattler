import importlib.util
import json
import tempfile
import unittest
from pathlib import Path
spec = importlib.util.spec_from_file_location('investigate_tasks', Path(__file__).parents[1] / 'tools/investigate_tasks.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)

class TaskInvestigationTests(unittest.TestCase):
    def test_interruption_resume_keeps_identity_and_end_of_battle_is_not_success(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            rows = []
            for sequence, (status, cause, reason) in enumerate(((1, 0, 'Received'), (3, 1, 'Interrupted: shelter'), (2, 0, 'Executing'), (6, 11, 'Failed: battle ended')), 1):
                rows.append(dict(id=sequence, time=sequence, kind='task_status', task_id=7, soldier=2, order=7, task_status=status, task_cause=cause, task_sequence=sequence, reason=reason))
            (root / 'trace.jsonl').write_text(''.join(json.dumps(row) + '\n' for row in rows))
            result = module.investigate(root)
            self.assertEqual(result['resumed_same_task'], 1)
            self.assertEqual(result['unfinished_or_battle_ended'], [7])
            self.assertEqual(len(result['tasks']), 1)

if __name__ == '__main__':
    unittest.main()
