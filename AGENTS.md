## Integrated map generator — 17 September 2026

The user requested town/connected-trench generation, then explicitly requested
Unreal integration and generation built into the project. **New +** in preparation
generates and loads the next seed through the project tool and UE's bundled Python.
Map selection includes original and generated layouts; F opens roofs, G reloads.
The user's correction requires cover derived from all usable physical geometry,
not a restriction to generator-marked positions. Native face sampling, geometric
validation and revision-owned navigation caches implement that direction.
Research, controls, schema, evidence and limits: [Map generator](docs/MAP_GENERATOR.md).
Attributed Fable reviews: [initial](plans/016-map-generator-fable-review.md),
[integration](plans/016-map-integration-fable-review.md),
[performance](plans/016-map-performance-fable-review.md).
This changes map generation/integration, not AI policy or promotion. Legacy remains
the default; original maps stay selectable and historical parity is checked.

## Current AI direction — 16 September 2026 (plan 014)

After playing candidate90 the user reported squads bunching together. Three code
surveys and a research pass confirmed a structural cause: the cognition controller
gives every squad the map origin as its first objective, packs members into a 10 m
bubble with 1.1 m separation, bypasses the ally-occupancy rules, has no cross-squad
separation, and emits only five task types, so suppression and flanking do not really
exist in it. Measured median nearest-squadmate distance is 0.95 m against legacy's
7.50 m ([normal-map review](docs/AI_NORMAL_MAP_REVIEW.md)).

User decisions recorded in the attributed [plan 014](plans/014-battle-drill-controller.md)
and its [scenario and metric companion](plans/014-battle-drill-scenarios.md):

- Astra implements the new **battle-drill controller** (`--drills`, `-ArmyDrills`) in
  phases; Fable reviews each phase on request. Legacy and cognition stay selectable and
  digest-identical.
- A measured crowding hotfix on candidate90 comes first; its 28/30 historical score may move.
- Acceptance for the new controller is a distributional scoreboard on rotating generated
  validation draws plus the user's replay review. The frozen 9 and 30 cases still run and
  are reported, but they no longer gate or guide tuning. The 8/9 and 8/10-per-layout law
  below remains history for cognition only. Per-case fixes are refused in review.
- On 17 September 2026 the user amended the platoon design: [plan 015](plans/015-squad-initiative-amendment.md) replaces platoon orchestration with intent orders and squad initiative over a platoon radio; pass bar is replay review with guards. The user authorised execution on 17 September; the Step A result is recorded below.
- Squads operate as two elements (gun group and rifle group) led by the sergeant and
  corporal; officers lead the platoon. Element membership is frozen for the duration of a
  drill and reorganised only at completion. Key-personnel loss and attrition follow
  doctrine templates (gun never silent, succession culture, collapse rules).

## Plan 015 execution — 17 September 2026

Step A is fully accepted in the [Step B review](plans/015-step-b-fable-review.md):
P04–P07, 40/40 authored legacy/cognition digests and 3/3 drills trace-parity checks
pass at `69386129a292b240`. See the [Step A report](.local/handoffs/015-step-a-report.md).

The [Step B3 review](plans/015-step-b3-fable-review.md) accepts the Q02 chain
and requires a3 m arrival tolerance at movement timeout and15 m protected pause
holds. This continuation passes Q03 and D09 on its first local attempt at
`0b4a4450c274f8e9`, from `aea3516355ab7f4a`. All28 selectors pass, including all13
squad pairs and7 pins, with fixtures/assertions unchanged. The join remains enabled.
The [Step B report](.local/handoffs/015-step-b-report.md) preserves the trace evidence,
preliminary compilations and later Q03 final-bound limitations. Full Linux suite,
65 Python tests,40/40 authored legacy/cognition digests and3/3 drills trace parity
pass on this source. Final audit also finds the broad arrival ruling incomplete:
ordinary bounds with a squad-owned progress clock still lack the3 m timeout
certification. This omission is disclosed in the Step B report; tests did not
cover it. Step C's single measured build stops on the resolution guard after six
Works runs force the ten-run median to360 s, with sides retaining60% or more.
The in-flight seventh run drained; all seven have every squad firing and AARs,
but matched order rates also exceed Phase4f. See the
[Step C report](.local/handoffs/015-step-c-report.md) for every completed run,
parity evidence and the mixed Fixing/NeedSupport re-consumption loop. No remaining
distribution, Step E or Step D work follows. No post-measurement policy repair was
made. Legacy remains default; Windows and Unreal stay with the architect.


