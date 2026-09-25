"""Does the squad choice matter? Same cases, different ways of choosing among the legal actions.

Arms play Azure through the persistent worker against active Legacy: the policy's highest score
(greedy), a sample at the training temperature, and a uniform random legal action. If random play
does about as well as the policy, the choices the network controls have little effect on outcomes
and reward learning has little to work with. Diagnostic only: not promotion evidence.

--timing-arms (plan 026 P4b) plays the schema-4 interface instead: the row comes from the policy's
through-the-gates head (greedy), and the arms differ only in timing: never go now, always go now
when legal, or go now at random half the time. The paired win-minus-loss spread against never-now
is the authority metric of the go-now head. A schema-2/3 model is migrated to schema 4 first.

--hold-arms (plan 027 hold probe) plays a schema-3 model greedily with its HOLD logit handicapped:
each arm adds a fixed offset to the raw HOLD logit (row 0) before the argmax, and 'never' makes HOLD
illegal whenever any other action is legal. The first arm must be offset 0, which is the plain greedy
arm (same episode numbers, same logits) and the paired reference. Every arm also records, for each
decision in which HOLD had a legal alternative and won on the raw logits, the gap between the HOLD
logit and the best legal alternative (gaps.json).

--timing-rules (plan 027 timing-rule probe) plays schema 4 like --timing-arms: the row is always the
greedy through-the-gates row, and a hand-written rule reading only that row's own features (the
actor's inputs) decides whether to take its go-now action when legal. 'never' is the reference arm.
Results are also reported for the maps 901-930 subset; --check-rows compares 'never' per case with
the 'never-now' arm of an earlier --timing-arms run.

--start-only (plan 027, with --timing-arms or --timing-rules) plays start-only go-now: a go-now commit
skips only the commit-time gates (covering-fire wait, preparation) and releases no later bound. The
never arms are then the same policy as without it; --check-rows also accepts an earlier 'never' arm.
"""
import argparse
import functools
import json
from pathlib import Path
import threading
import time
import numpy as np
import torch
from tools.neural import native
from tools.neural import worker as worker_module
from tools.neural.actor import read_policy, Critic, migrate, distribution
from tools.neural.actor import TIMINGS
from tools.neural.map_identity import attach_map_identity
from tools.neural.ppo import calibrate
from tools.neural.scenarios import FAMILIES as MAP_FAMILIES, active_legacy_specs
from tools.neural.worker import ElasticPool, ProcessPool


def bootstrap(pairs, draws=4000, seed=1):
    """Mean paired difference with a 95% interval, resampling map clusters."""
    maps = sorted({m for m, _ in pairs}); rng = np.random.default_rng(seed)
    by = {m: [d for mm, d in pairs if mm == m] for m in maps}
    means = []
    for _ in range(draws):
        pick = rng.choice(len(maps), len(maps)); values = [v for i in pick for v in by[maps[i]]]
        means.append(np.mean(values))
    return float(np.mean([d for _, d in pairs])), [float(np.quantile(means, .025)), float(np.quantile(means, .975))]


# The HOLD handicap of the running battle, per thread (a rollout process runs one battle at a time;
# ElasticPool threads each run their own). offset None means no handicap: plain distribution().
_hold = threading.local()


def hold_distribution(actor, features, legal, temperature, raster=None):
    """distribution() with the plan 027 HOLD handicap of the current thread's battle.

    Installed as the worker module's distribution only by --hold-arms. offset 0 computes exactly
    distribution()'s logits; a number is added to the raw HOLD logit (row 0) before the temperature;
    'never' masks HOLD whenever another action is legal. Also records the raw HOLD-minus-best-legal-
    alternative logit gap whenever HOLD had a legal alternative and won on the raw logits."""
    offset = getattr(_hold, 'offset', None)
    if offset is None: return distribution(actor, features, legal, temperature, raster)
    logits = actor(features, raster)
    if bool(legal[1:].any()):
        _hold.alternatives += 1
        best = float(logits[1:].masked_fill(~legal[1:], float('-inf')).max()); top = float(logits[0])
        if top >= best: _hold.gaps.append(top-best)
        if offset == 'never':
            legal = legal.clone(); legal[0] = False
        elif offset != 0:
            logits = logits.clone(); logits[0] = logits[0]+offset
    return torch.distributions.Categorical(logits=(logits/temperature).masked_fill(~legal, -1e9))


