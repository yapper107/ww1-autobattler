# Main AI build — legacy during drills development

## Current user decision — 16 September 2026

The user rejected the Phase 0b crowding hotfix after replay: spread-out but passive
soldiers, only one or two firing, and no movement to cover. Trenches averaged 228
shots versus candidate90 799 and legacy 1989; Works casualty fractions were 36/18%
versus candidate90 69/53%. The hotfix is archived in
`.local/phase0b/hotfix-final.patch`, with its measured reports preserved.

New CLI and Unreal battles default to **legacy**. `--cognition` and
`-ArmyCognition` select candidate90; explicit legacy flags remain valid. Recorded
manifests retain their original controller semantics. Candidate90 was restored
exactly to `d0e577abab5319b6` before further changes. Timeline clicks now use canvas
dimensions cached during drawing, with player and size guards. Native Unreal
verification belongs to the architect session after the
[restore report](../.local/handoffs/014-restore-report.md).

Phase 1 F1 generation and reporting are complete at `9ce4051ccbd13ed7`, with 180
development baseline runs and all 40 authored-map digests unchanged; see the
[Phase 1 report](../.local/handoffs/014-phase1-report.md). This adds no drills policy.
F2/F3 and Phase 2 remain unstarted; native verification is pending with the
architect. Every subsequent slice must disclose shots per battle and each
side's casualty fractions per run on both playable maps and must not fall below
candidate90. Nonzero battle shots alone do not satisfy engagement. Family
distributions and user replay review remain required.

## Phase 2 experimental result — 17 September 2026

The attributed [Phase 1 review](../plans/014-phase1-fable-review.md) accepts the
harness and records native Windows, Unreal and both smoke checks on
`9ce4051ccbd13ed7`. That is the verified playable mirror, with legacy as default.
Phase 2 adds an explicitly selected `--drills` / `-ArmyDrills` controller at
`70abe8f2c9abc0e3`. The single measured build fails mechanism and per-run exit
criteria and is not promoted. See the [Phase 2 report](../.local/handoffs/014-phase2-report.md).
Native testing of this new revision remains with the architect. F2/F3 and Phase 3
are deferred; no platoon task tree is implemented.

## Phase 3 experimental result — 17 September 2026

The attributed [Phase 2d review](../plans/014-phase2d-fable-review.md) accepts
Phase 2 scope as complete and moves authored-map intensity/closure to Phase 3.
The scoreboard now uses individual paired confidence intervals rather than a
per-run conjunction; the promotion bar remains unchanged. Phase 3's single
measured source is `3231bd74bac2cef1`. D05's corridor repair passes unchanged,
as do the other Phase 2 pairs and lifecycle pins. New assault and break-contact
mechanism pairs fail, and paired F1 intervals show significant intensity and
closure regressions against Phase 2d. This build is experimental and unpromoted. See the
[Phase 3 report](../.local/handoffs/014-phase3-report.md). Gun recovery is a deferred
design note. Legacy remains default; native verification belongs to the architect.
No further measured iteration, platoon task tree or F2/F3 follows this slice.

## Phase 3b experimental result — 17 September 2026

The attributed [Phase 3 review](../plans/014-phase3-fable-review.md) requires
cover-sector flank search, a lane-plus-objective-disc attack area, the reviewed
exposure contract, and supported closure when no covered flank exists. Phase 3b's
single measured source is `9b338688d4ab02e0`. D06, D10, D11 and D16 pass;
D07–D09, the unchanged D04 control and lifecycle pin fail. Paired intervals show
F1 intensity and later closure regressions against Phase2d. This build remains
experimental and unpromoted; see the [Phase 3b report](../.local/handoffs/014-phase3b-report.md)
for paired intervals against Phase2d and both historical controllers. Legacy
remains default. No further measured iteration, Phase4/platoon task tree, F2/F3
or gun pickup follows this slice; native verification stays with the architect.

## Historical candidate90 decision (superseded default, retained evidence)


## Decision

On 16 September 2026 the user explicitly requested the best-performing saved AI
as the main build and accepted living with its current limitations while future
neural-network controllers remain a longer-term direction. This overrides the
previous requirement to leave cognition opt-in until every promotion gate passes.
No neural-network implementation is included here.

Candidate90, simulation fingerprint **`d0e577abab5319b6`**, is the selected baseline.
It ties candidate82 at28/30 historical cases and8/9 original cases, while including
the later physically tested support-sector handoff. The complete candidate90
simulation was restored; no later gameplay fixes were selectively mixed into it.
The unchanged source fingerprint verifies that choice. Candidate141 had regressed
to15/30 historical cases and is preserved as separate research.

