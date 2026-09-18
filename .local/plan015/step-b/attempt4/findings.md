# Review continuation attempt 1 (overall attempt 4)
Source `0b757097233b6a4f`. Fixtures and assertions match review entry exactly.
26/28 selectors pass: Q04 now passes, Q02/Q03 fail. All 13 squad pairs, 7 pins, P04–P07 and Q01 pass.
Q02: Fixing 4.8 s, Assaulting 6.6 s, opportunity true; no phase line/lift. Rush control waits.
Q03: opposite sides (1,-1), lead squad 2, lanes present, no crossed lanes, unscreened control waits; no lift.
Q04: need 21.3 s, help 22.75 s, delivered within 60 s; distant order and receipt pass.
Trace evidence: encounter 88 id6308 at3.8 s binds enemy32 without stage/generation change. Gun7 heartbeat8501 at15 s retains method1/generation1, supportThreat32, 24 rounds, original observation0.2 s; at20 s heartbeat8622 has27 rounds, uncertainty7.93 m and the same observation. No more gun rounds before40 s. At24 s support is lost, at24.2 s assault pauses, and at45.9 s it exhausts the30 s recovery allowance. This is no longer missing binding; a stale exposed silhouette is not a proven current firing position.
Next attempt: distinguish a reachable gun or two-rifle firing-slot quorum from the allocation count; add explicit exhaustion; make the one support recovery query check the crouched target volume when the remembered silhouette is older than6 s. This is a conservative planner assumption, not access to the defender stance. Preserve original contact timestamps and firing uncertainty limits.
No distribution run.
