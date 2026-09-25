"""Cached sparring-partner rows.

Baseline battles are deterministic, so each (baseline, scenario, seconds) row is
run once and reused by every candidate. Legacy and candidate90 run on the candidate
binary because their digests are build-invariant; the parity guard in ``score``
checks that on every candidate with spot battles before the cache is trusted.
"""
from __future__ import annotations
import json
from pathlib import Path

from tools.loop import config
from tools.loop.config import BASELINE_ROOT, BASELINES, SECONDS, flags_key, spec_key
from tools.loop.runner import run_specs


# Plan 018: sparring rows belong to an epoch, the source fingerprint of the lineage
# root. A human change to shared code starts a new root and therefore a new cache.
_EPOCH = 'unversioned'


def set_epoch(fingerprint: str):
    global _EPOCH
    _EPOCH = fingerprint.split('-')[0]


def _cache_path(name, spec, seconds):
    # The family flags are part of the cache identity: a row fought without them never stands in for one with them.
    return BASELINE_ROOT/_EPOCH/name/spec['set']/f"{spec_key(spec)}{flags_key(spec)}-{spec.get('seconds', seconds)}.json"


def cached(name, spec, seconds=SECONDS):
    path = _cache_path(name, spec, seconds)
    if path.exists():
        return json.loads(path.read_text())
    return None


def rows_for(name, specs, candidate_binary, seconds=SECONDS, jobs=None, run_missing=True, progress=None, refresh=False):
    """Rows for baseline ``name`` on ``specs``; missing rows are run and cached."""
    base = BASELINES[name]
    binary = base['binary'] or str(candidate_binary)
    rows, missing = [], []
    for spec in specs:
        row = None if refresh else cached(name, spec, seconds)
        rows.append(row)
        if row is None:
            missing.append(spec)
    if missing and run_missing:
        fresh = run_specs(binary, base['controller'], missing, BASELINE_ROOT/_EPOCH/name/'runs', jobs, seconds, False, progress)
        for spec, row in zip(missing, fresh):
            row['baseline'] = name
            if row['status'] == 'complete':
                path = _cache_path(name, spec, seconds)
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text(json.dumps(row, indent=1) + '\n')
            rows[specs.index(spec)] = row
    return rows


def parity_reference(name, spec, seconds=SECONDS):
    """Digest the cache recorded for a spot-check scenario, or None."""
    row = cached(name, spec, seconds)
    return row.get('digest') if row else None
