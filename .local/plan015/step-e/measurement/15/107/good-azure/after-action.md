# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/107/good-azure/battle-107-1789673961048070539`

## Battle summary

**Ember** · 360 s · 338 shots.

### Turning points

- 23.6s, squad 5: contact (events line 281). First recorded contact.
- 37.4s, squad 0: withdrawal ([trace 8674](#trace-8674)). 79.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.5s, squad 1: help call ([trace 12877](#trace-12877)). 79.3s, squad 0: answered a neighbour with support by fire.
- 55.4s, squad 0: help call ([trace 14034](#trace-14034)). 56.7s, squad 1: answered a neighbour with support by fire.
- 56.7s, squad 1: help answer ([trace 14181](#trace-14181)). 92.9s, squad 1: answered a neighbour with support by fire.
- 79.3s, squad 0: help answer ([trace 16623](#trace-16623)). 92.7s, squad 0: prepared a base of fire.
- 91.7s, squad 0: help call ([trace 18877](#trace-18877)). 92.9s, squad 1: answered a neighbour with support by fire.
- 92.9s, squad 1: help answer ([trace 19749](#trace-19749)). 104.8s, squad 1: advanced tactically.
- 113.0s, squad 1: withdrawal ([trace 21500](#trace-21500)). No completion observed before termination.
- 113.2s, squad 0: withdrawal ([trace 21558](#trace-21558)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 4 further drill types; withdrew; 40 shots, 4/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; no completed objective recorded; 12 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 156 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 130 shots, 0/4 lost.

### Decisions and attribution

At 39.7s, squad 1 chose prepared a base of fire ([trace 9119](#trace-9119)), followed by 0 shots and 1 own casualties; estimate 14.2 against 0 distinct squad-reported contacts; At 39.7s, squad 1 chose advanced tactically ([trace 11998](#trace-11998)), followed by 0 shots and 1 own casualties; estimate 14.2 against 0 distinct squad-reported contacts; At 26.5s, squad 1 chose took cover and returned fire ([trace 3821](#trace-3821)), followed by 3 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.085029018396664, 'next_transition': 1004}.

### Communication

195 matched deliveries (mean 0.44s, max 1.65s); 509 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.65s, squad 5, contact, evidence events line 281: First recorded contact; .
- 37.35s, squad 0, withdrawal, evidence 8674: BreakContact: believed ratio at least two without superiority; 79.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.55s, squad 1, help call, evidence 12877: NeedSupport; 79.3s, squad 0: answered a neighbour with support by fire.
- 55.40s, squad 0, help call, evidence 14034: NeedSupport; 56.7s, squad 1: answered a neighbour with support by fire.
- 56.70s, squad 1, help answer, evidence 14181: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 92.9s, squad 1: answered a neighbour with support by fire.
- 79.30s, squad 0, help answer, evidence 16623: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 92.7s, squad 0: prepared a base of fire.
- 91.70s, squad 0, help call, evidence 18877: NeedSupport; 92.9s, squad 1: answered a neighbour with support by fire.
- 92.90s, squad 1, help answer, evidence 19749: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 104.8s, squad 1: advanced tactically.
- 112.95s, squad 1, withdrawal, evidence 21500: Withdraw to received rally; No completion observed before termination.
- 113.20s, squad 0, withdrawal, evidence 21558: Withdraw to received rally; No completion observed before termination.
- 114.45s, squad 0, help call, evidence 21833: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505123575358304, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505123575358304, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505123575358304, 'next_transition': 105}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-768"></a>
<a id="trace-770"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600170955451082, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.085029018396664, 'next_transition': 1004}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.085029018396664, 'next_transition': 1004}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.085029018396664, 'next_transition': 1004}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1232"></a>
<a id="trace-1234"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1305"></a>
<a id="trace-1307"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1386"></a>
<a id="trace-1388"></a>
<a id="trace-1434"></a>
<a id="trace-1436"></a>
<a id="trace-1459"></a>
<a id="trace-1461"></a>
<a id="trace-1479"></a>
<a id="trace-1481"></a>
<a id="trace-1572"></a>
<a id="trace-1574"></a>
<a id="trace-1593"></a>
<a id="trace-1595"></a>
<a id="trace-1616"></a>
<a id="trace-1618"></a>
<a id="trace-1644"></a>
<a id="trace-1646"></a>
<a id="trace-1673"></a>
<a id="trace-1675"></a>
<a id="trace-1702"></a>
<a id="trace-1704"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9444319242167485, 'next_transition': 881}.
<a id="trace-995"></a>
<a id="trace-1236"></a>
<a id="trace-1282"></a>
<a id="trace-1284"></a>
<a id="trace-1390"></a>
<a id="trace-1392"></a>
<a id="trace-1438"></a>
<a id="trace-1440"></a>
<a id="trace-1483"></a>
<a id="trace-1485"></a>
<a id="trace-1576"></a>
<a id="trace-1578"></a>
<a id="trace-1597"></a>
<a id="trace-1599"></a>
<a id="trace-1620"></a>
<a id="trace-1622"></a>
<a id="trace-1677"></a>
<a id="trace-1679"></a>
<a id="trace-2071"></a>
<a id="trace-2073"></a>
<a id="trace-2102"></a>
<a id="trace-2104"></a>
<a id="trace-2237"></a>
<a id="trace-2239"></a>
<a id="trace-2322"></a>
<a id="trace-2324"></a>
<a id="trace-2617"></a>
<a id="trace-2619"></a>
<a id="trace-2652"></a>
<a id="trace-2654"></a>
<a id="trace-2680"></a>
<a id="trace-2682"></a>
<a id="trace-2738"></a>
<a id="trace-2740"></a>
<a id="trace-2844"></a>
<a id="trace-2846"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-2941"></a>
<a id="trace-2943"></a>
<a id="trace-2982"></a>
<a id="trace-2984"></a>
<a id="trace-3002"></a>
<a id="trace-3004"></a>
<a id="trace-3032"></a>
<a id="trace-3034"></a>
<a id="trace-3567"></a>
<a id="trace-3569"></a>
<a id="trace-3599"></a>
<a id="trace-3601"></a>
<a id="trace-3638"></a>
<a id="trace-3640"></a>
<a id="trace-3734"></a>
<a id="trace-3736"></a>
<a id="trace-3756"></a>
<a id="trace-3758"></a>
<a id="trace-4140"></a>
<a id="trace-4142"></a>
<a id="trace-4167"></a>
<a id="trace-4169"></a>
<a id="trace-4211"></a>
<a id="trace-4213"></a>
<a id="trace-4239"></a>
<a id="trace-4241"></a>
<a id="trace-4280"></a>
<a id="trace-4282"></a>
<a id="trace-4309"></a>
<a id="trace-4311"></a>
<a id="trace-4413"></a>
<a id="trace-4415"></a>
<a id="trace-7564"></a>
<a id="trace-7566"></a>
<a id="trace-7589"></a>
<a id="trace-7591"></a>
<a id="trace-7617"></a>
<a id="trace-7619"></a>
<a id="trace-7644"></a>
<a id="trace-7646"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-7839"></a>
<a id="trace-7841"></a>
<a id="trace-7866"></a>
<a id="trace-7868"></a>
<a id="trace-8403"></a>
<a id="trace-8405"></a>
<a id="trace-8567"></a>
<a id="trace-8569"></a>
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8647"></a>
<a id="trace-8649"></a>
<a id="trace-8670"></a>
<a id="trace-8672"></a>
<a id="trace-9037"></a>
<a id="trace-9039"></a>
<a id="trace-9067"></a>
<a id="trace-9069"></a>
<a id="trace-9092"></a>
<a id="trace-9094"></a>
<a id="trace-12237"></a>
<a id="trace-12239"></a>
<a id="trace-12383"></a>
<a id="trace-12385"></a>
<a id="trace-12443"></a>
<a id="trace-12445"></a>
<a id="trace-12508"></a>
<a id="trace-12510"></a>
<a id="trace-12552"></a>
<a id="trace-12554"></a>
<a id="trace-12594"></a>
<a id="trace-12596"></a>
<a id="trace-12615"></a>
<a id="trace-12617"></a>
<a id="trace-12645"></a>
<a id="trace-12647"></a>
<a id="trace-12766"></a>
<a id="trace-12768"></a>
<a id="trace-12806"></a>
<a id="trace-12808"></a>
<a id="trace-12850"></a>
<a id="trace-12852"></a>
<a id="trace-12905"></a>
<a id="trace-12907"></a>
<a id="trace-12960"></a>
<a id="trace-12962"></a>
<a id="trace-13007"></a>
<a id="trace-13009"></a>
<a id="trace-13102"></a>
<a id="trace-13104"></a>
<a id="trace-13140"></a>
<a id="trace-13142"></a>
<a id="trace-13491"></a>
<a id="trace-13493"></a>
<a id="trace-13515"></a>
<a id="trace-13517"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13802"></a>
<a id="trace-13804"></a>
<a id="trace-13830"></a>
<a id="trace-13832"></a>
<a id="trace-13861"></a>
<a id="trace-13863"></a>
<a id="trace-13891"></a>
<a id="trace-13893"></a>
<a id="trace-13910"></a>
<a id="trace-13912"></a>
<a id="trace-13945"></a>
<a id="trace-13947"></a>
<a id="trace-14030"></a>
<a id="trace-14032"></a>
<a id="trace-14053"></a>
<a id="trace-14055"></a>
<a id="trace-15113"></a>
<a id="trace-15115"></a>
<a id="trace-15142"></a>
<a id="trace-15144"></a>
<a id="trace-15163"></a>
<a id="trace-15165"></a>
<a id="trace-15214"></a>
<a id="trace-15216"></a>
<a id="trace-15232"></a>
<a id="trace-15234"></a>
<a id="trace-15260"></a>
<a id="trace-15262"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15386"></a>
<a id="trace-15388"></a>
<a id="trace-15399"></a>
<a id="trace-15401"></a>
<a id="trace-15431"></a>
<a id="trace-15433"></a>
<a id="trace-15450"></a>
<a id="trace-15452"></a>
<a id="trace-15460"></a>
<a id="trace-15462"></a>
<a id="trace-15479"></a>
<a id="trace-15481"></a>
<a id="trace-15840"></a>
<a id="trace-15842"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15889"></a>
<a id="trace-15891"></a>
<a id="trace-15904"></a>
<a id="trace-15906"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-15942"></a>
<a id="trace-15944"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-16001"></a>
<a id="trace-16003"></a>
<a id="trace-16017"></a>
<a id="trace-16019"></a>
<a id="trace-16100"></a>
<a id="trace-16102"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
<a id="trace-16135"></a>
<a id="trace-16137"></a>
<a id="trace-16145"></a>
<a id="trace-16147"></a>
<a id="trace-16166"></a>
<a id="trace-16168"></a>
<a id="trace-16180"></a>
<a id="trace-16182"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16233"></a>
<a id="trace-16235"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16333"></a>
<a id="trace-16335"></a>
<a id="trace-16343"></a>
<a id="trace-16345"></a>
<a id="trace-16500"></a>
<a id="trace-16502"></a>
<a id="trace-16525"></a>
<a id="trace-16527"></a>
<a id="trace-16573"></a>
<a id="trace-16575"></a>
<a id="trace-16587"></a>
<a id="trace-16589"></a>
<a id="trace-18229"></a>
<a id="trace-18231"></a>
<a id="trace-18417"></a>
<a id="trace-18419"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18486"></a>
<a id="trace-18488"></a>
<a id="trace-18516"></a>
<a id="trace-18518"></a>
<a id="trace-18601"></a>
<a id="trace-18603"></a>
<a id="trace-18610"></a>
<a id="trace-18612"></a>
<a id="trace-18630"></a>
<a id="trace-18632"></a>
<a id="trace-18645"></a>
<a id="trace-18647"></a>
<a id="trace-18662"></a>
<a id="trace-18664"></a>
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18738"></a>
<a id="trace-18740"></a>
<a id="trace-18839"></a>
<a id="trace-18841"></a>
<a id="trace-18868"></a>
<a id="trace-18870"></a>
<a id="trace-18886"></a>
<a id="trace-18888"></a>
<a id="trace-18909"></a>
<a id="trace-18911"></a>
<a id="trace-19741"></a>
<a id="trace-19743"></a>
<a id="trace-19771"></a>
<a id="trace-19773"></a>
<a id="trace-19787"></a>
<a id="trace-19789"></a>
<a id="trace-19808"></a>
<a id="trace-19810"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19924"></a>
<a id="trace-19926"></a>
<a id="trace-19950"></a>
<a id="trace-19952"></a>
<a id="trace-19962"></a>
<a id="trace-19964"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-19995"></a>
<a id="trace-19997"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20060"></a>
<a id="trace-20062"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20139"></a>
<a id="trace-20141"></a>
<a id="trace-20293"></a>
<a id="trace-20295"></a>
<a id="trace-20448"></a>
<a id="trace-20450"></a>
<a id="trace-20487"></a>
<a id="trace-20489"></a>
<a id="trace-20527"></a>
<a id="trace-20529"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20894"></a>
<a id="trace-20896"></a>
<a id="trace-20915"></a>
<a id="trace-20917"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
<a id="trace-21150"></a>
<a id="trace-21152"></a>
<a id="trace-21195"></a>
<a id="trace-21197"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21377"></a>
<a id="trace-21379"></a>
<a id="trace-21493"></a>
<a id="trace-21495"></a>
<a id="trace-21783"></a>
<a id="trace-21785"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21820"></a>
<a id="trace-21822"></a>
<a id="trace-21926"></a>
<a id="trace-21928"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-21999"></a>
<a id="trace-22001"></a>
<a id="trace-22014"></a>
<a id="trace-22016"></a>
<a id="trace-22032"></a>
<a id="trace-22034"></a>
<a id="trace-22050"></a>
<a id="trace-22052"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22186"></a>
<a id="trace-22188"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22219"></a>
<a id="trace-22221"></a>
<a id="trace-22233"></a>
<a id="trace-22235"></a>
<a id="trace-22239"></a>
<a id="trace-22241"></a>
<a id="trace-22260"></a>
<a id="trace-22262"></a>
<a id="trace-22269"></a>
<a id="trace-22271"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22359"></a>
<a id="trace-22361"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22395"></a>
<a id="trace-22397"></a>
<a id="trace-22417"></a>
<a id="trace-22419"></a>
<a id="trace-22452"></a>
<a id="trace-22454"></a>
<a id="trace-22483"></a>
<a id="trace-22485"></a>
<a id="trace-22490"></a>
<a id="trace-22492"></a>
<a id="trace-22563"></a>
<a id="trace-22565"></a>
<a id="trace-22573"></a>
<a id="trace-22575"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22646"></a>
<a id="trace-22648"></a>
<a id="trace-22659"></a>
<a id="trace-22661"></a>
<a id="trace-22670"></a>
<a id="trace-22672"></a>
<a id="trace-22679"></a>
<a id="trace-22681"></a>
<a id="trace-22691"></a>
<a id="trace-22693"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22809"></a>
<a id="trace-22811"></a>
<a id="trace-22821"></a>
<a id="trace-22823"></a>
<a id="trace-22849"></a>
<a id="trace-22851"></a>
<a id="trace-22858"></a>
<a id="trace-22860"></a>
<a id="trace-22938"></a>
<a id="trace-22940"></a>
<a id="trace-22959"></a>
<a id="trace-22961"></a>
<a id="trace-22971"></a>
<a id="trace-22973"></a>
<a id="trace-22982"></a>
<a id="trace-22984"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23036"></a>
<a id="trace-23038"></a>
<a id="trace-23049"></a>
<a id="trace-23051"></a>
<a id="trace-23121"></a>
<a id="trace-23123"></a>
<a id="trace-23126"></a>
<a id="trace-23128"></a>
<a id="trace-23140"></a>
<a id="trace-23142"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23190"></a>
<a id="trace-23192"></a>
<a id="trace-23206"></a>
<a id="trace-23208"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23330"></a>
<a id="trace-23332"></a>
<a id="trace-23337"></a>
<a id="trace-23339"></a>
<a id="trace-23350"></a>
<a id="trace-23352"></a>
<a id="trace-23360"></a>
<a id="trace-23362"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23472"></a>
<a id="trace-23474"></a>
<a id="trace-23484"></a>
<a id="trace-23486"></a>
<a id="trace-23497"></a>
<a id="trace-23499"></a>
<a id="trace-23510"></a>
<a id="trace-23512"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23548"></a>
<a id="trace-23550"></a>
<a id="trace-23562"></a>
<a id="trace-23564"></a>
<a id="trace-23571"></a>
<a id="trace-23573"></a>
<a id="trace-23586"></a>
<a id="trace-23588"></a>
<a id="trace-23664"></a>
<a id="trace-23666"></a>
<a id="trace-23669"></a>
<a id="trace-23671"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23695"></a>
<a id="trace-23697"></a>
<a id="trace-23710"></a>
<a id="trace-23712"></a>
<a id="trace-23723"></a>
<a id="trace-23725"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23749"></a>
<a id="trace-23751"></a>
<a id="trace-23772"></a>
<a id="trace-23774"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23921"></a>
<a id="trace-23923"></a>
<a id="trace-23929"></a>
<a id="trace-23931"></a>
<a id="trace-23946"></a>
<a id="trace-23948"></a>
<a id="trace-23952"></a>
<a id="trace-23954"></a>
<a id="trace-24032"></a>
<a id="trace-24034"></a>
<a id="trace-24045"></a>
<a id="trace-24047"></a>
<a id="trace-24063"></a>
<a id="trace-24065"></a>
<a id="trace-24077"></a>
<a id="trace-24079"></a>
<a id="trace-24091"></a>
<a id="trace-24093"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24127"></a>
<a id="trace-24129"></a>
<a id="trace-24140"></a>
<a id="trace-24142"></a>
<a id="trace-24147"></a>
<a id="trace-24149"></a>
<a id="trace-24227"></a>
<a id="trace-24229"></a>
<a id="trace-24241"></a>
<a id="trace-24243"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24286"></a>
<a id="trace-24288"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24408"></a>
<a id="trace-24410"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-24431"></a>
<a id="trace-24433"></a>
<a id="trace-24452"></a>
<a id="trace-24454"></a>
<a id="trace-24462"></a>
<a id="trace-24464"></a>
<a id="trace-24482"></a>
<a id="trace-24484"></a>
<a id="trace-24500"></a>
<a id="trace-24502"></a>
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24520"></a>
<a id="trace-24522"></a>
<a id="trace-24598"></a>
<a id="trace-24600"></a>
<a id="trace-24606"></a>
<a id="trace-24608"></a>
<a id="trace-24618"></a>
<a id="trace-24620"></a>
<a id="trace-24627"></a>
<a id="trace-24629"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24703"></a>
<a id="trace-24705"></a>
<a id="trace-24785"></a>
<a id="trace-24787"></a>
<a id="trace-24790"></a>
<a id="trace-24792"></a>
<a id="trace-24803"></a>
<a id="trace-24805"></a>
<a id="trace-24812"></a>
<a id="trace-24814"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24840"></a>
<a id="trace-24842"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
<a id="trace-24888"></a>
<a id="trace-24890"></a>
<a id="trace-24967"></a>
<a id="trace-24969"></a>
<a id="trace-24974"></a>
<a id="trace-24976"></a>
<a id="trace-24993"></a>
<a id="trace-24995"></a>
<a id="trace-25016"></a>
<a id="trace-25018"></a>
<a id="trace-25028"></a>
<a id="trace-25030"></a>
<a id="trace-25063"></a>
<a id="trace-25065"></a>
<a id="trace-25071"></a>
<a id="trace-25073"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25153"></a>
<a id="trace-25155"></a>
<a id="trace-25169"></a>
<a id="trace-25171"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25194"></a>
<a id="trace-25196"></a>
<a id="trace-25204"></a>
<a id="trace-25206"></a>
<a id="trace-25223"></a>
<a id="trace-25225"></a>
<a id="trace-25239"></a>
<a id="trace-25241"></a>
<a id="trace-25250"></a>
<a id="trace-25252"></a>
<a id="trace-25329"></a>
<a id="trace-25331"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25357"></a>
<a id="trace-25359"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25399"></a>
<a id="trace-25401"></a>
<a id="trace-25411"></a>
<a id="trace-25413"></a>
<a id="trace-25426"></a>
<a id="trace-25428"></a>
<a id="trace-25440"></a>
<a id="trace-25442"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
<a id="trace-25526"></a>
<a id="trace-25528"></a>
<a id="trace-25541"></a>
<a id="trace-25543"></a>
<a id="trace-25548"></a>
<a id="trace-25550"></a>
<a id="trace-25564"></a>
<a id="trace-25566"></a>
<a id="trace-25593"></a>
<a id="trace-25595"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25614"></a>
<a id="trace-25616"></a>
<a id="trace-25622"></a>
<a id="trace-25624"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25723"></a>
<a id="trace-25725"></a>
<a id="trace-25740"></a>
<a id="trace-25742"></a>
<a id="trace-25752"></a>
<a id="trace-25754"></a>
<a id="trace-25775"></a>
<a id="trace-25777"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25798"></a>
<a id="trace-25800"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25883"></a>
<a id="trace-25885"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25924"></a>
<a id="trace-25926"></a>
<a id="trace-25942"></a>
<a id="trace-25944"></a>
<a id="trace-25970"></a>
<a id="trace-25972"></a>
<a id="trace-25987"></a>
<a id="trace-25989"></a>
<a id="trace-26061"></a>
<a id="trace-26063"></a>
<a id="trace-26068"></a>
<a id="trace-26070"></a>
<a id="trace-26106"></a>
<a id="trace-26108"></a>
<a id="trace-26118"></a>
<a id="trace-26120"></a>
<a id="trace-26134"></a>
<a id="trace-26136"></a>
<a id="trace-26144"></a>
<a id="trace-26146"></a>
<a id="trace-26164"></a>
<a id="trace-26166"></a>
<a id="trace-26171"></a>
<a id="trace-26173"></a>
<a id="trace-26257"></a>
<a id="trace-26259"></a>
<a id="trace-26276"></a>
<a id="trace-26278"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26297"></a>
<a id="trace-26299"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26348"></a>
<a id="trace-26350"></a>
<a id="trace-26356"></a>
<a id="trace-26358"></a>
<a id="trace-26433"></a>
<a id="trace-26435"></a>
<a id="trace-26438"></a>
<a id="trace-26440"></a>
<a id="trace-26458"></a>
<a id="trace-26460"></a>
<a id="trace-26472"></a>
<a id="trace-26474"></a>
<a id="trace-26486"></a>
<a id="trace-26488"></a>
<a id="trace-26496"></a>
<a id="trace-26498"></a>
<a id="trace-26510"></a>
<a id="trace-26512"></a>
<a id="trace-26521"></a>
<a id="trace-26523"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26619"></a>
<a id="trace-26621"></a>
<a id="trace-26627"></a>
<a id="trace-26629"></a>
<a id="trace-26641"></a>
<a id="trace-26643"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26697"></a>
<a id="trace-26699"></a>
<a id="trace-26705"></a>
<a id="trace-26707"></a>
<a id="trace-26717"></a>
<a id="trace-26719"></a>
<a id="trace-26725"></a>
<a id="trace-26727"></a>
<a id="trace-26800"></a>
<a id="trace-26802"></a>
<a id="trace-26810"></a>
<a id="trace-26812"></a>
<a id="trace-26825"></a>
<a id="trace-26827"></a>
<a id="trace-26836"></a>
<a id="trace-26838"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26862"></a>
<a id="trace-26864"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26889"></a>
<a id="trace-26891"></a>
<a id="trace-26920"></a>
<a id="trace-26922"></a>
<a id="trace-26992"></a>
<a id="trace-26994"></a>
<a id="trace-26998"></a>
<a id="trace-27000"></a>
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27031"></a>
<a id="trace-27033"></a>
<a id="trace-27044"></a>
<a id="trace-27046"></a>
<a id="trace-27066"></a>
<a id="trace-27068"></a>
<a id="trace-27081"></a>
<a id="trace-27083"></a>
<a id="trace-27169"></a>
<a id="trace-27171"></a>
<a id="trace-27180"></a>
<a id="trace-27182"></a>
<a id="trace-27202"></a>
<a id="trace-27204"></a>
<a id="trace-27208"></a>
<a id="trace-27210"></a>
<a id="trace-27220"></a>
<a id="trace-27222"></a>
<a id="trace-27249"></a>
<a id="trace-27251"></a>
<a id="trace-27270"></a>
<a id="trace-27272"></a>
<a id="trace-27345"></a>
<a id="trace-27347"></a>
<a id="trace-27351"></a>
<a id="trace-27353"></a>
<a id="trace-27383"></a>
<a id="trace-27385"></a>
<a id="trace-27410"></a>
<a id="trace-27412"></a>
<a id="trace-27432"></a>
<a id="trace-27434"></a>
<a id="trace-27440"></a>
<a id="trace-27442"></a>
<a id="trace-27456"></a>
<a id="trace-27458"></a>
<a id="trace-27530"></a>
<a id="trace-27532"></a>
<a id="trace-27558"></a>
<a id="trace-27560"></a>
<a id="trace-27573"></a>
<a id="trace-27575"></a>
<a id="trace-27612"></a>
<a id="trace-27614"></a>
<a id="trace-27630"></a>
<a id="trace-27632"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27716"></a>
<a id="trace-27718"></a>
<a id="trace-27722"></a>
<a id="trace-27724"></a>
<a id="trace-27740"></a>
<a id="trace-27742"></a>
<a id="trace-27753"></a>
<a id="trace-27755"></a>
<a id="trace-27781"></a>
<a id="trace-27783"></a>
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27889"></a>
<a id="trace-27891"></a>
<a id="trace-27903"></a>
<a id="trace-27905"></a>
<a id="trace-27927"></a>
<a id="trace-27929"></a>
<a id="trace-27939"></a>
<a id="trace-27941"></a>
<a id="trace-27948"></a>
<a id="trace-27950"></a>
<a id="trace-27968"></a>
<a id="trace-27970"></a>
<a id="trace-27991"></a>
<a id="trace-27993"></a>
<a id="trace-28071"></a>
<a id="trace-28073"></a>
<a id="trace-28090"></a>
<a id="trace-28092"></a>
<a id="trace-28099"></a>
<a id="trace-28101"></a>
<a id="trace-28122"></a>
<a id="trace-28124"></a>
<a id="trace-28153"></a>
<a id="trace-28155"></a>
<a id="trace-28170"></a>
<a id="trace-28172"></a>
<a id="trace-28177"></a>
<a id="trace-28179"></a>
<a id="trace-28251"></a>
<a id="trace-28253"></a>
<a id="trace-28270"></a>
<a id="trace-28272"></a>
<a id="trace-28288"></a>
<a id="trace-28290"></a>
<a id="trace-28305"></a>
<a id="trace-28307"></a>
<a id="trace-28319"></a>
<a id="trace-28321"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28363"></a>
<a id="trace-28365"></a>
<a id="trace-28369"></a>
<a id="trace-28371"></a>
<a id="trace-28442"></a>
<a id="trace-28444"></a>
<a id="trace-28447"></a>
<a id="trace-28449"></a>
<a id="trace-28462"></a>
<a id="trace-28464"></a>
<a id="trace-28472"></a>
<a id="trace-28474"></a>
<a id="trace-28485"></a>
<a id="trace-28487"></a>
<a id="trace-28494"></a>
<a id="trace-28496"></a>
<a id="trace-28509"></a>
<a id="trace-28511"></a>
<a id="trace-28521"></a>
<a id="trace-28523"></a>
<a id="trace-28536"></a>
<a id="trace-28538"></a>
<a id="trace-28545"></a>
<a id="trace-28547"></a>
<a id="trace-28631"></a>
<a id="trace-28633"></a>
<a id="trace-28660"></a>
<a id="trace-28662"></a>
<a id="trace-28667"></a>
<a id="trace-28669"></a>
<a id="trace-28681"></a>
<a id="trace-28683"></a>
<a id="trace-28690"></a>
<a id="trace-28692"></a>
<a id="trace-28704"></a>
<a id="trace-28706"></a>
<a id="trace-28711"></a>
<a id="trace-28713"></a>
<a id="trace-28724"></a>
<a id="trace-28726"></a>
<a id="trace-28803"></a>
<a id="trace-28805"></a>
<a id="trace-28852"></a>
<a id="trace-28854"></a>
<a id="trace-28875"></a>
<a id="trace-28877"></a>
<a id="trace-28892"></a>
<a id="trace-28894"></a>
<a id="trace-28909"></a>
<a id="trace-28911"></a>
<a id="trace-28916"></a>
<a id="trace-28918"></a>
<a id="trace-28988"></a>
<a id="trace-28990"></a>
<a id="trace-29007"></a>
<a id="trace-29009"></a>
<a id="trace-29014"></a>
<a id="trace-29016"></a>
<a id="trace-29028"></a>
<a id="trace-29030"></a>
<a id="trace-29041"></a>
<a id="trace-29043"></a>
<a id="trace-29089"></a>
<a id="trace-29091"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29202"></a>
<a id="trace-29204"></a>
<a id="trace-29225"></a>
<a id="trace-29227"></a>
<a id="trace-29239"></a>
<a id="trace-29241"></a>
<a id="trace-29248"></a>
<a id="trace-29250"></a>
<a id="trace-29265"></a>
<a id="trace-29267"></a>
<a id="trace-29272"></a>
<a id="trace-29274"></a>
<a id="trace-29353"></a>
<a id="trace-29355"></a>
<a id="trace-29367"></a>
<a id="trace-29369"></a>
<a id="trace-29385"></a>
<a id="trace-29387"></a>
<a id="trace-29394"></a>
<a id="trace-29396"></a>
<a id="trace-29408"></a>
<a id="trace-29410"></a>
<a id="trace-29430"></a>
<a id="trace-29432"></a>
<a id="trace-29456"></a>
<a id="trace-29458"></a>
<a id="trace-29529"></a>
<a id="trace-29531"></a>
<a id="trace-29538"></a>
<a id="trace-29540"></a>
<a id="trace-29552"></a>
<a id="trace-29554"></a>
<a id="trace-29566"></a>
<a id="trace-29568"></a>
<a id="trace-29596"></a>
<a id="trace-29598"></a>
<a id="trace-29615"></a>
<a id="trace-29617"></a>
<a id="trace-29624"></a>
<a id="trace-29626"></a>
<a id="trace-29645"></a>
<a id="trace-29647"></a>
<a id="trace-29721"></a>
<a id="trace-29723"></a>
<a id="trace-29756"></a>
<a id="trace-29758"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29787"></a>
<a id="trace-29789"></a>
<a id="trace-29794"></a>
<a id="trace-29796"></a>
<a id="trace-29823"></a>
<a id="trace-29825"></a>
<a id="trace-29899"></a>
<a id="trace-29901"></a>
<a id="trace-29910"></a>
<a id="trace-29912"></a>
<a id="trace-29930"></a>
<a id="trace-29932"></a>
<a id="trace-29944"></a>
<a id="trace-29946"></a>
<a id="trace-29955"></a>
<a id="trace-29957"></a>
<a id="trace-29970"></a>
<a id="trace-29972"></a>
<a id="trace-29977"></a>
<a id="trace-29979"></a>
<a id="trace-29994"></a>
<a id="trace-29996"></a>
<a id="trace-30076"></a>
<a id="trace-30078"></a>
<a id="trace-30103"></a>
<a id="trace-30105"></a>
<a id="trace-30110"></a>
<a id="trace-30112"></a>
<a id="trace-30151"></a>
<a id="trace-30153"></a>
<a id="trace-30161"></a>
<a id="trace-30163"></a>
<a id="trace-30177"></a>
<a id="trace-30179"></a>
<a id="trace-30254"></a>
<a id="trace-30256"></a>
<a id="trace-30264"></a>
<a id="trace-30266"></a>
<a id="trace-30278"></a>
<a id="trace-30280"></a>
<a id="trace-30291"></a>
<a id="trace-30293"></a>
<a id="trace-30310"></a>
<a id="trace-30312"></a>
<a id="trace-30333"></a>
<a id="trace-30335"></a>
<a id="trace-30342"></a>
<a id="trace-30344"></a>
<a id="trace-30362"></a>
<a id="trace-30364"></a>
<a id="trace-30368"></a>
<a id="trace-30370"></a>
<a id="trace-30443"></a>
<a id="trace-30445"></a>
<a id="trace-30464"></a>
<a id="trace-30466"></a>
<a id="trace-30472"></a>
<a id="trace-30474"></a>
<a id="trace-30500"></a>
<a id="trace-30502"></a>
<a id="trace-30518"></a>
<a id="trace-30520"></a>
<a id="trace-30546"></a>
<a id="trace-30548"></a>
<a id="trace-30552"></a>
<a id="trace-30554"></a>
<a id="trace-30626"></a>
<a id="trace-30628"></a>
<a id="trace-30636"></a>
<a id="trace-30638"></a>
<a id="trace-30652"></a>
<a id="trace-30654"></a>
<a id="trace-30664"></a>
<a id="trace-30666"></a>
<a id="trace-30678"></a>
<a id="trace-30680"></a>
<a id="trace-30689"></a>
<a id="trace-30691"></a>
<a id="trace-30705"></a>
<a id="trace-30707"></a>
<a id="trace-30728"></a>
<a id="trace-30730"></a>
<a id="trace-30819"></a>
<a id="trace-30821"></a>
<a id="trace-30824"></a>
<a id="trace-30826"></a>
<a id="trace-30839"></a>
<a id="trace-30841"></a>
<a id="trace-30883"></a>
<a id="trace-30885"></a>
<a id="trace-30893"></a>
<a id="trace-30895"></a>
<a id="trace-30907"></a>
<a id="trace-30909"></a>
<a id="trace-30916"></a>
<a id="trace-30918"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625018063815853, 'next_transition': 1236}.
<a id="trace-1004"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1004): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.92654604062676, 'next_transition': 2331}.
<a id="trace-1709"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1709): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1490. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248994555902435, 'next_transition': 2001}.
<a id="trace-2001"></a>
<a id="trace-2003"></a>
<a id="trace-2033"></a>
<a id="trace-2035"></a>
<a id="trace-2067"></a>
<a id="trace-2069"></a>
<a id="trace-2098"></a>
<a id="trace-2100"></a>
<a id="trace-2187"></a>
<a id="trace-2189"></a>
<a id="trace-2233"></a>
<a id="trace-2235"></a>
<a id="trace-2264"></a>
<a id="trace-2266"></a>
<a id="trace-2298"></a>
<a id="trace-2300"></a>
<a id="trace-2318"></a>
<a id="trace-2320"></a>
<a id="trace-2613"></a>
<a id="trace-2615"></a>
<a id="trace-2648"></a>
<a id="trace-2650"></a>
<a id="trace-2676"></a>
<a id="trace-2678"></a>
<a id="trace-2710"></a>
<a id="trace-2712"></a>
<a id="trace-2734"></a>
<a id="trace-2736"></a>
<a id="trace-2840"></a>
<a id="trace-2842"></a>
<a id="trace-2871"></a>
<a id="trace-2873"></a>
<a id="trace-2906"></a>
<a id="trace-2908"></a>
<a id="trace-2937"></a>
<a id="trace-2939"></a>
<a id="trace-2978"></a>
<a id="trace-2980"></a>
<a id="trace-2998"></a>
<a id="trace-3000"></a>
<a id="trace-3028"></a>
<a id="trace-3030"></a>
- 13.20s–23.25s (×42), actor 5, squad 0 (trace 2001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1495. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134425413657843, 'next_transition': 2033}.
<a id="trace-2331"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2331): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2120. Next observer evidence: {'until': 26.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 11.943363489307941, 'next_transition': 3821}.
<a id="trace-2332"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2332): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2120. Next observer evidence: {'until': 26.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 11.943363489307941, 'next_transition': 3821}.
<a id="trace-3042"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3042): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2757. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750068444295687, 'next_transition': 3563}.
<a id="trace-3043"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3043): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2757. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750068444295687, 'next_transition': 3563}.
<a id="trace-3563"></a>
<a id="trace-3565"></a>
<a id="trace-3595"></a>
<a id="trace-3597"></a>
<a id="trace-3634"></a>
<a id="trace-3636"></a>
<a id="trace-3730"></a>
<a id="trace-3732"></a>
<a id="trace-3752"></a>
<a id="trace-3754"></a>
<a id="trace-3805"></a>
<a id="trace-3807"></a>
<a id="trace-4107"></a>
<a id="trace-4109"></a>
<a id="trace-4136"></a>
<a id="trace-4138"></a>
<a id="trace-4163"></a>
<a id="trace-4165"></a>
<a id="trace-4207"></a>
<a id="trace-4209"></a>
<a id="trace-4235"></a>
<a id="trace-4237"></a>
<a id="trace-4276"></a>
<a id="trace-4278"></a>
<a id="trace-4305"></a>
<a id="trace-4307"></a>
- 23.75s–29.75s (×26), actor 5, squad 0 (trace 3563): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2762. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49218990697842807, 'next_transition': 3595}.
<a id="trace-3821"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3821): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3660. Next observer evidence: {'until': 29.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.3854307714628065, 'next_transition': 496}.
<a id="trace-3822"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3822): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3660. Next observer evidence: {'until': 29.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.3854307714628065, 'next_transition': 496}.
<a id="trace-3823"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3823): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3660. Next observer evidence: {'until': 29.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.3854307714628065, 'next_transition': 496}.
<a id="trace-495"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 495): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-496"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 496): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4313"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4313): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753344 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4313. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7139951040685902, 'next_transition': 4409}.
<a id="trace-4314"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4314): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753344 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4314. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7139951040685902, 'next_transition': 4409}.
<a id="trace-4315"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4315): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753344 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4315. Next observer evidence: {'until': 30.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.537211666820087, 'next_transition': 4419}.
<a id="trace-4316"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4316): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753344 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4316. Next observer evidence: {'until': 30.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.537211666820087, 'next_transition': 4419}.
<a id="trace-4409"></a>
<a id="trace-4411"></a>
<a id="trace-7560"></a>
<a id="trace-7562"></a>
<a id="trace-7585"></a>
<a id="trace-7587"></a>
<a id="trace-7613"></a>
<a id="trace-7615"></a>
<a id="trace-7639"></a>
<a id="trace-7641"></a>
<a id="trace-7681"></a>
<a id="trace-7683"></a>
- 30.25s–32.75s (×12), actor 5, squad 0 (trace 4409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4327. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6985961705848414, 'next_transition': 7560}.
<a id="trace-4419"></a>
- 30.40s–30.40s (×1), actor 8, squad 1 (trace 4419): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1831947238630876, 'next_transition': 7283}.
<a id="trace-4421"></a>
- 30.40s–30.40s (×1), actor 8, squad 1 (trace 4421): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1831947238630876, 'next_transition': 7283}.
<a id="trace-7217"></a>
- 30.40s–30.40s (×1), actor 8, squad 1 (trace 7217): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1831947238630876, 'next_transition': 7283}.
<a id="trace-7218"></a>
- 30.40s–30.40s (×1), actor 8, squad 1 (trace 7218): MoveTactically. Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1831947238630876, 'next_transition': 7283}.
<a id="trace-7219"></a>
- 30.40s–30.40s (×1), actor 8, squad 1 (trace 7219): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1831947238630876, 'next_transition': 7283}.
<a id="trace-7283"></a>
- 30.70s–30.70s (×1), actor 8, squad 1 (trace 7283): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 34, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.4127124532564324, 'next_transition': 8362}.
<a id="trace-7284"></a>
- 30.70s–30.70s (×1), actor 8, squad 1 (trace 7284): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 34, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.4127124532564324, 'next_transition': 8362}.
<a id="trace-7689"></a>
- 32.75s–32.75s (×1), actor 1, squad 0 (trace 7689): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 4323. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399981180154655, 'next_transition': 7834}.
<a id="trace-7834"></a>
<a id="trace-7836"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
- 33.25s–33.75s (×4), actor 5, squad 0 (trace 7834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4327. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600013229867899, 'next_transition': 7861}.
<a id="trace-7869"></a>
- 33.75s–33.75s (×1), actor 1, squad 0 (trace 7869): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4323. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6400962430012821, 'next_transition': 8398}.
<a id="trace-7870"></a>
- 33.75s–33.75s (×1), actor 1, squad 0 (trace 7870): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4323. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6400962430012821, 'next_transition': 8398}.
<a id="trace-7871"></a>
- 33.75s–33.75s (×1), actor 1, squad 0 (trace 7871): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4323. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6400962430012821, 'next_transition': 8398}.
<a id="trace-8362"></a>
- 34.05s–34.05s (×1), actor 8, squad 1 (trace 8362): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4330. Next observer evidence: {'until': 38.8, 'shots': 5, 'casualties': 0, 'mean_displacement': 2.272459611795605, 'next_transition': 9072}.
<a id="trace-8398"></a>
<a id="trace-8400"></a>
<a id="trace-8433"></a>
<a id="trace-8435"></a>
<a id="trace-8529"></a>
<a id="trace-8531"></a>
<a id="trace-8562"></a>
<a id="trace-8564"></a>
<a id="trace-8600"></a>
<a id="trace-8602"></a>
<a id="trace-8642"></a>
<a id="trace-8644"></a>
<a id="trace-8664"></a>
<a id="trace-8666"></a>
- 34.25s–37.25s (×14), actor 5, squad 0 (trace 8398): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4327. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6619556399121905, 'next_transition': 8433}.
<a id="trace-8674"></a>
- 37.35s–37.35s (×1), actor 1, squad 0 (trace 8674): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 8449. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057850970256179, 'next_transition': 8999}.
<a id="trace-8675"></a>
- 37.35s–37.35s (×1), actor 1, squad 0 (trace 8675): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 8449. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057850970256179, 'next_transition': 8999}.
<a id="trace-8999"></a>
<a id="trace-9001"></a>
<a id="trace-9031"></a>
<a id="trace-9033"></a>
<a id="trace-9061"></a>
<a id="trace-9063"></a>
<a id="trace-9086"></a>
<a id="trace-9088"></a>
<a id="trace-12112"></a>
<a id="trace-12114"></a>
<a id="trace-12231"></a>
<a id="trace-12233"></a>
<a id="trace-12301"></a>
<a id="trace-12303"></a>
<a id="trace-12377"></a>
<a id="trace-12379"></a>
<a id="trace-12437"></a>
<a id="trace-12439"></a>
<a id="trace-12502"></a>
<a id="trace-12504"></a>
<a id="trace-12546"></a>
<a id="trace-12548"></a>
<a id="trace-12588"></a>
<a id="trace-12590"></a>
<a id="trace-12609"></a>
<a id="trace-12611"></a>
<a id="trace-12639"></a>
<a id="trace-12641"></a>
<a id="trace-12659"></a>
<a id="trace-12661"></a>
<a id="trace-12761"></a>
<a id="trace-12763"></a>
<a id="trace-12801"></a>
<a id="trace-12803"></a>
<a id="trace-12845"></a>
<a id="trace-12847"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-13001"></a>
<a id="trace-13003"></a>
<a id="trace-13064"></a>
<a id="trace-13066"></a>
<a id="trace-13097"></a>
<a id="trace-13099"></a>
<a id="trace-13135"></a>
<a id="trace-13137"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
- 37.75s–49.75s (×50), actor 5, squad 0 (trace 8999): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8453. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6030438785930686, 'next_transition': 9031}.
<a id="trace-9072"></a>
- 38.95s–38.95s (×1), actor 8, squad 1 (trace 9072): received platoon directive; retain contact cover stage. Knowledge: actor memory at 35.00s, trace 8456. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007125000000001158, 'next_transition': 9119}.
<a id="trace-9119"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 9119): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 8456. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.431051975434849, 'next_transition': 12877}.
<a id="trace-11997"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 11997): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 8456. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.431051975434849, 'next_transition': 12877}.
<a id="trace-11998"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 11998): MoveTactically. Knowledge: actor memory at 35.00s, trace 8456. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.431051975434849, 'next_transition': 12877}.
<a id="trace-11999"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 11999): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 8456. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.431051975434849, 'next_transition': 12877}.
<a id="trace-12877"></a>
- 46.55s–46.55s (×1), actor 8, squad 1 (trace 12877): NeedSupport. Knowledge: actor memory at 45.00s, trace 12687. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.417796963147479, 'next_transition': 13143}.
<a id="trace-13143"></a>
- 49.25s–49.25s (×1), actor 8, squad 1 (trace 13143): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 45.00s, trace 12687. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.24497023008266616, 'next_transition': 13566}.
<a id="trace-13302"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 13302): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 13275. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000492616903703, 'next_transition': 13485}.
<a id="trace-13319"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 13319): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 13275. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000492616903703, 'next_transition': 13485}.
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13550"></a>
<a id="trace-13552"></a>
<a id="trace-13796"></a>
<a id="trace-13798"></a>
<a id="trace-13824"></a>
<a id="trace-13826"></a>
<a id="trace-13855"></a>
<a id="trace-13857"></a>
<a id="trace-13885"></a>
<a id="trace-13887"></a>
<a id="trace-13906"></a>
<a id="trace-13908"></a>
<a id="trace-13925"></a>
<a id="trace-13927"></a>
<a id="trace-13940"></a>
<a id="trace-13942"></a>
- 50.25s–54.75s (×20), actor 5, squad 0 (trace 13485): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 13279. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3086215635976484, 'next_transition': 13509}.
<a id="trace-13566"></a>
- 51.40s–51.40s (×1), actor 8, squad 1 (trace 13566): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 13282. Next observer evidence: None.
<a id="trace-13571"></a>
- 51.45s–51.45s (×1), actor 8, squad 1 (trace 13571): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 13282. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.249910301757545, 'next_transition': 14082}.
<a id="trace-13574"></a>
- 51.45s–51.45s (×1), actor 8, squad 1 (trace 13574): MoveTactically. Knowledge: actor memory at 50.00s, trace 13282. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.249910301757545, 'next_transition': 14082}.
<a id="trace-13575"></a>
- 51.45s–51.45s (×1), actor 8, squad 1 (trace 13575): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 13282. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.249910301757545, 'next_transition': 14082}.
<a id="trace-13973"></a>
- 55.05s–55.05s (×1), actor 5, squad 0 (trace 13973): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 55.05s, trace 13973. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000014172324435, 'next_transition': 14025}.
<a id="trace-14025"></a>
<a id="trace-14027"></a>
- 55.25s–55.25s (×2), actor 5, squad 0 (trace 14025): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.05s, trace 13973. Next observer evidence: {'until': 55.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10847585600895869, 'next_transition': 14034}.
<a id="trace-14034"></a>
- 55.40s–55.40s (×1), actor 1, squad 0 (trace 14034): NeedSupport. Knowledge: actor memory at 55.00s, trace 13951. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16466014172324434, 'next_transition': 14048}.
<a id="trace-14048"></a>
<a id="trace-14050"></a>
<a id="trace-14071"></a>
<a id="trace-14073"></a>
<a id="trace-15107"></a>
<a id="trace-15109"></a>
<a id="trace-15136"></a>
<a id="trace-15138"></a>
- 55.75s–57.25s (×8), actor 5, squad 0 (trace 14048): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.05s, trace 13973. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2888561394554479, 'next_transition': 14071}.
<a id="trace-14082"></a>
- 56.40s–56.40s (×1), actor 8, squad 1 (trace 14082): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 13958. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0033551825583714484, 'next_transition': 14181}.
<a id="trace-14181"></a>
- 56.70s–56.70s (×1), actor 8, squad 1 (trace 14181): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 13958. Next observer evidence: None.
<a id="trace-14182"></a>
- 56.70s–56.70s (×1), actor 8, squad 1 (trace 14182): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 13958. Next observer evidence: None.
<a id="trace-15117"></a>
- 56.75s–56.75s (×1), actor 8, squad 1 (trace 15117): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 55.00s, trace 13958. Next observer evidence: {'until': 60.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.865131913776162, 'next_transition': 1088}.
<a id="trace-15151"></a>
- 57.55s–57.55s (×1), actor 5, squad 0 (trace 15151): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 57.55s, trace 15151. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11823253374346976, 'next_transition': 15157}.
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15180"></a>
<a id="trace-15182"></a>
<a id="trace-15208"></a>
<a id="trace-15210"></a>
<a id="trace-15226"></a>
<a id="trace-15228"></a>
<a id="trace-15255"></a>
<a id="trace-15257"></a>
<a id="trace-15337"></a>
<a id="trace-15339"></a>
<a id="trace-15357"></a>
<a id="trace-15359"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15395"></a>
<a id="trace-15397"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15427"></a>
<a id="trace-15429"></a>
<a id="trace-15446"></a>
<a id="trace-15448"></a>
<a id="trace-15456"></a>
<a id="trace-15458"></a>
<a id="trace-15475"></a>
<a id="trace-15477"></a>
- 57.75s–64.25s (×28), actor 5, squad 0 (trace 15157): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.55s, trace 15151. Next observer evidence: {'until': 58.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36673649953536724, 'next_transition': 15180}.
<a id="trace-1088"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (events line 1088): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15368"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 15368): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500649 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 15368. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5525000000000002, 'next_transition': 19749}.
<a id="trace-15369"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 15369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500649 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 15369. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5525000000000002, 'next_transition': 19749}.
<a id="trace-15482"></a>
- 64.25s–64.25s (×1), actor 1, squad 0 (trace 15482): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 15266. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1296001082844722, 'next_transition': 15748}.
<a id="trace-15584"></a>
- 64.25s–64.25s (×1), actor 1, squad 0 (trace 15584): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 15266. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1296001082844722, 'next_transition': 15748}.
<a id="trace-15748"></a>
<a id="trace-15750"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15859"></a>
<a id="trace-15861"></a>
- 64.75s–65.75s (×6), actor 5, squad 0 (trace 15748): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.85s, trace 15369. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41736537067274043, 'next_transition': 15836}.
<a id="trace-15871"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 15871): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 66.05s, trace 15871. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24479159155498434, 'next_transition': 15885}.
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15900"></a>
<a id="trace-15902"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-15938"></a>
<a id="trace-15940"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15997"></a>
<a id="trace-15999"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16096"></a>
<a id="trace-16098"></a>
<a id="trace-16113"></a>
<a id="trace-16115"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16141"></a>
<a id="trace-16143"></a>
<a id="trace-16162"></a>
<a id="trace-16164"></a>
<a id="trace-16176"></a>
<a id="trace-16178"></a>
<a id="trace-16197"></a>
<a id="trace-16199"></a>
<a id="trace-16209"></a>
<a id="trace-16211"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16245"></a>
<a id="trace-16247"></a>
<a id="trace-16329"></a>
<a id="trace-16331"></a>
<a id="trace-16339"></a>
<a id="trace-16341"></a>
<a id="trace-16362"></a>
<a id="trace-16364"></a>
- 66.25s–76.25s (×42), actor 5, squad 0 (trace 15885): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 15871. Next observer evidence: {'until': 66.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48430540308599107, 'next_transition': 15900}.
<a id="trace-16370"></a>
- 76.45s–76.45s (×1), actor 1, squad 0 (trace 16370): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 16256. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16496}.
<a id="trace-16387"></a>
- 76.45s–76.45s (×1), actor 1, squad 0 (trace 16387): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 16256. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16496}.
<a id="trace-16496"></a>
<a id="trace-16498"></a>
<a id="trace-16521"></a>
<a id="trace-16523"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16569"></a>
<a id="trace-16571"></a>
<a id="trace-16583"></a>
<a id="trace-16585"></a>
- 76.75s–78.75s (×10), actor 5, squad 0 (trace 16496): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 16260. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24749898320095903, 'next_transition': 16521}.
<a id="trace-16601"></a>
- 79.05s–79.05s (×1), actor 1, squad 0 (trace 16601): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 16256. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24481250488280984, 'next_transition': 16617}.
<a id="trace-16617"></a>
<a id="trace-16619"></a>
- 79.25s–79.25s (×2), actor 5, squad 0 (trace 16617): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 16260. Next observer evidence: None.
<a id="trace-16623"></a>
- 79.30s–79.30s (×1), actor 1, squad 0 (trace 16623): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 16256. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4895951859506968, 'next_transition': 18225}.
<a id="trace-16624"></a>
- 79.30s–79.30s (×1), actor 1, squad 0 (trace 16624): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 75.00s, trace 16256. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4895951859506968, 'next_transition': 18225}.
<a id="trace-18225"></a>
<a id="trace-18227"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18350"></a>
<a id="trace-18352"></a>
<a id="trace-18386"></a>
<a id="trace-18388"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18439"></a>
<a id="trace-18441"></a>
- 79.75s–82.25s (×12), actor 5, squad 0 (trace 18225): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 16260. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5994028659556406, 'next_transition': 18327}.
<a id="trace-1242"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (events line 1242): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18455"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 18455): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465069 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 18455. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15479539316986704, 'next_transition': 18459}.
<a id="trace-18456"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 18456): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465069 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 18456. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15479539316986704, 'next_transition': 18459}.
<a id="trace-18459"></a>
<a id="trace-18461"></a>
<a id="trace-18473"></a>
<a id="trace-18475"></a>
- 82.75s–83.25s (×4), actor 5, squad 0 (trace 18459): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 18456. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439818896582385, 'next_transition': 18473}.
<a id="trace-1245"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (events line 1245): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439818896582336, 'next_transition': 18504}.
<a id="trace-18482"></a>
<a id="trace-18484"></a>
- 83.75s–83.75s (×2), actor 5, squad 0 (trace 18482): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 18456. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439818896582336, 'next_transition': 18504}.
<a id="trace-18489"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 18489): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.467234 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 18489. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439818896582336, 'next_transition': 18504}.
<a id="trace-18490"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 18490): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.467234 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 18490. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439818896582336, 'next_transition': 18504}.
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18512"></a>
<a id="trace-18514"></a>
<a id="trace-18597"></a>
<a id="trace-18599"></a>
<a id="trace-18606"></a>
<a id="trace-18608"></a>
<a id="trace-18626"></a>
<a id="trace-18628"></a>
<a id="trace-18641"></a>
<a id="trace-18643"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18734"></a>
<a id="trace-18736"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18846"></a>
<a id="trace-18848"></a>
<a id="trace-18864"></a>
<a id="trace-18866"></a>
- 84.25s–91.25s (×30), actor 5, squad 0 (trace 18504): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 83.75s, trace 18490. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30960502293030856, 'next_transition': 18512}.
<a id="trace-18876"></a>
- 91.70s–91.70s (×1), actor 1, squad 0 (trace 18876): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 18758. Next observer evidence: None.
<a id="trace-18877"></a>
- 91.70s–91.70s (×1), actor 1, squad 0 (trace 18877): NeedSupport. Knowledge: actor memory at 90.00s, trace 18758. Next observer evidence: None.
<a id="trace-18882"></a>
<a id="trace-18884"></a>
<a id="trace-18905"></a>
<a id="trace-18907"></a>
- 91.75s–92.25s (×4), actor 5, squad 0 (trace 18882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 18762. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18905}.
<a id="trace-18914"></a>
- 92.70s–92.70s (×1), actor 1, squad 0 (trace 18914): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 18758. Next observer evidence: None.
<a id="trace-18915"></a>
- 92.70s–92.70s (×1), actor 1, squad 0 (trace 18915): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 90.00s, trace 18758. Next observer evidence: None.
<a id="trace-19733"></a>
- 92.70s–92.70s (×1), actor 1, squad 0 (trace 19733): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 90.00s, trace 18758. Next observer evidence: None.
<a id="trace-19737"></a>
<a id="trace-19739"></a>
<a id="trace-19767"></a>
<a id="trace-19769"></a>
<a id="trace-19783"></a>
<a id="trace-19785"></a>
<a id="trace-19804"></a>
<a id="trace-19806"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19920"></a>
<a id="trace-19922"></a>
<a id="trace-19946"></a>
<a id="trace-19948"></a>
<a id="trace-19958"></a>
<a id="trace-19960"></a>
<a id="trace-19982"></a>
<a id="trace-19984"></a>
<a id="trace-19990"></a>
<a id="trace-19992"></a>
- 92.75s–97.75s (×20), actor 5, squad 0 (trace 19737): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 18762. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33685858624326404, 'next_transition': 19767}.
<a id="trace-19749"></a>
- 92.90s–92.90s (×1), actor 9, squad 1 (trace 19749): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 18765. Next observer evidence: None.
<a id="trace-19750"></a>
- 92.90s–92.90s (×1), actor 9, squad 1 (trace 19750): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 90.00s, trace 18765. Next observer evidence: None.
<a id="trace-19754"></a>
- 92.95s–92.95s (×1), actor 9, squad 1 (trace 19754): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 90.00s, trace 18765. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20595}.
<a id="trace-1371"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (events line 1371): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20002"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (trace 20002): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401890 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 20002. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00045216761887116727, 'next_transition': 20018}.
<a id="trace-20003"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (trace 20003): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401890 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 20003. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00045216761887116727, 'next_transition': 20018}.
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20055"></a>
<a id="trace-20057"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20247"></a>
<a id="trace-20249"></a>
<a id="trace-20287"></a>
<a id="trace-20289"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20361"></a>
<a id="trace-20363"></a>
<a id="trace-20409"></a>
<a id="trace-20411"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20523"></a>
<a id="trace-20525"></a>
- 98.25s–103.75s (×24), actor 5, squad 0 (trace 20018): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 98.15s, trace 20003. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03839945345477716, 'next_transition': 20055}.
<a id="trace-1506"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (events line 1506): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1048000000000003, 'next_transition': 20564}.
<a id="trace-20552"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (trace 20552): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.411730 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.15s, trace 20552. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1048000000000003, 'next_transition': 20564}.
<a id="trace-20553"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (trace 20553): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.411730 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.15s, trace 20553. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1048000000000003, 'next_transition': 20564}.
<a id="trace-20564"></a>
<a id="trace-20566"></a>
<a id="trace-20589"></a>
<a id="trace-20591"></a>
<a id="trace-20737"></a>
<a id="trace-20739"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
- 104.25s–106.25s (×10), actor 5, squad 0 (trace 20564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 104.15s, trace 20553. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1737666666666667, 'next_transition': 20589}.
<a id="trace-20595"></a>
- 104.80s–104.80s (×1), actor 9, squad 1 (trace 20595): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 100.00s, trace 20164. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.506506986693107, 'next_transition': 1673}.
<a id="trace-20596"></a>
- 104.80s–104.80s (×1), actor 9, squad 1 (trace 20596): MoveTactically. Knowledge: actor memory at 100.00s, trace 20164. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.506506986693107, 'next_transition': 1673}.
<a id="trace-20597"></a>
- 104.80s–104.80s (×1), actor 9, squad 1 (trace 20597): . Knowledge: actor memory at 100.00s, trace 20164. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.506506986693107, 'next_transition': 1673}.
<a id="trace-1558"></a>
- 106.55s–106.55s (×1), actor 5, squad 0 (events line 1558): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04121753619325408, 'next_transition': 20842}.
<a id="trace-20828"></a>
- 106.55s–106.55s (×1), actor 5, squad 0 (trace 20828): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.415825 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.55s, trace 20828. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04121753619325408, 'next_transition': 20842}.
<a id="trace-20829"></a>
- 106.55s–106.55s (×1), actor 5, squad 0 (trace 20829): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.415825 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.55s, trace 20829. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04121753619325408, 'next_transition': 20842}.
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20890"></a>
<a id="trace-20892"></a>
<a id="trace-20911"></a>
<a id="trace-20913"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
- 106.75s–108.25s (×8), actor 5, squad 0 (trace 20842): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 106.55s, trace 20829. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12734824767703373, 'next_transition': 20890}.
<a id="trace-20952"></a>
- 108.35s–108.35s (×1), actor 1, squad 0 (trace 20952): MoveTactically. Knowledge: actor memory at 105.00s, trace 20655. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34289431360776795, 'next_transition': 21049}.
<a id="trace-20953"></a>
- 108.35s–108.35s (×1), actor 1, squad 0 (trace 20953): received platoon directive. Knowledge: actor memory at 105.00s, trace 20655. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34289431360776795, 'next_transition': 21049}.
<a id="trace-21049"></a>
- 108.60s–108.60s (×1), actor 1, squad 0 (trace 21049): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 20655. Next observer evidence: None.
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21191"></a>
<a id="trace-21193"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21298"></a>
<a id="trace-21300"></a>
- 108.75s–110.75s (×10), actor 5, squad 0 (trace 21107): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 106.55s, trace 20829. Next observer evidence: {'until': 109.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42183157751979533, 'next_transition': 21146}.
<a id="trace-1672"></a>
- 111.05s–111.05s (×1), actor 5, squad 0 (events line 1672): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}.
<a id="trace-1673"></a>
- 111.05s–111.05s (×1), actor 5, squad 1 (events line 1673): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}.
<a id="trace-21322"></a>
- 111.05s–111.05s (×1), actor 5, squad 0 (trace 21322): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.05s, trace 21322. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}.
<a id="trace-21323"></a>
- 111.05s–111.05s (×1), actor 5, squad 0 (trace 21323): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.05s, trace 21323. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}.
<a id="trace-21324"></a>
- 111.05s–111.05s (×1), actor 5, squad 1 (trace 21324): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.05s, trace 21324. Next observer evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}.
<a id="trace-21325"></a>
- 111.05s–111.05s (×1), actor 5, squad 1 (trace 21325): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.05s, trace 21325. Next observer evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}.
<a id="trace-21340"></a>
<a id="trace-21342"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21373"></a>
<a id="trace-21375"></a>
<a id="trace-21489"></a>
<a id="trace-21491"></a>
- 111.25s–112.75s (×8), actor 5, squad 0 (trace 21340): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 111.05s, trace 21325. Next observer evidence: {'until': 111.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18667589739825663, 'next_transition': 21351}.
<a id="trace-21381"></a>
- 112.50s–112.50s (×1), actor 9, squad 1 (trace 21381): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 21211. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534176293464995, 'next_transition': 21500}.
<a id="trace-21382"></a>
- 112.50s–112.50s (×1), actor 9, squad 1 (trace 21382): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 21211. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534176293464995, 'next_transition': 21500}.
<a id="trace-21500"></a>
- 112.95s–112.95s (×1), actor 9, squad 1 (trace 21500): Withdraw to received rally. Knowledge: actor memory at 110.00s, trace 21211. Next observer evidence: {'until': 132, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.99757928580238, 'next_transition': 22599}.
<a id="trace-21501"></a>
- 112.95s–112.95s (×1), actor 9, squad 1 (trace 21501): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 21211. Next observer evidence: {'until': 132, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.99757928580238, 'next_transition': 22599}.
<a id="trace-21558"></a>
- 113.20s–113.20s (×1), actor 1, squad 0 (trace 21558): Withdraw to received rally. Knowledge: actor memory at 110.00s, trace 21205. Next observer evidence: None.
<a id="trace-21559"></a>
- 113.20s–113.20s (×1), actor 1, squad 0 (trace 21559): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 21205. Next observer evidence: None.
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
- 113.25s–114.25s (×4), actor 5, squad 0 (trace 21777): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 111.05s, trace 21325. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6219312524265993, 'next_transition': 21814}.
<a id="trace-21833"></a>
- 114.45s–114.45s (×1), actor 1, squad 0 (trace 21833): NeedSupport. Knowledge: actor memory at 110.00s, trace 21205. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6522681026269819, 'next_transition': 21920}.
<a id="trace-21920"></a>
<a id="trace-21922"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21983"></a>
<a id="trace-21985"></a>
<a id="trace-22008"></a>
<a id="trace-22010"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22199"></a>
<a id="trace-22201"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22370"></a>
<a id="trace-22372"></a>
- 115.25s–126.25s (×24), actor 5, squad 0 (trace 21920): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 21857. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.343589240600386, 'next_transition': 21959}.
<a id="trace-22383"></a>
- 126.35s–126.35s (×1), actor 1, squad 0 (trace 22383): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 22277. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1182561653676921, 'next_transition': 22409}.
<a id="trace-22384"></a>
- 126.35s–126.35s (×1), actor 1, squad 0 (trace 22384): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 22277. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1182561653676921, 'next_transition': 22409}.
<a id="trace-22409"></a>
<a id="trace-22411"></a>
<a id="trace-22444"></a>
<a id="trace-22446"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22640"></a>
<a id="trace-22642"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22685"></a>
<a id="trace-22687"></a>
<a id="trace-22769"></a>
<a id="trace-22771"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22803"></a>
<a id="trace-22805"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22926"></a>
<a id="trace-22928"></a>
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-22965"></a>
<a id="trace-22967"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-23030"></a>
<a id="trace-23032"></a>
<a id="trace-23115"></a>
<a id="trace-23117"></a>
<a id="trace-23134"></a>
<a id="trace-23136"></a>
<a id="trace-23154"></a>
<a id="trace-23156"></a>
<a id="trace-23176"></a>
<a id="trace-23178"></a>
<a id="trace-23200"></a>
<a id="trace-23202"></a>
<a id="trace-23289"></a>
<a id="trace-23291"></a>
<a id="trace-23324"></a>
<a id="trace-23326"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23388"></a>
<a id="trace-23390"></a>
<a id="trace-23466"></a>
<a id="trace-23468"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23531"></a>
<a id="trace-23533"></a>
<a id="trace-23556"></a>
<a id="trace-23558"></a>
<a id="trace-23580"></a>
<a id="trace-23582"></a>
<a id="trace-23658"></a>
<a id="trace-23660"></a>
<a id="trace-23679"></a>
<a id="trace-23681"></a>
<a id="trace-23704"></a>
<a id="trace-23706"></a>
<a id="trace-23736"></a>
<a id="trace-23738"></a>
<a id="trace-23766"></a>
<a id="trace-23768"></a>
<a id="trace-23852"></a>
<a id="trace-23854"></a>
<a id="trace-23871"></a>
<a id="trace-23873"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23915"></a>
<a id="trace-23917"></a>
<a id="trace-23940"></a>
<a id="trace-23942"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
- 127.25s–170.30s (×88), actor 5, squad 0 (trace 22409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 22279. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.997040852891643, 'next_transition': 22444}.
<a id="trace-22599"></a>
- 132.00s–132.00s (×1), actor 9, squad 1 (trace 22599): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 22498. Next observer evidence: {'until': 162, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2068}.
<a id="trace-22636"></a>
- 132.00s–132.00s (×1), actor 9, squad 1 (trace 22636): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 22498. Next observer evidence: {'until': 162, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2068}.
<a id="trace-2067"></a>
- 171.05s–171.05s (×1), actor 5, squad 0 (events line 2067): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24057}.
<a id="trace-2068"></a>
- 171.05s–171.05s (×1), actor 5, squad 1 (events line 2068): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 201, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2552}.
<a id="trace-24051"></a>
- 171.05s–171.05s (×1), actor 5, squad 0 (trace 24051): renew committed intent (75 s lifetime). Knowledge: actor memory at 171.05s, trace 24051. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24057}.
<a id="trace-24052"></a>
- 171.05s–171.05s (×1), actor 5, squad 1 (trace 24052): renew committed intent (75 s lifetime). Knowledge: actor memory at 171.05s, trace 24052. Next observer evidence: {'until': 201, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2552}.
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24111"></a>
<a id="trace-24113"></a>
<a id="trace-24134"></a>
<a id="trace-24136"></a>
<a id="trace-24214"></a>
<a id="trace-24216"></a>
<a id="trace-24235"></a>
<a id="trace-24237"></a>
<a id="trace-24271"></a>
<a id="trace-24273"></a>
<a id="trace-24301"></a>
<a id="trace-24303"></a>
<a id="trace-24323"></a>
<a id="trace-24325"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24425"></a>
<a id="trace-24427"></a>
<a id="trace-24446"></a>
<a id="trace-24448"></a>
<a id="trace-24476"></a>
<a id="trace-24478"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24592"></a>
<a id="trace-24594"></a>
<a id="trace-24612"></a>
<a id="trace-24614"></a>
<a id="trace-24636"></a>
<a id="trace-24638"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24685"></a>
<a id="trace-24687"></a>
<a id="trace-24779"></a>
<a id="trace-24781"></a>
<a id="trace-24797"></a>
<a id="trace-24799"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-24849"></a>
<a id="trace-24851"></a>
<a id="trace-24872"></a>
<a id="trace-24874"></a>
<a id="trace-24961"></a>
<a id="trace-24963"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25011"></a>
<a id="trace-25034"></a>
<a id="trace-25036"></a>
<a id="trace-25057"></a>
<a id="trace-25059"></a>
<a id="trace-25139"></a>
<a id="trace-25141"></a>
<a id="trace-25163"></a>
<a id="trace-25165"></a>
<a id="trace-25188"></a>
<a id="trace-25190"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25244"></a>
<a id="trace-25246"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25373"></a>
<a id="trace-25375"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25420"></a>
<a id="trace-25422"></a>
<a id="trace-25513"></a>
<a id="trace-25515"></a>
<a id="trace-25535"></a>
<a id="trace-25537"></a>
<a id="trace-25558"></a>
<a id="trace-25560"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25608"></a>
<a id="trace-25610"></a>
<a id="trace-25692"></a>
<a id="trace-25694"></a>
<a id="trace-25717"></a>
<a id="trace-25719"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25769"></a>
<a id="trace-25771"></a>
<a id="trace-25792"></a>
<a id="trace-25794"></a>
<a id="trace-25877"></a>
<a id="trace-25879"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25918"></a>
<a id="trace-25920"></a>
<a id="trace-25958"></a>
<a id="trace-25960"></a>
<a id="trace-25977"></a>
<a id="trace-25979"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26076"></a>
<a id="trace-26078"></a>
<a id="trace-26100"></a>
<a id="trace-26102"></a>
<a id="trace-26128"></a>
<a id="trace-26130"></a>
<a id="trace-26158"></a>
<a id="trace-26160"></a>
<a id="trace-26246"></a>
<a id="trace-26248"></a>
- 171.30s–230.30s (×119), actor 5, squad 0 (trace 24057): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.05s, trace 24052. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24085}.
<a id="trace-2551"></a>
- 231.25s–231.25s (×1), actor 5, squad 0 (events line 2551): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2552"></a>
- 231.25s–231.25s (×1), actor 5, squad 1 (events line 2552): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3026}.
<a id="trace-26265"></a>
- 231.25s–231.25s (×1), actor 5, squad 0 (trace 26265): renew committed intent (75 s lifetime). Knowledge: actor memory at 231.25s, trace 26265. Next observer evidence: None.
<a id="trace-26266"></a>
- 231.25s–231.25s (×1), actor 5, squad 1 (trace 26266): renew committed intent (75 s lifetime). Knowledge: actor memory at 231.25s, trace 26266. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3026}.
<a id="trace-26268"></a>
<a id="trace-26270"></a>
<a id="trace-26291"></a>
<a id="trace-26293"></a>
<a id="trace-26314"></a>
<a id="trace-26316"></a>
<a id="trace-26342"></a>
<a id="trace-26344"></a>
<a id="trace-26427"></a>
<a id="trace-26429"></a>
<a id="trace-26452"></a>
<a id="trace-26454"></a>
<a id="trace-26480"></a>
<a id="trace-26482"></a>
<a id="trace-26504"></a>
<a id="trace-26506"></a>
<a id="trace-26527"></a>
<a id="trace-26529"></a>
<a id="trace-26613"></a>
<a id="trace-26615"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26691"></a>
<a id="trace-26693"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26819"></a>
<a id="trace-26821"></a>
<a id="trace-26846"></a>
<a id="trace-26848"></a>
<a id="trace-26875"></a>
<a id="trace-26877"></a>
<a id="trace-26902"></a>
<a id="trace-26904"></a>
<a id="trace-26986"></a>
<a id="trace-26988"></a>
<a id="trace-27006"></a>
<a id="trace-27008"></a>
<a id="trace-27025"></a>
<a id="trace-27027"></a>
<a id="trace-27055"></a>
<a id="trace-27057"></a>
<a id="trace-27075"></a>
<a id="trace-27077"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27196"></a>
<a id="trace-27198"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27236"></a>
<a id="trace-27238"></a>
<a id="trace-27257"></a>
<a id="trace-27259"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27372"></a>
<a id="trace-27374"></a>
<a id="trace-27395"></a>
<a id="trace-27397"></a>
<a id="trace-27426"></a>
<a id="trace-27428"></a>
<a id="trace-27445"></a>
<a id="trace-27447"></a>
<a id="trace-27524"></a>
<a id="trace-27526"></a>
<a id="trace-27544"></a>
<a id="trace-27546"></a>
<a id="trace-27567"></a>
<a id="trace-27569"></a>
<a id="trace-27601"></a>
<a id="trace-27603"></a>
<a id="trace-27624"></a>
<a id="trace-27626"></a>
<a id="trace-27710"></a>
<a id="trace-27712"></a>
<a id="trace-27729"></a>
<a id="trace-27731"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27775"></a>
<a id="trace-27777"></a>
<a id="trace-27795"></a>
<a id="trace-27797"></a>
<a id="trace-27883"></a>
<a id="trace-27885"></a>
<a id="trace-27917"></a>
<a id="trace-27933"></a>
<a id="trace-27935"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-27977"></a>
<a id="trace-27979"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28084"></a>
<a id="trace-28086"></a>
<a id="trace-28116"></a>
<a id="trace-28118"></a>
<a id="trace-28147"></a>
<a id="trace-28149"></a>
<a id="trace-28164"></a>
<a id="trace-28166"></a>
<a id="trace-28245"></a>
<a id="trace-28247"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28282"></a>
<a id="trace-28284"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28357"></a>
<a id="trace-28359"></a>
<a id="trace-28436"></a>
<a id="trace-28438"></a>
<a id="trace-28456"></a>
<a id="trace-28458"></a>
- 231.30s–291.30s (×121), actor 5, squad 0 (trace 26268): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 231.25s, trace 26266. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26291}.
<a id="trace-3025"></a>
- 291.45s–291.45s (×1), actor 5, squad 0 (events line 3025): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3026"></a>
- 291.45s–291.45s (×1), actor 5, squad 1 (events line 3026): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28465"></a>
- 291.45s–291.45s (×1), actor 5, squad 0 (trace 28465): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.45s, trace 28465. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28479}.
<a id="trace-28466"></a>
- 291.45s–291.45s (×1), actor 5, squad 1 (trace 28466): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.45s, trace 28466. Next observer evidence: {'until': 321.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3504}.
<a id="trace-28479"></a>
<a id="trace-28481"></a>
<a id="trace-28503"></a>
<a id="trace-28505"></a>
<a id="trace-28530"></a>
<a id="trace-28532"></a>
<a id="trace-28625"></a>
<a id="trace-28627"></a>
<a id="trace-28654"></a>
<a id="trace-28656"></a>
<a id="trace-28675"></a>
<a id="trace-28677"></a>
<a id="trace-28698"></a>
<a id="trace-28700"></a>
<a id="trace-28718"></a>
<a id="trace-28720"></a>
<a id="trace-28797"></a>
<a id="trace-28799"></a>
<a id="trace-28822"></a>
<a id="trace-28824"></a>
<a id="trace-28846"></a>
<a id="trace-28848"></a>
<a id="trace-28886"></a>
<a id="trace-28888"></a>
<a id="trace-28903"></a>
<a id="trace-28905"></a>
<a id="trace-28982"></a>
<a id="trace-28984"></a>
<a id="trace-29001"></a>
<a id="trace-29003"></a>
<a id="trace-29022"></a>
<a id="trace-29024"></a>
<a id="trace-29052"></a>
<a id="trace-29054"></a>
<a id="trace-29083"></a>
<a id="trace-29085"></a>
<a id="trace-29171"></a>
<a id="trace-29173"></a>
<a id="trace-29189"></a>
<a id="trace-29191"></a>
<a id="trace-29209"></a>
<a id="trace-29211"></a>
<a id="trace-29233"></a>
<a id="trace-29235"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29347"></a>
<a id="trace-29349"></a>
<a id="trace-29381"></a>
<a id="trace-29402"></a>
<a id="trace-29404"></a>
<a id="trace-29424"></a>
<a id="trace-29426"></a>
<a id="trace-29446"></a>
<a id="trace-29448"></a>
<a id="trace-29523"></a>
<a id="trace-29525"></a>
<a id="trace-29548"></a>
<a id="trace-29580"></a>
<a id="trace-29582"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29632"></a>
<a id="trace-29634"></a>
<a id="trace-29712"></a>
<a id="trace-29714"></a>
<a id="trace-29730"></a>
<a id="trace-29732"></a>
<a id="trace-29750"></a>
<a id="trace-29752"></a>
<a id="trace-29781"></a>
<a id="trace-29783"></a>
<a id="trace-29809"></a>
<a id="trace-29811"></a>
<a id="trace-29893"></a>
<a id="trace-29895"></a>
<a id="trace-29919"></a>
<a id="trace-29921"></a>
<a id="trace-29938"></a>
<a id="trace-29940"></a>
<a id="trace-29964"></a>
<a id="trace-29966"></a>
<a id="trace-29988"></a>
<a id="trace-29990"></a>
<a id="trace-30070"></a>
<a id="trace-30072"></a>
<a id="trace-30097"></a>
<a id="trace-30099"></a>
<a id="trace-30123"></a>
<a id="trace-30125"></a>
<a id="trace-30145"></a>
<a id="trace-30147"></a>
<a id="trace-30171"></a>
<a id="trace-30173"></a>
<a id="trace-30248"></a>
<a id="trace-30250"></a>
<a id="trace-30272"></a>
<a id="trace-30274"></a>
<a id="trace-30304"></a>
<a id="trace-30306"></a>
<a id="trace-30327"></a>
<a id="trace-30329"></a>
<a id="trace-30356"></a>
<a id="trace-30358"></a>
<a id="trace-30437"></a>
<a id="trace-30439"></a>
<a id="trace-30458"></a>
<a id="trace-30460"></a>
<a id="trace-30484"></a>
<a id="trace-30486"></a>
<a id="trace-30512"></a>
<a id="trace-30514"></a>
<a id="trace-30540"></a>
<a id="trace-30542"></a>
<a id="trace-30620"></a>
<a id="trace-30622"></a>
<a id="trace-30646"></a>
<a id="trace-30648"></a>
- 292.30s–351.30s (×118), actor 5, squad 0 (trace 28479): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 291.45s, trace 28466. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28503}.
<a id="trace-3503"></a>
- 351.45s–351.45s (×1), actor 5, squad 0 (events line 3503): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3504"></a>
- 351.45s–351.45s (×1), actor 5, squad 1 (events line 3504): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30656"></a>
- 351.45s–351.45s (×1), actor 5, squad 0 (trace 30656): renew committed intent (75 s lifetime). Knowledge: actor memory at 351.45s, trace 30656. Next observer evidence: {'until': 352.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30672}.
<a id="trace-30657"></a>
- 351.45s–351.45s (×1), actor 5, squad 1 (trace 30657): renew committed intent (75 s lifetime). Knowledge: actor memory at 351.45s, trace 30657. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-30672"></a>
<a id="trace-30674"></a>
<a id="trace-30699"></a>
<a id="trace-30701"></a>
<a id="trace-30722"></a>
<a id="trace-30724"></a>
<a id="trace-30813"></a>
<a id="trace-30815"></a>
<a id="trace-30833"></a>
<a id="trace-30835"></a>
<a id="trace-30853"></a>
<a id="trace-30855"></a>
<a id="trace-30877"></a>
<a id="trace-30879"></a>
<a id="trace-30901"></a>
<a id="trace-30903"></a>
- 352.30s–359.30s (×16), actor 5, squad 0 (trace 30672): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 351.45s, trace 30657. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30699}.

