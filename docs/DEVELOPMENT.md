# Development environment

## Verified setup

The following combination successfully compiled and linked a minimal Unreal editor module on 2026-09-12:

| Component | Verified installation |
| --- | --- |
| Engine | Unreal Engine 5.4.4, installed through Epic Games Launcher |
| IDE | Visual Studio Community 2026 |
| C++ compiler | MSVC 14.38.33145, toolchain directory 14.38.33130 |
| Windows SDK used by the build | 10.0.19041.0 |
| Build tool | UnrealBuildTool with Unreal's bundled .NET runtime |

Visual Studio's default MSVC 14.51 compiler failed against UE 5.4 engine headers. Adding `Microsoft.VisualStudio.Component.VC.14.38.17.8.x86.x64` to the existing Visual Studio installation resolved the failure. UnrealBuildTool selected the compatible compiler automatically on the successful build.

This documents the tested local combination; it does not claim general IDE integration support for UE 5.4 with Visual Studio 2026. Recheck toolchain compatibility before changing the engine or compiler.

## Source and builds

- Authoritative source repository: this WSL checkout.
- GitHub remote: `https://github.com/yapper107/ww1-autobattler.git`.
- Unreal and the Microsoft compiler are Windows installations. Windows command execution from WSL is working.
- The initial compiler check used a temporary Windows-local project outside this repository. That test project is not the game.
- `scripts/build.sh` synchronizes `Unreal/Source/` and `Unreal/Config/` into a dedicated Windows-local build mirror, then invokes UnrealBuildTool. Only the mirror's source and config directories are replaced; its build cache and saved data remain intact.
- The mirror is for building and playing. Edit source in this repository and rebuild; changes made directly in the mirror will be overwritten.

## Build and run

Install `g++` and `rsync` in WSL. Configure the Windows build destination once in an ignored local file:

```bash
mkdir -p .local
cat > .local/paths.env <<'EOF'
ARMY_ENGINE_DIR='/mnt/c/Program Files/Epic Games/UE_5.4'
ARMY_WINDOWS_BUILD_DIR='/mnt/c/Users/YOUR_USER/Documents/Codex/ArmyPrototype'
EOF
```

Choose a new or empty build directory. The build script refuses to overwrite an unrelated nonempty directory. Local paths for the current machine are already configured.

```bash
./scripts/test-sim.sh
./scripts/build.sh
./scripts/launch.sh
```

The launch script runs Unreal Editor in standalone game mode. This first build requires the installed engine; it is not a packaged shipping executable.

```bash
# Automated Unreal integration check, including captured preparation/battle/result screens:
./scripts/launch.sh -ArmySmokeTest -unattended
```

The integration check exercises preparation changes, simulation, pause, seek, slow motion, recorded projectile flight, 0.01-second stepping, crouched cover rendering, pop-up firing, officer/NCO orders, machine-gun overwatch aiming, 64 soldiers in eight squads, pending reactions, camera orbit/pitch/reset, automatic protected shelter, results, restart, and return to setup. It writes `Saved/smoke-test.txt` after its assertions pass and then exits. Screenshots appear in `Saved/Screenshots/`. This check invokes the same game commands as the controls; visual inspection is still needed to assess layout and rendering.

The independent simulation test checks delayed command delivery, report propagation and freshness, sergeant succession, aim acquisition, suppression effects, crouched hitboxes, low-cover protection, pop-up firing, shelter during reloads, default observation and return under suppression/reloads, minimal wall-peek clearance, gravity, finite-height cover, moving-target collision, collision/impact timing, cover commitments, settling and peeking, suppression response, cover reservations, navigable detours, symmetric deployment, deterministic records, seed variation, health/knowledge invariants, individual reaction ordering, suppression-sensitive vertical dispersion above and below the aim point, stationary sustained MG bursts, rear-guard injury reports and continued wounded firing, danger-based flanking/fallback, friendly crossing prediction, blocked-lane report relays and clearance orders, blocked waypoint recovery, regrouping threshold recovery, protective cover without a firing angle, resumption after local safety overrides, and four varied 64-soldier battles. Do not treat that small scenario sweep as a balance guarantee.