def arm_battle(context, worker, task):
    # Module level so a rollout process (--rollout-processes) can unpickle it.
    arms, actor, critic, timing_arms = context['arms'], context['actor'], context['critic'], context['timing_arms']
    arm, i, spec = task; number = list(arms).index(arm)*100000+i+1
    extra = dict(schema=4, timing=arms[arm]['timing'], start_only=context.get('start_only', False)) if timing_arms else {}
    hold = 'hold' in arms[arm]
    if hold:
        worker_module.distribution = hold_distribution
        _hold.offset, _hold.gaps, _hold.alternatives = arms[arm]['hold'], [], 0
    try:
        _, end = worker.episode(number, spec, actor, critic, arms[arm]['temperature'], 7700000+number,
                                greedy=arms[arm]['greedy'], **extra)
    finally:
        if hold: _hold.offset = None
    row = dict(arm=arm, map=spec['gen_seed'], seed=spec['seed'], winner=end['winner'], active=end['active'],
               team_return=end['team_return'], decisions=end['decisions'], digest=end['digest'],
               top_probability=end['mean_top_probability'], argmax_share=end['sampled_argmax_share'],
               outcomes=end['outcomes'])
    for key in ('go_now_share', 'now_legal_share', 'committed_now', 'schema_neutral_digest'):
        if key in end: row[key] = end[key]
    if hold:
        row.update(hold_share=float(np.mean([a == 0 for a in end['actions']])) if end['actions'] else 0.,
                   hold_alternatives=_hold.alternatives, hold_gaps=_hold.gaps)
    return row


