"""Shared masked actor and separate training-only value estimator.

Schema 3 (and schema-2 artifacts, zero-extended) score one logit per row over 97 columns.
Schema 4 (plan 026 P4) scores 128 columns and two timing heads per row: 0 = through the readiness
gates, 1 = go now. Its actions are flat indices row*2+timing over at most 64 logits.
"""
import argparse
from pathlib import Path
import numpy as np
import torch
from torch import nn
from tools.neural.train import Scorer

MAX_ACTIONS = 32
FEATURES = 97            # schema 3; kept under this name for running code
FEATURES4 = 128          # schema 4
TIMINGS = 2              # schema 4 heads: through the gates, go now
RASTER_POOLED = 128      # 4x4 pooled cells x 8 channels (stage 4c)
RASTER_UNITS = 16
WIDTH = {2: 96, 3: 97, 4: FEATURES4}


class Actor(nn.Module):
    def __init__(self, schema=3):
        super().__init__()
        if schema not in (3, 4): raise ValueError('Actor schema must be 3 or 4')
        self.schema = schema
        self.features = FEATURES4 if schema == 4 else FEATURES
        self.input = nn.Linear(self.features, 32)
        self.output = nn.Linear(32, TIMINGS if schema == 4 else 1)
        if schema == 4:
            # Stage 4c map view: pooled raster -> 16-unit ReLU embedding -> added to the hidden layer.
            self.raster = nn.Linear(RASTER_POOLED, RASTER_UNITS)
            self.project = nn.Linear(RASTER_UNITS, 32, bias=False)
            for p in (self.raster.weight, self.raster.bias, self.project.weight): nn.init.zeros_(p)

    def heads(self, x, raster=None):
        """Per-row logits: (..., rows) for schema 3, (..., rows, 2) for schema 4."""
        hidden = self.input(x)
        if raster is not None:
            if self.schema != 4: raise ValueError('Only schema 4 has a map view')
            hidden = hidden + self.project(torch.relu(self.raster(raster))).unsqueeze(-2)
        out = self.output(torch.relu(hidden))
        return out.squeeze(-1) if self.schema == 3 else out

    def forward(self, x, raster=None):
        """Logits over actions: rows for schema 3, flat row*2+timing for schema 4."""
        out = self.heads(x, raster)
        return out if self.schema == 3 else out.flatten(-2)


def read_policy(path):
    tokens = Path(path).read_text().split()
    if len(tokens) < 5 or tokens[0] != 'ARMY_SQUAD_POLICY':
        raise ValueError('Unsupported actor artifact')
    schema, old_features, hidden, candidates = map(int, tokens[1:5])
    if (schema, old_features, hidden) not in ((2, 96, 32), (3, 97, 32), (4, FEATURES4, 32)):
        raise ValueError('Unsupported actor artifact')
    start = 5
    if schema == 4:
        if tuple(map(int, tokens[5:7])) != (RASTER_POOLED, RASTER_UNITS): raise ValueError('Unsupported actor artifact')
        start = 7
    values = torch.tensor([float(x) for x in tokens[start:]], dtype=torch.float32)
    heads = TIMINGS if schema == 4 else 1
    size = old_features*32
    expected = size+32+heads*32+heads+(RASTER_UNITS*RASTER_POOLED+RASTER_UNITS+32*RASTER_UNITS if schema == 4 else 0)
    if len(values) != expected or not torch.isfinite(values).all():
        raise ValueError('Malformed actor weights')
    actor = Actor(4 if schema == 4 else 3)
    with torch.no_grad():
        at = 0
        def take(n):
            nonlocal at
            block = values[at:at+n]; at += n; return block
        actor.input.weight.zero_()
        actor.input.weight[:, :old_features].copy_(take(size).reshape(32, old_features))
        actor.input.bias.copy_(take(32))
        actor.output.weight.copy_(take(heads*32).reshape(heads, 32))
        actor.output.bias.copy_(take(heads))
        if schema == 4:
            actor.raster.weight.copy_(take(RASTER_UNITS*RASTER_POOLED).reshape(RASTER_UNITS, RASTER_POOLED))
            actor.raster.bias.copy_(take(RASTER_UNITS))
            actor.project.weight.copy_(take(32*RASTER_UNITS).reshape(32, RASTER_UNITS))
    return actor, schema, candidates