Squad progress regressions also check stalled-advance recovery, retry spacing and alternate destinations, support-fire reporting delays, extended suppression/regrouping deadlines, movement resetting the timer, and exemptions for wounded rear groups and objective holders.

The Unreal integration check captures soldiers firing from windows on both floors, asserts intermediate stair traversal, checks the floor cutaway, and finds a squad with a recovery plan and recently received flank orders, then captures its inspector and command panel.

Building tests check doorway entry, blocked window traversal, sill protection, firing apertures on both floors, floor-slab collision, up/down stair paths and replanning on stairs, unsupported upper-floor rejection, elevated soldier collision, and friendly-fire separation by floor. Broad-phase building bounds are compared against all physical boxes to verify identical collision results. Wounded-support regressions check abandoning blind rear cover while retaining useful firing positions. The scenario sweep counts actual window shots on both floors and continued wounded fire.

`EnvironmentSim.cpp` owns building generation, shared cover/window positions, and floor/stair navigation. Navigation caches are keyed by map geometry; collision groups skip buildings outside a queried segment. The tests still validate physical collision against individual boxes.

## Battle calculation performance

The 2026-09-13 pass profiles the wait after **Run Battle**. Visibility queries stop at the first obstruction; projectile queries still find the nearest physical hit. Cover selection rejects distant/unwalkable candidates before evaluating firing angles. Walking checks skip buildings outside the segment, and collision checks reject volumes entirely above or below a segment. Movement history copies only position/team/activity; replay storage reserves snapshot capacity up front.

A profiled seed-108 balanced battle retained its complete regression fingerprint (`12280809283720277148`) while its measured calculation fell from 20.918 to 5.963 seconds under gprof. The Windows smoke scenario (seed 108 with its test preparation choices, 150 seconds, 2,182 shots) fell from the prior 17.050 seconds to 6.411 seconds. These are local scenario measurements, not guaranteed load times. The full scenario regressions and building collision equivalence checks also run after optimization.

Returning to preparation and running identical settings reuses the last in-memory replay. Seed, doctrine, approach, equipment, and duration all participate in the cache comparison. The smoke check verifies reuse without replacing the recorded frames. Changed settings calculate a new battle. First-time calculation still runs synchronously; keeping the interface responsive with a background calculation is a separate future improvement.

## Repository conventions

- Source text defaults to LF line endings; Windows batch and PowerShell scripts use CRLF on checkout.
- Generated Unreal files, IDE state, build output, and local experiments are ignored.
- Unreal source assets such as `.uasset` and `.umap` are binary files and must remain tracked when introduced.
- Git LFS is not currently available in the active WSL command environment. Configure it before adding large binary assets. The initial repository contains text files only.
- No generated project files, game binaries, third-party assets, or installers belong in the initial repository setup.

## Ownership

Design direction and playtest feedback come from the user. Implementation and technical verification are handled by Codex. Preserve the supplied master vision and keep later agreed design changes explicit.

## Coordination verification

`CoordinationSim.cpp` owns fireteam phases, small building-team assignments, and useful support assessment. `TrafficSim.cpp` owns friendly passage leases and holding positions. Team directives travel in delayed officer-to-sergeant orders, then become individual orders. These fields, support reports, and passage waits are included in the deterministic replay fingerprint.

Regressions check paired movement/support orders, phase completion, suppressed or exposed covering elements withholding release, useful/stale/blocked support, small building assignments and competing claims, doorway FIFO traversal, death releasing a passage, opposing stair traffic, and a stopped stair owner clearing through a valid path. Low-suppression and exposed-stop tests span assault, rally, flank, bound, and wounded-support tasks. Existing tests retain peeking, reload shelter, reaction delays, wounded firing, and physical collision checks.

The full battle sweep counts received move/cover pairs, completed bounds, window-team shots, useful support reports, and passage waits. The Unreal smoke test captures the coordination panel and a yielding soldier in addition to both-floor firing and the prior controls. A small scenario sweep proves exercised behavior and determinism; it does not establish tactical balance or eliminate all transient congestion.