## New-battle behavior and compatibility

- Normal Unreal launches and CLI battles now use cognition. Unreal starts on the
  normal battlefield, not the old encounter8 demonstration. Both normal maps work.
- Default battle duration remains six minutes; the preparation slider still spans
  one–ten minutes in30-second steps. Automated fixtures retain exact durations.
- `-ArmyLegacy` in Unreal and `--legacy-ai` in the CLI explicitly select legacy.
  `--cognition` remains valid. Explicit historical foundations/recovery flags retain
  their previous semantics and fixture restrictions.
- `Config{}` remains legacy for existing library callers and historical fixtures;
  new-battle application entrypoints deliberately select the promoted controller.
- Recorded manifests retain controller, duration, and simulation fingerprint.
  `tools/rerun_battle.py` explicitly starts from legacy, including manifests predating
  cognition, then applies recorded controller fields. Native Windows reruns now
  translate WSL output paths. Different source versions still emit a warning: old
  candidate141 cognition runs need its preserved binary/source for exact replay.
- Route-baseline tooling explicitly requests legacy rather than inheriting the new
  application default. No hidden-world access or tactical-evaluator change was added.

## Verification

All evidence is under `.local/main-ai-promotion/`. Frozen binaries/source are in
`candidate90-final/`; matrices never run against a binary being rebuilt.

| Check | Linux | Native Windows |
|---|---:|---:|
| Original layouts5–7, seeds107–109,360s | 8/9 | 8/9 |
| Opened historical seeds110–119,360s | 28/30 | 28/30 |
| Baseline reliability scenario summaries | 29 pass | 29 pass |
| Decision-loop, cognition, foundations suites | Pass | Pass |
| Both normal maps,600s | Pass | Pass |
| New defaults and recorded-controller reruns | Pass | Pass |

Unreal5.8 native build passes. Ten-minute playback and seeking pass on Fractured
Works and Trenches, launched without `-ArmyCognition` or `-ArmyScenario`. Both
inspector screenshots were visually inspected. These establish integration, not
independent proof of tactical quality. No additional Visual Studio downloads are
needed on this machine.

Linux600s traced/untraced gameplay digests match on both maps. Peak standalone
memory: Fractured Works4,974,325,760 bytes traced; Trenches5,073,481,728 bytes traced.
Native Windows untraced peaks are4,939,411,456 and4,792,004,608 bytes respectively.
All remain below the6GiB budget. All ten preserved360s Linux legacy digests exactly match the earlier baseline.
All39 tactical case pass/fail results match across Linux and Windows. Fifteen
Python analyzer regressions also pass.

`tests/check_controller_defaults.py` exercises production simulation for default
versus explicit cognition, legacy/foundations/recovery selection, old manifests
without policy fields, recorded duration and trace-on rerun digest equality on both
platforms. These checks do not replace the tactical matrix.

## Known limits and preservation

The original failure is layout7/seed108. Historical failures are layout5/seed110 and
layout7/seed115. Candidate90 can enter a final approach before a newly requested
threat has qualifying support; stricter preflight/staging fixes introduced after90
changed behavior and reduced aggregate performance. This limitation is retained
explicitly at the user's requested baseline, not presented as solved.

Main reliability tests exercise candidate90's supported contracts through physical
encounter43. Later encounter44–59 tests and the stronger handoff negative control
are preserved with candidate141, **not claimed to pass on candidate90**. No frozen
acceptance case, duration, evaluator threshold or authored tactical layout was
relaxed. Historical seeds110–119 are an opened regression set, not independent
validation. Independent seeds2001–2010 remain unopened. This is not30/30,9/9 or
certification under the previous full promotion criteria.

[Candidate141 recovery archive](../experiments/candidate141/README.md) contains a
reversible source/test/presentation patch and hashes. A disposable restoration was
byte-compared against the full pre-promotion backup and reproduced fingerprint
`1abef4125efaed2a`. Earlier results and architectural reviews remain in the repository.

A bounded Fable5.1 consultation was attempted for this integration. The configured
subscription launcher failed before model execution because Claude could not
refresh its OAuth token (another refresh in progress or interrupted). No alternate
model, billing route, token copying, or invented approval was used. This integration
was completed by Astra under the user's explicit main-build decision; it has no
new Fable approval. Evidence: `.local/main-ai-promotion/fable.log` and the attributed
launcher failure at `20260916T175607-f1344c98` in the project architect session.

## Next work

