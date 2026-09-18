# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/6/109/good-azure/battle-109-1789673756155177100`

## Battle summary

**Ember** · 339.2 s · 331 shots.

### Turning points

- 15.9s, squad 4: contact (events line 193). First recorded contact.
- 25.6s, squad 0: assault ([trace 3657](#trace-3657)). 29.5s, squad 0: new loss of own base of fire.
- 49.2s, squad 0: help call ([trace 5100](#trace-5100)). No completion observed before termination.
- 74.4s, squad 0: help call ([trace 6236](#trace-6236)). No completion observed before termination.
- 78.5s, squad 0: assault ([trace 6883](#trace-6883)). 79.5s, squad 0: advanced tactically.
- 108.0s, squad 0: assault ([trace 8598](#trace-8598)). 108.8s, squad 0: advanced tactically.
- 116.0s, squad 0: help call ([trace 9073](#trace-9073)). No completion observed before termination.
- 170.0s, squad 0: withdrawal ([trace 11035](#trace-11035)). 211.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 181.8s, squad 0: help call ([trace 11497](#trace-11497)). No completion observed before termination.
- 280.8s, squad 0: withdrawal ([trace 14273](#trace-14273)). 295.8s, squad 0: advanced tactically.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose new loss of own base of fire, broke contact and 3 further drill types; withdrew; 24 shots, 8/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 307 shots, 3/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 540](#trace-540)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 16.8s, squad 0 chose took cover and returned fire ([trace 1558](#trace-1558)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 539](#trace-539)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449922655883531, 'next_transition': 552}.
- 19.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.434988 retreat threshold=0.500000 initiative=delegated ([trace 2110](#trace-2110)). Following evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8999838778110532, 'next_transition': 2192}.

### Communication

174 matched deliveries (mean 0.52s, max 2.70s); 234 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.95s, squad 4, contact, evidence events line 193: First recorded contact; .
- 25.60s, squad 0, assault, evidence 3657: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 29.5s, squad 0: new loss of own base of fire.
- 49.20s, squad 0, help call, evidence 5100: NeedSupport; No completion observed before termination.
- 74.40s, squad 0, help call, evidence 6236: NeedSupport; No completion observed before termination.
- 78.50s, squad 0, assault, evidence 6883: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 79.5s, squad 0: advanced tactically.
- 108.05s, squad 0, assault, evidence 8598: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 108.8s, squad 0: advanced tactically.
- 116.00s, squad 0, help call, evidence 9073: NeedSupport; No completion observed before termination.
- 170.00s, squad 0, withdrawal, evidence 11035: BreakContact: believed ratio at least two without superiority; 211.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 181.75s, squad 0, help call, evidence 11497: NeedSupport; No completion observed before termination.
- 280.75s, squad 0, withdrawal, evidence 14273: BreakContact: believed ratio at least two without superiority; 295.8s, squad 0: advanced tactically.
- 295.75s, squad 0, help call, evidence 14758: NeedSupport; No completion observed before termination.
- 299.25s, squad 0, help call, evidence 14829: NeedSupport; No completion observed before termination.
- 315.40s, squad 0, withdrawal, evidence 15587: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 327.05s, squad 0, help call, evidence 15948: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703474817047219, 'next_transition': 452}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703474817047219, 'next_transition': 452}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703474817047219, 'next_transition': 452}.
<a id="trace-452"></a>
<a id="trace-473"></a>
<a id="trace-499"></a>
<a id="trace-516"></a>
<a id="trace-532"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599632238085847, 'next_transition': 473}.
<a id="trace-80"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 80): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449922655883531, 'next_transition': 552}.
<a id="trace-539"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 539): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449922655883531, 'next_transition': 552}.
<a id="trace-540"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 540): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 540. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449922655883531, 'next_transition': 552}.
<a id="trace-552"></a>
<a id="trace-575"></a>
<a id="trace-652"></a>
<a id="trace-669"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 552): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 540. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450191461973518, 'next_transition': 575}.
<a id="trace-671"></a>
<a id="trace-967"></a>
<a id="trace-997"></a>
<a id="trace-1028"></a>
<a id="trace-1082"></a>
<a id="trace-1130"></a>
<a id="trace-1145"></a>
<a id="trace-1164"></a>
<a id="trace-1248"></a>
<a id="trace-1267"></a>
<a id="trace-1283"></a>
<a id="trace-1304"></a>
<a id="trace-1350"></a>
<a id="trace-1367"></a>
<a id="trace-1384"></a>
<a id="trace-1425"></a>
<a id="trace-1500"></a>
<a id="trace-1516"></a>
<a id="trace-1539"></a>
<a id="trace-1557"></a>
<a id="trace-2008"></a>
<a id="trace-2063"></a>
<a id="trace-2072"></a>
<a id="trace-2109"></a>
<a id="trace-2194"></a>
<a id="trace-2211"></a>
<a id="trace-2223"></a>
<a id="trace-2235"></a>
<a id="trace-2251"></a>
<a id="trace-2265"></a>
<a id="trace-2281"></a>
<a id="trace-2299"></a>
<a id="trace-2336"></a>
<a id="trace-2415"></a>
<a id="trace-3795"></a>
<a id="trace-3817"></a>
<a id="trace-3830"></a>
<a id="trace-3843"></a>
<a id="trace-3857"></a>
<a id="trace-3871"></a>
<a id="trace-3892"></a>
<a id="trace-4185"></a>
<a id="trace-4266"></a>
<a id="trace-4286"></a>
<a id="trace-4295"></a>
<a id="trace-4310"></a>
<a id="trace-4331"></a>
<a id="trace-4349"></a>
<a id="trace-4364"></a>
<a id="trace-4371"></a>
<a id="trace-4391"></a>
<a id="trace-4401"></a>
<a id="trace-4480"></a>
<a id="trace-4494"></a>
<a id="trace-4529"></a>
<a id="trace-4543"></a>
<a id="trace-4553"></a>
<a id="trace-4570"></a>
<a id="trace-4584"></a>
<a id="trace-4594"></a>
<a id="trace-4604"></a>
<a id="trace-4685"></a>
<a id="trace-4701"></a>
<a id="trace-4718"></a>
<a id="trace-4730"></a>
<a id="trace-4754"></a>
<a id="trace-4873"></a>
<a id="trace-4889"></a>
<a id="trace-4913"></a>
<a id="trace-4936"></a>
<a id="trace-5012"></a>
<a id="trace-5027"></a>
<a id="trace-5045"></a>
<a id="trace-5050"></a>
<a id="trace-5059"></a>
<a id="trace-5067"></a>
<a id="trace-5084"></a>
<a id="trace-5200"></a>
<a id="trace-5210"></a>
<a id="trace-5221"></a>
<a id="trace-5228"></a>
<a id="trace-5244"></a>
<a id="trace-5265"></a>
<a id="trace-5274"></a>
<a id="trace-5300"></a>
<a id="trace-5378"></a>
<a id="trace-5385"></a>
<a id="trace-5398"></a>
<a id="trace-5416"></a>
<a id="trace-5420"></a>
<a id="trace-5428"></a>
<a id="trace-5437"></a>
<a id="trace-5445"></a>
<a id="trace-5453"></a>
<a id="trace-5528"></a>
<a id="trace-5734"></a>
<a id="trace-5746"></a>
<a id="trace-5773"></a>
<a id="trace-5777"></a>
<a id="trace-5788"></a>
<a id="trace-5806"></a>
<a id="trace-5893"></a>
<a id="trace-5905"></a>
<a id="trace-5912"></a>
<a id="trace-5920"></a>
<a id="trace-5942"></a>
<a id="trace-5952"></a>
<a id="trace-5963"></a>
<a id="trace-5968"></a>
<a id="trace-6047"></a>
<a id="trace-6056"></a>
<a id="trace-6065"></a>
<a id="trace-6072"></a>
<a id="trace-6189"></a>
<a id="trace-6201"></a>
<a id="trace-6229"></a>
<a id="trace-6288"></a>
<a id="trace-6368"></a>
<a id="trace-6394"></a>
<a id="trace-6418"></a>
<a id="trace-6452"></a>
<a id="trace-6458"></a>
<a id="trace-6924"></a>
<a id="trace-6973"></a>
<a id="trace-7048"></a>
<a id="trace-7117"></a>
<a id="trace-7145"></a>
<a id="trace-7157"></a>
<a id="trace-7168"></a>
<a id="trace-7176"></a>
<a id="trace-7182"></a>
<a id="trace-7286"></a>
<a id="trace-7301"></a>
<a id="trace-7312"></a>
<a id="trace-7319"></a>
<a id="trace-7325"></a>
<a id="trace-7328"></a>
<a id="trace-7335"></a>
<a id="trace-7341"></a>
<a id="trace-7408"></a>
<a id="trace-7422"></a>
<a id="trace-7447"></a>
<a id="trace-7608"></a>
<a id="trace-7620"></a>
<a id="trace-7635"></a>
<a id="trace-7726"></a>
<a id="trace-7732"></a>
<a id="trace-7739"></a>
<a id="trace-7748"></a>
<a id="trace-7762"></a>
<a id="trace-7776"></a>
<a id="trace-7852"></a>
<a id="trace-7861"></a>
<a id="trace-7980"></a>
<a id="trace-7991"></a>
<a id="trace-8008"></a>
<a id="trace-8016"></a>
<a id="trace-8024"></a>
<a id="trace-8032"></a>
<a id="trace-8039"></a>
<a id="trace-8055"></a>
<a id="trace-8137"></a>
<a id="trace-8146"></a>
<a id="trace-8151"></a>
<a id="trace-8171"></a>
<a id="trace-8654"></a>
<a id="trace-8662"></a>
<a id="trace-8790"></a>
<a id="trace-8802"></a>
<a id="trace-8886"></a>
<a id="trace-8891"></a>
<a id="trace-8899"></a>
<a id="trace-8902"></a>
<a id="trace-8913"></a>
<a id="trace-8971"></a>
<a id="trace-8981"></a>
<a id="trace-8985"></a>
<a id="trace-8990"></a>
<a id="trace-9063"></a>
<a id="trace-9070"></a>
<a id="trace-9084"></a>
<a id="trace-9091"></a>
<a id="trace-9096"></a>
<a id="trace-9118"></a>
<a id="trace-9126"></a>
<a id="trace-9134"></a>
<a id="trace-9203"></a>
<a id="trace-9214"></a>
<a id="trace-9223"></a>
<a id="trace-9226"></a>
<a id="trace-9231"></a>
<a id="trace-9326"></a>
<a id="trace-9331"></a>
<a id="trace-9334"></a>
<a id="trace-9339"></a>
<a id="trace-9342"></a>
<a id="trace-9355"></a>
<a id="trace-9424"></a>
<a id="trace-9427"></a>
<a id="trace-9436"></a>
<a id="trace-9439"></a>
<a id="trace-9444"></a>
<a id="trace-9447"></a>
<a id="trace-9454"></a>
<a id="trace-9457"></a>
<a id="trace-9462"></a>
<a id="trace-9467"></a>
<a id="trace-9535"></a>
<a id="trace-9538"></a>
<a id="trace-9546"></a>
<a id="trace-9549"></a>
<a id="trace-9555"></a>
<a id="trace-9566"></a>
<a id="trace-9569"></a>
<a id="trace-9574"></a>
<a id="trace-9579"></a>
<a id="trace-9647"></a>
<a id="trace-9650"></a>
<a id="trace-9672"></a>
<a id="trace-9680"></a>
<a id="trace-9684"></a>
<a id="trace-9691"></a>
<a id="trace-9694"></a>
<a id="trace-9702"></a>
<a id="trace-9706"></a>
<a id="trace-9780"></a>
<a id="trace-9787"></a>
<a id="trace-9792"></a>
<a id="trace-9802"></a>
<a id="trace-9820"></a>
<a id="trace-9822"></a>
<a id="trace-9828"></a>
<a id="trace-9832"></a>
<a id="trace-10058"></a>
<a id="trace-10063"></a>
<a id="trace-10083"></a>
<a id="trace-10102"></a>
<a id="trace-10120"></a>
<a id="trace-10132"></a>
<a id="trace-10215"></a>
<a id="trace-10233"></a>
<a id="trace-10242"></a>
<a id="trace-10251"></a>
<a id="trace-10258"></a>
<a id="trace-10267"></a>
<a id="trace-10273"></a>
<a id="trace-10425"></a>
<a id="trace-10515"></a>
<a id="trace-10553"></a>
<a id="trace-10596"></a>
<a id="trace-10709"></a>
<a id="trace-10723"></a>
<a id="trace-10740"></a>
<a id="trace-10809"></a>
<a id="trace-10839"></a>
<a id="trace-10962"></a>
<a id="trace-10982"></a>
<a id="trace-10995"></a>
<a id="trace-11006"></a>
<a id="trace-11020"></a>
<a id="trace-11192"></a>
<a id="trace-11218"></a>
<a id="trace-11225"></a>
<a id="trace-11248"></a>
<a id="trace-11259"></a>
<a id="trace-11266"></a>
<a id="trace-11274"></a>
<a id="trace-11281"></a>
<a id="trace-11350"></a>
<a id="trace-11355"></a>
<a id="trace-11363"></a>
<a id="trace-11367"></a>
<a id="trace-11376"></a>
<a id="trace-11387"></a>
<a id="trace-11391"></a>
<a id="trace-11397"></a>
<a id="trace-11469"></a>
<a id="trace-11478"></a>
<a id="trace-11491"></a>
<a id="trace-11500"></a>
<a id="trace-11511"></a>
<a id="trace-11517"></a>
<a id="trace-11527"></a>
<a id="trace-11534"></a>
<a id="trace-11542"></a>
<a id="trace-11549"></a>
<a id="trace-11637"></a>
<a id="trace-11644"></a>
<a id="trace-11659"></a>
<a id="trace-11669"></a>
<a id="trace-11675"></a>
<a id="trace-11681"></a>
<a id="trace-11744"></a>
<a id="trace-11753"></a>
<a id="trace-11759"></a>
<a id="trace-11779"></a>
<a id="trace-11789"></a>
<a id="trace-11796"></a>
<a id="trace-11863"></a>
<a id="trace-11877"></a>
<a id="trace-11886"></a>
<a id="trace-11889"></a>
<a id="trace-11895"></a>
<a id="trace-11901"></a>
<a id="trace-11967"></a>
<a id="trace-11971"></a>
<a id="trace-11983"></a>
<a id="trace-11988"></a>
<a id="trace-11998"></a>
<a id="trace-12075"></a>
<a id="trace-12083"></a>
<a id="trace-12087"></a>
<a id="trace-12097"></a>
<a id="trace-12103"></a>
<a id="trace-12106"></a>
<a id="trace-12112"></a>
<a id="trace-12117"></a>
<a id="trace-12198"></a>
<a id="trace-12207"></a>
<a id="trace-12214"></a>
<a id="trace-12224"></a>
<a id="trace-12232"></a>
<a id="trace-12241"></a>
<a id="trace-12247"></a>
<a id="trace-12254"></a>
<a id="trace-12258"></a>
<a id="trace-12327"></a>
<a id="trace-12330"></a>
<a id="trace-12339"></a>
<a id="trace-12353"></a>
<a id="trace-12360"></a>
<a id="trace-12364"></a>
<a id="trace-12370"></a>
<a id="trace-12372"></a>
<a id="trace-12446"></a>
<a id="trace-12449"></a>
<a id="trace-12462"></a>
<a id="trace-12469"></a>
<a id="trace-12477"></a>
<a id="trace-12494"></a>
<a id="trace-12497"></a>
<a id="trace-12502"></a>
<a id="trace-12506"></a>
<a id="trace-12571"></a>
<a id="trace-12579"></a>
<a id="trace-12582"></a>
<a id="trace-12589"></a>
<a id="trace-12595"></a>
<a id="trace-12618"></a>
<a id="trace-12694"></a>
<a id="trace-12697"></a>
<a id="trace-12702"></a>
<a id="trace-12705"></a>
<a id="trace-12711"></a>
<a id="trace-12716"></a>
<a id="trace-12722"></a>
<a id="trace-12725"></a>
<a id="trace-12732"></a>
<a id="trace-12736"></a>
<a id="trace-12817"></a>
<a id="trace-12831"></a>
<a id="trace-12837"></a>
<a id="trace-12841"></a>
<a id="trace-12847"></a>
<a id="trace-12849"></a>
<a id="trace-12855"></a>
<a id="trace-12859"></a>
<a id="trace-12925"></a>
<a id="trace-12930"></a>
<a id="trace-12935"></a>
<a id="trace-12943"></a>
<a id="trace-12956"></a>
<a id="trace-12974"></a>
<a id="trace-12976"></a>
<a id="trace-12981"></a>
<a id="trace-12985"></a>
<a id="trace-13053"></a>
<a id="trace-13058"></a>
<a id="trace-13062"></a>
<a id="trace-13070"></a>
<a id="trace-13074"></a>
<a id="trace-13085"></a>
<a id="trace-13087"></a>
<a id="trace-13096"></a>
<a id="trace-13111"></a>
<a id="trace-13177"></a>
<a id="trace-13180"></a>
<a id="trace-13185"></a>
<a id="trace-13188"></a>
<a id="trace-13198"></a>
<a id="trace-13206"></a>
<a id="trace-13213"></a>
<a id="trace-13221"></a>
<a id="trace-13289"></a>
<a id="trace-13296"></a>
<a id="trace-13315"></a>
<a id="trace-13321"></a>
<a id="trace-13330"></a>
<a id="trace-13332"></a>
<a id="trace-13338"></a>
<a id="trace-13342"></a>
<a id="trace-13408"></a>
<a id="trace-13421"></a>
<a id="trace-13425"></a>
<a id="trace-13435"></a>
<a id="trace-13440"></a>
<a id="trace-13460"></a>
<a id="trace-13462"></a>
<a id="trace-13470"></a>
<a id="trace-13535"></a>
<a id="trace-13592"></a>
<a id="trace-13597"></a>
<a id="trace-13609"></a>
<a id="trace-13629"></a>
<a id="trace-13632"></a>
<a id="trace-13726"></a>
<a id="trace-13736"></a>
<a id="trace-13744"></a>
<a id="trace-13748"></a>
<a id="trace-13764"></a>
<a id="trace-13771"></a>
<a id="trace-14045"></a>
<a id="trace-14130"></a>
<a id="trace-14148"></a>
<a id="trace-14156"></a>
<a id="trace-14167"></a>
<a id="trace-14173"></a>
<a id="trace-14267"></a>
<a id="trace-14358"></a>
<a id="trace-14370"></a>
<a id="trace-14400"></a>
<a id="trace-14413"></a>
<a id="trace-14443"></a>
<a id="trace-14517"></a>
<a id="trace-14525"></a>
<a id="trace-14527"></a>
<a id="trace-14535"></a>
<a id="trace-14544"></a>
<a id="trace-14547"></a>
<a id="trace-14556"></a>
<a id="trace-14633"></a>
<a id="trace-14641"></a>
<a id="trace-14650"></a>
<a id="trace-14656"></a>
<a id="trace-14666"></a>
<a id="trace-14671"></a>
<a id="trace-14675"></a>
<a id="trace-14678"></a>
<a id="trace-14683"></a>
<a id="trace-14746"></a>
<a id="trace-14761"></a>
<a id="trace-14797"></a>
<a id="trace-14800"></a>
<a id="trace-14808"></a>
<a id="trace-14816"></a>
<a id="trace-14823"></a>
<a id="trace-14827"></a>
<a id="trace-14835"></a>
<a id="trace-14843"></a>
<a id="trace-14909"></a>
<a id="trace-14939"></a>
<a id="trace-14953"></a>
<a id="trace-14957"></a>
<a id="trace-14966"></a>
<a id="trace-14970"></a>
<a id="trace-14982"></a>
<a id="trace-14997"></a>
<a id="trace-15069"></a>
<a id="trace-15078"></a>
<a id="trace-15091"></a>
<a id="trace-15095"></a>
<a id="trace-15102"></a>
<a id="trace-15305"></a>
<a id="trace-15313"></a>
<a id="trace-15396"></a>
<a id="trace-15478"></a>
<a id="trace-15483"></a>
<a id="trace-15495"></a>
<a id="trace-15497"></a>
<a id="trace-15517"></a>
<a id="trace-15584"></a>
<a id="trace-15657"></a>
<a id="trace-15673"></a>
<a id="trace-15688"></a>
<a id="trace-15695"></a>
<a id="trace-15703"></a>
<a id="trace-15708"></a>
<a id="trace-15731"></a>
<a id="trace-15806"></a>
<a id="trace-15817"></a>
<a id="trace-15832"></a>
<a id="trace-15947"></a>
<a id="trace-15954"></a>
<a id="trace-15963"></a>
<a id="trace-15965"></a>
<a id="trace-15976"></a>
<a id="trace-15984"></a>
<a id="trace-16056"></a>
<a id="trace-16067"></a>
<a id="trace-16074"></a>
<a id="trace-16080"></a>
<a id="trace-16086"></a>
<a id="trace-16095"></a>
<a id="trace-16103"></a>
<a id="trace-16108"></a>
<a id="trace-16183"></a>
<a id="trace-16189"></a>
<a id="trace-16195"></a>
<a id="trace-16199"></a>
<a id="trace-16206"></a>
<a id="trace-16210"></a>
- 5.70s–338.80s (×511), actor 37, squad 4 (trace 671): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 595. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039375, 'next_transition': 967}.
<a id="trace-681"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 681): received platoon directive. Knowledge: actor memory at 5.00s, trace 582. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630007766847202, 'next_transition': 965}.
<a id="trace-965"></a>
<a id="trace-995"></a>
<a id="trace-1026"></a>
<a id="trace-1055"></a>
<a id="trace-1080"></a>
<a id="trace-1128"></a>
<a id="trace-1143"></a>
<a id="trace-1162"></a>
<a id="trace-1246"></a>
<a id="trace-1265"></a>
<a id="trace-1281"></a>
<a id="trace-1302"></a>
<a id="trace-1327"></a>
<a id="trace-1348"></a>
<a id="trace-1365"></a>
<a id="trace-1382"></a>
<a id="trace-1405"></a>
<a id="trace-1423"></a>
<a id="trace-1498"></a>
<a id="trace-1514"></a>
<a id="trace-1537"></a>
<a id="trace-1555"></a>
- 6.20s–16.75s (×22), actor 5, squad 0 (trace 965): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 587. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2182319221344224, 'next_transition': 995}.
<a id="trace-1558"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1558): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6926707733518424, 'next_transition': 2006}.
<a id="trace-1559"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1559): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6926707733518424, 'next_transition': 2006}.
<a id="trace-1560"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1560): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1427. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6926707733518424, 'next_transition': 2006}.
<a id="trace-2006"></a>
<a id="trace-2025"></a>
<a id="trace-2061"></a>
<a id="trace-2070"></a>
<a id="trace-2086"></a>
<a id="trace-2107"></a>
- 17.25s–19.75s (×6), actor 5, squad 0 (trace 2006): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1432. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39762133962367163, 'next_transition': 2025}.
<a id="trace-264"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 264): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2110"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.434988 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2110. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8999838778110532, 'next_transition': 2192}.
<a id="trace-2111"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2111): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.434988 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2111. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8999838778110532, 'next_transition': 2192}.
<a id="trace-2192"></a>
<a id="trace-2209"></a>
<a id="trace-2221"></a>
<a id="trace-2233"></a>
<a id="trace-2249"></a>
- 20.25s–22.25s (×5), actor 5, squad 0 (trace 2192): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2121. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9000023850690227, 'next_transition': 2209}.
<a id="trace-2258"></a>
- 22.50s–22.50s (×1), actor 1, squad 0 (trace 2258): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2117. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4096394684657984, 'next_transition': 2263}.
<a id="trace-2263"></a>
<a id="trace-2279"></a>
<a id="trace-2297"></a>
<a id="trace-2314"></a>
<a id="trace-2334"></a>
<a id="trace-2413"></a>
- 22.75s–25.25s (×6), actor 5, squad 0 (trace 2263): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2121. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0412151654443227, 'next_transition': 2279}.
<a id="trace-2423"></a>
- 25.60s–25.60s (×1), actor 1, squad 0 (trace 2423): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: None.
<a id="trace-3657"></a>
- 25.60s–25.60s (×1), actor 1, squad 0 (trace 3657): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: None.
<a id="trace-3658"></a>
- 25.60s–25.60s (×1), actor 1, squad 0 (trace 3658): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: None.
<a id="trace-3781"></a>
- 25.60s–25.60s (×1), actor 1, squad 0 (trace 3781): Assaulting. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: None.
<a id="trace-3793"></a>
<a id="trace-3815"></a>
<a id="trace-3828"></a>
<a id="trace-3841"></a>
<a id="trace-3855"></a>
<a id="trace-3869"></a>
<a id="trace-3880"></a>
<a id="trace-3890"></a>
- 25.75s–29.25s (×8), actor 5, squad 0 (trace 3793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2345. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2700001807444596, 'next_transition': 3815}.
<a id="trace-3900"></a>
- 29.45s–29.45s (×1), actor 1, squad 0 (trace 3900): new loss of own base of fire. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000921904030132, 'next_transition': 4183}.
<a id="trace-3901"></a>
- 29.45s–29.45s (×1), actor 1, squad 0 (trace 3901): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000921904030132, 'next_transition': 4183}.
<a id="trace-4183"></a>
<a id="trace-4264"></a>
<a id="trace-4284"></a>
<a id="trace-4293"></a>
<a id="trace-4308"></a>
<a id="trace-4329"></a>
<a id="trace-4347"></a>
<a id="trace-4362"></a>
<a id="trace-4369"></a>
<a id="trace-4389"></a>
<a id="trace-4399"></a>
<a id="trace-4478"></a>
<a id="trace-4492"></a>
<a id="trace-4511"></a>
<a id="trace-4527"></a>
<a id="trace-4541"></a>
<a id="trace-4551"></a>
<a id="trace-4568"></a>
<a id="trace-4582"></a>
<a id="trace-4592"></a>
<a id="trace-4602"></a>
<a id="trace-4683"></a>
<a id="trace-4699"></a>
<a id="trace-4716"></a>
<a id="trace-4728"></a>
<a id="trace-4744"></a>
<a id="trace-4752"></a>
- 29.75s–42.75s (×27), actor 5, squad 0 (trace 4183): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2345. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4049955470890021, 'next_transition': 4264}.
<a id="trace-4756"></a>
- 42.85s–42.85s (×1), actor 1, squad 0 (trace 4756): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 4606. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03709139378915303, 'next_transition': 4871}.
<a id="trace-4757"></a>
- 42.85s–42.85s (×1), actor 1, squad 0 (trace 4757): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 4606. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03709139378915303, 'next_transition': 4871}.
<a id="trace-4871"></a>
<a id="trace-4887"></a>
<a id="trace-4911"></a>
<a id="trace-4934"></a>
<a id="trace-5010"></a>
<a id="trace-5025"></a>
<a id="trace-5043"></a>
<a id="trace-5048"></a>
<a id="trace-5057"></a>
<a id="trace-5065"></a>
<a id="trace-5082"></a>
<a id="trace-5093"></a>
- 43.25s–48.75s (×12), actor 5, squad 0 (trace 4871): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4610. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02633854870290889, 'next_transition': 4887}.
<a id="trace-5100"></a>
- 49.20s–49.20s (×1), actor 1, squad 0 (trace 5100): NeedSupport. Knowledge: actor memory at 45.00s, trace 4940. Next observer evidence: None.
<a id="trace-5108"></a>
<a id="trace-5121"></a>
<a id="trace-5198"></a>
<a id="trace-5208"></a>
<a id="trace-5219"></a>
<a id="trace-5226"></a>
<a id="trace-5242"></a>
<a id="trace-5249"></a>
<a id="trace-5263"></a>
<a id="trace-5272"></a>
<a id="trace-5287"></a>
<a id="trace-5298"></a>
<a id="trace-5376"></a>
<a id="trace-5395"></a>
<a id="trace-5413"></a>
<a id="trace-5425"></a>
<a id="trace-5442"></a>
<a id="trace-5525"></a>
- 49.25s–60.25s (×18), actor 5, squad 0 (trace 5108): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4944. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2592006609402588, 'next_transition': 5121}.
<a id="trace-5534"></a>
- 60.80s–60.80s (×1), actor 1, squad 0 (trace 5534): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 5457. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29204197761629785, 'next_transition': 5731}.
<a id="trace-5572"></a>
- 60.80s–60.80s (×1), actor 1, squad 0 (trace 5572): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 5457. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29204197761629785, 'next_transition': 5731}.
<a id="trace-5731"></a>
<a id="trace-5770"></a>
<a id="trace-5785"></a>
<a id="trace-5815"></a>
<a id="trace-5890"></a>
<a id="trace-5909"></a>
<a id="trace-5931"></a>
- 61.25s–67.25s (×7), actor 5, squad 0 (trace 5731): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 5461. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7308249401012318, 'next_transition': 5770}.
<a id="trace-6044"></a>
<a id="trace-6062"></a>
- 71.25s–72.25s (×2), actor 1, squad 0 (trace 6044): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 70.00s, trace 5973. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7292984612574112, 'next_transition': 6062}.
<a id="trace-6075"></a>
- 72.85s–72.85s (×1), actor 1, squad 0 (trace 6075): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 5973. Next observer evidence: {'until': 73, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09071295387098802, 'next_transition': 640}.
<a id="trace-6076"></a>
- 72.85s–72.85s (×1), actor 1, squad 0 (trace 6076): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 5973. Next observer evidence: {'until': 73, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09071295387098802, 'next_transition': 640}.
<a id="trace-640"></a>
- 73.15s–73.15s (×1), actor 1, squad 0 (events line 640): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6184"></a>
- 73.15s–73.15s (×1), actor 1, squad 0 (trace 6184): renew committed intent (75 s lifetime). Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 73.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09073162846549152, 'next_transition': 6202}.
<a id="trace-6202"></a>
- 73.85s–73.85s (×1), actor 1, squad 0 (trace 6202): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06357470783259647, 'next_transition': 6226}.
<a id="trace-6226"></a>
- 74.25s–74.25s (×1), actor 1, squad 0 (trace 6226): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.1526387593919658, 'next_transition': 6235}.
<a id="trace-6235"></a>
- 74.40s–74.40s (×1), actor 1, squad 0 (trace 6235): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341327358382693, 'next_transition': 6250}.
<a id="trace-6236"></a>
- 74.40s–74.40s (×1), actor 1, squad 0 (trace 6236): NeedSupport. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341327358382693, 'next_transition': 6250}.
<a id="trace-6250"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 6250): Reorganise: completed/failed drill. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3401957745181443, 'next_transition': 6365}.
<a id="trace-6255"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 6255): ReactToContact: cover and return fire. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3401957745181443, 'next_transition': 6365}.
<a id="trace-6256"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 6256): Reorganise complete: known contact. Knowledge: actor memory at 73.15s, trace 6184. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3401957745181443, 'next_transition': 6365}.
<a id="trace-6365"></a>
<a id="trace-6415"></a>
- 75.25s–76.25s (×2), actor 1, squad 0 (trace 6365): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 75.00s, trace 6290. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.538641335328992, 'next_transition': 6415}.
<a id="trace-6433"></a>
- 77.15s–77.15s (×1), actor 1, squad 0 (trace 6433): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6441}.
<a id="trace-6441"></a>
- 77.25s–77.25s (×1), actor 1, squad 0 (trace 6441): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 78.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6459}.
<a id="trace-6459"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6459): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6461"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6461): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6883"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6883): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6884"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6884): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6906"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6906): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6907"></a>
- 78.50s–78.50s (×1), actor 1, squad 0 (trace 6907): Assaulting. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6921"></a>
- 79.25s–79.25s (×1), actor 1, squad 0 (trace 6921): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 79.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6927}.
<a id="trace-6927"></a>
- 79.50s–79.50s (×1), actor 1, squad 0 (trace 6927): Reorganise: completed/failed drill. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19846665337028274, 'next_transition': 7045}.
<a id="trace-6932"></a>
- 79.50s–79.50s (×1), actor 1, squad 0 (trace 6932): MoveTactically. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19846665337028274, 'next_transition': 7045}.
<a id="trace-6933"></a>
- 79.50s–79.50s (×1), actor 1, squad 0 (trace 6933): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 77.15s, trace 6433. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19846665337028274, 'next_transition': 7045}.
<a id="trace-7045"></a>
- 80.25s–80.25s (×1), actor 1, squad 0 (trace 7045): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.00s, trace 6979. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11338826273031956, 'next_transition': 7052}.
<a id="trace-7052"></a>
- 80.50s–80.50s (×1), actor 1, squad 0 (trace 7052): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 6979. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05671071878401851, 'next_transition': 7132}.
<a id="trace-7132"></a>
<a id="trace-7154"></a>
<a id="trace-7173"></a>
<a id="trace-7187"></a>
- 81.25s–84.25s (×4), actor 1, squad 0 (trace 7132): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.00s, trace 6979. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.156067810444205, 'next_transition': 7154}.
<a id="trace-7197"></a>
- 84.85s–84.85s (×1), actor 1, squad 0 (trace 7197): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 6979. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7283}.
<a id="trace-7283"></a>
<a id="trace-7298"></a>
<a id="trace-7309"></a>
<a id="trace-7322"></a>
<a id="trace-7332"></a>
<a id="trace-7405"></a>
<a id="trace-7419"></a>
<a id="trace-7431"></a>
<a id="trace-7444"></a>
- 85.25s–93.25s (×9), actor 1, squad 0 (trace 7283): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 85.00s, trace 7222. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5118758492056449, 'next_transition': 7298}.
<a id="trace-7448"></a>
- 93.35s–93.35s (×1), actor 1, squad 0 (trace 7448): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 7343. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7617}.
<a id="trace-7617"></a>
<a id="trace-7701"></a>
<a id="trace-7723"></a>
<a id="trace-7736"></a>
- 94.25s–97.25s (×4), actor 1, squad 0 (trace 7617): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 90.00s, trace 7343. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4647641956955815, 'next_transition': 7701}.
<a id="trace-7755"></a>
- 98.15s–98.15s (×1), actor 1, squad 0 (trace 7755): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 98.15s, trace 7755. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34700324286700407, 'next_transition': 7759}.
<a id="trace-7759"></a>
<a id="trace-7773"></a>
<a id="trace-7849"></a>
- 98.25s–100.25s (×3), actor 1, squad 0 (trace 7759): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 98.15s, trace 7755. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9017529010339775, 'next_transition': 7773}.
<a id="trace-7863"></a>
- 101.00s–101.00s (×1), actor 1, squad 0 (trace 7863): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 7787. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499257926717383, 'next_transition': 7977}.
<a id="trace-7864"></a>
- 101.00s–101.00s (×1), actor 1, squad 0 (trace 7864): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 7787. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499257926717383, 'next_transition': 7977}.
<a id="trace-7977"></a>
<a id="trace-8005"></a>
<a id="trace-8021"></a>
<a id="trace-8036"></a>
- 101.25s–104.25s (×4), actor 1, squad 0 (trace 7977): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 7787. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599963960495835, 'next_transition': 8005}.
<a id="trace-8049"></a>
- 104.60s–104.60s (×1), actor 1, squad 0 (trace 8049): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 7787. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7262557363248323, 'next_transition': 8143}.
<a id="trace-8143"></a>
<a id="trace-8161"></a>
- 106.25s–107.25s (×2), actor 1, squad 0 (trace 8143): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9119441069853935, 'next_transition': 8161}.
<a id="trace-8176"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 8176): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8651}.
<a id="trace-8598"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 8598): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8651}.
<a id="trace-8599"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 8599): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8651}.
<a id="trace-8641"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 8641): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8651}.
<a id="trace-8642"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 8642): Assaulting. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8651}.
<a id="trace-8651"></a>
- 108.25s–108.25s (×1), actor 1, squad 0 (trace 8651): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8663}.
<a id="trace-8663"></a>
- 108.75s–108.75s (×1), actor 1, squad 0 (trace 8663): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8787}.
<a id="trace-8668"></a>
- 108.75s–108.75s (×1), actor 1, squad 0 (trace 8668): MoveTactically. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8787}.
<a id="trace-8669"></a>
- 108.75s–108.75s (×1), actor 1, squad 0 (trace 8669): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8787}.
<a id="trace-8787"></a>
<a id="trace-8883"></a>
<a id="trace-8896"></a>
<a id="trace-8910"></a>
- 109.25s–112.25s (×4), actor 1, squad 0 (trace 8787): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 8061. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03204999999999991, 'next_transition': 8883}.
<a id="trace-8922"></a>
- 112.70s–112.70s (×1), actor 1, squad 0 (trace 8922): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 8815. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8978}.
<a id="trace-8963"></a>
- 112.70s–112.70s (×1), actor 1, squad 0 (trace 8963): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 110.00s, trace 8815. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8978}.
<a id="trace-8978"></a>
<a id="trace-8987"></a>
<a id="trace-9060"></a>
- 113.25s–115.25s (×3), actor 1, squad 0 (trace 8978): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.00s, trace 8815. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8987}.
<a id="trace-9073"></a>
- 116.00s–116.00s (×1), actor 1, squad 0 (trace 9073): NeedSupport. Knowledge: actor memory at 115.00s, trace 8998. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003750000000000142, 'next_transition': 9081}.
<a id="trace-9081"></a>
<a id="trace-9093"></a>
<a id="trace-9110"></a>
<a id="trace-9123"></a>
- 116.25s–119.25s (×4), actor 1, squad 0 (trace 9081): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 115.00s, trace 8998. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2626999999999997, 'next_transition': 9093}.
<a id="trace-9220"></a>
<a id="trace-9228"></a>
- 123.25s–124.25s (×2), actor 3, squad 0 (trace 9220): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 120.00s, trace 9138. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9228}.
<a id="trace-1092"></a>
- 125.10s–125.10s (×1), actor 3, squad 0 (events line 1092): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9312}.
<a id="trace-9259"></a>
- 125.10s–125.10s (×1), actor 3, squad 0 (trace 9259): renew committed intent (75 s lifetime). Knowledge: actor memory at 125.10s, trace 9259. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9312}.
<a id="trace-9312"></a>
<a id="trace-9321"></a>
<a id="trace-9328"></a>
<a id="trace-9336"></a>
- 125.25s–128.30s (×4), actor 3, squad 0 (trace 9312): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 125.10s, trace 9259. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9321}.
<a id="trace-9343"></a>
- 129.25s–129.25s (×1), actor 3, squad 0 (trace 9343): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 125.10s, trace 9259. Next observer evidence: None.
<a id="trace-9346"></a>
<a id="trace-9421"></a>
<a id="trace-9433"></a>
<a id="trace-9441"></a>
<a id="trace-9451"></a>
<a id="trace-9459"></a>
<a id="trace-9532"></a>
<a id="trace-9543"></a>
<a id="trace-9552"></a>
<a id="trace-9563"></a>
<a id="trace-9571"></a>
<a id="trace-9644"></a>
<a id="trace-9655"></a>
- 129.30s–141.30s (×13), actor 3, squad 0 (trace 9346): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 125.10s, trace 9259. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9421}.
<a id="trace-1206"></a>
- 141.90s–141.90s (×1), actor 3, squad 0 (events line 1206): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9673"></a>
- 141.90s–141.90s (×1), actor 3, squad 0 (trace 9673): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.950207 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 141.90s, trace 9673. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9677}.
<a id="trace-9674"></a>
- 141.90s–141.90s (×1), actor 3, squad 0 (trace 9674): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.950207 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 141.90s, trace 9674. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9677}.
<a id="trace-9677"></a>
<a id="trace-9688"></a>
- 142.30s–143.30s (×2), actor 3, squad 0 (trace 9677): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 141.90s, trace 9674. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9688}.
<a id="trace-9697"></a>
- 144.25s–144.25s (×1), actor 3, squad 0 (trace 9697): received platoon directive. Knowledge: actor memory at 141.90s, trace 9674. Next observer evidence: None.
<a id="trace-9699"></a>
<a id="trace-9771"></a>
<a id="trace-9777"></a>
<a id="trace-9789"></a>
- 144.30s–147.30s (×4), actor 3, squad 0 (trace 9699): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 141.90s, trace 9674. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9771}.
<a id="trace-1212"></a>
- 147.55s–147.55s (×1), actor 3, squad 0 (events line 1212): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9817}.
<a id="trace-9793"></a>
- 147.55s–147.55s (×1), actor 3, squad 0 (trace 9793): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.55s, trace 9793. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9817}.
<a id="trace-9794"></a>
- 147.55s–147.55s (×1), actor 3, squad 0 (trace 9794): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.55s, trace 9794. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9817}.
<a id="trace-9817"></a>
- 148.30s–148.30s (×1), actor 3, squad 0 (trace 9817): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 147.55s, trace 9794. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9897}.
<a id="trace-9897"></a>
- 150.25s–150.25s (×1), actor 3, squad 0 (trace 9897): traveling. Knowledge: actor memory at 150.00s, trace 9835. Next observer evidence: None.
<a id="trace-9898"></a>
- 150.25s–150.25s (×1), actor 3, squad 0 (trace 9898): received platoon directive. Knowledge: actor memory at 150.00s, trace 9835. Next observer evidence: None.
<a id="trace-10055"></a>
<a id="trace-10071"></a>
<a id="trace-10089"></a>
<a id="trace-10112"></a>
<a id="trace-10129"></a>
<a id="trace-10212"></a>
<a id="trace-10230"></a>
<a id="trace-10248"></a>
<a id="trace-10264"></a>
<a id="trace-10278"></a>
- 150.30s–159.30s (×10), actor 3, squad 0 (trace 10055): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 150.00s, trace 9835. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26460335304837734, 'next_transition': 10071}.
<a id="trace-10281"></a>
- 159.30s–159.30s (×1), actor 3, squad 0 (trace 10281): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 10149. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.261436163755797, 'next_transition': 10422}.
<a id="trace-10282"></a>
- 159.30s–159.30s (×1), actor 3, squad 0 (trace 10282): bounding overwatch. Knowledge: actor memory at 155.00s, trace 10149. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.261436163755797, 'next_transition': 10422}.
<a id="trace-10283"></a>
- 159.30s–159.30s (×1), actor 3, squad 0 (trace 10283): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 10149. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.261436163755797, 'next_transition': 10422}.
<a id="trace-10422"></a>
- 160.30s–160.30s (×1), actor 3, squad 0 (trace 10422): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 160.00s, trace 10359. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.914174909976281, 'next_transition': 10529}.
<a id="trace-10426"></a>
- 160.30s–160.30s (×1), actor 3, squad 0 (trace 10426): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 10359. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.914174909976281, 'next_transition': 10529}.
<a id="trace-10529"></a>
- 161.30s–161.30s (×1), actor 3, squad 0 (trace 10529): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 160.00s, trace 10359. Next observer evidence: {'until': 161.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9117637259285352, 'next_transition': 1304}.
<a id="trace-1304"></a>
- 161.60s–161.60s (×1), actor 3, squad 0 (events line 1304): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10549"></a>
- 161.60s–161.60s (×1), actor 3, squad 0 (trace 10549): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.509242 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 161.60s, trace 10549. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6528511908422647, 'next_transition': 10568}.
<a id="trace-10550"></a>
- 161.60s–161.60s (×1), actor 3, squad 0 (trace 10550): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.509242 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 161.60s, trace 10550. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6528511908422647, 'next_transition': 10568}.
<a id="trace-10568"></a>
- 162.30s–162.30s (×1), actor 3, squad 0 (trace 10568): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 161.60s, trace 10550. Next observer evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200261706358612, 'next_transition': 10591}.
<a id="trace-10591"></a>
- 163.00s–163.00s (×1), actor 3, squad 0 (trace 10591): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 163.00s, trace 10591. Next observer evidence: {'until': 163.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0633000738107339, 'next_transition': 10602}.
<a id="trace-10602"></a>
- 163.50s–163.50s (×1), actor 3, squad 0 (trace 10602): new contact inside 100 m. Knowledge: actor memory at 163.00s, trace 10591. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3230676082666154, 'next_transition': 10718}.
<a id="trace-10718"></a>
- 164.25s–164.25s (×1), actor 3, squad 0 (trace 10718): received platoon directive; retain contact cover stage. Knowledge: actor memory at 163.00s, trace 10591. Next observer evidence: None.
<a id="trace-10720"></a>
<a id="trace-10806"></a>
<a id="trace-10836"></a>
- 164.30s–166.30s (×3), actor 3, squad 0 (trace 10720): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 163.00s, trace 10591. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4513128302394256, 'next_transition': 10806}.
<a id="trace-10840"></a>
- 166.35s–166.35s (×1), actor 3, squad 0 (trace 10840): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 10745. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16446666697067883, 'next_transition': 10959}.
<a id="trace-10959"></a>
<a id="trace-10992"></a>
<a id="trace-11003"></a>
- 167.30s–169.30s (×3), actor 3, squad 0 (trace 10959): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 165.00s, trace 10745. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7005720577538881, 'next_transition': 10992}.
<a id="trace-11035"></a>
- 170.00s–170.00s (×1), actor 3, squad 0 (trace 11035): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 170.00s, trace 11022. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11189}.
<a id="trace-11036"></a>
- 170.00s–170.00s (×1), actor 3, squad 0 (trace 11036): rearward bound: one stationary suppressing element. Knowledge: actor memory at 170.00s, trace 11022. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11189}.
<a id="trace-11189"></a>
<a id="trace-11215"></a>
<a id="trace-11231"></a>
<a id="trace-11256"></a>
<a id="trace-11271"></a>
<a id="trace-11347"></a>
<a id="trace-11360"></a>
<a id="trace-11373"></a>
<a id="trace-11394"></a>
<a id="trace-11466"></a>
<a id="trace-11488"></a>
- 170.30s–181.30s (×11), actor 3, squad 0 (trace 11189): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 170.00s, trace 11022. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12153333333333312, 'next_transition': 11215}.
<a id="trace-11497"></a>
- 181.75s–181.75s (×1), actor 3, squad 0 (trace 11497): NeedSupport. Knowledge: actor memory at 180.00s, trace 11405. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27536666666666676, 'next_transition': 11508}.
<a id="trace-11508"></a>
<a id="trace-11524"></a>
<a id="trace-11539"></a>
<a id="trace-11614"></a>
<a id="trace-11634"></a>
<a id="trace-11650"></a>
- 182.30s–187.30s (×6), actor 3, squad 0 (trace 11508): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=3. Knowledge: actor memory at 180.00s, trace 11405. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12193333333333338, 'next_transition': 11524}.
<a id="trace-11750"></a>
- 191.30s–191.30s (×1), actor 4, squad 0 (trace 11750): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 190.00s, trace 11683. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1455}.
<a id="trace-1455"></a>
- 192.90s–192.90s (×1), actor 4, squad 0 (events line 1455): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11771"></a>
- 192.90s–192.90s (×1), actor 4, squad 0 (trace 11771): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.90s, trace 11771. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11776}.
<a id="trace-11776"></a>
<a id="trace-11786"></a>
<a id="trace-11858"></a>
<a id="trace-11867"></a>
<a id="trace-11874"></a>
<a id="trace-11883"></a>
<a id="trace-11892"></a>
<a id="trace-11964"></a>
<a id="trace-11977"></a>
<a id="trace-11985"></a>
<a id="trace-11993"></a>
<a id="trace-12001"></a>
<a id="trace-12070"></a>
<a id="trace-12080"></a>
<a id="trace-12090"></a>
<a id="trace-12100"></a>
<a id="trace-12109"></a>
<a id="trace-12195"></a>
<a id="trace-12204"></a>
- 193.30s–211.30s (×19), actor 4, squad 0 (trace 11776): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 192.90s, trace 11771. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11786}.
<a id="trace-12208"></a>
- 211.50s–211.50s (×1), actor 4, squad 0 (trace 12208): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 210.00s, trace 12124. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12221}.
<a id="trace-12221"></a>
<a id="trace-12238"></a>
<a id="trace-12251"></a>
<a id="trace-12336"></a>
<a id="trace-12357"></a>
<a id="trace-12367"></a>
<a id="trace-12375"></a>
<a id="trace-12443"></a>
<a id="trace-12453"></a>
<a id="trace-12466"></a>
<a id="trace-12491"></a>
<a id="trace-12499"></a>
<a id="trace-12568"></a>
<a id="trace-12576"></a>
<a id="trace-12586"></a>
<a id="trace-12611"></a>
<a id="trace-12691"></a>
<a id="trace-12699"></a>
<a id="trace-12708"></a>
<a id="trace-12719"></a>
<a id="trace-12729"></a>
<a id="trace-12803"></a>
<a id="trace-12814"></a>
<a id="trace-12834"></a>
<a id="trace-12844"></a>
<a id="trace-12852"></a>
<a id="trace-12922"></a>
<a id="trace-12932"></a>
<a id="trace-12946"></a>
<a id="trace-12971"></a>
<a id="trace-12978"></a>
<a id="trace-13047"></a>
<a id="trace-13055"></a>
<a id="trace-13067"></a>
<a id="trace-13082"></a>
<a id="trace-13093"></a>
<a id="trace-13174"></a>
<a id="trace-13182"></a>
<a id="trace-13192"></a>
<a id="trace-13202"></a>
<a id="trace-13210"></a>
- 212.30s–254.30s (×41), actor 4, squad 0 (trace 12221): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 210.00s, trace 12124. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12238}.
<a id="trace-1604"></a>
- 254.80s–254.80s (×1), actor 4, squad 0 (events line 1604): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13286}.
<a id="trace-13222"></a>
- 254.80s–254.80s (×1), actor 4, squad 0 (trace 13222): renew committed intent (75 s lifetime). Knowledge: actor memory at 254.80s, trace 13222. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13286}.
<a id="trace-13286"></a>
<a id="trace-13309"></a>
<a id="trace-13318"></a>
<a id="trace-13327"></a>
<a id="trace-13335"></a>
<a id="trace-13405"></a>
<a id="trace-13418"></a>
<a id="trace-13432"></a>
- 255.30s–262.30s (×8), actor 4, squad 0 (trace 13286): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 255.00s, trace 13226. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13309}.
<a id="trace-1640"></a>
- 263.20s–263.20s (×1), actor 4, squad 0 (events line 1640): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13452"></a>
- 263.20s–263.20s (×1), actor 4, squad 0 (trace 13452): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 263.20s, trace 13452. Next observer evidence: None.
<a id="trace-13453"></a>
- 263.20s–263.20s (×1), actor 4, squad 0 (trace 13453): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 263.20s, trace 13453. Next observer evidence: None.
<a id="trace-13457"></a>
<a id="trace-13464"></a>
<a id="trace-13532"></a>
- 263.30s–265.30s (×3), actor 4, squad 0 (trace 13457): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 263.20s, trace 13453. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13464}.
<a id="trace-13539"></a>
- 265.80s–265.80s (×1), actor 4, squad 0 (trace 13539): MoveTactically. Knowledge: actor memory at 265.00s, trace 13472. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07873234722780867, 'next_transition': 13589}.
<a id="trace-13540"></a>
- 265.80s–265.80s (×1), actor 4, squad 0 (trace 13540): traveling overwatch. Knowledge: actor memory at 265.00s, trace 13472. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07873234722780867, 'next_transition': 13589}.
<a id="trace-13541"></a>
- 265.80s–265.80s (×1), actor 4, squad 0 (trace 13541): received platoon directive. Knowledge: actor memory at 265.00s, trace 13472. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07873234722780867, 'next_transition': 13589}.
<a id="trace-13589"></a>
<a id="trace-13606"></a>
<a id="trace-13626"></a>
<a id="trace-13640"></a>
<a id="trace-13720"></a>
<a id="trace-13730"></a>
<a id="trace-13741"></a>
<a id="trace-13756"></a>
<a id="trace-13768"></a>
- 266.30s–274.30s (×9), actor 4, squad 0 (trace 13589): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 265.00s, trace 13472. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750264267624206, 'next_transition': 13606}.
<a id="trace-13772"></a>
- 274.35s–274.35s (×1), actor 4, squad 0 (trace 13772): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 270.00s, trace 13659. Next observer evidence: {'until': 274.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13781}.
<a id="trace-13781"></a>
- 274.60s–274.60s (×1), actor 4, squad 0 (trace 13781): ReactToContact: cover and return fire. Knowledge: actor memory at 270.00s, trace 13659. Next observer evidence: None.
<a id="trace-13782"></a>
- 274.60s–274.60s (×1), actor 4, squad 0 (trace 13782): bounding overwatch. Knowledge: actor memory at 270.00s, trace 13659. Next observer evidence: None.
<a id="trace-13783"></a>
- 274.60s–274.60s (×1), actor 4, squad 0 (trace 13783): new contact inside 100 m. Knowledge: actor memory at 270.00s, trace 13659. Next observer evidence: None.
<a id="trace-13861"></a>
- 274.65s–274.65s (×1), actor 4, squad 0 (trace 13861): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 274.65s, trace 13861. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13866}.
<a id="trace-13866"></a>
- 274.90s–274.90s (×1), actor 4, squad 0 (trace 13866): new contact inside 100 m. Knowledge: actor memory at 274.65s, trace 13861. Next observer evidence: {'until': 275.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14010}.
<a id="trace-14010"></a>
<a id="trace-14043"></a>
- 275.30s–276.30s (×2), actor 4, squad 0 (trace 14010): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 275.00s, trace 13944. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14043}.
<a id="trace-14049"></a>
- 276.45s–276.45s (×1), actor 4, squad 0 (trace 14049): new contact inside 100 m. Knowledge: actor memory at 275.00s, trace 13944. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1716}.
<a id="trace-1716"></a>
- 277.20s–277.20s (×1), actor 4, squad 0 (events line 1716): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14142"></a>
- 277.20s–277.20s (×1), actor 4, squad 0 (trace 14142): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.264998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 277.20s, trace 14142. Next observer evidence: None.
<a id="trace-14143"></a>
- 277.20s–277.20s (×1), actor 4, squad 0 (trace 14143): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.264998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 277.20s, trace 14143. Next observer evidence: None.
<a id="trace-14146"></a>
<a id="trace-14165"></a>
<a id="trace-14185"></a>
- 277.30s–279.30s (×3), actor 4, squad 0 (trace 14146): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 277.20s, trace 14143. Next observer evidence: {'until': 278.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04925000000000068, 'next_transition': 14165}.
<a id="trace-14199"></a>
- 279.75s–279.75s (×1), actor 4, squad 0 (trace 14199): received platoon directive; retain contact cover stage. Knowledge: actor memory at 277.20s, trace 14143. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14264}.
<a id="trace-14264"></a>
- 280.30s–280.30s (×1), actor 4, squad 0 (trace 14264): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 280.00s, trace 14201. Next observer evidence: {'until': 280.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14273}.
<a id="trace-14273"></a>
- 280.75s–280.75s (×1), actor 4, squad 0 (trace 14273): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 280.00s, trace 14201. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1264000000000003, 'next_transition': 14367}.
<a id="trace-14274"></a>
- 280.75s–280.75s (×1), actor 4, squad 0 (trace 14274): rearward bound: one stationary suppressing element. Knowledge: actor memory at 280.00s, trace 14201. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1264000000000003, 'next_transition': 14367}.
<a id="trace-14367"></a>
<a id="trace-14397"></a>
<a id="trace-14422"></a>
<a id="trace-14435"></a>
<a id="trace-14505"></a>
<a id="trace-14522"></a>
<a id="trace-14532"></a>
<a id="trace-14541"></a>
<a id="trace-14553"></a>
<a id="trace-14630"></a>
<a id="trace-14647"></a>
- 281.30s–291.30s (×11), actor 4, squad 0 (trace 14367): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 280.00s, trace 14201. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0026999999999990365, 'next_transition': 14397}.
<a id="trace-14743"></a>
- 295.30s–295.30s (×1), actor 7, squad 0 (trace 14743): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 295.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14757}.
<a id="trace-14757"></a>
- 295.75s–295.75s (×1), actor 7, squad 0 (trace 14757): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14763}.
<a id="trace-14758"></a>
- 295.75s–295.75s (×1), actor 7, squad 0 (trace 14758): NeedSupport. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14763}.
<a id="trace-14763"></a>
- 295.80s–295.80s (×1), actor 7, squad 0 (trace 14763): Reorganise: completed/failed drill. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575325363218669, 'next_transition': 14794}.
<a id="trace-14765"></a>
- 295.80s–295.80s (×1), actor 7, squad 0 (trace 14765): MoveTactically. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575325363218669, 'next_transition': 14794}.
<a id="trace-14766"></a>
- 295.80s–295.80s (×1), actor 7, squad 0 (trace 14766): Reorganise complete. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575325363218669, 'next_transition': 14794}.
<a id="trace-14794"></a>
- 296.30s–296.30s (×1), actor 7, squad 0 (trace 14794): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 295.00s, trace 14684. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899989047615844, 'next_transition': 14801}.
<a id="trace-14801"></a>
- 296.90s–296.90s (×1), actor 7, squad 0 (trace 14801): renew committed intent (75 s lifetime). Knowledge: actor memory at 296.90s, trace 14801. Next observer evidence: None.
<a id="trace-1803"></a>
- 296.90s–296.90s (×1), actor 7, squad 0 (events line 1803): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599612573408783, 'next_transition': 14805}.
<a id="trace-14805"></a>
<a id="trace-14820"></a>
- 297.30s–298.30s (×2), actor 7, squad 0 (trace 14805): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 296.90s, trace 14801. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1499981746026444, 'next_transition': 14820}.
<a id="trace-14829"></a>
- 299.25s–299.25s (×1), actor 7, squad 0 (trace 14829): NeedSupport. Knowledge: actor memory at 296.90s, trace 14801. Next observer evidence: None.
<a id="trace-14832"></a>
<a id="trace-14906"></a>
- 299.30s–300.30s (×2), actor 7, squad 0 (trace 14832): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 296.90s, trace 14801. Next observer evidence: {'until': 300.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.15009066694913, 'next_transition': 14906}.
<a id="trace-14912"></a>
- 300.60s–300.60s (×1), actor 7, squad 0 (trace 14912): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 300.00s, trace 14844. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.88997115716087, 'next_transition': 14950}.
<a id="trace-14950"></a>
<a id="trace-14963"></a>
<a id="trace-14975"></a>
<a id="trace-14986"></a>
- 301.30s–304.30s (×4), actor 7, squad 0 (trace 14950): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 300.00s, trace 14844. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500074238166484, 'next_transition': 14963}.
<a id="trace-14995"></a>
- 304.75s–304.75s (×1), actor 7, squad 0 (trace 14995): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 300.00s, trace 14844. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15062}.
<a id="trace-15062"></a>
<a id="trace-15075"></a>
<a id="trace-15088"></a>
<a id="trace-15099"></a>
- 305.30s–308.30s (×4), actor 7, squad 0 (trace 15062): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 305.00s, trace 15001. Next observer evidence: {'until': 306.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15075}.
<a id="trace-15105"></a>
- 308.95s–308.95s (×1), actor 7, squad 0 (trace 15105): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 308.95s, trace 15105. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21059999999999945, 'next_transition': 15169}.
<a id="trace-15106"></a>
- 308.95s–308.95s (×1), actor 7, squad 0 (trace 15106): ReactToContact: cover and return fire. Knowledge: actor memory at 308.95s, trace 15105. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21059999999999945, 'next_transition': 15169}.
<a id="trace-15107"></a>
<a id="trace-15169"></a>
<a id="trace-15235"></a>
- 308.95s–309.05s (×3), actor 7, squad 0 (trace 15107): new contact inside 100 m. Knowledge: actor memory at 308.95s, trace 15105. Next observer evidence: {'until': 309, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21059999999999945, 'next_transition': 15169}.
<a id="trace-15302"></a>
<a id="trace-15382"></a>
<a id="trace-15393"></a>
- 309.30s–311.30s (×3), actor 7, squad 0 (trace 15302): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 308.95s, trace 15105. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9433000000000007, 'next_transition': 15382}.
<a id="trace-15409"></a>
- 312.05s–312.05s (×1), actor 7, squad 0 (trace 15409): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 310.00s, trace 15320. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15475}.
<a id="trace-15475"></a>
<a id="trace-15492"></a>
<a id="trace-15503"></a>
<a id="trace-15581"></a>
- 312.30s–315.30s (×4), actor 7, squad 0 (trace 15475): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 310.00s, trace 15320. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15492}.
<a id="trace-15587"></a>
- 315.40s–315.40s (×1), actor 7, squad 0 (trace 15587): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 315.00s, trace 15520. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0082000000000022, 'next_transition': 15670}.
<a id="trace-15588"></a>
- 315.40s–315.40s (×1), actor 7, squad 0 (trace 15588): rearward bound: one stationary suppressing element. Knowledge: actor memory at 315.00s, trace 15520. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0082000000000022, 'next_transition': 15670}.
<a id="trace-15670"></a>
<a id="trace-15686"></a>
<a id="trace-15701"></a>
<a id="trace-15714"></a>
<a id="trace-15803"></a>
<a id="trace-15849"></a>
<a id="trace-15860"></a>
<a id="trace-15865"></a>
<a id="trace-15928"></a>
<a id="trace-15939"></a>
- 316.30s–326.30s (×10), actor 7, squad 0 (trace 15670): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 315.00s, trace 15520. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6780000000000008, 'next_transition': 15686}.
<a id="trace-15948"></a>
- 327.05s–327.05s (×1), actor 7, squad 0 (trace 15948): NeedSupport. Knowledge: actor memory at 325.00s, trace 15870. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15960}.
<a id="trace-15960"></a>
<a id="trace-15973"></a>
<a id="trace-16047"></a>
<a id="trace-16064"></a>
<a id="trace-16077"></a>
<a id="trace-16092"></a>
<a id="trace-16100"></a>
<a id="trace-16168"></a>
<a id="trace-16180"></a>
<a id="trace-16192"></a>
<a id="trace-16203"></a>
- 328.30s–338.30s (×11), actor 7, squad 0 (trace 15960): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 325.00s, trace 15870. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17980000000000018, 'next_transition': 15973}.

