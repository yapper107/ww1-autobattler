#!/usr/bin/env python3
"""Offline own-side order churn; trace/event equality is checked when traced.

Count issued soldier orders, including orders to NCOs, not deliveries, reports or
platoon directives. Own side is Azure (team 0); disclose both teams. Divide by
actual recorded battle minutes, never soldier-minutes or the requested limit.
"""
import argparse
import json
from pathlib import Path
from phase0_metrics import rows


def evaluate(root):
    root = Path(root)
    manifest = json.loads((root/'manifest.json').read_text())
    counts = [0, 0]
    for event in rows(root/'events.jsonl'):
        issuer, recipient = event['actor'], event['target']
        # EventKind::OrderIssued also carries platoon directives. The ordinary
        # soldier-order writer has this distinct text shape; trace equality
        # below proves the selection on every traced run.
        soldier_order = ' orders ' in event.get('text', '') and ' orders squad ' not in event.get('text', '')
        if event['kind'] == 6 and soldier_order and issuer >= 0 and recipient >= 0 and issuer//32 == recipient//32:
            counts[recipient//32] += 1
    traced = None
    if manifest.get('trace_enabled'):
        traced = [0, 0]
        with (root/'trace.jsonl').open() as stream:
            for line in stream:
                # Avoid decoding large unrelated perception/query records.
                if '"order_issued"' not in line:
                    continue
                event = json.loads(line)
                if event['kind'] != 'order_issued':
                    continue
                issuer, recipient = event['issuer'], event['soldier']
                if issuer >= 0 and recipient >= 0 and issuer//32 == recipient//32:
                    traced[recipient//32] += 1
        if traced != counts:
            raise ValueError(f'Order trace/event counts disagree: {traced} != {counts}')
    minutes = manifest['duration']/60
    return dict(orders=counts, orders_per_minute=[n/minutes if minutes else None for n in counts],
                trace_orders=traced, trace_event_equal=traced == counts if traced is not None else None)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('run');parser.add_argument('--out');args = parser.parse_args()
    text = json.dumps(evaluate(args.run),indent=2,allow_nan=False)+'\n'
    if args.out: Path(args.out).write_text(text)
    else: print(text,end='')


if __name__ == '__main__': main()
