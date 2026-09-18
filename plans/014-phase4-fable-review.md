# Plan 014 Phase 4 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3h completion (`.local/handoffs/014-phase3h-report.md`, `a0364bff5cea6ab9`) and Phase 4 first-build report (`.local/handoffs/014-phase4-report.md`, `3bda3ace2c9dacdc`), and read `Sim/PlatoonTaskSim.cpp` in full. Verified independently: protected files intact, 63 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Phase 3 is complete on its scope

D08 passed on the second local attempt under the Phase 3g allowance; all thirteen squad pairs and seven pins passed once on `a0364bff5cea6ab9`. That source is the Phase 3 reference and is preserved.

## Phase 4 first build: the right shape, the Phase 2 defect one level up

The planner has the intended structure: a Kruskal grouping of known contacts, a task tree with priorities, capacities, areas and a weapon filter, greedy assignment with stickiness, 75 s directives with renewal, phase-line lift through the fire-lane message, and squad autonomy on leader loss (P04 and P06 pass; F1 outcome holds at 78 wins, 1 draw, 11 losses). It fails because it rebuilds the entire tree from scratch at every 5 s assessment (`state.nodes.clear(); state.claims.clear()`), recomputes the Advance objective from the moving platoon centroid, and re-runs greedy assignment with an 18-unit stickiness that route cost easily overrides. The result is that squads executing a drill are re-tasked every assessment: D01 records repeated objective replacements, D03 is pulled into a Fix hold, the assault chain never completes (D07 to D09), break contact is interrupted (D16), and on the authored maps shots and casualties halve. This is exactly the per-tick re-planning that Phase 2c fixed at the squad level.

Three further defects are specific:

- **Flank area is a start-to-goal rectangle** (`Area`, half-width 10 m). A covered flank route detours outside it by construction, producing the 22 column contractions and 17 allocation failures per fixture and the missing arrival angle (P01), and therefore no phase line (P03).
- **Corridor claims are soft costs.** P02's two flank corridors overlap at 15 m centroid separation with claims enabled and disabled alike.
- **P05's fixture never produces the belief it tests.** Thirty-two physical enemies yield a believed strength of 17.8 for fourteen attackers, a ratio near 0.8, so withdrawal below one half is never exercised. Astra's refusal to infer a policy failure from the omniscient count is correct.

## Binding corrections for Phase 4b

1. **Directives are commitments.** A task node persists across assessments while its activation condition holds; its objective is fixed when the node activates and retained until the node completes, deactivates on knowledge, or its squad reports Blocked or Done. The Advance objective is the platoon's next lane leg ahead of the current front, not the centroid plus 60 m. A squad whose accepted drill for its current directive is executing is not reassigned unless its node deactivates, it reports Blocked or Done, or a higher-priority node has no other eligible squad; stickiness becomes that hard rule during execution, with the cost credit kept for idle squads. Renewal keeps the intent id and objective, as now.
2. **Squad-side receipt.** A directive that renews the same intent does not re-accept a drill. A different directive interrupts an executing drill only at a stage boundary, except Withdraw, which interrupts at once, and MoveTactically, which may be redirected. A squad executing BreakContact or Withdraw reports it and is not re-tasked until the drill completes.
3. **Flank area.** The area of operation for a Flank directive is the 25 m buffer of the accepted route polyline united with the 60 m objective disc, clipped to the map; the same construction applies to Advance corridors. Rectangles are not used.
4. **Corridor claims are exclusions.** A candidate flank route whose centreline comes within 20 m of a claimed corridor is rejected; if no distinct route exists for a second flank squad, that squad takes Reserve behind the fixing element. The P02 assertion stays.
5. **P05 fixture.** Place the enemy where the commander and his squads can observe enough of it for the mental map to register at least twice the platoon's strength within the first 20 s (contacts inside the sight cones at 50-70 m), and assert the believed ratio from the traced mental map before the withdrawal assertion. The physical strength control stays.
6. **Gaps accepted for now:** the weapon-owning squad as fixing squad without cross-squad weapon attachment; Merge as task and rally without member transfer; `platoon_blocked` as the top-level honest refusal. These are recorded as Phase 4c items, not blockers.

## Local iteration allowance

As for D08: for each mechanism pair, squad or platoon, up to three local attempts under the doctrine above, fixtures and assertions unchanged, each attempt documented with trace evidence, no distribution measurement between attempts. When all pairs pass, one measured build under the Phase 4 exit as stated in the Phase 3d review, with Phase 3e as the no-regression reference for F1 outcomes and the authored-map targets against candidate90. Report and stop if it fails.

## Native Windows verification (architect session, 17 September 2026)

On the Phase 4 first-build tree `3bda3ace2c9dacdc`: `./scripts/build-lab-windows.sh` compiled with MSVC including the new platoon module, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase4/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
