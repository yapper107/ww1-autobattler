"""Plan 028 Stage 0: why covering fire fails.

Reads the ``covering_check``, ``covering_clock_reset`` and ``movement_paused`` rows a traced battle
writes (source with the plan 028 Stage 0 instrumentation), the Azure squad decision file
(``--record-squad-decisions``) and ``shots.jsonl``, and reports:

* the support_wait share and live-support share of the squad decisions;
* every failed covering check labelled with its first failing reason (the order is applied here);
* wait episodes: how many, how long, how they end and what held them;
* seconds waited per exposed crossing, rounds on the threat and credit latency;
* covering-clock resets by source, waypoint-less pauses and pause-caused gun moves;
* the danger distribution of exposed crossings (exposure, machine gun, overlooking tracks);
* plan 028 Stage 3c (``--cover-graduated`` rows): the graduated outcomes (stale_cross, low_cross,
  high_go_round, high_pause), every exposed commit with its wait, and the hits and casualties the
  committing squad took during the bound that followed it; friendly fire and casualties by side.
* plan 028 Stage 1 + 2a (``--cover-requests`` / ``--cover-reports`` rows): covering requests (the
  ``cover_request`` start/retask/end rows), who was tasked, the payload orders, request-to-first-round
  (from ``shots.jsonl``), request-to-first-credit and request-to-credit latency (``cover_credit`` rows),
  rounds on the named threat while the request lived, and orders issued per side.

Usage::

    python3 tools/covering_metrics.py battle RUN_DIR [--decisions FILE] [--out FILE]
    python3 tools/covering_metrics.py pool METRICS.json... [--out FILE] [--markdown FILE]

Rows are evidence only; nothing here feeds a battle.
"""
from __future__ import annotations

import argparse
import bisect
import json
import math
import sys
from collections import Counter, defaultdict
from pathlib import Path

SQUADS_PER_TEAM = 4
TASKS = ('None', 'Overwatch', 'Advance', 'Hold', 'Rally', 'RearGuard', 'ClearLane', 'Flank', 'PullBack',
         'BoundMove', 'BoundCover', 'Window')
# First failing reason, in the plan's numbering. The order of the tests is in ``label``.
REASONS = ('no_fire', 'no_primary', 'unengageable', 'no_bearer', 'bearer_not_firing', 'report_late',
           'rounds_lt3', 'wrong_target', 'clock_clobbered')
# Why a bearer (a friendly with a line to the primary within 100 m) was not firing, from most to
# least blocked; a check takes the cause of its least-blocked bearer.
BEARER_CAUSES = ('not_seen', 'moving', 'holding_fire', 'reloading', 'suppressed', 'no_solution', 'firing_not_landing', 'idle')
EPISODE_GAP = 9.0        # a squad's waiting checks further apart than this start a new episode
TRACK_ERROR = 10.0       # rounds count within 10 m of the track: an enemy further than this is unengageable
CREDIT_WINDOW = 6.0
LATE_CLOCK = 8.0         # a covering pass waiting on a clock reset within this long is "clobbered"
SHOT_NEAR = 6.0          # a shot "lands near" its aim point within this distance (the delivery rule)
# Plan 028 Stage 3c. A graduated commit check that passes by staleness or low danger, or gives the
# crossing up (high danger), is a verdict, not a failure. high_pause (a running bound stopped by a
# fresh high-danger threat) is still a covering failure and keeps its reason.
GRADUATED_OUTCOMES = ('stale_cross', 'low_cross', 'high_go_round', 'high_pause')
NON_FAILURES = ('pass', 'override', 'clock_running', 'stale_cross', 'low_cross', 'high_go_round')
PREPARATION = 8.0        # the exposed preparation clock: a passing commit check with this much wait commits
BOUND_WINDOW = 60.0      # a commit's first bound is followed at most this long
# Trace rows that end the first bound after a commit (the squad's own rows, strictly later).
BOUND_ENDS = ('route_stage_completed', 'movement_paused', 'plan_completed', 'plan_cancelled', 'proposal_accepted')
EVENT_HIT, EVENT_CASUALTY = 3, 4   # EventKind::Hit (actor shooter, target victim), ::Casualty (actor the man)
SOLDIERS_PER_SQUAD, SOLDIERS_PER_TEAM = 8, 32

# One compact row per covering check in a battle's metric JSON (for threshold and breakdown tables).
CHECK_COLUMNS = ('time', 'squad', 'gate', 'reason', 'cause', 'pass', 'covering', 'fresh', 'primary_age', 'primary_uncertainty',
                 'primary_mg', 'exposure', 'overlooking', 'overlooking_fresh', 'mg_overlooks', 'mg_fresh', 'has_waypoint',
                 'movement_block', 'waited', 'rounds', 'late_rounds', 'other_rounds', 'obs_rounds', 'shots', 'landed', 'bearers', 'saw')
# Bearer list columns (Diagnostics.cpp TraceCoveringTruth).
B_ID, B_GROUP, B_SEEN, B_TASK, B_HOLD, B_RELOAD, B_SUPP, B_MOVING, B_SHOT_AGE, B_AIM, B_DIST, B_VISIBLE, B_SOLUTION = range(13)


def team_of(squad: int) -> int:
    return 0 if squad < SQUADS_PER_TEAM else 1


def read_jsonl(path: Path, kinds=None):
    out = []
    if not path or not Path(path).exists():
        return out
    with open(path) as stream:
        for line in stream:
            if not line.strip():
                continue
            if kinds is not None and not any(f'"kind":"{k}"' in line for k in kinds):
                continue
            out.append(json.loads(line))
    return out


def bearer_cause(bearer, primary) -> str:
    if not bearer[B_SEEN] and not (len(bearer) > B_VISIBLE and bearer[B_VISIBLE]):
        return 'not_seen'
    if bearer[B_MOVING]:
        return 'moving'
    if bearer[B_HOLD]:
        return 'holding_fire'
    if bearer[B_RELOAD]:
        return 'reloading'
    if bearer[B_SUPP]:
        return 'suppressed'
    firing_primary = bearer[B_SHOT_AGE] <= 3 and bearer[B_AIM] == primary
    if firing_primary:
        return 'firing_not_landing'
    if len(bearer) > B_SOLUTION and bearer[B_SOLUTION] != primary:
        return 'no_solution'
    return 'idle'


def label(check: dict, resets_by_squad: dict) -> tuple[str, str | None]:
    """(reason, sub-cause) of one covering check. ``pass``/``override``/``clock_running`` are not failures.

    Order: a covered check passes, or waits on its clock (9, if another source reset it within 8 s);
    otherwise 1 no fresh fire, 2 no primary, 3 primary dead or away from its track, then the truth of
    the rounds on the primary in the last 6 s: >=3 landed but not credited is 6 (late report), 1-2 is 7;
    none: no bearer is 4, a bearer firing at another enemy is 8, otherwise 5 split by cause."""
    if check['covering']:
        if check['pass']:
            return 'pass', None
        t, squad = check['time'], check['squad']
        times = resets_by_squad.get(squad, [])
        i = bisect.bisect_right(times, t)
        recent = i > 0 and t - times[i-1] <= LATE_CLOCK
        return ('clock_clobbered' if recent else 'clock_running'), None
    outcome = check.get('graduated_outcome') or ''
    if outcome in ('stale_cross', 'low_cross') and check['pass']:
        return outcome, None
    if outcome == 'high_go_round':
        return outcome, None
    if check['pass']:
        return 'override', None
    if not check.get('fresh'):
        # The leader has no fresh report at all; the sub-cause is what the truth says happened.
        if check.get('primary', -1) < 0:
            return 'no_fire', 'no_primary'
        reason, cause = truth_chain(check)
        return 'no_fire', reason + (f'/{cause}' if cause else '')
    primary = check.get('primary', -1)
    if primary < 0:
        return 'no_primary', None
    return truth_chain(check)


