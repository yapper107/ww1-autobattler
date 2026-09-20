"""Shared, offline-only readers for plan 014's schema-1 baseline metrics."""
import json
import math
from pathlib import Path


try:  # three to four times faster than the standard parser; identical values (checked 19 Sep 2026)
    import orjson as _fast
except ImportError:  # the metrics do not depend on it
    _fast = None
_PARSED = {}  # the last evaluation export only: family_metrics walks it eleven times a battle


def rows(path):
    """Rows of a .jsonl export. The per-frame evaluation export (up to 200 MB) is parsed once per
    process and reused; callers only read it. Everything else streams."""
    path = Path(path)
    loads = _fast.loads if _fast else json.loads
    if path.name == 'evaluation.jsonl':
        stat = path.stat()
        key = (str(path), stat.st_mtime_ns, stat.st_size)
        if key not in _PARSED:
            _PARSED.clear()
            with path.open('rb') as stream:
                _PARSED[key] = [loads(line) for line in stream if line.strip()]
        yield from _PARSED[key]
        return
    with path.open('rb') as stream:
        for line in stream:
            if line.strip():
                yield loads(line)


def discover_runs(inputs):
    """Accept runs, latest pointers, or collections; never silently select latest."""
    found = set()
    for value in inputs:
        path = Path(value).resolve()
        if path.name == 'latest.json':
            path = path.parent / json.loads(path.read_text())['run']
        if (path / 'manifest.json').is_file():
            found.add(path)
        elif path.is_dir():
            found.update(p.parent for p in path.rglob('manifest.json'))
        else:
            raise ValueError(f'Not a run or collection: {path}')
    if not found:
        raise ValueError('No battle manifests found')
    return sorted(found)


def frames(root):
    yield from rows(Path(root) / 'evaluation.jsonl')


def intervals(root):
    previous = None
    for frame in frames(root):
        if previous is not None:
            dt = frame['time'] - previous['time']
            if dt <= 0:
                raise ValueError('Evaluation times must strictly increase')
            yield previous, frame, dt
        previous = frame


def identity(s):
    # Schema 1's fixed roster: 8 soldiers/squad, 4 squads/team. Schema 2
    # must supply both identities explicitly; do not infer generated armies.
    sid = s['id']
    if 'squad' in s and 'team' in s:
        return s['team'], s['squad']
    if not isinstance(sid, int) or not 0 <= sid < 64:
        raise ValueError(f'Cannot infer schema-1 roster identity for {sid}')
    return sid // 32, sid // 8


def horizontal(a, b):
    return math.hypot(a[0] - b[0], a[1] - b[1])


def weighted_quantile(samples, fraction):
    """Inverse empirical CDF, including exact boundary at cumulative weight."""
    if not samples:
        return None
    ordered = sorted(samples)
    target = fraction * math.fsum(weight for _, weight in ordered)
    total = 0.0
    for value, weight in ordered:
        total += weight
        if total >= target:
            return value
    return ordered[-1][0]


def distribution(samples, threshold=None):
    weight = math.fsum(w for _, w in samples)
    result = dict(samples=len(samples), weight_seconds=weight,
                  mean=math.fsum(v*w for v, w in samples)/weight if weight else None,
                  p10=weighted_quantile(samples, .1),
                  median=weighted_quantile(samples, .5),
                  p90=weighted_quantile(samples, .9))
    if threshold is not None:
        result['share_below'] = (math.fsum(w for v, w in samples if v < threshold)/weight
                                 if weight else None)
        result['threshold'] = threshold
    return result


def metadata(root):
    manifest = json.loads((Path(root) / 'manifest.json').read_text())
    result = {key: manifest.get(key) for key in
              ('build', 'seed', 'terrain', 'encounter', 'duration', 'gameplay_digest')}
    result.update(run=str(root), controller='candidate90' if manifest.get('cognition_policy')
                  and str(manifest['build']).startswith('d0e577abab5319b6') else
                  'cognition' if manifest.get('cognition_policy') else 'legacy')
    return result, manifest


def write_report(report, out):
    value = json.dumps(report, indent=2, allow_nan=False) + '\n'
    if out:
        Path(out).parent.mkdir(parents=True, exist_ok=True)
        Path(out).write_text(value)
    else:
        print(value, end='')
