"""Render the discovery tree as one self-contained HTML page for the user.

``python3 -m tools.loop view`` writes ``.local/loop/tree.html``. The page is
regenerated after every generation and republished to the same address, so it
reads recorded scores only: nothing here fights a battle or changes a node.
"""
from __future__ import annotations
import html
from datetime import datetime
from pathlib import Path

from tools.loop import score as scoring, tree
from tools.loop.config import LOOP_ROOT

GUARD_WORDS = {
    'build': 'did not build', 'selectors': 'broke a mechanism test', 'python_tests': 'tool tests failed',
    'protected_files': 'touched a protected file', 'static_check': 'reads hidden enemy state',
    'parity': 'changed another controller or the defenders', 'zero_shot': 'a battle with no shots',
    'firing_squads': 'a squad never fired (town battle)', 'attacker_firing_squads': 'an attacking squad never fired',
    'under_2m': 'bunches more than the root', 'orders_azure_per_minute': 'more order churn than the root',
    'orders_ember_per_minute': 'more order churn than the root', 'friendly_fire': 'more friendly fire than the root',
}
DOMAIN = 0.4  # paired deltas are drawn on -0.4 .. +0.4 attack-score points


def _x(value: float) -> float:
    return 130 + max(-DOMAIN, min(DOMAIN, value))/DOMAIN*120


def _interval_row(y: int, label: str, paired: dict) -> str:
    if not paired or not paired.get('count'):
        return ''
    low, high, mean = paired['ci95'][0], paired['ci95'][1], paired['mean']
    state = 'good' if low > 0 else 'bad' if high < 0 else 'flat'
    mark = {'good': '▲ better', 'bad': '▼ worse', 'flat': '◆ inconclusive'}[state]
    tip = f"{label}: {mean:+.3f}, 95% interval {low:+.3f} to {high:+.3f}, {paired.get('better', 0)} battles better, {paired.get('worse', 0)} worse of {paired['count']}"
    return (f'<g class="iv {state}"><title>{html.escape(tip)}</title>'
            f'<line class="whisker" x1="{_x(low):.1f}" x2="{_x(high):.1f}" y1="{y}" y2="{y}"></line>'
            f'<circle class="ring" cx="{_x(mean):.1f}" cy="{y}" r="6"></circle><circle class="dot" cx="{_x(mean):.1f}" cy="{y}" r="4"></circle></g>'
            f'<text class="rowlabel" x="-150" y="{y + 4}">{html.escape(label)}</text>'
            f'<text class="rowvalue" x="262" y="{y + 4}">{mean:+.3f} <tspan class="verdict-{state}">{mark}</tspan></text>')


def _interval_plot(sets: dict) -> str:
    rows = [(name, stats.get('paired_vs_root')) for name, stats in sets.items() if stats.get('paired_vs_root')]
    if not rows:
        return ''
    body, y = [], 16
    for name, paired in rows:
        label = ('development' if name.endswith('dev') else 'validation') + f" · {paired['count']} battles"
        body.append(_interval_row(y, label, paired))
        y += 26
    axis_y = y - 8
    ticks = ''.join(f'<line class="tick" x1="{_x(v):.1f}" x2="{_x(v):.1f}" y1="4" y2="{axis_y}"></line>'
                    f'<text class="ticklabel" x="{_x(v):.1f}" y="{axis_y + 13}">{v:+.1f}</text>' for v in (-0.4, -0.2, 0.2, 0.4))
    zero = f'<line class="zero" x1="{_x(0):.1f}" x2="{_x(0):.1f}" y1="0" y2="{axis_y}"></line><text class="ticklabel" x="{_x(0):.1f}" y="{axis_y + 13}">0</text>'
    return (f'<figure class="paired"><figcaption>Against its root, on the same battles</figcaption>'
            f'<div class="plotwrap"><svg viewBox="-150 0 560 {axis_y + 18}" role="img" aria-label="Paired attack-score difference from the lineage root">'
            f'{ticks}{zero}{"".join(body)}</svg></div></figure>')