The completed 2026-09-13 coordination pass passed the Linux regressions and Windows smoke test. Across six distinct battle configurations, the checks recorded 2,388 frames with paired move/cover orders, six completed bounds, 145 window-team shots, and continued wounded support firing. The final Windows smoke battle (seed 108 with its test preparation choices, 150 seconds, 2,047 shots) calculated in 4.875 seconds and reused its replay on identical settings. Behavior has changed since the earlier performance benchmark, so these are scenario timings rather than an equivalent-work speed comparison. The four doctrine/equipment sweep battles ended in stalemate. Additional two-seed audits still found temporary congestion and exposed pauses during movement; playtesting and tactical tuning remain necessary before treating this as a settled AI baseline for stats.

## Hold-and-engage / rural crossroads pass

The later 2026-09-13 pass makes a productive firefight the default, preserves useful cover through routine order updates and timer expiry, and requires persistent severe danger before a new flank. Protection checks now test physical obstruction within three metres on the threat-facing side. The map has four peripheral buildings with staggered outdoor cover and screened routes.

New regressions reject the wrong side of cover and distant obstructions, preserve a firing position through sixty seconds of fresh contacts, defer progress recovery during an engagement, and still recover after its longer deadline. An explicit coordination test completes a released bound before holding. Map checks retain reachable central and outer approaches. The deterministic fingerprint includes engagement, pressure duration, and maneuver cooldown fields.

The six-configuration sweep now verifies hold-and-engage firing rather than requiring spontaneous bounds: these scenarios generated no completed bounds under the revised policy, while explicit phase tests still exercise completion. Window-team shots, passage yielding, useful support, wounded fire, both-floor window shots, physical collisions, and deterministic replay remain checked. The Unreal smoke capture now selects a firing member of an engaged squad on the new map.

Comparing the staged previous implementation against this pass, using seeds 107 and 108 with default preparation, active movement samples fell from 54.49%/54.29% to 28.18%/30.40%. Total rounds rose from 1,913/1,950 to 2,854/3,091; issued flank orders fell from 69/98 to 8/15. Outdoor shots rose from 77.42%/76.15% to 95.76%/91.94%. These measurements include both AI and layout changes, rather than isolating either cause. The four additional doctrine/equipment scenarios produced three draws and one Ember win. Balance and tactical variety still need playtesting.

The final Windows replay check passed with 2,541 shots in its 150-second seed-108 cautious/north scenario, calculated in 2.695 seconds. Its screenshot selects an engaged, aiming soldier who has already fired from the ground floor/outdoors. The full regression suite passed in 54.45 seconds, including 33,449 hold-and-engage firing samples and firing from both building floors.

## Screened valley / explicit sight boundary

The next map pass expands the battlefield to 340 × 220 metres, doubles deployment distance and lane spacing, and adds ten six-metre opaque rock masses with routes around their staggered ends. The battle default is now 240 seconds. Four buildings sit on the flanking approaches. Cover placement rejects overlap with buildings or major blockers. The preparation camera and ground grid scale to the map dimensions.

`SenseEnemy` now contains the existing enemy sensing code behind an explicit perception boundary. Spotting ranges remain 70 metres for ordinary soldiers and 95 for machine gunners, with omnidirectional scanning, body visibility sampling, physical line-of-sight tests and delayed recognition. Friendly sight remains 70 metres. The inspector shows the selected soldier's enemy sight range. No enemy truth is passed to tactical planning.

Tests check both range cutoffs, current rearward/omnidirectional detection, ground-level and upper-floor-height occlusion, valid deployment, no initial enemy visibility, and reachable central/northern/southern approaches. Reaction-delay and prior knowledge tests remain in place. The full simulation suite passed in 68.02 seconds. Six configurations retained hold-and-engage behavior, both-floor window firing, window teams and traffic coordination. The four doctrine/equipment cases produced one draw and three Ember wins; these cases are regression coverage rather than a balance guarantee.

Default seeds 107/108 first recognized an enemy at 43.8 seconds. Their records contained 3,053/1,160 rounds, 40/217 upper-window shots, 1,083/331 ground-window shots, and 24/26 designated window-team shots. These are local replay measurements.

