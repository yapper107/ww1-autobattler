"""Distil the recorded teacher into a small shared action scorer; split by map, not rows.

This is imitation, not reinforcement learning and not tactical promotion.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import time

import numpy as np
import torch
from torch import nn

FEATURES, HIDDEN, ACTIONS = 96, 32, 31


class Scorer(nn.Module):
    def __init__(self):
        super().__init__()
        self.input = nn.Linear(FEATURES, HIDDEN)
        self.output = nn.Linear(HIDDEN, 1)

    def forward(self, features):
        return self.output(torch.relu(self.input(features))).squeeze(-1)


def load_data(root):
    episodes = sorted(Path(root).rglob('episode.json'))
    data, provenance, schemas = [], [], set()
    for path in episodes:
        meta = json.loads(path.read_text())
        if meta['status'] != 'complete':
            continue
        source = Path(meta['decisions_file'])
        provenance.append(dict(episode=str(path), map=meta['gen_seed'], build=meta['build'],
                               digest=meta['digest'], sha256=hashlib.sha256(source.read_bytes()).hexdigest()))
        labels_seen, families, outcomes = Counter(), Counter(), Counter()
        with source.open() as stream:
            for line in stream:
                row = json.loads(line)
                if row['schema'] != 2 or row['neural']:
                    raise ValueError('Expected schema-2 teacher decisions')
                x = np.asarray(row['features'], dtype=np.float32)
                mask = np.asarray(row['legal'], dtype=bool)
                scores = np.asarray(row['teacher_scores'], dtype=np.float32)
                label = row['teacher']
                if (x.ndim != 2 or x.shape[1] != FEATURES or not 1 <= len(x) <= ACTIONS
                        or len(mask) != len(x) or len(scores) != len(x)
                        or not np.isfinite(x).all() or not np.isfinite(scores).all()
                        or not 0 <= label < len(x) or not mask[label]):
                    raise ValueError(f'Invalid decision in {source}')
                labels_seen['retain' if label==0 else 'candidate']+=1
                families[int(np.argmax(x[label,32:38]))]+=1
                outcomes[row.get('outcome','unclassified')]+=1
                schemas.add(row['candidates'])
                if mask.sum() < 2:
                    continue
                padded = np.zeros((ACTIONS, FEATURES), dtype=np.float32)
                legal = np.zeros(ACTIONS, dtype=bool)
                target = np.zeros(ACTIONS, dtype=np.float32)
                padded[:len(x)] = x
                legal[:len(x)] = mask
                target[:len(x)] = scores - scores[0]  # relative advantage; teacher scores are labels only
                data.append((padded, legal, target, label, meta['gen_seed']))
        provenance[-1].update(labels=dict(labels_seen),families=dict(families),outcomes=dict(outcomes),
            decisions=sum(labels_seen.values()))
    if len(schemas) != 1 or len(data) < 20:
        raise ValueError('Need at least 20 choices from one candidate schema')
    return data, provenance, schemas.pop()


def export(model, candidates, path):
    values = np.concatenate([model.input.weight.detach().numpy().reshape(-1),
                             model.input.bias.detach().numpy(),
                             model.output.weight.detach().numpy().reshape(-1),
                             model.output.bias.detach().numpy()])
    text = f'ARMY_SQUAD_POLICY 2 {FEATURES} {HIDDEN} {candidates}\n'
    text += '\n'.join(' '.join(format(float(x), '.9g') for x in values[i:i+8])
                      for i in range(0, len(values), 8)) + '\n'
    Path(path).write_text(text)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--data', required=True)
    ap.add_argument('--out', required=True)
    ap.add_argument('--epochs', type=int, default=80)
    ap.add_argument('--seed', type=int, default=24)
    ap.add_argument('--threads', type=int, default=4)
    args = ap.parse_args()
    torch.set_num_threads(args.threads)
    torch.manual_seed(args.seed)
    torch.use_deterministic_algorithms(True)
    data, provenance, candidates = load_data(args.data)
    map_ids = sorted({row[-1] for row in data})
    if len(map_ids) < 5:
        raise ValueError('Need at least five maps for a meaningful map-separated split')
    valid_maps = set(map_ids[::5])
    train_ids = torch.tensor([i for i, row in enumerate(data) if row[-1] not in valid_maps])
    valid_ids = torch.tensor([i for i, row in enumerate(data) if row[-1] in valid_maps])
    x = torch.from_numpy(np.stack([row[0] for row in data]))
    mask = torch.from_numpy(np.stack([row[1] for row in data]))
    target = torch.from_numpy(np.stack([row[2] for row in data]))
    labels = torch.tensor([row[3] for row in data])
    model = Scorer()
    optimizer = torch.optim.Adam(model.parameters(), lr=.002)
    out = Path(args.out)
    out.mkdir(parents=True, exist_ok=True)
    history, best = [], -1.0
    started = time.monotonic()
    for epoch in range(args.epochs):
        ids = train_ids[torch.randperm(len(train_ids))]
        model.train()
        for batch in ids.split(256):
            logits = model(x[batch])
            relative = logits - logits[:, :1]
            loss = nn.functional.smooth_l1_loss(relative[mask[batch]], target[batch][mask[batch]])
            loss += .25 * nn.functional.cross_entropy(logits.masked_fill(~mask[batch], -1e9), labels[batch])
            optimizer.zero_grad()
            loss.backward()
            nn.utils.clip_grad_norm_(model.parameters(), 1)
            optimizer.step()
        model.eval()
        with torch.no_grad():
            metrics = dict(epoch=epoch+1)
            for name, ids in [('train', train_ids), ('validation', valid_ids)]:
                correct = total = 0
                for batch in ids.split(512):
                    logits = model(x[batch]).masked_fill(~mask[batch], -1e9)
                    correct += int((logits.argmax(-1) == labels[batch]).sum())
                    total += len(batch)
                metrics[name+'_accuracy'] = correct / total
            if metrics['validation_accuracy'] > best:
                best = metrics['validation_accuracy']
                export(model, candidates, out/'squad.policy')
                torch.save(model.state_dict(), out/'scorer.pt')
        history.append(metrics)
        if epoch % 10 == 0 or epoch == args.epochs-1:
            print(json.dumps(metrics), flush=True)
    report = dict(schema=1, method='behaviour_cloning', features=FEATURES, hidden=HIDDEN,
                  candidates=candidates, decisions=len(data), training_maps=sorted(set(map_ids)-valid_maps),
                  validation_maps=sorted(valid_maps), seed=args.seed, torch=torch.__version__,
                  wall_seconds=time.monotonic()-started, history=history, provenance=provenance,
                  best_validation_accuracy=best, validation_usage='Checkpoint selection; these maps are development, not unopened promotion tests',
                  model_sha256=hashlib.sha256((out/'squad.policy').read_bytes()).hexdigest())
    (out/'training.json').write_text(json.dumps(report, indent=2)+'\n')


if __name__ == '__main__':
    main()
