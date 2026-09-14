#!/usr/bin/env python3
"""Measure one recovery change across requested layouts, including regressions.

Unlike the acceptance runner, this investigation runs every requested case even
when layout 5 fails. It never changes the strict evaluator or promotes policy.
"""
import argparse
import hashlib
import json
import subprocess
from pathlib import Path
from evaluate_routes import evaluate_routes
from investigate_engagement import investigate


def run(binary, output, layouts):
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    results = []
    version = subprocess.check_output([binary, '--version'], text=True).strip()
    evaluator = hashlib.sha256(Path(__file__).with_name('evaluate_routes.py').read_bytes()).hexdigest()
    for layout in layouts:
        for seed in (107, 108, 109):
            log = subprocess.check_output([
                binary, '--recovery', '--encounter', str(layout), '--seed', str(seed),
                '--seconds', '360', '--evaluate', '--out', str(output)], text=True)
            result = evaluate_routes(output / 'latest.json')
            directory = Path(result['run'])
            (directory / 'generation.log').write_text(log)
            (directory / 'gates.json').write_text(json.dumps(investigate(directory), indent=2) + '\n')
            results.append(result)
            (output / 'pass.json').write_text(json.dumps(dict(
                schema=1, build=version, evaluator_sha256=evaluator, results=results), indent=2) + '\n')
            print(f"Layout {layout}, seed {seed}: {'PASS' if result['passed'] else 'FAIL'}; "
                  f"{result['completed']} completed routes", flush=True)
    print(f"Strict passes: {sum(r['passed'] for r in results)}/{len(results)}")
    return results


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', default='.local/lab/battle-lab')
    parser.add_argument('--out', required=True)
    parser.add_argument('--layouts', nargs='+', type=int, choices=[5, 6, 7], default=[6, 7])
    args = parser.parse_args()
    if len(args.layouts) != len(set(args.layouts)):
        parser.error('Layouts must be distinct.')
    run(args.binary, args.out, args.layouts)
