"""Evaluate the current simulation source as one tree node.

Order: snapshot source, build, static check, protected files, test build and
selectors, Python tests, candidate battles, parity spot checks, baseline rows
(cached), score, write. Every step's result is recorded even when it fails, so a
failed node is still evidence.
"""
from __future__ import annotations
import hashlib, json, shutil, time
from pathlib import Path

from tools.loop import baselines, config, score as scoring, selectors, static_check, tree
from tools.loop.config import PARITY_SPECS, PROTECTED_FILE, REPO, SECONDS
from tools.loop.runner import run_specs


def protected_files():
    if not PROTECTED_FILE.exists():
        return dict(ok=False, reason=f'missing {PROTECTED_FILE}')
    pins = json.loads(PROTECTED_FILE.read_text())
    mismatched = []
    for rel, expected in pins.items():
        actual = hashlib.sha256((REPO/rel).read_bytes()).hexdigest() if (REPO/rel).exists() else None
        if actual != expected:
            mismatched.append(rel)
    return dict(ok=not mismatched, mismatched=mismatched, pinned=len(pins))


def parity(binary, node_dir, jobs=None, progress=None, controller='drills', reference_binary=None, specs=None):
    """Lineage rule: the controllers this node does not own must reproduce the epoch's digests
    on the candidate binary, on the static maps, a town map and a static-defence battle."""
    detail, ok = {}, True
    specs = PARITY_SPECS if specs is None else specs
    for name in config.parity_partners(controller):
        fresh = run_specs(binary, config.BASELINES[name]['controller'], specs, node_dir/'parity', jobs, SECONDS, False, progress)
        for spec, row in zip(specs, fresh):
            reference = baselines.parity_reference(name, spec)
            got = row.get('digest')
            if row.get('status') != 'complete':
                status, ok = 'failed', False
            elif reference is None:
                # the root establishes the epoch's reference through the cache
                baselines.rows_for(name, [spec], reference_binary or binary, SECONDS, jobs)
                status = 'established'
            else:
                status = 'match' if got == reference else 'mismatch'
                ok = ok and status == 'match'
            detail[f"{name}:{config.spec_key(spec)}"] = dict(status=status, digest=got, reference=reference)
    return dict(ok=ok, detail=detail)


def needed_sets(spec):
    """Every scenario set the score reads: run these and nothing else."""
    names = set(spec['objective']['reported_sets'])
    for g in spec['guards']:
        names.update(g.get('sets', []))
    return names


def selectors_against_root(result, root_external):
    """A child may not break a selector its lineage root passes. The root's own failures are
    recorded on it as known; they are reported, not repaired, by the loop."""
    failed = set(result.get('failed', []))
    known = failed if root_external is None else set(root_external.get('selectors', {}).get('failed', []))
    result['known_failures'] = sorted(failed & known)
    result['new_failures'] = sorted(failed - known)
    if 'reason' not in result:
        result['ok'] = not result['new_failures']
    return result


def baseline_needs(spec):
    needs = {}
    for g in spec['guards']:
        if g['kind'] == 'paired':
            needs.setdefault(g['baseline'], set()).update(g['sets'])
    for b in spec['objective'].get('baselines', []):
        needs.setdefault(b, set()).update(spec['objective']['reported_sets'])
    for b in spec.get('information', []):
        needs.setdefault(b, set()).update(spec['objective']['reported_sets'])
    return needs


def baseline_rows_for(spec, sets, binary, jobs=None, run_missing=True, progress=None):
    out = {}
    for name, set_names in baseline_needs(spec).items():
        out[name] = {}
        for set_name in set_names:
            if set_name in sets:
                out[name][set_name] = baselines.rows_for(name, sets[set_name], binary, SECONDS, jobs, run_missing, progress)
    return out


