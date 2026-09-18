# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/108/good-azure/battle-108-1789674247814873590`

## Battle summary

**Ember** · 360 s · 198 shots.

### Turning points

- 15.1s, squad 4: contact (events line 173). First recorded contact.
- 19.6s, squad 0: assault ([trace 3431](#trace-3431)). 20.6s, squad 0: advanced tactically.
- 124.0s, squad 0: help call ([trace 15041](#trace-15041)). 125.2s, squad 1: answered a neighbour with support by fire.
- 125.2s, squad 1: help answer ([trace 15310](#trace-15310)). 129.2s, squad 1: answered a neighbour with support by fire.
- 128.0s, squad 0: help call ([trace 15399](#trace-15399)). 129.2s, squad 1: answered a neighbour with support by fire.
- 129.2s, squad 1: help answer ([trace 15440](#trace-15440)). 130.6s, squad 1: advanced tactically.
- 172.2s, squad 1: withdrawal ([trace 17156](#trace-17156)). No completion observed before termination.
- 172.9s, squad 0: withdrawal ([trace 17244](#trace-17244)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 84 shots, 3/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 9 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 97 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 8 shots, 1/2 lost.

### Decisions and attribution

At 37.1s, squad 1 chose FightHere: nearest known group ([trace 5014](#trace-5014)), followed by 5 shots and 1 own casualties; estimate 12.0 against 0 distinct squad-reported contacts; At 50.8s, squad 1 chose advanced tactically ([trace 5613](#trace-5613)), followed by 4 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 15.2s, squad 0 chose took cover and returned fire ([trace 1670](#trace-1670)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.

### Communication

172 matched deliveries (mean 0.45s, max 1.65s); 490 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.05s, squad 4, contact, evidence events line 173: First recorded contact; .
- 19.60s, squad 0, assault, evidence 3431: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 20.6s, squad 0: advanced tactically.
- 124.05s, squad 0, help call, evidence 15041: NeedSupport; 125.2s, squad 1: answered a neighbour with support by fire.
- 125.25s, squad 1, help answer, evidence 15310: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 129.2s, squad 1: answered a neighbour with support by fire.
- 127.95s, squad 0, help call, evidence 15399: NeedSupport; 129.2s, squad 1: answered a neighbour with support by fire.
- 129.15s, squad 1, help answer, evidence 15440: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 130.6s, squad 1: advanced tactically.
- 172.25s, squad 1, withdrawal, evidence 17156: Withdraw to received rally; No completion observed before termination.
- 172.95s, squad 0, withdrawal, evidence 17244: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259979488374422, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-738"></a>
<a id="trace-740"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-943"></a>
<a id="trace-945"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449949742082975, 'next_transition': 738}.
<a id="trace-826"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 826): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-873"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 873): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.104610185676037, 'next_transition': 1842}.
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-1028"></a>
<a id="trace-1030"></a>
<a id="trace-1067"></a>
<a id="trace-1069"></a>
<a id="trace-1115"></a>
<a id="trace-1117"></a>
<a id="trace-1153"></a>
<a id="trace-1155"></a>
<a id="trace-1187"></a>
<a id="trace-1189"></a>
<a id="trace-1234"></a>
<a id="trace-1236"></a>
<a id="trace-1269"></a>
<a id="trace-1271"></a>
<a id="trace-1390"></a>
<a id="trace-1392"></a>
<a id="trace-1413"></a>
<a id="trace-1415"></a>
<a id="trace-1440"></a>
<a id="trace-1442"></a>
<a id="trace-1463"></a>
<a id="trace-1465"></a>
<a id="trace-1487"></a>
<a id="trace-1489"></a>
<a id="trace-1503"></a>
<a id="trace-1505"></a>
<a id="trace-1523"></a>
<a id="trace-1525"></a>
<a id="trace-1563"></a>
<a id="trace-1565"></a>
<a id="trace-1578"></a>
<a id="trace-1580"></a>
<a id="trace-1662"></a>
<a id="trace-1664"></a>
<a id="trace-1839"></a>
<a id="trace-1841"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2599"></a>
<a id="trace-2601"></a>
<a id="trace-2642"></a>
<a id="trace-2644"></a>
<a id="trace-2748"></a>
<a id="trace-2750"></a>
<a id="trace-2834"></a>
<a id="trace-2836"></a>
<a id="trace-3520"></a>
<a id="trace-3522"></a>
<a id="trace-3612"></a>
<a id="trace-3614"></a>
<a id="trace-3721"></a>
<a id="trace-3723"></a>
<a id="trace-3754"></a>
<a id="trace-3756"></a>
<a id="trace-3973"></a>
<a id="trace-3975"></a>
<a id="trace-4020"></a>
<a id="trace-4022"></a>
<a id="trace-4069"></a>
<a id="trace-4071"></a>
<a id="trace-4271"></a>
<a id="trace-4273"></a>
<a id="trace-4321"></a>
<a id="trace-4323"></a>
<a id="trace-4464"></a>
<a id="trace-4466"></a>
<a id="trace-4482"></a>
<a id="trace-4484"></a>
<a id="trace-4517"></a>
<a id="trace-4519"></a>
<a id="trace-4543"></a>
<a id="trace-4545"></a>
<a id="trace-4562"></a>
<a id="trace-4564"></a>
<a id="trace-4583"></a>
<a id="trace-4585"></a>
<a id="trace-4611"></a>
<a id="trace-4613"></a>
<a id="trace-4630"></a>
<a id="trace-4632"></a>
<a id="trace-4736"></a>
<a id="trace-4738"></a>
<a id="trace-4775"></a>
<a id="trace-4777"></a>
<a id="trace-4792"></a>
<a id="trace-4794"></a>
<a id="trace-4807"></a>
<a id="trace-4809"></a>
<a id="trace-4854"></a>
<a id="trace-4856"></a>
<a id="trace-4868"></a>
<a id="trace-4870"></a>
<a id="trace-4949"></a>
<a id="trace-4951"></a>
<a id="trace-4968"></a>
<a id="trace-4970"></a>
<a id="trace-4986"></a>
<a id="trace-4988"></a>
<a id="trace-5002"></a>
<a id="trace-5004"></a>
<a id="trace-5032"></a>
<a id="trace-5034"></a>
<a id="trace-5067"></a>
<a id="trace-5069"></a>
<a id="trace-5078"></a>
<a id="trace-5080"></a>
<a id="trace-5098"></a>
<a id="trace-5100"></a>
<a id="trace-5110"></a>
<a id="trace-5112"></a>
<a id="trace-5185"></a>
<a id="trace-5187"></a>
<a id="trace-5195"></a>
<a id="trace-5197"></a>
<a id="trace-5218"></a>
<a id="trace-5220"></a>
<a id="trace-5275"></a>
<a id="trace-5277"></a>
<a id="trace-5285"></a>
<a id="trace-5287"></a>
<a id="trace-5302"></a>
<a id="trace-5304"></a>
<a id="trace-5313"></a>
<a id="trace-5315"></a>
<a id="trace-5390"></a>
<a id="trace-5392"></a>
<a id="trace-5400"></a>
<a id="trace-5402"></a>
<a id="trace-5417"></a>
<a id="trace-5419"></a>
<a id="trace-5429"></a>
<a id="trace-5431"></a>
<a id="trace-5447"></a>
<a id="trace-5449"></a>
<a id="trace-5460"></a>
<a id="trace-5462"></a>
<a id="trace-5482"></a>
<a id="trace-5484"></a>
<a id="trace-5494"></a>
<a id="trace-5496"></a>
<a id="trace-5510"></a>
<a id="trace-5512"></a>
<a id="trace-5521"></a>
<a id="trace-5523"></a>
<a id="trace-5598"></a>
<a id="trace-5600"></a>
<a id="trace-5609"></a>
<a id="trace-5611"></a>
<a id="trace-5628"></a>
<a id="trace-5630"></a>
<a id="trace-5641"></a>
<a id="trace-5643"></a>
<a id="trace-5658"></a>
<a id="trace-5660"></a>
<a id="trace-5671"></a>
<a id="trace-5673"></a>
<a id="trace-5695"></a>
<a id="trace-5697"></a>
<a id="trace-5708"></a>
<a id="trace-5710"></a>
<a id="trace-5724"></a>
<a id="trace-5726"></a>
<a id="trace-5736"></a>
<a id="trace-5738"></a>
<a id="trace-5812"></a>
<a id="trace-5814"></a>
<a id="trace-5820"></a>
<a id="trace-5822"></a>
<a id="trace-5837"></a>
<a id="trace-5839"></a>
<a id="trace-5849"></a>
<a id="trace-5851"></a>
<a id="trace-5864"></a>
<a id="trace-5866"></a>
<a id="trace-5879"></a>
<a id="trace-5881"></a>
<a id="trace-5906"></a>
<a id="trace-5908"></a>
<a id="trace-5921"></a>
<a id="trace-5923"></a>
<a id="trace-5943"></a>
<a id="trace-5945"></a>
<a id="trace-6044"></a>
<a id="trace-6046"></a>
<a id="trace-6076"></a>
<a id="trace-6078"></a>
<a id="trace-6092"></a>
<a id="trace-6094"></a>
<a id="trace-6105"></a>
<a id="trace-6107"></a>
<a id="trace-6121"></a>
<a id="trace-6123"></a>
<a id="trace-6131"></a>
<a id="trace-6133"></a>
<a id="trace-6145"></a>
<a id="trace-6147"></a>
<a id="trace-6266"></a>
<a id="trace-6268"></a>
<a id="trace-6319"></a>
<a id="trace-6321"></a>
<a id="trace-6343"></a>
<a id="trace-6345"></a>
<a id="trace-6357"></a>
<a id="trace-6359"></a>
<a id="trace-6371"></a>
<a id="trace-6373"></a>
<a id="trace-6457"></a>
<a id="trace-6459"></a>
<a id="trace-6473"></a>
<a id="trace-6475"></a>
<a id="trace-6488"></a>
<a id="trace-6490"></a>
<a id="trace-6506"></a>
<a id="trace-6508"></a>
<a id="trace-6526"></a>
<a id="trace-6528"></a>
<a id="trace-6548"></a>
<a id="trace-6550"></a>
<a id="trace-6564"></a>
<a id="trace-6566"></a>
<a id="trace-6582"></a>
<a id="trace-6584"></a>
<a id="trace-6597"></a>
<a id="trace-6599"></a>
<a id="trace-6671"></a>
<a id="trace-6673"></a>
<a id="trace-6682"></a>
<a id="trace-6684"></a>
<a id="trace-6697"></a>
<a id="trace-6699"></a>
<a id="trace-6707"></a>
<a id="trace-6709"></a>
<a id="trace-6721"></a>
<a id="trace-6723"></a>
<a id="trace-6734"></a>
<a id="trace-6736"></a>
<a id="trace-6754"></a>
<a id="trace-6756"></a>
<a id="trace-6768"></a>
<a id="trace-6770"></a>
<a id="trace-6785"></a>
<a id="trace-6787"></a>
<a id="trace-6799"></a>
<a id="trace-6801"></a>
<a id="trace-6896"></a>
<a id="trace-6898"></a>
<a id="trace-6927"></a>
<a id="trace-6929"></a>
<a id="trace-6942"></a>
<a id="trace-6944"></a>
<a id="trace-6979"></a>
<a id="trace-6981"></a>
<a id="trace-7008"></a>
<a id="trace-7010"></a>
<a id="trace-7030"></a>
<a id="trace-7032"></a>
<a id="trace-7047"></a>
<a id="trace-7049"></a>
<a id="trace-7059"></a>
<a id="trace-7061"></a>
<a id="trace-9360"></a>
<a id="trace-9362"></a>
<a id="trace-9415"></a>
<a id="trace-9417"></a>
<a id="trace-9433"></a>
<a id="trace-9435"></a>
<a id="trace-9455"></a>
<a id="trace-9457"></a>
<a id="trace-9514"></a>
<a id="trace-9516"></a>
<a id="trace-9534"></a>
<a id="trace-9536"></a>
<a id="trace-9556"></a>
<a id="trace-9558"></a>
<a id="trace-9567"></a>
<a id="trace-9569"></a>
<a id="trace-9663"></a>
<a id="trace-9665"></a>
<a id="trace-9683"></a>
<a id="trace-9685"></a>
<a id="trace-9719"></a>
<a id="trace-9721"></a>
<a id="trace-9766"></a>
<a id="trace-9768"></a>
<a id="trace-9780"></a>
<a id="trace-9782"></a>
<a id="trace-9799"></a>
<a id="trace-9801"></a>
<a id="trace-9818"></a>
<a id="trace-9820"></a>
<a id="trace-9903"></a>
<a id="trace-9905"></a>
<a id="trace-9916"></a>
<a id="trace-9918"></a>
<a id="trace-9938"></a>
<a id="trace-9940"></a>
<a id="trace-9952"></a>
<a id="trace-9954"></a>
<a id="trace-9969"></a>
<a id="trace-9971"></a>
<a id="trace-9983"></a>
<a id="trace-9985"></a>
<a id="trace-10264"></a>
<a id="trace-10266"></a>
<a id="trace-10291"></a>
<a id="trace-10293"></a>
<a id="trace-10316"></a>
<a id="trace-10318"></a>
<a id="trace-10395"></a>
<a id="trace-10397"></a>
<a id="trace-10416"></a>
<a id="trace-10418"></a>
<a id="trace-10438"></a>
<a id="trace-10440"></a>
<a id="trace-10487"></a>
<a id="trace-10489"></a>
<a id="trace-10508"></a>
<a id="trace-10510"></a>
<a id="trace-10519"></a>
<a id="trace-10521"></a>
<a id="trace-10542"></a>
<a id="trace-10544"></a>
<a id="trace-10558"></a>
<a id="trace-10560"></a>
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-10933"></a>
<a id="trace-10935"></a>
<a id="trace-10957"></a>
<a id="trace-10959"></a>
<a id="trace-10984"></a>
<a id="trace-10986"></a>
<a id="trace-11251"></a>
<a id="trace-11253"></a>
<a id="trace-11271"></a>
<a id="trace-11273"></a>
<a id="trace-11541"></a>
<a id="trace-11543"></a>
<a id="trace-11669"></a>
<a id="trace-11671"></a>
<a id="trace-11714"></a>
<a id="trace-11716"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11780"></a>
<a id="trace-11782"></a>
<a id="trace-11803"></a>
<a id="trace-11805"></a>
<a id="trace-12113"></a>
<a id="trace-12115"></a>
<a id="trace-12150"></a>
<a id="trace-12152"></a>
<a id="trace-12184"></a>
<a id="trace-12186"></a>
<a id="trace-12204"></a>
<a id="trace-12206"></a>
<a id="trace-12287"></a>
<a id="trace-12289"></a>
<a id="trace-12331"></a>
<a id="trace-12333"></a>
<a id="trace-12357"></a>
<a id="trace-12359"></a>
<a id="trace-12373"></a>
<a id="trace-12375"></a>
<a id="trace-12389"></a>
<a id="trace-12391"></a>
<a id="trace-14727"></a>
<a id="trace-14729"></a>
<a id="trace-14758"></a>
<a id="trace-14760"></a>
<a id="trace-14803"></a>
<a id="trace-14805"></a>
<a id="trace-14900"></a>
<a id="trace-14902"></a>
<a id="trace-14932"></a>
<a id="trace-14934"></a>
<a id="trace-14971"></a>
<a id="trace-14973"></a>
<a id="trace-14991"></a>
<a id="trace-14993"></a>
<a id="trace-15009"></a>
<a id="trace-15011"></a>
<a id="trace-15023"></a>
<a id="trace-15025"></a>
<a id="trace-15064"></a>
<a id="trace-15066"></a>
<a id="trace-15225"></a>
<a id="trace-15227"></a>
<a id="trace-15307"></a>
<a id="trace-15309"></a>
<a id="trace-15331"></a>
<a id="trace-15333"></a>
<a id="trace-15349"></a>
<a id="trace-15351"></a>
<a id="trace-15381"></a>
<a id="trace-15383"></a>
<a id="trace-15393"></a>
<a id="trace-15395"></a>
<a id="trace-15434"></a>
<a id="trace-15436"></a>
<a id="trace-15455"></a>
<a id="trace-15457"></a>
<a id="trace-15470"></a>
<a id="trace-15472"></a>
<a id="trace-15547"></a>
<a id="trace-15549"></a>
<a id="trace-15560"></a>
<a id="trace-15562"></a>
<a id="trace-15572"></a>
<a id="trace-15574"></a>
<a id="trace-15580"></a>
<a id="trace-15582"></a>
<a id="trace-15672"></a>
<a id="trace-15674"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15704"></a>
<a id="trace-15706"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15842"></a>
<a id="trace-15844"></a>
<a id="trace-15850"></a>
<a id="trace-15852"></a>
<a id="trace-15864"></a>
<a id="trace-15866"></a>
<a id="trace-15900"></a>
<a id="trace-15902"></a>
<a id="trace-15918"></a>
<a id="trace-15920"></a>
<a id="trace-15999"></a>
<a id="trace-16001"></a>
<a id="trace-16018"></a>
<a id="trace-16020"></a>
<a id="trace-16026"></a>
<a id="trace-16028"></a>
<a id="trace-16040"></a>
<a id="trace-16042"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16078"></a>
<a id="trace-16080"></a>
<a id="trace-16101"></a>
<a id="trace-16103"></a>
<a id="trace-16174"></a>
<a id="trace-16176"></a>
<a id="trace-16204"></a>
<a id="trace-16206"></a>
<a id="trace-16219"></a>
<a id="trace-16221"></a>
<a id="trace-16243"></a>
<a id="trace-16245"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16382"></a>
<a id="trace-16384"></a>
<a id="trace-16392"></a>
<a id="trace-16394"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
<a id="trace-16425"></a>
<a id="trace-16427"></a>
<a id="trace-16462"></a>
<a id="trace-16464"></a>
<a id="trace-16476"></a>
<a id="trace-16478"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-16557"></a>
<a id="trace-16564"></a>
<a id="trace-16574"></a>
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16604"></a>
<a id="trace-16606"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16652"></a>
<a id="trace-16654"></a>
<a id="trace-16667"></a>
<a id="trace-16669"></a>
<a id="trace-16745"></a>
<a id="trace-16747"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16778"></a>
<a id="trace-16780"></a>
<a id="trace-16791"></a>
<a id="trace-16793"></a>
<a id="trace-16802"></a>
<a id="trace-16804"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16841"></a>
<a id="trace-16843"></a>
<a id="trace-16852"></a>
<a id="trace-16854"></a>
<a id="trace-16926"></a>
<a id="trace-16928"></a>
<a id="trace-16941"></a>
<a id="trace-16943"></a>
<a id="trace-16955"></a>
<a id="trace-16957"></a>
<a id="trace-16965"></a>
<a id="trace-16967"></a>
<a id="trace-16982"></a>
<a id="trace-16984"></a>
<a id="trace-17011"></a>
<a id="trace-17013"></a>
<a id="trace-17112"></a>
<a id="trace-17114"></a>
<a id="trace-17122"></a>
<a id="trace-17124"></a>
<a id="trace-17141"></a>
<a id="trace-17143"></a>
<a id="trace-17222"></a>
<a id="trace-17224"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17353"></a>
<a id="trace-17355"></a>
<a id="trace-17379"></a>
<a id="trace-17381"></a>
<a id="trace-17398"></a>
<a id="trace-17400"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17504"></a>
<a id="trace-17506"></a>
<a id="trace-17521"></a>
<a id="trace-17523"></a>
<a id="trace-17550"></a>
<a id="trace-17552"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17580"></a>
<a id="trace-17582"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17617"></a>
<a id="trace-17619"></a>
<a id="trace-17688"></a>
<a id="trace-17690"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17747"></a>
<a id="trace-17749"></a>
<a id="trace-17772"></a>
<a id="trace-17774"></a>
<a id="trace-17786"></a>
<a id="trace-17788"></a>
<a id="trace-17808"></a>
<a id="trace-17810"></a>
<a id="trace-17818"></a>
<a id="trace-17820"></a>
<a id="trace-17905"></a>
<a id="trace-17907"></a>
<a id="trace-17920"></a>
<a id="trace-17922"></a>
<a id="trace-17932"></a>
<a id="trace-17934"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17986"></a>
<a id="trace-17988"></a>
<a id="trace-18005"></a>
<a id="trace-18007"></a>
<a id="trace-18014"></a>
<a id="trace-18016"></a>
<a id="trace-18093"></a>
<a id="trace-18095"></a>
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18118"></a>
<a id="trace-18120"></a>
<a id="trace-18136"></a>
<a id="trace-18138"></a>
<a id="trace-18150"></a>
<a id="trace-18152"></a>
<a id="trace-18162"></a>
<a id="trace-18164"></a>
<a id="trace-18191"></a>
<a id="trace-18193"></a>
<a id="trace-18200"></a>
<a id="trace-18202"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18309"></a>
<a id="trace-18311"></a>
<a id="trace-18324"></a>
<a id="trace-18326"></a>
<a id="trace-18348"></a>
<a id="trace-18350"></a>
<a id="trace-18380"></a>
<a id="trace-18382"></a>
<a id="trace-18389"></a>
<a id="trace-18391"></a>
<a id="trace-18469"></a>
<a id="trace-18471"></a>
<a id="trace-18481"></a>
<a id="trace-18483"></a>
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18527"></a>
<a id="trace-18529"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18569"></a>
<a id="trace-18571"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18707"></a>
<a id="trace-18709"></a>
<a id="trace-18728"></a>
<a id="trace-18730"></a>
<a id="trace-18761"></a>
<a id="trace-18763"></a>
<a id="trace-18836"></a>
<a id="trace-18838"></a>
<a id="trace-18844"></a>
<a id="trace-18846"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18869"></a>
<a id="trace-18871"></a>
<a id="trace-18887"></a>
<a id="trace-18889"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18919"></a>
<a id="trace-18921"></a>
<a id="trace-18945"></a>
<a id="trace-18947"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19026"></a>
<a id="trace-19028"></a>
<a id="trace-19042"></a>
<a id="trace-19044"></a>
<a id="trace-19073"></a>
<a id="trace-19075"></a>
<a id="trace-19085"></a>
<a id="trace-19087"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19113"></a>
<a id="trace-19115"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19142"></a>
<a id="trace-19144"></a>
<a id="trace-19213"></a>
<a id="trace-19215"></a>
<a id="trace-19232"></a>
<a id="trace-19234"></a>
<a id="trace-19267"></a>
<a id="trace-19269"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19299"></a>
<a id="trace-19301"></a>
<a id="trace-19317"></a>
<a id="trace-19319"></a>
<a id="trace-19329"></a>
<a id="trace-19331"></a>
<a id="trace-19415"></a>
<a id="trace-19417"></a>
<a id="trace-19427"></a>
<a id="trace-19429"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19461"></a>
<a id="trace-19463"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19500"></a>
<a id="trace-19502"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19680"></a>
<a id="trace-19682"></a>
<a id="trace-19697"></a>
<a id="trace-19699"></a>
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19785"></a>
<a id="trace-19787"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19861"></a>
<a id="trace-19863"></a>
<a id="trace-19980"></a>
<a id="trace-19982"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
<a id="trace-20006"></a>
<a id="trace-20008"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20155"></a>
<a id="trace-20157"></a>
<a id="trace-20165"></a>
<a id="trace-20167"></a>
<a id="trace-20177"></a>
<a id="trace-20179"></a>
<a id="trace-20208"></a>
<a id="trace-20210"></a>
<a id="trace-20220"></a>
<a id="trace-20222"></a>
<a id="trace-20245"></a>
<a id="trace-20247"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20353"></a>
<a id="trace-20355"></a>
<a id="trace-20374"></a>
<a id="trace-20376"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20419"></a>
<a id="trace-20421"></a>
<a id="trace-20436"></a>
<a id="trace-20438"></a>
<a id="trace-20445"></a>
<a id="trace-20447"></a>
<a id="trace-20516"></a>
<a id="trace-20518"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20536"></a>
<a id="trace-20538"></a>
<a id="trace-20550"></a>
<a id="trace-20552"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20602"></a>
<a id="trace-20604"></a>
<a id="trace-20636"></a>
<a id="trace-20638"></a>
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20734"></a>
<a id="trace-20736"></a>
<a id="trace-20755"></a>
<a id="trace-20757"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20782"></a>
<a id="trace-20784"></a>
<a id="trace-20794"></a>
<a id="trace-20796"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20830"></a>
<a id="trace-20832"></a>
<a id="trace-20910"></a>
<a id="trace-20912"></a>
<a id="trace-20920"></a>
<a id="trace-20922"></a>
<a id="trace-20932"></a>
<a id="trace-20934"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
<a id="trace-20955"></a>
<a id="trace-20957"></a>
<a id="trace-20967"></a>
<a id="trace-20969"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-20988"></a>
<a id="trace-20990"></a>
<a id="trace-21005"></a>
<a id="trace-21007"></a>
<a id="trace-21016"></a>
<a id="trace-21018"></a>
<a id="trace-21089"></a>
<a id="trace-21091"></a>
<a id="trace-21101"></a>
<a id="trace-21103"></a>
<a id="trace-21118"></a>
<a id="trace-21120"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21177"></a>
<a id="trace-21179"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21214"></a>
<a id="trace-21216"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21293"></a>
<a id="trace-21295"></a>
<a id="trace-21307"></a>
<a id="trace-21309"></a>
<a id="trace-21331"></a>
<a id="trace-21333"></a>
<a id="trace-21343"></a>
<a id="trace-21345"></a>
<a id="trace-21362"></a>
<a id="trace-21364"></a>
<a id="trace-21374"></a>
<a id="trace-21376"></a>
<a id="trace-21395"></a>
<a id="trace-21397"></a>
<a id="trace-21412"></a>
<a id="trace-21414"></a>
<a id="trace-21499"></a>
<a id="trace-21501"></a>
<a id="trace-21509"></a>
<a id="trace-21511"></a>
<a id="trace-21522"></a>
<a id="trace-21524"></a>
<a id="trace-21533"></a>
<a id="trace-21535"></a>
<a id="trace-21547"></a>
<a id="trace-21549"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21674"></a>
<a id="trace-21676"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21739"></a>
<a id="trace-21741"></a>
<a id="trace-21749"></a>
<a id="trace-21751"></a>
<a id="trace-21766"></a>
<a id="trace-21768"></a>
<a id="trace-21779"></a>
<a id="trace-21781"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21877"></a>
<a id="trace-21879"></a>
<a id="trace-21895"></a>
<a id="trace-21897"></a>
<a id="trace-21918"></a>
<a id="trace-21920"></a>
<a id="trace-21963"></a>
<a id="trace-21965"></a>
<a id="trace-21973"></a>
<a id="trace-21975"></a>
<a id="trace-22050"></a>
<a id="trace-22052"></a>
<a id="trace-22064"></a>
<a id="trace-22066"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22104"></a>
<a id="trace-22106"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22228"></a>
<a id="trace-22230"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22256"></a>
<a id="trace-22258"></a>
<a id="trace-22266"></a>
<a id="trace-22268"></a>
<a id="trace-22279"></a>
<a id="trace-22281"></a>
<a id="trace-22292"></a>
<a id="trace-22294"></a>
<a id="trace-22305"></a>
<a id="trace-22307"></a>
<a id="trace-22316"></a>
<a id="trace-22318"></a>
<a id="trace-22338"></a>
<a id="trace-22340"></a>
<a id="trace-22348"></a>
<a id="trace-22350"></a>
<a id="trace-22422"></a>
<a id="trace-22424"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22500"></a>
<a id="trace-22502"></a>
<a id="trace-22509"></a>
<a id="trace-22511"></a>
<a id="trace-22528"></a>
<a id="trace-22530"></a>
<a id="trace-22609"></a>
<a id="trace-22611"></a>
<a id="trace-22618"></a>
<a id="trace-22620"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22659"></a>
<a id="trace-22661"></a>
<a id="trace-22672"></a>
<a id="trace-22674"></a>
<a id="trace-22684"></a>
<a id="trace-22686"></a>
<a id="trace-22694"></a>
<a id="trace-22696"></a>
<a id="trace-22727"></a>
<a id="trace-22729"></a>
<a id="trace-22800"></a>
<a id="trace-22802"></a>
<a id="trace-22821"></a>
<a id="trace-22823"></a>
<a id="trace-22832"></a>
<a id="trace-22834"></a>
<a id="trace-22847"></a>
<a id="trace-22849"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22884"></a>
<a id="trace-22886"></a>
<a id="trace-22901"></a>
<a id="trace-22903"></a>
<a id="trace-22982"></a>
<a id="trace-22984"></a>
<a id="trace-23034"></a>
<a id="trace-23036"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23060"></a>
<a id="trace-23062"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23173"></a>
<a id="trace-23175"></a>
<a id="trace-23181"></a>
<a id="trace-23183"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
<a id="trace-23232"></a>
<a id="trace-23234"></a>
<a id="trace-23251"></a>
<a id="trace-23253"></a>
<a id="trace-23279"></a>
<a id="trace-23281"></a>
<a id="trace-23289"></a>
<a id="trace-23291"></a>
<a id="trace-23362"></a>
<a id="trace-23364"></a>
<a id="trace-23375"></a>
<a id="trace-23377"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23431"></a>
<a id="trace-23433"></a>
<a id="trace-23442"></a>
<a id="trace-23444"></a>
<a id="trace-23459"></a>
<a id="trace-23461"></a>
<a id="trace-23469"></a>
<a id="trace-23471"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23572"></a>
<a id="trace-23574"></a>
<a id="trace-23585"></a>
<a id="trace-23587"></a>
<a id="trace-23603"></a>
<a id="trace-23605"></a>
<a id="trace-23628"></a>
<a id="trace-23630"></a>
<a id="trace-23637"></a>
<a id="trace-23639"></a>
<a id="trace-23654"></a>
<a id="trace-23656"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23741"></a>
<a id="trace-23743"></a>
<a id="trace-23763"></a>
<a id="trace-23765"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
<a id="trace-23802"></a>
<a id="trace-23804"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23826"></a>
<a id="trace-23828"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-23944"></a>
<a id="trace-23946"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-23994"></a>
<a id="trace-23996"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24032"></a>
<a id="trace-24034"></a>
<a id="trace-24044"></a>
<a id="trace-24046"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24158"></a>
<a id="trace-24160"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24204"></a>
<a id="trace-24206"></a>
<a id="trace-24222"></a>
<a id="trace-24224"></a>
<a id="trace-24233"></a>
<a id="trace-24235"></a>
<a id="trace-24313"></a>
<a id="trace-24315"></a>
<a id="trace-24330"></a>
<a id="trace-24332"></a>
<a id="trace-24347"></a>
<a id="trace-24349"></a>
<a id="trace-24367"></a>
<a id="trace-24369"></a>
<a id="trace-24398"></a>
<a id="trace-24400"></a>
<a id="trace-24415"></a>
<a id="trace-24417"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 947): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625372285426513, 'next_transition': 1028}.
<a id="trace-969"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 969): traveling overwatch. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300082095947874, 'next_transition': 1024}.
<a id="trace-970"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 970): received platoon directive. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300082095947874, 'next_transition': 1024}.
<a id="trace-1024"></a>
<a id="trace-1026"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1111"></a>
<a id="trace-1113"></a>
<a id="trace-1149"></a>
<a id="trace-1151"></a>
<a id="trace-1183"></a>
<a id="trace-1185"></a>
<a id="trace-1230"></a>
<a id="trace-1232"></a>
<a id="trace-1265"></a>
<a id="trace-1267"></a>
<a id="trace-1293"></a>
<a id="trace-1295"></a>
<a id="trace-1386"></a>
<a id="trace-1388"></a>
<a id="trace-1409"></a>
<a id="trace-1411"></a>
<a id="trace-1436"></a>
<a id="trace-1438"></a>
<a id="trace-1459"></a>
<a id="trace-1461"></a>
<a id="trace-1483"></a>
<a id="trace-1485"></a>
<a id="trace-1499"></a>
<a id="trace-1501"></a>
<a id="trace-1519"></a>
<a id="trace-1521"></a>
<a id="trace-1528"></a>
<a id="trace-1530"></a>
<a id="trace-1559"></a>
<a id="trace-1561"></a>
<a id="trace-1574"></a>
<a id="trace-1576"></a>
<a id="trace-1658"></a>
<a id="trace-1660"></a>
- 6.20s–15.20s (×38), actor 5, squad 0 (trace 1024): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 752. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2174406840313134, 'next_transition': 1063}.
<a id="trace-1670"></a>
- 15.25s–15.25s (×1), actor 0, squad 0 (trace 1670): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1750}.
<a id="trace-1671"></a>
- 15.25s–15.25s (×1), actor 0, squad 0 (trace 1671): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1750}.
<a id="trace-1672"></a>
<a id="trace-1750"></a>
- 15.25s–15.60s (×2), actor 0, squad 0 (trace 1672): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1750}.
<a id="trace-1835"></a>
<a id="trace-1837"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
<a id="trace-2532"></a>
<a id="trace-2534"></a>
<a id="trace-2595"></a>
<a id="trace-2597"></a>
<a id="trace-2638"></a>
<a id="trace-2640"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
- 15.70s–18.25s (×12), actor 5, squad 0 (trace 1835): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1589. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2470}.
<a id="trace-1842"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1842): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1592. Next observer evidence: None.
<a id="trace-1843"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1843): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1592. Next observer evidence: None.
<a id="trace-1844"></a>
<a id="trace-1961"></a>
<a id="trace-2085"></a>
<a id="trace-2205"></a>
<a id="trace-2333"></a>
- 15.70s–16.10s (×5), actor 8, squad 1 (trace 1844): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1592. Next observer evidence: None.
<a id="trace-317"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 317): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-318"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 318): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2784"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2784): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.391177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2784. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2806}.
<a id="trace-2785"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2785): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.391177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2785. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2806}.
<a id="trace-2786"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2786): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.391177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2786. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8428564459770118, 'next_transition': 2846}.
<a id="trace-2787"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2787): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.391177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2787. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8428564459770118, 'next_transition': 2846}.
<a id="trace-2806"></a>
<a id="trace-2808"></a>
<a id="trace-2829"></a>
<a id="trace-2831"></a>
- 18.75s–19.25s (×4), actor 5, squad 0 (trace 2806): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2787. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2829}.
<a id="trace-2846"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 2846): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1592. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.054253485832709086, 'next_transition': 3552}.
<a id="trace-2855"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 2855): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-2857"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 2857): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-3431"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3431): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-3432"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3432): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-3494"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3494): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-3495"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3495): Assaulting. Knowledge: actor memory at 15.00s, trace 1584. Next observer evidence: None.
<a id="trace-3515"></a>
<a id="trace-3517"></a>
<a id="trace-3607"></a>
<a id="trace-3609"></a>
- 19.75s–20.25s (×4), actor 5, squad 0 (trace 3515): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2787. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3607}.
<a id="trace-3552"></a>
- 20.05s–20.05s (×1), actor 8, squad 1 (trace 3552): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3535. Next observer evidence: {'until': 20.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3762700406955089, 'next_transition': 3730}.
<a id="trace-3626"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3626): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 3527. Next observer evidence: None.
<a id="trace-3633"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3633): MoveTactically. Knowledge: actor memory at 20.00s, trace 3527. Next observer evidence: None.
<a id="trace-3634"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3634): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 20.00s, trace 3527. Next observer evidence: None.
<a id="trace-3716"></a>
<a id="trace-3718"></a>
<a id="trace-3748"></a>
<a id="trace-3750"></a>
- 20.75s–21.25s (×4), actor 5, squad 0 (trace 3716): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3532. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3748}.
<a id="trace-3730"></a>
- 20.90s–20.90s (×1), actor 8, squad 1 (trace 3730): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 3535. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5052077796560539, 'next_transition': 3852}.
<a id="trace-3773"></a>
- 21.60s–21.60s (×1), actor 0, squad 0 (trace 3773): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3527. Next observer evidence: None.
<a id="trace-3774"></a>
- 21.60s–21.60s (×1), actor 0, squad 0 (trace 3774): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3527. Next observer evidence: None.
<a id="trace-3852"></a>
- 21.65s–21.65s (×1), actor 8, squad 1 (trace 3852): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3535. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9370974685298216, 'next_transition': 4090}.
<a id="trace-3967"></a>
<a id="trace-3969"></a>
<a id="trace-4014"></a>
<a id="trace-4016"></a>
<a id="trace-4063"></a>
<a id="trace-4065"></a>
<a id="trace-4224"></a>
<a id="trace-4226"></a>
<a id="trace-4265"></a>
<a id="trace-4267"></a>
<a id="trace-4315"></a>
<a id="trace-4317"></a>
<a id="trace-4368"></a>
<a id="trace-4370"></a>
<a id="trace-4458"></a>
<a id="trace-4460"></a>
<a id="trace-4476"></a>
<a id="trace-4478"></a>
- 21.75s–25.75s (×18), actor 5, squad 0 (trace 3967): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3532. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2214976865285278, 'next_transition': 4014}.
<a id="trace-4090"></a>
- 23.00s–23.00s (×1), actor 8, squad 1 (trace 4090): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3535. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27167398486053096, 'next_transition': 417}.
<a id="trace-417"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 417): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4251"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4251): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.765383 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4251. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6064036883672794, 'next_transition': 4520}.
<a id="trace-4252"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4252): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.765383 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4252. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6064036883672794, 'next_transition': 4520}.
<a id="trace-4490"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 4490): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4380. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07212050895896392, 'next_transition': 4511}.
<a id="trace-4511"></a>
<a id="trace-4513"></a>
<a id="trace-4537"></a>
<a id="trace-4539"></a>
<a id="trace-4556"></a>
<a id="trace-4558"></a>
<a id="trace-4578"></a>
<a id="trace-4580"></a>
<a id="trace-4606"></a>
<a id="trace-4608"></a>
<a id="trace-4625"></a>
<a id="trace-4627"></a>
<a id="trace-4645"></a>
<a id="trace-4647"></a>
<a id="trace-4654"></a>
<a id="trace-4656"></a>
<a id="trace-4732"></a>
<a id="trace-4734"></a>
<a id="trace-4747"></a>
<a id="trace-4749"></a>
<a id="trace-4762"></a>
<a id="trace-4764"></a>
<a id="trace-4771"></a>
<a id="trace-4773"></a>
<a id="trace-4788"></a>
<a id="trace-4790"></a>
<a id="trace-4803"></a>
<a id="trace-4805"></a>
<a id="trace-4824"></a>
<a id="trace-4826"></a>
<a id="trace-4833"></a>
<a id="trace-4835"></a>
<a id="trace-4850"></a>
<a id="trace-4852"></a>
<a id="trace-4864"></a>
<a id="trace-4866"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
<a id="trace-4964"></a>
<a id="trace-4966"></a>
<a id="trace-4982"></a>
<a id="trace-4984"></a>
<a id="trace-4998"></a>
<a id="trace-5000"></a>
<a id="trace-5028"></a>
<a id="trace-5030"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
<a id="trace-5063"></a>
<a id="trace-5065"></a>
<a id="trace-5074"></a>
<a id="trace-5076"></a>
<a id="trace-5094"></a>
<a id="trace-5096"></a>
<a id="trace-5106"></a>
<a id="trace-5108"></a>
<a id="trace-5181"></a>
<a id="trace-5183"></a>
<a id="trace-5191"></a>
<a id="trace-5193"></a>
- 26.25s–40.75s (×60), actor 5, squad 0 (trace 4511): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4385. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06381246117775509, 'next_transition': 4537}.
<a id="trace-4520"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 4520): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4388. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0920348056443864, 'next_transition': 4523}.
<a id="trace-4523"></a>
- 26.40s–26.40s (×1), actor 8, squad 1 (trace 4523): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 4388. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.306177726409467, 'next_transition': 484}.
<a id="trace-484"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 484): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4753"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4753): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.674924 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4753. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5875955596593232, 'next_transition': 4798}.
<a id="trace-4754"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4754): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.674924 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4754. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5875955596593232, 'next_transition': 4798}.
<a id="trace-4798"></a>
- 32.50s–32.50s (×1), actor 8, squad 1 (trace 4798): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 4667. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.459058720455858, 'next_transition': 4860}.
<a id="trace-4860"></a>
- 34.60s–34.60s (×1), actor 8, squad 1 (trace 4860): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 30.00s, trace 4667. Next observer evidence: {'until': 35, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536004398697164, 'next_transition': 4938}.
<a id="trace-4938"></a>
- 35.15s–35.15s (×1), actor 8, squad 1 (trace 4938): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 4880. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34019827233541344, 'next_transition': 564}.
<a id="trace-564"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 564): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5013"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 5013): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 5013. Next observer evidence: {'until': 50.6, 'shots': 5, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 5613}.
<a id="trace-5014"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 5014): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 5014. Next observer evidence: {'until': 50.6, 'shots': 5, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 5613}.
<a id="trace-5202"></a>
- 41.05s–41.05s (×1), actor 1, squad 0 (trace 5202): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 5113. Next observer evidence: {'until': 41.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.09000738745191059, 'next_transition': 5214}.
<a id="trace-5214"></a>
<a id="trace-5216"></a>
<a id="trace-5224"></a>
<a id="trace-5226"></a>
<a id="trace-5241"></a>
<a id="trace-5243"></a>
<a id="trace-5251"></a>
<a id="trace-5253"></a>
<a id="trace-5270"></a>
<a id="trace-5272"></a>
<a id="trace-5280"></a>
<a id="trace-5282"></a>
<a id="trace-5296"></a>
<a id="trace-5298"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5384"></a>
<a id="trace-5386"></a>
<a id="trace-5394"></a>
<a id="trace-5396"></a>
<a id="trace-5411"></a>
<a id="trace-5413"></a>
<a id="trace-5423"></a>
<a id="trace-5425"></a>
<a id="trace-5441"></a>
<a id="trace-5443"></a>
<a id="trace-5454"></a>
<a id="trace-5456"></a>
<a id="trace-5476"></a>
<a id="trace-5478"></a>
<a id="trace-5488"></a>
<a id="trace-5490"></a>
<a id="trace-5504"></a>
<a id="trace-5506"></a>
<a id="trace-5515"></a>
<a id="trace-5517"></a>
<a id="trace-5592"></a>
<a id="trace-5594"></a>
<a id="trace-5603"></a>
<a id="trace-5605"></a>
<a id="trace-5622"></a>
<a id="trace-5624"></a>
<a id="trace-5635"></a>
<a id="trace-5637"></a>
<a id="trace-5652"></a>
<a id="trace-5654"></a>
<a id="trace-5665"></a>
<a id="trace-5667"></a>
<a id="trace-5689"></a>
<a id="trace-5691"></a>
<a id="trace-5702"></a>
<a id="trace-5704"></a>
<a id="trace-5718"></a>
<a id="trace-5720"></a>
<a id="trace-5730"></a>
<a id="trace-5732"></a>
<a id="trace-5808"></a>
<a id="trace-5810"></a>
<a id="trace-5816"></a>
<a id="trace-5818"></a>
<a id="trace-5832"></a>
<a id="trace-5834"></a>
<a id="trace-5844"></a>
<a id="trace-5846"></a>
<a id="trace-5858"></a>
<a id="trace-5860"></a>
<a id="trace-5873"></a>
<a id="trace-5875"></a>
<a id="trace-5892"></a>
<a id="trace-5894"></a>
<a id="trace-5900"></a>
<a id="trace-5902"></a>
<a id="trace-5915"></a>
<a id="trace-5917"></a>
<a id="trace-5937"></a>
<a id="trace-5939"></a>
<a id="trace-6029"></a>
<a id="trace-6031"></a>
<a id="trace-6038"></a>
<a id="trace-6040"></a>
<a id="trace-6061"></a>
<a id="trace-6063"></a>
<a id="trace-6070"></a>
<a id="trace-6072"></a>
<a id="trace-6086"></a>
<a id="trace-6088"></a>
<a id="trace-6099"></a>
<a id="trace-6101"></a>
<a id="trace-6115"></a>
<a id="trace-6117"></a>
<a id="trace-6125"></a>
<a id="trace-6127"></a>
<a id="trace-6139"></a>
<a id="trace-6141"></a>
<a id="trace-6152"></a>
<a id="trace-6154"></a>
<a id="trace-6229"></a>
<a id="trace-6231"></a>
<a id="trace-6239"></a>
<a id="trace-6241"></a>
<a id="trace-6260"></a>
<a id="trace-6262"></a>
<a id="trace-6279"></a>
<a id="trace-6281"></a>
<a id="trace-6298"></a>
<a id="trace-6300"></a>
<a id="trace-6313"></a>
<a id="trace-6315"></a>
<a id="trace-6329"></a>
<a id="trace-6331"></a>
<a id="trace-6337"></a>
<a id="trace-6339"></a>
<a id="trace-6351"></a>
<a id="trace-6353"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
<a id="trace-6443"></a>
<a id="trace-6445"></a>
<a id="trace-6451"></a>
<a id="trace-6453"></a>
<a id="trace-6467"></a>
<a id="trace-6469"></a>
<a id="trace-6482"></a>
<a id="trace-6484"></a>
<a id="trace-6500"></a>
<a id="trace-6502"></a>
<a id="trace-6520"></a>
<a id="trace-6522"></a>
<a id="trace-6542"></a>
<a id="trace-6544"></a>
<a id="trace-6558"></a>
<a id="trace-6560"></a>
<a id="trace-6576"></a>
<a id="trace-6578"></a>
<a id="trace-6591"></a>
<a id="trace-6593"></a>
<a id="trace-6667"></a>
<a id="trace-6669"></a>
<a id="trace-6678"></a>
<a id="trace-6680"></a>
<a id="trace-6692"></a>
<a id="trace-6694"></a>
<a id="trace-6702"></a>
<a id="trace-6704"></a>
<a id="trace-6716"></a>
<a id="trace-6718"></a>
<a id="trace-6729"></a>
<a id="trace-6731"></a>
<a id="trace-6748"></a>
<a id="trace-6750"></a>
<a id="trace-6762"></a>
<a id="trace-6764"></a>
- 41.25s–78.75s (×152), actor 5, squad 0 (trace 5214): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5117. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.179990287719836, 'next_transition': 5224}.
<a id="trace-5613"></a>
- 50.80s–50.80s (×1), actor 9, squad 1 (trace 5613): MoveTactically. Knowledge: actor memory at 50.00s, trace 5531. Next observer evidence: {'until': 80.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9363}.
<a id="trace-5614"></a>
- 50.80s–50.80s (×1), actor 9, squad 1 (trace 5614): current contact unknown for 10 s. Knowledge: actor memory at 50.00s, trace 5531. Next observer evidence: {'until': 80.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9363}.
<a id="trace-979"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (events line 979): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6771"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (trace 6771): renew committed intent (75 s lifetime). Knowledge: actor memory at 78.95s, trace 6771. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6793}.
<a id="trace-6793"></a>
<a id="trace-6795"></a>
<a id="trace-6876"></a>
<a id="trace-6878"></a>
<a id="trace-6890"></a>
<a id="trace-6892"></a>
- 79.75s–80.75s (×6), actor 5, squad 0 (trace 6793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 78.95s, trace 6771. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6876}.
<a id="trace-6899"></a>
- 80.85s–80.85s (×1), actor 1, squad 0 (trace 6899): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6921}.
<a id="trace-6921"></a>
<a id="trace-6923"></a>
<a id="trace-6936"></a>
<a id="trace-6938"></a>
<a id="trace-6973"></a>
<a id="trace-6975"></a>
<a id="trace-6986"></a>
<a id="trace-6988"></a>
<a id="trace-7002"></a>
<a id="trace-7004"></a>
<a id="trace-7024"></a>
<a id="trace-7026"></a>
<a id="trace-7041"></a>
<a id="trace-7043"></a>
<a id="trace-7053"></a>
<a id="trace-7055"></a>
- 81.25s–84.75s (×16), actor 5, squad 0 (trace 6921): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 6813. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6936}.
<a id="trace-7064"></a>
- 84.95s–84.95s (×1), actor 1, squad 0 (trace 7064): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9354}.
<a id="trace-7066"></a>
- 84.95s–84.95s (×1), actor 1, squad 0 (trace 7066): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9354}.
<a id="trace-9125"></a>
- 84.95s–84.95s (×1), actor 1, squad 0 (trace 9125): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9354}.
<a id="trace-9126"></a>
- 84.95s–84.95s (×1), actor 1, squad 0 (trace 9126): MoveTactically. Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9354}.
<a id="trace-9127"></a>
- 84.95s–84.95s (×1), actor 1, squad 0 (trace 9127): contact cover complete: assessment resumes closure. Knowledge: actor memory at 80.00s, trace 6809. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9354}.
<a id="trace-9354"></a>
<a id="trace-9356"></a>
<a id="trace-9409"></a>
<a id="trace-9411"></a>
<a id="trace-9427"></a>
<a id="trace-9429"></a>
<a id="trace-9449"></a>
<a id="trace-9451"></a>
<a id="trace-9476"></a>
<a id="trace-9478"></a>
<a id="trace-9510"></a>
<a id="trace-9512"></a>
<a id="trace-9530"></a>
<a id="trace-9532"></a>
<a id="trace-9552"></a>
<a id="trace-9554"></a>
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9641"></a>
<a id="trace-9643"></a>
<a id="trace-9659"></a>
<a id="trace-9661"></a>
<a id="trace-9679"></a>
<a id="trace-9681"></a>
<a id="trace-9695"></a>
<a id="trace-9697"></a>
<a id="trace-9715"></a>
<a id="trace-9717"></a>
<a id="trace-9735"></a>
<a id="trace-9737"></a>
<a id="trace-9762"></a>
<a id="trace-9764"></a>
<a id="trace-9776"></a>
<a id="trace-9778"></a>
<a id="trace-9795"></a>
<a id="trace-9797"></a>
<a id="trace-9814"></a>
<a id="trace-9816"></a>
<a id="trace-9899"></a>
<a id="trace-9901"></a>
<a id="trace-9912"></a>
<a id="trace-9914"></a>
<a id="trace-9934"></a>
<a id="trace-9936"></a>
<a id="trace-9948"></a>
<a id="trace-9950"></a>
<a id="trace-9965"></a>
<a id="trace-9967"></a>
<a id="trace-9979"></a>
<a id="trace-9981"></a>
- 85.25s–97.75s (×50), actor 5, squad 0 (trace 9354): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9291. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27088603061160077, 'next_transition': 9409}.
<a id="trace-9363"></a>
- 85.35s–85.35s (×1), actor 9, squad 1 (trace 9363): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 9294. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9522}.
<a id="trace-9364"></a>
- 85.35s–85.35s (×1), actor 9, squad 1 (trace 9364): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 9294. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9522}.
<a id="trace-9522"></a>
- 88.65s–88.65s (×1), actor 9, squad 1 (trace 9522): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 9294. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1294}.
<a id="trace-9524"></a>
- 88.65s–88.65s (×1), actor 9, squad 1 (trace 9524): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 9294. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1294}.
<a id="trace-9986"></a>
- 97.80s–97.80s (×1), actor 1, squad 0 (trace 9986): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 9831. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23892018477700344, 'next_transition': 10243}.
<a id="trace-1294"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (events line 1294): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10233"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (trace 10233): renew committed intent (75 s lifetime). Knowledge: actor memory at 98.15s, trace 10233. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10294}.
<a id="trace-10243"></a>
<a id="trace-10245"></a>
<a id="trace-10260"></a>
<a id="trace-10262"></a>
<a id="trace-10287"></a>
<a id="trace-10289"></a>
<a id="trace-10312"></a>
<a id="trace-10314"></a>
<a id="trace-10391"></a>
<a id="trace-10393"></a>
<a id="trace-10412"></a>
<a id="trace-10414"></a>
<a id="trace-10434"></a>
<a id="trace-10436"></a>
<a id="trace-10451"></a>
<a id="trace-10453"></a>
<a id="trace-10468"></a>
<a id="trace-10470"></a>
<a id="trace-10483"></a>
<a id="trace-10485"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10515"></a>
<a id="trace-10517"></a>
<a id="trace-10538"></a>
<a id="trace-10540"></a>
<a id="trace-10554"></a>
<a id="trace-10556"></a>
<a id="trace-10633"></a>
<a id="trace-10635"></a>
<a id="trace-10648"></a>
<a id="trace-10650"></a>
<a id="trace-10669"></a>
<a id="trace-10671"></a>
- 98.25s–106.25s (×34), actor 5, squad 0 (trace 10243): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 98.15s, trace 10233. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10260}.
<a id="trace-10294"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 10294): MoveTactically. Knowledge: actor memory at 95.00s, trace 9838. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10299}.
<a id="trace-10295"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 10295): received platoon directive. Knowledge: actor memory at 95.00s, trace 9838. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10299}.
<a id="trace-10299"></a>
- 99.40s–99.40s (×1), actor 9, squad 1 (trace 10299): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 9838. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15310}.
<a id="trace-10681"></a>
- 106.40s–106.40s (×1), actor 1, squad 0 (trace 10681): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 10566. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1014237515351465, 'next_transition': 10929}.
<a id="trace-10682"></a>
- 106.40s–106.40s (×1), actor 1, squad 0 (trace 10682): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 10566. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1014237515351465, 'next_transition': 10929}.
<a id="trace-10929"></a>
<a id="trace-10931"></a>
<a id="trace-10953"></a>
<a id="trace-10955"></a>
<a id="trace-10980"></a>
<a id="trace-10982"></a>
- 106.75s–107.75s (×6), actor 5, squad 0 (trace 10929): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10570. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25963997498525787, 'next_transition': 10953}.
<a id="trace-10997"></a>
- 108.15s–108.15s (×1), actor 1, squad 0 (trace 10997): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 10566. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07020848011357934, 'next_transition': 11247}.
<a id="trace-11247"></a>
<a id="trace-11249"></a>
<a id="trace-11267"></a>
<a id="trace-11269"></a>
- 108.25s–108.75s (×4), actor 5, squad 0 (trace 11247): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10570. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13120193114991496, 'next_transition': 11267}.
<a id="trace-11284"></a>
- 108.90s–108.90s (×1), actor 1, squad 0 (trace 11284): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 10566. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13521314239181678, 'next_transition': 11537}.
<a id="trace-11537"></a>
<a id="trace-11539"></a>
<a id="trace-11563"></a>
<a id="trace-11565"></a>
<a id="trace-11665"></a>
<a id="trace-11667"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11748"></a>
<a id="trace-11750"></a>
<a id="trace-11776"></a>
<a id="trace-11778"></a>
<a id="trace-11799"></a>
<a id="trace-11801"></a>
- 109.25s–112.25s (×14), actor 5, squad 0 (trace 11537): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10570. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07248249619806162, 'next_transition': 11563}.
<a id="trace-11815"></a>
- 112.60s–112.60s (×1), actor 1, squad 0 (trace 11815): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 11575. Next observer evidence: None.
<a id="trace-12073"></a>
<a id="trace-12075"></a>
<a id="trace-12109"></a>
<a id="trace-12111"></a>
<a id="trace-12146"></a>
<a id="trace-12148"></a>
<a id="trace-12180"></a>
<a id="trace-12182"></a>
<a id="trace-12200"></a>
<a id="trace-12202"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12304"></a>
<a id="trace-12306"></a>
<a id="trace-12327"></a>
<a id="trace-12329"></a>
- 112.75s–116.25s (×16), actor 5, squad 0 (trace 12073): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11579. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15429043041072424, 'next_transition': 12109}.
<a id="trace-12334"></a>
- 116.40s–116.40s (×1), actor 1, squad 0 (trace 12334): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40258826198437675, 'next_transition': 12353}.
<a id="trace-12353"></a>
<a id="trace-12355"></a>
<a id="trace-12369"></a>
<a id="trace-12371"></a>
<a id="trace-12385"></a>
<a id="trace-12387"></a>
- 117.25s–118.25s (×6), actor 5, squad 0 (trace 12353): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12217. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1874011595981742, 'next_transition': 12369}.
<a id="trace-12392"></a>
- 118.25s–118.25s (×1), actor 1, squad 0 (trace 12392): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09692660909688536, 'next_transition': 14723}.
<a id="trace-14447"></a>
- 118.25s–118.25s (×1), actor 1, squad 0 (trace 14447): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09692660909688536, 'next_transition': 14723}.
<a id="trace-14448"></a>
- 118.25s–118.25s (×1), actor 1, squad 0 (trace 14448): MoveTactically. Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09692660909688536, 'next_transition': 14723}.
<a id="trace-14449"></a>
- 118.25s–118.25s (×1), actor 1, squad 0 (trace 14449): contact cover complete: assessment resumes closure. Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09692660909688536, 'next_transition': 14723}.
<a id="trace-14713"></a>
- 118.25s–118.25s (×1), actor 1, squad 0 (trace 14713): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 115.00s, trace 12213. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09692660909688536, 'next_transition': 14723}.
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
<a id="trace-14799"></a>
<a id="trace-14801"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14928"></a>
<a id="trace-14930"></a>
<a id="trace-14946"></a>
<a id="trace-14948"></a>
<a id="trace-14954"></a>
<a id="trace-14956"></a>
<a id="trace-14967"></a>
<a id="trace-14969"></a>
<a id="trace-14987"></a>
<a id="trace-14989"></a>
<a id="trace-15005"></a>
<a id="trace-15007"></a>
<a id="trace-15019"></a>
<a id="trace-15021"></a>
- 118.75s–123.75s (×22), actor 5, squad 0 (trace 14723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12217. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13851394633178601, 'next_transition': 14754}.
<a id="trace-15039"></a>
- 124.05s–124.05s (×1), actor 2, squad 0 (trace 15039): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 120.00s, trace 14817. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15060}.
<a id="trace-15041"></a>
- 124.05s–124.05s (×1), actor 2, squad 0 (trace 15041): NeedSupport. Knowledge: actor memory at 120.00s, trace 14817. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15060}.
<a id="trace-15060"></a>
<a id="trace-15062"></a>
- 124.25s–124.25s (×2), actor 5, squad 0 (trace 15060): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14820. Next observer evidence: {'until': 124.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15068}.
<a id="trace-15068"></a>
- 124.45s–124.45s (×1), actor 2, squad 0 (trace 15068): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 14817. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15221}.
<a id="trace-15073"></a>
- 124.45s–124.45s (×1), actor 2, squad 0 (trace 15073): MoveTactically. Knowledge: actor memory at 120.00s, trace 14817. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15221}.
<a id="trace-15074"></a>
- 124.45s–124.45s (×1), actor 2, squad 0 (trace 15074): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 120.00s, trace 14817. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15221}.
<a id="trace-15221"></a>
<a id="trace-15223"></a>
<a id="trace-15303"></a>
<a id="trace-15305"></a>
<a id="trace-15327"></a>
<a id="trace-15329"></a>
- 124.75s–125.75s (×6), actor 5, squad 0 (trace 15221): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14820. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300130043102288, 'next_transition': 15303}.
<a id="trace-15310"></a>
- 125.25s–125.25s (×1), actor 9, squad 1 (trace 15310): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: None.
<a id="trace-15311"></a>
- 125.25s–125.25s (×1), actor 9, squad 1 (trace 15311): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: None.
<a id="trace-15313"></a>
- 125.30s–125.30s (×1), actor 9, squad 1 (trace 15313): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: {'until': 129, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15440}.
<a id="trace-15334"></a>
- 126.05s–126.05s (×1), actor 5, squad 0 (trace 15334): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 126.05s, trace 15334. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520167010338802, 'next_transition': 15345}.
<a id="trace-15345"></a>
<a id="trace-15347"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15377"></a>
<a id="trace-15379"></a>
<a id="trace-15389"></a>
<a id="trace-15391"></a>
- 126.25s–127.75s (×8), actor 5, squad 0 (trace 15345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 126.05s, trace 15334. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39187025812123066, 'next_transition': 15359}.
<a id="trace-15399"></a>
- 127.95s–127.95s (×1), actor 2, squad 0 (trace 15399): NeedSupport. Knowledge: actor memory at 125.00s, trace 15233. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15416}.
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15430"></a>
<a id="trace-15432"></a>
<a id="trace-15451"></a>
<a id="trace-15453"></a>
<a id="trace-15466"></a>
<a id="trace-15468"></a>
<a id="trace-15543"></a>
<a id="trace-15545"></a>
<a id="trace-15556"></a>
<a id="trace-15558"></a>
<a id="trace-15568"></a>
<a id="trace-15570"></a>
<a id="trace-15576"></a>
<a id="trace-15578"></a>
- 128.30s–131.80s (×16), actor 5, squad 0 (trace 15416): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 126.05s, trace 15334. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15430}.
<a id="trace-15440"></a>
- 129.15s–129.15s (×1), actor 9, squad 1 (trace 15440): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15443}.
<a id="trace-15441"></a>
- 129.15s–129.15s (×1), actor 9, squad 1 (trace 15441): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15443}.
<a id="trace-15443"></a>
- 129.20s–129.20s (×1), actor 9, squad 1 (trace 15443): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 125.00s, trace 15238. Next observer evidence: None.
<a id="trace-1740"></a>
- 129.35s–129.35s (×1), actor 5, squad 1 (events line 1740): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15459"></a>
- 129.35s–129.35s (×1), actor 5, squad 1 (trace 15459): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369593 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 129.35s, trace 15459. Next observer evidence: {'until': 130.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15550}.
<a id="trace-15460"></a>
- 129.35s–129.35s (×1), actor 5, squad 1 (trace 15460): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.369593 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 129.35s, trace 15460. Next observer evidence: {'until': 130.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15550}.
<a id="trace-15550"></a>
- 130.55s–130.55s (×1), actor 9, squad 1 (trace 15550): MoveTactically. Knowledge: actor memory at 130.00s, trace 15478. Next observer evidence: {'until': 160.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1837}.
<a id="trace-15551"></a>
- 130.55s–130.55s (×1), actor 9, squad 1 (trace 15551): received platoon directive. Knowledge: actor memory at 130.00s, trace 15478. Next observer evidence: {'until': 160.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1837}.
<a id="trace-15584"></a>
- 132.20s–132.20s (×1), actor 2, squad 0 (trace 15584): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 130.00s, trace 15473. Next observer evidence: None.
<a id="trace-15668"></a>
<a id="trace-15670"></a>
<a id="trace-15682"></a>
<a id="trace-15684"></a>
- 132.30s–132.80s (×4), actor 5, squad 0 (trace 15668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 15476. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15682}.
<a id="trace-15694"></a>
- 133.20s–133.20s (×1), actor 2, squad 0 (trace 15694): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 15473. Next observer evidence: None.
<a id="trace-15700"></a>
<a id="trace-15702"></a>
<a id="trace-15720"></a>
<a id="trace-15722"></a>
<a id="trace-15736"></a>
<a id="trace-15738"></a>
<a id="trace-15750"></a>
<a id="trace-15752"></a>
<a id="trace-15819"></a>
<a id="trace-15821"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15838"></a>
<a id="trace-15840"></a>
<a id="trace-15846"></a>
<a id="trace-15848"></a>
<a id="trace-15860"></a>
<a id="trace-15862"></a>
<a id="trace-15872"></a>
<a id="trace-15874"></a>
<a id="trace-15884"></a>
<a id="trace-15886"></a>
<a id="trace-15896"></a>
<a id="trace-15898"></a>
<a id="trace-15914"></a>
<a id="trace-15916"></a>
<a id="trace-15924"></a>
<a id="trace-15926"></a>
- 133.30s–139.80s (×28), actor 5, squad 0 (trace 15700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 15476. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15720}.
<a id="trace-1757"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (events line 1757): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15944"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (trace 15944): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.15s, trace 15944. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15995}.
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16014"></a>
<a id="trace-16016"></a>
<a id="trace-16022"></a>
<a id="trace-16024"></a>
<a id="trace-16036"></a>
<a id="trace-16038"></a>
<a id="trace-16048"></a>
<a id="trace-16050"></a>
<a id="trace-16062"></a>
<a id="trace-16064"></a>
<a id="trace-16074"></a>
<a id="trace-16076"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16097"></a>
<a id="trace-16099"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16200"></a>
<a id="trace-16202"></a>
<a id="trace-16215"></a>
<a id="trace-16217"></a>
<a id="trace-16230"></a>
<a id="trace-16232"></a>
<a id="trace-16239"></a>
<a id="trace-16241"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16262"></a>
<a id="trace-16264"></a>
<a id="trace-16274"></a>
<a id="trace-16276"></a>
<a id="trace-16284"></a>
<a id="trace-16286"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16364"></a>
<a id="trace-16366"></a>
<a id="trace-16378"></a>
<a id="trace-16380"></a>
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16405"></a>
<a id="trace-16407"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16472"></a>
<a id="trace-16474"></a>
<a id="trace-16482"></a>
<a id="trace-16484"></a>
<a id="trace-16553"></a>
<a id="trace-16555"></a>
<a id="trace-16560"></a>
<a id="trace-16562"></a>
<a id="trace-16570"></a>
<a id="trace-16572"></a>
<a id="trace-16576"></a>
<a id="trace-16578"></a>
<a id="trace-16587"></a>
<a id="trace-16589"></a>
<a id="trace-16600"></a>
<a id="trace-16602"></a>
<a id="trace-16615"></a>
<a id="trace-16617"></a>
<a id="trace-16631"></a>
<a id="trace-16633"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16663"></a>
<a id="trace-16665"></a>
<a id="trace-16741"></a>
<a id="trace-16743"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16764"></a>
<a id="trace-16766"></a>
<a id="trace-16774"></a>
<a id="trace-16776"></a>
<a id="trace-16787"></a>
<a id="trace-16789"></a>
<a id="trace-16798"></a>
<a id="trace-16800"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-16837"></a>
<a id="trace-16839"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16922"></a>
<a id="trace-16924"></a>
<a id="trace-16937"></a>
<a id="trace-16939"></a>
<a id="trace-16951"></a>
<a id="trace-16953"></a>
<a id="trace-16961"></a>
<a id="trace-16963"></a>
<a id="trace-16978"></a>
<a id="trace-16980"></a>
<a id="trace-16994"></a>
<a id="trace-16996"></a>
<a id="trace-17007"></a>
<a id="trace-17009"></a>
<a id="trace-17019"></a>
<a id="trace-17021"></a>
<a id="trace-17031"></a>
<a id="trace-17033"></a>
<a id="trace-17039"></a>
<a id="trace-17041"></a>
<a id="trace-17108"></a>
<a id="trace-17110"></a>
<a id="trace-17118"></a>
<a id="trace-17120"></a>
- 140.30s–170.80s (×124), actor 5, squad 0 (trace 15995): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.15s, trace 15944. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16004}.
<a id="trace-1836"></a>
- 171.05s–171.05s (×1), actor 5, squad 0 (events line 1836): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}.
<a id="trace-1837"></a>
- 171.05s–171.05s (×1), actor 5, squad 1 (events line 1837): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}.
<a id="trace-17125"></a>
- 171.05s–171.05s (×1), actor 5, squad 0 (trace 17125): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.05s, trace 17125. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}.
<a id="trace-17126"></a>
- 171.05s–171.05s (×1), actor 5, squad 0 (trace 17126): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.05s, trace 17126. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}.
<a id="trace-17127"></a>
- 171.05s–171.05s (×1), actor 5, squad 1 (trace 17127): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.05s, trace 17127. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}.
<a id="trace-17128"></a>
- 171.05s–171.05s (×1), actor 5, squad 1 (trace 17128): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.05s, trace 17128. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}.
<a id="trace-17137"></a>
<a id="trace-17139"></a>
<a id="trace-17148"></a>
<a id="trace-17150"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
<a id="trace-17234"></a>
<a id="trace-17236"></a>
- 171.30s–172.80s (×8), actor 5, squad 0 (trace 17137): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.05s, trace 17128. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17148}.
<a id="trace-17156"></a>
- 172.25s–172.25s (×1), actor 9, squad 1 (trace 17156): Withdraw to received rally. Knowledge: actor memory at 170.00s, trace 17049. Next observer evidence: {'until': 183.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 17776}.
<a id="trace-17157"></a>
- 172.25s–172.25s (×1), actor 9, squad 1 (trace 17157): rearward bound: one stationary suppressing element. Knowledge: actor memory at 170.00s, trace 17049. Next observer evidence: {'until': 183.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 17776}.
<a id="trace-17244"></a>
- 172.95s–172.95s (×1), actor 2, squad 0 (trace 17244): Withdraw to received rally. Knowledge: actor memory at 170.00s, trace 17044. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17327}.
<a id="trace-17245"></a>
- 172.95s–172.95s (×1), actor 2, squad 0 (trace 17245): rearward bound: one stationary suppressing element. Knowledge: actor memory at 170.00s, trace 17044. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17327}.
<a id="trace-17327"></a>
<a id="trace-17329"></a>
<a id="trace-17349"></a>
<a id="trace-17351"></a>
<a id="trace-17375"></a>
<a id="trace-17377"></a>
<a id="trace-17394"></a>
<a id="trace-17396"></a>
<a id="trace-17468"></a>
<a id="trace-17470"></a>
<a id="trace-17484"></a>
<a id="trace-17486"></a>
<a id="trace-17500"></a>
<a id="trace-17502"></a>
<a id="trace-17517"></a>
<a id="trace-17519"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17546"></a>
<a id="trace-17548"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17576"></a>
<a id="trace-17578"></a>
<a id="trace-17598"></a>
<a id="trace-17600"></a>
<a id="trace-17613"></a>
<a id="trace-17615"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17697"></a>
<a id="trace-17699"></a>
<a id="trace-17716"></a>
<a id="trace-17718"></a>
<a id="trace-17730"></a>
<a id="trace-17732"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
<a id="trace-17768"></a>
<a id="trace-17770"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17804"></a>
<a id="trace-17806"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17890"></a>
<a id="trace-17892"></a>
<a id="trace-17901"></a>
<a id="trace-17903"></a>
<a id="trace-17916"></a>
<a id="trace-17918"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17941"></a>
<a id="trace-17943"></a>
<a id="trace-17952"></a>
<a id="trace-17954"></a>
<a id="trace-17968"></a>
<a id="trace-17970"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-18001"></a>
<a id="trace-18003"></a>
<a id="trace-18010"></a>
<a id="trace-18012"></a>
<a id="trace-18081"></a>
<a id="trace-18083"></a>
<a id="trace-18089"></a>
<a id="trace-18091"></a>
<a id="trace-18102"></a>
<a id="trace-18104"></a>
<a id="trace-18114"></a>
<a id="trace-18116"></a>
<a id="trace-18132"></a>
<a id="trace-18134"></a>
<a id="trace-18146"></a>
<a id="trace-18148"></a>
<a id="trace-18158"></a>
<a id="trace-18160"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18187"></a>
<a id="trace-18189"></a>
<a id="trace-18196"></a>
<a id="trace-18198"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18285"></a>
<a id="trace-18287"></a>
<a id="trace-18295"></a>
<a id="trace-18297"></a>
<a id="trace-18305"></a>
<a id="trace-18307"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18332"></a>
<a id="trace-18334"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18376"></a>
<a id="trace-18378"></a>
<a id="trace-18385"></a>
<a id="trace-18387"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-18465"></a>
<a id="trace-18467"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18490"></a>
<a id="trace-18492"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18565"></a>
<a id="trace-18567"></a>
<a id="trace-18576"></a>
<a id="trace-18578"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18680"></a>
<a id="trace-18682"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18724"></a>
<a id="trace-18726"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18832"></a>
<a id="trace-18834"></a>
<a id="trace-18840"></a>
<a id="trace-18842"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18865"></a>
<a id="trace-18867"></a>
<a id="trace-18883"></a>
<a id="trace-18885"></a>
<a id="trace-18896"></a>
<a id="trace-18898"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18915"></a>
<a id="trace-18917"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19038"></a>
<a id="trace-19040"></a>
<a id="trace-19056"></a>
<a id="trace-19058"></a>
<a id="trace-19069"></a>
<a id="trace-19071"></a>
<a id="trace-19081"></a>
<a id="trace-19083"></a>
<a id="trace-19095"></a>
<a id="trace-19097"></a>
<a id="trace-19109"></a>
<a id="trace-19111"></a>
<a id="trace-19128"></a>
<a id="trace-19130"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19209"></a>
<a id="trace-19211"></a>
<a id="trace-19217"></a>
<a id="trace-19219"></a>
<a id="trace-19228"></a>
<a id="trace-19230"></a>
<a id="trace-19240"></a>
<a id="trace-19242"></a>
<a id="trace-19251"></a>
<a id="trace-19253"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19282"></a>
<a id="trace-19284"></a>
<a id="trace-19295"></a>
<a id="trace-19297"></a>
<a id="trace-19313"></a>
<a id="trace-19315"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19401"></a>
<a id="trace-19403"></a>
<a id="trace-19411"></a>
<a id="trace-19413"></a>
<a id="trace-19423"></a>
<a id="trace-19425"></a>
<a id="trace-19433"></a>
<a id="trace-19435"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19457"></a>
<a id="trace-19459"></a>
<a id="trace-19470"></a>
<a id="trace-19472"></a>
<a id="trace-19481"></a>
<a id="trace-19483"></a>
<a id="trace-19496"></a>
<a id="trace-19498"></a>
<a id="trace-19506"></a>
<a id="trace-19508"></a>
<a id="trace-19581"></a>
<a id="trace-19583"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19612"></a>
<a id="trace-19614"></a>
- 173.30s–231.30s (×232), actor 5, squad 0 (trace 17327): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.05s, trace 17128. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17349}.
<a id="trace-17776"></a>
- 183.50s–183.50s (×1), actor 9, squad 1 (trace 17776): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 17625. Next observer evidence: {'until': 213.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2033}.
<a id="trace-17777"></a>
- 183.50s–183.50s (×1), actor 9, squad 1 (trace 17777): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 17625. Next observer evidence: {'until': 213.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2033}.
<a id="trace-2032"></a>
- 231.50s–231.50s (×1), actor 5, squad 0 (events line 2032): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19629}.
<a id="trace-2033"></a>
- 231.50s–231.50s (×1), actor 5, squad 1 (events line 2033): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2207}.
<a id="trace-19617"></a>
- 231.50s–231.50s (×1), actor 5, squad 0 (trace 19617): renew committed intent (75 s lifetime). Knowledge: actor memory at 231.50s, trace 19617. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19629}.
<a id="trace-19618"></a>
- 231.50s–231.50s (×1), actor 5, squad 1 (trace 19618): renew committed intent (75 s lifetime). Knowledge: actor memory at 231.50s, trace 19618. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2207}.
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19644"></a>
<a id="trace-19646"></a>
<a id="trace-19655"></a>
<a id="trace-19657"></a>
<a id="trace-19667"></a>
<a id="trace-19669"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19702"></a>
<a id="trace-19704"></a>
<a id="trace-19773"></a>
<a id="trace-19775"></a>
<a id="trace-19781"></a>
<a id="trace-19783"></a>
<a id="trace-19795"></a>
<a id="trace-19797"></a>
<a id="trace-19805"></a>
<a id="trace-19807"></a>
<a id="trace-19821"></a>
<a id="trace-19823"></a>
<a id="trace-19840"></a>
<a id="trace-19842"></a>
<a id="trace-19857"></a>
<a id="trace-19859"></a>
<a id="trace-19866"></a>
<a id="trace-19868"></a>
<a id="trace-19883"></a>
<a id="trace-19885"></a>
<a id="trace-19890"></a>
<a id="trace-19892"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-19966"></a>
<a id="trace-19968"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-19988"></a>
<a id="trace-19990"></a>
<a id="trace-20002"></a>
<a id="trace-20004"></a>
<a id="trace-20015"></a>
<a id="trace-20017"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20037"></a>
<a id="trace-20039"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20075"></a>
<a id="trace-20077"></a>
<a id="trace-20151"></a>
<a id="trace-20153"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20173"></a>
<a id="trace-20175"></a>
<a id="trace-20184"></a>
<a id="trace-20186"></a>
<a id="trace-20195"></a>
<a id="trace-20197"></a>
<a id="trace-20204"></a>
<a id="trace-20206"></a>
<a id="trace-20216"></a>
<a id="trace-20218"></a>
<a id="trace-20225"></a>
<a id="trace-20227"></a>
<a id="trace-20241"></a>
<a id="trace-20243"></a>
<a id="trace-20252"></a>
<a id="trace-20254"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20349"></a>
<a id="trace-20351"></a>
<a id="trace-20370"></a>
<a id="trace-20372"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20396"></a>
<a id="trace-20398"></a>
<a id="trace-20408"></a>
<a id="trace-20410"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20441"></a>
<a id="trace-20443"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20520"></a>
<a id="trace-20522"></a>
<a id="trace-20532"></a>
<a id="trace-20534"></a>
<a id="trace-20546"></a>
<a id="trace-20548"></a>
<a id="trace-20562"></a>
<a id="trace-20564"></a>
<a id="trace-20577"></a>
<a id="trace-20579"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20617"></a>
<a id="trace-20619"></a>
<a id="trace-20632"></a>
<a id="trace-20634"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20712"></a>
<a id="trace-20714"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20730"></a>
<a id="trace-20732"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20751"></a>
<a id="trace-20753"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20778"></a>
<a id="trace-20780"></a>
<a id="trace-20790"></a>
<a id="trace-20792"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-20916"></a>
<a id="trace-20918"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20951"></a>
<a id="trace-20953"></a>
<a id="trace-20963"></a>
<a id="trace-20965"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-20984"></a>
<a id="trace-20986"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21012"></a>
<a id="trace-21014"></a>
<a id="trace-21085"></a>
<a id="trace-21087"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21144"></a>
<a id="trace-21146"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21210"></a>
<a id="trace-21212"></a>
<a id="trace-21281"></a>
<a id="trace-21283"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21303"></a>
<a id="trace-21305"></a>
<a id="trace-21313"></a>
<a id="trace-21315"></a>
<a id="trace-21327"></a>
<a id="trace-21329"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21358"></a>
<a id="trace-21360"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21391"></a>
<a id="trace-21393"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21485"></a>
<a id="trace-21487"></a>
<a id="trace-21495"></a>
<a id="trace-21497"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21529"></a>
<a id="trace-21531"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21574"></a>
<a id="trace-21576"></a>
<a id="trace-21588"></a>
<a id="trace-21590"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21701"></a>
<a id="trace-21703"></a>
<a id="trace-21714"></a>
<a id="trace-21716"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21735"></a>
<a id="trace-21737"></a>
<a id="trace-21745"></a>
<a id="trace-21747"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21775"></a>
<a id="trace-21777"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-21857"></a>
<a id="trace-21859"></a>
<a id="trace-21873"></a>
<a id="trace-21875"></a>
- 231.80s–291.30s (×240), actor 5, squad 0 (trace 19629): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 231.50s, trace 19618. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19644}.
<a id="trace-2206"></a>
- 291.70s–291.70s (×1), actor 5, squad 0 (events line 2206): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2207"></a>
- 291.70s–291.70s (×1), actor 5, squad 1 (events line 2207): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21884"></a>
- 291.70s–291.70s (×1), actor 5, squad 0 (trace 21884): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.70s, trace 21884. Next observer evidence: {'until': 291.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21891}.
<a id="trace-21885"></a>
- 291.70s–291.70s (×1), actor 5, squad 1 (trace 21885): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.70s, trace 21885. Next observer evidence: {'until': 321.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2381}.
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21904"></a>
<a id="trace-21906"></a>
<a id="trace-21914"></a>
<a id="trace-21916"></a>
<a id="trace-21930"></a>
<a id="trace-21932"></a>
<a id="trace-21942"></a>
<a id="trace-21944"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21969"></a>
<a id="trace-21971"></a>
<a id="trace-22040"></a>
<a id="trace-22042"></a>
<a id="trace-22046"></a>
<a id="trace-22048"></a>
<a id="trace-22060"></a>
<a id="trace-22062"></a>
<a id="trace-22071"></a>
<a id="trace-22073"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22100"></a>
<a id="trace-22102"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22122"></a>
<a id="trace-22124"></a>
<a id="trace-22139"></a>
<a id="trace-22141"></a>
<a id="trace-22149"></a>
<a id="trace-22151"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22262"></a>
<a id="trace-22264"></a>
<a id="trace-22275"></a>
<a id="trace-22277"></a>
<a id="trace-22288"></a>
<a id="trace-22290"></a>
<a id="trace-22301"></a>
<a id="trace-22303"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22334"></a>
<a id="trace-22336"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22418"></a>
<a id="trace-22420"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22442"></a>
<a id="trace-22444"></a>
<a id="trace-22453"></a>
<a id="trace-22455"></a>
<a id="trace-22471"></a>
<a id="trace-22473"></a>
<a id="trace-22484"></a>
<a id="trace-22486"></a>
<a id="trace-22496"></a>
<a id="trace-22498"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22524"></a>
<a id="trace-22526"></a>
<a id="trace-22533"></a>
<a id="trace-22535"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22614"></a>
<a id="trace-22616"></a>
<a id="trace-22631"></a>
<a id="trace-22633"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22655"></a>
<a id="trace-22657"></a>
<a id="trace-22668"></a>
<a id="trace-22670"></a>
<a id="trace-22680"></a>
<a id="trace-22682"></a>
<a id="trace-22690"></a>
<a id="trace-22692"></a>
<a id="trace-22711"></a>
<a id="trace-22713"></a>
<a id="trace-22723"></a>
<a id="trace-22725"></a>
<a id="trace-22796"></a>
<a id="trace-22798"></a>
<a id="trace-22805"></a>
<a id="trace-22807"></a>
<a id="trace-22817"></a>
<a id="trace-22819"></a>
<a id="trace-22828"></a>
<a id="trace-22830"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22978"></a>
<a id="trace-22980"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-23001"></a>
<a id="trace-23003"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23030"></a>
<a id="trace-23032"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23056"></a>
<a id="trace-23058"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23098"></a>
<a id="trace-23100"></a>
<a id="trace-23169"></a>
<a id="trace-23171"></a>
<a id="trace-23177"></a>
<a id="trace-23179"></a>
<a id="trace-23190"></a>
<a id="trace-23192"></a>
<a id="trace-23203"></a>
<a id="trace-23205"></a>
<a id="trace-23214"></a>
<a id="trace-23216"></a>
<a id="trace-23228"></a>
<a id="trace-23230"></a>
<a id="trace-23247"></a>
<a id="trace-23249"></a>
<a id="trace-23258"></a>
<a id="trace-23260"></a>
<a id="trace-23275"></a>
<a id="trace-23277"></a>
<a id="trace-23285"></a>
<a id="trace-23287"></a>
<a id="trace-23358"></a>
<a id="trace-23360"></a>
<a id="trace-23371"></a>
<a id="trace-23373"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23394"></a>
<a id="trace-23396"></a>
<a id="trace-23405"></a>
<a id="trace-23407"></a>
<a id="trace-23414"></a>
<a id="trace-23416"></a>
<a id="trace-23427"></a>
<a id="trace-23429"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23455"></a>
<a id="trace-23457"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
<a id="trace-23568"></a>
<a id="trace-23570"></a>
<a id="trace-23581"></a>
<a id="trace-23583"></a>
<a id="trace-23599"></a>
<a id="trace-23601"></a>
<a id="trace-23612"></a>
<a id="trace-23614"></a>
<a id="trace-23624"></a>
<a id="trace-23626"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23650"></a>
<a id="trace-23652"></a>
<a id="trace-23659"></a>
<a id="trace-23661"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23737"></a>
<a id="trace-23739"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23759"></a>
<a id="trace-23761"></a>
<a id="trace-23778"></a>
<a id="trace-23780"></a>
<a id="trace-23798"></a>
<a id="trace-23800"></a>
<a id="trace-23813"></a>
<a id="trace-23815"></a>
<a id="trace-23822"></a>
<a id="trace-23824"></a>
<a id="trace-23844"></a>
<a id="trace-23846"></a>
<a id="trace-23853"></a>
<a id="trace-23855"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23928"></a>
<a id="trace-23930"></a>
<a id="trace-23940"></a>
<a id="trace-23942"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-23964"></a>
<a id="trace-23966"></a>
<a id="trace-23978"></a>
<a id="trace-23980"></a>
<a id="trace-23990"></a>
<a id="trace-23992"></a>
<a id="trace-24002"></a>
<a id="trace-24004"></a>
<a id="trace-24028"></a>
<a id="trace-24030"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24113"></a>
<a id="trace-24115"></a>
<a id="trace-24126"></a>
<a id="trace-24128"></a>
<a id="trace-24140"></a>
<a id="trace-24142"></a>
- 291.80s–351.30s (×240), actor 5, squad 0 (trace 21891): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 291.70s, trace 21885. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21904}.
<a id="trace-2380"></a>
- 351.70s–351.70s (×1), actor 5, squad 0 (events line 2380): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2381"></a>
- 351.70s–351.70s (×1), actor 5, squad 1 (events line 2381): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24147"></a>
- 351.70s–351.70s (×1), actor 5, squad 0 (trace 24147): renew committed intent (75 s lifetime). Knowledge: actor memory at 351.70s, trace 24147. Next observer evidence: {'until': 351.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24154}.
<a id="trace-24148"></a>
- 351.70s–351.70s (×1), actor 5, squad 1 (trace 24148): renew committed intent (75 s lifetime). Knowledge: actor memory at 351.70s, trace 24148. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-24154"></a>
<a id="trace-24156"></a>
<a id="trace-24167"></a>
<a id="trace-24169"></a>
<a id="trace-24177"></a>
<a id="trace-24179"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24200"></a>
<a id="trace-24202"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24229"></a>
<a id="trace-24231"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24343"></a>
<a id="trace-24345"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24376"></a>
<a id="trace-24378"></a>
<a id="trace-24386"></a>
<a id="trace-24388"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24411"></a>
<a id="trace-24413"></a>
<a id="trace-24420"></a>
<a id="trace-24422"></a>
- 351.80s–359.80s (×34), actor 5, squad 0 (trace 24154): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 351.70s, trace 24148. Next observer evidence: {'until': 352.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24167}.

