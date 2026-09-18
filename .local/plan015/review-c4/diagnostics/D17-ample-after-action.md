# After-action report

Run: `.local/plan015/review-c4/diagnostics/D17-ample/battle-107-1789666265516982003`

## Battle summary

**Azure** · 40 s · 126 shots.

### Turning points

- 1.1s, squad 0: contact (events line 37). First recorded contact.

### Squads

- **0** — No platoon intent recorded; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 126 shots, 0/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 0 shots, 0/1 lost.

### Decisions and attribution

At 8.0s, squad 0 chose prepared a base of fire ([trace 4219](#trace-4219)), followed by 40 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 8.0s, squad 0 chose advanced tactically ([trace 7972](#trace-7972)), followed by 40 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 4.1s, squad 0 chose took cover and returned fire ([trace 1991](#trace-1991)), followed by 10 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Communication

56 matched deliveries (mean 0.43s, max 0.80s); 0 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 1.10s, squad 0, contact, evidence events line 37: First recorded contact; .

## Appendix: command timeline

<a id="trace-9"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 9): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.523274159368441, 'next_transition': 1991}.
<a id="trace-10"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 10): traveling overwatch. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.523274159368441, 'next_transition': 1991}.
<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.523274159368441, 'next_transition': 1991}.
<a id="trace-1991"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 1991): ReactToContact: cover and return fire. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.4, 'shots': 10, 'casualties': 0, 'mean_displacement': 5.51287344900388, 'next_transition': 4214}.
<a id="trace-1992"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 1992): bounding overwatch. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.4, 'shots': 10, 'casualties': 0, 'mean_displacement': 5.51287344900388, 'next_transition': 4214}.
<a id="trace-1993"></a>
- 4.05s–4.05s (×1), actor 0, squad 0 (trace 1993): new contact inside 100 m. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.4, 'shots': 10, 'casualties': 0, 'mean_displacement': 5.51287344900388, 'next_transition': 4214}.
<a id="trace-4214"></a>
- 7.55s–7.55s (×1), actor 0, squad 0 (trace 4214): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 5.00s, trace 4018. Next observer evidence: {'until': 7.8, 'shots': 9, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4219}.
<a id="trace-4219"></a>
- 7.95s–7.95s (×1), actor 0, squad 0 (trace 4219): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 5.00s, trace 4018. Next observer evidence: {'until': 17, 'shots': 40, 'casualties': 0, 'mean_displacement': 10.794927135339833, 'next_transition': 8531}.
<a id="trace-7971"></a>
- 7.95s–7.95s (×1), actor 0, squad 0 (trace 7971): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 5.00s, trace 4018. Next observer evidence: {'until': 17, 'shots': 40, 'casualties': 0, 'mean_displacement': 10.794927135339833, 'next_transition': 8531}.
<a id="trace-7972"></a>
- 7.95s–7.95s (×1), actor 0, squad 0 (trace 7972): MoveTactically. Knowledge: actor memory at 5.00s, trace 4018. Next observer evidence: {'until': 17, 'shots': 40, 'casualties': 0, 'mean_displacement': 10.794927135339833, 'next_transition': 8531}.
<a id="trace-7973"></a>
- 7.95s–7.95s (×1), actor 0, squad 0 (trace 7973): contact cover complete: assessment resumes closure. Knowledge: actor memory at 5.00s, trace 4018. Next observer evidence: {'until': 17, 'shots': 40, 'casualties': 0, 'mean_displacement': 10.794927135339833, 'next_transition': 8531}.
<a id="trace-8531"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 8531): superiority established (8 s hysteresis). Knowledge: actor memory at 15.00s, trace 8431. Next observer evidence: {'until': 21.8, 'shots': 15, 'casualties': 0, 'mean_displacement': 1.6339440235037885, 'next_transition': 8921}.
<a id="trace-8921"></a>
- 21.95s–21.95s (×1), actor 0, squad 0 (trace 8921): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 20.00s, trace 8829. Next observer evidence: {'until': 33.8, 'shots': 44, 'casualties': 0, 'mean_displacement': 8.170778371142113, 'next_transition': 9748}.
<a id="trace-9748"></a>
- 33.90s–33.90s (×1), actor 0, squad 0 (trace 9748): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 9627. Next observer evidence: {'until': 40, 'shots': 8, 'casualties': 0, 'mean_displacement': 5.669321329203896, 'next_transition': None}.

## Net delivery

56 matched order/radio deliveries; 0 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.435s; maximum 0.800s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 4018: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 4019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 4020: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 4021: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 4022: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 4023: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 4024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 4025: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 4026: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 8236: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 8237: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 8238: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 8239: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 8240: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 8241: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 8242: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 8243: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 8244: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 8431: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 8432: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 8433: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 8434: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 8435: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 8436: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 8437: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 8438: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 8439: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 8829: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 8830: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 8831: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 8832: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 8833: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 8834: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 8835: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 8836: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 8837: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 9498: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 9499: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 9500: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 9501: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 9502: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 9503: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 9504: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 9505: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 9506: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 9627: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 9628: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 9629: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 9630: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 9631: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 9632: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 9633: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 9634: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 9635: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 9972: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 9973: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 9974: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 9975: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 9976: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 9977: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 9978: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 9979: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 9980: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 10131: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10132: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10133: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10134: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10135: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10136: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10137: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10139: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

No casualty events recorded; see missing-data limitations before interpreting this as zero casualties.

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
