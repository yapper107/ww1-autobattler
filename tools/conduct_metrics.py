"""Conduct of the attacking side, from the user's replay verdict of 19 September 2026.

The attack score only sees outcomes. Watching the drills survivor the user saw three things the
score cannot: soldiers firing from where they stood instead of taking a covered firing position,
most of the force hanging back while a couple of soldiers fought, and soldiers shuffling back and
forth in and between buildings. These are observer-truth measurements of the ATTACKING team
(team 0) from the per-frame evaluation export, counted from the attackers' first shot.
"""
from __future__ import annotations
import json, math
from pathlib import Path

from phase0_metrics import rows

CONTACT = 100.0      # an attacker within this distance of a living defender is "at the fight"
CLOSE = 30.0         # and within this one he is in close quarters (the building fight)
WINDOW = 30.0        # firing is counted in half-minute windows
DITHER_WINDOW = 20.0
DITHER_PATH = 6.0    # a window counts once the soldier has walked this far in it
DITHER_RATIO = 3.0   # and walked three times farther than he got
RELOCATION = 6.0     # metres between where a move began and where it ended for it to count as a relocation
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


FLANK_ANGLE = 45.0   # a round counts as flanking fire when it arrives this far off the squad's base-of-fire line
FLANK_MEMORY = 60.0  # the base-of-fire line is the squad's gun, or else its median firing bearing of the last minute


def flank_fire_share(root, frames) -> dict:
    """The user's 20 September 2026 observation: "they do not go on a flank to put more fire on the enemy".
    For every aimed rifle round of an attacking squad, the bearing from the target to the shooter is compared with
    the bearing from the target to the squad's machine gun at that moment (the base of fire). flank_fire_share is
    the share of those rounds arriving 45 degrees or more off that line; flank_fire_squads the share of squads that
    ever deliver twenty such rounds. A squad that closes frontally in short bounds scores near zero on both."""
    import bisect
    times = [f['time'] for f in frames]
    rounds = flanking = 0
    per_squad = {}
    for line in open(Path(root)/'shots.jsonl'):
        if '"team":0' not in line:
            continue
        s = json.loads(line)
        if s.get('support_weapon') or s.get('aimed_enemy', -1) < 0:
            continue
        frame = frames[min(len(frames) - 1, bisect.bisect_left(times, s['time']))]
        gun = next((m for m in frame['soldiers'] if m['team'] == 0 and m['squad'] == s['squad'] and m['machine_gun'] and m['alive']), None)
        target = next((m for m in frame['soldiers'] if m['id'] == s['aimed_enemy']), None)
        if gun is None or target is None:
            continue
        t = target['position']
        a = math.atan2(s['start'][1] - t[1], s['start'][0] - t[0])
        b = math.atan2(gun['position'][1] - t[1], gun['position'][0] - t[0])
        off = abs(math.degrees(math.atan2(math.sin(a - b), math.cos(a - b))))
        rounds += 1
        flanking += int(off >= FLANK_ANGLE)
        per_squad[s['squad']] = per_squad.get(s['squad'], 0) + int(off >= FLANK_ANGLE)
    squads = {m['squad'] for m in frames[0]['soldiers'] if m['team'] == 0}
    return dict(flank_fire_share=flanking/rounds if rounds else None,
                flank_fire_squads=sum(1 for q in squads if per_squad.get(q, 0) >= 20)/len(squads) if squads else None)


