"""Paired outcome analysis for plan 031 (rows from outcome.py). Meeting: the drilled side (A: Azure, E: Ember)
against the same map and seed without the drill (N): its exchange ((enemy lost - own lost)/32) and win share
(win 1, draw 0.5), pooled over both orientations. Static: SA against SN: attacker wins, lost per side, duration.
95% intervals by map-cluster bootstrap. Usage: python3 analyse.py [PREFIX [CONTROL]]  (PREFIX picks arm names, e.g. '' or 'x';
CONTROL, default PREFIX, picks the N and SN arms the treated A, E and SA arms are paired with)"""
import glob, json, random, sys
from pathlib import Path
ROWS = Path(__file__).resolve().parents[2]/'.local/covering/outcome/rows'
from collections import defaultdict
P = sys.argv[1] if len(sys.argv) > 1 else ''
def load(arm):
    return {(r['family'], r['map'], r['seed']): r for r in (json.load(open(f)) for f in glob.glob(str(ROWS/arm/'*.json')))}
def boot(pairs, fn, B=2000):
    maps = sorted({k[:2] for k, _ in pairs}); by = defaultdict(list)
    for k, v in pairs: by[k[:2]].append(v)
    random.seed(11); out = []
    for _ in range(B):
        smp = [x for m in (random.choice(maps) for _ in maps) for x in by[m]]
        out.append(fn(smp))
    out.sort(); return out[int(.025*B)], out[int(.975*B)-1]
mean = lambda xs: sum(xs)/len(xs)
def win(r, side): return 1.0 if r['winner'] == side else .5 if r['winner'] == -1 else 0.0
C = sys.argv[2] if len(sys.argv) > 2 else P
N, A, E = load(C+'N'), load(P+'A'), load(P+'E')
if N and (A or E):
    pairs = []
    for arm, side in ((A, 0), (E, 1)):
        for k, r in arm.items():
            if k in N:
                b = N[k]; o = 1-side
                pairs.append((k, dict(dx=((r['lost'][o]-r['lost'][side])-(b['lost'][o]-b['lost'][side]))/32, dw=win(r, side)-win(b, side),
                                      own=r['lost'][side]-b['lost'][side], enemy=r['lost'][o]-b['lost'][o], side=side)))
    for lab, sel in (('both orientations', lambda p: True), ('Azure drilled', lambda p: p['side'] == 0), ('Ember drilled', lambda p: p['side'] == 1)):
        ps = [(k, v) for k, v in pairs if sel(v)]
        if not ps: continue
        dx = mean([v['dx'] for _, v in ps]); lo, hi = boot(ps, lambda s: mean([v['dx'] for v in s]))
        dw = mean([v['dw'] for _, v in ps]); lo2, hi2 = boot(ps, lambda s: mean([v['dw'] for v in s]))
        print(f'meeting, {lab} ({len(ps)} pairs): drilled side exchange {dx:+.3f} [{lo:+.3f}, {hi:+.3f}], win share {dw:+.3f} [{lo2:+.3f}, {hi2:+.3f}], own lost {mean([v["own"] for _,v in ps]):+.2f}, enemy lost {mean([v["enemy"] for _,v in ps]):+.2f}')
SN, SA = load(C+'SN'), load(P+'SA')
if SN and SA:
    ps = [(k, (SA[k], SN[k])) for k in SA if k in SN]
    for lab, f in (('attacker wins', lambda a, b: win(a, 0)-win(b, 0)), ('attackers lost', lambda a, b: a['lost'][0]-b['lost'][0]),
                   ('defenders lost', lambda a, b: a['lost'][1]-b['lost'][1]), ('duration s', lambda a, b: a['duration']-b['duration'])):
        d = [(k, f(a, b)) for k, (a, b) in ps]; m = mean([v for _, v in d]); lo, hi = boot(d, mean)
        print(f'static attack ({len(ps)} pairs), drill for the attacker: {lab} {m:+.2f} [{lo:+.2f}, {hi:+.2f}]', end='')
        base = mean([f(b, {'winner': -2, 'lost': [0, 0], 'duration': 0}) for _, (a, b) in ps]) if lab != 'attacker wins' else mean([win(b, 0) for _, (a, b) in ps])
        print(f'   (baseline {base:.2f})')