def hold_arm_names(text):
    """'0,-0.2,never' -> {'hold+0': 0.0, 'hold-0.2': -0.2, 'never-hold': 'never'}; the first must be 0."""
    arms = {}
    for item in text.split(','):
        item = item.strip()
        if item == 'never': arms['never-hold'] = 'never'
        else: offset = float(item); arms[f'hold{offset:+g}'] = offset
    if not arms or next(iter(arms.values())) != 0.:
        raise ValueError('--hold-arms must start with offset 0 (the plain greedy reference)')
    return arms


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--model', default='models/squad/plan024-imitation-v1/squad.policy')
    ap.add_argument('--binary', default=native.BINARY)
    ap.add_argument('--first-map', type=int, default=901); ap.add_argument('--maps', type=int, default=30)
    ap.add_argument('--out', required=True); ap.add_argument('--jobs', type=int, default=8)
    # Map family (plan 029), stored as map_family: FAMILY/FAMILIES below name the formation families.
    ap.add_argument('--family', dest='map_family', choices=MAP_FAMILIES, default='city',
                    help='map family of --first-map..; village and city2 need an ARMYMAP 2 binary')
    ap.add_argument('--max-jobs', type=int, help='never run more battles than this, whatever .local/neural/max_jobs says')
    ap.add_argument('--timing-arms', action='store_true', help='schema-4 arms never-now, always-now, random-now')
    ap.add_argument('--rollout-processes', action='store_true', help='one Python process per worker (plan 026 P3c); same results')
    ap.add_argument('--hold-arms', help='plan 027: comma-separated HOLD logit offsets for greedy schema-3 arms, first 0, "never" = HOLD illegal when anything else is legal')
    ap.add_argument('--check-rows', help='--hold-arms: rows.json of an earlier run whose "greedy" arm the offset-0 arm must reproduce per case')
    ap.add_argument('--timing-rules', help='plan 027: comma-separated schema-4 go-now rules ('+', '.join(RULES)+'); "never" is the reference')
    ap.add_argument('--start-only', action='store_true', help='plan 027: start-only go-now (with --timing-arms or --timing-rules)')
    args = ap.parse_args(); native.checked(args.binary)
    if args.max_jobs is not None and args.max_jobs < 1: ap.error('--max-jobs must be positive')
    if args.start_only and not (args.timing_arms or args.timing_rules): ap.error('--start-only needs --timing-arms or --timing-rules')
    if args.timing_rules:
        if args.hold_arms or args.timing_arms: ap.error('--timing-rules is a separate mode')
        try: names = rule_names(args.timing_rules)
        except ValueError as error: ap.error(str(error))
        return rules_main(args, names)
    if args.hold_arms and args.timing_arms: ap.error('--hold-arms and --timing-arms are separate modes')
    try: hold_arms = hold_arm_names(args.hold_arms) if args.hold_arms else None
    except ValueError as error: ap.error(str(error))
    torch.set_num_threads(1)
    out = Path(args.out).resolve(); out.mkdir(parents=True, exist_ok=True)
    actor, _, _ = read_policy(args.model)
    if args.timing_arms and actor.schema != 4: actor = migrate(actor)
    critic = Critic(actor.features)
    temperature = calibrate(actor, '.local/plan024/data-v2')
    schema = 4 if args.timing_arms else 3
    if actor.schema != schema: ap.error('A schema-4 model needs --timing-arms')
    if hold_arms:
        arms = {name: dict(temperature=temperature, greedy=True, hold=offset) for name, offset in hold_arms.items()}
    elif args.timing_arms:
        arms = {'never-now': dict(temperature=temperature, greedy=True, timing='never'),
                'always-now': dict(temperature=temperature, greedy=True, timing='always'),
                'random-now': dict(temperature=temperature, greedy=True, timing='random')}
    else:
        arms = {'greedy': dict(temperature=temperature, greedy=True),
                'sampled': dict(temperature=temperature, greedy=False),
                'random': dict(temperature=1e6, greedy=False)}
    reference = next(iter(arms))
    specs = attach_map_identity(args.binary, active_legacy_specs('authority', range(args.first_map, args.first_map+args.maps), family=args.map_family), out/'maps')
    tasks = [(arm, i, spec) for i, spec in enumerate(specs) for arm in arms]
    battle = functools.partial(arm_battle, dict(arms=arms, actor=actor, critic=critic, timing_arms=args.timing_arms,
                                                start_only=args.start_only))
    capacity = lambda: min(native.capacity(args.jobs), args.max_jobs or 10**9)
    pool = (ProcessPool if args.rollout_processes else ElasticPool)(args.binary, out/'workers', capacity); start = time.monotonic()
    try: rows = pool.run(tasks, battle)
    finally: pool.close()
    summary = dict(model=args.model, policy_schema=schema, temperature=temperature, maps=[args.first_map, args.first_map+args.maps-1],
                   cases=len(specs), wall_seconds=time.monotonic()-start, arms={}, reference_arm=reference,
                   **{f'paired_vs_{reference}': {}})
    if args.start_only: summary['start_only'] = True
    if args.map_family != 'city': summary['family'] = args.map_family
    case = lambda r: (r['map'], r['seed'])
    by = {arm: {case(r): r for r in rows if r['arm'] == arm} for arm in arms}
    for arm in arms:
        rs = list(by[arm].values())
        summary['arms'][arm] = dict(wins=sum(r['winner'] == 0 for r in rs), draws=sum(r['winner'] == -1 for r in rs),
                                    losses=sum(r['winner'] == 1 for r in rs), mean_team_return=float(np.mean([r['team_return'] for r in rs])),
                                    argmax_share=float(np.mean([r['argmax_share'] for r in rs])))
        if args.timing_arms:
            decisions = sum(r['decisions'] for r in rs)
            summary['arms'][arm].update(
                go_now_share=sum(r['go_now_share']*r['decisions'] for r in rs)/max(1, decisions),
                committed_now=sum(r['committed_now'] for r in rs))
        if arm != reference:
            wl = lambda r: (r['winner'] == 0) - (r['winner'] == 1)
            summary[f'paired_vs_{reference}'][arm] = dict(
                team_return=bootstrap([(k[0], by[arm][k]['team_return']-by[reference][k]['team_return']) for k in by[reference]]),
                win_minus_loss=bootstrap([(k[0], wl(by[arm][k])-wl(by[reference][k])) for k in by[reference]]))
    if hold_arms: hold_summary(summary, rows, by, arms, reference, out, args.check_rows)
    (out/'rows.json').write_text(json.dumps(rows, indent=1)+'\n'); (out/'summary.json').write_text(json.dumps(summary, indent=2)+'\n')
    print(json.dumps(summary, indent=2))


RECEIPTS = ('retain', 'support_wait', 'preparing', 'committed')


