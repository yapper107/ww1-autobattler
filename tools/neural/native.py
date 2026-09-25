"""The fast native binary and runtime settings shared by the neural pipeline.

scripts/build-train-lab.sh builds BINARY from the current simulator source with PGO+LTO
(compiler flags only; results identical to the -O2 lab). Frozen baselines keep their own binaries.
"""
import os
from pathlib import Path
import subprocess
import sys

BINARY = '.local/lab/battle-lab-train'
# Total concurrent battles for all neural jobs on this machine. Edit the number at any time:
# running jobs grow or shrink to it between battles.
CAPACITY_FILE = Path('.local/neural/max_jobs')


def capacity(default):
    """The current machine-wide cap on neural battles, or default when no cap file exists."""
    try:
        return max(1, int(CAPACITY_FILE.read_text().split()[0]))
    except (OSError, ValueError, IndexError):
        return default


def share(total, index, count):
    """This job's part of the total when count jobs split it (index 0..count-1)."""
    return max(1, total // count + (1 if index < total % count else 0))


def huge_pages(env=os.environ):
    """Back the large exact-key caches with transparent huge pages (fewer TLB misses, same results).
    Applied to os.environ by default, so every child battle inherits it."""
    if 'glibc.malloc.hugetlb' not in env.get('GLIBC_TUNABLES', ''):
        env['GLIBC_TUNABLES'] = ':'.join(filter(None, [env.get('GLIBC_TUNABLES'), 'glibc.malloc.hugetlb=1']))
    return env


def checked(binary):
    """Refuse a stale training binary: it must report the current simulator source."""
    if Path(binary).resolve() == Path(BINARY).resolve():
        if not Path(binary).exists():
            raise SystemExit(f'{BINARY} is missing: run scripts/build-train-lab.sh')
        source = subprocess.check_output([sys.executable, 'tools/source_id.py'], text=True).strip()
        build = subprocess.check_output([str(binary), '--version'], text=True).strip()
        if build.split('-')[0] != source:
            raise SystemExit(f'{BINARY} is {build}, source is {source}: run scripts/build-train-lab.sh')
    return binary