Use this main build as the working baseline for feature development. Preserve the
remaining failures as regression evidence rather than repeatedly tuning on them.
Future learned controllers should continue to consume actor-owned observations
and delayed reports, and issue executable orders through the existing soldier,
squad and platoon contracts. Neural networks will still require scenario testing;
changing the decision model does not itself resolve execution or information bugs.

## Phase 2b corrected exit — 17 September 2026

The [attributed Phase 2 review](../plans/014-phase2-fable-review.md) supersedes the
per-side casualty floor: compare shots and total casualties with candidate90,
under-2 m share with legacy, median spacing with 3 m, and attacking front-line
displacement at 120/240 s with candidate90 on Works and F1. Disclose every run.

The one corrected build `d80bca688ebe67ad` remains unpromoted. D02 and D04 pass;
D01, D03, D05 and D17 still fail. Full measurements, parity and injury/closure
diagnostics are in the [Phase 2b report](../.local/handoffs/014-phase2b-report.md).
Legacy remains default; candidate90 stays explicitly selectable. Windows/Unreal
verification remains with the architect. No subsequent tactical phase started.

## Phase 2c lifecycle — 17 September 2026

The [attributed Phase 2b review](../plans/014-phase2b-fable-review.md) requires
committed stages and adds own-side soldier orders per minute no higher than the
paired candidate90 baseline. Measured source `26e028623123f46e` passes D01–D04,
D17 and the lifecycle pin. D05's weak-group report is fixed; its capable control
still fails on a stage deadline. The build remains unpromoted; legacy stays default.
The [Phase 2c report](../.local/handoffs/014-phase2c-report.md) contains the complete
per-run scoreboard and trace-verified order rates. Native verification remains
with the architect. No later phase started.

## Phase 2d formation and clocks — 17 September 2026

The attributed [Phase 2c review](../plans/014-phase2c-fable-review.md) accepts the
lifecycle and corrects moving formation generation, halted-stage deadlines and
retreat without effective fire. The single measured Phase 2d build is
`cdcfe811c96f3616`. D01–D04 and D17, the lifecycle pins, the full C++ suite and
52 Python tests pass; D05's unchanged capable control fails on column/corridor
allocation. Historical authored digests remain identical (40/40), and drills
trace parity passes on both maps and F1. The per-run tactical exit remains unmet.

The [Phase 2d report](../.local/handoffs/014-phase2d-report.md) records all per-run
adverse criteria, order/hit rates, fingerprints and remaining defects. No second
measured build followed the failures. Legacy remains the playable default and
candidate90 remains selectable. Native verification stays with the architect;
Phase 3, the platoon task tree and F2/F3 have not started.

## Phase 3c rush and recovery — 17 September 2026

The attributed [Phase 3b review](../plans/014-phase3b-fable-review.md) requires
projected rush endpoints, blocked-attack recovery, protected pauses and emergency
BreakContact precedence. Phase 3c's single measured source is `7596d85ca9eb5318`.
D04, unchanged D07 and the corrected lifecycle pin pass; D08 reaches the assault
line but fails consolidation, and D09 passes its positive pause/resume checks
but fails the continuous-support control. F1 intensity, spacing and later closure
regress against Phase2d in paired intervals. It remains experimental and unpromoted;
see the [Phase 3c report](../.local/handoffs/014-phase3c-report.md) for all paired
intervals against Phase2d and both historical controllers, per-run evidence and
remaining defects. Legacy remains default. No second measured build, Phase4,
platoon task tree, F2/F3 or gun pickup follows this slice. Windows/Unreal stay
with the architect.

## Phase 3d outcomes and sprint contracts — 17 September 2026

The attributed [Phase 3c review](../plans/014-phase3c-fable-review.md) replaces
Phase2d intensity floors with F1 win rate and casualty exchange against candidate90
and legacy, retaining passivity and spacing guards. Authored targets move to
Phase4. Phase 3d's single measured source is `f134afb1b5e7a25f`: unchanged D09
and the new sprint pin pass, but D08 fails final safe-endpoint allocation and D07
fails after blocked-attack recovery resumes original-area fire. This build remains
experimental and unpromoted; see the [Phase 3d report](../.local/handoffs/014-phase3d-report.md)
for outcome intervals, per-run tables and metric limitations. Legacy remains the
playable default. No second measured build, Phase4, F2/F3 or gun pickup follows
this slice; native verification remains with the architect.

## Phase 3e final assault bounds — 17 September 2026

