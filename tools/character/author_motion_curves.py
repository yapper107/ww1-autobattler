"""Bounded transit curves: pass through waypoints, stop at authored holds."""


def monotone_transit(keys, time):
    """Component-wise monotone cubic Hermite interpolation.

    Repeated positions preserve a deliberate hold. Interior moving waypoints
    share their incoming/outgoing velocity instead of easing to rest at each
    point. Harmonic slopes keep every component inside its segment bounds.
    """
    if time <= keys[0][0]:
        return tuple(keys[0][1])
    if time >= keys[-1][0]:
        return tuple(keys[-1][1])

    def tangent(index, axis):
        if index == 0 or index == len(keys) - 1:
            return 0.0
        before, point, after = keys[index - 1:index + 2]
        h0, h1 = point[0] - before[0], after[0] - point[0]
        d0 = (point[1][axis] - before[1][axis]) / h0
        d1 = (after[1][axis] - point[1][axis]) / h1
        if d0 * d1 <= 0:
            return 0.0
        w0, w1 = 2 * h1 + h0, h1 + 2 * h0
        return (w0 + w1) / (w0 / d0 + w1 / d1)

    for i, ((a, p), (b, q)) in enumerate(zip(keys, keys[1:])):
        if a <= time <= b:
            h = b - a
            u = (time - a) / h
            return tuple((2*u**3 - 3*u**2 + 1)*p[c]
                         + (u**3 - 2*u**2 + u)*h*tangent(i, c)
                         + (-2*u**3 + 3*u**2)*q[c]
                         + (u**3 - u**2)*h*tangent(i + 1, c)
                         for c in range(len(p)))
    raise ValueError('Transit keys must have increasing times')