The Unreal smoke test exercises preparation controls, then restores the standard seed-107 configuration for full replay coverage. The cautious/north seed-108 configuration can end at 74.4 seconds without late recovery orders, so it is no longer the single fixture for every UI feature. Scenario-independent regressions continue checking recovery behavior.

The final Windows build and Unreal replay smoke test passed. Its standard seed-107 battle recorded 3,053 shots over 240 seconds and calculated in 3.259 seconds. Visual checks confirmed the expanded battlefield, six-metre blockers beside upper-floor windows, and the selected soldier sight-range display. Cached replay reuse also passed.

## Fractured Works / deathmatch and personal cover

The next user-directed pass removes capture fields, the depot prop/UI, central victory rules and objective-holding exemptions. `ResolveDeathmatch` ends on elimination (after pending rounds land), or compares surviving soldiers at the configured limit. Equal survivors draw; every soldier above zero health counts. `UpdateSearchMission` supplies separate mapped search sectors and a stand-off destination from fresh personal/received contacts. Search legs are recorded in squad state and the deterministic fingerprint. Engaged squads give hold orders at their existing positions. Ordinary regroup orders preserve useful personal cover; an exposed ordinary advance responds to recognized sight before taking damage.

The 340 × 220 metre handcrafted map now has sixteen tall screen pieces forming staggered courts, four buildings and 92 individual cover objects. The new coverage regression verifies separated reservations at short cover, physical protection, valid spawning, route reachability and sight occlusion. There are no destructible terrain changes in this pass. Mouse wheel zoom is proportional with a minimum 0.055 (previously 0.3); C focuses the selected soldier. The Unreal smoke test exercises the actual zoom/focus commands at the new limit.

New regressions cover elimination, projectiles pending at elimination, time-limit ties and wins, wounded survivors, no capture win at the old centre, search continuing past the centre, contact stand-off, engaged hold orders, cover retained under regrouping, and seeking cover before incoming damage.

Mission changes cancel an obsolete fireteam plan, while an already released short crossing finishes before an engaged squad settles. Explicit regressions cover both transitions.

Final verification passed: the full Linux suite in 99.93 seconds, the Windows build with an identical source mirror, and the Unreal replay smoke test. The final Windows seed-107 deathmatch ran 240 simulated seconds with 2,446 shots, calculated in 6.594 seconds; cached reuse passed. The regression scenarios recorded four completed bounds, 114 window-team rounds, both-floor firing, and active wounded support. Four varied doctrine/equipment cases produced one draw, one Azure win and two Ember wins.

Default seed audits 107/108 each recorded rounds from all eight squads. They contained 580/641 rounds fired beside 21/20 distinct individual cover objects, with final survivors 19:19 and 16:16. Proximity counts identify nearby objects rather than proving protection on every shot. These small scenario samples are not balance guarantees. Visual inspection confirmed close camera framing, the new map and the deathmatch result UI.

## Platoon command, squad ranks and six-minute battles

The user revised squad leadership to a sergeant with an assisting lower NCO. The implementation uses a corporal assistant. The lieutenant and platoon sergeant occupy slots 5/6 of Squad 1 on each side, preserving the current 32v32 force size. They follow and fight with that squad while remaining outside its assault formation, ordinary subordinate orders, support replacement and squad succession.

`PlatoonSim` separates tactical policy from communication/succession transport. Squads produce situation reports every three seconds, delivered to the platoon sergeant after 0.75 seconds plus reaction. Received reports are relayed to the lieutenant every two seconds with another transport/reaction delay. The policy takes only the commander's own received situation array, personal/received contacts and terrain. It pairs a supporting engaged squad with an available squad using an examined north/south route. Orders expire after 55 seconds; local high danger or withdrawal may veto them. Lieutenant loss causes three seconds of disruption, then the platoon sergeant takes over; if necessary, a surviving squad leader follows. Knowledge remains on the recipient soldier, rather than being copied from a dead commander.

Replay frames and deterministic fingerprints include platoon command, received squad situations and higher directives. Explicit tests cover both communication hops, delayed order activation, north/south selection, stale/absent reports, refusal to move another engaged squad, local danger veto, no repeated application, expiry and succession without inheriting unseen information. Formation regression expectations exclude the attached staff from corporal rally orders.

