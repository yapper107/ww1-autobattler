"""Generated town, trench, village and city2 maps as loop scenarios.

``tools/generate_maps.py`` writes the town and trench kinds for a seed together in
under a second, and a village or a city2 (plan 029, ``--kind village|city2``) only
when one is asked for; each seed's ``.army`` files are cached under
``.local/loop/maps/<seed>/`` and the battle CLI loads them with ``--map``. Validation
seeds hash from the candidate fingerprint like F1 draws, so no candidate is tuned on
a map it has seen.

A village or city2 is cached with the fingerprint of the generator sources that built
it (``<kind>-<seed>.generator``). Those generators are still changing, so a cached map
whose generator differs is refused rather than silently reused or overwritten: the
rows of a node already scored on it carry its battlefield digest, and a set must never
mix maps from two generators.
"""
from __future__ import annotations
import hashlib, json, re, subprocess
from pathlib import Path

from tools.loop.config import LOOP_ROOT, REPO

MAPS_ROOT = LOOP_ROOT/'maps'
TOOLS_MAPGEN = REPO/'tools'/'mapgen'
KINDS = ('city', 'trenches', 'village', 'city2')
# The kinds one default generator call writes together (town and trenches, byte-identical to
# before plan 029); every other kind is generated on its own, only when asked for.
DEFAULT_KINDS = ('city', 'trenches')
# A stamped kind's geometry depends on its root generator modules (tools/mapgen) and on everything
# they import from the package, found by generator_sources() (so a new helper module such as
# village_land.py is included without editing a list); see generator(). Every kind listed here is
# generated on its own and stamped; a cached map without a matching stamp is refused.
GENERATOR_ROOTS = {'village': ('village.py', 'native.py'), 'city2': ('city2.py', 'native.py')}
VILLAGE_ROOTS = GENERATOR_ROOTS['village']
_RELATIVE = re.compile(r'^[ \t]*from[ \t]+\.(\w*)[ \t]+import[ \t]+\(?([\w \t,]+)', re.M)


def map_path(kind: str, seed: int) -> Path:
    return MAPS_ROOT/str(seed)/f'{kind}-{seed}.army'


def generator_sources(kind: str = 'village') -> list:
    """The ``kind`` generator's source files: its roots and every module of tools/mapgen they import,
    at any depth (``from .x import`` and ``from . import x``, also inside functions)."""
    found, queue = set(), list(GENERATOR_ROOTS[kind])
    while queue:
        name = queue.pop()
        if name in found or not (TOOLS_MAPGEN/name).is_file():
            continue
        found.add(name)
        for module, names in _RELATIVE.findall((TOOLS_MAPGEN/name).read_text()):
            targets = [module] if module else [n.strip() for n in names.split(',')]
            queue += [f'{t}.py' for t in targets if t]
    return sorted(found)


def generator(kind: str = 'village') -> str:
    """Fingerprint of the ``kind`` generator sources (not of the renderer or the town generator).
    The village and city2 generators share modules (support.py imports city2 for its streams), so
    their source sets can coincide; each kind is still stamped and checked on its own."""
    digest = hashlib.sha256()
    for name in generator_sources(kind):
        digest.update(name.encode() + b'\0' + (TOOLS_MAPGEN/name).read_bytes() + b'\0')
    return digest.hexdigest()[:16]


def village_sources() -> list:
    return generator_sources('village')


def village_generator() -> str:
    return generator('village')


