#!/usr/bin/env python3
"""Exercise new-battle defaults and historical manifest reruns through the real CLI."""
import argparse
import json
from pathlib import Path
import subprocess
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', default='.local/lab/battle-lab')
    parser.add_argument('--out', required=True)
    args = parser.parse_args()
    root = Path(args.out)
    root.mkdir(parents=True, exist_ok=True)

    def manifest(directory):
        latest = json.loads((directory / 'latest.json').read_text())['run']
        run = directory / latest
        return run, json.loads((run / 'manifest.json').read_text())

    def run(name, flags):
        directory = root / name
        output = str(directory)
        if sys.platform == 'linux' and Path(args.binary).suffix.lower() == '.exe':
            output = subprocess.check_output(
                ['wslpath', '-w', str(directory.resolve())], text=True).strip()
        subprocess.run([args.binary, '--seed', '108', '--seconds', '2',
                        '--no-trace', '--out', output, *flags], check=True)
        return manifest(directory)

    configurations = [
        ('default', [], (0, 0, 0, 0), 0),
        ('cognition', ['--cognition'], (1, 1, 0, 0), 0),
        ('legacy', ['--legacy-ai'], (0, 0, 0, 0), 0),
        ('generated-legacy', ['--generated', 'F1', '--gen-seed', '7'], (0, 0, 0, 0), 0),
        ('generated-cognition', ['--cognition', '--generated', 'F1', '--gen-seed', '7'], (1, 1, 0, 0), 0),
        ('drills-then-legacy', ['--drills','--legacy-ai'], (0,0,0,0), 0),
        ('drills-then-cognition', ['--drills','--cognition'], (1,1,0,0), 0),
        ('drills', ['--drills'], (0, 1, 0, 1), 0),
        ('generated-drills', ['--drills', '--generated', 'F1', '--gen-seed', '7'], (0, 1, 0, 1), 0),
        ('foundations', ['--foundations', '--encounter', '8'], (0, 1, 0, 0), 8),
        ('recovery', ['--recovery', '--encounter', '5'], (0, 0, 1, 0), 5),
    ]
    results = {}
    for name, flags, expected, encounter in configurations:
        location, data = run(name, flags)
        actual = tuple(data[k] for k in
                       ('cognition_policy', 'foundations_policy', 'recovery_policy', 'drills_policy'))
        assert actual == expected, (name, actual, expected)
        assert data['encounter'] == encounter and data['duration_limit'] == 2
        assert data['scenario_family'] == ('F1' if name.startswith('generated-') else 'none')
        assert data['gen_seed'] == (7 if name.startswith('generated-') else 1)
        results[name] = (location, data)
    assert results['default'][1]['gameplay_digest'] == results['legacy'][1]['gameplay_digest']

    # Removing later policy fields models a pre-cognition legacy manifest.
    old = root / 'old-manifest'
    old.mkdir(exist_ok=True)
    original = dict(results['legacy'][1])
    for key in ('cognition_policy', 'foundations_policy', 'recovery_policy', 'drills_policy'):
        original.pop(key)
    for key in ('scenario_family', 'gen_seed', 'evaluation_schema', 'shots_schema'):original.pop(key, None)
    (old / 'manifest.json').write_text(json.dumps(original))
    for name, source, expected in [
        ('old-rerun', old, results['legacy'][1]),
        ('generated-legacy-rerun', results['generated-legacy'][0], results['generated-legacy'][1]),
        ('generated-cognition-rerun', results['generated-cognition'][0], results['generated-cognition'][1]),
        ('drills-rerun', results['drills'][0], results['drills'][1]),
        ('generated-drills-rerun', results['generated-drills'][0], results['generated-drills'][1]),
        ('cognition-rerun', results['cognition'][0], results['cognition'][1]),
        ('foundations-rerun', results['foundations'][0], results['foundations'][1]),
        ('recovery-rerun', results['recovery'][0], results['recovery'][1]),
    ]:
        directory = root / name
        subprocess.run(['python3', 'tools/rerun_battle.py', str(source),
                        '--binary', args.binary, '--out', str(directory)], check=True)
        _, actual = manifest(directory)
        for key in ('cognition_policy', 'foundations_policy', 'recovery_policy', 'drills_policy',
                    'duration_limit', 'encounter', 'gameplay_digest', 'scenario_family', 'gen_seed', 'evaluation_schema', 'shots_schema'):
            assert actual[key] == expected[key], (name, key)
    print('PASS: default normal-map legacy, explicit historical controllers, '
          'old/new manifest reruns, exact duration and trace parity')


if __name__ == '__main__':
    main()
