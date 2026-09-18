# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/107/good-azure/battle-107-1789673910097836544`

## Battle summary

**Ember** · 360 s · 688 shots.

### Turning points

- 25.6s, squad 4: contact (events line 295). First recorded contact.
- 37.7s, squad 0: help call ([trace 4401](#trace-4401)). 39.3s, squad 1: answered a neighbour with support by fire.
- 39.3s, squad 1: help answer ([trace 4693](#trace-4693)). 79.4s, squad 1: advanced tactically.
- 51.4s, squad 0: withdrawal ([trace 8164](#trace-8164)). 77.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 104.7s, squad 1: withdrawal ([trace 14406](#trace-14406)). 113.8s, squad 1: took cover and returned fire.
- 111.4s, squad 1: help call ([trace 15256](#trace-15256)). 113.2s, squad 0: answered a neighbour with support by fire.
- 113.2s, squad 0: help answer ([trace 15438](#trace-15438)). 147.2s, squad 0: Withdraw to received rally.
- 117.7s, squad 1: withdrawal ([trace 17494](#trace-17494)). 149.1s, squad 1: contact broken or rally reached: Occupy and report strength.
- 147.2s, squad 0: withdrawal ([trace 19181](#trace-19181)). 150.9s, squad 0: took cover and returned fire.
- 150.9s, squad 0: help call ([trace 19637](#trace-19637)). 152.1s, squad 1: answered a neighbour with support by fire.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 35 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 19 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 530 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 104 shots, 0/4 lost.

### Decisions and attribution

At 117.7s, squad 1 chose broke contact ([trace 17494](#trace-17494)), followed by 0 shots and 1 own casualties; estimate 15.4 against 0 distinct squad-reported contacts; At 80.4s, squad 1 chose prepared a base of fire ([trace 9476](#trace-9476)), followed by 7 shots and 0 own casualties; estimate 6.7 against 0 distinct squad-reported contacts; At 44.6s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 6765](#trace-6765)), followed by 4 shots and 0 own casualties; estimate 3.0 against 2 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 828](#trace-828)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0659310127409745, 'next_transition': 1003}.

### Communication

179 matched deliveries (mean 0.42s, max 1.90s); 364 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.65s, squad 4, contact, evidence events line 295: First recorded contact; .
- 37.65s, squad 0, help call, evidence 4401: NeedSupport; 39.3s, squad 1: answered a neighbour with support by fire.
- 39.30s, squad 1, help answer, evidence 4693: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.4s, squad 1: advanced tactically.
- 51.40s, squad 0, withdrawal, evidence 8164: BreakContact: believed ratio at least two without superiority; 77.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 104.70s, squad 1, withdrawal, evidence 14406: BreakContact: believed ratio at least two without superiority; 113.8s, squad 1: took cover and returned fire.
- 111.40s, squad 1, help call, evidence 15256: NeedSupport; 113.2s, squad 0: answered a neighbour with support by fire.
- 113.25s, squad 0, help answer, evidence 15438: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 147.2s, squad 0: Withdraw to received rally.
- 117.70s, squad 1, withdrawal, evidence 17494: BreakContact: believed ratio at least two without superiority; 149.1s, squad 1: contact broken or rally reached: Occupy and report strength.
- 147.25s, squad 0, withdrawal, evidence 19181: Withdraw to received rally; 150.9s, squad 0: took cover and returned fire.
- 150.90s, squad 0, help call, evidence 19637: NeedSupport; 152.1s, squad 1: answered a neighbour with support by fire.
- 152.10s, squad 1, help answer, evidence 19792: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 156.9s, squad 1: Withdraw to received rally.
- 154.30s, squad 0, withdrawal, evidence 19866: BreakContact: believed ratio at least two without superiority; 179.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 156.95s, squad 1, withdrawal, evidence 20091: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504941351679946, 'next_transition': 103}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504941351679946, 'next_transition': 103}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504941351679946, 'next_transition': 103}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-728"></a>
<a id="trace-730"></a>
<a id="trace-765"></a>
<a id="trace-767"></a>
<a id="trace-792"></a>
<a id="trace-794"></a>
<a id="trace-816"></a>
<a id="trace-818"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300051604607332, 'next_transition': 728}.
<a id="trace-102"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 102): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0659310127409745, 'next_transition': 1003}.
<a id="trace-828"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 828): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 828. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0659310127409745, 'next_transition': 1003}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0659310127409745, 'next_transition': 1003}.
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-878"></a>
<a id="trace-880"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1231"></a>
<a id="trace-1233"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1307"></a>
<a id="trace-1309"></a>
<a id="trace-1347"></a>
<a id="trace-1349"></a>
<a id="trace-1382"></a>
<a id="trace-1384"></a>
<a id="trace-1424"></a>
<a id="trace-1426"></a>
<a id="trace-1446"></a>
<a id="trace-1448"></a>
<a id="trace-1465"></a>
<a id="trace-1467"></a>
<a id="trace-1558"></a>
<a id="trace-1560"></a>
<a id="trace-1581"></a>
<a id="trace-1583"></a>
- 4.20s–10.70s (×28), actor 5, squad 0 (trace 847): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150034205820509, 'next_transition': 878}.
<a id="trace-994"></a>
<a id="trace-1235"></a>
<a id="trace-1282"></a>
<a id="trace-1284"></a>
<a id="trace-1386"></a>
<a id="trace-1388"></a>
<a id="trace-1428"></a>
<a id="trace-1430"></a>
<a id="trace-1469"></a>
<a id="trace-1471"></a>
<a id="trace-1562"></a>
<a id="trace-1564"></a>
<a id="trace-1585"></a>
<a id="trace-1587"></a>
<a id="trace-1921"></a>
<a id="trace-1923"></a>
<a id="trace-1991"></a>
<a id="trace-1993"></a>
<a id="trace-2127"></a>
<a id="trace-2129"></a>
<a id="trace-2164"></a>
<a id="trace-2166"></a>
<a id="trace-2281"></a>
<a id="trace-2283"></a>
<a id="trace-2372"></a>
<a id="trace-2374"></a>
<a id="trace-2600"></a>
<a id="trace-2602"></a>
<a id="trace-2634"></a>
<a id="trace-2636"></a>
<a id="trace-2659"></a>
<a id="trace-2661"></a>
<a id="trace-2713"></a>
<a id="trace-2715"></a>
<a id="trace-2816"></a>
<a id="trace-2818"></a>
<a id="trace-2847"></a>
<a id="trace-2849"></a>
<a id="trace-2888"></a>
<a id="trace-2890"></a>
<a id="trace-2918"></a>
<a id="trace-2920"></a>
<a id="trace-2930"></a>
<a id="trace-2932"></a>
<a id="trace-2954"></a>
<a id="trace-2956"></a>
<a id="trace-2970"></a>
<a id="trace-2972"></a>
<a id="trace-3352"></a>
<a id="trace-3354"></a>
<a id="trace-3376"></a>
<a id="trace-3378"></a>
<a id="trace-3478"></a>
<a id="trace-3480"></a>
<a id="trace-3505"></a>
<a id="trace-3507"></a>
<a id="trace-3610"></a>
<a id="trace-3612"></a>
<a id="trace-3629"></a>
<a id="trace-3631"></a>
<a id="trace-3654"></a>
<a id="trace-3656"></a>
<a id="trace-3675"></a>
<a id="trace-3677"></a>
<a id="trace-3695"></a>
<a id="trace-3697"></a>
<a id="trace-3811"></a>
<a id="trace-3813"></a>
<a id="trace-3905"></a>
<a id="trace-3907"></a>
<a id="trace-3927"></a>
<a id="trace-3929"></a>
<a id="trace-3960"></a>
<a id="trace-3962"></a>
<a id="trace-3980"></a>
<a id="trace-3982"></a>
<a id="trace-4018"></a>
<a id="trace-4020"></a>
<a id="trace-4040"></a>
<a id="trace-4042"></a>
<a id="trace-4065"></a>
<a id="trace-4067"></a>
<a id="trace-4080"></a>
<a id="trace-4082"></a>
<a id="trace-4103"></a>
<a id="trace-4105"></a>
<a id="trace-4313"></a>
<a id="trace-4315"></a>
<a id="trace-4345"></a>
<a id="trace-4347"></a>
<a id="trace-4367"></a>
<a id="trace-4369"></a>
<a id="trace-4391"></a>
<a id="trace-4393"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4656"></a>
<a id="trace-4658"></a>
<a id="trace-4690"></a>
<a id="trace-4692"></a>
<a id="trace-6573"></a>
<a id="trace-6575"></a>
<a id="trace-6629"></a>
<a id="trace-6631"></a>
<a id="trace-6651"></a>
<a id="trace-6653"></a>
<a id="trace-6685"></a>
<a id="trace-6687"></a>
<a id="trace-6700"></a>
<a id="trace-6702"></a>
<a id="trace-6720"></a>
<a id="trace-6722"></a>
<a id="trace-6734"></a>
<a id="trace-6736"></a>
<a id="trace-6756"></a>
<a id="trace-6758"></a>
<a id="trace-7012"></a>
<a id="trace-7014"></a>
<a id="trace-7031"></a>
<a id="trace-7033"></a>
<a id="trace-7065"></a>
<a id="trace-7067"></a>
<a id="trace-7333"></a>
<a id="trace-7335"></a>
<a id="trace-7362"></a>
<a id="trace-7364"></a>
<a id="trace-7648"></a>
<a id="trace-7650"></a>
<a id="trace-7959"></a>
<a id="trace-7961"></a>
<a id="trace-7996"></a>
<a id="trace-7998"></a>
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8135"></a>
<a id="trace-8137"></a>
<a id="trace-8161"></a>
<a id="trace-8163"></a>
<a id="trace-8228"></a>
<a id="trace-8230"></a>
<a id="trace-8255"></a>
<a id="trace-8257"></a>
<a id="trace-8279"></a>
<a id="trace-8281"></a>
<a id="trace-8297"></a>
<a id="trace-8299"></a>
<a id="trace-8308"></a>
<a id="trace-8310"></a>
<a id="trace-8335"></a>
<a id="trace-8337"></a>
<a id="trace-8409"></a>
<a id="trace-8411"></a>
<a id="trace-8418"></a>
<a id="trace-8420"></a>
<a id="trace-8451"></a>
<a id="trace-8453"></a>
<a id="trace-8464"></a>
<a id="trace-8466"></a>
<a id="trace-8474"></a>
<a id="trace-8476"></a>
<a id="trace-8499"></a>
<a id="trace-8501"></a>
<a id="trace-8519"></a>
<a id="trace-8521"></a>
<a id="trace-8531"></a>
<a id="trace-8533"></a>
<a id="trace-8614"></a>
<a id="trace-8616"></a>
<a id="trace-8630"></a>
<a id="trace-8632"></a>
<a id="trace-8640"></a>
<a id="trace-8642"></a>
<a id="trace-8666"></a>
<a id="trace-8668"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
<a id="trace-8694"></a>
<a id="trace-8696"></a>
<a id="trace-8706"></a>
<a id="trace-8708"></a>
<a id="trace-8789"></a>
<a id="trace-8791"></a>
<a id="trace-8798"></a>
<a id="trace-8800"></a>
<a id="trace-8814"></a>
<a id="trace-8816"></a>
<a id="trace-8824"></a>
<a id="trace-8826"></a>
<a id="trace-8838"></a>
<a id="trace-8840"></a>
<a id="trace-8848"></a>
<a id="trace-8850"></a>
<a id="trace-8873"></a>
<a id="trace-8875"></a>
<a id="trace-8885"></a>
<a id="trace-8887"></a>
<a id="trace-8898"></a>
<a id="trace-8900"></a>
<a id="trace-8970"></a>
<a id="trace-8972"></a>
<a id="trace-8979"></a>
<a id="trace-8981"></a>
<a id="trace-8995"></a>
<a id="trace-8997"></a>
<a id="trace-9006"></a>
<a id="trace-9008"></a>
<a id="trace-9020"></a>
<a id="trace-9022"></a>
<a id="trace-9030"></a>
<a id="trace-9032"></a>
<a id="trace-9056"></a>
<a id="trace-9058"></a>
<a id="trace-9071"></a>
<a id="trace-9073"></a>
<a id="trace-9085"></a>
<a id="trace-9087"></a>
<a id="trace-9160"></a>
<a id="trace-9162"></a>
<a id="trace-9178"></a>
<a id="trace-9180"></a>
<a id="trace-9204"></a>
<a id="trace-9206"></a>
<a id="trace-9218"></a>
<a id="trace-9220"></a>
<a id="trace-9244"></a>
<a id="trace-9246"></a>
<a id="trace-9259"></a>
<a id="trace-9261"></a>
<a id="trace-9397"></a>
<a id="trace-9399"></a>
<a id="trace-11287"></a>
<a id="trace-11289"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
<a id="trace-11331"></a>
<a id="trace-11333"></a>
<a id="trace-11359"></a>
<a id="trace-11361"></a>
<a id="trace-11371"></a>
<a id="trace-11373"></a>
<a id="trace-11398"></a>
<a id="trace-11400"></a>
<a id="trace-11470"></a>
<a id="trace-11472"></a>
<a id="trace-11479"></a>
<a id="trace-11481"></a>
<a id="trace-11495"></a>
<a id="trace-11497"></a>
<a id="trace-11507"></a>
<a id="trace-11509"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11574"></a>
<a id="trace-11576"></a>
<a id="trace-11588"></a>
<a id="trace-11590"></a>
<a id="trace-11672"></a>
<a id="trace-11674"></a>
<a id="trace-11698"></a>
<a id="trace-11700"></a>
<a id="trace-11709"></a>
<a id="trace-11711"></a>
<a id="trace-11728"></a>
<a id="trace-11730"></a>
<a id="trace-11741"></a>
<a id="trace-11743"></a>
<a id="trace-11757"></a>
<a id="trace-11759"></a>
<a id="trace-11769"></a>
<a id="trace-11771"></a>
<a id="trace-11785"></a>
<a id="trace-11787"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
<a id="trace-11891"></a>
<a id="trace-11893"></a>
<a id="trace-11913"></a>
<a id="trace-11915"></a>
<a id="trace-11927"></a>
<a id="trace-11929"></a>
<a id="trace-11949"></a>
<a id="trace-11951"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-11989"></a>
<a id="trace-11991"></a>
<a id="trace-12007"></a>
<a id="trace-12009"></a>
<a id="trace-12026"></a>
<a id="trace-12028"></a>
<a id="trace-12042"></a>
<a id="trace-12044"></a>
<a id="trace-12132"></a>
<a id="trace-12134"></a>
<a id="trace-14337"></a>
<a id="trace-14339"></a>
<a id="trace-14352"></a>
<a id="trace-14354"></a>
<a id="trace-14373"></a>
<a id="trace-14375"></a>
<a id="trace-14393"></a>
<a id="trace-14395"></a>
<a id="trace-14814"></a>
<a id="trace-14816"></a>
<a id="trace-14846"></a>
<a id="trace-14848"></a>
<a id="trace-14871"></a>
<a id="trace-14873"></a>
<a id="trace-14895"></a>
<a id="trace-14897"></a>
<a id="trace-14932"></a>
<a id="trace-14934"></a>
<a id="trace-14970"></a>
<a id="trace-14972"></a>
<a id="trace-15008"></a>
<a id="trace-15010"></a>
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15068"></a>
<a id="trace-15070"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-17134"></a>
<a id="trace-17136"></a>
<a id="trace-17319"></a>
<a id="trace-17321"></a>
<a id="trace-17422"></a>
<a id="trace-17424"></a>
<a id="trace-17471"></a>
<a id="trace-17473"></a>
<a id="trace-17489"></a>
<a id="trace-17491"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17729"></a>
<a id="trace-17731"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17766"></a>
<a id="trace-17768"></a>
<a id="trace-17777"></a>
<a id="trace-17779"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17875"></a>
<a id="trace-17877"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17957"></a>
<a id="trace-17959"></a>
<a id="trace-17969"></a>
<a id="trace-17971"></a>
<a id="trace-17991"></a>
<a id="trace-17993"></a>
<a id="trace-18003"></a>
<a id="trace-18005"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18119"></a>
<a id="trace-18121"></a>
<a id="trace-18130"></a>
<a id="trace-18132"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18189"></a>
<a id="trace-18191"></a>
<a id="trace-18290"></a>
<a id="trace-18292"></a>
<a id="trace-18302"></a>
<a id="trace-18304"></a>
<a id="trace-18379"></a>
<a id="trace-18381"></a>
<a id="trace-18401"></a>
<a id="trace-18403"></a>
<a id="trace-18419"></a>
<a id="trace-18421"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18451"></a>
<a id="trace-18453"></a>
<a id="trace-18469"></a>
<a id="trace-18471"></a>
<a id="trace-18487"></a>
<a id="trace-18489"></a>
<a id="trace-18501"></a>
<a id="trace-18503"></a>
<a id="trace-18520"></a>
<a id="trace-18522"></a>
<a id="trace-18613"></a>
<a id="trace-18615"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18687"></a>
<a id="trace-18689"></a>
<a id="trace-18725"></a>
<a id="trace-18727"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18858"></a>
<a id="trace-18860"></a>
<a id="trace-18877"></a>
<a id="trace-18879"></a>
<a id="trace-18894"></a>
<a id="trace-18896"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-18974"></a>
<a id="trace-18976"></a>
<a id="trace-19005"></a>
<a id="trace-19007"></a>
<a id="trace-19097"></a>
<a id="trace-19099"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19151"></a>
<a id="trace-19153"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19457"></a>
<a id="trace-19459"></a>
<a id="trace-19491"></a>
<a id="trace-19493"></a>
<a id="trace-19503"></a>
<a id="trace-19505"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19619"></a>
<a id="trace-19621"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19785"></a>
<a id="trace-19787"></a>
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19825"></a>
<a id="trace-19827"></a>
<a id="trace-19849"></a>
<a id="trace-19851"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-20046"></a>
<a id="trace-20048"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20087"></a>
<a id="trace-20089"></a>
<a id="trace-20112"></a>
<a id="trace-20114"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20136"></a>
<a id="trace-20138"></a>
<a id="trace-20150"></a>
<a id="trace-20152"></a>
<a id="trace-20167"></a>
<a id="trace-20169"></a>
<a id="trace-20244"></a>
<a id="trace-20246"></a>
<a id="trace-20257"></a>
<a id="trace-20259"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20297"></a>
<a id="trace-20299"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20317"></a>
<a id="trace-20319"></a>
<a id="trace-20324"></a>
<a id="trace-20326"></a>
<a id="trace-20337"></a>
<a id="trace-20339"></a>
<a id="trace-20343"></a>
<a id="trace-20345"></a>
<a id="trace-20410"></a>
<a id="trace-20412"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
<a id="trace-20437"></a>
<a id="trace-20439"></a>
<a id="trace-20456"></a>
<a id="trace-20458"></a>
<a id="trace-20468"></a>
<a id="trace-20470"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20488"></a>
<a id="trace-20490"></a>
<a id="trace-20494"></a>
<a id="trace-20496"></a>
<a id="trace-20563"></a>
<a id="trace-20565"></a>
<a id="trace-20570"></a>
<a id="trace-20572"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20622"></a>
<a id="trace-20624"></a>
<a id="trace-20629"></a>
<a id="trace-20631"></a>
<a id="trace-20650"></a>
<a id="trace-20652"></a>
<a id="trace-20665"></a>
<a id="trace-20667"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20754"></a>
<a id="trace-20756"></a>
<a id="trace-20761"></a>
<a id="trace-20763"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20778"></a>
<a id="trace-20780"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20817"></a>
<a id="trace-20819"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20905"></a>
<a id="trace-20907"></a>
<a id="trace-20925"></a>
<a id="trace-20927"></a>
<a id="trace-20949"></a>
<a id="trace-20951"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20976"></a>
<a id="trace-20978"></a>
<a id="trace-20987"></a>
<a id="trace-20989"></a>
<a id="trace-20993"></a>
<a id="trace-20995"></a>
<a id="trace-21059"></a>
<a id="trace-21061"></a>
<a id="trace-21066"></a>
<a id="trace-21068"></a>
<a id="trace-21082"></a>
<a id="trace-21084"></a>
<a id="trace-21092"></a>
<a id="trace-21094"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21140"></a>
<a id="trace-21142"></a>
<a id="trace-21158"></a>
<a id="trace-21160"></a>
<a id="trace-21165"></a>
<a id="trace-21167"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21238"></a>
<a id="trace-21240"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21256"></a>
<a id="trace-21258"></a>
<a id="trace-21275"></a>
<a id="trace-21277"></a>
<a id="trace-21281"></a>
<a id="trace-21283"></a>
<a id="trace-21305"></a>
<a id="trace-21307"></a>
<a id="trace-21317"></a>
<a id="trace-21319"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21349"></a>
<a id="trace-21351"></a>
<a id="trace-21418"></a>
<a id="trace-21420"></a>
<a id="trace-21422"></a>
<a id="trace-21424"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21452"></a>
<a id="trace-21457"></a>
<a id="trace-21484"></a>
<a id="trace-21486"></a>
<a id="trace-21492"></a>
<a id="trace-21494"></a>
<a id="trace-21562"></a>
<a id="trace-21564"></a>
<a id="trace-21573"></a>
<a id="trace-21575"></a>
<a id="trace-21592"></a>
<a id="trace-21594"></a>
<a id="trace-21599"></a>
<a id="trace-21601"></a>
<a id="trace-21615"></a>
<a id="trace-21617"></a>
<a id="trace-21621"></a>
<a id="trace-21623"></a>
<a id="trace-21636"></a>
<a id="trace-21638"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21655"></a>
<a id="trace-21657"></a>
<a id="trace-21725"></a>
<a id="trace-21727"></a>
<a id="trace-21731"></a>
<a id="trace-21733"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21801"></a>
<a id="trace-21803"></a>
<a id="trace-21807"></a>
<a id="trace-21809"></a>
<a id="trace-21820"></a>
<a id="trace-21822"></a>
<a id="trace-21828"></a>
<a id="trace-21830"></a>
<a id="trace-21895"></a>
<a id="trace-21897"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21910"></a>
<a id="trace-21912"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21931"></a>
<a id="trace-21933"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-21966"></a>
<a id="trace-21968"></a>
<a id="trace-21985"></a>
<a id="trace-21987"></a>
<a id="trace-21992"></a>
<a id="trace-21994"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22081"></a>
<a id="trace-22083"></a>
<a id="trace-22086"></a>
<a id="trace-22088"></a>
<a id="trace-22103"></a>
<a id="trace-22105"></a>
<a id="trace-22118"></a>
<a id="trace-22120"></a>
<a id="trace-22125"></a>
<a id="trace-22127"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22148"></a>
<a id="trace-22150"></a>
<a id="trace-22223"></a>
<a id="trace-22225"></a>
<a id="trace-22245"></a>
<a id="trace-22247"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22271"></a>
<a id="trace-22273"></a>
<a id="trace-22287"></a>
<a id="trace-22289"></a>
<a id="trace-22303"></a>
<a id="trace-22305"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22377"></a>
<a id="trace-22379"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22428"></a>
<a id="trace-22430"></a>
<a id="trace-22443"></a>
<a id="trace-22445"></a>
<a id="trace-22449"></a>
<a id="trace-22451"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22468"></a>
<a id="trace-22470"></a>
<a id="trace-22538"></a>
<a id="trace-22540"></a>
<a id="trace-22548"></a>
<a id="trace-22550"></a>
<a id="trace-22553"></a>
<a id="trace-22555"></a>
<a id="trace-22567"></a>
<a id="trace-22569"></a>
<a id="trace-22576"></a>
<a id="trace-22578"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22622"></a>
<a id="trace-22624"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22715"></a>
<a id="trace-22717"></a>
<a id="trace-22720"></a>
<a id="trace-22722"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22738"></a>
<a id="trace-22740"></a>
<a id="trace-22751"></a>
<a id="trace-22753"></a>
<a id="trace-22758"></a>
<a id="trace-22760"></a>
<a id="trace-22773"></a>
<a id="trace-22775"></a>
<a id="trace-22854"></a>
<a id="trace-22856"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22881"></a>
<a id="trace-22883"></a>
<a id="trace-22887"></a>
<a id="trace-22889"></a>
<a id="trace-22916"></a>
<a id="trace-22918"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22933"></a>
<a id="trace-22935"></a>
<a id="trace-22938"></a>
<a id="trace-22940"></a>
<a id="trace-23007"></a>
<a id="trace-23009"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23062"></a>
<a id="trace-23064"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23082"></a>
<a id="trace-23084"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23172"></a>
<a id="trace-23174"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-23217"></a>
<a id="trace-23219"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23263"></a>
<a id="trace-23265"></a>
<a id="trace-23336"></a>
<a id="trace-23338"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23464"></a>
<a id="trace-23466"></a>
<a id="trace-23474"></a>
<a id="trace-23476"></a>
<a id="trace-23488"></a>
<a id="trace-23490"></a>
<a id="trace-23520"></a>
<a id="trace-23522"></a>
<a id="trace-23549"></a>
<a id="trace-23551"></a>
<a id="trace-23622"></a>
<a id="trace-23624"></a>
<a id="trace-23630"></a>
<a id="trace-23632"></a>
- 5.70s–260.80s (×808), actor 37, squad 4 (trace 994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 905. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625192520379565, 'next_transition': 1235}.
<a id="trace-1003"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1003): received platoon directive. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.932737217874696, 'next_transition': 2381}.
<a id="trace-1594"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1594): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1476. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37873927694671694, 'next_transition': 1917}.
<a id="trace-1917"></a>
<a id="trace-1919"></a>
<a id="trace-1954"></a>
<a id="trace-1956"></a>
<a id="trace-1987"></a>
<a id="trace-1989"></a>
<a id="trace-2027"></a>
<a id="trace-2029"></a>
<a id="trace-2054"></a>
<a id="trace-2056"></a>
<a id="trace-2091"></a>
<a id="trace-2093"></a>
<a id="trace-2123"></a>
<a id="trace-2125"></a>
<a id="trace-2160"></a>
<a id="trace-2162"></a>
<a id="trace-2246"></a>
<a id="trace-2248"></a>
<a id="trace-2277"></a>
<a id="trace-2279"></a>
<a id="trace-2309"></a>
<a id="trace-2311"></a>
<a id="trace-2347"></a>
<a id="trace-2349"></a>
<a id="trace-2368"></a>
<a id="trace-2370"></a>
<a id="trace-2596"></a>
<a id="trace-2598"></a>
<a id="trace-2630"></a>
<a id="trace-2632"></a>
<a id="trace-2655"></a>
<a id="trace-2657"></a>
<a id="trace-2690"></a>
<a id="trace-2692"></a>
<a id="trace-2709"></a>
<a id="trace-2711"></a>
<a id="trace-2812"></a>
<a id="trace-2814"></a>
<a id="trace-2843"></a>
<a id="trace-2845"></a>
<a id="trace-2867"></a>
<a id="trace-2869"></a>
<a id="trace-2884"></a>
<a id="trace-2886"></a>
<a id="trace-2914"></a>
<a id="trace-2916"></a>
<a id="trace-2926"></a>
<a id="trace-2928"></a>
<a id="trace-2950"></a>
<a id="trace-2952"></a>
<a id="trace-2966"></a>
<a id="trace-2968"></a>
- 11.20s–23.75s (×52), actor 5, squad 0 (trace 1917): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1481. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.531605748499312, 'next_transition': 1954}.
<a id="trace-2381"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2381): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2179. Next observer evidence: {'until': 29.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.672370502311356, 'next_transition': 3704}.
<a id="trace-2382"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2382): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2179. Next observer evidence: {'until': 29.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.672370502311356, 'next_transition': 3704}.
<a id="trace-2986"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2986): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2732. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3348}.
<a id="trace-2987"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2987): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2732. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3348}.
<a id="trace-3348"></a>
<a id="trace-3350"></a>
<a id="trace-3372"></a>
<a id="trace-3374"></a>
<a id="trace-3474"></a>
<a id="trace-3476"></a>
<a id="trace-3501"></a>
<a id="trace-3503"></a>
<a id="trace-3540"></a>
<a id="trace-3542"></a>
<a id="trace-3582"></a>
<a id="trace-3584"></a>
<a id="trace-3606"></a>
<a id="trace-3608"></a>
<a id="trace-3625"></a>
<a id="trace-3627"></a>
<a id="trace-3650"></a>
<a id="trace-3652"></a>
<a id="trace-3671"></a>
<a id="trace-3673"></a>
<a id="trace-3691"></a>
<a id="trace-3693"></a>
<a id="trace-3807"></a>
<a id="trace-3809"></a>
<a id="trace-3901"></a>
<a id="trace-3903"></a>
<a id="trace-3923"></a>
<a id="trace-3925"></a>
<a id="trace-3956"></a>
<a id="trace-3958"></a>
<a id="trace-3976"></a>
<a id="trace-3978"></a>
<a id="trace-4014"></a>
<a id="trace-4016"></a>
<a id="trace-4036"></a>
<a id="trace-4038"></a>
<a id="trace-4061"></a>
<a id="trace-4063"></a>
<a id="trace-4076"></a>
<a id="trace-4078"></a>
<a id="trace-4099"></a>
<a id="trace-4101"></a>
<a id="trace-4110"></a>
<a id="trace-4112"></a>
<a id="trace-4192"></a>
<a id="trace-4194"></a>
- 24.25s–35.25s (×46), actor 5, squad 0 (trace 3348): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2737. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3372}.
<a id="trace-3704"></a>
- 29.55s–29.55s (×1), actor 9, squad 1 (trace 3704): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 3402. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.1422314537634, 'next_transition': 4693}.
<a id="trace-4197"></a>
- 35.25s–35.25s (×1), actor 1, squad 0 (trace 4197): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03780868545610081, 'next_transition': 4309}.
<a id="trace-4309"></a>
<a id="trace-4311"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4363"></a>
<a id="trace-4365"></a>
<a id="trace-4387"></a>
<a id="trace-4389"></a>
- 35.75s–37.25s (×8), actor 5, squad 0 (trace 4309): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4124. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.11638034721707677, 'next_transition': 4341}.
<a id="trace-4399"></a>
- 37.65s–37.65s (×1), actor 1, squad 0 (trace 4399): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: None.
<a id="trace-4401"></a>
- 37.65s–37.65s (×1), actor 1, squad 0 (trace 4401): NeedSupport. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: None.
<a id="trace-4410"></a>
<a id="trace-4412"></a>
- 37.75s–37.75s (×2), actor 5, squad 0 (trace 4410): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4124. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08500494266675186, 'next_transition': 4421}.
<a id="trace-4421"></a>
- 37.90s–37.90s (×1), actor 1, squad 0 (trace 4421): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1699934001986874, 'next_transition': 4633}.
<a id="trace-4426"></a>
- 37.90s–37.90s (×1), actor 1, squad 0 (trace 4426): MoveTactically. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1699934001986874, 'next_transition': 4633}.
<a id="trace-4427"></a>
- 37.90s–37.90s (×1), actor 1, squad 0 (trace 4427): Reorganise complete. Knowledge: actor memory at 35.00s, trace 4120. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1699934001986874, 'next_transition': 4633}.
<a id="trace-4633"></a>
<a id="trace-4635"></a>
<a id="trace-4652"></a>
<a id="trace-4654"></a>
<a id="trace-4686"></a>
<a id="trace-4688"></a>
<a id="trace-6481"></a>
<a id="trace-6483"></a>
<a id="trace-6568"></a>
<a id="trace-6570"></a>
<a id="trace-6602"></a>
<a id="trace-6604"></a>
<a id="trace-6623"></a>
<a id="trace-6625"></a>
<a id="trace-6645"></a>
<a id="trace-6647"></a>
<a id="trace-6679"></a>
<a id="trace-6681"></a>
<a id="trace-6694"></a>
<a id="trace-6696"></a>
<a id="trace-6714"></a>
<a id="trace-6716"></a>
<a id="trace-6728"></a>
<a id="trace-6730"></a>
<a id="trace-6752"></a>
<a id="trace-6754"></a>
- 38.25s–44.25s (×26), actor 5, squad 0 (trace 4633): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4124. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1700100658784652, 'next_transition': 4652}.
<a id="trace-4693"></a>
- 39.30s–39.30s (×1), actor 9, squad 1 (trace 4693): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 4127. Next observer evidence: {'until': 42, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8496435420483371, 'next_transition': 535}.
<a id="trace-4694"></a>
- 39.30s–39.30s (×1), actor 9, squad 1 (trace 4694): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 35.00s, trace 4127. Next observer evidence: {'until': 42, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8496435420483371, 'next_transition': 535}.
<a id="trace-535"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 535): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6665"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6665): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6665. Next observer evidence: {'until': 44.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6904795809342257, 'next_transition': 550}.
<a id="trace-6666"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6666): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6666. Next observer evidence: {'until': 44.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6904795809342257, 'next_transition': 550}.
<a id="trace-549"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 549): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-550"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 550): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6762"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 6762): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.367384 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 6762. Next observer evidence: None.
<a id="trace-6763"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 6763): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.367384 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 6763. Next observer evidence: None.
<a id="trace-6764"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 6764): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.367384 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 6764. Next observer evidence: {'until': 74.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9278}.
<a id="trace-6765"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 6765): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.367384 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 6765. Next observer evidence: {'until': 74.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9278}.
<a id="trace-6776"></a>
<a id="trace-6778"></a>
- 44.75s–44.75s (×2), actor 5, squad 0 (trace 6776): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 6765. Next observer evidence: {'until': 44.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24248181724913945, 'next_transition': 6781}.
<a id="trace-6781"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 6781): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 40.00s, trace 6487. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900152616074817, 'next_transition': 7007}.
<a id="trace-7007"></a>
<a id="trace-7009"></a>
<a id="trace-7026"></a>
<a id="trace-7028"></a>
<a id="trace-7060"></a>
<a id="trace-7062"></a>
- 45.25s–46.25s (×6), actor 5, squad 0 (trace 7007): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6941. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40253022990791937, 'next_transition': 7026}.
<a id="trace-7070"></a>
- 46.45s–46.45s (×1), actor 1, squad 0 (trace 7070): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 6938. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29375120851750525, 'next_transition': 7328}.
<a id="trace-7071"></a>
- 46.45s–46.45s (×1), actor 1, squad 0 (trace 7071): bounding overwatch. Knowledge: actor memory at 45.00s, trace 6938. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29375120851750525, 'next_transition': 7328}.
<a id="trace-7072"></a>
- 46.45s–46.45s (×1), actor 1, squad 0 (trace 7072): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6938. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29375120851750525, 'next_transition': 7328}.
<a id="trace-7328"></a>
<a id="trace-7330"></a>
<a id="trace-7356"></a>
<a id="trace-7358"></a>
- 46.75s–47.25s (×4), actor 5, squad 0 (trace 7328): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6941. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.911244227602838, 'next_transition': 7356}.
<a id="trace-7365"></a>
- 47.25s–47.25s (×1), actor 1, squad 0 (trace 7365): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6938. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7050375709669282, 'next_transition': 7642}.
<a id="trace-7642"></a>
<a id="trace-7644"></a>
- 47.75s–47.75s (×2), actor 5, squad 0 (trace 7642): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6941. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9805199232418689, 'next_transition': 7914}.
<a id="trace-7651"></a>
- 47.75s–47.75s (×1), actor 1, squad 0 (trace 7651): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6938. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9805199232418689, 'next_transition': 7914}.
<a id="trace-7914"></a>
<a id="trace-7916"></a>
<a id="trace-7953"></a>
<a id="trace-7955"></a>
<a id="trace-7990"></a>
<a id="trace-7992"></a>
<a id="trace-8014"></a>
<a id="trace-8016"></a>
<a id="trace-8109"></a>
<a id="trace-8111"></a>
<a id="trace-8131"></a>
<a id="trace-8133"></a>
<a id="trace-8157"></a>
<a id="trace-8159"></a>
- 48.25s–51.25s (×14), actor 5, squad 0 (trace 7914): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6941. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629992603421238, 'next_transition': 7953}.
<a id="trace-8164"></a>
- 51.40s–51.40s (×1), actor 1, squad 0 (trace 8164): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 8040. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8165"></a>
- 51.40s–51.40s (×1), actor 1, squad 0 (trace 8165): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 8040. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8224"></a>
<a id="trace-8226"></a>
<a id="trace-8251"></a>
<a id="trace-8253"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
<a id="trace-8293"></a>
<a id="trace-8295"></a>
<a id="trace-8304"></a>
<a id="trace-8306"></a>
<a id="trace-8317"></a>
<a id="trace-8319"></a>
<a id="trace-8331"></a>
<a id="trace-8333"></a>
- 51.75s–54.75s (×14), actor 5, squad 0 (trace 8224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8043. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.038910714462728604, 'next_transition': 8251}.
<a id="trace-8358"></a>
- 55.05s–55.05s (×1), actor 5, squad 0 (trace 8358): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 55.05s, trace 8358. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8405}.
<a id="trace-8405"></a>
<a id="trace-8407"></a>
<a id="trace-8414"></a>
<a id="trace-8416"></a>
<a id="trace-8433"></a>
<a id="trace-8435"></a>
<a id="trace-8447"></a>
<a id="trace-8449"></a>
<a id="trace-8460"></a>
<a id="trace-8462"></a>
<a id="trace-8470"></a>
<a id="trace-8472"></a>
<a id="trace-8487"></a>
<a id="trace-8489"></a>
<a id="trace-8495"></a>
<a id="trace-8497"></a>
<a id="trace-8515"></a>
<a id="trace-8517"></a>
<a id="trace-8527"></a>
<a id="trace-8529"></a>
<a id="trace-8599"></a>
<a id="trace-8601"></a>
<a id="trace-8610"></a>
<a id="trace-8612"></a>
<a id="trace-8626"></a>
<a id="trace-8628"></a>
<a id="trace-8636"></a>
<a id="trace-8638"></a>
<a id="trace-8652"></a>
<a id="trace-8654"></a>
<a id="trace-8662"></a>
<a id="trace-8664"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8690"></a>
<a id="trace-8692"></a>
<a id="trace-8702"></a>
<a id="trace-8704"></a>
<a id="trace-8715"></a>
<a id="trace-8717"></a>
<a id="trace-8785"></a>
<a id="trace-8787"></a>
<a id="trace-8794"></a>
<a id="trace-8796"></a>
<a id="trace-8810"></a>
<a id="trace-8812"></a>
<a id="trace-8820"></a>
<a id="trace-8822"></a>
<a id="trace-8834"></a>
<a id="trace-8836"></a>
<a id="trace-8844"></a>
<a id="trace-8846"></a>
<a id="trace-8861"></a>
<a id="trace-8863"></a>
<a id="trace-8869"></a>
<a id="trace-8871"></a>
<a id="trace-8881"></a>
<a id="trace-8883"></a>
<a id="trace-8894"></a>
<a id="trace-8896"></a>
<a id="trace-8966"></a>
<a id="trace-8968"></a>
<a id="trace-8975"></a>
<a id="trace-8977"></a>
<a id="trace-8991"></a>
<a id="trace-8993"></a>
<a id="trace-9002"></a>
<a id="trace-9004"></a>
<a id="trace-9016"></a>
<a id="trace-9018"></a>
<a id="trace-9026"></a>
<a id="trace-9028"></a>
<a id="trace-9043"></a>
<a id="trace-9045"></a>
<a id="trace-9052"></a>
<a id="trace-9054"></a>
<a id="trace-9067"></a>
<a id="trace-9069"></a>
<a id="trace-9081"></a>
<a id="trace-9083"></a>
<a id="trace-9156"></a>
<a id="trace-9158"></a>
<a id="trace-9174"></a>
<a id="trace-9176"></a>
<a id="trace-9189"></a>
<a id="trace-9191"></a>
<a id="trace-9200"></a>
<a id="trace-9202"></a>
<a id="trace-9214"></a>
<a id="trace-9216"></a>
<a id="trace-9223"></a>
<a id="trace-9225"></a>
- 55.25s–77.75s (×92), actor 5, squad 0 (trace 8405): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.05s, trace 8358. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8414}.
<a id="trace-9229"></a>
- 77.85s–77.85s (×1), actor 3, squad 0 (trace 9229): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 9089. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9240}.
<a id="trace-9240"></a>
<a id="trace-9242"></a>
<a id="trace-9255"></a>
<a id="trace-9257"></a>
<a id="trace-9272"></a>
<a id="trace-9274"></a>
<a id="trace-9393"></a>
<a id="trace-9395"></a>
<a id="trace-9471"></a>
<a id="trace-9473"></a>
<a id="trace-11243"></a>
<a id="trace-11245"></a>
<a id="trace-11265"></a>
<a id="trace-11267"></a>
<a id="trace-11283"></a>
<a id="trace-11285"></a>
<a id="trace-11313"></a>
<a id="trace-11315"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11355"></a>
<a id="trace-11357"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
<a id="trace-11386"></a>
<a id="trace-11388"></a>
<a id="trace-11394"></a>
<a id="trace-11396"></a>
<a id="trace-11466"></a>
<a id="trace-11468"></a>
<a id="trace-11475"></a>
<a id="trace-11477"></a>
<a id="trace-11491"></a>
<a id="trace-11493"></a>
<a id="trace-11503"></a>
<a id="trace-11505"></a>
<a id="trace-11523"></a>
<a id="trace-11525"></a>
<a id="trace-11542"></a>
<a id="trace-11544"></a>
<a id="trace-11557"></a>
<a id="trace-11559"></a>
<a id="trace-11570"></a>
<a id="trace-11572"></a>
<a id="trace-11584"></a>
<a id="trace-11586"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11668"></a>
<a id="trace-11670"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11694"></a>
<a id="trace-11696"></a>
<a id="trace-11705"></a>
<a id="trace-11707"></a>
<a id="trace-11724"></a>
<a id="trace-11726"></a>
<a id="trace-11737"></a>
<a id="trace-11739"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11764"></a>
<a id="trace-11766"></a>
<a id="trace-11780"></a>
<a id="trace-11782"></a>
<a id="trace-11800"></a>
<a id="trace-11802"></a>
<a id="trace-11885"></a>
<a id="trace-11887"></a>
<a id="trace-11907"></a>
<a id="trace-11909"></a>
- 78.25s–96.25s (×72), actor 5, squad 0 (trace 9240): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9091. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9255}.
<a id="trace-9278"></a>
- 79.40s–79.40s (×1), actor 9, squad 1 (trace 9278): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 9093. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9279"></a>
- 79.40s–79.40s (×1), actor 9, squad 1 (trace 9279): MoveTactically. Knowledge: actor memory at 75.00s, trace 9093. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9280"></a>
- 79.40s–79.40s (×1), actor 9, squad 1 (trace 9280): bounding overwatch. Knowledge: actor memory at 75.00s, trace 9093. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9281"></a>
- 79.40s–79.40s (×1), actor 9, squad 1 (trace 9281): . Knowledge: actor memory at 75.00s, trace 9093. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9476"></a>
- 80.40s–80.40s (×1), actor 9, squad 1 (trace 9476): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 9406. Next observer evidence: {'until': 94.6, 'shots': 7, 'casualties': 0, 'mean_displacement': 8.429372267610418, 'next_transition': 11792}.
<a id="trace-9477"></a>
- 80.40s–80.40s (×1), actor 9, squad 1 (trace 9477): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 80.00s, trace 9406. Next observer evidence: {'until': 94.6, 'shots': 7, 'casualties': 0, 'mean_displacement': 8.429372267610418, 'next_transition': 11792}.
<a id="trace-11792"></a>
- 94.70s–94.70s (×1), actor 9, squad 1 (trace 11792): support established: element delivered fire on threat area. Knowledge: actor memory at 90.00s, trace 11607. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40072985565229796, 'next_transition': 936}.
<a id="trace-11793"></a>
- 94.70s–94.70s (×1), actor 9, squad 1 (trace 11793): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 90.00s, trace 11607. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40072985565229796, 'next_transition': 936}.
<a id="trace-11794"></a>
- 94.70s–94.70s (×1), actor 9, squad 1 (trace 11794): Fixing. Knowledge: actor memory at 90.00s, trace 11607. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40072985565229796, 'next_transition': 936}.
<a id="trace-11916"></a>
- 96.25s–96.25s (×1), actor 3, squad 0 (trace 11916): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 95.00s, trace 11812. Next observer evidence: {'until': 96.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11921}.
<a id="trace-11921"></a>
<a id="trace-11923"></a>
<a id="trace-11943"></a>
<a id="trace-11945"></a>
<a id="trace-11966"></a>
<a id="trace-11968"></a>
<a id="trace-11983"></a>
<a id="trace-11985"></a>
<a id="trace-12001"></a>
<a id="trace-12003"></a>
<a id="trace-12020"></a>
<a id="trace-12022"></a>
<a id="trace-12036"></a>
<a id="trace-12038"></a>
- 96.75s–99.75s (×14), actor 5, squad 0 (trace 11921): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 11814. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11943}.
<a id="trace-936"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (events line 936): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11930"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (trace 11930): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.299843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 11930. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3795832851957524, 'next_transition': 12135}.
<a id="trace-11931"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (trace 11931): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.299843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 11931. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3795832851957524, 'next_transition': 12135}.
<a id="trace-12065"></a>
- 100.05s–100.05s (×1), actor 5, squad 0 (trace 12065): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 100.05s, trace 12065. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12115}.
<a id="trace-12115"></a>
<a id="trace-12117"></a>
<a id="trace-12126"></a>
<a id="trace-12128"></a>
<a id="trace-14029"></a>
<a id="trace-14031"></a>
<a id="trace-14308"></a>
<a id="trace-14310"></a>
<a id="trace-14324"></a>
<a id="trace-14326"></a>
<a id="trace-14333"></a>
<a id="trace-14335"></a>
<a id="trace-14348"></a>
<a id="trace-14350"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14389"></a>
<a id="trace-14391"></a>
<a id="trace-14697"></a>
<a id="trace-14699"></a>
<a id="trace-14779"></a>
<a id="trace-14781"></a>
- 100.25s–105.25s (×22), actor 5, squad 0 (trace 12115): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.05s, trace 12065. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12126}.
<a id="trace-12135"></a>
- 100.75s–100.75s (×1), actor 9, squad 1 (trace 12135): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 100.00s, trace 12050. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26528478159224345, 'next_transition': 14036}.
<a id="trace-14036"></a>
- 101.25s–101.25s (×1), actor 9, squad 1 (trace 14036): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 12050. Next observer evidence: {'until': 104.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1571338814868112, 'next_transition': 14406}.
<a id="trace-14037"></a>
- 101.25s–101.25s (×1), actor 9, squad 1 (trace 14037): received platoon directive. Knowledge: actor memory at 100.00s, trace 12050. Next observer evidence: {'until': 104.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1571338814868112, 'next_transition': 14406}.
<a id="trace-14406"></a>
- 104.70s–104.70s (×1), actor 9, squad 1 (trace 14406): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 12050. Next observer evidence: {'until': 111.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.068280061852941, 'next_transition': 15256}.
<a id="trace-14407"></a>
- 104.70s–104.70s (×1), actor 9, squad 1 (trace 14407): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 12050. Next observer evidence: {'until': 111.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.068280061852941, 'next_transition': 15256}.
<a id="trace-995"></a>
- 105.35s–105.35s (×1), actor 5, squad 0 (events line 995): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14810}.
<a id="trace-14788"></a>
- 105.35s–105.35s (×1), actor 5, squad 0 (trace 14788): renew committed intent (75 s lifetime). Knowledge: actor memory at 105.35s, trace 14788. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14810}.
<a id="trace-14810"></a>
<a id="trace-14812"></a>
<a id="trace-14842"></a>
<a id="trace-14844"></a>
<a id="trace-14867"></a>
<a id="trace-14869"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14928"></a>
<a id="trace-14930"></a>
<a id="trace-14966"></a>
<a id="trace-14968"></a>
<a id="trace-15004"></a>
<a id="trace-15006"></a>
<a id="trace-15030"></a>
<a id="trace-15032"></a>
<a id="trace-15064"></a>
<a id="trace-15066"></a>
<a id="trace-15161"></a>
<a id="trace-15163"></a>
<a id="trace-15198"></a>
<a id="trace-15200"></a>
<a id="trace-15242"></a>
<a id="trace-15244"></a>
<a id="trace-15288"></a>
<a id="trace-15290"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15431"></a>
<a id="trace-15433"></a>
- 105.75s–113.25s (×32), actor 5, squad 0 (trace 14810): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.35s, trace 14788. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14842}.
<a id="trace-15256"></a>
- 111.40s–111.40s (×1), actor 9, squad 1 (trace 15256): NeedSupport. Knowledge: actor memory at 110.00s, trace 15088. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 3.094477633294794, 'next_transition': 17121}.
<a id="trace-15438"></a>
- 113.25s–113.25s (×1), actor 3, squad 0 (trace 15438): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 110.00s, trace 15084. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17130}.
<a id="trace-15439"></a>
- 113.25s–113.25s (×1), actor 3, squad 0 (trace 15439): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 110.00s, trace 15084. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17130}.
<a id="trace-17121"></a>
- 113.60s–113.60s (×1), actor 9, squad 1 (trace 17121): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 110.00s, trace 15088. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44585329220306, 'next_transition': 17141}.
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17343"></a>
<a id="trace-17345"></a>
<a id="trace-17418"></a>
<a id="trace-17420"></a>
<a id="trace-17437"></a>
<a id="trace-17439"></a>
<a id="trace-17452"></a>
<a id="trace-17454"></a>
<a id="trace-17467"></a>
<a id="trace-17469"></a>
<a id="trace-17485"></a>
<a id="trace-17487"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17725"></a>
<a id="trace-17727"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17853"></a>
<a id="trace-17855"></a>
<a id="trace-17871"></a>
<a id="trace-17873"></a>
<a id="trace-17891"></a>
<a id="trace-17893"></a>
<a id="trace-17902"></a>
<a id="trace-17904"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17935"></a>
<a id="trace-17937"></a>
<a id="trace-17953"></a>
<a id="trace-17955"></a>
<a id="trace-17965"></a>
<a id="trace-17967"></a>
<a id="trace-17987"></a>
<a id="trace-17989"></a>
<a id="trace-17999"></a>
<a id="trace-18001"></a>
<a id="trace-18079"></a>
<a id="trace-18081"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18115"></a>
<a id="trace-18117"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18149"></a>
<a id="trace-18151"></a>
<a id="trace-18159"></a>
<a id="trace-18161"></a>
<a id="trace-18185"></a>
<a id="trace-18187"></a>
<a id="trace-18209"></a>
<a id="trace-18211"></a>
<a id="trace-18286"></a>
<a id="trace-18288"></a>
<a id="trace-18298"></a>
<a id="trace-18300"></a>
<a id="trace-18375"></a>
<a id="trace-18377"></a>
<a id="trace-18397"></a>
<a id="trace-18399"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18425"></a>
<a id="trace-18427"></a>
<a id="trace-18447"></a>
<a id="trace-18449"></a>
<a id="trace-18465"></a>
<a id="trace-18467"></a>
<a id="trace-18482"></a>
<a id="trace-18484"></a>
<a id="trace-18496"></a>
<a id="trace-18498"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18526"></a>
<a id="trace-18528"></a>
<a id="trace-18607"></a>
<a id="trace-18609"></a>
<a id="trace-18621"></a>
<a id="trace-18623"></a>
<a id="trace-18635"></a>
<a id="trace-18637"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
<a id="trace-18668"></a>
<a id="trace-18670"></a>
<a id="trace-18683"></a>
<a id="trace-18685"></a>
<a id="trace-18698"></a>
<a id="trace-18700"></a>
<a id="trace-18708"></a>
<a id="trace-18710"></a>
<a id="trace-18721"></a>
<a id="trace-18723"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18810"></a>
<a id="trace-18812"></a>
<a id="trace-18822"></a>
<a id="trace-18824"></a>
<a id="trace-18839"></a>
<a id="trace-18841"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18871"></a>
<a id="trace-18873"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18970"></a>
<a id="trace-18972"></a>
<a id="trace-19001"></a>
<a id="trace-19003"></a>
- 113.75s–144.80s (×126), actor 5, squad 0 (trace 17130): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15086. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937428641969272, 'next_transition': 17315}.
<a id="trace-17141"></a>
- 113.85s–113.85s (×1), actor 9, squad 1 (trace 17141): Reorganise: completed/failed drill. Knowledge: actor memory at 110.00s, trace 15088. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9653999999999998, 'next_transition': 17494}.
<a id="trace-17144"></a>
- 113.85s–113.85s (×1), actor 9, squad 1 (trace 17144): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 15088. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9653999999999998, 'next_transition': 17494}.
<a id="trace-17145"></a>
- 113.85s–113.85s (×1), actor 9, squad 1 (trace 17145): Reorganise complete: known contact. Knowledge: actor memory at 110.00s, trace 15088. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9653999999999998, 'next_transition': 17494}.
<a id="trace-17494"></a>
- 117.70s–117.70s (×1), actor 9, squad 1 (trace 17494): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 17355. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.096810210332755, 'next_transition': 18220}.
<a id="trace-17495"></a>
- 117.70s–117.70s (×1), actor 9, squad 1 (trace 17495): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 17355. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.096810210332755, 'next_transition': 18220}.
<a id="trace-18220"></a>
- 128.90s–128.90s (×1), actor 9, squad 1 (trace 18220): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 18017. Next observer evidence: {'until': 149, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19512}.
<a id="trace-18221"></a>
- 128.90s–128.90s (×1), actor 9, squad 1 (trace 18221): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 18017. Next observer evidence: {'until': 149, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19512}.
<a id="trace-1467"></a>
- 145.05s–145.05s (×1), actor 5, squad 0 (events line 1467): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}.
<a id="trace-19042"></a>
- 145.05s–145.05s (×1), actor 5, squad 0 (trace 19042): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.178342 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.05s, trace 19042. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}.
<a id="trace-19043"></a>
- 145.05s–145.05s (×1), actor 5, squad 0 (trace 19043): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.178342 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.05s, trace 19043. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}.
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19115"></a>
<a id="trace-19117"></a>
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19170"></a>
<a id="trace-19172"></a>
- 145.30s–146.80s (×8), actor 5, squad 0 (trace 19093): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.05s, trace 19043. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7012691006296354, 'next_transition': 19115}.
<a id="trace-19181"></a>
- 147.25s–147.25s (×1), actor 3, squad 0 (trace 19181): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 19017. Next observer evidence: None.
<a id="trace-19182"></a>
- 147.25s–147.25s (×1), actor 3, squad 0 (trace 19182): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 19017. Next observer evidence: None.
<a id="trace-19453"></a>
<a id="trace-19455"></a>
<a id="trace-19466"></a>
<a id="trace-19468"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19522"></a>
<a id="trace-19524"></a>
<a id="trace-19544"></a>
<a id="trace-19546"></a>
<a id="trace-19614"></a>
<a id="trace-19616"></a>
<a id="trace-19630"></a>
<a id="trace-19632"></a>
- 147.30s–150.80s (×16), actor 5, squad 0 (trace 19453): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.05s, trace 19043. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5454658581299483, 'next_transition': 19466}.
<a id="trace-19512"></a>
- 149.05s–149.05s (×1), actor 9, squad 1 (trace 19512): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 19021. Next observer evidence: {'until': 152, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19792}.
<a id="trace-19636"></a>
- 150.90s–150.90s (×1), actor 4, squad 0 (trace 19636): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: None.
<a id="trace-19637"></a>
- 150.90s–150.90s (×1), actor 4, squad 0 (trace 19637): NeedSupport. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: None.
<a id="trace-19644"></a>
- 150.95s–150.95s (×1), actor 4, squad 0 (trace 19644): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19762}.
<a id="trace-19646"></a>
- 150.95s–150.95s (×1), actor 4, squad 0 (trace 19646): ReactToContact: cover and return fire. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19762}.
<a id="trace-19647"></a>
- 150.95s–150.95s (×1), actor 4, squad 0 (trace 19647): Reorganise complete: known contact. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19762}.
<a id="trace-19762"></a>
<a id="trace-19764"></a>
<a id="trace-19778"></a>
<a id="trace-19780"></a>
- 151.30s–151.80s (×4), actor 5, squad 0 (trace 19762): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19555. Next observer evidence: {'until': 151.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.47225841230155535, 'next_transition': 19778}.
<a id="trace-19792"></a>
- 152.10s–152.10s (×1), actor 9, squad 1 (trace 19792): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 19557. Next observer evidence: None.
<a id="trace-19793"></a>
- 152.10s–152.10s (×1), actor 9, squad 1 (trace 19793): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 150.00s, trace 19557. Next observer evidence: None.
<a id="trace-19799"></a>
- 152.15s–152.15s (×1), actor 9, squad 1 (trace 19799): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 150.00s, trace 19557. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1586}.
<a id="trace-19866"></a>
- 154.30s–154.30s (×1), actor 4, squad 0 (trace 19866): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6782333261680675, 'next_transition': 1585}.
<a id="trace-19867"></a>
- 154.30s–154.30s (×1), actor 4, squad 0 (trace 19867): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 19554. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6782333261680675, 'next_transition': 1585}.
<a id="trace-1585"></a>
- 155.30s–155.30s (×1), actor 6, squad 0 (events line 1585): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19687334285016833, 'next_transition': 20073}.
<a id="trace-1586"></a>
- 155.30s–155.30s (×1), actor 6, squad 1 (events line 1586): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}.
<a id="trace-20042"></a>
- 155.30s–155.30s (×1), actor 6, squad 0 (trace 20042): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.00s, trace 19982. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19687334285016833, 'next_transition': 20073}.
<a id="trace-20049"></a>
- 155.30s–155.30s (×1), actor 6, squad 0 (trace 20049): renew committed intent (75 s lifetime). Knowledge: actor memory at 155.30s, trace 20049. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19687334285016833, 'next_transition': 20073}.
<a id="trace-20050"></a>
- 155.30s–155.30s (×1), actor 6, squad 1 (trace 20050): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120511 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 155.30s, trace 20050. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}.
<a id="trace-20051"></a>
- 155.30s–155.30s (×1), actor 6, squad 1 (trace 20051): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120511 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 155.30s, trace 20051. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}.
<a id="trace-20073"></a>
<a id="trace-20075"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20238"></a>
<a id="trace-20240"></a>
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20425"></a>
<a id="trace-20427"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20557"></a>
<a id="trace-20559"></a>
<a id="trace-20578"></a>
<a id="trace-20580"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20644"></a>
<a id="trace-20646"></a>
<a id="trace-20729"></a>
<a id="trace-20731"></a>
<a id="trace-20748"></a>
<a id="trace-20750"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20785"></a>
<a id="trace-20787"></a>
<a id="trace-20801"></a>
<a id="trace-20803"></a>
- 156.30s–179.30s (×48), actor 6, squad 0 (trace 20073): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.30s, trace 20051. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20106}.
<a id="trace-20091"></a>
- 156.95s–156.95s (×1), actor 9, squad 1 (trace 20091): Withdraw to received rally. Knowledge: actor memory at 155.00s, trace 19983. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1856}.
<a id="trace-20092"></a>
- 156.95s–156.95s (×1), actor 9, squad 1 (trace 20092): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 19983. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1856}.
<a id="trace-20808"></a>
- 179.60s–179.60s (×1), actor 4, squad 0 (trace 20808): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 175.00s, trace 20669. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20886}.
<a id="trace-20886"></a>
<a id="trace-20919"></a>
<a id="trace-20921"></a>
<a id="trace-20943"></a>
<a id="trace-20945"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20981"></a>
<a id="trace-20983"></a>
<a id="trace-21054"></a>
<a id="trace-21076"></a>
<a id="trace-21078"></a>
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21134"></a>
<a id="trace-21136"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21227"></a>
<a id="trace-21229"></a>
<a id="trace-21244"></a>
<a id="trace-21246"></a>
<a id="trace-21270"></a>
<a id="trace-21272"></a>
<a id="trace-21299"></a>
<a id="trace-21301"></a>
<a id="trace-21331"></a>
<a id="trace-21412"></a>
<a id="trace-21414"></a>
<a id="trace-21430"></a>
<a id="trace-21432"></a>
<a id="trace-21446"></a>
<a id="trace-21448"></a>
<a id="trace-21463"></a>
<a id="trace-21465"></a>
<a id="trace-21478"></a>
<a id="trace-21480"></a>
<a id="trace-21556"></a>
<a id="trace-21558"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21630"></a>
<a id="trace-21632"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21771"></a>
<a id="trace-21773"></a>
<a id="trace-21795"></a>
<a id="trace-21797"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21889"></a>
<a id="trace-21891"></a>
<a id="trace-21904"></a>
<a id="trace-21906"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21947"></a>
<a id="trace-21949"></a>
<a id="trace-21979"></a>
<a id="trace-21981"></a>
<a id="trace-22056"></a>
<a id="trace-22058"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
- 180.30s–216.30s (×71), actor 6, squad 0 (trace 20886): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 180.00s, trace 20822. Next observer evidence: {'until': 181.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20919}.
<a id="trace-1855"></a>
- 217.15s–217.15s (×1), actor 6, squad 0 (events line 1855): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1856"></a>
- 217.15s–217.15s (×1), actor 6, squad 1 (events line 1856): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22090"></a>
- 217.15s–217.15s (×1), actor 6, squad 0 (trace 22090): renew committed intent (75 s lifetime). Knowledge: actor memory at 217.15s, trace 22090. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22097}.
<a id="trace-22091"></a>
<a id="trace-24019"></a>
- 217.15s–279.40s (×2), actor 6, squad 1 (trace 22091): renew committed intent (75 s lifetime). Knowledge: actor memory at 217.15s, trace 22091. Next observer evidence: {'until': 247, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24019}.
<a id="trace-22097"></a>
<a id="trace-22099"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22239"></a>
<a id="trace-22241"></a>
<a id="trace-22258"></a>
<a id="trace-22260"></a>
<a id="trace-22277"></a>
<a id="trace-22279"></a>
<a id="trace-22294"></a>
<a id="trace-22296"></a>
<a id="trace-22366"></a>
<a id="trace-22368"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22408"></a>
<a id="trace-22410"></a>
<a id="trace-22437"></a>
<a id="trace-22439"></a>
<a id="trace-22457"></a>
<a id="trace-22459"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22544"></a>
<a id="trace-22561"></a>
<a id="trace-22563"></a>
<a id="trace-22586"></a>
<a id="trace-22588"></a>
<a id="trace-22616"></a>
<a id="trace-22618"></a>
<a id="trace-22691"></a>
<a id="trace-22693"></a>
<a id="trace-22709"></a>
<a id="trace-22711"></a>
<a id="trace-22726"></a>
<a id="trace-22728"></a>
<a id="trace-22745"></a>
<a id="trace-22747"></a>
<a id="trace-22767"></a>
<a id="trace-22769"></a>
<a id="trace-22848"></a>
<a id="trace-22850"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22895"></a>
<a id="trace-22897"></a>
<a id="trace-22910"></a>
<a id="trace-22912"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-23001"></a>
<a id="trace-23003"></a>
<a id="trace-23025"></a>
<a id="trace-23027"></a>
<a id="trace-23056"></a>
<a id="trace-23058"></a>
<a id="trace-23076"></a>
<a id="trace-23078"></a>
<a id="trace-23096"></a>
<a id="trace-23098"></a>
<a id="trace-23166"></a>
<a id="trace-23168"></a>
<a id="trace-23184"></a>
<a id="trace-23186"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
- 217.30s–253.30s (×73), actor 6, squad 0 (trace 22097): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 217.15s, trace 22091. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22112}.
<a id="trace-1995"></a>
- 254.20s–254.20s (×1), actor 6, squad 0 (events line 1995): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23252"></a>
- 254.20s–254.20s (×1), actor 6, squad 0 (trace 23252): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.608181 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.20s, trace 23252. Next observer evidence: None.
<a id="trace-23253"></a>
- 254.20s–254.20s (×1), actor 6, squad 0 (trace 23253): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.608181 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.20s, trace 23253. Next observer evidence: None.
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23330"></a>
<a id="trace-23332"></a>
- 254.30s–255.30s (×4), actor 6, squad 0 (trace 23257): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 254.20s, trace 23253. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23330}.
<a id="trace-23348"></a>
- 256.10s–256.10s (×1), actor 4, squad 0 (trace 23348): ReactToContact: cover and return fire. Knowledge: actor memory at 255.00s, trace 23273. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23458}.
<a id="trace-23349"></a>
- 256.10s–256.10s (×1), actor 4, squad 0 (trace 23349): received platoon directive. Knowledge: actor memory at 255.00s, trace 23273. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23458}.
<a id="trace-23458"></a>
<a id="trace-23460"></a>
<a id="trace-23482"></a>
<a id="trace-23484"></a>
<a id="trace-23509"></a>
<a id="trace-23511"></a>
<a id="trace-23535"></a>
<a id="trace-23537"></a>
- 256.30s–259.30s (×8), actor 6, squad 0 (trace 23458): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 255.00s, trace 23274. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803963298144693, 'next_transition': 23482}.
<a id="trace-23542"></a>
- 259.45s–259.45s (×1), actor 4, squad 0 (trace 23542): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 255.00s, trace 23273. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 23618}.
<a id="trace-23544"></a>
- 259.45s–259.45s (×1), actor 4, squad 0 (trace 23544): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 255.00s, trace 23273. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 23618}.
<a id="trace-23618"></a>
<a id="trace-23637"></a>
<a id="trace-23653"></a>
<a id="trace-23658"></a>
<a id="trace-23663"></a>
<a id="trace-23729"></a>
<a id="trace-23745"></a>
<a id="trace-23762"></a>
<a id="trace-23776"></a>
<a id="trace-23790"></a>
<a id="trace-23859"></a>
<a id="trace-23871"></a>
<a id="trace-23883"></a>
- 260.30s–272.30s (×13), actor 6, squad 0 (trace 23618): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 260.00s, trace 23561. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23637}.
<a id="trace-23731"></a>
<a id="trace-23733"></a>
<a id="trace-23747"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23778"></a>
<a id="trace-23792"></a>
<a id="trace-23794"></a>
<a id="trace-23861"></a>
<a id="trace-23863"></a>
<a id="trace-23873"></a>
<a id="trace-23875"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23899"></a>
<a id="trace-23907"></a>
<a id="trace-23909"></a>
<a id="trace-23973"></a>
<a id="trace-23975"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-23996"></a>
<a id="trace-23998"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24098"></a>
<a id="trace-24100"></a>
<a id="trace-24127"></a>
<a id="trace-24129"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24207"></a>
<a id="trace-24209"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24236"></a>
<a id="trace-24238"></a>
<a id="trace-24255"></a>
<a id="trace-24257"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24332"></a>
<a id="trace-24334"></a>
<a id="trace-24341"></a>
<a id="trace-24343"></a>
<a id="trace-24355"></a>
<a id="trace-24357"></a>
<a id="trace-24368"></a>
<a id="trace-24370"></a>
<a id="trace-24382"></a>
<a id="trace-24384"></a>
<a id="trace-24460"></a>
<a id="trace-24462"></a>
<a id="trace-24468"></a>
<a id="trace-24470"></a>
<a id="trace-24481"></a>
<a id="trace-24491"></a>
<a id="trace-24493"></a>
<a id="trace-24500"></a>
<a id="trace-24502"></a>
<a id="trace-24570"></a>
<a id="trace-24572"></a>
<a id="trace-24589"></a>
<a id="trace-24591"></a>
<a id="trace-24610"></a>
<a id="trace-24612"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24628"></a>
<a id="trace-24630"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24703"></a>
<a id="trace-24705"></a>
<a id="trace-24721"></a>
<a id="trace-24723"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24755"></a>
<a id="trace-24757"></a>
<a id="trace-24817"></a>
<a id="trace-24819"></a>
<a id="trace-24824"></a>
<a id="trace-24826"></a>
<a id="trace-24837"></a>
<a id="trace-24839"></a>
<a id="trace-24851"></a>
<a id="trace-24853"></a>
<a id="trace-24867"></a>
<a id="trace-24869"></a>
<a id="trace-24945"></a>
<a id="trace-24947"></a>
<a id="trace-24952"></a>
<a id="trace-24954"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-24975"></a>
<a id="trace-24977"></a>
<a id="trace-24988"></a>
<a id="trace-24990"></a>
<a id="trace-25056"></a>
<a id="trace-25058"></a>
<a id="trace-25074"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25100"></a>
<a id="trace-25102"></a>
<a id="trace-25111"></a>
<a id="trace-25113"></a>
<a id="trace-25174"></a>
<a id="trace-25176"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25202"></a>
<a id="trace-25204"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25299"></a>
<a id="trace-25301"></a>
<a id="trace-25307"></a>
<a id="trace-25309"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25336"></a>
<a id="trace-25338"></a>
<a id="trace-25355"></a>
<a id="trace-25357"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25446"></a>
<a id="trace-25448"></a>
<a id="trace-25456"></a>
<a id="trace-25458"></a>
<a id="trace-25469"></a>
<a id="trace-25471"></a>
<a id="trace-25540"></a>
<a id="trace-25555"></a>
<a id="trace-25557"></a>
<a id="trace-25574"></a>
<a id="trace-25576"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25593"></a>
<a id="trace-25595"></a>
<a id="trace-25658"></a>
<a id="trace-25660"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
<a id="trace-25713"></a>
<a id="trace-25715"></a>
<a id="trace-25721"></a>
<a id="trace-25723"></a>
<a id="trace-25784"></a>
<a id="trace-25786"></a>
<a id="trace-25795"></a>
<a id="trace-25797"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25824"></a>
<a id="trace-25826"></a>
<a id="trace-25841"></a>
<a id="trace-25843"></a>
<a id="trace-25912"></a>
<a id="trace-25919"></a>
<a id="trace-25921"></a>
<a id="trace-25931"></a>
<a id="trace-25933"></a>
<a id="trace-25941"></a>
<a id="trace-25943"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
- 265.30s–359.30s (×183), actor 38, squad 4 (trace 23731): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 265.00s, trace 23679. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23747}.
<a id="trace-23894"></a>
- 273.25s–273.25s (×1), actor 6, squad 0 (trace 23894): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 273.25s, trace 23894. Next observer evidence: None.
<a id="trace-23896"></a>
<a id="trace-23905"></a>
<a id="trace-23971"></a>
<a id="trace-23983"></a>
<a id="trace-23994"></a>
<a id="trace-24004"></a>
<a id="trace-24014"></a>
<a id="trace-24083"></a>
<a id="trace-24096"></a>
<a id="trace-24125"></a>
<a id="trace-24134"></a>
<a id="trace-24142"></a>
<a id="trace-24205"></a>
<a id="trace-24216"></a>
<a id="trace-24234"></a>
<a id="trace-24253"></a>
<a id="trace-24330"></a>
<a id="trace-24339"></a>
<a id="trace-24353"></a>
<a id="trace-24366"></a>
<a id="trace-24380"></a>
<a id="trace-24458"></a>
<a id="trace-24466"></a>
<a id="trace-24478"></a>
<a id="trace-24489"></a>
<a id="trace-24498"></a>
<a id="trace-24568"></a>
<a id="trace-24587"></a>
<a id="trace-24608"></a>
<a id="trace-24618"></a>
<a id="trace-24626"></a>
<a id="trace-24689"></a>
<a id="trace-24701"></a>
<a id="trace-24719"></a>
<a id="trace-24737"></a>
<a id="trace-24753"></a>
<a id="trace-24815"></a>
<a id="trace-24835"></a>
<a id="trace-24849"></a>
<a id="trace-24865"></a>
<a id="trace-24943"></a>
<a id="trace-24950"></a>
<a id="trace-24962"></a>
<a id="trace-24973"></a>
<a id="trace-24986"></a>
<a id="trace-25054"></a>
<a id="trace-25071"></a>
<a id="trace-25089"></a>
<a id="trace-25098"></a>
<a id="trace-25109"></a>
<a id="trace-25172"></a>
<a id="trace-25183"></a>
<a id="trace-25200"></a>
<a id="trace-25297"></a>
<a id="trace-25305"></a>
<a id="trace-25317"></a>
<a id="trace-25334"></a>
<a id="trace-25353"></a>
<a id="trace-25426"></a>
<a id="trace-25433"></a>
<a id="trace-25444"></a>
<a id="trace-25454"></a>
<a id="trace-25467"></a>
<a id="trace-25537"></a>
<a id="trace-25553"></a>
<a id="trace-25572"></a>
<a id="trace-25582"></a>
<a id="trace-25591"></a>
<a id="trace-25656"></a>
<a id="trace-25669"></a>
<a id="trace-25686"></a>
<a id="trace-25711"></a>
<a id="trace-25719"></a>
<a id="trace-25782"></a>
<a id="trace-25793"></a>
<a id="trace-25807"></a>
<a id="trace-25822"></a>
<a id="trace-25909"></a>
<a id="trace-25917"></a>
<a id="trace-25929"></a>
<a id="trace-25939"></a>
<a id="trace-25951"></a>
- 273.30s–359.30s (×82), actor 6, squad 0 (trace 23896): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 273.25s, trace 23894. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23905}.
<a id="trace-2075"></a>
- 279.40s–279.40s (×1), actor 6, squad 1 (events line 2075): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24349}.
<a id="trace-24349"></a>
- 292.20s–292.20s (×1), actor 9, squad 1 (trace 24349): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 290.00s, trace 24277. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2292}.
<a id="trace-2292"></a>
- 341.00s–341.00s (×1), actor 6, squad 1 (events line 2292): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 342.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25578}.
<a id="trace-25549"></a>
- 341.00s–341.00s (×1), actor 6, squad 1 (trace 25549): renew committed intent (75 s lifetime). Knowledge: actor memory at 341.00s, trace 25549. Next observer evidence: {'until': 342.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25578}.
<a id="trace-25578"></a>
- 342.65s–342.65s (×1), actor 9, squad 1 (trace 25578): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 340.00s, trace 25482. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

