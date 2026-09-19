"""Why a node scored what it scored: static windows and cancelled orders in its worst attacks.

The loop runs battles without traces. For a brief, the node's lowest-scoring
attack battles are rerun with the trace on, reduced to a small summary, and the
trace (over a gigabyte under drills) is deleted again. Evidence is what the
controller itself stated; association in time is not proof of cause.
"""
from __future__ import annotations
import collections, json, math, shutil
from pathlib import Path

from tools.loop import config, tree
from tools.loop.runner import run_battle

BIN = 10.0
STATIC_METRES = 1.0
STATIC_SECONDS = 40.0
STATE_KINDS = ('drill_accepted', 'drill_stage', 'drill_stage_advanced', 'drill_blocked', 'drill_recovering', 'platoon_task',
               'platoon_route_exhausted', 'technique_selected', 'plan_phase', 'movement_paused', 'proposal_accepted')
SKIP = ('"kind":"position_query"', '"kind":"task_report_received"', '"kind":"mental_map"')
ATTACKER_SQUADS = range(0, 4)


def _records(trace: Path):
    with trace.open() as stream:
        for line in stream:
            if any(marker in line for marker in SKIP):
                continue
            yield json.loads(line)


def summarise_run(run: Path, seconds: float = config.SECONDS) -> dict:
    """Static windows of the attacking squads and orders replaced within three seconds."""
    positions = collections.defaultdict(list)
    state = collections.defaultdict(list)
    issued = collections.defaultdict(list)
    for r in _records(run/'trace.jsonl'):
        squad = r.get('squad', 0)
        if r['kind'] in STATE_KINDS and squad in ATTACKER_SQUADS:
            state[squad].append((r['time'], r['kind'], str(r['reason'])))
        if r['kind'] == 'order_issued' and squad in ATTACKER_SQUADS:
            issued[r['soldier']].append((r['time'], str(r['reason'])))
        p = r.get('position') or [0, 0, 0]
        if 'soldier' in r and (p[0] or p[1]) and r['soldier'] < 32:
            positions[r['soldier']].append((r['time'], p[0], p[1], bool(r.get('alive', 1)) and r.get('health', 100) > 0))
    shots = collections.defaultdict(collections.Counter)
    first_shot = None
    with (run/'shots.jsonl').open() as stream:
        for line in stream:
            if line.strip():
                shot = json.loads(line)
                if shot['team'] == 0:
                    shots[shot['squad']][int(shot['time']//BIN)] += 1
                    first_shot = shot['time'] if first_shot is None else min(first_shot, shot['time'])
    bins = int(seconds//BIN)
    windows = []
    for squad in ATTACKER_SQUADS:
        centroid = []
        for b in range(bins + 1):
            points = []
            for soldier in range(squad*8, squad*8 + 8):
                last = None
                for row in positions[soldier]:
                    if row[0] > b*BIN:
                        break
                    last = row
                if last and last[3]:
                    points.append((last[1], last[2]))
            centroid.append((sum(p[0] for p in points)/len(points), sum(p[1] for p in points)/len(points), len(points)) if points else None)
        still = [bool(centroid[b - 1] and centroid[b] and centroid[b][2] >= 2 and
                      math.hypot(centroid[b][0] - centroid[b - 1][0], centroid[b][1] - centroid[b - 1][1]) < STATIC_METRES) for b in range(1, bins + 1)]
        b = 0
        while b < len(still):
            if not still[b]:
                b += 1
                continue
            e = b
            while e < len(still) and still[e]:
                e += 1
            if (e - b)*BIN >= STATIC_SECONDS:
                before = [x for x in state[squad] if x[0] <= b*BIN + BIN]
                windows.append(dict(squad=squad, start=b*BIN, end=e*BIN, alive=centroid[b][2], at=[round(centroid[b][0]), round(centroid[b][1])],
                                    shots=sum(shots[squad][k] for k in range(b, e)), stated=before[-1][2] if before else 'no stated plan yet'))
            b = e
    replaced = collections.Counter()
    for soldier, orders in issued.items():
        for (t0, first), (t1, second) in zip(orders, orders[1:]):
            if t1 - t0 <= 3.0 and first != second and first in ('FLANK', 'ADVANCE', 'BOUND / MOVE'):
                replaced[f'{first} -> {second}'] += 1
    return dict(first_attacker_shot=first_shot, static_windows=windows, static_squad_seconds=sum(w['end'] - w['start'] for w in windows),
                attacker_squad_seconds=len(ATTACKER_SQUADS)*seconds, movement_orders_replaced_within_3s=dict(replaced.most_common(8)))


def diagnose(node_id: str, set_name: str = 'town-attack-dev', count: int = 3, log=print) -> dict:
    node = tree.load(node_id)
    rows = [r for r in tree.read_rows(node_id).get(set_name, []) if r.get('status') == 'complete' and r['metrics'].get('attack_score') is not None]
    if not rows:
        raise SystemExit(f'{node_id} has no scored battle in {set_name}')
    worst = sorted(rows, key=lambda r: r['metrics']['attack_score'])[:count]
    out_root = tree.node_dir(node_id)/'diagnosis'
    battles, reasons = [], collections.Counter()
    for row in worst:
        key = config.spec_key(row)
        log(f'[{node_id}] tracing {key} (attack score {row["metrics"]["attack_score"]:+.3f})')
        spec = {k: row[k] for k in config.SPEC_FIELDS if k in row}
        traced = run_battle(node['binary'], node.get('controller', 'drills'), spec, out_root/key, config.SECONDS, True)
        if traced['status'] != 'complete':
            battles.append(dict(key=key, error=traced.get('error')))
            continue
        summary = summarise_run(Path(traced['run']), row.get('seconds', config.SECONDS))
        shutil.rmtree(out_root/key)  # the trace is large; the summary is the evidence kept
        summary.update(key=key, layout=row['defence']['layout'], attack_score=row['metrics']['attack_score'],
                       defender_loss=row['metrics']['casualty_ember'], attacker_loss=row['metrics']['casualty_azure'])
        for w in summary['static_windows']:
            reasons[w['stated']] += w['end'] - w['start']
        battles.append(summary)
    result = dict(node=node_id, set=set_name, battles=battles, static_seconds_by_stated_reason=dict(reasons.most_common(12)))
    out_root.mkdir(parents=True, exist_ok=True)
    (out_root/'diagnosis.json').write_text(json.dumps(result, indent=1) + '\n')
    return result
