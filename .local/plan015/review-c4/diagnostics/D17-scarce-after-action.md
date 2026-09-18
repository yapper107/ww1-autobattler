# After-action report

Run: `.local/plan015/review-c4/diagnostics/D17-scarce/battle-107-1789666264883209556`

## Battle summary

**Azure** · 40 s · 113 shots.

### Turning points

- 1.1s, squad 0: contact (events line 37). First recorded contact.

### Squads

- **0** — No platoon intent recorded; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 113 shots, 1/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 0 shots, 0/1 lost.

### Decisions and attribution

At 10.4s, squad 0 chose prepared a base of fire ([trace 2008](#trace-2008)), followed by 35 shots and 1 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 10.4s, squad 0 chose advanced tactically ([trace 5173](#trace-5173)), followed by 35 shots and 1 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 4.1s, squad 0 chose took cover and returned fire ([trace 578](#trace-578)), followed by 4 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Communication

54 matched deliveries (mean 0.45s, max 1.30s); 0 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 1.10s, squad 0, contact, evidence events line 37: First recorded contact; .

## Appendix: command timeline

<a id="trace-9"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 9): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.528663231740968, 'next_transition': 578}.
<a id="trace-10"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 10): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.528663231740968, 'next_transition': 578}.
<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.528663231740968, 'next_transition': 578}.
<a id="trace-578"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 578): ReactToContact: cover and return fire. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 7.378445236395632, 'next_transition': 1893}.
<a id="trace-579"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 579): bounding overwatch. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 7.378445236395632, 'next_transition': 1893}.
<a id="trace-580"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 580): new contact inside 100 m. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 7.378445236395632, 'next_transition': 1893}.
<a id="trace-1893"></a>
- 7.95s–7.95s (×1), actor 0, squad 0 (trace 1893): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 5.00s, trace 1695. Next observer evidence: {'until': 9, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.9476671665194923, 'next_transition': 1927}.
<a id="trace-1927"></a>
- 9.15s–9.15s (×1), actor 0, squad 0 (trace 1927): Fixing. Knowledge: actor memory at 5.00s, trace 1695. Next observer evidence: {'until': 10.4, 'shots': 13, 'casualties': 0, 'mean_displacement': 0.1016073533503754, 'next_transition': 2008}.
<a id="trace-2008"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 2008): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 10.00s, trace 1940. Next observer evidence: {'until': 19.8, 'shots': 35, 'casualties': 1, 'mean_displacement': 8.487776291135997, 'next_transition': 5675}.
<a id="trace-5172"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 5172): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 10.00s, trace 1940. Next observer evidence: {'until': 19.8, 'shots': 35, 'casualties': 1, 'mean_displacement': 8.487776291135997, 'next_transition': 5675}.
<a id="trace-5173"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 5173): MoveTactically. Knowledge: actor memory at 10.00s, trace 1940. Next observer evidence: {'until': 19.8, 'shots': 35, 'casualties': 1, 'mean_displacement': 8.487776291135997, 'next_transition': 5675}.
<a id="trace-5174"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 5174): contact cover complete: assessment resumes closure. Knowledge: actor memory at 10.00s, trace 1940. Next observer evidence: {'until': 19.8, 'shots': 35, 'casualties': 1, 'mean_displacement': 8.487776291135997, 'next_transition': 5675}.
<a id="trace-5675"></a>
- 19.90s–19.90s (×1), actor 0, squad 0 (trace 5675): superiority established (8 s hysteresis). Knowledge: actor memory at 15.00s, trace 5523. Next observer evidence: {'until': 28.4, 'shots': 23, 'casualties': 0, 'mean_displacement': 6.266763867847566, 'next_transition': 6112}.
<a id="trace-6112"></a>
- 28.40s–28.40s (×1), actor 0, squad 0 (trace 6112): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 6004. Next observer evidence: {'until': 38.4, 'shots': 29, 'casualties': 0, 'mean_displacement': 6.353849897413544, 'next_transition': 6618}.
<a id="trace-6618"></a>
- 38.55s–38.55s (×1), actor 0, squad 0 (trace 6618): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 6504. Next observer evidence: {'until': 40, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.5282258648249473, 'next_transition': None}.

## Net delivery

54 matched order/radio deliveries; 0 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.450s; maximum 1.300s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 1695: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 1696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 1697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 1698: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 1699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 1700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 1701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 1702: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 1703: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1940: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1941: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1942: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1943: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1944: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1945: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1946: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1947: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1948: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 5523: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 5524: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 5525: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 5526: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 5527: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 5528: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 5529: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 5530: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5832: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5833: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5834: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5835: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5836: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5837: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5838: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5839: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6004: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6005: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6006: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6007: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6008: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6009: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6010: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6011: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6368: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6369: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6370: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6371: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6372: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6373: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6374: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6375: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6504: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6505: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6506: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6507: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6508: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6509: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6510: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6511: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6852: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6853: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6854: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6855: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6856: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6857: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6858: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6859: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Ash incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
