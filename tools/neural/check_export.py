"""Compare the exported native scorer with PyTorch on actual recorded decisions.

Schema 4 (plan 026 P4): the probe prints both timing logits of every row and the argmax check runs
over the flat row*2+timing mask. Recorded rows narrower than the model are zero-extended, so a
migrated schema-4 model can be checked on schema-3 data. --same-as DIR additionally requires the
native through-the-gates logits to equal that model's native logits bit for bit (a migration check).

Plan 026 4c: decisions that carry a map-view raster pass it to the probe (native pooling and
embedding) and to PyTorch (tools.neural.actor.raster_pool, then the actor's embedding). The pooled
inputs are also checked against an independent numpy loop and the embedding against a float64
numpy reference (map_view block of the report).
"""
import argparse
import json
from pathlib import Path
import subprocess
import tempfile
import numpy as np
import torch
from tools.neural.train import Scorer


def native_scores(probe, model_file, features, work, windows, rasters=None):
    text = '\n'.join(' '.join(format(float(v), '.9g') for v in x) for x in features)+'\n'
    if windows:
        model_file=subprocess.check_output(['wslpath','-w',model_file],text=True).strip()
    features_file=Path(work)/'features.txt'
    features_file.write_text(text)
    inputs=[str(features_file)]
    if rasters is not None:
        # One line per feature row: that row's decision raster in hex, or '-'.
        raster_file=Path(work)/'rasters.txt'
        raster_file.write_text('\n'.join(r or '-' for r in rasters)+'\n')
        inputs.append(str(raster_file))
    if windows:
        inputs=[subprocess.check_output(['wslpath','-w',name],text=True).strip() for name in inputs]
    lines = subprocess.check_output([probe, model_file, *inputs], text=True, timeout=300).splitlines()
    return lines


def numpy_pool(hex_raster):
    """Independent loop form of the native pooling: pooled[c*16+py*4+px] = sum / 4080 (float32)."""
    data = np.frombuffer(bytes.fromhex(hex_raster), dtype=np.uint8)
    pooled = np.zeros(128, dtype=np.float32)
    for c in range(8):
        for py in range(4):
            for px in range(4):
                total = 0
                for j in range(4):
                    for i in range(4):
                        total += int(data[c*256+(py*4+j)*16+px*4+i])
                pooled[c*16+py*4+px] = np.float32(total)/np.float32(4080)
    return pooled


