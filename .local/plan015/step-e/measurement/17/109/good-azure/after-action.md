# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/109/good-azure/battle-109-1789674028926557972`

## Battle summary

**Ember** · 360 s · 394 shots.

### Turning points

- 16.8s, squad 4: contact (events line 219). First recorded contact.
- 30.1s, squad 0: assault ([trace 10229](#trace-10229)). 46.7s, squad 0: took cover and returned fire.
- 35.5s, squad 1: assault ([trace 11382](#trace-11382)). 46.0s, squad 1: new loss of own base of fire.
- 40.2s, squad 0: help call ([trace 12119](#trace-12119)). No completion observed before termination.
- 43.9s, squad 1: help call ([trace 12274](#trace-12274)). 46.9s, squad 0: answered a neighbour with support by fire.
- 46.9s, squad 0: help answer ([trace 13268](#trace-13268)). 77.3s, squad 0: prepared a base of fire.
- 87.2s, squad 0: withdrawal ([trace 20184](#trace-20184)). 113.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.8s, squad 0: withdrawal ([trace 23358](#trace-23358)). No completion observed before termination.
- 121.3s, squad 1: withdrawal ([trace 23537](#trace-23537)). 137.0s, squad 1: took cover and returned fire.
- 136.0s, squad 1: help call ([trace 24336](#trace-24336)). No completion observed before termination.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 5 further drill types; withdrew; 30 shots, 7/8 lost.
- **1** — FightHere; chose Withdraw to received rally, broke contact and 5 further drill types; withdrew; 18 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 220 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 126 shots, 0/4 lost.

### Decisions and attribution

At 44.6s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 12305](#trace-12305)), followed by 2 shots and 1 own casualties; estimate 15.1 against 11 distinct squad-reported contacts; At 121.3s, squad 1 chose Withdraw to received rally ([trace 23537](#trace-23537)), followed by 1 shots and 1 own casualties; estimate 12.8 against 0 distinct squad-reported contacts; At 35.5s, squad 1 chose prepared a base of fire ([trace 10970](#trace-10970)), followed by 4 shots and 0 own casualties; estimate 15.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449800316477219, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1004}.

### Communication

208 matched deliveries (mean 0.51s, max 2.50s); 501 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.75s, squad 4, contact, evidence events line 219: First recorded contact; .
- 30.10s, squad 0, assault, evidence 10229: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 46.7s, squad 0: took cover and returned fire.
- 35.55s, squad 1, assault, evidence 11382: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 46.0s, squad 1: new loss of own base of fire.
- 40.15s, squad 0, help call, evidence 12119: NeedSupport; No completion observed before termination.
- 43.85s, squad 1, help call, evidence 12274: NeedSupport; 46.9s, squad 0: answered a neighbour with support by fire.
- 46.90s, squad 0, help answer, evidence 13268: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 77.3s, squad 0: prepared a base of fire.
- 87.15s, squad 0, withdrawal, evidence 20184: BreakContact: believed ratio at least two without superiority; 113.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.75s, squad 0, withdrawal, evidence 23358: Withdraw to received rally; No completion observed before termination.
- 121.35s, squad 1, withdrawal, evidence 23537: Withdraw to received rally; 137.0s, squad 1: took cover and returned fire.
- 136.00s, squad 1, help call, evidence 24336: NeedSupport; No completion observed before termination.
- 140.65s, squad 1, withdrawal, evidence 24588: BreakContact: believed ratio at least two without superiority; 161.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 313.90s, squad 1, withdrawal, evidence 31894: BreakContact: believed ratio at least two without superiority; 334.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 325.60s, squad 1, help call, evidence 32374: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703036550938659, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703036550938659, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703036550938659, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010355, 'next_transition': 105}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-772"></a>
<a id="trace-774"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259979723589894, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449800316477219, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1004}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449800316477219, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449800316477219, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1004}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111928408023925, 'next_transition': 1004}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-883"></a>
<a id="trace-885"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-993"></a>
<a id="trace-995"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450110396370293, 'next_transition': 883}.
<a id="trace-997"></a>
<a id="trace-1516"></a>
<a id="trace-1569"></a>
<a id="trace-1571"></a>
<a id="trace-1612"></a>
<a id="trace-1614"></a>
<a id="trace-1696"></a>
<a id="trace-1698"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-1791"></a>
<a id="trace-1793"></a>
<a id="trace-1822"></a>
<a id="trace-1824"></a>
<a id="trace-1914"></a>
<a id="trace-1916"></a>
<a id="trace-1945"></a>
<a id="trace-1947"></a>
<a id="trace-1968"></a>
<a id="trace-1970"></a>
<a id="trace-2003"></a>
<a id="trace-2005"></a>
<a id="trace-2068"></a>
<a id="trace-2070"></a>
<a id="trace-2089"></a>
<a id="trace-2091"></a>
<a id="trace-2121"></a>
<a id="trace-2123"></a>
<a id="trace-2176"></a>
<a id="trace-2178"></a>
<a id="trace-2261"></a>
<a id="trace-2263"></a>
<a id="trace-2294"></a>
<a id="trace-2296"></a>
<a id="trace-2324"></a>
<a id="trace-2326"></a>
<a id="trace-2354"></a>
<a id="trace-2356"></a>
<a id="trace-3357"></a>
<a id="trace-3359"></a>
<a id="trace-4858"></a>
<a id="trace-4860"></a>
<a id="trace-4902"></a>
<a id="trace-4904"></a>
<a id="trace-5514"></a>
<a id="trace-5516"></a>
<a id="trace-5672"></a>
<a id="trace-5674"></a>
<a id="trace-5731"></a>
<a id="trace-5733"></a>
<a id="trace-5788"></a>
<a id="trace-5790"></a>
<a id="trace-5832"></a>
<a id="trace-5834"></a>
<a id="trace-5885"></a>
<a id="trace-5887"></a>
<a id="trace-6380"></a>
<a id="trace-6382"></a>
<a id="trace-6431"></a>
<a id="trace-6433"></a>
<a id="trace-6470"></a>
<a id="trace-6472"></a>
<a id="trace-7251"></a>
<a id="trace-7253"></a>
<a id="trace-7359"></a>
<a id="trace-7361"></a>
<a id="trace-7413"></a>
<a id="trace-7415"></a>
<a id="trace-7957"></a>
<a id="trace-7959"></a>
<a id="trace-8005"></a>
<a id="trace-8007"></a>
<a id="trace-8099"></a>
<a id="trace-8101"></a>
<a id="trace-8169"></a>
<a id="trace-8171"></a>
<a id="trace-8242"></a>
<a id="trace-8244"></a>
<a id="trace-8865"></a>
<a id="trace-8867"></a>
<a id="trace-8907"></a>
<a id="trace-8909"></a>
<a id="trace-10565"></a>
<a id="trace-10567"></a>
<a id="trace-10596"></a>
<a id="trace-10598"></a>
<a id="trace-10635"></a>
<a id="trace-10637"></a>
<a id="trace-10689"></a>
<a id="trace-10691"></a>
<a id="trace-10733"></a>
<a id="trace-10735"></a>
<a id="trace-10776"></a>
<a id="trace-10778"></a>
<a id="trace-10810"></a>
<a id="trace-10812"></a>
<a id="trace-10827"></a>
<a id="trace-10829"></a>
<a id="trace-10854"></a>
<a id="trace-10856"></a>
<a id="trace-10875"></a>
<a id="trace-10877"></a>
<a id="trace-10961"></a>
<a id="trace-10963"></a>
<a id="trace-11761"></a>
<a id="trace-11763"></a>
<a id="trace-11822"></a>
<a id="trace-11824"></a>
<a id="trace-11842"></a>
<a id="trace-11844"></a>
<a id="trace-11873"></a>
<a id="trace-11875"></a>
<a id="trace-11918"></a>
<a id="trace-11920"></a>
<a id="trace-11960"></a>
<a id="trace-11962"></a>
<a id="trace-11998"></a>
<a id="trace-12000"></a>
<a id="trace-12033"></a>
<a id="trace-12035"></a>
<a id="trace-12142"></a>
<a id="trace-12144"></a>
<a id="trace-12160"></a>
<a id="trace-12162"></a>
<a id="trace-12180"></a>
<a id="trace-12182"></a>
<a id="trace-12204"></a>
<a id="trace-12206"></a>
<a id="trace-12235"></a>
<a id="trace-12237"></a>
<a id="trace-12256"></a>
<a id="trace-12258"></a>
<a id="trace-12269"></a>
<a id="trace-12271"></a>
<a id="trace-12299"></a>
<a id="trace-12301"></a>
<a id="trace-12321"></a>
<a id="trace-12323"></a>
<a id="trace-12411"></a>
<a id="trace-12413"></a>
<a id="trace-12435"></a>
<a id="trace-12437"></a>
<a id="trace-12748"></a>
<a id="trace-12750"></a>
<a id="trace-13262"></a>
<a id="trace-13264"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
<a id="trace-16434"></a>
<a id="trace-16436"></a>
<a id="trace-16487"></a>
<a id="trace-16489"></a>
<a id="trace-16683"></a>
<a id="trace-16685"></a>
<a id="trace-16719"></a>
<a id="trace-16721"></a>
<a id="trace-16766"></a>
<a id="trace-16768"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16874"></a>
<a id="trace-16876"></a>
<a id="trace-16987"></a>
<a id="trace-16989"></a>
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
<a id="trace-17175"></a>
<a id="trace-17177"></a>
<a id="trace-17191"></a>
<a id="trace-17193"></a>
<a id="trace-17212"></a>
<a id="trace-17214"></a>
<a id="trace-17258"></a>
<a id="trace-17260"></a>
<a id="trace-17276"></a>
<a id="trace-17278"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17426"></a>
<a id="trace-17428"></a>
<a id="trace-17448"></a>
<a id="trace-17450"></a>
<a id="trace-17479"></a>
<a id="trace-17481"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17618"></a>
<a id="trace-17620"></a>
<a id="trace-17629"></a>
<a id="trace-17631"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17663"></a>
<a id="trace-17665"></a>
<a id="trace-17681"></a>
<a id="trace-17683"></a>
<a id="trace-17697"></a>
<a id="trace-17699"></a>
<a id="trace-17804"></a>
<a id="trace-17806"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
<a id="trace-17835"></a>
<a id="trace-17837"></a>
<a id="trace-17845"></a>
<a id="trace-17847"></a>
<a id="trace-17873"></a>
<a id="trace-17875"></a>
<a id="trace-17894"></a>
<a id="trace-17896"></a>
<a id="trace-17910"></a>
<a id="trace-17912"></a>
<a id="trace-17925"></a>
<a id="trace-17927"></a>
<a id="trace-18024"></a>
<a id="trace-18026"></a>
<a id="trace-18033"></a>
<a id="trace-18035"></a>
<a id="trace-18051"></a>
<a id="trace-18053"></a>
<a id="trace-18078"></a>
<a id="trace-18080"></a>
<a id="trace-18116"></a>
<a id="trace-18118"></a>
<a id="trace-18148"></a>
<a id="trace-18150"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18414"></a>
<a id="trace-18416"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19469"></a>
<a id="trace-19471"></a>
<a id="trace-19499"></a>
<a id="trace-19501"></a>
<a id="trace-19510"></a>
<a id="trace-19512"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19603"></a>
<a id="trace-19605"></a>
<a id="trace-19625"></a>
<a id="trace-19627"></a>
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19651"></a>
<a id="trace-19653"></a>
<a id="trace-19665"></a>
<a id="trace-19667"></a>
<a id="trace-19923"></a>
<a id="trace-19925"></a>
<a id="trace-20022"></a>
<a id="trace-20024"></a>
<a id="trace-20160"></a>
<a id="trace-20162"></a>
<a id="trace-20327"></a>
<a id="trace-20329"></a>
<a id="trace-20347"></a>
<a id="trace-20349"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20390"></a>
<a id="trace-20392"></a>
<a id="trace-20402"></a>
<a id="trace-20404"></a>
<a id="trace-20417"></a>
<a id="trace-20419"></a>
<a id="trace-20488"></a>
<a id="trace-20490"></a>
<a id="trace-20508"></a>
<a id="trace-20510"></a>
<a id="trace-20553"></a>
<a id="trace-20555"></a>
<a id="trace-20564"></a>
<a id="trace-20566"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20585"></a>
<a id="trace-20587"></a>
<a id="trace-20677"></a>
<a id="trace-20679"></a>
<a id="trace-20688"></a>
<a id="trace-20690"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20730"></a>
<a id="trace-20732"></a>
<a id="trace-20752"></a>
<a id="trace-20754"></a>
<a id="trace-20827"></a>
<a id="trace-20829"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-20879"></a>
<a id="trace-20881"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20909"></a>
<a id="trace-20911"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20950"></a>
<a id="trace-20952"></a>
<a id="trace-20961"></a>
<a id="trace-20963"></a>
<a id="trace-20972"></a>
<a id="trace-20974"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21063"></a>
<a id="trace-21065"></a>
<a id="trace-21074"></a>
<a id="trace-21076"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
<a id="trace-21117"></a>
<a id="trace-21119"></a>
<a id="trace-21128"></a>
<a id="trace-21130"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21241"></a>
<a id="trace-21243"></a>
<a id="trace-21329"></a>
<a id="trace-21331"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21381"></a>
<a id="trace-21383"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21428"></a>
<a id="trace-21430"></a>
<a id="trace-21443"></a>
<a id="trace-21445"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-23228"></a>
<a id="trace-23230"></a>
<a id="trace-23277"></a>
<a id="trace-23279"></a>
<a id="trace-23300"></a>
<a id="trace-23302"></a>
<a id="trace-23355"></a>
<a id="trace-23357"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23441"></a>
<a id="trace-23443"></a>
<a id="trace-23511"></a>
<a id="trace-23513"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23800"></a>
<a id="trace-23802"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23834"></a>
<a id="trace-23836"></a>
<a id="trace-23949"></a>
<a id="trace-23951"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23975"></a>
<a id="trace-23977"></a>
<a id="trace-23999"></a>
<a id="trace-24001"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24165"></a>
<a id="trace-24167"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24205"></a>
<a id="trace-24207"></a>
<a id="trace-24223"></a>
<a id="trace-24225"></a>
<a id="trace-24232"></a>
<a id="trace-24234"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24256"></a>
<a id="trace-24258"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24372"></a>
<a id="trace-24374"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24471"></a>
<a id="trace-24473"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24716"></a>
<a id="trace-24718"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24765"></a>
<a id="trace-24767"></a>
<a id="trace-24782"></a>
<a id="trace-24784"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24797"></a>
<a id="trace-24799"></a>
<a id="trace-24806"></a>
<a id="trace-24808"></a>
<a id="trace-24894"></a>
<a id="trace-24896"></a>
<a id="trace-24900"></a>
<a id="trace-24902"></a>
<a id="trace-24913"></a>
<a id="trace-24915"></a>
<a id="trace-24920"></a>
<a id="trace-24922"></a>
<a id="trace-24936"></a>
<a id="trace-24938"></a>
<a id="trace-24942"></a>
<a id="trace-24944"></a>
<a id="trace-24954"></a>
<a id="trace-24956"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-25031"></a>
<a id="trace-25033"></a>
<a id="trace-25042"></a>
<a id="trace-25044"></a>
<a id="trace-25062"></a>
<a id="trace-25064"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25115"></a>
<a id="trace-25117"></a>
<a id="trace-25210"></a>
<a id="trace-25212"></a>
<a id="trace-25232"></a>
<a id="trace-25234"></a>
<a id="trace-25240"></a>
<a id="trace-25242"></a>
<a id="trace-25251"></a>
<a id="trace-25253"></a>
<a id="trace-25256"></a>
<a id="trace-25258"></a>
<a id="trace-25272"></a>
<a id="trace-25274"></a>
<a id="trace-25277"></a>
<a id="trace-25279"></a>
<a id="trace-25368"></a>
<a id="trace-25370"></a>
<a id="trace-25376"></a>
<a id="trace-25378"></a>
<a id="trace-25426"></a>
<a id="trace-25428"></a>
<a id="trace-25467"></a>
<a id="trace-25469"></a>
<a id="trace-25472"></a>
<a id="trace-25474"></a>
<a id="trace-25485"></a>
<a id="trace-25487"></a>
<a id="trace-25494"></a>
<a id="trace-25496"></a>
<a id="trace-25562"></a>
<a id="trace-25564"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25608"></a>
<a id="trace-25610"></a>
<a id="trace-25625"></a>
<a id="trace-25627"></a>
<a id="trace-25653"></a>
<a id="trace-25655"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25743"></a>
<a id="trace-25745"></a>
<a id="trace-25765"></a>
<a id="trace-25767"></a>
<a id="trace-25771"></a>
<a id="trace-25773"></a>
<a id="trace-25788"></a>
<a id="trace-25790"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25818"></a>
<a id="trace-25820"></a>
<a id="trace-25838"></a>
<a id="trace-25840"></a>
<a id="trace-25860"></a>
<a id="trace-25862"></a>
<a id="trace-25928"></a>
<a id="trace-25930"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25952"></a>
<a id="trace-25954"></a>
<a id="trace-25958"></a>
<a id="trace-25960"></a>
<a id="trace-25972"></a>
<a id="trace-25974"></a>
<a id="trace-25990"></a>
<a id="trace-25992"></a>
<a id="trace-25997"></a>
<a id="trace-25999"></a>
<a id="trace-26010"></a>
<a id="trace-26012"></a>
<a id="trace-26087"></a>
<a id="trace-26089"></a>
<a id="trace-26104"></a>
<a id="trace-26106"></a>
<a id="trace-26133"></a>
<a id="trace-26135"></a>
<a id="trace-26141"></a>
<a id="trace-26143"></a>
<a id="trace-26156"></a>
<a id="trace-26158"></a>
<a id="trace-26163"></a>
<a id="trace-26165"></a>
<a id="trace-26181"></a>
<a id="trace-26183"></a>
<a id="trace-26186"></a>
<a id="trace-26188"></a>
<a id="trace-26199"></a>
<a id="trace-26201"></a>
<a id="trace-26205"></a>
<a id="trace-26207"></a>
<a id="trace-26297"></a>
<a id="trace-26299"></a>
<a id="trace-26305"></a>
<a id="trace-26307"></a>
<a id="trace-26327"></a>
<a id="trace-26329"></a>
<a id="trace-26356"></a>
<a id="trace-26358"></a>
<a id="trace-26377"></a>
<a id="trace-26379"></a>
<a id="trace-26385"></a>
<a id="trace-26387"></a>
<a id="trace-26453"></a>
<a id="trace-26455"></a>
<a id="trace-26474"></a>
<a id="trace-26476"></a>
<a id="trace-26491"></a>
<a id="trace-26493"></a>
<a id="trace-26517"></a>
<a id="trace-26519"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26558"></a>
<a id="trace-26560"></a>
<a id="trace-26636"></a>
<a id="trace-26638"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26690"></a>
<a id="trace-26692"></a>
<a id="trace-26697"></a>
<a id="trace-26699"></a>
<a id="trace-26709"></a>
<a id="trace-26711"></a>
<a id="trace-26721"></a>
<a id="trace-26723"></a>
<a id="trace-26789"></a>
<a id="trace-26791"></a>
<a id="trace-26802"></a>
<a id="trace-26804"></a>
<a id="trace-26838"></a>
<a id="trace-26840"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26877"></a>
<a id="trace-26879"></a>
<a id="trace-26967"></a>
<a id="trace-26969"></a>
<a id="trace-26989"></a>
<a id="trace-26991"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27031"></a>
<a id="trace-27033"></a>
<a id="trace-27047"></a>
<a id="trace-27049"></a>
<a id="trace-27053"></a>
<a id="trace-27055"></a>
<a id="trace-27068"></a>
<a id="trace-27070"></a>
<a id="trace-27077"></a>
<a id="trace-27079"></a>
<a id="trace-27143"></a>
<a id="trace-27145"></a>
<a id="trace-27168"></a>
<a id="trace-27170"></a>
<a id="trace-27175"></a>
<a id="trace-27177"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27216"></a>
<a id="trace-27218"></a>
<a id="trace-27227"></a>
<a id="trace-27229"></a>
<a id="trace-27252"></a>
<a id="trace-27254"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27326"></a>
<a id="trace-27328"></a>
<a id="trace-27334"></a>
<a id="trace-27336"></a>
<a id="trace-27352"></a>
<a id="trace-27354"></a>
<a id="trace-27362"></a>
<a id="trace-27364"></a>
<a id="trace-27374"></a>
<a id="trace-27376"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27403"></a>
<a id="trace-27405"></a>
<a id="trace-27499"></a>
<a id="trace-27501"></a>
<a id="trace-27506"></a>
<a id="trace-27508"></a>
<a id="trace-27540"></a>
<a id="trace-27542"></a>
<a id="trace-27552"></a>
<a id="trace-27554"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27583"></a>
<a id="trace-27585"></a>
<a id="trace-27596"></a>
<a id="trace-27598"></a>
<a id="trace-27602"></a>
<a id="trace-27604"></a>
<a id="trace-27671"></a>
<a id="trace-27673"></a>
<a id="trace-27701"></a>
<a id="trace-27703"></a>
<a id="trace-27707"></a>
<a id="trace-27709"></a>
<a id="trace-27726"></a>
<a id="trace-27728"></a>
<a id="trace-27745"></a>
<a id="trace-27747"></a>
<a id="trace-27783"></a>
<a id="trace-27785"></a>
<a id="trace-27850"></a>
<a id="trace-27852"></a>
<a id="trace-27857"></a>
<a id="trace-27859"></a>
<a id="trace-27875"></a>
<a id="trace-27877"></a>
<a id="trace-27881"></a>
<a id="trace-27883"></a>
<a id="trace-27897"></a>
<a id="trace-27899"></a>
<a id="trace-27912"></a>
<a id="trace-27914"></a>
<a id="trace-27930"></a>
<a id="trace-27932"></a>
<a id="trace-27943"></a>
<a id="trace-27945"></a>
<a id="trace-27966"></a>
<a id="trace-27968"></a>
<a id="trace-28087"></a>
<a id="trace-28089"></a>
<a id="trace-28182"></a>
<a id="trace-28184"></a>
<a id="trace-28191"></a>
<a id="trace-28193"></a>
<a id="trace-28209"></a>
<a id="trace-28211"></a>
<a id="trace-28215"></a>
<a id="trace-28217"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28241"></a>
<a id="trace-28243"></a>
<a id="trace-28262"></a>
<a id="trace-28264"></a>
<a id="trace-28272"></a>
<a id="trace-28274"></a>
<a id="trace-28349"></a>
<a id="trace-28351"></a>
<a id="trace-28372"></a>
<a id="trace-28374"></a>
<a id="trace-28393"></a>
<a id="trace-28395"></a>
<a id="trace-28400"></a>
<a id="trace-28402"></a>
<a id="trace-28421"></a>
<a id="trace-28423"></a>
<a id="trace-28440"></a>
<a id="trace-28442"></a>
<a id="trace-28449"></a>
<a id="trace-28451"></a>
<a id="trace-28462"></a>
<a id="trace-28464"></a>
<a id="trace-28470"></a>
<a id="trace-28472"></a>
<a id="trace-28552"></a>
<a id="trace-28554"></a>
<a id="trace-28670"></a>
<a id="trace-28672"></a>
<a id="trace-28688"></a>
<a id="trace-28690"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28727"></a>
<a id="trace-28729"></a>
<a id="trace-28743"></a>
<a id="trace-28745"></a>
<a id="trace-28751"></a>
<a id="trace-28753"></a>
<a id="trace-28765"></a>
<a id="trace-28767"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28843"></a>
<a id="trace-28845"></a>
<a id="trace-28853"></a>
<a id="trace-28855"></a>
<a id="trace-28869"></a>
<a id="trace-28871"></a>
<a id="trace-28879"></a>
<a id="trace-28881"></a>
<a id="trace-28907"></a>
<a id="trace-28909"></a>
<a id="trace-28994"></a>
<a id="trace-28996"></a>
<a id="trace-29020"></a>
<a id="trace-29022"></a>
<a id="trace-29032"></a>
<a id="trace-29034"></a>
<a id="trace-29101"></a>
<a id="trace-29103"></a>
<a id="trace-29111"></a>
<a id="trace-29113"></a>
<a id="trace-29134"></a>
<a id="trace-29136"></a>
<a id="trace-29149"></a>
<a id="trace-29151"></a>
<a id="trace-29170"></a>
<a id="trace-29172"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29198"></a>
<a id="trace-29200"></a>
<a id="trace-29206"></a>
<a id="trace-29208"></a>
<a id="trace-29280"></a>
<a id="trace-29282"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29341"></a>
<a id="trace-29343"></a>
<a id="trace-29348"></a>
<a id="trace-29350"></a>
<a id="trace-29364"></a>
<a id="trace-29366"></a>
<a id="trace-29375"></a>
<a id="trace-29377"></a>
<a id="trace-29397"></a>
<a id="trace-29399"></a>
<a id="trace-29463"></a>
<a id="trace-29465"></a>
<a id="trace-29492"></a>
<a id="trace-29494"></a>
<a id="trace-29507"></a>
<a id="trace-29509"></a>
<a id="trace-29533"></a>
<a id="trace-29535"></a>
<a id="trace-29642"></a>
<a id="trace-29644"></a>
<a id="trace-29649"></a>
<a id="trace-29651"></a>
<a id="trace-29747"></a>
<a id="trace-29749"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29792"></a>
<a id="trace-29794"></a>
<a id="trace-29797"></a>
<a id="trace-29799"></a>
<a id="trace-29839"></a>
<a id="trace-29841"></a>
<a id="trace-29853"></a>
<a id="trace-29855"></a>
<a id="trace-29951"></a>
<a id="trace-29953"></a>
<a id="trace-29960"></a>
<a id="trace-29962"></a>
<a id="trace-30228"></a>
<a id="trace-30230"></a>
<a id="trace-30237"></a>
<a id="trace-30239"></a>
<a id="trace-30258"></a>
<a id="trace-30260"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30392"></a>
<a id="trace-30394"></a>
<a id="trace-30401"></a>
<a id="trace-30403"></a>
<a id="trace-30417"></a>
<a id="trace-30419"></a>
<a id="trace-30440"></a>
<a id="trace-30442"></a>
<a id="trace-30451"></a>
<a id="trace-30453"></a>
<a id="trace-30479"></a>
<a id="trace-30481"></a>
<a id="trace-30740"></a>
<a id="trace-30742"></a>
<a id="trace-30755"></a>
<a id="trace-30757"></a>
<a id="trace-30842"></a>
<a id="trace-30844"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30864"></a>
<a id="trace-30866"></a>
<a id="trace-30878"></a>
<a id="trace-30880"></a>
<a id="trace-30899"></a>
<a id="trace-30901"></a>
<a id="trace-30908"></a>
<a id="trace-30910"></a>
<a id="trace-30921"></a>
<a id="trace-30923"></a>
<a id="trace-30996"></a>
<a id="trace-30998"></a>
<a id="trace-31003"></a>
<a id="trace-31005"></a>
<a id="trace-31019"></a>
<a id="trace-31021"></a>
<a id="trace-31030"></a>
<a id="trace-31032"></a>
<a id="trace-31044"></a>
<a id="trace-31046"></a>
<a id="trace-31060"></a>
<a id="trace-31062"></a>
<a id="trace-31066"></a>
<a id="trace-31068"></a>
<a id="trace-31080"></a>
<a id="trace-31082"></a>
<a id="trace-31087"></a>
<a id="trace-31089"></a>
<a id="trace-31156"></a>
<a id="trace-31158"></a>
<a id="trace-31162"></a>
<a id="trace-31164"></a>
<a id="trace-31179"></a>
<a id="trace-31181"></a>
<a id="trace-31186"></a>
<a id="trace-31188"></a>
<a id="trace-31201"></a>
<a id="trace-31203"></a>
<a id="trace-31208"></a>
<a id="trace-31210"></a>
<a id="trace-31225"></a>
<a id="trace-31227"></a>
<a id="trace-31234"></a>
<a id="trace-31236"></a>
<a id="trace-31252"></a>
<a id="trace-31254"></a>
<a id="trace-31261"></a>
<a id="trace-31263"></a>
<a id="trace-31330"></a>
<a id="trace-31332"></a>
<a id="trace-31338"></a>
<a id="trace-31340"></a>
<a id="trace-31353"></a>
<a id="trace-31355"></a>
<a id="trace-31359"></a>
<a id="trace-31361"></a>
<a id="trace-31372"></a>
<a id="trace-31374"></a>
<a id="trace-31383"></a>
<a id="trace-31385"></a>
<a id="trace-31406"></a>
<a id="trace-31408"></a>
<a id="trace-31428"></a>
<a id="trace-31430"></a>
<a id="trace-31511"></a>
<a id="trace-31513"></a>
<a id="trace-31529"></a>
<a id="trace-31531"></a>
<a id="trace-31553"></a>
<a id="trace-31555"></a>
<a id="trace-31558"></a>
<a id="trace-31560"></a>
<a id="trace-31579"></a>
<a id="trace-31581"></a>
<a id="trace-31598"></a>
<a id="trace-31600"></a>
<a id="trace-31607"></a>
<a id="trace-31609"></a>
<a id="trace-31819"></a>
<a id="trace-31821"></a>
<a id="trace-31847"></a>
<a id="trace-31849"></a>
<a id="trace-31857"></a>
<a id="trace-31859"></a>
<a id="trace-31879"></a>
<a id="trace-31881"></a>
<a id="trace-31886"></a>
<a id="trace-31888"></a>
<a id="trace-31966"></a>
<a id="trace-31968"></a>
<a id="trace-32030"></a>
<a id="trace-32032"></a>
<a id="trace-32042"></a>
<a id="trace-32044"></a>
<a id="trace-32057"></a>
<a id="trace-32059"></a>
<a id="trace-32074"></a>
<a id="trace-32076"></a>
<a id="trace-32081"></a>
<a id="trace-32083"></a>
<a id="trace-32100"></a>
<a id="trace-32102"></a>
<a id="trace-32111"></a>
<a id="trace-32113"></a>
<a id="trace-32136"></a>
<a id="trace-32138"></a>
<a id="trace-32209"></a>
<a id="trace-32211"></a>
<a id="trace-32217"></a>
<a id="trace-32219"></a>
<a id="trace-32231"></a>
<a id="trace-32233"></a>
<a id="trace-32251"></a>
<a id="trace-32253"></a>
<a id="trace-32267"></a>
<a id="trace-32269"></a>
<a id="trace-32276"></a>
<a id="trace-32278"></a>
<a id="trace-32297"></a>
<a id="trace-32299"></a>
<a id="trace-32369"></a>
<a id="trace-32371"></a>
<a id="trace-32412"></a>
<a id="trace-32414"></a>
<a id="trace-32424"></a>
<a id="trace-32426"></a>
<a id="trace-32445"></a>
<a id="trace-32447"></a>
<a id="trace-32452"></a>
<a id="trace-32454"></a>
<a id="trace-32466"></a>
<a id="trace-32468"></a>
<a id="trace-32475"></a>
<a id="trace-32477"></a>
<a id="trace-32547"></a>
<a id="trace-32549"></a>
<a id="trace-32563"></a>
<a id="trace-32565"></a>
<a id="trace-32573"></a>
<a id="trace-32575"></a>
<a id="trace-32587"></a>
<a id="trace-32589"></a>
<a id="trace-32597"></a>
<a id="trace-32599"></a>
<a id="trace-32622"></a>
<a id="trace-32624"></a>
<a id="trace-32647"></a>
<a id="trace-32649"></a>
<a id="trace-32656"></a>
<a id="trace-32658"></a>
<a id="trace-32744"></a>
<a id="trace-32746"></a>
<a id="trace-32751"></a>
<a id="trace-32753"></a>
<a id="trace-32764"></a>
<a id="trace-32766"></a>
<a id="trace-32769"></a>
<a id="trace-32771"></a>
<a id="trace-32790"></a>
<a id="trace-32792"></a>
<a id="trace-32800"></a>
<a id="trace-32802"></a>
<a id="trace-32815"></a>
<a id="trace-32817"></a>
<a id="trace-32898"></a>
<a id="trace-32900"></a>
<a id="trace-32905"></a>
<a id="trace-32907"></a>
<a id="trace-32921"></a>
<a id="trace-32923"></a>
<a id="trace-32941"></a>
<a id="trace-32943"></a>
<a id="trace-32957"></a>
<a id="trace-32959"></a>
<a id="trace-32965"></a>
<a id="trace-32967"></a>
<a id="trace-32978"></a>
<a id="trace-32980"></a>
<a id="trace-32991"></a>
<a id="trace-32993"></a>
<a id="trace-33059"></a>
<a id="trace-33061"></a>
<a id="trace-33070"></a>
<a id="trace-33072"></a>
<a id="trace-33092"></a>
<a id="trace-33094"></a>
<a id="trace-33099"></a>
<a id="trace-33101"></a>
<a id="trace-33118"></a>
<a id="trace-33120"></a>
<a id="trace-33140"></a>
<a id="trace-33142"></a>
<a id="trace-33159"></a>
<a id="trace-33161"></a>
<a id="trace-33226"></a>
<a id="trace-33228"></a>
<a id="trace-33234"></a>
<a id="trace-33236"></a>
<a id="trace-33252"></a>
<a id="trace-33254"></a>
<a id="trace-33261"></a>
<a id="trace-33263"></a>
<a id="trace-33275"></a>
<a id="trace-33277"></a>
<a id="trace-33282"></a>
<a id="trace-33284"></a>
<a id="trace-33304"></a>
<a id="trace-33306"></a>
<a id="trace-33312"></a>
<a id="trace-33314"></a>
<a id="trace-33327"></a>
<a id="trace-33329"></a>
<a id="trace-33337"></a>
<a id="trace-33339"></a>
<a id="trace-33403"></a>
<a id="trace-33405"></a>
<a id="trace-33410"></a>
<a id="trace-33412"></a>
<a id="trace-33425"></a>
<a id="trace-33427"></a>
<a id="trace-33442"></a>
<a id="trace-33444"></a>
<a id="trace-33450"></a>
<a id="trace-33452"></a>
<a id="trace-33471"></a>
<a id="trace-33473"></a>
<a id="trace-33478"></a>
<a id="trace-33480"></a>
<a id="trace-33494"></a>
<a id="trace-33496"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 997): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624831201777943, 'next_transition': 1516}.
<a id="trace-1004"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1004): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.787879283456352, 'next_transition': 3364}.
<a id="trace-1195"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1195): received platoon directive. Knowledge: actor memory at 5.00s, trace 891. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299679177365943, 'next_transition': 1512}.
<a id="trace-1512"></a>
<a id="trace-1514"></a>
<a id="trace-1565"></a>
<a id="trace-1567"></a>
<a id="trace-1608"></a>
<a id="trace-1610"></a>
<a id="trace-1656"></a>
<a id="trace-1658"></a>
<a id="trace-1692"></a>
<a id="trace-1694"></a>
<a id="trace-1762"></a>
<a id="trace-1764"></a>
<a id="trace-1787"></a>
<a id="trace-1789"></a>
<a id="trace-1818"></a>
<a id="trace-1820"></a>
<a id="trace-1910"></a>
<a id="trace-1912"></a>
<a id="trace-1941"></a>
<a id="trace-1943"></a>
<a id="trace-1964"></a>
<a id="trace-1966"></a>
<a id="trace-1999"></a>
<a id="trace-2001"></a>
<a id="trace-2030"></a>
<a id="trace-2032"></a>
<a id="trace-2064"></a>
<a id="trace-2066"></a>
<a id="trace-2085"></a>
<a id="trace-2087"></a>
<a id="trace-2117"></a>
<a id="trace-2119"></a>
<a id="trace-2144"></a>
<a id="trace-2146"></a>
<a id="trace-2172"></a>
<a id="trace-2174"></a>
<a id="trace-2257"></a>
<a id="trace-2259"></a>
<a id="trace-2290"></a>
<a id="trace-2292"></a>
<a id="trace-2320"></a>
<a id="trace-2322"></a>
<a id="trace-2350"></a>
<a id="trace-2352"></a>
- 6.20s–16.75s (×44), actor 5, squad 0 (trace 1512): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2257367820264482, 'next_transition': 1565}.
<a id="trace-2357"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2357): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725169878632287, 'next_transition': 2852}.
<a id="trace-2358"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2358): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725169878632287, 'next_transition': 2852}.
<a id="trace-2852"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2852): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623927181926568, 'next_transition': 3353}.
<a id="trace-2853"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2853): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623927181926568, 'next_transition': 3353}.
<a id="trace-2854"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 2854): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623927181926568, 'next_transition': 3353}.
<a id="trace-3353"></a>
<a id="trace-3355"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 3353): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550221198398563, 'next_transition': 3791}.
<a id="trace-3364"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 3364): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2189. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.690395770216383, 'next_transition': 387}.
<a id="trace-3365"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 3365): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2189. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.690395770216383, 'next_transition': 387}.
<a id="trace-3791"></a>
- 17.55s–17.55s (×1), actor 0, squad 0 (trace 3791): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23427504529385057, 'next_transition': 4298}.
<a id="trace-4298"></a>
<a id="trace-4300"></a>
- 17.75s–17.75s (×2), actor 5, squad 0 (trace 4298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5575560588651836, 'next_transition': 4320}.
<a id="trace-4320"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 4320): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3387148183036067, 'next_transition': 4854}.
<a id="trace-4854"></a>
<a id="trace-4856"></a>
<a id="trace-4898"></a>
<a id="trace-4900"></a>
- 18.25s–18.75s (×4), actor 5, squad 0 (trace 4854): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9053919619508379, 'next_transition': 4898}.
<a id="trace-4926"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 4926): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2181. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4543798171676227, 'next_transition': 5450}.
<a id="trace-5450"></a>
<a id="trace-5452"></a>
<a id="trace-5510"></a>
<a id="trace-5512"></a>
<a id="trace-5668"></a>
<a id="trace-5670"></a>
<a id="trace-5727"></a>
<a id="trace-5729"></a>
- 19.25s–20.75s (×8), actor 5, squad 0 (trace 5450): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8909539978974219, 'next_transition': 5510}.
<a id="trace-386"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 386): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-387"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 387): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5755"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 5755): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5755. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6082493291351777, 'next_transition': 5784}.
<a id="trace-5756"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 5756): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5756. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6082493291351777, 'next_transition': 5784}.
<a id="trace-5757"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 5757): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5757. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.703638654969558, 'next_transition': 5892}.
<a id="trace-5758"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 5758): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.737126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 5758. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.703638654969558, 'next_transition': 5892}.
<a id="trace-5784"></a>
<a id="trace-5786"></a>
<a id="trace-5828"></a>
<a id="trace-5830"></a>
<a id="trace-5881"></a>
<a id="trace-5883"></a>
- 21.25s–22.25s (×6), actor 5, squad 0 (trace 5784): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5758. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2104447537960443, 'next_transition': 5828}.
<a id="trace-5892"></a>
- 22.30s–22.30s (×1), actor 8, squad 1 (trace 5892): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 5556. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0949058709310306, 'next_transition': 6383}.
<a id="trace-5893"></a>
- 22.30s–22.30s (×1), actor 8, squad 1 (trace 5893): bounding overwatch. Knowledge: actor memory at 20.00s, trace 5556. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0949058709310306, 'next_transition': 6383}.
<a id="trace-5894"></a>
- 22.30s–22.30s (×1), actor 8, squad 1 (trace 5894): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5556. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0949058709310306, 'next_transition': 6383}.
<a id="trace-6359"></a>
- 22.50s–22.50s (×1), actor 0, squad 0 (trace 6359): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5548. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38042256570943184, 'next_transition': 6376}.
<a id="trace-6376"></a>
<a id="trace-6378"></a>
<a id="trace-6427"></a>
<a id="trace-6429"></a>
<a id="trace-6466"></a>
<a id="trace-6468"></a>
<a id="trace-6517"></a>
<a id="trace-6519"></a>
- 22.75s–24.25s (×8), actor 5, squad 0 (trace 6376): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5758. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0834857160641178, 'next_transition': 6427}.
<a id="trace-6383"></a>
- 22.75s–22.75s (×1), actor 8, squad 1 (trace 6383): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 5556. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1633163947645424, 'next_transition': 7450}.
<a id="trace-6528"></a>
- 24.35s–24.35s (×1), actor 0, squad 0 (trace 6528): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 5548. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7153620286034852, 'next_transition': 7217}.
<a id="trace-7217"></a>
- 24.60s–24.60s (×1), actor 0, squad 0 (trace 7217): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 5548. Next observer evidence: None.
<a id="trace-7247"></a>
<a id="trace-7249"></a>
<a id="trace-7355"></a>
<a id="trace-7357"></a>
<a id="trace-7409"></a>
<a id="trace-7411"></a>
<a id="trace-7953"></a>
<a id="trace-7955"></a>
<a id="trace-8001"></a>
<a id="trace-8003"></a>
<a id="trace-8095"></a>
<a id="trace-8097"></a>
<a id="trace-8165"></a>
<a id="trace-8167"></a>
<a id="trace-8238"></a>
<a id="trace-8240"></a>
- 24.75s–28.25s (×16), actor 5, squad 0 (trace 7247): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 5758. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4267629191620528, 'next_transition': 7355}.
<a id="trace-7450"></a>
- 26.15s–26.15s (×1), actor 8, squad 1 (trace 7450): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 7273. Next observer evidence: {'until': 28.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.702930298929098, 'next_transition': 8280}.
<a id="trace-8263"></a>
- 28.35s–28.35s (×1), actor 0, squad 0 (trace 8263): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 7265. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25089633215702317, 'next_transition': 8818}.
<a id="trace-8280"></a>
- 28.50s–28.50s (×1), actor 8, squad 1 (trace 8280): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 7273. Next observer evidence: {'until': 31.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6581254075830858, 'next_transition': 10695}.
<a id="trace-8818"></a>
<a id="trace-8820"></a>
<a id="trace-8861"></a>
<a id="trace-8863"></a>
<a id="trace-8903"></a>
<a id="trace-8905"></a>
- 28.75s–29.75s (×6), actor 5, squad 0 (trace 8818): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 7270. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8485316637278231, 'next_transition': 8861}.
<a id="trace-8995"></a>
- 30.10s–30.10s (×1), actor 0, squad 0 (trace 8995): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 8917. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16895071404632578, 'next_transition': 10561}.
<a id="trace-10229"></a>
- 30.10s–30.10s (×1), actor 0, squad 0 (trace 10229): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 8917. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16895071404632578, 'next_transition': 10561}.
<a id="trace-10230"></a>
- 30.10s–30.10s (×1), actor 0, squad 0 (trace 10230): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 8917. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16895071404632578, 'next_transition': 10561}.
<a id="trace-10534"></a>
- 30.10s–30.10s (×1), actor 0, squad 0 (trace 10534): Assaulting. Knowledge: actor memory at 30.00s, trace 8917. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16895071404632578, 'next_transition': 10561}.
<a id="trace-10561"></a>
<a id="trace-10563"></a>
<a id="trace-10592"></a>
<a id="trace-10594"></a>
<a id="trace-10631"></a>
<a id="trace-10633"></a>
<a id="trace-10685"></a>
<a id="trace-10687"></a>
<a id="trace-10729"></a>
<a id="trace-10731"></a>
<a id="trace-10772"></a>
<a id="trace-10774"></a>
<a id="trace-10805"></a>
<a id="trace-10807"></a>
<a id="trace-10822"></a>
<a id="trace-10824"></a>
<a id="trace-10849"></a>
<a id="trace-10851"></a>
<a id="trace-10870"></a>
<a id="trace-10872"></a>
<a id="trace-10956"></a>
<a id="trace-10958"></a>
<a id="trace-11756"></a>
<a id="trace-11758"></a>
<a id="trace-11785"></a>
<a id="trace-11787"></a>
<a id="trace-11816"></a>
<a id="trace-11818"></a>
<a id="trace-11838"></a>
<a id="trace-11840"></a>
<a id="trace-11869"></a>
<a id="trace-11871"></a>
<a id="trace-11913"></a>
<a id="trace-11915"></a>
<a id="trace-11955"></a>
<a id="trace-11957"></a>
<a id="trace-11993"></a>
<a id="trace-11995"></a>
<a id="trace-12028"></a>
<a id="trace-12030"></a>
- 30.25s–39.75s (×40), actor 5, squad 0 (trace 10561): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 8922. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35639015381710853, 'next_transition': 10592}.
<a id="trace-10695"></a>
- 31.85s–31.85s (×1), actor 8, squad 1 (trace 10695): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 8925. Next observer evidence: {'until': 35.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 3.3986980337930257, 'next_transition': 10970}.
<a id="trace-10970"></a>
- 35.55s–35.55s (×1), actor 8, squad 1 (trace 10970): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 10893. Next observer evidence: {'until': 43.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.0099948271752324, 'next_transition': 12274}.
<a id="trace-11382"></a>
- 35.55s–35.55s (×1), actor 8, squad 1 (trace 11382): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 10893. Next observer evidence: {'until': 43.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.0099948271752324, 'next_transition': 12274}.
<a id="trace-11383"></a>
- 35.55s–35.55s (×1), actor 8, squad 1 (trace 11383): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 10893. Next observer evidence: {'until': 43.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.0099948271752324, 'next_transition': 12274}.
<a id="trace-11742"></a>
- 35.55s–35.55s (×1), actor 8, squad 1 (trace 11742): Assaulting. Knowledge: actor memory at 35.00s, trace 10893. Next observer evidence: {'until': 43.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.0099948271752324, 'next_transition': 12274}.
<a id="trace-12119"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 12119): NeedSupport. Knowledge: actor memory at 40.00s, trace 12049. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21524770334655433, 'next_transition': 12137}.
<a id="trace-12137"></a>
<a id="trace-12139"></a>
<a id="trace-12155"></a>
<a id="trace-12157"></a>
<a id="trace-12174"></a>
<a id="trace-12176"></a>
<a id="trace-12198"></a>
<a id="trace-12200"></a>
<a id="trace-12218"></a>
<a id="trace-12220"></a>
<a id="trace-12229"></a>
<a id="trace-12231"></a>
<a id="trace-12250"></a>
<a id="trace-12252"></a>
<a id="trace-12263"></a>
<a id="trace-12265"></a>
<a id="trace-12293"></a>
<a id="trace-12295"></a>
<a id="trace-12315"></a>
<a id="trace-12317"></a>
<a id="trace-12405"></a>
<a id="trace-12407"></a>
<a id="trace-12429"></a>
<a id="trace-12431"></a>
<a id="trace-12742"></a>
<a id="trace-12744"></a>
- 40.25s–46.25s (×26), actor 5, squad 0 (trace 12137): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 12053. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29914647935024824, 'next_transition': 12155}.
<a id="trace-12274"></a>
- 43.85s–43.85s (×1), actor 8, squad 1 (trace 12274): NeedSupport. Knowledge: actor memory at 40.00s, trace 12056. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6363074447250324, 'next_transition': 1015}.
<a id="trace-1015"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 1015): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12304"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 12304): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596615 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12304. Next observer evidence: {'until': 45.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.33808139503183654, 'next_transition': 12443}.
<a id="trace-12305"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 12305): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596615 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12305. Next observer evidence: {'until': 45.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.33808139503183654, 'next_transition': 12443}.
<a id="trace-12443"></a>
- 45.95s–45.95s (×1), actor 8, squad 1 (trace 12443): new loss of own base of fire. Knowledge: actor memory at 45.00s, trace 12338. Next observer evidence: {'until': 57.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 11.669281049231413, 'next_transition': 17279}.
<a id="trace-12444"></a>
- 45.95s–45.95s (×1), actor 8, squad 1 (trace 12444): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 12338. Next observer evidence: {'until': 57.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 11.669281049231413, 'next_transition': 17279}.
<a id="trace-12755"></a>
- 46.40s–46.40s (×1), actor 1, squad 0 (trace 12755): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000547053047638, 'next_transition': 12763}.
<a id="trace-12763"></a>
- 46.65s–46.65s (×1), actor 1, squad 0 (trace 12763): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: None.
<a id="trace-12768"></a>
- 46.65s–46.65s (×1), actor 1, squad 0 (trace 12768): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: None.
<a id="trace-12769"></a>
- 46.65s–46.65s (×1), actor 1, squad 0 (trace 12769): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: None.
<a id="trace-13256"></a>
<a id="trace-13258"></a>
- 46.75s–46.75s (×2), actor 5, squad 0 (trace 13256): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12335. Next observer evidence: {'until': 46.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998882099866945, 'next_transition': 13268}.
<a id="trace-13268"></a>
- 46.90s–46.90s (×1), actor 1, squad 0 (trace 13268): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39674065341442627, 'next_transition': 16403}.
<a id="trace-13269"></a>
- 46.90s–46.90s (×1), actor 1, squad 0 (trace 13269): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 12332. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39674065341442627, 'next_transition': 16403}.
<a id="trace-16403"></a>
<a id="trace-16405"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16481"></a>
<a id="trace-16483"></a>
<a id="trace-16504"></a>
<a id="trace-16506"></a>
- 47.25s–48.75s (×8), actor 5, squad 0 (trace 16403): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12335. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41153233037302445, 'next_transition': 16428}.
<a id="trace-16515"></a>
- 49.05s–49.05s (×1), actor 5, squad 0 (trace 16515): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 49.05s, trace 16515. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4089950754813758, 'next_transition': 16540}.
<a id="trace-16540"></a>
<a id="trace-16542"></a>
- 49.25s–49.25s (×2), actor 5, squad 0 (trace 16540): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 49.05s, trace 16515. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8390980446520219, 'next_transition': 1120}.
<a id="trace-1120"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (events line 1120): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16573"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (trace 16573): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.460538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 16573. Next observer evidence: None.
<a id="trace-16574"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (trace 16574): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.460538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 16574. Next observer evidence: None.
<a id="trace-16583"></a>
<a id="trace-16585"></a>
<a id="trace-16677"></a>
<a id="trace-16679"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16760"></a>
<a id="trace-16762"></a>
<a id="trace-16809"></a>
<a id="trace-16811"></a>
<a id="trace-16868"></a>
<a id="trace-16870"></a>
<a id="trace-16929"></a>
<a id="trace-16931"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-17029"></a>
<a id="trace-17031"></a>
<a id="trace-17073"></a>
<a id="trace-17075"></a>
<a id="trace-17087"></a>
<a id="trace-17089"></a>
<a id="trace-17169"></a>
<a id="trace-17171"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17206"></a>
<a id="trace-17208"></a>
<a id="trace-17224"></a>
<a id="trace-17226"></a>
<a id="trace-17252"></a>
<a id="trace-17254"></a>
<a id="trace-17270"></a>
<a id="trace-17272"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17420"></a>
<a id="trace-17422"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
<a id="trace-17473"></a>
<a id="trace-17475"></a>
<a id="trace-17562"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17714"></a>
<a id="trace-17716"></a>
<a id="trace-17798"></a>
<a id="trace-17800"></a>
- 49.75s–65.25s (×53), actor 5, squad 0 (trace 16583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 49.60s, trace 16574. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0717411272745416, 'next_transition': 16677}.
<a id="trace-17279"></a>
- 57.80s–57.80s (×1), actor 8, squad 1 (trace 17279): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 17104. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.773385098431817, 'next_transition': 1442}.
<a id="trace-17280"></a>
- 57.80s–57.80s (×1), actor 8, squad 1 (trace 17280): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 17104. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.773385098431817, 'next_transition': 1442}.
<a id="trace-1442"></a>
- 69.15s–69.15s (×1), actor 1, squad 1 (events line 1442): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17900"></a>
- 69.15s–69.15s (×1), actor 1, squad 1 (trace 17900): renew committed intent (75 s lifetime). Knowledge: actor memory at 69.15s, trace 17900. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.715077707575702, 'next_transition': 18175}.
<a id="trace-17904"></a>
<a id="trace-17906"></a>
<a id="trace-17994"></a>
<a id="trace-17996"></a>
<a id="trace-18016"></a>
<a id="trace-18018"></a>
<a id="trace-18020"></a>
<a id="trace-18031"></a>
- 69.25s–71.70s (×8), actor 1, squad 0 (trace 17904): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 69.15s, trace 17900. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5095929798596349, 'next_transition': 17994}.
<a id="trace-1451"></a>
- 71.95s–71.95s (×1), actor 1, squad 0 (events line 1451): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18037"></a>
- 71.95s–71.95s (×1), actor 1, squad 0 (trace 18037): renew committed intent (75 s lifetime). Knowledge: actor memory at 71.95s, trace 18037. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18045}.
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18073"></a>
<a id="trace-18108"></a>
<a id="trace-18144"></a>
<a id="trace-18164"></a>
<a id="trace-18166"></a>
<a id="trace-18408"></a>
<a id="trace-18410"></a>
<a id="trace-18451"></a>
<a id="trace-18453"></a>
<a id="trace-18483"></a>
<a id="trace-18485"></a>
<a id="trace-18487"></a>
- 72.25s–77.25s (×14), actor 1, squad 0 (trace 18045): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 71.95s, trace 18037. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.030616640537096868, 'next_transition': 18073}.
<a id="trace-18175"></a>
- 74.30s–74.30s (×1), actor 8, squad 1 (trace 18175): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 17933. Next observer evidence: {'until': 85.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.730692066202124, 'next_transition': 20039}.
<a id="trace-18253"></a>
- 74.30s–74.30s (×1), actor 8, squad 1 (trace 18253): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 17933. Next observer evidence: {'until': 85.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.730692066202124, 'next_transition': 20039}.
<a id="trace-18494"></a>
- 77.30s–77.30s (×1), actor 1, squad 0 (trace 18494): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 18338. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34518460369054665, 'next_transition': 19450}.
<a id="trace-18495"></a>
- 77.30s–77.30s (×1), actor 1, squad 0 (trace 18495): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 18338. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34518460369054665, 'next_transition': 19450}.
<a id="trace-19438"></a>
- 77.30s–77.30s (×1), actor 1, squad 0 (trace 19438): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 75.00s, trace 18338. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34518460369054665, 'next_transition': 19450}.
<a id="trace-19450"></a>
<a id="trace-19461"></a>
<a id="trace-19465"></a>
<a id="trace-19481"></a>
<a id="trace-19490"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19507"></a>
<a id="trace-19576"></a>
<a id="trace-19579"></a>
<a id="trace-19581"></a>
- 77.70s–80.25s (×11), actor 1, squad 0 (trace 19450): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 75.00s, trace 18338. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5407094673898358, 'next_transition': 19461}.
<a id="trace-1528"></a>
- 80.45s–80.45s (×1), actor 1, squad 0 (events line 1528): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19593"></a>
- 80.45s–80.45s (×1), actor 1, squad 0 (trace 19593): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.346777 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.45s, trace 19593. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2200291095656433, 'next_transition': 19600}.
<a id="trace-19594"></a>
- 80.45s–80.45s (×1), actor 1, squad 0 (trace 19594): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.346777 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.45s, trace 19594. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2200291095656433, 'next_transition': 19600}.
<a id="trace-19600"></a>
<a id="trace-19613"></a>
<a id="trace-19615"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
- 80.70s–83.25s (×7), actor 1, squad 0 (trace 19600): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.45s, trace 19594. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3445205470055447, 'next_transition': 19613}.
<a id="trace-19668"></a>
- 83.25s–83.25s (×1), actor 1, squad 0 (trace 19668): ReactToContact: cover and return fire. Knowledge: actor memory at 80.45s, trace 19594. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5277776766692797, 'next_transition': 19932}.
<a id="trace-19669"></a>
- 83.25s–83.25s (×1), actor 1, squad 0 (trace 19669): received platoon directive. Knowledge: actor memory at 80.45s, trace 19594. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5277776766692797, 'next_transition': 19932}.
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-20016"></a>
<a id="trace-20018"></a>
<a id="trace-20154"></a>
<a id="trace-20156"></a>
- 84.25s–86.25s (×6), actor 1, squad 0 (trace 19932): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.45s, trace 19594. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6993016386729094, 'next_transition': 20016}.
<a id="trace-20039"></a>
- 85.80s–85.80s (×1), actor 8, squad 1 (trace 20039): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 19956. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.435979176335718, 'next_transition': 20686}.
<a id="trace-20040"></a>
- 85.80s–85.80s (×1), actor 8, squad 1 (trace 20040): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 19956. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.435979176335718, 'next_transition': 20686}.
<a id="trace-20171"></a>
- 86.65s–86.65s (×1), actor 1, squad 0 (trace 20171): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 85.00s, trace 19954. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299985739071162, 'next_transition': 20184}.
<a id="trace-20184"></a>
- 87.15s–87.15s (×1), actor 1, squad 0 (trace 20184): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 19954. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500335395039847, 'next_transition': 20321}.
<a id="trace-20185"></a>
- 87.15s–87.15s (×1), actor 1, squad 0 (trace 20185): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 19954. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500335395039847, 'next_transition': 20321}.
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20370"></a>
<a id="trace-20372"></a>
<a id="trace-20396"></a>
<a id="trace-20398"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20502"></a>
<a id="trace-20504"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20547"></a>
<a id="trace-20549"></a>
<a id="trace-20569"></a>
<a id="trace-20571"></a>
<a id="trace-20652"></a>
<a id="trace-20654"></a>
<a id="trace-20671"></a>
<a id="trace-20673"></a>
<a id="trace-20696"></a>
<a id="trace-20698"></a>
<a id="trace-20724"></a>
<a id="trace-20726"></a>
<a id="trace-20746"></a>
<a id="trace-20748"></a>
<a id="trace-20821"></a>
<a id="trace-20823"></a>
- 87.25s–100.25s (×28), actor 1, squad 0 (trace 20321): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 85.00s, trace 19954. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.38207243586786005, 'next_transition': 20370}.
<a id="trace-20686"></a>
- 96.55s–96.55s (×1), actor 8, squad 1 (trace 20686): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 95.00s, trace 20595. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.526879800111852, 'next_transition': 21135}.
<a id="trace-20835"></a>
- 100.45s–100.45s (×1), actor 1, squad 0 (trace 20835): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 20764. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20873}.
<a id="trace-20857"></a>
- 100.45s–100.45s (×1), actor 1, squad 0 (trace 20857): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 20764. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20873}.
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20903"></a>
<a id="trace-20905"></a>
<a id="trace-20933"></a>
<a id="trace-20935"></a>
<a id="trace-20955"></a>
<a id="trace-20957"></a>
<a id="trace-21036"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
<a id="trace-21083"></a>
<a id="trace-21085"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
- 101.25s–112.25s (×23), actor 1, squad 0 (trace 20873): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 20764. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20903}.
<a id="trace-21135"></a>
- 109.20s–109.20s (×1), actor 8, squad 1 (trace 21135): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 20978. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0780969838655047, 'next_transition': 21459}.
<a id="trace-21157"></a>
- 109.20s–109.20s (×1), actor 8, squad 1 (trace 21157): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 20978. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0780969838655047, 'next_transition': 21459}.
<a id="trace-21410"></a>
- 113.00s–113.00s (×1), actor 1, squad 0 (trace 21410): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 21264. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21415}.
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21437"></a>
<a id="trace-21439"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-23222"></a>
<a id="trace-23224"></a>
- 113.25s–116.25s (×8), actor 1, squad 0 (trace 21415): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.00s, trace 21264. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21437}.
<a id="trace-21459"></a>
- 114.95s–114.95s (×1), actor 8, squad 1 (trace 21459): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 21265. Next observer evidence: {'until': 115.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21561}.
<a id="trace-21561"></a>
- 115.95s–115.95s (×1), actor 8, squad 1 (trace 21561): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 115.00s, trace 21465. Next observer evidence: {'until': 119.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.667729455284568, 'next_transition': 1765}.
<a id="trace-21562"></a>
- 115.95s–115.95s (×1), actor 8, squad 1 (trace 21562): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 115.00s, trace 21465. Next observer evidence: {'until': 119.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.667729455284568, 'next_transition': 1765}.
<a id="trace-1743"></a>
- 116.70s–116.70s (×1), actor 1, squad 0 (events line 1743): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}.
<a id="trace-23273"></a>
- 116.70s–116.70s (×1), actor 1, squad 0 (trace 23273): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318046 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 116.70s, trace 23273. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}.
<a id="trace-23274"></a>
- 116.70s–116.70s (×1), actor 1, squad 0 (trace 23274): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318046 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 116.70s, trace 23274. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}.
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23340"></a>
<a id="trace-23342"></a>
- 117.25s–118.25s (×4), actor 1, squad 0 (trace 23294): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 116.70s, trace 23274. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23340}.
<a id="trace-23358"></a>
- 118.75s–118.75s (×1), actor 1, squad 0 (trace 23358): Withdraw to received rally. Knowledge: actor memory at 116.70s, trace 23274. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23419}.
<a id="trace-23359"></a>
- 118.75s–118.75s (×1), actor 1, squad 0 (trace 23359): rearward bound: one stationary suppressing element. Knowledge: actor memory at 116.70s, trace 23274. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23419}.
<a id="trace-23419"></a>
<a id="trace-23421"></a>
<a id="trace-23505"></a>
<a id="trace-23507"></a>
<a id="trace-23529"></a>
<a id="trace-23531"></a>
<a id="trace-23734"></a>
<a id="trace-23736"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23828"></a>
<a id="trace-23830"></a>
<a id="trace-23909"></a>
<a id="trace-23911"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-23956"></a>
<a id="trace-23958"></a>
<a id="trace-23993"></a>
<a id="trace-23995"></a>
<a id="trace-24030"></a>
<a id="trace-24032"></a>
<a id="trace-24124"></a>
<a id="trace-24126"></a>
- 119.25s–130.30s (×24), actor 1, squad 0 (trace 23419): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 116.70s, trace 23274. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3625000000000007, 'next_transition': 23505}.
<a id="trace-1765"></a>
- 119.55s–119.55s (×1), actor 1, squad 1 (events line 1765): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}.
<a id="trace-23436"></a>
- 119.55s–119.55s (×1), actor 1, squad 1 (trace 23436): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.321954 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 119.55s, trace 23436. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}.
<a id="trace-23437"></a>
- 119.55s–119.55s (×1), actor 1, squad 1 (trace 23437): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.321954 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 119.55s, trace 23437. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}.
<a id="trace-23537"></a>
- 121.35s–121.35s (×1), actor 8, squad 1 (trace 23537): Withdraw to received rally. Knowledge: actor memory at 120.00s, trace 23447. Next observer evidence: {'until': 136, 'shots': 1, 'casualties': 1, 'mean_displacement': 26.771272444960246, 'next_transition': 24335}.
<a id="trace-23538"></a>
- 121.35s–121.35s (×1), actor 8, squad 1 (trace 23538): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 23447. Next observer evidence: {'until': 136, 'shots': 1, 'casualties': 1, 'mean_displacement': 26.771272444960246, 'next_transition': 24335}.
<a id="trace-24134"></a>
- 130.45s–130.45s (×1), actor 1, squad 0 (trace 24134): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 24063. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24159}.
<a id="trace-24135"></a>
- 130.45s–130.45s (×1), actor 1, squad 0 (trace 24135): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 24063. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24159}.
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24187"></a>
<a id="trace-24189"></a>
<a id="trace-24219"></a>
<a id="trace-24230"></a>
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24253"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24328"></a>
<a id="trace-24347"></a>
<a id="trace-24352"></a>
<a id="trace-24354"></a>
<a id="trace-24368"></a>
<a id="trace-24427"></a>
<a id="trace-24430"></a>
<a id="trace-24432"></a>
<a id="trace-24465"></a>
<a id="trace-24467"></a>
<a id="trace-24487"></a>
<a id="trace-24495"></a>
<a id="trace-24497"></a>
<a id="trace-24499"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24727"></a>
<a id="trace-24729"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24776"></a>
<a id="trace-24778"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24867"></a>
<a id="trace-24869"></a>
<a id="trace-24888"></a>
<a id="trace-24890"></a>
<a id="trace-24907"></a>
<a id="trace-24909"></a>
<a id="trace-24930"></a>
<a id="trace-24932"></a>
<a id="trace-24948"></a>
<a id="trace-24950"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25052"></a>
<a id="trace-25054"></a>
<a id="trace-25068"></a>
<a id="trace-25070"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25109"></a>
<a id="trace-25111"></a>
<a id="trace-25204"></a>
<a id="trace-25206"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25245"></a>
<a id="trace-25247"></a>
<a id="trace-25266"></a>
<a id="trace-25268"></a>
<a id="trace-25284"></a>
<a id="trace-25286"></a>
<a id="trace-25362"></a>
<a id="trace-25364"></a>
<a id="trace-25396"></a>
<a id="trace-25398"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25461"></a>
<a id="trace-25463"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25556"></a>
<a id="trace-25558"></a>
<a id="trace-25578"></a>
<a id="trace-25580"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25648"></a>
<a id="trace-25665"></a>
<a id="trace-25667"></a>
<a id="trace-25739"></a>
<a id="trace-25759"></a>
<a id="trace-25761"></a>
<a id="trace-25778"></a>
<a id="trace-25780"></a>
<a id="trace-25804"></a>
<a id="trace-25806"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25946"></a>
<a id="trace-25948"></a>
<a id="trace-25966"></a>
<a id="trace-25968"></a>
<a id="trace-25985"></a>
- 131.30s–178.30s (×100), actor 1, squad 0 (trace 24159): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 24063. Next observer evidence: {'until': 132.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24187}.
<a id="trace-24335"></a>
- 136.00s–136.00s (×1), actor 9, squad 1 (trace 24335): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 135.00s, trace 24261. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1190720477950695, 'next_transition': 24375}.
<a id="trace-24336"></a>
- 136.00s–136.00s (×1), actor 9, squad 1 (trace 24336): NeedSupport. Knowledge: actor memory at 135.00s, trace 24261. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1190720477950695, 'next_transition': 24375}.
<a id="trace-24375"></a>
- 137.00s–137.00s (×1), actor 9, squad 1 (trace 24375): Reorganise: completed/failed drill. Knowledge: actor memory at 135.00s, trace 24261. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6866199787045597, 'next_transition': 24588}.
<a id="trace-24378"></a>
- 137.00s–137.00s (×1), actor 9, squad 1 (trace 24378): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 24261. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6866199787045597, 'next_transition': 24588}.
<a id="trace-24379"></a>
- 137.00s–137.00s (×1), actor 9, squad 1 (trace 24379): Reorganise complete: known contact. Knowledge: actor memory at 135.00s, trace 24261. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6866199787045597, 'next_transition': 24588}.
<a id="trace-24588"></a>
- 140.65s–140.65s (×1), actor 9, squad 1 (trace 24588): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 24520. Next observer evidence: {'until': 161.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.190668981680467, 'next_transition': 25421}.
<a id="trace-24589"></a>
- 140.65s–140.65s (×1), actor 9, squad 1 (trace 24589): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 24520. Next observer evidence: {'until': 161.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.190668981680467, 'next_transition': 25421}.
<a id="trace-25421"></a>
- 161.70s–161.70s (×1), actor 9, squad 1 (trace 25421): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 25304. Next observer evidence: {'until': 181.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1796234313473607, 'next_transition': 2188}.
<a id="trace-2156"></a>
- 178.60s–178.60s (×1), actor 1, squad 0 (events line 2156): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25994"></a>
- 178.60s–178.60s (×1), actor 1, squad 0 (trace 25994): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.60s, trace 25994. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26004}.
<a id="trace-26004"></a>
<a id="trace-26006"></a>
<a id="trace-26083"></a>
<a id="trace-26127"></a>
<a id="trace-26129"></a>
<a id="trace-26150"></a>
<a id="trace-26152"></a>
<a id="trace-26175"></a>
<a id="trace-26177"></a>
<a id="trace-26193"></a>
<a id="trace-26195"></a>
<a id="trace-26266"></a>
<a id="trace-26268"></a>
<a id="trace-26291"></a>
<a id="trace-26293"></a>
<a id="trace-26318"></a>
<a id="trace-26320"></a>
<a id="trace-26352"></a>
<a id="trace-26371"></a>
<a id="trace-26373"></a>
<a id="trace-26447"></a>
<a id="trace-26449"></a>
<a id="trace-26468"></a>
<a id="trace-26470"></a>
<a id="trace-26485"></a>
<a id="trace-26487"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26534"></a>
<a id="trace-26536"></a>
<a id="trace-26625"></a>
<a id="trace-26627"></a>
<a id="trace-26646"></a>
<a id="trace-26648"></a>
<a id="trace-26664"></a>
<a id="trace-26666"></a>
<a id="trace-26684"></a>
<a id="trace-26686"></a>
<a id="trace-26703"></a>
<a id="trace-26705"></a>
<a id="trace-26783"></a>
<a id="trace-26785"></a>
<a id="trace-26825"></a>
<a id="trace-26827"></a>
<a id="trace-26846"></a>
<a id="trace-26848"></a>
<a id="trace-26866"></a>
<a id="trace-26868"></a>
<a id="trace-26885"></a>
<a id="trace-26887"></a>
<a id="trace-26956"></a>
<a id="trace-26958"></a>
<a id="trace-26983"></a>
<a id="trace-26985"></a>
<a id="trace-27010"></a>
<a id="trace-27012"></a>
<a id="trace-27041"></a>
<a id="trace-27043"></a>
<a id="trace-27062"></a>
<a id="trace-27064"></a>
<a id="trace-27137"></a>
<a id="trace-27139"></a>
<a id="trace-27162"></a>
<a id="trace-27164"></a>
<a id="trace-27182"></a>
<a id="trace-27184"></a>
<a id="trace-27210"></a>
<a id="trace-27212"></a>
<a id="trace-27246"></a>
<a id="trace-27248"></a>
<a id="trace-27320"></a>
<a id="trace-27322"></a>
<a id="trace-27346"></a>
<a id="trace-27348"></a>
<a id="trace-27368"></a>
<a id="trace-27370"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27418"></a>
<a id="trace-27420"></a>
<a id="trace-27493"></a>
<a id="trace-27495"></a>
<a id="trace-27528"></a>
<a id="trace-27530"></a>
<a id="trace-27546"></a>
<a id="trace-27548"></a>
<a id="trace-27572"></a>
<a id="trace-27574"></a>
<a id="trace-27591"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27695"></a>
<a id="trace-27697"></a>
<a id="trace-27720"></a>
<a id="trace-27722"></a>
<a id="trace-27754"></a>
<a id="trace-27756"></a>
<a id="trace-27772"></a>
<a id="trace-27774"></a>
<a id="trace-27844"></a>
<a id="trace-27846"></a>
<a id="trace-27869"></a>
<a id="trace-27871"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27924"></a>
<a id="trace-27926"></a>
<a id="trace-27962"></a>
<a id="trace-28148"></a>
<a id="trace-28150"></a>
<a id="trace-28176"></a>
<a id="trace-28178"></a>
<a id="trace-28204"></a>
<a id="trace-28228"></a>
<a id="trace-28230"></a>
<a id="trace-28256"></a>
<a id="trace-28258"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
- 179.30s–240.30s (×119), actor 1, squad 0 (trace 26004): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 178.60s, trace 25994. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26083}.
<a id="trace-2188"></a>
- 181.40s–181.40s (×1), actor 1, squad 1 (events line 2188): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26136"></a>
- 181.40s–181.40s (×1), actor 1, squad 1 (trace 26136): renew committed intent (75 s lifetime). Knowledge: actor memory at 181.40s, trace 26136. Next observer evidence: {'until': 211.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2528}.
<a id="trace-2528"></a>
- 232.05s–232.05s (×1), actor 1, squad 1 (events line 2528): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}.
<a id="trace-27884"></a>
- 232.05s–232.05s (×1), actor 1, squad 1 (trace 27884): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448300 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.05s, trace 27884. Next observer evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}.
<a id="trace-27885"></a>
- 232.05s–232.05s (×1), actor 1, squad 1 (trace 27885): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448300 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.05s, trace 27885. Next observer evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}.
<a id="trace-2533"></a>
- 232.40s–232.40s (×1), actor 1, squad 1 (events line 2533): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27902"></a>
- 232.40s–232.40s (×1), actor 1, squad 1 (trace 27902): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.40s, trace 27902. Next observer evidence: {'until': 234.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27969}.
<a id="trace-27903"></a>
- 232.40s–232.40s (×1), actor 1, squad 1 (trace 27903): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 232.40s, trace 27903. Next observer evidence: {'until': 234.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27969}.
<a id="trace-27969"></a>
- 234.40s–234.40s (×1), actor 9, squad 1 (trace 27969): MoveTactically. Knowledge: actor memory at 230.00s, trace 27790. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.90458247512965, 'next_transition': 28558}.
<a id="trace-27970"></a>
- 234.40s–234.40s (×1), actor 9, squad 1 (trace 27970): traveling. Knowledge: actor memory at 230.00s, trace 27790. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.90458247512965, 'next_transition': 28558}.
<a id="trace-27971"></a>
- 234.40s–234.40s (×1), actor 9, squad 1 (trace 27971): received platoon directive. Knowledge: actor memory at 230.00s, trace 27790. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.90458247512965, 'next_transition': 28558}.
<a id="trace-2617"></a>
- 240.85s–240.85s (×1), actor 1, squad 0 (events line 2617): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28377"></a>
- 240.85s–240.85s (×1), actor 1, squad 0 (trace 28377): renew committed intent (75 s lifetime). Knowledge: actor memory at 240.85s, trace 28377. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28387}.
<a id="trace-28387"></a>
<a id="trace-28389"></a>
<a id="trace-28411"></a>
<a id="trace-28413"></a>
<a id="trace-28434"></a>
<a id="trace-28436"></a>
<a id="trace-28457"></a>
<a id="trace-28532"></a>
<a id="trace-28534"></a>
<a id="trace-28664"></a>
<a id="trace-28666"></a>
<a id="trace-28710"></a>
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28759"></a>
<a id="trace-28761"></a>
<a id="trace-28837"></a>
<a id="trace-28839"></a>
<a id="trace-28863"></a>
<a id="trace-28865"></a>
<a id="trace-28892"></a>
<a id="trace-28894"></a>
<a id="trace-28978"></a>
<a id="trace-28980"></a>
<a id="trace-29014"></a>
<a id="trace-29016"></a>
<a id="trace-29095"></a>
<a id="trace-29097"></a>
<a id="trace-29121"></a>
<a id="trace-29123"></a>
<a id="trace-29143"></a>
<a id="trace-29145"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29192"></a>
<a id="trace-29194"></a>
<a id="trace-29274"></a>
<a id="trace-29276"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29335"></a>
<a id="trace-29337"></a>
<a id="trace-29358"></a>
<a id="trace-29360"></a>
<a id="trace-29382"></a>
<a id="trace-29384"></a>
<a id="trace-29457"></a>
<a id="trace-29459"></a>
<a id="trace-29486"></a>
<a id="trace-29488"></a>
<a id="trace-29527"></a>
<a id="trace-29529"></a>
<a id="trace-29636"></a>
<a id="trace-29638"></a>
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29734"></a>
<a id="trace-29736"></a>
<a id="trace-29761"></a>
<a id="trace-29763"></a>
<a id="trace-29786"></a>
<a id="trace-29788"></a>
<a id="trace-29817"></a>
<a id="trace-29819"></a>
<a id="trace-29847"></a>
<a id="trace-29849"></a>
<a id="trace-29921"></a>
<a id="trace-29923"></a>
<a id="trace-29945"></a>
<a id="trace-29947"></a>
<a id="trace-30222"></a>
<a id="trace-30224"></a>
<a id="trace-30252"></a>
<a id="trace-30254"></a>
<a id="trace-30290"></a>
<a id="trace-30292"></a>
<a id="trace-30386"></a>
<a id="trace-30388"></a>
<a id="trace-30411"></a>
<a id="trace-30413"></a>
<a id="trace-30434"></a>
<a id="trace-30436"></a>
<a id="trace-30465"></a>
<a id="trace-30467"></a>
<a id="trace-30734"></a>
<a id="trace-30736"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30852"></a>
<a id="trace-30854"></a>
<a id="trace-30872"></a>
<a id="trace-30874"></a>
<a id="trace-30893"></a>
<a id="trace-30895"></a>
<a id="trace-30915"></a>
<a id="trace-30917"></a>
<a id="trace-30990"></a>
<a id="trace-30992"></a>
<a id="trace-31013"></a>
<a id="trace-31015"></a>
<a id="trace-31035"></a>
<a id="trace-31037"></a>
<a id="trace-31054"></a>
<a id="trace-31056"></a>
<a id="trace-31074"></a>
<a id="trace-31076"></a>
<a id="trace-31150"></a>
<a id="trace-31152"></a>
<a id="trace-31173"></a>
<a id="trace-31175"></a>
<a id="trace-31195"></a>
<a id="trace-31197"></a>
<a id="trace-31219"></a>
<a id="trace-31221"></a>
<a id="trace-31246"></a>
<a id="trace-31248"></a>
<a id="trace-31325"></a>
<a id="trace-31349"></a>
<a id="trace-31366"></a>
<a id="trace-31368"></a>
- 241.30s–302.30s (×120), actor 1, squad 0 (trace 28387): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.85s, trace 28377. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28411}.
<a id="trace-28558"></a>
- 245.90s–245.90s (×1), actor 9, squad 1 (trace 28558): traveling overwatch. Knowledge: actor memory at 245.00s, trace 28477. Next observer evidence: {'until': 253, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.158330620776741, 'next_transition': 28914}.
<a id="trace-28559"></a>
- 245.90s–245.90s (×1), actor 9, squad 1 (trace 28559): matching received arrivals: traveling stage complete. Knowledge: actor memory at 245.00s, trace 28477. Next observer evidence: {'until': 253, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.158330620776741, 'next_transition': 28914}.
<a id="trace-28914"></a>
- 253.10s–253.10s (×1), actor 9, squad 1 (trace 28914): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 28778. Next observer evidence: {'until': 267.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.453574646766416, 'next_transition': 29537}.
<a id="trace-29537"></a>
- 267.50s–267.50s (×1), actor 9, squad 1 (trace 29537): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 265.00s, trace 29402. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.182131429472134, 'next_transition': 29966}.
<a id="trace-29966"></a>
- 276.95s–276.95s (×1), actor 9, squad 1 (trace 29966): ReactToContact: cover and return fire. Knowledge: actor memory at 275.00s, trace 29866. Next observer evidence: {'until': 280, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1031055483979317, 'next_transition': 2908}.
<a id="trace-29967"></a>
- 276.95s–276.95s (×1), actor 9, squad 1 (trace 29967): bounding overwatch. Knowledge: actor memory at 275.00s, trace 29866. Next observer evidence: {'until': 280, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1031055483979317, 'next_transition': 2908}.
<a id="trace-29968"></a>
- 276.95s–276.95s (×1), actor 9, squad 1 (trace 29968): new contact inside 100 m. Knowledge: actor memory at 275.00s, trace 29866. Next observer evidence: {'until': 280, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1031055483979317, 'next_transition': 2908}.
<a id="trace-2908"></a>
- 280.10s–280.10s (×1), actor 1, squad 1 (events line 2908): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30328"></a>
- 280.10s–280.10s (×1), actor 1, squad 1 (trace 30328): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.073324 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 280.10s, trace 30328. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267974445402768, 'next_transition': 30379}.
<a id="trace-30329"></a>
- 280.10s–280.10s (×1), actor 1, squad 1 (trace 30329): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.073324 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 280.10s, trace 30329. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267974445402768, 'next_transition': 30379}.
<a id="trace-30379"></a>
- 280.25s–280.25s (×1), actor 9, squad 1 (trace 30379): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 280.00s, trace 30314. Next observer evidence: {'until': 282.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4324791973005646, 'next_transition': 30446}.
<a id="trace-30446"></a>
- 282.60s–282.60s (×1), actor 9, squad 1 (trace 30446): received platoon directive; retain contact cover stage. Knowledge: actor memory at 280.00s, trace 30314. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680148814547083, 'next_transition': 30455}.
<a id="trace-30455"></a>
- 282.85s–282.85s (×1), actor 9, squad 1 (trace 30455): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 280.00s, trace 30314. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6237242564627413, 'next_transition': 30485}.
<a id="trace-30485"></a>
- 283.95s–283.95s (×1), actor 9, squad 1 (trace 30485): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 280.00s, trace 30314. Next observer evidence: {'until': 285.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.07940056674860672, 'next_transition': 2993}.
<a id="trace-2993"></a>
- 285.70s–285.70s (×1), actor 1, squad 1 (events line 2993): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30837"></a>
- 285.70s–285.70s (×1), actor 1, squad 1 (trace 30837): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.103169 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 285.70s, trace 30837. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30868}.
<a id="trace-30838"></a>
- 285.70s–285.70s (×1), actor 1, squad 1 (trace 30838): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.103169 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 285.70s, trace 30838. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30868}.
<a id="trace-30868"></a>
- 287.25s–287.25s (×1), actor 9, squad 1 (trace 30868): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 285.00s, trace 30762. Next observer evidence: None.
<a id="trace-30881"></a>
- 287.35s–287.35s (×1), actor 9, squad 1 (trace 30881): received platoon directive; retain contact cover stage. Knowledge: actor memory at 285.00s, trace 30762. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3010}.
<a id="trace-3010"></a>
- 291.30s–291.30s (×1), actor 1, squad 1 (events line 3010): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31022"></a>
- 291.30s–291.30s (×1), actor 1, squad 1 (trace 31022): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.427122 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 291.30s, trace 31022. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31048}.
<a id="trace-31023"></a>
- 291.30s–291.30s (×1), actor 1, squad 1 (trace 31023): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.427122 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 291.30s, trace 31023. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31048}.
<a id="trace-31048"></a>
- 292.95s–292.95s (×1), actor 9, squad 1 (trace 31048): received platoon directive; retain contact cover stage. Knowledge: actor memory at 290.00s, trace 30932. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31070}.
<a id="trace-31070"></a>
- 293.95s–293.95s (×1), actor 9, squad 1 (trace 31070): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 290.00s, trace 30932. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31189}.
<a id="trace-31189"></a>
- 296.90s–296.90s (×1), actor 1, squad 1 (trace 31189): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.453039 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.90s, trace 31189. Next observer evidence: None.
<a id="trace-31190"></a>
- 296.90s–296.90s (×1), actor 1, squad 1 (trace 31190): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.453039 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.90s, trace 31190. Next observer evidence: None.
<a id="trace-3021"></a>
- 296.90s–296.90s (×1), actor 1, squad 1 (events line 3021): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 298.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31229}.
<a id="trace-31229"></a>
- 298.55s–298.55s (×1), actor 9, squad 1 (trace 31229): received platoon directive; retain contact cover stage. Knowledge: actor memory at 295.00s, trace 31092. Next observer evidence: {'until': 302.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3048}.
<a id="trace-3047"></a>
- 302.50s–302.50s (×1), actor 1, squad 0 (events line 3047): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31394}.
<a id="trace-3048"></a>
- 302.50s–302.50s (×1), actor 1, squad 1 (events line 3048): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 304, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31412}.
<a id="trace-31376"></a>
- 302.50s–302.50s (×1), actor 1, squad 0 (trace 31376): renew committed intent (75 s lifetime). Knowledge: actor memory at 302.50s, trace 31376. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31394}.
<a id="trace-31377"></a>
- 302.50s–302.50s (×1), actor 1, squad 1 (trace 31377): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.479915 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 302.50s, trace 31377. Next observer evidence: {'until': 304, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31412}.
<a id="trace-31378"></a>
- 302.50s–302.50s (×1), actor 1, squad 1 (trace 31378): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.479915 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 302.50s, trace 31378. Next observer evidence: {'until': 304, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31412}.
<a id="trace-31394"></a>
<a id="trace-31396"></a>
<a id="trace-31416"></a>
<a id="trace-31418"></a>
<a id="trace-31493"></a>
<a id="trace-31495"></a>
<a id="trace-31523"></a>
<a id="trace-31525"></a>
<a id="trace-31547"></a>
<a id="trace-31549"></a>
<a id="trace-31573"></a>
<a id="trace-31575"></a>
<a id="trace-31592"></a>
<a id="trace-31594"></a>
<a id="trace-31669"></a>
<a id="trace-31671"></a>
<a id="trace-31813"></a>
<a id="trace-31815"></a>
<a id="trace-31841"></a>
<a id="trace-31843"></a>
<a id="trace-31874"></a>
<a id="trace-31954"></a>
<a id="trace-31956"></a>
<a id="trace-32025"></a>
<a id="trace-32051"></a>
<a id="trace-32053"></a>
<a id="trace-32068"></a>
<a id="trace-32070"></a>
<a id="trace-32094"></a>
<a id="trace-32096"></a>
<a id="trace-32124"></a>
<a id="trace-32126"></a>
<a id="trace-32203"></a>
<a id="trace-32205"></a>
<a id="trace-32225"></a>
<a id="trace-32227"></a>
<a id="trace-32242"></a>
<a id="trace-32244"></a>
<a id="trace-32261"></a>
<a id="trace-32263"></a>
<a id="trace-32283"></a>
<a id="trace-32285"></a>
<a id="trace-32363"></a>
<a id="trace-32365"></a>
<a id="trace-32392"></a>
<a id="trace-32394"></a>
<a id="trace-32418"></a>
<a id="trace-32420"></a>
<a id="trace-32439"></a>
<a id="trace-32441"></a>
<a id="trace-32460"></a>
<a id="trace-32462"></a>
<a id="trace-32535"></a>
<a id="trace-32537"></a>
<a id="trace-32557"></a>
<a id="trace-32559"></a>
<a id="trace-32581"></a>
<a id="trace-32583"></a>
<a id="trace-32616"></a>
<a id="trace-32618"></a>
<a id="trace-32641"></a>
<a id="trace-32643"></a>
<a id="trace-32716"></a>
<a id="trace-32718"></a>
<a id="trace-32738"></a>
<a id="trace-32740"></a>
<a id="trace-32758"></a>
<a id="trace-32760"></a>
<a id="trace-32784"></a>
<a id="trace-32786"></a>
<a id="trace-32809"></a>
<a id="trace-32811"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-32915"></a>
<a id="trace-32917"></a>
<a id="trace-32931"></a>
<a id="trace-32933"></a>
<a id="trace-32951"></a>
<a id="trace-32953"></a>
<a id="trace-32972"></a>
<a id="trace-32974"></a>
<a id="trace-33053"></a>
<a id="trace-33055"></a>
<a id="trace-33086"></a>
<a id="trace-33088"></a>
<a id="trace-33107"></a>
<a id="trace-33109"></a>
<a id="trace-33127"></a>
<a id="trace-33129"></a>
<a id="trace-33147"></a>
<a id="trace-33149"></a>
<a id="trace-33220"></a>
<a id="trace-33222"></a>
<a id="trace-33246"></a>
<a id="trace-33248"></a>
<a id="trace-33270"></a>
<a id="trace-33298"></a>
<a id="trace-33300"></a>
<a id="trace-33321"></a>
<a id="trace-33323"></a>
<a id="trace-33397"></a>
<a id="trace-33399"></a>
<a id="trace-33419"></a>
<a id="trace-33421"></a>
<a id="trace-33436"></a>
<a id="trace-33438"></a>
<a id="trace-33465"></a>
<a id="trace-33467"></a>
<a id="trace-33488"></a>
<a id="trace-33490"></a>
- 303.30s–359.30s (×111), actor 1, squad 0 (trace 31394): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 302.50s, trace 31378. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31416}.
<a id="trace-31412"></a>
- 304.15s–304.15s (×1), actor 9, squad 1 (trace 31412): received platoon directive; retain contact cover stage. Knowledge: actor memory at 300.00s, trace 31266. Next observer evidence: {'until': 308, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3087}.
<a id="trace-3087"></a>
- 308.10s–308.10s (×1), actor 1, squad 1 (events line 3087): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31566"></a>
- 308.10s–308.10s (×1), actor 1, squad 1 (trace 31566): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.507804 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 308.10s, trace 31566. Next observer evidence: {'until': 309.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31610}.
<a id="trace-31567"></a>
- 308.10s–308.10s (×1), actor 1, squad 1 (trace 31567): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.507804 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 308.10s, trace 31567. Next observer evidence: {'until': 309.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31610}.
<a id="trace-31610"></a>
- 309.85s–309.85s (×1), actor 9, squad 1 (trace 31610): received platoon directive; retain contact cover stage. Knowledge: actor memory at 305.00s, trace 31434. Next observer evidence: {'until': 310.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31680}.
<a id="trace-31680"></a>
- 310.60s–310.60s (×1), actor 9, squad 1 (trace 31680): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 310.00s, trace 31614. Next observer evidence: {'until': 313.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31891}.
<a id="trace-31891"></a>
- 313.90s–313.90s (×1), actor 9, squad 1 (trace 31891): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 310.00s, trace 31614. Next observer evidence: {'until': 325.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32374}.
<a id="trace-31894"></a>
- 313.90s–313.90s (×1), actor 9, squad 1 (trace 31894): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 310.00s, trace 31614. Next observer evidence: {'until': 325.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32374}.
<a id="trace-31895"></a>
- 313.90s–313.90s (×1), actor 9, squad 1 (trace 31895): rearward bound: one stationary suppressing element. Knowledge: actor memory at 310.00s, trace 31614. Next observer evidence: {'until': 325.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32374}.
<a id="trace-32374"></a>
- 325.60s–325.60s (×1), actor 9, squad 1 (trace 32374): NeedSupport. Knowledge: actor memory at 325.00s, trace 32307. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32633}.
<a id="trace-32633"></a>
- 333.95s–333.95s (×1), actor 9, squad 1 (trace 32633): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 330.00s, trace 32480. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

