"""Curved centre lines represented by the existing axis-aligned map primitives."""
import math


def simplify(points):
    out = []
    for p in points:
        p = list(p)
        if len(out) >= 2 and (out[-2][0] == out[-1][0] == p[0] or out[-2][1] == out[-1][1] == p[1]):
            out[-1] = p
        else:
            out.append(p)
    return out


def curve(points, rng, amplitude=2.5, radius=12, step=1.5):
    """Rounded guide corners and broad, tangent-continuous bends along each leg.

    Endpoints stay fixed and the first/last six metres remain axial for ramps.
    Displacement stays inside the reserved 20 m guide corridor.
    """
    points = simplify(points)
    entries, exits = [points[0]], [points[0]]
    for a, b, c in zip(points, points[1:], points[2:]):
        before, after = math.dist(a, b), math.dist(b, c)
        trim = min(radius, before * .45, after * .45)
        entries.append([b[k] + (a[k]-b[k])*trim/before for k in (0, 1)])
        exits.append([b[k] + (c[k]-b[k])*trim/after for k in (0, 1)])
    entries.append(points[-1]); exits.append(points[-1])
    out = [list(points[0])]
    for i in range(len(points)-1):
        a, b = exits[i], entries[i+1]
        length = math.dist(a, b)
        dx, dy = (b[0]-a[0])/length, (b[1]-a[1])/length
        margin = 7.0
        bend_length = max(0, length - 2*margin)
        # Bound curvature so the inner bank cannot fold over at a short bend.
        maximum = min(amplitude, bend_length*bend_length/(2*math.pi**2*18))
        amp = maximum*rng.uniform(.8, 1.0)*rng.choice((-1, 1)) if bend_length > 16 else 0
        count = max(1, math.ceil(length/step))
        for n in range(1, count+1):
            d = length*n/count
            t = max(0, min(1, (d-margin)/(bend_length or 1)))
            offset = amp*math.sin(math.pi*t)**2
            out.append([a[0]+dx*d-dy*offset, a[1]+dy*d+dx*offset])
        if i+1 < len(points)-1:
            a, b, c = entries[i+1], points[i+1], exits[i+1]
            # A circular fillet keeps its full radius (a quadratic pinches inside).
            centre = [a[k]+c[k]-b[k] for k in (0,1)]
            r = math.dist(a,centre)
            angle = math.atan2(a[1]-centre[1],a[0]-centre[0])
            turn = 1 if (b[0]-a[0])*(c[1]-b[1])-(b[1]-a[1])*(c[0]-b[0]) > 0 else -1
            count = max(2, math.ceil(math.pi*r/2/step))
            for n in range(1, count+1):
                theta = angle+turn*math.pi/2*n/count
                out.append([centre[0]+r*math.cos(theta),centre[1]+r*math.sin(theta)])
    return out


def tube(points, width):
    """One-metre cells whose centres lie inside a polyline's swept radius."""
    cells, radius = set(), width/2
    for a, b in zip(points, points[1:]):
        dx, dy = b[0]-a[0], b[1]-a[1]
        length2 = dx*dx+dy*dy
        if length2 < 1e-12:
            continue
        for y in range(math.floor(min(a[1],b[1])-radius), math.ceil(max(a[1],b[1])+radius)):
            for x in range(math.floor(min(a[0],b[0])-radius), math.ceil(max(a[0],b[0])+radius)):
                px, py = x+.5-a[0], y+.5-a[1]
                t = max(0, min(1, (px*dx+py*dy)/length2))
                if (px-t*dx)**2+(py-t*dy)**2 <= radius*radius:
                    cells.add((x,y))
    return cells


def rect_cells(rect):
    x, y, w, h = rect
    return {(xx,yy) for yy in range(round(y),round(y+h)) for xx in range(round(x),round(x+w))}


def rectangles(cells):
    """Exact disjoint row-span merge; used for both floors and earth complement."""
    rows = {}
    for x, y in sorted(cells):
        rows.setdefault(y, []).append(x)
    active, result, previous = {}, [], None
    for y in sorted(rows):
        if previous is not None and y != previous+1:
            result.extend(active.values()); active = {}
        spans = []
        for x in sorted(rows[y]):
            if spans and spans[-1][1] == x:
                spans[-1][1] += 1
            else:
                spans.append([x, x+1])
        current = {}
        for lo, hi in spans:
            r = active.pop((lo,hi), [lo,y,hi-lo,0])
            r[3] += 1
            current[(lo,hi)] = r
        result.extend(active.values())
        active, previous = current, y
    result.extend(active.values())
    return sorted(result, key=lambda r:(r[1],r[0]))


def offset_line(points, distance):
    out = []
    for i, p in enumerate(points):
        a, b = points[max(0,i-1)], points[min(len(points)-1,i+1)]
        dx, dy = b[0]-a[0], b[1]-a[1]
        length = math.hypot(dx,dy) or 1
        out.append([p[0]-dy*distance/length, p[1]+dx*distance/length])
    return out
