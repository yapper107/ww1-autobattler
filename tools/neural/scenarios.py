"""Active Legacy opponents on independently assigned procedural maps (city by default; village and
city2 when asked for)."""
from tools.loop import maps


def map_file(seed, family='city'):
    """The cached map of ``family`` for ``seed``. A city is ensured exactly as before plan 029 (the
    default town-and-trench generation); another family is generated on its own, only when asked."""
    if family == 'city':
        return maps.ensure(seed)['city']
    if family not in maps.KINDS:
        raise ValueError(f'unknown map family {family}; choose from {maps.KINDS}')
    return maps.ensure(seed, (family,))[family]


# Map families an active-Legacy run may be fought on (--family of run, video, authority, ppo, evaluate).
FAMILIES = ('city', 'village', 'city2')


def active_legacy_specs(split, map_seeds, battle_seeds=(107, 108, 109), seconds=360, family='city'):
    result = []
    for seed in map_seeds:
        path = map_file(seed, family)
        for fight in battle_seeds:
            result.append(dict(set=split, family=family, gen_seed=seed, seed=fight,
                               map=str(path), seconds=seconds))
    return result


def ordinary_result(row):
    """Descriptive primary outcome; never reuse the static-defence objective."""
    metrics = row['metrics']
    return float(metrics['win_azure']) - float(metrics['win_ember'])
