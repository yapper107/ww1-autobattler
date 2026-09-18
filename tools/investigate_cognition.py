#!/usr/bin/env python3
"""Inspect recorded actor decisions; independently verify the obstruction scenario chain."""
import argparse
import json
from pathlib import Path


def obstruction_chain(rows):
    """Require the same goal/method/recipient through the physical-failure chain."""
    for start in rows:
        intent = start.get('goal_intent', {})
        if start['kind'] != 'method_accepted' or start.get('phase') != 'supported advance':
            continue
        method, parent, squad = intent.get('id'), intent.get('parent'), start.get('squad')
        failures = [e for e in rows if e['kind'] == 'task_status' and e.get('squad') == squad
                    and e.get('goal_intent', {}).get('id') == method and e.get('task_cause') == 10
                    and e.get('task_status') == 6 and e['time'] > start['time']]
        if len({e.get('soldier') for e in failures}) < 2:
            continue
        for feedback in rows:
            if feedback['kind'] != 'goal_feedback_received' or feedback.get('goal_intent', {}).get('id') != parent:
                continue
            if feedback['time'] <= max(e['time'] for e in failures):
                continue
            for replacement in rows:
                goal = replacement.get('goal_intent', {})
                if replacement['kind'] != 'goal_alternative_applied' or goal.get('parent') != parent or replacement['time'] < feedback['time']:
                    continue
                for executed in rows:
                    if (executed['kind'] == 'method_accepted' and executed.get('squad') == squad
                            and executed.get('phase') == 'observe' and executed['time'] > replacement['time']
                            and executed.get('goal_intent', {}).get('parent') == goal.get('id')):
                        return dict(passed=True, initial=start['id'], failures=[e['id'] for e in failures],
                                    received=feedback['id'], replacement=replacement['id'], executed=executed['id'],
                                    failure_time=min(e['time'] for e in failures), receipt_time=feedback['time'],
                                    execution_time=executed['time'])
    return dict(passed=False, reason='No complete matching physical-failure/report/replacement/execution chain')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run', type=Path)
    parser.add_argument('--check-obstruction', action='store_true')
    parser.add_argument('--out', type=Path)
    args = parser.parse_args()
    root = args.run
    if root.name == 'latest.json':
        root = root.parent / json.loads(root.read_text())['run']
    elif not (root / 'manifest.json').exists():
        root = root / json.loads((root / 'latest.json').read_text())['run']
    manifest = json.loads((root / 'manifest.json').read_text())
    rows = [json.loads(line) for line in (root / 'trace.jsonl').open()]
    result = dict(build=manifest['build'], seed=manifest['seed'], encounter=manifest['encounter'],
                  digest=manifest['gameplay_digest'], obstruction=obstruction_chain(rows),
                  decisions=[e for e in rows if e['kind'].startswith('method_') or e['kind'].startswith('goal_')])
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({k: v for k, v in result.items() if k != 'decisions'}, indent=2))
    return int(args.check_obstruction and (manifest['encounter'] != 10 or not result['obstruction']['passed']))


if __name__ == '__main__':
    raise SystemExit(main())
