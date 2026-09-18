# SPDX-License-Identifier: LGPL-3.0-only
# Adapted from Keir / ProbableTrain's MapGenerator, polygon_util.ts.
# See NOTICE.md, COPYING and COPYING.LESSER in this directory.
"""Rectangular specialization of PolygonUtil.subdividePolygon.

Changes: seed-local RNG; interpolate the split relative to the edge origin
(upstream scales the sum of the endpoints); exact rectangular cuts replace
PolyK; explicit minimum frontage replaces the arbitrary-polygon shape filter.
This module is deliberately replaceable and ships in source form.
"""


def subdivide(rect, min_area, rng, min_side=7.0):
    x, y, w, h = rect
    area = w * h
    if area < 0.5 * min_area or min(w, h) < min_side:
        return []
    perimeter = 2 * (w + h)
    if area / (perimeter * perimeter) < 0.04:
        # Our frontage strips can be long; divide before applying the shape guard.
        if max(w, h) < 2 * min_side:
            return []
    if area < 2 * min_area or max(w, h) < 2 * min_side:
        return [rect]
    deviation = rng.uniform(0.4, 0.6)
    length = w if w >= h else h
    cut = max(min_side, min(length - min_side, length * deviation))
    children = ([(x, y, cut, h), (x + cut, y, w - cut, h)] if w >= h else
                [(x, y, w, cut), (x, y + cut, w, h - cut)])
    return [lot for child in children for lot in subdivide(child, min_area, rng, min_side)]