def hold_summary(summary, rows, by, arms, reference, out, check_rows=None):
    """--hold-arms additions: offsets, receipt shares, HOLD shares, raw gap quantiles (gaps.json),
    and the per-case reproduction check of the offset-0 arm against an earlier greedy run."""
    quantiles = (.05, .1, .25, .5, .75, .9, .95)
    gaps = {}
    for arm in arms:
        rs = list(by[arm].values())
        receipts = {}
        for r in rs:
            for key, count in r['outcomes'].items(): receipts[key] = receipts.get(key, 0)+count
        total = max(1, sum(receipts.values()))
        values = [g for r in rs for g in r['hold_gaps']]
        alternatives = sum(r['hold_alternatives'] for r in rs)
        summary['arms'][arm].update(
            hold_offset=arms[arm]['hold'], decisions_per_battle=float(np.mean([r['decisions'] for r in rs])),
            receipt_shares={k: receipts.get(k, 0)/total for k in RECEIPTS+tuple(sorted(set(receipts)-set(RECEIPTS)))},
            hold_share=sum(r['hold_share']*r['decisions'] for r in rs)/max(1, sum(r['decisions'] for r in rs)),
            raw_hold_wins_with_alternative=len(values), decisions_with_alternative=alternatives,
            raw_gap_quantiles={str(q): float(np.quantile(values, q)) for q in quantiles} if values else {})
        gaps[arm] = values
    for r in rows: r.pop('hold_gaps')
    (out/'gaps.json').write_text(json.dumps(gaps)+'\n')
    if check_rows:
        old = {(r['map'], r['seed']): r for r in json.loads(Path(check_rows).read_text()) if r['arm'] == 'greedy'}
        new = by[reference]; keys = ('winner', 'digest', 'team_return', 'decisions', 'active')
        differ = sorted(f'{k[0]}/{k[1]}' for k in new if k not in old or any(new[k][x] != old[k][x] for x in keys))
        summary['reference_check'] = dict(rows=str(check_rows), cases=len(new), compared=keys,
                                          identical=len(new)-len(differ), differ=differ)


# ---------------------------------------------------------------- plan 027 timing-rule probe

# Schema-4 row columns (0-based) as ManeuverSim.cpp emits them for a candidate row (and for the KEEP
# row, which carries its candidate's features): 1 = live ratio/4 (friendly/enemy strength),
# 2 = live pressure, 6 = live emergency, 33..37 = family one-hot (FlankNorth, FlankSouth, Press,
# PullBack, Reposition), 55 = the first bound's exposure (the value the release gates test),
# 60 = live covering support on that bound's crossing (0/1), 61 = live ratio/4.
RATIO, PRESSURE, FAMILY, PULLBACK, BOUND_EXPOSURE, SUPPORT = 1, 2, 33, 36, 55, 60
FAMILIES = ('FlankNorth', 'FlankSouth', 'Press', 'PullBack', 'Reposition')

RULES = {
    'never': lambda f: False,
    'always': lambda f: True,
    'protected': lambda f: f[BOUND_EXPOSURE] < .2,
    'supported': lambda f: f[SUPPORT] > 0,
    'strong': lambda f: f[RATIO] >= .375 and f[PRESSURE] < .3,
    'withdraw': lambda f: f[PULLBACK] == 1,
    'protected+supported': lambda f: f[BOUND_EXPOSURE] < .2 or f[SUPPORT] > 0,
}


def rule_names(text):
    """'never,protected' -> ['never', 'protected']; 'never' must be present and is moved first
    (the reference arm, with the same episode numbers as --timing-arms' never-now)."""
    names = [item.strip() for item in text.split(',') if item.strip()]
    unknown = [n for n in names if n not in RULES]
    if unknown: raise ValueError(f'Unknown timing rules {unknown}; known: {list(RULES)}')
    if 'never' not in names: raise ValueError('--timing-rules needs "never" (the reference arm)')
    if len(set(names)) != len(names): raise ValueError('--timing-rules repeats a rule')
    return ['never']+[n for n in names if n != 'never']


# The rule of the running battle, per thread/process, and its counters. name None: plain distribution().
_rule = threading.local()