def evaluate_candidate(parent=None, proposer=None, brief=None, jobs=None, skip_selectors=False, skip_python=False,
                       only_sets=None, suffix=None, force=False, log=print, controller='drills', external_from=None):
    fingerprint = selectors.source_id()
    node_id = fingerprint + (f'-{suffix}' if suffix else '')
    if tree.exists(node_id) and not force:
        raise SystemExit(f'node {node_id} exists; use --force to re-evaluate')
    node = tree.new_node(node_id, parent, proposer or dict(kind='human'), brief)
    node['config_digest'] = config.config_digest()
    node['controller'] = controller
    root_id = tree.lineage_root(parent) if parent else None
    if parent and not root_id:
        raise SystemExit(f'parent {parent} is not in the tree')
    root = tree.load(root_id) if root_id else None
    if root and root.get('controller', 'drills') != controller:
        raise SystemExit(f"lineage {root['controller']} cannot take a {controller} child")
    node['lineage_root'] = root_id or node_id
    baselines.set_epoch(root_id or fingerprint)
    tree.save(node)
    d = tree.node_dir(node_id)
    tree.snapshot_source(node_id)
    node['diff'] = tree.write_diff(node_id, parent)
    node['tie_break'] = dict(diff_lines=tree.diff_lines(node_id, parent))
    node['audit'] = static_check.audit_added_lines(node['diff'])
    external = node['external']

    log(f'[{node_id}] build')
    external['build'] = selectors.build_lab(d/'build.log')
    tree.save(node)
    if not external['build']['ok']:
        log('build failed; recording node without battles')
        _finish(node, {}, {}, external, log)
        return node
    binary = d/'battle-lab'
    shutil.copy2(REPO/'.local/lab/battle-lab', binary)
    node['binary'] = str(binary)

    external['static_check'] = static_check.check()
    external['protected_files'] = protected_files()
    # Selectors and Python tests describe the source, not the controller: a second
    # root on the same fingerprint reuses the first root's recorded results.
    donor = tree.load(external_from)['external'] if external_from else None
    if donor and external_from.split('-')[0] != fingerprint:
        raise SystemExit(f'{external_from} is another source; its selector results cannot be reused')
    if donor:
        external['selectors'] = dict(donor['selectors'], reused_from=external_from)
    elif skip_selectors:
        external['selectors'] = dict(ok=False, reason='skipped')
    else:
        log(f'[{node_id}] test build and selectors')
        built = selectors.build_tests(d/'tests-build.log')
        external['selectors'] = selectors.run_selectors(d) if built['ok'] else dict(ok=False, reason='test build failed', log=built['log'])
    selectors_against_root(external['selectors'], root['external'] if root else None)
    if donor:
        external['python_tests'] = dict(donor['python_tests'], reused_from=external_from)
    else:
        external['python_tests'] = dict(ok=False, reason='skipped') if skip_python else selectors.run_python_tests(d/'python-tests.log')
    tree.save(node)

    version = external['build']['version']
    spec = scoring.load_guards()
    wanted = set(only_sets) if only_sets else needed_sets(spec)
    sets = config.scenario_sets(version, wanted=wanted)
    node['draws'] = {k: [config.spec_key(s) for s in v] for k, v in sets.items()}
    started = time.monotonic()
    rows_by_set = {}
    for name, specs in sets.items():
        log(f'[{node_id}] {name}: {len(specs)} battles')
        rows_by_set[name] = run_specs(binary, controller, specs, d/'runs', jobs, SECONDS, False)
        done = sum(1 for r in rows_by_set[name] if r['status'] == 'complete')
        log(f'[{node_id}] {name}: {done}/{len(specs)} complete')
    tree.write_rows(node_id, rows_by_set)
    node['battle_seconds'] = time.monotonic() - started

    log(f'[{node_id}] parity and baselines')
    # Sparring rows and parity references always come from the lineage root's binary, so a
    # legacy child is compared with the root's legacy, never with itself.
    reference_binary = Path(root['binary']) if root else binary
    external['parity'] = parity(binary, d, jobs, controller=controller, reference_binary=reference_binary, specs=config.parity_specs())
    baseline_rows = baseline_rows_for(spec, sets, reference_binary, jobs)
    _finish(node, rows_by_set, baseline_rows, external, log, spec)
    return node


def _finish(node, rows_by_set, baseline_rows, external, log, spec=None):
    spec = spec or scoring.load_guards()
    result = scoring.score(spec, rows_by_set, baseline_rows, external, node.get('tie_break', {}).get('diff_lines'))
    node['external'] = external
    tree.save(node)
    tree.write_score(node['id'], result)
    failed = [n for n, g in result['guards'].items() if not g['passed']]
    log(f"[{node['id']}] guards {'pass' if result['guards_pass'] else 'FAIL ' + ','.join(failed)}; objective {result['objective']['value']}")