Battle duration defaults to 360 seconds and the simulator ceiling is 600, avoiding the previous 300-second clamp. The map is 340 × 300 metres with twenty tall screen pieces and 136 individual cover objects. Extra outer cover supports flank routes. Camera fit accounts for the greater vertical extent. World labels and helmet insignia distinguish LT/PSG/SGT/CPL; the inspector and platoon panel expose command roles and coordination. Window teams can be formed from four healthy assault members, preserving two outside the building even in the squad carrying headquarters staff.


The full final simulation regression suite passed in 174.40 seconds. It recorded five completed bounds, 119 window-team rounds, firing from both floors, 3,465 wounded rear-support rounds, and deterministic replay with the new command state included. All four varied doctrine/equipment sweep cases ended in Ember wins; this remains a small regression sample rather than proof of balance.

The default 107/108 audits ran all 360 seconds with 3,011/2,574 shots and rounds from every squad. Squads accepted 18/10 higher orders, including 6/3 north and 3/2 south flank orders. Both records retained window-team firing and passage coordination. The first Windows smoke replay passed with the same seed-107 outcome, calculated in 14.102 seconds. Rank-label placement was subsequently adjusted to avoid overlapping tags at deployment; another presentation smoke run verifies that final UI change.

The final presentation build and Unreal smoke test passed, including separated rank labels and the wider-map camera. The same seed-107 battle calculated in 10.960 seconds on the final run, with identical 360-second / 3,011-shot outcome and cached replay reuse. Source files matched the Windows build mirror. Final preparation and platoon-order screenshots were inspected; cover labels remain available when zoomed in and are hidden at overview to keep rank tags clear.


## Combat reassessment verification (2026-09-13)

Added focused regressions for delayed covered pressure/withdrawal, cancelling a press when more contacts arrive, holding equal fights, stale knowledge and cover release, suppression veto, searching past already-crossed sectors, support following a quiet squad, releasing empty window teams, sergeant point duty without a fit corporal, and continued searches by wounded-only groups. New assessment state participates in replay determinism fingerprints.

The full simulation suite passed in 171.611 seconds, including same-seed determinism, a changed seed, and four varied six-minute battles. The four-battle sweep produced one Azure and three Ember wins; it is not a balance guarantee. Default seed 107 produced 3,701 rounds, 11 covered-pressure plans, 26 strength-based withdrawal plans and 21 resumed searches. Seventeen searches moved the point soldier more than five metres within 25 seconds; the other four reacquired contact, and two lost that soldier. All eight squads fired.

The Windows module rebuilt successfully; Source and Config match the mirror. Unreal integration passed projectile, cover, reaction, officer/platoon, building/stair/window, traffic, progress, result and replay-cache checks. The new local-strength inspector was visually inspected. Default Windows simulation computation was 12.906 seconds during the check, so this change does not claim a loading speed improvement. Normal standalone play was reopened and ARMY_READY confirmed. Temporary tactical strength weights and route thresholds still need designer playtesting; persistent soldier stats are not introduced here.


## AI coherence, diagnostics and geometry revision pass (2026-09-13)

Ten fixed six-minute battles: seeds 100–109

| Measurement | Before | After | Change |
|---|---:|---:|---:|
| Flagged unnecessary cover changes | 16 | 6 | 62.5% fewer |
| Rapid order reversals | 5,849 | 2,030 | 65.3% fewer |
| All cover changes | 2,909 | 1,347 | 53.7% fewer |
| Returns to recently abandoned cover | 586 | 173 | 70.5% fewer |
| Aim interruptions | 283 | 255 | 9.9% fewer |
| Unexplained inactivity, soldier-seconds | 481.50 | 323.15 | 32.9% fewer |
| Movement without confirmed support, soldier-seconds | 297.40 | 7.80 | 97.4% fewer |

These are trace-based definitions applied equally to both builds. They are behavioral indicators, not proof of optimal tactics. The narrow unnecessary-cover category excludes recorded threat, order, geometry and protection changes. Passage yielding is an explained wait. Remaining findings retain their evidence and are labeled hypotheses. Per-seed summaries and aggregate JSON are in **AI investigation**.