def rule_distribution(actor, features, legal, temperature, raster=None):
    """distribution() with the plan 027 timing rule of the current battle.

    Chooses the row exactly as the worker's timing arms do (greedy through-the-gates head over legal
    rows, same float64 arithmetic), then goes now iff the rule accepts that row's own features and
    its go-now action is legal (or its through-the-gates action is not). Returns a distribution whose
    argmax is that flat action, so the worker's greedy play takes it."""
    name = getattr(_rule, 'name', None)
    probability = distribution(actor, features, legal, temperature, raster)
    if name is None: return probability
    mask = legal.numpy(); x = features.numpy()
    probabilities = probability.probs.numpy().astype(np.float64); probabilities /= probabilities.sum()
    rows = probabilities.reshape(-1, TIMINGS).copy(); rows[:, 1] = 0.
    rows[:, 0] = np.where(mask[0::TIMINGS], rows[:, 0], 0.)
    if rows[:, 0].sum() <= 0: rows[:, 0] = mask[0::TIMINGS]
    rows = rows[:, 0]/rows[:, 0].sum()
    row = int(rows.argmax())
    now_legal = bool(mask[row*TIMINGS+1])
    fired = now_legal and bool(RULES[name](x[row]))
    now = fired or not mask[row*TIMINGS]
    chosen = row*TIMINGS+int(now)
    s = _rule.stats
    s['decisions'] += 1; s['argmax'] += int(chosen == int(probabilities.argmax())); s['top'] += float(probabilities.max())
    if now_legal:
        s['now_legal'] += 1
        family = x[row, FAMILY:FAMILY+5]
        key = FAMILIES[int(family.argmax())] if family.max() > 0 else 'none'
        s['legal_by_family'][key] = s['legal_by_family'].get(key, 0)+1
        if fired: s['fired'] += 1; s['fired_by_family'][key] = s['fired_by_family'].get(key, 0)+1
    logits = torch.full_like(probability.logits, -1e9); logits[chosen] = 0.
    return torch.distributions.Categorical(logits=logits)


def rule_battle(context, worker, task):
    # Module level so a rollout process (--rollout-processes) can unpickle it.
    arms, actor, critic = context['arms'], context['actor'], context['critic']
    arm, i, spec = task; number = list(arms).index(arm)*100000+i+1
    worker_module.distribution = rule_distribution
    _rule.name = arm
    _rule.stats = dict(decisions=0, argmax=0, top=0., now_legal=0, fired=0, legal_by_family={}, fired_by_family={})
    try:
        _, end = worker.episode(number, spec, actor, critic, arms[arm]['temperature'], 7700000+number,
                                greedy=True, schema=4, start_only=context.get('start_only', False))
    finally:
        _rule.name = None
    s = _rule.stats
    row = dict(arm=arm, map=spec['gen_seed'], seed=spec['seed'], winner=end['winner'], active=end['active'],
               team_return=end['team_return'], decisions=end['decisions'], digest=end['digest'],
               top_probability=s['top']/max(1, s['decisions']), argmax_share=s['argmax']/max(1, s['decisions']),
               outcomes=end['outcomes'], rule_decisions=s['decisions'], rule_now_legal=s['now_legal'],
               rule_fired=s['fired'], legal_by_family=s['legal_by_family'], fired_by_family=s['fired_by_family'])
    for key in ('go_now_share', 'now_legal_share', 'committed_now', 'schema_neutral_digest'):
        if key in end: row[key] = end[key]
    return row