The attributed [Phase 3d review](../plans/014-phase3d-fable-review.md) permits
buddy-covered final assault endpoints within 18 m, and records the outcome-first
scoreboard reading with the trench median floor deferred to Phase4. Phase 3e's
single measured source is `5d0923671a8c3c18`. Unchanged D07 now passes; D08 reaches
objective cover but still fails consolidation at its 180 s limit. All other
pairs and pins pass. This build remains experimental and unpromoted; see the
[Phase 3e report](../.local/handoffs/014-phase3e-report.md) for the paired scoreboard,
per-run evidence and the same-binary deathmatch-termination diagnostic. Phase4's
conditional authorization was not activated because D08 failed. Legacy remains
default; no second measured build, Phase4, F2/F3 or gun pickup follows this slice.
Windows/Unreal verification remains with the architect.


## Phase3f fixture correction — 17 September 2026

The attributed [Phase 3e review](../plans/014-phase3e-fable-review.md) accepts the
statistical scoreboard and authorizes a remote surviving defender plus a 240 s
D08 horizon. Phase3f applied only that fixture correction, source
`6ade972b0e7de642` (fixture files are included in the simulation fingerprint).
D08 still fails: after the objective defender falls at181.406 s, the battle now
continues, but the assault pauses at188.55 s and never consolidates by240 s.
All other pairs and pins pass. See the [Phase3f report](../.local/handoffs/014-phase3f-report.md)
for the new evidence and explicit disagreement with a termination-only diagnosis.
Phase3 is not marked complete; [Phase4 is not started](../.local/handoffs/014-phase4-report.md)
because its D08 prerequisite failed. No policy change or behavioural assertion
relaxation was made. Legacy remains default; native verification stays with the architect.


## Phase3g readiness correction — 17 September 2026

The attributed [Phase3f review](../plans/014-phase3f-fable-review.md) permits close
bounds under stationary buddy overwatch, requiring delivered rounds only for
objective contacts observed within six seconds. Phase3g source `ae9ab767f6805765`
changes only that permission helper; fixtures and assertions remain unchanged.
D08 still fails, now on an earlier138.55 s readiness pause: the implementation
requires a line from each covering member, and one member's accepted position
is screened. This strict interpretation is explicitly recorded as an
implementation limitation in the [Phase3g report](../.local/handoffs/014-phase3g-report.md).
All other pairs and pins pass. The user's stop rule was applied; Phase3 is not
marked complete and [Phase4 remains unstarted](../.local/handoffs/014-phase4-report.md).
Legacy remains default; native verification stays with the architect.



The attributed [Phase3g review](plans/014-phase3g-fable-review.md) allowed up to
three local D08 assault-stage attempts. Phase3h passed on attempt2 at source
`a0364bff5cea6ab9`: D08 consolidates at191 s and reorganises at197 s; all13 pairs
and7 pins then pass once on that source. Fixtures and assertions are unchanged.
See the [Phase3h completion report](.local/handoffs/014-phase3h-report.md).
Phase3 is complete on its scope; this does not promote drills or change the default.

Phase4's single measured task-tree build is `3bda3ace2c9dacdc`. It fails the
mechanism exit (P01/P02/P03/P05 and seven existing squad pairs); P04 succession,
P06 expiry and all seven auxiliary pins pass. It remains experimental and
unpromoted. The [Phase4 report](.local/handoffs/014-phase4-report.md) records the
paired scoreboard, per-run evidence and implementation gaps, including weapon
attachment, Merge and corridor/area lifecycle limitations. No second measured
build follows. Legacy remains the playable default; native verification stays
with the architect. No F2/F3 or gun pickup was implemented.


The attributed [Phase4 review](plans/014-phase4-fable-review.md) accepts Phase3
scope at `a0364bff5cea6ab9` and requires persistent platoon commitments, deferred
ordinary receipts, route-buffer areas and hard corridor exclusions. Phase4b used
three local mechanism attempts, ending at `c98020b91fed4f51`. On that source,
22/26 selectors pass: twelve of thirteen squad pairs, three of six platoon pairs
and all seven pins. D03 and P01–P03 still fail; the local allowance is exhausted.
**No distribution measurement was started**, because the all-mechanism prerequisite
was not met. See the [Phase4b report](.local/handoffs/014-phase4b-report.md) for
per-attempt fingerprints, trace evidence and the remaining defects. P05 now
proves the commander belief and passes its unchanged withdrawal/control assertions.
Weapon attachment, Merge member transfer and company escalation remain Phase4c
items by the review. No Phase4c implementation follows. Legacy remains default;
Windows and Unreal verification stay with the architect.