The [Step C review](plans/015-step-c-fable-review.md) accepts Step B at
`0b4a4450c274f8e9` and withdraws the absolute resolution rule and Phase4f churn
reference in favour of legacy-paired intervals. The requested repair continuation
ends at `8bf1a7eac576fba9`: all28 existing selectors and the new physical
movement-clock arrival pin pass, but strengthened Q05 fails on local attempt3.
Independent radio consumption passes its earlier mixed/standalone checks; that
fixture's exhaustion-retention predicate was vacuous, and the strengthened fixture
fails to produce the required exhausted-help then Fixing sequence. Traces show a
platoon-directed help approach and a fixing gun's invalid-geometry report. See the
[updated Step B report](.local/handoffs/015-step-b-report.md).67 Python tests pass;
protected files are unchanged. The AAR now opens with a human summary and linked
attribution before its appendices. **No new Step C distribution, full-battle
parity gate, Step E or Step D follows this local stop.** Earlier-source parity
results do not certify this continuation. Legacy remains default; native work
stays with the architect.


The [Step C2 review](plans/015-step-c2-fable-review.md) accepts the radio repair,
clock arrival certification and AAR summary, restores the original Q05 and assigns
exhaustion retention to a focused pin. This continuation passes all 31 selectors
on `4786fc9830d0c1c0`, including that pin; full Linux suite, 72 Python tests,
40/40 authored legacy/cognition digests and 3/3 drills trace-parity pairs pass.
See the [Step B report](.local/handoffs/015-step-b-report.md). Its single Step C
measurement stops after all ten Works seeds100–109 on the recalibrated remaining-
strength guard: stronger-side strength60.94% versus legacy47.19%, paired delta
+13.75 percentage points,95% interval[+8.44,+18.13]. All eight squads fire in
every run; mean2224.4 shots, NN median6.54 m and under2m share6.78%; spacing,
participation, time and both per-side order-rate guards pass. All ten AARs and
per-run/paired evidence are in the [Step C report](.local/handoffs/015-step-c-report.md).
**No Trenches or F1 distribution, Step E or Step D follows the guard failure.**
No simulation edit follows measurement. Legacy remains default; Windows/Unreal stay
with the architect. No promotion or user replay approval is claimed.

The [Step C3 review](plans/015-step-c3-fable-review.md) withdraws stronger-side
remaining strength as a guard. On unchanged source `4786fc9830d0c1c0`, Works is
reclassified as passing and Trenches seeds 100–109 are completed with ten new AARs.
All 20 authored battles have every squad firing; time and both order-rate guards
pass. Trenches spacing fails: under-2 m share 33.5549% versus legacy 31.2771%,
and mean per-run nearest-mate median 2.995347 m against the 3 m target. The
[Step C report](.local/handoffs/015-step-c-report.md) records per-run tables,
paired intervals and persistent-close-position trace evidence. **No F1 distribution,
Step E or Step D follows this guard failure.** Simulation source and protected files
remain unchanged; 73 Python tests pass, and earlier same-source C++/parity results
are inherited, not rerun. No promotion or replay approval is claimed. Legacy remains
default; Windows/Unreal remain with the architect.

The [Step C4 review](plans/015-step-c4-fable-review.md) authorises one general
halted-slot separation repair and allows a remaining measured Trenches spacing miss
to proceed to F1. This repair changes source `4786fc9830d0c1c0` to
`d9cc4c9fd6e9cec9`; 28/31 selectors pass, with Q04 (no delivered help fire),
D08 (late consolidation, no Reorganise) and D17 (crowded fallback conflicts with
scarce-cover separation/cardinality) failing. Fixtures and assertions remain
unchanged. The [Step C report](.local/handoffs/015-step-c-report.md) preserves
all three traces and the exact repair; **no repaired-source authored or F1
distribution, Step E or Step D follows the failed mechanism prerequisite**.
The remaining Trenches-spacing exception does not waive these failures. Full
Linux suite, 74 Python tests, 40/40 authored legacy/cognition digests and
3/3 drills trace-parity checks pass. Legacy
remains default; no replay approval or promotion is claimed. Windows/Unreal
remain with the architect.