def truth_chain(check: dict) -> tuple[str, str | None]:
    """Reasons 3 to 8, from the truth (obs_*) of a check whose primary is known."""
    primary = check.get('primary', -1)
    if 'obs_primary' not in check or check.get('obs_primary', -1) < 0:
        return 'no_truth', None
    if not check.get('obs_alive', 1) or check.get('obs_track_error', 0) > TRACK_ERROR:
        return 'unengageable', 'dead' if not check.get('obs_alive', 1) else 'moved'
    landed = check.get('obs_rounds', 0)
    if landed >= 3:
        return 'report_late', None
    if landed > 0:
        return 'rounds_lt3', None
    bearers = check.get('obs_bearer_list', [])
    if not bearers:
        return 'no_bearer', None
    if check.get('obs_firing_other', 0) > 0 and check.get('obs_firing_primary', 0) == 0:
        return 'wrong_target', None
    causes = [bearer_cause(b, primary) for b in bearers]
    return 'bearer_not_firing', max(causes, key=BEARER_CAUSES.index)


def quantiles(values, qs=(0.1, 0.25, 0.5, 0.75, 0.9)):
    values = sorted(v for v in values if v is not None and not (isinstance(v, float) and math.isnan(v)))
    if not values:
        return dict(n=0)
    def q(p):
        k = (len(values)-1)*p
        lo, hi = math.floor(k), math.ceil(k)
        return values[lo] + (values[hi]-values[lo])*(k-lo)
    return dict(n=len(values), mean=sum(values)/len(values), **{f'p{int(p*100)}': q(p) for p in qs}, max=values[-1])


def decision_metrics(path) -> dict:
    """support_wait share and live-support share of the Azure squad decisions.

    live support: at least one candidate row of the decision carries covering=1 (feature 60, the
    CoveringPath value of its first bound). exposed: at least one candidate row has exposure >= .2."""
    rows = read_jsonl(Path(path)) if path else []
    outcomes = Counter()
    live = exposed = live_exposed = candidates = exposed_candidates = covered_exposed_candidates = 0
    for row in rows:
        outcomes[row['outcome']] += 1
        cand = [f for f in row.get('features', []) if sum(f[33:38]) > 0]
        candidates += len(cand)
        any_live = any(f[60] > 0.5 for f in cand)
        any_exposed = any(f[55] >= 0.2 for f in cand)
        live += any_live
        exposed += any_exposed
        live_exposed += any_exposed and any(f[60] > 0.5 and f[55] >= 0.2 for f in cand)
        for f in cand:
            if f[55] >= 0.2:
                exposed_candidates += 1
                covered_exposed_candidates += f[60] > 0.5
    n = len(rows)
    return dict(decisions=n, outcomes=dict(outcomes),
                support_wait_share=outcomes['support_wait']/n if n else None,
                live_support_share=live/n if n else None,
                exposed_decisions=exposed, live_exposed_decisions=live_exposed,
                exposed_candidates=exposed_candidates, covered_exposed_candidates=covered_exposed_candidates)


def shot_index(path: Path):
    """shots by (team, aimed enemy): sorted times, and whether each landed within 6 m of its aim point."""
    index = defaultdict(lambda: ([], []))
    if not path.exists():
        return index
    rows = read_jsonl(path)
    rows.sort(key=lambda s: s['time'])
    for s in rows:
        if s.get('aimed_enemy', -1) < 0:
            continue
        a, e = s['aimed_point'], s['end']
        near = math.dist(a[:2], e[:2]) < SHOT_NEAR
        times, landed = index[(s['team'], s['aimed_enemy'])]
        times.append(s['time'])
        landed.append(near)
    return index


def shots_between(index, team, enemy, start, end):
    times, landed = index.get((team, enemy), ([], []))
    i, j = bisect.bisect_right(times, start), bisect.bisect_right(times, end)
    return j - i, sum(landed[i:j])


def episodes_of(checks, resets, pauses, battle_end, accepted=()):
    """Wait episodes: a squad's consecutive failing commit-wait checks (support_wait) no further than
    9 s apart. Ends: 'covered' (a covered pass), 'override' (the 20 s platoon-fire override), the
    source of the clock reset that ended it, 'battle_end', or 'lapsed' (no later check or reset)."""
    by_squad = defaultdict(list)
    for c in checks:
        if c['gate'] == 'commit':
            by_squad[c['squad']].append(c)
    resets_by = defaultdict(list)
    for r in resets:
        resets_by[r['squad']].append(r)
    accepted_by = defaultdict(list)
    for a in accepted:
        accepted_by[a['squad']].append(a['time'])
    out = []

    def silent_end(ep, squad):
        """An episode that stopped without a passing commit check: the first clock reset that cleared
        it, a different (protected) manoeuvre committed, or 'lapsed' (the leader stopped assessing)."""
        last = ep['last']
        for r in resets_by[squad]:
            if last <= r['time'] <= last + EPISODE_GAP and not r.get('restart'):
                return r['source'], r['time']
        for t in accepted_by[squad]:
            if last <= t <= last + EPISODE_GAP:
                return 'committed_other', t
        return 'lapsed', last
    for squad, rows in by_squad.items():
        rows.sort(key=lambda c: c['time'])
        current = None
        def close(end_reason, end_time):
            ep = current
            ep['end'] = end_reason
            ep['length'] = max(0.0, (end_time if end_time is not None else ep['last']) - ep['start'])
            out.append(ep)
        for c in rows:
            waiting = not c['pass']
            if current is not None and c['time'] - current['last'] > EPISODE_GAP:
                # The wait stopped without a verdict row: the reset that ended it, if any.
                close(*silent_end(current, squad))
                current = None
            if waiting:
                if current is None:
                    current = dict(squad=squad, team=team_of(squad), start=c['time'], last=c['time'], checks=0,
                                   reasons=Counter(), causes=Counter(), first_reason=c['_reason'],
                                   exposure=c.get('exposure'), mg=c.get('mg_overlooks'), overlooking=c.get('overlooking'),
                                   primary_age=c.get('primary_age'), primary_mg=c.get('primary_mg'),
                                   max_obs_rounds=0, first_truth=None, first_credit=None, retargets=0)
                current['last'] = c['time']
                current['checks'] += 1
                current['reasons'][c['_reason']] += 1
                if c['_cause']:
                    current['causes'][f"{c['_reason']}:{c['_cause']}"] += 1
                current['max_obs_rounds'] = max(current['max_obs_rounds'], c.get('obs_rounds', 0))
                if current['first_truth'] is None and c.get('obs_rounds', 0) > 0:
                    current['first_truth'] = c['time']
                if current['first_credit'] is None and c.get('rounds', 0) > 0:
                    current['first_credit'] = c['time']
                if c.get('graduated_outcome') == 'high_go_round':
                    # Plan 028 3c: the crossing was given up for a way round; the wait ends here.
                    close('high_go_round', c['time'])
                    current = None
            elif current is not None:
                close('covered' if c['covering'] else (c.get('graduated_outcome') or 'override'), c['time'])
                current = None
        if current is not None:
            close(*(silent_end(current, squad) if battle_end - current['last'] > EPISODE_GAP else ('battle_end', battle_end)))
    for ep in out:
        # Retargets inside the episode: target_changed restarts of the same squad.
        ep['retargets'] = sum(1 for r in resets_by[ep['squad']] if r['source'] == 'target_changed' and ep['start'] < r['time'] <= ep['last'])
        ep['dominant'] = ep['reasons'].most_common(1)[0][0] if ep['reasons'] else None
        ep['reasons'] = dict(ep['reasons'])
        ep['causes'] = dict(ep['causes'])
    out.sort(key=lambda e: (e['start'], e['squad']))
    return out


