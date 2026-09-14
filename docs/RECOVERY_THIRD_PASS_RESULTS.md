# Third recovery pass: implementation and measured regression

Current simulation source: `5f53cb886967bd16`. This pass implements the corrected Cause A–E mechanisms from `RECOVERY_GATE_FINDINGS.md`, but **does not pass acceptance**. The combined candidate scores **2/9 on Linux and native Windows**, down from the preceding 5/9. It remains confined to `--recovery` encounters 5–7; it is not promoted into normal battles.

## Changes

- A: reaching the assigned shelter clears stale emergency cover memory and installs the assigned pair. The Done predicate is unchanged: near the peek, Fire action, and an executable firing solution. Ducking, passage, reload, and invalid geometry retain their existing checks.
- B: the query counts shelter protection across known tracks and scores exposure at the standing firing peek, separately from crouched shelter protection. Crouch cover requires majority protection. Nearby viable crouch candidates displace unprotected standing step-outs. The tests assert crouch/protection properties on both mirrored layouts, without coordinate-specific policy. The new normalized protection/exposure terms each have weight 35; these are implementation choices, not measured optimal weights.
- C: initial and replacement slots use the same 55-degree minimum over the existing ±6 m target samples. Early re-slotting searches near the current objective, preserves approach stages, and replaces the final suffix. An unsuccessful target-only re-slot before completion of stage zero is deferred; geometry validation and release screening remain independent.
- D: candidate pairs are rejected when either firing segment passes within 1 m of the partner shelter or peek at its cover-stance torso height. Both directions are checked against target samples and known target positions with a physical firing line. The live friendly-fire check still uses observed/predicted allies; reservations are not inserted as observations. This is a selection-time approximation, not a guarantee against friendly hits while either soldier stands or moves.
- E: the maneuver leader sends its selected support element the known tracks overlooking the assault slots. Requests use the existing 0.75 s message delay plus reaction delay, reject obsolete updates, expire after eight seconds, and retain original contact timestamps. The support shooter prioritizes executable reported targets and rotates on six-round commitments. The existing drill fire-shift signal is relayed to shared support too; delivery counts are restricted to the relevant overlooking tracks. This applies only to the recovery fixture.

## Sequential measurements

The evaluator was unchanged throughout. A ran the requested six layout-6/7 cases. B, C, D, and the completed E each ran all nine, including layout 5 regressions. Intermediate runs and gate audits are retained separately.

| Stage | Source | Layout 5 | Layout 6 | Layout 7 | Total measured |
| --- | --- | --- | --- | --- | --- |
| Before | f2424236795f5531 | 3/3 | 1/3 | 1/3 | 5/9 |
| A | 772cef8a8c922373-linux | Not rerun | 1/3 | 1/3 | 2/6 |
| B | 0ab42124094fedf2-linux | 2/3 | 2/3 | 0/3 | 4/9 |
| C | 6fbe5fb3c55c3c73-linux | 2/3 | 2/3 | 0/3 | 4/9 |
| D | 4032ceab7b403fee-linux | 2/3 | 1/3 | 0/3 | 3/9 |
| E, delivered | a5995279c34f3ac6-linux | 1/3 | 1/3 | 0/3 | 2/9 |
| Final firing-height correction | 5f53cb886967bd16-linux | 1/3 | 1/3 | 0/3 | 2/9 |

A fixes 7-108, which completes and passes, but 7-109 loses its sustained angle: the predicted net gain does not occur. B improves layout 6 to 2/3 but regresses layout 5 and all three layout-7 cases. C passes its focused continuity test but does not improve the matrix. D delays/rejects additional candidate pairs. An intermediate E run exposed a cross-squad message-filter bug; the completed E result above includes its repair and actual receipt of the sector reports. Final review corrected peek-exposure scoring from crouched cover height to the actual 1.5 m firing height and reran all nine cases; the aggregate stays 2/9, although completion and overlap timings change. Neither D nor E is considered accepted for full battles.

## Final failing predicates

