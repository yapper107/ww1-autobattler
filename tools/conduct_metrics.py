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
REVERSAL_STEP = 0.08 # a frame's movement counts once it is this long (0.4 m/s at the 0.2 s export step)
REVERSAL_GAP = 1.5   # reversals closer together than this belong to one burst
REVERSAL_BURST = 4   # and a burst of this many is a stutter: the man is shuttling, not manoeuvring


def stutter_share(frames, step) -> float | None:
    last, heading, reversals, alive_seconds = {}, {}, {}, 0.0
    for frame in frames:
        for s in frame['soldiers']:
            if s['team'] != 0 or not s['alive']:
                continue
            alive_seconds += step
            p, i = s['position'], s['id']
            if i in last:
                d = (p[0] - last[i][0], p[1] - last[i][1])
                if math.hypot(*d) > REVERSAL_STEP:
                    if i in heading and d[0]*heading[i][0] + d[1]*heading[i][1] < 0:
                        reversals.setdefault(i, []).append(frame['time'])
                    heading[i] = d
            last[i] = p
    seconds = 0.0
    for times in reversals.values():
        j = 0
        while j < len(times):
            k = j
            while k + 1 < len(times) and times[k + 1] - times[k] <= REVERSAL_GAP:
                k += 1
            if k - j + 1 >= REVERSAL_BURST:
                seconds += times[k] - times[j]
            j = k + 1
    return seconds/alive_seconds if alive_seconds else None


def evaluate(root) -> dict:
    """All shares are of the ATTACKERS (team 0), from their first shot to the end.

    at_fight_share        living attackers within 100 m of a living defender (the rest hang back)
    engaged_firing_share  of attackers at the fight for most of a 30 s window, those who fired in it
    contact_exposed_share of attacker-seconds at the fight, those with an enemy line of sight on the man
                          (a soldier working from cover is exposed only while he peeks)
    close_dither_share    of 20 s windows in close quarters with 6 m walked, those walked 3x the ground gained
    stutter_share         of living attacker-seconds in the WHOLE battle, those inside a burst of rapid direction
                          reversals (the user's 19 September 2026 observation: soldiers move back and forth rapidly)
    """
    root = Path(root)
    frames = list(rows(root/'evaluation.jsonl'))
    none = dict(stutter_share=None, at_fight_share=None, engaged_firing_share=None, contact_exposed_share=None, close_dither_share=None, first_attacker_shot=None)
    seen, first_shot = {}, None
    for frame in frames:
        for s in frame['soldiers']:
            if s['team'] == 0 and s['rounds'] > seen.get(s['id'], s['rounds']):
                first_shot = frame['time']
                break
            seen[s['id']] = s['rounds']
        if first_shot is not None:
            break
    step = frames[1]['time'] - frames[0]['time'] if len(frames) > 1 else 0.2
    stutter = stutter_share(frames, step)
    none['stutter_share'] = stutter
    if first_shot is None:
        return none
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
    return dict(stutter_share=stutter, at_fight_share=at_fight/living if living else None,
                engaged_firing_share=engaged_fired/engaged_windows if engaged_windows else None,
                contact_exposed_share=contact_exposed/contact_seconds if contact_seconds else None,
                close_dither_share=dithering/dither_windows if dither_windows else None,
                first_attacker_shot=first_shot)
