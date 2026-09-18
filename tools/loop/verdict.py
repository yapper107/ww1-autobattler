"""User replay verdicts on a node: structured so a rejection becomes a guard."""
from __future__ import annotations
import json, time

from tools.loop import tree

DECISIONS = ('accept', 'reject', 'undecided')


def add(node_id, decision, battle=None, at=None, squad=None, wrong=None, expected=None, note=None):
    if decision not in DECISIONS:
        raise ValueError(f'decision must be one of {DECISIONS}')
    if not tree.exists(node_id):
        raise SystemExit(f'unknown node {node_id}')
    record = dict(time=time.strftime('%Y-%m-%dT%H:%M:%S'), decision=decision, battle=battle, at=at, squad=squad,
                  wrong=wrong, expected=expected, note=note, guard=None)
    with (tree.node_dir(node_id)/'verdicts.jsonl').open('a') as stream:
        stream.write(json.dumps(record) + '\n')
    node = tree.load(node_id)
    node['verdict'] = decision
    tree.save(node)
    return record


def list_verdicts(node_id):
    path = tree.node_dir(node_id)/'verdicts.jsonl'
    if not path.exists():
        return []
    return [json.loads(line) for line in path.read_text().splitlines() if line.strip()]


def open_rejections():
    """Rejections not yet turned into a guard, across the tree."""
    out = []
    for node in tree.list_nodes():
        for v in list_verdicts(node['id']):
            if v['decision'] == 'reject' and not v.get('guard'):
                out.append(dict(node=node['id'], **v))
    return out