def rules_summary(rows, arms, reference):
    """Per-arm outcomes and paired differences against the reference arm on the given rows."""
    wl = lambda r: (r['winner'] == 0) - (r['winner'] == 1)
    case = lambda r: (r['map'], r['seed'])
    by = {arm: {case(r): r for r in rows if r['arm'] == arm} for arm in arms}
    out = dict(cases=len(by[reference]), maps=[min(k[0] for k in by[reference]), max(k[0] for k in by[reference])],
               arms={}, paired_vs_never={})
    for arm in arms:
        rs = list(by[arm].values()); decisions = sum(r['decisions'] for r in rs)
        receipts = {}
        for r in rs:
            for key, count in r['outcomes'].items(): receipts[key] = receipts.get(key, 0)+count
        total = max(1, sum(receipts.values()))
        legal = {}; fired = {}
        for r in rs:
            for k, v in r['legal_by_family'].items(): legal[k] = legal.get(k, 0)+v
            for k, v in r['fired_by_family'].items(): fired[k] = fired.get(k, 0)+v
        out['arms'][arm] = dict(
            wins=sum(r['winner'] == 0 for r in rs), draws=sum(r['winner'] == -1 for r in rs),
            losses=sum(r['winner'] == 1 for r in rs), mean_team_return=float(np.mean([r['team_return'] for r in rs])),
            decisions_per_battle=decisions/max(1, len(rs)),
            go_now_share=sum(r['go_now_share']*r['decisions'] for r in rs)/max(1, decisions),
            rule_fire_share_when_now_legal=sum(r['rule_fired'] for r in rs)/max(1, sum(r['rule_now_legal'] for r in rs)),
            committed_now=sum(r['committed_now'] for r in rs),
            receipt_shares={k: receipts.get(k, 0)/total for k in sorted(receipts)},
            now_legal_by_family=legal, fired_by_family=fired)
        if arm != reference:
            out['paired_vs_never'][arm] = dict(
                team_return=bootstrap([(k[0], by[arm][k]['team_return']-by[reference][k]['team_return']) for k in by[reference]]),
                win_minus_loss=bootstrap([(k[0], wl(by[arm][k])-wl(by[reference][k])) for k in by[reference]]))
    return out


def rules_main(args, names):
    torch.set_num_threads(1)
    out = Path(args.out).resolve(); out.mkdir(parents=True, exist_ok=True)
    actor, _, _ = read_policy(args.model)
    if actor.schema != 4: actor = migrate(actor)
    critic = Critic(actor.features)
    temperature = calibrate(actor, '.local/plan024/data-v2')
    arms = {name: dict(temperature=temperature) for name in names}; reference = names[0]
    specs = attach_map_identity(args.binary, active_legacy_specs('authority', range(args.first_map, args.first_map+args.maps), family=args.map_family), out/'maps')
    tasks = [(arm, i, spec) for i, spec in enumerate(specs) for arm in arms]
    battle = functools.partial(rule_battle, dict(arms=arms, actor=actor, critic=critic, start_only=args.start_only))
    capacity = lambda: min(native.capacity(args.jobs), args.max_jobs or 10**9)
    pool = (ProcessPool if args.rollout_processes else ElasticPool)(args.binary, out/'workers', capacity); start = time.monotonic()
    try: rows = pool.run(tasks, battle)
    finally: pool.close()
    summary = dict(model=args.model, policy_schema=4, temperature=temperature, binary=str(args.binary),
                   maps=[args.first_map, args.first_map+args.maps-1], cases=len(specs), wall_seconds=time.monotonic()-start,
                   reference_arm=reference, rules=names, all=rules_summary(rows, arms, reference))
    if args.start_only: summary['start_only'] = True
    if args.map_family != 'city': summary['family'] = args.map_family
    subset = [r for r in rows if 901 <= r['map'] <= 930]
    if subset and len(subset) != len(rows): summary['maps_901_930'] = rules_summary(subset, arms, reference)
    if args.check_rows:
        # The 'never-now' arm of a --timing-arms run, or the 'never' arm of an earlier --timing-rules run.
        old = {(r['map'], r['seed']): r for r in json.loads(Path(args.check_rows).read_text()) if r['arm'] in ('never-now', 'never')}
        new = {(r['map'], r['seed']): r for r in rows if r['arm'] == reference and (r['map'], r['seed']) in old}
        def same(a, b):
            digest = a['digest'] == b['digest'] or (a.get('schema_neutral_digest') is not None and
                                                    a.get('schema_neutral_digest') == b.get('schema_neutral_digest'))
            return digest and a['winner'] == b['winner'] and a['team_return'] == b['team_return']
        differ = sorted(f'{k[0]}/{k[1]}' for k in new if not same(new[k], old[k]))
        summary['reference_check'] = dict(rows=str(args.check_rows), cases=len(new), old_cases=len(old),
                                          compared=('digest or schema_neutral_digest', 'winner', 'team_return'),
                                          identical=len(new)-len(differ), differ=differ,
                                          digest_identical=sum(new[k]['digest'] == old[k]['digest'] for k in new))
    (out/'rows.json').write_text(json.dumps(rows, indent=1)+'\n'); (out/'summary.json').write_text(json.dumps(summary, indent=2)+'\n')
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