## Net delivery

172 matched order/radio deliveries; 490 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.455s; maximum 1.650s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2784: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2785: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2786: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2787: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3527: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3532: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3533: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3535: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3537: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3538: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3539: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3540: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3542: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3543: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3544: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3545: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3546: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4251: estimate 10.45; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4252: estimate 10.45; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4380: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4385: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4386: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4388: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4390: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4391: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4392: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4393: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4395: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4396: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4397: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4398: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4399: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4664: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4665: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4667: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4669: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4670: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4671: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4672: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4673: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4674: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4675: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4676: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4677: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4678: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4753: estimate 11.85; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4754: estimate 11.85; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4877: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4878: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4880: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4882: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4883: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4884: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4885: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4886: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4887: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4888: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4889: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4890: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4891: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 5013: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 5014: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5113: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5114: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5115: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5116: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5117: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5118: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5119: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5120: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5121: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5122: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5123: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5124: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5125: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5126: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5127: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5128: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5129: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5130: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5316: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5317: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5318: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5319: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5320: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5321: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5322: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5323: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5324: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5325: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5326: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5327: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5328: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5329: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5330: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5331: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5332: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5333: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5524: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5525: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5526: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5527: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5528: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5529: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5530: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5531: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5532: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5533: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5534: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5535: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5536: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5537: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5538: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5539: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5540: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5541: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5739: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 5740: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 5741: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5742: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5743: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5744: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5745: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 5746: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5747: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5748: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 5749: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 5750: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5751: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5752: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5753: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5754: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 5755: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 5756: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5948: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 5949: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 5950: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5951: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5952: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5953: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5954: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 5955: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5956: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5957: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 5958: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 5959: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5960: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5961: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5962: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5963: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 5964: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 5965: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 6159: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 6160: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 6161: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 6162: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 6163: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 6164: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 6165: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 6166: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 6167: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 6168: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 6169: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 6170: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 6171: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 6172: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 6173: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 6174: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 6175: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 6176: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 6375: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 6376: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 6377: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 6378: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 6379: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 6380: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 6381: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 6382: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 6383: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 6384: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 6385: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 6386: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 6387: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 6388: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 6389: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 6390: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 6391: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 6392: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6600: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 6601: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 6602: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6603: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6604: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6605: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 6606: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 6607: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6608: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6609: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 6610: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 6611: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6612: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6613: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6614: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6615: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 6616: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 6771: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6809: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 6810: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 6811: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6812: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6813: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6814: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 6815: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 6816: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6817: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6818: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 6819: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 6820: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6821: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6822: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6823: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6824: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 6825: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9287: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9288: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9289: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9290: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9291: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9292: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9293: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 9294: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9295: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9296: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9297: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9298: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9299: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9300: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9301: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9302: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 9303: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 9571: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 9572: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 9573: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 9574: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 9575: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 9576: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 9577: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 9578: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 9579: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 9580: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 9581: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 9582: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 9583: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 9584: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 9585: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 9586: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 9587: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 9831: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 9832: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 9833: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 9834: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 9835: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 9836: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 9837: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 9838: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 9839: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 9840: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 9841: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 9842: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 9843: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 9844: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 9845: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 9846: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 9847: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 10233: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10321: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 10322: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 10323: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10324: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10325: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10326: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10327: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 10328: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10329: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10330: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10331: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10332: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10333: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10334: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10335: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10336: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 10337: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 10566: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 10567: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 10568: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10569: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10570: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 10571: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 10572: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 10573: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 10574: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 10575: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 10576: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 10577: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10578: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10579: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10580: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10581: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 10582: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11575: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 11576: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 11577: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11578: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11579: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11580: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11581: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 11582: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11583: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11584: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11585: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11586: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11587: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11588: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11589: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11590: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 11591: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12213: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 12214: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 12215: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12216: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12217: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12218: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12219: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 12220: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12221: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12222: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12223: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12224: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12225: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12226: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12227: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12228: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12229: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 14817: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 14818: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14819: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14820: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14821: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14822: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14823: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14824: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14825: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14826: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14827: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14828: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14829: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14830: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14831: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14832: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 15233: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 15234: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 15235: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15236: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 15237: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 15238: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 15239: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 15240: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 15241: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15242: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15243: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15244: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 15245: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15246: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 15247: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 126.05s leader 5, trace 15334: estimate 11.53; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 129.35s leader 5, trace 15459: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 129.35s leader 5, trace 15460: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 15473: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 15474: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15475: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15476: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15477: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 15478: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15479: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15480: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 15481: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15482: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15483: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15484: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15485: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15486: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 15487: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 15755: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 15756: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15757: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15758: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15759: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 15760: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15761: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15762: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 15763: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15764: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15765: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15766: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15767: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15768: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 15769: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 15929: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 15930: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15931: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15932: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15933: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15934: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15935: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15936: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 15937: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15938: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15939: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15940: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15941: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15942: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 15943: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.15s leader 5, trace 15944: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 16104: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 16105: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16106: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16107: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 16108: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 16109: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16110: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16111: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16112: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16113: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16114: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16115: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16116: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16117: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16118: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 16291: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 16292: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16293: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16294: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16295: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 16296: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16297: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16298: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 16299: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16300: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16301: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16302: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16303: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16304: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 16305: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 16489: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 16490: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16491: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16492: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16493: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 16494: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16495: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16496: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 16497: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16498: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16499: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16500: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16501: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16502: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 16503: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 16672: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 16673: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16674: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16675: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16676: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 16677: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16678: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16679: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 16680: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16681: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16682: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16683: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16684: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16685: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 16686: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 16855: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 16856: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16857: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16858: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16859: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16860: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16861: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16862: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16863: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16864: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16865: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16866: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16867: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16868: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16869: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 17044: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 17045: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17046: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17047: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17048: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17049: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17050: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17051: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17052: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17053: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17054: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17055: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17056: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17057: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17058: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 17125: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 17126: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 17127: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 17128: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 17404: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 17405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17407: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17408: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17409: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17410: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17411: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17412: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17413: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17414: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17415: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17416: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17417: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17418: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 17620: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 17621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17623: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17624: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17625: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17626: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17627: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17628: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17629: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17630: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17631: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17632: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17633: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17634: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 17826: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 17827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 17828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17829: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 17830: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 17831: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17832: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17833: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 17834: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17835: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17836: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17837: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17838: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17839: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 17840: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 18017: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 18018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18020: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18021: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18022: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18023: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18024: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18025: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18026: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18027: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18028: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18029: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18030: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18031: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 18204: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 18205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18207: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 18208: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 18209: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18210: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18211: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18212: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18213: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18214: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18215: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18216: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18217: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18218: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 18392: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 18393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 18394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 18395: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 18396: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 18397: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 18398: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 18399: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 18400: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 18401: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 18402: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 18403: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 18404: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 18405: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 18406: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 18581: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 18582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 18583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 18584: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 18585: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 18586: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 18587: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 18588: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 18589: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 18590: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 18591: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 18592: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 18593: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 18594: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 18595: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 18764: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 18765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 18766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 18767: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 18768: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 18769: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 18770: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 18771: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 18772: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 18773: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 18774: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 18775: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 18776: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 18777: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 18778: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 18948: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 18949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 18950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18951: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 18952: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 18953: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18954: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18955: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 18956: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18957: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18958: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18959: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18960: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18961: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 18962: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 19145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 19146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 19149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 19150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19151: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19152: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19153: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19155: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19156: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19157: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19158: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19159: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 19332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 19333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 19334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 19335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 19336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 19337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 19338: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 19339: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 19340: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 19342: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19343: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19344: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19345: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19346: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 19515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 19516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 19520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.50s leader 5, trace 19617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.50s leader 5, trace 19618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 19709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 19710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 19714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 19717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 19895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 19896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 19899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 19900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 19902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 19903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 19909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 20087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 20088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 20259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 20260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 20448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 20449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 20453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 20648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 20649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 20653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 20660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 20835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 20836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 20840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 20847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 21019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 21020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 21023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 21217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 21218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 21415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 21416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 21593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 21594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 21598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 21782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 21783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 21786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 21787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 21794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.70s leader 5, trace 21884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.70s leader 5, trace 21885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 21976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 21977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 21980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 21981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 21982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 21983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 21984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 21986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 21988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 21990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 22157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 22158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 22353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 22354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 22539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 22540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 22730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 22731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 22733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 22734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 22735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 22737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 22738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 22740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 22741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 22742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 22743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 22744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 22912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 22913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 22914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 22915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 22916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 22917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 22918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 22919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 22920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 22922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 22923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 22924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 22926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 23105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 23106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 23292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 23293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 23476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 23477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 23666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 23667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 23668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 23669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 23670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 23673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 23676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 23677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 23678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 23680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 23858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 23859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 23860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 23861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 23862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 23863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 23865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 23866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 23868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 23869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 23870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 23871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 23872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 24049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 24050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 24051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 351.70s leader 5, trace 24147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 351.70s leader 5, trace 24148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 24236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 24237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 24238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 24427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 24428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 24429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 24431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 24432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Renn killed in action
- 1: Rook incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 171.05s, evidence 1836: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 1837: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 17125: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 17126: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17137}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 17127: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 17128: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.431728 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17156}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 231.50s, evidence 2032: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19629}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 231.50s, evidence 2033: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2207}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 291.70s, evidence 2206: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 291.70s, evidence 2207: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 351.70s, evidence 2380: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 351.70s, evidence 2381: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
