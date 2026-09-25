"""Validation landmarks only: these are never native/scored objective records."""
import math
import random

MIN_SPACING = 60.0


def candidates(m):
    """Priority bands from actual geometry, with stable ordering before any draw.

    A sunken-lane junction is its upper ramp mouth, where the lane meets the
    surrounding field access. A bend alone is not a road junction.
    """
    square = next(y for y in m['yards'] if y['use'] == 'square')
    farms = sorted((y for y in m['yards'] if y['use'] == 'farmyard'),
                   key=lambda y: (-y['area'], y['id']))

    def yard(y, kind, name):
        return dict(id=y['id'], kind=kind, name=name, position=y['centre'] + [0], yard=y['id'])

    bands = [[yard(square, 'church_square', 'Church square')], [], [], []]
    if farms:
        bands[1].append(yard(farms[0], 'farm_compound', 'Largest farm compound'))
    for road in sorted(m['roads'], key=lambda r: r['id']):
        if road['id'] == 'road-side':
            bands[2].append(dict(id=road['id'], kind='road_junction', name='Side-road junction',
                                 position=road['points'][0] + [0]))
    if len(farms) > 1:
        bands[3].append(yard(farms[1], 'farm_compound', 'Second farm compound'))
    ramps = sorted((link for link in m['links'] if link['kind'] == 'ramp'),
                   key=lambda link: tuple(link['to_position']))
    for link in ramps:
        bands[3].append(dict(id=link['surface'], kind='sunken_lane_junction',
                             name='Sunken-lane junction', position=list(link['to_position'])))
    return [sorted(band, key=lambda o: o['id']) for band in bands]


def select(m, bands=None):
    """Draw 2–4, then discard lower-priority candidates that violate spacing.

    The stream depends only on the seed, never attempt, repairs or global RNG.
    Each priority band contributes at most one landmark. An undersized set makes
    the layout retry; it is never accepted with just the square.
    """
    from .village import Contradiction
    rng = random.Random(f"{m.get('kind','village')}|{m['seed']}|objectives")
    wanted = rng.randint(2, 4)
    chosen = []
    for band in (candidates(m) if bands is None else [sorted(b, key=lambda o: o['id']) for b in bands]):
        rng.shuffle(band)
        for obj in band:
            if all(math.dist(obj['position'][:2], other['position'][:2]) >= MIN_SPACING for other in chosen):
                chosen.append(obj)
                break
        if len(chosen) == wanted:
            break
    if len(chosen) < 2:
        raise Contradiction('fewer than two village landmarks spaced at least 60 m apart')
    return chosen


def check(objectives, errors, primary=('church_square',)):
    if not 2 <= len(objectives) <= 4:
        errors.append('objective count outside 2–4')
    if not objectives or objectives[0]['kind'] not in primary:
        errors.append('objective set must start with the church square')
    if len({o['id'] for o in objectives}) != len(objectives):
        errors.append('duplicate objective landmark')
    for i, obj in enumerate(objectives):
        if any(math.dist(obj['position'][:2], other['position'][:2]) < MIN_SPACING for other in objectives[:i]):
            errors.append(f"objective {obj['id']} spacing < 60 m")
