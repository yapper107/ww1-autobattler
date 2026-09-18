# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/107/good-azure/battle-107-1789674087232842539`

## Battle summary

**Ember** · 360 s · 412 shots.

### Turning points

- 15.7s, squad 4: contact (events line 177). First recorded contact.
- 33.0s, squad 0: help call ([trace 5692](#trace-5692)). No completion observed before termination.
- 34.4s, squad 1: help answer ([trace 5999](#trace-5999)). 39.2s, squad 1: advanced tactically.
- 39.0s, squad 0: help call ([trace 7175](#trace-7175)). No completion observed before termination.
- 41.1s, squad 1: help answer ([trace 7673](#trace-7673)). 46.6s, squad 1: took cover and returned fire.
- 50.4s, squad 0: assault ([trace 10286](#trace-10286)). 51.4s, squad 0: advanced tactically.
- 57.2s, squad 1: help call ([trace 11161](#trace-11161)). No completion observed before termination.
- 67.6s, squad 1: assault ([trace 12235](#trace-12235)). 101.2s, squad 1: Withdraw to received rally.
- 73.8s, squad 0: assault ([trace 13077](#trace-13077)). 83.8s, squad 0: advanced tactically.
- 81.6s, squad 0: help call ([trace 13656](#trace-13656)). No completion observed before termination.
- 8 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 82 shots, 5/8 lost.
- **1** — FightHere; chose committed a covered flank assault, Withdraw to received rally and 3 further drill types; no completed objective recorded; 8 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 291 shots, 5/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 31 shots, 0/2 lost.

### Decisions and attribution

At 55.9s, squad 1 chose FightHere: nearest known group ([trace 11104](#trace-11104)), followed by 1 shots and 0 own casualties; estimate 12.7 against 9 distinct squad-reported contacts; At 67.6s, squad 1 chose committed a covered flank assault ([trace 12235](#trace-12235)), followed by 1 shots and 0 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 100.0s, squad 0 chose RetreatThere: leader risk threshold crossed without support after 45 s observation ([trace 14821](#trace-14821)), followed by 1 shots and 0 own casualties; estimate 11.9 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.

### Communication

299 matched deliveries (mean 0.37s, max 2.25s); 517 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.70s, squad 4, contact, evidence events line 177: First recorded contact; .
- 33.00s, squad 0, help call, evidence 5692: NeedSupport; No completion observed before termination.
- 34.40s, squad 1, help answer, evidence 5999: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 39.2s, squad 1: advanced tactically.
- 39.05s, squad 0, help call, evidence 7175: NeedSupport; No completion observed before termination.
- 41.10s, squad 1, help answer, evidence 7673: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 46.6s, squad 1: took cover and returned fire.
- 50.40s, squad 0, assault, evidence 10286: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 51.4s, squad 0: advanced tactically.
- 57.15s, squad 1, help call, evidence 11161: NeedSupport; No completion observed before termination.
- 67.60s, squad 1, assault, evidence 12235: radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map; 101.2s, squad 1: Withdraw to received rally.
- 73.85s, squad 0, assault, evidence 13077: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 83.8s, squad 0: advanced tactically.
- 81.55s, squad 0, help call, evidence 13656: NeedSupport; No completion observed before termination.
- 99.45s, squad 0, withdrawal, evidence 14726: BreakContact: believed ratio at least two without superiority; 180.6s, squad 0: took cover and returned fire.
- 101.25s, squad 1, withdrawal, evidence 14928: Withdraw to received rally; No completion observed before termination.
- 111.55s, squad 0, help call, evidence 15556: NeedSupport; No completion observed before termination.
- 180.55s, squad 0, help call, evidence 18889: NeedSupport; No completion observed before termination.
- 186.65s, squad 0, withdrawal, evidence 19158: BreakContact: believed ratio at least two without superiority; 206.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 303.90s, squad 0, withdrawal, evidence 23809: BreakContact: believed ratio at least two without superiority; 353.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 329.30s, squad 0, help call, evidence 25012: NeedSupport; No completion observed before termination.
- 357.90s, squad 0, withdrawal, evidence 26112: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-638"></a>
<a id="trace-640"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-682"></a>
<a id="trace-684"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599870432284823, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-738"></a>
<a id="trace-740"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-938"></a>
<a id="trace-940"></a>
<a id="trace-976"></a>
<a id="trace-978"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1045"></a>
<a id="trace-1047"></a>
<a id="trace-1074"></a>
<a id="trace-1076"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1133"></a>
<a id="trace-1135"></a>
<a id="trace-1165"></a>
<a id="trace-1167"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1311"></a>
<a id="trace-1313"></a>
<a id="trace-1331"></a>
<a id="trace-1333"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889209396387, 'next_transition': 738}.
<a id="trace-826"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 826): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-868"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 868): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.53907893998546, 'next_transition': 1878}.
<a id="trace-942"></a>
<a id="trace-980"></a>
<a id="trace-1013"></a>
<a id="trace-1015"></a>
<a id="trace-1109"></a>
<a id="trace-1111"></a>
<a id="trace-1137"></a>
<a id="trace-1139"></a>
<a id="trace-1185"></a>
<a id="trace-1187"></a>
<a id="trace-1280"></a>
<a id="trace-1282"></a>
<a id="trace-1292"></a>
<a id="trace-1294"></a>
<a id="trace-1315"></a>
<a id="trace-1317"></a>
<a id="trace-1366"></a>
<a id="trace-1368"></a>
<a id="trace-1727"></a>
<a id="trace-1729"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1865"></a>
<a id="trace-1867"></a>
<a id="trace-2437"></a>
<a id="trace-2439"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2819"></a>
<a id="trace-2821"></a>
<a id="trace-3457"></a>
<a id="trace-3459"></a>
<a id="trace-3875"></a>
<a id="trace-3877"></a>
<a id="trace-4009"></a>
<a id="trace-4011"></a>
<a id="trace-4054"></a>
<a id="trace-4056"></a>
<a id="trace-4197"></a>
<a id="trace-4199"></a>
<a id="trace-4226"></a>
<a id="trace-4228"></a>
<a id="trace-4251"></a>
<a id="trace-4253"></a>
<a id="trace-4377"></a>
<a id="trace-4379"></a>
<a id="trace-4395"></a>
<a id="trace-4397"></a>
<a id="trace-4754"></a>
<a id="trace-4756"></a>
<a id="trace-4773"></a>
<a id="trace-4775"></a>
<a id="trace-4884"></a>
<a id="trace-4886"></a>
<a id="trace-4913"></a>
<a id="trace-4915"></a>
<a id="trace-5328"></a>
<a id="trace-5330"></a>
<a id="trace-5351"></a>
<a id="trace-5353"></a>
<a id="trace-5396"></a>
<a id="trace-5398"></a>
<a id="trace-5411"></a>
<a id="trace-5413"></a>
<a id="trace-5434"></a>
<a id="trace-5436"></a>
<a id="trace-5460"></a>
<a id="trace-5462"></a>
<a id="trace-5571"></a>
<a id="trace-5573"></a>
<a id="trace-5593"></a>
<a id="trace-5595"></a>
<a id="trace-5616"></a>
<a id="trace-5618"></a>
<a id="trace-5631"></a>
<a id="trace-5633"></a>
<a id="trace-5658"></a>
<a id="trace-5660"></a>
<a id="trace-5677"></a>
<a id="trace-5679"></a>
<a id="trace-5715"></a>
<a id="trace-5717"></a>
<a id="trace-5955"></a>
<a id="trace-5957"></a>
<a id="trace-5981"></a>
<a id="trace-5983"></a>
<a id="trace-7035"></a>
<a id="trace-7037"></a>
<a id="trace-7071"></a>
<a id="trace-7073"></a>
<a id="trace-7095"></a>
<a id="trace-7097"></a>
<a id="trace-7117"></a>
<a id="trace-7119"></a>
<a id="trace-7156"></a>
<a id="trace-7158"></a>
<a id="trace-7169"></a>
<a id="trace-7171"></a>
<a id="trace-7198"></a>
<a id="trace-7200"></a>
<a id="trace-7411"></a>
<a id="trace-7413"></a>
<a id="trace-8601"></a>
<a id="trace-8603"></a>
<a id="trace-8639"></a>
<a id="trace-8641"></a>
<a id="trace-8659"></a>
<a id="trace-8661"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
<a id="trace-8712"></a>
<a id="trace-8714"></a>
<a id="trace-8724"></a>
<a id="trace-8726"></a>
<a id="trace-8994"></a>
<a id="trace-8996"></a>
<a id="trace-9119"></a>
<a id="trace-9121"></a>
<a id="trace-9158"></a>
<a id="trace-9160"></a>
<a id="trace-9196"></a>
<a id="trace-9198"></a>
<a id="trace-9318"></a>
<a id="trace-9320"></a>
<a id="trace-9339"></a>
<a id="trace-9341"></a>
<a id="trace-9374"></a>
<a id="trace-9376"></a>
<a id="trace-9444"></a>
<a id="trace-9446"></a>
<a id="trace-9598"></a>
<a id="trace-9600"></a>
<a id="trace-9728"></a>
<a id="trace-9730"></a>
<a id="trace-10441"></a>
<a id="trace-10443"></a>
<a id="trace-10473"></a>
<a id="trace-10475"></a>
<a id="trace-10640"></a>
<a id="trace-10642"></a>
<a id="trace-10681"></a>
<a id="trace-10683"></a>
<a id="trace-10729"></a>
<a id="trace-10731"></a>
<a id="trace-10777"></a>
<a id="trace-10779"></a>
<a id="trace-10832"></a>
<a id="trace-10834"></a>
<a id="trace-10949"></a>
<a id="trace-10951"></a>
<a id="trace-11059"></a>
<a id="trace-11061"></a>
<a id="trace-11095"></a>
<a id="trace-11097"></a>
<a id="trace-11153"></a>
<a id="trace-11155"></a>
<a id="trace-11180"></a>
<a id="trace-11182"></a>
<a id="trace-11199"></a>
<a id="trace-11201"></a>
<a id="trace-11237"></a>
<a id="trace-11239"></a>
<a id="trace-11306"></a>
<a id="trace-11308"></a>
<a id="trace-11318"></a>
<a id="trace-11320"></a>
<a id="trace-11419"></a>
<a id="trace-11421"></a>
<a id="trace-11442"></a>
<a id="trace-11444"></a>
<a id="trace-11451"></a>
<a id="trace-11453"></a>
<a id="trace-11490"></a>
<a id="trace-11492"></a>
<a id="trace-11514"></a>
<a id="trace-11516"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11550"></a>
<a id="trace-11552"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11873"></a>
<a id="trace-11875"></a>
<a id="trace-11904"></a>
<a id="trace-11906"></a>
<a id="trace-11927"></a>
<a id="trace-11929"></a>
<a id="trace-11948"></a>
<a id="trace-11950"></a>
<a id="trace-12259"></a>
<a id="trace-12261"></a>
<a id="trace-12316"></a>
<a id="trace-12318"></a>
<a id="trace-12344"></a>
<a id="trace-12346"></a>
<a id="trace-12387"></a>
<a id="trace-12389"></a>
<a id="trace-12487"></a>
<a id="trace-12489"></a>
<a id="trace-12525"></a>
<a id="trace-12527"></a>
<a id="trace-12573"></a>
<a id="trace-12575"></a>
<a id="trace-12618"></a>
<a id="trace-12620"></a>
<a id="trace-12664"></a>
<a id="trace-12666"></a>
<a id="trace-12712"></a>
<a id="trace-12714"></a>
<a id="trace-12799"></a>
<a id="trace-12801"></a>
<a id="trace-13280"></a>
<a id="trace-13282"></a>
<a id="trace-13307"></a>
<a id="trace-13309"></a>
<a id="trace-13405"></a>
<a id="trace-13407"></a>
<a id="trace-13429"></a>
<a id="trace-13431"></a>
<a id="trace-13461"></a>
<a id="trace-13463"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13508"></a>
<a id="trace-13510"></a>
<a id="trace-13524"></a>
<a id="trace-13526"></a>
<a id="trace-13546"></a>
<a id="trace-13548"></a>
<a id="trace-13668"></a>
<a id="trace-13670"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13699"></a>
<a id="trace-13701"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
<a id="trace-13739"></a>
<a id="trace-13741"></a>
<a id="trace-13845"></a>
<a id="trace-13847"></a>
<a id="trace-13928"></a>
<a id="trace-13930"></a>
<a id="trace-13941"></a>
<a id="trace-13943"></a>
<a id="trace-13966"></a>
<a id="trace-13968"></a>
<a id="trace-13976"></a>
<a id="trace-13978"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14038"></a>
<a id="trace-14040"></a>
<a id="trace-14056"></a>
<a id="trace-14058"></a>
<a id="trace-14213"></a>
<a id="trace-14215"></a>
<a id="trace-14240"></a>
<a id="trace-14242"></a>
<a id="trace-14257"></a>
<a id="trace-14259"></a>
<a id="trace-14276"></a>
<a id="trace-14278"></a>
<a id="trace-14289"></a>
<a id="trace-14291"></a>
<a id="trace-14314"></a>
<a id="trace-14316"></a>
<a id="trace-14329"></a>
<a id="trace-14331"></a>
<a id="trace-14347"></a>
<a id="trace-14349"></a>
<a id="trace-14357"></a>
<a id="trace-14359"></a>
<a id="trace-14478"></a>
<a id="trace-14480"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14653"></a>
<a id="trace-14655"></a>
<a id="trace-14675"></a>
<a id="trace-14677"></a>
<a id="trace-14694"></a>
<a id="trace-14696"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14795"></a>
<a id="trace-14797"></a>
<a id="trace-14900"></a>
<a id="trace-14902"></a>
<a id="trace-15066"></a>
<a id="trace-15068"></a>
<a id="trace-15108"></a>
<a id="trace-15110"></a>
<a id="trace-15147"></a>
<a id="trace-15149"></a>
<a id="trace-15188"></a>
<a id="trace-15190"></a>
<a id="trace-15320"></a>
<a id="trace-15322"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15371"></a>
<a id="trace-15373"></a>
<a id="trace-15384"></a>
<a id="trace-15386"></a>
<a id="trace-15402"></a>
<a id="trace-15404"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15441"></a>
<a id="trace-15443"></a>
<a id="trace-15451"></a>
<a id="trace-15453"></a>
<a id="trace-15571"></a>
<a id="trace-15573"></a>
<a id="trace-15589"></a>
<a id="trace-15591"></a>
<a id="trace-15604"></a>
<a id="trace-15606"></a>
<a id="trace-15620"></a>
<a id="trace-15622"></a>
<a id="trace-15635"></a>
<a id="trace-15637"></a>
<a id="trace-15657"></a>
<a id="trace-15659"></a>
<a id="trace-15779"></a>
<a id="trace-15781"></a>
<a id="trace-15853"></a>
<a id="trace-15855"></a>
<a id="trace-15869"></a>
<a id="trace-15871"></a>
<a id="trace-15883"></a>
<a id="trace-15885"></a>
<a id="trace-15896"></a>
<a id="trace-15898"></a>
<a id="trace-15908"></a>
<a id="trace-15910"></a>
<a id="trace-15920"></a>
<a id="trace-15922"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16123"></a>
<a id="trace-16125"></a>
<a id="trace-16157"></a>
<a id="trace-16159"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16195"></a>
<a id="trace-16197"></a>
<a id="trace-16218"></a>
<a id="trace-16220"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16257"></a>
<a id="trace-16259"></a>
<a id="trace-16270"></a>
<a id="trace-16272"></a>
<a id="trace-16354"></a>
<a id="trace-16356"></a>
<a id="trace-16365"></a>
<a id="trace-16367"></a>
<a id="trace-16390"></a>
<a id="trace-16392"></a>
<a id="trace-16404"></a>
<a id="trace-16406"></a>
<a id="trace-16424"></a>
<a id="trace-16426"></a>
<a id="trace-16463"></a>
<a id="trace-16465"></a>
<a id="trace-16502"></a>
<a id="trace-16504"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16590"></a>
<a id="trace-16592"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16615"></a>
<a id="trace-16617"></a>
<a id="trace-16626"></a>
<a id="trace-16628"></a>
<a id="trace-16674"></a>
<a id="trace-16676"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16715"></a>
<a id="trace-16717"></a>
<a id="trace-16732"></a>
<a id="trace-16734"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16839"></a>
<a id="trace-16841"></a>
<a id="trace-16889"></a>
<a id="trace-16891"></a>
<a id="trace-16904"></a>
<a id="trace-16906"></a>
<a id="trace-16942"></a>
<a id="trace-16944"></a>
<a id="trace-16950"></a>
<a id="trace-16952"></a>
<a id="trace-17039"></a>
<a id="trace-17041"></a>
<a id="trace-17061"></a>
<a id="trace-17063"></a>
<a id="trace-17084"></a>
<a id="trace-17086"></a>
<a id="trace-17097"></a>
<a id="trace-17099"></a>
<a id="trace-17111"></a>
<a id="trace-17113"></a>
<a id="trace-17147"></a>
<a id="trace-17149"></a>
<a id="trace-17165"></a>
<a id="trace-17167"></a>
<a id="trace-17236"></a>
<a id="trace-17238"></a>
<a id="trace-17246"></a>
<a id="trace-17248"></a>
<a id="trace-17266"></a>
<a id="trace-17268"></a>
<a id="trace-17279"></a>
<a id="trace-17281"></a>
<a id="trace-17293"></a>
<a id="trace-17295"></a>
<a id="trace-17326"></a>
<a id="trace-17328"></a>
<a id="trace-17343"></a>
<a id="trace-17345"></a>
<a id="trace-17361"></a>
<a id="trace-17363"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17457"></a>
<a id="trace-17459"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17492"></a>
<a id="trace-17494"></a>
<a id="trace-17508"></a>
<a id="trace-17510"></a>
<a id="trace-17522"></a>
<a id="trace-17524"></a>
<a id="trace-17551"></a>
<a id="trace-17553"></a>
<a id="trace-17583"></a>
<a id="trace-17585"></a>
<a id="trace-17656"></a>
<a id="trace-17658"></a>
<a id="trace-17777"></a>
<a id="trace-17779"></a>
<a id="trace-17800"></a>
<a id="trace-17802"></a>
<a id="trace-17813"></a>
<a id="trace-17815"></a>
<a id="trace-17837"></a>
<a id="trace-17839"></a>
<a id="trace-17848"></a>
<a id="trace-17850"></a>
<a id="trace-17868"></a>
<a id="trace-17870"></a>
<a id="trace-17881"></a>
<a id="trace-17883"></a>
<a id="trace-17901"></a>
<a id="trace-17903"></a>
<a id="trace-17996"></a>
<a id="trace-17998"></a>
<a id="trace-18014"></a>
<a id="trace-18016"></a>
<a id="trace-18032"></a>
<a id="trace-18034"></a>
<a id="trace-18043"></a>
<a id="trace-18045"></a>
<a id="trace-18066"></a>
<a id="trace-18068"></a>
<a id="trace-18082"></a>
<a id="trace-18084"></a>
<a id="trace-18134"></a>
<a id="trace-18136"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18176"></a>
<a id="trace-18178"></a>
<a id="trace-18200"></a>
<a id="trace-18202"></a>
<a id="trace-18270"></a>
<a id="trace-18272"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18311"></a>
<a id="trace-18313"></a>
<a id="trace-18338"></a>
<a id="trace-18340"></a>
<a id="trace-18355"></a>
<a id="trace-18357"></a>
<a id="trace-18372"></a>
<a id="trace-18374"></a>
<a id="trace-18385"></a>
<a id="trace-18387"></a>
<a id="trace-18395"></a>
<a id="trace-18397"></a>
<a id="trace-18472"></a>
<a id="trace-18474"></a>
<a id="trace-18485"></a>
<a id="trace-18487"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18511"></a>
<a id="trace-18513"></a>
<a id="trace-18530"></a>
<a id="trace-18532"></a>
<a id="trace-18548"></a>
<a id="trace-18550"></a>
<a id="trace-18562"></a>
<a id="trace-18564"></a>
<a id="trace-18574"></a>
<a id="trace-18576"></a>
<a id="trace-18595"></a>
<a id="trace-18597"></a>
<a id="trace-18604"></a>
<a id="trace-18606"></a>
<a id="trace-18683"></a>
<a id="trace-18685"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18717"></a>
<a id="trace-18719"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18752"></a>
<a id="trace-18754"></a>
<a id="trace-18782"></a>
<a id="trace-18784"></a>
<a id="trace-18804"></a>
<a id="trace-18806"></a>
<a id="trace-18879"></a>
<a id="trace-18881"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-18962"></a>
<a id="trace-18964"></a>
<a id="trace-18976"></a>
<a id="trace-18978"></a>
<a id="trace-18991"></a>
<a id="trace-18993"></a>
<a id="trace-19013"></a>
<a id="trace-19015"></a>
<a id="trace-19033"></a>
<a id="trace-19035"></a>
<a id="trace-19050"></a>
<a id="trace-19052"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19155"></a>
<a id="trace-19157"></a>
<a id="trace-19169"></a>
<a id="trace-19171"></a>
<a id="trace-19189"></a>
<a id="trace-19191"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19253"></a>
<a id="trace-19255"></a>
<a id="trace-19261"></a>
<a id="trace-19263"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19372"></a>
<a id="trace-19374"></a>
<a id="trace-19387"></a>
<a id="trace-19389"></a>
<a id="trace-19403"></a>
<a id="trace-19405"></a>
<a id="trace-19416"></a>
<a id="trace-19418"></a>
<a id="trace-19429"></a>
<a id="trace-19431"></a>
<a id="trace-19441"></a>
<a id="trace-19443"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19528"></a>
<a id="trace-19530"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19564"></a>
<a id="trace-19566"></a>
<a id="trace-19580"></a>
<a id="trace-19582"></a>
<a id="trace-19614"></a>
<a id="trace-19616"></a>
<a id="trace-19622"></a>
<a id="trace-19624"></a>
<a id="trace-19689"></a>
<a id="trace-19691"></a>
<a id="trace-19700"></a>
<a id="trace-19702"></a>
<a id="trace-19714"></a>
<a id="trace-19716"></a>
<a id="trace-19722"></a>
<a id="trace-19724"></a>
<a id="trace-19740"></a>
<a id="trace-19742"></a>
<a id="trace-19756"></a>
<a id="trace-19758"></a>
<a id="trace-19771"></a>
<a id="trace-19773"></a>
<a id="trace-19781"></a>
<a id="trace-19783"></a>
<a id="trace-19793"></a>
<a id="trace-19795"></a>
<a id="trace-19869"></a>
<a id="trace-19871"></a>
<a id="trace-19880"></a>
<a id="trace-19882"></a>
<a id="trace-19895"></a>
<a id="trace-19897"></a>
<a id="trace-19906"></a>
<a id="trace-19908"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
<a id="trace-19962"></a>
<a id="trace-19964"></a>
<a id="trace-19975"></a>
<a id="trace-19977"></a>
<a id="trace-19985"></a>
<a id="trace-19987"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20078"></a>
<a id="trace-20080"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20131"></a>
<a id="trace-20133"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20152"></a>
<a id="trace-20154"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20228"></a>
<a id="trace-20230"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20262"></a>
<a id="trace-20264"></a>
<a id="trace-20276"></a>
<a id="trace-20278"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20315"></a>
<a id="trace-20317"></a>
<a id="trace-20330"></a>
<a id="trace-20332"></a>
<a id="trace-20339"></a>
<a id="trace-20341"></a>
<a id="trace-20410"></a>
<a id="trace-20412"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20455"></a>
<a id="trace-20457"></a>
<a id="trace-20472"></a>
<a id="trace-20474"></a>
<a id="trace-20492"></a>
<a id="trace-20494"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20579"></a>
<a id="trace-20581"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20642"></a>
<a id="trace-20644"></a>
<a id="trace-20655"></a>
<a id="trace-20657"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20678"></a>
<a id="trace-20680"></a>
<a id="trace-20686"></a>
<a id="trace-20688"></a>
<a id="trace-20762"></a>
<a id="trace-20764"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20814"></a>
<a id="trace-20816"></a>
<a id="trace-20827"></a>
<a id="trace-20829"></a>
<a id="trace-20852"></a>
<a id="trace-20854"></a>
<a id="trace-20860"></a>
<a id="trace-20862"></a>
<a id="trace-20930"></a>
<a id="trace-20932"></a>
<a id="trace-20941"></a>
<a id="trace-20943"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-20994"></a>
<a id="trace-20996"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21017"></a>
<a id="trace-21019"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21106"></a>
<a id="trace-21108"></a>
<a id="trace-21118"></a>
<a id="trace-21120"></a>
<a id="trace-21133"></a>
<a id="trace-21135"></a>
<a id="trace-21141"></a>
<a id="trace-21143"></a>
<a id="trace-21182"></a>
<a id="trace-21184"></a>
<a id="trace-21191"></a>
<a id="trace-21193"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21291"></a>
<a id="trace-21293"></a>
<a id="trace-21305"></a>
<a id="trace-21307"></a>
<a id="trace-21314"></a>
<a id="trace-21316"></a>
<a id="trace-21330"></a>
<a id="trace-21332"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21491"></a>
<a id="trace-21493"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21541"></a>
<a id="trace-21543"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21632"></a>
<a id="trace-21634"></a>
<a id="trace-21645"></a>
<a id="trace-21647"></a>
<a id="trace-21660"></a>
<a id="trace-21662"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21682"></a>
<a id="trace-21684"></a>
<a id="trace-21715"></a>
<a id="trace-21717"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21801"></a>
<a id="trace-21803"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21839"></a>
<a id="trace-21841"></a>
<a id="trace-21868"></a>
<a id="trace-21870"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21890"></a>
<a id="trace-21892"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22060"></a>
<a id="trace-22062"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
<a id="trace-22083"></a>
<a id="trace-22085"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22161"></a>
<a id="trace-22163"></a>
<a id="trace-22181"></a>
<a id="trace-22183"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22222"></a>
<a id="trace-22224"></a>
<a id="trace-22243"></a>
<a id="trace-22245"></a>
<a id="trace-22317"></a>
<a id="trace-22319"></a>
<a id="trace-22334"></a>
<a id="trace-22336"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22369"></a>
<a id="trace-22371"></a>
<a id="trace-22384"></a>
<a id="trace-22386"></a>
<a id="trace-22404"></a>
<a id="trace-22406"></a>
<a id="trace-22425"></a>
<a id="trace-22427"></a>
<a id="trace-22574"></a>
<a id="trace-22576"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22686"></a>
<a id="trace-22688"></a>
<a id="trace-22718"></a>
<a id="trace-22720"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22754"></a>
<a id="trace-22756"></a>
<a id="trace-22826"></a>
<a id="trace-22828"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22878"></a>
<a id="trace-22880"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22917"></a>
<a id="trace-22919"></a>
<a id="trace-22932"></a>
<a id="trace-22934"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22962"></a>
<a id="trace-22964"></a>
<a id="trace-23035"></a>
<a id="trace-23037"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23062"></a>
<a id="trace-23064"></a>
<a id="trace-23072"></a>
<a id="trace-23074"></a>
<a id="trace-23092"></a>
<a id="trace-23094"></a>
<a id="trace-23109"></a>
<a id="trace-23111"></a>
<a id="trace-23128"></a>
<a id="trace-23130"></a>
<a id="trace-23188"></a>
<a id="trace-23190"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23214"></a>
<a id="trace-23216"></a>
<a id="trace-23286"></a>
<a id="trace-23288"></a>
<a id="trace-23315"></a>
<a id="trace-23317"></a>
<a id="trace-23332"></a>
<a id="trace-23334"></a>
<a id="trace-23350"></a>
<a id="trace-23352"></a>
<a id="trace-23366"></a>
<a id="trace-23368"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23504"></a>
<a id="trace-23506"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23779"></a>
<a id="trace-23781"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23886"></a>
<a id="trace-23888"></a>
<a id="trace-23901"></a>
<a id="trace-23903"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-24011"></a>
<a id="trace-24013"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24039"></a>
<a id="trace-24041"></a>
<a id="trace-24053"></a>
<a id="trace-24055"></a>
<a id="trace-24156"></a>
<a id="trace-24158"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24256"></a>
<a id="trace-24258"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24289"></a>
<a id="trace-24291"></a>
<a id="trace-24324"></a>
<a id="trace-24326"></a>
<a id="trace-24345"></a>
<a id="trace-24347"></a>
<a id="trace-24356"></a>
<a id="trace-24358"></a>
<a id="trace-24377"></a>
<a id="trace-24379"></a>
<a id="trace-24387"></a>
<a id="trace-24389"></a>
<a id="trace-24459"></a>
<a id="trace-24461"></a>
<a id="trace-24471"></a>
<a id="trace-24473"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24571"></a>
<a id="trace-24573"></a>
<a id="trace-24606"></a>
<a id="trace-24608"></a>
<a id="trace-24680"></a>
<a id="trace-24682"></a>
<a id="trace-24693"></a>
<a id="trace-24695"></a>
<a id="trace-24717"></a>
<a id="trace-24719"></a>
<a id="trace-24727"></a>
<a id="trace-24729"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24789"></a>
<a id="trace-24791"></a>
<a id="trace-24820"></a>
<a id="trace-24822"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24947"></a>
<a id="trace-24949"></a>
<a id="trace-24959"></a>
<a id="trace-24961"></a>
<a id="trace-24980"></a>
<a id="trace-24982"></a>
<a id="trace-24990"></a>
<a id="trace-24992"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25112"></a>
<a id="trace-25114"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25164"></a>
<a id="trace-25166"></a>
<a id="trace-25186"></a>
<a id="trace-25188"></a>
<a id="trace-25211"></a>
<a id="trace-25213"></a>
<a id="trace-25221"></a>
<a id="trace-25223"></a>
<a id="trace-25244"></a>
<a id="trace-25246"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25349"></a>
<a id="trace-25351"></a>
<a id="trace-25360"></a>
<a id="trace-25362"></a>
<a id="trace-25399"></a>
<a id="trace-25401"></a>
<a id="trace-25413"></a>
<a id="trace-25415"></a>
<a id="trace-25426"></a>
<a id="trace-25428"></a>
<a id="trace-25504"></a>
<a id="trace-25506"></a>
<a id="trace-25515"></a>
<a id="trace-25517"></a>
<a id="trace-25533"></a>
<a id="trace-25535"></a>
<a id="trace-25541"></a>
<a id="trace-25543"></a>
<a id="trace-25554"></a>
<a id="trace-25556"></a>
<a id="trace-25579"></a>
<a id="trace-25581"></a>
<a id="trace-25589"></a>
<a id="trace-25591"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25611"></a>
<a id="trace-25613"></a>
<a id="trace-25680"></a>
<a id="trace-25682"></a>
<a id="trace-25707"></a>
<a id="trace-25709"></a>
<a id="trace-25716"></a>
<a id="trace-25718"></a>
<a id="trace-25741"></a>
<a id="trace-25743"></a>
<a id="trace-25754"></a>
<a id="trace-25756"></a>
<a id="trace-25776"></a>
<a id="trace-25778"></a>
<a id="trace-25785"></a>
<a id="trace-25787"></a>
<a id="trace-25851"></a>
<a id="trace-25853"></a>
<a id="trace-25864"></a>
<a id="trace-25866"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25888"></a>
<a id="trace-25890"></a>
<a id="trace-25904"></a>
<a id="trace-25906"></a>
<a id="trace-25916"></a>
<a id="trace-25918"></a>
<a id="trace-25935"></a>
<a id="trace-25937"></a>
<a id="trace-25960"></a>
<a id="trace-25962"></a>
<a id="trace-26036"></a>
<a id="trace-26038"></a>
<a id="trace-26048"></a>
<a id="trace-26050"></a>
<a id="trace-26068"></a>
<a id="trace-26070"></a>
<a id="trace-26132"></a>
<a id="trace-26134"></a>
<a id="trace-26145"></a>
<a id="trace-26147"></a>
<a id="trace-26158"></a>
<a id="trace-26160"></a>
<a id="trace-26173"></a>
<a id="trace-26175"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 942): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624818187461794, 'next_transition': 980}.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1195. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1665}.
<a id="trace-1385"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1385): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1195. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1665}.
<a id="trace-1665"></a>
<a id="trace-1667"></a>
<a id="trace-1687"></a>
<a id="trace-1689"></a>
<a id="trace-1723"></a>
<a id="trace-1725"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-1861"></a>
<a id="trace-1863"></a>
<a id="trace-2358"></a>
<a id="trace-2360"></a>
<a id="trace-2398"></a>
<a id="trace-2400"></a>
<a id="trace-2433"></a>
<a id="trace-2435"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
- 13.20s–17.75s (×20), actor 5, squad 0 (trace 1665): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41343213369868553, 'next_transition': 1687}.
<a id="trace-1878"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1878): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1765. Next observer evidence: None.
<a id="trace-1879"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1879): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1765. Next observer evidence: None.
<a id="trace-1880"></a>
<a id="trace-1993"></a>
<a id="trace-2111"></a>
<a id="trace-2228"></a>
- 15.90s–16.15s (×4), actor 8, squad 1 (trace 1880): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1765. Next observer evidence: None.
<a id="trace-2477"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 2477): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3570008609928811, 'next_transition': 2815}.
<a id="trace-2478"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 2478): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3570008609928811, 'next_transition': 2815}.
<a id="trace-2479"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 2479): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3570008609928811, 'next_transition': 2815}.
<a id="trace-2815"></a>
<a id="trace-2817"></a>
- 18.25s–18.25s (×2), actor 5, squad 0 (trace 2815): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12866384628974067, 'next_transition': 3143}.
<a id="trace-2822"></a>
<a id="trace-3143"></a>
- 18.25s–18.50s (×2), actor 0, squad 0 (trace 2822): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12866384628974067, 'next_transition': 3143}.
<a id="trace-3453"></a>
<a id="trace-3455"></a>
- 18.75s–18.75s (×2), actor 5, squad 0 (trace 3453): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3346876057688851, 'next_transition': 3817}.
<a id="trace-3460"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3460): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1757. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3346876057688851, 'next_transition': 3817}.
<a id="trace-3817"></a>
<a id="trace-3819"></a>
<a id="trace-3871"></a>
<a id="trace-3873"></a>
- 19.25s–19.75s (×4), actor 5, squad 0 (trace 3817): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150061538926249, 'next_transition': 3871}.
<a id="trace-3843"></a>
- 19.50s–19.50s (×1), actor 8, squad 1 (trace 3843): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1765. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2552184065168499, 'next_transition': 334}.
<a id="trace-333"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 333): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-334"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 334): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3882"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3882. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150061538926249, 'next_transition': 4005}.
<a id="trace-3883"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3883. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150061538926249, 'next_transition': 4005}.
<a id="trace-3884"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3884): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3884. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3865313700742583, 'next_transition': 4210}.
<a id="trace-3885"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3885): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3885. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3865313700742583, 'next_transition': 4210}.
<a id="trace-4005"></a>
<a id="trace-4007"></a>
<a id="trace-4050"></a>
<a id="trace-4052"></a>
<a id="trace-4112"></a>
<a id="trace-4114"></a>
<a id="trace-4193"></a>
<a id="trace-4195"></a>
<a id="trace-4222"></a>
<a id="trace-4224"></a>
- 20.25s–22.25s (×10), actor 5, squad 0 (trace 4005): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3909. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22512947397191335, 'next_transition': 4050}.
<a id="trace-4210"></a>
- 21.95s–21.95s (×1), actor 8, squad 1 (trace 4210): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3912. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9987405808567109, 'next_transition': 4254}.
<a id="trace-4241"></a>
- 22.45s–22.45s (×1), actor 0, squad 0 (trace 4241): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3904. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07020298342129057, 'next_transition': 4247}.
<a id="trace-4247"></a>
<a id="trace-4249"></a>
<a id="trace-4373"></a>
<a id="trace-4375"></a>
<a id="trace-4391"></a>
<a id="trace-4393"></a>
- 22.75s–23.75s (×6), actor 5, squad 0 (trace 4247): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3909. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1986439622359877, 'next_transition': 4373}.
<a id="trace-4254"></a>
- 23.00s–23.00s (×1), actor 8, squad 1 (trace 4254): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3912. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0667707480527389, 'next_transition': 4937}.
<a id="trace-4403"></a>
- 23.95s–23.95s (×1), actor 0, squad 0 (trace 4403): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3904. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12374293768358065, 'next_transition': 4750}.
<a id="trace-4750"></a>
<a id="trace-4752"></a>
<a id="trace-4769"></a>
<a id="trace-4771"></a>
- 24.25s–24.75s (×4), actor 5, squad 0 (trace 4750): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3909. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08708586212038087, 'next_transition': 4769}.
<a id="trace-4783"></a>
- 24.95s–24.95s (×1), actor 0, squad 0 (trace 4783): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3904. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12554497348553534, 'next_transition': 4880}.
<a id="trace-4880"></a>
<a id="trace-4882"></a>
<a id="trace-4909"></a>
<a id="trace-4911"></a>
<a id="trace-4929"></a>
<a id="trace-4931"></a>
- 25.25s–26.25s (×6), actor 5, squad 0 (trace 4880): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4789. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19629848785125034, 'next_transition': 4909}.
<a id="trace-4937"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 4937): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4792. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.442436066897433, 'next_transition': 461}.
<a id="trace-4956"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 4956): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 4784. Next observer evidence: None.
<a id="trace-5294"></a>
<a id="trace-5296"></a>
<a id="trace-5324"></a>
<a id="trace-5326"></a>
<a id="trace-5347"></a>
<a id="trace-5349"></a>
<a id="trace-5392"></a>
<a id="trace-5394"></a>
<a id="trace-5407"></a>
<a id="trace-5409"></a>
<a id="trace-5430"></a>
<a id="trace-5432"></a>
<a id="trace-5456"></a>
<a id="trace-5458"></a>
<a id="trace-5567"></a>
<a id="trace-5569"></a>
- 26.75s–30.25s (×16), actor 5, squad 0 (trace 5294): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4789. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31408543511029524, 'next_transition': 5324}.
<a id="trace-5576"></a>
- 30.30s–30.30s (×1), actor 0, squad 0 (trace 5576): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22093773386061644, 'next_transition': 5589}.
<a id="trace-5589"></a>
<a id="trace-5591"></a>
<a id="trace-5612"></a>
<a id="trace-5614"></a>
<a id="trace-5627"></a>
<a id="trace-5629"></a>
<a id="trace-5654"></a>
<a id="trace-5656"></a>
<a id="trace-5673"></a>
<a id="trace-5675"></a>
- 30.75s–32.75s (×10), actor 5, squad 0 (trace 5589): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5486. Next observer evidence: {'until': 31.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19173148065165074, 'next_transition': 5612}.
<a id="trace-461"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 461): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5600"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5600): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.749989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5600. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803974034525706, 'next_transition': 5634}.
<a id="trace-5601"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5601): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.749989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5601. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803974034525706, 'next_transition': 5634}.
<a id="trace-5634"></a>
- 31.75s–31.75s (×1), actor 8, squad 1 (trace 5634): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5489. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9072001296571773, 'next_transition': 5662}.
<a id="trace-5662"></a>
- 32.50s–32.50s (×1), actor 8, squad 1 (trace 5662): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5489. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.236679634782327, 'next_transition': 5999}.
<a id="trace-5690"></a>
- 33.00s–33.00s (×1), actor 0, squad 0 (trace 5690): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08640551708315948, 'next_transition': 5711}.
<a id="trace-5692"></a>
- 33.00s–33.00s (×1), actor 0, squad 0 (trace 5692): NeedSupport. Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08640551708315948, 'next_transition': 5711}.
<a id="trace-5711"></a>
<a id="trace-5713"></a>
- 33.25s–33.25s (×2), actor 5, squad 0 (trace 5711): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 5601. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17645686024137713, 'next_transition': 5722}.
<a id="trace-5722"></a>
- 33.65s–33.65s (×1), actor 0, squad 0 (trace 5722): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: None.
<a id="trace-5728"></a>
- 33.65s–33.65s (×1), actor 0, squad 0 (trace 5728): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: None.
<a id="trace-5729"></a>
- 33.65s–33.65s (×1), actor 0, squad 0 (trace 5729): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 5481. Next observer evidence: None.
<a id="trace-5951"></a>
<a id="trace-5953"></a>
<a id="trace-5977"></a>
<a id="trace-5979"></a>
<a id="trace-6917"></a>
<a id="trace-6919"></a>
<a id="trace-7015"></a>
<a id="trace-7017"></a>
<a id="trace-7031"></a>
<a id="trace-7033"></a>
<a id="trace-7066"></a>
<a id="trace-7068"></a>
<a id="trace-7090"></a>
<a id="trace-7092"></a>
<a id="trace-7112"></a>
<a id="trace-7114"></a>
- 33.75s–37.25s (×16), actor 5, squad 0 (trace 5951): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 5601. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2698733834930366, 'next_transition': 5977}.
<a id="trace-5999"></a>
- 34.40s–34.40s (×1), actor 8, squad 1 (trace 5999): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 5489. Next observer evidence: None.
<a id="trace-6000"></a>
- 34.40s–34.40s (×1), actor 8, squad 1 (trace 6000): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 30.00s, trace 5489. Next observer evidence: None.
<a id="trace-6913"></a>
- 34.45s–34.45s (×1), actor 8, squad 1 (trace 6913): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 30.00s, trace 5489. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8505007323483028, 'next_transition': 534}.
<a id="trace-534"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 534): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7101"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7101): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.670186 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7101. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9925600879165952, 'next_transition': 7201}.
<a id="trace-7102"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7102): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.670186 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7102. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9925600879165952, 'next_transition': 7201}.
<a id="trace-7120"></a>
- 37.40s–37.40s (×1), actor 0, squad 0 (trace 7120): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6937. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2700014240736067, 'next_transition': 7125}.
<a id="trace-7125"></a>
<a id="trace-7127"></a>
<a id="trace-7150"></a>
<a id="trace-7152"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
- 37.75s–38.75s (×6), actor 5, squad 0 (trace 7125): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7102. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6074839477141084, 'next_transition': 7150}.
<a id="trace-7175"></a>
- 39.05s–39.05s (×1), actor 0, squad 0 (trace 7175): NeedSupport. Knowledge: actor memory at 35.00s, trace 6937. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000312543722893, 'next_transition': 7192}.
<a id="trace-7192"></a>
<a id="trace-7194"></a>
<a id="trace-7316"></a>
<a id="trace-7318"></a>
<a id="trace-7407"></a>
<a id="trace-7409"></a>
- 39.25s–40.25s (×6), actor 5, squad 0 (trace 7192): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7102. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000947541109163, 'next_transition': 7316}.
<a id="trace-7201"></a>
- 39.25s–39.25s (×1), actor 8, squad 1 (trace 7201): MoveTactically. Knowledge: actor memory at 35.00s, trace 6944. Next observer evidence: {'until': 41, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16359665109653063, 'next_transition': 7673}.
<a id="trace-7202"></a>
- 39.25s–39.25s (×1), actor 8, squad 1 (trace 7202): received platoon directive. Knowledge: actor memory at 35.00s, trace 6944. Next observer evidence: {'until': 41, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16359665109653063, 'next_transition': 7673}.
<a id="trace-7414"></a>
- 40.30s–40.30s (×1), actor 0, squad 0 (trace 7414): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 7328. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7654}.
<a id="trace-7654"></a>
<a id="trace-7656"></a>
<a id="trace-8597"></a>
<a id="trace-8599"></a>
- 40.75s–41.25s (×4), actor 5, squad 0 (trace 7654): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7332. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300012857984859, 'next_transition': 8597}.
<a id="trace-7673"></a>
- 41.10s–41.10s (×1), actor 8, squad 1 (trace 7673): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 7335. Next observer evidence: None.
<a id="trace-7674"></a>
- 41.10s–41.10s (×1), actor 8, squad 1 (trace 7674): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 7335. Next observer evidence: None.
<a id="trace-8589"></a>
- 41.15s–41.15s (×1), actor 8, squad 1 (trace 8589): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 7335. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0009784298646303335, 'next_transition': 637}.
<a id="trace-8605"></a>
- 41.35s–41.35s (×1), actor 0, squad 0 (trace 8605): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 40.00s, trace 7328. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3149977431717644, 'next_transition': 8635}.
<a id="trace-8635"></a>
<a id="trace-8637"></a>
<a id="trace-8655"></a>
<a id="trace-8657"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8708"></a>
<a id="trace-8710"></a>
<a id="trace-8720"></a>
<a id="trace-8722"></a>
- 41.75s–43.75s (×10), actor 5, squad 0 (trace 8635): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7332. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26999979512085953, 'next_transition': 8655}.
<a id="trace-8730"></a>
- 44.00s–44.00s (×1), actor 0, squad 0 (trace 8730): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 7328. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000109891619347, 'next_transition': 8990}.
<a id="trace-8990"></a>
<a id="trace-8992"></a>
<a id="trace-9024"></a>
<a id="trace-9026"></a>
<a id="trace-9115"></a>
<a id="trace-9117"></a>
<a id="trace-9154"></a>
<a id="trace-9156"></a>
<a id="trace-9191"></a>
<a id="trace-9193"></a>
<a id="trace-9313"></a>
<a id="trace-9315"></a>
<a id="trace-9334"></a>
<a id="trace-9336"></a>
<a id="trace-9369"></a>
<a id="trace-9371"></a>
<a id="trace-9407"></a>
<a id="trace-9409"></a>
<a id="trace-9439"></a>
<a id="trace-9441"></a>
- 44.25s–48.75s (×20), actor 5, squad 0 (trace 8990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7332. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800035974073626, 'next_transition': 9024}.
<a id="trace-637"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 637): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9006"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 9006): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.628386 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 9006. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0008254241334009391, 'next_transition': 9200}.
<a id="trace-9007"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 9007): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.628386 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 9007. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0008254241334009391, 'next_transition': 9200}.
<a id="trace-9200"></a>
- 46.60s–46.60s (×1), actor 8, squad 1 (trace 9200): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 9037. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3779250894357243, 'next_transition': 9452}.
<a id="trace-9201"></a>
- 46.60s–46.60s (×1), actor 8, squad 1 (trace 9201): received platoon directive. Knowledge: actor memory at 45.00s, trace 9037. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3779250894357243, 'next_transition': 9452}.
<a id="trace-9452"></a>
- 48.80s–48.80s (×1), actor 8, squad 1 (trace 9452): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 9037. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.609326653692418, 'next_transition': 10665}.
<a id="trace-9569"></a>
- 49.05s–49.05s (×1), actor 2, squad 0 (trace 9569): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 9031. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999653298129792, 'next_transition': 9591}.
<a id="trace-9591"></a>
<a id="trace-9593"></a>
<a id="trace-9629"></a>
<a id="trace-9631"></a>
<a id="trace-9723"></a>
<a id="trace-9725"></a>
- 49.25s–50.25s (×6), actor 5, squad 0 (trace 9591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9034. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4200248802154463, 'next_transition': 9629}.
<a id="trace-9743"></a>
- 50.40s–50.40s (×1), actor 2, squad 0 (trace 9743): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07115000000000056, 'next_transition': 10436}.
<a id="trace-10286"></a>
- 50.40s–50.40s (×1), actor 2, squad 0 (trace 10286): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07115000000000056, 'next_transition': 10436}.
<a id="trace-10287"></a>
- 50.40s–50.40s (×1), actor 2, squad 0 (trace 10287): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07115000000000056, 'next_transition': 10436}.
<a id="trace-10410"></a>
- 50.40s–50.40s (×1), actor 2, squad 0 (trace 10410): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07115000000000056, 'next_transition': 10436}.
<a id="trace-10411"></a>
- 50.40s–50.40s (×1), actor 2, squad 0 (trace 10411): Assaulting. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07115000000000056, 'next_transition': 10436}.
<a id="trace-10436"></a>
<a id="trace-10438"></a>
<a id="trace-10468"></a>
<a id="trace-10470"></a>
- 50.75s–51.25s (×4), actor 5, squad 0 (trace 10436): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9651. Next observer evidence: {'until': 51.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.165283333333333, 'next_transition': 10468}.
<a id="trace-10477"></a>
- 51.40s–51.40s (×1), actor 2, squad 0 (trace 10477): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10635}.
<a id="trace-10482"></a>
- 51.40s–51.40s (×1), actor 2, squad 0 (trace 10482): MoveTactically. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10635}.
<a id="trace-10483"></a>
- 51.40s–51.40s (×1), actor 2, squad 0 (trace 10483): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 9648. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10635}.
<a id="trace-10635"></a>
<a id="trace-10637"></a>
<a id="trace-10677"></a>
<a id="trace-10679"></a>
<a id="trace-10725"></a>
<a id="trace-10727"></a>
<a id="trace-10773"></a>
<a id="trace-10775"></a>
<a id="trace-10828"></a>
<a id="trace-10830"></a>
<a id="trace-10892"></a>
<a id="trace-10894"></a>
<a id="trace-10944"></a>
<a id="trace-10946"></a>
- 51.75s–54.75s (×14), actor 5, squad 0 (trace 10635): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9651. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15199941258069563, 'next_transition': 10677}.
<a id="trace-10665"></a>
- 52.15s–52.15s (×1), actor 8, squad 1 (trace 10665): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 9654. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6288798041756467, 'next_transition': 10935}.
<a id="trace-10935"></a>
- 54.65s–54.65s (×1), actor 8, squad 1 (trace 10935): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 9654. Next observer evidence: {'until': 55.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1049775373734978, 'next_transition': 928}.
<a id="trace-10993"></a>
- 55.05s–55.05s (×1), actor 5, squad 0 (trace 10993): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 55.05s, trace 10993. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499927524882147, 'next_transition': 11053}.
<a id="trace-11053"></a>
<a id="trace-11055"></a>
<a id="trace-11089"></a>
<a id="trace-11091"></a>
<a id="trace-11126"></a>
<a id="trace-11128"></a>
<a id="trace-11147"></a>
<a id="trace-11149"></a>
<a id="trace-11174"></a>
<a id="trace-11176"></a>
<a id="trace-11194"></a>
<a id="trace-11196"></a>
<a id="trace-11219"></a>
<a id="trace-11221"></a>
<a id="trace-11232"></a>
<a id="trace-11234"></a>
- 55.25s–58.75s (×16), actor 5, squad 0 (trace 11053): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.05s, trace 10993. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000058683780443, 'next_transition': 11089}.
<a id="trace-928"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (events line 928): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11103"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (trace 11103): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.471613 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 11103. Next observer evidence: {'until': 57, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11161}.
<a id="trace-11104"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (trace 11104): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.471613 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 11104. Next observer evidence: {'until': 57, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11161}.
<a id="trace-11161"></a>
- 57.15s–57.15s (×1), actor 8, squad 1 (trace 11161): NeedSupport. Knowledge: actor memory at 55.00s, trace 10973. Next observer evidence: {'until': 66.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.1616500151562008, 'next_transition': 11910}.
<a id="trace-11244"></a>
- 58.95s–58.95s (×1), actor 2, squad 0 (trace 11244): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 10967. Next observer evidence: {'until': 59.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.157495649578365, 'next_transition': 11302}.
<a id="trace-11302"></a>
<a id="trace-11304"></a>
<a id="trace-11314"></a>
<a id="trace-11316"></a>
<a id="trace-11398"></a>
<a id="trace-11400"></a>
<a id="trace-11414"></a>
<a id="trace-11416"></a>
<a id="trace-11437"></a>
<a id="trace-11439"></a>
<a id="trace-11446"></a>
<a id="trace-11448"></a>
<a id="trace-11468"></a>
<a id="trace-11470"></a>
<a id="trace-11485"></a>
<a id="trace-11487"></a>
<a id="trace-11509"></a>
<a id="trace-11511"></a>
<a id="trace-11522"></a>
<a id="trace-11524"></a>
<a id="trace-11545"></a>
<a id="trace-11547"></a>
- 59.25s–64.25s (×22), actor 5, squad 0 (trace 11302): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.85s, trace 11104. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11314}.
<a id="trace-11553"></a>
- 64.35s–64.35s (×1), actor 2, squad 0 (trace 11553): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 11324. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3458223725436842, 'next_transition': 11735}.
<a id="trace-11554"></a>
- 64.35s–64.35s (×1), actor 2, squad 0 (trace 11554): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 60.00s, trace 11324. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3458223725436842, 'next_transition': 11735}.
<a id="trace-11735"></a>
<a id="trace-11737"></a>
<a id="trace-11834"></a>
<a id="trace-11836"></a>
<a id="trace-11868"></a>
<a id="trace-11870"></a>
<a id="trace-11898"></a>
<a id="trace-11900"></a>
- 64.75s–66.25s (×8), actor 5, squad 0 (trace 11735): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11327. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9362952042341507, 'next_transition': 11834}.
<a id="trace-11909"></a>
- 66.40s–66.40s (×1), actor 2, squad 0 (trace 11909): Fixing. Knowledge: actor memory at 65.00s, trace 11750. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050021335762066, 'next_transition': 11921}.
<a id="trace-11910"></a>
- 66.40s–66.40s (×1), actor 9, squad 1 (trace 11910): MoveTactically. Knowledge: actor memory at 65.00s, trace 11756. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12235}.
<a id="trace-11911"></a>
- 66.40s–66.40s (×1), actor 9, squad 1 (trace 11911): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 65.00s, trace 11756. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12235}.
<a id="trace-11921"></a>
<a id="trace-11923"></a>
<a id="trace-11942"></a>
<a id="trace-11944"></a>
<a id="trace-12253"></a>
<a id="trace-12255"></a>
- 66.75s–67.75s (×6), actor 5, squad 0 (trace 11921): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11753. Next observer evidence: {'until': 67.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3149973985783235, 'next_transition': 11942}.
<a id="trace-12235"></a>
- 67.60s–67.60s (×1), actor 9, squad 1 (trace 12235): radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 11756. Next observer evidence: {'until': 97.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1579}.
<a id="trace-12236"></a>
- 67.60s–67.60s (×1), actor 9, squad 1 (trace 12236): radio assault committed: wait for delivered support evidence. Knowledge: actor memory at 65.00s, trace 11756. Next observer evidence: {'until': 97.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1579}.
<a id="trace-12237"></a>
- 67.60s–67.60s (×1), actor 9, squad 1 (trace 12237): Assaulting. Knowledge: actor memory at 65.00s, trace 11756. Next observer evidence: {'until': 97.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1579}.
<a id="trace-12274"></a>
- 67.95s–67.95s (×1), actor 2, squad 0 (trace 12274): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 11750. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2261285984915958, 'next_transition': 12290}.
<a id="trace-12290"></a>
<a id="trace-12292"></a>
<a id="trace-12310"></a>
<a id="trace-12312"></a>
<a id="trace-12338"></a>
<a id="trace-12340"></a>
<a id="trace-12381"></a>
<a id="trace-12383"></a>
<a id="trace-12481"></a>
<a id="trace-12483"></a>
<a id="trace-12519"></a>
<a id="trace-12521"></a>
<a id="trace-12567"></a>
<a id="trace-12569"></a>
<a id="trace-12612"></a>
<a id="trace-12614"></a>
<a id="trace-12658"></a>
<a id="trace-12660"></a>
<a id="trace-12706"></a>
<a id="trace-12708"></a>
<a id="trace-12760"></a>
<a id="trace-12762"></a>
<a id="trace-12794"></a>
<a id="trace-12796"></a>
- 68.25s–73.75s (×24), actor 5, squad 0 (trace 12290): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11753. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34138760048574596, 'next_transition': 12310}.
<a id="trace-12805"></a>
- 73.85s–73.85s (×1), actor 2, squad 0 (trace 12805): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 12403. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14080000015782848, 'next_transition': 13274}.
<a id="trace-13077"></a>
- 73.85s–73.85s (×1), actor 2, squad 0 (trace 13077): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 70.00s, trace 12403. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14080000015782848, 'next_transition': 13274}.
<a id="trace-13078"></a>
- 73.85s–73.85s (×1), actor 2, squad 0 (trace 13078): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 70.00s, trace 12403. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14080000015782848, 'next_transition': 13274}.
<a id="trace-13241"></a>
- 73.85s–73.85s (×1), actor 2, squad 0 (trace 13241): Assaulting. Knowledge: actor memory at 70.00s, trace 12403. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14080000015782848, 'next_transition': 13274}.
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13301"></a>
<a id="trace-13303"></a>
<a id="trace-13399"></a>
<a id="trace-13401"></a>
<a id="trace-13424"></a>
<a id="trace-13426"></a>
<a id="trace-13442"></a>
<a id="trace-13444"></a>
<a id="trace-13456"></a>
<a id="trace-13458"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-13489"></a>
<a id="trace-13491"></a>
<a id="trace-13503"></a>
<a id="trace-13505"></a>
<a id="trace-13519"></a>
<a id="trace-13521"></a>
<a id="trace-13532"></a>
<a id="trace-13534"></a>
<a id="trace-13541"></a>
<a id="trace-13543"></a>
- 74.25s–79.75s (×24), actor 5, squad 0 (trace 13274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12406. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03618333348687246, 'next_transition': 13301}.
<a id="trace-1406"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1406): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13570"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 13570): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 13570. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749242045254094, 'next_transition': 13625}.
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13636"></a>
<a id="trace-13638"></a>
<a id="trace-13650"></a>
<a id="trace-13652"></a>
- 80.25s–81.25s (×6), actor 5, squad 0 (trace 13625): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 13570. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500288292331546, 'next_transition': 13636}.
<a id="trace-13656"></a>
- 81.55s–81.55s (×1), actor 4, squad 0 (trace 13656): NeedSupport. Knowledge: actor memory at 80.00s, trace 13552. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150020579510716, 'next_transition': 13664}.
<a id="trace-13664"></a>
<a id="trace-13666"></a>
<a id="trace-13676"></a>
<a id="trace-13678"></a>
<a id="trace-13695"></a>
<a id="trace-13697"></a>
- 81.75s–82.75s (×6), actor 5, squad 0 (trace 13664): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 13570. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450088977480032, 'next_transition': 13676}.
<a id="trace-13704"></a>
- 82.80s–82.80s (×1), actor 4, squad 0 (trace 13704): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 80.00s, trace 13552. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02777330057807338, 'next_transition': 13723}.
<a id="trace-13723"></a>
<a id="trace-13725"></a>
<a id="trace-13735"></a>
<a id="trace-13737"></a>
- 83.25s–83.75s (×4), actor 5, squad 0 (trace 13723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 13570. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149967422847417, 'next_transition': 13735}.
<a id="trace-13742"></a>
- 83.80s–83.80s (×1), actor 4, squad 0 (trace 13742): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 13552. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149967422847419, 'next_transition': 13827}.
<a id="trace-13745"></a>
- 83.80s–83.80s (×1), actor 4, squad 0 (trace 13745): MoveTactically. Knowledge: actor memory at 80.00s, trace 13552. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149967422847419, 'next_transition': 13827}.
<a id="trace-13746"></a>
- 83.80s–83.80s (×1), actor 4, squad 0 (trace 13746): Reorganise complete. Knowledge: actor memory at 80.00s, trace 13552. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149967422847419, 'next_transition': 13827}.
<a id="trace-13827"></a>
<a id="trace-13829"></a>
<a id="trace-13841"></a>
<a id="trace-13843"></a>
<a id="trace-13924"></a>
<a id="trace-13926"></a>
<a id="trace-13937"></a>
<a id="trace-13939"></a>
<a id="trace-13962"></a>
<a id="trace-13964"></a>
<a id="trace-13972"></a>
<a id="trace-13974"></a>
- 84.25s–86.75s (×12), actor 5, squad 0 (trace 13827): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 13570. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500708249974313, 'next_transition': 13841}.
<a id="trace-13981"></a>
- 86.95s–86.95s (×1), actor 4, squad 0 (trace 13981): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500129464019666, 'next_transition': 13987}.
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14001"></a>
<a id="trace-14003"></a>
- 87.25s–87.75s (×4), actor 5, squad 0 (trace 13987): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13859. Next observer evidence: {'until': 87.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150012946401971, 'next_transition': 14001}.
<a id="trace-14008"></a>
- 87.80s–87.80s (×1), actor 4, squad 0 (trace 14008): traveling overwatch. Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498887381144125, 'next_transition': 14021}.
<a id="trace-14009"></a>
- 87.80s–87.80s (×1), actor 4, squad 0 (trace 14009): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498887381144125, 'next_transition': 14021}.
<a id="trace-14021"></a>
<a id="trace-14023"></a>
<a id="trace-14034"></a>
<a id="trace-14036"></a>
<a id="trace-14052"></a>
<a id="trace-14054"></a>
<a id="trace-14062"></a>
<a id="trace-14064"></a>
- 88.25s–89.75s (×8), actor 5, squad 0 (trace 14021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13859. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500129464019627, 'next_transition': 14034}.
<a id="trace-14067"></a>
- 89.80s–89.80s (×1), actor 4, squad 0 (trace 14067): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07972499999999982, 'next_transition': 14209}.
<a id="trace-14068"></a>
- 89.80s–89.80s (×1), actor 4, squad 0 (trace 14068): bounding overwatch. Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07972499999999982, 'next_transition': 14209}.
<a id="trace-14069"></a>
- 89.80s–89.80s (×1), actor 4, squad 0 (trace 14069): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 13858. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07972499999999982, 'next_transition': 14209}.
<a id="trace-14209"></a>
<a id="trace-14211"></a>
<a id="trace-14222"></a>
<a id="trace-14224"></a>
<a id="trace-14236"></a>
<a id="trace-14238"></a>
<a id="trace-14253"></a>
<a id="trace-14255"></a>
<a id="trace-14272"></a>
<a id="trace-14274"></a>
<a id="trace-14285"></a>
<a id="trace-14287"></a>
<a id="trace-14309"></a>
<a id="trace-14311"></a>
- 90.25s–93.25s (×14), actor 5, squad 0 (trace 14209): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14138. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13252499999999934, 'next_transition': 14222}.
<a id="trace-14317"></a>
- 93.25s–93.25s (×1), actor 4, squad 0 (trace 14317): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 14137. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14324}.
<a id="trace-14324"></a>
<a id="trace-14326"></a>
<a id="trace-14341"></a>
<a id="trace-14343"></a>
<a id="trace-14351"></a>
<a id="trace-14353"></a>
- 93.75s–94.75s (×6), actor 5, squad 0 (trace 14324): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14138. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14341}.
<a id="trace-14362"></a>
- 94.90s–94.90s (×1), actor 4, squad 0 (trace 14362): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 90.00s, trace 14137. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02352500000000024, 'next_transition': 14472}.
<a id="trace-14363"></a>
- 94.90s–94.90s (×1), actor 4, squad 0 (trace 14363): ; retain contact cover stage. Knowledge: actor memory at 90.00s, trace 14137. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02352500000000024, 'next_transition': 14472}.
<a id="trace-14472"></a>
<a id="trace-14474"></a>
- 95.75s–95.75s (×2), actor 5, squad 0 (trace 14472): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14369. Next observer evidence: {'until': 95.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00020000000000042206, 'next_transition': 14487}.
<a id="trace-14487"></a>
- 95.90s–95.90s (×1), actor 4, squad 0 (trace 14487): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 14368. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003750000000000142, 'next_transition': 14586}.
<a id="trace-14488"></a>
- 95.90s–95.90s (×1), actor 4, squad 0 (trace 14488): new contact inside 100 m. Knowledge: actor memory at 95.00s, trace 14368. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003750000000000142, 'next_transition': 14586}.
<a id="trace-14586"></a>
<a id="trace-14588"></a>
<a id="trace-14616"></a>
<a id="trace-14618"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14669"></a>
<a id="trace-14671"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14719"></a>
<a id="trace-14721"></a>
- 96.25s–99.25s (×14), actor 5, squad 0 (trace 14586): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14369. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20627499999999976, 'next_transition': 14616}.
<a id="trace-14726"></a>
- 99.45s–99.45s (×1), actor 4, squad 0 (trace 14726): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 14368. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09752500000000008, 'next_transition': 14791}.
<a id="trace-14727"></a>
- 99.45s–99.45s (×1), actor 4, squad 0 (trace 14727): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 14368. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09752500000000008, 'next_transition': 14791}.
<a id="trace-14791"></a>
<a id="trace-14793"></a>
- 99.75s–99.75s (×2), actor 5, squad 0 (trace 14791): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14369. Next observer evidence: {'until': 100, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1644250000000005, 'next_transition': 1578}.
<a id="trace-1578"></a>
- 100.05s–100.05s (×1), actor 5, squad 0 (events line 1578): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}.
<a id="trace-1579"></a>
- 100.05s–100.05s (×1), actor 5, squad 1 (events line 1579): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}.
<a id="trace-14820"></a>
- 100.05s–100.05s (×1), actor 5, squad 0 (trace 14820): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.05s, trace 14820. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}.
<a id="trace-14821"></a>
- 100.05s–100.05s (×1), actor 5, squad 0 (trace 14821): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.05s, trace 14821. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}.
<a id="trace-14822"></a>
- 100.05s–100.05s (×1), actor 5, squad 1 (trace 14822): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.05s, trace 14822. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}.
<a id="trace-14823"></a>
- 100.05s–100.05s (×1), actor 5, squad 1 (trace 14823): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.05s, trace 14823. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}.
<a id="trace-14881"></a>
<a id="trace-14883"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14923"></a>
<a id="trace-14925"></a>
- 100.25s–101.25s (×6), actor 5, squad 0 (trace 14881): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.05s, trace 14823. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1677249999999999, 'next_transition': 14896}.
<a id="trace-14928"></a>
- 101.25s–101.25s (×1), actor 9, squad 1 (trace 14928): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 14809. Next observer evidence: {'until': 112, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15576}.
<a id="trace-14929"></a>
- 101.25s–101.25s (×1), actor 9, squad 1 (trace 14929): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 14809. Next observer evidence: {'until': 112, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15576}.
<a id="trace-14984"></a>
- 101.40s–101.40s (×1), actor 4, squad 0 (trace 14984): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 100.00s, trace 14805. Next observer evidence: {'until': 101.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00020000000000042206, 'next_transition': 15003}.
<a id="trace-15003"></a>
<a id="trace-15005"></a>
<a id="trace-15037"></a>
<a id="trace-15039"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15103"></a>
<a id="trace-15105"></a>
<a id="trace-15142"></a>
<a id="trace-15144"></a>
<a id="trace-15182"></a>
<a id="trace-15184"></a>
<a id="trace-15208"></a>
<a id="trace-15210"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-15314"></a>
<a id="trace-15316"></a>
<a id="trace-15336"></a>
<a id="trace-15338"></a>
<a id="trace-15365"></a>
<a id="trace-15367"></a>
<a id="trace-15380"></a>
<a id="trace-15382"></a>
<a id="trace-15398"></a>
<a id="trace-15400"></a>
<a id="trace-15412"></a>
<a id="trace-15414"></a>
<a id="trace-15425"></a>
<a id="trace-15427"></a>
<a id="trace-15437"></a>
<a id="trace-15439"></a>
<a id="trace-15447"></a>
<a id="trace-15449"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
<a id="trace-15549"></a>
<a id="trace-15551"></a>
- 101.75s–111.25s (×40), actor 5, squad 0 (trace 15003): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.05s, trace 14823. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002349999999999852, 'next_transition': 15037}.
<a id="trace-15556"></a>
- 111.55s–111.55s (×1), actor 4, squad 0 (trace 15556): NeedSupport. Knowledge: actor memory at 110.00s, trace 15455. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15567}.
<a id="trace-15567"></a>
<a id="trace-15569"></a>
<a id="trace-15585"></a>
<a id="trace-15587"></a>
<a id="trace-15600"></a>
<a id="trace-15602"></a>
<a id="trace-15616"></a>
<a id="trace-15618"></a>
<a id="trace-15631"></a>
<a id="trace-15633"></a>
<a id="trace-15653"></a>
<a id="trace-15655"></a>
<a id="trace-15681"></a>
<a id="trace-15683"></a>
<a id="trace-15775"></a>
<a id="trace-15777"></a>
<a id="trace-15809"></a>
<a id="trace-15811"></a>
<a id="trace-15833"></a>
<a id="trace-15835"></a>
<a id="trace-15849"></a>
<a id="trace-15851"></a>
<a id="trace-15865"></a>
<a id="trace-15867"></a>
<a id="trace-15879"></a>
<a id="trace-15881"></a>
<a id="trace-15892"></a>
<a id="trace-15894"></a>
<a id="trace-15904"></a>
<a id="trace-15906"></a>
<a id="trace-15916"></a>
<a id="trace-15918"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
- 111.75s–120.25s (×36), actor 5, squad 0 (trace 15567): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15456. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15585}.
<a id="trace-15576"></a>
- 112.10s–112.10s (×1), actor 9, squad 1 (trace 15576): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 15459. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16232}.
<a id="trace-15577"></a>
- 112.10s–112.10s (×1), actor 9, squad 1 (trace 15577): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 15459. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16232}.
<a id="trace-16011"></a>
- 120.50s–120.50s (×1), actor 4, squad 0 (trace 16011): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 15935. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16119}.
<a id="trace-16012"></a>
- 120.50s–120.50s (×1), actor 4, squad 0 (trace 16012): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 15935. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16119}.
<a id="trace-16119"></a>
<a id="trace-16121"></a>
<a id="trace-16142"></a>
<a id="trace-16144"></a>
<a id="trace-16153"></a>
<a id="trace-16155"></a>
<a id="trace-16177"></a>
<a id="trace-16179"></a>
<a id="trace-16191"></a>
<a id="trace-16193"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16251"></a>
<a id="trace-16253"></a>
<a id="trace-16264"></a>
<a id="trace-16266"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16384"></a>
<a id="trace-16386"></a>
<a id="trace-16398"></a>
<a id="trace-16400"></a>
<a id="trace-16418"></a>
<a id="trace-16420"></a>
<a id="trace-16434"></a>
<a id="trace-16436"></a>
<a id="trace-16457"></a>
<a id="trace-16459"></a>
<a id="trace-16478"></a>
<a id="trace-16480"></a>
<a id="trace-16496"></a>
<a id="trace-16498"></a>
<a id="trace-16506"></a>
<a id="trace-16508"></a>
<a id="trace-16586"></a>
<a id="trace-16588"></a>
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16611"></a>
<a id="trace-16613"></a>
<a id="trace-16622"></a>
<a id="trace-16624"></a>
- 120.75s–131.80s (×46), actor 5, squad 0 (trace 16119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15936. Next observer evidence: {'until': 121.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27562409796904586, 'next_transition': 16142}.
<a id="trace-16232"></a>
- 123.75s–123.75s (×1), actor 9, squad 1 (trace 16232): support established: element delivered fire on threat area. Knowledge: actor memory at 120.00s, trace 15939. Next observer evidence: {'until': 128.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16485}.
<a id="trace-16485"></a>
- 128.80s–128.80s (×1), actor 9, squad 1 (trace 16485): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 125.00s, trace 16286. Next observer evidence: {'until': 158.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17884}.
<a id="trace-16638"></a>
- 132.20s–132.20s (×1), actor 4, squad 0 (trace 16638): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 16521. Next observer evidence: None.
<a id="trace-16660"></a>
- 132.20s–132.20s (×1), actor 4, squad 0 (trace 16660): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 16521. Next observer evidence: None.
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16694"></a>
<a id="trace-16696"></a>
<a id="trace-16711"></a>
<a id="trace-16713"></a>
<a id="trace-16728"></a>
<a id="trace-16730"></a>
<a id="trace-16748"></a>
<a id="trace-16750"></a>
<a id="trace-16763"></a>
<a id="trace-16765"></a>
<a id="trace-16835"></a>
<a id="trace-16837"></a>
<a id="trace-16846"></a>
<a id="trace-16848"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16874"></a>
<a id="trace-16876"></a>
<a id="trace-16885"></a>
<a id="trace-16887"></a>
<a id="trace-16900"></a>
<a id="trace-16902"></a>
<a id="trace-16918"></a>
<a id="trace-16920"></a>
<a id="trace-16926"></a>
<a id="trace-16928"></a>
<a id="trace-16938"></a>
<a id="trace-16940"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17049"></a>
<a id="trace-17051"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17080"></a>
<a id="trace-17082"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
<a id="trace-17107"></a>
<a id="trace-17109"></a>
<a id="trace-17119"></a>
<a id="trace-17121"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17161"></a>
<a id="trace-17163"></a>
<a id="trace-17232"></a>
<a id="trace-17234"></a>
<a id="trace-17242"></a>
<a id="trace-17244"></a>
<a id="trace-17262"></a>
<a id="trace-17264"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17289"></a>
<a id="trace-17291"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17339"></a>
<a id="trace-17341"></a>
<a id="trace-17357"></a>
<a id="trace-17359"></a>
<a id="trace-17373"></a>
<a id="trace-17375"></a>
<a id="trace-17453"></a>
<a id="trace-17455"></a>
<a id="trace-17465"></a>
<a id="trace-17467"></a>
<a id="trace-17478"></a>
<a id="trace-17480"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17517"></a>
<a id="trace-17519"></a>
<a id="trace-17533"></a>
<a id="trace-17535"></a>
<a id="trace-17545"></a>
<a id="trace-17547"></a>
<a id="trace-17562"></a>
<a id="trace-17564"></a>
<a id="trace-17577"></a>
<a id="trace-17579"></a>
<a id="trace-17650"></a>
<a id="trace-17652"></a>
- 132.30s–155.30s (×94), actor 5, squad 0 (trace 16670): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 16522. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49769426652302273, 'next_transition': 16694}.
<a id="trace-17665"></a>
- 155.75s–155.75s (×1), actor 4, squad 0 (trace 17665): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 17587. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17771}.
<a id="trace-17666"></a>
- 155.75s–155.75s (×1), actor 4, squad 0 (trace 17666): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 17587. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17771}.
<a id="trace-17771"></a>
<a id="trace-17773"></a>
<a id="trace-17794"></a>
<a id="trace-17796"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17833"></a>
<a id="trace-17835"></a>
<a id="trace-17844"></a>
<a id="trace-17846"></a>
<a id="trace-17863"></a>
<a id="trace-17865"></a>
<a id="trace-17876"></a>
<a id="trace-17878"></a>
<a id="trace-17895"></a>
<a id="trace-17897"></a>
<a id="trace-17908"></a>
<a id="trace-17910"></a>
- 155.80s–159.80s (×18), actor 5, squad 0 (trace 17771): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 17588. Next observer evidence: {'until': 156.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0787365742523768, 'next_transition': 17794}.
<a id="trace-17884"></a>
- 158.80s–158.80s (×1), actor 9, squad 1 (trace 17884): support established: element delivered fire on threat area. Knowledge: actor memory at 155.00s, trace 17591. Next observer evidence: {'until': 160, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1958}.
<a id="trace-1957"></a>
- 160.05s–160.05s (×1), actor 5, squad 0 (events line 1957): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340162722046801, 'next_transition': 17990}.
<a id="trace-1958"></a>
- 160.05s–160.05s (×1), actor 5, squad 1 (events line 1958): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 164, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18163}.
<a id="trace-17928"></a>
- 160.05s–160.05s (×1), actor 5, squad 0 (trace 17928): renew committed intent (75 s lifetime). Knowledge: actor memory at 160.05s, trace 17928. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340162722046801, 'next_transition': 17990}.
<a id="trace-17929"></a>
- 160.05s–160.05s (×1), actor 5, squad 1 (trace 17929): renew committed intent (75 s lifetime). Knowledge: actor memory at 160.05s, trace 17929. Next observer evidence: {'until': 164, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18163}.
<a id="trace-17990"></a>
<a id="trace-17992"></a>
<a id="trace-18008"></a>
<a id="trace-18010"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18037"></a>
<a id="trace-18039"></a>
<a id="trace-18060"></a>
<a id="trace-18062"></a>
<a id="trace-18076"></a>
<a id="trace-18078"></a>
- 160.30s–162.80s (×12), actor 5, squad 0 (trace 17990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.05s, trace 17929. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.497729879689664, 'next_transition': 18008}.
<a id="trace-18088"></a>
- 163.20s–163.20s (×1), actor 4, squad 0 (trace 18088): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 17916. Next observer evidence: None.
<a id="trace-18115"></a>
- 163.20s–163.20s (×1), actor 4, squad 0 (trace 18115): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 17916. Next observer evidence: None.
<a id="trace-18128"></a>
<a id="trace-18130"></a>
<a id="trace-18147"></a>
<a id="trace-18149"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18194"></a>
<a id="trace-18196"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18279"></a>
<a id="trace-18281"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18323"></a>
<a id="trace-18325"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18351"></a>
<a id="trace-18353"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
<a id="trace-18391"></a>
<a id="trace-18393"></a>
<a id="trace-18468"></a>
<a id="trace-18470"></a>
<a id="trace-18481"></a>
<a id="trace-18483"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18526"></a>
<a id="trace-18528"></a>
<a id="trace-18544"></a>
<a id="trace-18546"></a>
<a id="trace-18558"></a>
<a id="trace-18560"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18600"></a>
<a id="trace-18602"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18679"></a>
<a id="trace-18681"></a>
<a id="trace-18697"></a>
<a id="trace-18699"></a>
<a id="trace-18713"></a>
<a id="trace-18715"></a>
<a id="trace-18732"></a>
<a id="trace-18734"></a>
<a id="trace-18748"></a>
<a id="trace-18750"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18778"></a>
<a id="trace-18780"></a>
<a id="trace-18793"></a>
<a id="trace-18795"></a>
<a id="trace-18800"></a>
<a id="trace-18802"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
- 163.30s–180.30s (×70), actor 5, squad 0 (trace 18128): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.05s, trace 17929. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34022150321518474, 'next_transition': 18147}.
<a id="trace-18163"></a>
- 164.15s–164.15s (×1), actor 9, squad 1 (trace 18163): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 160.00s, trace 17920. Next observer evidence: {'until': 194, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2132}.
<a id="trace-18888"></a>
- 180.55s–180.55s (×1), actor 4, squad 0 (trace 18888): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 180.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 18896}.
<a id="trace-18889"></a>
- 180.55s–180.55s (×1), actor 4, squad 0 (trace 18889): NeedSupport. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 180.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 18896}.
<a id="trace-18896"></a>
- 180.60s–180.60s (×1), actor 4, squad 0 (trace 18896): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18904}.
<a id="trace-18898"></a>
- 180.60s–180.60s (×1), actor 4, squad 0 (trace 18898): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18904}.
<a id="trace-18899"></a>
- 180.60s–180.60s (×1), actor 4, squad 0 (trace 18899): Reorganise complete: known contact. Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18904}.
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-18925"></a>
<a id="trace-18927"></a>
<a id="trace-18938"></a>
<a id="trace-18940"></a>
<a id="trace-18957"></a>
<a id="trace-18959"></a>
<a id="trace-18971"></a>
<a id="trace-18973"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
- 180.80s–183.30s (×12), actor 5, squad 0 (trace 18904): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 18809. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18925}.
<a id="trace-18994"></a>
- 183.30s–183.30s (×1), actor 4, squad 0 (trace 18994): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 180.00s, trace 18808. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19008}.
<a id="trace-19008"></a>
<a id="trace-19010"></a>
<a id="trace-19027"></a>
<a id="trace-19029"></a>
<a id="trace-19044"></a>
<a id="trace-19046"></a>
<a id="trace-19117"></a>
<a id="trace-19119"></a>
<a id="trace-19129"></a>
<a id="trace-19131"></a>
<a id="trace-19149"></a>
<a id="trace-19151"></a>
- 183.80s–186.30s (×12), actor 5, squad 0 (trace 19008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 18809. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19027}.
<a id="trace-19158"></a>
- 186.65s–186.65s (×1), actor 4, squad 0 (trace 19158): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 19058. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200211899416493, 'next_transition': 19163}.
<a id="trace-19159"></a>
- 186.65s–186.65s (×1), actor 4, squad 0 (trace 19159): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 19058. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200211899416493, 'next_transition': 19163}.
<a id="trace-19163"></a>
<a id="trace-19165"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19197"></a>
<a id="trace-19199"></a>
<a id="trace-19220"></a>
<a id="trace-19222"></a>
<a id="trace-19239"></a>
<a id="trace-19241"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19257"></a>
<a id="trace-19259"></a>
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19342"></a>
<a id="trace-19344"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19399"></a>
<a id="trace-19401"></a>
<a id="trace-19412"></a>
<a id="trace-19414"></a>
<a id="trace-19425"></a>
<a id="trace-19427"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19445"></a>
<a id="trace-19447"></a>
<a id="trace-19513"></a>
<a id="trace-19515"></a>
<a id="trace-19524"></a>
<a id="trace-19526"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19560"></a>
<a id="trace-19562"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19610"></a>
<a id="trace-19612"></a>
<a id="trace-19618"></a>
<a id="trace-19620"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19696"></a>
<a id="trace-19698"></a>
<a id="trace-19710"></a>
<a id="trace-19712"></a>
<a id="trace-19718"></a>
<a id="trace-19720"></a>
<a id="trace-19736"></a>
<a id="trace-19738"></a>
<a id="trace-19752"></a>
<a id="trace-19754"></a>
<a id="trace-19767"></a>
<a id="trace-19769"></a>
<a id="trace-19777"></a>
<a id="trace-19779"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19876"></a>
<a id="trace-19878"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
- 186.80s–206.30s (×80), actor 5, squad 0 (trace 19163): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 19059. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.839968449142916, 'next_transition': 19183}.
<a id="trace-19898"></a>
- 206.70s–206.70s (×1), actor 4, squad 0 (trace 19898): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 205.00s, trace 19804. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19902}.
<a id="trace-19902"></a>
<a id="trace-19904"></a>
<a id="trace-19920"></a>
<a id="trace-19922"></a>
<a id="trace-19934"></a>
<a id="trace-19936"></a>
<a id="trace-19949"></a>
<a id="trace-19951"></a>
<a id="trace-19958"></a>
<a id="trace-19960"></a>
<a id="trace-19971"></a>
<a id="trace-19973"></a>
<a id="trace-19981"></a>
<a id="trace-19983"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20059"></a>
<a id="trace-20061"></a>
<a id="trace-20074"></a>
<a id="trace-20076"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20096"></a>
<a id="trace-20098"></a>
<a id="trace-20116"></a>
<a id="trace-20118"></a>
<a id="trace-20127"></a>
<a id="trace-20129"></a>
<a id="trace-20136"></a>
<a id="trace-20138"></a>
<a id="trace-20148"></a>
<a id="trace-20150"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20224"></a>
<a id="trace-20226"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20272"></a>
<a id="trace-20274"></a>
<a id="trace-20289"></a>
<a id="trace-20291"></a>
<a id="trace-20300"></a>
<a id="trace-20302"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20326"></a>
<a id="trace-20328"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
- 206.80s–219.80s (×54), actor 5, squad 0 (trace 19902): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 19805. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19920}.
<a id="trace-2131"></a>
- 220.05s–220.05s (×1), actor 5, squad 0 (events line 2131): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20406}.
<a id="trace-2132"></a>
- 220.05s–220.05s (×1), actor 5, squad 1 (events line 2132): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 250, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-20353"></a>
- 220.05s–220.05s (×1), actor 5, squad 0 (trace 20353): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.05s, trace 20353. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20406}.
<a id="trace-20354"></a>
- 220.05s–220.05s (×1), actor 5, squad 1 (trace 20354): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.05s, trace 20354. Next observer evidence: {'until': 250, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20417"></a>
<a id="trace-20419"></a>
<a id="trace-20430"></a>
<a id="trace-20432"></a>
<a id="trace-20438"></a>
<a id="trace-20440"></a>
<a id="trace-20451"></a>
<a id="trace-20453"></a>
<a id="trace-20468"></a>
<a id="trace-20470"></a>
<a id="trace-20481"></a>
<a id="trace-20483"></a>
<a id="trace-20488"></a>
<a id="trace-20490"></a>
<a id="trace-20501"></a>
<a id="trace-20503"></a>
<a id="trace-20508"></a>
<a id="trace-20510"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20587"></a>
<a id="trace-20589"></a>
<a id="trace-20603"></a>
<a id="trace-20605"></a>
<a id="trace-20609"></a>
<a id="trace-20611"></a>
<a id="trace-20622"></a>
<a id="trace-20624"></a>
<a id="trace-20638"></a>
<a id="trace-20640"></a>
<a id="trace-20651"></a>
<a id="trace-20653"></a>
<a id="trace-20674"></a>
<a id="trace-20676"></a>
<a id="trace-20682"></a>
<a id="trace-20684"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20758"></a>
<a id="trace-20760"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20810"></a>
<a id="trace-20812"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20836"></a>
<a id="trace-20838"></a>
<a id="trace-20848"></a>
<a id="trace-20850"></a>
<a id="trace-20856"></a>
<a id="trace-20858"></a>
<a id="trace-20926"></a>
<a id="trace-20928"></a>
<a id="trace-20937"></a>
<a id="trace-20939"></a>
<a id="trace-20953"></a>
<a id="trace-20955"></a>
<a id="trace-20961"></a>
<a id="trace-20963"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21013"></a>
<a id="trace-21015"></a>
<a id="trace-21025"></a>
<a id="trace-21027"></a>
<a id="trace-21034"></a>
<a id="trace-21036"></a>
<a id="trace-21102"></a>
<a id="trace-21104"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21167"></a>
<a id="trace-21169"></a>
<a id="trace-21178"></a>
<a id="trace-21180"></a>
<a id="trace-21187"></a>
<a id="trace-21189"></a>
<a id="trace-21199"></a>
<a id="trace-21201"></a>
<a id="trace-21207"></a>
<a id="trace-21209"></a>
<a id="trace-21275"></a>
<a id="trace-21277"></a>
<a id="trace-21287"></a>
<a id="trace-21289"></a>
<a id="trace-21301"></a>
<a id="trace-21303"></a>
<a id="trace-21310"></a>
<a id="trace-21312"></a>
<a id="trace-21326"></a>
<a id="trace-21328"></a>
<a id="trace-21342"></a>
<a id="trace-21344"></a>
<a id="trace-21356"></a>
<a id="trace-21358"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21380"></a>
<a id="trace-21382"></a>
<a id="trace-21386"></a>
<a id="trace-21388"></a>
<a id="trace-21454"></a>
<a id="trace-21456"></a>
<a id="trace-21465"></a>
<a id="trace-21467"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21487"></a>
<a id="trace-21489"></a>
<a id="trace-21501"></a>
<a id="trace-21503"></a>
<a id="trace-21516"></a>
<a id="trace-21518"></a>
<a id="trace-21530"></a>
<a id="trace-21532"></a>
<a id="trace-21537"></a>
<a id="trace-21539"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21562"></a>
<a id="trace-21564"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21641"></a>
<a id="trace-21643"></a>
<a id="trace-21656"></a>
<a id="trace-21658"></a>
<a id="trace-21664"></a>
<a id="trace-21666"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21704"></a>
<a id="trace-21706"></a>
<a id="trace-21711"></a>
<a id="trace-21713"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21730"></a>
<a id="trace-21732"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21810"></a>
<a id="trace-21812"></a>
<a id="trace-21827"></a>
<a id="trace-21829"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21864"></a>
<a id="trace-21866"></a>
<a id="trace-21877"></a>
<a id="trace-21879"></a>
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21898"></a>
<a id="trace-21900"></a>
<a id="trace-21904"></a>
<a id="trace-21906"></a>
<a id="trace-21971"></a>
<a id="trace-21973"></a>
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-21995"></a>
<a id="trace-21997"></a>
<a id="trace-22002"></a>
<a id="trace-22004"></a>
<a id="trace-22019"></a>
<a id="trace-22021"></a>
<a id="trace-22035"></a>
<a id="trace-22037"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22056"></a>
<a id="trace-22058"></a>
<a id="trace-22071"></a>
<a id="trace-22073"></a>
<a id="trace-22079"></a>
<a id="trace-22081"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22157"></a>
<a id="trace-22159"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22177"></a>
<a id="trace-22179"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22207"></a>
<a id="trace-22209"></a>
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22239"></a>
<a id="trace-22241"></a>
<a id="trace-22247"></a>
<a id="trace-22249"></a>
<a id="trace-22313"></a>
<a id="trace-22315"></a>
<a id="trace-22330"></a>
<a id="trace-22332"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22350"></a>
<a id="trace-22352"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22393"></a>
<a id="trace-22395"></a>
- 220.30s–278.30s (×232), actor 5, squad 0 (trace 20406): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.05s, trace 20354. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20417}.
<a id="trace-2194"></a>
- 278.80s–278.80s (×1), actor 5, squad 0 (events line 2194): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22400"></a>
<a id="trace-22402"></a>
- 278.80s–278.80s (×2), actor 5, squad 0 (trace 22400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 22255. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22415}.
<a id="trace-22407"></a>
- 278.80s–278.80s (×1), actor 5, squad 0 (trace 22407): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.524260 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 278.80s, trace 22407. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22415}.
<a id="trace-22408"></a>
- 278.80s–278.80s (×1), actor 5, squad 0 (trace 22408): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.524260 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 278.80s, trace 22408. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22415}.
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22421"></a>
<a id="trace-22423"></a>
- 279.30s–279.80s (×4), actor 5, squad 0 (trace 22415): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 278.80s, trace 22408. Next observer evidence: {'until': 279.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22421}.
<a id="trace-2197"></a>
- 280.05s–280.05s (×1), actor 5, squad 0 (events line 2197): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2198"></a>
- 280.05s–280.05s (×1), actor 5, squad 1 (events line 2198): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22439"></a>
- 280.05s–280.05s (×1), actor 5, squad 0 (trace 22439): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 280.05s, trace 22439. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22553}.
<a id="trace-22440"></a>
- 280.05s–280.05s (×1), actor 5, squad 0 (trace 22440): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 280.05s, trace 22440. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22553}.
<a id="trace-22441"></a>
- 280.05s–280.05s (×1), actor 5, squad 1 (trace 22441): renew committed intent (75 s lifetime). Knowledge: actor memory at 280.05s, trace 22441. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23979}.
<a id="trace-22442"></a>
- 280.05s–280.05s (×1), actor 4, squad 0 (trace 22442): MoveTactically. Knowledge: actor memory at 280.00s, trace 22429. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22553}.
<a id="trace-22443"></a>
- 280.05s–280.05s (×1), actor 4, squad 0 (trace 22443): traveling. Knowledge: actor memory at 280.00s, trace 22429. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22553}.
<a id="trace-22444"></a>
- 280.05s–280.05s (×1), actor 4, squad 0 (trace 22444): received platoon directive. Knowledge: actor memory at 280.00s, trace 22429. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22553}.
<a id="trace-22553"></a>
<a id="trace-22555"></a>
<a id="trace-22570"></a>
<a id="trace-22572"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
- 280.30s–281.30s (×6), actor 5, squad 0 (trace 22553): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.05s, trace 22441. Next observer evidence: {'until': 280.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001719012440514, 'next_transition': 22570}.
<a id="trace-22595"></a>
- 281.30s–281.30s (×1), actor 4, squad 0 (trace 22595): received platoon directive. Knowledge: actor memory at 280.00s, trace 22429. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5607926463696022, 'next_transition': 22660}.
<a id="trace-22660"></a>
<a id="trace-22662"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22698"></a>
<a id="trace-22700"></a>
<a id="trace-22714"></a>
<a id="trace-22716"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22750"></a>
<a id="trace-22752"></a>
<a id="trace-22822"></a>
<a id="trace-22824"></a>
<a id="trace-22834"></a>
<a id="trace-22836"></a>
<a id="trace-22851"></a>
<a id="trace-22853"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22874"></a>
<a id="trace-22876"></a>
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22913"></a>
<a id="trace-22915"></a>
<a id="trace-22928"></a>
<a id="trace-22930"></a>
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-22958"></a>
<a id="trace-22960"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23124"></a>
<a id="trace-23126"></a>
- 281.80s–293.30s (×48), actor 5, squad 0 (trace 22660): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.05s, trace 22441. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41997337481744873, 'next_transition': 22682}.
<a id="trace-23132"></a>
- 293.35s–293.35s (×1), actor 4, squad 0 (trace 23132): traveling overwatch. Knowledge: actor memory at 290.00s, trace 22972. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.364989283306535, 'next_transition': 23184}.
<a id="trace-23133"></a>
- 293.35s–293.35s (×1), actor 4, squad 0 (trace 23133): matching received arrivals: traveling stage complete. Knowledge: actor memory at 290.00s, trace 22972. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.364989283306535, 'next_transition': 23184}.
<a id="trace-23184"></a>
<a id="trace-23186"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23311"></a>
<a id="trace-23313"></a>
<a id="trace-23328"></a>
<a id="trace-23330"></a>
<a id="trace-23346"></a>
<a id="trace-23348"></a>
<a id="trace-23362"></a>
<a id="trace-23364"></a>
<a id="trace-23381"></a>
<a id="trace-23383"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23424"></a>
<a id="trace-23426"></a>
- 293.80s–299.80s (×24), actor 5, squad 0 (trace 23184): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 22973. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.149989327997232, 'next_transition': 23210}.
<a id="trace-23434"></a>
- 299.95s–299.95s (×1), actor 4, squad 0 (trace 23434): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 295.00s, trace 23221. Next observer evidence: {'until': 300.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23500}.
<a id="trace-23500"></a>
<a id="trace-23502"></a>
- 300.30s–300.30s (×2), actor 5, squad 0 (trace 23500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 23436. Next observer evidence: {'until': 300.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23508}.
<a id="trace-23508"></a>
- 300.45s–300.45s (×1), actor 4, squad 0 (trace 23508): ReactToContact: cover and return fire. Knowledge: actor memory at 300.00s, trace 23435. Next observer evidence: None.
<a id="trace-23509"></a>
- 300.45s–300.45s (×1), actor 4, squad 0 (trace 23509): bounding overwatch. Knowledge: actor memory at 300.00s, trace 23435. Next observer evidence: None.
<a id="trace-23510"></a>
<a id="trace-23570"></a>
<a id="trace-23631"></a>
- 300.45s–300.55s (×3), actor 4, squad 0 (trace 23510): new contact inside 100 m. Knowledge: actor memory at 300.00s, trace 23435. Next observer evidence: None.
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23733"></a>
<a id="trace-23735"></a>
<a id="trace-23760"></a>
<a id="trace-23762"></a>
<a id="trace-23775"></a>
<a id="trace-23777"></a>
<a id="trace-23790"></a>
<a id="trace-23792"></a>
<a id="trace-23804"></a>
<a id="trace-23806"></a>
- 300.80s–303.80s (×14), actor 5, squad 0 (trace 23696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 23436. Next observer evidence: {'until': 301.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8399648061410381, 'next_transition': 23726}.
<a id="trace-23809"></a>
- 303.90s–303.90s (×1), actor 4, squad 0 (trace 23809): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 300.00s, trace 23435. Next observer evidence: {'until': 304, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23869}.
<a id="trace-23810"></a>
- 303.90s–303.90s (×1), actor 4, squad 0 (trace 23810): rearward bound: one stationary suppressing element. Knowledge: actor memory at 300.00s, trace 23435. Next observer evidence: {'until': 304, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23869}.
<a id="trace-23869"></a>
- 304.10s–304.10s (×1), actor 5, squad 0 (trace 23869): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 304.10s, trace 23869. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23881}.
<a id="trace-23881"></a>
<a id="trace-23883"></a>
<a id="trace-23896"></a>
<a id="trace-23898"></a>
- 304.30s–304.80s (×4), actor 5, squad 0 (trace 23881): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 304.10s, trace 23869. Next observer evidence: {'until': 304.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23896}.
<a id="trace-2304"></a>
- 305.05s–305.05s (×1), actor 5, squad 0 (events line 2304): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23919"></a>
- 305.05s–305.05s (×1), actor 5, squad 0 (trace 23919): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.406204 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 305.05s, trace 23919. Next observer evidence: {'until': 305.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23971}.
<a id="trace-23920"></a>
- 305.05s–305.05s (×1), actor 5, squad 0 (trace 23920): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.406204 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 305.05s, trace 23920. Next observer evidence: {'until': 305.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23971}.
<a id="trace-23971"></a>
<a id="trace-23973"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24047"></a>
<a id="trace-24049"></a>
- 305.30s–307.80s (×12), actor 5, squad 0 (trace 23971): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.05s, trace 23920. Next observer evidence: {'until': 305.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23986}.
<a id="trace-23979"></a>
- 305.30s–305.30s (×1), actor 9, squad 1 (trace 23979): support established: element delivered fire on threat area. Knowledge: actor memory at 305.00s, trace 23912. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24499}.
<a id="trace-24058"></a>
- 307.95s–307.95s (×1), actor 4, squad 0 (trace 24058): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 305.00s, trace 23909. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24119}.
<a id="trace-24059"></a>
- 307.95s–307.95s (×1), actor 4, squad 0 (trace 24059): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 305.00s, trace 23909. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24119}.
<a id="trace-24119"></a>
<a id="trace-24121"></a>
<a id="trace-24135"></a>
<a id="trace-24137"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
<a id="trace-24166"></a>
<a id="trace-24168"></a>
<a id="trace-24238"></a>
<a id="trace-24240"></a>
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24269"></a>
<a id="trace-24271"></a>
<a id="trace-24283"></a>
<a id="trace-24285"></a>
<a id="trace-24303"></a>
<a id="trace-24305"></a>
<a id="trace-24318"></a>
<a id="trace-24320"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
<a id="trace-24350"></a>
<a id="trace-24352"></a>
<a id="trace-24371"></a>
<a id="trace-24373"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24465"></a>
<a id="trace-24467"></a>
<a id="trace-24490"></a>
<a id="trace-24492"></a>
<a id="trace-24504"></a>
<a id="trace-24506"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24567"></a>
<a id="trace-24569"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24595"></a>
<a id="trace-24597"></a>
<a id="trace-24602"></a>
<a id="trace-24604"></a>
<a id="trace-24676"></a>
<a id="trace-24678"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24723"></a>
<a id="trace-24725"></a>
<a id="trace-24746"></a>
<a id="trace-24748"></a>
<a id="trace-24757"></a>
<a id="trace-24759"></a>
<a id="trace-24774"></a>
<a id="trace-24776"></a>
<a id="trace-24785"></a>
<a id="trace-24787"></a>
<a id="trace-24807"></a>
<a id="trace-24809"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24889"></a>
<a id="trace-24891"></a>
<a id="trace-24897"></a>
<a id="trace-24899"></a>
<a id="trace-24921"></a>
<a id="trace-24923"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24943"></a>
<a id="trace-24945"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-25007"></a>
<a id="trace-25009"></a>
- 308.30s–329.30s (×86), actor 5, squad 0 (trace 24119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.05s, trace 23920. Next observer evidence: {'until': 308.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.49101963098343876, 'next_transition': 24135}.
<a id="trace-24499"></a>
- 316.35s–316.35s (×1), actor 9, squad 1 (trace 24499): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 315.00s, trace 24394. Next observer evidence: {'until': 340, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2429}.
<a id="trace-25012"></a>
- 329.30s–329.30s (×1), actor 4, squad 0 (trace 25012): NeedSupport. Knowledge: actor memory at 325.00s, trace 24826. Next observer evidence: {'until': 329.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.221362438146015, 'next_transition': 25021}.
<a id="trace-25021"></a>
<a id="trace-25023"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25108"></a>
<a id="trace-25110"></a>
<a id="trace-25135"></a>
<a id="trace-25137"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25160"></a>
<a id="trace-25162"></a>
- 329.80s–332.30s (×12), actor 5, squad 0 (trace 25021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 24827. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8284423336545821, 'next_transition': 25092}.
<a id="trace-25172"></a>
- 332.45s–332.45s (×1), actor 4, squad 0 (trace 25172): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 330.00s, trace 25030. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42025753359712587, 'next_transition': 25182}.
<a id="trace-25173"></a>
- 332.45s–332.45s (×1), actor 4, squad 0 (trace 25173): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 330.00s, trace 25030. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42025753359712587, 'next_transition': 25182}.
<a id="trace-25182"></a>
<a id="trace-25184"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25240"></a>
<a id="trace-25242"></a>
<a id="trace-25248"></a>
<a id="trace-25250"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25356"></a>
<a id="trace-25358"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25383"></a>
<a id="trace-25385"></a>
<a id="trace-25395"></a>
<a id="trace-25397"></a>
<a id="trace-25409"></a>
<a id="trace-25411"></a>
<a id="trace-25422"></a>
<a id="trace-25424"></a>
<a id="trace-25430"></a>
<a id="trace-25432"></a>
<a id="trace-25500"></a>
<a id="trace-25502"></a>
<a id="trace-25511"></a>
<a id="trace-25513"></a>
<a id="trace-25529"></a>
<a id="trace-25531"></a>
<a id="trace-25537"></a>
<a id="trace-25539"></a>
<a id="trace-25550"></a>
<a id="trace-25552"></a>
<a id="trace-25563"></a>
<a id="trace-25565"></a>
<a id="trace-25575"></a>
<a id="trace-25577"></a>
<a id="trace-25585"></a>
<a id="trace-25587"></a>
<a id="trace-25598"></a>
<a id="trace-25600"></a>
<a id="trace-25607"></a>
<a id="trace-25609"></a>
<a id="trace-25676"></a>
<a id="trace-25678"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
<a id="trace-25703"></a>
<a id="trace-25705"></a>
<a id="trace-25712"></a>
<a id="trace-25714"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25737"></a>
<a id="trace-25739"></a>
<a id="trace-25750"></a>
<a id="trace-25752"></a>
<a id="trace-25760"></a>
<a id="trace-25762"></a>
<a id="trace-25772"></a>
<a id="trace-25774"></a>
<a id="trace-25781"></a>
<a id="trace-25783"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25860"></a>
<a id="trace-25862"></a>
<a id="trace-25875"></a>
<a id="trace-25877"></a>
<a id="trace-25884"></a>
<a id="trace-25886"></a>
<a id="trace-25900"></a>
<a id="trace-25902"></a>
<a id="trace-25912"></a>
<a id="trace-25914"></a>
- 332.80s–352.80s (×82), actor 5, squad 0 (trace 25182): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 25031. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7991541687953644, 'next_transition': 25207}.
<a id="trace-2429"></a>
- 340.05s–340.05s (×1), actor 5, squad 1 (events line 2429): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25445"></a>
- 340.05s–340.05s (×1), actor 5, squad 1 (trace 25445): renew committed intent (75 s lifetime). Knowledge: actor memory at 340.05s, trace 25445. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-25920"></a>
- 353.00s–353.00s (×1), actor 4, squad 0 (trace 25920): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 350.00s, trace 25789. Next observer evidence: None.
<a id="trace-25923"></a>
- 353.05s–353.05s (×1), actor 4, squad 0 (trace 25923): MoveTactically. Knowledge: actor memory at 350.00s, trace 25789. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25931}.
<a id="trace-25924"></a>
- 353.05s–353.05s (×1), actor 4, squad 0 (trace 25924): received platoon directive. Knowledge: actor memory at 350.00s, trace 25789. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25931}.
<a id="trace-25931"></a>
<a id="trace-25933"></a>
<a id="trace-25944"></a>
<a id="trace-25946"></a>
<a id="trace-25956"></a>
<a id="trace-25958"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26044"></a>
<a id="trace-26046"></a>
<a id="trace-26064"></a>
<a id="trace-26066"></a>
- 353.30s–356.30s (×14), actor 5, squad 0 (trace 25931): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 25790. Next observer evidence: {'until': 353.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25944}.
<a id="trace-2459"></a>
- 356.55s–356.55s (×1), actor 5, squad 0 (events line 2459): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26071"></a>
- 356.55s–356.55s (×1), actor 5, squad 0 (trace 26071): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373619 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 356.55s, trace 26071. Next observer evidence: {'until': 356.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240000000000106, 'next_transition': 26077}.
<a id="trace-26072"></a>
- 356.55s–356.55s (×1), actor 5, squad 0 (trace 26072): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373619 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 356.55s, trace 26072. Next observer evidence: {'until': 356.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240000000000106, 'next_transition': 26077}.
<a id="trace-26077"></a>
<a id="trace-26079"></a>
<a id="trace-26096"></a>
<a id="trace-26098"></a>
<a id="trace-26106"></a>
<a id="trace-26108"></a>
- 356.80s–357.80s (×6), actor 5, squad 0 (trace 26077): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 356.55s, trace 26072. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559999999999907, 'next_transition': 26096}.
<a id="trace-26112"></a>
- 357.90s–357.90s (×1), actor 4, squad 0 (trace 26112): Withdraw to received rally. Knowledge: actor memory at 355.00s, trace 25974. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26128}.
<a id="trace-26113"></a>
- 357.90s–357.90s (×1), actor 4, squad 0 (trace 26113): rearward bound: one stationary suppressing element. Knowledge: actor memory at 355.00s, trace 25974. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26128}.
<a id="trace-26128"></a>
<a id="trace-26130"></a>
<a id="trace-26141"></a>
<a id="trace-26143"></a>
<a id="trace-26154"></a>
<a id="trace-26156"></a>
<a id="trace-26169"></a>
<a id="trace-26171"></a>
- 358.30s–359.80s (×8), actor 5, squad 0 (trace 26128): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 356.55s, trace 26072. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26141}.

