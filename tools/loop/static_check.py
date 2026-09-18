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