def map_view_check(model, hexes):
    """Pooling (bitwise) and embedding (float64 numpy vs PyTorch float32) on the recorded rasters."""
    from tools.neural.actor import raster_pool
    pooled = np.stack([raster_pool(h) for h in hexes])
    reference = np.stack([numpy_pool(h) for h in hexes[:200]])
    pool_bitwise = bool(np.array_equal(pooled[:len(reference)], reference))
    w = model.raster.weight.detach().double().numpy(); b = model.raster.bias.detach().double().numpy()
    p = model.project.weight.detach().double().numpy()
    expected = np.maximum(pooled.astype(np.float64)@w.T+b, 0)@p.T
    with torch.no_grad():
        embedded = model.project(torch.relu(model.raster(torch.from_numpy(pooled)))).numpy()
    return dict(rasters=len(hexes), pool_bitwise_vs_numpy_loop=pool_bitwise, pool_rasters_checked=len(reference),
                embedding_max_abs_error_vs_float64=float(np.max(np.abs(embedded-expected))),
                nonzero_embedding=bool(np.any(expected != 0)))


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--model-dir', required=True)
    ap.add_argument('--data', required=True)
    ap.add_argument('--probe', required=True)
    ap.add_argument('--same-as', help='model directory whose native logits the first head must equal bit for bit')
    args = ap.parse_args()
    root = Path(args.model_dir)
    torch.set_num_threads(1)
    state=torch.load(root/'scorer.pt',weights_only=True)
    width=state['input.weight'].shape[1]
    if width in (97, 128):
        from tools.neural.actor import Actor
        model=Actor(4 if width==128 else 3)
    else:model=Scorer()
    model.load_state_dict(state)
    schema4=width==128
    rows = []
    for path in sorted(Path(args.data).rglob('decisions.jsonl')):
        with path.open() as stream:
            for line in stream:
                row = json.loads(line)
                rows.append(row)
                if len(rows)>=2000:
                    break
        if len(rows)>=2000:
            break
    if not rows:
        raise ValueError('No observations to check')
    features = np.concatenate([r['features'] for r in rows]).astype(np.float32)
    if features.shape[1] > width:
        raise ValueError('Recorded rows are wider than the model')
    if features.shape[1] < width:
        features = np.concatenate([features, np.zeros((len(features), width-features.shape[1]), dtype=np.float32)], axis=1)
    model_file=str((root/'squad.policy').resolve())
    windows=Path(args.probe).suffix.lower()=='.exe'
    # Plan 026 4c: rows of a decision with a map view carry its raster (only a schema-4 model reads it).
    has_raster = schema4 and any('raster' in r for r in rows)
    row_rasters = [r.get('raster') for r in rows for _ in r['features']] if has_raster else None
    # WSL/Windows bidirectional pipes can stall on the large feature matrix.
    # The probe reads a temporary file; only its small score output crosses stdout.
    with tempfile.TemporaryDirectory(prefix='export-probe-',dir=root.resolve()) as work:
        lines = native_scores(args.probe, model_file, features, work, windows, row_rasters)
        reference_lines = None
        if args.same_as:
            reference_file = (Path(args.same_as)/'squad.policy').resolve()
            reference_width = int(reference_file.read_text().split(maxsplit=3)[2])
            if np.any(features[:, reference_width:]):
                raise ValueError('Rows use columns the reference model does not have')
            reference_lines = native_scores(args.probe, str(reference_file), features[:, :reference_width], work, windows)
    native = np.asarray([[float(x) for x in line.split()] for line in lines], dtype=np.float32)
    heads = 2 if schema4 else 1
    if native.shape != (len(features), heads):
        raise ValueError('Native probe did not return one score per feature row and head')
    with torch.no_grad():
        x = torch.from_numpy(features)
        if has_raster:
            from tools.neural.actor import raster_pool
            # One row at a time, each with its decision's pooled raster (zeros contribute nothing
            # only for rows without one, so those rows are scored without the map view).
            expected = np.zeros((len(features), heads), dtype=np.float32)
            with_view = np.asarray([h is not None for h in row_rasters])
            if (~with_view).any():
                expected[~with_view] = model.heads(x[~with_view]).numpy().reshape(-1, heads)
            if with_view.any():
                pooled = torch.from_numpy(np.stack([raster_pool(h) for h in row_rasters if h is not None]))
                expected[with_view] = model.heads(x[with_view].unsqueeze(-2), pooled).numpy().reshape(-1, heads)
        else:
            expected = (model.heads(x) if schema4 else model(x)).numpy().reshape(len(features), heads)
    error = float(np.max(np.abs(native-expected)))
    offset, disagreement = 0, 0
    for row in rows:
        n = len(row['features'])
        legal = np.asarray(row['legal'], dtype=bool)
        if schema4:
            # Recorded schema-3 rows have no go-now mask: holding (row 0) never, otherwise as legal.
            now = np.asarray(row['legal_now'], dtype=bool) if 'legal_now' in row else np.concatenate([[False], legal[1:]])
            mask = np.stack([legal, now], axis=1).reshape(-1)
        else:
            mask = legal
        a = np.where(mask, native[offset:offset+n].reshape(-1), -np.inf).argmax()
        b = np.where(mask, expected[offset:offset+n].reshape(-1), -np.inf).argmax()
        disagreement += int(a != b)
        offset += n
    report = dict(decisions=len(rows), feature_rows=len(features), heads=heads, max_abs_error=error,
                  action_disagreements=disagreement, passed=error<1e-5 and disagreement==0,
                  platform='Windows MSVC probe versus Linux PyTorch' if windows else 'Linux native probe versus PyTorch')
    if has_raster:
        report['map_view'] = map_view_check(model, [r['raster'] for r in rows if 'raster' in r])
        report['map_view']['decisions_with_raster'] = sum('raster' in r for r in rows)
        report['passed'] = report['passed'] and report['map_view']['pool_bitwise_vs_numpy_loop'] and \
            report['map_view']['embedding_max_abs_error_vs_float64'] < 1e-5
    if reference_lines is not None:
        first = [line.split()[0] for line in lines]
        reference = [line.split()[0] for line in reference_lines]
        report['same_as'] = str(args.same_as)
        # The probe prints nine significant digits, which round-trips every float exactly.
        report['same_as_bitwise_rows'] = sum(a == b for a, b in zip(first, reference))
        report['same_as_bitwise'] = len(first) == len(reference) and first == reference
        report['passed'] = report['passed'] and report['same_as_bitwise']
    name = 'export-check-windows.json' if windows else 'export-check.json'
    (root/name).write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report))
    if not report['passed']:
        raise SystemExit('Export parity failed')


if __name__ == '__main__':
    main()