179 matched order/radio deliveries; 364 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.421s; maximum 1.900s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 3826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 3827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3828: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3829: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3830: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3831: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3832: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3833: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3834: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3835: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3836: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3837: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 3838: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 3839: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4121: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4130: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4131: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4132: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4133: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4134: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4135: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4136: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4137: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4138: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4139: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4140: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4141: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6494: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6496: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6497: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6498: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6499: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6500: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6501: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6502: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6503: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6504: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6505: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6506: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6507: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 6762: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 6763: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 6764: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 6765: estimate 2.96; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6941: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6942: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6944: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 6945: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 6946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6947: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6948: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6949: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6950: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6951: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6952: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6953: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6954: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6955: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6956: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 6957: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 6958: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8040: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8043: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8044: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8045: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 8046: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 8047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8048: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8049: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8050: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8051: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8052: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8053: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8054: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8055: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8056: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8057: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 8058: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 8059: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8341: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8342: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8343: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8344: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8346: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8347: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8348: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8349: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8350: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8351: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8352: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8353: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8354: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8355: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8356: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8357: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.05s leader 5, trace 8358: estimate 10.86; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8537: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8538: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8539: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8540: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8542: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8543: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8544: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8545: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8546: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8547: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8548: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8549: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8550: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8551: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8552: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8553: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8723: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8724: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8725: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 8726: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 8727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8728: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8729: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8730: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8731: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8732: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8733: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8734: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8735: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8736: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8737: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 8738: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 8739: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8904: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8905: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8906: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 8907: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 8908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8909: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8910: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8911: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8912: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8913: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8914: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8915: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8916: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8917: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8918: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 8919: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 8920: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9091: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9092: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9093: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9094: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9096: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9097: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9098: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9099: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9100: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9101: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9102: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9103: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9104: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9105: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9106: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9107: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9404: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9405: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9406: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 9407: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 9408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9409: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9410: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9411: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9412: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9413: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9414: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9415: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9416: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9417: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9418: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 9419: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 9420: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11404: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11405: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11406: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 11407: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 11408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11409: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11410: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11411: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11412: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11413: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11414: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11415: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11416: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11417: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11418: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 11419: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 11420: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11605: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11606: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11607: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 11608: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 11609: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11610: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11611: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11612: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11613: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11614: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11615: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11616: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11617: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11618: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11619: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 11620: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 11621: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 11812: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11814: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11815: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 11816: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 11817: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 11818: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11819: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11820: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11821: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11822: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11823: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11824: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11825: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11826: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11827: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11828: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 11829: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 11830: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 11930: estimate 15.18; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 11931: estimate 15.18; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 12046: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12048: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12049: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12050: estimate 15.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 12051: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 12052: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12053: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12054: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12055: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12056: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12057: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12058: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12059: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12060: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12061: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12062: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 12063: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 12064: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.05s leader 5, trace 12065: estimate 15.05; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 14710: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14712: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14713: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 14714: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 14715: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 14716: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14717: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14718: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 14719: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14720: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14721: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14722: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14723: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14724: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 14725: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 14726: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 14727: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 14728: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.35s leader 5, trace 14788: estimate 15.12; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15084: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15086: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15087: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15088: estimate 15.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 15089: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 15090: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15091: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15092: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15093: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15094: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15095: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15096: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15097: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15098: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15099: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15100: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15101: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15102: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17351: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17353: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17354: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 17355: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 17356: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17357: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17358: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17359: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17360: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17361: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17362: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17363: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17364: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17365: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17366: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 17367: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 17368: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17781: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17783: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17784: estimate 15.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 17785: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 17786: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17787: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17788: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17789: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17790: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17791: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17792: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17793: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17794: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17795: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17796: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17797: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17798: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 18013: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 18014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 18015: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 18016: estimate 15.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 18017: estimate 15.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 18018: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 18019: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 18020: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 18021: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 18022: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 18023: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 18024: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 18025: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 18026: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 18027: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 18028: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 18029: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 18030: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18309: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18310: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18311: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18312: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18313: estimate 15.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18314: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18315: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18316: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18317: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18318: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18319: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18320: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18321: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18322: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18323: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18324: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18325: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18541: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18542: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18543: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18544: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18545: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18546: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18547: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18548: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18549: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18550: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18551: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18552: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18553: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18554: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18555: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18556: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18557: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 18742: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18743: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18744: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18745: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 18746: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18747: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18748: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18749: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18750: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18751: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18752: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18753: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18754: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18755: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18756: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 18757: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 18758: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 19017: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19018: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19019: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19020: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 19021: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19022: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19023: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19024: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19025: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19026: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19027: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19028: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19029: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19030: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19031: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 19032: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 19033: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.05s leader 5, trace 19042: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.05s leader 5, trace 19043: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19554: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19555: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19556: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 19557: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19558: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19559: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19560: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19561: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19562: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19563: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19564: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19565: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19566: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19567: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 19568: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 19569: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19981: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19982: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 19983: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19984: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19985: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19986: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19987: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19988: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19989: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19990: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19991: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19992: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19993: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 19994: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 19995: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.30s leader 6, trace 20049: estimate 15.10; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.30s leader 6, trace 20050: estimate 15.10; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.30s leader 6, trace 20051: estimate 15.10; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 20178: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20179: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 20180: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20181: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20182: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20183: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20184: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20185: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20186: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20187: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20188: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20189: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20190: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 20191: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 20192: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 20347: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20348: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 20349: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20350: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20351: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20352: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20353: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20354: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20355: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20356: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20357: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20358: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20359: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 20360: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 20361: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 20498: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 20499: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 20500: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20501: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20502: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20503: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20504: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20505: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20506: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20507: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20508: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20509: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20510: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 20511: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 20512: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 20669: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 20670: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 20671: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20672: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20673: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20674: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20675: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 20676: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20677: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20678: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20679: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20680: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20681: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 20682: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 20683: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 20821: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20822: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 20823: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20824: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20825: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20826: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20827: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20828: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20829: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20830: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20831: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20832: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20833: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 20834: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 20835: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 20997: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20998: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 20999: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21000: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21001: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21002: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21003: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21004: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21005: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21006: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21007: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21008: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21009: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 21010: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 21011: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 21170: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21171: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21172: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21173: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21174: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21175: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21176: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21177: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21178: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21179: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21180: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21181: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 21182: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 21183: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21354: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21355: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 21356: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21357: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21358: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21359: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21360: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21361: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21362: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21363: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21364: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21365: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 21366: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 21367: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21499: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21500: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 21501: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21502: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21503: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21504: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21505: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21506: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21507: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21508: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21509: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21510: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 21511: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 21512: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 21663: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21664: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 21665: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21666: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21667: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21668: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21669: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21670: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21671: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21672: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21673: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21674: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 21675: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 21676: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 21833: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21834: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 21835: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21836: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 21837: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21838: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21839: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21840: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21841: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21842: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21843: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21844: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 21845: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 21846: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 22000: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22001: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 22002: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22003: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22004: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22005: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22006: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22007: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22008: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22009: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22010: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22011: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22012: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22013: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 217.15s leader 6, trace 22090: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 217.15s leader 6, trace 22091: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 22154: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22155: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 22156: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22157: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22158: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22159: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22160: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22161: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22162: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22163: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22164: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22165: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 22166: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 22167: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 22308: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22309: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 22310: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22311: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22312: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22313: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22314: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22315: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22316: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22317: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22318: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22319: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 22320: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22321: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 22473: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22474: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 22475: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22476: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22477: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22478: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22479: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22480: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22481: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22482: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22483: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22484: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 22485: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 22486: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 22634: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22635: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 22636: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22637: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22638: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22639: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22640: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22641: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22642: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22643: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22644: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22645: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 22646: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 22647: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 22785: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 22786: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 22787: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 22788: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 22789: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22790: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22791: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22792: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22793: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22794: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22795: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22796: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 22797: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 22798: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 22943: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 22944: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 22945: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 22946: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 22947: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 22948: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 22949: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 22950: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 22951: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 22952: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 22953: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 22954: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 22955: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 22956: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 23110: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23111: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23112: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23113: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23114: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23115: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23116: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23117: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23118: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23119: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23120: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23121: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 23122: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23123: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.20s leader 6, trace 23252: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.20s leader 6, trace 23253: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 23273: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 23274: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 23275: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23276: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 23277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23280: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23281: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 23285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 23286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 23560: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 23561: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 23562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23563: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 23564: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23565: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23567: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23568: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23570: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23571: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 23572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 23573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 23673: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 23674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 23675: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 23676: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23677: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23679: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23680: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23681: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23682: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 23683: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 23684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 23803: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 23804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 23805: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 23806: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 23807: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 23808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 23809: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 23810: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 23811: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 23812: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 23813: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 23814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.25s leader 6, trace 23894: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 23917: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 23918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 23919: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 23920: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 23921: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 23922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 23923: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 23924: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 23925: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 23926: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 23927: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 23928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 279.40s leader 6, trace 24019: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24029: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 24030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24031: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24032: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24033: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24035: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24036: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24037: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24038: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 24039: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 24040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24151: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 24152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24153: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 24154: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24155: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24157: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24158: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24159: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24160: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 24161: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 24162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 24276: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 24277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 24278: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 24279: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 24280: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 24281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 24282: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 24283: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 24284: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 24285: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 24286: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 24287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 24396: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 24397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 24398: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 24399: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 24400: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 24401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 24402: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 24403: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 24404: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 24405: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 24406: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 24510: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 24511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 24512: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 24513: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 24514: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 24515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 24516: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 24517: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 24518: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 24519: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 24520: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 24521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 24635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 24636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 24637: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 24638: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 24639: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 24640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 24641: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 24642: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 24643: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 24644: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 24645: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 24761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 24763: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 24764: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 24765: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 24766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 24767: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 24768: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 24769: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 24770: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 24771: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 24772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 24881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 24882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 24883: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 24884: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 24885: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 24886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 24887: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 24888: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 24889: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 24890: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 24891: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 24892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 24996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24998: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24999: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 25000: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 25001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 25002: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 25003: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 25004: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 25005: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 25006: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 25117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 25118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 25119: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 25120: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 25121: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 25122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 25123: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 25124: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 25125: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 25126: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 25127: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 25128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 25243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 25244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 25245: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 25246: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 25247: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 25248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 25249: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 25250: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 25251: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 25252: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 25253: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 25254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 25372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 25373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 25374: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 25375: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 25376: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 25377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 25378: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 25379: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 25380: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 25381: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 25382: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 25383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 25481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 25482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 25483: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 25484: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 25485: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 25486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25487: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 25488: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25489: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25490: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 25491: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 25492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 341.00s leader 6, trace 25549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 25601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 25602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 25603: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 25604: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 25605: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 25606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25607: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 25608: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25609: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25610: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 25611: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 25612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 25728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 25729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 25730: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 25731: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25732: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 25733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25734: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25735: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25736: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25737: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 25738: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 25739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 25855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 25856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25857: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25858: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25859: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25861: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25862: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25863: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25864: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 25865: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 25866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 25963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 25964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25965: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25966: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25967: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25969: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25970: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25971: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25972: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 25973: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 25974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Reed incapacitated
- 1: Rook incapacitated
- 1: Ellis killed in action
- 1: Dane killed in action
- 1: Ash incapacitated
- 1: Iven incapacitated
- 1: Voss killed in action
- 1: Tern incapacitated
- 1: Lark incapacitated

## Outcome attribution

- 145.05s, evidence 1467: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 145.05s, evidence 19042: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.178342 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 145.05s, evidence 19043: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.178342 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22642000936393403, 'next_transition': 19093}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 155.30s, evidence 1585: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19687334285016833, 'next_transition': 20073}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 155.30s, evidence 1586: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 155.30s, evidence 20050: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120511 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 155.30s, evidence 20051: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120511 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20091}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 217.15s, evidence 1855: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 217.15s, evidence 1856: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 279.40s, evidence 2075: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24349}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 341.00s, evidence 2292: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 342.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25578}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
