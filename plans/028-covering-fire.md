# Plan 028 — make covering fire actually happen (Legacy)

## Context

Plans 025–027 found that no neural policy can improve on the imitation start because the squad layer
is blocked by execution:
- 55–60% of squad decisions are `support_wait`;
- covering support is live in only 0.35% of decisions that could go now;
- skipping the wait loses badly (always-go-now −0.37 W−L).

Jordan: "Do it."

Code exploration shows the covering-fire chain is broken at every link.

- **Demand.** `CoveringPath`/`CoveringCrossing` (`ManeuverSim.cpp` ~20-51) needs ≥3 reported rounds
  in 6 s on a "primary" overlooking track. That track can be ~100 s old (`WithTracks` confidence
  > .15, `CommandSim.cpp` ~148-165).
- **No request.** A waiting squad sends nothing. It sets only `planReason` (~552).
- **No supply.**
  - The gun fires only at contacts it saw itself within 6 s, and its `sector` = most recent contact.
  - The covering pair is on `Task::Hold` (not a support task; `CommandSim.cpp` ~1154).
  - `SelectFireSolution` (`BattleSim.cpp` ~516-601) never reads `sector`.
  - The platoon Support directive's target never reaches shooters (`PlatoonSim.cpp` ~97-131,
    `PlanSim.cpp` ~17-29).
  - Legacy gunners and riflemen never receive their leader's tracks.
  - The cognition-only "fire at a requested reported position" rule (~522/537) and the SupportSector
    message (`CommandSim.cpp` ~566, `ReactionSim.cpp` ~119) are gated off for Legacy.
- **Late credit.** Deliveries relay every 2 s in sync with per-hop delay and drop at 6 s
  (`CommandSim.cpp` ~792-820, `ReactionSim.cpp` ~138). Own riflemen arrive ~4-5 s late; other squads'
  riflemen mostly expire. A 0.5 s direct-reply channel exists for typed controllers (~772-790).
- **Brittle gate plus a bug.**
  - One failed tick pauses a running bound (`ManeuverSim.cpp` ~281-292).
  - `UpdateCoordination` (`CoordinationSim.cpp` ~418-426) judges an internal bound with the
    never-cleared `cmd.route`/`cmd.moveExposure` of an old commit. It resets `opportunitySince`
    every tick (so the 20 s override and 8 s preparation never elapse) and after 12 s calls
    `PauseSquadMovement`. That invents a waypoint, records a failed move and sends the gun to a new
    station, silencing it.
  - The `ready` count (~406-416) is dead code.

## Jordan's rulings (23 September 2026)

1. **Rollout.** Every change goes behind a Config switch (off = identical digests), measured stage by
   stage. It is turned on in the game only after his side-by-side video review, then the 40 lean
   references are re-baselined.
2. **Hidden targets.** Ordered covering shooters may fire into a reported, unseen position **only while
   its uncertainty fits the weapon's spread** (the cognition rule at `BattleSim.cpp` ~537).
3. **Mid-bound.** Allow short cover gaps (~3 s continuous failure before a Support pause). Heavy fire
   (pressure > .72) and refusals still stop at once.
4. **Nobody can cover.** Graduated by danger.
   - Low danger (e.g. one rifleman, or an old uncertain report): do not abandon; cross after a short
     wait, in bounds, under whatever platoon fire exists.
   - High danger (a machine gun, several overlooking tracks, or very high exposure): look for a covered
     way round, per his plan 023 ruling.
   - Thresholds are set from Stage 0 measurements and shown to him.

Standing law applies: knowledge boundary (a leader may pass his own track in an order; shooters act
only on what they see or are told, with delays); the covering pair is ≤2 men with a line, following
within 10 s; forward men are never recalled across unsafe ground; the gun and sergeant stay as base of
fire; flank legs stay quiet (plan 019); a man under fire stays in cover (plan 020); an uncontested
flank does not wait; guards are not weakened; per-case fixes are refused. **Opus 5.5 agents implement,
the main session oversees** (briefs, file ownership, line review, integration, gates).

## Stages (each switch defaults off; each stage is a loop node child of the previous)

### Stage 0 — measure first (no digest change)