def migrate(actor, now_bias=0.):
    """A schema-4 actor whose through-the-gates head is the given schema-3 actor, exactly.

    The go-now head starts as a copy of the through-the-gates head (same output weights) with
    bias gates_bias+now_bias, so on every row logit_now-logit_gates=now_bias (up to float
    rounding) and P(now)/P(gates)=exp(now_bias/T) whatever the row's logit. now_bias=0 makes the
    two timings equally likely; a very negative now_bias makes greedy play exactly schema 3.
    New input columns and the raster blocks start at zero."""
    if actor.schema != 3: raise ValueError('Migration starts from a schema-3 actor')
    new = Actor(4)
    with torch.no_grad():
        for p in new.parameters(): p.zero_()
        new.input.weight[:, :FEATURES].copy_(actor.input.weight)
        new.input.bias.copy_(actor.input.bias)
        new.output.weight[0].copy_(actor.output.weight[0])
        new.output.weight[1].copy_(actor.output.weight[0])
        new.output.bias[0] = actor.output.bias[0]
        new.output.bias[1] = actor.output.bias[0]+float(now_bias)
    return new


def seed_map_view(actor, seed):
    """Start a zero map view learning without changing a single logit (plan 026 4c).

    With the embedding layer and the projection both zero, no gradient reaches either (the ReLU
    units are 0, and the projection is 0): the map view could never leave zero. This draws the
    embedding layer (nn.Linear's default uniform range) from a private generator and keeps the
    projection at zero, so the logits stay exactly as they were. It touches no global random state
    and does nothing (returns False) to an actor whose map view is already non-zero."""
    if actor.schema != 4: raise ValueError('Only schema 4 has a map view')
    if any(float(p.abs().sum()) for p in (actor.raster.weight, actor.raster.bias, actor.project.weight)):
        return False
    generator = torch.Generator().manual_seed(int(seed))
    bound = 1/np.sqrt(RASTER_POOLED)
    with torch.no_grad():
        actor.raster.weight.copy_((torch.rand(actor.raster.weight.shape, generator=generator)*2-1)*bound)
        actor.raster.bias.copy_((torch.rand(actor.raster.bias.shape, generator=generator)*2-1)*bound)
    return True


def pack(observation):
    """Padded features and the action mask: rows for schema 2/3, flat row*2+timing for schema 4."""
    schema4 = observation.get('schema') == 4 or 'legal_now' in observation
    width = FEATURES4 if schema4 else FEATURES
    x = np.asarray(observation['features'], dtype=np.float32)
    mask = np.asarray(observation['legal'], dtype=bool)
    now = np.asarray(observation['legal_now'], dtype=bool) if schema4 else None
    if x.shape != (len(mask), width) or not 1 <= len(mask) <= MAX_ACTIONS or (now is not None and now.shape != mask.shape):
        raise ValueError('Bad worker observation shape or mask')
    if not (mask.any() or (now is not None and now.any())):
        raise ValueError('Bad worker observation shape or mask')
    if not np.isfinite(x).all() or np.abs(x).max() > 16:
        raise ValueError('Invalid worker observation')
    features = np.zeros((MAX_ACTIONS, width), dtype=np.float32)
    features[:len(x)] = x
    if not schema4:
        legal = np.zeros(MAX_ACTIONS, dtype=bool)
        legal[:len(x)] = mask
        return features, legal
    legal = np.zeros(MAX_ACTIONS*TIMINGS, dtype=bool)
    legal[0:2*len(x):2] = mask
    legal[1:2*len(x):2] = now
    return features, legal


RASTER_BYTES = 16*16*8   # stage 4c window: 16x16 cells x 8 channels, channel-major (c*256+j*16+i)


def raster_pool(raster):
    """The native 4x4 integer average pool of one map-view raster (hex string or bytes).

    Pooled input c*16+(j//4)*4+i//4 is the integer sum of its 16 bytes divided once by 4080
    (16 cells x 255) in float32, exactly as SquadRasterPooling in SquadPolicy.cpp."""
    data = bytes.fromhex(raster) if isinstance(raster, str) else bytes(raster)
    if len(data) != RASTER_BYTES: raise ValueError('Map-view raster must have 2048 bytes')
    cells = np.frombuffer(data, dtype=np.uint8).astype(np.int32).reshape(8, 4, 4, 4, 4)  # c, py, j, px, i
    return (cells.sum(axis=(2, 4)).astype(np.float32)/np.float32(4080)).reshape(-1)