def restlessness(frames, step) -> dict:
    """The user's 20 September 2026 verdict on the best legacy node: "the squads keep moving around very rapidly when
    there are still enemies... soldiers... leave their positions into open ground to get shot frequently".
    For living attackers within 100 m of a living defender: moves_per_soldier_minute (a move starts when a man who stood
    still begins to displace; this includes leaning out of cover to fire), relocations_per_soldier_minute (moves ending
    six metres or more from where they began: the shuffling the user sees) with the seconds seen while relocating, orders_per_soldier_minute (his order id changes), moving_share (time displacing), and
    wounded_moving_share (of the wounds taken there, those taken while displacing)."""
    fight = moving = legs = orders = hit_moving = hit_still = relocations = 0
    relocation_seen = 0.0
    last, was_moving, last_order, last_health, leg, idle = {}, {}, {}, {}, {}, {}
    for frame in frames:
        defenders = [d['position'] for d in frame['soldiers'] if d['team'] == 1 and d['alive']]
        for s in frame['soldiers']:
            if s['team'] != 0 or not s['alive']:
                continue
            p, i = s['position'], s['id']
            displaced = i in last and math.hypot(p[0] - last[i][0], p[1] - last[i][1]) > 0.1
            if defenders and min(math.hypot(p[0] - x[0], p[1] - x[1]) for x in defenders) <= CONTACT:
                fight += 1
                moving += int(displaced)
                legs += int(displaced and not was_moving.get(i, False))
                orders += int(i in last_order and s['order'] != last_order[i])
                if i in last_health and s['health'] < last_health[i] - 0.5:
                    hit_moving += int(displaced)
                    hit_still += int(not displaced)
                # A relocation is a move that ends (one second at rest) RELOCATION metres or more from where it began:
                # a lean out of cover to fire is a move but not a relocation.
                if displaced:
                    if i not in leg:
                        leg[i] = dict(origin=last[i], seen=0.0)
                    leg[i]['seen'] += step if s['observer_exposed'] else 0.0
                    idle[i] = 0
                elif i in leg:
                    idle[i] = idle.get(i, 0) + 1
                    if idle[i]*step >= 1.0:
                        done = leg.pop(i)
                        if math.hypot(p[0] - done['origin'][0], p[1] - done['origin'][1]) >= RELOCATION:
                            relocations += 1
                            relocation_seen += done['seen']
            last[i], was_moving[i], last_order[i], last_health[i] = p, displaced, s['order'], s['health']
    minutes = fight*step/60
    return dict(relocations_per_soldier_minute=relocations/minutes if minutes else None, relocation_seen_seconds_per_soldier_minute=relocation_seen/minutes if minutes else None,
                moves_per_soldier_minute=legs/minutes if minutes else None, orders_per_soldier_minute=orders/minutes if minutes else None,
                moving_share=moving/fight if fight else None, wounded_moving_share=hit_moving/(hit_moving + hit_still) if hit_moving + hit_still else None)


STRAGGLER_DISTANCE = 40.0  # metres from his squad's centre
STRAGGLER_SILENCE = 60.0   # and this long without firing: left behind, not a base of fire
CORPORAL_LEAD = 20.0       # a rifleman this much farther from the nearest defender than his corporal is behind him


def squad_participation(root, frames, first_shot) -> dict:
    """The user's 20 September 2026 observation on the legacy survivor: "some of the squads would straight up not move
    from their positions and let one squad do all of the work", "a couple of soldiers from the flanking squad were
    hanging back and not doing anything". least_squad_shot_share: the smallest share of the attackers' rounds fired by
    one squad (0.25 is an even split); quiet_squads: squads with under a tenth of the rounds; straggler_share: living
    attacker-seconds, from the first shot, spent more than 40 m from the squad's centre without having fired for 60 s.
    behind_corporal_share (the user, 21 September 2026: "the cpl pushed up first, then his men followed", "his soldiers
    stayed back"): of living rifleman-seconds (not the gunner, not the sergeant) with a living corporal, those spent 20 m
    or more farther from the nearest living defender than their corporal is."""
    shots = {}
    for line in open(Path(root)/'shots.jsonl'):
        if '"team":0' in line:
            squad = json.loads(line)['squad']
            shots[squad] = shots.get(squad, 0) + 1
    squads = sorted({m['squad'] for m in frames[0]['soldiers'] if m['team'] == 0}) if frames else []
    total = sum(shots.values())
    shares = [shots.get(q, 0)/total for q in squads] if total else []
    living = straggling = riflemen = behind = 0
    rounds, last_fired = {}, {}
    for frame in frames:
        t = frame['time']
        members = {}
        for m in frame['soldiers']:
            if m['team'] != 0:
                continue
            if m['rounds'] > rounds.get(m['id'], m['rounds']):
                last_fired[m['id']] = t
            rounds[m['id']] = m['rounds']
            if m['alive']:
                members.setdefault(m['squad'], []).append(m)
        if first_shot is None or t < first_shot:
            continue
        defenders = [(d['position'][0], d['position'][1]) for d in frame['soldiers'] if d['team'] == 1 and d['alive']]
        near = lambda m: min(math.hypot(m['position'][0] - x, m['position'][1] - y) for x, y in defenders)
        for group in members.values():
            corporal = next((m for m in group if m['id'] % 8 == 1), None)
            if corporal and defenders:
                lead = near(corporal)
                for m in group:
                    if m['id'] % 8 > 1 and not m.get('machine_gun') and m['id'] != m.get('support'):
                        riflemen += 1
                        behind += int(near(m) > lead + CORPORAL_LEAD)
            cx = sum(m['position'][0] for m in group)/len(group)
            cy = sum(m['position'][1] for m in group)/len(group)
            for m in group:
                living += 1
                away = math.hypot(m['position'][0] - cx, m['position'][1] - cy) > STRAGGLER_DISTANCE
                straggling += int(away and t - last_fired.get(m['id'], -1e9) > STRAGGLER_SILENCE)
    return dict(least_squad_shot_share=min(shares) if shares else None, quiet_squads=sum(1 for v in shares if v < 0.10) if shares else None,
                straggler_share=straggling/living if living else None, behind_corporal_share=behind/riflemen if riflemen else None)


