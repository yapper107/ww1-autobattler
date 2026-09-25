"""Paired comparison of any two outcome arms (rows from outcome.py), matched by family, map and seed.
Usage: python3 pair.py TREATED CONTROL [SIDE]
SIDE 0 (default) or 1 is the side whose result is reported: its win share (win 1, draw 0.5), own and enemy lost,
exchange ((enemy lost - own lost)/32), and the battle's duration. 95% intervals by map-cluster bootstrap."""
import glob, json, random, sys
from collections import defaultdict
from pathlib import Path
ROWS = Path(__file__).resolve().parents[2]/'.local/covering/outcome/rows'
def load(arm):
    return {(r['family'], r['map'], r['seed']): r for r in (json.load(open(f)) for f in glob.glob(str(ROWS/arm/'*.json')))}
def boot(pairs, B=2000):
    maps = sorted({k[:2] for k, _ in pairs}); by = defaultdict(list)
    for k, v in pairs: by[k[:2]].append(v)
    random.seed(11); out = []
    for _ in range(B):
        smp = [x for m in (random.choice(maps) for _ in maps) for x in by[m]]
        out.append(sum(smp)/len(smp))
    out.sort(); return out[int(.025*B)], out[int(.975*B)-1]
def win(r, side): return 1.0 if r['winner'] == side else .5 if r['winner'] == -1 else 0.0
if __name__ == '__main__':
    T, C = load(sys.argv[1]), load(sys.argv[2]); side = int(sys.argv[3]) if len(sys.argv) > 3 else 0; o = 1-side
    keys = sorted(k for k in T if k in C)
    if not keys: sys.exit('no pairs')
    print(f'{sys.argv[1]} against {sys.argv[2]}, side {side}, {len(keys)} pairs')
    for lab, f in (('win share', lambda r: win(r, side)), ('own lost', lambda r: r['lost'][side]), ('enemy lost', lambda r: r['lost'][o]),
                   ('exchange', lambda r: (r['lost'][o]-r['lost'][side])/32), ('duration s', lambda r: r['duration'])):
        d = [(k, f(T[k])-f(C[k])) for k in keys]; m = sum(v for _, v in d)/len(d); lo, hi = boot(d)
        base = sum(f(C[k]) for k in keys)/len(keys)
        print(f'  {lab:<11} {m:+.3f} [{lo:+.3f}, {hi:+.3f}]   (control {base:.3f})')