def pack_raster(observation):
    """Pooled map view of a schema-4 observation (float32, 128), or None when it carries none."""
    raster = observation.get('raster')
    if raster is None: return None
    if observation.get('schema', 4) != 4 and 'legal_now' not in observation:
        raise ValueError('Only schema-4 observations carry a map view')
    return raster_pool(raster)


def row_legal(features, legal):
    """Row mask for either layout (flat schema-4 masks have two entries per row)."""
    if legal.shape[-1] == TIMINGS*features.shape[-2]:
        return legal.reshape(*legal.shape[:-1], features.shape[-2], TIMINGS).any(-1)
    return legal


def critic_features(features, legal, truth, raster=None):
    # Truth is used ONLY here. Actor logits consume features and legal, never this array.
    # A map-view critic (Critic(raster=True)) also gets the pooled raster, appended last.
    parts = [features[row_legal(features, legal)].mean(axis=0), np.asarray(truth, dtype=np.float32)]
    if raster is not None: parts.append(np.asarray(raster, dtype=np.float32))
    return np.concatenate(parts)


class Critic(nn.Module):
    def __init__(self, features=FEATURES, raster=False):
        super().__init__()
        self.raster = bool(raster)
        self.net = nn.Sequential(nn.Linear(features+3+(RASTER_POOLED if raster else 0),64),nn.Tanh(),nn.Linear(64,1))

    def forward(self, features):
        return self.net(features).squeeze(-1)


def distribution(actor, features, legal, temperature, raster=None):
    """raster: pooled map view (..., 128) of each observation, or None (no map view)."""
    return torch.distributions.Categorical(logits=(actor(features, raster)/temperature).masked_fill(~legal,-1e9))


def anchor_kl(reference_logits, current):
    # Keep the calculation in log space: float32 softmax can underflow a legal
    # probability to zero even though its log probability remains finite.
    return (reference_logits.softmax(-1) * (reference_logits-current.logits)).sum(-1)


def save_actor(actor, candidates, path, schema=3):
    if schema != getattr(actor, 'schema', 3): raise ValueError('Actor and artifact schema differ')
    blocks = [actor.input.weight, actor.input.bias, actor.output.weight, actor.output.bias]
    if schema == 3:
        text = f'ARMY_SQUAD_POLICY 3 97 32 {candidates}\n'
    elif schema == 4:
        # Blocks: features (input weights, hidden bias), heads (2x32 weights, 2 biases), raster.
        text = f'ARMY_SQUAD_POLICY 4 {FEATURES4} 32 {candidates} {RASTER_POOLED} {RASTER_UNITS}\n'
        blocks += [actor.raster.weight, actor.raster.bias, actor.project.weight]
    else:
        raise ValueError('New actors use schema 3 or 4')
    values = np.concatenate([b.detach().numpy().reshape(-1) for b in blocks])
    text+='\n'.join(' '.join(format(float(x),'.9g') for x in values[i:i+8]) for i in range(0,len(values),8))+'\n'
    Path(path).write_text(text)


def main():
    ap = argparse.ArgumentParser(description='Migrate a schema-2/3 squad policy to schema 4 (zero-extended).')
    ap.add_argument('source'); ap.add_argument('out_dir')
    ap.add_argument('--now-bias', type=float, default=0., help='go-now head = copy of the through-the-gates head plus this bias offset (default 0: equal odds; about -0.15 at T 0.0508 gives ~5%% go-now per row)')
    args = ap.parse_args()
    actor, schema, candidates = read_policy(args.source)
    if schema == 4: raise SystemExit('Already schema 4')
    new = migrate(actor, args.now_bias)
    out = Path(args.out_dir); out.mkdir(parents=True, exist_ok=True)
    save_actor(new, candidates, out/'squad.policy', schema=4)
    torch.save(new.state_dict(), out/'scorer.pt')
    print(out/'squad.policy')


if __name__ == '__main__':
    main()
