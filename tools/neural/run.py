"""Collect demonstrations or evaluate a neural model using the existing lean battle lab.

python3 -m tools.neural.run collect --out .local/neural/data
python3 -m tools.neural.run evaluate --model MODEL --out .local/neural/evaluation
"""
from __future__ import annotations
import argparse
from concurrent.futures import ProcessPoolExecutor, as_completed
import hashlib
import json
from multiprocessing import get_context
from pathlib import Path
import subprocess
import time

from tools.loop import config, maps, runner, score
from tools.neural import native


# Regression benchmark sets per map family (evaluate mode). The town sets are the original benchmark;
# the loop's guards (tools/loop/guards.json) are defined on them only.
EVALUATION_SETS = {'city': ['town-attack-dev', 'town-attack-val', 'town-dev', 'trench-dev'],
                   'village': ['village-attack-dev', 'village-attack-val', 'village-dev'],
                   'city2': ['city2-attack-dev', 'city2-attack-val', 'city2-dev']}
ATTACK_SETS = {'city': ('town-attack-dev', 'town-attack-val'), 'village': ('village-attack-dev', 'village-attack-val'),
               'city2': ('city2-attack-dev', 'city2-attack-val')}


def specifications(mode, maps_count, first_seed, validation_key="neural-pilot", opponent="static-defence", family='city'):
    if mode == 'collect':
        # Independent procedural training maps; old development battles are regression evidence.
        if opponent == 'active-legacy':
            from tools.neural.scenarios import active_legacy_specs
            return active_legacy_specs('train', range(first_seed, first_seed + maps_count), family=family)
        return maps.specs('train', family, range(first_seed, first_seed + maps_count), attack=True)
    result = config.scenario_sets(validation_key, wanted=EVALUATION_SETS[family])
    return [s for group in result.values() for s in group]