The [Step C5 review](plans/015-step-c5-fable-review.md) withdraws crowded-slot
fallback and permits two bounded repair attempts before restoring the floor.
The attempts at `f31e6ff4772d7b27` and `21b85a48d9bda95c` each pass 24/31
selectors; D17 passes both and Q04 passes the second, but D08 still fails.
Each attempt passes the full Linux suite, 40/40 historical authored digests and
3/3 drills trace parity. The four files were copied from the authorised C4-entry
snapshot, restoring **`4786fc9830d0c1c0`**. Fresh measurement then completes all
20 authored and 90 F1 runs, with 20 authored AARs; 74 Python tests pass and the
protected hashes are intact. Both authored sets pass the current guards. Trenches'
under-2 m paired delta is +2.28 percentage points, CI [-0.31,+4.71], so it passes
the interval rule; its 2.995347 m NN-median target and allocation defect remain open.
**Step C stops on F1 win share:** 57/6/27 wins/draws/losses versus the exact
`a0364bff5cea6ab9` reference's 75/5/10, paired win delta -20.00 percentage points,
CI [-31.11,-8.89]. F1 engagement, spacing and both per-side churn guards pass.
The [Step C report](.local/handoffs/015-step-c-report.md) preserves every run,
paired intervals, failed repair patches and trace evidence. No post-measurement
policy change, Step E leader dials/battles or Step D presentation work follows this
non-exempt guard failure. Legacy remains default; no promotion or replay approval
is claimed. Windows/Unreal remain with the architect.

The [Step C6 review](plans/015-step-c6-fable-review.md) authorises bounded
assault/caller/support repairs and continuation after an isolated F1 win-share miss.
The identity audit over16 matched losses finds no duplicate report counting; belief
policy is unchanged. Three local attempts end at `26145f87ae81a257`, with35/35
selectors, full Linux suite,40/40 historical digests and3/3 trace pairs passing.
The single C6 measurement completes20 authored and90 F1 runs with20 authored AARs.
Both authored sets pass all guards; Trenches under2m delta+1.61pp has CI[-1.08,+4.01]
and its mean NN median reaches3.024m. F1 is61/1/28 versus75/5/10 at the exact
squad-only reference: win delta-15.56pp, CI[-28.89,-3.33], a real failure.
All other F1 guards pass. Under C6's explicit exception, Step E proceeded;
no promotion is claimed. The [Step C report](.local/handoffs/015-step-c-report.md)
records every run and the disputed10/108 stale-ratio diagnosis (new physical loss
preceded retirement). Legacy remains default; native verification stays with the
architect.

Step E is implemented as CLI-opt-in leader effects at `4c2ca48bb9c1add9`:
net delay/loss, reported-picture quality, profile-driven calls and initiative gate,
with successor-own-profile semantics. All35 prior selectors, leader contracts,
full Linux suite,77 Python tests,40/40 historical authored digests,3/3 default-drills
trace pairs and manifest/default checks pass; the selected default-drills digests
also match C6. The one equal-roster F1 role-swapped measurement completes180 battles
and90 pairs with180 AARs and no zero-shot battle. **Step E fails:** bad loses90/180,
exactly half; pairs favour good/bad/neither5/3/82. The retained F1 fixed-defender
branch also prevents the defending lieutenant from exercising all four dials;
this is an implementation/harness gap documented with trace evidence. No second
measured profile build follows. See the [Step E report](.local/handoffs/015-step-e-report.md).
**Step D is not prepared** under the stop-on-failure rule; see the
[stop note](.local/handoffs/015-step-d-report.md). No BattleGameMode edit, Windows
build, Unreal build, Fable invocation, commit, reset or stash occurred in this
continuation. Legacy remains default; no promotion or replay approval is claimed.

## Current playable default — user replay decision, 16 September 2026

