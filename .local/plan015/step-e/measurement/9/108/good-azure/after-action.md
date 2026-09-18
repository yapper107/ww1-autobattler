# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/108/good-azure/battle-108-1789673819898405335`

## Battle summary

**Ember** · 360 s · 447 shots.

### Turning points

- 36.0s, squad 4: contact (events line 322). First recorded contact.
- 58.8s, squad 0: help call ([trace 13756](#trace-13756)). No completion observed before termination.
- 68.7s, squad 1: withdrawal ([trace 14474](#trace-14474)). 101.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 71.7s, squad 1: help call ([trace 14753](#trace-14753)). 73.3s, squad 0: answered a neighbour with support by fire.
- 73.3s, squad 0: help answer ([trace 14874](#trace-14874)). 77.1s, squad 0: took cover and returned fire.
- 93.8s, squad 0: withdrawal ([trace 18072](#trace-18072)). 135.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 112.8s, squad 1: withdrawal ([trace 19262](#trace-19262)). No completion observed before termination.
- 140.2s, squad 0: withdrawal ([trace 20515](#trace-20515)). 188.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 274.3s, squad 0: withdrawal ([trace 25954](#trace-25954)). 302.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 291.2s, squad 0: help call ([trace 26861](#trace-26861)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 46 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 6 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 271 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 124 shots, 0/2 lost.

### Decisions and attribution

At 73.3s, squad 0 chose answered a neighbour with support by fire ([trace 14874](#trace-14874)), followed by 1 shots and 1 own casualties; estimate 12.3 against 0 distinct squad-reported contacts; At 54.7s, squad 1 chose advanced tactically ([trace 12792](#trace-12792)), followed by 2 shots and 0 own casualties; estimate 11.8 against 0 distinct squad-reported contacts; At 53.4s, squad 1 chose FightHere: nearest known group ([trace 12677](#trace-12677)), followed by 1 shots and 0 own casualties; estimate 12.3 against 9 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889323815519, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 827}.

### Communication

207 matched deliveries (mean 0.41s, max 2.15s); 492 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 36.00s, squad 4, contact, evidence events line 322: First recorded contact; .
- 58.75s, squad 0, help call, evidence 13756: NeedSupport; No completion observed before termination.
- 68.70s, squad 1, withdrawal, evidence 14474: BreakContact: believed ratio at least two without superiority; 101.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 71.65s, squad 1, help call, evidence 14753: NeedSupport; 73.3s, squad 0: answered a neighbour with support by fire.
- 73.30s, squad 0, help answer, evidence 14874: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 77.1s, squad 0: took cover and returned fire.
- 93.80s, squad 0, withdrawal, evidence 18072: BreakContact: believed ratio at least two without superiority; 135.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 112.85s, squad 1, withdrawal, evidence 19262: Withdraw to received rally; No completion observed before termination.
- 140.25s, squad 0, withdrawal, evidence 20515: Withdraw to received rally; 188.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 274.30s, squad 0, withdrawal, evidence 25954: BreakContact: believed ratio at least two without superiority; 302.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 291.25s, squad 0, help call, evidence 26861: NeedSupport; No completion observed before termination.
- 317.05s, squad 0, withdrawal, evidence 27745: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915565576670989, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915565576670989, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915565576670989, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-639"></a>
<a id="trace-641"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-683"></a>
<a id="trace-685"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600024788327757, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889323815519, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889323815519, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889323815519, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-949"></a>
<a id="trace-951"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450017924359778, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1861}.
<a id="trace-953"></a>
<a id="trace-955"></a>
<a id="trace-1303"></a>
<a id="trace-1305"></a>
<a id="trace-1342"></a>
<a id="trace-1344"></a>
<a id="trace-1384"></a>
<a id="trace-1386"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
<a id="trace-1456"></a>
<a id="trace-1458"></a>
<a id="trace-1503"></a>
<a id="trace-1505"></a>
<a id="trace-1537"></a>
<a id="trace-1539"></a>
<a id="trace-1654"></a>
<a id="trace-1656"></a>
<a id="trace-1679"></a>
<a id="trace-1681"></a>
<a id="trace-1703"></a>
<a id="trace-1705"></a>
<a id="trace-1731"></a>
<a id="trace-1733"></a>
<a id="trace-1763"></a>
<a id="trace-1765"></a>
<a id="trace-1788"></a>
<a id="trace-1790"></a>
<a id="trace-1811"></a>
<a id="trace-1813"></a>
<a id="trace-1856"></a>
<a id="trace-1858"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
<a id="trace-2012"></a>
<a id="trace-2014"></a>
<a id="trace-2039"></a>
<a id="trace-2041"></a>
<a id="trace-2365"></a>
<a id="trace-2367"></a>
<a id="trace-2430"></a>
<a id="trace-2432"></a>
<a id="trace-2447"></a>
<a id="trace-2449"></a>
<a id="trace-2485"></a>
<a id="trace-2487"></a>
<a id="trace-2532"></a>
<a id="trace-2534"></a>
<a id="trace-2556"></a>
<a id="trace-2558"></a>
<a id="trace-2647"></a>
<a id="trace-2649"></a>
<a id="trace-2675"></a>
<a id="trace-2677"></a>
<a id="trace-2703"></a>
<a id="trace-2705"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2766"></a>
<a id="trace-2768"></a>
<a id="trace-2829"></a>
<a id="trace-2831"></a>
<a id="trace-2882"></a>
<a id="trace-2884"></a>
<a id="trace-2916"></a>
<a id="trace-2918"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3054"></a>
<a id="trace-3056"></a>
<a id="trace-3090"></a>
<a id="trace-3092"></a>
<a id="trace-3102"></a>
<a id="trace-3104"></a>
<a id="trace-3121"></a>
<a id="trace-3123"></a>
<a id="trace-3131"></a>
<a id="trace-3133"></a>
<a id="trace-3261"></a>
<a id="trace-3263"></a>
<a id="trace-3281"></a>
<a id="trace-3283"></a>
<a id="trace-3418"></a>
<a id="trace-3420"></a>
<a id="trace-3497"></a>
<a id="trace-3499"></a>
<a id="trace-4006"></a>
<a id="trace-4008"></a>
<a id="trace-4033"></a>
<a id="trace-4035"></a>
<a id="trace-4101"></a>
<a id="trace-4103"></a>
<a id="trace-4131"></a>
<a id="trace-4133"></a>
<a id="trace-4220"></a>
<a id="trace-4222"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4270"></a>
<a id="trace-4272"></a>
<a id="trace-4308"></a>
<a id="trace-4310"></a>
<a id="trace-4331"></a>
<a id="trace-4333"></a>
<a id="trace-4378"></a>
<a id="trace-4380"></a>
<a id="trace-4407"></a>
<a id="trace-4409"></a>
<a id="trace-5034"></a>
<a id="trace-5036"></a>
<a id="trace-5655"></a>
<a id="trace-5657"></a>
<a id="trace-6350"></a>
<a id="trace-6352"></a>
<a id="trace-6400"></a>
<a id="trace-6402"></a>
<a id="trace-6443"></a>
<a id="trace-6445"></a>
<a id="trace-7259"></a>
<a id="trace-7261"></a>
<a id="trace-7520"></a>
<a id="trace-7522"></a>
<a id="trace-8199"></a>
<a id="trace-8201"></a>
<a id="trace-8246"></a>
<a id="trace-8248"></a>
<a id="trace-8374"></a>
<a id="trace-8376"></a>
<a id="trace-8402"></a>
<a id="trace-8404"></a>
<a id="trace-8459"></a>
<a id="trace-8461"></a>
<a id="trace-8767"></a>
<a id="trace-8769"></a>
<a id="trace-8822"></a>
<a id="trace-8824"></a>
<a id="trace-8882"></a>
<a id="trace-8884"></a>
<a id="trace-8940"></a>
<a id="trace-8942"></a>
<a id="trace-8993"></a>
<a id="trace-8995"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9083"></a>
<a id="trace-9085"></a>
<a id="trace-9189"></a>
<a id="trace-9191"></a>
<a id="trace-9213"></a>
<a id="trace-9215"></a>
<a id="trace-12471"></a>
<a id="trace-12473"></a>
<a id="trace-12501"></a>
<a id="trace-12503"></a>
<a id="trace-12575"></a>
<a id="trace-12577"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12659"></a>
<a id="trace-12661"></a>
<a id="trace-12716"></a>
<a id="trace-12718"></a>
<a id="trace-12770"></a>
<a id="trace-12772"></a>
<a id="trace-12858"></a>
<a id="trace-12860"></a>
<a id="trace-12959"></a>
<a id="trace-12961"></a>
<a id="trace-12985"></a>
<a id="trace-12987"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13295"></a>
<a id="trace-13297"></a>
<a id="trace-13337"></a>
<a id="trace-13339"></a>
<a id="trace-13365"></a>
<a id="trace-13367"></a>
<a id="trace-13426"></a>
<a id="trace-13428"></a>
<a id="trace-13797"></a>
<a id="trace-13799"></a>
<a id="trace-13821"></a>
<a id="trace-13823"></a>
<a id="trace-13952"></a>
<a id="trace-13954"></a>
<a id="trace-14006"></a>
<a id="trace-14008"></a>
<a id="trace-14044"></a>
<a id="trace-14046"></a>
<a id="trace-14063"></a>
<a id="trace-14065"></a>
<a id="trace-14084"></a>
<a id="trace-14086"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14244"></a>
<a id="trace-14246"></a>
<a id="trace-14386"></a>
<a id="trace-14388"></a>
<a id="trace-14448"></a>
<a id="trace-14450"></a>
<a id="trace-14533"></a>
<a id="trace-14535"></a>
<a id="trace-14569"></a>
<a id="trace-14571"></a>
<a id="trace-14602"></a>
<a id="trace-14604"></a>
<a id="trace-14715"></a>
<a id="trace-14717"></a>
<a id="trace-14745"></a>
<a id="trace-14747"></a>
<a id="trace-14766"></a>
<a id="trace-14768"></a>
<a id="trace-14799"></a>
<a id="trace-14801"></a>
<a id="trace-14835"></a>
<a id="trace-14837"></a>
<a id="trace-14869"></a>
<a id="trace-14871"></a>
<a id="trace-16601"></a>
<a id="trace-16603"></a>
<a id="trace-16641"></a>
<a id="trace-16643"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16779"></a>
<a id="trace-16781"></a>
<a id="trace-16802"></a>
<a id="trace-16804"></a>
<a id="trace-16824"></a>
<a id="trace-16826"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17393"></a>
<a id="trace-17395"></a>
<a id="trace-17419"></a>
<a id="trace-17421"></a>
<a id="trace-17429"></a>
<a id="trace-17431"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17555"></a>
<a id="trace-17557"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17590"></a>
<a id="trace-17592"></a>
<a id="trace-17609"></a>
<a id="trace-17611"></a>
<a id="trace-17620"></a>
<a id="trace-17622"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17653"></a>
<a id="trace-17655"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17760"></a>
<a id="trace-17762"></a>
<a id="trace-17769"></a>
<a id="trace-17771"></a>
<a id="trace-17783"></a>
<a id="trace-17785"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
<a id="trace-17829"></a>
<a id="trace-17831"></a>
<a id="trace-17858"></a>
<a id="trace-17860"></a>
<a id="trace-17870"></a>
<a id="trace-17872"></a>
<a id="trace-17978"></a>
<a id="trace-17980"></a>
<a id="trace-17995"></a>
<a id="trace-17997"></a>
<a id="trace-18032"></a>
<a id="trace-18034"></a>
<a id="trace-18055"></a>
<a id="trace-18057"></a>
<a id="trace-18067"></a>
<a id="trace-18069"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18274"></a>
<a id="trace-18276"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18387"></a>
<a id="trace-18389"></a>
<a id="trace-18402"></a>
<a id="trace-18404"></a>
<a id="trace-18419"></a>
<a id="trace-18421"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18448"></a>
<a id="trace-18450"></a>
<a id="trace-18466"></a>
<a id="trace-18468"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18555"></a>
<a id="trace-18557"></a>
<a id="trace-18564"></a>
<a id="trace-18566"></a>
<a id="trace-18589"></a>
<a id="trace-18591"></a>
<a id="trace-18648"></a>
<a id="trace-18650"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18684"></a>
<a id="trace-18686"></a>
<a id="trace-18702"></a>
<a id="trace-18704"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18795"></a>
<a id="trace-18797"></a>
<a id="trace-18824"></a>
<a id="trace-18826"></a>
<a id="trace-18843"></a>
<a id="trace-18845"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18880"></a>
<a id="trace-18882"></a>
<a id="trace-18910"></a>
<a id="trace-18912"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19180"></a>
<a id="trace-19182"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19230"></a>
<a id="trace-19232"></a>
<a id="trace-19254"></a>
<a id="trace-19256"></a>
<a id="trace-19331"></a>
<a id="trace-19333"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19375"></a>
<a id="trace-19377"></a>
<a id="trace-19447"></a>
<a id="trace-19449"></a>
<a id="trace-19468"></a>
<a id="trace-19470"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19501"></a>
<a id="trace-19503"></a>
<a id="trace-19516"></a>
<a id="trace-19518"></a>
<a id="trace-19529"></a>
<a id="trace-19531"></a>
<a id="trace-19543"></a>
<a id="trace-19545"></a>
<a id="trace-19556"></a>
<a id="trace-19558"></a>
<a id="trace-19631"></a>
<a id="trace-19633"></a>
<a id="trace-19643"></a>
<a id="trace-19645"></a>
<a id="trace-19683"></a>
<a id="trace-19685"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19809"></a>
<a id="trace-19811"></a>
<a id="trace-19819"></a>
<a id="trace-19821"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19911"></a>
<a id="trace-19913"></a>
<a id="trace-19924"></a>
<a id="trace-19926"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19969"></a>
<a id="trace-19971"></a>
<a id="trace-20002"></a>
<a id="trace-20004"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20030"></a>
<a id="trace-20032"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20112"></a>
<a id="trace-20114"></a>
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20137"></a>
<a id="trace-20139"></a>
<a id="trace-20153"></a>
<a id="trace-20155"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20179"></a>
<a id="trace-20181"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20351"></a>
<a id="trace-20353"></a>
<a id="trace-20372"></a>
<a id="trace-20374"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20437"></a>
<a id="trace-20439"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20630"></a>
<a id="trace-20632"></a>
<a id="trace-20646"></a>
<a id="trace-20648"></a>
<a id="trace-20659"></a>
<a id="trace-20661"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20694"></a>
<a id="trace-20696"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20792"></a>
<a id="trace-20794"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-20877"></a>
<a id="trace-20879"></a>
<a id="trace-20947"></a>
<a id="trace-20949"></a>
<a id="trace-20953"></a>
<a id="trace-20955"></a>
<a id="trace-20968"></a>
<a id="trace-20970"></a>
<a id="trace-20978"></a>
<a id="trace-20980"></a>
<a id="trace-20992"></a>
<a id="trace-20994"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21018"></a>
<a id="trace-21020"></a>
<a id="trace-21034"></a>
<a id="trace-21036"></a>
<a id="trace-21040"></a>
<a id="trace-21042"></a>
<a id="trace-21110"></a>
<a id="trace-21114"></a>
<a id="trace-21180"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21208"></a>
<a id="trace-21210"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21244"></a>
<a id="trace-21246"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21321"></a>
<a id="trace-21323"></a>
<a id="trace-21328"></a>
<a id="trace-21330"></a>
<a id="trace-21343"></a>
<a id="trace-21345"></a>
<a id="trace-21350"></a>
<a id="trace-21352"></a>
<a id="trace-21365"></a>
<a id="trace-21367"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21385"></a>
<a id="trace-21387"></a>
<a id="trace-21401"></a>
<a id="trace-21403"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21484"></a>
<a id="trace-21486"></a>
<a id="trace-21498"></a>
<a id="trace-21500"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21521"></a>
<a id="trace-21523"></a>
<a id="trace-21560"></a>
<a id="trace-21562"></a>
<a id="trace-21711"></a>
<a id="trace-21713"></a>
<a id="trace-21717"></a>
<a id="trace-21719"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21750"></a>
<a id="trace-21752"></a>
<a id="trace-21757"></a>
<a id="trace-21759"></a>
<a id="trace-21772"></a>
<a id="trace-21774"></a>
<a id="trace-21783"></a>
<a id="trace-21785"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21902"></a>
<a id="trace-21904"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21922"></a>
<a id="trace-21924"></a>
<a id="trace-21993"></a>
<a id="trace-21995"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22019"></a>
<a id="trace-22021"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22039"></a>
<a id="trace-22041"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22147"></a>
<a id="trace-22149"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22172"></a>
<a id="trace-22174"></a>
<a id="trace-22198"></a>
<a id="trace-22200"></a>
<a id="trace-22206"></a>
<a id="trace-22208"></a>
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22223"></a>
<a id="trace-22225"></a>
<a id="trace-22297"></a>
<a id="trace-22299"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22341"></a>
<a id="trace-22343"></a>
<a id="trace-22363"></a>
<a id="trace-22365"></a>
<a id="trace-22376"></a>
<a id="trace-22378"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22489"></a>
<a id="trace-22491"></a>
<a id="trace-22506"></a>
<a id="trace-22508"></a>
<a id="trace-22511"></a>
<a id="trace-22513"></a>
<a id="trace-22524"></a>
<a id="trace-22526"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22545"></a>
<a id="trace-22547"></a>
<a id="trace-22565"></a>
<a id="trace-22567"></a>
<a id="trace-22578"></a>
<a id="trace-22580"></a>
<a id="trace-22669"></a>
<a id="trace-22671"></a>
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22723"></a>
<a id="trace-22725"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22833"></a>
<a id="trace-22835"></a>
<a id="trace-22848"></a>
<a id="trace-22850"></a>
<a id="trace-22854"></a>
<a id="trace-22856"></a>
<a id="trace-22872"></a>
<a id="trace-22874"></a>
<a id="trace-22884"></a>
<a id="trace-22886"></a>
<a id="trace-22898"></a>
<a id="trace-22900"></a>
<a id="trace-22977"></a>
<a id="trace-22979"></a>
<a id="trace-23057"></a>
<a id="trace-23059"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23118"></a>
<a id="trace-23120"></a>
<a id="trace-23136"></a>
<a id="trace-23138"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23239"></a>
<a id="trace-23241"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23293"></a>
<a id="trace-23295"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23383"></a>
<a id="trace-23385"></a>
<a id="trace-23393"></a>
<a id="trace-23395"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23436"></a>
<a id="trace-23438"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23458"></a>
<a id="trace-23460"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23480"></a>
<a id="trace-23482"></a>
<a id="trace-23487"></a>
<a id="trace-23489"></a>
<a id="trace-23561"></a>
<a id="trace-23563"></a>
<a id="trace-23587"></a>
<a id="trace-23589"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23686"></a>
<a id="trace-23688"></a>
<a id="trace-23693"></a>
<a id="trace-23695"></a>
<a id="trace-23713"></a>
<a id="trace-23715"></a>
<a id="trace-23721"></a>
<a id="trace-23723"></a>
<a id="trace-23799"></a>
<a id="trace-23801"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23821"></a>
<a id="trace-23823"></a>
<a id="trace-23839"></a>
<a id="trace-23841"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23866"></a>
<a id="trace-23868"></a>
<a id="trace-23884"></a>
<a id="trace-23886"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24017"></a>
<a id="trace-24019"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24062"></a>
<a id="trace-24064"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
<a id="trace-24140"></a>
<a id="trace-24142"></a>
<a id="trace-24178"></a>
<a id="trace-24180"></a>
<a id="trace-24202"></a>
<a id="trace-24204"></a>
<a id="trace-24322"></a>
<a id="trace-24324"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24348"></a>
<a id="trace-24350"></a>
<a id="trace-24430"></a>
<a id="trace-24432"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24558"></a>
<a id="trace-24560"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24656"></a>
<a id="trace-24658"></a>
<a id="trace-24674"></a>
<a id="trace-24676"></a>
<a id="trace-24711"></a>
<a id="trace-24713"></a>
<a id="trace-24726"></a>
<a id="trace-24728"></a>
<a id="trace-24745"></a>
<a id="trace-24747"></a>
<a id="trace-24830"></a>
<a id="trace-24832"></a>
<a id="trace-24846"></a>
<a id="trace-24848"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24887"></a>
<a id="trace-24889"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24929"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24935"></a>
<a id="trace-25005"></a>
<a id="trace-25007"></a>
<a id="trace-25010"></a>
<a id="trace-25012"></a>
<a id="trace-25026"></a>
<a id="trace-25028"></a>
<a id="trace-25033"></a>
<a id="trace-25035"></a>
<a id="trace-25095"></a>
<a id="trace-25097"></a>
<a id="trace-25104"></a>
<a id="trace-25106"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25150"></a>
<a id="trace-25152"></a>
<a id="trace-25159"></a>
<a id="trace-25161"></a>
<a id="trace-25233"></a>
<a id="trace-25235"></a>
<a id="trace-25255"></a>
<a id="trace-25257"></a>
<a id="trace-25273"></a>
<a id="trace-25275"></a>
<a id="trace-25280"></a>
<a id="trace-25282"></a>
<a id="trace-25297"></a>
<a id="trace-25299"></a>
<a id="trace-25303"></a>
<a id="trace-25305"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25403"></a>
<a id="trace-25405"></a>
<a id="trace-25421"></a>
<a id="trace-25423"></a>
<a id="trace-25440"></a>
<a id="trace-25442"></a>
<a id="trace-25462"></a>
<a id="trace-25464"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25487"></a>
<a id="trace-25489"></a>
<a id="trace-25620"></a>
<a id="trace-25622"></a>
<a id="trace-25633"></a>
<a id="trace-25635"></a>
<a id="trace-25638"></a>
<a id="trace-25640"></a>
<a id="trace-25840"></a>
<a id="trace-25842"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
<a id="trace-25869"></a>
<a id="trace-25871"></a>
<a id="trace-25881"></a>
<a id="trace-25883"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25931"></a>
<a id="trace-25933"></a>
<a id="trace-25951"></a>
<a id="trace-25953"></a>
<a id="trace-26155"></a>
<a id="trace-26157"></a>
<a id="trace-26254"></a>
<a id="trace-26256"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
<a id="trace-26300"></a>
<a id="trace-26302"></a>
<a id="trace-26340"></a>
<a id="trace-26342"></a>
<a id="trace-26344"></a>
<a id="trace-26346"></a>
<a id="trace-26358"></a>
<a id="trace-26360"></a>
<a id="trace-26365"></a>
<a id="trace-26367"></a>
<a id="trace-26380"></a>
<a id="trace-26382"></a>
<a id="trace-26387"></a>
<a id="trace-26389"></a>
<a id="trace-26481"></a>
<a id="trace-26483"></a>
<a id="trace-26489"></a>
<a id="trace-26491"></a>
<a id="trace-26505"></a>
<a id="trace-26507"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26526"></a>
<a id="trace-26528"></a>
<a id="trace-26531"></a>
<a id="trace-26533"></a>
<a id="trace-26619"></a>
<a id="trace-26621"></a>
<a id="trace-26625"></a>
<a id="trace-26627"></a>
<a id="trace-26643"></a>
<a id="trace-26645"></a>
<a id="trace-26648"></a>
<a id="trace-26650"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26685"></a>
<a id="trace-26687"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26707"></a>
<a id="trace-26709"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26842"></a>
<a id="trace-26844"></a>
<a id="trace-26872"></a>
<a id="trace-26874"></a>
<a id="trace-26882"></a>
<a id="trace-26884"></a>
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26939"></a>
<a id="trace-26941"></a>
<a id="trace-26944"></a>
<a id="trace-26946"></a>
<a id="trace-27020"></a>
<a id="trace-27022"></a>
<a id="trace-27034"></a>
<a id="trace-27036"></a>
<a id="trace-27058"></a>
<a id="trace-27060"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
<a id="trace-27101"></a>
<a id="trace-27103"></a>
<a id="trace-27171"></a>
<a id="trace-27173"></a>
<a id="trace-27177"></a>
<a id="trace-27179"></a>
<a id="trace-27190"></a>
<a id="trace-27192"></a>
<a id="trace-27197"></a>
<a id="trace-27199"></a>
<a id="trace-27217"></a>
<a id="trace-27219"></a>
<a id="trace-27225"></a>
<a id="trace-27227"></a>
<a id="trace-27303"></a>
<a id="trace-27305"></a>
<a id="trace-27314"></a>
<a id="trace-27316"></a>
<a id="trace-27331"></a>
<a id="trace-27333"></a>
<a id="trace-27343"></a>
<a id="trace-27345"></a>
<a id="trace-27419"></a>
<a id="trace-27421"></a>
<a id="trace-27429"></a>
<a id="trace-27431"></a>
<a id="trace-27455"></a>
<a id="trace-27457"></a>
<a id="trace-27459"></a>
<a id="trace-27461"></a>
<a id="trace-27472"></a>
<a id="trace-27474"></a>
<a id="trace-27480"></a>
<a id="trace-27482"></a>
<a id="trace-27492"></a>
<a id="trace-27494"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27572"></a>
<a id="trace-27574"></a>
<a id="trace-27592"></a>
<a id="trace-27594"></a>
<a id="trace-27605"></a>
<a id="trace-27607"></a>
<a id="trace-27609"></a>
<a id="trace-27611"></a>
<a id="trace-27622"></a>
<a id="trace-27624"></a>
<a id="trace-27629"></a>
<a id="trace-27631"></a>
<a id="trace-27643"></a>
<a id="trace-27645"></a>
<a id="trace-27714"></a>
<a id="trace-27716"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27738"></a>
<a id="trace-27740"></a>
<a id="trace-27807"></a>
<a id="trace-27809"></a>
<a id="trace-27828"></a>
<a id="trace-27830"></a>
<a id="trace-27835"></a>
<a id="trace-27837"></a>
<a id="trace-27848"></a>
<a id="trace-27850"></a>
<a id="trace-27921"></a>
<a id="trace-27923"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-27962"></a>
<a id="trace-27964"></a>
<a id="trace-27978"></a>
<a id="trace-27980"></a>
<a id="trace-27988"></a>
<a id="trace-27990"></a>
<a id="trace-28007"></a>
<a id="trace-28009"></a>
<a id="trace-28075"></a>
<a id="trace-28077"></a>
<a id="trace-28088"></a>
<a id="trace-28090"></a>
<a id="trace-28112"></a>
<a id="trace-28114"></a>
<a id="trace-28131"></a>
<a id="trace-28133"></a>
<a id="trace-28136"></a>
<a id="trace-28138"></a>
<a id="trace-28149"></a>
<a id="trace-28151"></a>
<a id="trace-28168"></a>
<a id="trace-28170"></a>
<a id="trace-28175"></a>
<a id="trace-28177"></a>
<a id="trace-28245"></a>
<a id="trace-28247"></a>
<a id="trace-28253"></a>
<a id="trace-28255"></a>
<a id="trace-28301"></a>
<a id="trace-28303"></a>
<a id="trace-28325"></a>
<a id="trace-28327"></a>
<a id="trace-28336"></a>
<a id="trace-28338"></a>
<a id="trace-28351"></a>
<a id="trace-28353"></a>
<a id="trace-28355"></a>
<a id="trace-28357"></a>
<a id="trace-28423"></a>
<a id="trace-28425"></a>
<a id="trace-28443"></a>
<a id="trace-28445"></a>
<a id="trace-28450"></a>
<a id="trace-28452"></a>
<a id="trace-28464"></a>
<a id="trace-28466"></a>
<a id="trace-28481"></a>
<a id="trace-28483"></a>
<a id="trace-28492"></a>
<a id="trace-28494"></a>
<a id="trace-28510"></a>
<a id="trace-28512"></a>
<a id="trace-28517"></a>
<a id="trace-28519"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
<a id="trace-28616"></a>
<a id="trace-28618"></a>
<a id="trace-28627"></a>
<a id="trace-28629"></a>
<a id="trace-28632"></a>
<a id="trace-28634"></a>
<a id="trace-28646"></a>
<a id="trace-28648"></a>
<a id="trace-28652"></a>
<a id="trace-28654"></a>
<a id="trace-28748"></a>
<a id="trace-28750"></a>
<a id="trace-28762"></a>
<a id="trace-28764"></a>
<a id="trace-28767"></a>
<a id="trace-28769"></a>
<a id="trace-28779"></a>
<a id="trace-28781"></a>
<a id="trace-28797"></a>
<a id="trace-28799"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28816"></a>
<a id="trace-28818"></a>
<a id="trace-28830"></a>
<a id="trace-28832"></a>
<a id="trace-28835"></a>
<a id="trace-28837"></a>
<a id="trace-28904"></a>
<a id="trace-28906"></a>
<a id="trace-28913"></a>
<a id="trace-28915"></a>
<a id="trace-28926"></a>
<a id="trace-28928"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-28953"></a>
<a id="trace-28955"></a>
<a id="trace-28963"></a>
<a id="trace-28965"></a>
<a id="trace-28973"></a>
<a id="trace-28975"></a>
<a id="trace-28992"></a>
<a id="trace-28994"></a>
<a id="trace-29002"></a>
<a id="trace-29004"></a>
<a id="trace-29075"></a>
<a id="trace-29077"></a>
<a id="trace-29087"></a>
<a id="trace-29089"></a>
<a id="trace-29094"></a>
<a id="trace-29096"></a>
<a id="trace-29108"></a>
<a id="trace-29110"></a>
<a id="trace-29129"></a>
<a id="trace-29131"></a>
<a id="trace-29146"></a>
<a id="trace-29148"></a>
<a id="trace-29153"></a>
<a id="trace-29155"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 953): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625042202673963, 'next_transition': 1303}.
<a id="trace-971"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 971): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299900951285302, 'next_transition': 1299}.
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1380"></a>
<a id="trace-1382"></a>
<a id="trace-1418"></a>
<a id="trace-1420"></a>
<a id="trace-1452"></a>
<a id="trace-1454"></a>
<a id="trace-1499"></a>
<a id="trace-1501"></a>
<a id="trace-1533"></a>
<a id="trace-1535"></a>
<a id="trace-1559"></a>
<a id="trace-1561"></a>
<a id="trace-1650"></a>
<a id="trace-1652"></a>
<a id="trace-1675"></a>
<a id="trace-1677"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1727"></a>
<a id="trace-1729"></a>
<a id="trace-1759"></a>
<a id="trace-1761"></a>
<a id="trace-1784"></a>
<a id="trace-1786"></a>
<a id="trace-1807"></a>
<a id="trace-1809"></a>
<a id="trace-1824"></a>
<a id="trace-1826"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-1919"></a>
<a id="trace-1921"></a>
<a id="trace-2008"></a>
<a id="trace-2010"></a>
<a id="trace-2035"></a>
<a id="trace-2037"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1299): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.240323487659834, 'next_transition': 1338}.
<a id="trace-1861"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1861): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1579. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2777}.
<a id="trace-1862"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1862): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1579. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2777}.
<a id="trace-2044"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2044): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1933. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37234824089822127, 'next_transition': 2361}.
<a id="trace-2361"></a>
<a id="trace-2363"></a>
<a id="trace-2397"></a>
<a id="trace-2399"></a>
<a id="trace-2426"></a>
<a id="trace-2428"></a>
<a id="trace-2443"></a>
<a id="trace-2445"></a>
<a id="trace-2481"></a>
<a id="trace-2483"></a>
<a id="trace-2508"></a>
<a id="trace-2510"></a>
<a id="trace-2528"></a>
<a id="trace-2530"></a>
<a id="trace-2552"></a>
<a id="trace-2554"></a>
<a id="trace-2643"></a>
<a id="trace-2645"></a>
<a id="trace-2671"></a>
<a id="trace-2673"></a>
<a id="trace-2699"></a>
<a id="trace-2701"></a>
<a id="trace-2725"></a>
<a id="trace-2727"></a>
<a id="trace-2762"></a>
<a id="trace-2764"></a>
<a id="trace-2825"></a>
<a id="trace-2827"></a>
<a id="trace-2857"></a>
<a id="trace-2859"></a>
<a id="trace-2878"></a>
<a id="trace-2880"></a>
<a id="trace-2912"></a>
<a id="trace-2914"></a>
<a id="trace-2947"></a>
<a id="trace-2949"></a>
<a id="trace-3030"></a>
<a id="trace-3032"></a>
<a id="trace-3050"></a>
<a id="trace-3052"></a>
- 16.25s–25.75s (×40), actor 5, squad 0 (trace 2361): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1938. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843271258199666, 'next_transition': 2397}.
<a id="trace-2777"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 2777): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 2572. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4163029549701935, 'next_transition': 3145}.
<a id="trace-3064"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 3064): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2957. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150060961711691, 'next_transition': 3086}.
<a id="trace-3086"></a>
<a id="trace-3088"></a>
<a id="trace-3098"></a>
<a id="trace-3100"></a>
<a id="trace-3117"></a>
<a id="trace-3119"></a>
<a id="trace-3127"></a>
<a id="trace-3129"></a>
<a id="trace-3257"></a>
<a id="trace-3259"></a>
<a id="trace-3277"></a>
<a id="trace-3279"></a>
<a id="trace-3292"></a>
<a id="trace-3294"></a>
<a id="trace-3314"></a>
<a id="trace-3316"></a>
- 26.25s–29.75s (×16), actor 5, squad 0 (trace 3086): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2962. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150060961711691, 'next_transition': 3098}.
<a id="trace-3145"></a>
- 28.20s–28.20s (×1), actor 8, squad 1 (trace 3145): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2965. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.469395944923877, 'next_transition': 3438}.
<a id="trace-274"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 274): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3319"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3319): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3319. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3414}.
<a id="trace-3320"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3320): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3320. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3414}.
<a id="trace-3414"></a>
<a id="trace-3416"></a>
<a id="trace-3427"></a>
<a id="trace-3429"></a>
<a id="trace-3480"></a>
<a id="trace-3482"></a>
<a id="trace-3493"></a>
<a id="trace-3495"></a>
- 30.25s–31.75s (×8), actor 5, squad 0 (trace 3414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3332. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3427}.
<a id="trace-3438"></a>
- 31.20s–31.20s (×1), actor 8, squad 1 (trace 3438): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3335. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.356263581779444, 'next_transition': 519}.
<a id="trace-3504"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3504): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4002}.
<a id="trace-3511"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3511): MoveTactically. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4002}.
<a id="trace-3512"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3512): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4002}.
<a id="trace-3513"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3513): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4002}.
<a id="trace-4002"></a>
<a id="trace-4004"></a>
<a id="trace-4029"></a>
<a id="trace-4031"></a>
<a id="trace-4049"></a>
<a id="trace-4051"></a>
<a id="trace-4072"></a>
<a id="trace-4074"></a>
<a id="trace-4097"></a>
<a id="trace-4099"></a>
<a id="trace-4127"></a>
<a id="trace-4129"></a>
<a id="trace-4216"></a>
<a id="trace-4218"></a>
<a id="trace-4238"></a>
<a id="trace-4240"></a>
<a id="trace-4266"></a>
<a id="trace-4268"></a>
<a id="trace-4304"></a>
<a id="trace-4306"></a>
<a id="trace-4327"></a>
<a id="trace-4329"></a>
<a id="trace-4345"></a>
<a id="trace-4347"></a>
<a id="trace-4374"></a>
<a id="trace-4376"></a>
<a id="trace-4403"></a>
<a id="trace-4405"></a>
- 32.25s–38.75s (×28), actor 5, squad 0 (trace 4002): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3332. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4029}.
<a id="trace-4412"></a>
- 38.80s–38.80s (×1), actor 0, squad 0 (trace 4412): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4142. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4706679082451031, 'next_transition': 5030}.
<a id="trace-4413"></a>
- 38.80s–38.80s (×1), actor 0, squad 0 (trace 4413): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4142. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4706679082451031, 'next_transition': 5030}.
<a id="trace-4414"></a>
- 38.80s–38.80s (×1), actor 0, squad 0 (trace 4414): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4142. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4706679082451031, 'next_transition': 5030}.
<a id="trace-5030"></a>
<a id="trace-5032"></a>
- 39.25s–39.25s (×2), actor 5, squad 0 (trace 5030): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4147. Next observer evidence: None.
<a id="trace-5039"></a>
- 39.30s–39.30s (×1), actor 0, squad 0 (trace 5039): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4142. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.511271752018962, 'next_transition': 5651}.
<a id="trace-5651"></a>
<a id="trace-5653"></a>
- 39.75s–39.75s (×2), actor 5, squad 0 (trace 5651): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4147. Next observer evidence: None.
<a id="trace-5660"></a>
- 39.80s–39.80s (×1), actor 0, squad 0 (trace 5660): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4142. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.608036446207866, 'next_transition': 6346}.
<a id="trace-6346"></a>
<a id="trace-6348"></a>
<a id="trace-6396"></a>
<a id="trace-6398"></a>
<a id="trace-6439"></a>
<a id="trace-6441"></a>
<a id="trace-6487"></a>
<a id="trace-6489"></a>
- 40.25s–41.75s (×8), actor 5, squad 0 (trace 6346): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6260. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5108756496887222, 'next_transition': 6396}.
<a id="trace-6516"></a>
- 42.00s–42.00s (×1), actor 0, squad 0 (trace 6516): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 6255. Next observer evidence: None.
<a id="trace-518"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 518): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-519"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 519): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7110"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 7110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.902292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7110. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21028590665322328, 'next_transition': 7133}.
<a id="trace-7111"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 7111): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.902292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7111. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21028590665322328, 'next_transition': 7133}.
<a id="trace-7112"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 7112): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.902292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7112. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.205000514327968, 'next_transition': 7272}.
<a id="trace-7113"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 7113): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.902292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7113. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.205000514327968, 'next_transition': 7272}.
<a id="trace-7133"></a>
<a id="trace-7135"></a>
<a id="trace-7205"></a>
<a id="trace-7207"></a>
<a id="trace-7255"></a>
<a id="trace-7257"></a>
<a id="trace-7516"></a>
<a id="trace-7518"></a>
- 42.25s–43.75s (×8), actor 5, squad 0 (trace 7133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 7113. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42378884019867735, 'next_transition': 7205}.
<a id="trace-7272"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 7272): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 6263. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.632827191471376, 'next_transition': 8487}.
<a id="trace-7273"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 7273): bounding overwatch. Knowledge: actor memory at 40.00s, trace 6263. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.632827191471376, 'next_transition': 8487}.
<a id="trace-7274"></a>
<a id="trace-8487"></a>
- 43.40s–46.45s (×2), actor 8, squad 1 (trace 7274): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 6263. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.632827191471376, 'next_transition': 8487}.
<a id="trace-7523"></a>
- 43.75s–43.75s (×1), actor 0, squad 0 (trace 7523): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 6255. Next observer evidence: {'until': 44, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3420134433305798, 'next_transition': 8181}.
<a id="trace-8181"></a>
- 44.00s–44.00s (×1), actor 0, squad 0 (trace 8181): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 6255. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21052974020855159, 'next_transition': 8195}.
<a id="trace-8195"></a>
<a id="trace-8197"></a>
<a id="trace-8242"></a>
<a id="trace-8244"></a>
<a id="trace-8369"></a>
<a id="trace-8371"></a>
<a id="trace-8397"></a>
<a id="trace-8399"></a>
<a id="trace-8453"></a>
<a id="trace-8455"></a>
<a id="trace-8761"></a>
<a id="trace-8763"></a>
<a id="trace-8818"></a>
<a id="trace-8820"></a>
- 44.25s–47.25s (×14), actor 5, squad 0 (trace 8195): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 7113. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42335901085279165, 'next_transition': 8242}.
<a id="trace-8864"></a>
- 47.60s–47.60s (×1), actor 0, squad 0 (trace 8864): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 8282. Next observer evidence: None.
<a id="trace-8878"></a>
<a id="trace-8880"></a>
<a id="trace-8936"></a>
<a id="trace-8938"></a>
<a id="trace-8989"></a>
<a id="trace-8991"></a>
<a id="trace-9039"></a>
<a id="trace-9041"></a>
<a id="trace-9078"></a>
<a id="trace-9080"></a>
<a id="trace-9184"></a>
<a id="trace-9186"></a>
<a id="trace-9208"></a>
<a id="trace-9210"></a>
- 47.75s–50.75s (×14), actor 5, squad 0 (trace 8878): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8287. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1507233317302633, 'next_transition': 8936}.
<a id="trace-9088"></a>
- 49.80s–49.80s (×1), actor 8, squad 1 (trace 9088): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 8290. Next observer evidence: {'until': 50.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6311400643478433, 'next_transition': 9199}.
<a id="trace-9199"></a>
- 50.40s–50.40s (×1), actor 8, squad 1 (trace 9199): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 9104. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 840}.
<a id="trace-9223"></a>
- 51.10s–51.10s (×1), actor 0, squad 0 (trace 9223): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 9096. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043974999999999986, 'next_transition': 12465}.
<a id="trace-12184"></a>
- 51.10s–51.10s (×1), actor 0, squad 0 (trace 12184): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 9096. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043974999999999986, 'next_transition': 12465}.
<a id="trace-12185"></a>
- 51.10s–51.10s (×1), actor 0, squad 0 (trace 12185): MoveTactically. Knowledge: actor memory at 50.00s, trace 9096. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043974999999999986, 'next_transition': 12465}.
<a id="trace-12186"></a>
- 51.10s–51.10s (×1), actor 0, squad 0 (trace 12186): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 9096. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043974999999999986, 'next_transition': 12465}.
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12495"></a>
<a id="trace-12497"></a>
<a id="trace-12569"></a>
<a id="trace-12571"></a>
<a id="trace-12607"></a>
<a id="trace-12609"></a>
<a id="trace-12653"></a>
<a id="trace-12655"></a>
<a id="trace-12710"></a>
<a id="trace-12712"></a>
<a id="trace-12764"></a>
<a id="trace-12766"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-12980"></a>
<a id="trace-12982"></a>
<a id="trace-13009"></a>
<a id="trace-13011"></a>
<a id="trace-13289"></a>
<a id="trace-13291"></a>
<a id="trace-13331"></a>
<a id="trace-13333"></a>
<a id="trace-13359"></a>
<a id="trace-13361"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
<a id="trace-13420"></a>
<a id="trace-13422"></a>
- 51.25s–58.75s (×32), actor 5, squad 0 (trace 12465): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9101. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06592874999999998, 'next_transition': 12495}.
<a id="trace-840"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (events line 840): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12676"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 12676): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.652730 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 12676. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12677"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 12677): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.652730 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 12677. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12792}.
<a id="trace-12792"></a>
- 54.65s–54.65s (×1), actor 8, squad 1 (trace 12792): MoveTactically. Knowledge: actor memory at 50.00s, trace 9104. Next observer evidence: {'until': 56.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6962684276589954, 'next_transition': 13030}.
<a id="trace-12793"></a>
- 54.65s–54.65s (×1), actor 8, squad 1 (trace 12793): received platoon directive. Knowledge: actor memory at 50.00s, trace 9104. Next observer evidence: {'until': 56.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6962684276589954, 'next_transition': 13030}.
<a id="trace-13030"></a>
- 56.65s–56.65s (×1), actor 8, squad 1 (trace 13030): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 12877. Next observer evidence: {'until': 60, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.673561131878303, 'next_transition': 13853}.
<a id="trace-13031"></a>
- 56.65s–56.65s (×1), actor 8, squad 1 (trace 13031): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 12877. Next observer evidence: {'until': 60, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.673561131878303, 'next_transition': 13853}.
<a id="trace-13429"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 13429): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 12870. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39454427476292986, 'next_transition': 13791}.
<a id="trace-13756"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 13756): NeedSupport. Knowledge: actor memory at 55.00s, trace 12870. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39454427476292986, 'next_transition': 13791}.
<a id="trace-13791"></a>
<a id="trace-13793"></a>
<a id="trace-13815"></a>
<a id="trace-13817"></a>
<a id="trace-13918"></a>
<a id="trace-13920"></a>
<a id="trace-13947"></a>
<a id="trace-13949"></a>
<a id="trace-13970"></a>
<a id="trace-13972"></a>
<a id="trace-14001"></a>
<a id="trace-14003"></a>
<a id="trace-14039"></a>
<a id="trace-14041"></a>
<a id="trace-14058"></a>
<a id="trace-14060"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14101"></a>
<a id="trace-14103"></a>
- 59.25s–63.75s (×20), actor 5, squad 0 (trace 13791): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12874. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06500000000000002, 'next_transition': 13815}.
<a id="trace-13853"></a>
- 60.00s–60.00s (×1), actor 8, squad 1 (trace 13853): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 13841. Next observer evidence: {'until': 63.4, 'shots': 2, 'casualties': 1, 'mean_displacement': 1.5707643311219537, 'next_transition': 14093}.
<a id="trace-14093"></a>
- 63.45s–63.45s (×1), actor 9, squad 1 (trace 14093): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 60.00s, trace 13842. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5053581122266735, 'next_transition': 1243}.
<a id="trace-14115"></a>
- 63.90s–63.90s (×1), actor 0, squad 0 (trace 14115): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 13834. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22943281538726162, 'next_transition': 14237}.
<a id="trace-14222"></a>
- 63.90s–63.90s (×1), actor 0, squad 0 (trace 14222): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 13834. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22943281538726162, 'next_transition': 14237}.
<a id="trace-14237"></a>
<a id="trace-14239"></a>
<a id="trace-14257"></a>
<a id="trace-14259"></a>
<a id="trace-14350"></a>
<a id="trace-14352"></a>
<a id="trace-14379"></a>
<a id="trace-14381"></a>
- 64.25s–66.25s (×8), actor 5, squad 0 (trace 14237): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13838. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.009894081512681835, 'next_transition': 14257}.
<a id="trace-14398"></a>
- 66.55s–66.55s (×1), actor 5, squad 0 (trace 14398): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 66.55s, trace 14398. Next observer evidence: {'until': 67.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14428}.
<a id="trace-1243"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (events line 1243): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14415"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 14415): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490844 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 14415. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14474}.
<a id="trace-14416"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 14416): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490844 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 14416. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14474}.
<a id="trace-14428"></a>
<a id="trace-14430"></a>
<a id="trace-14457"></a>
<a id="trace-14459"></a>
<a id="trace-14561"></a>
<a id="trace-14563"></a>
<a id="trace-14679"></a>
<a id="trace-14681"></a>
<a id="trace-14737"></a>
<a id="trace-14739"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14861"></a>
<a id="trace-14863"></a>
- 67.25s–73.25s (×14), actor 5, squad 0 (trace 14428): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 14416. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14457}.
<a id="trace-14474"></a>
- 68.70s–68.70s (×1), actor 9, squad 1 (trace 14474): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 14287. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14753}.
<a id="trace-14475"></a>
- 68.70s–68.70s (×1), actor 9, squad 1 (trace 14475): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 14287. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14753}.
<a id="trace-14753"></a>
- 71.65s–71.65s (×1), actor 9, squad 1 (trace 14753): NeedSupport. Knowledge: actor memory at 70.00s, trace 14616. Next observer evidence: {'until': 90, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000013432262477, 'next_transition': 17892}.
<a id="trace-14874"></a>
- 73.30s–73.30s (×1), actor 0, squad 0 (trace 14874): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 14610. Next observer evidence: {'until': 74.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.44275651906169755, 'next_transition': 16636}.
<a id="trace-14875"></a>
- 73.30s–73.30s (×1), actor 0, squad 0 (trace 14875): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 14610. Next observer evidence: {'until': 74.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.44275651906169755, 'next_transition': 16636}.
<a id="trace-16636"></a>
<a id="trace-16774"></a>
<a id="trace-16819"></a>
- 74.25s–76.25s (×3), actor 5, squad 0 (trace 16636): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14614. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33532810731658524, 'next_transition': 16774}.
<a id="trace-1561"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (events line 1561): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16833"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 16833): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.495963 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 16833. Next observer evidence: {'until': 76.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16755799999999982, 'next_transition': 16852}.
<a id="trace-16834"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 16834): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.495963 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 16834. Next observer evidence: {'until': 76.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16755799999999982, 'next_transition': 16852}.
<a id="trace-16852"></a>
- 76.85s–76.85s (×1), actor 1, squad 0 (trace 16852): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 16702. Next observer evidence: {'until': 77, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11361199999999982, 'next_transition': 16874}.
<a id="trace-16874"></a>
- 77.10s–77.10s (×1), actor 1, squad 0 (trace 16874): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 16702. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05751399999999993, 'next_transition': 17326}.
<a id="trace-16879"></a>
- 77.10s–77.10s (×1), actor 1, squad 0 (trace 16879): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 16702. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05751399999999993, 'next_transition': 17326}.
<a id="trace-16880"></a>
- 77.10s–77.10s (×1), actor 1, squad 0 (trace 16880): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 16702. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05751399999999993, 'next_transition': 17326}.
<a id="trace-17326"></a>
<a id="trace-17328"></a>
<a id="trace-17370"></a>
<a id="trace-17372"></a>
<a id="trace-17411"></a>
<a id="trace-17413"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
- 77.25s–80.25s (×8), actor 5, squad 0 (trace 17326): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.55s, trace 16834. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.014871999999999908, 'next_transition': 17370}.
<a id="trace-17546"></a>
- 81.05s–81.05s (×1), actor 1, squad 0 (trace 17546): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 17441. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2506599999999999, 'next_transition': 17549}.
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17584"></a>
<a id="trace-17586"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17728"></a>
<a id="trace-17730"></a>
<a id="trace-17754"></a>
<a id="trace-17756"></a>
<a id="trace-17777"></a>
<a id="trace-17779"></a>
<a id="trace-17813"></a>
<a id="trace-17815"></a>
<a id="trace-17852"></a>
<a id="trace-17854"></a>
<a id="trace-17957"></a>
<a id="trace-17959"></a>
<a id="trace-17989"></a>
<a id="trace-17991"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18049"></a>
<a id="trace-18051"></a>
- 81.25s–93.25s (×26), actor 5, squad 0 (trace 17549): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 17444. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.687398, 'next_transition': 17584}.
<a id="trace-17892"></a>
- 90.00s–90.00s (×1), actor 9, squad 1 (trace 17892): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 17880. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18577}.
<a id="trace-17904"></a>
- 90.00s–90.00s (×1), actor 9, squad 1 (trace 17904): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 17880. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18577}.
<a id="trace-18072"></a>
- 93.80s–93.80s (×1), actor 1, squad 0 (trace 18072): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 17875. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28851427201363106, 'next_transition': 18255}.
<a id="trace-18073"></a>
- 93.80s–93.80s (×1), actor 1, squad 0 (trace 18073): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 17875. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28851427201363106, 'next_transition': 18255}.
<a id="trace-18255"></a>
<a id="trace-18257"></a>
- 94.25s–94.25s (×2), actor 5, squad 0 (trace 18255): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 17878. Next observer evidence: {'until': 94.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120230414506847, 'next_transition': 1758}.
<a id="trace-1758"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (events line 1758): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18267"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (trace 18267): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248152 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.55s, trace 18267. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0377649782097913, 'next_transition': 18352}.
<a id="trace-18268"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (trace 18268): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248152 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.55s, trace 18268. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0377649782097913, 'next_transition': 18352}.
<a id="trace-18352"></a>
<a id="trace-18354"></a>
<a id="trace-18379"></a>
<a id="trace-18381"></a>
<a id="trace-18411"></a>
<a id="trace-18413"></a>
<a id="trace-18435"></a>
<a id="trace-18437"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18583"></a>
<a id="trace-18585"></a>
<a id="trace-18631"></a>
<a id="trace-18633"></a>
<a id="trace-18667"></a>
<a id="trace-18669"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18803"></a>
<a id="trace-18805"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18874"></a>
<a id="trace-18876"></a>
- 95.25s–108.25s (×28), actor 5, squad 0 (trace 18352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 18292. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.234457858604488, 'next_transition': 18379}.
<a id="trace-18577"></a>
- 101.20s–101.20s (×1), actor 9, squad 1 (trace 18577): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 18488. Next observer evidence: {'until': 111.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1953}.
<a id="trace-18934"></a>
- 109.05s–109.05s (×1), actor 1, squad 0 (trace 18934): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 18721. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00035460463116604863, 'next_transition': 19000}.
<a id="trace-18935"></a>
- 109.05s–109.05s (×1), actor 1, squad 0 (trace 18935): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 18721. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00035460463116604863, 'next_transition': 19000}.
<a id="trace-19000"></a>
<a id="trace-19002"></a>
<a id="trace-19137"></a>
<a id="trace-19139"></a>
<a id="trace-19197"></a>
<a id="trace-19199"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19350"></a>
<a id="trace-19352"></a>
<a id="trace-19441"></a>
<a id="trace-19443"></a>
<a id="trace-19462"></a>
<a id="trace-19464"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
- 109.25s–117.25s (×18), actor 5, squad 0 (trace 19000): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18722. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.006140231627914696, 'next_transition': 19137}.
<a id="trace-1953"></a>
- 111.55s–111.55s (×1), actor 5, squad 1 (events line 1953): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}.
<a id="trace-19212"></a>
- 111.55s–111.55s (×1), actor 5, squad 1 (trace 19212): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.252521 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.55s, trace 19212. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}.
<a id="trace-19213"></a>
- 111.55s–111.55s (×1), actor 5, squad 1 (trace 19213): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.252521 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.55s, trace 19213. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}.
<a id="trace-19262"></a>
- 112.85s–112.85s (×1), actor 9, squad 1 (trace 19262): Withdraw to received rally. Knowledge: actor memory at 110.00s, trace 19060. Next observer evidence: {'until': 127.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 19973}.
<a id="trace-19263"></a>
- 112.85s–112.85s (×1), actor 9, squad 1 (trace 19263): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 19060. Next observer evidence: {'until': 127.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 19973}.
<a id="trace-19506"></a>
- 118.05s–118.05s (×1), actor 1, squad 0 (trace 19506): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 19379. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999950595179995, 'next_transition': 19510}.
<a id="trace-19510"></a>
<a id="trace-19512"></a>
<a id="trace-19537"></a>
<a id="trace-19539"></a>
<a id="trace-19625"></a>
<a id="trace-19627"></a>
<a id="trace-19655"></a>
<a id="trace-19657"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19702"></a>
<a id="trace-19704"></a>
- 118.25s–123.25s (×12), actor 5, squad 0 (trace 19510): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 19380. Next observer evidence: {'until': 119.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.049996719444611, 'next_transition': 19537}.
<a id="trace-19726"></a>
- 124.15s–124.15s (×1), actor 1, squad 0 (trace 19726): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 19559. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1876666666666663, 'next_transition': 19803}.
<a id="trace-19748"></a>
- 124.15s–124.15s (×1), actor 1, squad 0 (trace 19748): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 19559. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1876666666666663, 'next_transition': 19803}.
<a id="trace-19803"></a>
<a id="trace-19805"></a>
<a id="trace-19892"></a>
<a id="trace-19894"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19954"></a>
<a id="trace-19956"></a>
<a id="trace-19991"></a>
<a id="trace-19993"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20096"></a>
<a id="trace-20098"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20147"></a>
<a id="trace-20149"></a>
<a id="trace-20173"></a>
<a id="trace-20175"></a>
<a id="trace-20194"></a>
<a id="trace-20196"></a>
<a id="trace-20278"></a>
<a id="trace-20280"></a>
- 124.25s–135.30s (×24), actor 5, squad 0 (trace 19803): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 19560. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3089185612871385, 'next_transition': 19892}.
<a id="trace-19973"></a>
- 127.80s–127.80s (×1), actor 9, squad 1 (trace 19973): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 19830. Next observer evidence: {'until': 151.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2129}.
<a id="trace-19974"></a>
- 127.80s–127.80s (×1), actor 9, squad 1 (trace 19974): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 19830. Next observer evidence: {'until': 151.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2129}.
<a id="trace-20293"></a>
- 135.75s–135.75s (×1), actor 1, squad 0 (trace 20293): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 20213. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5018416874108231, 'next_transition': 20305}.
<a id="trace-20305"></a>
<a id="trace-20307"></a>
- 136.30s–136.30s (×2), actor 5, squad 0 (trace 20305): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 20214. Next observer evidence: {'until': 136.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.302394679112506, 'next_transition': 20322}.
<a id="trace-20322"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 20322): MoveTactically. Knowledge: actor memory at 135.00s, trace 20213. Next observer evidence: {'until': 137.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.37798490657696865, 'next_transition': 20366}.
<a id="trace-20323"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 20323): received platoon directive. Knowledge: actor memory at 135.00s, trace 20213. Next observer evidence: {'until': 137.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.37798490657696865, 'next_transition': 20366}.
<a id="trace-20366"></a>
<a id="trace-20368"></a>
- 137.30s–137.30s (×2), actor 5, squad 0 (trace 20366): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 20214. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1890090633041475, 'next_transition': 2082}.
<a id="trace-2082"></a>
- 137.95s–137.95s (×1), actor 5, squad 0 (events line 2082): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}.
<a id="trace-20391"></a>
- 137.95s–137.95s (×1), actor 5, squad 0 (trace 20391): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.259539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.95s, trace 20391. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}.
<a id="trace-20392"></a>
- 137.95s–137.95s (×1), actor 5, squad 0 (trace 20392): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.259539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.95s, trace 20392. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}.
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
- 138.30s–139.30s (×4), actor 5, squad 0 (trace 20398): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.95s, trace 20392. Next observer evidence: {'until': 139.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3145951736012904, 'next_transition': 20431}.
<a id="trace-20515"></a>
- 140.25s–140.25s (×1), actor 1, squad 0 (trace 20515): Withdraw to received rally. Knowledge: actor memory at 140.00s, trace 20453. Next observer evidence: None.
<a id="trace-20516"></a>
- 140.25s–140.25s (×1), actor 1, squad 0 (trace 20516): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 20453. Next observer evidence: None.
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20677"></a>
<a id="trace-20679"></a>
<a id="trace-20704"></a>
<a id="trace-20706"></a>
<a id="trace-20786"></a>
<a id="trace-20788"></a>
- 140.30s–145.30s (×12), actor 5, squad 0 (trace 20598): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 20454. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087797571774489, 'next_transition': 20624}.
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20941"></a>
<a id="trace-20943"></a>
<a id="trace-20962"></a>
<a id="trace-20964"></a>
- 149.30s–151.30s (×6), actor 1, squad 0 (trace 20865): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 20718. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339825354034396, 'next_transition': 20941}.
<a id="trace-2128"></a>
- 151.40s–151.40s (×1), actor 1, squad 0 (events line 2128): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2129"></a>
- 151.40s–151.40s (×1), actor 1, squad 1 (events line 2129): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20972"></a>
- 151.40s–151.40s (×1), actor 1, squad 0 (trace 20972): renew committed intent (75 s lifetime). Knowledge: actor memory at 151.40s, trace 20972. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071760513400927, 'next_transition': 20986}.
<a id="trace-20973"></a>
- 151.40s–151.40s (×1), actor 1, squad 1 (trace 20973): renew committed intent (75 s lifetime). Knowledge: actor memory at 151.40s, trace 20973. Next observer evidence: {'until': 181.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2351}.
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21028"></a>
<a id="trace-21030"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
- 152.30s–155.30s (×8), actor 1, squad 0 (trace 20986): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 151.40s, trace 20973. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340325339689337, 'next_transition': 21007}.
<a id="trace-21116"></a>
- 155.85s–155.85s (×1), actor 1, squad 0 (trace 21116): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 21045. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21174}.
<a id="trace-21117"></a>
- 155.85s–155.85s (×1), actor 1, squad 0 (trace 21117): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 21045. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21174}.
<a id="trace-21174"></a>
<a id="trace-21176"></a>
<a id="trace-21197"></a>
<a id="trace-21199"></a>
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21238"></a>
<a id="trace-21240"></a>
<a id="trace-21315"></a>
<a id="trace-21317"></a>
<a id="trace-21337"></a>
<a id="trace-21339"></a>
<a id="trace-21359"></a>
<a id="trace-21361"></a>
<a id="trace-21379"></a>
<a id="trace-21381"></a>
<a id="trace-21395"></a>
<a id="trace-21397"></a>
<a id="trace-21471"></a>
<a id="trace-21473"></a>
<a id="trace-21492"></a>
<a id="trace-21494"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
- 156.30s–168.30s (×26), actor 1, squad 0 (trace 21174): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 155.00s, trace 21045. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937561459837809, 'next_transition': 21197}.
<a id="trace-21564"></a>
- 168.45s–168.45s (×1), actor 1, squad 0 (trace 21564): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 21411. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21629}.
<a id="trace-21565"></a>
- 168.45s–168.45s (×1), actor 1, squad 0 (trace 21565): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 21411. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21629}.
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21728"></a>
<a id="trace-21730"></a>
<a id="trace-21744"></a>
<a id="trace-21746"></a>
<a id="trace-21768"></a>
<a id="trace-21794"></a>
<a id="trace-21796"></a>
<a id="trace-21888"></a>
<a id="trace-21911"></a>
<a id="trace-21913"></a>
<a id="trace-21928"></a>
<a id="trace-21930"></a>
- 169.30s–177.30s (×16), actor 1, squad 0 (trace 21629): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.00s, trace 21411. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9639276425126548, 'next_transition': 21705}.
<a id="trace-21936"></a>
- 177.45s–177.45s (×1), actor 1, squad 0 (trace 21936): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 21819. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22000}.
<a id="trace-21937"></a>
- 177.45s–177.45s (×1), actor 1, squad 0 (trace 21937): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 21819. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22000}.
<a id="trace-22000"></a>
<a id="trace-22002"></a>
<a id="trace-22025"></a>
<a id="trace-22027"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22166"></a>
<a id="trace-22168"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22212"></a>
<a id="trace-22214"></a>
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22306"></a>
<a id="trace-22308"></a>
<a id="trace-22331"></a>
<a id="trace-22333"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
- 178.30s–188.30s (×22), actor 1, squad 0 (trace 22000): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 21819. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237659516339657, 'next_transition': 22025}.
<a id="trace-22366"></a>
- 188.30s–188.30s (×1), actor 1, squad 0 (trace 22366): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 185.00s, trace 22226. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22390}.
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22480"></a>
<a id="trace-22500"></a>
<a id="trace-22502"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22539"></a>
<a id="trace-22541"></a>
<a id="trace-22559"></a>
<a id="trace-22561"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22663"></a>
<a id="trace-22665"></a>
<a id="trace-22686"></a>
<a id="trace-22688"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22794"></a>
<a id="trace-22796"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
- 189.30s–201.30s (×25), actor 1, squad 0 (trace 22390): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.00s, trace 22226. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1398177719376912, 'next_transition': 22480}.
<a id="trace-2302"></a>
- 202.00s–202.00s (×1), actor 1, squad 0 (events line 2302): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22842}.
<a id="trace-22836"></a>
- 202.00s–202.00s (×1), actor 1, squad 0 (trace 22836): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.550592 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 202.00s, trace 22836. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22842}.
<a id="trace-22837"></a>
- 202.00s–202.00s (×1), actor 1, squad 0 (trace 22837): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.550592 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 202.00s, trace 22837. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22842}.
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
- 202.30s–204.30s (×6), actor 1, squad 0 (trace 22842): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 202.00s, trace 22837. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22866}.
<a id="trace-22903"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 22903): MoveTactically. Knowledge: actor memory at 202.00s, trace 22837. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22971}.
<a id="trace-22904"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 22904): traveling overwatch. Knowledge: actor memory at 202.00s, trace 22837. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22971}.
<a id="trace-22905"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 22905): received platoon directive. Knowledge: actor memory at 202.00s, trace 22837. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22971}.
<a id="trace-22971"></a>
<a id="trace-22973"></a>
- 205.30s–205.30s (×2), actor 1, squad 0 (trace 22971): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 22911. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22989}.
<a id="trace-22989"></a>
- 205.85s–205.85s (×1), actor 1, squad 0 (trace 22989): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 22911. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23051}.
<a id="trace-23051"></a>
<a id="trace-23053"></a>
<a id="trace-23076"></a>
<a id="trace-23078"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23126"></a>
<a id="trace-23128"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23233"></a>
<a id="trace-23235"></a>
<a id="trace-23253"></a>
<a id="trace-23255"></a>
<a id="trace-23277"></a>
<a id="trace-23279"></a>
<a id="trace-23305"></a>
<a id="trace-23307"></a>
<a id="trace-23377"></a>
<a id="trace-23379"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23430"></a>
<a id="trace-23432"></a>
<a id="trace-23452"></a>
<a id="trace-23454"></a>
<a id="trace-23474"></a>
<a id="trace-23476"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
- 206.30s–220.30s (×30), actor 1, squad 0 (trace 23051): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 22911. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937913273867236, 'next_transition': 23076}.
<a id="trace-2351"></a>
- 213.25s–213.25s (×1), actor 1, squad 1 (events line 2351): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2686}.
<a id="trace-23274"></a>
- 213.25s–213.25s (×1), actor 1, squad 1 (trace 23274): renew committed intent (75 s lifetime). Knowledge: actor memory at 213.25s, trace 23274. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2686}.
<a id="trace-23577"></a>
- 221.25s–221.25s (×1), actor 1, squad 0 (trace 23577): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 220.00s, trace 23490. Next observer evidence: None.
<a id="trace-23581"></a>
<a id="trace-23583"></a>
- 221.30s–221.30s (×2), actor 1, squad 0 (trace 23581): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 23490. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23596}.
<a id="trace-23596"></a>
- 222.25s–222.25s (×1), actor 1, squad 0 (trace 23596): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 23490. Next observer evidence: None.
<a id="trace-23651"></a>
<a id="trace-23653"></a>
<a id="trace-23680"></a>
<a id="trace-23682"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23790"></a>
<a id="trace-23792"></a>
<a id="trace-23810"></a>
<a id="trace-23812"></a>
<a id="trace-23833"></a>
<a id="trace-23835"></a>
<a id="trace-23860"></a>
<a id="trace-23862"></a>
<a id="trace-23878"></a>
<a id="trace-23880"></a>
<a id="trace-23956"></a>
<a id="trace-23958"></a>
<a id="trace-23977"></a>
<a id="trace-23979"></a>
<a id="trace-24003"></a>
<a id="trace-24027"></a>
<a id="trace-24029"></a>
<a id="trace-24056"></a>
<a id="trace-24058"></a>
<a id="trace-24131"></a>
<a id="trace-24133"></a>
<a id="trace-24148"></a>
<a id="trace-24150"></a>
<a id="trace-24168"></a>
<a id="trace-24170"></a>
<a id="trace-24196"></a>
<a id="trace-24198"></a>
<a id="trace-24219"></a>
<a id="trace-24221"></a>
<a id="trace-24295"></a>
<a id="trace-24297"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
- 222.30s–241.30s (×39), actor 1, squad 0 (trace 23651): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 23490. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05670384113973163, 'next_transition': 23680}.
<a id="trace-2471"></a>
- 241.35s–241.35s (×1), actor 1, squad 0 (events line 2471): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24325"></a>
- 241.35s–241.35s (×1), actor 1, squad 0 (trace 24325): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.35s, trace 24325. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24337}.
<a id="trace-24326"></a>
- 241.35s–241.35s (×1), actor 1, squad 0 (trace 24326): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24337}.
<a id="trace-24337"></a>
- 242.25s–242.25s (×1), actor 1, squad 0 (trace 24337): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: None.
<a id="trace-24342"></a>
<a id="trace-24344"></a>
- 242.30s–242.30s (×2), actor 1, squad 0 (trace 24342): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24363}.
<a id="trace-24363"></a>
- 243.25s–243.25s (×1), actor 1, squad 0 (trace 24363): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: None.
<a id="trace-24417"></a>
<a id="trace-24419"></a>
- 243.30s–243.30s (×2), actor 1, squad 0 (trace 24417): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24435}.
<a id="trace-24435"></a>
- 244.25s–244.25s (×1), actor 1, squad 0 (trace 24435): traveling. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: None.
<a id="trace-24436"></a>
- 244.25s–244.25s (×1), actor 1, squad 0 (trace 24436): received platoon directive. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: None.
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24634"></a>
<a id="trace-24636"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24701"></a>
<a id="trace-24703"></a>
<a id="trace-24720"></a>
<a id="trace-24722"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24819"></a>
<a id="trace-24821"></a>
<a id="trace-24840"></a>
<a id="trace-24842"></a>
<a id="trace-24868"></a>
<a id="trace-24870"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24923"></a>
<a id="trace-24925"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25020"></a>
<a id="trace-25022"></a>
- 244.30s–256.30s (×26), actor 1, squad 0 (trace 24543): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 241.35s, trace 24326. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3954967671572607, 'next_transition': 24634}.
<a id="trace-25039"></a>
- 256.85s–256.85s (×1), actor 1, squad 0 (trace 25039): traveling overwatch. Knowledge: actor memory at 255.00s, trace 24938. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25089}.
<a id="trace-25040"></a>
- 256.85s–256.85s (×1), actor 1, squad 0 (trace 25040): matching received arrivals: traveling stage complete. Knowledge: actor memory at 255.00s, trace 24938. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25089}.
<a id="trace-25089"></a>
<a id="trace-25091"></a>
<a id="trace-25115"></a>
<a id="trace-25117"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25227"></a>
<a id="trace-25229"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25291"></a>
<a id="trace-25293"></a>
<a id="trace-25309"></a>
<a id="trace-25311"></a>
<a id="trace-25387"></a>
<a id="trace-25389"></a>
<a id="trace-25415"></a>
<a id="trace-25417"></a>
<a id="trace-25456"></a>
<a id="trace-25458"></a>
<a id="trace-25481"></a>
<a id="trace-25483"></a>
- 257.30s–268.30s (×24), actor 1, squad 0 (trace 25089): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 24938. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39376883840649424, 'next_transition': 25115}.
<a id="trace-25494"></a>
- 268.65s–268.65s (×1), actor 1, squad 0 (trace 25494): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 265.00s, trace 25327. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6284544499404872, 'next_transition': 25627}.
<a id="trace-25627"></a>
<a id="trace-25629"></a>
- 269.30s–269.30s (×2), actor 1, squad 0 (trace 25627): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 265.00s, trace 25327. Next observer evidence: {'until': 269.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3990639417436761, 'next_transition': 25641}.
<a id="trace-25641"></a>
- 269.80s–269.80s (×1), actor 1, squad 0 (trace 25641): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 269.80s, trace 25641. Next observer evidence: None.
<a id="trace-25643"></a>
- 269.90s–269.90s (×1), actor 1, squad 0 (trace 25643): ReactToContact: cover and return fire. Knowledge: actor memory at 269.80s, trace 25641. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38370998830496966, 'next_transition': 25834}.
<a id="trace-25644"></a>
- 269.90s–269.90s (×1), actor 1, squad 0 (trace 25644): bounding overwatch. Knowledge: actor memory at 269.80s, trace 25641. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38370998830496966, 'next_transition': 25834}.
<a id="trace-25645"></a>
- 269.90s–269.90s (×1), actor 1, squad 0 (trace 25645): new contact inside 100 m. Knowledge: actor memory at 269.80s, trace 25641. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38370998830496966, 'next_transition': 25834}.
<a id="trace-25834"></a>
<a id="trace-25836"></a>
<a id="trace-25863"></a>
<a id="trace-25865"></a>
- 270.30s–271.30s (×4), actor 1, squad 0 (trace 25834): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 270.00s, trace 25772. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15627829383826813, 'next_transition': 25863}.
<a id="trace-2659"></a>
- 272.20s–272.20s (×1), actor 1, squad 0 (events line 2659): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25892"></a>
- 272.20s–272.20s (×1), actor 1, squad 0 (trace 25892): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.246518 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 272.20s, trace 25892. Next observer evidence: None.
<a id="trace-25893"></a>
- 272.20s–272.20s (×1), actor 1, squad 0 (trace 25893): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.246518 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 272.20s, trace 25893. Next observer evidence: None.
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25916"></a>
<a id="trace-25918"></a>
<a id="trace-25929"></a>
<a id="trace-25941"></a>
<a id="trace-25945"></a>
<a id="trace-25947"></a>
- 272.30s–274.30s (×8), actor 1, squad 0 (trace 25896): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 272.20s, trace 25893. Next observer evidence: {'until': 273.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25916}.
<a id="trace-25954"></a>
- 274.30s–274.30s (×1), actor 1, squad 0 (trace 25954): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 272.20s, trace 25893. Next observer evidence: {'until': 274.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0010650000000000936, 'next_transition': 26151}.
<a id="trace-25955"></a>
- 274.30s–274.30s (×1), actor 1, squad 0 (trace 25955): rearward bound: one stationary suppressing element. Knowledge: actor memory at 272.20s, trace 25893. Next observer evidence: {'until': 274.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0010650000000000936, 'next_transition': 26151}.
<a id="trace-26151"></a>
<a id="trace-26248"></a>
<a id="trace-26250"></a>
<a id="trace-26268"></a>
<a id="trace-26289"></a>
<a id="trace-26294"></a>
<a id="trace-26296"></a>
<a id="trace-26334"></a>
<a id="trace-26336"></a>
<a id="trace-26352"></a>
<a id="trace-26354"></a>
<a id="trace-26374"></a>
<a id="trace-26376"></a>
<a id="trace-26456"></a>
<a id="trace-26458"></a>
<a id="trace-26475"></a>
<a id="trace-26477"></a>
<a id="trace-26499"></a>
<a id="trace-26501"></a>
<a id="trace-26520"></a>
<a id="trace-26522"></a>
<a id="trace-26538"></a>
<a id="trace-26540"></a>
<a id="trace-26613"></a>
<a id="trace-26615"></a>
<a id="trace-26637"></a>
<a id="trace-26639"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26679"></a>
<a id="trace-26681"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
- 274.75s–289.30s (×33), actor 1, squad 0 (trace 26151): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 272.20s, trace 25893. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.001595000000000013, 'next_transition': 26248}.
<a id="trace-2686"></a>
- 275.00s–275.00s (×1), actor 1, squad 1 (events line 2686): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 305, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2932}.
<a id="trace-26179"></a>
- 275.00s–275.00s (×1), actor 1, squad 1 (trace 26179): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.00s, trace 26179. Next observer evidence: {'until': 305, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2932}.
<a id="trace-26780"></a>
- 290.25s–290.25s (×1), actor 1, squad 0 (trace 26780): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 290.00s, trace 26717. Next observer evidence: None.
<a id="trace-26781"></a>
- 290.25s–290.25s (×1), actor 1, squad 0 (trace 26781): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 290.00s, trace 26717. Next observer evidence: None.
<a id="trace-26836"></a>
<a id="trace-26838"></a>
- 290.30s–290.30s (×2), actor 1, squad 0 (trace 26836): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 290.00s, trace 26717. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26861}.
<a id="trace-26861"></a>
- 291.25s–291.25s (×1), actor 1, squad 0 (trace 26861): NeedSupport. Knowledge: actor memory at 290.00s, trace 26717. Next observer evidence: None.
<a id="trace-26866"></a>
<a id="trace-26868"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26912"></a>
<a id="trace-26914"></a>
<a id="trace-26933"></a>
<a id="trace-26935"></a>
<a id="trace-27010"></a>
<a id="trace-27012"></a>
<a id="trace-27028"></a>
<a id="trace-27030"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27076"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27166"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
- 291.30s–301.30s (×20), actor 1, squad 0 (trace 26866): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 290.00s, trace 26717. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26891}.
<a id="trace-27205"></a>
- 302.10s–302.10s (×1), actor 1, squad 0 (trace 27205): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 300.00s, trace 27104. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27211}.
<a id="trace-27211"></a>
<a id="trace-27213"></a>
- 302.30s–302.30s (×2), actor 1, squad 0 (trace 27211): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 300.00s, trace 27104. Next observer evidence: {'until': 303, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03947338913749368, 'next_transition': 27239}.
<a id="trace-27239"></a>
- 303.10s–303.10s (×1), actor 1, squad 0 (trace 27239): MoveTactically. Knowledge: actor memory at 300.00s, trace 27104. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15982458039988715, 'next_transition': 27297}.
<a id="trace-27240"></a>
- 303.10s–303.10s (×1), actor 1, squad 0 (trace 27240): received platoon directive. Knowledge: actor memory at 300.00s, trace 27104. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15982458039988715, 'next_transition': 27297}.
<a id="trace-27297"></a>
<a id="trace-27299"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27413"></a>
<a id="trace-27415"></a>
<a id="trace-27435"></a>
<a id="trace-27437"></a>
<a id="trace-27449"></a>
<a id="trace-27451"></a>
<a id="trace-27466"></a>
<a id="trace-27468"></a>
<a id="trace-27486"></a>
<a id="trace-27488"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
- 303.30s–310.30s (×16), actor 1, squad 0 (trace 27297): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 300.00s, trace 27104. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2870574553116502, 'next_transition': 27325}.
<a id="trace-27578"></a>
- 311.20s–311.20s (×1), actor 1, squad 0 (trace 27578): traveling overwatch. Knowledge: actor memory at 310.00s, trace 27499. Next observer evidence: None.
<a id="trace-27579"></a>
- 311.20s–311.20s (×1), actor 1, squad 0 (trace 27579): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 310.00s, trace 27499. Next observer evidence: None.
<a id="trace-27581"></a>
<a id="trace-27583"></a>
<a id="trace-27599"></a>
<a id="trace-27601"></a>
<a id="trace-27616"></a>
<a id="trace-27618"></a>
<a id="trace-27635"></a>
<a id="trace-27637"></a>
- 311.30s–314.30s (×8), actor 1, squad 0 (trace 27581): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 310.00s, trace 27499. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27599}.
<a id="trace-2865"></a>
- 314.80s–314.80s (×1), actor 1, squad 0 (events line 2865): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27646"></a>
- 314.80s–314.80s (×1), actor 1, squad 0 (trace 27646): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.190808 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 314.80s, trace 27646. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27708}.
<a id="trace-27647"></a>
- 314.80s–314.80s (×1), actor 1, squad 0 (trace 27647): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.190808 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 314.80s, trace 27647. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27708}.
<a id="trace-27708"></a>
<a id="trace-27710"></a>
<a id="trace-27726"></a>
<a id="trace-27728"></a>
- 315.30s–316.30s (×4), actor 1, squad 0 (trace 27708): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 315.00s, trace 27649. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27726}.
<a id="trace-27745"></a>
- 317.05s–317.05s (×1), actor 1, squad 0 (trace 27745): Withdraw to received rally. Knowledge: actor memory at 315.00s, trace 27649. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27801}.
<a id="trace-27746"></a>
- 317.05s–317.05s (×1), actor 1, squad 0 (trace 27746): rearward bound: one stationary suppressing element. Knowledge: actor memory at 315.00s, trace 27649. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27801}.
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27822"></a>
<a id="trace-27824"></a>
<a id="trace-27842"></a>
<a id="trace-27844"></a>
<a id="trace-27915"></a>
<a id="trace-27917"></a>
<a id="trace-27934"></a>
<a id="trace-27936"></a>
<a id="trace-27951"></a>
<a id="trace-27953"></a>
<a id="trace-27972"></a>
<a id="trace-27974"></a>
<a id="trace-27996"></a>
<a id="trace-27998"></a>
<a id="trace-28069"></a>
<a id="trace-28071"></a>
<a id="trace-28106"></a>
<a id="trace-28108"></a>
<a id="trace-28126"></a>
<a id="trace-28143"></a>
<a id="trace-28145"></a>
<a id="trace-28162"></a>
<a id="trace-28164"></a>
<a id="trace-28239"></a>
<a id="trace-28241"></a>
<a id="trace-28265"></a>
<a id="trace-28267"></a>
<a id="trace-28284"></a>
<a id="trace-28286"></a>
- 317.30s–332.30s (×31), actor 1, squad 0 (trace 27801): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 315.00s, trace 27649. Next observer evidence: {'until': 318.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670000000000002, 'next_transition': 27822}.
<a id="trace-28305"></a>
- 332.85s–332.85s (×1), actor 1, squad 0 (trace 28305): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 330.00s, trace 28178. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28319}.
<a id="trace-28306"></a>
- 332.85s–332.85s (×1), actor 1, squad 0 (trace 28306): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 330.00s, trace 28178. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28319}.
<a id="trace-28319"></a>
<a id="trace-28321"></a>
<a id="trace-28345"></a>
<a id="trace-28347"></a>
<a id="trace-28417"></a>
<a id="trace-28419"></a>
<a id="trace-28437"></a>
<a id="trace-28439"></a>
<a id="trace-28458"></a>
<a id="trace-28460"></a>
<a id="trace-28475"></a>
<a id="trace-28477"></a>
<a id="trace-28504"></a>
<a id="trace-28506"></a>
<a id="trace-28587"></a>
<a id="trace-28589"></a>
<a id="trace-28606"></a>
<a id="trace-28608"></a>
<a id="trace-28621"></a>
<a id="trace-28623"></a>
<a id="trace-28640"></a>
<a id="trace-28642"></a>
<a id="trace-28662"></a>
<a id="trace-28664"></a>
<a id="trace-28733"></a>
<a id="trace-28735"></a>
<a id="trace-28756"></a>
<a id="trace-28758"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28803"></a>
<a id="trace-28805"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28898"></a>
<a id="trace-28900"></a>
<a id="trace-28920"></a>
<a id="trace-28922"></a>
<a id="trace-28942"></a>
<a id="trace-28944"></a>
<a id="trace-28959"></a>
<a id="trace-28986"></a>
<a id="trace-28988"></a>
<a id="trace-29065"></a>
<a id="trace-29067"></a>
<a id="trace-29082"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29119"></a>
<a id="trace-29121"></a>
<a id="trace-29140"></a>
<a id="trace-29142"></a>
- 333.30s–359.30s (×52), actor 1, squad 0 (trace 28319): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 330.00s, trace 28178. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28345}.
<a id="trace-2932"></a>
- 337.20s–337.20s (×1), actor 1, squad 1 (events line 2932): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28454"></a>
- 337.20s–337.20s (×1), actor 1, squad 1 (trace 28454): renew committed intent (75 s lifetime). Knowledge: actor memory at 337.20s, trace 28454. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

