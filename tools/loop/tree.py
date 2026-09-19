"""Append-only discovery tree: one directory per node under ``.local/loop/tree``.

A node is a candidate simulation source (identified by its fingerprint, plus a
parameter suffix once Phase 2 exists) with its build, selector, guard and
objective results, its battle rows, and pointers to its exports. Scores live in
``scores/<version>.json`` so re-scoring never rewrites history.
"""
from __future__ import annotations
import difflib, json, shutil
from datetime import datetime
from pathlib import Path

from tools.loop.config import SIM, TREE_ROOT


def node_dir(node_id: str) -> Path:
    return TREE_ROOT/node_id


def exists(node_id: str) -> bool:
    return (node_dir(node_id)/'node.json').exists()


def load(node_id: str) -> dict:
    return json.loads((node_dir(node_id)/'node.json').read_text())


def save(node: dict):
    d = node_dir(node['id'])
    d.mkdir(parents=True, exist_ok=True)
    (d/'node.json').write_text(json.dumps(node, indent=1, sort_keys=True) + '\n')


def list_nodes():
    if not TREE_ROOT.exists():
        return []
    nodes = [load(p.name) for p in sorted(TREE_ROOT.iterdir()) if (p/'node.json').exists()]
    return sorted(nodes, key=lambda n: n.get('created', ''))


def snapshot_source(node_id: str, sim_dir: Path = SIM) -> Path:
    """Copy the simulation sources into the node so diffs and replays stay possible."""
    dest = node_dir(node_id)/'source'
    if dest.exists():
        shutil.rmtree(dest)
    dest.mkdir(parents=True)
    for p in sorted(Path(sim_dir).iterdir()):
        if p.suffix in ('.h', '.cpp'):
            shutil.copy2(p, dest/p.name)
    return dest


def diff_lines(node_id: str, parent_id: str | None):
    """Changed lines between this node's source snapshot and its parent's."""
    if not parent_id or not exists(parent_id):
        return None
    a, b = node_dir(parent_id)/'source', node_dir(node_id)/'source'
    if not a.exists() or not b.exists():
        return None
    names = sorted({p.name for p in a.iterdir()} | {p.name for p in b.iterdir()})
    changed = 0
    for name in names:
        left = (a/name).read_text().splitlines() if (a/name).exists() else []
        right = (b/name).read_text().splitlines() if (b/name).exists() else []
        for line in difflib.unified_diff(left, right, lineterm='', n=0):
            if line[:1] in '+-' and not line.startswith(('+++', '---')):
                changed += 1
    return changed


def write_diff(node_id: str, parent_id: str | None):
    if not parent_id or not exists(parent_id):
        return None
    a, b = node_dir(parent_id)/'source', node_dir(node_id)/'source'
    out = node_dir(node_id)/'diff.patch'
    chunks = []
    for name in sorted({p.name for p in a.iterdir()} | {p.name for p in b.iterdir()}):
        left = (a/name).read_text().splitlines(keepends=True) if (a/name).exists() else []
        right = (b/name).read_text().splitlines(keepends=True) if (b/name).exists() else []
        chunks.extend(difflib.unified_diff(left, right, f'a/{name}', f'b/{name}'))
    out.write_text(''.join(chunks))
    return str(out)


def lineage_root(node_id: str | None):
    """The parentless ancestor of a node (itself for a root); None when unknown."""
    seen = set()
    while node_id and exists(node_id) and node_id not in seen:
        seen.add(node_id)
        parent = load(node_id).get('parent')
        if not parent:
            return node_id
        node_id = parent
    return None


def new_node(node_id: str, parent: str | None, proposer: dict, brief: str | None = None):
    return dict(id=node_id, parent=parent, created=datetime.now().isoformat(timespec='microseconds'), proposer=proposer, brief=brief,
                build={}, selectors={}, external={}, rows='rows.json', scores={}, verdict=None, draws={})


def write_rows(node_id: str, rows_by_set: dict):
    (node_dir(node_id)/'rows.json').write_text(json.dumps(rows_by_set, indent=1) + '\n')


def read_rows(node_id: str) -> dict:
    return json.loads((node_dir(node_id)/'rows.json').read_text())


def write_score(node_id: str, result: dict):
    d = node_dir(node_id)/'scores'
    d.mkdir(exist_ok=True)
    (d/f"{result['score_version']}.json").write_text(json.dumps(result, indent=1, sort_keys=True) + '\n')
    node = load(node_id)
    node['scores'][result['score_version']] = dict(guards_pass=result['guards_pass'], value=result['value'])
    save(node)


def read_score(node_id: str, version: str):
    p = node_dir(node_id)/'scores'/f'{version}.json'
    return json.loads(p.read_text()) if p.exists() else None
