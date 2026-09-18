# Bounded review: remaining tactical failures after review011

User request remains implement to30/30 with Fable5.1 architectural consultation. Use exact model and existing subscription. Read-only, no code edits. HEAD3ebd263 plus dirty source; candidate119 source snapshot `.local/held-out-repair/candidate119/Sim`, build e05967cd41a68232. Current source matches except tests. Prior attributed review docs/AI_FINAL_THREAT_FABLE_REVIEW.md, implementation plan plans/011-final-threat-execution-implementation.md.

Implemented review011: area-consistent gun refusal (physical scenario51 now real blocked-focus/clear-edge actual fire+transport passes); bounded45s fallbacks, re-taskable Reserve/Observe/Consolidate; coverable threat selection using commander knowledge and reported support position; prior protected hold retreat <=25m along retained corridor, local8m shelter first. Most focused tests pass; additional fixture52 now validates actual physical retreat from authored prior hold with real sensing/orders/navigation; fixture53 missing-history control. Source119 stores two prior holds to avoid discarding stage history.

Scores: candidate117 f14028bb8a8b8028 original8/9 (fails7/108), historical20/30 (9/6/5). Candidate119 original8/9 same failure; historical currently running, see `.local/held-out-repair/historical-candidate119/acceptance.json` if complete, otherwise use117. Earlier best90 d0e577abab5319b6 original8/9 historical28/30 (fails5/110,7/115) but it allowed uncovered final entry, so not an acceptable rollback. Candidate91 corrected that and scored23. Candidate111 original7, historicalnotrun. No gate relaxation or weapon/personality tuning permitted. Independent2001–2010 remain unopened.

Evidence:
- `.local/held-out-repair/original-candidate119/acceptance.json` exact runs.
- `.local/held-out-repair/historical-candidate117/acceptance.json` exact runs, failures5/110;6/111,113,117,118;7/112,114,115,116,119.
- `.local/held-out-repair/retreat119-7.log` actor-owned exposure/path checks. At78–79 in7/108 previous holds for11,12,13,15 become exposed to newly discovered33. Only10's11.18,-24.54 remains safe. Thus review011's assumption that the prior holds remain protected against new evidence was wrong for most members. Own prior positions can't solve this alone. Need useful safe retreat selection, perhaps sharing available prior safe holds or nearby protected slots along the same corridor, not unprotected local cover.
-6/113117 completes route and eventually eliminates defenders but fails second-angle: inspect whether ordinary outcome variance or real execution failure, without relaxing evaluator.
-Other117failures: common refusal->observe/reserve, some alternate objectives29.2,+/-7. Several full squads do nothing after fallback despite expiry. Need inspect actual authority, sender acknowledgment, report freshness and candidate feasibility, not count movement as quality.
- `.local/held-out-repair/retreat119.log`: physical fixture52 path19.87m takes~10.5s at existing crouched1.89m/s. The review's blanket8s target is physically impossible for this path. Test now uses pathlength/existing speed +2reportDelay+1s steering, minimum8s. No gameplay speed change. Control compares time exposed, actual hits are measured but currently zero both, so no claim of reduced hits.

Bounded questions:
1. Classify the remaining original failure and group the historical regressions using concrete trace lines: actual coordination defects versus legitimate combat/evaluator losses. At most three representative historical runs are sufficient; don't exhaustively read all traces.
2. Propose at most three structural fixes with exact invariants/interfaces, physical discriminating tests and measurable criteria. No numbers chosen to fit seeds; no broad redesign or weights. Address how a safe final occupation can actually become achievable when fixed support can't cover it, without authorizing exposed suicide.
3. Resolve the prior-hold safety gap above. Is a bounded protected retreat region along the accepted corridor appropriate, with current officer knowledge and actual path verification? If yes define authority and pause/resume semantics.
4. Is30/30 on this combat-dependent evaluator structurally achievable without contaminating behavior? Be candid about evidence; user requires it but do not propose hiding failures or moving acceptance criteria.

Retain actor knowledge boundaries, production transport, absolute deadlines, exact role/route receipt matching, frozen evaluator/layouts/360s, legacy behavior. Do not claim promotion readiness.
