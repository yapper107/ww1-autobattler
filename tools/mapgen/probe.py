"""Python side of the native map probe (plan 029 G-3).

`tools/map_probe.cpp`, built by `scripts/test-mapgen.sh` to `.local/mapgen/tests/map-probe`,
answers geometry queries about one `.army` file through the simulator's own `ClearLine3D`,
`ClearLine3DSolid`, `ProtectedAt`, `Walkable`, `FindPath` and `CoverPositions`. This module
batches queries into one probe process per call. `Probe.find()` returns None when the binary
has not been built, so callers (the agreement suite) can skip instead of failing.

Coordinates are sent with `repr` (shortest round-trip double); the probe reads them as float,
exactly as the simulator would receive them from the importer.
"""
import os
import subprocess
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
DEFAULT_BINARY = REPO / '.local' / 'mapgen' / 'tests' / 'map-probe'
STANCES = ('standing', 'crouched', 'prone')


def _num(v):
    return repr(float(v))


def _pt(p):
    return ' '.join(_num(v) for v in p[:3])


class ProbeError(RuntimeError):
    pass


class Probe:
    """Queries one map file through the native probe."""

    def __init__(self, army_path, binary=None, timeout=600):
        self.path = str(army_path)
        self.binary = str(binary or os.environ.get('ARMY_MAP_PROBE') or DEFAULT_BINARY)
        self.timeout = timeout

    @classmethod
    def find(cls, army_path, binary=None, timeout=600):
        """A Probe for `army_path`, or None when the probe binary is missing."""
        path = Path(binary or os.environ.get('ARMY_MAP_PROBE') or DEFAULT_BINARY)
        if not (path.is_file() and os.access(path, os.X_OK)):
            return None
        return cls(army_path, path, timeout)

    # ------------------------------------------------------------ transport
    def run(self, queries):
        """Send query lines; return the raw answer lines (COVERS contributes N + 1 lines)."""
        text = ''.join(q + '\n' for q in queries) + 'END\n'
        proc = subprocess.run([self.binary, self.path], input=text, capture_output=True, text=True,
                              timeout=self.timeout)
        if proc.returncode:
            raise ProbeError(f'map-probe {self.path}: exit {proc.returncode}: {proc.stderr.strip()}')
        return proc.stdout.splitlines()

    def _bits(self, queries):
        answers = self.run(queries)
        if len(answers) != len(queries):
            raise ProbeError(f'map-probe answered {len(answers)} lines for {len(queries)} queries')
        out = []
        for q, a in zip(queries, answers):
            if a not in ('0', '1'):
                raise ProbeError(f'{q!r} -> {a!r}')
            out.append(a == '1')
        return out

    # ------------------------------------------------------------ queries
    @staticmethod
    def los_query(a, b, solid=False):
        return f"{'SLOS' if solid else 'LOS'} {_pt(a)} {_pt(b)}"

    @staticmethod
    def prot_query(position, threat, stance):
        if stance not in STANCES:
            raise ValueError(f'stance must be one of {STANCES}')
        return f'PROT {_pt(position)} {_pt(threat)} {stance}'

    @staticmethod
    def walk_query(p):
        return f'WALK {_pt(p)}'

    @staticmethod
    def path_query(a, b):
        return f'PATH {_pt(a)} {_pt(b)}'

    def los(self, pairs, solid=False):
        """ClearLine3D (or, solid, ClearLine3DSolid) for each (a, b)."""
        return self._bits([self.los_query(a, b, solid) for a, b in pairs])

    def protected(self, items):
        """ProtectedAt for each (position, threat, stance)."""
        return self._bits([self.prot_query(p, t, s) for p, t, s in items])

    def walkable(self, points):
        return self._bits([self.walk_query(p) for p in points])

    def paths(self, pairs):
        """FindPath for each (a, b): a list of (x, y, z) points, empty when there is no route."""
        queries = [self.path_query(a, b) for a, b in pairs]
        answers = self.run(queries)
        if len(answers) != len(queries):
            raise ProbeError(f'map-probe answered {len(answers)} lines for {len(queries)} queries')
        out = []
        for q, a in zip(queries, answers):
            words = a.split()
            if not words or words[0] == 'ERR':
                raise ProbeError(f'{q!r} -> {a!r}')
            n = int(words[0])
            values = [float(v) for v in words[1:]]
            if len(values) != 3 * n:
                raise ProbeError(f'{q!r} -> malformed route')
            out.append([tuple(values[i:i + 3]) for i in range(0, 3 * n, 3)])
        return out

    def covers(self):
        """The native CoverPositions catalogue, in native order."""
        answers = self.run(['COVERS'])
        n = int(answers[0])
        rows = []
        for line in answers[1:1 + n]:
            w = line.split()
            rows.append(dict(id=int(w[0]), source=int(w[1]),
                             shelter=tuple(float(v) for v in w[2:5]), peek=tuple(float(v) for v in w[5:8]),
                             crouch=w[8] == '1', window=w[9] == '1', prone=w[10] == '1'))
        if len(rows) != n:
            raise ProbeError('truncated COVERS answer')
        return rows

    def info(self):
        w = self.run(['INFO'])[0].split()
        keys = ('kind', 'seed', 'format_version', 'obstacles', 'surfaces', 'links', 'covers', 'buildings',
                'stacked_surfaces', 'has_concealment')
        values = [w[0]] + [int(v) for v in w[1:]]
        return dict(zip(keys, values))
