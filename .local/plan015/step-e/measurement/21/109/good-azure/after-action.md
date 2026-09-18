# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/21/109/good-azure/battle-109-1789674131978243234`

## Battle summary

**Ember** · 360 s · 328 shots.

### Turning points

- 15.3s, squad 4: contact (events line 212). First recorded contact.
- 23.6s, squad 0: assault ([trace 5800](#trace-5800)). 23.9s, squad 0: advanced tactically.
- 26.1s, squad 1: assault ([trace 6709](#trace-6709)). 26.6s, squad 1: advanced tactically.
- 37.9s, squad 1: help call ([trace 8437](#trace-8437)). 40.2s, squad 0: answered a neighbour with support by fire.
- 40.2s, squad 0: help answer ([trace 8715](#trace-8715)). 69.1s, squad 0: took cover and returned fire.
- 69.0s, squad 0: help call ([trace 13270](#trace-13270)). No completion observed before termination.
- 75.7s, squad 1: help call ([trace 13719](#trace-13719)). No completion observed before termination.
- 86.5s, squad 1: withdrawal ([trace 15797](#trace-15797)). 123.8s, squad 1: took cover and returned fire.
- 123.8s, squad 1: help call ([trace 17066](#trace-17066)). No completion observed before termination.
- 127.3s, squad 1: withdrawal ([trace 17187](#trace-17187)). 147.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, answered a neighbour with support by fire and 2 further drill types; no completed objective recorded; 13 shots, 8/8 lost.
- **1** — FightHere; chose Withdraw to received rally, broke contact and 3 further drill types; withdrew; 10 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 178 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 127 shots, 0/4 lost.

### Decisions and attribution

At 26.6s, squad 1 chose advanced tactically ([trace 6915](#trace-6915)), followed by 0 shots and 1 own casualties; estimate 14.2 against 0 distinct squad-reported contacts; At 69.1s, squad 0 chose took cover and returned fire ([trace 13279](#trace-13279)), followed by 1 shots and 0 own casualties; estimate 15.9 against 0 distinct squad-reported contacts; At 103.5s, squad 1 chose leader risk threshold crossed without support ([trace 16305](#trace-16305)), followed by 1 shots and 0 own casualties; estimate 10.3 against 8 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 795](#trace-795)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9348606891548956, 'next_transition': 814}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 797](#trace-797)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 967}.

### Communication

180 matched deliveries (mean 0.49s, max 1.90s); 495 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.30s, squad 4, contact, evidence events line 212: First recorded contact; .
- 23.60s, squad 0, assault, evidence 5800: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 23.9s, squad 0: advanced tactically.
- 26.05s, squad 1, assault, evidence 6709: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 26.6s, squad 1: advanced tactically.
- 37.85s, squad 1, help call, evidence 8437: NeedSupport; 40.2s, squad 0: answered a neighbour with support by fire.
- 40.15s, squad 0, help answer, evidence 8715: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 69.1s, squad 0: took cover and returned fire.
- 69.00s, squad 0, help call, evidence 13270: NeedSupport; No completion observed before termination.
- 75.70s, squad 1, help call, evidence 13719: NeedSupport; No completion observed before termination.
- 86.45s, squad 1, withdrawal, evidence 15797: Withdraw to received rally; 123.8s, squad 1: took cover and returned fire.
- 123.75s, squad 1, help call, evidence 17066: NeedSupport; No completion observed before termination.
- 127.35s, squad 1, withdrawal, evidence 17187: BreakContact: believed ratio at least two without superiority; 147.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 153.30s, squad 1, withdrawal, evidence 18107: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703163503420739, 'next_transition': 666}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703163503420739, 'next_transition': 666}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703163503420739, 'next_transition': 666}.
<a id="trace-311"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 311): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-312"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 312): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-313"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 313): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544411365258878, 'next_transition': 105}.
<a id="trace-666"></a>
<a id="trace-668"></a>
<a id="trace-695"></a>
<a id="trace-697"></a>
<a id="trace-736"></a>
<a id="trace-738"></a>
<a id="trace-759"></a>
<a id="trace-761"></a>
<a id="trace-785"></a>
<a id="trace-787"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.25999496991542, 'next_transition': 695}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9348606891548956, 'next_transition': 814}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 967}.
<a id="trace-795"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 795): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 795. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9348606891548956, 'next_transition': 814}.
<a id="trace-796"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 796): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 796. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9348606891548956, 'next_transition': 814}.
<a id="trace-797"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 797): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 797. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 967}.
<a id="trace-798"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 798): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.134290264572981, 'next_transition': 967}.
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-956"></a>
<a id="trace-958"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9435363373632518, 'next_transition': 847}.
<a id="trace-960"></a>
<a id="trace-1100"></a>
<a id="trace-1151"></a>
<a id="trace-1153"></a>
<a id="trace-1196"></a>
<a id="trace-1198"></a>
<a id="trace-1280"></a>
<a id="trace-1282"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
<a id="trace-1406"></a>
<a id="trace-1408"></a>
<a id="trace-1498"></a>
<a id="trace-1500"></a>
<a id="trace-1535"></a>
<a id="trace-1537"></a>
<a id="trace-1556"></a>
<a id="trace-1558"></a>
<a id="trace-1588"></a>
<a id="trace-1590"></a>
<a id="trace-1634"></a>
<a id="trace-1636"></a>
<a id="trace-1660"></a>
<a id="trace-1662"></a>
<a id="trace-1681"></a>
<a id="trace-1683"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-2127"></a>
<a id="trace-2129"></a>
<a id="trace-3048"></a>
<a id="trace-3050"></a>
<a id="trace-3404"></a>
<a id="trace-3406"></a>
<a id="trace-3791"></a>
<a id="trace-3793"></a>
<a id="trace-3938"></a>
<a id="trace-3940"></a>
<a id="trace-4013"></a>
<a id="trace-4015"></a>
<a id="trace-4152"></a>
<a id="trace-4154"></a>
<a id="trace-4259"></a>
<a id="trace-4261"></a>
<a id="trace-4297"></a>
<a id="trace-4299"></a>
<a id="trace-4329"></a>
<a id="trace-4331"></a>
<a id="trace-4351"></a>
<a id="trace-4353"></a>
<a id="trace-4380"></a>
<a id="trace-4382"></a>
<a id="trace-4621"></a>
<a id="trace-4623"></a>
<a id="trace-4647"></a>
<a id="trace-4649"></a>
<a id="trace-5829"></a>
<a id="trace-5831"></a>
<a id="trace-6156"></a>
<a id="trace-6158"></a>
<a id="trace-6273"></a>
<a id="trace-6275"></a>
<a id="trace-6308"></a>
<a id="trace-6310"></a>
<a id="trace-6884"></a>
<a id="trace-6886"></a>
<a id="trace-7178"></a>
<a id="trace-7180"></a>
<a id="trace-7202"></a>
<a id="trace-7204"></a>
<a id="trace-7240"></a>
<a id="trace-7242"></a>
<a id="trace-7291"></a>
<a id="trace-7293"></a>
<a id="trace-7404"></a>
<a id="trace-7406"></a>
<a id="trace-7498"></a>
<a id="trace-7500"></a>
<a id="trace-7641"></a>
<a id="trace-7643"></a>
<a id="trace-7704"></a>
<a id="trace-7706"></a>
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7805"></a>
<a id="trace-7807"></a>
<a id="trace-7843"></a>
<a id="trace-7845"></a>
<a id="trace-7872"></a>
<a id="trace-7874"></a>
<a id="trace-7893"></a>
<a id="trace-7895"></a>
<a id="trace-7913"></a>
<a id="trace-7915"></a>
<a id="trace-7937"></a>
<a id="trace-7939"></a>
<a id="trace-7948"></a>
<a id="trace-7950"></a>
<a id="trace-8263"></a>
<a id="trace-8265"></a>
<a id="trace-8296"></a>
<a id="trace-8298"></a>
<a id="trace-8375"></a>
<a id="trace-8377"></a>
<a id="trace-8406"></a>
<a id="trace-8408"></a>
<a id="trace-8430"></a>
<a id="trace-8432"></a>
<a id="trace-8466"></a>
<a id="trace-8468"></a>
<a id="trace-8604"></a>
<a id="trace-8606"></a>
<a id="trace-8626"></a>
<a id="trace-8628"></a>
<a id="trace-8641"></a>
<a id="trace-8643"></a>
<a id="trace-11305"></a>
<a id="trace-11307"></a>
<a id="trace-11331"></a>
<a id="trace-11333"></a>
<a id="trace-11359"></a>
<a id="trace-11361"></a>
<a id="trace-11383"></a>
<a id="trace-11385"></a>
<a id="trace-11413"></a>
<a id="trace-11415"></a>
<a id="trace-11435"></a>
<a id="trace-11437"></a>
<a id="trace-11452"></a>
<a id="trace-11454"></a>
<a id="trace-11471"></a>
<a id="trace-11473"></a>
<a id="trace-11489"></a>
<a id="trace-11491"></a>
<a id="trace-11566"></a>
<a id="trace-11568"></a>
<a id="trace-11581"></a>
<a id="trace-11583"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11611"></a>
<a id="trace-11613"></a>
<a id="trace-11625"></a>
<a id="trace-11627"></a>
<a id="trace-11636"></a>
<a id="trace-11638"></a>
<a id="trace-11667"></a>
<a id="trace-11669"></a>
<a id="trace-11778"></a>
<a id="trace-11780"></a>
<a id="trace-11791"></a>
<a id="trace-11793"></a>
<a id="trace-11810"></a>
<a id="trace-11812"></a>
<a id="trace-11826"></a>
<a id="trace-11828"></a>
<a id="trace-11846"></a>
<a id="trace-11848"></a>
<a id="trace-11939"></a>
<a id="trace-11941"></a>
<a id="trace-12091"></a>
<a id="trace-12093"></a>
<a id="trace-12261"></a>
<a id="trace-12263"></a>
<a id="trace-12481"></a>
<a id="trace-12483"></a>
<a id="trace-12510"></a>
<a id="trace-12512"></a>
<a id="trace-12537"></a>
<a id="trace-12539"></a>
<a id="trace-12591"></a>
<a id="trace-12593"></a>
<a id="trace-12606"></a>
<a id="trace-12608"></a>
<a id="trace-12629"></a>
<a id="trace-12631"></a>
<a id="trace-12641"></a>
<a id="trace-12643"></a>
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12688"></a>
<a id="trace-12690"></a>
<a id="trace-12904"></a>
<a id="trace-12906"></a>
<a id="trace-12942"></a>
<a id="trace-12944"></a>
<a id="trace-12966"></a>
<a id="trace-12968"></a>
<a id="trace-12986"></a>
<a id="trace-12988"></a>
<a id="trace-13003"></a>
<a id="trace-13005"></a>
<a id="trace-13023"></a>
<a id="trace-13025"></a>
<a id="trace-13041"></a>
<a id="trace-13043"></a>
<a id="trace-13155"></a>
<a id="trace-13157"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13191"></a>
<a id="trace-13193"></a>
<a id="trace-13208"></a>
<a id="trace-13210"></a>
<a id="trace-13236"></a>
<a id="trace-13238"></a>
<a id="trace-13263"></a>
<a id="trace-13265"></a>
<a id="trace-13427"></a>
<a id="trace-13429"></a>
<a id="trace-13443"></a>
<a id="trace-13445"></a>
<a id="trace-13546"></a>
<a id="trace-13548"></a>
<a id="trace-13560"></a>
<a id="trace-13562"></a>
<a id="trace-13575"></a>
<a id="trace-13577"></a>
<a id="trace-13586"></a>
<a id="trace-13588"></a>
<a id="trace-13602"></a>
<a id="trace-13604"></a>
<a id="trace-13618"></a>
<a id="trace-13620"></a>
<a id="trace-13629"></a>
<a id="trace-13631"></a>
<a id="trace-13638"></a>
<a id="trace-13640"></a>
<a id="trace-13706"></a>
<a id="trace-13708"></a>
<a id="trace-13723"></a>
<a id="trace-13725"></a>
<a id="trace-13739"></a>
<a id="trace-13741"></a>
<a id="trace-13773"></a>
<a id="trace-13775"></a>
<a id="trace-13785"></a>
<a id="trace-13787"></a>
<a id="trace-13802"></a>
<a id="trace-13804"></a>
<a id="trace-13809"></a>
<a id="trace-13811"></a>
<a id="trace-13875"></a>
<a id="trace-13882"></a>
<a id="trace-13899"></a>
<a id="trace-13907"></a>
<a id="trace-13916"></a>
<a id="trace-13918"></a>
<a id="trace-13931"></a>
<a id="trace-13933"></a>
<a id="trace-13941"></a>
<a id="trace-13943"></a>
<a id="trace-14027"></a>
<a id="trace-14029"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15821"></a>
<a id="trace-15823"></a>
<a id="trace-15831"></a>
<a id="trace-15833"></a>
<a id="trace-15852"></a>
<a id="trace-15854"></a>
<a id="trace-15864"></a>
<a id="trace-15866"></a>
<a id="trace-15876"></a>
<a id="trace-15878"></a>
<a id="trace-15884"></a>
<a id="trace-15886"></a>
<a id="trace-15943"></a>
<a id="trace-15945"></a>
<a id="trace-15958"></a>
<a id="trace-15960"></a>
<a id="trace-15987"></a>
<a id="trace-15989"></a>
<a id="trace-15996"></a>
<a id="trace-15998"></a>
<a id="trace-16006"></a>
<a id="trace-16008"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16104"></a>
<a id="trace-16106"></a>
<a id="trace-16111"></a>
<a id="trace-16113"></a>
<a id="trace-16125"></a>
<a id="trace-16127"></a>
<a id="trace-16147"></a>
<a id="trace-16149"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
<a id="trace-16251"></a>
<a id="trace-16253"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
<a id="trace-16269"></a>
<a id="trace-16271"></a>
<a id="trace-16290"></a>
<a id="trace-16292"></a>
<a id="trace-16315"></a>
<a id="trace-16317"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16337"></a>
<a id="trace-16339"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16415"></a>
<a id="trace-16417"></a>
<a id="trace-16420"></a>
<a id="trace-16422"></a>
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16444"></a>
<a id="trace-16446"></a>
<a id="trace-16456"></a>
<a id="trace-16458"></a>
<a id="trace-16484"></a>
<a id="trace-16486"></a>
<a id="trace-16509"></a>
<a id="trace-16511"></a>
<a id="trace-16586"></a>
<a id="trace-16588"></a>
<a id="trace-16606"></a>
<a id="trace-16608"></a>
<a id="trace-16627"></a>
<a id="trace-16629"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
<a id="trace-16656"></a>
<a id="trace-16658"></a>
<a id="trace-16663"></a>
<a id="trace-16665"></a>
<a id="trace-16684"></a>
<a id="trace-16686"></a>
<a id="trace-16697"></a>
<a id="trace-16699"></a>
<a id="trace-16710"></a>
<a id="trace-16712"></a>
<a id="trace-16796"></a>
<a id="trace-16798"></a>
<a id="trace-16825"></a>
<a id="trace-16827"></a>
<a id="trace-16856"></a>
<a id="trace-16858"></a>
<a id="trace-16873"></a>
<a id="trace-16875"></a>
<a id="trace-16894"></a>
<a id="trace-16896"></a>
<a id="trace-16929"></a>
<a id="trace-16931"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16947"></a>
<a id="trace-16949"></a>
<a id="trace-17008"></a>
<a id="trace-17010"></a>
<a id="trace-17029"></a>
<a id="trace-17031"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
<a id="trace-17062"></a>
<a id="trace-17064"></a>
<a id="trace-17084"></a>
<a id="trace-17086"></a>
<a id="trace-17175"></a>
<a id="trace-17177"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17195"></a>
<a id="trace-17197"></a>
<a id="trace-17209"></a>
<a id="trace-17211"></a>
<a id="trace-17219"></a>
<a id="trace-17221"></a>
<a id="trace-17239"></a>
<a id="trace-17241"></a>
<a id="trace-17299"></a>
<a id="trace-17301"></a>
<a id="trace-17308"></a>
<a id="trace-17310"></a>
<a id="trace-17321"></a>
<a id="trace-17323"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17343"></a>
<a id="trace-17345"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17372"></a>
<a id="trace-17374"></a>
<a id="trace-17382"></a>
<a id="trace-17384"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17470"></a>
<a id="trace-17472"></a>
<a id="trace-17480"></a>
<a id="trace-17482"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17502"></a>
<a id="trace-17504"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17552"></a>
<a id="trace-17554"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17654"></a>
<a id="trace-17656"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17691"></a>
<a id="trace-17693"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17714"></a>
<a id="trace-17716"></a>
<a id="trace-17726"></a>
<a id="trace-17728"></a>
<a id="trace-17740"></a>
<a id="trace-17742"></a>
<a id="trace-17751"></a>
<a id="trace-17753"></a>
<a id="trace-17846"></a>
<a id="trace-17848"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17874"></a>
<a id="trace-17876"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17918"></a>
<a id="trace-17920"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17940"></a>
<a id="trace-17942"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-18019"></a>
<a id="trace-18021"></a>
<a id="trace-18030"></a>
<a id="trace-18032"></a>
<a id="trace-18055"></a>
<a id="trace-18057"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18122"></a>
<a id="trace-18124"></a>
<a id="trace-18143"></a>
<a id="trace-18145"></a>
<a id="trace-18211"></a>
<a id="trace-18213"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18247"></a>
<a id="trace-18249"></a>
<a id="trace-18258"></a>
<a id="trace-18260"></a>
<a id="trace-18269"></a>
<a id="trace-18271"></a>
<a id="trace-18284"></a>
<a id="trace-18286"></a>
<a id="trace-18298"></a>
<a id="trace-18300"></a>
<a id="trace-18396"></a>
<a id="trace-18398"></a>
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18430"></a>
<a id="trace-18432"></a>
<a id="trace-18461"></a>
<a id="trace-18463"></a>
<a id="trace-18470"></a>
<a id="trace-18472"></a>
<a id="trace-18488"></a>
<a id="trace-18490"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18565"></a>
<a id="trace-18567"></a>
<a id="trace-18598"></a>
<a id="trace-18600"></a>
<a id="trace-18619"></a>
<a id="trace-18621"></a>
<a id="trace-18634"></a>
<a id="trace-18636"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18677"></a>
<a id="trace-18679"></a>
<a id="trace-18741"></a>
<a id="trace-18743"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18778"></a>
<a id="trace-18780"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18822"></a>
<a id="trace-18824"></a>
<a id="trace-18838"></a>
<a id="trace-18840"></a>
<a id="trace-18856"></a>
<a id="trace-18858"></a>
<a id="trace-18866"></a>
<a id="trace-18868"></a>
<a id="trace-18928"></a>
<a id="trace-18930"></a>
<a id="trace-18936"></a>
<a id="trace-18938"></a>
<a id="trace-18951"></a>
<a id="trace-18953"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-18999"></a>
<a id="trace-19001"></a>
<a id="trace-19010"></a>
<a id="trace-19012"></a>
<a id="trace-19032"></a>
<a id="trace-19034"></a>
<a id="trace-19110"></a>
<a id="trace-19112"></a>
<a id="trace-19125"></a>
<a id="trace-19127"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19145"></a>
<a id="trace-19147"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19167"></a>
<a id="trace-19169"></a>
<a id="trace-19181"></a>
<a id="trace-19183"></a>
<a id="trace-19191"></a>
<a id="trace-19193"></a>
<a id="trace-19208"></a>
<a id="trace-19210"></a>
<a id="trace-19217"></a>
<a id="trace-19219"></a>
<a id="trace-19316"></a>
<a id="trace-19318"></a>
<a id="trace-19330"></a>
<a id="trace-19332"></a>
<a id="trace-19351"></a>
<a id="trace-19353"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19388"></a>
<a id="trace-19390"></a>
<a id="trace-19396"></a>
<a id="trace-19398"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19543"></a>
<a id="trace-19545"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19577"></a>
<a id="trace-19579"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19680"></a>
<a id="trace-19682"></a>
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19725"></a>
<a id="trace-19727"></a>
<a id="trace-19743"></a>
<a id="trace-19745"></a>
<a id="trace-19750"></a>
<a id="trace-19752"></a>
<a id="trace-19818"></a>
<a id="trace-19820"></a>
<a id="trace-19831"></a>
<a id="trace-19833"></a>
<a id="trace-19852"></a>
<a id="trace-19854"></a>
<a id="trace-19864"></a>
<a id="trace-19866"></a>
<a id="trace-19896"></a>
<a id="trace-19898"></a>
<a id="trace-19998"></a>
<a id="trace-20000"></a>
<a id="trace-20016"></a>
<a id="trace-20018"></a>
<a id="trace-20028"></a>
<a id="trace-20030"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20075"></a>
<a id="trace-20077"></a>
<a id="trace-20088"></a>
<a id="trace-20090"></a>
<a id="trace-20098"></a>
<a id="trace-20100"></a>
<a id="trace-20164"></a>
<a id="trace-20166"></a>
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20198"></a>
<a id="trace-20200"></a>
<a id="trace-20219"></a>
<a id="trace-20221"></a>
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20287"></a>
<a id="trace-20289"></a>
<a id="trace-20349"></a>
<a id="trace-20351"></a>
<a id="trace-20360"></a>
<a id="trace-20362"></a>
<a id="trace-20374"></a>
<a id="trace-20376"></a>
<a id="trace-20384"></a>
<a id="trace-20386"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20407"></a>
<a id="trace-20409"></a>
<a id="trace-20425"></a>
<a id="trace-20427"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20536"></a>
<a id="trace-20538"></a>
<a id="trace-20545"></a>
<a id="trace-20547"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20578"></a>
<a id="trace-20580"></a>
<a id="trace-20589"></a>
<a id="trace-20591"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20613"></a>
<a id="trace-20615"></a>
<a id="trace-20629"></a>
<a id="trace-20631"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20742"></a>
<a id="trace-20744"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20765"></a>
<a id="trace-20767"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20815"></a>
<a id="trace-20817"></a>
<a id="trace-20882"></a>
<a id="trace-20884"></a>
<a id="trace-20892"></a>
<a id="trace-20894"></a>
<a id="trace-20911"></a>
<a id="trace-20913"></a>
<a id="trace-20927"></a>
<a id="trace-20929"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
<a id="trace-20951"></a>
<a id="trace-20953"></a>
<a id="trace-20967"></a>
<a id="trace-20969"></a>
<a id="trace-20983"></a>
<a id="trace-20985"></a>
<a id="trace-20997"></a>
<a id="trace-20999"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21088"></a>
<a id="trace-21090"></a>
<a id="trace-21099"></a>
<a id="trace-21101"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21158"></a>
<a id="trace-21160"></a>
<a id="trace-21174"></a>
<a id="trace-21176"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21255"></a>
<a id="trace-21257"></a>
<a id="trace-21266"></a>
<a id="trace-21268"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21286"></a>
<a id="trace-21288"></a>
<a id="trace-21306"></a>
<a id="trace-21308"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21443"></a>
<a id="trace-21445"></a>
<a id="trace-21461"></a>
<a id="trace-21463"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21486"></a>
<a id="trace-21488"></a>
<a id="trace-21494"></a>
<a id="trace-21496"></a>
<a id="trace-21508"></a>
<a id="trace-21510"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21533"></a>
<a id="trace-21535"></a>
<a id="trace-21541"></a>
<a id="trace-21543"></a>
<a id="trace-21607"></a>
<a id="trace-21609"></a>
<a id="trace-21617"></a>
<a id="trace-21619"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21653"></a>
<a id="trace-21655"></a>
<a id="trace-21681"></a>
<a id="trace-21683"></a>
<a id="trace-21704"></a>
<a id="trace-21706"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21791"></a>
<a id="trace-21793"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21870"></a>
<a id="trace-21872"></a>
<a id="trace-21885"></a>
<a id="trace-21887"></a>
<a id="trace-21902"></a>
<a id="trace-21904"></a>
<a id="trace-21909"></a>
<a id="trace-21911"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-21998"></a>
<a id="trace-22000"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22018"></a>
<a id="trace-22020"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22042"></a>
<a id="trace-22044"></a>
<a id="trace-22055"></a>
<a id="trace-22057"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22155"></a>
<a id="trace-22157"></a>
<a id="trace-22180"></a>
<a id="trace-22182"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22225"></a>
<a id="trace-22227"></a>
<a id="trace-22235"></a>
<a id="trace-22237"></a>
<a id="trace-22333"></a>
<a id="trace-22335"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22377"></a>
<a id="trace-22379"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22524"></a>
<a id="trace-22526"></a>
<a id="trace-22534"></a>
<a id="trace-22536"></a>
<a id="trace-22549"></a>
<a id="trace-22551"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22684"></a>
<a id="trace-22686"></a>
<a id="trace-22693"></a>
<a id="trace-22695"></a>
<a id="trace-22706"></a>
<a id="trace-22708"></a>
<a id="trace-22726"></a>
<a id="trace-22728"></a>
<a id="trace-22737"></a>
<a id="trace-22739"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22796"></a>
<a id="trace-22798"></a>
<a id="trace-22874"></a>
<a id="trace-22876"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
<a id="trace-22900"></a>
<a id="trace-22902"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22933"></a>
<a id="trace-22935"></a>
<a id="trace-22945"></a>
<a id="trace-22947"></a>
<a id="trace-22958"></a>
<a id="trace-22960"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23079"></a>
<a id="trace-23081"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23118"></a>
<a id="trace-23120"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23144"></a>
<a id="trace-23146"></a>
<a id="trace-23154"></a>
<a id="trace-23156"></a>
<a id="trace-23216"></a>
<a id="trace-23218"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23242"></a>
<a id="trace-23244"></a>
<a id="trace-23251"></a>
<a id="trace-23253"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23284"></a>
<a id="trace-23286"></a>
<a id="trace-23302"></a>
<a id="trace-23304"></a>
<a id="trace-23312"></a>
<a id="trace-23314"></a>
<a id="trace-23329"></a>
<a id="trace-23331"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23430"></a>
<a id="trace-23432"></a>
<a id="trace-23437"></a>
<a id="trace-23439"></a>
<a id="trace-23450"></a>
<a id="trace-23452"></a>
<a id="trace-23462"></a>
<a id="trace-23464"></a>
<a id="trace-23488"></a>
<a id="trace-23490"></a>
<a id="trace-23518"></a>
<a id="trace-23520"></a>
<a id="trace-23596"></a>
<a id="trace-23598"></a>
<a id="trace-23614"></a>
<a id="trace-23616"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23641"></a>
<a id="trace-23643"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23681"></a>
<a id="trace-23683"></a>
<a id="trace-23689"></a>
<a id="trace-23691"></a>
<a id="trace-23784"></a>
<a id="trace-23786"></a>
<a id="trace-23811"></a>
<a id="trace-23813"></a>
<a id="trace-23826"></a>
<a id="trace-23828"></a>
<a id="trace-23838"></a>
<a id="trace-23840"></a>
<a id="trace-23847"></a>
<a id="trace-23849"></a>
<a id="trace-23868"></a>
<a id="trace-23870"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-23941"></a>
<a id="trace-23943"></a>
<a id="trace-23958"></a>
<a id="trace-23960"></a>
<a id="trace-23980"></a>
<a id="trace-23982"></a>
<a id="trace-24000"></a>
<a id="trace-24002"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24032"></a>
<a id="trace-24034"></a>
<a id="trace-24054"></a>
<a id="trace-24056"></a>
<a id="trace-24118"></a>
<a id="trace-24120"></a>
<a id="trace-24127"></a>
<a id="trace-24129"></a>
<a id="trace-24142"></a>
<a id="trace-24144"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24183"></a>
<a id="trace-24185"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24233"></a>
<a id="trace-24235"></a>
<a id="trace-24299"></a>
<a id="trace-24301"></a>
<a id="trace-24330"></a>
<a id="trace-24332"></a>
<a id="trace-24343"></a>
<a id="trace-24345"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24400"></a>
<a id="trace-24402"></a>
<a id="trace-24483"></a>
<a id="trace-24485"></a>
<a id="trace-24501"></a>
<a id="trace-24503"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24525"></a>
<a id="trace-24527"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24552"></a>
<a id="trace-24554"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24582"></a>
<a id="trace-24584"></a>
<a id="trace-24669"></a>
<a id="trace-24671"></a>
<a id="trace-24682"></a>
<a id="trace-24684"></a>
<a id="trace-24701"></a>
<a id="trace-24703"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24730"></a>
<a id="trace-24732"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24832"></a>
<a id="trace-24834"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24854"></a>
<a id="trace-24856"></a>
<a id="trace-24886"></a>
<a id="trace-24888"></a>
<a id="trace-24902"></a>
<a id="trace-24904"></a>
<a id="trace-24912"></a>
<a id="trace-24914"></a>
<a id="trace-24936"></a>
<a id="trace-24938"></a>
<a id="trace-24947"></a>
<a id="trace-24949"></a>
<a id="trace-25015"></a>
<a id="trace-25017"></a>
<a id="trace-25028"></a>
<a id="trace-25030"></a>
<a id="trace-25042"></a>
<a id="trace-25044"></a>
<a id="trace-25050"></a>
<a id="trace-25052"></a>
<a id="trace-25071"></a>
<a id="trace-25073"></a>
<a id="trace-25093"></a>
<a id="trace-25095"></a>
<a id="trace-25115"></a>
<a id="trace-25117"></a>
<a id="trace-25183"></a>
<a id="trace-25185"></a>
<a id="trace-25201"></a>
<a id="trace-25203"></a>
<a id="trace-25219"></a>
<a id="trace-25221"></a>
<a id="trace-25231"></a>
<a id="trace-25233"></a>
<a id="trace-25247"></a>
<a id="trace-25249"></a>
<a id="trace-25256"></a>
<a id="trace-25258"></a>
<a id="trace-25268"></a>
<a id="trace-25270"></a>
<a id="trace-25281"></a>
<a id="trace-25283"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25304"></a>
<a id="trace-25306"></a>
<a id="trace-25366"></a>
<a id="trace-25368"></a>
<a id="trace-25377"></a>
<a id="trace-25379"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25425"></a>
<a id="trace-25427"></a>
<a id="trace-25437"></a>
<a id="trace-25439"></a>
<a id="trace-25454"></a>
<a id="trace-25456"></a>
<a id="trace-25464"></a>
<a id="trace-25466"></a>
<a id="trace-25481"></a>
<a id="trace-25483"></a>
- 5.70s–359.30s (×1098), actor 37, squad 4 (trace 960): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 872. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624628825126529, 'next_transition': 1100}.
<a id="trace-967"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 967): traveling overwatch. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.328914752061163, 'next_transition': 1845}.
<a id="trace-968"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 968): received platoon directive. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.328914752061163, 'next_transition': 1845}.
<a id="trace-1020"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1020): traveling overwatch. Knowledge: actor memory at 5.00s, trace 855. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299910597607924, 'next_transition': 1096}.
<a id="trace-1021"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1021): received platoon directive. Knowledge: actor memory at 5.00s, trace 855. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299910597607924, 'next_transition': 1096}.
<a id="trace-1096"></a>
<a id="trace-1098"></a>
<a id="trace-1147"></a>
<a id="trace-1149"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1240"></a>
<a id="trace-1242"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1346"></a>
<a id="trace-1348"></a>
<a id="trace-1371"></a>
<a id="trace-1373"></a>
<a id="trace-1402"></a>
<a id="trace-1404"></a>
<a id="trace-1494"></a>
<a id="trace-1496"></a>
<a id="trace-1531"></a>
<a id="trace-1533"></a>
<a id="trace-1552"></a>
<a id="trace-1554"></a>
<a id="trace-1584"></a>
<a id="trace-1586"></a>
<a id="trace-1610"></a>
<a id="trace-1612"></a>
<a id="trace-1630"></a>
<a id="trace-1632"></a>
<a id="trace-1656"></a>
<a id="trace-1658"></a>
<a id="trace-1677"></a>
<a id="trace-1679"></a>
<a id="trace-1710"></a>
<a id="trace-1712"></a>
<a id="trace-1733"></a>
<a id="trace-1735"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-2123"></a>
<a id="trace-2125"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1096): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 860. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.24031754325287, 'next_transition': 1147}.
<a id="trace-1845"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 1845): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2448}.
<a id="trace-1846"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 1846): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2448}.
<a id="trace-1847"></a>
<a id="trace-2448"></a>
- 15.60s–15.90s (×2), actor 8, squad 1 (trace 1847): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2448}.
<a id="trace-2134"></a>
- 15.85s–15.85s (×1), actor 0, squad 0 (trace 2134): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1746. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2725}.
<a id="trace-2135"></a>
- 15.85s–15.85s (×1), actor 0, squad 0 (trace 2135): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1746. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2725}.
<a id="trace-2136"></a>
<a id="trace-2725"></a>
- 15.85s–16.10s (×2), actor 0, squad 0 (trace 2136): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1746. Next observer evidence: {'until': 16, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2725}.
<a id="trace-3044"></a>
<a id="trace-3046"></a>
- 16.25s–16.25s (×2), actor 5, squad 0 (trace 3044): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1751. Next observer evidence: None.
<a id="trace-3059"></a>
- 16.35s–16.35s (×1), actor 0, squad 0 (trace 3059): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1746. Next observer evidence: {'until': 16.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3400}.
<a id="trace-3400"></a>
<a id="trace-3402"></a>
- 16.75s–16.75s (×2), actor 5, squad 0 (trace 3400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1751. Next observer evidence: {'until': 16.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.157497910913136, 'next_transition': 3410}.
<a id="trace-3410"></a>
- 16.80s–16.80s (×1), actor 0, squad 0 (trace 3410): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1746. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2820573567556784, 'next_transition': 3787}.
<a id="trace-3787"></a>
<a id="trace-3789"></a>
<a id="trace-3850"></a>
<a id="trace-3852"></a>
<a id="trace-3934"></a>
<a id="trace-3936"></a>
<a id="trace-4009"></a>
<a id="trace-4011"></a>
<a id="trace-4093"></a>
<a id="trace-4095"></a>
<a id="trace-4148"></a>
<a id="trace-4150"></a>
- 17.25s–19.75s (×12), actor 5, squad 0 (trace 3787): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1751. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812179306255267, 'next_transition': 3850}.
<a id="trace-4098"></a>
- 19.25s–19.25s (×1), actor 8, squad 1 (trace 4098): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5056891055591483, 'next_transition': 412}.
<a id="trace-411"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 411): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-412"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 412): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4157"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4157): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725166 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4157. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2246460821791667, 'next_transition': 4254}.
<a id="trace-4158"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4158): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725166 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4158. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2246460821791667, 'next_transition': 4254}.
<a id="trace-4159"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4159): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725166 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4159. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9360140293672687, 'next_transition': 4392}.
<a id="trace-4160"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4160): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.725166 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4160. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9360140293672687, 'next_transition': 4392}.
<a id="trace-4254"></a>
<a id="trace-4256"></a>
- 20.25s–20.25s (×2), actor 5, squad 0 (trace 4254): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4177. Next observer evidence: {'until': 20.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11347547740647625, 'next_transition': 4268}.
<a id="trace-4268"></a>
- 20.45s–20.45s (×1), actor 0, squad 0 (trace 4268): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4172. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.10328902792096425, 'next_transition': 4292}.
<a id="trace-4292"></a>
<a id="trace-4294"></a>
<a id="trace-4324"></a>
<a id="trace-4326"></a>
<a id="trace-4346"></a>
<a id="trace-4348"></a>
<a id="trace-4375"></a>
<a id="trace-4377"></a>
<a id="trace-4616"></a>
<a id="trace-4618"></a>
<a id="trace-4642"></a>
<a id="trace-4644"></a>
- 20.75s–23.25s (×12), actor 5, squad 0 (trace 4292): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4177. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5850022236570871, 'next_transition': 4324}.
<a id="trace-4392"></a>
- 22.65s–22.65s (×1), actor 8, squad 1 (trace 4392): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4180. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4627}.
<a id="trace-4627"></a>
- 22.90s–22.90s (×1), actor 8, squad 1 (trace 4627): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4180. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4243863714676184, 'next_transition': 6325}.
<a id="trace-4656"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 4656): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-5800"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 5800): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-5801"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 5801): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-5802"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 5802): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-5803"></a>
- 23.60s–23.60s (×1), actor 1, squad 0 (trace 5803): Assaulting. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-5822"></a>
<a id="trace-5824"></a>
- 23.75s–23.75s (×2), actor 5, squad 0 (trace 5822): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4177. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5834}.
<a id="trace-5834"></a>
- 23.85s–23.85s (×1), actor 1, squad 0 (trace 5834): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6008}.
<a id="trace-5840"></a>
- 23.85s–23.85s (×1), actor 1, squad 0 (trace 5840): MoveTactically. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6008}.
<a id="trace-5841"></a>
- 23.85s–23.85s (×1), actor 1, squad 0 (trace 5841): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6008}.
<a id="trace-6008"></a>
- 24.20s–24.20s (×1), actor 1, squad 0 (trace 6008): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 4173. Next observer evidence: None.
<a id="trace-6119"></a>
<a id="trace-6121"></a>
<a id="trace-6149"></a>
<a id="trace-6151"></a>
<a id="trace-6268"></a>
<a id="trace-6270"></a>
<a id="trace-6303"></a>
<a id="trace-6305"></a>
<a id="trace-6879"></a>
<a id="trace-6881"></a>
<a id="trace-7173"></a>
<a id="trace-7175"></a>
<a id="trace-7198"></a>
<a id="trace-7200"></a>
<a id="trace-7236"></a>
<a id="trace-7238"></a>
<a id="trace-7287"></a>
<a id="trace-7289"></a>
<a id="trace-7331"></a>
<a id="trace-7333"></a>
<a id="trace-7400"></a>
<a id="trace-7402"></a>
<a id="trace-7494"></a>
<a id="trace-7496"></a>
<a id="trace-7637"></a>
<a id="trace-7639"></a>
<a id="trace-7700"></a>
<a id="trace-7702"></a>
<a id="trace-7758"></a>
<a id="trace-7760"></a>
<a id="trace-7801"></a>
<a id="trace-7803"></a>
<a id="trace-7839"></a>
<a id="trace-7841"></a>
<a id="trace-7868"></a>
<a id="trace-7870"></a>
<a id="trace-7889"></a>
<a id="trace-7891"></a>
<a id="trace-7909"></a>
<a id="trace-7911"></a>
<a id="trace-7933"></a>
<a id="trace-7935"></a>
<a id="trace-7944"></a>
<a id="trace-7946"></a>
- 24.25s–34.75s (×44), actor 5, squad 0 (trace 6119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4177. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022500000000000346, 'next_transition': 6149}.
<a id="trace-6325"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6325): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6327"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6327): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6709"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6709): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6710"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6710): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6842"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6842): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6843"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 6843): Assaulting. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020567500000000072, 'next_transition': 6910}.
<a id="trace-6910"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 6910): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7223382099534987, 'next_transition': 8437}.
<a id="trace-6915"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 6915): MoveTactically. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7223382099534987, 'next_transition': 8437}.
<a id="trace-6916"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 6916): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 25.00s, trace 6181. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7223382099534987, 'next_transition': 8437}.
<a id="trace-7979"></a>
- 35.05s–35.05s (×1), actor 1, squad 0 (trace 7979): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 35.00s, trace 7952. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8259}.
<a id="trace-8259"></a>
<a id="trace-8261"></a>
<a id="trace-8292"></a>
<a id="trace-8294"></a>
<a id="trace-8338"></a>
<a id="trace-8340"></a>
<a id="trace-8371"></a>
<a id="trace-8373"></a>
<a id="trace-8402"></a>
<a id="trace-8404"></a>
<a id="trace-8426"></a>
<a id="trace-8428"></a>
<a id="trace-8462"></a>
<a id="trace-8464"></a>
<a id="trace-8600"></a>
<a id="trace-8602"></a>
- 35.25s–38.75s (×16), actor 5, squad 0 (trace 8259): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7956. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8292}.
<a id="trace-8437"></a>
- 37.85s–37.85s (×1), actor 9, squad 1 (trace 8437): NeedSupport. Knowledge: actor memory at 35.00s, trace 7959. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8470}.
<a id="trace-8470"></a>
- 38.35s–38.35s (×1), actor 9, squad 1 (trace 8470): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 7959. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.77272, 'next_transition': 11850}.
<a id="trace-8613"></a>
- 39.05s–39.05s (×1), actor 5, squad 0 (trace 8613): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 39.05s, trace 8613. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000183929278762, 'next_transition': 8622}.
<a id="trace-8622"></a>
<a id="trace-8624"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
- 39.25s–39.75s (×4), actor 5, squad 0 (trace 8622): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.05s, trace 8613. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35576743091517343, 'next_transition': 8637}.
<a id="trace-8715"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 8715): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 8646. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000324553104985, 'next_transition': 11301}.
<a id="trace-8716"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 8716): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 8646. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000324553104985, 'next_transition': 11301}.
<a id="trace-11301"></a>
<a id="trace-11303"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11355"></a>
<a id="trace-11357"></a>
<a id="trace-11379"></a>
<a id="trace-11381"></a>
- 40.25s–41.75s (×8), actor 5, squad 0 (trace 11301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8650. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3160721010474968, 'next_transition': 11327}.
<a id="trace-904"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 904): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11391"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 11391): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.492593 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 11391. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34931267726458287, 'next_transition': 11400}.
<a id="trace-11392"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 11392): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.492593 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 11392. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34931267726458287, 'next_transition': 11400}.
<a id="trace-11400"></a>
<a id="trace-11402"></a>
<a id="trace-11409"></a>
<a id="trace-11411"></a>
<a id="trace-11431"></a>
<a id="trace-11433"></a>
<a id="trace-11448"></a>
<a id="trace-11450"></a>
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11485"></a>
<a id="trace-11487"></a>
<a id="trace-11562"></a>
<a id="trace-11564"></a>
<a id="trace-11577"></a>
<a id="trace-11579"></a>
<a id="trace-11593"></a>
<a id="trace-11595"></a>
<a id="trace-11607"></a>
<a id="trace-11609"></a>
<a id="trace-11621"></a>
<a id="trace-11623"></a>
<a id="trace-11632"></a>
<a id="trace-11634"></a>
<a id="trace-11663"></a>
<a id="trace-11665"></a>
<a id="trace-11680"></a>
<a id="trace-11682"></a>
<a id="trace-11691"></a>
<a id="trace-11693"></a>
<a id="trace-11698"></a>
<a id="trace-11700"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11787"></a>
<a id="trace-11789"></a>
<a id="trace-11806"></a>
<a id="trace-11808"></a>
<a id="trace-11822"></a>
<a id="trace-11824"></a>
<a id="trace-11842"></a>
<a id="trace-11844"></a>
<a id="trace-11916"></a>
<a id="trace-11918"></a>
<a id="trace-11935"></a>
<a id="trace-11937"></a>
<a id="trace-12087"></a>
<a id="trace-12089"></a>
<a id="trace-12249"></a>
<a id="trace-12251"></a>
<a id="trace-12257"></a>
<a id="trace-12259"></a>
<a id="trace-12477"></a>
<a id="trace-12479"></a>
<a id="trace-12506"></a>
<a id="trace-12508"></a>
<a id="trace-12533"></a>
<a id="trace-12535"></a>
<a id="trace-12568"></a>
<a id="trace-12570"></a>
<a id="trace-12587"></a>
<a id="trace-12589"></a>
<a id="trace-12602"></a>
<a id="trace-12604"></a>
<a id="trace-12625"></a>
<a id="trace-12627"></a>
<a id="trace-12637"></a>
<a id="trace-12639"></a>
<a id="trace-12666"></a>
<a id="trace-12668"></a>
<a id="trace-12684"></a>
<a id="trace-12686"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12917"></a>
<a id="trace-12919"></a>
- 42.25s–60.75s (×76), actor 5, squad 0 (trace 11400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 11392. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7588910466915547, 'next_transition': 11409}.
<a id="trace-11850"></a>
- 52.30s–52.30s (×1), actor 9, squad 1 (trace 11850): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 11712. Next observer evidence: {'until': 53.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3125106073399751, 'next_transition': 11949}.
<a id="trace-11949"></a>
- 53.50s–53.50s (×1), actor 9, squad 1 (trace 11949): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 11712. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3731349069111003, 'next_transition': 12107}.
<a id="trace-11950"></a>
<a id="trace-12107"></a>
<a id="trace-12298"></a>
- 53.50s–55.10s (×3), actor 9, squad 1 (trace 11950): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 11712. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3731349069111003, 'next_transition': 12107}.
<a id="trace-12673"></a>
- 59.25s–59.25s (×1), actor 9, squad 1 (trace 12673): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 12283. Next observer evidence: {'until': 60, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34969061643433075, 'next_transition': 12755}.
<a id="trace-12755"></a>
- 60.15s–60.15s (×1), actor 9, squad 1 (trace 12755): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 60.00s, trace 12696. Next observer evidence: {'until': 63.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.414991288498205, 'next_transition': 13046}.
<a id="trace-1151"></a>
- 60.85s–60.85s (×1), actor 5, squad 0 (events line 1151): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12923"></a>
- 60.85s–60.85s (×1), actor 5, squad 0 (trace 12923): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.307871 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 12923. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.003201939991722, 'next_transition': 12937}.
<a id="trace-12924"></a>
- 60.85s–60.85s (×1), actor 5, squad 0 (trace 12924): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.307871 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 12924. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.003201939991722, 'next_transition': 12937}.
<a id="trace-12937"></a>
<a id="trace-12939"></a>
<a id="trace-12961"></a>
<a id="trace-12963"></a>
<a id="trace-12981"></a>
<a id="trace-12983"></a>
<a id="trace-12998"></a>
<a id="trace-13000"></a>
<a id="trace-13018"></a>
<a id="trace-13020"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13066"></a>
<a id="trace-13068"></a>
<a id="trace-13077"></a>
<a id="trace-13079"></a>
<a id="trace-13151"></a>
<a id="trace-13153"></a>
<a id="trace-13166"></a>
<a id="trace-13168"></a>
<a id="trace-13187"></a>
<a id="trace-13189"></a>
<a id="trace-13204"></a>
<a id="trace-13206"></a>
<a id="trace-13218"></a>
<a id="trace-13220"></a>
<a id="trace-13232"></a>
<a id="trace-13234"></a>
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13259"></a>
<a id="trace-13261"></a>
- 61.25s–68.75s (×32), actor 5, squad 0 (trace 12937): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.85s, trace 12924. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9811731919352353, 'next_transition': 12961}.
<a id="trace-13046"></a>
- 63.95s–63.95s (×1), actor 9, squad 1 (trace 13046): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 12696. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.541259068848838, 'next_transition': 13719}.
<a id="trace-13269"></a>
- 69.00s–69.00s (×1), actor 3, squad 0 (trace 13269): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 65.00s, trace 13088. Next observer evidence: None.
<a id="trace-13270"></a>
- 69.00s–69.00s (×1), actor 3, squad 0 (trace 13270): NeedSupport. Knowledge: actor memory at 65.00s, trace 13088. Next observer evidence: None.
<a id="trace-13277"></a>
- 69.05s–69.05s (×1), actor 3, squad 0 (trace 13277): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 13088. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13423}.
<a id="trace-13279"></a>
- 69.05s–69.05s (×1), actor 3, squad 0 (trace 13279): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 13088. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13423}.
<a id="trace-13280"></a>
- 69.05s–69.05s (×1), actor 3, squad 0 (trace 13280): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 13088. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13423}.
<a id="trace-13423"></a>
<a id="trace-13425"></a>
<a id="trace-13439"></a>
<a id="trace-13441"></a>
<a id="trace-13511"></a>
<a id="trace-13513"></a>
<a id="trace-13530"></a>
<a id="trace-13532"></a>
<a id="trace-13542"></a>
<a id="trace-13544"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13571"></a>
<a id="trace-13573"></a>
<a id="trace-13582"></a>
<a id="trace-13584"></a>
<a id="trace-13598"></a>
<a id="trace-13600"></a>
<a id="trace-13614"></a>
<a id="trace-13616"></a>
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13634"></a>
<a id="trace-13636"></a>
<a id="trace-13702"></a>
<a id="trace-13704"></a>
<a id="trace-13736"></a>
<a id="trace-13760"></a>
<a id="trace-13781"></a>
<a id="trace-13798"></a>
<a id="trace-13871"></a>
<a id="trace-13885"></a>
<a id="trace-13903"></a>
<a id="trace-13927"></a>
- 69.25s–83.25s (×34), actor 5, squad 0 (trace 13423): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13090. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34077517776367466, 'next_transition': 13439}.
<a id="trace-13719"></a>
- 75.70s–75.70s (×1), actor 10, squad 1 (trace 13719): NeedSupport. Knowledge: actor memory at 75.00s, trace 13643. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13751}.
<a id="trace-13751"></a>
- 76.70s–76.70s (×1), actor 10, squad 1 (trace 13751): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 75.00s, trace 13643. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1381}.
<a id="trace-1381"></a>
- 80.15s–80.15s (×1), actor 5, squad 1 (events line 1381): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13828"></a>
- 80.15s–80.15s (×1), actor 5, squad 1 (trace 13828): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 13828. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13892}.
<a id="trace-13892"></a>
- 81.70s–81.70s (×1), actor 10, squad 1 (trace 13892): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 13816. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1394}.
<a id="trace-1393"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (events line 1393): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1394"></a>
- 84.05s–84.05s (×1), actor 5, squad 1 (events line 1394): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13948"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 13948): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13948. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5716000000000001, 'next_transition': 13956}.
<a id="trace-13949"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 13949): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13949. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5716000000000001, 'next_transition': 13956}.
<a id="trace-13950"></a>
- 84.05s–84.05s (×1), actor 5, squad 1 (trace 13950): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13950. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14032}.
<a id="trace-13951"></a>
- 84.05s–84.05s (×1), actor 5, squad 1 (trace 13951): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.05s, trace 13951. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14032}.
<a id="trace-13956"></a>
<a id="trace-14023"></a>
<a id="trace-15788"></a>
- 84.25s–86.25s (×3), actor 5, squad 0 (trace 13956): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.05s, trace 13951. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9243999999999986, 'next_transition': 14023}.
<a id="trace-14032"></a>
- 85.45s–85.45s (×1), actor 10, squad 1 (trace 14032): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725102120854103, 'next_transition': 15797}.
<a id="trace-14034"></a>
- 85.45s–85.45s (×1), actor 10, squad 1 (trace 14034): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725102120854103, 'next_transition': 15797}.
<a id="trace-15769"></a>
- 85.45s–85.45s (×1), actor 10, squad 1 (trace 15769): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725102120854103, 'next_transition': 15797}.
<a id="trace-15770"></a>
- 85.45s–85.45s (×1), actor 10, squad 1 (trace 15770): MoveTactically. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725102120854103, 'next_transition': 15797}.
<a id="trace-15771"></a>
- 85.45s–85.45s (×1), actor 10, squad 1 (trace 15771): contact cover complete: assessment resumes closure. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725102120854103, 'next_transition': 15797}.
<a id="trace-15797"></a>
- 86.45s–86.45s (×1), actor 10, squad 1 (trace 15797): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.433804199731989, 'next_transition': 15939}.
<a id="trace-15798"></a>
- 86.45s–86.45s (×1), actor 10, squad 1 (trace 15798): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 13970. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.433804199731989, 'next_transition': 15939}.
<a id="trace-15939"></a>
<a id="trace-15954"></a>
- 90.25s–91.25s (×2), actor 10, squad 1 (trace 15939): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 90.00s, trace 15887. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749945730065236, 'next_transition': 15954}.
<a id="trace-15965"></a>
- 92.10s–92.10s (×1), actor 10, squad 1 (trace 15965): renew committed intent (75 s lifetime). Knowledge: actor memory at 92.10s, trace 15965. Next observer evidence: None.
<a id="trace-1432"></a>
- 92.10s–92.10s (×1), actor 10, squad 1 (events line 1432): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149855393506188, 'next_transition': 15968}.
<a id="trace-15968"></a>
<a id="trace-15983"></a>
<a id="trace-16002"></a>
<a id="trace-16069"></a>
<a id="trace-16085"></a>
<a id="trace-16121"></a>
<a id="trace-16143"></a>
<a id="trace-16216"></a>
<a id="trace-16240"></a>
<a id="trace-16257"></a>
<a id="trace-16286"></a>
- 92.25s–103.25s (×11), actor 10, squad 1 (trace 15968): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 92.10s, trace 15965. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749990652457542, 'next_transition': 15983}.
<a id="trace-16305"></a>
- 103.50s–103.50s (×1), actor 10, squad 1 (trace 16305): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 103.50s, trace 16305. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00020000000000131024, 'next_transition': 16321}.
<a id="trace-16321"></a>
<a id="trace-16395"></a>
<a id="trace-16411"></a>
<a id="trace-16425"></a>
<a id="trace-16440"></a>
<a id="trace-16480"></a>
<a id="trace-16582"></a>
<a id="trace-16623"></a>
<a id="trace-16652"></a>
<a id="trace-16680"></a>
<a id="trace-16706"></a>
<a id="trace-16792"></a>
<a id="trace-16852"></a>
<a id="trace-16890"></a>
<a id="trace-16917"></a>
<a id="trace-16935"></a>
<a id="trace-17004"></a>
<a id="trace-17022"></a>
<a id="trace-17034"></a>
<a id="trace-17047"></a>
- 104.25s–123.25s (×20), actor 10, squad 1 (trace 16321): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 103.50s, trace 16305. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16395}.
<a id="trace-17065"></a>
- 123.75s–123.75s (×1), actor 10, squad 1 (trace 17065): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 123.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 17069}.
<a id="trace-17066"></a>
- 123.75s–123.75s (×1), actor 10, squad 1 (trace 17066): NeedSupport. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 123.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 17069}.
<a id="trace-17069"></a>
- 123.80s–123.80s (×1), actor 10, squad 1 (trace 17069): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 124.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17080}.
<a id="trace-17071"></a>
- 123.80s–123.80s (×1), actor 10, squad 1 (trace 17071): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 124.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17080}.
<a id="trace-17072"></a>
- 123.80s–123.80s (×1), actor 10, squad 1 (trace 17072): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 124.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17080}.
<a id="trace-17080"></a>
<a id="trace-17148"></a>
<a id="trace-17168"></a>
<a id="trace-17180"></a>
- 124.25s–127.25s (×4), actor 10, squad 1 (trace 17080): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 120.00s, trace 16952. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17148}.
<a id="trace-17187"></a>
- 127.35s–127.35s (×1), actor 10, squad 1 (trace 17187): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 17095. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17205}.
<a id="trace-17188"></a>
- 127.35s–127.35s (×1), actor 10, squad 1 (trace 17188): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 17095. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17205}.
<a id="trace-17205"></a>
- 128.30s–128.30s (×1), actor 10, squad 1 (trace 17205): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 125.00s, trace 17095. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1628}.
<a id="trace-1628"></a>
- 128.85s–128.85s (×1), actor 10, squad 1 (events line 1628): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17223"></a>
- 128.85s–128.85s (×1), actor 10, squad 1 (trace 17223): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.097292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 128.85s, trace 17223. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17228}.
<a id="trace-17224"></a>
- 128.85s–128.85s (×1), actor 10, squad 1 (trace 17224): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.097292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 128.85s, trace 17224. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17228}.
<a id="trace-17228"></a>
<a id="trace-17295"></a>
<a id="trace-17317"></a>
<a id="trace-17339"></a>
<a id="trace-17368"></a>
<a id="trace-17393"></a>
<a id="trace-17466"></a>
<a id="trace-17490"></a>
<a id="trace-17509"></a>
<a id="trace-17535"></a>
<a id="trace-17561"></a>
<a id="trace-17636"></a>
<a id="trace-17669"></a>
<a id="trace-17687"></a>
<a id="trace-17710"></a>
<a id="trace-17736"></a>
<a id="trace-17810"></a>
<a id="trace-17842"></a>
<a id="trace-17870"></a>
- 129.30s–147.30s (×19), actor 10, squad 1 (trace 17228): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 128.85s, trace 17224. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17295}.
<a id="trace-17878"></a>
- 147.40s–147.40s (×1), actor 10, squad 1 (trace 17878): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 17755. Next observer evidence: None.
<a id="trace-17881"></a>
- 147.45s–147.45s (×1), actor 10, squad 1 (trace 17881): MoveTactically. Knowledge: actor memory at 145.00s, trace 17755. Next observer evidence: None.
<a id="trace-17882"></a>
- 147.45s–147.45s (×1), actor 10, squad 1 (trace 17882): received platoon directive. Knowledge: actor memory at 145.00s, trace 17755. Next observer evidence: None.
<a id="trace-17886"></a>
- 147.50s–147.50s (×1), actor 10, squad 1 (trace 17886): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 17755. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17914}.
<a id="trace-17914"></a>
<a id="trace-17936"></a>
<a id="trace-18015"></a>
- 148.30s–150.30s (×3), actor 10, squad 1 (trace 17914): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 145.00s, trace 17755. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17936}.
<a id="trace-1811"></a>
- 151.30s–151.30s (×1), actor 10, squad 1 (events line 1811): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}.
<a id="trace-18042"></a>
- 151.30s–151.30s (×1), actor 10, squad 1 (trace 18042): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 150.00s, trace 17960. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}.
<a id="trace-18047"></a>
- 151.30s–151.30s (×1), actor 10, squad 1 (trace 18047): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.105368 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 151.30s, trace 18047. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}.
<a id="trace-18048"></a>
- 151.30s–151.30s (×1), actor 10, squad 1 (trace 18048): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.105368 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 151.30s, trace 18048. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}.
<a id="trace-18068"></a>
<a id="trace-18102"></a>
- 152.30s–153.30s (×2), actor 10, squad 1 (trace 18068): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 151.30s, trace 18048. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18102}.
<a id="trace-18107"></a>
- 153.30s–153.30s (×1), actor 10, squad 1 (trace 18107): Withdraw to received rally. Knowledge: actor memory at 151.30s, trace 18048. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18139}.
<a id="trace-18108"></a>
- 153.30s–153.30s (×1), actor 10, squad 1 (trace 18108): rearward bound: one stationary suppressing element. Knowledge: actor memory at 151.30s, trace 18048. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18139}.
<a id="trace-18139"></a>
<a id="trace-18207"></a>
<a id="trace-18233"></a>
<a id="trace-18254"></a>
<a id="trace-18280"></a>
<a id="trace-18318"></a>
<a id="trace-18392"></a>
<a id="trace-18418"></a>
<a id="trace-18438"></a>
<a id="trace-18457"></a>
<a id="trace-18484"></a>
<a id="trace-18561"></a>
<a id="trace-18594"></a>
<a id="trace-18615"></a>
<a id="trace-18643"></a>
<a id="trace-18666"></a>
<a id="trace-18737"></a>
<a id="trace-18763"></a>
<a id="trace-18794"></a>
<a id="trace-18818"></a>
<a id="trace-18852"></a>
<a id="trace-18924"></a>
<a id="trace-18947"></a>
<a id="trace-18971"></a>
<a id="trace-18995"></a>
<a id="trace-19028"></a>
<a id="trace-19106"></a>
<a id="trace-19134"></a>
<a id="trace-19154"></a>
<a id="trace-19177"></a>
<a id="trace-19204"></a>
<a id="trace-19279"></a>
<a id="trace-19312"></a>
<a id="trace-19341"></a>
<a id="trace-19361"></a>
<a id="trace-19384"></a>
<a id="trace-19455"></a>
<a id="trace-19511"></a>
<a id="trace-19539"></a>
<a id="trace-19565"></a>
<a id="trace-19637"></a>
<a id="trace-19658"></a>
<a id="trace-19676"></a>
<a id="trace-19739"></a>
<a id="trace-19814"></a>
<a id="trace-19842"></a>
<a id="trace-19860"></a>
<a id="trace-19879"></a>
<a id="trace-19907"></a>
<a id="trace-19986"></a>
<a id="trace-20012"></a>
<a id="trace-20041"></a>
<a id="trace-20061"></a>
<a id="trace-20084"></a>
<a id="trace-20160"></a>
<a id="trace-20186"></a>
- 154.30s–211.30s (×56), actor 10, squad 1 (trace 18139): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 151.30s, trace 18048. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18207}.
<a id="trace-2435"></a>
- 213.15s–213.15s (×1), actor 10, squad 1 (events line 2435): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20243"></a>
- 213.15s–213.15s (×1), actor 10, squad 1 (trace 20243): renew committed intent (75 s lifetime). Knowledge: actor memory at 213.15s, trace 20243. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20247}.
<a id="trace-20247"></a>
<a id="trace-20275"></a>
<a id="trace-20345"></a>
<a id="trace-20370"></a>
<a id="trace-20394"></a>
<a id="trace-20421"></a>
<a id="trace-20458"></a>
<a id="trace-20554"></a>
<a id="trace-20574"></a>
<a id="trace-20597"></a>
<a id="trace-20625"></a>
<a id="trace-20710"></a>
<a id="trace-20738"></a>
<a id="trace-20761"></a>
<a id="trace-20785"></a>
<a id="trace-20806"></a>
<a id="trace-20878"></a>
<a id="trace-20907"></a>
<a id="trace-20963"></a>
<a id="trace-20993"></a>
<a id="trace-21065"></a>
<a id="trace-21084"></a>
<a id="trace-21109"></a>
<a id="trace-21142"></a>
<a id="trace-21170"></a>
<a id="trace-21251"></a>
<a id="trace-21275"></a>
<a id="trace-21295"></a>
<a id="trace-21319"></a>
<a id="trace-21347"></a>
<a id="trace-21427"></a>
<a id="trace-21457"></a>
<a id="trace-21482"></a>
<a id="trace-21504"></a>
<a id="trace-21529"></a>
<a id="trace-21603"></a>
<a id="trace-21630"></a>
<a id="trace-21664"></a>
<a id="trace-21693"></a>
<a id="trace-21715"></a>
<a id="trace-21787"></a>
<a id="trace-21810"></a>
<a id="trace-21831"></a>
<a id="trace-21866"></a>
<a id="trace-21898"></a>
<a id="trace-21973"></a>
<a id="trace-22014"></a>
<a id="trace-22038"></a>
<a id="trace-22069"></a>
<a id="trace-22151"></a>
<a id="trace-22176"></a>
<a id="trace-22201"></a>
<a id="trace-22221"></a>
<a id="trace-22244"></a>
<a id="trace-22317"></a>
<a id="trace-22350"></a>
<a id="trace-22373"></a>
<a id="trace-22404"></a>
<a id="trace-22426"></a>
<a id="trace-22494"></a>
- 213.30s–275.30s (×60), actor 10, squad 1 (trace 20247): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 213.15s, trace 20243. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20275}.
<a id="trace-3047"></a>
- 275.75s–275.75s (×1), actor 10, squad 1 (events line 3047): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22520}.
<a id="trace-22506"></a>
- 275.75s–275.75s (×1), actor 10, squad 1 (trace 22506): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.75s, trace 22506. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22520}.
<a id="trace-22520"></a>
<a id="trace-22545"></a>
<a id="trace-22577"></a>
<a id="trace-22609"></a>
<a id="trace-22680"></a>
<a id="trace-22702"></a>
<a id="trace-22722"></a>
<a id="trace-22748"></a>
<a id="trace-22775"></a>
<a id="trace-22859"></a>
<a id="trace-22888"></a>
<a id="trace-22907"></a>
<a id="trace-22929"></a>
<a id="trace-22954"></a>
<a id="trace-23027"></a>
<a id="trace-23064"></a>
<a id="trace-23091"></a>
<a id="trace-23114"></a>
<a id="trace-23140"></a>
<a id="trace-23212"></a>
<a id="trace-23238"></a>
<a id="trace-23264"></a>
<a id="trace-23298"></a>
<a id="trace-23325"></a>
<a id="trace-23402"></a>
<a id="trace-23426"></a>
<a id="trace-23446"></a>
<a id="trace-23473"></a>
<a id="trace-23506"></a>
<a id="trace-23579"></a>
<a id="trace-23610"></a>
<a id="trace-23629"></a>
<a id="trace-23651"></a>
<a id="trace-23677"></a>
<a id="trace-23752"></a>
<a id="trace-23780"></a>
<a id="trace-23807"></a>
<a id="trace-23834"></a>
<a id="trace-23858"></a>
<a id="trace-23928"></a>
<a id="trace-23954"></a>
<a id="trace-23976"></a>
<a id="trace-24012"></a>
<a id="trace-24045"></a>
<a id="trace-24114"></a>
<a id="trace-24138"></a>
<a id="trace-24156"></a>
<a id="trace-24179"></a>
<a id="trace-24218"></a>
<a id="trace-24295"></a>
<a id="trace-24320"></a>
<a id="trace-24339"></a>
<a id="trace-24359"></a>
<a id="trace-24385"></a>
<a id="trace-24463"></a>
<a id="trace-24497"></a>
<a id="trace-24521"></a>
<a id="trace-24548"></a>
<a id="trace-24570"></a>
<a id="trace-24640"></a>
<a id="trace-24665"></a>
<a id="trace-24697"></a>
- 276.30s–337.30s (×62), actor 10, squad 1 (trace 22520): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 275.75s, trace 22506. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22545}.
<a id="trace-3660"></a>
- 337.35s–337.35s (×1), actor 10, squad 1 (events line 3660): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24704"></a>
- 337.35s–337.35s (×1), actor 10, squad 1 (trace 24704): renew committed intent (75 s lifetime). Knowledge: actor memory at 337.35s, trace 24704. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24726}.
<a id="trace-24726"></a>
<a id="trace-24759"></a>
<a id="trace-24828"></a>
<a id="trace-24850"></a>
<a id="trace-24873"></a>
<a id="trace-24898"></a>
<a id="trace-24932"></a>
<a id="trace-25011"></a>
<a id="trace-25038"></a>
<a id="trace-25057"></a>
<a id="trace-25079"></a>
<a id="trace-25105"></a>
<a id="trace-25179"></a>
<a id="trace-25215"></a>
<a id="trace-25243"></a>
<a id="trace-25264"></a>
<a id="trace-25290"></a>
<a id="trace-25362"></a>
<a id="trace-25389"></a>
<a id="trace-25421"></a>
<a id="trace-25450"></a>
<a id="trace-25477"></a>
- 338.30s–359.30s (×22), actor 10, squad 1 (trace 24726): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=10. Knowledge: actor memory at 337.35s, trace 24704. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24759}.