**Agent "cover-measure".** Refactor the primary choice out of `CoveringPath` into `CoveringPrimary`,
with identical order of operations. Add a diagnostic `CoveringExplain`.

New trace rows (diagnostics only; nothing written to sim state):
- **`covering_check`** at the commit wait, the active bound and the internal coordination bound
  (`UpdateCoordination` gets a `Diagnostics*`).
  - Leader-knowledge fields: gate, pass/fail, primary id/age/uncertainty/MG, overlooking-track count,
    rounds counted, late rounds, fresh rounds on other enemies, clock state, stale-route flag.
  - Truth fields filled in `UpdateCommands` after `UpdateSquadPlan`, prefixed `obs_*`: friendlies with
    a line to the primary, those who saw it ≤6 s, their tasks/hold-fire/reload/suppression, real rounds
    landed, the gun's state.
- **`covering_clock_reset`**, with its source.
- **`movement_paused`** gains `pause_source` and `had_waypoint`.

New `tools/covering_metrics.py` joins trace, decision receipts and `shots.jsonl`. It groups waits into
episodes and labels each check's first failing reason:
1. no fire at all
2. no primary
3. primary unengageable
4. no shooter bearing
5. bearer not firing (split by cause)
6. fire landed, report late
7. rounds < 3
8. wrong target
9. clock clobbered

Outputs:
- support_wait share and live-support share;
- episodes per battle, their length and how they end;
- seconds waited per exposed crossing;
- rounds on the threat and credit latency;
- clock resets, waypoint-less pauses and pause-caused gun moves;
- the danger distribution of exposed crossings (exposure, MG, track count), which calibrates ruling 4.

Tests: `tests/test_covering_metrics.py`; C++ checks that the rows carry the right primary and reason.

Gates: 40/40 lean parity, 3/3 trace parity, 41/41 neural verify, 12 exact training replays.

Baseline run: the 270 development cases (901–990 × 107–109, Legacy both sides) plus about 30
town-attack-dev battles.

**Decision point:** the reason distribution orders stages 1–4. Default order: 3a → 1+2a → 1f → 2b →
3b/3c → 4.

### Stage 3a — the clock bug (`coverClockFix`)

- `UpdateCoordination` gets its own clock (`boundCoveringSince`) and stops writing `opportunitySince`.
- With no waypoint it never reads `cmd.route`/`cmd.moveExposure`; it uses
  `CrossingExposure`/`CoveringCrossing` on its own target.
- A failed internal bound ends that bound (`bounding=false`, retry time) instead of calling
  `PauseSquadMovement`: no invented waypoint, failed move or gun relocation.
- No internal bound starts while the leader is in a commit wait.

Regression fixture: leftover exposed route, no waypoint, fresh contact → the clock survives, with no
pause and no waypoint.

### Stage 1 — the call and the answer (`coverRequests`; `coverCrossSquad` for 1f)

- **1a. Request.**
  - At a commit wait and during an active exposed bound, the leader stores
    `cmd.coverRequest {enemy, his own contact, crossing, until=now+8 s}`, refreshed while it lasts.
  - No new wait condition anywhere.
- **1b. Order payload.**
  - `Assignment` gains `fireEnemy`, `fireContact`, `fireUntil`, `fireRequester` and `fireFriendlies`.
  - `send()` (`CommandSim.cpp` ~613) and the relay's `holds` (~1174) resend only when the enemy
    changes or the contact is ≥4 s newer, at most once per man per 4 s (order-rate guards).
  - `ReactionSim` copies `fireContact` into `s.reports` on receipt, with transport delay, the same
    pattern as the platoon order (`ReactionSim.cpp` ~61-63).
- **1c. Who fires.**
  - The squad gun: sector plus payload on the threat. Its station prefers the threat only when it is
    re-stationing anyway, and it moves only after 8 s without a line.
  - At most two stationary riflemen whose current spot already has a line on the threat (a
    `StationBears` test against that enemy; nearest first, roster slot ties). At commit these same men
    become the covering pair (`PlanGroupStations` ~228-246, relay ~1019-1039), with the 10 s follow
    rule unchanged.
  - The `ready` BoundCover men of internal bounds (the dead count, now used) and the foothold men.
  - Never movers or flank legs; nobody is moved to get a line.