## Net delivery

299 matched order/radio deliveries; 517 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.370s; maximum 2.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3882: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3883: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3884: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3885: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3904: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3909: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3910: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3912: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3914: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3915: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3916: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3917: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3919: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3920: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3921: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3922: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3923: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4784: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4789: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4790: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4792: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4794: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4795: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4796: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4797: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4799: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4800: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4801: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4802: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4803: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5481: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5482: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5486: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5487: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5489: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5491: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5492: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5493: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5494: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5496: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5497: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5498: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5499: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5500: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5600: estimate 10.67; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5601: estimate 10.67; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6937: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6941: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6942: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6944: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6946: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6947: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6948: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6949: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6951: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6952: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6953: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6954: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6955: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7101: estimate 10.44; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7102: estimate 10.44; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 7328: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7332: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7333: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7335: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7337: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7338: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7339: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7340: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7342: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7343: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7344: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7345: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7346: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 9006: estimate 11.14; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 9007: estimate 11.14; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 9030: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9032: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9034: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9035: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 9037: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9039: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9040: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9041: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9042: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9044: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9045: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9046: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9047: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9048: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9648: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9649: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9651: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9652: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 9654: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9656: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9657: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9658: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9659: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9660: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9661: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9662: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9663: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9664: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9665: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 10967: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10968: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10970: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10971: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 10973: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10975: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10976: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10977: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10978: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10979: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10980: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10981: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10982: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10983: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10984: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.05s leader 5, trace 10993: estimate 12.76; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 11103: estimate 12.72; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 11104: estimate 12.72; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11324: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11325: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11327: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11328: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11331: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11332: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11333: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11334: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11335: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11336: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11337: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11338: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11339: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11340: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 11750: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11751: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11753: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11754: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11756: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11757: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11758: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11759: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11760: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11761: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11762: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11763: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11764: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11765: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11766: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12403: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12404: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12406: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12407: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12409: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12410: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12411: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12412: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12413: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12414: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12415: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12416: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12417: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12418: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12419: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 13317: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13318: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13320: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13321: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13323: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13324: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13325: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13326: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13327: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13328: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13329: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13330: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13331: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13332: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13333: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13553: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13554: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13556: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13557: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13558: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13559: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13560: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13561: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13562: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13563: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13564: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13565: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13566: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 13570: estimate 11.99; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13859: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13860: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13862: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13863: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13864: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13865: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13866: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13867: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13868: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13869: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13870: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13871: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13872: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14137: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14138: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14139: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14140: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14141: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14142: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14143: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14144: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14145: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14146: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14147: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14148: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14149: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14150: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14151: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14368: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14369: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14370: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14371: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14372: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14373: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14374: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14375: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14376: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14377: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14378: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14379: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14380: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14381: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14382: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14805: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14806: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14807: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14808: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14809: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14810: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14811: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14812: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14813: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14814: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14815: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14816: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14817: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14818: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14819: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.05s leader 5, trace 14820: estimate 11.94; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.05s leader 5, trace 14821: estimate 11.94; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.05s leader 5, trace 14822: estimate 11.94; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.05s leader 5, trace 14823: estimate 11.94; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15222: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15223: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15224: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15225: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15226: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15227: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15228: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15229: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15230: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15231: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15232: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15233: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15234: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15235: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15236: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15455: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15456: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15457: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15458: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15459: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15460: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15461: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15462: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15463: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15464: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15465: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15466: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15467: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15468: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15469: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15697: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15698: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15699: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 15700: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15701: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15702: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15703: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15704: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15705: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15706: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15707: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15708: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15709: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15710: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15711: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 15935: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15936: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15937: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 15938: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 15939: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15940: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15941: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15942: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15943: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15944: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15945: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15946: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15947: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15948: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15949: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16282: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16283: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16284: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16285: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16286: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16287: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16288: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16289: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16290: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16291: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16292: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16293: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16294: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16521: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16522: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 16523: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16524: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16525: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16526: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16527: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16528: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16529: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16530: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16531: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16532: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16533: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16770: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16771: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 16772: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 16773: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16774: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16775: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16776: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16777: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16778: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16779: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16780: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16781: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16782: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16954: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16955: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 16956: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 16957: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16958: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 16959: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16960: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16961: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16962: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16963: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16964: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16965: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16966: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17169: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17170: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17171: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17172: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17173: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17174: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17175: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17176: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17177: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17178: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17179: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17180: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17181: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 17390: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17391: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 17392: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 17393: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17394: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17395: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17396: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17397: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17398: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17399: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17400: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17401: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17402: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17587: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17588: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 17589: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17590: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17591: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17592: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17593: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17594: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17595: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17596: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17597: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17598: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17599: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17916: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17917: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17918: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17919: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17920: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17921: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17922: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17923: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17924: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17925: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17926: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17927: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.05s leader 5, trace 17928: estimate 10.90; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.05s leader 5, trace 17929: estimate 10.90; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18204: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18205: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18206: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18207: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18208: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18209: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18210: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18211: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18212: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18213: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18214: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18407: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18408: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 18409: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18410: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18411: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18412: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18413: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18414: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18415: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18416: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18417: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18608: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18609: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 18610: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 18611: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18612: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18613: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18614: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18615: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18616: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18617: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18618: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 18808: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18809: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 18810: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 18811: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18812: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18813: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18814: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18815: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18816: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18817: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 19058: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 19059: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 19060: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 19061: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19062: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19063: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19064: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19065: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19066: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 19272: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19273: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 19274: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19275: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19276: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19277: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19278: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19279: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19280: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19453: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19454: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19455: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19456: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19457: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19458: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19459: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19460: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19461: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19626: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19627: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19628: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19629: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19630: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19631: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19632: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19633: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19634: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19804: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19805: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 19806: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19807: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19808: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19809: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19810: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19811: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19989: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19990: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 19991: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19992: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19993: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19994: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19995: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19996: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 20165: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 20166: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 20167: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20168: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20169: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20170: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20171: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20172: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 20343: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20344: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 20345: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20346: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20347: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20348: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20349: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20350: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.05s leader 5, trace 20353: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.05s leader 5, trace 20354: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 20516: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20517: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 20518: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20519: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20520: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20521: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20522: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20523: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 20690: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20691: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 20692: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20693: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20694: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20695: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20696: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20697: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20866: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20867: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 20868: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 20869: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20870: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20871: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20872: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20873: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 21041: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21042: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 21043: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21044: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21045: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21046: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21047: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21048: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 21216: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21217: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 21218: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21219: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21220: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21221: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21222: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21223: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 21395: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21396: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 21397: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21398: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21399: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21400: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21401: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21402: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 21568: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 21569: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 21570: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21571: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21572: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21573: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21574: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21575: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21738: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21739: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 21740: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21741: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21742: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21743: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21744: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21745: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21912: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21913: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 21914: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21915: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21916: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21917: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21918: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21919: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 22087: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22088: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 22089: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 22090: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22091: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22092: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22093: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22094: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 22254: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22255: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 22256: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22257: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22258: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22259: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22260: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22261: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 278.80s leader 5, trace 22407: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 278.80s leader 5, trace 22408: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 22429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 22430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 22431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22433: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22434: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22435: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22436: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.05s leader 5, trace 22439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.05s leader 5, trace 22440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.05s leader 5, trace 22441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 22763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 22765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 22974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 23221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 23222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 23223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 23224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 23435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 23437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 304.10s leader 5, trace 23869: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 23909: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 23910: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 23911: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 23912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23913: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23914: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23915: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23916: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.05s leader 5, trace 23919: estimate 4.92; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.05s leader 5, trace 23920: estimate 4.92; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 24177: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 24178: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 24179: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 24180: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 24181: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 24182: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 24183: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 24184: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 24185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 24186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 24391: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 24392: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 24393: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 24394: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 24395: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 24396: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 24397: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 24398: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 24399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 24400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 24611: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 24612: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 24613: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24614: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24615: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24616: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24617: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24618: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 24826: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 24827: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 24828: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 24829: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24830: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24831: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24832: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24833: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 25030: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 25031: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 25032: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 25033: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 25034: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 25035: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 25036: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 25037: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 25038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 25039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 25256: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 25257: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 25258: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 25259: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 25260: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 25261: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 25262: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 25263: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 25264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 25265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 25436: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 25437: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 25438: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 25439: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 25440: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 25441: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25442: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.05s leader 5, trace 25445: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 25616: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 25617: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 25618: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 25619: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 25620: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 25621: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25622: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 25789: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 25790: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 25791: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 25792: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 25793: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25794: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25795: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 25974: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 25975: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 25976: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 25977: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25978: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25979: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25980: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.55s leader 5, trace 26071: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.55s leader 5, trace 26072: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 26177: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 26178: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 26179: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 26180: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 26181: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 26182: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 26183: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 26184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 26185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Rook incapacitated
- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Soren incapacitated
- 1: Ash incapacitated
- 1: Kest incapacitated
- 1: Orin killed in action
- 1: Bram killed in action
- 1: Flint incapacitated
- 1: Reed incapacitated
- 1: Pike incapacitated

## Outcome attribution

- 100.05s, evidence 1578: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 100.05s, evidence 1579: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 100.05s, evidence 14820: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 100.05s, evidence 14821: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08157499999999995, 'next_transition': 14881}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 100.05s, evidence 14822: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 100.05s, evidence 14823: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14928}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 160.05s, evidence 1957: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340162722046801, 'next_transition': 17990}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 160.05s, evidence 1958: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 164, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18163}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 220.05s, evidence 2131: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20406}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 220.05s, evidence 2132: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 250, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 280.05s, evidence 2198: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 340.05s, evidence 2429: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 356.55s, evidence 2459: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 356.55s, evidence 26071: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373619 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 356.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240000000000106, 'next_transition': 26077}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 356.55s, evidence 26072: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373619 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 356.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240000000000106, 'next_transition': 26077}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
