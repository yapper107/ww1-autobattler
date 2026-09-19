"""Run battles against a battle-lab binary and turn each run into one metric row.

Rows reuse ``family_metrics.evaluate`` (spatial, outcome, command and drill
metrics), ``order_metrics.evaluate`` (soldier orders per minute per side) and the
shots export (firing squads per side). Traces are off unless asked for.
"""
from __future__ import annotations
import gzip, json, os, shutil, subprocess, time
from concurrent.futures import ProcessPoolExecutor, as_completed
from multiprocessing import get_context
from pathlib import Path

from tools.loop import config
from tools.loop.config import CONTROLLER_FLAG, SECONDS, spec_key

# Measured 18 Sep 2026: 3.1 GB peak for a 360 s town battle without traces, either controller.
BYTES_PER_AUTHORED_JOB = 3.5*(1 << 30)


def default_jobs(requested=None, authored=True):
    cpu = os.cpu_count() or 2
    try:
        avail = os.sysconf('SC_AVPHYS_PAGES')*os.sysconf('SC_PAGE_SIZE')
    except (ValueError, OSError):
        avail = 8*(1 << 30)
    per = BYTES_PER_AUTHORED_JOB if authored else 1.5*(1 << 30)
    cap = max(1, min(cpu - 2, int(avail//per)))
    return max(1, min(requested, cap)) if requested else cap


def battle_command(binary, controller, spec, seconds=SECONDS, trace=False, out=None):
    seconds = spec.get('seconds', seconds)  # a scenario may carry its own time limit
    cmd = [str(binary), CONTROLLER_FLAG[controller]]
    if 'map' in spec:
        cmd += ['--map', str(spec['map'])]
    elif 'family' in spec:
        cmd += ['--generated', spec['family'], '--gen-seed', str(spec['gen_seed'])]
    else:
        cmd += ['--terrain', str(spec['terrain'])]
    if spec.get('defence'):
        d = spec['defence']
        cmd += ['--static-defence', d['layout'], '--defenders', str(d['defenders']), '--defence-seed', str(d['seed'])]
    cmd += ['--seed', str(spec['seed']), '--seconds', str(seconds), '--evaluate', '--out', str(out)]
    if not trace:
        cmd.append('--no-trace')
    return cmd


ATTACKER_LOSS_WEIGHT = 0.5


def attack_metrics(metrics: dict) -> dict:
    """Plan 018 attack outcome: defenders put out of action, less half the attacker's own loss.

    Continuous on purpose: a battle that clears nothing still says how far it got.
    Azure attacks; casualty fractions are of the soldiers active at frame 0."""
    defender, attacker = metrics.get('casualty_ember'), metrics.get('casualty_azure')
    if defender is None or attacker is None:
        return dict(attack_score=None, attack_cleared=None)
    return dict(attack_score=defender - ATTACKER_LOSS_WEIGHT*attacker, attack_cleared=int(bool(metrics.get('win_azure'))))


def compress_exports(run: Path):
    """The per-frame evaluation export is nine tenths of a node's size and plain text.
    It is kept, compressed, so a metric added from a later verdict can still be computed."""
    source = run/'evaluation.jsonl'
    if source.exists() and source.stat().st_size:
        with source.open('rb') as raw, gzip.open(run/'evaluation.jsonl.gz', 'wb', compresslevel=1) as packed:
            shutil.copyfileobj(raw, packed, 1 << 20)
        source.unlink()


def firing_squads(run: Path):
    """Number of squads per side that fired at least once."""
    seen = set()
    with (run/'shots.jsonl').open() as stream:
        for line in stream:
            if not line.strip():
                continue
            shot = json.loads(line)
            seen.add((shot['team'], shot['squad']))
    return [sum(1 for t, _ in seen if t == side) for side in (0, 1)]


def run_battle(binary, controller, spec, out, seconds=SECONDS, trace=False):
    import family_metrics, order_metrics
    out = Path(out)
    out.mkdir(parents=True, exist_ok=True)
    cmd = battle_command(binary, controller, spec, seconds, trace, out)
    row = dict(spec, controller=controller, command=cmd, status='failed')
    started = time.monotonic()
    proc = subprocess.run(cmd, capture_output=True, text=True)
    row['wall_seconds'] = time.monotonic() - started
    if proc.returncode != 0:
        row['error'] = (proc.stderr or proc.stdout)[-2000:]
        return row
    try:
        run = out/json.loads((out/'latest.json').read_text())['run']
        manifest = json.loads((run/'manifest.json').read_text())
        if 'map' in spec:
            if not manifest.get('battlefield_digest') or manifest['seed'] != spec['seed']:
                raise ValueError('Binary returned another battle')
            row['battlefield_digest'] = manifest['battlefield_digest']
            if spec.get('defence'):
                got, want = manifest.get('static_defence') or {}, spec['defence']
                if any(got.get(k) != want[k] for k in ('layout', 'defenders', 'seed')):
                    raise ValueError('Binary returned another defence')
        elif 'family' in spec:
            if manifest.get('scenario_family') != spec['family'] or manifest.get('gen_seed') != spec['gen_seed'] or manifest['seed'] != spec['seed']:
                raise ValueError('Binary returned another scenario')
        elif manifest['terrain'] != spec['terrain'] or manifest['seed'] != spec['seed']:
            raise ValueError('Binary returned another battle')
        evaluated = family_metrics.evaluate(run)
        orders = order_metrics.evaluate(run)
        metrics = dict(evaluated['metrics'])
        metrics['orders_azure_per_minute'], metrics['orders_ember_per_minute'] = orders['orders_per_minute']
        if spec.get('defence'):
            metrics.update(attack_metrics(metrics))
        row.update(status='complete', run=str(run), build=manifest['build'], metrics=metrics,
                   unavailable=evaluated['unavailable'], firing_squads=firing_squads(run),
                   survivors=evaluated['survivors'], initial_actives=evaluated['initial_actives'],
                   digest=evaluated['digest'], scenario_digest=evaluated['scenario_digest'])
        if not trace:
            compress_exports(run)
    except Exception as exc:  # recorded, never hidden
        row['error'] = f'{type(exc).__name__}: {exc}'
    return row


def _job(args):
    return run_battle(*args)


def run_specs(binary, controller, specs, out_root, jobs=None, seconds=SECONDS, trace=False, progress=None):
    """Run every spec in parallel; returns rows in spec order."""
    out_root = Path(out_root)
    authored = any('family' not in s or 'map' in s for s in specs)  # full-size battles: 3 GB each
    jobs = default_jobs(jobs, authored)
    tasks = [(str(binary), controller, spec, out_root/spec['set']/controller/spec_key(spec), seconds, trace) for spec in specs]
    rows = [None]*len(tasks)
    with ProcessPoolExecutor(max_workers=jobs, mp_context=get_context('spawn')) as pool:
        futures = {pool.submit(_job, task): i for i, task in enumerate(tasks)}
        for future in as_completed(futures):
            i = futures[future]
            rows[i] = future.result()
            if progress:
                progress(rows[i])
    return rows