The user rejected the crowding hotfix after replay: soldiers spread out but remained
passive, with only one or two firing and no movement to cover. Trenches averaged
228 shots against candidate90's 799 and legacy's 1989; Works casualty fractions
fell to 36/18% against 69/53%. The hotfix and its tests are archived at
`.local/phase0b/hotfix-final.patch`; reports remain in `.local/handoffs/`.

Legacy is the playable default while the drills controller is built. Explicit
`--cognition` / `-ArmyCognition` selects preserved candidate90. Slice A restored
simulation source `d0e577abab5319b6` before default/crash changes; see the
[restore report](.local/handoffs/014-restore-report.md). Phase 1 F1 generation and
reporting are complete at `9ce4051ccbd13ed7`: 180 development baseline runs,
40/40 authored-controller digest matches, and passing Linux verification. See the
[Phase 1 report](.local/handoffs/014-phase1-report.md). The attributed
[Phase 1 review](plans/014-phase1-fable-review.md) accepts the harness and records
passing Windows lab, Unreal and both smoke checks on `9ce4051ccbd13ed7`.

Phase 2's experimental drills source is `70abe8f2c9abc0e3`. Its one measured build
fails mechanism and per-run exit criteria and is **not promoted**; see the
[Phase 2 report](.local/handoffs/014-phase2-report.md). Legacy remains the default.
Native verification of Phase 2 remains with the architect. F2/F3, Phase 3 and the
platoon task tree have not started. No candidate141 behavior is restored.

The attributed [Phase 2 review](plans/014-phase2-fable-review.md) accepts the
foundation and corrects the exit criteria: shots and total casualties across both
sides must meet candidate90 per run; under-2 m share must not exceed legacy and
nearest-squadmate median must reach 3 m. Works and F1 also require attacking
front-line displacement at 120 s and 240 s to meet candidate90. Each side's casualty
fraction remains disclosed; surviving is not a failure. Family distributions and
the user's replay review remain required.

Phase 2b's single corrected build is `d80bca688ebe67ad`. It remains experimental
and unpromoted: D02/D04 pass, while D01/D03/D05/D17 fail. See the
[Phase 2b report](.local/handoffs/014-phase2b-report.md) for per-run corrected exits,
parity and Works diagnostics. Legacy remains the playable default. No Phase 3,
platoon task tree or F2/F3 work is authorised by this result.


The attributed [Phase 2b review](plans/014-phase2b-fable-review.md) requires committed
stages, latched arrivals and element changes only through Reorganise. It adds a
per-run own-side soldier-order rate ceiling at candidate90's measured rate.
Phase 2c's measured source is `26e028623123f46e`: D01–D04 and D17 pass, and the
production lifecycle pin passes; D05's weak-group report is fixed but its capable
control still fails on a stage deadline. The build remains unpromoted. See the
[Phase 2c report](.local/handoffs/014-phase2c-report.md). Legacy remains default;
no Phase 3, platoon task tree or F2/F3 work follows this slice.

The attributed [Phase 2c review](plans/014-phase2c-fable-review.md) accepts the
lifecycle and requires separate formation/cover generation, eligible-movement
clocks and fire-gated retreat. Phase 2d's single measured build is
`cdcfe811c96f3616`; D01–D04, D17 and lifecycle pins pass, but D05's unchanged
capable control now fails on column/corridor allocation. Its per-run tactical
exit is not met; it remains unpromoted. See the
[Phase 2d report](.local/handoffs/014-phase2d-report.md). Legacy remains default;
Windows/Unreal verification stays with the architect. No further measured
iteration, Phase 3, platoon task tree or F2/F3 follows this slice.

The attributed [Phase 2d review](plans/014-phase2d-fable-review.md) accepts
Phase 2 scope as complete and moves authored-map intensity/closure to Phase 3.
The scoreboard now uses individual paired confidence intervals rather than a
per-run conjunction; the promotion bar remains unchanged. Phase 3's single
measured source is `3231bd74bac2cef1`. D05's corridor repair passes unchanged,
as do the other Phase 2 pairs and lifecycle pins. New assault and break-contact
mechanism pairs fail, and paired F1 intervals show significant intensity and
closure regressions against Phase 2d. This build is experimental and unpromoted. See the
[Phase 3 report](.local/handoffs/014-phase3-report.md). Gun recovery is a deferred
design note. Legacy remains default; native verification belongs to the architect.
No further measured iteration, platoon task tree or F2/F3 follows this slice.

