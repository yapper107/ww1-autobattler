"""Pure-Python geometry kernel mirroring the native queries (plan 029 G-2).

Python 3.9 syntax, no numpy (Unreal's bundled interpreter runs it). Conventions
follow the simulator: an obstacle is the box min..max; `los` is `ClearLine3D`
(any obstacle, closed slabs); `los(..., concealment=False)` is the solid-only
`ClearLine3DSolid` that bullets, `ProtectedAt` and friendly-fire masking use;
`walkable` is `Walkable` (bounds, layered `Supported`, 0.48 m movement clearance
in the band z+0.02 .. z+1.85); `protected_at` is `ProtectedAt` (six body samples,
3 m local-cover clip, 3D-normalised shoulder offset); `catalogue` ports
`CoverPositions` for imported maps (explicit C records first, then 3 m samples of
every movement-blocking or half-cover face; concealment is never a source).

Layered support is the ARMYMAP 2 contract: a point is supported when any
containing surface is within 0.03 m of it; otherwise grade (|z| < 0.02) supports
it unless a containing surface replaces grade (level <= 0 or a stair).
"""
import math
import struct

BODY = dict(standing=1.85, crouched=0.9, prone=0.35)
CELL = 4.0
MOVE_PAD = 0.48
_INF = float('inf')


def surface_level(s):
    if 'level' in s:
        return s['level']
    return -1 if s['z'] < -.5 else 0


def surface_kind(s):
    if 'kind' in s:
        return s['kind']
    return 0 if s['slope'] == [0, 0] or s['slope'] == (0, 0) else 1


def replaces_grade(s):
    return surface_level(s) <= 0 or surface_kind(s) == 2