def _segment_box(a, b, low, high) -> bool:
    """Whether the segment a-b meets the axis-aligned box [low, high] (slab test)."""
    t0, t1 = 0.0, 1.0
    for k in range(3):
        d = b[k] - a[k]
        if abs(d) < 1e-9:
            if a[k] < low[k] or a[k] > high[k]:
                return False
            continue
        u, w = (low[k] - a[k])/d, (high[k] - a[k])/d
        if u > w:
            u, w = w, u
        t0, t1 = max(t0, u), min(t1, w)
        if t0 > t1:
            return False
    return True


def hits_through_concealment(root, frames) -> dict:
    """Plan 029 (Jordan, 23 September 2026: hedges block sight, not bullets; "a new measure watches hits through
    concealment"). hits_through_concealment: hits (every victim of every round, both teams, friendly included) whose
    round crossed a concealment obstacle (a hedge) on its way to that victim, per 100 living soldier-minutes of the
    whole battle. A round is taken as the straight line from its muzzle to its end, and a victim's place on it as his
    position in the last evaluation frame at or before the hit, projected onto that line. The hedges are the
    geometry export's obstacles marked "concealment" (written only by a battle with concealment on; with it off a
    hedge is an ordinary solid and the measure is 0)."""
    import bisect
    geometry = Path(root)/'geometry.jsonl'
    if not frames or not geometry.exists():
        return dict(hits_through_concealment=None)
    step = frames[1]['time'] - frames[0]['time'] if len(frames) > 1 else 0.2
    minutes = sum(step for frame in frames for s in frame['soldiers'] if s['alive'])/60
    versions = []
    for line in open(geometry):
        row = json.loads(line)
        versions.append((row['time'], [((o['center'][0] - o['half'][0], o['center'][1] - o['half'][1], o['center'][2]),
                                        (o['center'][0] + o['half'][0], o['center'][1] + o['half'][1], o['center'][2] + o['height']))
                                       for o in row['obstacles'] if o.get('concealment')]))
    count = 0
    if any(boxes for _, boxes in versions):
        times = [f['time'] for f in frames]
        version_times = [t for t, _ in versions]
        for line in open(Path(root)/'shots.jsonl'):
            if '"victims":[]' in line:
                continue
            shot = json.loads(line)
            boxes = versions[max(0, bisect.bisect_right(version_times, shot['time']) - 1)][1]
            if not boxes:
                continue
            a, b = shot['start'], shot['end']
            dx, dy = b[0] - a[0], b[1] - a[1]
            length2 = dx*dx + dy*dy
            for victim in shot['victims']:
                frame = frames[max(0, bisect.bisect_right(times, victim['time']) - 1)]
                p = next(m['position'] for m in frame['soldiers'] if m['id'] == victim['soldier'])
                t = min(1.0, max(0.0, ((p[0] - a[0])*dx + (p[1] - a[1])*dy)/length2)) if length2 > 1e-12 else 0.0
                at = (a[0] + dx*t, a[1] + dy*t, a[2] + (b[2] - a[2])*t)
                count += int(any(_segment_box(a, at, low, high) for low, high in boxes))
    return dict(hits_through_concealment=count*100/minutes if minutes else None)


MOVEMENT_TASKS = {2, 4, 6, 7, 8, 9}  # Advance, Rally, ClearLane, Flank, PullBack, BoundMove
ARRIVED = 3.0                        # metres from the goal he was walking to