- **1d. Fire rule** (`SelectFireSolution`).
  - A payload makes that man a support shooter for that enemy only; `Hold` without a payload is
    unchanged (the RifleFlankTests pin holds).
  - Legacy "usable" = seen ≤6 s, **or** requested and `TrackUncertainty ≤ range × ShotSpread`
    (ruling 2), with the existing cover-edge area aim.
  - In `ChooseOrder` (~946) the requested enemy lets a sheltered man peek. The duck, pinned and
    under-fire rules are unchanged.
- **1e. Friendly fire.** `FriendlyFireRisk` reads `fireFriendlies` (the leader's ordered mover
  stations) for Legacy, as cognition reads `supportSector.friendlies`. `ShouldHoldFire` thresholds are
  unchanged.
- **1f. Cross-squad.**
  - A `CoverRequest` message, leader to leader, with normal delay. It bumps `knowledgeRevision`, so
    the receiver replans within about 1 s.
  - The receiver answers only if it is not moving and not waiting itself: it tasks its gun, else up to
    two bearing men, with the same payload.
  - Shooters reply directly to the requester.

### Stage 2 — credit and stale threats

- **2a `coverReports`.**
  - The 0.5 s delivery channel with direct reply to the requester, for Legacy, instead of the 2 s
    `relayFire`. Every hop still pays `MessageDelay` and reaction; no threshold change.
  - `RememberDelivery` keeps one slot per shooter and enemy for Legacy, so a gun switching targets does
    not wipe its count.
- **2b `coverStaleZone`.** When the primary is too stale for the spread rule, requested shooters with
  a line may zone-fire only if its uncertainty ≤ ~10 m and the request is live. Built as an option;
  its use needs Jordan's ruling, because his ruling 2 limits hidden fire to the weapon's spread.
  Default: leave off and rely on 3c.

### Stage 3b — mid-bound hysteresis (`coverHysteresis`, ruling 3)

- Pause for Support only after covering has failed for 3 s in a row. Pressure > .72 and refusals
  still pause at once.
- In the 8 s build-up, a gap of ≤3 s holds the clock instead of resetting it.
- On a Support pause, do not re-station a gun that had a line recently.
- PreparationTests is restated: a gap > 3 s resets.

### Stage 3c — nobody can cover, graduated (`coverGraduated`, ruling 4)

When a request has had no bearing shooter and no credited rounds for T s, the danger is graded from
the leader's knowledge:
- **High** (overlooking MG track, or ≥2 overlooking tracks, or exposure ≥ E_high): mark the crossing
  failed (existing `failedMoves`) and re-plan for a covered way round.
- **Low**: cross after a short bounded wait (≤ the existing 20 s), in normal bounds, under the platoon
  fire that exists.

T and E_high are set from Stage 0's danger distribution and shown to Jordan. The forward-men and
plan 020 cover rules are untouched.

### Stage 4 — platoon support aimed at the threat (`coverPlatoon`, if Stage 0 shows "no shooter bearing")

- `PlanPlatoon` (~97-109) chooses the mover and approach first, takes the commander's
  `OverlookingEnemy` for that approach, and picks the support squad by line onto it. Gun weighting is
  kept, so at least one gun stays engaged.
- The Support directive's enemy/contact become that threat and reach the supporting squad's gun
  payload in `PlanSquad`.

## Verification (each stage)

1. **Switch off:** full suite (`scripts/test-sim.sh`, incl. `--neural`), Python tests, 40/40 lean
   parity, 3/3 trace parity, 41/41 neural verify, 12 exact training replays, MSVC lab build, Unreal
   build. No random draws are added while a switch is off.
2. **Re-root the Legacy lineage** on the current source (the loop tree is cleared):
   `python3 -m tools.loop evaluate --controller legacy --suffix legacy --proposer baseline`.