def _outcome_bars(stats: dict) -> str:
    if not stats or stats.get('defender_loss') is None:
        return ''
    out = []
    for cls, label, value in (('ember', 'defenders out of action', stats['defender_loss']), ('azure', 'attackers lost', stats['attacker_loss'])):
        out.append(f'<div class="bar"><span class="barlabel">{label}</span><span class="track"><span class="fill {cls}" style="width:{value*100:.1f}%"></span></span>'
                   f'<span class="barvalue">{value:.0%}</span></div>')
    return f'<div class="bars" title="Mean over the validation attacks">{"".join(out)}<div class="cleared">position cleared in {stats["cleared_share"]:.0%} of battles</div></div>'


def _node_card(node: dict, result: dict | None, is_root: bool) -> str:
    objective = (result or {}).get('objective', {})
    sets = objective.get('sets') or {}
    ranking = sets.get(objective.get('ranking_set'), {})
    failed = [name for name, g in ((result or {}).get('guards') or {}).items() if not g['passed']]
    value = (result or {}).get('value')
    if not result:
        pill = '<span class="pill none">not scored</span>'
    elif failed:
        pill = f'<span class="pill bad">✕ no score · {len(failed)} guard{"s" if len(failed) != 1 else ""} failed</span>'
    elif is_root:
        pill = '<span class="pill good">✓ root · every guard passes</span>'
    else:
        beats = value is not None and objective.get('anchor') is not None and value > objective['anchor']
        pill = '<span class="pill good">✓ survivor · beats its root</span>' if beats else '<span class="pill flat">✓ guards pass · does not beat its root</span>'
    proposer = node.get('proposer', {})
    who = 'root' if is_root else (proposer.get('model') or proposer.get('kind') or 'unknown')
    paired = ranking.get('paired_vs_root') or {}
    if value is not None:
        figure, figure_label = f'{value:+.3f}', 'value'
    elif not is_root and paired.get('count') and objective.get('anchor') is not None:
        # Never the child's own-maps mean: that is the comparison map luck distorts.
        figure, figure_label = f"{objective['anchor'] + paired['ci95'][0]:+.3f}", 'if its guards passed'
    else:
        figure, figure_label = (f'{ranking["mean"]:+.3f}' if ranking.get('mean') is not None else '—'), 'own mean, unranked'
    chips = ''.join(f'<li>{html.escape(GUARD_WORDS.get(name, name))}</li>' for name in failed)
    brief = html.escape((node.get('brief') or '').replace('root: ', ''))
    return (f'<article class="node{" root" if is_root else ""}"><header>{pill}<span class="who">{html.escape(str(who))}</span></header>'
            f'<div class="ident"><code>{html.escape(node["id"].split("-")[0])}</code>'
            + (f'<span class="verdict">your verdict: {html.escape(node["verdict"])}</span>' if node.get('verdict') else '') + '</div>'
            f'<p class="brief">{brief}</p>'
            f'<div class="facts"><div class="figure"><span class="num">{figure}</span><span class="numlabel">{figure_label}</span></div>{_outcome_bars(ranking)}</div>'
            + _interval_plot(sets) + (f'<ul class="chips" aria-label="Failed guards">{chips}</ul>' if chips else '') + '</article>')


def _branch(node_id: str, children: dict, nodes: dict, version: str, is_root: bool = False) -> str:
    node = nodes[node_id]
    kids = ''.join(f'<li>{_branch(k, children, nodes, version)}</li>' for k in children.get(node_id, []))
    return _node_card(node, tree.read_score(node_id, version), is_root) + (f'<ul class="kids">{kids}</ul>' if kids else '')


