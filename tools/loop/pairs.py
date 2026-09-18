"""Blind pairwise comparisons for score calibration.

A pair copies the same scenario's run from two nodes into A and B in random
order. ``pair.json`` shows only what the user needs to replay; ``key.json`` holds
the mapping and is read only when the answer is recorded. Calibration compares
the user's preferences with the score's ordering of the same two nodes.
"""
from __future__ import annotations
import json, random, shutil, time
from pathlib import Path

from tools.loop import tree
from tools.loop.config import PAIRS_ROOT


def _run_for(node_id, set_name, key):
    rows = tree.read_rows(node_id).get(set_name, [])
    for r in rows:
        if r.get('status') == 'complete' and _key(r) == key:
            return r
    return None


def _key(r):
    return f"{r['gen_seed']}-{r['seed']}" if r.get('family') else f"t{r['terrain']}-{r['seed']}"


def make(left, right, set_name, key, rng=None):
    rng = rng or random.Random()
    a, b = _run_for(left, set_name, key), _run_for(right, set_name, key)
    if not a or not b:
        raise SystemExit(f'no complete run for {set_name} {key} in both nodes')
    pid = time.strftime('%Y%m%d-%H%M%S') + f'-{set_name}-{key}'
    d = PAIRS_ROOT/pid
    d.mkdir(parents=True)
    order = [('A', left, a), ('B', right, b)]
    if rng.random() < 0.5:
        order = [('A', right, b), ('B', left, a)]
    for label, node_id, row in order:
        shutil.copytree(row['run'], d/label)
    manifest = json.loads((d/'A'/'manifest.json').read_text())
    visible = dict(id=pid, set=set_name, key=key, seed=manifest['seed'], terrain=manifest.get('terrain'),
                   gen_seed=manifest.get('gen_seed'), runs={'A': str(d/'A'), 'B': str(d/'B')},
                   answered=None, note='Watch A then B; answer with: python3 -m tools.loop pairs answer ' + pid + ' A|B|neither')
    (d/'pair.json').write_text(json.dumps(visible, indent=1) + '\n')
    (d/'key.json').write_text(json.dumps({label: node_id for label, node_id, _ in order}, indent=1) + '\n')
    return visible


def answer(pid, preference, note=None):
    d = PAIRS_ROOT/pid
    visible = json.loads((d/'pair.json').read_text())
    key = json.loads((d/'key.json').read_text())
    if preference not in ('A', 'B', 'neither'):
        raise ValueError('preference must be A, B or neither')
    label = dict(time=time.strftime('%Y-%m-%dT%H:%M:%S'), pair=pid, set=visible['set'], key=visible['key'],
                 preferred=key.get(preference), other=key['B' if preference == 'A' else 'A'] if preference != 'neither' else None,
                 nodes=key, preference=preference, note=note)
    visible['answered'] = label
    (d/'pair.json').write_text(json.dumps(visible, indent=1) + '\n')
    with (PAIRS_ROOT/'labels.jsonl').open('a') as stream:
        stream.write(json.dumps(label) + '\n')
    return label


def labels():
    path = PAIRS_ROOT/'labels.jsonl'
    if not path.exists():
        return []
    return [json.loads(l) for l in path.read_text().splitlines() if l.strip()]


def calibrate(version='v1'):
    """Agreement between user preferences and the score's ordering of the two nodes."""
    agree, disagree, undecidable = 0, [], 0
    for label in labels():
        if label['preference'] == 'neither':
            undecidable += 1
            continue
        a, b = tree.read_score(label['preferred'], version), tree.read_score(label['other'], version)
        va = a.get('value') if a else None
        vb = b.get('value') if b else None
        if va is None or vb is None:
            undecidable += 1
            continue
        if va > vb:
            agree += 1
        else:
            disagree.append(dict(pair=label['pair'], preferred=label['preferred'], other=label['other'], score_preferred=va, score_other=vb))
    decided = agree + len(disagree)
    return dict(version=version, decided=decided, agreement=agree/decided if decided else None, disagreements=disagree, undecidable=undecidable)
