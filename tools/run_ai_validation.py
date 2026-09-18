#!/usr/bin/env python3
"""Evaluate the separately frozen, previously unopened reliability cohort."""
import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path
from evaluate_routes import evaluate_routes

ROOT = Path(__file__).resolve().parent.parent
FROZEN_MANIFEST = '90cd99ed36212421f526cf27080dc4ebd23bbc34a1ee3b2d743d61e29ce72deb'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', default='.local/lab/battle-lab')
    parser.add_argument('--development-results', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    raw = (ROOT / 'tests/ai_validation_v2.json').read_bytes()
    if hashlib.sha256(raw).hexdigest() != FROZEN_MANIFEST:
        parser.error('The pre-change validation manifest changed.')
    frozen = json.loads(raw)
    evaluator = hashlib.sha256((ROOT / 'tools/evaluate_routes.py').read_bytes()).hexdigest()
    if evaluator != frozen['evaluator_sha256']:
        parser.error('The strict evaluator changed.')
    build = subprocess.check_output([args.binary, '--version'], text=True).strip()
    development = json.loads(args.development_results.read_text())
    if (development['build'] != build or development['held_out'] or
            len(development['cases']) != 9 or not all(c['passed'] for c in development['cases'])):
        parser.error('The original matrix must be 9/9 on this exact build.')
    args.out.mkdir(parents=True, exist_ok=True)
    target = args.out / 'validation.json'
    if target.exists():
        parser.error('Preserve previous validation evidence; use a new output directory.')
    output = str(args.out)
    if sys.platform == 'linux' and Path(args.binary).suffix.lower() == '.exe':
        output = subprocess.check_output(['wslpath', '-w', str(args.out.resolve())], text=True).strip()
    result = dict(build=build, manifest_sha256=FROZEN_MANIFEST,
                  evaluator_sha256=evaluator, seconds=frozen['seconds'], cases=[], passed=False)
    for layout in frozen['layouts']:
        for seed in frozen['validation_seeds']:
            subprocess.run([args.binary, '--cognition', '--encounter', str(layout),
                            '--seed', str(seed), '--seconds', str(frozen['seconds']),
                            '--evaluate', '--out', output], check=True)
            result['cases'].append(evaluate_routes(args.out / 'latest.json'))
            target.write_text(json.dumps(result, indent=2) + '\n')
    result['per_layout'] = {str(layout): sum(c['passed'] for c in result['cases'] if c['encounter'] == layout)
                            for layout in frozen['layouts']}
    result['passed'] = all(count >= frozen['required_per_layout'] for count in result['per_layout'].values())
    target.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({key: result[key] for key in ('build', 'per_layout', 'passed')}))
    return 0 if result['passed'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