def render() -> str:
    version = scoring.load_guards()['version']
    nodes = {n['id']: n for n in tree.list_nodes()}
    children: dict = {}
    for n in nodes.values():
        if n.get('parent') in nodes:
            children.setdefault(n['parent'], []).append(n['id'])
    roots = [n for n in nodes.values() if not n.get('parent')]
    current = [n for n in roots if (tree.read_score(n['id'], version) or {}).get('objective', {}).get('kind') == 'attack'
               and ((tree.read_score(n['id'], version) or {}).get('objective', {}).get('sets') or {}).get('town-attack-val', {}).get('mean') is not None]
    # One epoch at a time: a human change to shared code (static defenders, lean recording) starts new
    # roots on a new fingerprint. They are the same controllers measured on a fresh validation draw, so
    # showing two epochs side by side reads as two lineages with different scores. Only the newest epoch
    # is drawn; earlier roots and their children are history.
    if current:
        newest = max(current, key=lambda n: n.get('created', ''))['id'].split('-')[0]
        current = [n for n in current if n['id'].split('-')[0] == newest]
    earlier = [n for n in roots if n not in current]
    lineages, survivors, candidates, generations = [], 0, 0, 0
    for root in sorted(current, key=lambda n: n.get('controller', '')):
        stack, depth = [(root['id'], 0)], 0
        while stack:
            node_id, d = stack.pop()
            depth = max(depth, d)
            for k in children.get(node_id, []):
                candidates += 1
                result = tree.read_score(k, version) or {}
                anchor = result.get('objective', {}).get('anchor')
                survivors += int(bool(result.get('guards_pass')) and result.get('value') is not None and anchor is not None and result['value'] > anchor)
                stack.append((k, d + 1))
        generations = max(generations, depth)
        lineages.append(f'<section class="lineage"><h2>{html.escape(root.get("controller", "drills"))} <span>lineage</span></h2>'
                        f'{_branch(root["id"], children, nodes, version, True)}</section>')
    old = ''.join(f'<li><code>{html.escape(n["id"])}</code> {html.escape(n.get("brief") or "")}</li>' for n in earlier)
    page = TEMPLATE
    for key, text in (('@@LINEAGES@@', ''.join(lineages)), ('@@CANDIDATES@@', str(candidates)), ('@@SURVIVORS@@', str(survivors)),
                      ('@@GENERATIONS@@', str(generations)), ('@@VERSION@@', html.escape(version)),
                      ('@@STAMP@@', datetime.now().strftime('%d %B %Y, %H:%M')),
                      ('@@EARLIER@@', f'<details class="earlier"><summary>{len(earlier)} earlier roots (the same controllers before a change to shared code; their validation maps were a different draw, so their averages are not comparable with the current ones)</summary><ul>{old}</ul></details>' if earlier else '')):
        page = page.replace(key, text)
    return page


def write(path: Path | None = None) -> Path:
    path = path or LOOP_ROOT/'tree.html'
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(render())
    return path


