"""Build the lab binary and the test binary; run the mechanism selectors.

The lab build script recompiles unconditionally, so it is called once per
candidate and the binary is then invoked directly. Selectors run from a copy of
the test binary so a later build cannot change a node's evidence.
"""
from __future__ import annotations
import json, shutil, subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from tools.loop.config import REPO, SELECTOR_GROUPS, SELECTORS


def source_id() -> str:
    return subprocess.check_output(['python3', 'tools/source_id.py'], cwd=REPO, text=True).strip()


def build_lab(log: Path):
    """Build .local/lab/battle-lab; returns dict(ok, version, log)."""
    with log.open('w') as stream:
        code = subprocess.call(['./scripts/battle-lab.sh', '--version'], cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
    version = None
    if code == 0:
        version = subprocess.check_output([str(REPO/'.local/lab/battle-lab'), '--version'], text=True).strip()
    return dict(ok=code == 0 and version == source_id() + '-linux', version=version, log=str(log))


def build_tests(log: Path):
    """Compile tests/sim_tests via scripts/test-sim.sh running one cheap selector."""
    with log.open('w') as stream:
        code = subprocess.call(['./scripts/test-sim.sh', '--drills', 'plumbing'], cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
    return dict(ok=code == 0, log=str(log))


def _argv(binary: Path, name: str):
    if name.startswith('--'):
        return [str(binary), name]
    group = '--platoon' if (name.startswith(('P', 'Q')) or name == 'retention') else '--drills'
    return [str(binary), group, name]


def run_selectors(node_dir: Path, jobs=4, names=None):
    """Run every selector from a frozen copy of the test binary; returns dict(ok, passed, failed, results)."""
    names = list(names or (SELECTORS + SELECTOR_GROUPS))
    frozen = node_dir/'sim-tests'
    shutil.copy2(REPO/'.local/tests/sim_tests', frozen)
    logs = node_dir/'selectors'
    logs.mkdir(exist_ok=True)

    def run(name):
        log = logs/(name.strip('-') + '.log')
        with log.open('w') as stream:
            code = subprocess.call(_argv(frozen, name), cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
        return dict(name=name, exit_code=code, log=str(log))

    results = []
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        for future in as_completed([pool.submit(run, n) for n in names]):
            results.append(future.result())
    results.sort(key=lambda r: names.index(r['name']))
    failed = [r['name'] for r in results if r['exit_code'] != 0]
    (node_dir/'selectors.json').write_text(json.dumps(results, indent=1) + '\n')
    return dict(ok=not failed, passed=len(results) - len(failed), failed=failed, results=results)


def run_python_tests(log: Path):
    with log.open('w') as stream:
        code = subprocess.call(['python3', '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_*.py'], cwd=REPO, stdout=stream, stderr=subprocess.STDOUT)
    return dict(ok=code == 0, log=str(log))
