"""Recompute a score version over every node from recorded rows and cached baselines."""
from __future__ import annotations
from pathlib import Path

from tools.loop import baselines, config, score as scoring, tree
from tools.loop.evaluate import baseline_rows_for


def rescore(guards_path=None, node_ids=None, log=print):
    spec = scoring.load_guards(guards_path or config.GUARDS_FILE)
    nodes = tree.list_nodes()
    if node_ids:
        nodes = [n for n in nodes if n['id'] in node_ids]
    results = []
    for node in nodes:
        if not (tree.node_dir(node['id'])/'rows.json').exists():
            log(f"[{node['id']}] no rows; skipped")
            continue
        rows_by_set = tree.read_rows(node['id'])
        sets = {}
        for name, rows in rows_by_set.items():
            sets[name] = [{k: r[k] for k in config.SPEC_FIELDS if k in r} for r in rows]
        baselines.set_epoch(node.get('lineage_root') or node['id'])
        baseline_rows = baseline_rows_for(spec, sets, node.get('binary'), run_missing=False)
        result = scoring.score(spec, rows_by_set, baseline_rows, node.get('external', {}), node.get('tie_break', {}).get('diff_lines'))
        tree.write_score(node['id'], result)
        results.append((node['id'], result))
        failed = [n for n, g in result['guards'].items() if not g['passed']]
        log(f"[{node['id']}] {result['score_version']}: guards {'pass' if result['guards_pass'] else 'FAIL ' + ','.join(failed)}; value {result['value']}")
    return results