3. **Candidate node:** the snapshot with the stage's switches on, `scripts/loop-evaluate.sh … --parent
   <root>`. Guards v7 must pass (force_at_the_fight, fights_from_cover, seen_at_the_fight,
   friendly_fire, under_2m, order rates, firing squads), and the objective is reported. Drills,
   cognition and defenders stay digest-identical.
4. **Supply metrics on both arms:**
   - support_wait share and live-support share, seconds waited per exposed crossing;
   - rounds on the threat and credit latency;
   - mover casualties per exposed crossing, friendly fire;
   - `flank_fire_share`, `quiet_squads`, stragglers.
5. **Paired W−L** on the 270 development cases (Legacy both sides).
6. **Neural probes** on a new binary with the switches on: `tools/neural/authority.py` random vs
   greedy, `--timing-rules`, `--start-only`. The question is whether the squad layer now has
   headroom; if so, a new schema-4 training run (separate plan, reserved maps 1201–1230 for any
   promotion evidence).
7. **Videos for Jordan:** `tools/battle_video.py`, switch off left / on right, same map and seed,
   `--focus-squad`. Clips are chosen by distribution (median and largest change), not by favourable
   cases.
8. **After his approval:** flip the defaults, add `--no-…` kill switches, then run
   `tools/verify/rebaseline_lean.py <name> <binary>` and 40/40. Restate these pins under the kill
   switch, naming each: PreparationTests, MGEncounterTests (pauses/blockedFrames), CoordinationTests,
   the covering-pair test, and the gated go-now control in `neural_tests.h`. Record everything in
   `docs/PROJECT_LOG.md`, AGENTS.md/CLAUDE.md current state and plan 028.

## Files (critical)

- `Unreal/Source/ArmyPrototype/Sim/ManeuverSim.cpp`: `CoveringPath`, the commit wait, the active-bound
  gate, the request.
- `CoordinationSim.cpp`: `UpdateCoordination` clock and `ready`, `PlanGroupStations`.
- `CommandSim.cpp`: `PlanSquad` gun and pair tasking, `send`, the relay, the delivery channel, the
  message filter.
- `BattleSim.cpp`: `SelectFireSolution`, `ChooseOrder`, `FriendlyFireRisk`.
- `BattleSim.h` (Config, `Assignment`, `SquadCommand`, `CommandMessage`), `ReactionSim.cpp`,
  `PlatoonSim.cpp`, `Diagnostics.h/.cpp`, `tools/battle_cli.cpp`, `tools/loop/runner.py` (switch flags).
- New `tools/covering_metrics.py`; tests in `tests/lab_tests.h`, `tests/sim_tests.cpp`,
  `tests/group_tests.h`, `tests/neural_tests.h`, `tests/test_covering_metrics.py`.

## Risks

- More area fire: friendly fire, shooters exposed at peeks, reload time. Ammunition is unlimited, so
  add a cadence cap only if the metrics show fire running away.
- Credit inflation: rounds on a stale position counting as cover while the enemy is unsuppressed.
  Mover casualties per crossing guards this.
- Restlessness and exposure rising as squads commit more (watched by guards and conduct measures).
- Order-rate guards from payload resends (rate-limited).
- Every Legacy digest changes when defaults flip, and Legacy is both sides in training and evaluation.

## Progress

- 23 Sep 2026: Legacy lineage re-rooted on source 422987091a8601ee: node `422987091a8601ee-legacy`,
  135 battles (town-dev 20, trench-dev 10, town-attack-dev 60, town-attack-val 45). Guards pass;
  objective 0.841. Every stage node pairs against it. Log: `.local/plan028/root-eval.log`.
- Stage 0 agent (claude-opus-5-5) launched: `.local/plan028/stage0/`.
- Stage 0 done and integrated (agent claude-opus-5-5; `.local/plan028/stage0/`). Source
  **a5332d326bdc7848**: diagnostics only; lab byte-identical to the tested binary.
  - Gates: 40/40 lean parity, 3/3 trace parity, 41/41 neural verify, 12/12 exact training replays,
    138 Python tests, 16/16 sampled battles identical, full Linux suite exit 0.
- **Baseline** (270 Legacy-vs-Legacy development battles + 30 town attacks):
  - support_wait is 57.8% of decisions; live support 1.1%; only 9.3% of wait episodes end covered.
  - Failed checks with a primary, by truth: the primary is **dead in 34%** and has moved more than
    10 m in 12%. Median primary age 11.7 s; 38% are older than 20 s.
  - Late reports 2%; the clock bug is rare (0.4 per battle).
  - New order: **3c → 1+2a → 4 → 1f → 3b (+3a) → 2b**.
- **Jordan's rulings, 23 Sep 2026** (Stage 3c):
  - The covering gate waits only on enemies **seen within 20 s**. An older sighting counts as low
    danger: short wait, then cross in bounds.
  - **High danger** (go round instead of crossing when nobody can cover) = an MG seen within 10 s
    overlooking, or ≥5 enemies seen within 10 s overlooking, or exposure ≥ 0.6. By the baseline this
    is about 46% of town and 28% of attack crossings.
- **Stage 3c built and integrated with the switch off** (agent claude-opus-5-5; `.local/plan028/stage3c/`).
  Source **d915b5e784e0f36d**, `--cover-graduated`, default off.
  - Switch-off gates: 40/40 lean parity, 3/3 trace parity, 41/41 neural verify, 12 exact replays;
    300/300 Stage 0 battles reproduce. Full suite exit 0, Python tests OK, MSVC and Unreal builds OK.
  - Interpretation taken: a fresh *low*-danger threat does not pause a running bound (the ruling:
    low danger crosses).
- **3c result with the switch on** (Legacy both sides, 270 development battles):

  | Measure | Off | On |
  |---|---|---|
  | support_wait | 57.8% | 37.6% |
  | Waiting per exposed crossing | 48.6 s | 16.9 s |
  | Exposed commits per battle | 5.5 | 8.6 |
  | First bound after commit, median | 1.0 s | 10 s |
  | Mover casualties per commit | 0.020 | 0.167 |
  | Hits per bound-minute | 2.9 | 3.4 |

  - Friendly hits +0.90 [+0.22, +1.59] per battle; Azure casualties +0.77 [+0.18, +1.34].
  - Loop node `45cbf73714365903`: all v7 guards pass, but the objective is **0.792 against the root's
    0.841** (val paired −0.028 [−0.048, −0.008]; attacker loss 36.4% vs 30.8%).
  - Crossings by how they passed: low_cross 2,208, covered 43.
  - **Reading.** 3c removes the pointless waiting, and bounds actually run. Today's override commits
    were stopped by the bound gate after about 1 s, so Legacy barely crossed exposed ground at all.
    But nearly every 3c crossing is uncovered because nothing supplies fire yet.
  - **3c stays off.** It is next evaluated together with Stage 1 + 2a.
  - A failed loop node `5a4a0d7ab1734636` (a harness setup error during the agent's first runs)
    remains in the tree. It is not a candidate.
- **Stage 1 + 2a built and integrated with the switches off** (agent claude-opus-5-5;
  `.local/plan028/stage1/`). Source **0b2a9b859eebb87e**; `--cover-requests`, `--cover-reports`.
  - Switch-off gates: 40/40, 3/3, 41/41, 12 exact replays, 300/300 Stage 0 reproduction, full suite
    exit 0, Python tests OK, MSVC and Unreal builds OK.
  - Metrics tool extended with request measures.
- **Stage 1 result with the switches on** (270 development battles; loop nodes against root 0.841):

  | Measure | off | requests+reports | + graduated |
  |---|---|---|---|
  | Covered commits | 130 | 169 | 121 |
  | Waiting per exposed crossing (s) | 48.6 | 33.8 | 13.9 |
  | Loop objective | 0.841 (root) | 0.741 (`181ebd109c78ec8a`) | 0.799 (`1bded8e1c5eacf6a`) |

  - Both loop nodes pass every v7 guard; Azure casualty fraction +0.029 and +0.054.
  - About a third of requests get any round on the named threat; 7.7% reach 3 credited rounds.
  - Request to first round, median 1.3 s; request to credit, mean 2.6 s. Credit speed is not the
    limit.
  - **Limits:**
    1. In about 82% of requests no stationary rifleman already has a line on the threat.
    2. The gun's station bears on the nearest enemy, not the crossing's primary; the gun is often
       walking or the track has expired. With a contact under 2 s old it fires on the named enemy in
       only about 20% of requests.
    3. Ruling 2 limits hidden fire to about the first 3–10 s of a track.
  - Next candidates need Jordan: Stage 4 (support aimed at the threat, gun stationed to bear on it)
    and short covered shifts for covering riflemen to get a line.
- **Jordan, 23 Sep 2026: "Finish the supply side."**
  - Build Stage 4, plus the gun stationed to bear on the crossing's overlooking enemy, plus short
    covered shifts for at most two covering riflemen (a few metres, staying in cover on the near side,
    never onto the crossing) to get a line on the named enemy.
  - Re-evaluate all combinations. **If the full stack still does not beat Legacy, stop.**
- **Stage 4 built and integrated with the switches off** (agent claude-opus-5-5;
  `.local/plan028/stage4/`). Source **55182142b3598f04**; `--cover-gun-aim`, `--cover-shift`,
  `--cover-platoon`; `rerun_battle.py` maps all six plan 028 flags.
  - Switch-off gates: 40/40, 3/3, 41/41, 12 exact replays, 300/300, full suite exit 0, Python tests OK,
    MSVC and Unreal builds OK.
  - The test harness moves a 1.6 MB `Frame` off `main()`'s stack; the suite had been within 16 KB of
    the 8 MB default.
- **Stage 4 result:**

  | Loop node (vs root 0.841) | Objective | Paired attack score | Guards |
  |---|---|---|---|
  | B `d14d35a97685d26e` (requests + reports + gun aim + platoon + shifts) | 0.772 | −0.016 [−0.047, +0.017] | pass |
  | C `bea78007adeb3988` (full stack, with graduated) | 0.788 | −0.015 [−0.045, +0.017] | fails Azure orders/min, +21.8 [+2.0, +41.9] |

  - Azure casualties rise in every arm (+0.70, +0.74, +1.23).
  - Requests reaching 3 credited rounds stay at 7–8% in every arm.
  - The ground limits supply:
    - a covered gun station within 25 m bearing on the threat exists in about 7% of searches;
    - about 2 rifle shifts per battle qualify;
    - the platoon's support squad has a reported line onto the threat in 30% of directives, and fires
      on it in 12%.
  - The full stack simulates about twice as slowly.

## Conclusion (23 September 2026) — plan 028 stopped by Jordan's stop rule

No combination beats the Legacy root. On the generated city maps, covering fire onto the enemy
overlooking an exposed crossing is rarely geometrically available from nearby cover. Legacy's
effective refusal to cross exposed ground is close to the best available under the current objective:
its override crossings are stopped by the bound gate after about 1 s. Every version that crosses more
loses more men.

- All plan 028 switches stay **off**. The playable game and the 40 references are unchanged.
- The instrumentation (`covering_check` trace rows, `tools/covering_metrics.py`) and the switches
  remain for future work.
- For the neural question, the squad layer's timing authority is real but mostly harmful, because the
  cover it would need rarely exists. Possible future directions, each needing Jordan's ruling:
  - routes that avoid exposed ground altogether (building-to-building movement);
  - an objective that values ground gained or time to objective, not only the loss-weighted attack
    score;
  - map generation with more mutually supporting cover.

## E-2: the stack re-measured on the repaired credit (24 September 2026, agent claude-opus-5-5, `.local/plan029/E-2/`)

Muzzle credit on (source ae3224df477f0f4c), 900 battles, 15 arms × 60 (towns 21–40; villages 1201–1220
natural with `--concealment --prone --vaulting`, and concealment-only), paired vs baseline. **No arm
beats plain Legacy; the stop verdict stands.** Towns: every arm within ±0.02, none significant. Full
stack on villages: −0.032 [−0.063, −0.006] (natural) and −0.049 [−0.093, −0.012] (concealment-only),
the loss coming from graduated low/stale crossings (0.10–0.17 movers lost per commit against
0.01–0.05 in the other arms; +0.45–0.67 mover casualties on bounds per battle). Stack without
graduated: −0.035 [−0.076, −0.002] on natural villages (48/12 vs 53/7). Requests + reports + gun-aim:
closest to neutral everywhere (best VR −0.003 [−0.026, +0.019], 55/5). The supply does improve with
credit: gate passes +35–60% (+150% CF), credited deliveries +15–25%, request → first round p50
1.4–1.9 s (latency is not the limit). **What limits it:** covered-station share 8–24% in every arm
(best VR 23.8%); only 22–51% of requests get any round on the named threat. Old feet ray vs default:
no family moves significantly (F-E's +0.068 on 15 default village battles is not reproduced on 60).
Not measured: replays, meeting battles, trenches, quiet-machine CPU.
