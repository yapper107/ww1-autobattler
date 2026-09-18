# Original tactical matrix: 9/9, cognition not promoted

15 September 2026. Final simulation source: `8a5b385e04c22185`.

The unchanged original 360-second acceptance matrix now passes **9/9 on Linux
and native Windows**. The evaluator, fixtures, development seeds, required
physical firing angles, and elimination rules were not relaxed.

The first frozen held-out evaluation on this candidate scored **22/30 on both platforms**:
layout 5 = 10/10, layout 6 = 7/10, layout 7 = 5/10. The requirement is at least
8/10 **in every layout**. This candidate therefore remains experimental and
opt-in. Linux and Windows have identical held-out pass/fail results.
The tactical candidate was frozen as `3606cbd8375bec12` before opening held-out
results. The final source only corrects received deployment display/status and
sums the exposure estimates of combined stages; no tactical tuning followed
the held-out results. Physical evaluation frames and events are compared below.

## What changed

- Supporting guns answer an explicit maneuver request with their own deployment
  status, assignment identity, original status time, and deadline. The receiving
  leader checks the gun, route, stage, sector and evidence age. A genuine new
  deployment can extend the support wait once, within the existing mission
  deadline. Repeated status messages cannot keep extending it. Deployment alone
  never releases movement.
- The same request authorizes direct delivery acknowledgements from the gun to
  the requesting squad. Transport and reaction still take time. Reports retain
  the original projectile-delivery timestamps; normal command relays continue.
- Protected transit stages can be combined up to ten seconds of planned travel.
  The complete navigation corridor remains intact. Exposed crossings and final
  occupation remain separate stages. This removes unnecessary stop/report/order
  exchanges along uninterrupted protected ground.
- New task receipts can wake command assessment after a bounded 0.25-second
  interval; ordinary knowledge changes retain their existing assessment cadence.
  This does not bypass communication or recognition delay or force a route search.
- Persistent support loss during final occupation can request fire against fresh,
  reported resistance near the objective while retaining the route. A brief reload
  gap does not immediately redirect the gun. Useful fire is still required.
- The existing local friendly-avoidance behavior now activates after ordinary
  physical movement stalls as well as passage release. It uses friendly positions
  and collision checks and retains the assigned destination.
- Recorded deployment status and wait deadlines appear in diagnostic exports;
  the Unreal inspector distinguishes deployment from useful fire.

The support request/acknowledgement channel carries actor reports, not hidden
world state. No incoming-fire bearing inference, hearing, campaign progression,
new weapon systems, or larger army sizes were added.

## Discriminating scenarios

`tests/decision_loop_tests.h` adds:

1. **Deployment protocol:** wrong source, route, stage, sector and stale status
   are rejected. A deployment retains the method without releasing movement;
   a duplicate cannot extend the wait; the mission deadline caps it; actual
   delivered fire releases it.
2. **Physical cross-squad deployment, encounter 17:** an assigned gun physically
   navigates around a long obstruction. The requesting squad receives deployment
   evidence through production transport, retains its method past the original
   preparation deadline, and moves only after actual fire is reported. A durable,
   passive target isolates coordination from early elimination in this fixture.
3. **Protected transit:** bounded transit stages preserve the complete planned
   corridor and travel cost, with final occupation still separate.

Existing physical observation, failed navigation, unavailable support, casualty,
receipt, memory, officer-profile, normal-map and replay checks remain required.
The tactical matrix supplies the integration check for friendly avoidance.

## Tactical results and provenance

| Layout | Seed 107 | Seed 108 | Seed 109 |
| --- | --- | --- | --- |
| 5 | Pass | Pass | Pass |
| 6 | Pass | Pass | Pass |
| 7 | Pass | Pass | Pass |

Both platforms pass this matrix on the exact source above. Floating-point replay
digests are platform-specific; pass/fail agreement is checked separately.

- Specification: `tests/ai_acceptance.json`.
- Evaluator SHA-256: `3ade284789f519b1d4c6d377b091b075b177f14b183d2329464a1bfaa8d86dca`.
- Linux original matrix: `.local/nine-gate/original-final/acceptance.json`.
- Windows original matrix: Windows mirror `Saved/BattleLab/NineGate-original-final/acceptance.json`.
- Linux held-out matrix: `.local/nine-gate/held-out-final/acceptance.json`.
- Windows held-out matrix: Windows mirror `Saved/BattleLab/NineGate-held-out-final/acceptance.json`.
- Preserved 7/9 source/executable: `.local/nine-gate/baseline/`.
- Frozen tactical candidate: `.local/nine-gate/candidate-3606cbd8375bec12/`.
- Final source/executable: `.local/nine-gate/candidate-8a5b385e04c22185/`.

