"""Static guard: policy sources must not reach hidden enemy state.

Plan 014 section 11: every policy input is the officer's own memory, own orders,
received reports and permitted squad-member fields. The drills policy files
receive those through their signatures and never take the whole frame. This
check forbids the frame, the shot record, observer fields and full-vision
switches in those files, so a candidate that widens its view fails a guard
instead of a review.
"""
from __future__ import annotations
from pathlib import Path

from tools.loop.config import FORBIDDEN_TOKENS, POLICY_FILES, SIM


def check(sim_dir: Path = SIM, files=POLICY_FILES, tokens=FORBIDDEN_TOKENS):
    hits = []
    for name in files:
        path = Path(sim_dir)/name
        if not path.exists():
            continue
        for number, line in enumerate(path.read_text().splitlines(), 1):
            stripped = line.strip()
            if stripped.startswith('//'):
                continue
            code = stripped.split('//', 1)[0]
            for token in tokens:
                if token in code:
                    hits.append(dict(file=name, line=number, token=token, text=stripped[:160]))
    return dict(ok=not hits, hits=hits, files=list(files), tokens=list(tokens))


AUDIT_TOKENS = ['.soldiers[', 'f.soldiers', 'frame.soldiers', 'Frame&', 'const Frame', 'observer', 'fullVision', '.shots', 'enemy.position', 'truth']


def audit_added_lines(diff_path):
    """Added lines that touch frame or soldier arrays, for a human or architect audit.

    The policy-file check above is a hard guard for the drills sources. Legacy command
    code legitimately handles the whole frame for transport, so a token cannot decide
    there; these lines are listed on the node and audited before a survivor is shown."""
    if not diff_path or not Path(diff_path).exists():
        return dict(required=False, lines=[])
    flagged, current = [], None
    for line in Path(diff_path).read_text().splitlines():
        if line.startswith('+++ '):
            current = line[6:] if line.startswith('+++ b/') else line[4:]
        elif line.startswith('+') and not line.startswith('+++'):
            if any(token in line for token in AUDIT_TOKENS):
                flagged.append(dict(file=current, line=line[1:].strip()[:240]))
    return dict(required=bool(flagged), lines=flagged)
