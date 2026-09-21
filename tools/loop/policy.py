"""The exploration policy: which nodes the next proposals continue from (plan 016 phase 3, Dream-RSI).

User ruling, 21 September 2026: "According to the Dream RSI, the parent shouldn't matter. It should just be picked based on
the score and how likely it is to succeed." So the architect does not hand-pick or hand-stack parents. The policy is plain,
replaceable code: every node of the lineage's current epoch that passes every guard is a candidate; each worker slot takes
the node with the highest upper confidence, its value plus an exploration bonus that shrinks with the children it already
has (a slot just given counts as a child), so a good node is continued and an untried good node is preferred to an exhausted
one. Deterministic; no randomness to seed.
"""
from __future__ import annotations
import math

from tools.loop import tree

EXPLORE = 0.03  # value is a share of the attack score; nodes of one epoch spread over about 0.07


def candidates(root: str, version: str):
    nodes = [n for n in tree.list_nodes() if tree.lineage_root(n['id']) == root]
    children = {}
    for n in nodes:
        if n.get('parent'):
            children[n['parent']] = children.get(n['parent'], 0) + 1
    out = []
    for n in nodes:
        s = n['scores'].get(version) or {}
        if s.get('guards_pass') and s.get('value') is not None:
            out.append(dict(id=n['id'], value=s['value'], children=children.get(n['id'], 0), title=n.get('title')))
    return out


def select(root: str, version: str, workers: int, explore: float = EXPLORE):
    pool = candidates(root, version)
    if not pool:
        return []
    picks, total = [], sum(c['children'] for c in pool) + len(pool)
    for _ in range(workers):
        best = max(pool, key=lambda c: (c['value'] + explore*math.sqrt(math.log(total + 1)/(1 + c['children'])), c['value']))
        picks.append(dict(best, upper=best['value'] + explore*math.sqrt(math.log(total + 1)/(1 + best['children']))))
        best['children'] += 1
        total += 1
    return picks