Intermediate experiments are not acceptance evidence. Eager sector switching
regressed previously passing cases; the retained implementation waits for
persistent loss at the final approach. Broad reaction to every knowledge change
was also replaced by the narrower task-receipt trigger. No held-out seeds were
used for these development experiments.

## Validation

Final-source decision-loop, cognition, normal-map and foundations scenarios pass
on Linux and native Windows. The Python analyzer/evaluator suites pass 27 tests.
The existing full legacy suites pass on the frozen tactical candidate: Linux
242.481 seconds, native Windows 529.828 seconds. The subsequent source change
is confined to cognition reporting; affected scenario suites were rerun.

| Ten-minute normal battle, 64 soldiers | Linux peak | Windows peak |
| --- | --- | --- |
| Fractured Works | 4.56 GiB | 4.57 GiB |
| Trenches | 4.61 GiB | 4.62 GiB |

Both maps reach 600 seconds and remain below the 6 GiB standalone-process
budget. Separate layout-5/seed-108 limits of 180, 360 and 600 seconds all end by
elimination at 130.05 seconds; additional time does not change that result.
Traced/untraced same-platform gameplay digests agree.

Unreal native builds and ten-minute playback/seek checks pass on both normal
maps. Encounter 17 also passes Unreal playback with explicit seek assertions for
recorded support assignment, route, stage, evidence times and deadline. Inspector
and preparation screenshots were inspected. The source remains independent of
Unreal rendering; no additional Visual Studio download is needed.

Evidence under `.local/nine-gate/`:

- `features-final.log`, `cognition-final.log`, `normal-final.log`,
  `foundations-final.log`, with corresponding `windows-` logs.
- `python-tests.log`, `legacy-full.log`, `windows-legacy-full.log`.
- `legacy-comparison/parity.json`: ten preserved legacy seeds 100–109 match the
  7/9 baseline's exact gameplay digests. Each case records its actual source;
  the comparison spans the final cognition-reporting correction.
- `reporting-equivalence.json` and `windows-reporting-equivalence.json`: all 39
  original/held-out cases on each platform have byte-identical physical evaluation
  frames and event streams before and after the reporting correction. The held-out set was not used for tactical tuning.
- `validation-final/validation.json`, and the Windows mirror's
  `Saved/BattleLab/NineGate-validation-final/validation.json`.
- `unreal-build-reporting.log`, `playback-works.log`, `playback-trenches.log`,
  `playback-deployment-final.log`. Normal-map playback preceded the final
  reporting-only adjustment; the final build's deployment seek check explicitly
  exercises the newly recorded fields.

Reproduce the original matrix with:

```sh
./scripts/battle-lab.sh --version
python3 tools/run_ai_acceptance.py --out .local/ai-original
./scripts/test-sim.sh --decision-loop
```

The runner's preserved historical threshold is 8/9; this delivery additionally
checks that all nine cases pass. Held-out evaluation remains separate and must
not be used as a tuning loop.

## Architectural review

The standing Fable consultation was attempted with exact model
`claude-fable-5-1`, through the configured subscription launcher. Its attributed
15 September response was: “You've reached your Fable limit”. No fresh review
was obtained, no alternate model or API billing was used, and this work is not
newly Fable-approved. Request: `.local/nine-gate/architect-request.md`;
response evidence: `.local/nine-gate/fable-response.log` and launcher session
`20260915T171621-6f8fb8d2`. Astra owns the implementation and validation.

## Recommendation

Continue with a focused **AI reliability/generalization pass** before adding
features whose behavior depends on tactical competence. The original nine cases
are now a regression baseline, not proof of general tactical reliability.

Use new physical scenarios for coordination interruptions, final-position
execution, command succession during an approach, and unavailable support.
Develop against those mechanisms and the preserved baselines. Freeze a new
independent validation set before further tuning; do not turn held-out seeds
110–119 into a development target. Keep legacy selection and cognition opt-in
until the full promotion gates pass. Small independent preparation/roster UI
features can proceed separately; expanding combat systems now would complicate
remaining AI diagnosis.