207 matched order/radio deliveries; 492 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.406s; maximum 2.150s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6255: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6256: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6257: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6265: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6266: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6267: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6268: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6269: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6270: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6271: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6272: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6273: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6274: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7110: estimate 8.87; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7111: estimate 8.87; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7112: estimate 8.87; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7113: estimate 8.87; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8282: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8283: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8284: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8287: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8288: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8290: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8292: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8293: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8294: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8295: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8296: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8297: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8298: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8299: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8300: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8301: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 9096: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9097: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9098: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9101: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9102: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 9104: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9106: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9107: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9108: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9109: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9110: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9111: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9112: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9113: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9114: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9115: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 12676: estimate 12.26; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 12677: estimate 12.26; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 12870: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12871: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12874: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12875: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12877: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12879: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12880: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12881: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12882: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12883: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12884: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12885: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12886: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12887: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12888: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 13834: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13835: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13836: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13838: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13839: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 13841: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13843: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13844: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13845: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13846: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13847: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13848: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13849: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13850: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13851: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13852: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 14280: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 14281: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 14282: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 14283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 14284: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 14285: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 14286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 14287: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 14288: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 14289: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 14290: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 14291: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 14292: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 14293: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 14294: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 14295: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 14296: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 14297: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.55s leader 5, trace 14398: estimate 12.24; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 14415: estimate 12.22; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 14416: estimate 12.22; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 14610: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14611: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14612: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14614: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14616: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14617: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14618: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14619: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14620: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14621: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14622: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14623: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14624: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14625: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14626: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 16702: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 16703: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16705: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16707: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16708: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16709: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16710: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16711: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16712: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16713: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16714: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16715: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16716: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16717: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 16833: estimate 12.10; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 16834: estimate 12.10; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 17441: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 17442: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 17443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 17444: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 17445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17446: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 17447: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17448: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 17449: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 17450: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 17451: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 17452: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17453: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 17454: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17455: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17456: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 17658: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 17659: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17661: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 17662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17663: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17664: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17665: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 17666: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17667: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 17668: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17669: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17670: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17671: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17672: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17673: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17875: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 17876: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17877: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17878: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17880: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17881: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17882: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17883: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17884: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17885: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17886: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17887: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17888: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17889: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17890: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.55s leader 5, trace 18267: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.55s leader 5, trace 18268: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 18291: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 18292: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 18293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18294: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 18295: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18296: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 18297: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 18298: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 18299: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18300: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18301: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 18302: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18303: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18304: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 18485: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18486: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18487: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18488: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18489: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18490: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 18491: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18492: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18493: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18494: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18495: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18496: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18497: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18498: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18721: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18722: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18723: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18724: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18725: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18726: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18727: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18728: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18729: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18730: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18731: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18732: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18733: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18734: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 19057: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19058: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 19059: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19060: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 19061: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19062: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19063: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19064: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 19065: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19066: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19067: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19068: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19069: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19070: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.55s leader 5, trace 19212: estimate 11.88; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.55s leader 5, trace 19213: estimate 11.88; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 19379: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19380: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 19381: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19382: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19383: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19384: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19385: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19386: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19387: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19388: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19389: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19390: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19391: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19392: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19559: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19560: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19561: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19562: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19563: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19564: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19565: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19566: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19567: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19568: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19569: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19570: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19571: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19572: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19827: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19828: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19829: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19830: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19831: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19832: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19833: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19834: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19835: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19836: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19837: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19838: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19839: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19840: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 20033: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 20034: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 20035: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20036: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 20037: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20038: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 20039: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 20040: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 20041: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20042: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20043: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 20044: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 20045: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20046: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 20213: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 20214: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 20215: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 20216: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 20217: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20218: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 20219: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 20220: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 20221: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20222: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 20223: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 20224: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 20225: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20226: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.95s leader 5, trace 20391: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.95s leader 5, trace 20392: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20453: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20454: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20455: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20456: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20457: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20458: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20459: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20460: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20461: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20462: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20463: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20464: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20465: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20466: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 20718: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20719: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20720: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20721: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20722: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20723: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20724: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20725: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20726: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20727: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20728: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20730: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20731: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 20881: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 20882: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20883: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 20884: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20885: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20886: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20887: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20888: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20889: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20890: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20892: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20893: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.40s leader 1, trace 20972: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.40s leader 1, trace 20973: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 21045: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 21046: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 21047: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 21048: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21049: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21050: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21051: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21052: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21053: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21054: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21056: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21057: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 21254: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 21255: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 21256: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 21257: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21258: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21259: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21260: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21261: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21262: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21263: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 21265: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21266: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 21411: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21412: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21413: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21414: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21415: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21416: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21417: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21418: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21419: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21420: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21422: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21423: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 21646: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 21647: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21648: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21649: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21650: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21651: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21652: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21653: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21654: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21655: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21657: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21658: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21819: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 21820: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21821: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21822: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21823: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21824: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21825: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21826: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21827: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21828: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21830: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21831: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22042: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22043: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22044: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22045: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22046: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22047: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22048: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22049: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22050: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22051: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22053: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22054: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22226: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22227: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22228: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22229: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22230: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22231: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22232: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22233: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22234: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22235: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22237: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22238: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 22418: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 22419: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 22420: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 22421: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 22422: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 22423: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 22424: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 22425: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22426: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 22427: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 22429: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22430: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 22581: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 22582: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 22583: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 22584: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22585: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22586: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22587: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22588: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22589: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22590: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22592: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22593: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 22734: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 22735: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 22736: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 22737: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22738: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 22739: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22740: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22741: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22742: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22743: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 22745: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22746: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 202.00s leader 1, trace 22836: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 202.00s leader 1, trace 22837: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 22911: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 22912: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22914: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22915: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22916: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22917: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22918: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22919: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22920: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22922: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22923: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 23140: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 23141: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 23142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 23143: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 23144: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 23145: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 23146: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 23147: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 23148: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 23149: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 23150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 23151: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 23152: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 213.25s leader 1, trace 23274: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 23317: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 23318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 23319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 23320: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23321: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 23322: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23323: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 23324: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23325: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23326: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23328: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23329: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 23490: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23493: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23494: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23495: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23496: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23497: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23498: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23499: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23501: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23502: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 23727: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 23728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23730: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23731: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23732: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23733: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23734: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23735: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23736: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23738: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23739: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 23893: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 23894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23896: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23897: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23898: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23899: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23900: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23901: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23902: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23904: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23905: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 24070: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 24071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 24072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 24073: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24074: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 24075: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24076: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 24077: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24078: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 24079: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24081: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24082: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 24230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 24231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 24232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 24233: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24234: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 24235: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24236: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 24237: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24238: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 24239: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24241: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24242: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.35s leader 1, trace 24325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.35s leader 1, trace 24326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 24568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 24569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 24570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 24571: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24572: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24573: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24574: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24575: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24576: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24577: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24579: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24580: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 24758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 25167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 25168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 25327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 25328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 25330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 269.80s leader 1, trace 25641: estimate 12.20; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25772: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 25773: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 25774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25775: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25776: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25777: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25778: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25779: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25780: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25781: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25782: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25783: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25784: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 272.20s leader 1, trace 25892: estimate 12.17; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 272.20s leader 1, trace 25893: estimate 12.17; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26166: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 26167: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26168: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 26169: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26170: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26171: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26172: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26173: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26174: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26175: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26176: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26177: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26178: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26179: estimate 12.06; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 26391: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 26392: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26393: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 26394: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26395: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26396: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26397: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26398: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26399: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26400: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26401: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26402: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26403: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 26549: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 26550: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26551: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 26552: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26553: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26554: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26555: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26556: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26557: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26558: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26559: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26560: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26561: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 26717: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 26718: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 26719: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 26720: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26721: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26722: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26723: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 26724: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26725: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26726: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26727: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26728: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26729: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 26947: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 26948: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 26949: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 26950: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26951: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26952: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26953: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 26954: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26955: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26956: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26957: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26958: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26959: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 27104: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 27105: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27106: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27107: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27108: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27109: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27110: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27111: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27112: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27113: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27114: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27115: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27116: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 27351: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27352: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 27353: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27354: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27355: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27356: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27357: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27358: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27359: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27360: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27361: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27362: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 27499: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27500: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 27501: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27502: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27503: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27504: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27505: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27506: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27507: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27508: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27509: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27510: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.80s leader 1, trace 27646: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.80s leader 1, trace 27647: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 27649: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 27650: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 27651: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 27652: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 27653: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 27654: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 27655: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 27656: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 27657: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27658: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27659: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27660: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 27856: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 27857: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 27858: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 27859: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 27860: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 27861: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 27862: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 27863: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 27864: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 27865: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 27866: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 27867: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 28010: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28011: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28012: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28013: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28014: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28015: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28016: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28017: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28018: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28019: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28020: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28021: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 28178: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28179: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 28180: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28181: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28182: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28183: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28184: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28185: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28186: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28187: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28188: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28189: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 28358: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28359: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 28360: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 28361: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 28362: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 28363: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 28364: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 28365: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 28366: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28367: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28368: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28369: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 337.20s leader 1, trace 28454: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 28521: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 28522: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 28523: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 28524: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 28525: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 28526: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 28527: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 28528: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 28529: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 28530: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 28531: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 28532: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 28673: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 28674: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 28675: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 28676: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 28677: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 28678: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 28679: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 28680: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 28681: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 28682: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 28683: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 28684: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 28840: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 28841: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 28842: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28843: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 28844: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 28845: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 28846: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 28847: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 28848: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28849: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28850: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 28851: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 29007: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 29008: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 29009: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 29010: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 29011: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 29012: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 29013: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 29014: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 29015: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 29016: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 29017: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 29018: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 29157: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 29158: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 29159: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 29160: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 29161: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 29162: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 29163: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 29164: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 29165: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 29166: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 29167: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 29168: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren incapacitated
- 1: Bren incapacitated
- 1: Moss incapacitated
- 1: Vale killed in action
- 1: Tern killed in action
- 1: Ash incapacitated
- 1: Iven incapacitated
- 1: Reed killed in action

## Outcome attribution

- 111.55s, evidence 1953: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.55s, evidence 19212: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.252521 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 111.55s, evidence 19213: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.252521 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19262}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.95s, evidence 2082: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.95s, evidence 20391: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.259539 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.95s, evidence 20392: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.259539 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6699028329298367, 'next_transition': 20398}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.40s, evidence 2128: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.40s, evidence 2129: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 213.25s, evidence 2351: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2686}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 275.00s, evidence 2686: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 305, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2932}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.80s, evidence 2865: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.80s, evidence 27646: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.190808 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27708}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.80s, evidence 27647: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.190808 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27708}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 337.20s, evidence 2932: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