class Kernel:
    def __init__(self, m):
        self.m = m
        x, y, w, h = m['bounds']
        self.x0, self.y0, self.x1, self.y1 = x, y, x + w, y + h
        self.nx = int(math.ceil(w / CELL))
        self.ny = int(math.ceil(h / CELL))
        self.solids = []
        self.cells = [[] for _ in range(self.nx * self.ny)]
        self.lo = []      # (x0, y0, z0)
        self.hi = []      # (x1, y1, z1)
        self.move = []
        self.conceal = []
        self.stamp = []
        self._stamp = 0
        for s in m['solids']:
            self.add_solid(s)
        self.surfaces = list(m['surfaces'])
        self.sw = int(math.ceil(w / 8)) + 1
        self.sh = int(math.ceil(h / 8)) + 1
        self.bins = [[] for _ in range(self.sw * self.sh)]
        for k, s in enumerate(self.surfaces):
            rx, ry, rw, rh = s['rect']
            for j in range(self._sy(ry - .001), self._sy(ry + rh + .001) + 1):
                for i in range(self._sx(rx - .001), self._sx(rx + rw + .001) + 1):
                    self.bins[j * self.sw + i].append(k)
        self.surface_data = []
        for s in self.surfaces:
            rx, ry, rw, rh = s['rect']
            self.surface_data.append((rx + rw / 2, ry + rh / 2, rw / 2, rh / 2, s['z'], s['slope'][0],
                                      s['slope'][1], replaces_grade(s)))

    # ------------------------------------------------------------ indexing
    def add_solid(self, s):
        k = len(self.solids)
        self.solids.append(s)
        a, b = s['min'], s['max']
        self.lo.append((a[0], a[1], a[2]))
        self.hi.append((b[0], b[1], b[2]))
        self.move.append(bool(s['blocks_movement']))
        self.conceal.append(bool(s.get('flags', 0) & 1))
        self.stamp.append(0)
        for j in range(self._cy(a[1]), self._cy(b[1]) + 1):
            row = j * self.nx
            for i in range(self._cx(a[0]), self._cx(b[0]) + 1):
                self.cells[row + i].append(k)
        return k

    def _cx(self, x):
        return min(self.nx - 1, max(0, int((x - self.x0) // CELL)))

    def _cy(self, y):
        return min(self.ny - 1, max(0, int((y - self.y0) // CELL)))

    def _sx(self, x):
        return min(self.sw - 1, max(0, int(math.floor((x - self.x0) / 8))))

    def _sy(self, y):
        return min(self.sh - 1, max(0, int(math.floor((y - self.y0) / 8))))

    # ------------------------------------------------------------ support
    def supported(self, p):
        px, py, pz = p[0], p[1], p[2]
        grade_ok = True
        for k in self.bins[self._sy(py) * self.sw + self._sx(px)]:
            cx, cy, hx, hy, z, sx, sy, rep = self.surface_data[k]
            if abs(px - cx) <= hx + .001 and abs(py - cy) <= hy + .001:
                if abs(pz - (z + (px - cx) * sx + (py - cy) * sy)) < .03:
                    return True
                if rep:
                    grade_ok = False
        return grade_ok and abs(pz) < .02

    def blocked(self, p, pad=MOVE_PAD):
        """A movement-blocking solid within `pad` (xy) in the body band at p.z."""
        px, py, pz = p[0], p[1], p[2]
        top, bottom = pz + 1.84, pz + .02
        lo, hi, move = self.lo, self.hi, self.move
        seen = None
        i0, i1 = self._cx(px - pad), self._cx(px + pad)
        j0, j1 = self._cy(py - pad), self._cy(py + pad)
        multi = i0 != i1 or j0 != j1
        for j in range(j0, j1 + 1):
            for i in range(i0, i1 + 1):
                for k in self.cells[j * self.nx + i]:
                    if not move[k]:
                        continue
                    if multi:
                        if seen is None:
                            seen = set()
                        if k in seen:
                            continue
                        seen.add(k)
                    a, b = lo[k], hi[k]
                    if a[2] < top and b[2] > bottom and a[0] - pad <= px <= b[0] + pad and a[1] - pad <= py <= b[1] + pad:
                        return True
        return False

    def walkable(self, p):
        if not (self.x0 + .6 <= p[0] <= self.x1 - .6 and self.y0 + .6 <= p[1] <= self.y1 - .6):
            return False
        return self.supported(p) and not self.blocked(p)

    def clear_line(self, a, b, pad=MOVE_PAD):
        """Native movement ClearLine: padded 2D sweep in the body band plus floor samples."""
        padding = pad   # native SegmentBox pads obstacles by exactly the movement pad
        top = max(a[2], b[2]) + 1.84
        bottom = min(a[2], b[2]) + .02
        dx, dy = b[0] - a[0], b[1] - a[1]
        lo, hi, move = self.lo, self.hi, self.move
        seen = set()
        for j in range(self._cy(min(a[1], b[1]) - padding), self._cy(max(a[1], b[1]) + padding) + 1):
            for i in range(self._cx(min(a[0], b[0]) - padding), self._cx(max(a[0], b[0]) + padding) + 1):
                for k in self.cells[j * self.nx + i]:
                    if not move[k] or k in seen:
                        continue
                    seen.add(k)
                    l, h = lo[k], hi[k]
                    if not (l[2] < top and h[2] > bottom):
                        continue
                    t0, t1 = 0.0, 1.0
                    ok = True
                    for p0, d, c0, c1 in ((a[0], dx, l[0] - padding, h[0] + padding),
                                          (a[1], dy, l[1] - padding, h[1] + padding)):
                        if abs(d) < 1e-7:
                            if p0 < c0 or p0 > c1:
                                ok = False
                                break
                        else:
                            u, v = (c0 - p0) / d, (c1 - p0) / d
                            if u > v:
                                u, v = v, u
                            t0, t1 = max(t0, u), min(t1, v)
                            if t0 > t1:
                                ok = False
                                break
                    if ok:
                        return False
        length = math.sqrt(dx * dx + dy * dy + (b[2] - a[2]) ** 2)
        steps = max(1, int(math.ceil(length / .4)))
        for n in range(steps + 1):
            t = n / steps
            if not self.supported((a[0] + dx * t, a[1] + dy * t, a[2] + (b[2] - a[2]) * t)):
                return False
        return True

    # ------------------------------------------------------------ rays
    def los(self, a, b, concealment=True):
        """True when no obstacle (or, solid-only, no non-concealment obstacle) is hit."""
        return self.first_hit(a, b, concealment) is None

    def first_hit(self, a, b, concealment=True):
        ax, ay, az = a[0], a[1], a[2]
        dx, dy, dz = b[0] - ax, b[1] - ay, b[2] - az
        # Clip the xy segment to the map rectangle (no solid lies outside it).
        t0, t1 = 0.0, 1.0
        for p0, d, lo_, hi_ in ((ax, dx, self.x0, self.x1), (ay, dy, self.y0, self.y1)):
            if abs(d) < 1e-12:
                if p0 < lo_ or p0 > hi_:
                    return None
            else:
                u, v = (lo_ - p0) / d, (hi_ - p0) / d
                if u > v:
                    u, v = v, u
                t0, t1 = max(t0, u), min(t1, v)
                if t0 > t1:
                    return None
        self._stamp += 1
        stamp, marks = self._stamp, self.stamp
        lo, hi, conceal, cells, nx = self.lo, self.hi, self.conceal, self.cells, self.nx
        sx, sy = ax + dx * t0, ay + dy * t0
        i, j = self._cx(sx), self._cy(sy)
        ei, ej = self._cx(ax + dx * t1), self._cy(ay + dy * t1)
        stepx = 1 if dx > 0 else -1
        stepy = 1 if dy > 0 else -1
        if abs(dx) > 1e-12:
            nxt = self.x0 + (i + (1 if dx > 0 else 0)) * CELL
            tmx, tdx = (nxt - ax) / dx, CELL / abs(dx)
        else:
            tmx, tdx = _INF, _INF
        if abs(dy) > 1e-12:
            nyt = self.y0 + (j + (1 if dy > 0 else 0)) * CELL
            tmy, tdy = (nyt - ay) / dy, CELL / abs(dy)
        else:
            tmy, tdy = _INF, _INF
        flatx, flaty, flatz = abs(dx) < 1e-7, abs(dy) < 1e-7, abs(dz) < 1e-7
        zmin, zmax = min(az, az + dz), max(az, az + dz)
        guard = self.nx + self.ny + 4
        while guard:
            guard -= 1
            for k in cells[j * nx + i]:
                if marks[k] == stamp:
                    continue
                marks[k] = stamp
                if not concealment and conceal[k]:
                    continue
                l, h = lo[k], hi[k]
                if zmax < l[2] or zmin > h[2]:
                    continue
                lo_t, hi_t = 0.0, 1.0
                if flatx:
                    if ax < l[0] or ax > h[0]:
                        continue
                else:
                    u, v = (l[0] - ax) / dx, (h[0] - ax) / dx
                    if u > v:
                        u, v = v, u
                    lo_t, hi_t = max(lo_t, u), min(hi_t, v)
                    if lo_t > hi_t:
                        continue
                if flaty:
                    if ay < l[1] or ay > h[1]:
                        continue
                else:
                    u, v = (l[1] - ay) / dy, (h[1] - ay) / dy
                    if u > v:
                        u, v = v, u
                    lo_t, hi_t = max(lo_t, u), min(hi_t, v)
                    if lo_t > hi_t:
                        continue
                if flatz:
                    if az < l[2] or az > h[2]:
                        continue
                else:
                    u, v = (l[2] - az) / dz, (h[2] - az) / dz
                    if u > v:
                        u, v = v, u
                    lo_t, hi_t = max(lo_t, u), min(hi_t, v)
                    if lo_t > hi_t:
                        continue
                return k
            if i == ei and j == ej:
                break
            if tmx < tmy:
                if tmx > t1:
                    break
                i += stepx
                tmx += tdx
            else:
                if tmy > t1:
                    break
                j += stepy
                tmy += tdy
            if not (0 <= i < self.nx and 0 <= j < self.ny):
                break
        return None

    # ------------------------------------------------------------ protection
    def protected_at(self, position, threat, stance='crouched', solid_only=True):
        """Native ProtectedAt with solid-only rays (concealment never protects). `solid_only`
        False reproduces the pre-F-C native test, whose sight rays count concealment."""
        body = BODY[stance]
        dx, dy, dz = position[0] - threat[0], position[1] - threat[1], position[2] - threat[2]
        n = math.sqrt(dx * dx + dy * dy + dz * dz)
        if n > .0001:
            dx, dy = dx / n, dy / n
        else:
            dx, dy = 1.0, 0.0
        sx, sy = -dy, dx
        eye = (threat[0], threat[1], threat[2] + 1.7)
        for offset in (-.4, 0.0, .4):
            for fraction in (.5, .96):
                b = (position[0] + sx * offset, position[1] + sy * offset, position[2] + body * fraction)
                ex, ey, ez = eye[0] - b[0], eye[1] - b[1], eye[2] - b[2]
                d = math.sqrt(ex * ex + ey * ey + ez * ez)
                t = min(1.0, 3.0 / max(.01, d))
                if self.first_hit(b, (b[0] + ex * t, b[1] + ey * t, b[2] + ez * t), not solid_only) is None:
                    return False
        return True

    # ------------------------------------------------------------ catalogue
    def derived_covers(self, k, geometry_id, legacy=False):
        """Native CoverPositions face samples of solid k (derived IDs 2e6 + id*2048 + slot).
        `legacy` reproduces today's native catalogue (hedges sampled, sight-ray protection)."""
        s = self.solids[k]
        if not (s['blocks_movement'] or s['half_cover']) or (s.get('flags', 0) & 1 and not legacy):
            return []
        solid_only = not legacy
        (x0, y0, z0), (x1, y1, z1) = self.lo[k], self.hi[k]
        cx, cy = (x0 + x1) / 2, (y0 + y1) / 2
        hx, hy, height = (x1 - x0) / 2, (y1 - y0) / 2, z1 - z0
        out, slot = [], 0
        for axis in (0, 1):
            for sign in (-1.0, 1.0):
                extent, across = (hx, hy) if axis else (hy, hx)
                count = max(1, int(math.ceil(extent * 2 / 3.0)))
                nx_, ny_ = (0.0, sign) if axis else (sign, 0.0)
                for i in range(count):
                    ident = 2000000 + geometry_id * 2048 + slot
                    slot += 1
                    along = -extent + (i + .5) * extent * 2 / count
                    p = (cx + nx_ * (across + .65) + (along if axis else 0.0),
                         cy + ny_ * (across + .65) + (0.0 if axis else along), z0)
                    if not self.walkable(p):
                        continue
                    threat = (p[0] - nx_ * 4, p[1] - ny_ * 4, p[2])
                    crouch = height < 1.86
                    if not self.protected_at(p, threat, 'crouched' if crouch else 'standing', solid_only):
                        if crouch or not self.protected_at(p, threat, 'crouched', solid_only):
                            continue
                        crouch = True
                    peek = p
                    if not s['half_cover']:
                        corner = _along_sign(extent, i, count) * (extent + .65)
                        cand = (cx + nx_ * (across + .65) + (corner if axis else 0.0),
                                cy + ny_ * (across + .65) + (0.0 if axis else corner), z0)
                        if self.walkable(cand) and self.clear_line(p, cand):
                            peek = cand
                    out.append(dict(id=ident, source=s['id'], shelter=p, peek=peek,
                                    posture='crouched' if crouch else 'standing', facing=(-nx_, -ny_),
                                    window=False, derived=True))
        return out

    def catalogue(self, explicit=True, region=None, legacy=False):
        """Explicit C records (as exported, IDs 1e6+i) then derived face samples.
        `region` = (x0, y0, x1, y1) limits derived sampling to solids touching it."""
        out = []
        if explicit:
            for i, c in enumerate(self.m['cover']):
                out.append(dict(id=1000000 + i, source=c['source'], shelter=tuple(c['shelter']),
                                peek=tuple(c['fire']), posture=cover_posture(c), facing=tuple(c['facing']),
                                window=bool(c.get('window')), derived=False))
        for k, s in enumerate(self.solids):
            if region is not None:
                (a0, b0, _), (a1, b1, _) = self.lo[k], self.hi[k]
                if a1 < region[0] or a0 > region[2] or b1 < region[1] or b0 > region[3]:
                    continue
            out.extend(self.derived_covers(k, s['geometry_id'], legacy))
        return out


def _f32(x):
    return struct.unpack('f', struct.pack('f', x))[0]


def _along_sign(extent, i, count):
    """Sign of the native float32 `-extent+(i+.5f)*extent*2/count` (the peek corner side);
    the exact middle sample can fall either side of zero in single precision."""
    e = _f32(float(format(extent, '.7g')))
    step = _f32(_f32(_f32((i + .5) * e) * 2) / count)
    return 1 if _f32(-e + step) >= 0 else -1


def cover_posture(c):
    if 'posture' in c:
        return c['posture']
    return 'crouched'
