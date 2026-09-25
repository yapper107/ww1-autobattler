"""Why covering fire does not protect movers: the chain, measured from observer facts in one traced battle.

Reads a run's evaluation.jsonl (0.2 s frames), shots.jsonl and manifest.json and returns one row of
summable counts (pool.py adds rows up). Observer facts only (who could see whom, suppression, position,
every round): diagnosis, never an input to any decision.

Links measured:
  exposure  - frames a man moves (>= 0.6 m/s) while an enemy has a clear line to him; how long the
              exposed runs last, how fast, whether he sprints; hits taken per exposed second.
  cover     - for each exposed moving frame: how many of the enemies who can see him are pinned
              (suppression >= his duck threshold) or were shot at by the mover's side in the last 3 s;
              hazard (hits per second) by the number of unpinned observers.
  shooters  - for every round at a moving man: the shooter's suppression, weapon, range, whether the
              mover's side was firing at him, and how long he had had a line to the mover.
  reaction  - an enemy gains a line to a moving man: delay to his first round at him and first hit.
  effect    - a man with an enemy in view: rounds per second and hit share by his own suppression.
  area      - each machine-gun burst: how many enemies' suppression jumps while it lasts.
  lethality - rounds, hits, casualties; hit share by range, weapon and target state.
"""
from __future__ import annotations

import bisect
import json
import math
from collections import defaultdict
from pathlib import Path

DT = 0.2
MOVE = 0.12          # m per frame: >= 0.6 m/s counts as moving
JUMP = 0.15          # a suppression rise this large between frames: a near miss (0.23/composure) or hit
RECENT = 3.0         # s: "under fire from the mover's side"
DUCK = {0: 0.52, 1: 0.40, 2: 0.65}   # Balanced, Cautious, Aggressive (BattleSim.cpp DuckThreshold)
RANGE_BINS = (25, 50, 100, 150, 250, 1e9)
DUR_BINS = (2, 4, 6, 10, 20, 1e9)
REACT_BINS = (1, 2, 3, 5, 10, 1e9)


def bin_of(value, bins):
    for i, b in enumerate(bins):
        if value < b:
            return i
    return len(bins) - 1


def add(d, key, value=1.0):
    d[key] = d.get(key, 0.0) + value


