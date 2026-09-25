"""Guards for the instruction files (plan 026 P1): CLAUDE.md and AGENTS.md stay identical and
small, the standing rulings stay present, and docs/PROJECT_LOG.md's index matches its entries.

Run: python3 -m unittest tests.test_project_docs
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
AGENTS = ROOT / 'AGENTS.md'
CLAUDE = ROOT / 'CLAUDE.md'
LOG = ROOT / 'docs' / 'PROJECT_LOG.md'
MAX_BYTES = 16 * 1024

# One key phrase per standing ruling (whitespace-normalised, bold markers ignored). Retiring a
# ruling means removing it from AGENTS.md and from this list in the same change.
RULING_PHRASES = [
    'Legacy is the playable default',
    "No promotion without Jordan's replay approval",
    'per-case fixes are refused',
    'Never restore candidate141',
    'Frozen evaluator',
    '2001–2010 stay unopened',
    'all usable physical geometry',
    'never tuned back',
    'generated city maps',
    'WSL stays at 30 GB',
    'raw battle output is not a record',
    'loop proposers are Sonnet',
    'parents are chosen by the selection policy',
    'the user sees only survivors',
    'live in the scripts, not in memory',
    'not while generations are running',
    '-game -ArmyLegacy',
    'No Fable review of visual iteration',
    'richer color, not larger bullets',
    'Train against active Legacy',
    'thresholds are not weakened',
    'never a promotion set',
    'Keep the frozen training binary',
    'Opus 5.5 agents implement',
    'stay under the thread count',
    'Friendly-fire repairs may change Legacy directly',
]

LINK = re.compile(r'\]\(([^)\s]+)\)')


def normalise(text):
    return ' '.join(text.replace('**', '').replace('`', '').split())


def section(text, heading):
    start = text.index(f'\n{heading}\n')
    end = text.find('\n## ', start + 1)
    return text[start:end if end != -1 else len(text)]


def slug(heading):
    """GitHub-style heading anchor."""
    return re.sub(r'[^\w\- ]', '', heading.strip().lower()).replace(' ', '-')


def log_entries(text):
    return [h for h in re.findall(r'^## (.+)$', text, re.M) if h != 'Index']


def log_index(text):
    rows = []
    for line in section(text, '## Index').splitlines():
        cells = [c.strip() for c in line.strip().strip('|').split('|')]
        if line.startswith('|') and len(cells) == 3 and cells[1] not in ('Entry', '---'):
            rows.append(cells)
    return rows


class InstructionFiles(unittest.TestCase):
    def setUp(self):
        self.agents = AGENTS.read_text()
        self.log = LOG.read_text()

    def test_claude_and_agents_identical(self):
        self.assertEqual(CLAUDE.read_bytes(), AGENTS.read_bytes(),
                         'CLAUDE.md must be a byte-identical copy of AGENTS.md')

    def test_agents_size_cap(self):
        size = len(AGENTS.read_bytes())
        self.assertLessEqual(size, MAX_BYTES, f'AGENTS.md is {size} bytes; the cap is {MAX_BYTES}. '
                             'Move narrative to docs/PROJECT_LOG.md.')

    def test_standing_rulings_present(self):
        rulings = normalise(section(self.agents, '## Standing rulings'))
        missing = [p for p in RULING_PHRASES if p not in rulings]
        self.assertEqual(missing, [], 'standing rulings missing from AGENTS.md')

    def test_required_sections(self):
        for heading in ('## Standing Astra / Fable collaboration', '## Current state', '## Standing rulings',
                        '## Verification gates', '## Where things are', '## Keeping these files'):
            self.assertIn(f'\n{heading}\n', self.agents)

    def test_log_index_matches_entries(self):
        entries = log_entries(self.log)
        rows = log_index(self.log)
        self.assertTrue(rows, 'PROJECT_LOG.md has no index rows')
        unmatched = [r[1] for r in rows if r[1] not in entries]
        self.assertEqual(unmatched, [], 'index rows without a matching ## heading')
        self.assertEqual([r[1] for r in rows], entries,
                         'the index must list every ## entry, in the same order (newest first)')
        for date, heading, _ in rows:
            self.assertTrue(date, f'index row for {heading!r} has no date')

    def test_agents_links_resolve(self):
        anchors = {slug(h) for h in re.findall(r'^#{1,6} (.+)$', self.log, re.M)}
        for target in LINK.findall(self.agents):
            if target.startswith(('http://', 'https://')):
                continue
            path, _, anchor = target.partition('#')
            self.assertTrue((ROOT / path).exists(), f'AGENTS.md links to missing {path}')
            if anchor and path == 'docs/PROJECT_LOG.md':
                self.assertIn(anchor, anchors, f'AGENTS.md links to missing log anchor #{anchor}')

    def test_log_index_links_resolve(self):
        for _, _, related in log_index(self.log):
            for target in LINK.findall(related):
                self.assertTrue((LOG.parent / target.partition('#')[0]).exists(),
                                f'PROJECT_LOG.md index links to missing {target}')


if __name__ == '__main__':
    unittest.main()