def committed(c: dict) -> bool:
    """A commit-wait check at which the squad committed its exposed crossing. Rows written with the
    Stage 3c source carry ``result``; older rows commit when the gate passed and the 8 s exposed
    preparation had run (no go-now policy acts in these Legacy battles)."""
    if 'result' in c:
        return c['result'] == 'committed'
    return bool(c['pass']) and (c.get('waited') or -1) >= PREPARATION - 1e-3


def commit_kind(c: dict) -> str:
    if c['covering']:
        return 'covered'
    return c.get('graduated_outcome') or 'override'


def request_metrics(run: Path, rows, orders, battle_end) -> dict:
    """Plan 028 Stage 1: one record per covering request (squad, serial): its gate, threat, live window
    (start to its end row, or the battle's end), the riflemen it tasked, whether the gun answered, the
    first round any man of the squad aimed at the threat after it started, the first credited round and
    the gate's three at the requesting leader, and the rounds on the threat while it lived. Orders
    issued per side, and those carrying a covering payload."""
    shots = read_jsonl(run/'shots.jsonl')
    by_squad_enemy = defaultdict(list)
    for s in shots:
        if s.get('aimed_enemy', -1) >= 0:
            a, e = s['aimed_point'], s['end']
            by_squad_enemy[(s['squad'], s['aimed_enemy'])].append((s['time'], s['owner'], math.dist(a[:2], e[:2]) < SHOT_NEAR))
    for v in by_squad_enemy.values():
        v.sort()
    reqs = {}
    for r in sorted(rows, key=lambda r: (r['time'], r['id'])):
        key = (r['squad'], r['request'])
        if r['kind'] == 'cover_request':
            q = reqs.setdefault(key, dict(squad=r['squad'], team=team_of(r['squad']), serial=r['request'], enemy=r['enemy'], gate=r.get('gate'),
                                          start=r.get('started_at', r['time']), end=None, tasked=set(), gun=-1, mg=None, contact_age=None,
                                          first_credit=None, credited=None))
            if r['reason'] in ('start', 'retask'):
                q['tasked'].update(r.get('tasked', []))
                q['gun'] = r.get('gun', -1)
                if q['contact_age'] is None:
                    q['contact_age'], q['mg'] = r.get('contact_age'), r.get('mg')
            elif r['reason'] == 'end':
                q['end'] = r['time']
        elif key in reqs:
            q = reqs[key]
            if r['reason'] == 'first' and q['first_credit'] is None:
                q['first_credit'] = r['request_to_credit_seconds']
            if r['reason'] == 'credited' and q['credited'] is None:
                q['credited'] = r['request_to_credit_seconds']
    out = []
    for q in reqs.values():
        end = q['end'] if q['end'] is not None else battle_end
        fired = [s for s in by_squad_enemy.get((q['squad'], q['enemy']), []) if q['start'] <= s[0] <= end]
        tasked_shooters = set(q['tasked']) | ({q['gun']} if q['gun'] >= 0 else set())
        out.append(dict(squad=q['squad'], team=q['team'], gate=q['gate'], enemy=q['enemy'], start=q['start'], seconds=max(0.0, end - q['start']),
                        tasked=len(q['tasked']), gun=q['gun'] >= 0, contact_age=q['contact_age'], mg=q['mg'],
                        first_round=(fired[0][0] - q['start']) if fired else None,
                        first_credit=q['first_credit'], credited=q['credited'],
                        rounds=len(fired), landed=sum(1 for s in fired if s[2]),
                        tasked_rounds=sum(1 for s in fired if s[1] in tasked_shooters),
                        gun_rounds=sum(1 for s in fired if s[1] == q['gun'])))
    out.sort(key=lambda q: (q['start'], q['squad']))
    per_team = Counter(team_of(r['squad']) for r in orders)
    payload = Counter(team_of(r['squad']) for r in orders if 'fire_enemy' in r)
    return dict(requests=out, orders={str(t): per_team.get(t, 0) for t in (0, 1)},
                payload_orders={str(t): payload.get(t, 0) for t in (0, 1)},
                minutes=battle_end/60 if battle_end else None)


def request_summary(reqs, battles, minutes, orders, payload) -> dict:
    """Pooled covering requests: how many, how many men answered, and how fast fire and credit came."""
    n = len(reqs)
    if not n:
        return dict(n=0)
    share = lambda f: sum(1 for q in reqs if f(q))/n
    return dict(n=n, per_battle=n/battles if battles else None,
                by_gate=dict(Counter(q['gate'] for q in reqs)),
                tasked_riflemen=dict(sorted(Counter(q['tasked'] for q in reqs).items())),
                with_gun=share(lambda q: q['gun']),
                seconds=quantiles([q['seconds'] for q in reqs]),
                contact_age=quantiles([q['contact_age'] for q in reqs]),
                fired_share=share(lambda q: q['rounds'] > 0),
                first_credit_share=share(lambda q: q['first_credit'] is not None),
                credited_share=share(lambda q: q['credited'] is not None),
                request_to_first_round=quantiles([q['first_round'] for q in reqs]),
                request_to_first_credit=quantiles([q['first_credit'] for q in reqs]),
                request_to_credit=quantiles([q['credited'] for q in reqs]),
                rounds_on_threat=quantiles([q['rounds'] for q in reqs]),
                rounds_landed=quantiles([q['landed'] for q in reqs]),
                rounds_on_threat_per_request_second=sum(q['rounds'] for q in reqs)/max(1e-9, sum(q['seconds'] for q in reqs)),
                tasked_share_of_rounds=sum(q['tasked_rounds'] for q in reqs)/max(1, sum(q['rounds'] for q in reqs)),
                gun_share_of_rounds=sum(q['gun_rounds'] for q in reqs)/max(1, sum(q['rounds'] for q in reqs)),
                orders_per_minute={t: orders[t]/minutes for t in orders} if minutes else None,
                payload_orders_per_minute={t: payload[t]/minutes for t in payload} if minutes else None)


SUPPLY_KINDS = ('cover_gun_aim', 'cover_shift', 'cover_platoon', 'cover_platoon_payload')


