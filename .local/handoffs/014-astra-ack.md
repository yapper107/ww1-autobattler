# Astra acknowledgement — plan 014

16 September 2026. Implementation lead: GPT-6 Astra. Starting source fingerprint:
`d0e577abab5319b6` (verified with `python3 tools/source_id.py`).

I understand the objective as replacing the current convergence and tightly packed
movement with measurable small-unit battle drills, while preserving the separation
between actor knowledge and observer evidence. First establish the actual spatial,
tactical and outcome baseline; then make the bounded candidate90 crowding repair;
then build the separate controller and generated-family evaluation in later slices.
The frozen nine and thirty are regression information, not tuning targets.

This run starts and ends with Phase 0: offline dispersion and available tactical
metrics, hand-built Python fixtures, forty 360-second playable-map baseline runs,
and the frozen 9 + 30 regression runs. No gameplay or export changes, no commit,
no reset/stash, no Fable launcher. Existing uncommitted work is preserved.

No architectural disagreement is raised in this slice. Two specification tensions
are explicit: the handoff says “commit”, but the user's current instruction says
leave changes uncommitted; the latter governs. The prescribed no-trace baseline
cannot measure trace-derived reversals/succession. Those will be marked unavailable,
not zero, while their algorithms are tested on synthetic traces and exercised on
the traced regression records where applicable. Missing future export metrics remain
deferred. Any additional metric ambiguities and concrete conventions will be recorded
in the Phase 0 report before proposing the hotfix.

Export inspection correction: `Diagnostics.cpp:205` always writes succession and
order-issued events to events.jsonl, so succession latency can be measured on the
no-trace baselines. Only destination-based order reversals require trace.jsonl.
The report documents the event joins, missing-casualty and censoring rules.