208 matched order/radio deliveries; 501 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.508s; maximum 2.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5548: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5554: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 5558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 5559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5560: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5561: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5562: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5563: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5564: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5565: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5566: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5568: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5569: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 5570: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 5571: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5755: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5756: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5757: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 5758: estimate 13.57; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 7265: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 7266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 7267: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 7268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 7269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 7270: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 7271: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 7272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 7273: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 7274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 7275: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 7276: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 7277: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 7278: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 7279: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 7280: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 7281: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 7282: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 7283: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 7284: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 7285: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 7286: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 7287: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 7288: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 8917: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 8918: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 8919: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 8920: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 8921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 8922: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 8923: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 8924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 8925: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 8926: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 8927: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 8928: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 8929: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 8930: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 8931: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 8932: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 8933: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 8934: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 8935: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 8936: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 8937: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 8938: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 8939: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 8940: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10886: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10887: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10888: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10890: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10891: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 10893: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10894: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 10895: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10896: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10897: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10898: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10899: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10900: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10901: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10902: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10903: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10904: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10905: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10906: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10907: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10908: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 12049: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 12050: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 12051: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 12052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 12053: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 12054: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 12055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 12056: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 12057: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 12058: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 12059: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 12060: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 12061: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 12062: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 12063: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 12064: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 12065: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 12066: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 12067: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 12068: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 12069: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 12070: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 12071: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12304: estimate 15.09; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12305: estimate 15.09; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12332: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12333: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12335: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12336: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 12338: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12339: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 12340: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 12341: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12342: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12343: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12344: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12345: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12346: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12347: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12348: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 12349: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12350: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12351: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 12352: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 12353: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.05s leader 5, trace 16515: estimate 15.23; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 16573: estimate 15.20; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 16574: estimate 15.20; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16598: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 16599: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16601: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16602: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16603: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 16604: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16605: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 16606: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16607: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16608: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16609: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16610: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16611: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16612: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16613: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16614: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16615: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16616: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16617: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16618: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 17099: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 17100: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 17101: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 17102: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 17103: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 17104: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 17105: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 17106: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 17107: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 17108: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 17109: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 17110: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 17111: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 17112: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 17113: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 17114: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 17115: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 17116: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 17117: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 17118: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 17491: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 17492: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 17493: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 17494: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 17495: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 17496: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 17497: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 17498: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 17499: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 17500: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 17501: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 17502: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 17503: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 17504: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 17505: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 17506: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 17507: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 17508: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 17509: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 17734: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17735: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 17736: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 17737: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 17738: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 17739: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 17740: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 17741: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17742: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 17743: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 17744: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17745: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17746: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17747: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17748: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17749: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17750: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 17751: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 17752: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.15s leader 1, trace 17900: estimate 14.70; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 17930: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17931: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 17932: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 17933: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 17934: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 17935: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 17936: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17937: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 17938: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 17939: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17940: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17941: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17942: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17943: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17944: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17945: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 17946: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 17947: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.95s leader 1, trace 18037: estimate 14.65; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 18338: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 18339: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 18340: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 18341: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 18342: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 18343: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 18344: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 18345: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 18346: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 18347: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 18348: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 18349: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 18350: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 18351: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 18352: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 18353: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 18354: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 18355: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 19516: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 19517: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 19518: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 19519: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 19520: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 19521: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 19522: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 19523: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 19524: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 19525: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 19526: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 19527: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 19528: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 19529: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 19530: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 19531: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 19532: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.45s leader 1, trace 19593: estimate 14.42; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.45s leader 1, trace 19594: estimate 14.42; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 19954: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 19955: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 19956: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 19957: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 19958: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 19959: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 19960: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 19961: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 19962: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 19963: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 19964: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 19965: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 19966: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 19967: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 19968: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 19969: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 19970: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 20424: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 20425: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 20426: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 20427: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 20428: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 20429: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 20430: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 20431: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 20432: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 20433: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 20434: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 20435: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 20436: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 20437: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 20438: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 20439: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 20594: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 20595: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 20596: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 20597: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 20598: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 20599: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 20600: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 20601: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 20602: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 20603: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 20604: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 20605: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 20606: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 20607: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 20608: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 20609: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20764: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 20765: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 20766: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 20767: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20768: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20769: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20770: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20771: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20772: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20773: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20774: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20775: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20776: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20777: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 20778: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 20779: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20977: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 20978: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20979: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 20980: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20981: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20982: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20983: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20984: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20985: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20986: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20987: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20988: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20989: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20990: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 20991: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 20992: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 21264: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 21265: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 21266: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 21267: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 21268: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 21269: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 21270: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 21271: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 21272: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 21273: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 21274: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 21275: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 21276: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 21277: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 21278: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 21279: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 21464: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 21465: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 21466: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 21467: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 21468: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 21469: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 21470: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 21471: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 21472: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 21473: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 21474: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 21475: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 21476: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 21477: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 21478: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 21479: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.70s leader 1, trace 23273: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.70s leader 1, trace 23274: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 119.55s leader 1, trace 23436: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 119.55s leader 1, trace 23437: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 23446: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 23447: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 23448: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 23449: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 23450: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 23451: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 23452: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 23453: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 23454: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 23455: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 23456: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 23457: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 23458: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 23459: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 23460: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 23461: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 23850: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 23851: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 23852: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 23853: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 23854: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 23855: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 23856: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 23857: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 23858: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 23859: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 23860: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 23861: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 23862: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 23863: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 23864: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 23865: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 24063: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 24064: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 24065: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 24066: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 24067: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 24068: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 24069: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 24070: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 24071: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 24072: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 24073: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 24074: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 24075: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 24076: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 24077: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 24078: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 24260: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 24261: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 24262: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 24263: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 24264: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 24265: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 24266: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 24267: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 24268: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 24269: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 24270: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 24271: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 24272: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 24273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 24519: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 24520: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 24521: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 24522: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 24523: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 24524: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 24525: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 24526: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 24527: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 24528: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 24529: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 24530: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 24531: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 24532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24810: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 24811: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 24812: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 24813: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24814: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24815: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24816: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24817: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24818: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24819: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24820: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 24821: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 24822: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 24823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24968: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 24969: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 24970: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24971: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24972: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24973: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24974: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24975: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24976: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24977: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24978: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24979: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 24980: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 24981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 25146: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 25147: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 25148: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 25149: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 25150: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 25151: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 25152: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 25153: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 25154: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 25155: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 25156: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 25157: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 25158: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 25159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 25303: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 25304: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 25305: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 25306: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 25307: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 25308: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 25309: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 25310: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 25311: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 25312: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 25313: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 25314: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 25315: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 25316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 25499: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 25500: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 25501: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 25502: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 25503: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 25504: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 25505: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 25506: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 25507: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 25508: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 25509: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 25510: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 25511: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 25512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 25683: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 25684: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 25685: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 25686: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25687: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25688: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25689: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25690: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25691: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25692: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25693: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25694: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 25695: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 25696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 25864: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 25865: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 25866: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 25867: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25868: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 25869: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25870: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25871: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 25872: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25873: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25874: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 25875: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 25876: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 25877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.60s leader 1, trace 25994: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 26026: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 26027: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 26028: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 26029: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 26030: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 26031: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 26032: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 26033: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 26034: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 26035: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 26036: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 26037: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 26038: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 26039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.40s leader 1, trace 26136: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 26210: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 26211: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 26212: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 26213: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 26214: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 26215: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 26216: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 26217: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 26218: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 26219: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 26220: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 26221: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 26222: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 26223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 26389: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 26390: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 26391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 26392: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26393: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 26394: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26395: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26396: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 26397: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26398: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26399: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26400: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 26401: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 26402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 26564: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 26565: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 26566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 26567: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 26568: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 26569: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 26570: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 26571: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 26572: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 26573: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 26574: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 26575: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 26576: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 26577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 26727: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 26728: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 26729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 26730: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 26731: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 26732: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 26733: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 26734: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 26735: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 26736: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 26737: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 26738: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 26739: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 26740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 26900: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 26901: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 26902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 26903: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 26904: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 26905: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 26906: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 26907: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 26908: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 26909: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 26910: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 26911: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 26912: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 26913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 27081: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 27082: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 27083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 27084: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27085: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 27086: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27087: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27088: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27089: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27090: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27091: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27092: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 27093: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 27094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 27264: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 27265: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 27266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 27267: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 27268: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 27269: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 27270: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 27271: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 27272: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 27273: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 27274: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 27275: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 27276: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 27277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 27430: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 27431: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 27432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 27433: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27434: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 27435: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27436: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27437: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27438: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27439: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 27440: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 27441: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 27442: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 27443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 27607: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 27608: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 27609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 27610: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27611: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 27612: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27613: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27614: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27615: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27616: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27617: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 27618: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 27619: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 27620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 27789: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 27790: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 27791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 27792: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 27793: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 27794: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 27795: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 27796: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 27797: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 27798: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 27799: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 27800: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 27801: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 27802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.05s leader 1, trace 27884: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.05s leader 1, trace 27885: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.40s leader 1, trace 27902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.40s leader 1, trace 27903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 28092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 28093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 28094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 28103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 28104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 28278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 28279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 28280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 28281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 28282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 28283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 28284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 28285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 28286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 28287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 28288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 28289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 28290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 28291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.85s leader 1, trace 28377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 28476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 28477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 28478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 28479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 28481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 28486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 28487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 28488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 28489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 28777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 28778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 28779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 28780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 28781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 28782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 28783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 28784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 28785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 28786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 28787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 28788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 28789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 28790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 29038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 29039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 11, trace 29040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 29041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 29043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 29048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 29050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 29051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 29219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 29220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 11, trace 29221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 29222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 29223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 29224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 29225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 29226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 29227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 29228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 29229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 29230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 29231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 29232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 29401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 29402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 11, trace 29403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 29404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 29405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 29406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 29407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 29408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 29409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 29410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 29411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 29412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 29413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 29414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 29678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 29679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 11, trace 29680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 29681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 29682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 29683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 29684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 29685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 29686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 29687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 29688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 29689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 29690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 29691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 29865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 29866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 11, trace 29867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 29868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 29870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 29875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 29876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 29877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 29878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 30313: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 30314: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 11, trace 30315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 30316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 30317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 30318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 30319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 30320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 30321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 30322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 30323: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 30324: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 30325: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 30326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.10s leader 1, trace 30328: estimate 1.45; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.10s leader 1, trace 30329: estimate 1.45; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 30761: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 30762: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 30763: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 30764: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 30765: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 30766: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 30767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 30768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 30769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 30770: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 30771: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 30772: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 30773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.70s leader 1, trace 30837: estimate 1.43; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.70s leader 1, trace 30838: estimate 1.43; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 30931: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 30932: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 30933: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 30934: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 30935: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 30936: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 30937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 30938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 30939: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 30940: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 30941: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 30942: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 30943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.30s leader 1, trace 31022: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.30s leader 1, trace 31023: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 31091: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 31092: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 31093: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31094: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31095: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31096: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31098: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31099: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31100: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31101: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 31102: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 31103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.90s leader 1, trace 31189: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.90s leader 1, trace 31190: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 31265: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 31266: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 31267: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 31268: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31269: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31270: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 31272: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31273: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31274: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31275: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 31276: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 31277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 1, trace 31376: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 1, trace 31377: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.50s leader 1, trace 31378: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 31433: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 31434: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 31435: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 31436: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 31437: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 31438: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 31439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 31440: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 31441: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 31442: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 31443: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 31444: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 31445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 308.10s leader 1, trace 31566: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 308.10s leader 1, trace 31567: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 31613: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 31614: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 31615: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 31616: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 31617: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 31618: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 31619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 31620: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 31621: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 31622: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 31623: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 31624: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 31625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 31970: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 31971: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 31972: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 31973: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 31974: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 31975: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 31976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 31977: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 31978: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 31979: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 31980: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 31981: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 31982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 32148: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 32149: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 32150: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32151: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32152: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32153: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32155: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32156: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32157: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32158: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 32159: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 32160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 32306: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 32307: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 32308: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 32309: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32310: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32311: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 32313: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32314: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32315: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32316: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 32317: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 32318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 32479: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 32480: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 32481: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 32482: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 32483: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 32484: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 32485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 32486: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 32487: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 32488: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 32489: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 32490: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 32491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 32661: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 32662: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 32663: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 32664: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 32665: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 32666: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 32667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 32668: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 32669: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 32670: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 32671: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 32672: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 32673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 32836: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 32837: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 32838: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 32839: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 32840: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 32841: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 32842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 32843: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 32844: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 32845: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 32846: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 32847: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 32848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 32995: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 32996: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 32997: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 32998: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 32999: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 33000: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 33001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 33002: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 33003: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 33004: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 33005: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 33006: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 33007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 33164: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 33165: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 33166: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33167: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33168: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33169: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33171: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33172: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33173: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33174: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 33175: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 33176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 33342: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 33343: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 33344: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 33345: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 33346: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 33347: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 33348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 33349: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 33350: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 33351: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 33352: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 33353: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 33354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 33512: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 33513: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 33514: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 33515: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 33516: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 33517: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 33518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 33519: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 33520: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 33521: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 33522: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 33523: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 33524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Ash killed in action
- 1: Dane incapacitated
- 1: Soren killed in action
- 1: Moss killed in action
- 1: Iven killed in action
- 1: Tern killed in action
- 1: Reed killed in action
- 1: Pike killed in action
- 1: Bren incapacitated
- 1: Ellis incapacitated

## Outcome attribution

- 116.70s, evidence 1743: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 116.70s, evidence 23273: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318046 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 116.70s, evidence 23274: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318046 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23294}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 119.55s, evidence 1765: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 119.55s, evidence 23436: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.321954 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 119.55s, evidence 23437: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.321954 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2508010701011947, 'next_transition': 23537}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 178.60s, evidence 2156: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 181.40s, evidence 2188: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.05s, evidence 2528: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.05s, evidence 27884: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448300 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 232.05s, evidence 27885: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448300 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 240.85s, evidence 2617: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 302.50s, evidence 3047: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31394}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