TEMPLATE = """<title>Army AI Discovery Tree</title>
<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Big+Shoulders+Display:wght@700;800&family=IBM+Plex+Mono:wght@400;500&family=IBM+Plex+Sans:wght@400;500;600&display=swap">
<style>
:root{--ground:#EEF1EC;--surface:#F8FAF7;--ink:#1B2420;--muted:#55635B;--line:#C4CEC6;--azure:#2F6DB5;--ember:#D9601A;--good:#23704A;--bad:#9B2C3D;--flat:#55635B;--goodwash:#DDEBE2;--badwash:#F1DEE1;--flatwash:#E2E7E2}
@media (prefers-color-scheme:dark){:root:not([data-theme="light"]){--ground:#121815;--surface:#19211D;--ink:#E4EAE5;--muted:#94A39A;--line:#2E3A33;--azure:#5A90D6;--ember:#CC6526;--good:#63C08D;--bad:#E27A89;--flat:#94A39A;--goodwash:#1B3427;--badwash:#3A1F25;--flatwash:#232C27}}
:root[data-theme="dark"]{--ground:#121815;--surface:#19211D;--ink:#E4EAE5;--muted:#94A39A;--line:#2E3A33;--azure:#5A90D6;--ember:#CC6526;--good:#63C08D;--bad:#E27A89;--flat:#94A39A;--goodwash:#1B3427;--badwash:#3A1F25;--flatwash:#232C27}
body{background:var(--ground);color:var(--ink);font-family:"IBM Plex Sans",system-ui,sans-serif;font-size:15px;line-height:1.5}
.page{max-width:1180px;margin:0 auto;padding-inline:20px;padding-block:28px 56px;display:flex;flex-direction:column;gap:28px}
h1{font-family:"Big Shoulders Display","Arial Narrow",sans-serif;font-weight:800;font-size:clamp(34px,5vw,52px);line-height:1;letter-spacing:.01em;text-transform:uppercase;margin:0;text-wrap:balance}
.lede{max-width:66ch;color:var(--muted);margin:8px 0 0}
.tally{display:flex;flex-wrap:wrap;gap:8px 28px;border-block:1px solid var(--line);padding-block:12px;font-variant-numeric:tabular-nums}
.tally div{display:flex;align-items:baseline;gap:8px}
.tally b{font-family:"Big Shoulders Display","Arial Narrow",sans-serif;font-size:28px;font-weight:700;line-height:1}
.tally span{color:var(--muted);font-size:13px;text-transform:uppercase;letter-spacing:.06em}
.forest{display:grid;grid-template-columns:repeat(auto-fit,minmax(min(100%,430px),1fr));gap:32px 36px;align-items:start}
.lineage{display:flex;flex-direction:column;gap:14px;min-width:0}
h2{font-family:"Big Shoulders Display","Arial Narrow",sans-serif;font-weight:700;font-size:26px;text-transform:uppercase;letter-spacing:.03em;margin:0;line-height:1}
h2 span{color:var(--muted);font-size:16px;letter-spacing:.08em}
.node{background:var(--surface);border:1px solid var(--line);border-radius:3px;padding:14px 16px;display:flex;flex-direction:column;gap:10px;min-width:0}
.node.root{border-width:2px;border-color:var(--ink)}
.node header{display:flex;flex-wrap:wrap;gap:6px 10px;align-items:center;justify-content:space-between}
.pill{font-size:12.5px;font-weight:600;padding:3px 9px;border-radius:2px;letter-spacing:.01em}
.pill.good{background:var(--goodwash);color:var(--good)}.pill.bad{background:var(--badwash);color:var(--bad)}.pill.flat,.pill.none{background:var(--flatwash);color:var(--flat)}
.who{font-family:"IBM Plex Mono",ui-monospace,monospace;font-size:12px;color:var(--muted);text-transform:uppercase;letter-spacing:.08em}
.ident{display:flex;flex-wrap:wrap;gap:4px 14px;align-items:baseline}
code{font-family:"IBM Plex Mono",ui-monospace,monospace;font-size:13px;color:var(--muted);overflow-wrap:anywhere}
.verdict{font-size:13px;font-weight:600}
.brief{margin:0;max-width:62ch;overflow-wrap:anywhere}
.facts{display:grid;grid-template-columns:auto minmax(0,1fr);gap:8px 20px;align-items:center}
.figure{display:flex;flex-direction:column}
.num{font-family:"Big Shoulders Display","Arial Narrow",sans-serif;font-weight:700;font-size:38px;line-height:1;font-variant-numeric:tabular-nums}
.numlabel{font-size:11.5px;color:var(--muted);text-transform:uppercase;letter-spacing:.07em}
.bars{display:flex;flex-direction:column;gap:5px;min-width:0;font-size:12.5px}
.bar{display:grid;grid-template-columns:minmax(0,11.5em) minmax(40px,1fr) 3em;gap:8px;align-items:center}
.barlabel{color:var(--muted)}.barvalue{text-align:right;font-variant-numeric:tabular-nums}
.track{height:8px;background:var(--flatwash);border-radius:0 4px 4px 0;overflow:hidden;display:block}
.fill{display:block;height:100%;border-radius:0 4px 4px 0}.fill.ember{background:var(--ember)}.fill.azure{background:var(--azure)}
.cleared{color:var(--muted)}
.paired{margin:0;display:flex;flex-direction:column;gap:4px;border-top:1px solid var(--line);padding-top:10px}
figcaption{font-size:11.5px;color:var(--muted);text-transform:uppercase;letter-spacing:.07em}
.plotwrap{overflow-x:auto}
.paired svg{display:block;width:100%;min-width:420px;max-width:560px;height:auto;font-family:"IBM Plex Sans",system-ui,sans-serif}
.tick{stroke:var(--line);stroke-width:1}.zero{stroke:var(--muted);stroke-width:1.5}
.ticklabel{fill:var(--muted);font-size:10.5px;text-anchor:middle;font-variant-numeric:tabular-nums}
.rowlabel{fill:var(--muted);font-size:11.5px}
.rowvalue{fill:var(--ink);font-size:12px;font-variant-numeric:tabular-nums}
.whisker{stroke-width:2;stroke-linecap:round}.ring{fill:var(--surface)}
.iv.good .whisker{stroke:var(--good)}.iv.good .dot{fill:var(--good)}.iv.bad .whisker{stroke:var(--bad)}.iv.bad .dot{fill:var(--bad)}.iv.flat .whisker{stroke:var(--flat)}.iv.flat .dot{fill:var(--flat)}
.verdict-good{fill:var(--good)}.verdict-bad{fill:var(--bad)}.verdict-flat{fill:var(--muted)}
.iv:hover .whisker{stroke-width:4}
.chips{list-style:none;margin:0;padding:0;display:flex;flex-wrap:wrap;gap:6px}
.chips li{font-size:12.5px;border:1px solid var(--bad);color:var(--bad);padding:2px 8px;border-radius:2px}
.kids{list-style:none;margin:0;padding:0 0 0 22px;border-left:2px solid var(--line);margin-left:14px;display:flex;flex-direction:column;gap:14px}
.kids>li{position:relative;display:flex;flex-direction:column;gap:14px;min-width:0}
.kids>li::before{content:"";position:absolute;left:-22px;top:26px;width:22px;border-top:2px solid var(--line)}
.key{display:grid;grid-template-columns:repeat(auto-fit,minmax(min(100%,260px),1fr));gap:14px 32px;border-top:1px solid var(--line);padding-top:18px;color:var(--muted);font-size:13.5px}
.key h3{font-size:12px;text-transform:uppercase;letter-spacing:.08em;color:var(--ink);margin:0 0 4px}
.key p{margin:0;max-width:60ch}
.swatch{display:inline-block;width:18px;height:8px;border-radius:0 4px 4px 0;vertical-align:middle;margin-right:4px}
.earlier{color:var(--muted);font-size:13px}.earlier summary{cursor:pointer}.earlier summary:focus-visible{outline:2px solid var(--azure);outline-offset:3px}
.earlier ul{margin:8px 0 0;padding-left:18px}
@media (max-width:520px){.facts{grid-template-columns:1fr}.kids{padding-left:14px;margin-left:6px}.kids>li::before{left:-14px;width:14px}}
</style>
<div class="page">
<header><h1>Army AI discovery tree</h1>
<p class="lede">Every version of the squad AI the improvement loop has tried, scored by attacking twelve defenders who hold cover on a generated town map for ten minutes. A candidate only counts if it passes every guard and beats its root on the very same battles.</p></header>
<div class="tally"><div><b>@@GENERATIONS@@</b><span>generations</span></div><div><b>@@CANDIDATES@@</b><span>candidates tried</span></div><div><b>@@SURVIVORS@@</b><span>survivors for your review</span></div><div><span>score @@VERSION@@ · updated @@STAMP@@</span></div></div>
<div class="forest">@@LINEAGES@@</div>
<section class="key">
<div><h3>The number</h3><p>Attack score per battle: share of defenders put out of action minus half the share of attackers lost, from −0.5 to +1. A root shows its own mean. A child shows its root's mean plus the cautious end of its measured difference, so luck with the maps cannot lift it.</p></div>
<div><h3>The bars</h3><p><span class="swatch" style="background:var(--ember)"></span>defenders (Ember) out of action and <span class="swatch" style="background:var(--azure)"></span>attackers (Azure) lost, averaged over that node's fifteen validation attacks.</p></div>
<div><h3>The interval</h3><p>The dot is the child's average difference from its root over the same battles; the line is the 95% range. ▲ entirely above zero is a real gain, ◆ across zero is not proven, ▼ below is a loss.</p></div>
<div><h3>Guards</h3><p>Hard rules learned from your playtests: squads must fire, no extra bunching, order churn or friendly fire, mechanism tests keep passing, and nothing else in the game changes. One failure means no score.</p></div>
</section>
@@EARLIER@@
</div>
"""
