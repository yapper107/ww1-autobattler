# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/107/good-azure/battle-107-1789674037909496803`

## Battle summary

**Ember** · 360 s · 316 shots.

### Turning points

- 16.9s, squad 4: contact (events line 222). First recorded contact.
- 33.0s, squad 0: assault ([trace 8359](#trace-8359)). 47.1s, squad 0: took cover and returned fire.
- 36.8s, squad 1: assault ([trace 9181](#trace-9181)). 37.0s, squad 1: advanced tactically.
- 38.2s, squad 1: help call ([trace 9765](#trace-9765)). No completion observed before termination.
- 40.0s, squad 0: help call ([trace 9983](#trace-9983)). 41.4s, squad 1: answered a neighbour with support by fire.
- 40.4s, squad 1: help call ([trace 10084](#trace-10084)). No completion observed before termination.
- 41.4s, squad 1: help answer ([trace 10151](#trace-10151)). 47.4s, squad 1: advanced tactically.
- 51.4s, squad 1: withdrawal ([trace 12120](#trace-12120)). 79.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 54.7s, squad 0: assault ([trace 12654](#trace-12654)). 55.0s, squad 0: advanced tactically.
- 86.2s, squad 1: withdrawal ([trace 14854](#trace-14854)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 21 shots, 4/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 12 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 218 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 65 shots, 0/4 lost.

### Decisions and attribution

At 36.8s, squad 1 chose prepared a base of fire ([trace 8839](#trace-8839)), followed by 0 shots and 1 own casualties; estimate 15.5 against 0 distinct squad-reported contacts; At 21.1s, squad 1 chose FightHere: nearest known group ([trace 3883](#trace-3883)), followed by 2 shots and 0 own casualties; estimate 10.0 against 9 distinct squad-reported contacts; At 17.6s, squad 1 chose took cover and returned fire ([trace 2235](#trace-2235)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 829](#trace-829)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977349138232083, 'next_transition': 1004}.

### Communication

189 matched deliveries (mean 0.53s, max 2.50s); 500 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.90s, squad 4, contact, evidence events line 222: First recorded contact; .
- 33.05s, squad 0, assault, evidence 8359: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 47.1s, squad 0: took cover and returned fire.
- 36.80s, squad 1, assault, evidence 9181: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 37.0s, squad 1: advanced tactically.
- 38.25s, squad 1, help call, evidence 9765: NeedSupport; No completion observed before termination.
- 39.95s, squad 0, help call, evidence 9983: NeedSupport; 41.4s, squad 1: answered a neighbour with support by fire.
- 40.40s, squad 1, help call, evidence 10084: NeedSupport; No completion observed before termination.
- 41.35s, squad 1, help answer, evidence 10151: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 47.4s, squad 1: advanced tactically.
- 51.35s, squad 1, withdrawal, evidence 12120: BreakContact: believed ratio at least two without superiority; 79.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 54.70s, squad 0, assault, evidence 12654: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 55.0s, squad 0: advanced tactically.
- 86.25s, squad 1, withdrawal, evidence 14854: Withdraw to received rally; No completion observed before termination.
- 86.95s, squad 0, withdrawal, evidence 14924: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50494424249595, 'next_transition': 104}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50494424249595, 'next_transition': 104}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50494424249595, 'next_transition': 104}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-766"></a>
<a id="trace-768"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-817"></a>
<a id="trace-819"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299956177593285, 'next_transition': 729}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977349138232083, 'next_transition': 1004}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977349138232083, 'next_transition': 1004}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977349138232083, 'next_transition': 1004}.
<a id="trace-848"></a>
<a id="trace-850"></a>
<a id="trace-879"></a>
<a id="trace-881"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1073"></a>
<a id="trace-1075"></a>
<a id="trace-1259"></a>
<a id="trace-1261"></a>
<a id="trace-1291"></a>
<a id="trace-1293"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
<a id="trace-1457"></a>
<a id="trace-1459"></a>
<a id="trace-1474"></a>
<a id="trace-1476"></a>
<a id="trace-1570"></a>
<a id="trace-1572"></a>
<a id="trace-1586"></a>
<a id="trace-1588"></a>
- 4.20s–10.70s (×28), actor 5, squad 0 (trace 848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149922781749492, 'next_transition': 879}.
<a id="trace-995"></a>
<a id="trace-1077"></a>
<a id="trace-1263"></a>
<a id="trace-1265"></a>
<a id="trace-1385"></a>
<a id="trace-1387"></a>
<a id="trace-1426"></a>
<a id="trace-1428"></a>
<a id="trace-1478"></a>
<a id="trace-1480"></a>
<a id="trace-1574"></a>
<a id="trace-1576"></a>
<a id="trace-1590"></a>
<a id="trace-1592"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1868"></a>
<a id="trace-1870"></a>
<a id="trace-2005"></a>
<a id="trace-2007"></a>
<a id="trace-2031"></a>
<a id="trace-2033"></a>
<a id="trace-2139"></a>
<a id="trace-2141"></a>
<a id="trace-2220"></a>
<a id="trace-2222"></a>
<a id="trace-2591"></a>
<a id="trace-2593"></a>
<a id="trace-2633"></a>
<a id="trace-2635"></a>
<a id="trace-2942"></a>
<a id="trace-2944"></a>
<a id="trace-3330"></a>
<a id="trace-3332"></a>
<a id="trace-3452"></a>
<a id="trace-3454"></a>
<a id="trace-3480"></a>
<a id="trace-3482"></a>
<a id="trace-3955"></a>
<a id="trace-3957"></a>
<a id="trace-4313"></a>
<a id="trace-4315"></a>
<a id="trace-4712"></a>
<a id="trace-4714"></a>
<a id="trace-4755"></a>
<a id="trace-4757"></a>
<a id="trace-5135"></a>
<a id="trace-5137"></a>
<a id="trace-5504"></a>
<a id="trace-5506"></a>
<a id="trace-5571"></a>
<a id="trace-5573"></a>
<a id="trace-6028"></a>
<a id="trace-6030"></a>
<a id="trace-6426"></a>
<a id="trace-6428"></a>
<a id="trace-6592"></a>
<a id="trace-6594"></a>
<a id="trace-6657"></a>
<a id="trace-6659"></a>
<a id="trace-6695"></a>
<a id="trace-6697"></a>
<a id="trace-6737"></a>
<a id="trace-6739"></a>
<a id="trace-6764"></a>
<a id="trace-6766"></a>
<a id="trace-6781"></a>
<a id="trace-6783"></a>
<a id="trace-7209"></a>
<a id="trace-7211"></a>
<a id="trace-7226"></a>
<a id="trace-7228"></a>
<a id="trace-7261"></a>
<a id="trace-7263"></a>
<a id="trace-7283"></a>
<a id="trace-7285"></a>
<a id="trace-7305"></a>
<a id="trace-7307"></a>
<a id="trace-7325"></a>
<a id="trace-7327"></a>
<a id="trace-8609"></a>
<a id="trace-8611"></a>
<a id="trace-8628"></a>
<a id="trace-8630"></a>
<a id="trace-8653"></a>
<a id="trace-8655"></a>
<a id="trace-8774"></a>
<a id="trace-8776"></a>
<a id="trace-8801"></a>
<a id="trace-8803"></a>
<a id="trace-8836"></a>
<a id="trace-8838"></a>
<a id="trace-9705"></a>
<a id="trace-9707"></a>
<a id="trace-9760"></a>
<a id="trace-9762"></a>
<a id="trace-9919"></a>
<a id="trace-9921"></a>
<a id="trace-9951"></a>
<a id="trace-9953"></a>
<a id="trace-10077"></a>
<a id="trace-10079"></a>
<a id="trace-10144"></a>
<a id="trace-10146"></a>
<a id="trace-11150"></a>
<a id="trace-11152"></a>
<a id="trace-11186"></a>
<a id="trace-11188"></a>
<a id="trace-11202"></a>
<a id="trace-11204"></a>
<a id="trace-11231"></a>
<a id="trace-11233"></a>
<a id="trace-11245"></a>
<a id="trace-11247"></a>
<a id="trace-11265"></a>
<a id="trace-11267"></a>
<a id="trace-11364"></a>
<a id="trace-11366"></a>
<a id="trace-11383"></a>
<a id="trace-11385"></a>
<a id="trace-11416"></a>
<a id="trace-11418"></a>
<a id="trace-11431"></a>
<a id="trace-11433"></a>
<a id="trace-11656"></a>
<a id="trace-11658"></a>
<a id="trace-11858"></a>
<a id="trace-11860"></a>
<a id="trace-11937"></a>
<a id="trace-11939"></a>
<a id="trace-11957"></a>
<a id="trace-11959"></a>
<a id="trace-12075"></a>
<a id="trace-12077"></a>
<a id="trace-12093"></a>
<a id="trace-12095"></a>
<a id="trace-12115"></a>
<a id="trace-12117"></a>
<a id="trace-12191"></a>
<a id="trace-12193"></a>
<a id="trace-12219"></a>
<a id="trace-12221"></a>
<a id="trace-12245"></a>
<a id="trace-12247"></a>
<a id="trace-12266"></a>
<a id="trace-12268"></a>
<a id="trace-12285"></a>
<a id="trace-12287"></a>
<a id="trace-12772"></a>
<a id="trace-12774"></a>
<a id="trace-13107"></a>
<a id="trace-13109"></a>
<a id="trace-13125"></a>
<a id="trace-13127"></a>
<a id="trace-13188"></a>
<a id="trace-13190"></a>
<a id="trace-13223"></a>
<a id="trace-13225"></a>
<a id="trace-13237"></a>
<a id="trace-13239"></a>
<a id="trace-13284"></a>
<a id="trace-13286"></a>
<a id="trace-13310"></a>
<a id="trace-13312"></a>
<a id="trace-13327"></a>
<a id="trace-13329"></a>
<a id="trace-13532"></a>
<a id="trace-13534"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13566"></a>
<a id="trace-13568"></a>
<a id="trace-13597"></a>
<a id="trace-13599"></a>
<a id="trace-13618"></a>
<a id="trace-13620"></a>
<a id="trace-13631"></a>
<a id="trace-13633"></a>
<a id="trace-13668"></a>
<a id="trace-13670"></a>
<a id="trace-13800"></a>
<a id="trace-13802"></a>
<a id="trace-13835"></a>
<a id="trace-13837"></a>
<a id="trace-13883"></a>
<a id="trace-13885"></a>
<a id="trace-13915"></a>
<a id="trace-13917"></a>
<a id="trace-13963"></a>
<a id="trace-13965"></a>
<a id="trace-14007"></a>
<a id="trace-14009"></a>
<a id="trace-14098"></a>
<a id="trace-14129"></a>
<a id="trace-14152"></a>
<a id="trace-14154"></a>
<a id="trace-14254"></a>
<a id="trace-14256"></a>
<a id="trace-14279"></a>
<a id="trace-14281"></a>
<a id="trace-14299"></a>
<a id="trace-14301"></a>
<a id="trace-14321"></a>
<a id="trace-14323"></a>
<a id="trace-14348"></a>
<a id="trace-14350"></a>
<a id="trace-14361"></a>
<a id="trace-14363"></a>
<a id="trace-14392"></a>
<a id="trace-14394"></a>
<a id="trace-14406"></a>
<a id="trace-14408"></a>
<a id="trace-14420"></a>
<a id="trace-14422"></a>
<a id="trace-14491"></a>
<a id="trace-14493"></a>
<a id="trace-14503"></a>
<a id="trace-14505"></a>
<a id="trace-14533"></a>
<a id="trace-14535"></a>
<a id="trace-14550"></a>
<a id="trace-14552"></a>
<a id="trace-14575"></a>
<a id="trace-14577"></a>
<a id="trace-14584"></a>
<a id="trace-14586"></a>
<a id="trace-14608"></a>
<a id="trace-14610"></a>
<a id="trace-14701"></a>
<a id="trace-14703"></a>
<a id="trace-14714"></a>
<a id="trace-14716"></a>
<a id="trace-14719"></a>
<a id="trace-14721"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14737"></a>
<a id="trace-14739"></a>
<a id="trace-14757"></a>
<a id="trace-14759"></a>
<a id="trace-14830"></a>
<a id="trace-14832"></a>
<a id="trace-14835"></a>
<a id="trace-14837"></a>
<a id="trace-14851"></a>
<a id="trace-14853"></a>
<a id="trace-14919"></a>
<a id="trace-14921"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15086"></a>
<a id="trace-15088"></a>
<a id="trace-15106"></a>
<a id="trace-15108"></a>
<a id="trace-15190"></a>
<a id="trace-15192"></a>
<a id="trace-15211"></a>
<a id="trace-15213"></a>
<a id="trace-15222"></a>
<a id="trace-15224"></a>
<a id="trace-15237"></a>
<a id="trace-15239"></a>
<a id="trace-15247"></a>
<a id="trace-15249"></a>
<a id="trace-15260"></a>
<a id="trace-15262"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15286"></a>
<a id="trace-15288"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15384"></a>
<a id="trace-15386"></a>
<a id="trace-15398"></a>
<a id="trace-15400"></a>
<a id="trace-15408"></a>
<a id="trace-15410"></a>
<a id="trace-15428"></a>
<a id="trace-15430"></a>
<a id="trace-15439"></a>
<a id="trace-15441"></a>
<a id="trace-15456"></a>
<a id="trace-15458"></a>
<a id="trace-15473"></a>
<a id="trace-15475"></a>
<a id="trace-15486"></a>
<a id="trace-15488"></a>
<a id="trace-15493"></a>
<a id="trace-15495"></a>
<a id="trace-15569"></a>
<a id="trace-15571"></a>
<a id="trace-15621"></a>
<a id="trace-15623"></a>
<a id="trace-15635"></a>
<a id="trace-15637"></a>
<a id="trace-15645"></a>
<a id="trace-15647"></a>
<a id="trace-15659"></a>
<a id="trace-15661"></a>
<a id="trace-15744"></a>
<a id="trace-15746"></a>
<a id="trace-15757"></a>
<a id="trace-15759"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15784"></a>
<a id="trace-15786"></a>
<a id="trace-15793"></a>
<a id="trace-15795"></a>
<a id="trace-15812"></a>
<a id="trace-15814"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15842"></a>
<a id="trace-15844"></a>
<a id="trace-15848"></a>
<a id="trace-15850"></a>
<a id="trace-15948"></a>
<a id="trace-15950"></a>
<a id="trace-15963"></a>
<a id="trace-15965"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-15985"></a>
<a id="trace-15987"></a>
<a id="trace-15997"></a>
<a id="trace-15999"></a>
<a id="trace-16011"></a>
<a id="trace-16013"></a>
<a id="trace-16094"></a>
<a id="trace-16096"></a>
<a id="trace-16123"></a>
<a id="trace-16125"></a>
<a id="trace-16137"></a>
<a id="trace-16139"></a>
<a id="trace-16148"></a>
<a id="trace-16150"></a>
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16175"></a>
<a id="trace-16177"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
<a id="trace-16197"></a>
<a id="trace-16199"></a>
<a id="trace-16264"></a>
<a id="trace-16266"></a>
<a id="trace-16275"></a>
<a id="trace-16277"></a>
<a id="trace-16299"></a>
<a id="trace-16301"></a>
<a id="trace-16322"></a>
<a id="trace-16324"></a>
<a id="trace-16330"></a>
<a id="trace-16332"></a>
<a id="trace-16343"></a>
<a id="trace-16345"></a>
<a id="trace-16354"></a>
<a id="trace-16356"></a>
<a id="trace-16371"></a>
<a id="trace-16373"></a>
<a id="trace-16377"></a>
<a id="trace-16379"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
<a id="trace-16457"></a>
<a id="trace-16459"></a>
<a id="trace-16469"></a>
<a id="trace-16471"></a>
<a id="trace-16478"></a>
<a id="trace-16480"></a>
<a id="trace-16498"></a>
<a id="trace-16500"></a>
<a id="trace-16523"></a>
<a id="trace-16525"></a>
<a id="trace-16551"></a>
<a id="trace-16553"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16628"></a>
<a id="trace-16630"></a>
<a id="trace-16633"></a>
<a id="trace-16635"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16664"></a>
<a id="trace-16666"></a>
<a id="trace-16677"></a>
<a id="trace-16679"></a>
<a id="trace-16685"></a>
<a id="trace-16687"></a>
<a id="trace-16700"></a>
<a id="trace-16702"></a>
<a id="trace-16712"></a>
<a id="trace-16714"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16850"></a>
<a id="trace-16852"></a>
<a id="trace-16861"></a>
<a id="trace-16863"></a>
<a id="trace-16899"></a>
<a id="trace-16901"></a>
<a id="trace-16905"></a>
<a id="trace-16907"></a>
<a id="trace-16982"></a>
<a id="trace-16984"></a>
<a id="trace-17015"></a>
<a id="trace-17017"></a>
<a id="trace-17029"></a>
<a id="trace-17031"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17053"></a>
<a id="trace-17055"></a>
<a id="trace-17076"></a>
<a id="trace-17078"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17160"></a>
<a id="trace-17162"></a>
<a id="trace-17165"></a>
<a id="trace-17167"></a>
<a id="trace-17179"></a>
<a id="trace-17181"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
<a id="trace-17206"></a>
<a id="trace-17208"></a>
<a id="trace-17240"></a>
<a id="trace-17242"></a>
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17262"></a>
<a id="trace-17264"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17338"></a>
<a id="trace-17340"></a>
<a id="trace-17364"></a>
<a id="trace-17366"></a>
<a id="trace-17372"></a>
<a id="trace-17374"></a>
<a id="trace-17386"></a>
<a id="trace-17388"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
<a id="trace-17420"></a>
<a id="trace-17422"></a>
<a id="trace-17443"></a>
<a id="trace-17445"></a>
<a id="trace-17519"></a>
<a id="trace-17521"></a>
<a id="trace-17525"></a>
<a id="trace-17527"></a>
<a id="trace-17540"></a>
<a id="trace-17542"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17566"></a>
<a id="trace-17568"></a>
<a id="trace-17573"></a>
<a id="trace-17575"></a>
<a id="trace-17593"></a>
<a id="trace-17595"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17616"></a>
<a id="trace-17618"></a>
<a id="trace-17693"></a>
<a id="trace-17695"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17747"></a>
<a id="trace-17749"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17772"></a>
<a id="trace-17774"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17797"></a>
<a id="trace-17799"></a>
<a id="trace-17809"></a>
<a id="trace-17811"></a>
<a id="trace-17876"></a>
<a id="trace-17878"></a>
<a id="trace-17894"></a>
<a id="trace-17896"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17933"></a>
<a id="trace-17935"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17963"></a>
<a id="trace-17965"></a>
<a id="trace-17977"></a>
<a id="trace-17979"></a>
<a id="trace-17985"></a>
<a id="trace-17987"></a>
<a id="trace-18053"></a>
<a id="trace-18055"></a>
<a id="trace-18062"></a>
<a id="trace-18064"></a>
<a id="trace-18080"></a>
<a id="trace-18082"></a>
<a id="trace-18089"></a>
<a id="trace-18091"></a>
<a id="trace-18103"></a>
<a id="trace-18105"></a>
<a id="trace-18111"></a>
<a id="trace-18113"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18158"></a>
<a id="trace-18160"></a>
<a id="trace-18172"></a>
<a id="trace-18174"></a>
<a id="trace-18243"></a>
<a id="trace-18245"></a>
<a id="trace-18259"></a>
<a id="trace-18261"></a>
<a id="trace-18268"></a>
<a id="trace-18270"></a>
<a id="trace-18284"></a>
<a id="trace-18286"></a>
<a id="trace-18298"></a>
<a id="trace-18300"></a>
<a id="trace-18318"></a>
<a id="trace-18320"></a>
<a id="trace-18341"></a>
<a id="trace-18343"></a>
<a id="trace-18409"></a>
<a id="trace-18411"></a>
<a id="trace-18421"></a>
<a id="trace-18423"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18462"></a>
<a id="trace-18464"></a>
<a id="trace-18473"></a>
<a id="trace-18475"></a>
<a id="trace-18486"></a>
<a id="trace-18488"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18598"></a>
<a id="trace-18600"></a>
<a id="trace-18614"></a>
<a id="trace-18616"></a>
<a id="trace-18624"></a>
<a id="trace-18626"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18651"></a>
<a id="trace-18653"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18696"></a>
<a id="trace-18698"></a>
<a id="trace-18702"></a>
<a id="trace-18704"></a>
<a id="trace-18773"></a>
<a id="trace-18775"></a>
<a id="trace-18778"></a>
<a id="trace-18780"></a>
<a id="trace-18797"></a>
<a id="trace-18799"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18820"></a>
<a id="trace-18822"></a>
<a id="trace-18828"></a>
<a id="trace-18830"></a>
<a id="trace-18847"></a>
<a id="trace-18849"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18889"></a>
<a id="trace-18891"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18962"></a>
<a id="trace-18964"></a>
<a id="trace-18978"></a>
<a id="trace-18980"></a>
<a id="trace-19000"></a>
<a id="trace-19002"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19047"></a>
<a id="trace-19049"></a>
<a id="trace-19056"></a>
<a id="trace-19058"></a>
<a id="trace-19125"></a>
<a id="trace-19127"></a>
<a id="trace-19137"></a>
<a id="trace-19139"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19166"></a>
<a id="trace-19168"></a>
<a id="trace-19180"></a>
<a id="trace-19182"></a>
<a id="trace-19190"></a>
<a id="trace-19192"></a>
<a id="trace-19204"></a>
<a id="trace-19206"></a>
<a id="trace-19216"></a>
<a id="trace-19218"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19313"></a>
<a id="trace-19315"></a>
<a id="trace-19334"></a>
<a id="trace-19336"></a>
<a id="trace-19344"></a>
<a id="trace-19346"></a>
<a id="trace-19389"></a>
<a id="trace-19391"></a>
<a id="trace-19397"></a>
<a id="trace-19399"></a>
<a id="trace-19414"></a>
<a id="trace-19416"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19490"></a>
<a id="trace-19492"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19562"></a>
<a id="trace-19564"></a>
<a id="trace-19577"></a>
<a id="trace-19579"></a>
<a id="trace-19599"></a>
<a id="trace-19601"></a>
<a id="trace-19604"></a>
<a id="trace-19606"></a>
<a id="trace-19672"></a>
<a id="trace-19674"></a>
<a id="trace-19691"></a>
<a id="trace-19693"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19723"></a>
<a id="trace-19725"></a>
<a id="trace-19742"></a>
<a id="trace-19744"></a>
<a id="trace-19752"></a>
<a id="trace-19754"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19897"></a>
<a id="trace-19899"></a>
<a id="trace-19905"></a>
<a id="trace-19907"></a>
<a id="trace-19928"></a>
<a id="trace-19930"></a>
<a id="trace-19952"></a>
<a id="trace-19954"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20026"></a>
<a id="trace-20028"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20084"></a>
<a id="trace-20086"></a>
<a id="trace-20097"></a>
<a id="trace-20099"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20128"></a>
<a id="trace-20130"></a>
<a id="trace-20209"></a>
<a id="trace-20211"></a>
<a id="trace-20221"></a>
<a id="trace-20223"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20245"></a>
<a id="trace-20247"></a>
<a id="trace-20256"></a>
<a id="trace-20258"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20305"></a>
<a id="trace-20307"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20379"></a>
<a id="trace-20381"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20412"></a>
<a id="trace-20414"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
<a id="trace-20439"></a>
<a id="trace-20441"></a>
<a id="trace-20453"></a>
<a id="trace-20455"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
<a id="trace-20480"></a>
<a id="trace-20482"></a>
<a id="trace-20558"></a>
<a id="trace-20560"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20585"></a>
<a id="trace-20587"></a>
<a id="trace-20593"></a>
<a id="trace-20595"></a>
<a id="trace-20630"></a>
<a id="trace-20632"></a>
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20659"></a>
<a id="trace-20661"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20733"></a>
<a id="trace-20735"></a>
<a id="trace-20743"></a>
<a id="trace-20745"></a>
<a id="trace-20756"></a>
<a id="trace-20758"></a>
<a id="trace-20771"></a>
<a id="trace-20773"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20800"></a>
<a id="trace-20802"></a>
<a id="trace-20814"></a>
<a id="trace-20816"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20920"></a>
<a id="trace-20922"></a>
<a id="trace-20925"></a>
<a id="trace-20927"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20963"></a>
<a id="trace-20965"></a>
<a id="trace-20972"></a>
<a id="trace-20974"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21094"></a>
<a id="trace-21096"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
<a id="trace-21116"></a>
<a id="trace-21118"></a>
<a id="trace-21124"></a>
<a id="trace-21126"></a>
<a id="trace-21144"></a>
<a id="trace-21146"></a>
<a id="trace-21171"></a>
<a id="trace-21173"></a>
<a id="trace-21193"></a>
<a id="trace-21195"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21281"></a>
<a id="trace-21283"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21322"></a>
<a id="trace-21324"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21354"></a>
<a id="trace-21356"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21440"></a>
<a id="trace-21442"></a>
<a id="trace-21478"></a>
<a id="trace-21480"></a>
<a id="trace-21499"></a>
<a id="trace-21501"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21542"></a>
<a id="trace-21544"></a>
<a id="trace-21551"></a>
<a id="trace-21553"></a>
<a id="trace-21624"></a>
<a id="trace-21626"></a>
<a id="trace-21630"></a>
<a id="trace-21632"></a>
<a id="trace-21650"></a>
<a id="trace-21652"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21694"></a>
<a id="trace-21696"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21803"></a>
<a id="trace-21805"></a>
<a id="trace-21830"></a>
<a id="trace-21832"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21877"></a>
<a id="trace-21879"></a>
<a id="trace-21901"></a>
<a id="trace-21903"></a>
<a id="trace-21980"></a>
<a id="trace-21982"></a>
<a id="trace-21993"></a>
<a id="trace-21995"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22018"></a>
<a id="trace-22020"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22067"></a>
<a id="trace-22069"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22145"></a>
<a id="trace-22147"></a>
<a id="trace-22169"></a>
<a id="trace-22171"></a>
<a id="trace-22197"></a>
<a id="trace-22199"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22221"></a>
<a id="trace-22223"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22247"></a>
<a id="trace-22249"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22326"></a>
<a id="trace-22328"></a>
<a id="trace-22332"></a>
<a id="trace-22334"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22373"></a>
<a id="trace-22375"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22400"></a>
<a id="trace-22402"></a>
<a id="trace-22417"></a>
<a id="trace-22419"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22436"></a>
<a id="trace-22438"></a>
<a id="trace-22507"></a>
<a id="trace-22509"></a>
<a id="trace-22526"></a>
<a id="trace-22528"></a>
<a id="trace-22541"></a>
<a id="trace-22543"></a>
<a id="trace-22554"></a>
<a id="trace-22556"></a>
<a id="trace-22562"></a>
<a id="trace-22564"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22589"></a>
<a id="trace-22591"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22689"></a>
<a id="trace-22691"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22786"></a>
<a id="trace-22788"></a>
<a id="trace-22858"></a>
<a id="trace-22860"></a>
<a id="trace-22881"></a>
<a id="trace-22883"></a>
<a id="trace-22898"></a>
<a id="trace-22900"></a>
<a id="trace-22913"></a>
<a id="trace-22915"></a>
<a id="trace-22920"></a>
<a id="trace-22922"></a>
<a id="trace-22957"></a>
<a id="trace-22959"></a>
<a id="trace-22969"></a>
<a id="trace-22971"></a>
<a id="trace-23040"></a>
<a id="trace-23042"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23115"></a>
<a id="trace-23117"></a>
<a id="trace-23123"></a>
<a id="trace-23125"></a>
<a id="trace-23136"></a>
<a id="trace-23138"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23212"></a>
<a id="trace-23214"></a>
<a id="trace-23221"></a>
<a id="trace-23223"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23263"></a>
<a id="trace-23265"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23319"></a>
<a id="trace-23321"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23401"></a>
<a id="trace-23403"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23477"></a>
<a id="trace-23479"></a>
<a id="trace-23494"></a>
<a id="trace-23496"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23619"></a>
<a id="trace-23621"></a>
<a id="trace-23627"></a>
<a id="trace-23629"></a>
<a id="trace-23644"></a>
<a id="trace-23646"></a>
<a id="trace-23653"></a>
<a id="trace-23655"></a>
<a id="trace-23679"></a>
<a id="trace-23681"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23752"></a>
<a id="trace-23754"></a>
<a id="trace-23776"></a>
<a id="trace-23778"></a>
<a id="trace-23791"></a>
<a id="trace-23793"></a>
<a id="trace-23805"></a>
<a id="trace-23807"></a>
<a id="trace-23826"></a>
<a id="trace-23828"></a>
<a id="trace-23836"></a>
<a id="trace-23838"></a>
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23925"></a>
<a id="trace-23927"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-23959"></a>
<a id="trace-23961"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24023"></a>
<a id="trace-24025"></a>
<a id="trace-24104"></a>
<a id="trace-24106"></a>
<a id="trace-24109"></a>
<a id="trace-24111"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24134"></a>
<a id="trace-24136"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24184"></a>
<a id="trace-24186"></a>
<a id="trace-24198"></a>
<a id="trace-24200"></a>
<a id="trace-24209"></a>
<a id="trace-24211"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24308"></a>
<a id="trace-24310"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
<a id="trace-24352"></a>
<a id="trace-24354"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24387"></a>
<a id="trace-24389"></a>
<a id="trace-24455"></a>
<a id="trace-24457"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24480"></a>
<a id="trace-24482"></a>
<a id="trace-24490"></a>
<a id="trace-24492"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24517"></a>
<a id="trace-24519"></a>
<a id="trace-24539"></a>
<a id="trace-24541"></a>
<a id="trace-24561"></a>
<a id="trace-24563"></a>
<a id="trace-24636"></a>
<a id="trace-24638"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24746"></a>
<a id="trace-24748"></a>
- 5.70s–359.80s (×1096), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 906. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624793790105342, 'next_transition': 1077}.
<a id="trace-1004"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1004): traveling overwatch. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259997463380066, 'next_transition': 1104}.
<a id="trace-1005"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1005): received platoon directive. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259997463380066, 'next_transition': 1104}.
<a id="trace-1104"></a>
- 6.60s–6.60s (×1), actor 8, squad 1 (trace 1104): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.03816800106182, 'next_transition': 2235}.
<a id="trace-1598"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1598): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1485. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1794}.
<a id="trace-1599"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1599): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1485. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1794}.
<a id="trace-1794"></a>
<a id="trace-1796"></a>
<a id="trace-1824"></a>
<a id="trace-1826"></a>
<a id="trace-1864"></a>
<a id="trace-1866"></a>
<a id="trace-1893"></a>
<a id="trace-1895"></a>
<a id="trace-1929"></a>
<a id="trace-1931"></a>
<a id="trace-1961"></a>
<a id="trace-1963"></a>
<a id="trace-2001"></a>
<a id="trace-2003"></a>
<a id="trace-2027"></a>
<a id="trace-2029"></a>
<a id="trace-2119"></a>
<a id="trace-2121"></a>
<a id="trace-2135"></a>
<a id="trace-2137"></a>
<a id="trace-2169"></a>
<a id="trace-2171"></a>
<a id="trace-2188"></a>
<a id="trace-2190"></a>
<a id="trace-2216"></a>
<a id="trace-2218"></a>
<a id="trace-2587"></a>
<a id="trace-2589"></a>
<a id="trace-2629"></a>
<a id="trace-2631"></a>
- 11.20s–18.25s (×30), actor 5, squad 0 (trace 1794): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1490. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5606254249610254, 'next_transition': 1824}.
<a id="trace-2235"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2235): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2046. Next observer evidence: {'until': 20.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6673913928613326, 'next_transition': 3490}.
<a id="trace-2236"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2236): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2046. Next observer evidence: {'until': 20.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6673913928613326, 'next_transition': 3490}.
<a id="trace-2237"></a>
<a id="trace-3490"></a>
- 17.65s–20.85s (×2), actor 8, squad 1 (trace 2237): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2046. Next observer evidence: {'until': 20.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6673913928613326, 'next_transition': 3490}.
<a id="trace-2636"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2636): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2038. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26937294960610114, 'next_transition': 2938}.
<a id="trace-2637"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2637): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2038. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26937294960610114, 'next_transition': 2938}.
<a id="trace-2638"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2638): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2038. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26937294960610114, 'next_transition': 2938}.
<a id="trace-2938"></a>
<a id="trace-2940"></a>
- 18.75s–18.75s (×2), actor 5, squad 0 (trace 2938): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2043. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12590046439876215, 'next_transition': 2953}.
<a id="trace-2953"></a>
- 18.85s–18.85s (×1), actor 0, squad 0 (trace 2953): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2038. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1912406001905793, 'next_transition': 3272}.
<a id="trace-3272"></a>
<a id="trace-3274"></a>
<a id="trace-3326"></a>
<a id="trace-3328"></a>
<a id="trace-3448"></a>
<a id="trace-3450"></a>
<a id="trace-3476"></a>
<a id="trace-3478"></a>
- 19.25s–20.75s (×8), actor 5, squad 0 (trace 3272): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2043. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20905642782890418, 'next_transition': 3326}.
<a id="trace-384"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 384): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-385"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 385): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3880"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 3880): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.870143 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3880. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362602809067316, 'next_transition': 3903}.
<a id="trace-3881"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 3881): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.870143 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3881. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362602809067316, 'next_transition': 3903}.
<a id="trace-3882"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 3882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.870143 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3882. Next observer evidence: {'until': 22.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7881426285529678, 'next_transition': 4324}.
<a id="trace-3883"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 3883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.870143 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3883. Next observer evidence: {'until': 22.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7881426285529678, 'next_transition': 4324}.
<a id="trace-3903"></a>
<a id="trace-3905"></a>
<a id="trace-3951"></a>
<a id="trace-3953"></a>
- 21.25s–21.75s (×4), actor 5, squad 0 (trace 3903): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3883. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36017847823639754, 'next_transition': 3951}.
<a id="trace-3983"></a>
- 22.05s–22.05s (×1), actor 0, squad 0 (trace 3983): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3341. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12433360410345785, 'next_transition': 4309}.
<a id="trace-4309"></a>
<a id="trace-4311"></a>
<a id="trace-4708"></a>
<a id="trace-4710"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
- 22.25s–23.25s (×6), actor 5, squad 0 (trace 4309): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3883. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22190254920995867, 'next_transition': 4708}.
<a id="trace-4324"></a>
- 22.40s–22.40s (×1), actor 8, squad 1 (trace 4324): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3349. Next observer evidence: {'until': 23.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.1100103699525026, 'next_transition': 4770}.
<a id="trace-4770"></a>
- 23.40s–23.40s (×1), actor 8, squad 1 (trace 4770): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3349. Next observer evidence: {'until': 25.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0709821478860553, 'next_transition': 6039}.
<a id="trace-4786"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 4786): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3341. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812397053851345, 'next_transition': 5131}.
<a id="trace-5131"></a>
<a id="trace-5133"></a>
- 23.75s–23.75s (×2), actor 5, squad 0 (trace 5131): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3883. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749491562575357, 'next_transition': 5142}.
<a id="trace-5142"></a>
- 23.80s–23.80s (×1), actor 0, squad 0 (trace 5142): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3341. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499801290735174, 'next_transition': 5500}.
<a id="trace-5500"></a>
<a id="trace-5502"></a>
<a id="trace-5567"></a>
<a id="trace-5569"></a>
- 24.25s–24.75s (×4), actor 5, squad 0 (trace 5500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3883. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2559449110508848, 'next_transition': 5567}.
<a id="trace-5576"></a>
- 24.80s–24.80s (×1), actor 0, squad 0 (trace 5576): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3341. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3111484215920478, 'next_transition': 6024}.
<a id="trace-6024"></a>
<a id="trace-6026"></a>
<a id="trace-6422"></a>
<a id="trace-6424"></a>
<a id="trace-6496"></a>
<a id="trace-6498"></a>
<a id="trace-6549"></a>
<a id="trace-6551"></a>
<a id="trace-6587"></a>
<a id="trace-6589"></a>
<a id="trace-6652"></a>
<a id="trace-6654"></a>
<a id="trace-6690"></a>
<a id="trace-6692"></a>
- 25.25s–28.25s (×14), actor 5, squad 0 (trace 6024): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5940. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149894618465824, 'next_transition': 6422}.
<a id="trace-6039"></a>
- 25.40s–25.40s (×1), actor 8, squad 1 (trace 6039): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5943. Next observer evidence: {'until': 29, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.0600232431478576, 'next_transition': 6748}.
<a id="trace-6701"></a>
- 28.30s–28.30s (×1), actor 0, squad 0 (trace 6701): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5935. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6732}.
<a id="trace-6732"></a>
<a id="trace-6734"></a>
<a id="trace-6759"></a>
<a id="trace-6761"></a>
<a id="trace-6776"></a>
<a id="trace-6778"></a>
<a id="trace-7204"></a>
<a id="trace-7206"></a>
<a id="trace-7221"></a>
<a id="trace-7223"></a>
<a id="trace-7256"></a>
<a id="trace-7258"></a>
<a id="trace-7278"></a>
<a id="trace-7280"></a>
<a id="trace-7301"></a>
<a id="trace-7303"></a>
<a id="trace-7321"></a>
<a id="trace-7323"></a>
- 28.75s–32.75s (×18), actor 5, squad 0 (trace 6732): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5940. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6759}.
<a id="trace-6748"></a>
- 29.00s–29.00s (×1), actor 8, squad 1 (trace 6748): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5943. Next observer evidence: {'until': 30, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1327757007172001, 'next_transition': 6812}.
<a id="trace-6812"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 6812): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 6796. Next observer evidence: {'until': 33.4, 'shots': 2, 'casualties': 1, 'mean_displacement': 1.1616155390599203, 'next_transition': 8616}.
<a id="trace-7335"></a>
- 33.05s–33.05s (×1), actor 0, squad 0 (trace 7335): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6788. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8605}.
<a id="trace-8359"></a>
- 33.05s–33.05s (×1), actor 0, squad 0 (trace 8359): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 6788. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8605}.
<a id="trace-8360"></a>
- 33.05s–33.05s (×1), actor 0, squad 0 (trace 8360): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 6788. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8605}.
<a id="trace-8579"></a>
- 33.05s–33.05s (×1), actor 0, squad 0 (trace 8579): Assaulting. Knowledge: actor memory at 30.00s, trace 6788. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8605}.
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8624"></a>
<a id="trace-8626"></a>
<a id="trace-8648"></a>
<a id="trace-8650"></a>
<a id="trace-8666"></a>
<a id="trace-8668"></a>
<a id="trace-8755"></a>
<a id="trace-8757"></a>
<a id="trace-8769"></a>
<a id="trace-8771"></a>
<a id="trace-8795"></a>
<a id="trace-8797"></a>
<a id="trace-8830"></a>
<a id="trace-8832"></a>
<a id="trace-9699"></a>
<a id="trace-9701"></a>
<a id="trace-9727"></a>
<a id="trace-9729"></a>
<a id="trace-9754"></a>
<a id="trace-9756"></a>
<a id="trace-9913"></a>
<a id="trace-9915"></a>
<a id="trace-9945"></a>
<a id="trace-9947"></a>
<a id="trace-9969"></a>
<a id="trace-9971"></a>
- 33.25s–39.75s (×28), actor 5, squad 0 (trace 8605): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6793. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8624}.
<a id="trace-8616"></a>
- 33.55s–33.55s (×1), actor 8, squad 1 (trace 8616): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6796. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3251834838113075, 'next_transition': 8839}.
<a id="trace-8839"></a>
- 36.80s–36.80s (×1), actor 8, squad 1 (trace 8839): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 9439}.
<a id="trace-9181"></a>
- 36.80s–36.80s (×1), actor 8, squad 1 (trace 9181): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 9439}.
<a id="trace-9182"></a>
- 36.80s–36.80s (×1), actor 8, squad 1 (trace 9182): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 9439}.
<a id="trace-9420"></a>
- 36.80s–36.80s (×1), actor 8, squad 1 (trace 9420): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 9439}.
<a id="trace-9421"></a>
- 36.80s–36.80s (×1), actor 8, squad 1 (trace 9421): Assaulting. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 9439}.
<a id="trace-9439"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 9439): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6233780272836057, 'next_transition': 9763}.
<a id="trace-9443"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 9443): MoveTactically. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6233780272836057, 'next_transition': 9763}.
<a id="trace-9444"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 9444): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6233780272836057, 'next_transition': 9763}.
<a id="trace-9763"></a>
- 38.25s–38.25s (×1), actor 8, squad 1 (trace 9763): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: None.
<a id="trace-9765"></a>
- 38.25s–38.25s (×1), actor 8, squad 1 (trace 9765): NeedSupport. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: None.
<a id="trace-9773"></a>
- 38.30s–38.30s (×1), actor 8, squad 1 (trace 9773): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2657034085144119, 'next_transition': 10084}.
<a id="trace-9776"></a>
- 38.30s–38.30s (×1), actor 8, squad 1 (trace 9776): MoveTactically. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2657034085144119, 'next_transition': 10084}.
<a id="trace-9777"></a>
- 38.30s–38.30s (×1), actor 8, squad 1 (trace 9777): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 8685. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2657034085144119, 'next_transition': 10084}.
<a id="trace-9983"></a>
- 39.95s–39.95s (×1), actor 0, squad 0 (trace 9983): NeedSupport. Knowledge: actor memory at 35.00s, trace 8677. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11633555125959702, 'next_transition': 10017}.
<a id="trace-10017"></a>
- 40.05s–40.05s (×1), actor 5, squad 0 (trace 10017): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 40.05s, trace 10017. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1156389882775053, 'next_transition': 10071}.
<a id="trace-10071"></a>
<a id="trace-10073"></a>
<a id="trace-10109"></a>
<a id="trace-10111"></a>
<a id="trace-10138"></a>
<a id="trace-10140"></a>
<a id="trace-11144"></a>
<a id="trace-11146"></a>
<a id="trace-11181"></a>
<a id="trace-11183"></a>
<a id="trace-11197"></a>
<a id="trace-11199"></a>
<a id="trace-11226"></a>
<a id="trace-11228"></a>
- 40.25s–43.25s (×14), actor 5, squad 0 (trace 10071): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.05s, trace 10017. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23355746326718696, 'next_transition': 10109}.
<a id="trace-10084"></a>
- 40.40s–40.40s (×1), actor 8, squad 1 (trace 10084): NeedSupport. Knowledge: actor memory at 40.00s, trace 9992. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071972140885354, 'next_transition': 10151}.
<a id="trace-10151"></a>
- 41.35s–41.35s (×1), actor 8, squad 1 (trace 10151): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 9992. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267998273566362, 'next_transition': 11132}.
<a id="trace-10152"></a>
- 41.35s–41.35s (×1), actor 8, squad 1 (trace 10152): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 9992. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267998273566362, 'next_transition': 11132}.
<a id="trace-11132"></a>
- 41.40s–41.40s (×1), actor 8, squad 1 (trace 11132): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 9992. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.988025162421397, 'next_transition': 841}.
<a id="trace-801"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (events line 801): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11236"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (trace 11236): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480490 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 11236. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14571066074622707, 'next_transition': 11240}.
<a id="trace-11237"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (trace 11237): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480490 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 11237. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14571066074622707, 'next_transition': 11240}.
<a id="trace-11240"></a>
<a id="trace-11242"></a>
<a id="trace-11260"></a>
<a id="trace-11262"></a>
<a id="trace-11282"></a>
<a id="trace-11284"></a>
<a id="trace-11357"></a>
<a id="trace-11359"></a>
<a id="trace-11376"></a>
<a id="trace-11378"></a>
<a id="trace-11412"></a>
<a id="trace-11414"></a>
<a id="trace-11427"></a>
<a id="trace-11429"></a>
- 43.75s–46.75s (×14), actor 5, squad 0 (trace 11240): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 43.35s, trace 11237. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19085183469949446, 'next_transition': 11260}.
<a id="trace-841"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (events line 841): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11389"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 11389): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.484112 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 11389. Next observer evidence: {'until': 47.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11661}.
<a id="trace-11390"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 11390): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.484112 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 11390. Next observer evidence: {'until': 47.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11661}.
<a id="trace-11440"></a>
- 46.85s–46.85s (×1), actor 1, squad 0 (trace 11440): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 45.00s, trace 11290. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050003100524523, 'next_transition': 11446}.
<a id="trace-11446"></a>
- 47.10s–47.10s (×1), actor 1, squad 0 (trace 11446): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 11290. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500031005245226, 'next_transition': 11652}.
<a id="trace-11451"></a>
- 47.10s–47.10s (×1), actor 1, squad 0 (trace 11451): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 11290. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500031005245226, 'next_transition': 11652}.
<a id="trace-11452"></a>
- 47.10s–47.10s (×1), actor 1, squad 0 (trace 11452): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 11290. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500031005245226, 'next_transition': 11652}.
<a id="trace-11652"></a>
<a id="trace-11654"></a>
<a id="trace-11854"></a>
<a id="trace-11856"></a>
<a id="trace-11892"></a>
<a id="trace-11894"></a>
<a id="trace-11933"></a>
<a id="trace-11935"></a>
<a id="trace-11953"></a>
<a id="trace-11955"></a>
<a id="trace-11984"></a>
<a id="trace-11986"></a>
<a id="trace-12070"></a>
<a id="trace-12072"></a>
<a id="trace-12088"></a>
<a id="trace-12090"></a>
- 47.25s–50.75s (×16), actor 5, squad 0 (trace 11652): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 11390. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14005107438399433, 'next_transition': 11854}.
<a id="trace-11661"></a>
- 47.40s–47.40s (×1), actor 8, squad 1 (trace 11661): MoveTactically. Knowledge: actor memory at 45.00s, trace 11297. Next observer evidence: None.
<a id="trace-11662"></a>
- 47.40s–47.40s (×1), actor 8, squad 1 (trace 11662): received platoon directive. Knowledge: actor memory at 45.00s, trace 11297. Next observer evidence: None.
<a id="trace-11798"></a>
- 47.45s–47.45s (×1), actor 8, squad 1 (trace 11798): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 11297. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.703324540367864, 'next_transition': 12120}.
<a id="trace-12102"></a>
- 51.20s–51.20s (×1), actor 1, squad 0 (trace 12102): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12185"></a>
<a id="trace-12187"></a>
<a id="trace-12212"></a>
<a id="trace-12214"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12261"></a>
<a id="trace-12263"></a>
<a id="trace-12280"></a>
<a id="trace-12282"></a>
<a id="trace-12296"></a>
<a id="trace-12298"></a>
- 51.25s–54.25s (×14), actor 5, squad 0 (trace 12110): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 12007. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4737491924966309, 'next_transition': 12185}.
<a id="trace-12120"></a>
- 51.35s–51.35s (×1), actor 9, squad 1 (trace 12120): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 12009. Next observer evidence: {'until': 62.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.760240739531994, 'next_transition': 13602}.
<a id="trace-12121"></a>
- 51.35s–51.35s (×1), actor 9, squad 1 (trace 12121): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 12009. Next observer evidence: {'until': 62.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.760240739531994, 'next_transition': 13602}.
<a id="trace-12312"></a>
- 54.70s–54.70s (×1), actor 1, squad 0 (trace 12312): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12654"></a>
- 54.70s–54.70s (×1), actor 1, squad 0 (trace 12654): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12655"></a>
- 54.70s–54.70s (×1), actor 1, squad 0 (trace 12655): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12757"></a>
- 54.70s–54.70s (×1), actor 1, squad 0 (trace 12757): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12758"></a>
- 54.70s–54.70s (×1), actor 1, squad 0 (trace 12758): Assaulting. Knowledge: actor memory at 50.00s, trace 12003. Next observer evidence: None.
<a id="trace-12767"></a>
<a id="trace-12769"></a>
- 54.75s–54.75s (×2), actor 5, squad 0 (trace 12767): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 12007. Next observer evidence: {'until': 55, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12804}.
<a id="trace-12804"></a>
- 55.05s–55.05s (×1), actor 1, squad 0 (trace 12804): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 12783. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13101}.
<a id="trace-12809"></a>
- 55.05s–55.05s (×1), actor 1, squad 0 (trace 12809): MoveTactically. Knowledge: actor memory at 55.00s, trace 12783. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13101}.
<a id="trace-12810"></a>
- 55.05s–55.05s (×1), actor 1, squad 0 (trace 12810): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 55.00s, trace 12783. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13101}.
<a id="trace-13101"></a>
<a id="trace-13103"></a>
<a id="trace-13119"></a>
<a id="trace-13121"></a>
<a id="trace-13165"></a>
<a id="trace-13167"></a>
<a id="trace-13183"></a>
<a id="trace-13185"></a>
<a id="trace-13217"></a>
<a id="trace-13219"></a>
<a id="trace-13231"></a>
<a id="trace-13233"></a>
<a id="trace-13251"></a>
<a id="trace-13253"></a>
<a id="trace-13278"></a>
<a id="trace-13280"></a>
<a id="trace-13304"></a>
<a id="trace-13306"></a>
<a id="trace-13321"></a>
<a id="trace-13323"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
- 55.25s–60.25s (×22), actor 5, squad 0 (trace 13101): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12787. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13119}.
<a id="trace-13405"></a>
- 60.65s–60.65s (×1), actor 1, squad 0 (trace 13405): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 13333. Next observer evidence: None.
<a id="trace-13522"></a>
- 60.65s–60.65s (×1), actor 1, squad 0 (trace 13522): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 13333. Next observer evidence: None.
<a id="trace-13526"></a>
<a id="trace-13528"></a>
<a id="trace-13547"></a>
<a id="trace-13549"></a>
<a id="trace-13561"></a>
<a id="trace-13563"></a>
<a id="trace-13583"></a>
<a id="trace-13585"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13612"></a>
<a id="trace-13614"></a>
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13664"></a>
<a id="trace-13666"></a>
<a id="trace-13699"></a>
<a id="trace-13701"></a>
<a id="trace-13795"></a>
<a id="trace-13797"></a>
<a id="trace-13830"></a>
<a id="trace-13832"></a>
<a id="trace-13878"></a>
<a id="trace-13880"></a>
<a id="trace-13910"></a>
<a id="trace-13912"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-14001"></a>
<a id="trace-14003"></a>
<a id="trace-14049"></a>
<a id="trace-14051"></a>
<a id="trace-14092"></a>
<a id="trace-14094"></a>
<a id="trace-14123"></a>
<a id="trace-14125"></a>
<a id="trace-14146"></a>
<a id="trace-14148"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14273"></a>
<a id="trace-14275"></a>
<a id="trace-14293"></a>
<a id="trace-14295"></a>
<a id="trace-14315"></a>
<a id="trace-14317"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14355"></a>
<a id="trace-14357"></a>
<a id="trace-14373"></a>
<a id="trace-14375"></a>
<a id="trace-14387"></a>
<a id="trace-14389"></a>
<a id="trace-14401"></a>
<a id="trace-14403"></a>
<a id="trace-14415"></a>
<a id="trace-14417"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14498"></a>
<a id="trace-14500"></a>
<a id="trace-14517"></a>
<a id="trace-14519"></a>
<a id="trace-14542"></a>
<a id="trace-14544"></a>
<a id="trace-14569"></a>
<a id="trace-14571"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
<a id="trace-14671"></a>
<a id="trace-14673"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
- 60.75s–83.25s (×78), actor 5, squad 0 (trace 13526): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13337. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150000865299704, 'next_transition': 13547}.
<a id="trace-13602"></a>
- 62.90s–62.90s (×1), actor 9, squad 1 (trace 13602): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 13339. Next observer evidence: {'until': 79.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14600}.
<a id="trace-13603"></a>
- 62.90s–62.90s (×1), actor 9, squad 1 (trace 13603): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 13339. Next observer evidence: {'until': 79.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14600}.
<a id="trace-14600"></a>
- 79.40s–79.40s (×1), actor 9, squad 1 (trace 14600): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 14429. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1662}.
<a id="trace-14741"></a>
- 83.95s–83.95s (×1), actor 2, squad 0 (trace 14741): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 80.00s, trace 14614. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14746}.
<a id="trace-14746"></a>
<a id="trace-14748"></a>
- 84.25s–84.25s (×2), actor 5, squad 0 (trace 14746): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 14617. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1661}.
<a id="trace-1661"></a>
- 85.05s–85.05s (×1), actor 5, squad 0 (events line 1661): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1662"></a>
- 85.05s–85.05s (×1), actor 5, squad 1 (events line 1662): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14777"></a>
- 85.05s–85.05s (×1), actor 5, squad 0 (trace 14777): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 85.05s, trace 14777. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14824}.
<a id="trace-14778"></a>
- 85.05s–85.05s (×1), actor 5, squad 0 (trace 14778): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 85.05s, trace 14778. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14824}.
<a id="trace-14779"></a>
- 85.05s–85.05s (×1), actor 5, squad 1 (trace 14779): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 85.05s, trace 14779. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14854}.
<a id="trace-14780"></a>
- 85.05s–85.05s (×1), actor 5, squad 1 (trace 14780): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 85.05s, trace 14780. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14854}.
<a id="trace-14824"></a>
<a id="trace-14826"></a>
<a id="trace-14845"></a>
<a id="trace-14847"></a>
- 85.25s–86.25s (×4), actor 5, squad 0 (trace 14824): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.05s, trace 14780. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14845}.
<a id="trace-14854"></a>
- 86.25s–86.25s (×1), actor 9, squad 1 (trace 14854): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 14765. Next observer evidence: {'until': 97, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15416}.
<a id="trace-14855"></a>
- 86.25s–86.25s (×1), actor 9, squad 1 (trace 14855): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 14765. Next observer evidence: {'until': 97, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15416}.
<a id="trace-14924"></a>
- 86.95s–86.95s (×1), actor 2, squad 0 (trace 14924): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 14761. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15034}.
<a id="trace-14925"></a>
- 86.95s–86.95s (×1), actor 2, squad 0 (trace 14925): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 14761. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15034}.
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15071"></a>
<a id="trace-15073"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15184"></a>
<a id="trace-15186"></a>
<a id="trace-15205"></a>
<a id="trace-15207"></a>
<a id="trace-15231"></a>
<a id="trace-15233"></a>
<a id="trace-15254"></a>
<a id="trace-15256"></a>
<a id="trace-15280"></a>
<a id="trace-15282"></a>
<a id="trace-15366"></a>
<a id="trace-15392"></a>
<a id="trace-15394"></a>
<a id="trace-15422"></a>
<a id="trace-15424"></a>
<a id="trace-15450"></a>
<a id="trace-15452"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15556"></a>
<a id="trace-15558"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
<a id="trace-15609"></a>
<a id="trace-15611"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-15653"></a>
<a id="trace-15655"></a>
<a id="trace-15734"></a>
<a id="trace-15736"></a>
<a id="trace-15751"></a>
<a id="trace-15753"></a>
<a id="trace-15778"></a>
<a id="trace-15780"></a>
<a id="trace-15806"></a>
<a id="trace-15808"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-15957"></a>
<a id="trace-15959"></a>
<a id="trace-15979"></a>
<a id="trace-15981"></a>
<a id="trace-16005"></a>
<a id="trace-16007"></a>
<a id="trace-16088"></a>
<a id="trace-16090"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16159"></a>
<a id="trace-16161"></a>
<a id="trace-16183"></a>
<a id="trace-16185"></a>
<a id="trace-16258"></a>
<a id="trace-16260"></a>
<a id="trace-16287"></a>
<a id="trace-16289"></a>
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16337"></a>
<a id="trace-16339"></a>
<a id="trace-16365"></a>
<a id="trace-16367"></a>
<a id="trace-16445"></a>
<a id="trace-16447"></a>
<a id="trace-16463"></a>
<a id="trace-16465"></a>
<a id="trace-16492"></a>
<a id="trace-16494"></a>
<a id="trace-16517"></a>
<a id="trace-16519"></a>
<a id="trace-16545"></a>
<a id="trace-16547"></a>
<a id="trace-16622"></a>
<a id="trace-16624"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
<a id="trace-16671"></a>
<a id="trace-16673"></a>
<a id="trace-16694"></a>
<a id="trace-16696"></a>
<a id="trace-16721"></a>
<a id="trace-16723"></a>
<a id="trace-16806"></a>
<a id="trace-16808"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-16844"></a>
<a id="trace-16846"></a>
<a id="trace-16874"></a>
<a id="trace-16876"></a>
<a id="trace-16893"></a>
<a id="trace-16895"></a>
<a id="trace-16971"></a>
<a id="trace-16973"></a>
<a id="trace-16994"></a>
<a id="trace-16996"></a>
<a id="trace-17023"></a>
<a id="trace-17025"></a>
<a id="trace-17047"></a>
<a id="trace-17049"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
- 87.25s–144.30s (×115), actor 5, squad 0 (trace 15034): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.05s, trace 14780. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15071}.
<a id="trace-15416"></a>
- 97.10s–97.10s (×1), actor 9, squad 1 (trace 15416): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 15307. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2077}.
<a id="trace-15417"></a>
- 97.10s–97.10s (×1), actor 9, squad 1 (trace 15417): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 15307. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2077}.
<a id="trace-2076"></a>
- 145.05s–145.05s (×1), actor 5, squad 0 (events line 2076): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17154}.
<a id="trace-2077"></a>
- 145.05s–145.05s (×1), actor 5, squad 1 (events line 2077): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 175, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2502}.
<a id="trace-17108"></a>
- 145.05s–145.05s (×1), actor 5, squad 0 (trace 17108): renew committed intent (75 s lifetime). Knowledge: actor memory at 145.05s, trace 17108. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17154}.
<a id="trace-17109"></a>
- 145.05s–145.05s (×1), actor 5, squad 1 (trace 17109): renew committed intent (75 s lifetime). Knowledge: actor memory at 145.05s, trace 17109. Next observer evidence: {'until': 175, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2502}.
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17173"></a>
<a id="trace-17175"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17234"></a>
<a id="trace-17236"></a>
<a id="trace-17256"></a>
<a id="trace-17258"></a>
<a id="trace-17332"></a>
<a id="trace-17334"></a>
<a id="trace-17358"></a>
<a id="trace-17360"></a>
<a id="trace-17380"></a>
<a id="trace-17382"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17534"></a>
<a id="trace-17536"></a>
<a id="trace-17560"></a>
<a id="trace-17562"></a>
<a id="trace-17587"></a>
<a id="trace-17589"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17687"></a>
<a id="trace-17689"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17766"></a>
<a id="trace-17768"></a>
<a id="trace-17791"></a>
<a id="trace-17793"></a>
<a id="trace-17870"></a>
<a id="trace-17872"></a>
<a id="trace-17888"></a>
<a id="trace-17890"></a>
<a id="trace-17915"></a>
<a id="trace-17917"></a>
<a id="trace-17948"></a>
<a id="trace-17950"></a>
<a id="trace-17971"></a>
<a id="trace-17973"></a>
<a id="trace-18047"></a>
<a id="trace-18049"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18097"></a>
<a id="trace-18099"></a>
<a id="trace-18123"></a>
<a id="trace-18125"></a>
<a id="trace-18152"></a>
<a id="trace-18154"></a>
<a id="trace-18234"></a>
<a id="trace-18236"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18278"></a>
<a id="trace-18280"></a>
<a id="trace-18306"></a>
<a id="trace-18308"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18403"></a>
<a id="trace-18405"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18480"></a>
<a id="trace-18482"></a>
<a id="trace-18512"></a>
<a id="trace-18514"></a>
<a id="trace-18585"></a>
<a id="trace-18587"></a>
<a id="trace-18608"></a>
<a id="trace-18610"></a>
<a id="trace-18638"></a>
<a id="trace-18640"></a>
<a id="trace-18667"></a>
<a id="trace-18669"></a>
<a id="trace-18690"></a>
<a id="trace-18692"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18791"></a>
<a id="trace-18793"></a>
<a id="trace-18814"></a>
<a id="trace-18816"></a>
<a id="trace-18841"></a>
<a id="trace-18843"></a>
<a id="trace-18869"></a>
<a id="trace-18871"></a>
<a id="trace-18950"></a>
<a id="trace-18952"></a>
<a id="trace-18972"></a>
<a id="trace-18974"></a>
<a id="trace-18995"></a>
<a id="trace-19021"></a>
<a id="trace-19023"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19151"></a>
<a id="trace-19153"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19198"></a>
<a id="trace-19200"></a>
<a id="trace-19229"></a>
<a id="trace-19231"></a>
<a id="trace-19301"></a>
<a id="trace-19303"></a>
- 145.30s–205.30s (×121), actor 5, squad 0 (trace 17154): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.05s, trace 17109. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17173}.
<a id="trace-2501"></a>
- 206.00s–206.00s (×1), actor 5, squad 0 (events line 2501): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19328}.
<a id="trace-2502"></a>
- 206.00s–206.00s (×1), actor 5, squad 1 (events line 2502): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 236, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2926}.
<a id="trace-19317"></a>
- 206.00s–206.00s (×1), actor 5, squad 0 (trace 19317): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.00s, trace 19317. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19328}.
<a id="trace-19318"></a>
- 206.00s–206.00s (×1), actor 5, squad 1 (trace 19318): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.00s, trace 19318. Next observer evidence: {'until': 236, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2926}.
<a id="trace-19328"></a>
<a id="trace-19330"></a>
<a id="trace-19357"></a>
<a id="trace-19359"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19408"></a>
<a id="trace-19410"></a>
<a id="trace-19484"></a>
<a id="trace-19486"></a>
<a id="trace-19509"></a>
<a id="trace-19511"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19556"></a>
<a id="trace-19558"></a>
<a id="trace-19593"></a>
<a id="trace-19595"></a>
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19736"></a>
<a id="trace-19738"></a>
<a id="trace-19763"></a>
<a id="trace-19765"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19868"></a>
<a id="trace-19870"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19916"></a>
<a id="trace-19918"></a>
<a id="trace-19942"></a>
<a id="trace-19944"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20038"></a>
<a id="trace-20040"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20091"></a>
<a id="trace-20093"></a>
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20193"></a>
<a id="trace-20195"></a>
<a id="trace-20215"></a>
<a id="trace-20217"></a>
<a id="trace-20239"></a>
<a id="trace-20241"></a>
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20373"></a>
<a id="trace-20375"></a>
<a id="trace-20394"></a>
<a id="trace-20396"></a>
<a id="trace-20425"></a>
<a id="trace-20427"></a>
<a id="trace-20447"></a>
<a id="trace-20449"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20552"></a>
<a id="trace-20554"></a>
<a id="trace-20579"></a>
<a id="trace-20581"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20727"></a>
<a id="trace-20729"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20833"></a>
<a id="trace-20835"></a>
<a id="trace-20914"></a>
<a id="trace-20916"></a>
<a id="trace-20932"></a>
<a id="trace-20934"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-21014"></a>
<a id="trace-21016"></a>
<a id="trace-21088"></a>
<a id="trace-21090"></a>
<a id="trace-21110"></a>
<a id="trace-21112"></a>
<a id="trace-21138"></a>
<a id="trace-21140"></a>
<a id="trace-21158"></a>
<a id="trace-21160"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21261"></a>
<a id="trace-21263"></a>
<a id="trace-21287"></a>
<a id="trace-21289"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
- 206.30s–265.30s (×120), actor 5, squad 0 (trace 19328): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.00s, trace 19318. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19357}.
<a id="trace-2925"></a>
- 266.30s–266.30s (×1), actor 5, squad 0 (events line 2925): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2926"></a>
- 266.30s–266.30s (×1), actor 5, squad 1 (events line 2926): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21455"></a>
<a id="trace-21457"></a>
- 266.30s–266.30s (×2), actor 5, squad 0 (trace 21455): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 21379. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21493}.
<a id="trace-21462"></a>
- 266.30s–266.30s (×1), actor 5, squad 0 (trace 21462): renew committed intent (75 s lifetime). Knowledge: actor memory at 266.30s, trace 21462. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21493}.
<a id="trace-21463"></a>
- 266.30s–266.30s (×1), actor 5, squad 1 (trace 21463): renew committed intent (75 s lifetime). Knowledge: actor memory at 266.30s, trace 21463. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3359}.
<a id="trace-21493"></a>
<a id="trace-21495"></a>
<a id="trace-21513"></a>
<a id="trace-21515"></a>
<a id="trace-21536"></a>
<a id="trace-21538"></a>
<a id="trace-21618"></a>
<a id="trace-21620"></a>
<a id="trace-21637"></a>
<a id="trace-21639"></a>
<a id="trace-21662"></a>
<a id="trace-21664"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21717"></a>
<a id="trace-21719"></a>
<a id="trace-21791"></a>
<a id="trace-21793"></a>
<a id="trace-21812"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21860"></a>
<a id="trace-21862"></a>
<a id="trace-21885"></a>
<a id="trace-21887"></a>
<a id="trace-21971"></a>
<a id="trace-21973"></a>
<a id="trace-21987"></a>
<a id="trace-21989"></a>
<a id="trace-22012"></a>
<a id="trace-22014"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22061"></a>
<a id="trace-22063"></a>
<a id="trace-22139"></a>
<a id="trace-22141"></a>
<a id="trace-22163"></a>
<a id="trace-22165"></a>
<a id="trace-22191"></a>
<a id="trace-22193"></a>
<a id="trace-22215"></a>
<a id="trace-22217"></a>
<a id="trace-22241"></a>
<a id="trace-22243"></a>
<a id="trace-22320"></a>
<a id="trace-22322"></a>
<a id="trace-22339"></a>
<a id="trace-22341"></a>
<a id="trace-22367"></a>
<a id="trace-22369"></a>
<a id="trace-22394"></a>
<a id="trace-22396"></a>
<a id="trace-22424"></a>
<a id="trace-22426"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22548"></a>
<a id="trace-22550"></a>
<a id="trace-22571"></a>
<a id="trace-22573"></a>
<a id="trace-22598"></a>
<a id="trace-22600"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22754"></a>
<a id="trace-22756"></a>
<a id="trace-22774"></a>
<a id="trace-22776"></a>
<a id="trace-22852"></a>
<a id="trace-22854"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22951"></a>
<a id="trace-22953"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23077"></a>
<a id="trace-23109"></a>
<a id="trace-23111"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23206"></a>
<a id="trace-23208"></a>
<a id="trace-23234"></a>
<a id="trace-23236"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23310"></a>
<a id="trace-23312"></a>
<a id="trace-23389"></a>
<a id="trace-23391"></a>
<a id="trace-23410"></a>
<a id="trace-23412"></a>
<a id="trace-23436"></a>
<a id="trace-23438"></a>
<a id="trace-23461"></a>
<a id="trace-23463"></a>
<a id="trace-23484"></a>
<a id="trace-23486"></a>
<a id="trace-23561"></a>
<a id="trace-23563"></a>
- 267.30s–325.30s (×116), actor 5, squad 0 (trace 21493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 266.30s, trace 21463. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21513}.
<a id="trace-3358"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (events line 3358): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3359"></a>
- 326.30s–326.30s (×1), actor 5, squad 1 (events line 3359): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23583"></a>
<a id="trace-23585"></a>
- 326.30s–326.30s (×2), actor 5, squad 0 (trace 23583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23505. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23613}.
<a id="trace-23590"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (trace 23590): renew committed intent (75 s lifetime). Knowledge: actor memory at 326.30s, trace 23590. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23613}.
<a id="trace-23591"></a>
- 326.30s–326.30s (×1), actor 5, squad 1 (trace 23591): renew committed intent (75 s lifetime). Knowledge: actor memory at 326.30s, trace 23591. Next observer evidence: {'until': 356.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-23613"></a>
<a id="trace-23615"></a>
<a id="trace-23638"></a>
<a id="trace-23640"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23740"></a>
<a id="trace-23742"></a>
<a id="trace-23760"></a>
<a id="trace-23762"></a>
<a id="trace-23785"></a>
<a id="trace-23787"></a>
<a id="trace-23820"></a>
<a id="trace-23822"></a>
<a id="trace-23843"></a>
<a id="trace-23845"></a>
<a id="trace-23919"></a>
<a id="trace-23921"></a>
<a id="trace-23944"></a>
<a id="trace-23946"></a>
<a id="trace-23967"></a>
<a id="trace-23969"></a>
<a id="trace-23989"></a>
<a id="trace-23991"></a>
<a id="trace-24017"></a>
<a id="trace-24019"></a>
<a id="trace-24098"></a>
<a id="trace-24100"></a>
<a id="trace-24119"></a>
<a id="trace-24121"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24192"></a>
<a id="trace-24194"></a>
<a id="trace-24271"></a>
<a id="trace-24273"></a>
<a id="trace-24302"></a>
<a id="trace-24304"></a>
<a id="trace-24324"></a>
<a id="trace-24326"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24375"></a>
<a id="trace-24377"></a>
<a id="trace-24449"></a>
<a id="trace-24451"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24504"></a>
<a id="trace-24506"></a>
<a id="trace-24533"></a>
<a id="trace-24535"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24630"></a>
<a id="trace-24632"></a>
<a id="trace-24655"></a>
<a id="trace-24657"></a>
<a id="trace-24676"></a>
<a id="trace-24678"></a>
<a id="trace-24699"></a>
<a id="trace-24701"></a>
<a id="trace-24726"></a>
<a id="trace-24728"></a>
- 327.30s–359.30s (×66), actor 5, squad 0 (trace 23613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 326.30s, trace 23591. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23638}.

## Net delivery

189 matched order/radio deliveries; 500 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.533s; maximum 2.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3341: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3347: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3349: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3351: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3352: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3353: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3354: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3356: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3358: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3359: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3361: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3362: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3363: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3364: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3880: estimate 9.99; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3881: estimate 9.99; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3882: estimate 9.99; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3883: estimate 9.99; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5935: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5940: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5941: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5943: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5944: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5945: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5946: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5947: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5948: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5950: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5951: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5952: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5953: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5954: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5955: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5956: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5957: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5958: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6788: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6789: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6793: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6794: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6796: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6797: estimate 16.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6798: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6799: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6800: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6801: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6803: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6804: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6805: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6806: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6807: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6808: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6809: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6810: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6811: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 8677: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8678: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8682: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8683: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8685: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8686: estimate 15.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 8687: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8688: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8689: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8691: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8692: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8693: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8694: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8695: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8696: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8697: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 8698: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 8699: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9984: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9985: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9989: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9990: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 9992: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9993: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9994: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9995: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9997: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9998: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9999: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10000: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10001: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10002: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10003: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 10004: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 10005: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.05s leader 5, trace 10017: estimate 15.25; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 11236: estimate 15.15; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 11237: estimate 15.15; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11290: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11294: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11295: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 11297: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11298: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11299: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11300: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11301: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11302: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11303: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11304: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11305: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11306: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11307: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11308: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 11309: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 11310: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 11389: estimate 15.03; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 11390: estimate 15.03; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 12003: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 12004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 12005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 12007: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 12008: estimate 15.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 12009: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 12010: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 12011: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 12012: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 12013: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 12014: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 12015: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 12016: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 12017: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 12018: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 12019: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 12020: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 12021: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12783: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12784: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12787: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12788: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12789: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12790: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12791: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12792: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12793: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12794: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12795: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12796: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12797: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12798: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12799: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12800: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12801: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13333: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 13334: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13337: estimate 15.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13338: estimate 15.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13339: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13340: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13341: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13342: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13343: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13344: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13345: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13346: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13347: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13348: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13349: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 13350: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 13351: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13721: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13722: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13725: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13726: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13727: estimate 15.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13728: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13729: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13730: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13731: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13732: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13733: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13734: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13735: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13736: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13737: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13738: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14169: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 14170: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14173: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14174: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14175: estimate 15.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14176: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14177: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14178: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14179: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14180: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14181: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14182: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14183: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14184: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 14185: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 14186: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 14424: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 14425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14427: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 14428: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 14429: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 14430: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14431: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14432: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14433: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14434: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14435: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14436: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14437: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14438: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 14439: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 14440: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 14614: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 14615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14617: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14618: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14619: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14620: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14621: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14622: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14623: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14624: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14625: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14626: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14627: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 14628: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 14629: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 14761: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 14762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14764: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14765: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14766: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14767: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14768: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14769: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14770: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14771: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14772: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14773: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14774: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 14775: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 14776: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.05s leader 5, trace 14777: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.05s leader 5, trace 14778: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.05s leader 5, trace 14779: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.05s leader 5, trace 14780: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 15124: estimate 14.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 15125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15127: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 15128: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15129: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15130: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15131: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15132: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15133: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15134: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15135: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 15136: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 15137: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 15138: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 15139: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 15303: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 15304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15306: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 15307: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15308: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15309: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15310: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15311: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15312: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15313: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15314: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 15315: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 15316: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 15317: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 15318: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 15498: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 15499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15501: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15502: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15503: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15504: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15505: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15506: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15507: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15508: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15509: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15510: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15511: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 15512: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 15513: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15670: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15673: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15674: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15675: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15676: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15677: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15678: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15679: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15680: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15681: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15682: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15683: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 15684: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 15685: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 15852: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15855: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15856: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15857: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15858: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15859: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15860: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15861: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15862: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15863: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15864: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15865: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15866: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15867: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 16026: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16029: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16030: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16031: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16032: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16033: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16034: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16035: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16036: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16037: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16038: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16039: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 16040: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16041: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 16200: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16203: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16204: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16205: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16206: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16207: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16208: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16209: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16210: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16211: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16212: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16213: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 16214: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 16215: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 16387: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16390: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16391: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16392: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16393: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16394: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16395: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16396: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16397: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16398: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16399: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16400: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 16401: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 16402: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 16564: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 16565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16567: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16568: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16569: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16570: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16571: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16572: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16573: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16574: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16575: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16576: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16577: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 16578: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 16579: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 16740: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16743: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16744: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16745: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16746: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16747: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16748: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16749: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16750: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16751: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16752: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16753: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 16754: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 16755: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 16909: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 16910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16912: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16913: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16914: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16915: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16916: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16917: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16918: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16919: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16920: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16921: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16922: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 16923: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 16924: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 17092: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 17093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17095: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17096: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17097: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17098: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17099: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17100: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17101: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17102: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17103: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17104: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17105: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 17106: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 17107: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.05s leader 5, trace 17108: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.05s leader 5, trace 17109: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 17274: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 17275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 17276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17277: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17278: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17279: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17280: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17281: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17282: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17283: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17284: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17285: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17286: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17287: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 17288: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 17289: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 17455: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 17456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17458: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17459: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17460: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17461: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17462: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17463: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17464: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17465: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17466: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17467: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17468: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 17469: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 17470: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 17628: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 17629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17631: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17632: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17633: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17634: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17635: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17636: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17637: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17638: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17639: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17640: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17641: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 17642: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 17643: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 17812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 17813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 17814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 17815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 17816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 17817: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 17818: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 17819: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 17820: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 17821: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17822: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 17823: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 17824: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 17825: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 17826: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 17827: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 17989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 17990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17994: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17995: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17996: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17997: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17998: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17999: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18000: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18001: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18002: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 18003: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 18004: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 18176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 18177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18181: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18183: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18184: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18185: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18186: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18187: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18188: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18189: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 18190: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 18191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 18344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 18345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 18346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 18358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 18359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 18527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 18528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 18541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 18542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 18706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 18707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 18720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 18721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 18892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 18893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 18896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 18906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 18907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 19061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 19062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 19243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 19244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 19257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 19258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.00s leader 5, trace 19317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.00s leader 5, trace 19318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 19423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 19424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 19437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 19438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 19608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 19609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 19780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 19781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 19784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 19793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 19794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 19795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 19955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 19956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 19957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 19958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 19959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 19960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 19961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 19963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 20135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 20136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 20137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 20150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 20315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 20316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 20319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 20323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 20329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 20330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 20488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 20489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 20490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 20492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 20502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 20503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 20668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 20669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 20682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 20683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 20850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 20851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 20864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 20865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 21027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 21028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 21029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 21030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 21041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 21042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 21203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 21204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 21217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 21218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 21376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 21377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 21390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 21391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 266.30s leader 5, trace 21462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 266.30s leader 5, trace 21463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 21554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 21555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 21567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 21568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 21569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 21730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 21731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 21744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 21745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 21905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 21906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 21919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 21920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 22077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 22078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 22079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 22091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 22092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 22262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 22263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 22276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 22277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 22443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 22457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 22458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 22617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 22618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 22631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 22632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 22790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 22791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 22804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 22805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 22973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 22974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 22987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 22988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 23148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 23149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 23150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 23162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 23331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 23345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 23346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 23502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 23503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 23516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 23517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 326.30s leader 5, trace 23590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 326.30s leader 5, trace 23591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 23682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 23683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 23696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 23697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 23861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 23862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 23875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 23876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 24040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 24041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 24042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 24044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 24054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 24055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 24212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 24213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 24214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 24226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 24227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 24391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 24392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 24393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 24569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 24570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 24571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 24583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 24584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 24749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 24750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 24751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 24753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 24763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 24764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Ellis incapacitated
- 1: Dane incapacitated
- 1: Vale incapacitated
- 1: Reed incapacitated
- 1: Bren incapacitated
- 1: Voss incapacitated
- 1: Rook killed in action
- 1: Moss incapacitated

## Outcome attribution

- 85.05s, evidence 1661: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.05s, evidence 1662: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.05s, evidence 14777: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14824}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.05s, evidence 14778: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14824}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.05s, evidence 14779: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14854}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.05s, evidence 14780: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.251419 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14854}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 145.05s, evidence 2076: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17154}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 145.05s, evidence 2077: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 175, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2502}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 206.00s, evidence 2501: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19328}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 206.00s, evidence 2502: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 236, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2926}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 266.30s, evidence 2925: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 266.30s, evidence 2926: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 326.30s, evidence 3358: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 326.30s, evidence 3359: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