## Net delivery

180 matched order/radio deliveries; 495 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.486s; maximum 1.900s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4157: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4158: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4159: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4160: estimate 13.79; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4172: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4177: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4178: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4180: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 4182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 4183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4184: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4185: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4186: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4187: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4188: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4189: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4190: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4191: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4192: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4193: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 4194: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 4195: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6178: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6179: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6181: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6182: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 6183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 6184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6185: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6186: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6187: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6188: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6189: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6190: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6191: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6192: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6193: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6194: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6195: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6196: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7533: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7537: estimate 15.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7538: estimate 16.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7540: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7541: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7544: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7545: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7546: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7547: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7548: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7549: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7550: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7551: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7552: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7553: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7554: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7555: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7952: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7956: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7957: estimate 16.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7959: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 7960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 7961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7962: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7963: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7964: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7965: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7966: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7967: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7968: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7969: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7970: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7971: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 7972: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 7973: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.05s leader 5, trace 8613: estimate 16.14; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8646: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8650: estimate 16.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8651: estimate 16.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8653: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 8654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 8655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8656: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8657: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8658: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8659: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8660: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8661: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8662: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8663: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8664: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8665: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 8666: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 8667: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 11391: estimate 16.24; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 11392: estimate 16.24; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 11492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11495: estimate 16.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11496: estimate 16.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11498: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 11499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 11500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11501: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11502: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11503: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11504: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11505: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11506: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11507: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11508: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11509: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11510: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 11511: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 11512: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11710: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11711: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11712: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 11713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 11714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11715: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11716: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11717: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11718: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11719: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11720: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11721: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11722: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11723: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11724: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11725: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11726: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12279: estimate 16.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12281: estimate 15.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12282: estimate 16.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12283: estimate 16.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 12284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 12285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12286: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12287: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12288: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12289: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12290: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12291: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12292: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12293: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12294: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12295: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12296: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12297: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 12692: estimate 15.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12693: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12694: estimate 16.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 12695: estimate 16.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 12696: estimate 16.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 12697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 12698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 12699: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12700: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12701: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12702: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12703: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12704: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12705: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12706: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12707: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12708: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 12709: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 12710: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 12923: estimate 16.24; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 12924: estimate 16.24; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13088: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13089: estimate 16.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13090: estimate 16.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13091: estimate 16.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13092: estimate 16.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 13093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 13094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13095: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13096: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13097: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13098: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13099: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13100: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13101: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13102: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13103: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13104: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13105: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 13447: estimate 15.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13448: estimate 16.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13449: estimate 16.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 13450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 13451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13452: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13453: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13454: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13455: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13456: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13457: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13458: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13459: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13460: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 13461: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 13462: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13641: estimate 16.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13642: estimate 16.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 13643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 13644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13645: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13646: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13647: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13648: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13649: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13650: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13651: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13652: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 13653: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 13654: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13815: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 13817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13818: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13819: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13820: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13821: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13822: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13823: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13824: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13825: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13826: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13827: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 13828: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13948: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13949: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13950: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 13951: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13969: estimate 15.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13970: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13972: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13973: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13974: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13975: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13976: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13977: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13978: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13979: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13980: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13981: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 15887: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 15888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15889: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15890: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15891: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15892: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15893: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 15894: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 15895: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 15896: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 15897: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.10s leader 10, trace 15965: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 16016: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 16017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16018: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16019: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16020: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16021: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16022: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16023: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16024: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 16025: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 16026: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 16160: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 16161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16162: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16163: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16164: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16165: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16166: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16167: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16168: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 16169: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 16170: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.50s leader 10, trace 16305: estimate 10.28; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 16343: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 16344: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16345: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16346: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16347: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16348: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16349: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16350: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16351: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16352: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16353: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 16522: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 16523: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16524: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16525: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16526: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16527: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16528: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16529: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16530: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 16531: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16532: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 16728: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 16729: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16730: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16731: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16732: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16733: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16734: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16735: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16736: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 16737: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16738: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 16952: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 16953: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16954: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16955: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16956: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16957: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16958: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16959: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16960: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 16961: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 16962: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 17095: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17096: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17097: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17098: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17099: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17100: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17101: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17102: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17103: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17104: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 10, trace 17223: estimate 10.28; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 10, trace 17224: estimate 10.28; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 17242: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17243: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17244: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17245: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17246: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17247: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17248: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17249: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 17250: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 17251: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 17410: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17411: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17412: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17413: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17414: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17415: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17416: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17417: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 17418: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 17419: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 17583: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17584: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17585: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17586: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17587: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17588: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17589: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17590: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 17591: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 17592: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 17755: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17756: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17757: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17758: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17759: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17760: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17761: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17762: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 17763: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 17764: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 17960: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17961: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17962: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17963: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17964: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17965: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17966: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17967: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 17968: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 17969: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.30s leader 10, trace 18047: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.30s leader 10, trace 18048: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 18154: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18155: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18156: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18157: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18158: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18159: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18160: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18161: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 18162: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 18163: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 18333: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18334: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18335: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18336: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18337: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18338: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18339: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18340: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 18341: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18342: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 18501: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18502: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18503: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18504: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18505: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18506: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18507: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18508: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 18509: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 18510: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 18684: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18685: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18686: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18687: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18688: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18689: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18690: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18691: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 18692: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 18693: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 18869: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18870: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18871: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18872: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18873: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18874: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18875: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18876: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 18877: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 18878: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 10, trace 19047: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19048: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19049: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19050: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19051: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19052: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19053: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19054: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 19055: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 19056: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 10, trace 19225: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19226: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19227: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19228: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19229: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19230: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19231: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19232: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 19233: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 19234: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 10, trace 19400: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19401: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19402: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19403: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19404: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19405: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19406: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19407: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19408: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19409: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 10, trace 19581: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19582: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19583: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19584: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19585: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19586: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19587: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19588: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19589: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19590: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 10, trace 19761: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19762: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19763: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19764: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19765: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19766: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19767: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19768: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19769: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19770: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 10, trace 19924: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19925: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19926: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19927: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19928: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19929: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19930: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19931: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 19932: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 19933: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 10, trace 20102: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20103: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20104: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20105: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20106: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20107: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20108: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20109: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 20110: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 20111: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 213.15s leader 10, trace 20243: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 10, trace 20292: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20293: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20294: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20295: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20296: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20297: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20298: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20299: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 20300: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 20301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 10, trace 20474: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20475: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20476: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20477: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20478: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20479: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20480: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20481: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 20482: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 20483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 10, trace 20645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20648: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20649: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20651: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20652: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 20653: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 20654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 10, trace 20822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 20830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 20831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 10, trace 21010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 21018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 21019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 10, trace 21192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 21200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 21201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 10, trace 21372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 21380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 21381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 10, trace 21548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 21556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 21557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 10, trace 21731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 21739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 21740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 10, trace 21920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 21928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 21929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 10, trace 22093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 22094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 22095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 22096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 22097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 22098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 22099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 22100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 22101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 22102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 10, trace 22261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 22269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 22270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 10, trace 22441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.75s leader 10, trace 22506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 10, trace 22625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 22633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 22634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 10, trace 22800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 22808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 22809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 10, trace 22973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 22981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 22982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 10, trace 23157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 23165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 23166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 10, trace 23347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 23355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 23356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 10, trace 23526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 23534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 23535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 10, trace 23694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 23699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 23702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 23703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 10, trace 23872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 23880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 23881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 10, trace 24061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 24069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 24070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 10, trace 24236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 10, trace 24404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 24409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 24412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 24413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 10, trace 24587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 24595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 24596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 337.35s leader 10, trace 24704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 10, trace 24773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 24781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 24782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 10, trace 24951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 24959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 24960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 10, trace 25125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 25126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 25133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 25134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 10, trace 25307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 25315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 25316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 10, trace 25493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 25501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 25502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bren killed in action
- 1: Rook incapacitated
- 1: Reed incapacitated
- 1: Soren incapacitated
- 1: Orin killed in action
- 1: Cole incapacitated
- 1: Tern incapacitated
- 1: Ash killed in action
- 1: Voss incapacitated
- 1: Moss incapacitated
- 1: Iven incapacitated
- 1: Bram incapacitated
- 1: Ellis incapacitated

## Outcome attribution

- 84.05s, evidence 1393: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 1394: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13948: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5716000000000001, 'next_transition': 13956}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13949: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5716000000000001, 'next_transition': 13956}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13950: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14032}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.05s, evidence 13951: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187461 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14032}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.10s, evidence 1432: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149855393506188, 'next_transition': 15968}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.30s, evidence 1811: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.30s, evidence 18047: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.105368 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.30s, evidence 18048: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.105368 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18068}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 213.15s, evidence 2435: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 275.75s, evidence 3047: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22520}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 337.35s, evidence 3660: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