The attributed [Phase 3 review](plans/014-phase3-fable-review.md) requires
cover-sector flank search, a lane-plus-objective-disc attack area, the reviewed
exposure contract, and supported closure when no covered flank exists. Phase 3b's
single measured source is `9b338688d4ab02e0`. D06, D10, D11 and D16 pass;
D07–D09, the unchanged D04 control and lifecycle pin fail. Paired intervals show
F1 intensity and later closure regressions against Phase2d. This build remains
experimental and unpromoted; see the [Phase 3b report](.local/handoffs/014-phase3b-report.md)
for paired intervals against Phase2d and both historical controllers. Legacy
remains default. No further measured iteration, Phase4/platoon task tree, F2/F3
or gun pickup follows this slice; native verification stays with the architect.


The attributed [Phase 3b review](plans/014-phase3b-fable-review.md) requires
projected rush endpoints, blocked-attack recovery, protected pauses and emergency
BreakContact precedence. Phase 3c's single measured source is `7596d85ca9eb5318`.
D04, unchanged D07 and the corrected lifecycle pin pass; D08 reaches the assault
line but fails consolidation, and D09 passes its positive pause/resume checks
but fails the continuous-support control. F1 intensity, spacing and later closure
regress against Phase2d in paired intervals. It remains experimental and unpromoted;
see the [Phase 3c report](.local/handoffs/014-phase3c-report.md) for all paired
intervals against Phase2d and both historical controllers, per-run evidence and
remaining defects. Legacy remains default. No second measured build, Phase4,
platoon task tree, F2/F3 or gun pickup follows this slice. Windows/Unreal stay
with the architect.


The attributed [Phase 3c review](plans/014-phase3c-fable-review.md) replaces
Phase2d intensity floors with F1 win rate and casualty exchange against candidate90
and legacy, retaining passivity and spacing guards. Authored targets move to
Phase4. Phase 3d's single measured source is `f134afb1b5e7a25f`: unchanged D09
and the new sprint pin pass, but D08 fails final safe-endpoint allocation and D07
fails after blocked-attack recovery resumes original-area fire. This build remains
experimental and unpromoted; see the [Phase 3d report](.local/handoffs/014-phase3d-report.md)
for outcome intervals, per-run tables and metric limitations. Legacy remains the
playable default. No second measured build, Phase4, F2/F3 or gun pickup follows
this slice; native verification remains with the architect.


The attributed [Phase 3d review](plans/014-phase3d-fable-review.md) permits
buddy-covered final assault endpoints within 18 m, and records the outcome-first
scoreboard reading with the trench median floor deferred to Phase4. Phase 3e's
single measured source is `5d0923671a8c3c18`. Unchanged D07 now passes; D08 reaches
objective cover but still fails consolidation at its 180 s limit. All other
pairs and pins pass. This build remains experimental and unpromoted; see the
[Phase 3e report](.local/handoffs/014-phase3e-report.md) for the paired scoreboard,
per-run evidence and the same-binary deathmatch-termination diagnostic. Phase4's
conditional authorization was not activated because D08 failed. Legacy remains
default; no second measured build, Phase4, F2/F3 or gun pickup follows this slice.
Windows/Unreal verification remains with the architect.


The attributed [Phase 3e review](plans/014-phase3e-fable-review.md) accepts the
statistical scoreboard and authorizes a remote surviving defender plus a 240 s
D08 horizon. Phase3f applied only that fixture correction, source
`6ade972b0e7de642` (fixture files are included in the simulation fingerprint).
D08 still fails: after the objective defender falls at181.406 s, the battle now
continues, but the assault pauses at188.55 s and never consolidates by240 s.
All other pairs and pins pass. See the [Phase3f report](.local/handoffs/014-phase3f-report.md)
for the new evidence and explicit disagreement with a termination-only diagnosis.
Phase3 is not marked complete; [Phase4 is not started](.local/handoffs/014-phase4-report.md)
because its D08 prerequisite failed. No policy change or behavioural assertion
relaxation was made. Legacy remains default; native verification stays with the architect.