def analyse(run: Path) -> dict:
    m = json.loads((run/'manifest.json').read_text())
    duck = [DUCK.get(int(m.get('doctrine', 0)), .52), DUCK.get(int(m.get('ember_doctrine', 0)), .52)]
    times, alive, pos, supp, stance, sprint, task, obs, team, gun, mag, asg = [], [], [], [], [], [], [], [], None, None, [], []
    for line in open(run/'evaluation.jsonl'):
        f = json.loads(line)
        s = f['soldiers']
        times.append(f['time'])
        alive.append([x['alive'] for x in s])
        pos.append([x['position'] for x in s])
        supp.append([x['suppression'] for x in s])
        stance.append([x['stance'] for x in s])
        sprint.append([x['sprinting'] for x in s])
        task.append([x['task'] for x in s])
        obs.append([set(x['observer_targets']) for x in s])
        mag.append([x['magazine'] for x in s])
        asg.append([x['assignment_id'] for x in s])
        if team is None:
            team = [x['team'] for x in s]
            gun = [x['machine_gun'] for x in s]
    n, N = len(times), len(team)
    fi = lambda t: min(n-1, max(0, bisect.bisect_right(times, t)-1))      # frame at or before t
    shots = [json.loads(l) for l in open(run/'shots.jsonl')]
    at_enemy = defaultdict(list)          # aimed enemy -> times of rounds aimed at him
    by_owner = defaultdict(list)
    hits_on = defaultdict(list)           # victim -> hit times
    for s in shots:
        if s['aimed_enemy'] >= 0:
            at_enemy[s['aimed_enemy']].append(s['time'])
        by_owner[s['owner']].append(s['time'])
        for v in s['victims']:
            hits_on[v['soldier']].append(v['time'])
    for d in (at_enemy, by_owner, hits_on):
        for k in d:
            d[k].sort()

    def count(lst, a, b):
        return bisect.bisect_left(lst, b) - bisect.bisect_left(lst, a)

    def seen_by(t, i):
        return [e for e in range(N) if alive[t][e] and team[e] != team[i] and i in obs[t][e]]

    def moving(t, i):
        if t == 0 or not alive[t][i] or not alive[t-1][i]:
            return False
        d = math.dist(pos[t][i][:2], pos[t-1][i][:2])
        return MOVE <= d < 3.0

    row = dict(frames=n, seconds=times[-1], static=bool(m.get('static_defence')), exposure={}, still={},
               cover={}, unpinned={}, underfire={}, episodes={}, speed={}, shooters={}, reaction={},
               effect={}, area={}, lethality={}, pinned={})
    ex, still, cover, unp, uf = row['exposure'], row['still'], row['cover'], row['unpinned'], row['underfire']
    # Per-frame exposure classes, hazard, and exposed runs.
    run_start = [None]*N; run_len = [0]*N; run_dist = [0.0]*N; run_sprint = [0]*N; run_hits = [0]*N; gap = [0]*N
    def close(i):
        if run_start[i] is not None and run_len[i] > 0:
            dur = run_len[i]*DT
            b = str(bin_of(dur, DUR_BINS))
            ep = row['episodes']
            add(ep, 'runs'); add(ep, 'seconds', dur); add(ep, 'dist', run_dist[i]); add(ep, 'sprint_frames', run_sprint[i])
            add(ep, 'frames', run_len[i]); add(ep, f'dur{b}'); add(ep, f'dur{b}_hit', 1 if run_hits[i] else 0)
            add(ep, 'hit_runs', 1 if run_hits[i] else 0)
        run_start[i] = None; run_len[i] = 0; run_dist[i] = 0.0; run_sprint[i] = 0; run_hits[i] = 0; gap[i] = 0
    for t in range(1, n):
        t0, t1 = times[t], times[t]+DT
        for i in range(N):
            if not alive[t][i]:
                close(i)
                continue
            hits = count(hits_on[i], t0, t1)
            if moving(t, i):
                d = math.dist(pos[t][i][:2], pos[t-1][i][:2])
                add(row['speed'], f'bin{min(9, int(d/DT/0.5))}')
                add(row['speed'], 'sprint' if sprint[t][i] else 'no_sprint')
                o = seen_by(t, i)
                if not o:
                    add(ex, 'unseen_s', DT); add(ex, 'unseen_hits', hits)
                    if run_start[i] is not None:
                        gap[i] += 1
                        if gap[i] > 2:
                            close(i)
                    continue
                add(ex, 'seen_s', DT); add(ex, 'seen_hits', hits)
                add(ex, f'task{task[t][i]}_s', DT); add(ex, f'task{task[t][i]}_hits', hits)
                pinned = sum(1 for e in o if supp[t][e] >= duck[team[e]])
                # shot at by the mover's side: rounds aimed at e (only his enemies aim at him) in the last RECENT s
                shot_at = 0
                for e in o:
                    lst = at_enemy[e]
                    lo = bisect.bisect_left(lst, t0-RECENT); hi = bisect.bisect_left(lst, t0)
                    if hi > lo:
                        shot_at += 1
                cls = 'all' if pinned == len(o) else 'some' if pinned else 'none'
                add(cover, f'{cls}_s', DT); add(cover, f'{cls}_hits', hits)
                k = str(min(4, len(o)-pinned))
                add(unp, f'u{k}_s', DT); add(unp, f'u{k}_hits', hits)
                ucls = 'all' if shot_at == len(o) else 'some' if shot_at else 'none'
                add(uf, f'{ucls}_s', DT); add(uf, f'{ucls}_hits', hits)
                add(ex, 'observers', len(o))
                if run_start[i] is None:
                    run_start[i] = t
                run_len[i] += 1 + gap[i]; gap[i] = 0; run_dist[i] += d; run_sprint[i] += bool(sprint[t][i]); run_hits[i] += hits
            else:
                if run_start[i] is not None:
                    gap[i] += 1
                    if gap[i] > 2:
                        close(i)
                o = seen_by(t, i)
                key = ('seen' if o else 'unseen') + f'_st{stance[t][i]}'
                add(still, key+'_s', DT); add(still, key+'_hits', hits)
    for i in range(N):
        close(i)
    # Shots at moving men: shooter state, range, reaction.
    sh = row['shooters']
    los_start = {}
    for s in shots:
        v = s['aimed_enemy']
        if v < 0:
            continue
        t = fi(s['time'])
        if not moving(t, v) and not (t+1 < n and moving(t+1, v)):
            continue
        o = s['owner']
        hit = any(x['soldier'] == v for x in s['victims'])
        sb = 'p' if supp[t][o] >= duck[team[o]] else 'r' if supp[t][o] >= duck[team[o]]-.2 else 's' if supp[t][o] >= .1 else '0'
        lst = at_enemy[o]
        fired_on = bisect.bisect_left(lst, s['time']) - bisect.bisect_left(lst, s['time']-RECENT) > 0
        rng = math.dist(pos[t][o][:2], pos[t][v][:2])
        # how long o had had an unbroken line to v at this shot
        k = t
        while k > 0 and v in obs[k-1][o]:
            k -= 1
        los = times[t]-times[k] if v in obs[t][o] else -1
        w = 'mg' if gun[o] else 'rifle'
        for key in (f'supp_{sb}', f'fired_on_{int(fired_on)}', f'{w}', f'range{bin_of(rng, RANGE_BINS)}',
                    f'los{bin_of(los, REACT_BINS) if los >= 0 else "x"}', 'all'):
            add(sh, key+'_n'); add(sh, key+'_hit', int(hit))
    # Reaction: an enemy gains a line to a moving man.
    re = row['reaction']
    for t in range(1, n):
        for v in range(N):
            if not moving(t, v):
                continue
            for e in range(N):
                if not alive[t][e] or team[e] == team[v] or v not in obs[t][e] or v in obs[t-1][e]:
                    continue
                t0 = times[t]
                # first round e aims at v while the line lasts (+0.5 s)
                k = t
                while k+1 < n and v in obs[k+1][e]:
                    k += 1
                t_end = times[k]+0.5
                aimed = None
                for s in shots_by_owner(shots, e, t0, t_end):
                    if s['aimed_enemy'] == v:
                        aimed = s['time']
                        break
                pinned = supp[t][e] >= duck[team[e]]
                tag = 'pinned' if pinned else 'free'
                add(re, f'{tag}_onsets')
                add(re, f'{tag}_line_s', times[k]-t0+DT)
                if aimed is None:
                    add(re, f'{tag}_no_round')
                else:
                    add(re, f'{tag}_d{bin_of(aimed-t0, REACT_BINS)}')
                    add(re, f'{tag}_delay_sum', aimed-t0)
                hs = [h for h in hits_on[v] if t0 <= h <= t_end]
                if hs:
                    add(re, f'{tag}_hit_within_line')
    # Fire rate and hit share by the shooter's own suppression, when he has an enemy in view and stands still.
    ef = row['effect']
    hit_shot = {}
    for s in shots:
        hit_shot[(s['owner'], s['time'])] = hit_shot.get((s['owner'], s['time']), 0) + len(s['victims'])
    for t in range(1, n):
        t0, t1 = times[t], times[t]+DT
        for i in range(N):
            if not alive[t][i] or not obs[t][i] or moving(t, i):
                continue
            x = supp[t][i]; dk = duck[team[i]]
            b = 'p' if x >= dk else 'r' if x >= dk-.2 else 's' if x >= .1 else '0'
            k = count(by_owner[i], t0, t1)
            add(ef, f'{b}_s', DT); add(ef, f'{b}_rounds', k)
    for s in shots:
        t = fi(s['time']); i = s['owner']; x = supp[t][i]; dk = duck[team[i]]
        b = 'p' if x >= dk else 'r' if x >= dk-.2 else 's' if x >= .1 else '0'
        add(ef, f'{b}_shots'); add(ef, f'{b}_shot_hits', int(any(v['soldier'] != i and team[v['soldier']] != team[i] for v in s['victims'])))
    # Area: machine-gun bursts, and how many enemies' suppression jumps while each lasts.
    ar = row['area']
    for o in range(N):
        if not gun[o]:
            continue
        ts = by_owner[o]
        j = 0
        while j < len(ts):
            k = j
            while k+1 < len(ts) and ts[k+1]-ts[k] < 1.0:
                k += 1
            a, b = fi(ts[j]), min(n-1, fi(ts[k]+0.6)+1)
            jumped = set()
            for t in range(max(1, a), b+1):
                for e in range(N):
                    if team[e] != team[o] and alive[t][e] and supp[t][e]-supp[t-1][e] >= JUMP:
                        jumped.add(e)
            add(ar, 'bursts'); add(ar, 'rounds', k-j+1); add(ar, 'men_jumped', len(jumped))
            add(ar, f'jumped{min(4, len(jumped))}')
            # The burst's main target: did it pin him, and for how long after the burst ended?
            aims = defaultdict(int)
            for s in shots_by_owner(shots, o, ts[j], ts[k]):
                if s['aimed_enemy'] >= 0:
                    aims[s['aimed_enemy']] += 1
            if aims:
                v = max(aims, key=aims.get)
                tb = fi(ts[j]); te = fi(ts[k])
                rng = math.dist(pos[tb][o][:2], pos[tb][v][:2])
                rb = bin_of(rng, RANGE_BINS)
                peak = max(supp[t][v] for t in range(tb, min(n, te+4)))
                pinned = peak >= duck[team[v]]
                add(ar, f'target_r{rb}'); add(ar, f'target_r{rb}_pinned', int(pinned))
                add(ar, f'target_st{stance[tb][v]}'); add(ar, f'target_st{stance[tb][v]}_pinned', int(pinned))
                add(ar, 'target_pinned', int(pinned)); add(ar, 'target_rounds', aims[v])
                add(ar, 'target_seen', int(v in obs[tb][o]))
                if pinned:
                    t = te
                    while t+1 < n and supp[t+1][v] >= duck[team[v]] and alive[t+1][v]:
                        t += 1
                    add(ar, 'pinned_after_s', max(0.0, times[t]-times[te]))
            j = k+1
    # What the guns do, frame by frame, and whether a mover's watchers are under machine-gun fire.
    ga, mc = row.setdefault('gunner', {}), row.setdefault('mgcover', {})
    squad = [i//8 for i in range(N)]
    gun_of = {squad[i]: i for i in range(N) if gun[i]}
    mg_at = defaultdict(list)             # gun -> (time, aimed enemy)
    for s in shots:
        if gun[s['owner']]:
            mg_at[s['owner']].append((s['time'], s['aimed_enemy']))
    for t in range(1, n):
        t0, t1 = times[t], times[t]+DT
        for o in range(N):
            if not gun[o] or not alive[t][o]:
                continue
            if count(by_owner[o], t0, t1):
                k = 'firing'
            elif supp[t][o] >= duck[team[o]]:
                k = 'pinned'
            elif moving(t, o):
                k = 'moving'
            elif mag[t][o] == 0:
                k = 'reloading'
            elif obs[t][o]:
                k = 'enemy_in_view_not_firing'
            elif count(by_owner[o], t0-3, t0):
                k = 'between_bursts_no_view'
            else:
                k = 'no_enemy_in_view'
            add(ga, k, DT)
    for t in range(1, n):
        t0 = times[t]
        for i in range(N):
            if not alive[t][i] or not moving(t, i):
                continue
            o = seen_by(t, i)
            if not o:
                continue
            own = gun_of.get(squad[i])
            hits = count(hits_on[i], t0, t0+DT)
            def fired_at(g, targets):
                lst = mg_at.get(g, [])
                lo = bisect.bisect_left(lst, (t0-RECENT, -99)); hi = bisect.bisect_left(lst, (t0, -99))
                return [e for (_, e) in lst[lo:hi] if (targets is None or e in targets)]
            oset = set(o)
            if own is not None and alive[t][own]:
                now = obs[t][own] & oset
                add(mc, 'gun_alive_s', DT)
                add(mc, 'gun_line_any_s', DT*bool(now)); add(mc, 'gun_line_all_s', DT*(now == oset))
                recent = set()
                for u in range(max(0, t-30), t+1):
                    recent |= obs[u][own] & oset
                add(mc, 'gun_saw_any_6s_s', DT*bool(recent))
                if not moving(t, own):
                    add(mc, 'gun_still_s', DT); add(mc, 'gun_still_line_any_s', DT*bool(now))
            others = set()
            for u in range(max(0, t-50), t+1):
                for j in range(N):
                    if j != i and team[j] == team[i] and alive[u][j]:
                        others |= obs[u][j] & oset
            add(mc, 'watchers_n', len(oset)); add(mc, 'watchers_seen_by_mates_10s', len(others))
            if own is not None and alive[t][own] and fired_at(own, oset):
                k = 'own_gun_on_a_watcher'
            elif any(fired_at(g, oset) for g in range(N) if gun[g] and team[g] == team[i] and g != own):
                k = 'other_gun_on_a_watcher'
            elif own is not None and alive[t][own] and fired_at(own, None):
                k = 'own_gun_on_someone_else'
            elif own is not None and alive[t][own]:
                k = 'own_gun_silent'
                g = own
                why = ('moving' if moving(t, g) else 'pinned' if supp[t][g] >= duck[team[g]] else 'reloading' if mag[t][g] == 0
                       else 'enemy_in_view' if obs[t][g] else 'no_enemy_in_view')
                add(mc, f'silent_{why}_s', DT)
                add(mc, f'silent_{why}_sees_watcher_s', DT*bool(obs[t][g] & oset))
                if why == 'moving':
                    add(mc, f'guntask{task[t][g]}_s', DT)
            else:
                k = 'own_gun_down'
            add(mc, k+'_s', DT); add(mc, k+'_hits', hits)
            add(mc, f'mtask{task[t][i]}_{k}_s', DT)
    # Support timeline: each overwatch assignment a gunner receives (task Overwatch, one assignment id):
    # travel until he stops, then his first round; and his squadmates' exposed movement before he is set.
    tl = row.setdefault('timeline', {})
    for g in range(N):
        if not gun[g]:
            continue
        t = 1
        while t < n:
            if not (alive[t][g] and task[t][g] == 1 and (task[t-1][g] != 1 or asg[t][g] != asg[t-1][g])):
                t += 1
                continue
            a = asg[t][g]; start = t; k = t
            while k+1 < n and alive[k+1][g] and task[k+1][g] == 1 and asg[k+1][g] == a:
                k += 1
            # arrival: first frame from which he stays still for 1 s (5 frames)
            arrive = None; dist = 0.0
            for u in range(start, k+1):
                if all(not moving(w, g) for w in range(u, min(k+1, u+5))) and u+4 <= k:
                    arrive = u
                    break
                dist += math.dist(pos[u][g][:2], pos[u-1][g][:2]) if moving(u, g) else 0.0
            add(tl, 'assignments')
            add(tl, 'held_s', times[k]-times[start]+DT)
            nxt = 'battle_end' if k+1 >= n else 'down' if not alive[k+1][g] else ('new_station' if task[k+1][g] == 1 else f'task{task[k+1][g]}')
            add(tl, f'end_{"unset" if arrive is None else "set"}_{nxt}')
            if arrive is None:
                add(tl, 'never_set')
                set_t = times[k]+DT
            else:
                add(tl, 'set'); add(tl, 'travel_s', times[arrive]-times[start]); add(tl, 'travel_m', dist)
                add(tl, f'travel{bin_of(times[arrive]-times[start], REACT_BINS)}')
                set_t = times[arrive]
            lst = by_owner[g]; j = bisect.bisect_left(lst, times[start])
            first = lst[j] if j < len(lst) and lst[j] <= times[k]+DT else None
            if first is None:
                add(tl, 'no_round')
            else:
                add(tl, 'first_round_s', first-times[start]); add(tl, 'fired')
                add(tl, f'first{bin_of(first-times[start], REACT_BINS)}')
                if arrive is not None and first >= set_t:
                    add(tl, 'after_set_s', first-set_t); add(tl, 'after_set_n')
            # squadmates moving in view while he is not yet set (or not yet firing)
            for u in range(start, k+1):
                ready = first is not None and times[u] >= first
                for i in range(N):
                    if i != g and i//8 == g//8 and moving(u, i) and seen_by(u, i):
                        add(tl, 'mates_exposed_before_fire_s' if not ready else 'mates_exposed_after_fire_s', DT)
            t = k+1
    # Pinned episodes and share of time pinned, per team.
    pn = row['pinned']
    for i in range(N):
        runlen = 0
        for t in range(n):
            if alive[t][i] and supp[t][i] >= duck[team[i]]:
                runlen += 1
            elif runlen:
                add(pn, f'team{team[i]}_runs'); add(pn, f'team{team[i]}_run_s', runlen*DT); add(pn, f'run{bin_of(runlen*DT, DUR_BINS)}'); runlen = 0
            if alive[t][i]:
                add(pn, f'team{team[i]}_alive_s', DT)
                if supp[t][i] >= duck[team[i]]:
                    add(pn, f'team{team[i]}_pinned_s', DT)
    # Lethality.
    le = row['lethality']
    for s in shots:
        t = fi(s['time']); o = s['owner']; v = s['aimed_enemy']
        w = 'mg' if gun[o] else 'rifle'
        add(le, f'{w}_rounds')
        enemy_hits = sum(1 for x in s['victims'] if team[x['soldier']] != team[o])
        friendly = sum(1 for x in s['victims'] if team[x['soldier']] == team[o])
        add(le, f'{w}_hits', enemy_hits); add(le, 'friendly_hits', friendly)
        if v >= 0:
            rng = math.dist(pos[t][o][:2], pos[t][v][:2])
            mv = moving(t, v) or (t+1 < n and moving(t+1, v))
            tag = f'{w}_r{bin_of(rng, RANGE_BINS)}'
            add(le, tag+'_n'); add(le, tag+'_hit', int(any(x['soldier'] == v for x in s['victims'])))
            ti = fi(s['impact_time'])
            jump = any(ti+d < n and ti+d > 0 and supp[ti+d][v]-supp[ti+d-1][v] >= JUMP for d in (0, 1))
            add(le, f'{w}_r{bin_of(rng, RANGE_BINS)}_jump', int(jump))
            tag = f'target_{"moving" if mv else "still"}_st{stance[t][v]}'
            add(le, tag+'_n'); add(le, tag+'_hit', int(any(x['soldier'] == v for x in s['victims'])))
    down = sum(1 for i in range(N) if alive[0][i] and not alive[-1][i])
    add(le, 'casualties', down)
    for tm in (0, 1):
        add(le, f'casualties_team{tm}', sum(1 for i in range(N) if team[i] == tm and alive[0][i] and not alive[-1][i]))
        add(le, f'start_team{tm}', sum(1 for i in range(N) if team[i] == tm and alive[0][i]))
    return row


_SHOT_INDEX: dict = {}


def shots_by_owner(shots, owner, a, b):
    key = id(shots)
    if _SHOT_INDEX.get('key') != key:
        idx = defaultdict(list)
        for s in shots:
            idx[s['owner']].append(s)
        _SHOT_INDEX.clear(); _SHOT_INDEX.update(key=key, idx=idx)
    for s in _SHOT_INDEX['idx'][owner]:
        if s['time'] < a:
            continue
        if s['time'] > b:
            break
        yield s


if __name__ == '__main__':
    import sys
    print(json.dumps(analyse(Path(sys.argv[1])), indent=1)[:3000])
