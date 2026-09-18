#!/usr/bin/env python3
"""Run the frozen AI gate, and keep held-out evidence separate from development."""
import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path
from evaluate_routes import evaluate_routes


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', default='.local/lab/battle-lab')
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--held-out', action='store_true')
    parser.add_argument('--regression-only', action='store_true',
                        help='Report every frozen case without using its score as a promotion gate (plan 014).')
    parser.add_argument('--development-results', type=Path)
    args = parser.parse_args()
    root = Path(__file__).resolve().parent.parent
    frozen = json.loads((root / 'tests/ai_acceptance.json').read_text())
    evaluator = hashlib.sha256((root / 'tools/evaluate_routes.py').read_bytes()).hexdigest()
    if evaluator != frozen['evaluator_sha256']:
        parser.error('The frozen tactical evaluator changed; acceptance cannot run.')
    build = subprocess.check_output([args.binary, '--version'], text=True).strip()
    if args.held_out:
        if not args.development_results and not args.regression_only:
            parser.error('Held-out evaluation requires a passing development gate for this build.')
        if args.development_results:
            development = json.loads(args.development_results.read_text())
            if (development['build'] != build or development['held_out'] or
                    (not args.regression_only and not development['passed'])):
                parser.error('Development gate must pass on this exact build before held-out evaluation.')
    seeds = frozen['held_out_seeds' if args.held_out else 'development_seeds']
    args.out.mkdir(parents=True, exist_ok=True)
    output_argument = str(args.out)
    if sys.platform == 'linux' and Path(args.binary).suffix.lower() == '.exe':
        output_argument = subprocess.check_output(
            ['wslpath', '-w', str(args.out.resolve())], text=True).strip()
    result = dict(build=build, held_out=args.held_out, regression_only=args.regression_only, seconds=frozen['seconds'],
                  evaluator_sha256=evaluator, passed=False, cases=[])
    target = args.out / 'acceptance.json'
    for layout in frozen['layouts']:
        for seed in seeds:
            subprocess.run([args.binary, '--cognition', '--encounter', str(layout),
                            '--seed', str(seed), '--seconds', str(frozen['seconds']),
                            '--evaluate', '--out', output_argument], check=True)
            result['cases'].append(evaluate_routes(args.out / 'latest.json'))
            target.write_text(json.dumps(result, indent=2) + '\n')
    totals = {str(layout): sum(case['passed'] for case in result['cases'] if case['encounter'] == layout)
              for layout in frozen['layouts']}
    result['per_layout'] = totals
    result['passed'] = (all(n >= frozen['required_held_out_per_layout'] for n in totals.values())
                        if args.held_out else sum(totals.values()) >= frozen['required_original'])
    target.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(dict(build=build, per_layout=totals, passed=result['passed'])))
    return 0 if args.regression_only or result['passed'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