def supply_metrics(run: Path, rows) -> dict:
    """Plan 028 Stage 4: how often each supply mechanism fired. Gun re-stations and searches that found
    no station (cover_gun_aim restation / no_station, by the gate of the request they answered), covered
    rifle shifts started and arrived (cover_shift start / arrived), aimed platoon Support directives
    (cover_platoon: whether the chosen squad had a reported line, whether the old rule would have picked
    another squad) and the payloads their guns took (cover_platoon_payload), with whether that gun then
    fired on the named enemy within 20 s (shots.jsonl)."""
    count = Counter((r['kind'], r['reason']) for r in rows)
    aims = [r for r in rows if r['kind'] == 'cover_gun_aim' and r['reason'] == 'restation']
    shifts = [r for r in rows if r['kind'] == 'cover_shift' and r['reason'] == 'start']
    arrivals = defaultdict(list)
    for r in rows:
        if r['kind'] == 'cover_shift' and r['reason'] == 'arrived':
            arrivals[(r['squad'], r['man'])].append(r['time'])
    platoon = [r for r in rows if r['kind'] == 'cover_platoon']
    payloads = [r for r in rows if r['kind'] == 'cover_platoon_payload']
    fired = aim_fired = 0
    if payloads or aims:
        shots = read_jsonl(run/'shots.jsonl')
        by_owner = defaultdict(list)
        for x in shots:
            if x.get('aimed_enemy', -1) >= 0:
                by_owner[(x['owner'], x['aimed_enemy'])].append(x['time'])
        for r in payloads:
            fired += any(r['time'] <= t <= r['time'] + 20 for t in by_owner.get((r['gun'], r['enemy']), []))
        for r in aims:
            aim_fired += any(r['time'] <= t <= r['time'] + 20 for t in by_owner.get((r['gun'], r['enemy']), []))
    return dict(counts={f'{k}:{v}': n for (k, v), n in sorted(count.items())},
                gun_restations=len(aims), gun_no_station=count[('cover_gun_aim', 'no_station')],
                gun_restations_by_gate=dict(Counter(r.get('gate') for r in aims)),
                gun_travel=[r.get('travel') for r in aims], gun_restation_fired=aim_fired,
                shifts=len(shifts), shifts_arrived=sum(1 for r in shifts if any(r['time'] < t <= r['time'] + 30 for t in arrivals[(r['squad'], r['man'])])),
                shift_travel=[r.get('travel') for r in shifts],
                platoon_directives=len(platoon), platoon_line=sum(1 for r in platoon if r.get('line')),
                platoon_changed=sum(1 for r in platoon if r['reason'] == 'changed_squad'),
                platoon_payloads=len(payloads), platoon_payload_fired=fired,
                by_team={str(t): dict(Counter(f"{r['kind']}:{r['reason']}" for r in rows if team_of(r['squad']) == t)) for t in (0, 1)})


def supply_summary(ms, battles) -> dict:
    tot = Counter()
    travel_gun, travel_shift = [], []
    gates = Counter()
    for m in ms:
        for k in ('gun_restations', 'gun_restation_fired', 'gun_no_station', 'shifts', 'shifts_arrived', 'platoon_directives', 'platoon_line', 'platoon_changed',
                  'platoon_payloads', 'platoon_payload_fired'):
            tot[k] += m[k]
        travel_gun += [t for t in m['gun_travel'] if t is not None]
        travel_shift += [t for t in m['shift_travel'] if t is not None]
        gates.update(m['gun_restations_by_gate'])
    per = {k: v/battles for k, v in tot.items()} if battles else {}
    return dict(totals=dict(tot), per_battle=per, gun_restations_by_gate=dict(gates), gun_travel=quantiles(travel_gun), shift_travel=quantiles(travel_shift),
                shift_arrival_share=tot['shifts_arrived']/tot['shifts'] if tot['shifts'] else None,
                gun_restation_fired_share=tot['gun_restation_fired']/tot['gun_restations'] if tot['gun_restations'] else None,
                platoon_line_share=tot['platoon_line']/tot['platoon_directives'] if tot['platoon_directives'] else None,
                platoon_changed_share=tot['platoon_changed']/tot['platoon_directives'] if tot['platoon_directives'] else None,
                platoon_payload_fired_share=tot['platoon_payload_fired']/tot['platoon_payloads'] if tot['platoon_payloads'] else None)


def team_of_soldier(soldier: int) -> int:
    return soldier // SOLDIERS_PER_TEAM


