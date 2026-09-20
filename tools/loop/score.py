"""Versioned score: hard guards, one objective number, a tie-break.

Inputs are metric rows (see ``runner``) for the candidate and for each baseline,
plus the external check results recorded on the node. The score never reads a
battle export directly, so any version can be recomputed over the whole tree.
"""
from __future__ import annotations
import json, math
from pathlib import Path

from tools.loop import config
from tools.loop.config import GUARDS_FILE, cluster_key, pair_key


def load_guards(path=GUARDS_FILE):
    return json.loads(Path(path).read_text())


def _summarize(samples):
    from report_family import summarize
    return summarize(samples)


def _paired(cand_rows, base_rows, value):
    """Paired candidate-minus-baseline samples keyed for the cluster bootstrap."""
    base = {pair_key(r): r for r in base_rows if r and r.get('status') == 'complete'}
    samples, unpaired = [], 0
    for r in cand_rows:
        if r.get('status') != 'complete':
            continue
        b = base.get(pair_key(r))
        if b is None:
            unpaired += 1
            continue
        a, c = value(r), value(b)
        if a is None or c is None:
            continue
        samples.append((cluster_key(r), a - c))
    return samples, unpaired


def _metric(name):
    return lambda r: r['metrics'].get(name)


def attacker_result(row):
    m = row['metrics']
    if m.get('win_azure') is None:
        return None
    return 1.0 if m['win_azure'] else (0.5 if m.get('draw') else 0.0)


def log_exchange(clip):
    lo, hi = 2.0**-clip, 2.0**clip
    def value(row):
        m = row['metrics']
        x = m.get('casualty_exchange')
        if x is None:
            # zero own losses: best case when the enemy lost anyone, else uninformative
            if m.get('casualty_ember', 0) and not m.get('casualty_azure', 0):
                x = hi
            else:
                return None
        return math.log2(min(max(float(x), lo), hi))
    return value


def evaluate_guards(spec, rows_by_set, baseline_rows, external):
    """Returns {name: {pass, detail}} for every guard in the spec."""
    results = {}
    for g in spec['guards']:
        name, kind = g['name'], g['kind']
        if kind == 'external':
            value = external.get(name)
            results[name] = dict(passed=bool(value and value.get('ok')), detail=value or {'ok': False, 'reason': 'not run'})
        elif kind == 'battle':
            failures = []
            for set_name in g['sets']:
                for r in rows_by_set.get(set_name, []):
                    if r.get('status') != 'complete':
                        failures.append(dict(set=set_name, key=config.spec_key(r), reason=r.get('error', 'incomplete')))
                        continue
                    if g['rule'] == 'gt':
                        ok = (r['metrics'].get(g['metric']) or 0) > g['value']
                    elif g['rule'] == 'min_ge':
                        ok = min(r.get(g['field']) or [0]) >= g['value']
                    elif g['rule'] == 'index_ge':
                        # one side only: a static defence may field fewer than three squads
                        ok = (r.get(g['field']) or [0, 0])[g['index']] >= g['value']
                    else:
                        raise ValueError(f'unknown battle rule {g["rule"]}')
                    if not ok:
                        failures.append(dict(set=set_name, key=config.spec_key(r)))
            results[name] = dict(passed=not failures, detail=dict(failures=failures))
        elif kind == 'paired':
            per_set, passed, evaluated = {}, True, 0
            for set_name in g['sets']:
                if set_name not in rows_by_set:
                    per_set[set_name] = dict(skipped=True)  # set not run for this node
                    continue
                cand = rows_by_set[set_name]
                base = baseline_rows.get(g['baseline'], {}).get(set_name, [])
                samples, unpaired = _paired(cand, base, _metric(g['metric']))
                summary = _summarize(samples)
                summary['unpaired'] = unpaired
                evaluated += 1
                if summary['count'] == 0:
                    ok = False
                elif g['rule'] == 'ci_lower_le_0':
                    ok = summary['ci95'][0] <= 0
                elif g['rule'] == 'mean_le_0':
                    ok = summary['mean'] <= 0
                elif g['rule'] == 'ci_upper_ge_0':   # higher is better: not significantly below the baseline
                    ok = summary['ci95'][1] >= 0
                else:
                    raise ValueError(f'unknown paired rule {g["rule"]}')
                summary['passed'] = ok
                per_set[set_name] = summary
                passed = passed and ok
            results[name] = dict(passed=passed and evaluated > 0, detail=per_set)
        else:
            raise ValueError(f'unknown guard kind {kind}')
    return results