def order_churn(frames) -> dict:
    """Plan 023 (the user: "squads keep moving around very rapidly", "called back instead of pushing their advantage"):
    from the lean evaluation rows alone. replaced_before_arrival_share: of the attackers' movement orders that ended (the
    order id changed while he was alive), those that ended with the man still more than 3 m from the goal he held;
    regroup_orders_per_soldier_minute: new Rally orders to living attackers per soldier-minute."""
    held, living_seconds = {}, 0.0
    ended = replaced = regroups = 0
    step = frames[1]['time'] - frames[0]['time'] if len(frames) > 1 else 0.2
    for frame in frames:
        for m in frame['soldiers']:
            if m['team'] != 0:
                continue
            if not m['alive']:
                held.pop(m['id'], None)
                continue
            living_seconds += step
            before = held.get(m['id'])
            if before is not None and before[0] != m['order']:
                if before[1] in MOVEMENT_TASKS:
                    ended += 1
                    replaced += int(math.hypot(m['position'][0] - before[2][0], m['position'][1] - before[2][1]) > ARRIVED)
                regroups += int(m['task'] == 4)
            if before is None or before[0] != m['order']:
                held[m['id']] = (m['order'], m['task'], m['goal'])
            elif m['task'] in MOVEMENT_TASKS:
                held[m['id']] = (m['order'], m['task'], m['goal'])  # the goal he is walking to now (a shelter on the way is not the order's end)
    return dict(replaced_before_arrival_share=replaced/ended if ended else None,
                regroup_orders_per_soldier_minute=regroups/(living_seconds/60) if living_seconds else None)


def evaluate(root) -> dict:
    """All shares are of the ATTACKERS (team 0), from their first shot to the end.

    at_fight_share        living attackers within 100 m of a living defender (the rest hang back)
    engaged_firing_share  of attackers at the fight for most of a 30 s window, those who fired in it
    contact_exposed_share of attacker-seconds at the fight, those with an enemy line of sight on the man
                          (a soldier working from cover is exposed only while he peeks)
    hits_through_concealment  hits through a hedge per 100 living soldier-minutes, both teams, whole battle (plan 029)
    idle_exposed_share    of attacker-seconds at the fight, those in which the man stands still (Fire or Hold, no
                          displacement), an enemy has a line of sight on him and he has no fire solution of his own:
                          seen and unable to shoot, as opposed to seen because he is shooting (score v6)
    close_dither_share    of 20 s windows in close quarters with 6 m walked, those walked 3x the ground gained
    stutter_share         of living attacker-seconds in the WHOLE battle, those inside a burst of rapid direction
                          reversals (the user's 19 September 2026 observation: soldiers move back and forth rapidly)
    """
    root = Path(root)
    frames = list(rows(root/'evaluation.jsonl'))
    flank = flank_fire_share(root, frames) if frames else dict(flank_fire_share=None, flank_fire_squads=None)
    restless = restlessness(frames, frames[1]['time'] - frames[0]['time'] if len(frames) > 1 else 0.2) if frames else {}
    none = dict(**flank, **restless, idle_exposed_share=None, stutter_share=None, at_fight_share=None, engaged_firing_share=None, contact_exposed_share=None, close_dither_share=None, first_attacker_shot=None)
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
    none.update(squad_participation(root, frames, first_shot))
    none.update(order_churn(frames) if frames else dict(replaced_before_arrival_share=None, regroup_orders_per_soldier_minute=None))
    concealed = hits_through_concealment(root, frames)
    none.update(concealed)
    if first_shot is None:
        return none
    living = at_fight = contact_seconds = contact_exposed = idle_exposed = 0.0
    previous_position = {}
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
                still = s['action'] in (2, 4) and math.hypot(p[0] - previous_position.get(s['id'], p)[0], p[1] - previous_position.get(s['id'], p)[1]) <= 0.1
                idle_exposed += step if still and s['observer_exposed'] and not s['solution'] else 0.0
            previous_position[s['id']] = p
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
    return dict(**flank, **restless, **squad_participation(root, frames, first_shot), **order_churn(frames), **concealed, idle_exposed_share=idle_exposed/contact_seconds if contact_seconds else None, stutter_share=stutter, at_fight_share=at_fight/living if living else None,
                engaged_firing_share=engaged_fired/engaged_windows if engaged_windows else None,
                contact_exposed_share=contact_exposed/contact_seconds if contact_seconds else None,
                close_dither_share=dithering/dither_windows if dither_windows else None,
                first_attacker_shot=first_shot)