The attributed [Phase4b review](plans/014-phase4b-fable-review.md) requires
recoverable-stage reports to remain Executing and flank corridor pairs to be
chosen jointly. Phase4c used three local attempts, ending at `982796dfe73d3f5f`.
D03 and P02 now pass; all13 squad pairs, all7 pins and4/6 platoon pairs pass
(24/26 selectors). P01's positive checks pass, but its bare-control assertion
counts a no-contact Advance waypoint as a threat sector; that disagreement is
proved with its own trace and observer diagnostic, without changing the assertion.
P03 delivers the lift but a later Support replacement permits six original-area
shots. See the [Phase4c report](.local/handoffs/014-phase4c-report.md).
The three-attempt allowance is exhausted. **No distribution measurement, full
suite or full-battle parity gate was started**, because all pairs did not pass.
Weapon attachment, Merge transfer and company escalation remain Phase4d items;
no Phase4d implementation follows. Legacy remains default. Windows and Unreal
verification remain with the architect.


The attributed [Phase4c review](plans/014-phase4c-fable-review.md) accepts the
known-enemy correction to P01 and requires platoon-owned assault-lane fire control
that survives Support directive replacement. Phase4d passes all26 mechanism
selectors on `26af0a096babc8bf` after two local P03 attempts. The full Linux suite,
40/40 authored legacy/cognition digest checks and all3 drills trace-parity checks
pass. Its **single measurement fails the engagement guard**: four completed Works
runs all have zero shots; six completed F1 runs include three zero-shot battles.
In-flight workers drained; no Trenches distribution or remaining draws were run.
The recorded6/6 F1 wins include three zero-shot, zero-casualty outcomes and do not
establish tactical success. See the [Phase4d report](.local/handoffs/014-phase4d-report.md)
for the ten per-run records, partial descriptive intervals, unchanged-source
checks and repeated Advance/leg-completion trace evidence. The build remains
experimental and unpromoted; no second measured build follows. Weapon attachment,
Merge transfer and company escalation remain Phase4e items, not implemented.
Legacy remains default; Windows and Unreal verification stay with the architect.



The attributed [Phase4d review](../plans/014-phase4d-fable-review.md) requires Secure
only after attack objectives, per-squad Advance legs and a no-contact P07 pair.
Phase4e passes P07 and all26 existing selectors on its first local attempt,
source `d8586da13b539c61`; full Linux suite,40/40 authored legacy/cognition digest
checks and3/3 drills trace-parity checks pass. Its single measured build completes
all20 authored and90 F1 runs and passes every engagement guard (one zero-shot
Trenches run, seed103; none on Works or F1). F1 records71/3/16 wins/draws/losses;
its primary outcome intervals against Phase3e cross zero and its shots/spacing guards pass.
The aggregate raw-loss exchange sensitivity regresses against Phase3e.
The Phase4 exit still fails11 of18 required criteria: authored casualties/closure,
Works order rate, and authored spacing. See the
[Phase4e report](../.local/handoffs/014-phase4e-report.md) for the complete paired
scoreboard,110 per-run records, terrain-stall evidence and the disclosed limitation
that the40 m loop guard is applied before route-endpoint resolution. No second
measured build follows. Weapon attachment, Merge transfer and company escalation
remain Phase4f, not implemented. Legacy remains default; Windows/Unreal stay
with the architect. No F2/F3 or gun pickup was added.


The attributed [Phase4e review](../plans/014-phase4e-fable-review.md) accepts the
Advance lifecycle repair and requires supported fire-and-movement when no covered
flank exists, a45 s observation limit, P08 and resolved loop-guard validation.
Phase4f used three local attempts, ending at `01462c286da88358`. All27 existing
selectors pass unchanged, but P08 fails: its three moving squads advance at most
9.372,8.119 and3.583 m within the90 s contact window, and Reserve appears after
support is lost. Its weak control proves ratio0.627528, Fix/Observe and a bounded
Withdraw through production transport; the same-binary map-boundary diagnostic
proves route exhaustion for all four squads. See the
[Phase4f report](../.local/handoffs/014-phase4f-report.md) for fingerprints, local
attempts, traces and disagreements. **No distribution, full-suite run,40-case
authored digest gate or full-battle trace-parity gate was started**, because P08
failed at the three-attempt limit.63 Python tests pass; protected files are intact.
No fourth attempt or measured build follows. Legacy remains default. Weapon
attachment, Merge transfer and company escalation remain deferred; F2/F3 and gun
pickup are not implemented. Windows and Unreal stay with the architect.
