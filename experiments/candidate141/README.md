# Preserved candidate141 research

On 16 September 2026 the user chose candidate90 as the main build because it scored
28/30 historical cases, versus candidate141's 15/30. Both scored 8/9 original.
This archive preserves the later work rather than mixing it into candidate90 and
claiming the older score. Neither controller is certified 30/30.

`restore.patch` restores the exact pre-promotion simulation, tests, CLI and Unreal
presentation for candidate141, fingerprint `1abef4125efaed2a`, from the main-build
integration in this revision. It includes research encounters44–59, stricter changed-
threat preflight, staging/refusal/retry policies and their tests. Main reliability
tests cover candidate90's contracts through encounter43. The additional negative
preflight assertion in the later handoff test is preserved here too; candidate90
has a known uncovered-final-approach limitation and does not pass that assertion.
This distinction is not a change to the frozen tactical evaluator or its cases.

## Restore into a separate checkout

Copy this revision into a separate checkout first, then from that checkout's root:

```bash
git apply --check experiments/candidate141/restore.patch
git apply experiments/candidate141/restore.patch
python3 tools/source_id.py
scripts/test-sim.sh --reliability
```

Expected simulation fingerprint: `1abef4125efaed2a`. The patch also restores the
experimental UI/CLI defaults; it is a research restoration, not another promotion.
`files.json` records SHA-256 hashes before/after for changed files. During archive
creation, a disposable copy was patched and every restored file byte-compared to
the full pre-promotion backup. The untouched full local backup is under
`.local/main-ai-promotion/pre-promotion141/`, with earlier immutable runs in
`.local/held-out-repair/`. Do not apply the patch over later unrelated work.

The main-build decision does not discard the diagnostics or lessons recorded in
`docs/AI_RELIABILITY_RESULTS.md` and plans005–013. Retain actor knowledge boundaries
and explicit execution receipts when future controllers replace this baseline.
