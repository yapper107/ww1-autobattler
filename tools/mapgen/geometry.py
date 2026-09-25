"""Small shared geometry vocabulary. Metres, x right, y up, z up."""
import math


def rect_contains(rect, p, pad=0):
    x, y, w, h = rect
    return x - pad <= p[0] <= x + w + pad and y - pad <= p[1] <= y + h + pad


def overlap(a, b, pad=0):
    return (a[0] < b[0] + b[2] + pad and b[0] < a[0] + a[2] + pad and
            a[1] < b[1] + b[3] + pad and b[1] < a[1] + a[3] + pad)


def segment_box(a, b, box):
    """Closed 3D slab intersection, including a segment starting in a solid."""
    lo, hi = 0.0, 1.0
    for i, (low, high) in enumerate(zip(box['min'], box['max'])):
        delta = b[i] - a[i]
        if abs(delta) < 1e-10:
            if not low <= a[i] <= high:
                return False
        else:
            u, v = (low - a[i]) / delta, (high - a[i]) / delta
            lo, hi = max(lo, min(u, v)), min(hi, max(u, v))
            if lo > hi:
                return False
    return True


def solid(m, rect, height, kind='wall', z=0, movement=True, parent=None, flags=0, half_cover=None):
    """Append one box. `flags` (ARMYMAP 2: bit0 concealment, bit1 crater rim) and an
    explicit `half_cover` are recorded only when set, so v1 geometry is unchanged."""
    x, y, w, h = rect
    box = dict(id=f"solid-{len(m['solids']):04d}", geometry_id=len(m['solids'])+1, min=[x, y, z],
               max=[x + w, y + h, z + height], kind=kind,
               blocks_movement=movement, parent=parent,
               building=bool(parent and parent.startswith('building-')),
               half_cover=kind in ('sill','garden-wall','earth') if half_cover is None else half_cover)
    if flags:
        box['flags'] = flags
        box['concealment'] = bool(flags & 1)
    m['solids'].append(box)
    return box['id']


def cover(m, source, p, normal, kind, team=None, posture=None, window=None, level=None, firing_height=1.65):
    """Append one explicit firing position. ARMYMAP 2 fields (`posture` standing /
    crouched / prone, `window`, `level`) are recorded only when given."""
    c = dict(id=f"cover-{len(m['cover']):04d}", source=source,
        shelter=list(p), fire=list(p), facing=list(normal), kind=kind, team=team,
        crouched_height=0.9, firing_height=firing_height, probe_distance=4.0)
    if posture is not None:
        c['posture'] = posture
    if window is not None:
        c['window'] = bool(window)
    if level is not None:
        c['level'] = level
    m['cover'].append(c)
    return c['id']


def base(kind, seed, width=340, height=260):
    return dict(schema='army-map/1', generator_version=1, kind=kind, seed=seed,
        units='metres', coordinates='x-right y-up z-up',
        bounds=[-width / 2, -height / 2, width, height], ground_base=-1.4 if kind in ('trenches','village') else 0,
        solids=[], buildings=[], roads=[], yards=[], paths=[], surfaces=[],
        links=[], cover=[], decorations=[], labels=[], deployment=[], objectives=[])


def round_geometry(value):
    if isinstance(value, float):
        if not math.isfinite(value):
            raise ValueError('non-finite geometry')
        return round(value, 4)
    if isinstance(value, dict):
        return {k: round_geometry(v) for k, v in value.items()}
    if isinstance(value, (list, tuple)):
        return [round_geometry(v) for v in value]
    return value


def path_rects(points, width):
    """Square-capped axis-aligned path union; corners and junctions overlap."""
    r = width / 2
    for a, b in zip(points, points[1:]):
        if a[0] != b[0] and a[1] != b[1]:
            raise ValueError('path must be axis aligned')
        yield [min(a[0], b[0]) - r, min(a[1], b[1]) - r,
               abs(b[0] - a[0]) + width, abs(b[1] - a[1]) + width]


def surface(m, rect, z, slope=(0, 0), parent=None, kind=None, level=None, building=None, prefix='surface'):
    """Append one walkable surface. ARMYMAP 2 fields (`kind` 0 floor / 1 ramp / 2 stair,
    `level`, owning `building` record id) are recorded only when given."""
    s = dict(id=f"{prefix}-{len(m['surfaces']):04d}", rect=list(rect), z=z, slope=list(slope), parent=parent)
    if kind is not None:
        s['kind'] = kind
    if level is not None:
        s['level'] = level
    if building is not None:
        s['building'] = building
    m['surfaces'].append(s)
    return s
