#!/usr/bin/env python3
"""Replay archived configurations and require identical authoritative digests."""
import argparse
import json
import subprocess
from pathlib import Path

def verify(binary, reference, output):
    reference, output = Path(reference), Path(output)
    output.mkdir(parents=True, exist_ok=True)
    comparisons = []
    for run in json.loads((reference / 'evaluation.json').read_text()):
        manifest = json.loads((reference / run['run'] / 'manifest.json').read_text())
        args = [binary, '--out', str(output), '--seed', str(manifest['seed']),
                '--seconds', str(manifest['duration_limit'])]
        for option, key in [('doctrine', 'doctrine'), ('ember-doctrine', 'ember_doctrine'),
                            ('approach', 'approach'), ('terrain', 'terrain'), ('encounter', 'encounter')]:
            args.extend(['--' + option, str(manifest.get(key, 0))])
        if not manifest['support_weapon']:
            args.append('--no-mg')
        subprocess.run(args, check=True)
        latest = output / json.loads((output / 'latest.json').read_text())['run']
        actual = json.loads((latest / 'manifest.json').read_text())
        comparisons.append(dict(seed=manifest['seed'], reference=manifest['build'],
            candidate=actual['build'], expected=manifest['gameplay_digest'],
            actual=actual['gameplay_digest'], match=manifest['gameplay_digest']==actual['gameplay_digest']))
        (output / 'parity.json').write_text(json.dumps(comparisons, indent=2)+'\n')
    return all(row['match'] for row in comparisons)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', required=True)
    parser.add_argument('--reference', required=True)
    parser.add_argument('--out', required=True)
    args = parser.parse_args()
    raise SystemExit(0 if verify(args.binary, args.reference, args.out) else 1)