## Windows generation measurements

Seeds 107–109, two runs each, same machine. First and repeated-process samples are preserved in benchmarks.json; these are not rebooted or OS-cache-flushed cold measurements.

| Build / trace mode | Median simulation | Median simulation + export |
|---|---:|---:|
| Instrumented baseline / standard | 12.947 s | 13.345 s |
| Performance changes only / standard | 4.324 s | 4.722 s |
| Improved AI / standard | 3.953 s | 4.419 s |
| Improved AI / disabled | 3.971 s | 4.245 s |
| Improved AI / focused detailed | 4.018 s | 4.520 s |

Performance-only optimization reduced median simulation time **66.6%**, exceeding the 25% target. Authoritative result digests matched the baseline on ten Linux seeds and all six Windows samples. Optimization reused revision-valid geometry, navigation arrays and conservative spatial filtering while retaining exact collision tests and simulation frequencies.

Standard recording's simulation overhead was within sample noise; recording plus export added approximately 0.17 seconds to the median total relative to disabled tracing. Focused detailed simulation was about 1.2% above disabled. Some validation workloads overlapped, so small differences should not be treated as precise microbenchmarks.

The final Unreal integration run measured **5.956 seconds simulation + 0.514 seconds export = 6.470 seconds Run Battle-to-ready** for seed 107. A subsequent native Windows CLI run took 6.309 seconds total with the same Windows battle digest. Timings vary by seed and machine load. Peak process working set was about **1.46 GB (1.36 GiB)**; replay snapshot memory remains a useful future optimization target.

## Validation

- Full C++ simulation regression suite passed in 137.609 seconds, including deterministic battles, cover/aim/ballistics, support, wounded combat, leadership, buildings, stairs, passages and varied configurations.
- Focused checks passed for useful-cover retention, geometry removal/change and stable IDs, window-cover invalidation, exact spatial-query equivalence, unreachable path-start regression, tick-boundary edits, and no enemy information broadcast.
- Tracing disabled/standard/detailed produced identical gameplay digests and comprehensive simulation fingerprints. Five analyzer regression tests passed.
- Windows Unreal and native command-line builds succeeded. Unreal integration passed, including playback, physical projectiles, command/rank UI, buildings, cover, searches, results and replay reuse.
- Current source identity: `11e9c5ee47bdd190`; manifests include platform. Compare exact results within a platform/build because floating-point behavior can differ across compilers.

## Remaining weaknesses and next investigations

The default Windows run still flags an unproductive support assignment for soldier 15, squad 1, around 102.75–126.55 seconds (decisions 5073–6128). A filtered timeline shows fresh personal contact, repeated overwatch orders and support readiness remaining false while the execution goal stays fixed. **Hypothesis:** retained shelter and the desired support angle are in conflict. The evidence warrants a focused support-reposition investigation; the flag alone does not establish its exact cause. See **AI investigation/support-episode.md**.

There are also remaining rapid order reversals and cover returns, including soldier 47 at 70.45–82.75 seconds (3488, 4108), plus ineffective repositioning for soldier 24 at 88–100 seconds (4351, 4947). The full example trace and analysis are preserved in **AI investigation/example-unreal-run**. The four additional doctrine/equipment regression battles all ended in Ember wins; balance still needs broader assessment and designer playtesting.

Persistent soldier stats have not been added. This pass provides a measured improvement and reusable evidence for the next AI pass, with outstanding behavior visible rather than declaring the AI finished.


Implementation and reproducible commands: `docs/BATTLE_LAB.md`. Detailed local evidence is retained under `.local/coherence`; user-facing copies are in the output folder. No destruction gameplay or persistent stats were introduced.


## One machine gun per side (2026-09-13)