The attributed [Phase3f review](plans/014-phase3f-fable-review.md) permits close
bounds under stationary buddy overwatch, requiring delivered rounds only for
objective contacts observed within six seconds. Phase3g source `ae9ab767f6805765`
changes only that permission helper; fixtures and assertions remain unchanged.
D08 still fails, now on an earlier138.55 s readiness pause: the implementation
requires a line from each covering member, and one member's accepted position
is screened. This strict interpretation is explicitly recorded as an
implementation limitation in the [Phase3g report](.local/handoffs/014-phase3g-report.md).
All other pairs and pins pass. The user's stop rule was applied; Phase3 is not
marked complete and [Phase4 remains unstarted](.local/handoffs/014-phase4-report.md).
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



The attributed [Phase4d review](plans/014-phase4d-fable-review.md) requires Secure
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
[Phase4e report](.local/handoffs/014-phase4e-report.md) for the complete paired
scoreboard,110 per-run records, terrain-stall evidence and the disclosed limitation
that the40 m loop guard is applied before route-endpoint resolution. No second
measured build follows. Weapon attachment, Merge transfer and company escalation
remain Phase4f, not implemented. Legacy remains default; Windows/Unreal stay
with the architect. No F2/F3 or gun pickup was added.



The attributed [Phase4e review](plans/014-phase4e-fable-review.md) accepts the
Advance lifecycle repair and requires supported fire-and-movement when no covered
flank exists, a45 s observation limit, P08 and resolved loop-guard validation.
Phase4f used three local attempts, ending at `01462c286da88358`. All27 existing
selectors pass unchanged, but P08 fails: its three moving squads advance at most
9.372,8.119 and3.583 m within the90 s contact window, and Reserve appears after
support is lost. Its weak control proves ratio0.627528, Fix/Observe and a bounded
Withdraw through production transport; the same-binary map-boundary diagnostic
proves route exhaustion for all four squads. See the
[Phase4f report](.local/handoffs/014-phase4f-report.md) for fingerprints, local
attempts, traces and disagreements. **No distribution, full-suite run,40-case
authored digest gate or full-battle trace-parity gate was started**, because P08
failed at the three-attempt limit.63 Python tests pass; protected files are intact.
No fourth attempt or measured build follows. Legacy remains default. Weapon
attachment, Merge transfer and company escalation remain deferred; F2/F3 and gun
pickup are not implemented. Windows and Unreal stay with the architect.

## Previous main-build decisions (history, superseded by the replay decision above)

Phase 0 measurement is accepted in the attributed
[Fable review and Phase 0b resolutions](plans/014-phase0-fable-review.md).
The four measured Phase 0b increments are left uncommitted for review:
[local report](.local/handoffs/014-phase0b-report.md). That iteration’s source
`19fe733644e046d8` fails the spatial exit and regresses engagement and existing
cognition contracts; it is not a promoted replacement for candidate90.
Phase 1 has not started.

The attributed [Phase 0b review](plans/014-phase0b-fable-review.md) replaces
first-leg retention and mandatory covering-band blocking. One corrected iteration
is recorded in [the local Phase 0b2 report](.local/handoffs/014-phase0b2-report.md).
Measured source `be61f2ac859db33c` preserves engagement in all twenty cognition
runs. The attributed [Phase 0b2 review](plans/014-phase0b2-fable-review.md)
accepts the engagement and spacing exit and confirms that plan 014 section 11
permits the own-friendly-state read; the prior defect classification is withdrawn.
Fixture amendments and the diagnostic trace relabel are recorded in the
[Phase 0b3 report](.local/handoffs/014-phase0b3-report.md), source
`b011de1fb6d44828`. The hotfix remains unpromoted pending the user's replay review
on Works, Trenches and authored layout 5 seed 107, including its method-exhaustion
limitation. Phase 1 has not started. The engagement restoration rule did not
trigger; candidate90 remains preserved in `.local/phase0b/original/`.

