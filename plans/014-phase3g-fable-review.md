# Plan 014 Phase 3g review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3g report (`.local/handoffs/014-phase3g-report.md`) on fingerprint `ae9ab767f6805765`. Verified independently: protected files intact, Python suite passes, diff clean, only `SquadDrillSim.cpp` changed. Advisory review, not acceptance.

## Verdict

The Phase 3f ruling was implemented as "both covering members have a line to the objective". One is screened, so the assault now stalls at 138.55 s, earlier than before. The wording was mine and it was ambiguous. A pair covers when one man can fire.

## Ruling

Covering-pair readiness inside 18 m: at least one member of the covering pair is stationary in overwatch with a line to the objective. If neither has a line, the covering pair repositions first, one bound to slots with a line, and the assault pair moves only after that bound's arrival receipt. Delivered rounds remain required only while a contact at the objective has been observed within the last 6 s.

## Bounded local iteration on D08 only

Four rounds have gone to the tail of one pair, each costing a full round trip for a one-line clarification. For D08 only, Astra may iterate locally on the assault-stage logic up to three attempts under the doctrine above, with fixtures and assertions unchanged, each attempt documented with its trace evidence and the reason for the next change, and with no distribution measurement between attempts. When D08 passes, all pairs and pins re-run once on the final source, Phase 3 is recorded complete, and Phase 4 proceeds per the Phase 3d brief with its single measured build. If three attempts fail, stop and report the traces.