| Layout | Seed | Routes completed | Best pair qualification duration | Strict pass |
| --- | --- | --- | --- | --- |
| 5 | 107 | 1 | 1.6 s | No |
| 5 | 108 | 0 | 0.0 s | No |
| 5 | 109 | 1 | 6.8 s | Yes |
| 6 | 107 | 1 | 5.6 s | Yes |
| 6 | 108 | 1 | 2.8 s | No |
| 6 | 109 | 1 | 1.2 s | No |
| 7 | 107 | 0 | 0.0 s | No |
| 7 | 108 | 0 | 0.0 s | No |
| 7 | 109 | 0 | 0.4 s | No |

The duration audit follows the evaluator’s per-soldier/per-target continuity and records the shorter of the two longest current mover streaks. It is supplementary evidence; `evaluate_routes.py` alone decides acceptance. For example, 5-107 reaches only 1.6 s at 71.4 s, and 6-108 reaches 2.8 s at 74.2 s; the threshold remains three seconds. The passing 6-107 reaches 5.6 s at 97.8 s. In the final layout-7 cases each squad accepts one route, but none completes. Seed 107 gets two movers inside the arrival radius without a physical firing line; seed 108 never brings a qualifying mover into that radius; seed 109 reaches only 0.4 s of simultaneous qualification. Earlier D/E runs rejected all routes in two of these cases, which the final firing-height correction changes without yielding a strict pass. In 5-108, route completion is also absent despite an instantaneous two-mover sightline.

## Interpretation and remaining work

The focused defects are real and their regressions pass, but their proposed composition is not validated by battle outcomes. Better shelter does not ensure a sustained firing opportunity; more restrictive pair queries also reduce plan availability. The observations establish those failed predicates, not a complete causal diagnosis of every lost firing interval. The next investigation should replay the first failing interval at the selected slot and separate ducking, target visibility, aim/task execution, and support timing. It should also explain why viable individual cover candidates fail the pair query before further restrictions are added. The strict evaluator should remain unchanged.

The originally documented peek overshoot remains unresolved. The lane check uses the cover stance and cannot guarantee safety when a crouched partner stands to fire. Support-sector receipt and rotation are tested, but no claim is made that the resulting suppression is effective enough to protect every crossing. The expected 6/9 and 8/9 predictions were not confirmed.

## Verification

- Recovery/task-contract suite: passed, including emergency resumption without proximity-only completion, protected pair selection, early route continuity, lane rejection, support rotation, delayed/stale sector reports, and received cross-squad requests.
- Focused simulation suite: passed, including deterministic diagnostics and geometry revision/cover/query checks.
- Python suite: 22 tests passed.
- Native MSVC standalone simulation build and nine-case Windows matrix: completed; same pass/fail pattern as Linux. No new Unreal editor deployment is claimed.
- Full layout-5 seed 109 tracing parity: Linux digest 17054799827521512496 and Windows digest 10642100383742449585 each match their platform’s traced run. Cross-platform digests are not expected to match.
- Normal gameplay comparison: **all ten fixed full-battle seeds 100–109 match exactly**, at a 360-second limit with recovery disabled, against the preserved preceding executable. See `normal-battle-parity.json` in the evidence output for actual results. This is an isolation check, not evidence of improved full-battle tactics.

Evaluator SHA-256: `3ade284789f519b1d4c6d377b091b075b177f14b183d2329464a1bfaa8d86dca`. Verified byte-for-byte against the saved pre-pass copy.

## Reusable commands

```bash
./scripts/test-sim.sh --recovery
.local/tests/sim_tests --focused
python3 -m unittest discover -s tests -p 'test_*.py'
./scripts/battle-lab.sh --version
python3 tools/run_recovery_pass.py --out .local/recovery-pass-A --layouts 6 7
python3 tools/run_recovery_pass.py --out .local/recovery-pass-B --layouts 5 6 7
./scripts/build-lab-windows.sh
```

The new investigation runner records each manifest/run, generation log, evaluator result, and gate audit even when an earlier layout fails. It does not bypass the separate acceptance runner or reinterpret its 8/9 target. Use a distinct output directory per source change.

Local detailed evidence is preserved under `.local/third-pass/`; generated data, compiler outputs, and local configuration remain outside Git. Source and executable snapshots allow each staged result to be reproduced.