The user explicitly chose the best-performing saved AI as the main build, superseding
older instructions below that require promotion gates before enabling cognition.
The main simulation is candidate90 (`d0e577abab5319b6`): historical 28/30 and original
8/9. New Unreal and CLI battles default to cognition on the normal map; explicit
legacy selection and recorded-controller reruns remain supported. This is a
user-approved working baseline, **not** a claim that the earlier full promotion
criteria or 30/30 passed. Later candidate141 research and its additional contracts
are recoverable from [the experimental archive](experiments/candidate141/README.md).
See [main-build decision and verification](docs/AI_MAIN_BUILD.md). Do not silently
restore candidate141 or reapply its later behavior fixes: its historical result was
15/30. Neural-network controllers are future work, not part of this change.

# Project working instructions

## Standing Astra / Fable collaboration

User approved 9 September 2026: GPT-6 Astra leads implementation, debugging,
graphics, testing and integration. Claude Fable 5.1 (`claude-fable-5-1`) provides
bounded architectural plans/reviews in a dedicated project session, through
`python3 /home/jchan/.local/share/astra-fable/fable_architect.py doctor` and
`ask --repo /home/jchan/ww1-autobattler --request /absolute/request.md`.
Use the existing subscription only: no API billing, paid extra usage, silent
model replacement, or credential copying. Fable reads but does not edit the
implementer's checkout; Astra resolves findings explicitly. User retains scope
and art authority. If Fable is unavailable, report why and continue independent
work. Avoid recursive consultation loops and idle polling.

Current accepted first-slice boundaries: [AI foundations plan](docs/AI_FOUNDATIONS_PLAN.md).
Actual architect response: [Fable review](docs/AI_FOUNDATIONS_FABLE_REVIEW.md).
The prior recovery experiment remains unaccepted; its 2/9 result is not replaced
by foundations checks. Preserve knowledge boundaries and strict tactical gates.

## Roles and scope

- The user is the game designer. The assistant is the programmer.
- Read `docs/DESIGN_VISION.md` before implementing gameplay. Preserve the core vision while explaining concrete technical or design tradeoffs.
- Distinguish the user's decisions from implementation assumptions and proposed features. The full vision is not the first prototype's feature list.
- Continue routine implementation and verification within the user's requested scope. Ask concise questions when a missing design decision materially changes the intended player experience.
- Keep the existing repository name unless the user requests a rename. Follow the original fantasy/retrofuturistic setting in the design document.

## Simulation principles

- The player prepares the army before battle. Combat is autonomous.
- Keep authoritative battle logic separate from Unreal rendering and presentation.
- Officers make decisions using their own knowledge and received reports. Never give tactical decision code unrestricted access to hidden enemy state.
- Record the information and reasons behind decisions so behavior can be inspected and explained.
- Keep persistent soldier identities distinct from temporary battle entities.
- Prefer simple, testable implementations. Add architectural complexity in response to actual requirements and measurements.

## Repository and tooling

- This WSL checkout is the authoritative source repository.
- Read `docs/DEVELOPMENT.md` for the verified Windows toolchain and build workflow.
- Keep build output, caches, installers, local machine settings, credentials, and temporary experiments out of Git.
- Track source assets, configuration, and scripts needed to reproduce the project. Do not ignore Unreal's `Build/` directory wholesale.
- Before introducing large binary assets, configure Git LFS and confirm it works in the active checkout.
- Validate changes with appropriate builds or behavior checks. Report what was actually tested and any limitations.

## AI investigation workflow

- Read `docs/BATTLE_LAB.md` when diagnosing battle behavior. Use structured traces and the offline analyzer to inspect the plan, received information, execution, and outcome before attributing a cause.
- Keep observer facts distinct from actor knowledge. Treat automatically flagged causes as hypotheses and link findings to concrete trace evidence.
- Compare fixed configurations against preserved baseline runs. Report remaining unexplained behavior and diagnostic overhead; do not equate movement or firing counts with tactical quality.
- Prepared map edits must use the geometry mutation/invalidation interface. Preserve stable IDs and revision-correct caches for future destruction.

## Current cognition implementation

