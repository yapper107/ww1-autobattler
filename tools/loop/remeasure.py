"""Regenerate a node's metric rows by fighting its battles again.

Raw battle output is pruned after scoring. When a verdict asks for a metric the
rows do not carry, the node's frozen binary, its controller and the scenario in
each row reproduce the battle exactly; the recorded digest proves it did. A
mismatch means the binary, a map or the machine changed and is reported, never
hidden.
"""
from __future__ import annotations
from pathlib import Path

from tools.loop import baselines, config, rescore, score as scoring, tree
from tools.loop.evaluate import baseline_needs
from tools.loop.runner import run_specs


def remeasure(node_ids=None, jobs=None, with_baselines=True, log=print, respec=False):
    nodes = [n for n in tree.list_nodes() if (not node_ids or n['id'] in node_ids) and (tree.node_dir(n['id'])/'rows.json').exists()]
    spec = scoring.load_guards()
    report = {}
    for node in nodes:
        binary, controller = node.get('binary'), node.get('controller', 'drills')
        if not binary or not Path(binary).exists():
            log(f"[{node['id']}] no frozen binary; skipped")
            continue
        old, fresh, changed = tree.read_rows(node['id']), {}, []
        # respec: the scenario sets changed (for instance more battle seeds per map); draw them again
        # for this node's own build, so its validation maps stay the ones hashed from its fingerprint.
        current = config.scenario_sets(node.get('draw_key') or node['external']['build']['version'], wanted=set(old)) if respec else {}
        for name, rows in old.items():
            specs = current[name] if respec else [{k: r[k] for k in config.SPEC_FIELDS if k in r} for r in rows]
            rows = [next((r for r in rows if config.spec_key(r) == config.spec_key(s)), {}) for s in specs] if respec else rows
            log(f"[{node['id']}] {name}: {len(specs)} battles")
            fresh[name] = run_specs(binary, controller, specs, tree.node_dir(node['id'])/'runs', jobs, config.SECONDS, False)
            changed += [f'{name}:{config.spec_key(a)}' for a, b in zip(rows, fresh[name]) if a.get('digest') and a.get('digest') != b.get('digest')]
        tree.write_rows(node['id'], fresh)
        if with_baselines:
            root = tree.load(node.get('lineage_root') or node['id'])
            baselines.set_epoch(root['id'])
            for baseline, set_names in baseline_needs(spec).items():
                for name in set_names:
                    if name in fresh:
                        specs = [{k: r[k] for k in config.SPEC_FIELDS if k in r} for r in fresh[name]]
                        baselines.rows_for(baseline, specs, root.get('binary') or binary, config.SECONDS, jobs, refresh=True)
        report[node['id']] = dict(battles=sum(len(v) for v in fresh.values()), digest_changed=changed)
        log(f"[{node['id']}] remeasured; digests changed: {changed or 'none'}")
    rescore.rescore(None, [n['id'] for n in nodes], log, run_missing=True)  # the root fights any of the node's draws it has not fought
    return report