Reduced the default loadout from four machine guns per side to one, retained in Squad 1 alongside platoon staff. The other three gunner slots become riflemen, preserving 32 soldiers per side. Azure’s existing equipment toggle still disables its remaining machine gun; Ember keeps one. Updated preparation text and existing roster/projectile-speed regression expectations. Full simulation tests, Windows builds and Unreal smoke checks passed. Seed 107 produced 1,969 shots in six minutes, with 5.419 seconds Run Battle-to-ready in the integration check. This reduces automatic fire without changing suppression strength or tactical thresholds; it is not a claim that every remaining movement issue is resolved. Source identity: fb656b05f23b2f95. Normal play reopened at preparation.


## Rifle maneuver / platoon envelopment (2026-09-13)

Rifle squads may prepare lateral covered moves before advancing. MG contacts are identified through vision and delayed reports, with planning priority given to these known positions. Friendly mobility, suppression and MG count now reach platoon command through existing reports. Lightly engaged rifles can be selected for a covered envelopment in stages of at most 35 metres; productive MG anchors and pinned groups retain their positions. Local covered rifle stages extend to 28 metres and retain eight-second opportunity/support preparation. Trace knowledge and comprehensive fingerprints include recognized MG identity.

Full simulation suite passed in 135.341 seconds, including delayed MG recognition/report transport, lateral rifle preparation, support-loss veto, MG anchors, tracing determinism, and existing projectile/cover/leadership/building regressions. Five analyzer tests passed. Windows Unreal and native CLI builds passed; final Unreal playback checks passed with seed 107 producing 1,967 shots in 360 seconds, 4.332 seconds Run Battle-to-ready. Source and Windows mirror match. Normal game reopened at preparation.

Windows seed 108 recorded a local rifle flank at 67.25 seconds with 17.2 metres of point displacement over 25 seconds, and a platoon envelopment at 75.25 seconds with 5.8 metres. A subsequent availability audit corrected two zero-point-displacement examples: the tracked corporals were incapacitated, so these do not demonstrate squad inactivity. Maneuver assessment must track surviving execution roles and their replacements. The corrected user-facing RIFLE MANEUVER UPDATE.md and AI investigation/rifle-flank-episode.md preserve evidence and limitations. This is a tactical-priority change, not a claim of universally successful maneuver.


## Interrupted movement commitments and controlled MG encounter (2026-09-13)

Implemented retained BLOCKED / HOLD objectives, changed-condition/eight-second retry gates, failed-route memory, delayed order-specific execution-failure reports, platoon blocked status, support repositioning, and round-based progress checks. Headless encounters use production simulation and empty initial enemy knowledge. Analyzer outcomes track available group members and distinguish spatial arrival from tactical success.

Full simulation regression suite passed in 141.261 seconds. The final MG encounter matrix passed across three layouts and seeds 107–109, with two supported flank hits after more than eight metres of actual movement. Eight analyzer regression tests passed. Windows Unreal and native CLI builds passed; Unreal integration passed with explicit seed 108. Focused detailed encounter rerun preserved its Windows gameplay digest. Source and Windows mirror match; normal play reopened at preparation.

Windows seed-107 comparison: orders 2263→1954, rapid reversals 189→170, cover returns 14→10, quiet-search inactivity 50.20→71.40 soldier-seconds, aim interruptions 23→26. This fixes the tested retry loop, while search/support weaknesses remain. Detailed user-facing evidence is in MOVEMENT COMMITMENT UPDATE.md and AI investigation/commitments. Source identity de8d8dba746eefe6. The seed-107 Unreal smoke sample no longer included upstairs firing and failed its coverage assertion; all unchanged assertions passed on explicitly selected seed 108, with 3.843 seconds Run Battle-to-ready.


## Suppression recovery tuning (2026-09-13)

Source identity 01e843240ebd0916. Recovery is 0.15 per second, previously 0.19: about 27% longer persistence. With no new hits/near misses, full suppression clears in about 6.7 seconds versus 5.3, crossing balanced doctrine's duck threshold in about 3.2 seconds versus 2.5 before perception/decision delays. Incoming-fire strength and other AI thresholds are unchanged.

Inspired by the sustained covering-fire/flanking window described in the Brothers in Arms: Road to Hill 30 manual; numerical timings are our own tuning. An initial 0.13 trial failed the existing combined MG encounter acceptance check; the smaller extension passes without relaxing assertions. Encounter counters now print before assertion failure to aid future investigation.

