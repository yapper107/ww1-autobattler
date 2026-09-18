#!/usr/bin/env python3
"""Show an actor's recorded beliefs and goal changes; never infer unseen enemies."""
import argparse
import json
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run', type=Path)
    parser.add_argument('--soldier', type=int, default=5)
    parser.add_argument('--time', type=float, default=30)
    args = parser.parse_args()
    root = args.run
    if root.name == 'latest.json':
        root = root.parent / json.loads(root.read_text())['run']
    elif not (root / 'manifest.json').exists():
        root = root / json.loads((root / 'latest.json').read_text())['run']
    manifest = json.loads((root / 'manifest.json').read_text())
    if not manifest.get('foundations_policy'):
        parser.error('This run does not use foundations policy.')
    snapshot = None
    changes = []
    with (root / 'trace.jsonl').open() as source:
        for line in source:
            event = json.loads(line)
            if event.get('soldier') != args.soldier:
                continue
            if event['kind'] == 'mental_map' and event['time'] <= args.time:
                snapshot = event
            if event['kind'] in ('goal_alternative_applied', 'goal_observe'):
                changes.append(dict(time=event['time'], decision=event['id'],
                                    kind=event['kind'], reason=event['reason']))
    print(json.dumps(dict(build=manifest['build'], digest=manifest['gameplay_digest'],
                         soldier=args.soldier, requested_time=args.time,
                         belief_snapshot=snapshot, goal_changes=changes,
                         limitation='Missing regions are unknown; estimate bands are heuristic, not observer truth.'),
                     indent=2))


if __name__ == '__main__':
    main()
