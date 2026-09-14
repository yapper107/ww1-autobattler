#!/usr/bin/env python3
"""Inspect the recovery task contract without conflating arrival with strict tactical success."""
import argparse, collections, json
from pathlib import Path

def trace_rows(path):
    with path.open() as stream:
        for line in stream:
            yield json.loads(line)

def investigate(root):
    root = Path(root)
    if root.name == 'latest.json':
        root = root.parent / json.loads(root.read_text())['run']
    tasks = {}; edges = []; reports = collections.Counter(); paused_interruptions = []
    for row in trace_rows(root / 'trace.jsonl'):
        if row['kind'] == 'task_status':
            key = row['task_id']
            task = tasks.setdefault(key, {'soldier': row['soldier'], 'order': row['order'], 'transitions': []})
            task['transitions'].append({k: row[k] for k in ('id', 'time', 'reason', 'task_status', 'task_cause', 'task_sequence')})
        elif row['kind'] == 'task_report_received':
            reports[row['task_id']] += 1
        elif row['kind'] in ('drill_edge', 'route_stage_completed', 'slot_reassigned', 'stage_released'):
            edges.append({k: row[k] for k in ('id', 'time', 'squad', 'route', 'route_stage', 'reason')})
        elif row['kind'] == 'movement_paused' and 'Interrupted' in row['reason']:
            paused_interruptions.append(row['id'])
    final = collections.Counter(); incomplete = []; resumed = 0
    for key, task in tasks.items():
        transitions = task['transitions']; last = transitions[-1]; final[last['reason']] += 1
        task['received_reports'] = reports[key]
        if last['task_status'] not in (5, 6, 7) or last['task_cause'] == 11:
            incomplete.append(key)
        resumed += any(a['task_status'] == 3 and b['task_status'] == 2 for a, b in zip(transitions, transitions[1:]))
    return {'schema': 1, 'run': str(root), 'tasks': tasks, 'final_statuses': dict(final), 'resumed_same_task': resumed,
            'unfinished_or_battle_ended': incomplete, 'pause_citing_interrupted': paused_interruptions, 'precedence_evidence': edges,
            'limitation': 'Battle-ended failures are incomplete execution, not successful terminal outcomes. Use evaluate_routes.py unchanged for tactical acceptance.'}

if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__); p.add_argument('run'); p.add_argument('--out'); a = p.parse_args()
    result = investigate(a.run); text = json.dumps(result, indent=2) + '\n'
    if a.out: Path(a.out).write_text(text)
    else: print(text)