User authorized the roadmap implementation on 14 September 2026. Each new feature
requires a specific discriminating scenario; a straight opposing-army outcome is
insufficient. Preserve the unchanged strict tactical evaluator and 8/9 target.

[Roadmap and research](plans/001-ai-upgrade-roadmap.md),
[attributed Fable implementation contract](plans/002-ai-upgrade-implementation-review.md),
[attributed Fable code review](plans/003-cognition-code-review.md), and
[Astra resolutions, scenarios and results](docs/AI_COGNITION_IMPLEMENTATION.md)
are the current context. The `--cognition` controller remains opt-in and
experimental. Focused mechanism passes do not constitute tactical acceptance.
The prior recovery controller's 2/9 result belongs to that controller alone.

Current accepted completion work: [decision-to-action loop](plans/004-decision-action-loop.md).
Earlier implementation: [decision-loop results](docs/AI_DECISION_LOOP_RESULTS.md).
The pre-reliability baseline `8a5b385e04c22185` passed the original 9/9 on Linux and Windows:
[nine-case results and recommendation](docs/AI_NINE_GATE_RESULTS.md).
Cognition remains opt-in. Frozen held-out seeds 110–119 have now been evaluated;
Both platforms scored 10/10, 7/10, 5/10 by layout, below the per-layout promotion gate.
Frozen acceptance cases: `tests/ai_acceptance.json`. Do not tune on held-out seeds.

## Character art planning

The user prefers the simplified low-poly reference with minimal facial detail.
[Modular character production proposal](plans/006-modular-character-production.md)
records Astra's proposed sequence and compatibility boundaries. This is pending
design discussion, not an accepted production scope. Fable review was unavailable
because of the subscription limit; no review of this plan is claimed.

## Ongoing AI reliability repair

[Working reliability results](docs/AI_RELIABILITY_RESULTS.md) records the current
unaccepted implementation, exact fingerprints, mechanisms and remaining failures.
Opened seeds110–119 are regression evidence; independent seeds2001–2010 remain
unopened in `tests/ai_validation_v2.json`. Preserve the frozen evaluator and360s
settings. No final promotion or new Fable approval is claimed by this checkpoint.

[Attributed reliability review](docs/AI_RELIABILITY_FABLE_REVIEW.md) identifies
cross-squad support loss, support amendments, bounded waits and local-role fixes.
Implement and verify those findings; this is not default-controller approval.

Actual subsequent architecture review: [injury capability and progress receipts](docs/AI_INJURY_CAPABILITY_FABLE_REVIEW.md). Generation-gap, temporary shelter, remaining-path and retirement-position corrections are under verification; no promotion approval is implied.

Actual subsequent review: [support preflight and protected staging](docs/AI_SUPPORT_PREFLIGHT_FABLE_REVIEW.md). Candidate91 exposes uncovered-threat waiting and unsafe gun relocation; proposed bounded handshake remains under implementation.

Actual subsequent review: [feasible approaches and persistent refusal](docs/AI_FEASIBLE_APPROACH_FABLE_REVIEW.md). Candidate103 regressions and post-refusal loops require restricted route replacement, persistent failure evidence and platoon objective revision. [Execution plan010](plans/010-feasible-approach-implementation.md) records Astra resolutions; no promotion approval.

Actual subsequent review: [firing-area consistency and safe fallback](docs/AI_FINAL_THREAT_FABLE_REVIEW.md). Planner/shooter geometry mismatch, permanent reserve directives and exposed pauses remain to be repaired and physically tested.

Current remaining-failure review: [actual Fable012 response](docs/AI_PROMOTION_BLOCKERS_FABLE_REVIEW.md). Latest candidate141 (`1abef4125efaed2a`) remains unaccepted: Linux/native Windows original8/9, historical15/30. Earlier119 was8/9 and20/30; neither certifies readiness. Independent2001–2010 unopened. See working results for exact test/platform status.

Actual latest review: [Fable013 command adaptation](docs/AI_ADAPTATION_FABLE_REVIEW.md), with [Astra implementation and explicit corrections](plans/013-command-adaptation-implementation.md). Review is advisory, not acceptance; no new validation seeds may be opened before the frozen9/9 prerequisite.
