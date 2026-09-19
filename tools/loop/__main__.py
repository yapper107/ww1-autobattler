"""Command entry: python3 -m tools.loop <command> ..."""
from __future__ import annotations
import argparse, json, sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2]))
from tools.loop import config, pairs, rescore, static_check, tree, verdict  # noqa: E402


def cmd_evaluate(a):
    from tools.loop.evaluate import evaluate_candidate
    proposer = dict(kind=a.proposer, model=a.model, usage=None)
    node = evaluate_candidate(parent=a.parent, proposer=proposer, brief=a.brief, jobs=a.jobs, skip_selectors=a.skip_selectors,
                              skip_python=a.skip_python, only_sets=a.sets.split(',') if a.sets else None, suffix=a.suffix, force=a.force,
                              controller=a.controller, external_from=a.external_from)
    print(json.dumps(dict(id=node['id'], scores=node['scores']), indent=1))


def cmd_rescore(a):
    rescore.rescore(a.guards, a.nodes or None)


def cmd_tree(a):
    nodes = tree.list_nodes()
    if a.id:
        node = tree.load(a.id)
        print(json.dumps(node, indent=1, sort_keys=True))
        s = tree.read_score(a.id, a.version)
        if s:
            print(json.dumps(dict(guards={k: v['passed'] for k, v in s['guards'].items()}, objective=s['objective']['sets'].get(s['objective']['ranking_set'], {}).get('lower'),
                                  value=s['value'], information=s['information']), indent=1))
        return
    print(f"{'id':32} {'parent':32} {'proposer':12} {'guards':6} {'value':>9} verdict")
    for n in nodes:
        s = n['scores'].get(a.version, {})
        value = s.get('value')
        print(f"{n['id']:32} {str(n.get('parent') or '-'):32} {n['proposer'].get('kind', '-'):12} "
              f"{'pass' if s.get('guards_pass') else 'fail' if s else '-':6} {'-' if value is None else f'{value:+.3f}':>9} {n.get('verdict') or '-'}")


def cmd_verdict(a):
    print(json.dumps(verdict.add(a.id, a.decision, a.battle, a.at, a.squad, a.wrong, a.expected, a.note), indent=1))


def cmd_rejections(a):
    print(json.dumps(verdict.open_rejections(), indent=1))


def cmd_pairs(a):
    if a.action == 'make':
        print(json.dumps(pairs.make(a.left, a.right, a.set, a.key), indent=1))
    elif a.action == 'answer':
        print(json.dumps(pairs.answer(a.pair, a.preference, a.note), indent=1))
    elif a.action == 'calibrate':
        print(json.dumps(pairs.calibrate(a.version), indent=1))


def cmd_diagnose(a):
    from tools.loop.diagnose import diagnose
    print(json.dumps(diagnose(a.id, a.set, a.count)['static_seconds_by_stated_reason'], indent=1))


def cmd_brief(a):
    from tools.loop.propose import write_brief
    path = write_brief(a.id)
    print(path.read_text())
    print(f'written to {path}', file=sys.stderr)


def cmd_replay(a):
    from tools.loop.replay import replay
    print(json.dumps(replay(a.id, a.set, a.key, build=not a.no_build, launch=not a.no_launch), indent=1))


def cmd_static(a):
    result = static_check.check()
    print(json.dumps(result, indent=1))
    sys.exit(0 if result['ok'] else 1)


def main(argv=None):
    p = argparse.ArgumentParser(prog='python3 -m tools.loop', description=__doc__)
    sub = p.add_subparsers(dest='command', required=True)
    from tools.loop.score import load_guards
    current = load_guards()['version']
    current_ranking = load_guards()['objective']['ranking_set']

    e = sub.add_parser('evaluate', help='evaluate the current source as a tree node')
    e.add_argument('--parent'); e.add_argument('--proposer', default='human', choices=['human', 'param-search', 'llm', 'baseline'])
    e.add_argument('--model'); e.add_argument('--brief'); e.add_argument('--jobs', type=int); e.add_argument('--suffix')
    e.add_argument('--sets', help='comma list of sets to run (default all)')
    e.add_argument('--skip-selectors', action='store_true'); e.add_argument('--skip-python', action='store_true')
    e.add_argument('--controller', default='drills', choices=sorted(config.CONTROLLER_FLAG), help='controller the node is scored as')
    e.add_argument('--external-from', help='reuse selector and Python test results of a node on the same source')
    e.add_argument('--force', action='store_true'); e.set_defaults(fn=cmd_evaluate)

    r = sub.add_parser('rescore', help='recompute a score version over the tree')
    r.add_argument('--guards', help='alternative guards.json for a new score version'); r.add_argument('nodes', nargs='*'); r.set_defaults(fn=cmd_rescore)

    t = sub.add_parser('tree', help='list nodes or show one'); t.add_argument('id', nargs='?'); t.add_argument('--version', default=current); t.set_defaults(fn=cmd_tree)

    v = sub.add_parser('verdict', help='record a replay verdict on a node')
    v.add_argument('id'); v.add_argument('decision', choices=verdict.DECISIONS); v.add_argument('--battle'); v.add_argument('--at', type=float)
    v.add_argument('--squad', type=int); v.add_argument('--wrong'); v.add_argument('--expected'); v.add_argument('--note'); v.set_defaults(fn=cmd_verdict)
    sub.add_parser('rejections', help='rejections not yet turned into guards').set_defaults(fn=cmd_rejections)

    pr = sub.add_parser('pairs', help='blind pairwise comparisons')
    ps = pr.add_subparsers(dest='action', required=True)
    m = ps.add_parser('make'); m.add_argument('left'); m.add_argument('right'); m.add_argument('--set', required=True); m.add_argument('--key', required=True, help='battle key as listed in the node rows')
    an = ps.add_parser('answer'); an.add_argument('pair'); an.add_argument('preference', choices=['A', 'B', 'neither']); an.add_argument('--note')
    c = ps.add_parser('calibrate'); c.add_argument('--version', default=current)
    pr.set_defaults(fn=cmd_pairs)

    dg = sub.add_parser('diagnose', help="trace a node's worst attack battles: static windows and cancelled orders")
    dg.add_argument('id'); dg.add_argument('--set', default='town-attack-dev'); dg.add_argument('--count', type=int, default=3); dg.set_defaults(fn=cmd_diagnose)
    br = sub.add_parser('brief', help='write the proposer brief for a node'); br.add_argument('id'); br.set_defaults(fn=cmd_brief)

    rp = sub.add_parser('replay', help="build a node's snapshot into the Windows mirror and run one of its battles in Unreal")
    rp.add_argument('id'); rp.add_argument('--set', default=current_ranking); rp.add_argument('--key', help='battle key as listed in the node rows (default: first)')
    rp.add_argument('--no-build', action='store_true'); rp.add_argument('--no-launch', action='store_true'); rp.set_defaults(fn=cmd_replay)

    sub.add_parser('static-check', help='hidden-state read check on policy sources').set_defaults(fn=cmd_static)
    a = p.parse_args(argv)
    a.fn(a)


if __name__ == '__main__':
    main()
