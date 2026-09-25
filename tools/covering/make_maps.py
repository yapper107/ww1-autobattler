"""Rebuild the 30 E-6 evaluation maps (15 village, 15 city2; seeds in e6_draw.json) into
.local/plan030/E-6/maps/, where run.py and outcome.py read them, and check each against e6_maps.sha256
(generator stamp b4b635355d181df4). A mismatch means the generator has changed since the draw: say so in
any comparison with rows measured on the old maps. Usage: python3 tools/covering/make_maps.py [JOBS]"""
import hashlib, json, shutil, subprocess, sys, tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
REPO = Path(__file__).resolve().parents[2]; HERE = Path(__file__).parent
OUT = REPO/'.local/plan030/E-6/maps'
def build(job):
    fam, g = job
    dest = OUT/f'{fam}-{g}.army'
    if dest.exists():
        return fam, g, 'kept'
    with tempfile.TemporaryDirectory() as tmp:
        subprocess.run([sys.executable, 'tools/generate_maps.py', '--kind', fam, '--seed', str(g), '--output', tmp], cwd=REPO, check=True, capture_output=True)
        shutil.copyfile(Path(tmp)/f'{fam}-{g}.army', dest)
    return fam, g, 'built'
if __name__ == '__main__':
    OUT.mkdir(parents=True, exist_ok=True)
    draw = json.loads((HERE/'e6_draw.json').read_text())
    jobs = [(fam, g) for fam in ('village', 'city2') for g in draw['families'][fam]['seeds']]
    with ThreadPoolExecutor(int(sys.argv[1]) if len(sys.argv) > 1 else 8) as pool:
        for fam, g, what in pool.map(build, jobs):
            pass
    want = {}
    for line in (HERE/'e6_maps.sha256').read_text().splitlines():
        if line.strip():
            digest, name = line.split()[:2]
            want[Path(name).name] = digest
    bad = [n for n, d in sorted(want.items()) if hashlib.sha256((OUT/n).read_bytes()).hexdigest() != d]
    print(f'{len(jobs)} maps in {OUT}; {len(jobs)-len(bad)} match e6_maps.sha256' + (f'; DIFFERENT: {", ".join(bad)}' if bad else ''))
