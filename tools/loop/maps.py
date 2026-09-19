"""Generated town and trench maps as loop scenarios.

``tools/generate_maps.py`` writes both kinds for a seed in under a second; each
seed's ``.army`` files are cached under ``.local/loop/maps/<seed>/`` and the
battle CLI loads them with ``--map``. Validation seeds hash from the candidate
fingerprint like F1 draws, so no candidate is tuned on a map it has seen.
"""
from __future__ import annotations
import hashlib, json, subprocess
from pathlib import Path

from tools.loop.config import LOOP_ROOT, REPO

MAPS_ROOT = LOOP_ROOT/'maps'
KINDS = ('city', 'trenches')


def map_path(kind: str, seed: int) -> Path:
    return MAPS_ROOT/str(seed)/f'{kind}-{seed}.army'


def ensure(seed: int) -> dict:
    """Generate both kinds for ``seed`` if missing; returns {kind: path}."""
    out = MAPS_ROOT/str(seed)
    paths = {k: map_path(k, seed) for k in KINDS}
    if all(p.exists() for p in paths.values()):
        return paths
    out.mkdir(parents=True, exist_ok=True)
    log = out/'generate.log'
    with log.open('w') as stream:
        code = subprocess.call(['python3', 'tools/generate_maps.py', '--seed', str(seed), '--output', str(out)],
                               cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
    missing = [k for k, p in paths.items() if not p.exists()]
    if code != 0 or missing:
        raise RuntimeError(f'map generation failed for seed {seed}: exit {code}, missing {missing}; see {log}')
    prune_previews(out)
    return paths


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
        paths = ensure(seed)
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