## Net delivery

195 matched order/radio deliveries; 509 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.440s; maximum 1.650s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3666: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3667: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3668: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3669: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3670: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3671: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3674: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3675: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4313: estimate 13.27; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4314: estimate 13.27; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4315: estimate 13.27; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4316: estimate 13.27; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4327: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4328: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4330: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4331: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4332: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4333: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4334: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4335: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4336: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4337: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4338: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4339: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4340: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4341: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4342: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4343: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4344: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4345: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8449: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8451: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8453: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8454: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8456: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8457: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 8458: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 8459: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8460: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8461: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8462: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8463: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8464: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8465: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8466: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8467: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8468: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8469: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 8470: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 8471: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 12141: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 12142: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 12143: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 12144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 12145: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 12146: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 12147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 12148: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 12149: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 12150: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 12151: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 12152: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 12153: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 12154: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 12155: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 12156: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 12157: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 12158: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 12159: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 12160: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 12161: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 12162: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 12163: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12680: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12681: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 12682: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12684: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12685: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 12687: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12688: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 12689: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12690: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12691: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12692: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12693: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12694: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12695: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12696: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 12697: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12698: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12699: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 12700: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 12701: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 13275: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 13276: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 13277: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 13278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 13279: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 13280: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 13281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 13282: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 13283: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 13284: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 13285: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 13286: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 13287: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 13288: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 13289: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 13290: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 13291: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 13292: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 13293: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 13294: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 13295: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 13296: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 13951: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 13952: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 13953: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 13954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13955: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 13956: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 13958: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13959: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13960: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13961: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13962: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13963: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13964: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13965: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13966: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13967: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13968: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13969: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 13970: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 13971: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.05s leader 5, trace 13973: estimate 14.01; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.55s leader 5, trace 15151: estimate 14.10; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15266: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15267: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15268: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15270: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15271: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15273: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15274: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15275: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15276: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15277: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15278: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15279: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15280: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15281: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15282: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15283: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 15284: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 15285: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 15368: estimate 13.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 15369: estimate 13.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 15761: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 15762: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 15763: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 15764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15765: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15766: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 15767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 15768: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15769: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15770: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15771: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15772: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 15773: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15774: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15775: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15776: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15777: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 15778: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 15779: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 15780: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 15871: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 16025: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16026: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16027: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16029: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16030: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16032: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16033: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16034: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16035: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16036: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16037: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16038: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16039: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16040: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16041: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16042: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 16043: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 16044: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 16256: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 16257: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 16258: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16260: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16261: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16263: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16264: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16265: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16266: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16267: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16268: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16269: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16270: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16271: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16272: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16273: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 16274: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 16275: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 18242: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 18243: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 18244: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 18245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 18246: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 18247: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 18248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 18249: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 18250: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 18251: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 18252: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 18253: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 18254: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 18255: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 18256: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 18257: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 18258: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 18259: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 18260: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 18261: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 18455: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 18456: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 18489: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 18490: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 18521: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 18522: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 18523: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 18524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 18525: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 18526: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 18527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 18528: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 18529: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 18530: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 18531: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 18532: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 18533: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 18534: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 18535: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 18536: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 18537: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 18538: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 18539: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 18540: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 18758: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 18759: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 18760: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 18761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 18762: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 18763: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 18764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 18765: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 18766: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 18767: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 18768: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 18769: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 18770: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 18771: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 18772: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 18773: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 18774: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 18775: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 18776: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 18777: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19842: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 19843: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19845: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19846: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 19847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19848: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 19849: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19850: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19851: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19852: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19853: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19854: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19855: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19856: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19857: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19858: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 19859: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 19860: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 20002: estimate 12.44; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 20003: estimate 12.44; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20158: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 20159: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 20160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 20161: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 20162: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 20163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 20164: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20165: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20166: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20167: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20168: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20169: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20170: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20171: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20172: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20173: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20174: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 20175: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 20176: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.15s leader 5, trace 20552: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.15s leader 5, trace 20553: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20655: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 20656: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 20657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20658: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20659: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 20660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20661: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20662: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20663: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20664: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20665: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20666: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20667: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20668: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20669: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20670: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20671: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 20672: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 20673: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.55s leader 5, trace 20828: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.55s leader 5, trace 20829: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 21205: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 21206: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 21207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 21208: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 21209: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 21210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 21211: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 21212: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 21213: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 21214: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 21215: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 21216: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 21217: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 21218: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 21219: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 21220: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 21221: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 21222: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 21223: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.05s leader 5, trace 21322: estimate 12.65; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.05s leader 5, trace 21323: estimate 12.65; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.05s leader 5, trace 21324: estimate 12.65; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.05s leader 5, trace 21325: estimate 12.65; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 21854: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 21855: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 21856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 21857: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 21858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 21859: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 21860: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 21861: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 21862: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 21863: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 21864: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 21865: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 21866: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 21867: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 21868: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 21869: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 21870: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 21871: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 22072: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 22073: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 22074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 22075: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 22076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 22077: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 22078: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 22079: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 22080: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 22081: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 22082: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 22083: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 22084: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 22085: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 22086: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 22087: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 22088: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 22089: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 22277: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 22278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 22279: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 22280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 22281: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 22282: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 22283: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 22284: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 22285: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 22286: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 22287: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 22288: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 22289: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 22290: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 22291: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 22292: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 22293: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 22494: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 22495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 22496: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 22497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 22498: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 22499: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 22500: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 22501: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 22502: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 22503: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 22504: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 22505: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 22506: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 22507: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 22508: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 22509: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 22510: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 22705: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 22706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 22707: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 22708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 22709: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 22710: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 22711: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 22712: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 22713: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 22714: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 22715: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 22716: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 22717: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 22718: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 22719: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 22720: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 22721: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 22863: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 22864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 22865: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 22866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 22867: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 22868: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 22869: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 22870: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 22871: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 22872: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 22873: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 22874: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 22875: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 22876: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 22877: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 22878: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 22879: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 23053: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 23054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 23055: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 23056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 23057: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 23058: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 23059: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 23060: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 23061: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 23062: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 23063: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 23064: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 23065: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 23066: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 23067: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 23068: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 23069: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 23221: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 23222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 23223: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 23224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 23225: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 23226: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 23227: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 23228: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 23229: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 23230: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 23231: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 23232: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 23233: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 23234: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 23235: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 23236: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 23237: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 23403: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 23404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 23405: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 23406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 23407: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 23408: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 23409: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 23410: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 23411: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 23412: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 23413: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 23414: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 23415: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 23416: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 23417: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 23418: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 23419: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 23594: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 23595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 23596: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 23597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 23598: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 23599: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 23600: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 23601: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 23602: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 23603: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 23604: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 23605: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 23606: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 23607: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 23608: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 23609: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 23610: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 23786: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 23788: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 23789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 23790: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 23791: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 23792: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 23793: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 23794: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 23795: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 23796: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 23797: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 23798: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 23799: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 23800: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 23801: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 23802: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23962: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 23963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 23964: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 23966: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 23967: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23968: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23969: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23970: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23971: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23972: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23973: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23974: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23975: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23976: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 23977: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 23978: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 24051: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.05s leader 5, trace 24052: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 24152: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 24153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 24154: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 24155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 24156: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 24157: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 24158: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 24159: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 24160: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 24161: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 24162: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 24163: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 24164: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 24165: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 24166: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 24167: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 24168: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 24338: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 24339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 24340: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 24341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 24342: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 24343: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 24344: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 24345: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 24346: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 24347: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 24348: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 24349: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 24350: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 24351: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 24352: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 24353: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 24354: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 24528: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 24529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 24530: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 24531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 24532: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 24533: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24534: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24535: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24536: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 24537: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24538: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24539: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 24540: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24541: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24542: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 24543: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 24544: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 24706: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 24707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 24708: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 24709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 24710: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 24711: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24712: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24713: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 24714: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 24715: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 24716: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24717: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 24718: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24719: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24720: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 24721: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 24722: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 24892: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 24893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 24894: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 24895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 24896: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 24897: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24898: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24899: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24900: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 24901: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24902: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24903: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24904: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24905: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24906: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 24907: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 24908: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25076: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 25077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 25078: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 25080: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 25081: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25082: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25083: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25084: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25085: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25086: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25087: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25088: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25089: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25090: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 25091: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 25092: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 25261: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 25262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 25263: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 25264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 25265: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 25266: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 25267: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 25268: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 25269: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 25270: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 25271: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 25272: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 25273: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 25274: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 25275: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 25276: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 25277: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 25443: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 25444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 25445: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 25446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 25447: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 25448: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 25449: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 25450: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 25451: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 25452: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 25453: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 25454: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 25455: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 25456: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 25457: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 25458: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 25459: estimate 1.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 25626: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 25627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 25628: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 25629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 25630: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 25631: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 25632: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 25633: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 25634: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 25635: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 25636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 25637: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 25638: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 25639: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 25640: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 25641: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 25642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 25812: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 25813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 25814: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 25815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 25816: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 25817: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 25818: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 25819: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 25820: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 25821: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 25822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 25823: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 25824: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 25825: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 25826: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 25827: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 25828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 25991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 25992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 25993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 25994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 25996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 25998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 25999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 26000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 26001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 26002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 26003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 26004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 26005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 26006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 26007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 26184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 26185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 26186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 26187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 26188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 26189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 26190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 26191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 26192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 26193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 26194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 26195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 26196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 26197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 26198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 26199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 26200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.25s leader 5, trace 26265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.25s leader 5, trace 26266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 26364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 26365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 26366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 26367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 26368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 26369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 26370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 26371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 26372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 26373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 26374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 26375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 26376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 26377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 26378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 26379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 26380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 26545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 26546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 26547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 26548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 26549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 26550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 26551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 26552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 26553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 26554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 26555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 26556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 26730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 26731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 26732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 26733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 26734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 26735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 26736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 26737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 26738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 26739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 26740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 26741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 26742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 26743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 26744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 26745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 26746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 26923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 26924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 26925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 26926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 26927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 26928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 26929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 26930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 26931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 26932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 26936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 26937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 26938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 26939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 27099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 27100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 27101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 27102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 27103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 27104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 27105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 27106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 27107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 27108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 27109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 27110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 27111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 27112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 27113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 27114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 27115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 27277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 27278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 27279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 27280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 27281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 27282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 27283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 27284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 27285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 27286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 27287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 27288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 27289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 27290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 27291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 27292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 27293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 27462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 27463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 27464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 27465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 27466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 27467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 27469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 27470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 27471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 27472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 27474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 27477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 27478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 27648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 27649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 27650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 27651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 27652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 27653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 27654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 27655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 27656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 27657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 27658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 27659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 27660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 27661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 27662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 27663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 27664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 27821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 27822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 27823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 27824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 27825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 27826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 27827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 27828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 27829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 27830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 27831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 27832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 27833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 27834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 27835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 27836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 27837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 27994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 27995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 27996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 27997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 27998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 27999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 28000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 28001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 28002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 28003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 28004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 28005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 28006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 28007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 28008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 28009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 28010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 28181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 28182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 28183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 28184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 28185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 28186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 28187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 28188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 28189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 28190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 28191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 28192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 28193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 28194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 28195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 28196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 28197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 28373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 28374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 28375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 28376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 28377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 28378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 28380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 28381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 28382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 28383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 28385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 28388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 28389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.45s leader 5, trace 28465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.45s leader 5, trace 28466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 28551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 28552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 28553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 28554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 28556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 28566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 28735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 28737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 28739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 28749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 28750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 28921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 28923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 28925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 28929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 29108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 29109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 29110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 29111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 29112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 29113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 29115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 29123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 29124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 29278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 29279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 29280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 29281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 29283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 29293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 29461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 29463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 29465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 29649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 29650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 29651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 29652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 29653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 29654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 29658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 29664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 29665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 29828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 29830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 29831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 29832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 29836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 29842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 30008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 30009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 30010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 30011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 30012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 30013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 30015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 30023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 30024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 30185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 30186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 30187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 30188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 30189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 30190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 30200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 30201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 30373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 30374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 30375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 30376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 30387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 30557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 30558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 30559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 30560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 30571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 351.45s leader 5, trace 30656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 351.45s leader 5, trace 30657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 30744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 30745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 30746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 30747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 30748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 30752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 30758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 30759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 30920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 30921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 30922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 30923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 30924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 30928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 30934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Ellis killed in action
- 1: Dane killed in action
- 1: Bren incapacitated
- 1: Soren killed in action
- 1: Moss incapacitated
- 1: Ash killed in action

## Outcome attribution

- 111.05s, evidence 1672: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.05s, evidence 1673: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.05s, evidence 21322: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.05s, evidence 21323: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09596173780326318, 'next_transition': 21340}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.05s, evidence 21324: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.05s, evidence 21325: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395370 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 112.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2447605852130759, 'next_transition': 21381}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 2067: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24057}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.05s, evidence 2068: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 201, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2552}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 231.25s, evidence 2551: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 231.25s, evidence 2552: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3026}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 291.45s, evidence 3025: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 291.45s, evidence 3026: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 351.45s, evidence 3503: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 351.45s, evidence 3504: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
