#!/usr/bin/env python3
"""Compare normal battles against a preserved executable; never relax a mismatch."""
import argparse
import json
import subprocess
from pathlib import Path


def run(binary, output, seed, seconds, legacy=False):
    subprocess.run([str(binary), '--seed', str(seed), '--seconds', str(seconds),
                    '--no-trace', '--out', str(output)]+(['--legacy-ai'] if legacy else []), check=True,
                   stdout=subprocess.DEVNULL)
    directory = output / json.loads((output / 'latest.json').read_text())['run']
    return directory, json.loads((directory / 'manifest.json').read_text())


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--baseline', type=Path, required=True)
    parser.add_argument('--candidate', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--seconds', type=float, default=360)
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    results = []
    for seed in range(100, 110):
        old_path, old = run(args.baseline, args.out / 'baseline', seed, args.seconds)
        new_path, new = run(args.candidate, args.out / 'candidate', seed, args.seconds, legacy=True)
        result = dict(seed=seed, seconds=args.seconds,
                      baseline=str(old_path), candidate=str(new_path),
                      baseline_build=old['build'], candidate_build=new['build'],
                      expected=old['gameplay_digest'], actual=new['gameplay_digest'],
                      match=old['gameplay_digest'] == new['gameplay_digest'])
        results.append(result)
        (args.out / 'parity.json').write_text(json.dumps(results, indent=2) + '\n')
        print(f"seed {seed}: {'MATCH' if result['match'] else 'MISMATCH'}", flush=True)
    return 0 if all(result['match'] for result in results) else 1


if __name__ == '__main__':
    raise SystemExit(main())