def evaluate_attack_objective(obj, rows_by_set, lineage=None):
    """Plan 018: attack score against a static defence.

    Per set: mean of ``attack_score`` with a cluster bootstrap on the map; cleared share
    and the two loss fractions are reported beside it, never optimised on their own.

    Validation maps are drawn fresh for every node, so two nodes' absolute means differ
    by map luck as much as by merit (first child, 18 Sep 2026: +0.14 apart on their own
    validation maps, +0.007 on the twenty battles both fought). A child is therefore
    judged against its lineage root ON THE SAME BATTLES: ``lineage`` carries the root's
    rows on this node's draws and the root's own mean (the anchor). The node's value is
    anchor + lower bound of the paired delta, which keeps lineages comparable with each
    other. A root has no delta and is valued at its own mean."""
    out = {}
    for set_name in obj['reported_sets']:
        done = [r for r in rows_by_set.get(set_name, []) if r.get('status') == 'complete' and r['metrics'].get('attack_score') is not None]
        summary = _summarize([(cluster_key(r), r['metrics']['attack_score']) for r in done])
        layouts = {}
        for r in done:
            layouts.setdefault(r['defence']['layout'], []).append(r['metrics']['attack_score'])
        out[set_name] = dict(attack_score=summary, mean=summary['mean'] if summary['count'] else None,
                             lower=summary['ci95'][0] if summary['count'] else None,
                             cleared_share=sum(r['metrics']['attack_cleared'] for r in done)/len(done) if done else None,
                             defender_loss=sum(r['metrics']['casualty_ember'] for r in done)/len(done) if done else None,
                             attacker_loss=sum(r['metrics']['casualty_azure'] for r in done)/len(done) if done else None,
                             by_layout={k: sum(v)/len(v) for k, v in sorted(layouts.items())})
        if lineage and lineage.get('root_rows', {}).get(set_name):
            samples, unpaired = _paired(done, lineage['root_rows'][set_name], _metric('attack_score'))
            paired = _summarize(samples)
            paired.update(unpaired=unpaired, better=sum(1 for _, d in samples if d > 0.01), worse=sum(1 for _, d in samples if d < -0.01))
            out[set_name]['paired_vs_root'] = paired
    ranking = out.get(obj['ranking_set'], {})
    value = ranking.get('mean')
    if lineage:
        paired = ranking.get('paired_vs_root')
        value = lineage['anchor'] + paired['ci95'][0] if paired and paired['count'] and lineage.get('anchor') is not None else None
    return dict(kind='attack', sets=out, ranking_set=obj['ranking_set'], value=value,
                anchor=lineage.get('anchor') if lineage else None, root=lineage.get('root') if lineage else None)


def evaluate_objective(spec, rows_by_set, baseline_rows, lineage=None):
    obj = spec['objective']
    if obj.get('kind') == 'attack':
        return evaluate_attack_objective(obj, rows_by_set, lineage)
    exch = log_exchange(obj['exchange_clip_log2'])
    out = {}
    for set_name in obj['reported_sets']:
        cand = rows_by_set.get(set_name, [])
        per_base = {}
        for b in obj['baselines']:
            base = baseline_rows.get(b, {}).get(set_name, [])
            res, _ = _paired(cand, base, attacker_result)
            ex, _ = _paired(cand, base, exch)
            rs, es = _summarize(res), _summarize(ex)
            value = lower = None
            if rs['count'] and es['count']:
                value = obj['result_weight']*rs['mean'] + obj['exchange_weight']*es['mean']
                lower = obj['result_weight']*rs['ci95'][0] + obj['exchange_weight']*es['ci95'][0]
            per_base[b] = dict(result=rs, log_exchange=es, value=value, lower=lower)
        values = [p['value'] for p in per_base.values() if p['value'] is not None]
        lowers = [p['lower'] for p in per_base.values() if p['lower'] is not None]
        raw = {b: _summarize([(cluster_key(r), attacker_result(r)) for r in cand if r.get('status') == 'complete' and attacker_result(r) is not None])
               for b in ['candidate']}
        out[set_name] = dict(baselines=per_base, mean=sum(values)/len(values) if values else None,
                             lower=sum(lowers)/len(lowers) if lowers else None, attacker_result=raw['candidate'])
    ranking = out.get(obj['ranking_set'], {})
    return dict(sets=out, ranking_set=obj['ranking_set'], value=ranking.get('lower'))


def information(spec, rows_by_set, baseline_rows):
    """Reported, never optimised: squad-only reference, remaining strength, casualties."""
    info = {}
    for b in spec.get('information', []):
        for set_name in spec['objective']['reported_sets']:
            base = baseline_rows.get(b, {}).get(set_name, [])
            res, _ = _paired(rows_by_set.get(set_name, []), base, attacker_result)
            info[f'{b}:{set_name}:attacker_result_delta'] = _summarize(res)
    for set_name, rows in rows_by_set.items():
        done = [r for r in rows if r.get('status') == 'complete']
        if not done:
            continue
        info[f'{set_name}:mean_shots'] = sum(r['metrics']['shots'] for r in done)/len(done)
        info[f'{set_name}:casualty_fractions'] = [
            sum(r['metrics']['casualty_azure'] for r in done)/len(done),
            sum(r['metrics']['casualty_ember'] for r in done)/len(done)]
        info[f'{set_name}:nearest_m_mean'] = sum(r['metrics']['nearest_m'] for r in done if r['metrics'].get('nearest_m') is not None)/max(1, len(done))
    return info


def score(spec, rows_by_set, baseline_rows, external, diff_lines=None, lineage=None):
    guards = evaluate_guards(spec, rows_by_set, baseline_rows, external)
    passed = all(g['passed'] for g in guards.values())
    objective = evaluate_objective(spec, rows_by_set, baseline_rows, lineage)
    return dict(score_version=spec['version'], guards_pass=passed, guards=guards, objective=objective,
                value=objective['value'] if passed else None, tie_break=dict(diff_lines=diff_lines),
                information=information(spec, rows_by_set, baseline_rows))


def rank_key(node_score):
    """Sort key: guard-passing nodes by descending objective, then smaller diffs."""
    v = node_score.get('value')
    if v is None:
        return (1, 0, 0)
    return (0, -v, node_score.get('tie_break', {}).get('diff_lines') or 0)
