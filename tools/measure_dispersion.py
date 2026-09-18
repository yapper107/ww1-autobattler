#!/usr/bin/env python3
"""Measure duration-weighted spatial distributions from battle observer exports.

All spatial distances are horizontal. Frames represent [time, next time); the
terminal frame has zero weight. Singletons have radius zero but no nearest mate.
Each living squad contributes one RMS radius per interval. Inter-squad separation
uses one global minimum over same-team centroid pairs per interval. These choices
and denominators are explicit because the Phase 0 specification is ambiguous.
"""
import argparse
import collections
import math
from phase0_metrics import (discover_runs, distribution, horizontal, identity,
                            intervals, metadata, write_report)


def measure(root):
    nearest, radii, separation = [], [], []
    for frame, _, dt in intervals(root):
        groups = collections.defaultdict(list)
        for soldier in frame['soldiers']:
            if soldier['alive']:
                groups[identity(soldier)].append(soldier['position'])
        centres = {}
        for key, points in groups.items():
            centre = [math.fsum(p[i] for p in points)/len(points) for i in (0, 1)]
            centres[key] = centre
            radii.append((math.sqrt(math.fsum(horizontal(p, centre)**2 for p in points)
                                    / len(points)), dt))
            if len(points) > 1:
                nearest.extend((min(horizontal(p, q) for j, q in enumerate(points) if i != j), dt)
                               for i, p in enumerate(points))
        pairs = [horizontal(p, q) for a, p in centres.items() for b, q in centres.items()
                 if a < b and a[0] == b[0]]
        if pairs:
            separation.append((min(pairs), dt))
    result, _ = metadata(root)
    result.update(nearest_squadmate_m=distribution(nearest, 2),
                  squad_rms_radius_m=distribution(radii),
                  minimum_friendly_squad_centroid_m=distribution(separation, 10))
    return result


def summarize(cases):
    """Equal-run summaries; never confuse median-of-run-medians with pooled data."""
    groups = collections.defaultdict(list)
    for case in cases:
        groups[(case['build'], case['controller'], case['terrain'], case['encounter'])].append(case)
    result = []
    for (build, controller, terrain, encounter), group in sorted(groups.items()):
        metrics = {}
        for name, field in [('nearest_squadmate_m', 'median'), ('nearest_squadmate_m', 'share_below'),
                            ('squad_rms_radius_m', 'mean'),
                            ('minimum_friendly_squad_centroid_m', 'median'),
                            ('minimum_friendly_squad_centroid_m', 'share_below')]:
            values = [(c[name][field], 1) for c in group if c[name][field] is not None]
            summary = distribution(values)
            # Unit weights here represent runs, not interval seconds.
            summary.pop('weight_seconds')
            metrics[f'{name}.{field}'] = summary
        result.append(dict(build=build, controller=controller, terrain=terrain,
                           encounter=encounter, runs=len(group), metrics=metrics))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('runs', nargs='+')
    parser.add_argument('--out')
    args = parser.parse_args()
    cases = [measure(root) for root in discover_runs(args.runs)]
    write_report(dict(schema=1, method=__doc__, aggregation='Equal-run summary of per-run metrics',
                      cases=cases, summary=summarize(cases)), args.out)


if __name__ == '__main__':
    main()