def _generate(seed: int, out: Path, kind: str | None):
    """One tools/generate_maps.py call: the default pair when ``kind`` is None, else that kind."""
    log = out/('generate.log' if kind is None else f'generate-{kind}.log')
    cmd = ['python3', 'tools/generate_maps.py', '--seed', str(seed), '--output', str(out)]
    if kind is not None:
        cmd += ['--kind', kind]
    with log.open('w') as stream:
        code = subprocess.call(cmd, cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
    return code, log


def ensure(seed: int, kinds=DEFAULT_KINDS) -> dict:
    """Generate the missing ``kinds`` for ``seed``; returns {kind: path} for exactly those kinds.

    The default (town and trenches) behaves as before plan 029: one generator call writes both,
    and no existing caller ever generates a village or a city2."""
    kinds = tuple(kinds)
    unknown = [k for k in kinds if k not in KINDS]
    if unknown or not kinds:
        raise ValueError(f'unknown map kinds {unknown or kinds}; choose from {KINDS}')
    out = MAPS_ROOT/str(seed)
    paths = {k: map_path(k, seed) for k in kinds}
    for kind in kinds:
        if kind in GENERATOR_ROOTS:
            _check_stamp(seed, kind, paths[kind])
    if all(p.exists() for p in paths.values()):
        return paths
    out.mkdir(parents=True, exist_ok=True)
    calls = []
    if any(k in DEFAULT_KINDS and not paths[k].exists() for k in kinds):
        calls.append(None)
    calls += [k for k in kinds if k not in DEFAULT_KINDS and not paths[k].exists()]
    for kind in calls:
        code, log = _generate(seed, out, kind)
        missing = [k for k, p in paths.items() if (k in DEFAULT_KINDS if kind is None else k == kind) and not p.exists()]
        if code != 0 or missing:
            raise RuntimeError(f'map generation failed for seed {seed}: exit {code}, missing {missing}; see {log}')
        if kind in GENERATOR_ROOTS:
            stamp(seed, kind)
    prune_previews(out)
    return paths


def stamp(seed: int, kind: str = 'village'):
    """Record which generator built the cached ``kind`` map of ``seed``."""
    map_path(kind, seed).with_suffix('.generator').write_text(generator(kind) + '\n')


def _check_stamp(seed: int, kind: str, path: Path):
    if not path.exists():
        return
    marker = path.with_suffix('.generator')
    found = marker.read_text().strip() if marker.exists() else 'unrecorded'
    current = generator(kind)
    if found != current:
        raise RuntimeError(f'cached {kind} {path} was built by {kind} generator {found}, the current one is {current}; '
                           f'move that seed\'s {kind}-* files aside to regenerate it (rows already scored on it keep '
                           'its battlefield digest), or restore the generator it was built with')


def prune_previews(out: Path):
    """The loop reads only the .army battlefields; the JSON, SVG and HTML previews are
    thirty times their size and the generator rebuilds them on request."""
    for path in out.iterdir():
        if path.is_file() and path.suffix in ('.json', '.svg', '.html'):
            path.unlink()


def validation_seeds(build: str, salt: str, count: int, low: int = 1000, span: int = 1_000_000):
    """Deterministic map seeds derived from the candidate fingerprint."""
    fingerprint = build.split('-', 1)[0]
    seeds, index = [], 0
    while len(seeds) < count:
        digest = hashlib.sha256(f'{fingerprint}|maps|{salt}|{index}'.encode()).digest()
        seed = low + int.from_bytes(digest[:4], 'big') % span
        if seed not in seeds:
            seeds.append(seed)
        index += 1
    return seeds


def specs(set_name: str, kind: str, seeds, battle_seed: int = 107, attack: bool = False):
    """Battle specs for one kind over map seeds; maps are generated on demand.

    ``attack`` adds a plan 018 static defence: layout by map seed, defence seed = map seed."""
    out = []
    for seed in seeds:
        paths = ensure(seed, (kind,))
        if not attack:
            out.append(dict(set=set_name, family=kind, gen_seed=seed, seed=battle_seed, map=str(paths[kind])))
            continue
        from tools.loop.config import ATTACK_BATTLE_SEEDS, ATTACK_DEFENDERS, ATTACK_LAYOUTS, ATTACK_SECONDS
        for fight in ATTACK_BATTLE_SEEDS:  # same map and defence, three battles
            out.append(dict(set=set_name, family=kind, gen_seed=seed, seed=fight, map=str(paths[kind]), seconds=ATTACK_SECONDS,
                            defence=dict(layout=ATTACK_LAYOUTS[seed % len(ATTACK_LAYOUTS)], defenders=ATTACK_DEFENDERS, seed=seed)))
    return out


def digest_of(path: Path) -> str:
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()[:16]