## Net delivery

174 matched order/radio deliveries; 234 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.525s; maximum 2.700s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2110: estimate 2.46; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2111: estimate 2.46; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2121: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2122: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2124: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2125: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2126: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2127: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2128: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2129: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2130: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2131: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2345: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2346: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2348: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2349: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2350: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2351: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2352: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2353: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2354: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4186: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4187: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4190: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4191: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4193: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4194: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4195: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4196: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4197: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4198: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4199: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4200: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4405: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4406: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4409: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4410: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4412: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4413: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4414: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4415: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4416: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4417: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4418: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4419: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4606: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4607: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4608: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4610: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4611: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4613: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4614: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4615: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4616: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4617: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4618: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4619: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4620: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4940: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4941: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4942: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4944: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4945: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4947: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4948: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4949: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4950: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4951: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4952: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4953: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4954: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5126: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5127: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5128: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5130: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5131: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5133: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5134: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5135: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5136: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5137: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5138: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5139: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5140: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5304: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 5305: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 5306: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5308: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5309: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5311: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5312: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 5313: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 5314: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5315: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5316: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5317: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5318: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5457: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 5458: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 5459: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5461: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5463: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5464: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 5465: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 5466: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5467: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5468: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5469: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5470: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5826: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 5827: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 5828: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5830: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5832: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5833: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 5834: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 5835: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5836: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5837: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5838: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5839: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5973: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 5974: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 5975: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5978: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5979: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 5980: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 5981: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5982: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5983: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5984: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5985: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 73.15s leader 1, trace 6184: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6290: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 6291: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 6293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6294: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6295: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 6296: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 6297: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6298: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6299: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6300: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6301: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.15s leader 1, trace 6433: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6979: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 6980: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 6982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6983: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6984: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 6985: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 6986: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6987: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6988: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6989: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6990: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 7222: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 7223: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 7224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 7225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 7226: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 7227: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 7228: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 7229: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 7230: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 7231: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 7232: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 7233: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 7343: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 7344: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7347: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7348: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 7349: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 7350: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 7351: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7352: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7353: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7354: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 7639: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 7640: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7643: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7644: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 7645: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 7646: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 7647: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7648: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7649: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7650: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 1, trace 7755: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7787: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 7788: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 7790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7791: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7792: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 7793: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 7794: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7795: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7796: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7797: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7798: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 8061: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 8062: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8065: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8066: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 8067: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 8068: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8069: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8070: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8071: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8072: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 8815: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 8816: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 8818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8819: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8820: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 8821: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 8822: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 8823: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8824: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8825: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8826: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 8998: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 8999: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 9001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9002: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9003: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9004: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9005: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9006: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9007: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9008: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9009: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9137: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9138: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 9140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9141: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9142: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9143: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9144: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9145: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9146: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9147: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9148: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 9248: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 9249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 9250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 9251: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 9252: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 9253: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 9254: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 9255: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 9256: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 9257: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 9258: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.10s leader 3, trace 9259: estimate 6.72; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 9358: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 9360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 9361: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9362: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 9363: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 9364: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9365: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9366: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9367: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9368: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 9470: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9473: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9474: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 9475: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 9476: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9477: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9478: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9479: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9480: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 9582: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 9584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9585: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9586: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 9587: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 9588: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 9589: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9590: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9591: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9592: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 141.90s leader 3, trace 9673: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 141.90s leader 3, trace 9674: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 9709: estimate 1.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 9710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 9711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 9712: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 9713: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 9714: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 9715: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 9716: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 9717: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 9718: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 9719: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.55s leader 3, trace 9793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.55s leader 3, trace 9794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 9835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 9836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 9837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 9838: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 9839: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 9840: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 9841: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9842: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 9843: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9844: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9845: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 10149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 10150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 10151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 10152: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 10153: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 10154: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 10155: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 10156: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 10157: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 10158: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 10159: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 10359: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 10360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 10361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 10362: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10363: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 10364: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 10365: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10366: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 10367: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10368: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10369: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.60s leader 3, trace 10549: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.60s leader 3, trace 10550: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.00s leader 3, trace 10591: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 10745: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 10746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 10747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 10748: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 10749: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 10750: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 10751: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 10752: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 10753: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 10754: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 10755: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 11022: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 11023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 11024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 11025: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 11026: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 11027: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 11028: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 11029: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 11030: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 11031: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 11032: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 11286: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 11287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 11288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 11289: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 11290: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 11291: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 11292: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 11293: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 11294: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 11295: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 11296: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 11405: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 11406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 11407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 11408: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 11409: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 11410: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 11411: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 11412: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 11413: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 11414: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 11415: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 11550: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 11551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 11552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 11553: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 11554: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 11555: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 11556: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 11557: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 11558: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 11559: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 11560: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 11683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 11684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 11685: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 11686: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 11687: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 11688: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 11689: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 11690: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 11691: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 11692: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.90s leader 4, trace 11771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 11798: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 11799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 11800: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11801: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 11802: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 11803: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 11804: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11805: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11806: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11807: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 11904: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 11905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11906: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11907: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 11908: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 11909: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11910: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11911: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11912: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11913: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 12010: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 12012: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 12013: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 12014: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 12015: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 12016: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 12017: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 12018: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 12019: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12124: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 12125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 12126: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12127: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 12128: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 12129: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 12130: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 12131: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12132: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12133: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 12260: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 12261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 12262: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 12263: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 12264: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 12265: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 12266: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 12267: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 12268: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 12269: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12382: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 12383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12384: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12385: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 12386: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 12387: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 12388: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12389: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12390: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12391: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12508: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 12509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12510: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12511: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 12512: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 12513: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12515: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12516: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12517: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 12630: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 12631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12632: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12633: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 12634: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 12635: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 12636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12637: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12638: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 12639: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 12742: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 12743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12744: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12745: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 12746: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 12747: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 12748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12749: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12750: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12751: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 12861: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 12862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12863: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12864: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 12865: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 12866: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12868: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12869: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12870: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12987: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 12988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12989: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12990: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 12991: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 12992: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12994: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12995: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12996: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 13114: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 13115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 13116: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13117: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 13118: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 13119: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 13120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 13121: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13122: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 13123: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.80s leader 4, trace 13222: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 13226: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 13227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13228: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13229: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 13230: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 13231: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 13232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13233: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13234: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13235: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 13345: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 13346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13347: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13348: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 13349: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 13350: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 13351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13352: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13353: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13354: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 263.20s leader 4, trace 13452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 263.20s leader 4, trace 13453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 13472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 13473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13474: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13475: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 13476: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 13477: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 13478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13479: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13480: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13481: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 13659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 13660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13661: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13662: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 13663: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 13664: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 13665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13666: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13667: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13668: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.65s leader 4, trace 13861: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 13944: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 13945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13946: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13947: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 13948: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 13949: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 13950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13951: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13952: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13953: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 277.20s leader 4, trace 14142: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 277.20s leader 4, trace 14143: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 14201: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 14202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14203: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 14204: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 14205: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 14206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14207: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14208: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14209: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 14444: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 14445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14446: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 14447: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 14448: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14450: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14451: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14452: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 14567: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 14568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14569: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 14570: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 14571: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 14572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14573: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14574: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 14575: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 14684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14685: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 14686: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 14687: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 14688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14689: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14690: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 14691: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.90s leader 7, trace 14801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 14844: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14845: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 14846: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 14847: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 14848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14849: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14850: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 14851: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 15001: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15002: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 15003: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 15004: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 15005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15006: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15007: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 15008: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 308.95s leader 7, trace 15105: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 15320: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15321: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 15322: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 15323: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 15324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15325: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15326: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15327: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 15520: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15521: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 15522: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 15523: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15525: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15526: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15527: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 15736: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 15737: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 15738: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 15739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15740: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15741: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 15742: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 15870: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 15871: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 15872: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 15873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15874: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15875: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 15876: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 15987: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 15988: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 15989: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15991: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15992: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15993: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 16109: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 16110: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 16111: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 16112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16113: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16114: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16115: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Moss incapacitated
- 1: Iven incapacitated
- 1: Soren killed in action
- 1: Rook incapacitated
- 1: Ash incapacitated
- 1: Voss incapacitated
- 1: Tern killed in action
- 1: Kest incapacitated
- 1: Bram killed in action
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