def job(binary, spec, out, model, candidates, collect, keep, expected_baseline="45da1e25dd1aa9e7"):
    out = Path(out)
    out.mkdir(parents=True, exist_ok=True)
    extra = []
    if model:
        extra += ['--neural-model', model]
    elif candidates:
        extra += ['--policy-candidates', str(candidates)]
    decision_path = out / 'decisions.jsonl'
    if collect:
        extra += ['--record-squad-decisions', str(decision_path)]
    start = time.monotonic()
    row = runner.run_battle(binary, 'legacy', spec, out, trace=False,
                           extra_args=extra, keep_exports=keep)
    row['wall_seconds'] = time.monotonic() - start
    row['variant'] = 'neural' if model else 'teacher' if collect else 'legacy'
    if row['variant']=='legacy' and row['status']=='complete' and row['build'].split('-')[0]!=expected_baseline:
        row.update(status='failed',error='Baseline source identity mismatch')
    if model:
        row['model_sha256'] = hashlib.sha256(Path(model).read_bytes()).hexdigest()
    if collect and decision_path.exists():
        row['decisions_file'] = str(decision_path)
        with decision_path.open() as stream:
            row['decisions'] = sum(1 for _ in stream)
        # Digest and source identity live with the data even when raw exports are pruned.
        (out / 'episode.json').write_text(json.dumps(row, indent=2) + '\n')
    return row


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('mode', choices=['collect', 'evaluate'])
    ap.add_argument('--binary', default=native.BINARY)
    ap.add_argument('--baseline-binary', default='.local/plan024/baseline/battle-lab')
    ap.add_argument('--expected-baseline', default='45da1e25dd1aa9e7')
    ap.add_argument('--out', required=True)
    ap.add_argument('--model')
    ap.add_argument('--candidates', type=int, choices=[0, 30], default=0)
    ap.add_argument('--opponent', choices=['active-legacy', 'static-defence'], default='active-legacy',
                    help='Collection opponent; evaluate retains the original regression benchmark')
    ap.add_argument('--family', choices=sorted(EVALUATION_SETS), default='city',
                    help='Map family: training maps (collect) and regression sets (evaluate); village and city2 need an ARMYMAP 2 binary')
    ap.add_argument('--maps', type=int, default=20)
    ap.add_argument('--first-seed', type=int, default=501)
    ap.add_argument('--jobs', type=int)
    ap.add_argument('--limit', type=int, help='Smoke subset only; cannot establish benchmark acceptance')
    ap.add_argument('--keep-exports', action='store_true', help='For selected video battles only')
    args = ap.parse_args()
    native.checked(args.binary)
    native.huge_pages()
    if args.mode == 'evaluate' and not args.model:
        ap.error('evaluate requires --model')
    if args.maps < 1:
        ap.error('--maps must be positive')
    out = Path(args.out).resolve()
    out.mkdir(parents=True, exist_ok=True)
    validation_key=hashlib.sha256(Path(args.model).read_bytes()).hexdigest() if args.model else 'teacher'
    specs = specifications(args.mode, args.maps, args.first_seed, validation_key, args.opponent, args.family)
    if args.limit:
        specs = specs[:args.limit]
    jobs = runner.default_jobs(args.jobs, seconds=600, lean=True)
    binary = str(Path(args.binary).resolve())
    model = str(Path(args.model).resolve()) if args.model else None
    start = time.monotonic()
    tasks = []
    for spec in specs:
        key = config.spec_key(spec)
        tasks.append((binary, spec, str(out/'candidate'/spec['set']/key), model,
                      args.candidates, args.mode == 'collect', args.keep_exports, args.expected_baseline))
        if args.mode == 'evaluate':
            tasks.append((str(Path(args.baseline_binary).resolve()), spec,
                          str(out/'legacy'/spec['set']/key), None, 0, False, args.keep_exports, args.expected_baseline))
    report = dict(schema=1, mode=args.mode, opponent=args.opponent if args.mode=='collect' else 'mixed-regression', jobs=jobs, lean=True,
                  complete_benchmark=False, expected_baseline=args.expected_baseline,
                  model=model, rows=[])
    if args.family != 'city':
        report['family'] = args.family
    print(f'{len(tasks)} lean battles, {jobs} workers', flush=True)
    with ProcessPoolExecutor(max_workers=jobs, mp_context=get_context('spawn')) as pool:
        futures = [pool.submit(job, *task) for task in tasks]
        for future in as_completed(futures):
            row = future.result()
            report['rows'].append(row)
            report['wall_seconds'] = time.monotonic() - start
            (out/'report.json').write_text(json.dumps(report, indent=2) + '\n')
            print(f"{len(report['rows'])}/{len(tasks)} {row['variant']} {row['set']} "
                  f"{row.get('gen_seed')}:{row['seed']} {row['status']} "
                  f"{row.get('decisions', '')} decisions {row['wall_seconds']:.1f}s", flush=True)
    if args.mode == 'evaluate':
        report['complete_benchmark']=not args.limit and all(row['status']=='complete' for row in report['rows'])
        candidate, base = {}, {}
        for row in report['rows']:
            (candidate if row['variant'] == 'neural' else base).setdefault(row['set'], []).append(row)
        # External code/build/parity checks are reported separately, never invented as passed.
        if args.family == 'city':
            # the town guards are score v7's (score v8 moved the loop's guards to village and city2 sets)
            report['guards'] = score.evaluate_guards(score.load_guards(config.GUARDS_FILE.with_name('guards-v7.json')), candidate, {'legacy': base}, {})
        else:  # the guards name the town sets: on another family they would pass vacuously
            report['guards'] = None
            report['guards_note'] = 'guards are defined on the town sets (tools/loop/guards.json); not evaluated for ' + args.family
        report['paired_attack'] = {group: score._summarize(score._paired(
            candidate.get(group, []), base.get(group, []),
            lambda row: row['metrics'].get('attack_score'))[0])
            for group in ATTACK_SETS[args.family]}
    report['wall_seconds'] = time.monotonic() - start
    (out/'report.json').write_text(json.dumps(report, indent=2) + '\n')
    if any(row['status'] != 'complete' for row in report['rows']):
        raise SystemExit('At least one battle failed; inspect report.json')


if __name__ == '__main__':
    main()
