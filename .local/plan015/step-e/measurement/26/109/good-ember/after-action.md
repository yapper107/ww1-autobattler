# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/109/good-ember/battle-109-1789674260927520391`

## Battle summary

**Ember** · 360 s · 335 shots.

### Turning points

- 15.5s, squad 4: contact (events line 171). First recorded contact.
- 19.9s, squad 1: withdrawal ([trace 4097](#trace-4097)). 67.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.9s, squad 1: help call ([trace 9951](#trace-9951)). No completion observed before termination.
- 39.5s, squad 0: help call ([trace 10068](#trace-10068)). 234.3s, squad 1: answered a neighbour with support by fire.
- 46.2s, squad 0: help call ([trace 13097](#trace-13097)). No completion observed before termination.
- 59.1s, squad 0: withdrawal ([trace 14307](#trace-14307)). 80.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 166.4s, squad 0: help call ([trace 20286](#trace-20286)). No completion observed before termination.
- 184.0s, squad 0: withdrawal ([trace 22719](#trace-22719)). 207.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 188.2s, squad 1: withdrawal ([trace 23110](#trace-23110)). 208.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 194.8s, squad 0: help call ([trace 23437](#trace-23437)). 234.3s, squad 1: answered a neighbour with support by fire.
- 8 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 33 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 16 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 259 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 27 shots, 0/2 lost.

### Decisions and attribution

At 188.2s, squad 1 chose broke contact ([trace 23110](#trace-23110)), followed by 0 shots and 1 own casualties; estimate 12.1 against 0 distinct squad-reported contacts; At 177.1s, squad 1 chose FightHere: nearest known group ([trace 22017](#trace-22017)), followed by 7 shots and 0 own casualties; estimate 7.3 against 0 distinct squad-reported contacts; At 171.4s, squad 1 chose took cover and returned fire ([trace 21353](#trace-21353)), followed by 2 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1324](#trace-1324)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.571345273573311, 'next_transition': 1349}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1326](#trace-1326)). Following evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.437092375126696, 'next_transition': 1932}.

### Communication

261 matched deliveries (mean 0.65s, max 5.85s); 255 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.50s, squad 4, contact, evidence events line 171: First recorded contact; .
- 19.90s, squad 1, withdrawal, evidence 4097: BreakContact: believed ratio at least two without superiority; 67.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.85s, squad 1, help call, evidence 9951: NeedSupport; No completion observed before termination.
- 39.55s, squad 0, help call, evidence 10068: NeedSupport; 234.3s, squad 1: answered a neighbour with support by fire.
- 46.15s, squad 0, help call, evidence 13097: NeedSupport; No completion observed before termination.
- 59.10s, squad 0, withdrawal, evidence 14307: BreakContact: believed ratio at least two without superiority; 80.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 166.35s, squad 0, help call, evidence 20286: NeedSupport; No completion observed before termination.
- 184.00s, squad 0, withdrawal, evidence 22719: BreakContact: believed ratio at least two without superiority; 207.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 188.20s, squad 1, withdrawal, evidence 23110: BreakContact: believed ratio at least two without superiority; 208.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 194.75s, squad 0, help call, evidence 23437: NeedSupport; 234.3s, squad 1: answered a neighbour with support by fire.
- 234.30s, squad 1, help answer, evidence 24555: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 239.9s, squad 1: advanced tactically.
- 251.10s, squad 0, help call, evidence 25978: NeedSupport; 252.9s, squad 1: answered a neighbour with support by fire.
- 252.95s, squad 1, help answer, evidence 26017: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 259.6s, squad 1: advanced tactically.
- 271.90s, squad 1, withdrawal, evidence 27641: BreakContact: believed ratio at least two without superiority; 303.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 279.90s, squad 0, withdrawal, evidence 27940: Withdraw to received rally; No completion observed before termination.
- 287.80s, squad 0, help call, evidence 28285: NeedSupport; 303.9s, squad 1: answered a neighbour with support by fire.
- 303.85s, squad 1, help answer, evidence 28723: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 310.1s, squad 1: Withdraw to received rally.
- 310.15s, squad 1, withdrawal, evidence 29737: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091406510156945, 'next_transition': 814}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091406510156945, 'next_transition': 814}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091406510156945, 'next_transition': 814}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1154}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1154}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1154}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-642"></a>
<a id="trace-644"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-684"></a>
<a id="trace-686"></a>
<a id="trace-706"></a>
<a id="trace-708"></a>
<a id="trace-734"></a>
<a id="trace-736"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-910"></a>
<a id="trace-912"></a>
<a id="trace-931"></a>
<a id="trace-933"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1019"></a>
<a id="trace-1021"></a>
<a id="trace-1044"></a>
<a id="trace-1046"></a>
<a id="trace-1061"></a>
<a id="trace-1063"></a>
<a id="trace-1150"></a>
<a id="trace-1152"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1353"></a>
<a id="trace-1355"></a>
<a id="trace-1388"></a>
<a id="trace-1390"></a>
<a id="trace-1411"></a>
<a id="trace-1413"></a>
<a id="trace-1720"></a>
<a id="trace-1722"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1781"></a>
<a id="trace-1783"></a>
<a id="trace-1801"></a>
<a id="trace-1803"></a>
<a id="trace-1887"></a>
<a id="trace-1889"></a>
<a id="trace-1929"></a>
<a id="trace-1931"></a>
<a id="trace-2727"></a>
<a id="trace-2729"></a>
<a id="trace-3145"></a>
<a id="trace-3147"></a>
<a id="trace-3493"></a>
<a id="trace-3495"></a>
<a id="trace-3554"></a>
<a id="trace-3556"></a>
<a id="trace-3629"></a>
<a id="trace-3631"></a>
<a id="trace-3670"></a>
<a id="trace-3672"></a>
<a id="trace-4046"></a>
<a id="trace-4048"></a>
<a id="trace-4087"></a>
<a id="trace-4089"></a>
<a id="trace-4680"></a>
<a id="trace-4682"></a>
<a id="trace-4729"></a>
<a id="trace-4731"></a>
<a id="trace-5104"></a>
<a id="trace-5106"></a>
<a id="trace-5164"></a>
<a id="trace-5166"></a>
<a id="trace-5234"></a>
<a id="trace-5236"></a>
<a id="trace-5278"></a>
<a id="trace-5280"></a>
<a id="trace-5321"></a>
<a id="trace-5323"></a>
<a id="trace-5360"></a>
<a id="trace-5362"></a>
<a id="trace-5766"></a>
<a id="trace-5768"></a>
<a id="trace-5805"></a>
<a id="trace-5807"></a>
<a id="trace-5913"></a>
<a id="trace-5915"></a>
<a id="trace-5930"></a>
<a id="trace-5932"></a>
<a id="trace-5965"></a>
<a id="trace-5967"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-6042"></a>
<a id="trace-6044"></a>
<a id="trace-6059"></a>
<a id="trace-6061"></a>
<a id="trace-6082"></a>
<a id="trace-6084"></a>
<a id="trace-6095"></a>
<a id="trace-6097"></a>
<a id="trace-6119"></a>
<a id="trace-6121"></a>
<a id="trace-6137"></a>
<a id="trace-6139"></a>
<a id="trace-6234"></a>
<a id="trace-6236"></a>
<a id="trace-9013"></a>
<a id="trace-9015"></a>
<a id="trace-9043"></a>
<a id="trace-9045"></a>
<a id="trace-9075"></a>
<a id="trace-9077"></a>
<a id="trace-9100"></a>
<a id="trace-9102"></a>
<a id="trace-9132"></a>
<a id="trace-9134"></a>
<a id="trace-9178"></a>
<a id="trace-9180"></a>
<a id="trace-9199"></a>
<a id="trace-9201"></a>
<a id="trace-9231"></a>
<a id="trace-9233"></a>
<a id="trace-9254"></a>
<a id="trace-9256"></a>
<a id="trace-9340"></a>
<a id="trace-9342"></a>
<a id="trace-9415"></a>
<a id="trace-9417"></a>
<a id="trace-9450"></a>
<a id="trace-9452"></a>
<a id="trace-9877"></a>
<a id="trace-9879"></a>
<a id="trace-9902"></a>
<a id="trace-9904"></a>
<a id="trace-9941"></a>
<a id="trace-9943"></a>
<a id="trace-9980"></a>
<a id="trace-9982"></a>
<a id="trace-10007"></a>
<a id="trace-10009"></a>
<a id="trace-10047"></a>
<a id="trace-10049"></a>
<a id="trace-10092"></a>
<a id="trace-10094"></a>
<a id="trace-10196"></a>
<a id="trace-10198"></a>
<a id="trace-10228"></a>
<a id="trace-10230"></a>
<a id="trace-10245"></a>
<a id="trace-10247"></a>
<a id="trace-10272"></a>
<a id="trace-10274"></a>
<a id="trace-10305"></a>
<a id="trace-10307"></a>
<a id="trace-10330"></a>
<a id="trace-10332"></a>
<a id="trace-10357"></a>
<a id="trace-10359"></a>
<a id="trace-10378"></a>
<a id="trace-10380"></a>
<a id="trace-10401"></a>
<a id="trace-10403"></a>
<a id="trace-10431"></a>
<a id="trace-10433"></a>
<a id="trace-10519"></a>
<a id="trace-10521"></a>
<a id="trace-10535"></a>
<a id="trace-10537"></a>
<a id="trace-13121"></a>
<a id="trace-13123"></a>
<a id="trace-13145"></a>
<a id="trace-13147"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13201"></a>
<a id="trace-13203"></a>
<a id="trace-13226"></a>
<a id="trace-13228"></a>
<a id="trace-13257"></a>
<a id="trace-13259"></a>
<a id="trace-13285"></a>
<a id="trace-13287"></a>
<a id="trace-13310"></a>
<a id="trace-13312"></a>
<a id="trace-13400"></a>
<a id="trace-13402"></a>
<a id="trace-13419"></a>
<a id="trace-13421"></a>
<a id="trace-13502"></a>
<a id="trace-13504"></a>
<a id="trace-13526"></a>
<a id="trace-13528"></a>
<a id="trace-13913"></a>
<a id="trace-13915"></a>
<a id="trace-13938"></a>
<a id="trace-13940"></a>
<a id="trace-13968"></a>
<a id="trace-13970"></a>
<a id="trace-13995"></a>
<a id="trace-13997"></a>
<a id="trace-14021"></a>
<a id="trace-14023"></a>
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14128"></a>
<a id="trace-14130"></a>
<a id="trace-14157"></a>
<a id="trace-14159"></a>
<a id="trace-14190"></a>
<a id="trace-14192"></a>
<a id="trace-14214"></a>
<a id="trace-14216"></a>
<a id="trace-14232"></a>
<a id="trace-14234"></a>
<a id="trace-14250"></a>
<a id="trace-14252"></a>
<a id="trace-14269"></a>
<a id="trace-14271"></a>
<a id="trace-14292"></a>
<a id="trace-14294"></a>
<a id="trace-14555"></a>
<a id="trace-14557"></a>
<a id="trace-14576"></a>
<a id="trace-14578"></a>
<a id="trace-14664"></a>
<a id="trace-14666"></a>
<a id="trace-14694"></a>
<a id="trace-14696"></a>
<a id="trace-14714"></a>
<a id="trace-14716"></a>
<a id="trace-14726"></a>
<a id="trace-14728"></a>
<a id="trace-14753"></a>
<a id="trace-14755"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14842"></a>
<a id="trace-14844"></a>
<a id="trace-14857"></a>
<a id="trace-14859"></a>
<a id="trace-14880"></a>
<a id="trace-14882"></a>
<a id="trace-14900"></a>
<a id="trace-14902"></a>
<a id="trace-14986"></a>
<a id="trace-14988"></a>
<a id="trace-15013"></a>
<a id="trace-15015"></a>
<a id="trace-15033"></a>
<a id="trace-15035"></a>
<a id="trace-15050"></a>
<a id="trace-15052"></a>
<a id="trace-15087"></a>
<a id="trace-15089"></a>
- 1.60s–67.75s (×264), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079367284588374, 'next_transition': 607}.
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-840"></a>
<a id="trace-842"></a>
<a id="trace-871"></a>
<a id="trace-873"></a>
<a id="trace-906"></a>
<a id="trace-908"></a>
<a id="trace-927"></a>
<a id="trace-929"></a>
<a id="trace-957"></a>
<a id="trace-959"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1015"></a>
<a id="trace-1017"></a>
<a id="trace-1146"></a>
<a id="trace-1148"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 814): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599855608914574, 'next_transition': 840}.
<a id="trace-1154"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1154): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1075. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4465565216479617, 'next_transition': 125}.
<a id="trace-1155"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1155): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1075. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4465565216479617, 'next_transition': 125}.
<a id="trace-124"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 124): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.571345273573311, 'next_transition': 1349}.
<a id="trace-125"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 125): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.437092375126696, 'next_transition': 1932}.
<a id="trace-1324"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1324): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1324. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.571345273573311, 'next_transition': 1349}.
<a id="trace-1325"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1325): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1325. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.571345273573311, 'next_transition': 1349}.
<a id="trace-1326"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1326): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1326. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.437092375126696, 'next_transition': 1932}.
<a id="trace-1327"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1327): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1327. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.437092375126696, 'next_transition': 1932}.
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1384"></a>
<a id="trace-1386"></a>
<a id="trace-1407"></a>
<a id="trace-1409"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1349): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1327. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35552656264457994, 'next_transition': 1384}.
<a id="trace-1417"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1417): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725011593834032, 'next_transition': 1716}.
<a id="trace-1418"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1418): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725011593834032, 'next_transition': 1716}.
<a id="trace-1716"></a>
<a id="trace-1718"></a>
<a id="trace-1777"></a>
<a id="trace-1779"></a>
<a id="trace-1883"></a>
<a id="trace-1885"></a>
<a id="trace-1925"></a>
<a id="trace-1927"></a>
<a id="trace-2723"></a>
<a id="trace-2725"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1716): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1327. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2206320460330933, 'next_transition': 1777}.
<a id="trace-1932"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1932): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1819. Next observer evidence: None.
<a id="trace-1933"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1933): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1819. Next observer evidence: None.
<a id="trace-1934"></a>
<a id="trace-2126"></a>
<a id="trace-2320"></a>
<a id="trace-2518"></a>
<a id="trace-2737"></a>
<a id="trace-2936"></a>
- 15.70s–16.55s (×6), actor 8, squad 1 (trace 1934): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1819. Next observer evidence: None.
<a id="trace-3148"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3148): received platoon directive. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1688406053213163, 'next_transition': 3489}.
<a id="trace-3489"></a>
<a id="trace-3491"></a>
<a id="trace-3666"></a>
<a id="trace-3668"></a>
- 17.25s–18.75s (×4), actor 5, squad 0 (trace 3489): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1816. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.094994000633039, 'next_transition': 3666}.
<a id="trace-3688"></a>
- 19.15s–19.15s (×1), actor 0, squad 0 (trace 3688): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19318066247089732, 'next_transition': 4042}.
<a id="trace-3689"></a>
- 19.15s–19.15s (×1), actor 0, squad 0 (trace 3689): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19318066247089732, 'next_transition': 4042}.
<a id="trace-3690"></a>
- 19.15s–19.15s (×1), actor 0, squad 0 (trace 3690): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19318066247089732, 'next_transition': 4042}.
<a id="trace-4042"></a>
<a id="trace-4044"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 4042): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1816. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8840460163047197, 'next_transition': 4329}.
<a id="trace-4097"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4097): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 1819. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.64170811429141, 'next_transition': 9348}.
<a id="trace-4098"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4098): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 1819. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.64170811429141, 'next_transition': 9348}.
<a id="trace-4329"></a>
- 20.15s–20.15s (×1), actor 0, squad 0 (trace 4329): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4256. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2185777617441612, 'next_transition': 4676}.
<a id="trace-4676"></a>
<a id="trace-4678"></a>
<a id="trace-4725"></a>
<a id="trace-4727"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 4676): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4261. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.312028193585297, 'next_transition': 4725}.
<a id="trace-4745"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 4745): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4256. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3691711002872877, 'next_transition': 5100}.
<a id="trace-5100"></a>
<a id="trace-5102"></a>
<a id="trace-5160"></a>
<a id="trace-5162"></a>
<a id="trace-5230"></a>
<a id="trace-5232"></a>
<a id="trace-5356"></a>
<a id="trace-5358"></a>
- 21.25s–23.75s (×8), actor 5, squad 0 (trace 5100): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4261. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46906659469976136, 'next_transition': 5160}.
<a id="trace-5378"></a>
- 23.95s–23.95s (×1), actor 0, squad 0 (trace 5378): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4256. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5762}.
<a id="trace-5762"></a>
<a id="trace-5764"></a>
<a id="trace-5801"></a>
<a id="trace-5803"></a>
<a id="trace-5926"></a>
<a id="trace-5928"></a>
<a id="trace-5961"></a>
<a id="trace-5963"></a>
<a id="trace-6038"></a>
<a id="trace-6040"></a>
<a id="trace-6055"></a>
<a id="trace-6057"></a>
- 24.25s–27.75s (×12), actor 5, squad 0 (trace 5762): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4261. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5801}.
<a id="trace-6064"></a>
- 27.75s–27.75s (×1), actor 0, squad 0 (trace 6064): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5815. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362545190077058, 'next_transition': 6078}.
<a id="trace-6078"></a>
<a id="trace-6080"></a>
<a id="trace-6091"></a>
<a id="trace-6093"></a>
<a id="trace-6115"></a>
<a id="trace-6117"></a>
<a id="trace-6133"></a>
<a id="trace-6135"></a>
<a id="trace-6230"></a>
<a id="trace-6232"></a>
- 28.25s–30.25s (×10), actor 5, squad 0 (trace 6078): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5820. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750301009524387, 'next_transition': 6091}.
<a id="trace-6240"></a>
- 30.35s–30.35s (×1), actor 0, squad 0 (trace 6240): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6147. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709013864408185, 'next_transition': 9009}.
<a id="trace-8743"></a>
- 30.35s–30.35s (×1), actor 0, squad 0 (trace 8743): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 6147. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709013864408185, 'next_transition': 9009}.
<a id="trace-8744"></a>
- 30.35s–30.35s (×1), actor 0, squad 0 (trace 8744): MoveTactically. Knowledge: actor memory at 30.00s, trace 6147. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709013864408185, 'next_transition': 9009}.
<a id="trace-8745"></a>
- 30.35s–30.35s (×1), actor 0, squad 0 (trace 8745): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 6147. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709013864408185, 'next_transition': 9009}.
<a id="trace-9009"></a>
<a id="trace-9011"></a>
<a id="trace-9039"></a>
<a id="trace-9041"></a>
<a id="trace-9071"></a>
<a id="trace-9073"></a>
<a id="trace-9128"></a>
<a id="trace-9130"></a>
<a id="trace-9195"></a>
<a id="trace-9197"></a>
<a id="trace-9227"></a>
<a id="trace-9229"></a>
<a id="trace-9411"></a>
<a id="trace-9413"></a>
<a id="trace-9446"></a>
<a id="trace-9448"></a>
- 30.75s–36.25s (×16), actor 5, squad 0 (trace 9009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6152. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4063439787630123, 'next_transition': 9039}.
<a id="trace-9348"></a>
- 35.30s–35.30s (×1), actor 8, squad 1 (trace 9348): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 9275. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.934445470840033, 'next_transition': 9951}.
<a id="trace-9349"></a>
- 35.30s–35.30s (×1), actor 8, squad 1 (trace 9349): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 9275. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.934445470840033, 'next_transition': 9951}.
<a id="trace-9462"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 9462): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 9267. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5633479528877514, 'next_transition': 9898}.
<a id="trace-9463"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 9463): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 9267. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5633479528877514, 'next_transition': 9898}.
<a id="trace-9898"></a>
<a id="trace-9900"></a>
<a id="trace-9976"></a>
<a id="trace-9978"></a>
<a id="trace-10003"></a>
<a id="trace-10005"></a>
- 37.25s–38.75s (×6), actor 5, squad 0 (trace 9898): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 9272. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0698366476729406, 'next_transition': 9976}.
<a id="trace-9951"></a>
- 37.85s–37.85s (×1), actor 8, squad 1 (trace 9951): NeedSupport. Knowledge: actor memory at 35.00s, trace 9275. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.313177192778777, 'next_transition': 13433}.
<a id="trace-669"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 669): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10016"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10016): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.928362 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10016. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7228906753473457, 'next_transition': 10043}.
<a id="trace-10017"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 10017): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.928362 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 10017. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7228906753473457, 'next_transition': 10043}.
<a id="trace-10043"></a>
<a id="trace-10045"></a>
- 39.25s–39.25s (×2), actor 5, squad 0 (trace 10043): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 10017. Next observer evidence: {'until': 39.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.34819456321591385, 'next_transition': 10068}.
<a id="trace-10068"></a>
- 39.55s–39.55s (×1), actor 0, squad 0 (trace 10068): NeedSupport. Knowledge: actor memory at 35.00s, trace 9267. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34896963175970985, 'next_transition': 10088}.
<a id="trace-10088"></a>
<a id="trace-10090"></a>
- 39.75s–39.75s (×2), actor 5, squad 0 (trace 10088): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 10017. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7002061939162328, 'next_transition': 10128}.
<a id="trace-10128"></a>
- 40.05s–40.05s (×1), actor 0, squad 0 (trace 10128): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 10106. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.940950657619566, 'next_transition': 10224}.
<a id="trace-10224"></a>
<a id="trace-10226"></a>
<a id="trace-10268"></a>
<a id="trace-10270"></a>
<a id="trace-10301"></a>
<a id="trace-10303"></a>
<a id="trace-10326"></a>
<a id="trace-10328"></a>
<a id="trace-10353"></a>
<a id="trace-10355"></a>
<a id="trace-10374"></a>
<a id="trace-10376"></a>
<a id="trace-10397"></a>
<a id="trace-10399"></a>
<a id="trace-10427"></a>
<a id="trace-10429"></a>
- 40.75s–44.75s (×16), actor 5, squad 0 (trace 10224): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10111. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.892847290478935, 'next_transition': 10268}.
<a id="trace-10511"></a>
- 45.15s–45.15s (×1), actor 0, squad 0 (trace 10511): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1156911408118, 'next_transition': 10548}.
<a id="trace-10548"></a>
- 46.15s–46.15s (×1), actor 0, squad 0 (trace 10548): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16422353678541607, 'next_transition': 13117}.
<a id="trace-12758"></a>
- 46.15s–46.15s (×1), actor 0, squad 0 (trace 12758): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16422353678541607, 'next_transition': 13117}.
<a id="trace-12759"></a>
- 46.15s–46.15s (×1), actor 0, squad 0 (trace 12759): MoveTactically. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16422353678541607, 'next_transition': 13117}.
<a id="trace-12760"></a>
- 46.15s–46.15s (×1), actor 0, squad 0 (trace 12760): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16422353678541607, 'next_transition': 13117}.
<a id="trace-13097"></a>
- 46.15s–46.15s (×1), actor 0, squad 0 (trace 13097): NeedSupport. Knowledge: actor memory at 45.00s, trace 10441. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16422353678541607, 'next_transition': 13117}.
<a id="trace-13117"></a>
<a id="trace-13119"></a>
<a id="trace-13141"></a>
<a id="trace-13143"></a>
<a id="trace-13197"></a>
<a id="trace-13199"></a>
<a id="trace-13222"></a>
<a id="trace-13224"></a>
<a id="trace-13253"></a>
<a id="trace-13255"></a>
<a id="trace-13396"></a>
<a id="trace-13398"></a>
- 46.25s–50.25s (×12), actor 5, squad 0 (trace 13117): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10445. Next observer evidence: {'until': 46.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.35580204501753077, 'next_transition': 13141}.
<a id="trace-13433"></a>
- 51.10s–51.10s (×1), actor 8, squad 1 (trace 13433): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 13325. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999989549480524, 'next_transition': 14780}.
<a id="trace-13434"></a>
- 51.10s–51.10s (×1), actor 8, squad 1 (trace 13434): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 13325. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999989549480524, 'next_transition': 14780}.
<a id="trace-13490"></a>
- 51.15s–51.15s (×1), actor 0, squad 0 (trace 13490): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 13319. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5190492207845395, 'next_transition': 13522}.
<a id="trace-13522"></a>
<a id="trace-13524"></a>
- 51.75s–51.75s (×2), actor 5, squad 0 (trace 13522): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 13323. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052499999999999915, 'next_transition': 13541}.
<a id="trace-13541"></a>
- 52.15s–52.15s (×1), actor 0, squad 0 (trace 13541): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 13319. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16470465593785885, 'next_transition': 13934}.
<a id="trace-13546"></a>
- 52.15s–52.15s (×1), actor 0, squad 0 (trace 13546): MoveTactically. Knowledge: actor memory at 50.00s, trace 13319. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16470465593785885, 'next_transition': 13934}.
<a id="trace-13547"></a>
- 52.15s–52.15s (×1), actor 0, squad 0 (trace 13547): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 13319. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16470465593785885, 'next_transition': 13934}.
<a id="trace-13934"></a>
<a id="trace-13936"></a>
<a id="trace-13964"></a>
<a id="trace-13966"></a>
<a id="trace-14124"></a>
<a id="trace-14126"></a>
<a id="trace-14153"></a>
<a id="trace-14155"></a>
<a id="trace-14186"></a>
<a id="trace-14188"></a>
<a id="trace-14228"></a>
<a id="trace-14230"></a>
<a id="trace-14265"></a>
<a id="trace-14267"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
- 52.75s–58.75s (×16), actor 5, squad 0 (trace 13934): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 13323. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9545331656915194, 'next_transition': 13964}.
<a id="trace-14307"></a>
- 59.10s–59.10s (×1), actor 1, squad 0 (trace 14307): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 14051. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08526006300724862, 'next_transition': 14551}.
<a id="trace-14308"></a>
- 59.10s–59.10s (×1), actor 1, squad 0 (trace 14308): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 14051. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08526006300724862, 'next_transition': 14551}.
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14572"></a>
<a id="trace-14574"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14710"></a>
<a id="trace-14712"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
<a id="trace-14855"></a>
<a id="trace-14878"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-15009"></a>
<a id="trace-15011"></a>
<a id="trace-15029"></a>
<a id="trace-15031"></a>
<a id="trace-15072"></a>
<a id="trace-15074"></a>
<a id="trace-15083"></a>
<a id="trace-15085"></a>
<a id="trace-15107"></a>
<a id="trace-15109"></a>
<a id="trace-15141"></a>
<a id="trace-15143"></a>
<a id="trace-15160"></a>
<a id="trace-15162"></a>
<a id="trace-15230"></a>
<a id="trace-15232"></a>
<a id="trace-15245"></a>
<a id="trace-15247"></a>
<a id="trace-15261"></a>
<a id="trace-15263"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15285"></a>
<a id="trace-15287"></a>
<a id="trace-15304"></a>
<a id="trace-15306"></a>
<a id="trace-15321"></a>
<a id="trace-15400"></a>
<a id="trace-15402"></a>
- 59.25s–75.25s (×43), actor 5, squad 0 (trace 14551): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 14054. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17419225851914316, 'next_transition': 14572}.
<a id="trace-14780"></a>
- 63.10s–63.10s (×1), actor 8, squad 1 (trace 14780): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 14589. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.025684076327896, 'next_transition': 15062}.
<a id="trace-14781"></a>
- 63.10s–63.10s (×1), actor 8, squad 1 (trace 14781): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 14589. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.025684076327896, 'next_transition': 15062}.
<a id="trace-15062"></a>
- 67.20s–67.20s (×1), actor 8, squad 1 (trace 15062): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 14920. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056717722318513464, 'next_transition': 1115}.
<a id="trace-15257"></a>
<a id="trace-15259"></a>
<a id="trace-15281"></a>
<a id="trace-15283"></a>
<a id="trace-15308"></a>
<a id="trace-15310"></a>
<a id="trace-15325"></a>
<a id="trace-15404"></a>
<a id="trace-15406"></a>
<a id="trace-15550"></a>
<a id="trace-15552"></a>
<a id="trace-15567"></a>
<a id="trace-15569"></a>
<a id="trace-15596"></a>
<a id="trace-15598"></a>
<a id="trace-15623"></a>
<a id="trace-15625"></a>
<a id="trace-15697"></a>
<a id="trace-15699"></a>
<a id="trace-15731"></a>
<a id="trace-15756"></a>
<a id="trace-15758"></a>
<a id="trace-15788"></a>
<a id="trace-15790"></a>
<a id="trace-15813"></a>
<a id="trace-15815"></a>
<a id="trace-15892"></a>
<a id="trace-15894"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16054"></a>
<a id="trace-16056"></a>
<a id="trace-16191"></a>
<a id="trace-16193"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16236"></a>
<a id="trace-16238"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
<a id="trace-16290"></a>
<a id="trace-16292"></a>
<a id="trace-16366"></a>
<a id="trace-16368"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
<a id="trace-16396"></a>
<a id="trace-16398"></a>
<a id="trace-16414"></a>
<a id="trace-16416"></a>
<a id="trace-16435"></a>
<a id="trace-16437"></a>
<a id="trace-16580"></a>
<a id="trace-16582"></a>
<a id="trace-16611"></a>
<a id="trace-16613"></a>
<a id="trace-16636"></a>
<a id="trace-16638"></a>
<a id="trace-16653"></a>
<a id="trace-16655"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16746"></a>
<a id="trace-16748"></a>
<a id="trace-16775"></a>
<a id="trace-16777"></a>
<a id="trace-16799"></a>
<a id="trace-16801"></a>
<a id="trace-16822"></a>
<a id="trace-16824"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16911"></a>
<a id="trace-16913"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-17221"></a>
<a id="trace-17223"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17508"></a>
<a id="trace-17510"></a>
<a id="trace-17599"></a>
<a id="trace-17601"></a>
<a id="trace-17618"></a>
<a id="trace-17643"></a>
<a id="trace-17663"></a>
<a id="trace-17665"></a>
<a id="trace-17682"></a>
<a id="trace-17684"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17796"></a>
<a id="trace-17798"></a>
<a id="trace-17822"></a>
<a id="trace-17824"></a>
<a id="trace-17846"></a>
<a id="trace-18233"></a>
<a id="trace-18235"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18364"></a>
<a id="trace-18493"></a>
<a id="trace-18495"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18621"></a>
<a id="trace-18623"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18696"></a>
<a id="trace-18698"></a>
<a id="trace-18771"></a>
<a id="trace-18773"></a>
<a id="trace-18801"></a>
<a id="trace-18803"></a>
<a id="trace-18815"></a>
<a id="trace-18817"></a>
<a id="trace-18838"></a>
<a id="trace-18840"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18936"></a>
<a id="trace-18938"></a>
<a id="trace-19058"></a>
<a id="trace-19060"></a>
<a id="trace-19262"></a>
<a id="trace-19264"></a>
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19396"></a>
<a id="trace-19398"></a>
<a id="trace-19418"></a>
<a id="trace-19420"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19454"></a>
<a id="trace-19456"></a>
<a id="trace-19468"></a>
<a id="trace-19470"></a>
<a id="trace-19554"></a>
<a id="trace-19556"></a>
<a id="trace-19574"></a>
<a id="trace-19576"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19620"></a>
<a id="trace-19631"></a>
<a id="trace-19633"></a>
<a id="trace-19748"></a>
<a id="trace-19750"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19909"></a>
<a id="trace-19911"></a>
<a id="trace-19940"></a>
<a id="trace-19942"></a>
<a id="trace-19963"></a>
<a id="trace-19965"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-20076"></a>
<a id="trace-20078"></a>
<a id="trace-20096"></a>
<a id="trace-20098"></a>
<a id="trace-20127"></a>
<a id="trace-20129"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20489"></a>
<a id="trace-20491"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20762"></a>
<a id="trace-20764"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21347"></a>
<a id="trace-21349"></a>
<a id="trace-21556"></a>
<a id="trace-21558"></a>
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21981"></a>
<a id="trace-21983"></a>
<a id="trace-22034"></a>
<a id="trace-22036"></a>
<a id="trace-22098"></a>
<a id="trace-22100"></a>
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22290"></a>
<a id="trace-22292"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22690"></a>
<a id="trace-22692"></a>
<a id="trace-22786"></a>
<a id="trace-22788"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23060"></a>
<a id="trace-23062"></a>
<a id="trace-23092"></a>
<a id="trace-23094"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23347"></a>
<a id="trace-23349"></a>
<a id="trace-23376"></a>
<a id="trace-23378"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23411"></a>
<a id="trace-23413"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23507"></a>
<a id="trace-23509"></a>
<a id="trace-23524"></a>
<a id="trace-23526"></a>
<a id="trace-23541"></a>
<a id="trace-23543"></a>
<a id="trace-23558"></a>
<a id="trace-23560"></a>
<a id="trace-23573"></a>
<a id="trace-23575"></a>
<a id="trace-23646"></a>
<a id="trace-23648"></a>
<a id="trace-23662"></a>
<a id="trace-23664"></a>
<a id="trace-23680"></a>
<a id="trace-23682"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23786"></a>
<a id="trace-23788"></a>
<a id="trace-23803"></a>
<a id="trace-23805"></a>
<a id="trace-23822"></a>
<a id="trace-23824"></a>
<a id="trace-23846"></a>
<a id="trace-23863"></a>
<a id="trace-23865"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-23955"></a>
<a id="trace-23957"></a>
<a id="trace-23970"></a>
<a id="trace-23972"></a>
<a id="trace-23988"></a>
<a id="trace-23990"></a>
<a id="trace-24003"></a>
<a id="trace-24005"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24088"></a>
<a id="trace-24090"></a>
<a id="trace-24106"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24141"></a>
<a id="trace-24143"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24237"></a>
<a id="trace-24239"></a>
<a id="trace-24253"></a>
<a id="trace-24255"></a>
<a id="trace-24272"></a>
<a id="trace-24274"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24388"></a>
<a id="trace-24390"></a>
<a id="trace-24405"></a>
<a id="trace-24407"></a>
<a id="trace-24417"></a>
<a id="trace-24419"></a>
<a id="trace-24485"></a>
<a id="trace-24487"></a>
<a id="trace-24500"></a>
<a id="trace-24502"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24540"></a>
<a id="trace-24542"></a>
<a id="trace-24553"></a>
<a id="trace-25452"></a>
<a id="trace-25454"></a>
<a id="trace-25474"></a>
<a id="trace-25476"></a>
<a id="trace-25494"></a>
<a id="trace-25496"></a>
<a id="trace-25515"></a>
<a id="trace-25517"></a>
<a id="trace-25529"></a>
<a id="trace-25531"></a>
<a id="trace-25681"></a>
<a id="trace-25683"></a>
<a id="trace-25703"></a>
<a id="trace-25722"></a>
<a id="trace-25724"></a>
<a id="trace-25740"></a>
<a id="trace-25752"></a>
<a id="trace-25754"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25838"></a>
<a id="trace-25840"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25872"></a>
<a id="trace-25874"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-25989"></a>
<a id="trace-25991"></a>
<a id="trace-26005"></a>
<a id="trace-26007"></a>
<a id="trace-26839"></a>
<a id="trace-26841"></a>
<a id="trace-26863"></a>
<a id="trace-26865"></a>
<a id="trace-26943"></a>
<a id="trace-26945"></a>
<a id="trace-26969"></a>
<a id="trace-26971"></a>
<a id="trace-26989"></a>
<a id="trace-26991"></a>
<a id="trace-27009"></a>
<a id="trace-27011"></a>
<a id="trace-27024"></a>
<a id="trace-27093"></a>
<a id="trace-27095"></a>
<a id="trace-27111"></a>
<a id="trace-27113"></a>
<a id="trace-27141"></a>
<a id="trace-27143"></a>
<a id="trace-27161"></a>
<a id="trace-27163"></a>
<a id="trace-27179"></a>
<a id="trace-27181"></a>
<a id="trace-27252"></a>
<a id="trace-27254"></a>
<a id="trace-27273"></a>
<a id="trace-27275"></a>
<a id="trace-27298"></a>
<a id="trace-27300"></a>
<a id="trace-27343"></a>
<a id="trace-27345"></a>
<a id="trace-27478"></a>
<a id="trace-27480"></a>
<a id="trace-27577"></a>
<a id="trace-27579"></a>
<a id="trace-27619"></a>
<a id="trace-27621"></a>
<a id="trace-27712"></a>
<a id="trace-27714"></a>
<a id="trace-27742"></a>
<a id="trace-27744"></a>
<a id="trace-27768"></a>
<a id="trace-27770"></a>
<a id="trace-27844"></a>
<a id="trace-27846"></a>
<a id="trace-27867"></a>
<a id="trace-27869"></a>
<a id="trace-27885"></a>
<a id="trace-27887"></a>
<a id="trace-27907"></a>
<a id="trace-27909"></a>
<a id="trace-27927"></a>
<a id="trace-27929"></a>
<a id="trace-28055"></a>
<a id="trace-28057"></a>
<a id="trace-28082"></a>
<a id="trace-28084"></a>
<a id="trace-28107"></a>
<a id="trace-28109"></a>
<a id="trace-28134"></a>
<a id="trace-28136"></a>
<a id="trace-28158"></a>
<a id="trace-28160"></a>
<a id="trace-28239"></a>
<a id="trace-28241"></a>
<a id="trace-28261"></a>
<a id="trace-28263"></a>
<a id="trace-28280"></a>
<a id="trace-28282"></a>
<a id="trace-28304"></a>
<a id="trace-28306"></a>
<a id="trace-28318"></a>
<a id="trace-28320"></a>
<a id="trace-28389"></a>
<a id="trace-28391"></a>
<a id="trace-28407"></a>
<a id="trace-28409"></a>
<a id="trace-28425"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28455"></a>
<a id="trace-28457"></a>
<a id="trace-28530"></a>
<a id="trace-28532"></a>
<a id="trace-28545"></a>
<a id="trace-28557"></a>
<a id="trace-28575"></a>
<a id="trace-28577"></a>
<a id="trace-28589"></a>
<a id="trace-28591"></a>
<a id="trace-28661"></a>
<a id="trace-28663"></a>
<a id="trace-28681"></a>
<a id="trace-28683"></a>
<a id="trace-28698"></a>
<a id="trace-28700"></a>
<a id="trace-28718"></a>
<a id="trace-29550"></a>
<a id="trace-29552"></a>
<a id="trace-29627"></a>
<a id="trace-29629"></a>
<a id="trace-29652"></a>
<a id="trace-29654"></a>
<a id="trace-29673"></a>
<a id="trace-29675"></a>
<a id="trace-29695"></a>
<a id="trace-29697"></a>
<a id="trace-29716"></a>
<a id="trace-29718"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29889"></a>
<a id="trace-29903"></a>
<a id="trace-29905"></a>
<a id="trace-29926"></a>
<a id="trace-29928"></a>
<a id="trace-30002"></a>
<a id="trace-30004"></a>
<a id="trace-30022"></a>
<a id="trace-30024"></a>
<a id="trace-30035"></a>
<a id="trace-30037"></a>
<a id="trace-30050"></a>
<a id="trace-30064"></a>
<a id="trace-30066"></a>
<a id="trace-30134"></a>
<a id="trace-30136"></a>
<a id="trace-30161"></a>
<a id="trace-30163"></a>
<a id="trace-30179"></a>
<a id="trace-30181"></a>
<a id="trace-30198"></a>
<a id="trace-30200"></a>
<a id="trace-30211"></a>
<a id="trace-30213"></a>
<a id="trace-30280"></a>
<a id="trace-30282"></a>
<a id="trace-30297"></a>
<a id="trace-30299"></a>
<a id="trace-30317"></a>
<a id="trace-30319"></a>
<a id="trace-30343"></a>
<a id="trace-30355"></a>
<a id="trace-30357"></a>
<a id="trace-30429"></a>
<a id="trace-30444"></a>
<a id="trace-30446"></a>
<a id="trace-30457"></a>
<a id="trace-30459"></a>
<a id="trace-30475"></a>
<a id="trace-30495"></a>
<a id="trace-30497"></a>
<a id="trace-30567"></a>
<a id="trace-30589"></a>
<a id="trace-30591"></a>
<a id="trace-30606"></a>
<a id="trace-30619"></a>
<a id="trace-30621"></a>
<a id="trace-30636"></a>
<a id="trace-30638"></a>
<a id="trace-30709"></a>
<a id="trace-30711"></a>
<a id="trace-30729"></a>
<a id="trace-30731"></a>
<a id="trace-30746"></a>
<a id="trace-30748"></a>
<a id="trace-30768"></a>
<a id="trace-30770"></a>
<a id="trace-30785"></a>
<a id="trace-30852"></a>
<a id="trace-30854"></a>
<a id="trace-30869"></a>
<a id="trace-30871"></a>
<a id="trace-30887"></a>
<a id="trace-30889"></a>
<a id="trace-30909"></a>
<a id="trace-30911"></a>
<a id="trace-30928"></a>
<a id="trace-30997"></a>
<a id="trace-30999"></a>
<a id="trace-31017"></a>
<a id="trace-31019"></a>
<a id="trace-31031"></a>
<a id="trace-31033"></a>
<a id="trace-31047"></a>
<a id="trace-31049"></a>
<a id="trace-31068"></a>
<a id="trace-31070"></a>
<a id="trace-31140"></a>
<a id="trace-31142"></a>
<a id="trace-31159"></a>
<a id="trace-31161"></a>
<a id="trace-31177"></a>
<a id="trace-31179"></a>
<a id="trace-31193"></a>
<a id="trace-31195"></a>
<a id="trace-31207"></a>
<a id="trace-31209"></a>
- 71.25s–359.30s (×552), actor 38, squad 4 (trace 15257): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 70.00s, trace 15177. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15281}.
<a id="trace-15419"></a>
- 76.15s–76.15s (×1), actor 1, squad 0 (trace 15419): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 15338. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15546}.
<a id="trace-15440"></a>
- 76.15s–76.15s (×1), actor 1, squad 0 (trace 15440): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 15338. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15546}.
<a id="trace-15546"></a>
<a id="trace-15548"></a>
<a id="trace-15565"></a>
<a id="trace-15592"></a>
<a id="trace-15594"></a>
<a id="trace-15619"></a>
<a id="trace-15621"></a>
- 76.25s–79.25s (×7), actor 5, squad 0 (trace 15546): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 15341. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39375636026609145, 'next_transition': 15565}.
<a id="trace-15700"></a>
- 80.25s–80.25s (×1), actor 1, squad 0 (trace 15700): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 15632. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9687200273978305, 'next_transition': 15727}.
<a id="trace-1115"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1115): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15705"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 15705): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.977496 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 15705. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15898}.
<a id="trace-15706"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 15706): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.977496 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 15706. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15898}.
<a id="trace-15727"></a>
<a id="trace-15729"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15785"></a>
<a id="trace-15810"></a>
<a id="trace-15889"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16033"></a>
<a id="trace-16035"></a>
<a id="trace-16052"></a>
<a id="trace-16187"></a>
<a id="trace-16189"></a>
<a id="trace-16210"></a>
<a id="trace-16234"></a>
- 81.25s–92.25s (×18), actor 5, squad 0 (trace 15727): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 15706. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899914021763093, 'next_transition': 15752}.
<a id="trace-15898"></a>
- 85.50s–85.50s (×1), actor 8, squad 1 (trace 15898): MoveTactically. Knowledge: actor memory at 85.00s, trace 15826. Next observer evidence: None.
<a id="trace-15899"></a>
- 85.50s–85.50s (×1), actor 8, squad 1 (trace 15899): received platoon directive. Knowledge: actor memory at 85.00s, trace 15826. Next observer evidence: None.
<a id="trace-15905"></a>
- 85.55s–85.55s (×1), actor 8, squad 1 (trace 15905): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 15826. Next observer evidence: {'until': 89.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6275894061905865, 'next_transition': 16061}.
<a id="trace-16061"></a>
- 89.50s–89.50s (×1), actor 8, squad 1 (trace 16061): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 15826. Next observer evidence: None.
<a id="trace-16066"></a>
- 89.55s–89.55s (×1), actor 8, squad 1 (trace 16066): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 15826. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.855320741684931, 'next_transition': 16452}.
<a id="trace-1221"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (events line 1221): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16281"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 16281): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.023013 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 16281. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16286}.
<a id="trace-16282"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 16282): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.023013 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 16282. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16286}.
<a id="trace-16286"></a>
<a id="trace-16288"></a>
<a id="trace-16363"></a>
<a id="trace-16381"></a>
<a id="trace-16393"></a>
<a id="trace-16410"></a>
<a id="trace-16412"></a>
<a id="trace-16432"></a>
<a id="trace-16577"></a>
<a id="trace-16607"></a>
<a id="trace-16609"></a>
<a id="trace-16632"></a>
<a id="trace-16634"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16664"></a>
<a id="trace-16666"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16771"></a>
<a id="trace-16773"></a>
<a id="trace-16797"></a>
- 94.25s–107.25s (×22), actor 5, squad 0 (trace 16286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.15s, trace 16282. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16363}.
<a id="trace-16452"></a>
- 99.70s–99.70s (×1), actor 8, squad 1 (trace 16452): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 16304. Next observer evidence: None.
<a id="trace-16455"></a>
- 99.75s–99.75s (×1), actor 8, squad 1 (trace 16455): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 16304. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.3548907204605, 'next_transition': 16944}.
<a id="trace-1306"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 1306): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16819}.
<a id="trace-16811"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 16811): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.072786 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 16811. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16819}.
<a id="trace-16812"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 16812): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.072786 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 16812. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16819}.
<a id="trace-16819"></a>
<a id="trace-16907"></a>
<a id="trace-16909"></a>
<a id="trace-16930"></a>
<a id="trace-16932"></a>
<a id="trace-17217"></a>
<a id="trace-17219"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
- 108.25s–113.25s (×9), actor 5, squad 0 (trace 16819): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 16812. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16907}.
<a id="trace-16944"></a>
- 111.70s–111.70s (×1), actor 8, squad 1 (trace 16944): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: None.
<a id="trace-17003"></a>
- 111.75s–111.75s (×1), actor 8, squad 1 (trace 17003): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: {'until': 111.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17107}.
<a id="trace-17102"></a>
- 111.75s–111.75s (×1), actor 8, squad 1 (trace 17102): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: {'until': 111.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17107}.
<a id="trace-17107"></a>
- 111.80s–111.80s (×1), actor 8, squad 1 (trace 17107): recovering: retry accepted element corridor in column. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: None.
<a id="trace-17206"></a>
- 111.80s–111.80s (×1), actor 8, squad 1 (trace 17206): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: None.
<a id="trace-17210"></a>
- 111.85s–111.85s (×1), actor 8, squad 1 (trace 17210): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 110.00s, trace 16849. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1409}.
<a id="trace-17274"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 17274): MoveTactically. Knowledge: actor memory at 110.00s, trace 16845. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17504}.
<a id="trace-17275"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 17275): received platoon directive. Knowledge: actor memory at 110.00s, trace 16845. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17504}.
<a id="trace-17504"></a>
<a id="trace-17506"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17613"></a>
<a id="trace-17615"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17678"></a>
<a id="trace-17680"></a>
<a id="trace-17769"></a>
<a id="trace-17771"></a>
<a id="trace-17792"></a>
<a id="trace-17794"></a>
<a id="trace-17818"></a>
<a id="trace-17820"></a>
<a id="trace-17842"></a>
<a id="trace-17844"></a>
- 114.25s–123.25s (×20), actor 5, squad 0 (trace 17504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 16848. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.255146875593255, 'next_transition': 17595}.
<a id="trace-1409"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (events line 1409): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18381}.
<a id="trace-17804"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 17804): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.127859 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 17804. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18381}.
<a id="trace-17805"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 17805): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.127859 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 17805. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18381}.
<a id="trace-17850"></a>
- 123.45s–123.45s (×1), actor 1, squad 0 (trace 17850): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 17697. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18037}.
<a id="trace-18026"></a>
- 123.45s–123.45s (×1), actor 1, squad 0 (trace 18026): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 120.00s, trace 17697. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18037}.
<a id="trace-18037"></a>
- 123.70s–123.70s (×1), actor 1, squad 0 (trace 18037): recovering: retry accepted element corridor in column. Knowledge: actor memory at 120.00s, trace 17697. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18229}.
<a id="trace-18213"></a>
- 123.70s–123.70s (×1), actor 1, squad 0 (trace 18213): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 120.00s, trace 17697. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18229}.
<a id="trace-18229"></a>
<a id="trace-18231"></a>
- 124.25s–124.25s (×2), actor 5, squad 0 (trace 18229): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 17805. Next observer evidence: {'until': 124.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18239}.
<a id="trace-18239"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 18239): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 120.00s, trace 17697. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4084855849659815, 'next_transition': 18330}.
<a id="trace-18330"></a>
<a id="trace-18332"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18490"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18537"></a>
<a id="trace-18539"></a>
<a id="trace-18619"></a>
<a id="trace-18634"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18680"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
- 125.25s–134.30s (×16), actor 5, squad 0 (trace 18330): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 18268. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18359}.
<a id="trace-18381"></a>
- 127.00s–127.00s (×1), actor 8, squad 1 (trace 18381): received platoon directive. Knowledge: actor memory at 125.00s, trace 18269. Next observer evidence: None.
<a id="trace-18480"></a>
- 127.00s–127.00s (×1), actor 8, squad 1 (trace 18480): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 125.00s, trace 18269. Next observer evidence: None.
<a id="trace-18484"></a>
- 127.05s–127.05s (×1), actor 8, squad 1 (trace 18484): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 125.00s, trace 18269. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1508}.
<a id="trace-1507"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (events line 1507): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1508"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (events line 1508): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18779"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (trace 18779): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.188660 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 18779. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18799}.
<a id="trace-18780"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (trace 18780): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.188660 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 18780. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18799}.
<a id="trace-18781"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 18781): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.188660 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 18781. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18944}.
<a id="trace-18782"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 18782): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.188660 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 18782. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18944}.
<a id="trace-18799"></a>
<a id="trace-18811"></a>
<a id="trace-18813"></a>
<a id="trace-18834"></a>
<a id="trace-18836"></a>
<a id="trace-18852"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-19054"></a>
<a id="trace-19056"></a>
- 136.30s–141.30s (×10), actor 5, squad 0 (trace 18799): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.60s, trace 18782. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18811}.
<a id="trace-18944"></a>
- 140.80s–140.80s (×1), actor 8, squad 1 (trace 18944): received platoon directive. Knowledge: actor memory at 140.00s, trace 18872. Next observer evidence: None.
<a id="trace-19043"></a>
- 140.80s–140.80s (×1), actor 8, squad 1 (trace 19043): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 140.00s, trace 18872. Next observer evidence: None.
<a id="trace-19047"></a>
- 140.85s–140.85s (×1), actor 8, squad 1 (trace 19047): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 140.00s, trace 18872. Next observer evidence: {'until': 149.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1598}.
<a id="trace-19063"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 19063): received platoon directive. Knowledge: actor memory at 140.00s, trace 18868. Next observer evidence: {'until': 142.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19266}.
<a id="trace-19239"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 19239): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 140.00s, trace 18868. Next observer evidence: {'until': 142.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19266}.
<a id="trace-19266"></a>
- 142.50s–142.50s (×1), actor 1, squad 0 (trace 19266): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 140.00s, trace 18868. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19297}.
<a id="trace-19297"></a>
<a id="trace-19317"></a>
<a id="trace-19393"></a>
<a id="trace-19416"></a>
<a id="trace-19464"></a>
<a id="trace-19466"></a>
- 143.30s–149.30s (×6), actor 5, squad 0 (trace 19297): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 18871. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19317}.
<a id="trace-1597"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (events line 1597): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1598"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (events line 1598): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19471"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 19471): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.859782 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 19471. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19552}.
<a id="trace-19472"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 19472): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.859782 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 19472. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19552}.
<a id="trace-19473"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (trace 19473): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.859782 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 19473. Next observer evidence: {'until': 154.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19635}.
<a id="trace-19474"></a>
- 149.40s–149.40s (×1), actor 5, squad 1 (trace 19474): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.859782 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 19474. Next observer evidence: {'until': 154.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19635}.
<a id="trace-19552"></a>
<a id="trace-19570"></a>
<a id="trace-19572"></a>
<a id="trace-19587"></a>
<a id="trace-19589"></a>
<a id="trace-19617"></a>
<a id="trace-19629"></a>
- 150.30s–154.30s (×7), actor 5, squad 0 (trace 19552): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19485. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19570}.
<a id="trace-19635"></a>
- 154.60s–154.60s (×1), actor 8, squad 1 (trace 19635): traveling overwatch. Knowledge: actor memory at 150.00s, trace 19486. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.8907178525941, 'next_transition': 1707}.
<a id="trace-19636"></a>
- 154.60s–154.60s (×1), actor 8, squad 1 (trace 19636): received platoon directive. Knowledge: actor memory at 150.00s, trace 19486. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.8907178525941, 'next_transition': 1707}.
<a id="trace-19751"></a>
- 155.30s–155.30s (×1), actor 1, squad 0 (trace 19751): traveling overwatch. Knowledge: actor memory at 155.00s, trace 19684. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19876}.
<a id="trace-19752"></a>
- 155.30s–155.30s (×1), actor 1, squad 0 (trace 19752): current contact unknown for 10 s. Knowledge: actor memory at 155.00s, trace 19684. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19876}.
<a id="trace-19876"></a>
<a id="trace-19906"></a>
<a id="trace-19937"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-20046"></a>
<a id="trace-20048"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20094"></a>
- 156.30s–162.30s (×10), actor 5, squad 0 (trace 19876): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19687. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260003080475325, 'next_transition': 19906}.
<a id="trace-1706"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 1706): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1707"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (events line 1707): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 170.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.638269244670775, 'next_transition': 21206}.
<a id="trace-20118"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 20118): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 20118. Next observer evidence: None.
<a id="trace-20119"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 20119): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 20119. Next observer evidence: None.
<a id="trace-20120"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 20120): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 20120. Next observer evidence: {'until': 170.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.638269244670775, 'next_transition': 21206}.
<a id="trace-20121"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 20121): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 20121. Next observer evidence: {'until': 170.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.638269244670775, 'next_transition': 21206}.
<a id="trace-20125"></a>
<a id="trace-20153"></a>
<a id="trace-20155"></a>
<a id="trace-20247"></a>
<a id="trace-20249"></a>
<a id="trace-20275"></a>
<a id="trace-20277"></a>
- 163.30s–166.30s (×7), actor 5, squad 0 (trace 20125): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 20121. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.809875292076781, 'next_transition': 20153}.
<a id="trace-20284"></a>
- 166.35s–166.35s (×1), actor 1, squad 0 (trace 20284): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 166.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6204861722386933, 'next_transition': 20296}.
<a id="trace-20286"></a>
- 166.35s–166.35s (×1), actor 1, squad 0 (trace 20286): NeedSupport. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 166.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6204861722386933, 'next_transition': 20296}.
<a id="trace-20296"></a>
- 166.60s–166.60s (×1), actor 1, squad 0 (trace 20296): Reorganise: completed/failed drill. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4893955469675415, 'next_transition': 20485}.
<a id="trace-20299"></a>
- 166.60s–166.60s (×1), actor 1, squad 0 (trace 20299): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4893955469675415, 'next_transition': 20485}.
<a id="trace-20300"></a>
- 166.60s–166.60s (×1), actor 1, squad 0 (trace 20300): bounding overwatch. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4893955469675415, 'next_transition': 20485}.
<a id="trace-20301"></a>
- 166.60s–166.60s (×1), actor 1, squad 0 (trace 20301): Reorganise complete: known contact. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4893955469675415, 'next_transition': 20485}.
<a id="trace-20485"></a>
<a id="trace-20487"></a>
- 167.30s–167.30s (×2), actor 5, squad 0 (trace 20485): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 20183. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11678557728668466, 'next_transition': 20505}.
<a id="trace-20505"></a>
- 167.75s–167.75s (×1), actor 1, squad 0 (trace 20505): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4845044829788929, 'next_transition': 20699}.
<a id="trace-20699"></a>
<a id="trace-20701"></a>
<a id="trace-20759"></a>
- 168.30s–169.30s (×3), actor 5, squad 0 (trace 20699): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 20183. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2675331792783193, 'next_transition': 20759}.
<a id="trace-20781"></a>
<a id="trace-21014"></a>
- 169.85s–170.25s (×2), actor 1, squad 0 (trace 20781): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 20181. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28453333333333336, 'next_transition': 21014}.
<a id="trace-21187"></a>
<a id="trace-21345"></a>
<a id="trace-21553"></a>
- 170.30s–172.30s (×3), actor 5, squad 0 (trace 21187): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 20954. Next observer evidence: {'until': 171.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21345}.
<a id="trace-21206"></a>
- 170.50s–170.50s (×1), actor 8, squad 1 (trace 21206): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 20955. Next observer evidence: {'until': 171.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21353}.
<a id="trace-21353"></a>
- 171.40s–171.40s (×1), actor 8, squad 1 (trace 21353): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 20955. Next observer evidence: {'until': 174.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.5659348968108475, 'next_transition': 21815}.
<a id="trace-21354"></a>
- 171.40s–171.40s (×1), actor 8, squad 1 (trace 21354): bounding overwatch. Knowledge: actor memory at 170.00s, trace 20955. Next observer evidence: {'until': 174.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.5659348968108475, 'next_transition': 21815}.
<a id="trace-21355"></a>
- 171.40s–171.40s (×1), actor 8, squad 1 (trace 21355): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 20955. Next observer evidence: {'until': 174.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.5659348968108475, 'next_transition': 21815}.
<a id="trace-21570"></a>
- 172.65s–172.65s (×1), actor 1, squad 0 (trace 21570): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 20952. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945017385144316, 'next_transition': 21775}.
<a id="trace-21775"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21902"></a>
- 173.30s–175.30s (×4), actor 5, squad 0 (trace 21775): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 20954. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7698119887264347, 'next_transition': 21800}.
<a id="trace-21815"></a>
- 174.75s–174.75s (×1), actor 8, squad 1 (trace 21815): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 20955. Next observer evidence: {'until': 176.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8208613574319358, 'next_transition': 21992}.
<a id="trace-21970"></a>
- 176.25s–176.25s (×1), actor 1, squad 0 (trace 21970): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 21827. Next observer evidence: None.
<a id="trace-21972"></a>
- 176.25s–176.25s (×1), actor 1, squad 0 (trace 21972): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 175.00s, trace 21827. Next observer evidence: None.
<a id="trace-21977"></a>
<a id="trace-21979"></a>
- 176.30s–176.30s (×2), actor 5, squad 0 (trace 21977): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 21828. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5327741242971857, 'next_transition': 1961}.
<a id="trace-21992"></a>
- 176.50s–176.50s (×1), actor 8, squad 1 (trace 21992): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 175.00s, trace 21829. Next observer evidence: {'until': 177, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1962}.
<a id="trace-1961"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (events line 1961): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087756130856647, 'next_transition': 22032}.
<a id="trace-1962"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (events line 1962): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22338}.
<a id="trace-22014"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 22014): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.373570 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 22014. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087756130856647, 'next_transition': 22032}.
<a id="trace-22015"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 22015): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.373570 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 22015. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087756130856647, 'next_transition': 22032}.
<a id="trace-22016"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 22016): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.373570 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 22016. Next observer evidence: {'until': 182.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22338}.
<a id="trace-22017"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 22017): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.373570 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 22017. Next observer evidence: {'until': 182.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22338}.
<a id="trace-22032"></a>
<a id="trace-22094"></a>
<a id="trace-22096"></a>
<a id="trace-22124"></a>
<a id="trace-22126"></a>
- 177.30s–179.30s (×5), actor 5, squad 0 (trace 22032): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 22017. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6894067698364514, 'next_transition': 22094}.
<a id="trace-22143"></a>
- 179.75s–179.75s (×1), actor 1, squad 0 (trace 22143): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 175.00s, trace 21827. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2084378163368041, 'next_transition': 22286}.
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22317"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22686"></a>
<a id="trace-22688"></a>
- 180.30s–183.30s (×7), actor 5, squad 0 (trace 22286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22221. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2503491953172543, 'next_transition': 22317}.
<a id="trace-22338"></a>
<a id="trace-22516"></a>
<a id="trace-22814"></a>
- 182.25s–184.85s (×3), actor 8, squad 1 (trace 22338): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 22222. Next observer evidence: {'until': 182.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22516}.
<a id="trace-22695"></a>
- 183.35s–183.35s (×1), actor 1, squad 0 (trace 22695): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 180.00s, trace 22220. Next observer evidence: {'until': 184, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600021231132907, 'next_transition': 22719}.
<a id="trace-22719"></a>
- 184.00s–184.00s (×1), actor 1, squad 0 (trace 22719): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 180.00s, trace 22220. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958415995359, 'next_transition': 22782}.
<a id="trace-22720"></a>
- 184.00s–184.00s (×1), actor 1, squad 0 (trace 22720): rearward bound: one stationary suppressing element. Knowledge: actor memory at 180.00s, trace 22220. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958415995359, 'next_transition': 22782}.
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-23022"></a>
<a id="trace-23024"></a>
<a id="trace-23057"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23223"></a>
<a id="trace-23225"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23391"></a>
<a id="trace-23393"></a>
<a id="trace-23426"></a>
- 184.30s–194.30s (×18), actor 5, squad 0 (trace 22782): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22221. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3674357740402288, 'next_transition': 23022}.
<a id="trace-23110"></a>
- 188.20s–188.20s (×1), actor 8, squad 1 (trace 23110): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 22961. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.14390717789603155, 'next_transition': 23838}.
<a id="trace-23111"></a>
- 188.20s–188.20s (×1), actor 8, squad 1 (trace 23111): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 22961. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.14390717789603155, 'next_transition': 23838}.
<a id="trace-23437"></a>
- 194.75s–194.75s (×1), actor 1, squad 0 (trace 23437): NeedSupport. Knowledge: actor memory at 190.00s, trace 23276. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23503}.
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23522"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23554"></a>
<a id="trace-23556"></a>
<a id="trace-23569"></a>
<a id="trace-23571"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23659"></a>
<a id="trace-23678"></a>
<a id="trace-23692"></a>
<a id="trace-23694"></a>
<a id="trace-23711"></a>
<a id="trace-23713"></a>
<a id="trace-23783"></a>
<a id="trace-23799"></a>
<a id="trace-23801"></a>
- 195.30s–206.30s (×20), actor 5, squad 0 (trace 23503): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 23448. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20146000155117638, 'next_transition': 23522}.
<a id="trace-23814"></a>
- 207.00s–207.00s (×1), actor 1, squad 0 (trace 23814): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 205.00s, trace 23727. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05230000000000068, 'next_transition': 23819}.
<a id="trace-23819"></a>
<a id="trace-23842"></a>
<a id="trace-23844"></a>
<a id="trace-23861"></a>
<a id="trace-23935"></a>
<a id="trace-23937"></a>
<a id="trace-23953"></a>
<a id="trace-23985"></a>
<a id="trace-23999"></a>
<a id="trace-24001"></a>
<a id="trace-24069"></a>
<a id="trace-24071"></a>
<a id="trace-24085"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24121"></a>
<a id="trace-24123"></a>
<a id="trace-24137"></a>
<a id="trace-24139"></a>
<a id="trace-24214"></a>
<a id="trace-24216"></a>
<a id="trace-24233"></a>
<a id="trace-24235"></a>
<a id="trace-24249"></a>
<a id="trace-24251"></a>
<a id="trace-24268"></a>
<a id="trace-24270"></a>
<a id="trace-24353"></a>
<a id="trace-24355"></a>
<a id="trace-24369"></a>
<a id="trace-24371"></a>
- 207.30s–226.30s (×31), actor 5, squad 0 (trace 23819): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 23728. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23842}.
<a id="trace-23838"></a>
- 208.25s–208.25s (×1), actor 8, squad 1 (trace 23838): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 205.00s, trace 23729. Next observer evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2307}.
<a id="trace-24481"></a>
<a id="trace-24483"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24514"></a>
<a id="trace-24516"></a>
- 230.30s–232.30s (×6), actor 1, squad 0 (trace 24481): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 24425. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24496}.
<a id="trace-2306"></a>
- 232.40s–232.40s (×1), actor 1, squad 0 (events line 2306): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2307"></a>
- 232.40s–232.40s (×1), actor 1, squad 1 (events line 2307): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24523"></a>
- 232.40s–232.40s (×1), actor 1, squad 0 (trace 24523): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 232.40s, trace 24523. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24536}.
<a id="trace-24524"></a>
- 232.40s–232.40s (×1), actor 1, squad 0 (trace 24524): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.40s, trace 24524. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24536}.
<a id="trace-24525"></a>
- 232.40s–232.40s (×1), actor 1, squad 1 (trace 24525): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.40s, trace 24525. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24555}.
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24551"></a>
<a id="trace-25448"></a>
<a id="trace-25450"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25490"></a>
<a id="trace-25492"></a>
<a id="trace-25511"></a>
<a id="trace-25513"></a>
<a id="trace-25525"></a>
<a id="trace-25527"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25718"></a>
<a id="trace-25720"></a>
<a id="trace-25736"></a>
<a id="trace-25738"></a>
<a id="trace-25748"></a>
<a id="trace-25750"></a>
<a id="trace-25818"></a>
<a id="trace-25820"></a>
<a id="trace-25834"></a>
<a id="trace-25836"></a>
<a id="trace-25853"></a>
<a id="trace-25868"></a>
<a id="trace-25870"></a>
<a id="trace-25892"></a>
<a id="trace-25894"></a>
<a id="trace-25964"></a>
<a id="trace-25966"></a>
- 233.30s–250.30s (×34), actor 1, squad 0 (trace 24536): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 232.40s, trace 24525. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24551}.
<a id="trace-24555"></a>
- 234.30s–234.30s (×1), actor 8, squad 1 (trace 24555): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 230.00s, trace 24426. Next observer evidence: None.
<a id="trace-24556"></a>
- 234.30s–234.30s (×1), actor 8, squad 1 (trace 24556): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 230.00s, trace 24426. Next observer evidence: None.
<a id="trace-25373"></a>
- 234.35s–234.35s (×1), actor 8, squad 1 (trace 25373): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 230.00s, trace 24426. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.144165666647157, 'next_transition': 2318}.
<a id="trace-2318"></a>
- 238.05s–238.05s (×1), actor 1, squad 1 (events line 2318): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.082424796870114, 'next_transition': 25539}.
<a id="trace-25506"></a>
- 238.05s–238.05s (×1), actor 1, squad 1 (trace 25506): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.232065 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 238.05s, trace 25506. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.082424796870114, 'next_transition': 25539}.
<a id="trace-25507"></a>
- 238.05s–238.05s (×1), actor 1, squad 1 (trace 25507): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.232065 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 238.05s, trace 25507. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.082424796870114, 'next_transition': 25539}.
<a id="trace-25539"></a>
- 239.95s–239.95s (×1), actor 8, squad 1 (trace 25539): MoveTactically. Knowledge: actor memory at 235.00s, trace 25392. Next observer evidence: {'until': 240, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536381487485375, 'next_transition': 25630}.
<a id="trace-25540"></a>
- 239.95s–239.95s (×1), actor 8, squad 1 (trace 25540): received platoon directive. Knowledge: actor memory at 235.00s, trace 25392. Next observer evidence: {'until': 240, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536381487485375, 'next_transition': 25630}.
<a id="trace-25630"></a>
- 240.00s–240.00s (×1), actor 8, squad 1 (trace 25630): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 25621. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22677852632028406, 'next_transition': 26017}.
<a id="trace-25978"></a>
- 251.10s–251.10s (×1), actor 1, squad 0 (trace 25978): NeedSupport. Knowledge: actor memory at 250.00s, trace 25908. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25985}.
<a id="trace-25985"></a>
<a id="trace-25987"></a>
<a id="trace-26001"></a>
<a id="trace-26003"></a>
<a id="trace-26835"></a>
<a id="trace-26837"></a>
<a id="trace-26859"></a>
<a id="trace-26861"></a>
<a id="trace-26939"></a>
<a id="trace-26941"></a>
<a id="trace-26965"></a>
<a id="trace-26967"></a>
<a id="trace-26985"></a>
<a id="trace-26987"></a>
<a id="trace-27005"></a>
<a id="trace-27007"></a>
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27107"></a>
<a id="trace-27109"></a>
<a id="trace-27137"></a>
<a id="trace-27139"></a>
<a id="trace-27157"></a>
<a id="trace-27159"></a>
<a id="trace-27175"></a>
<a id="trace-27177"></a>
<a id="trace-27248"></a>
<a id="trace-27250"></a>
<a id="trace-27269"></a>
<a id="trace-27271"></a>
<a id="trace-27294"></a>
<a id="trace-27296"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27442"></a>
<a id="trace-27474"></a>
<a id="trace-27476"></a>
<a id="trace-27485"></a>
<a id="trace-27503"></a>
<a id="trace-27573"></a>
<a id="trace-27575"></a>
<a id="trace-27582"></a>
<a id="trace-27606"></a>
<a id="trace-27615"></a>
<a id="trace-27617"></a>
<a id="trace-27626"></a>
<a id="trace-27638"></a>
<a id="trace-27708"></a>
<a id="trace-27710"></a>
<a id="trace-27717"></a>
<a id="trace-27730"></a>
<a id="trace-27738"></a>
<a id="trace-27740"></a>
<a id="trace-27747"></a>
<a id="trace-27757"></a>
<a id="trace-27765"></a>
<a id="trace-27773"></a>
<a id="trace-27840"></a>
<a id="trace-27842"></a>
<a id="trace-27863"></a>
<a id="trace-27865"></a>
<a id="trace-27881"></a>
<a id="trace-27883"></a>
- 251.30s–277.30s (×65), actor 1, squad 0 (trace 25985): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 25908. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26001}.
<a id="trace-26017"></a>
- 252.95s–252.95s (×1), actor 8, squad 1 (trace 26017): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 250.00s, trace 25909. Next observer evidence: {'until': 253, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26830}.
<a id="trace-26018"></a>
- 252.95s–252.95s (×1), actor 8, squad 1 (trace 26018): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 250.00s, trace 25909. Next observer evidence: {'until': 253, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26830}.
<a id="trace-26830"></a>
- 253.00s–253.00s (×1), actor 8, squad 1 (trace 26830): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 250.00s, trace 25909. Next observer evidence: {'until': 257.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.298705832754363, 'next_transition': 2356}.
<a id="trace-2356"></a>
- 257.70s–257.70s (×1), actor 1, squad 1 (events line 2356): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26994"></a>
- 257.70s–257.70s (×1), actor 1, squad 1 (trace 26994): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.255464 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 257.70s, trace 26994. Next observer evidence: {'until': 259.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.535982673919731, 'next_transition': 27028}.
<a id="trace-26995"></a>
- 257.70s–257.70s (×1), actor 1, squad 1 (trace 26995): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.255464 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 257.70s, trace 26995. Next observer evidence: {'until': 259.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.535982673919731, 'next_transition': 27028}.
<a id="trace-27028"></a>
- 259.60s–259.60s (×1), actor 8, squad 1 (trace 27028): MoveTactically. Knowledge: actor memory at 255.00s, trace 26882. Next observer evidence: {'until': 268.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.8208161626314725, 'next_transition': 27359}.
<a id="trace-27029"></a>
- 259.60s–259.60s (×1), actor 8, squad 1 (trace 27029): received platoon directive. Knowledge: actor memory at 255.00s, trace 26882. Next observer evidence: {'until': 268.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.8208161626314725, 'next_transition': 27359}.
<a id="trace-27359"></a>
- 268.55s–268.55s (×1), actor 8, squad 1 (trace 27359): ReactToContact: cover and return fire. Knowledge: actor memory at 265.00s, trace 27192. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3443000000000005, 'next_transition': 27641}.
<a id="trace-27360"></a>
- 268.55s–268.55s (×1), actor 8, squad 1 (trace 27360): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 265.00s, trace 27192. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3443000000000005, 'next_transition': 27641}.
<a id="trace-27641"></a>
- 271.90s–271.90s (×1), actor 8, squad 1 (trace 27641): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 270.00s, trace 27509. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339999999999861, 'next_transition': 28720}.
<a id="trace-27642"></a>
- 271.90s–271.90s (×1), actor 8, squad 1 (trace 27642): rearward bound: one stationary suppressing element. Knowledge: actor memory at 270.00s, trace 27509. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339999999999861, 'next_transition': 28720}.
<a id="trace-2473"></a>
- 277.45s–277.45s (×1), actor 1, squad 0 (events line 2473): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27891"></a>
- 277.45s–277.45s (×1), actor 1, squad 0 (trace 27891): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208847 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 277.45s, trace 27891. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27903}.
<a id="trace-27892"></a>
- 277.45s–277.45s (×1), actor 1, squad 0 (trace 27892): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208847 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 277.45s, trace 27892. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27903}.
<a id="trace-27903"></a>
<a id="trace-27905"></a>
<a id="trace-27923"></a>
<a id="trace-27925"></a>
- 278.30s–279.30s (×4), actor 1, squad 0 (trace 27903): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 277.45s, trace 27892. Next observer evidence: {'until': 279.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5522999999999989, 'next_transition': 27923}.
<a id="trace-27940"></a>
- 279.90s–279.90s (×1), actor 1, squad 0 (trace 27940): Withdraw to received rally. Knowledge: actor memory at 277.45s, trace 27892. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28051}.
<a id="trace-27941"></a>
- 279.90s–279.90s (×1), actor 1, squad 0 (trace 27941): rearward bound: one stationary suppressing element. Knowledge: actor memory at 277.45s, trace 27892. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28051}.
<a id="trace-28051"></a>
<a id="trace-28053"></a>
<a id="trace-28070"></a>
<a id="trace-28078"></a>
<a id="trace-28080"></a>
<a id="trace-28087"></a>
<a id="trace-28096"></a>
<a id="trace-28104"></a>
<a id="trace-28112"></a>
<a id="trace-28122"></a>
<a id="trace-28130"></a>
<a id="trace-28132"></a>
<a id="trace-28139"></a>
<a id="trace-28146"></a>
<a id="trace-28154"></a>
<a id="trace-28156"></a>
<a id="trace-28163"></a>
<a id="trace-28172"></a>
<a id="trace-28235"></a>
<a id="trace-28237"></a>
<a id="trace-28243"></a>
<a id="trace-28258"></a>
<a id="trace-28276"></a>
<a id="trace-28278"></a>
- 280.30s–287.30s (×24), actor 1, squad 0 (trace 28051): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 27994. Next observer evidence: {'until': 280.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28070}.
<a id="trace-28285"></a>
- 287.80s–287.80s (×1), actor 1, squad 0 (trace 28285): NeedSupport. Knowledge: actor memory at 285.00s, trace 28175. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9072316407621595, 'next_transition': 28300}.
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28314"></a>
<a id="trace-28316"></a>
<a id="trace-28385"></a>
<a id="trace-28387"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28421"></a>
<a id="trace-28423"></a>
<a id="trace-28437"></a>
<a id="trace-28439"></a>
<a id="trace-28451"></a>
<a id="trace-28453"></a>
<a id="trace-28526"></a>
<a id="trace-28528"></a>
<a id="trace-28541"></a>
<a id="trace-28543"></a>
<a id="trace-28553"></a>
<a id="trace-28555"></a>
- 288.30s–297.30s (×20), actor 1, squad 0 (trace 28300): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 285.00s, trace 28175. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2679825219785097, 'next_transition': 28314}.
<a id="trace-28566"></a>
- 298.05s–298.05s (×1), actor 1, squad 0 (trace 28566): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 295.00s, trace 28467. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28571}.
<a id="trace-28567"></a>
- 298.05s–298.05s (×1), actor 1, squad 0 (trace 28567): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 295.00s, trace 28467. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28571}.
<a id="trace-28571"></a>
<a id="trace-28573"></a>
<a id="trace-28585"></a>
<a id="trace-28587"></a>
<a id="trace-28657"></a>
<a id="trace-28659"></a>
<a id="trace-28679"></a>
<a id="trace-28694"></a>
<a id="trace-28696"></a>
<a id="trace-28713"></a>
<a id="trace-28715"></a>
<a id="trace-29546"></a>
<a id="trace-29548"></a>
<a id="trace-29623"></a>
<a id="trace-29625"></a>
<a id="trace-29648"></a>
<a id="trace-29650"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29691"></a>
<a id="trace-29693"></a>
<a id="trace-29712"></a>
<a id="trace-29714"></a>
<a id="trace-29848"></a>
<a id="trace-29850"></a>
<a id="trace-29866"></a>
<a id="trace-29868"></a>
<a id="trace-29884"></a>
<a id="trace-29886"></a>
<a id="trace-29899"></a>
<a id="trace-29901"></a>
<a id="trace-29922"></a>
<a id="trace-29924"></a>
<a id="trace-29998"></a>
<a id="trace-30000"></a>
<a id="trace-30018"></a>
<a id="trace-30020"></a>
<a id="trace-30031"></a>
<a id="trace-30033"></a>
<a id="trace-30046"></a>
<a id="trace-30048"></a>
<a id="trace-30060"></a>
<a id="trace-30062"></a>
<a id="trace-30131"></a>
<a id="trace-30157"></a>
<a id="trace-30159"></a>
<a id="trace-30175"></a>
<a id="trace-30177"></a>
<a id="trace-30194"></a>
<a id="trace-30196"></a>
<a id="trace-30207"></a>
<a id="trace-30209"></a>
<a id="trace-30276"></a>
<a id="trace-30278"></a>
<a id="trace-30293"></a>
<a id="trace-30295"></a>
<a id="trace-30313"></a>
<a id="trace-30315"></a>
<a id="trace-30338"></a>
<a id="trace-30340"></a>
<a id="trace-30351"></a>
<a id="trace-30353"></a>
<a id="trace-30425"></a>
<a id="trace-30427"></a>
<a id="trace-30440"></a>
<a id="trace-30442"></a>
<a id="trace-30453"></a>
<a id="trace-30455"></a>
<a id="trace-30471"></a>
<a id="trace-30473"></a>
<a id="trace-30491"></a>
<a id="trace-30493"></a>
<a id="trace-30563"></a>
<a id="trace-30565"></a>
<a id="trace-30585"></a>
<a id="trace-30587"></a>
<a id="trace-30601"></a>
<a id="trace-30603"></a>
<a id="trace-30615"></a>
<a id="trace-30617"></a>
- 298.30s–338.30s (×80), actor 1, squad 0 (trace 28571): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 28467. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28585}.
<a id="trace-28720"></a>
- 303.80s–303.80s (×1), actor 8, squad 1 (trace 28720): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 300.00s, trace 28601. Next observer evidence: None.
<a id="trace-28723"></a>
- 303.85s–303.85s (×1), actor 8, squad 1 (trace 28723): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 300.00s, trace 28601. Next observer evidence: None.
<a id="trace-28724"></a>
- 303.85s–303.85s (×1), actor 8, squad 1 (trace 28724): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 300.00s, trace 28601. Next observer evidence: None.
<a id="trace-29540"></a>
- 303.90s–303.90s (×1), actor 8, squad 1 (trace 29540): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 300.00s, trace 28601. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2573}.
<a id="trace-2573"></a>
- 308.25s–308.25s (×1), actor 1, squad 1 (events line 2573): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}.
<a id="trace-29688"></a>
- 308.25s–308.25s (×1), actor 1, squad 1 (trace 29688): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.263227 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 308.25s, trace 29688. Next observer evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}.
<a id="trace-29689"></a>
- 308.25s–308.25s (×1), actor 1, squad 1 (trace 29689): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.263227 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 308.25s, trace 29689. Next observer evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}.
<a id="trace-29737"></a>
- 310.15s–310.15s (×1), actor 8, squad 1 (trace 29737): Withdraw to received rally. Knowledge: actor memory at 310.00s, trace 29727. Next observer evidence: {'until': 340, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-29738"></a>
- 310.15s–310.15s (×1), actor 8, squad 1 (trace 29738): rearward bound: one stationary suppressing element. Knowledge: actor memory at 310.00s, trace 29727. Next observer evidence: {'until': 340, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2760"></a>
- 339.05s–339.05s (×1), actor 1, squad 0 (events line 2760): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30627"></a>
- 339.05s–339.05s (×1), actor 1, squad 0 (trace 30627): renew committed intent (75 s lifetime). Knowledge: actor memory at 339.05s, trace 30627. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30632}.
<a id="trace-30632"></a>
<a id="trace-30634"></a>
<a id="trace-30705"></a>
<a id="trace-30707"></a>
<a id="trace-30725"></a>
<a id="trace-30727"></a>
<a id="trace-30742"></a>
<a id="trace-30744"></a>
<a id="trace-30764"></a>
<a id="trace-30766"></a>
<a id="trace-30780"></a>
<a id="trace-30782"></a>
<a id="trace-30848"></a>
<a id="trace-30850"></a>
<a id="trace-30865"></a>
<a id="trace-30867"></a>
<a id="trace-30883"></a>
<a id="trace-30885"></a>
<a id="trace-30905"></a>
<a id="trace-30907"></a>
<a id="trace-30923"></a>
<a id="trace-30925"></a>
<a id="trace-30993"></a>
<a id="trace-30995"></a>
<a id="trace-31013"></a>
<a id="trace-31015"></a>
<a id="trace-31027"></a>
<a id="trace-31029"></a>
<a id="trace-31043"></a>
<a id="trace-31045"></a>
<a id="trace-31064"></a>
<a id="trace-31066"></a>
<a id="trace-31136"></a>
<a id="trace-31138"></a>
<a id="trace-31155"></a>
<a id="trace-31157"></a>
<a id="trace-31173"></a>
<a id="trace-31175"></a>
<a id="trace-31190"></a>
<a id="trace-31203"></a>
<a id="trace-31205"></a>
- 339.30s–359.30s (×41), actor 1, squad 0 (trace 30632): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 339.05s, trace 30627. Next observer evidence: {'until': 340.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30705}.

## Net delivery

261 matched order/radio deliveries; 255 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.649s; maximum 5.850s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4256: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4264: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4266: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4267: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4268: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4269: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4271: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4272: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4273: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4274: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4275: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5815: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5818: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5821: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5823: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5825: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5826: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5827: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5828: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5830: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5831: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5832: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5833: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5834: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6147: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6148: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6150: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6152: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6153: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6155: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6157: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6158: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6159: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6160: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6162: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6163: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6164: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6165: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6166: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 9267: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 9268: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 9269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 9270: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 9271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 9272: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 9273: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 9274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 9275: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 9276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 9277: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 9278: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 9279: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 9280: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 9281: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 9282: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 9283: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 9284: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 9285: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 9286: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10016: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 10017: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 10106: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10107: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10109: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10111: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10112: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10114: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10116: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10117: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10118: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10119: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10120: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10121: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10122: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10123: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10124: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10125: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 10441: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10442: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10443: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10445: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10446: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10447: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10448: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10450: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10451: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10452: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10453: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10454: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10455: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10456: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10457: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10458: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10459: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 13319: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 13320: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 13321: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 13322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 13323: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 13324: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 13325: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 13326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 13327: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 13328: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 13329: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 13330: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 13331: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 13332: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 13333: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 13334: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 13335: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 13336: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 14050: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 14051: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 14052: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 14053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 14054: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 14055: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 14056: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 14057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 14058: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 14059: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 14060: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 14061: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 14062: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 14063: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 14064: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 14065: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 14066: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 14067: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 14584: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 14585: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 14586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 14587: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 14588: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 14589: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 14590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 14591: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 14592: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 14593: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 14594: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 14595: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 14596: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 14597: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 14598: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 14599: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 14600: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 14915: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 14916: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 14917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 14918: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 14919: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 14920: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 14921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 14922: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 14923: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 14924: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 14925: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 14926: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 14927: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 14928: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 14929: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 14930: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 14931: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 15165: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 15166: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 15167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 15168: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 15169: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 15170: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 15171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 15172: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 15173: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 15174: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 15175: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 15176: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 15177: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 15178: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 15179: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 15180: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 15338: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 15339: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15341: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 15342: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15344: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15345: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15346: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15347: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15348: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15349: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15350: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15351: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15352: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 15632: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 15633: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15635: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 15636: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15638: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15639: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15640: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15641: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15642: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15643: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15644: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15645: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 15646: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 15705: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 15706: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 15822: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 15823: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 15824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15825: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 15826: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 15827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15828: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15829: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15830: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15831: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15832: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15833: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15834: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15835: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 15836: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 16120: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 16121: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 16122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 16123: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 16124: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 16125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 16126: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 16127: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 16128: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 16129: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 16130: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 16131: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 16132: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 16133: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 16134: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 16281: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 16282: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16300: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 16301: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 16302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16303: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 16304: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16306: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16307: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16308: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16309: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16310: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16311: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16312: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16313: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16314: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16511: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 16512: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 16513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16514: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 16515: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 16516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16517: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16518: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16519: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16520: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16521: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16522: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16523: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16524: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16525: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 16679: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 16680: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 16681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 16682: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 16683: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 16684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16685: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16686: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16687: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16688: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16689: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16690: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16691: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16692: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16693: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 16811: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 16812: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16845: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 16846: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16848: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 16849: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16851: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16852: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16853: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16854: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16855: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16856: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16857: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16858: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16859: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 17522: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 17523: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17525: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 17526: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 17527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17528: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17529: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17530: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17531: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17532: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17533: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17534: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17535: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17536: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17697: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 17698: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17700: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 17701: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 17702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17703: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17704: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17705: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17706: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17707: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17708: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17709: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17710: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17711: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 17804: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 17805: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 18265: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 18266: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 18267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 18268: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 18269: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 18270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 18271: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 18272: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 18273: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 18274: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 18275: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 18276: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 18277: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 18278: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 18279: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18554: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 18555: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18557: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 18558: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18560: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18561: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18562: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18563: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18564: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18565: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18566: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18567: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18568: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18705: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 18706: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18708: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 18709: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18711: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18712: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18713: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18714: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18715: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18716: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18717: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18718: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18719: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 18779: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 18780: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 18781: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 18782: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18868: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 18869: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18871: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 18872: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 18873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18874: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18875: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18876: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18877: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18878: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18879: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18880: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18881: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18882: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19328: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 19329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19331: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 19332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 19333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19334: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19335: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19336: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19337: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19338: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19339: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19341: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19342: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 19471: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 19472: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 19473: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 19474: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19482: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 19483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19485: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 19486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 19487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19488: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19489: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19490: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19491: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19492: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19493: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19495: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19496: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 19684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 19685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 19688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 19689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19690: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19691: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19692: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19693: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19694: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19695: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19697: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19698: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 19979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 19980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 19983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19985: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19986: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 19987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19988: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 19989: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19990: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19992: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19993: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 20118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 20119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 20120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 20121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 20181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 20182: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 20184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 20185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20186: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20187: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20189: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20190: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20191: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20192: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20193: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20194: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 20952: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 20953: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 20955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 20956: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20957: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20958: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20960: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20961: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20962: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20963: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20964: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20965: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21827: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21828: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 21829: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21830: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21831: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21832: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21833: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21834: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21835: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21836: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21837: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21838: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21839: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 22014: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 22015: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 22016: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 22017: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22220: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22221: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 22222: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22223: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22224: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22225: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22226: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22227: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22228: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22229: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22230: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22231: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22959: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22960: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 22961: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22962: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22963: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22964: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22965: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22966: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22967: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22968: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22969: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22970: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 23276: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23277: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 23278: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23279: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23280: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23281: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23282: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23283: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23284: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23285: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23286: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23287: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 23447: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23448: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 23449: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 23450: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23451: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23452: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23453: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23454: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23455: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23456: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23457: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 23585: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23586: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 23587: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 23588: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23589: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23590: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23591: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23592: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23593: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23594: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23595: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 23727: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 23728: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 23729: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 23730: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23731: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 23732: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 23733: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 23734: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 23735: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 23736: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23737: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 23876: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 23877: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 23878: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 23879: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 23880: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 23881: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 23882: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 23883: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 23884: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 23885: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 23886: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 24013: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24014: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 24015: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24016: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24017: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24018: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24019: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24020: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24021: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24022: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24023: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 24154: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24155: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 24156: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 24157: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24158: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24159: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24160: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24161: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24162: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24163: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24164: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 24296: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24297: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 24298: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24299: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24300: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24301: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24302: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 24303: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24304: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24305: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24306: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 24425: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 24426: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24427: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24428: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24429: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24430: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 24431: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24432: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24433: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24434: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.40s leader 1, trace 24523: estimate 8.85; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.40s leader 1, trace 24524: estimate 8.85; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.40s leader 1, trace 24525: estimate 8.85; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 25391: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 25392: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 25393: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25394: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25395: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25396: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 25397: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25398: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25399: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25400: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 238.05s leader 1, trace 25506: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 238.05s leader 1, trace 25507: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 25620: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 25621: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25622: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25623: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25624: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25625: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25626: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25627: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25628: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25629: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 25762: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 25763: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 25764: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25765: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25766: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25767: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 25768: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25769: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25770: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25771: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 25908: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 25909: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 25910: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25911: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25912: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25913: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 25914: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 25915: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25916: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25917: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 26881: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 26882: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 26883: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 26884: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 26885: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 26886: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 26887: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 26888: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 26889: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 26890: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 257.70s leader 1, trace 26994: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 257.70s leader 1, trace 26995: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 27034: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 27035: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 27036: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 27037: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 27038: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 27039: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 27040: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 27041: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 27042: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 27043: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 27191: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 27192: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 27193: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27194: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 27195: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 27196: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 27197: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27198: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27199: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27200: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 27508: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 27509: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 27510: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 27511: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 27512: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 27513: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 27514: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 27515: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 27516: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 27517: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 27784: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 27785: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 27786: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 27787: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 27788: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 27789: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 27790: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 27791: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 27792: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 27793: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 277.45s leader 1, trace 27891: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 277.45s leader 1, trace 27892: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 27994: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 27995: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 27996: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27997: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27998: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 27999: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 28000: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 28001: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 28002: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 28003: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 28175: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 28176: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 28177: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 28178: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 28179: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 28180: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 28181: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 28182: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 28183: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 28184: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 28327: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 28328: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 28329: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28330: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 28331: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 28332: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 28333: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28334: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28335: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28336: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 28467: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 28468: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 28469: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28470: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28471: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28472: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28473: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28474: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28475: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28476: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28600: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 28601: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 28602: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28603: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28604: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28605: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28606: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28607: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28608: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28609: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 29567: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 29568: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 29569: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 29570: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 29571: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 29572: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 29573: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 29574: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 29575: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 29576: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 308.25s leader 1, trace 29688: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 308.25s leader 1, trace 29689: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 29726: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 29727: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 29728: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29729: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 29730: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29731: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29732: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29733: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29734: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29735: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 29938: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 29939: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 29940: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29941: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29942: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29943: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29944: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29945: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29946: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29947: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 30074: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 30075: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 30076: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 30077: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 30078: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 30079: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 30080: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 30081: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 30082: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 30083: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 30220: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 30221: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 30222: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 30223: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 30224: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 30225: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 30226: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 30227: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 30228: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 30229: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 30369: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 8, trace 30370: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 30371: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 30372: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 30373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 30374: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 30375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 30376: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 30377: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 30378: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 30508: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 8, trace 30509: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 30510: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30511: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 30512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30513: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30515: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30516: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30517: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 339.05s leader 1, trace 30627: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 30644: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 8, trace 30645: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 30646: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30647: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30649: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30651: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30652: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30653: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30791: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 8, trace 30792: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30793: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30794: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30796: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30798: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30799: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30800: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30937: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 8, trace 30938: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30939: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30940: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30942: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30944: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30945: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30946: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 31079: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 8, trace 31080: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 31081: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31082: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 31083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31084: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 31085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31086: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31087: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31088: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 31218: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 8, trace 31219: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 31220: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 31221: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 31222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 31223: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 31224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 31225: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 31226: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 31227: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Ash incapacitated
- 1: Reed killed in action
- 1: Vale killed in action
- 1: Lark incapacitated
- 1: Moss incapacitated
- 1: Tern incapacitated
- 1: Soren incapacitated
- 1: Pike killed in action
- 1: Cole killed in action
- 1: Iven killed in action

## Outcome attribution

- 111.85s, evidence 17210: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1409}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 124.45s, evidence 18239: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4084855849659815, 'next_transition': 18330}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.05s, evidence 18484: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1508}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 140.85s, evidence 19047: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 149.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1598}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 142.50s, evidence 19266: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19297}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 277.45s, evidence 2473: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 277.45s, evidence 27891: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208847 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27903}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 277.45s, evidence 27892: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208847 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27903}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 308.25s, evidence 2573: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 308.25s, evidence 29688: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.263227 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 308.25s, evidence 29689: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.263227 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 310, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29737}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 339.05s, evidence 2760: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
