"""Write the brief a proposer agent works from (plan 016 phase 3, plan 018).

The brief is built from recorded evidence only: the node's score, its diagnosis
and where the stated reasons live in its own source snapshot. The proposer model
is recorded on the child node (Sonnet 5 by default, Haiku 4.5 for a narrow
single-function edit; plan 016 decision 6). The `claude` CLI is not installed in
this WSL, so the architect session launches the agent in an isolated worktree and
then runs ``python3 -m tools.loop evaluate --parent <node> --controller <lineage>``
there with ``ARMY_LOOP_ROOT`` pointing at the shared tree.
"""
from __future__ import annotations
import json
from pathlib import Path

from tools.loop import config, score as scoring, tree

LINEAGE_FILES = {
    'drills': ['DrillSim.cpp', 'SquadDrillSim.cpp', 'PlatoonTaskSim.cpp', 'PositionSim.cpp', 'LeaderSim.cpp'],
    'legacy': ['CommandSim.cpp', 'ManeuverSim.cpp', 'PlanSim.cpp', 'CoordinationSim.cpp', 'PlatoonSim.cpp'],
}


def locate(source: Path, stated: str):
    """file:line of a stated reason in the node's snapshot, by its longest literal fragment."""
    fragment = max((part for part in stated.replace('"', '').split(':')), key=len).strip()[:60]
    if len(fragment) < 12:
        return None
    for path in sorted(source.glob('*.cpp')):
        for number, line in enumerate(path.read_text(errors='replace').splitlines(), 1):
            if fragment in line:
                return f'{path.name}:{number}'
    return None


def brief(node_id: str) -> str:
    node = tree.load(node_id)
    lineage = node.get('controller', 'drills')
    version = scoring.load_guards()['version']
    result = tree.read_score(node_id, version) or {}
    diagnosis_file = tree.node_dir(node_id)/'diagnosis/diagnosis.json'
    diagnosis = json.loads(diagnosis_file.read_text()) if diagnosis_file.exists() else None
    source = tree.node_dir(node_id)/'source'
    lines = [f'# Proposal brief: improve the {lineage} controller from node `{node_id}`', '',
             'You are proposing ONE general change to a squad and platoon AI in a deterministic C++17 battle simulator. '
             'It is scored by attacking enemy soldiers who hold cover on generated town maps and never relocate. '
             'Score per battle: fraction of defenders put out of action minus half the fraction of attackers lost.', '', '## Where the parent stands']
    for name, stats in (result.get('objective', {}).get('sets') or {}).items():
        if stats.get('mean') is None:
            continue
        lines.append(f"- {name}: attack score {stats['mean']:+.3f} (lower bound {stats['lower']:+.3f}), cleared {stats['cleared_share']:.0%} of battles, "
                     f"defenders lost {stats['defender_loss']:.0%}, attackers lost {stats['attacker_loss']:.0%}; by layout " +
                     ', '.join(f'{k} {v:+.3f}' for k, v in stats['by_layout'].items()))
    failed = [name for name, g in (result.get('guards') or {}).items() if not g['passed']]
    lines.append(f"- guards failing on the parent: {', '.join(failed) if failed else 'none'}" +
                 (' (a node that fails a guard has NO score, so clearing these comes first)' if failed else ''))
    provenance = {g['name']: g for g in scoring.load_guards()['guards']}
    for name in failed:
        detail = result['guards'][name].get('detail') or {}
        count = len(detail.get('failures', [])) if isinstance(detail, dict) else 0
        rule = provenance.get(name, {})
        meaning = f"{rule.get('field') or rule.get('metric')} {rule.get('rule')} {rule.get('value', '')} on {', '.join(rule.get('sets', []))}".strip()
        lines.append(f"  - {name}: {meaning}" + (f'; failed in {count} battles, e.g. ' + ', '.join(f['key'] for f in detail['failures'][:3]) if count else ''))
    known = node.get('external', {}).get('selectors', {}).get('known_failures') or node.get('external', {}).get('selectors', {}).get('failed') or []
    lines.append(f"- selectors already failing (do not count against you, do not add to them): {', '.join(known) if known else 'none'}")
    lines += ['', '## What its worst attacks show']
    if diagnosis:
        for stated, seconds in diagnosis['static_seconds_by_stated_reason'].items():
            where = locate(source, stated)
            lines.append(f'- {seconds:.0f} squad-seconds static while the controller stated: "{stated}"' + (f' ({where})' if where else ''))
        for battle in diagnosis['battles']:
            if 'error' in battle:
                continue
            share = battle['static_squad_seconds']/battle['attacker_squad_seconds']
            first = battle['first_attacker_shot']
            lines.append(f"- {battle['key']}: score {battle['attack_score']:+.3f}; attackers static {share:.0%} of squad-seconds; first attacker shot at "
                         f"{'never' if first is None else f'{first:.0f} s'}; movement orders replaced within 3 s: {battle['movement_orders_replaced_within_3s'] or 'none'}")
    else:
        lines.append('- no diagnosis recorded; run `python3 -m tools.loop diagnose <node>` first')
    lines += ['', '## Rules', f"- Change only the {lineage} controller's behaviour. Its policy lives mainly in: " + ', '.join(LINEAGE_FILES[lineage]) +
              ' (under `Unreal/Source/ArmyPrototype/Sim/`). The other controllers and the static defenders must stay bit-identical: a parity guard reruns them '
              'on your build and rejects any digest change, so shared soldier-level code is off limits.',
              '- Policy may use only the officer\'s own memory, own orders, received reports and permitted squad-member fields. Never read enemy truth, the frame, '
              'the shot record or observer fields.',
              '- One general mechanism, as small as it can be. No per-map, per-seed or per-layout constants. No new draws from the battle RNG.',
              '- Do not edit tests, fixtures, tools, maps or `TerrainSim.cpp`. Do not commit, reset or stash.',
              '', '## Check your own work before you finish',
              '- `./scripts/battle-lab.sh --version` must build.',
              f"- Run two of the parent's worst battles above on your build (`.local/lab/battle-lab {'--drills' if lineage == 'drills' else '--legacy-ai'} --map <map> "
              '--static-defence <layout> --defenders 12 --defence-seed <seed> --seed 107 --seconds 600 --evaluate --no-trace --out <dir>`; the key reads '
              f'`city-<map seed>-107-<layout>12s<defence seed>`, the map file is `{config.LOOP_ROOT}/maps/<map seed>/city-<map seed>.army`; use that absolute path, '
              'your worktree has no copy) and compare casualties with the figures above. Attack battles run 600 s: pass `--seconds 600`.',
              '- Finish with: the mechanism in two sentences, the files and functions touched, what you measured, and what could go wrong. '
              'If the idea did not help in your own check, say so; a negative result is still recorded.']
    return '\n'.join(lines) + '\n'


def write_brief(node_id: str) -> Path:
    path = tree.node_dir(node_id)/'brief.md'
    path.write_text(brief(node_id))
    return path