def casualty_metrics(run: Path, checks, bound_rows, battle_end):
    """Exposed commits and what the committing squad suffered on the bound that followed each, plus
    friendly fire and casualties by side, from events.jsonl (Hit and Casualty events)."""
    events = read_jsonl(run/'events.jsonl')
    hits = [(e['time'], e['actor'], e['target']) for e in events if e.get('kind') == EVENT_HIT and e.get('target', -1) >= 0]
    downs = [(e['time'], e['actor']) for e in events if e.get('kind') == EVENT_CASUALTY and e.get('actor', -1) >= 0]
    hits.sort()
    downs.sort()
    friendly = sum(1 for _, shooter, victim in hits if shooter >= 0 and team_of_soldier(shooter) == team_of_soldier(victim))
    ends_by = defaultdict(list)
    for r in bound_rows:
        ends_by[r['squad']].append(r['time'])
    for c in checks:
        if c['gate'] == 'commit':
            ends_by[c['squad']].append(c['time'])
    for v in ends_by.values():
        v.sort()
    commits = []
    for c in checks:
        if c['gate'] != 'commit' or not committed(c):
            continue
        t, squad = c['time'], c['squad']
        later = ends_by[squad]
        i = bisect.bisect_right(later, t + 1e-6)
        end = min(later[i] if i < len(later) else battle_end, t + BOUND_WINDOW, battle_end)
        mover_hits = sum(1 for ht, _, victim in hits if t < ht <= end and victim // SOLDIERS_PER_SQUAD == squad)
        mover_downs = sum(1 for dt, man in downs if t < dt <= end and man // SOLDIERS_PER_SQUAD == squad)
        commits.append(dict(time=t, squad=squad, team=team_of(squad), kind=commit_kind(c), waited=c.get('waited'),
                            exposure=c.get('exposure'), danger=c.get('graduated_danger') or '', bound_seconds=end - t,
                            hits=mover_hits, casualties=mover_downs))
    return dict(commits=commits, friendly_hits=friendly, hits=len(hits),
                casualties_by_team={str(k): sum(1 for _, man in downs if team_of_soldier(man) == k) for k in (0, 1)})


def battle(run: Path, decisions=None) -> dict:
    run = Path(run)
    rows = read_jsonl(run/'trace.jsonl', kinds=('covering_check', 'covering_clock_reset', 'movement_paused', 'proposal_accepted',
                                                 'cover_request', 'cover_credit', 'order_issued') + SUPPLY_KINDS + BOUND_ENDS)
    supply_rows = [r for r in rows if r['kind'] in SUPPLY_KINDS]
    rows = [r for r in rows if r['kind'] not in SUPPLY_KINDS]
    orders = [r for r in rows if r['kind'] == 'order_issued']
    request_rows = [r for r in rows if r['kind'] in ('cover_request', 'cover_credit')]
    rows = [r for r in rows if r['kind'] not in ('order_issued', 'cover_request', 'cover_credit')]
    bound_rows = [r for r in rows if r['kind'] in BOUND_ENDS]
    accepted = [r for r in rows if r['kind'] == 'proposal_accepted']
    checks = [r for r in rows if r['kind'] == 'covering_check']
    resets = [r for r in rows if r['kind'] == 'covering_clock_reset']
    pauses = [r for r in rows if r['kind'] == 'movement_paused']
    manifest = json.loads((run/'manifest.json').read_text()) if (run/'manifest.json').exists() else {}
    battle_end = max([r['time'] for r in rows], default=0.0)
    summary = run/'summary.md'
    if summary.exists():
        text = summary.read_text()
        if 'Duration: ' in text:
            try:
                battle_end = float(text.split('Duration: ')[1].split(' ')[0])
            except ValueError:
                pass
    shots = shot_index(run/'shots.jsonl')
    resets_by_squad = defaultdict(list)
    for r in resets:
        resets_by_squad[r['squad']].append(r['time'])
    for times in resets_by_squad.values():
        times.sort()
    mismatch = 0
    for c in checks:
        c['_reason'], c['_cause'] = label(c, resets_by_squad)
        mismatch += c['covering'] != c.get('explain_pass', c['covering'])
        primary = c.get('primary', -1)
        if primary >= 0:
            fired, landed = shots_between(shots, team_of(c['squad']), primary, c['time'] - CREDIT_WINDOW, c['time'])
            c['_shots'], c['_landed'] = fired, landed
    gates = {}
    for gate in ('commit', 'bound', 'internal'):
        g = [c for c in checks if c['gate'] == gate]
        failed = [c for c in g if c['_reason'] not in NON_FAILURES]
        gates[gate] = dict(checks=len(g), passed=sum(c['pass'] for c in g), covered=sum(c['covering'] for c in g),
                           reasons=dict(Counter(c['_reason'] for c in g)),
                           causes=dict(Counter(f"{c['_reason']}:{c['_cause']}" for c in failed if c['_cause'])),
                           stale_route=sum(c.get('stale_route', 0) for c in g), paused=sum(c.get('paused', 0) for c in g))
    episodes = episodes_of(checks, resets, pauses, battle_end, accepted)
    # Rounds on the threat and credit latency, per failing check where the truth is known.
    samples = dict(obs_rounds=[], credited_rounds=[], shots_at_primary=[], landed_at_primary=[], credit_lag=[],
                   late_rounds=[], episode_length=[], episode_credit_latency=[], wait_per_crossing=[],
                   danger_exposure=[], danger_overlooking=[], danger_overlooking_fresh=[], danger_primary_age=[], danger_primary_uncertainty=[],
                   danger_rows=[])
    for c in checks:
        if c['gate'] != 'commit' and c['gate'] != 'bound':
            continue
        if 'obs_rounds' in c:
            samples['obs_rounds'].append(c['obs_rounds'])
            samples['credited_rounds'].append(c.get('rounds', 0))
            samples['late_rounds'].append(c.get('late_rounds', 0))
        if '_shots' in c:
            samples['shots_at_primary'].append(c['_shots'])
            samples['landed_at_primary'].append(c['_landed'])
        if c.get('credit_age', -1) >= 0 and c.get('obs_newest_round_age', -1) >= 0:
            samples['credit_lag'].append(c['credit_age'] - c['obs_newest_round_age'])
    for ep in episodes:
        samples['episode_length'].append(ep['length'])
        if ep['first_truth'] is not None and ep['first_credit'] is not None:
            samples['episode_credit_latency'].append(ep['first_credit'] - ep['first_truth'])
    # An exposed crossing: a passing commit check (covered or by the override). Its wait is the
    # length of the episode that ended at it, zero when it passed at once.
    crossings = [c for c in checks if c['gate'] == 'commit' and c['pass']]
    ended = {(ep['squad'], round(ep['start'] + ep['length'], 3)): ep for ep in episodes if ep['end'] in ('covered', 'override', 'stale_cross', 'low_cross')}
    for c in crossings:
        ep = ended.get((c['squad'], round(c['time'], 3)))
        samples['wait_per_crossing'].append(ep['length'] if ep else 0.0)
    # Danger of exposed crossings: the first check of every episode plus every crossing made at once.
    danger_rows = [next(c for c in checks if c['gate'] == 'commit' and c['squad'] == ep['squad'] and c['time'] == ep['start']) for ep in episodes]
    danger_rows += [c for c in crossings if (c['squad'], round(c['time'], 3)) not in ended]
    mg = Counter()
    for c in danger_rows:
        samples['danger_exposure'].append(c.get('exposure'))
        samples['danger_overlooking'].append(c.get('overlooking'))
        samples['danger_overlooking_fresh'].append(c.get('overlooking_fresh'))
        # One compact row per exposed crossing for threshold tables: exposure, MG (any/fresh),
        # overlooking (any/fresh), primary age, primary MG, waited, how the wait ended.
        samples['danger_rows'].append([c.get('exposure'), int(bool(c.get('mg_overlooks'))), int(bool(c.get('mg_fresh'))),
                                       c.get('overlooking'), c.get('overlooking_fresh'), c.get('primary_age'), int(bool(c.get('primary_mg')))])
        samples['danger_primary_age'].append(c.get('primary_age'))
        samples['danger_primary_uncertainty'].append(c.get('primary_uncertainty'))
        mg[int(bool(c.get('mg_overlooks')))] += 1
    reset_sources = Counter(r['source'] for r in resets)
    reset_kind = Counter((r['source'], 'restart' if r.get('restart') else 'cleared') for r in resets)
    pause_rows = [dict(time=p['time'], squad=p['squad'], source=p.get('pause_source', 'unknown'), had_waypoint=p.get('had_waypoint', 1),
                       gun_move=p.get('gun_move', 0), block=p.get('movement_block')) for p in pauses]
    exposed = casualty_metrics(run, checks, bound_rows, battle_end)
    requests = request_metrics(run, request_rows, orders, battle_end)
    out = dict(
        run=str(run), map=manifest.get('battlefield_file') and str(run), seed=manifest.get('seed'),
        battle_end=battle_end,
        decisions=decision_metrics(decisions) if decisions else None,
        checks=len(checks), explain_mismatch=mismatch, gates=gates,
        reasons=dict(Counter(c['_reason'] for c in checks)),
        # The same failed checks labelled by the truth alone (reasons 3-8), whatever the leader knew.
        truth_reasons=dict(Counter((lambda r: r[0] + (f'/{r[1]}' if r[1] else ''))(truth_chain(c)) for c in checks
                                   if not c['covering'] and not c['pass'] and c.get('primary', -1) >= 0)),
        reasons_by_team={str(t): dict(Counter(c['_reason'] for c in checks if team_of(c['squad']) == t)) for t in (0, 1)},
        causes=dict(Counter(f"{c['_reason']}:{c['_cause']}" for c in checks if c['_cause'])),
        episodes=[{k: v for k, v in ep.items() if k != 'last'} for ep in episodes],
        episode_ends=dict(Counter(ep['end'] for ep in episodes)),
        episode_dominant=dict(Counter(ep['dominant'] for ep in episodes)),
        clock_resets=dict(reset_sources), clock_reset_kinds={f'{a}:{b}': n for (a, b), n in reset_kind.items()},
        pauses=pause_rows,
        pause_sources=dict(Counter(p['source'] for p in pause_rows)),
        waypointless_pauses=sum(1 for p in pause_rows if not p['had_waypoint']),
        waypointless_pause_sources=dict(Counter(p['source'] for p in pause_rows if not p['had_waypoint'])),
        pause_gun_moves=sum(p['gun_move'] for p in pause_rows),
        danger_mg=dict(mg),
        graduated=bool(manifest.get('cover_graduated')) or any(c.get('cover_graduated') for c in checks),
        graduated_outcomes={f"{gate}:{o}": n for (gate, o), n in Counter((c['gate'], c.get('graduated_outcome')) for c in checks
                                                                          if c.get('graduated_outcome')).items()},
        graduated_danger={f"{gate}:{o}": n for (gate, o), n in Counter((c['gate'], c.get('graduated_danger')) for c in checks
                                                                        if c.get('graduated_danger')).items()},
        commit_results=dict(Counter(c['result'] for c in checks if c['gate'] == 'commit' and 'result' in c)),
        exposed_commits=exposed['commits'], friendly_hits=exposed['friendly_hits'], hits=exposed['hits'],
        casualties_by_team=exposed['casualties_by_team'],
        requests=requests,
        supply=supply_metrics(run, supply_rows),
        samples=samples,
        check_columns=CHECK_COLUMNS,
        check_rows=[[c['time'], c['squad'], c['gate'], c['_reason'], c['_cause'], c['pass'], c['covering'], c.get('fresh'),
                     c.get('primary_age'), c.get('primary_uncertainty'), c.get('primary_mg'), c.get('exposure'), c.get('overlooking'),
                     c.get('overlooking_fresh'), c.get('mg_overlooks'), c.get('mg_fresh'), c.get('has_waypoint'), c.get('movement_block'),
                     c.get('waited'), c.get('rounds'), c.get('late_rounds'), c.get('other_rounds'), c.get('obs_rounds'), c.get('_shots'),
                     c.get('_landed'), len(c.get('obs_bearer_list', [])), c.get('obs_saw')] for c in checks],
    )
    return out


def pool(metrics: list[dict]) -> dict:
    """Pooled totals and distributions over battles, with per-battle means where they are shares."""
    total = Counter()
    reasons, causes, ends, dominant, resets, pause_sources, wp_sources, danger_mg, truth = (Counter() for _ in range(9))
    reasons_team = {'0': Counter(), '1': Counter()}
    gates = defaultdict(Counter)
    gate_reasons = defaultdict(Counter)
    gate_causes = defaultdict(Counter)
    samples = defaultdict(list)
    decisions = Counter()
    per_battle_wait, per_battle_live, per_battle_episodes = [], [], []
    episode_reason_share = Counter()
    grad_outcomes, grad_danger, commit_results = Counter(), Counter(), Counter()
    commits, friendly, casualties = [], [], {'0': [], '1': []}
    reqs, orders, payload, minutes = [], Counter(), Counter(), 0.0
    for m in metrics:
        total['battles'] += 1
        rq = m.get('requests')
        if rq:
            reqs.extend(rq['requests'])
            orders.update(rq['orders'])
            payload.update(rq['payload_orders'])
            minutes += rq['minutes'] or 0
        grad_outcomes.update(m.get('graduated_outcomes', {}))
        grad_danger.update(m.get('graduated_danger', {}))
        commit_results.update(m.get('commit_results', {}))
        commits.extend(m.get('exposed_commits', []))
        if 'friendly_hits' in m:
            friendly.append(m['friendly_hits'])
            for t in ('0', '1'):
                casualties[t].append(m['casualties_by_team'].get(t, 0))
        total['checks'] += m['checks']
        total['explain_mismatch'] += m['explain_mismatch']
        reasons.update(m['reasons'])
        truth.update(m.get('truth_reasons', {}))
        for t in ('0', '1'):
            reasons_team[t].update(m['reasons_by_team'].get(t, {}))
        causes.update(m['causes'])
        ends.update(m['episode_ends'])
        dominant.update(m['episode_dominant'])
        resets.update(m['clock_resets'])
        pause_sources.update(m['pause_sources'])
        wp_sources.update(m['waypointless_pause_sources'])
        total['pauses'] += len(m['pauses'])
        total['waypointless_pauses'] += m['waypointless_pauses']
        total['pause_gun_moves'] += m['pause_gun_moves']
        danger_mg.update({str(k): v for k, v in m['danger_mg'].items()})
        total['episodes'] += len(m['episodes'])
        per_battle_episodes.append(len(m['episodes']))
        for ep in m['episodes']:
            for r in ep['reasons']:
                episode_reason_share[r] += 1   # episodes in which the reason occurs at least once
        for g, v in m['gates'].items():
            gates[g].update({k: v[k] for k in ('checks', 'passed', 'covered', 'stale_route', 'paused')})
            gate_reasons[g].update(v['reasons'])
            gate_causes[g].update(v['causes'])
        for k, v in m['samples'].items():
            samples[k].extend(v)
        d = m.get('decisions')
        if d and d['decisions']:
            decisions['decisions'] += d['decisions']
            for k, v in d['outcomes'].items():
                decisions[k] += v
            for k in ('exposed_decisions', 'live_exposed_decisions', 'exposed_candidates', 'covered_exposed_candidates'):
                decisions[k] += d[k]
            decisions['live'] += round(d['live_support_share']*d['decisions'])
            per_battle_wait.append(d['support_wait_share'])
            per_battle_live.append(d['live_support_share'])
    failures = {k: v for k, v in reasons.items() if k not in NON_FAILURES}
    nfail = sum(failures.values())
    n_ep = total['episodes']
    out = dict(
        battles=total['battles'], checks=total['checks'], explain_mismatch=total['explain_mismatch'],
        decisions=dict(decisions),
        support_wait_share=decisions['support_wait']/decisions['decisions'] if decisions['decisions'] else None,
        live_support_share=decisions['live']/decisions['decisions'] if decisions['decisions'] else None,
        support_wait_share_by_battle=quantiles(per_battle_wait), live_support_share_by_battle=quantiles(per_battle_live),
        gates={g: dict(v) for g, v in gates.items()},
        gate_reasons={g: dict(v) for g, v in gate_reasons.items()},
        gate_causes={g: dict(v) for g, v in gate_causes.items()},
        reasons=dict(reasons), reasons_by_team={t: dict(v) for t, v in reasons_team.items()},
        failed_checks=nfail,
        reason_share_of_failed_checks={k: v/nfail for k, v in sorted(failures.items(), key=lambda kv: -kv[1])} if nfail else {},
        bearer_cause_share=share({k.split(':', 1)[1]: v for k, v in causes.items() if k.startswith('bearer_not_firing:')}),
        truth_reason_share=share(dict(truth)),
        no_fire_truth_share=share({k.split(':', 1)[1]: v for k, v in causes.items() if k.startswith('no_fire:')}),
        unengageable_share=share({k.split(':', 1)[1]: v for k, v in causes.items() if k.startswith('unengageable:')}),
        episodes=n_ep, episodes_per_battle=quantiles(per_battle_episodes),
        episode_ends={k: v/n_ep for k, v in ends.most_common()} if n_ep else {},
        episode_dominant_reason={k: v/n_ep for k, v in dominant.most_common()} if n_ep else {},
        episode_reason_presence={k: v/n_ep for k, v in episode_reason_share.most_common()} if n_ep else {},
        episode_length=quantiles(samples['episode_length']),
        wait_per_exposed_crossing=quantiles(samples['wait_per_crossing']),
        exposed_crossings=len(samples['wait_per_crossing']),
        seconds_waited_per_crossing=(sum(samples['episode_length'])/len(samples['wait_per_crossing'])) if samples['wait_per_crossing'] else None,
        obs_rounds_on_primary=quantiles(samples['obs_rounds']),
        obs_rounds_zero_share=(sum(1 for v in samples['obs_rounds'] if v == 0)/len(samples['obs_rounds'])) if samples['obs_rounds'] else None,
        credited_rounds=quantiles(samples['credited_rounds']),
        shots_at_primary_6s=quantiles(samples['shots_at_primary']),
        landed_at_primary_6s=quantiles(samples['landed_at_primary']),
        late_rounds=quantiles(samples['late_rounds']),
        credit_lag=quantiles(samples['credit_lag']),
        episode_credit_latency=quantiles(samples['episode_credit_latency']),
        clock_resets=dict(resets.most_common()), clock_resets_per_battle={k: v/total['battles'] for k, v in resets.most_common()},
        pauses=total['pauses'], pause_sources=dict(pause_sources.most_common()),
        waypointless_pauses=total['waypointless_pauses'], waypointless_pause_sources=dict(wp_sources.most_common()),
        pause_gun_moves=total['pause_gun_moves'],
        danger=dict(exposure=quantiles(samples['danger_exposure']),
                    exposure_histogram=histogram(samples['danger_exposure'], (0.2, 0.4, 0.6, 0.8, 1.0001)),
                    overlooking=dict(sorted(Counter(v for v in samples['danger_overlooking'] if v is not None).items())),
                    overlooking_fresh=dict(sorted(Counter(v for v in samples['danger_overlooking_fresh'] if v is not None).items())),
                    grades=danger_grades(samples['danger_rows']),
                    mg_overlooks=dict(danger_mg),
                    primary_age=quantiles(samples['danger_primary_age']),
                    primary_uncertainty=quantiles(samples['danger_primary_uncertainty'])),
        graduated_outcomes=dict(grad_outcomes.most_common()), graduated_danger=dict(grad_danger.most_common()),
        commit_results=dict(commit_results.most_common()),
        exposed_commits=commit_summary(commits, total['battles']),
        friendly_hits_per_battle=quantiles(friendly),
        casualties_per_battle={t: quantiles(v) for t, v in casualties.items()},
        requests=request_summary(reqs, total['battles'], minutes, dict(orders), dict(payload)),
        requests_azure=request_summary([q for q in reqs if q['team'] == 0], total['battles'], minutes, dict(orders), dict(payload)),
        supply=supply_summary([m['supply'] for m in metrics if m.get('supply')], total['battles']),
    )
    return out


def commit_summary(commits, battles) -> dict:
    """Exposed commits (a commit-wait check at which the squad committed): how many, how long each
    waited from its preparation start, and the hits and casualties the squad took on the bound that
    followed, overall and by how the gate was passed (covered, override, stale_cross, low_cross)."""
    def block(rows):
        n = len(rows)
        return dict(n=n, per_battle=n/battles if battles else None, waited=quantiles([r['waited'] for r in rows]),
                    hits_per_commit=sum(r['hits'] for r in rows)/n if n else None,
                    casualties_per_commit=sum(r['casualties'] for r in rows)/n if n else None,
                    commits_with_a_hit=sum(1 for r in rows if r['hits'])/n if n else None,
                    # A commit whose bound is paused a second later exposes the men for a second: per minute of bound.
                    hits_per_bound_minute=60*sum(r['hits'] for r in rows)/max(1e-9, sum(r['bound_seconds'] for r in rows)) if n else None,
                    bound_seconds=quantiles([r['bound_seconds'] for r in rows]))
    out = dict(all=block(commits))
    for kind in sorted({r['kind'] for r in commits}):
        out[kind] = block([r for r in commits if r['kind'] == kind])
    return out


def share(counts: dict) -> dict:
    total = sum(counts.values())
    return {k: v/total for k, v in sorted(counts.items(), key=lambda kv: -kv[1])} if total else {}


def danger_grades(rows) -> dict:
    """Ruling 4 calibration: the share of exposed crossings a candidate 'high danger' rule would
    grade high, for machine-gun, track-count and exposure thresholds, with any and fresh (<=10 s) tracks.
    Row: exposure, mg any, mg fresh, overlooking any, overlooking fresh, primary age, primary mg."""
    n = len(rows)
    if not n:
        return {}
    out = {}
    for fresh in (False, True):
        tag = 'fresh' if fresh else 'any'
        mg = [r[2] if fresh else r[1] for r in rows]
        tracks = [(r[4] if fresh else r[3]) or 0 for r in rows]
        out[f'mg_{tag}'] = sum(mg)/n
        for k in (2, 3, 4, 6):
            out[f'tracks{k}_{tag}'] = sum(t >= k for t in tracks)/n
        for e in (0.4, 0.5, 0.6, 0.7):
            for k in (2, 3):
                out[f'mg_or_tracks{k}_or_exp{e}_{tag}'] = sum(bool(m) or t >= k or (r[0] or 0) >= e for m, t, r in zip(mg, tracks, rows))/n
    for e in (0.3, 0.4, 0.5, 0.6, 0.7):
        out[f'exposure>={e}'] = sum((r[0] or 0) >= e for r in rows)/n
    out['primary_age>20'] = sum((r[5] or 0) > 20 for r in rows)/n
    return out


def histogram(values, edges):
    values = [v for v in values if v is not None]
    out, lo = {}, 0.0
    for hi in edges:
        out[f'[{lo:.1f},{min(hi, 1.0):.1f}{"]" if hi > 1 else ")"}'] = sum(1 for v in values if lo <= v < hi)
        lo = hi
    return out


def markdown(p: dict) -> str:
    pct = lambda v: '—' if v is None else f'{100*v:.1f}%'
    lines = [f"# Covering-fire measurement ({p['battles']} battles)", '',
             f"- support_wait share: {pct(p['support_wait_share'])}; live-support share: {pct(p['live_support_share'])} "
             f"(Azure decisions {p['decisions'].get('decisions', 0)})",
             f"- covering checks: {p['checks']} (explain mismatches {p['explain_mismatch']}); failed {p['failed_checks']}",
             '', '## First failing reason (share of failed checks)', '']
    for k, v in p['reason_share_of_failed_checks'].items():
        lines.append(f'- {k}: {pct(v)} ({p["reasons"].get(k, 0)})')
    lines += ['', '## Bearer-not-firing causes', ''] + [f'- {k}: {pct(v)}' for k, v in p['bearer_cause_share'].items()]
    lines += ['', '## No fire at all: what the truth shows', ''] + [f'- {k}: {pct(v)}' for k, v in p['no_fire_truth_share'].items()]
    lines += ['', '## Failed checks with a primary, labelled by the truth alone', ''] + [f'- {k}: {pct(v)}' for k, v in p['truth_reason_share'].items()]
    lines += ['', '## Unengageable primary', ''] + [f'- {k}: {pct(v)}' for k, v in p['unengageable_share'].items()]
    lines += ['', f"## Episodes ({p['episodes']})", '', f"- per battle: {fmt(p['episodes_per_battle'])}",
              f"- length s: {fmt(p['episode_length'])}", '- ends: ' + ', '.join(f'{k} {pct(v)}' for k, v in p['episode_ends'].items()),
              '- dominant reason: ' + ', '.join(f'{k} {pct(v)}' for k, v in p['episode_dominant_reason'].items()),
              f"- exposed crossings {p['exposed_crossings']}, seconds waited per crossing {p['seconds_waited_per_crossing']}",
              f"- wait per crossing s: {fmt(p['wait_per_exposed_crossing'])}",
              '', '## Rounds and credit', '',
              f"- truth rounds on primary (6 s): {fmt(p['obs_rounds_on_primary'])}; zero share {pct(p['obs_rounds_zero_share'])}",
              f"- credited rounds: {fmt(p['credited_rounds'])}", f"- shots at primary (6 s): {fmt(p['shots_at_primary_6s'])}",
              f"- of them landing within 6 m of the aim point: {fmt(p['landed_at_primary_6s'])}",
              f"- credit lag s (leader newest minus truth newest): {fmt(p['credit_lag'])}",
              f"- episode credit latency s: {fmt(p['episode_credit_latency'])}",
              '', '## Clock resets', ''] + [f'- {k}: {v} ({p["clock_resets_per_battle"][k]:.2f}/battle)' for k, v in p['clock_resets'].items()]
    lines += ['', f"## Pauses ({p['pauses']}); waypoint-less {p['waypointless_pauses']}; gun moves {p['pause_gun_moves']}", '']
    lines += [f'- {k}: {v} (waypoint-less {p["waypointless_pause_sources"].get(k, 0)})' for k, v in p['pause_sources'].items()]
    d = p['danger']
    lines += ['', '## Danger of exposed crossings', '', f"- exposure: {fmt(d['exposure'])}", f"- exposure histogram: {d['exposure_histogram']}",
              f"- overlooking tracks: {d['overlooking']}", f"- overlooking tracks seen <=10 s: {d['overlooking_fresh']}",
              f"- MG overlooks: {d['mg_overlooks']}", f"- primary age s: {fmt(d['primary_age'])}",
              '- high-danger share by candidate rule: ' + ', '.join(f'{k} {pct(v)}' for k, v in d['grades'].items())]
    if p.get('exposed_commits'):
        lines += ['', '## Exposed commits and the bound that followed', '',
                  f"- graduated outcomes (gate:outcome): {p['graduated_outcomes']}",
                  f"- graduated danger (gate:grade): {p['graduated_danger']}",
                  f"- commit-wait results: {p['commit_results']}"]
        for kind, b in p['exposed_commits'].items():
            if not b['n']:
                continue
            lines.append(f"- {kind}: {b['n']} commits ({b['per_battle']:.2f}/battle); waited s {fmt(b['waited'])}; "
                         f"hits per commit {b['hits_per_commit']:.3f}, casualties per commit {b['casualties_per_commit']:.3f}, "
                         f"with a hit {pct(b['commits_with_a_hit'])}, hits per bound-minute {b['hits_per_bound_minute']:.2f}; bound s {fmt(b['bound_seconds'])}")
        lines += [f"- friendly hits per battle: {fmt(p['friendly_hits_per_battle'])}",
                  f"- casualties per battle, Azure: {fmt(p['casualties_per_battle']['0'])}; Ember: {fmt(p['casualties_per_battle']['1'])}"]
    rq = p.get('requests') or {}
    if rq.get('n'):
        lines += ['', f"## Covering requests ({rq['n']}, {rq['per_battle']:.2f}/battle)", '',
                  f"- by gate: {rq['by_gate']}; riflemen tasked per request: {rq['tasked_riflemen']}; gun tasked {pct(rq['with_gun'])}",
                  f"- live s: {fmt(rq['seconds'])}; leader's contact age at the call s: {fmt(rq['contact_age'])}",
                  f"- fired on: {pct(rq['fired_share'])}; first credit: {pct(rq['first_credit_share'])}; credited (3 rounds): {pct(rq['credited_share'])}",
                  f"- request to first round s: {fmt(rq['request_to_first_round'])}",
                  f"- request to first credit s: {fmt(rq['request_to_first_credit'])}",
                  f"- request to credit s: {fmt(rq['request_to_credit'])}",
                  f"- rounds on the named threat per request: {fmt(rq['rounds_on_threat'])}; landing within 6 m: {fmt(rq['rounds_landed'])}; "
                  f"per request-second {rq['rounds_on_threat_per_request_second']:.3f}; from tasked shooters {pct(rq['tasked_share_of_rounds'])}, gun {pct(rq['gun_share_of_rounds'])}",
                  f"- orders per minute by side: {rq['orders_per_minute']}; carrying a payload: {rq['payload_orders_per_minute']}"]
    sp = p.get('supply') or {}
    if sp.get('totals') and any(sp['totals'].values()):
        t = sp['totals']
        lines += ['', '## Supply mechanisms (plan 028 Stage 4)', '',
                  f"- gun re-stationed onto the threat: {t.get('gun_restations', 0)} ({sp['per_battle'].get('gun_restations', 0):.2f}/battle), by gate {sp['gun_restations_by_gate']}; "
                  f"requests where the search found no station: {t.get('gun_no_station', 0)}; travel m: {fmt(sp['gun_travel'])}; "
                  f"the gun fired on the named enemy within 20 s of a re-station {pct(sp['gun_restation_fired_share'])}",
                  f"- covered rifle shifts: {t.get('shifts', 0)} ({sp['per_battle'].get('shifts', 0):.2f}/battle), arrived {pct(sp['shift_arrival_share'])}; travel m: {fmt(sp['shift_travel'])}",
                  f"- aimed platoon Support directives: {t.get('platoon_directives', 0)} ({sp['per_battle'].get('platoon_directives', 0):.2f}/battle); "
                  f"with a reported line {pct(sp['platoon_line_share'])}; a different squad from the old rule {pct(sp['platoon_changed_share'])}; "
                  f"payloads {t.get('platoon_payloads', 0)}, gun fired on the named enemy within 20 s {pct(sp['platoon_payload_fired_share'])}"]
    return '\n'.join(lines) + '\n'


def fmt(q):
    if not q or not q.get('n'):
        return 'n=0'
    return f"n={q['n']} mean={q['mean']:.2f} p10={q['p10']:.2f} p50={q['p50']:.2f} p90={q['p90']:.2f} max={q['max']:.2f}"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    b = sub.add_parser('battle')
    b.add_argument('run')
    b.add_argument('--decisions')
    b.add_argument('--out')
    q = sub.add_parser('pool')
    q.add_argument('metrics', nargs='+')
    q.add_argument('--out')
    q.add_argument('--markdown')
    args = ap.parse_args(argv)
    if args.cmd == 'battle':
        m = battle(Path(args.run), args.decisions)
        text = json.dumps(m, separators=(',', ':'))
        if args.out:
            Path(args.out).write_text(text + '\n')
        else:
            print(text)
        return 0
    metrics = [json.loads(Path(p).read_text()) for p in args.metrics]
    p = pool(metrics)
    if args.out:
        Path(args.out).write_text(json.dumps(p, indent=1) + '\n')
    if args.markdown:
        Path(args.markdown).write_text(markdown(p))
    if not args.out and not args.markdown:
        print(markdown(p))
    return 0


if __name__ == '__main__':
    sys.exit(main())