Full simulation regression suite passed in 141.442 seconds, including tracing determinism and the three-layout/three-seed MG matrix: 2694 covering MG rounds, one supported flank hit, 22 movement pauses. The large-battle sweep recorded four completed bounds. These samples establish regression coverage, not a general tactical improvement or balance result.

Windows Unreal and native CLI builds passed. Unreal smoke seed 108 passed all playback/integration checks: 360 seconds, 2391 shots, 4.889 seconds Run Battle-to-ready under current machine load. Source mirror matches. Normal game reopened at preparation. Logs retained under .local/suppression.


## Initiative planning and measured validation (2026-09-13)

Simulation build f8bbbe8f2b945563. Added CLI observer evaluation and archived baseline/eligibility executables before the planning refactor. Added below-55 wounded maneuver restriction, separate Ember doctrine, persistent uncertain/clearable tracks, rifle area fire, delayed rolling physical fire-delivery reports, candidate-scored squad options, productive firing-position correction, report-triggered planning, and platoon support/main-effort/reserve/consolidation. Individual safety and geometry revision boundaries remain in force.

Four full Linux seeds (100, 103, 107, 108), measured with one finalized evaluator: mean stationary Fire/Hold time without solution 84.0% -> 81.5%; maneuver assignment time 3.5% -> 5.6%; useful spatial completions 2 -> 4; deferrals 2049 -> 217. Mean survivor forward displacement at 300 seconds fell by about 7.5 metres; the AI is not consistently enveloping. Final seed 107 still records 244 order reversals.

Full simulation suite passed in 182.195 seconds; final separately repeated encounter tests require group closure while the defender MG is active (9/9), and defeat of the fixed defender (3/3). The old rare flank-hit counter remains zero and is diagnostic, not the former one-hit-in-nine acceptance condition. Eight analyzer plus three evaluator Python tests passed. A new prepared-assault test requires eight continuous seconds of covering evidence and resets on a gap.

Windows builds and Unreal integration passed. The initial smoke assertion targeted the obsolete recovery counter; it now verifies scored-plan movement orders. Final seed 108 Run Battle-to-ready 6.537s. Native Windows repeat runs of 107–109 and full seed-107 trace-off run recorded identical per-seed gameplay digests; tracing off/on seed107 both 9201681732521483096. First/repeat native timings and ~1.96GiB memory peaks are recorded in output AI INITIATIVE PASS.md; this is not a performance improvement claim. Source/mirror match, normal play reopened. Logs and reproducible runs live under .local/initiative.

## Focused engagement investigation and performance (2026-09-13/14)

Delivered simulation build `3679481d18031c1f` preserves the preceding `1e94efaf1bfb21f3` tactical behavior. Broader AI experiments were rejected after the matched ten-seed comparison showed increased stationary sightline exposure without a firing solution and fewer useful maneuvers. The strict controlled flank matrix remains 0/9; this is not a completed satisfactory-AI pass. See `FOCUSED_ENGAGEMENT_RESULTS.md` and `FOCUSED_ENGAGEMENT_PLAN.md`.

Retained changes reuse exact directed regional-edge costs per actor assessment, compact the revision-valid visibility cache, skip provably non-contributing visibility queries, and capture pauses raised during fireteam coordination. Ten archived full battles reproduced their authoritative digests under the performance-only changes. Final tracing-off seed 107, the unchanged nine-scenario controlled matrix, full/focused C++ regressions, 21 Python tests, Windows native/module builds and main/trench Unreal checks passed. Source/config contents match the Windows mirror.

Twenty-four serialized Windows native runs (seeds 107–109, first/repeated process runs, trace on/off) measured median simulation 16.57s → 12.29s and simulation plus export 17.97s → 13.70s. The reductions are 25.8% and 23.8%; total narrowly misses the 25% target. Peak process working set increased about 80 MiB. First/repeated is not true OS-cache-cold testing. A separate uncontended seed-107 Unreal Run Battle check measured 15.48s including export. The new `investigate_engagement.py`, stricter seed-set matching, observer hold metrics, and `verify_gameplay_parity.py` make subsequent changes reviewable against archived evidence.
