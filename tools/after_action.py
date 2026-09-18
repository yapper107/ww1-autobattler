#!/usr/bin/env python3
"""Offline command evidence. Temporal association is not causal proof.

Accept a run directory, manifest.json or latest.json; write Markdown and JSON.
Missing telemetry is reported as unknown, never as zero loss or perfect knowledge.
"""
import argparse
from bisect import bisect_right
from collections import Counter
import statistics
import json
from pathlib import Path


def resolve_run(path):
    path = Path(path)
    if path.is_dir() and not (path / 'manifest.json').exists():
        path = path / 'latest.json'
    if path.name == 'latest.json':
        return path.parent / json.loads(path.read_text())['run']
    return path.parent if path.name == 'manifest.json' else path


def rows(path, kinds=None):
    if path.exists():
        with path.open() as stream:
            for line in stream:
                if line.strip():
                    if kinds and not any(('\"kind\":\"'+kind+'\"') in line or ('\"kind\": \"'+kind+'\"') in line for kind in kinds):
                        continue
                    yield json.loads(line)


def build_report(run):
    run = resolve_run(run)
    manifest = json.loads((run / 'manifest.json').read_text())
    events = list(rows(run / 'events.jsonl'))
    # Evaluation is observer truth, used only for outcomes after decisions.
    frames = []
    for frame in rows(run / 'evaluation.jsonl'):
        frames.append((frame['time'], {
            s['id']: {'alive': s['alive'], 'position': s['position'],
                      'rounds': s.get('rounds', 0), 'action': s.get('action'),
                      'squad': s.get('squad', s['id'] // 8)}
            for s in frame['soldiers']}))
    times = [f[0] for f in frames]
    timeline, pictures, net = [], [], []
    beliefs, issued = {}, {}
    lost = []
    transition_kinds = {'platoon_task', 'platoon_observation', 'platoon_route_exhausted',
                        'platoon_no_progress', 'drill_accepted', 'drill_stage_advanced',
                        'drill_blocked', 'drill_reorganise', 'technique_selected',
                        'radio_broadcast', 'radio_lift', 'radio_no_route', 'drill_candidate',
                        'leader_call', 'leader_picture'}
    for row in rows(run / 'trace.jsonl', transition_kinds | {'mental_map', 'order_issued', 'order_received', 'radio_sent', 'radio_received', 'radio_dropped', 'message_dropped'}):
        kind, actor = row.get('kind'), row.get('soldier', -1)
        if kind == 'drill_candidate' and not row.get('reason', '').startswith('SquadAttack:'):
            continue
        if kind == 'mental_map' or (kind in transition_kinds and 'regions' in row):
            beliefs[actor] = dict(trace_id=row['id'], time=row['time'], regions=row.get('regions', []),
                                 contacts=row.get('knowledge', []))
            regions = row.get('regions', [])
            reports = [c for c in row.get('knowledge', []) if not c.get('personal', False)]
            pictures.append(dict(leader=actor, time=row['time'], trace_id=row['id'],
                                 estimate=sum(r.get('estimate', 0) for r in regions),
                                 reported_contacts=len({c['enemy'] for c in reports}),
                                 received_reports=reports,
                                 caveat='Estimate includes uncertainty; reported contacts are not observer enemy strength.'))
        if kind in transition_kinds:
            timeline.append(dict(time=row['time'], trace_id=row['id'], actor=actor,
                                 squad=row.get('squad', actor // 8), kind=kind,
                                 reason=row.get('reason', ''), objective=row.get('goal'), instance=row.get('plan'),
                                 knowledge=beliefs.get(actor)))
        channel = 'squad radio' if kind in ('radio_sent', 'radio_received', 'radio_dropped') else 'soldier order'
        key = (channel, row.get('order'), actor)
        if kind in ('order_issued', 'radio_sent') and key[1]:
            issued[key] = row
        elif kind in ('order_received', 'radio_received') and key in issued:
            sent = issued.pop(key)
            net.append(dict(channel=channel, sender=sent.get('issuer'), recipient=actor,
                            order=key[1], sent=sent['time'], received=row['time'],
                            delay=row['time'] - sent['time'], evidence=[sent['id'], row['id']]))
        if kind in ('radio_dropped', 'message_dropped'):
            issued.pop(key, None)
            lost.append(dict(trace_id=row['id'], time=row['time'], reason=row.get('reason', '')))
    # Include every actual platoon order event, including renewals and successors.
    for number, event in enumerate(events, 1):
        if event.get('kind') == 6 and event.get('text', '').startswith('Platoon task-tree directive:'):
            timeline.append(dict(time=event['time'], event_line=number, actor=event['actor'],
                                 squad=event['target'] // 8, kind='platoon_order_sent',
                                 reason=event['text'], knowledge=None))
    timeline.sort(key=lambda item: (item['time'], item.get('trace_id', 0)))
    for index, decision in enumerate(timeline):
        successor = next((later for later in timeline[index + 1:]
                          if later['squad'] == decision['squad'] and later['time'] > decision['time']), None)
        end = min(decision['time'] + 30, successor['time'] if successor else float('inf'))
        start_index = bisect_right(times, decision['time']) - 1
        end_index = bisect_right(times, end) - 1
        if start_index >= 0 and end_index > start_index:
            before, after = frames[start_index][1], frames[end_index][1]
            members = [sid for sid, soldier in before.items()
                       if soldier['squad'] == decision['squad'] and soldier['alive']]
            decision['observed_next'] = dict(
                until=frames[end_index][0],
                shots=sum(max(0, after.get(sid, {}).get('rounds', before[sid]['rounds']) - before[sid]['rounds']) for sid in members),
                casualties=sum(sid in after and not after[sid]['alive'] for sid in members),
                mean_displacement=(sum(sum((a - b) ** 2 for a, b in zip(before[sid]['position'], after.get(sid, before[sid])['position'])) ** .5 for sid in members) / len(members)) if members else 0,
                next_transition=successor.get('trace_id', successor.get('event_line')) if successor else None)
        else:
            decision['observed_next'] = None
    casualties = []
    for line, event in enumerate(events, 1):
        if event.get('kind') != 4:
            continue
        victim = event.get('target')
        # A casualty event names its cause in text; do not infer a weapon from proximity.
        casualties.append(dict(event_line=line, time=event['time'], actor=event.get('actor'),
                               target=victim, recorded_cause=event.get('text', 'unknown')))
    causes = Counter(c['recorded_cause'] for c in casualties)
    noteworthy = [d for d in timeline if d['kind'] in ('platoon_route_exhausted', 'drill_blocked') or
                  'RetreatThere' in d['reason'] or 'consolidat' in d['reason'].lower()]
    attribution = [dict(time=d['time'], evidence=d.get('trace_id', d.get('event_line')),
                        decision=d['reason'], observed_next=d['observed_next'],
                        interpretation='Observed sequence; causal contribution is a hypothesis, not a counterfactual result.')
                   for d in noteworthy[:30]]
    limitations = []
    for name in ('trace.jsonl', 'events.jsonl', 'evaluation.jsonl'):
        if not (run / name).exists():
            limitations.append(f'{name} missing; associated evidence unavailable.')
    limitations.extend([
        'Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.',
        'Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.',
        'Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.'])
    report = dict(schema=2, run=str(run), build=manifest.get('build'), outcome=manifest.get('outcome', {'winner': manifest.get('winner'), 'duration': manifest.get('duration'), 'shots': manifest.get('shots')}),
                gameplay_digest=manifest.get('gameplay_digest'), timeline=timeline, pictures=pictures,
                net=dict(deliveries=net, explicit_losses=lost, unmatched_orders=len(issued)),
                casualties=casualties, casualty_causes=dict(causes), attribution=attribution,
                limitations=limitations)
    report['summary'] = human_summary(report, frames, events)
    if manifest.get('leader_effects'):
        report['leader_profiles'] = manifest.get('platoon_profiles')
        report['leader_attribution'] = [dict(time=d['time'],trace_id=d['trace_id'],squad=d['squad'],decision=d['reason'],observed_next=d['observed_next']) for d in timeline if d['kind']=='leader_call']
    report['collapsed_timeline'] = collapse_transitions(timeline)
    return report


def collapse_transitions(timeline):
    """Collapse consecutive identical transitions for the same squad, preserving ids."""
    result, last = [], {}
    for item in timeline:
        key = item['squad']
        prior = last.get(key)
        signature = (item['actor'], item['kind'], item['reason'])
        if prior is not None and signature == (prior['actor'], prior['kind'], prior['reason']):
            prior['repeats'] += 1
            prior['until'] = item['time']
            prior['evidence_ids'].append(item.get('trace_id', item.get('event_line')))
            continue
        row = dict(item, repeats=1, until=item['time'], evidence_ids=[item.get('trace_id', item.get('event_line'))])
        result.append(row); last[key] = row
    return result


def human_summary(report, frames, events):
    timeline = report['timeline']; turning = []
    first = next((e for e in events if e.get('kind') == 0), None)
    if first:
        turning.append(dict(time=first['time'], kind='contact', squad=first.get('actor', 0)//8,
                            text='First recorded contact', evidence='events line '+str(events.index(first)+1)))
    for i, decision in enumerate(timeline):
        text = decision['reason']; lower = text.lower(); category = None
        if decision['kind'] == 'drill_accepted':
            if 'squadattack' in lower or 'radio opportunity' in lower: category = 'assault'
            elif 'needsupport' in lower or 'help' in lower: category = 'help answer'
            elif 'withdraw' in lower or 'breakcontact' in lower: category = 'withdrawal'
        if decision['kind'] == 'drill_candidate' and text.startswith('SquadAttack:'): category = 'assault'
        if decision['kind'] == 'radio_broadcast' and ('NeedSupport' in text or text == '2'): category = 'help call'
        if not category: continue
        following = next((d for d in timeline[i+1:] if d['squad']==decision['squad'] and
                          (d['kind']=='drill_accepted' or any(w in d['reason'].lower() for w in ('consolidat', 'blocked:', 'contact broken')))), None)
        if category == 'help call':
            following = next((d for d in timeline[i+1:] if d['squad']//4==decision['squad']//4 and d['squad']!=decision['squad'] and d['kind']=='drill_accepted' and 'NeedSupport' in d['reason'] and d.get('objective') and decision.get('objective') and sum((a-b)**2 for a,b in zip(d['objective'][:2],decision['objective'][:2]))<=144),None)
        result = (f"{following['time']:.1f}s, squad {following['squad']}: {brief_decision(following['reason'])}" if following else 'No completion observed before termination')
        turning.append(dict(time=decision['time'],kind=category,squad=decision['squad'],text=text,
                            result=result,evidence=decision.get('trace_id', decision.get('event_line')),
                            knowledge=decision.get('knowledge')))
    verdicts=[]
    if frames:
        before,after=frames[0][1],frames[-1][1]
        for squad in sorted({s['squad'] for s in before.values() if s['alive']}):
            members=[sid for sid,s in before.items() if s['squad']==squad and s['alive']]
            own=[d for d in timeline if d['squad']==squad]
            intent=next((d['reason'] for d in own if d['kind'] in ('platoon_task','platoon_order_sent')), 'No platoon intent recorded')
            choices=list(dict.fromkeys(d['reason'].split(';')[0] for d in own if d['kind']=='drill_accepted'))
            outcome='consolidated' if any('consolidat' in d['reason'].lower() for d in own) else 'withdrew' if any('contact broken' in d['reason'].lower() for d in own) else 'no completed objective recorded'
            verdicts.append(dict(squad=squad,intent=intent,choices=choices,achievement=outcome,
                losses=sum(not after.get(sid, before[sid])['alive'] for sid in members),initial=len(members),
                shots=sum(max(0,after.get(sid,before[sid])['rounds']-before[sid]['rounds']) for sid in members)))
    # Rank observed consequences, not an omniscient judgement of decision quality.
    decisions=[d for d in timeline if 'trace_id' in d and (d['kind']=='drill_accepted' or d['kind'].startswith('platoon_'))]
    decisions.sort(key=lambda d: (bool(d.get('observed_next')), (d.get('observed_next') or {}).get('casualties',0),
                                  (d.get('observed_next') or {}).get('shots',0)),reverse=True)
    decisive=[];seen=set()
    for decision in decisions:
        key=(decision['squad'],decision['reason'])
        if key in seen:continue
        seen.add(key);decisive.append(decision)
        if len(decisive)==3:break
    delays=[d['delay'] for d in report['net']['deliveries']]
    return dict(outcome=report['outcome'],turning_points=turning,squads=verdicts,decisive=decisive,
                net=dict(matched=len(delays),mean_delay=statistics.mean(delays) if delays else None,
                         max_delay=max(delays) if delays else None,explicit_drops=len(report['net']['explicit_losses']),
                         unmatched=report['net']['unmatched_orders']))


def brief_decision(reason):
    for marker, text in (
        ('radio NeedSupport', 'answered a neighbour with support by fire'),
        ('radio opportunity: join', 'joined the assault from its own side'),
        ('radio opportunity', 'committed a covered flank assault'),
        ('SupportByFire:', 'prepared a base of fire'),
        ('ReactToContact:', 'took cover and returned fire'),
        ('MoveTactically', 'advanced tactically'),
        ('BreakContact:', 'broke contact'),
        ('Blocked:', 'reported a blocked assault and resumed closure'),
        ('renew committed', 'renewed the existing objective')):
        if marker in reason:return text
    return reason.split(';')[0]


def render_summary(report):
    summary=report['summary']; outcome=summary['outcome'];winner={0:'Azure',1:'Ember',-1:'Draw'}.get(outcome.get('winner'),'Unknown')
    out=['## Battle summary','',f"**{winner}** · {outcome.get('duration', 'unknown')} s · {outcome.get('shots','unknown')} shots.", '', '### Turning points', '']
    # A bounded overview; every episode remains in the linked appendix and JSON.
    for point in summary['turning_points'][:10]:
        evidence=point['evidence'];link=f"[trace {evidence}](#trace-{evidence})" if isinstance(evidence,int) else str(evidence)
        out.append(f"- {point['time']:.1f}s, squad {point['squad']}: {point['kind']} ({link}). {point.get('result',point['text'])}.")
    if len(summary['turning_points'])>10:out.append(f"- {len(summary['turning_points'])-10} further episodes: see the complete [turning-point register](#turning-point-register).")
    if not summary['turning_points']:out.append('No turning-point evidence recorded.')
    out.extend(['','### Squads',''])
    for squad in summary['squads']:
        choices=', '.join(brief_decision(x) for x in squad['choices'][-2:]) or 'no drill recorded'
        if len(squad['choices'])>2:choices+=f" and {len(squad['choices'])-2} further drill types"
        out.append(f"- **{squad['squad']}** — {squad['intent'].split(';')[0].replace('Platoon task-tree directive: ', '')}; chose {choices}; {squad['achievement']}; {squad['shots']} shots, {squad['losses']}/{squad['initial']} lost.")
    out.extend(['','### Decisions and attribution',''])
    phrases=[]
    for d in summary['decisive']:
        belief=d.get('knowledge');estimate=sum(r.get('estimate',0) for r in belief.get('regions',[])) if belief else None
        reports=len({c['enemy'] for c in belief.get('contacts',[]) if not c.get('personal',False)}) if belief else None
        observed=d.get('observed_next');effect=f"followed by {observed['shots']} shots and {observed['casualties']} own casualties" if observed else 'subsequent effect unavailable'
        picture=f"estimate {estimate:.1f} against {reports} distinct squad-reported contacts" if estimate is not None else 'leader picture unavailable'
        phrases.append(f"At {d['time']:.1f}s, squad {d['squad']} chose {brief_decision(d['reason'])} ([trace {d['trace_id']}](#trace-{d['trace_id']})), {effect}; {picture}")
    out.append('; '.join(phrases)+'. These are observed sequences, not proof of causation.' if phrases else 'No decision attribution can be supported by the available trace.')
    if report.get('leader_profiles'):
        out.extend(['', '### Platoon leader effects', '', f"Judgement/risk/adaptability/communication: Azure {report['leader_profiles'][0]}, Ember {report['leader_profiles'][1]}."])
        for decision in report.get('leader_attribution', [])[:2]:
            out.append(f"- {decision['time']:.1f}s: {decision['decision']} ([trace {decision['trace_id']}](#trace-{decision['trace_id']})). Following evidence: {decision['observed_next']}.")
    net=summary['net'];delay=f"mean {net['mean_delay']:.2f}s, max {net['max_delay']:.2f}s" if net['mean_delay'] is not None else 'delay unknown'
    out.extend(['','### Communication','',f"{net['matched']} matched deliveries ({delay}); {net['explicit_drops']} explicit drops; {net['unmatched']} unmatched messages, not classified as lost. Unrecorded loss remains unknown."])
    return '\n'.join(out)+'\n'


def render(report):
    out = ['# After-action report', '', f"Run: `{report['run']}`", '',
           render_summary(report), '## Appendix: complete turning-point register', '', '<a id="turning-point-register"></a>', '']
    for point in report['summary']['turning_points']:
        out.append(f"- {point['time']:.2f}s, squad {point['squad']}, {point['kind']}, evidence {point['evidence']}: {point['text']}; {point.get('result','')}.")
    out.extend(['', '## Appendix: command timeline', ''])
    for d in report['collapsed_timeline']:
        evidence = f"trace {d['trace_id']}" if 'trace_id' in d else f"events line {d['event_line']}"
        belief = d.get('knowledge')
        knowledge = f"actor memory at {belief['time']:.2f}s, trace {belief['trace_id']}" if belief else 'no linked actor-memory snapshot'
        for tid in d['evidence_ids']:out.append(f'<a id="trace-{tid}"></a>')
        out.append(f"- {d['time']:.2f}s–{d['until']:.2f}s (×{d['repeats']}), actor {d['actor']}, squad {d['squad']} ({evidence}): {d['reason']}. Knowledge: {knowledge}. Next observer evidence: {d['observed_next']}.")
    out.extend(['', '## Net delivery', '',
                f"{len(report['net']['deliveries'])} matched order/radio deliveries; {len(report['net']['explicit_losses'])} explicitly recorded losses; {report['net']['unmatched_orders']} unmatched orders (not classified as lost)."])
    delays = [d['delay'] for d in report['net']['deliveries']]
    if delays:
        out.append(f"Matched delay: mean {sum(delays)/len(delays):.3f}s; maximum {max(delays):.3f}s. Message-level evidence is in the companion JSON.")
    out.extend(['', '## Leader picture versus received reports', ''])
    for p in report['pictures']:
        out.append(f"- {p['time']:.2f}s leader {p['leader']}, trace {p['trace_id']}: estimate {p['estimate']:.2f}; {p['reported_contacts']} distinct relayed contacts. {p['caveat']}")
    out.extend(['', '## Casualties by recorded cause', ''])
    out.extend(f'- {count}: {cause}' for cause, count in report['casualty_causes'].items())
    if not report['casualties']:
        out.append('No casualty events recorded; see missing-data limitations before interpreting this as zero casualties.')
    out.extend(['', '## Outcome attribution', ''])
    out.extend(f"- {a['time']:.2f}s, evidence {a['evidence']}: {a['decision']}. Following evidence: {a['observed_next']}. {a['interpretation']}" for a in report['attribution'])
    if not report['attribution']:
        out.append('No supported attribution candidate found in recorded transitions.')
    out.extend(['', '## Evidence limits', ''])
    out.extend('- ' + item for item in report['limitations'])
    return '\n'.join(out) + '\n'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run', type=Path)
    parser.add_argument('--out', type=Path, help='Markdown output; defaults to RUN/after-action.md')
    args = parser.parse_args()
    report = build_report(args.run)
    output = args.out or resolve_run(args.run) / 'after-action.md'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(render(report))
    output.with_suffix('.json').write_text(json.dumps(report, indent=2) + '\n')
    print(output)


if __name__ == '__main__':
    main()
