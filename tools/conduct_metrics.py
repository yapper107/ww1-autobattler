"""Conduct of the attacking side, from the user's replay verdict of 19 September 2026.

The attack score only sees outcomes. Watching the drills survivor the user saw three things the
score cannot: soldiers firing from where they stood instead of taking a covered firing position,
most of the force hanging back while a couple of soldiers fought, and soldiers shuffling back and
forth in and between buildings. These are observer-truth measurements of the ATTACKING team
(team 0) from the per-frame evaluation export, counted from the attackers' first shot.
"""
from __future__ import annotations
import math
from pathlib import Path

from phase0_metrics import rows

CONTACT = 100.0      # an attacker within this distance of a living defender is "at the fight"
CLOSE = 30.0         # and within this one he is in close quarters (the building fight)
WINDOW = 30.0        # firing is counted in half-minute windows
DITHER_WINDOW = 20.0
DITHER_PATH = 6.0    # a window counts once the soldier has walked this far in it
DITHER_RATIO = 3.0   # and walked three times farther than he got


def evaluate(root) -> dict:
    """All shares are of the ATTACKERS (team 0), from their first shot to the end.

    at_fight_share        living attackers within 100 m of a living defender (the rest hang back)
    engaged_firing_share  of attackers at the fight for most of a 30 s window, those who fired in it
    contact_exposed_share of attacker-seconds at the fight, those with an enemy line of sight on the man
                          (a soldier working from cover is exposed only while he peeks)
    close_dither_share    of 20 s windows in close quarters with 6 m walked, those walked 3x the ground gained
    """
    root = Path(root)
    frames = list(rows(root/'evaluation.jsonl'))
    none = dict(at_fight_share=None, engaged_firing_share=None, contact_exposed_share=None, close_dither_share=None, first_attacker_shot=None)
    seen, first_shot = {}, None
    for frame in frames:
        for s in frame['soldiers']:
            if s['team'] == 0 and s['rounds'] > seen.get(s['id'], s['rounds']):
                first_shot = frame['time']
                break
            seen[s['id']] = s['rounds']
        if first_shot is not None:
            break
    if first_shot is None:
        return none
    step = frames[1]['time'] - frames[0]['time'] if len(frames) > 1 else 0.2
    living = at_fight = contact_seconds = contact_exposed = 0.0
    last_rounds, window, track = {}, {}, {}
    engaged_windows = engaged_fired = dither_windows = dithering = 0
    for frame in frames:
        t = frame['time']
        defenders = [(d['position'][0], d['position'][1]) for d in frame['soldiers'] if d['team'] == 1 and d['alive']]
        for s in frame['soldiers']:
            if s['team'] != 0:
                continue
            fired = s['rounds'] > last_rounds.get(s['id'], s['rounds'])
            last_rounds[s['id']] = s['rounds']
            if t < first_shot or not s['alive'] or not defenders:
                continue
            p = s['position']
            nearest = min(math.hypot(p[0] - x, p[1] - y) for x, y in defenders)
            living += step
            if nearest <= CONTACT:
                at_fight += step
                contact_seconds += step
                contact_exposed += step if s['observer_exposed'] else 0.0
            w = window.setdefault(s['id'], dict(start=t, near=0, frames=0, fired=False))
            w['frames'] += 1
            w['near'] += int(nearest <= CONTACT)
            w['fired'] = w['fired'] or fired
            if t - w['start'] >= WINDOW:
                if w['near']*2 > w['frames']:
                    engaged_windows += 1
                    engaged_fired += int(w['fired'])
                window[s['id']] = dict(start=t, near=0, frames=0, fired=False)
            state = track.setdefault(s['id'], dict(start=t, origin=p, last=p, path=0.0, close=0, frames=0))
            state['path'] += math.hypot(p[0] - state['last'][0], p[1] - state['last'][1])
            state['last'] = p
            state['frames'] += 1
            state['close'] += int(nearest <= CLOSE)
            if t - state['start'] >= DITHER_WINDOW:
                if state['path'] >= DITHER_PATH and state['close']*2 > state['frames']:
                    dither_windows += 1
                    net = math.hypot(p[0] - state['origin'][0], p[1] - state['origin'][1])
                    dithering += int(state['path'] >= DITHER_RATIO*max(net, 0.5))
                track[s['id']] = dict(start=t, origin=p, last=p, path=0.0, close=0, frames=0)
    return dict(at_fight_share=at_fight/living if living else None,
                engaged_firing_share=engaged_fired/engaged_windows if engaged_windows else None,
                contact_exposed_share=contact_exposed/contact_seconds if contact_seconds else None,
                close_dither_share=dithering/dither_windows if dither_windows else None,
                first_attacker_shot=first_shot)
