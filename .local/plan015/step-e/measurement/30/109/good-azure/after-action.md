# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/109/good-azure/battle-109-1789674349410728135`

## Battle summary

**Azure** · 360 s · 514 shots.

### Turning points

- 26.6s, squad 4: contact (events line 253). First recorded contact.
- 49.4s, squad 0: help call ([trace 11160](#trace-11160)). 50.9s, squad 1: answered a neighbour with support by fire.
- 50.9s, squad 1: help answer ([trace 11375](#trace-11375)). 52.8s, squad 1: took cover and returned fire.
- 57.5s, squad 1: help call ([trace 13430](#trace-13430)). No completion observed before termination.
- 59.0s, squad 0: help answer ([trace 13714](#trace-13714)). 66.4s, squad 0: prepared a base of fire.
- 92.2s, squad 1: withdrawal ([trace 25605](#trace-25605)). 117.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 140.1s, squad 1: withdrawal ([trace 27622](#trace-27622)). No completion observed before termination.
- 140.7s, squad 0: withdrawal ([trace 27755](#trace-27755)). 205.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 307.3s, squad 0: help call ([trace 36793](#trace-36793)). No completion observed before termination.
- 340.9s, squad 0: help call ([trace 38194](#trace-38194)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 4 further drill types; withdrew; 244 shots, 6/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 12 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 218 shots, 7/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 40 shots, 2/2 lost.

### Decisions and attribution

At 138.4s, squad 0 chose renewed the existing objective ([trace 27574](#trace-27574)), followed by 2 shots and 0 own casualties; estimate 10.2 against 2 distinct squad-reported contacts; At 282.5s, squad 0 chose prepared a base of fire ([trace 33909](#trace-33909)), followed by 2 shots and 0 own casualties; estimate 5.3 against 0 distinct squad-reported contacts; At 282.5s, squad 0 chose advanced tactically ([trace 35686](#trace-35686)), followed by 2 shots and 0 own casualties; estimate 5.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9287449447202912, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 828}.

### Communication

258 matched deliveries (mean 0.46s, max 2.15s); 188 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.55s, squad 4, contact, evidence events line 253: First recorded contact; .
- 49.40s, squad 0, help call, evidence 11160: NeedSupport; 50.9s, squad 1: answered a neighbour with support by fire.
- 50.90s, squad 1, help answer, evidence 11375: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 52.8s, squad 1: took cover and returned fire.
- 57.55s, squad 1, help call, evidence 13430: NeedSupport; No completion observed before termination.
- 59.00s, squad 0, help answer, evidence 13714: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 66.4s, squad 0: prepared a base of fire.
- 92.15s, squad 1, withdrawal, evidence 25605: BreakContact: believed ratio at least two without superiority; 117.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 140.10s, squad 1, withdrawal, evidence 27622: Withdraw to received rally; No completion observed before termination.
- 140.70s, squad 0, withdrawal, evidence 27755: Withdraw to received rally; 205.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 307.30s, squad 0, help call, evidence 36793: NeedSupport; No completion observed before termination.
- 340.90s, squad 0, help call, evidence 38194: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702951947453565, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702951947453565, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702951947453565, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600017435936384, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9287449447202912, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 828}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9287449447202912, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9287449447202912, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 828}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 828}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-741"></a>
<a id="trace-743"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.927422161049226, 'next_transition': 741}.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.92973264250155, 'next_transition': 1858}.
<a id="trace-955"></a>
<a id="trace-1301"></a>
<a id="trace-1339"></a>
<a id="trace-1341"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
<a id="trace-1450"></a>
<a id="trace-1452"></a>
<a id="trace-1500"></a>
<a id="trace-1502"></a>
<a id="trace-1531"></a>
<a id="trace-1533"></a>
<a id="trace-1558"></a>
<a id="trace-1560"></a>
<a id="trace-1650"></a>
<a id="trace-1652"></a>
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1730"></a>
<a id="trace-1732"></a>
<a id="trace-1784"></a>
<a id="trace-1786"></a>
<a id="trace-1808"></a>
<a id="trace-1810"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-1958"></a>
<a id="trace-1960"></a>
<a id="trace-2047"></a>
<a id="trace-2049"></a>
<a id="trace-2072"></a>
<a id="trace-2074"></a>
<a id="trace-2398"></a>
<a id="trace-2400"></a>
<a id="trace-2436"></a>
<a id="trace-2438"></a>
<a id="trace-2464"></a>
<a id="trace-2466"></a>
<a id="trace-2522"></a>
<a id="trace-2524"></a>
<a id="trace-2550"></a>
<a id="trace-2552"></a>
<a id="trace-2597"></a>
<a id="trace-2599"></a>
<a id="trace-2689"></a>
<a id="trace-2691"></a>
<a id="trace-2719"></a>
<a id="trace-2721"></a>
<a id="trace-2746"></a>
<a id="trace-2748"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2811"></a>
<a id="trace-2813"></a>
<a id="trace-2835"></a>
<a id="trace-2837"></a>
<a id="trace-2864"></a>
<a id="trace-2866"></a>
<a id="trace-2892"></a>
<a id="trace-2894"></a>
<a id="trace-2954"></a>
<a id="trace-2956"></a>
<a id="trace-3038"></a>
<a id="trace-3040"></a>
<a id="trace-3056"></a>
<a id="trace-3058"></a>
<a id="trace-3091"></a>
<a id="trace-3093"></a>
<a id="trace-3104"></a>
<a id="trace-3106"></a>
<a id="trace-3124"></a>
<a id="trace-3126"></a>
<a id="trace-3136"></a>
<a id="trace-3138"></a>
<a id="trace-3163"></a>
<a id="trace-3165"></a>
<a id="trace-3200"></a>
<a id="trace-3202"></a>
<a id="trace-3220"></a>
<a id="trace-3222"></a>
<a id="trace-3472"></a>
<a id="trace-3474"></a>
<a id="trace-3487"></a>
<a id="trace-3489"></a>
<a id="trace-3510"></a>
<a id="trace-3512"></a>
<a id="trace-3524"></a>
<a id="trace-3526"></a>
<a id="trace-3543"></a>
<a id="trace-3545"></a>
<a id="trace-3554"></a>
<a id="trace-3556"></a>
<a id="trace-3572"></a>
<a id="trace-3574"></a>
<a id="trace-3942"></a>
<a id="trace-3944"></a>
<a id="trace-3967"></a>
<a id="trace-3969"></a>
<a id="trace-4347"></a>
<a id="trace-4349"></a>
<a id="trace-4443"></a>
<a id="trace-4445"></a>
<a id="trace-4829"></a>
<a id="trace-4831"></a>
<a id="trace-4932"></a>
<a id="trace-4934"></a>
<a id="trace-4984"></a>
<a id="trace-4986"></a>
<a id="trace-5400"></a>
<a id="trace-5402"></a>
<a id="trace-5632"></a>
<a id="trace-5634"></a>
<a id="trace-6588"></a>
<a id="trace-6590"></a>
<a id="trace-6650"></a>
<a id="trace-6652"></a>
<a id="trace-6713"></a>
<a id="trace-6715"></a>
<a id="trace-6837"></a>
<a id="trace-6839"></a>
<a id="trace-6913"></a>
<a id="trace-6915"></a>
<a id="trace-6980"></a>
<a id="trace-6982"></a>
<a id="trace-7003"></a>
<a id="trace-7005"></a>
<a id="trace-7234"></a>
<a id="trace-7236"></a>
<a id="trace-7253"></a>
<a id="trace-7255"></a>
<a id="trace-7279"></a>
<a id="trace-7281"></a>
<a id="trace-7321"></a>
<a id="trace-7323"></a>
<a id="trace-10581"></a>
<a id="trace-10583"></a>
<a id="trace-10692"></a>
<a id="trace-10694"></a>
<a id="trace-10739"></a>
<a id="trace-10741"></a>
<a id="trace-10823"></a>
<a id="trace-10825"></a>
<a id="trace-10875"></a>
<a id="trace-10877"></a>
<a id="trace-10934"></a>
<a id="trace-10936"></a>
<a id="trace-11002"></a>
<a id="trace-11004"></a>
<a id="trace-11066"></a>
<a id="trace-11068"></a>
<a id="trace-11298"></a>
<a id="trace-11300"></a>
<a id="trace-11348"></a>
<a id="trace-11350"></a>
<a id="trace-12222"></a>
<a id="trace-12224"></a>
<a id="trace-12286"></a>
<a id="trace-12288"></a>
<a id="trace-12371"></a>
<a id="trace-12373"></a>
<a id="trace-12668"></a>
<a id="trace-12670"></a>
<a id="trace-12704"></a>
<a id="trace-12706"></a>
<a id="trace-12773"></a>
<a id="trace-12775"></a>
<a id="trace-12873"></a>
<a id="trace-12875"></a>
<a id="trace-13215"></a>
<a id="trace-13217"></a>
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13403"></a>
<a id="trace-13405"></a>
<a id="trace-13471"></a>
<a id="trace-13473"></a>
<a id="trace-13541"></a>
<a id="trace-13543"></a>
<a id="trace-13697"></a>
<a id="trace-13699"></a>
<a id="trace-16130"></a>
<a id="trace-16132"></a>
<a id="trace-16163"></a>
<a id="trace-16165"></a>
<a id="trace-16255"></a>
<a id="trace-16257"></a>
<a id="trace-16322"></a>
<a id="trace-16324"></a>
<a id="trace-16342"></a>
<a id="trace-16344"></a>
<a id="trace-16394"></a>
<a id="trace-16396"></a>
<a id="trace-16411"></a>
<a id="trace-16413"></a>
<a id="trace-16462"></a>
<a id="trace-16464"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16681"></a>
<a id="trace-16683"></a>
<a id="trace-16711"></a>
<a id="trace-16713"></a>
<a id="trace-16733"></a>
<a id="trace-16735"></a>
<a id="trace-18347"></a>
<a id="trace-18349"></a>
<a id="trace-18376"></a>
<a id="trace-18378"></a>
<a id="trace-18418"></a>
<a id="trace-18420"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18461"></a>
<a id="trace-18463"></a>
<a id="trace-18968"></a>
<a id="trace-18970"></a>
<a id="trace-18998"></a>
<a id="trace-19000"></a>
<a id="trace-19023"></a>
<a id="trace-19025"></a>
<a id="trace-19092"></a>
<a id="trace-19094"></a>
<a id="trace-19187"></a>
<a id="trace-19189"></a>
<a id="trace-19202"></a>
<a id="trace-19204"></a>
<a id="trace-21697"></a>
<a id="trace-21699"></a>
<a id="trace-21713"></a>
<a id="trace-21715"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21829"></a>
<a id="trace-21831"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-24331"></a>
<a id="trace-24386"></a>
<a id="trace-24488"></a>
<a id="trace-24490"></a>
<a id="trace-24535"></a>
<a id="trace-24537"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-25038"></a>
<a id="trace-25040"></a>
<a id="trace-25105"></a>
<a id="trace-25107"></a>
<a id="trace-25146"></a>
<a id="trace-25148"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25407"></a>
<a id="trace-25409"></a>
<a id="trace-25422"></a>
<a id="trace-25424"></a>
<a id="trace-25439"></a>
<a id="trace-25441"></a>
<a id="trace-25449"></a>
<a id="trace-25451"></a>
<a id="trace-25471"></a>
<a id="trace-25473"></a>
<a id="trace-25483"></a>
<a id="trace-25485"></a>
<a id="trace-25558"></a>
<a id="trace-25560"></a>
<a id="trace-25590"></a>
<a id="trace-25592"></a>
<a id="trace-25700"></a>
<a id="trace-25702"></a>
<a id="trace-25716"></a>
<a id="trace-25718"></a>
<a id="trace-25738"></a>
<a id="trace-25740"></a>
<a id="trace-25756"></a>
<a id="trace-25758"></a>
<a id="trace-25858"></a>
<a id="trace-25860"></a>
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25890"></a>
<a id="trace-25892"></a>
<a id="trace-25904"></a>
<a id="trace-25906"></a>
<a id="trace-25921"></a>
<a id="trace-25923"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26056"></a>
<a id="trace-26058"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26092"></a>
<a id="trace-26094"></a>
<a id="trace-26114"></a>
<a id="trace-26116"></a>
<a id="trace-26128"></a>
<a id="trace-26130"></a>
<a id="trace-26149"></a>
<a id="trace-26151"></a>
<a id="trace-26165"></a>
<a id="trace-26167"></a>
<a id="trace-26187"></a>
<a id="trace-26189"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26312"></a>
<a id="trace-26314"></a>
<a id="trace-26328"></a>
<a id="trace-26330"></a>
<a id="trace-26354"></a>
<a id="trace-26356"></a>
<a id="trace-26368"></a>
<a id="trace-26370"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26406"></a>
<a id="trace-26408"></a>
<a id="trace-26419"></a>
<a id="trace-26421"></a>
<a id="trace-26494"></a>
<a id="trace-26496"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26525"></a>
<a id="trace-26527"></a>
<a id="trace-26539"></a>
<a id="trace-26541"></a>
<a id="trace-26562"></a>
<a id="trace-26564"></a>
<a id="trace-26577"></a>
<a id="trace-26579"></a>
<a id="trace-26598"></a>
<a id="trace-26600"></a>
<a id="trace-26616"></a>
<a id="trace-26618"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26724"></a>
<a id="trace-26742"></a>
<a id="trace-26767"></a>
<a id="trace-26781"></a>
<a id="trace-26806"></a>
<a id="trace-26867"></a>
<a id="trace-26887"></a>
<a id="trace-26899"></a>
<a id="trace-26969"></a>
<a id="trace-27041"></a>
<a id="trace-27062"></a>
<a id="trace-27191"></a>
<a id="trace-27207"></a>
<a id="trace-27220"></a>
- 5.70s–127.75s (×366), actor 37, squad 4 (trace 955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362537628536318, 'next_transition': 1301}.
<a id="trace-969"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 969): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299688375380377, 'next_transition': 1297}.
<a id="trace-1297"></a>
<a id="trace-1299"></a>
<a id="trace-1335"></a>
<a id="trace-1337"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1416"></a>
<a id="trace-1418"></a>
<a id="trace-1446"></a>
<a id="trace-1448"></a>
<a id="trace-1496"></a>
<a id="trace-1498"></a>
<a id="trace-1527"></a>
<a id="trace-1529"></a>
<a id="trace-1554"></a>
<a id="trace-1556"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1672"></a>
<a id="trace-1674"></a>
<a id="trace-1695"></a>
<a id="trace-1697"></a>
<a id="trace-1726"></a>
<a id="trace-1728"></a>
<a id="trace-1756"></a>
<a id="trace-1758"></a>
<a id="trace-1780"></a>
<a id="trace-1782"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1822"></a>
<a id="trace-1824"></a>
<a id="trace-1851"></a>
<a id="trace-1853"></a>
<a id="trace-1954"></a>
<a id="trace-1956"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2068"></a>
<a id="trace-2070"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1297): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600286396637626, 'next_transition': 1335}.
<a id="trace-1858"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1858): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1575. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.500073578405882, 'next_transition': 2929}.
<a id="trace-2077"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2077): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1967. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331141554955511, 'next_transition': 2394}.
<a id="trace-2394"></a>
<a id="trace-2396"></a>
<a id="trace-2432"></a>
<a id="trace-2434"></a>
<a id="trace-2460"></a>
<a id="trace-2462"></a>
<a id="trace-2480"></a>
<a id="trace-2482"></a>
<a id="trace-2518"></a>
<a id="trace-2520"></a>
<a id="trace-2546"></a>
<a id="trace-2548"></a>
<a id="trace-2569"></a>
<a id="trace-2571"></a>
<a id="trace-2593"></a>
<a id="trace-2595"></a>
<a id="trace-2685"></a>
<a id="trace-2687"></a>
<a id="trace-2715"></a>
<a id="trace-2717"></a>
<a id="trace-2742"></a>
<a id="trace-2744"></a>
<a id="trace-2769"></a>
<a id="trace-2771"></a>
<a id="trace-2807"></a>
<a id="trace-2809"></a>
<a id="trace-2831"></a>
<a id="trace-2833"></a>
<a id="trace-2860"></a>
<a id="trace-2862"></a>
<a id="trace-2888"></a>
<a id="trace-2890"></a>
<a id="trace-2914"></a>
<a id="trace-2916"></a>
<a id="trace-2950"></a>
<a id="trace-2952"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3052"></a>
<a id="trace-3054"></a>
<a id="trace-3087"></a>
<a id="trace-3089"></a>
<a id="trace-3100"></a>
<a id="trace-3102"></a>
<a id="trace-3120"></a>
<a id="trace-3122"></a>
- 16.25s–27.25s (×46), actor 5, squad 0 (trace 2394): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1972. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843690187119877, 'next_transition': 2432}.
<a id="trace-2929"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2929): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2614. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 270}.
<a id="trace-3127"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 3127): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2960. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499840574993443, 'next_transition': 3132}.
<a id="trace-3132"></a>
<a id="trace-3134"></a>
<a id="trace-3159"></a>
<a id="trace-3161"></a>
<a id="trace-3180"></a>
<a id="trace-3182"></a>
<a id="trace-3196"></a>
<a id="trace-3198"></a>
<a id="trace-3216"></a>
<a id="trace-3218"></a>
<a id="trace-3468"></a>
<a id="trace-3470"></a>
<a id="trace-3483"></a>
<a id="trace-3485"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 3132): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2965. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725101057120361, 'next_transition': 3159}.
<a id="trace-270"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 270): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3168"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3168): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3168. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3223}.
<a id="trace-3169"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3169): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3169. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3223}.
<a id="trace-3223"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3223): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2968. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.438474964769405, 'next_transition': 5449}.
<a id="trace-3226"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3226): MoveTactically. Knowledge: actor memory at 25.00s, trace 2968. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.438474964769405, 'next_transition': 5449}.
<a id="trace-3227"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3227): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2968. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.438474964769405, 'next_transition': 5449}.
<a id="trace-3228"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3228): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2968. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.438474964769405, 'next_transition': 5449}.
<a id="trace-298"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 298): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3496"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 3496): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3496. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3506}.
<a id="trace-3497"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 3497): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3506}.
<a id="trace-3506"></a>
<a id="trace-3508"></a>
<a id="trace-3520"></a>
<a id="trace-3522"></a>
<a id="trace-3539"></a>
<a id="trace-3541"></a>
<a id="trace-3550"></a>
<a id="trace-3552"></a>
<a id="trace-3568"></a>
<a id="trace-3570"></a>
- 31.25s–33.25s (×10), actor 5, squad 0 (trace 3506): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3520}.
<a id="trace-3576"></a>
- 33.35s–33.35s (×1), actor 0, squad 0 (trace 3576): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3938}.
<a id="trace-3583"></a>
- 33.35s–33.35s (×1), actor 0, squad 0 (trace 3583): MoveTactically. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3938}.
<a id="trace-3584"></a>
- 33.35s–33.35s (×1), actor 0, squad 0 (trace 3584): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3938}.
<a id="trace-3585"></a>
- 33.35s–33.35s (×1), actor 0, squad 0 (trace 3585): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3938}.
<a id="trace-3938"></a>
<a id="trace-3940"></a>
<a id="trace-3963"></a>
<a id="trace-3965"></a>
- 33.75s–34.25s (×4), actor 5, squad 0 (trace 3938): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019001085495307938, 'next_transition': 3963}.
<a id="trace-3971"></a>
- 34.35s–34.35s (×1), actor 0, squad 0 (trace 3971): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2881351195586845, 'next_transition': 4343}.
<a id="trace-3972"></a>
- 34.35s–34.35s (×1), actor 0, squad 0 (trace 3972): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2881351195586845, 'next_transition': 4343}.
<a id="trace-3973"></a>
- 34.35s–34.35s (×1), actor 0, squad 0 (trace 3973): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3382. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2881351195586845, 'next_transition': 4343}.
<a id="trace-4343"></a>
<a id="trace-4345"></a>
<a id="trace-4439"></a>
<a id="trace-4441"></a>
- 34.75s–35.25s (×4), actor 5, squad 0 (trace 4343): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0813803137579654, 'next_transition': 4439}.
<a id="trace-4447"></a>
- 35.35s–35.35s (×1), actor 0, squad 0 (trace 4447): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4357. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7438902945973915, 'next_transition': 4825}.
<a id="trace-4825"></a>
<a id="trace-4827"></a>
<a id="trace-4885"></a>
<a id="trace-4887"></a>
<a id="trace-4928"></a>
<a id="trace-4930"></a>
<a id="trace-4980"></a>
<a id="trace-4982"></a>
- 35.75s–37.25s (×8), actor 5, squad 0 (trace 4825): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0901880837388511, 'next_transition': 4885}.
<a id="trace-5001"></a>
- 37.60s–37.60s (×1), actor 0, squad 0 (trace 5001): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4357. Next observer evidence: None.
<a id="trace-5396"></a>
<a id="trace-5398"></a>
<a id="trace-5628"></a>
<a id="trace-5630"></a>
- 37.75s–38.25s (×4), actor 5, squad 0 (trace 5396): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.030879531822092, 'next_transition': 5628}.
<a id="trace-5449"></a>
- 38.20s–38.20s (×1), actor 8, squad 1 (trace 5449): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4365. Next observer evidence: None.
<a id="trace-5450"></a>
- 38.20s–38.20s (×1), actor 8, squad 1 (trace 5450): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4365. Next observer evidence: None.
<a id="trace-5451"></a>
<a id="trace-5635"></a>
- 38.20s–38.25s (×2), actor 8, squad 1 (trace 5451): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4365. Next observer evidence: None.
<a id="trace-443"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (events line 443): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-444"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (events line 444): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5814"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 5814): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.805843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5814. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5673067556724135, 'next_transition': 6584}.
<a id="trace-5815"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 5815): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.805843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5815. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5673067556724135, 'next_transition': 6584}.
<a id="trace-5816"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 5816): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.805843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5816. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5340184081004286, 'next_transition': 6234}.
<a id="trace-5817"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 5817): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.805843 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5817. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5340184081004286, 'next_transition': 6234}.
<a id="trace-5818"></a>
- 38.35s–38.35s (×1), actor 0, squad 0 (trace 5818): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4357. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5673067556724135, 'next_transition': 6584}.
<a id="trace-6234"></a>
<a id="trace-6408"></a>
- 38.40s–38.55s (×2), actor 8, squad 1 (trace 6234): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4365. Next observer evidence: None.
<a id="trace-6584"></a>
<a id="trace-6586"></a>
<a id="trace-6646"></a>
<a id="trace-6648"></a>
<a id="trace-6709"></a>
<a id="trace-6711"></a>
<a id="trace-6833"></a>
<a id="trace-6835"></a>
<a id="trace-6909"></a>
<a id="trace-6911"></a>
<a id="trace-6975"></a>
<a id="trace-6977"></a>
<a id="trace-6998"></a>
<a id="trace-7000"></a>
- 38.75s–41.75s (×14), actor 5, squad 0 (trace 6584): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.35s, trace 5817. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8976928255787597, 'next_transition': 6646}.
<a id="trace-7006"></a>
- 41.85s–41.85s (×1), actor 0, squad 0 (trace 7006): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27561478512993154, 'next_transition': 7043}.
<a id="trace-7010"></a>
- 41.90s–41.90s (×1), actor 8, squad 1 (trace 7010): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6740. Next observer evidence: None.
<a id="trace-7014"></a>
- 41.95s–41.95s (×1), actor 8, squad 1 (trace 7014): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 6740. Next observer evidence: {'until': 42.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3760869880467317, 'next_transition': 7057}.
<a id="trace-7043"></a>
<a id="trace-7045"></a>
<a id="trace-7228"></a>
<a id="trace-7230"></a>
<a id="trace-7247"></a>
<a id="trace-7249"></a>
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7315"></a>
<a id="trace-7317"></a>
- 42.25s–44.25s (×10), actor 5, squad 0 (trace 7043): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6737. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11855273020501259, 'next_transition': 7228}.
<a id="trace-7057"></a>
- 42.55s–42.55s (×1), actor 8, squad 1 (trace 7057): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 6740. Next observer evidence: {'until': 45.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.995215320502946, 'next_transition': 606}.
<a id="trace-7331"></a>
- 44.35s–44.35s (×1), actor 0, squad 0 (trace 7331): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0002662500000000234, 'next_transition': 7351}.
<a id="trace-7351"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 7351): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: None.
<a id="trace-10282"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 10282): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: None.
<a id="trace-10283"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 10283): MoveTactically. Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: None.
<a id="trace-10284"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 10284): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 6732. Next observer evidence: None.
<a id="trace-10575"></a>
<a id="trace-10577"></a>
<a id="trace-10686"></a>
<a id="trace-10688"></a>
<a id="trace-10733"></a>
<a id="trace-10735"></a>
<a id="trace-10817"></a>
<a id="trace-10819"></a>
<a id="trace-10869"></a>
<a id="trace-10871"></a>
<a id="trace-10928"></a>
<a id="trace-10930"></a>
<a id="trace-10996"></a>
<a id="trace-10998"></a>
<a id="trace-11060"></a>
<a id="trace-11062"></a>
<a id="trace-11098"></a>
<a id="trace-11100"></a>
<a id="trace-11143"></a>
<a id="trace-11145"></a>
- 44.75s–49.25s (×20), actor 5, squad 0 (trace 10575): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6737. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43353539634011606, 'next_transition': 10686}.
<a id="trace-606"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (events line 606): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10757"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 10757): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.848145 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 10757. Next observer evidence: None.
<a id="trace-10758"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 10758): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.848145 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 10758. Next observer evidence: None.
<a id="trace-10766"></a>
- 45.90s–45.90s (×1), actor 8, squad 1 (trace 10766): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 10609. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6375988973188766, 'next_transition': 10907}.
<a id="trace-10907"></a>
- 47.15s–47.15s (×1), actor 8, squad 1 (trace 10907): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 10609. Next observer evidence: {'until': 47.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1612499999999999, 'next_transition': 10953}.
<a id="trace-10953"></a>
- 47.40s–47.40s (×1), actor 8, squad 1 (trace 10953): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 45.00s, trace 10609. Next observer evidence: {'until': 50.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.9887875005530765, 'next_transition': 798}.
<a id="trace-11160"></a>
- 49.40s–49.40s (×1), actor 0, squad 0 (trace 11160): NeedSupport. Knowledge: actor memory at 45.00s, trace 10601. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33417344019680595, 'next_transition': 11185}.
<a id="trace-11185"></a>
<a id="trace-11187"></a>
<a id="trace-11292"></a>
<a id="trace-11294"></a>
<a id="trace-11342"></a>
<a id="trace-11344"></a>
<a id="trace-12216"></a>
<a id="trace-12218"></a>
<a id="trace-12280"></a>
<a id="trace-12282"></a>
<a id="trace-12365"></a>
<a id="trace-12367"></a>
<a id="trace-12442"></a>
<a id="trace-12444"></a>
<a id="trace-12662"></a>
<a id="trace-12664"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12767"></a>
<a id="trace-12769"></a>
<a id="trace-12867"></a>
<a id="trace-12869"></a>
- 49.75s–55.25s (×24), actor 5, squad 0 (trace 11185): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 10758. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6629098301653693, 'next_transition': 11292}.
<a id="trace-798"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 798): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11363"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 11363): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.862432 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 11363. Next observer evidence: None.
<a id="trace-11364"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 11364): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.862432 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 11364. Next observer evidence: None.
<a id="trace-11375"></a>
- 50.90s–50.90s (×1), actor 8, squad 1 (trace 11375): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 11210. Next observer evidence: None.
<a id="trace-11376"></a>
- 50.90s–50.90s (×1), actor 8, squad 1 (trace 11376): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 11210. Next observer evidence: None.
<a id="trace-12184"></a>
- 50.95s–50.95s (×1), actor 8, squad 1 (trace 12184): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 50.00s, trace 11210. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.591178514367699, 'next_transition': 12449}.
<a id="trace-12449"></a>
- 52.75s–52.75s (×1), actor 8, squad 1 (trace 12449): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 11210. Next observer evidence: {'until': 56, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4216492145661626, 'next_transition': 13248}.
<a id="trace-12450"></a>
- 52.75s–52.75s (×1), actor 8, squad 1 (trace 12450): received platoon directive. Knowledge: actor memory at 50.00s, trace 11210. Next observer evidence: {'until': 56, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4216492145661626, 'next_transition': 13248}.
<a id="trace-12884"></a>
- 55.35s–55.35s (×1), actor 0, squad 0 (trace 12884): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 12784. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13269783592835124, 'next_transition': 13209}.
<a id="trace-13209"></a>
<a id="trace-13211"></a>
<a id="trace-13268"></a>
<a id="trace-13270"></a>
<a id="trace-13338"></a>
<a id="trace-13340"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
<a id="trace-13465"></a>
<a id="trace-13467"></a>
<a id="trace-13535"></a>
<a id="trace-13537"></a>
- 55.75s–58.25s (×12), actor 5, squad 0 (trace 13209): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12789. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16574463953815385, 'next_transition': 13268}.
<a id="trace-13248"></a>
- 56.10s–56.10s (×1), actor 8, squad 1 (trace 13248): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 12792. Next observer evidence: {'until': 57.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.64065704572277, 'next_transition': 13430}.
<a id="trace-13430"></a>
- 57.55s–57.55s (×1), actor 8, squad 1 (trace 13430): NeedSupport. Knowledge: actor memory at 55.00s, trace 12792. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.091145786238262, 'next_transition': 1044}.
<a id="trace-13554"></a>
- 58.40s–58.40s (×1), actor 0, squad 0 (trace 13554): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 12784. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13691}.
<a id="trace-13673"></a>
- 58.40s–58.40s (×1), actor 0, squad 0 (trace 13673): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 55.00s, trace 12784. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13691}.
<a id="trace-13691"></a>
<a id="trace-13693"></a>
- 58.75s–58.75s (×2), actor 5, squad 0 (trace 13691): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12789. Next observer evidence: {'until': 59, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13714}.
<a id="trace-13714"></a>
- 59.00s–59.00s (×1), actor 0, squad 0 (trace 13714): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 12784. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16124}.
<a id="trace-13715"></a>
- 59.00s–59.00s (×1), actor 0, squad 0 (trace 13715): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 12784. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16124}.
<a id="trace-16124"></a>
<a id="trace-16126"></a>
<a id="trace-16157"></a>
<a id="trace-16159"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16285"></a>
<a id="trace-16287"></a>
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16336"></a>
<a id="trace-16338"></a>
- 59.25s–61.75s (×12), actor 5, squad 0 (trace 16124): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12789. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07924275369079507, 'next_transition': 16157}.
<a id="trace-1044"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (events line 1044): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16143"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 16143): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.850989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 16143. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7372120971832998, 'next_transition': 16310}.
<a id="trace-16144"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 16144): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.850989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 16144. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7372120971832998, 'next_transition': 16310}.
<a id="trace-16310"></a>
- 61.20s–61.20s (×1), actor 8, squad 1 (trace 16310): received platoon directive; retain contact cover stage. Knowledge: actor memory at 60.00s, trace 16175. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3508849909318705, 'next_transition': 16402}.
<a id="trace-1089"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1089): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16363"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 16363): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.853853 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 16363. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07618125644164297, 'next_transition': 16388}.
<a id="trace-16364"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 16364): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.853853 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 16364. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07618125644164297, 'next_transition': 16388}.
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16405"></a>
<a id="trace-16407"></a>
<a id="trace-16456"></a>
<a id="trace-16458"></a>
<a id="trace-16491"></a>
<a id="trace-16493"></a>
<a id="trace-16533"></a>
<a id="trace-16535"></a>
<a id="trace-16575"></a>
<a id="trace-16577"></a>
<a id="trace-16675"></a>
<a id="trace-16677"></a>
- 62.25s–65.25s (×14), actor 5, squad 0 (trace 16388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 16364. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08986251255390086, 'next_transition': 16405}.
<a id="trace-16402"></a>
- 62.55s–62.55s (×1), actor 8, squad 1 (trace 16402): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 60.00s, trace 16175. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288226607434275, 'next_transition': 1214}.
<a id="trace-16702"></a>
- 65.65s–65.65s (×1), actor 0, squad 0 (trace 16702): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 16595. Next observer evidence: None.
<a id="trace-1214"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (events line 1214): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4650995481877762, 'next_transition': 18356}.
<a id="trace-16705"></a>
<a id="trace-16707"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
- 65.75s–66.25s (×4), actor 5, squad 0 (trace 16705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16599. Next observer evidence: {'until': 66.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2691303206971504, 'next_transition': 16727}.
<a id="trace-16714"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 16714): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.853022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 16714. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4650995481877762, 'next_transition': 18356}.
<a id="trace-16715"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 16715): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.853022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 16715. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4650995481877762, 'next_transition': 18356}.
<a id="trace-16737"></a>
- 66.40s–66.40s (×1), actor 0, squad 0 (trace 16737): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 16595. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749965236486138, 'next_transition': 18341}.
<a id="trace-16738"></a>
- 66.40s–66.40s (×1), actor 0, squad 0 (trace 16738): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 65.00s, trace 16595. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749965236486138, 'next_transition': 18341}.
<a id="trace-18341"></a>
<a id="trace-18343"></a>
<a id="trace-18362"></a>
<a id="trace-18364"></a>
<a id="trace-18371"></a>
<a id="trace-18373"></a>
<a id="trace-18394"></a>
<a id="trace-18396"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18437"></a>
<a id="trace-18439"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
- 66.75s–69.75s (×14), actor 5, squad 0 (trace 18341): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 16715. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.36757454138015117, 'next_transition': 18362}.
<a id="trace-18356"></a>
- 67.20s–67.20s (×1), actor 8, squad 1 (trace 18356): received platoon directive; retain held slots. Knowledge: actor memory at 65.00s, trace 16602. Next observer evidence: {'until': 71.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.28400462853286035, 'next_transition': 1388}.
<a id="trace-18487"></a>
- 70.15s–70.15s (×1), actor 1, squad 0 (trace 18487): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499999999999998, 'next_transition': 18539}.
<a id="trace-18539"></a>
<a id="trace-18541"></a>
- 70.25s–70.25s (×2), actor 5, squad 0 (trace 18539): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 18471. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499999999999998, 'next_transition': 18554}.
<a id="trace-18554"></a>
- 70.40s–70.40s (×1), actor 1, squad 0 (trace 18554): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05250000000000007, 'next_transition': 18939}.
<a id="trace-18559"></a>
- 70.40s–70.40s (×1), actor 1, squad 0 (trace 18559): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05250000000000007, 'next_transition': 18939}.
<a id="trace-18560"></a>
- 70.40s–70.40s (×1), actor 1, squad 0 (trace 18560): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05250000000000007, 'next_transition': 18939}.
<a id="trace-18939"></a>
<a id="trace-18941"></a>
<a id="trace-18961"></a>
<a id="trace-18963"></a>
<a id="trace-18991"></a>
<a id="trace-18993"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19182"></a>
<a id="trace-19184"></a>
<a id="trace-19196"></a>
<a id="trace-19198"></a>
- 70.75s–73.75s (×14), actor 5, squad 0 (trace 18939): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 18471. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026250000052910016, 'next_transition': 18961}.
<a id="trace-1388"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (events line 1388): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19026}.
<a id="trace-19001"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (trace 19001): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753819 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 19001. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19026}.
<a id="trace-19002"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (trace 19002): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.753819 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 19002. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19026}.
<a id="trace-19026"></a>
- 72.25s–72.25s (×1), actor 8, squad 1 (trace 19026): MoveTactically. Knowledge: actor memory at 70.00s, trace 18474. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536014098922644, 'next_transition': 19121}.
<a id="trace-19027"></a>
- 72.25s–72.25s (×1), actor 8, squad 1 (trace 19027): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 18474. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536014098922644, 'next_transition': 19121}.
<a id="trace-19121"></a>
- 73.20s–73.20s (×1), actor 8, squad 1 (trace 19121): received platoon directive. Knowledge: actor memory at 70.00s, trace 18474. Next observer evidence: {'until': 80.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.535119040237356, 'next_transition': 24728}.
<a id="trace-1440"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (events line 1440): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19217"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 19217): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.649554 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 19217. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07112999999999985, 'next_transition': 19224}.
<a id="trace-19218"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 19218): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.649554 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 19218. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07112999999999985, 'next_transition': 19224}.
<a id="trace-19224"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 19224): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-19226"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 19226): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-21577"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 21577): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-21578"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 21578): MoveTactically. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-21579"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 21579): contact cover complete: assessment resumes closure. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-21681"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 21681): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 70.00s, trace 18468. Next observer evidence: None.
<a id="trace-21691"></a>
<a id="trace-21693"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21794"></a>
<a id="trace-21796"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21845"></a>
<a id="trace-21847"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
- 74.25s–76.75s (×12), actor 5, squad 0 (trace 21691): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.15s, trace 19218. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039221666666666856, 'next_transition': 21708}.
<a id="trace-21892"></a>
- 76.85s–76.85s (×1), actor 1, squad 0 (trace 21892): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 21726. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24539767592005388, 'next_transition': 24281}.
<a id="trace-21893"></a>
- 76.85s–76.85s (×1), actor 1, squad 0 (trace 21893): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 21726. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24539767592005388, 'next_transition': 24281}.
<a id="trace-24281"></a>
<a id="trace-24283"></a>
<a id="trace-24325"></a>
<a id="trace-24327"></a>
<a id="trace-24380"></a>
<a id="trace-24382"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24482"></a>
<a id="trace-24484"></a>
<a id="trace-24529"></a>
<a id="trace-24531"></a>
<a id="trace-24655"></a>
<a id="trace-24657"></a>
<a id="trace-24708"></a>
<a id="trace-24710"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-25032"></a>
<a id="trace-25034"></a>
<a id="trace-25099"></a>
<a id="trace-25101"></a>
<a id="trace-25140"></a>
<a id="trace-25142"></a>
<a id="trace-25180"></a>
<a id="trace-25182"></a>
<a id="trace-25212"></a>
<a id="trace-25214"></a>
<a id="trace-25236"></a>
<a id="trace-25238"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
- 77.25s–84.75s (×32), actor 5, squad 0 (trace 24281): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 21729. Next observer evidence: {'until': 77.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1577549958112874, 'next_transition': 24325}.
<a id="trace-24728"></a>
- 80.90s–80.90s (×1), actor 8, squad 1 (trace 24728): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 24563. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6593343802654318, 'next_transition': 24893}.
<a id="trace-24729"></a>
<a id="trace-24893"></a>
- 80.90s–81.45s (×2), actor 8, squad 1 (trace 24729): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 24563. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6593343802654318, 'next_transition': 24893}.
<a id="trace-25280"></a>
- 85.10s–85.10s (×1), actor 1, squad 0 (trace 25280): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 25260. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22488837014949958, 'next_transition': 25337}.
<a id="trace-25281"></a>
- 85.10s–85.10s (×1), actor 1, squad 0 (trace 25281): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 85.00s, trace 25260. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22488837014949958, 'next_transition': 25337}.
<a id="trace-25282"></a>
- 85.10s–85.10s (×1), actor 1, squad 0 (trace 25282): Fixing. Knowledge: actor memory at 85.00s, trace 25260. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22488837014949958, 'next_transition': 25337}.
<a id="trace-25337"></a>
<a id="trace-25339"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25369"></a>
<a id="trace-25371"></a>
<a id="trace-25382"></a>
<a id="trace-25384"></a>
<a id="trace-25400"></a>
<a id="trace-25402"></a>
- 85.25s–87.25s (×10), actor 5, squad 0 (trace 25337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 25263. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2839033333333331, 'next_transition': 25351}.
<a id="trace-25389"></a>
- 86.95s–86.95s (×1), actor 9, squad 1 (trace 25389): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 25266. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1903}.
<a id="trace-25391"></a>
- 86.95s–86.95s (×1), actor 9, squad 1 (trace 25391): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 25266. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1903}.
<a id="trace-25410"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 25410): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.522153 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 25410. Next observer evidence: None.
<a id="trace-25411"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 25411): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.522153 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 25411. Next observer evidence: None.
<a id="trace-1809"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1809): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25415}.
<a id="trace-25415"></a>
<a id="trace-25417"></a>
<a id="trace-25434"></a>
<a id="trace-25436"></a>
<a id="trace-25444"></a>
<a id="trace-25446"></a>
<a id="trace-25466"></a>
<a id="trace-25468"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
- 87.75s–89.75s (×10), actor 5, squad 0 (trace 25415): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 25411. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25434}.
<a id="trace-25502"></a>
- 90.10s–90.10s (×1), actor 5, squad 0 (trace 25502): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 90.10s, trace 25502. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25553}.
<a id="trace-25553"></a>
<a id="trace-25555"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25585"></a>
<a id="trace-25587"></a>
<a id="trace-25597"></a>
<a id="trace-25599"></a>
<a id="trace-25664"></a>
<a id="trace-25666"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25694"></a>
<a id="trace-25696"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25732"></a>
<a id="trace-25734"></a>
<a id="trace-25750"></a>
<a id="trace-25752"></a>
<a id="trace-25825"></a>
<a id="trace-25827"></a>
<a id="trace-25852"></a>
<a id="trace-25854"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25884"></a>
<a id="trace-25886"></a>
<a id="trace-25898"></a>
<a id="trace-25900"></a>
<a id="trace-25915"></a>
<a id="trace-25917"></a>
<a id="trace-25929"></a>
<a id="trace-25931"></a>
<a id="trace-25947"></a>
<a id="trace-25949"></a>
<a id="trace-25962"></a>
<a id="trace-25964"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26050"></a>
<a id="trace-26052"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26086"></a>
<a id="trace-26088"></a>
<a id="trace-26108"></a>
<a id="trace-26110"></a>
<a id="trace-26122"></a>
<a id="trace-26124"></a>
<a id="trace-26143"></a>
<a id="trace-26145"></a>
<a id="trace-26159"></a>
<a id="trace-26161"></a>
<a id="trace-26181"></a>
<a id="trace-26183"></a>
<a id="trace-26197"></a>
<a id="trace-26199"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26290"></a>
<a id="trace-26292"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26322"></a>
<a id="trace-26324"></a>
<a id="trace-26337"></a>
<a id="trace-26339"></a>
<a id="trace-26348"></a>
<a id="trace-26350"></a>
<a id="trace-26362"></a>
<a id="trace-26364"></a>
<a id="trace-26378"></a>
<a id="trace-26380"></a>
<a id="trace-26400"></a>
<a id="trace-26402"></a>
<a id="trace-26413"></a>
<a id="trace-26415"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26505"></a>
<a id="trace-26507"></a>
<a id="trace-26519"></a>
<a id="trace-26521"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26556"></a>
<a id="trace-26558"></a>
<a id="trace-26571"></a>
<a id="trace-26573"></a>
<a id="trace-26592"></a>
<a id="trace-26594"></a>
<a id="trace-26610"></a>
<a id="trace-26612"></a>
<a id="trace-26629"></a>
<a id="trace-26631"></a>
<a id="trace-26648"></a>
<a id="trace-26650"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26736"></a>
<a id="trace-26738"></a>
<a id="trace-26761"></a>
<a id="trace-26763"></a>
<a id="trace-26775"></a>
<a id="trace-26777"></a>
<a id="trace-26800"></a>
<a id="trace-26802"></a>
<a id="trace-26824"></a>
<a id="trace-26826"></a>
<a id="trace-26847"></a>
<a id="trace-26849"></a>
<a id="trace-26861"></a>
<a id="trace-26863"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26893"></a>
<a id="trace-26895"></a>
<a id="trace-26963"></a>
<a id="trace-26965"></a>
<a id="trace-26974"></a>
<a id="trace-26976"></a>
<a id="trace-26985"></a>
<a id="trace-26987"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-27007"></a>
<a id="trace-27009"></a>
<a id="trace-27014"></a>
<a id="trace-27016"></a>
<a id="trace-27025"></a>
<a id="trace-27027"></a>
<a id="trace-27035"></a>
<a id="trace-27037"></a>
<a id="trace-27056"></a>
<a id="trace-27058"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27144"></a>
<a id="trace-27146"></a>
<a id="trace-27158"></a>
<a id="trace-27160"></a>
<a id="trace-27172"></a>
<a id="trace-27174"></a>
<a id="trace-27185"></a>
<a id="trace-27187"></a>
<a id="trace-27201"></a>
<a id="trace-27203"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27231"></a>
<a id="trace-27233"></a>
<a id="trace-27248"></a>
<a id="trace-27250"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27274"></a>
<a id="trace-27276"></a>
<a id="trace-27342"></a>
<a id="trace-27344"></a>
<a id="trace-27351"></a>
<a id="trace-27353"></a>
<a id="trace-27363"></a>
<a id="trace-27365"></a>
<a id="trace-27372"></a>
<a id="trace-27374"></a>
<a id="trace-27388"></a>
<a id="trace-27390"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27414"></a>
<a id="trace-27416"></a>
<a id="trace-27430"></a>
<a id="trace-27432"></a>
<a id="trace-27447"></a>
<a id="trace-27449"></a>
<a id="trace-27463"></a>
<a id="trace-27465"></a>
- 90.25s–134.80s (×178), actor 5, squad 0 (trace 25553): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.10s, trace 25502. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25566}.
<a id="trace-1903"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (events line 1903): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25573"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 25573): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.438292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 25573. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25605}.
<a id="trace-25574"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 25574): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.438292 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 25574. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25605}.
<a id="trace-25605"></a>
- 92.15s–92.15s (×1), actor 9, squad 1 (trace 25605): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 25493. Next observer evidence: {'until': 103, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924962801313555, 'next_transition': 26133}.
<a id="trace-25606"></a>
- 92.15s–92.15s (×1), actor 9, squad 1 (trace 25606): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 25493. Next observer evidence: {'until': 103, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924962801313555, 'next_transition': 26133}.
<a id="trace-26133"></a>
- 103.10s–103.10s (×1), actor 9, squad 1 (trace 26133): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 25977. Next observer evidence: {'until': 117.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26830}.
<a id="trace-26134"></a>
- 103.10s–103.10s (×1), actor 9, squad 1 (trace 26134): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 25977. Next observer evidence: {'until': 117.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26830}.
<a id="trace-26830"></a>
- 117.80s–117.80s (×1), actor 9, squad 1 (trace 26830): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 115.00s, trace 26663. Next observer evidence: {'until': 135, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2219}.
<a id="trace-27361"></a>
<a id="trace-27386"></a>
<a id="trace-27412"></a>
<a id="trace-27445"></a>
<a id="trace-27538"></a>
<a id="trace-27557"></a>
<a id="trace-27566"></a>
<a id="trace-27573"></a>
<a id="trace-27600"></a>
<a id="trace-27735"></a>
<a id="trace-28086"></a>
<a id="trace-28134"></a>
<a id="trace-28162"></a>
<a id="trace-28195"></a>
<a id="trace-28271"></a>
<a id="trace-28296"></a>
<a id="trace-28321"></a>
<a id="trace-28355"></a>
<a id="trace-28383"></a>
<a id="trace-28469"></a>
<a id="trace-28493"></a>
<a id="trace-28523"></a>
<a id="trace-28547"></a>
<a id="trace-28569"></a>
<a id="trace-28642"></a>
<a id="trace-28664"></a>
<a id="trace-28688"></a>
<a id="trace-28704"></a>
<a id="trace-28729"></a>
<a id="trace-28805"></a>
<a id="trace-29010"></a>
<a id="trace-29048"></a>
<a id="trace-29072"></a>
<a id="trace-29098"></a>
<a id="trace-29193"></a>
<a id="trace-29221"></a>
<a id="trace-29244"></a>
<a id="trace-29267"></a>
<a id="trace-29336"></a>
<a id="trace-29352"></a>
<a id="trace-29369"></a>
<a id="trace-29382"></a>
<a id="trace-29399"></a>
<a id="trace-29468"></a>
<a id="trace-29481"></a>
<a id="trace-29501"></a>
<a id="trace-29512"></a>
<a id="trace-29523"></a>
<a id="trace-29587"></a>
<a id="trace-29672"></a>
<a id="trace-29702"></a>
<a id="trace-29722"></a>
<a id="trace-29748"></a>
<a id="trace-29811"></a>
<a id="trace-29823"></a>
<a id="trace-29837"></a>
<a id="trace-29848"></a>
<a id="trace-29863"></a>
<a id="trace-29928"></a>
<a id="trace-29939"></a>
<a id="trace-29953"></a>
<a id="trace-29970"></a>
<a id="trace-29983"></a>
<a id="trace-30048"></a>
<a id="trace-30061"></a>
<a id="trace-30230"></a>
<a id="trace-30260"></a>
<a id="trace-30282"></a>
<a id="trace-30355"></a>
<a id="trace-30370"></a>
<a id="trace-30386"></a>
<a id="trace-30404"></a>
<a id="trace-30425"></a>
<a id="trace-30494"></a>
<a id="trace-30519"></a>
<a id="trace-30689"></a>
<a id="trace-30717"></a>
<a id="trace-30740"></a>
<a id="trace-30814"></a>
<a id="trace-30834"></a>
<a id="trace-30852"></a>
<a id="trace-30872"></a>
<a id="trace-30888"></a>
<a id="trace-30955"></a>
<a id="trace-30974"></a>
<a id="trace-30990"></a>
<a id="trace-31011"></a>
<a id="trace-31195"></a>
<a id="trace-31271"></a>
<a id="trace-31286"></a>
<a id="trace-31308"></a>
<a id="trace-31322"></a>
<a id="trace-31340"></a>
<a id="trace-31412"></a>
<a id="trace-31431"></a>
<a id="trace-31445"></a>
<a id="trace-31491"></a>
<a id="trace-31564"></a>
<a id="trace-31579"></a>
<a id="trace-31607"></a>
<a id="trace-31618"></a>
<a id="trace-31629"></a>
<a id="trace-31693"></a>
<a id="trace-31708"></a>
<a id="trace-31724"></a>
<a id="trace-31738"></a>
<a id="trace-31810"></a>
<a id="trace-31880"></a>
<a id="trace-31892"></a>
<a id="trace-31905"></a>
<a id="trace-31915"></a>
<a id="trace-31928"></a>
<a id="trace-31995"></a>
<a id="trace-32013"></a>
<a id="trace-32026"></a>
<a id="trace-32036"></a>
<a id="trace-32048"></a>
<a id="trace-32113"></a>
<a id="trace-32128"></a>
<a id="trace-32150"></a>
<a id="trace-32308"></a>
<a id="trace-32336"></a>
<a id="trace-32404"></a>
<a id="trace-32424"></a>
<a id="trace-32439"></a>
<a id="trace-32453"></a>
<a id="trace-32473"></a>
<a id="trace-32540"></a>
<a id="trace-32555"></a>
<a id="trace-32570"></a>
<a id="trace-32582"></a>
<a id="trace-32600"></a>
<a id="trace-32674"></a>
<a id="trace-32967"></a>
<a id="trace-32983"></a>
<a id="trace-33005"></a>
<a id="trace-33187"></a>
<a id="trace-33263"></a>
<a id="trace-33291"></a>
<a id="trace-33320"></a>
<a id="trace-33350"></a>
<a id="trace-33422"></a>
<a id="trace-33741"></a>
<a id="trace-33764"></a>
<a id="trace-33806"></a>
<a id="trace-33875"></a>
<a id="trace-33891"></a>
<a id="trace-33907"></a>
<a id="trace-35776"></a>
<a id="trace-35849"></a>
<a id="trace-35873"></a>
<a id="trace-35896"></a>
<a id="trace-35911"></a>
<a id="trace-35937"></a>
<a id="trace-36007"></a>
<a id="trace-36035"></a>
<a id="trace-36063"></a>
<a id="trace-36079"></a>
<a id="trace-36099"></a>
<a id="trace-36168"></a>
<a id="trace-36296"></a>
<a id="trace-36337"></a>
<a id="trace-36366"></a>
<a id="trace-36396"></a>
<a id="trace-36579"></a>
<a id="trace-36608"></a>
<a id="trace-36627"></a>
<a id="trace-36648"></a>
<a id="trace-36668"></a>
<a id="trace-36742"></a>
<a id="trace-36767"></a>
<a id="trace-36790"></a>
<a id="trace-37025"></a>
<a id="trace-37045"></a>
<a id="trace-37112"></a>
<a id="trace-37130"></a>
<a id="trace-37148"></a>
<a id="trace-37162"></a>
<a id="trace-37238"></a>
<a id="trace-37309"></a>
<a id="trace-37326"></a>
<a id="trace-37336"></a>
<a id="trace-37351"></a>
<a id="trace-37437"></a>
<a id="trace-37456"></a>
<a id="trace-37474"></a>
<a id="trace-37497"></a>
<a id="trace-37569"></a>
<a id="trace-37778"></a>
<a id="trace-37802"></a>
<a id="trace-37822"></a>
<a id="trace-37838"></a>
<a id="trace-37913"></a>
<a id="trace-37933"></a>
<a id="trace-37950"></a>
<a id="trace-37967"></a>
<a id="trace-37986"></a>
<a id="trace-38053"></a>
<a id="trace-38071"></a>
<a id="trace-38103"></a>
- 131.30s–338.30s (×200), actor 38, squad 4 (trace 27361): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 130.00s, trace 27290. Next observer evidence: {'until': 132.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2579939181918821, 'next_transition': 27386}.
<a id="trace-2218"></a>
- 135.10s–135.10s (×1), actor 5, squad 0 (events line 2218): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2219"></a>
- 135.10s–135.10s (×1), actor 5, squad 1 (events line 2219): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27482"></a>
- 135.10s–135.10s (×1), actor 5, squad 0 (trace 27482): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.10s, trace 27482. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560027933884325, 'next_transition': 27540}.
<a id="trace-27483"></a>
- 135.10s–135.10s (×1), actor 5, squad 0 (trace 27483): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.10s, trace 27483. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560027933884325, 'next_transition': 27540}.
<a id="trace-27484"></a>
- 135.10s–135.10s (×1), actor 5, squad 1 (trace 27484): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.10s, trace 27484. Next observer evidence: {'until': 138.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2231}.
<a id="trace-27485"></a>
- 135.10s–135.10s (×1), actor 5, squad 1 (trace 27485): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.10s, trace 27485. Next observer evidence: {'until': 138.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2231}.
<a id="trace-27540"></a>
<a id="trace-27542"></a>
- 135.30s–135.30s (×2), actor 5, squad 0 (trace 27540): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.10s, trace 27485. Next observer evidence: {'until': 138.4, 'shots': 6, 'casualties': 1, 'mean_displacement': 0.11340124824170915, 'next_transition': 2230}.
<a id="trace-2230"></a>
- 138.45s–138.45s (×1), actor 6, squad 0 (events line 2230): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 139.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.07229802509059305, 'next_transition': 27596}.
<a id="trace-2231"></a>
- 138.45s–138.45s (×1), actor 6, squad 1 (events line 2231): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27622}.
<a id="trace-27574"></a>
- 138.45s–138.45s (×1), actor 6, squad 0 (trace 27574): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.45s, trace 27574. Next observer evidence: {'until': 139.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.07229802509059305, 'next_transition': 27596}.
<a id="trace-27575"></a>
- 138.45s–138.45s (×1), actor 6, squad 1 (trace 27575): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.45s, trace 27575. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27622}.
<a id="trace-27596"></a>
<a id="trace-27598"></a>
<a id="trace-27731"></a>
<a id="trace-27733"></a>
- 139.30s–140.30s (×4), actor 6, squad 0 (trace 27596): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 138.45s, trace 27575. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26249113357216464, 'next_transition': 27731}.
<a id="trace-27622"></a>
- 140.10s–140.10s (×1), actor 9, squad 1 (trace 27622): Withdraw to received rally. Knowledge: actor memory at 140.00s, trace 27609. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 28483}.
<a id="trace-27623"></a>
- 140.10s–140.10s (×1), actor 9, squad 1 (trace 27623): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 27609. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 28483}.
<a id="trace-27755"></a>
- 140.70s–140.70s (×1), actor 1, squad 0 (trace 27755): Withdraw to received rally. Knowledge: actor memory at 140.00s, trace 27604. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.249961044324911, 'next_transition': 28082}.
<a id="trace-27756"></a>
- 140.70s–140.70s (×1), actor 1, squad 0 (trace 27756): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 27604. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.249961044324911, 'next_transition': 28082}.
<a id="trace-28082"></a>
<a id="trace-28084"></a>
<a id="trace-28130"></a>
<a id="trace-28132"></a>
- 141.30s–142.30s (×4), actor 6, squad 0 (trace 28082): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 140.00s, trace 27607. Next observer evidence: {'until': 142.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5038923060480542, 'next_transition': 28130}.
<a id="trace-2279"></a>
- 142.60s–142.60s (×1), actor 6, squad 0 (events line 2279): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28142"></a>
- 142.60s–142.60s (×1), actor 6, squad 0 (trace 28142): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526908 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.60s, trace 28142. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.826683183981535, 'next_transition': 28158}.
<a id="trace-28143"></a>
- 142.60s–142.60s (×1), actor 6, squad 0 (trace 28143): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526908 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.60s, trace 28143. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.826683183981535, 'next_transition': 28158}.
<a id="trace-28158"></a>
<a id="trace-28160"></a>
<a id="trace-28193"></a>
<a id="trace-28267"></a>
<a id="trace-28269"></a>
<a id="trace-28292"></a>
<a id="trace-28294"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28351"></a>
<a id="trace-28353"></a>
<a id="trace-28379"></a>
<a id="trace-28381"></a>
<a id="trace-28465"></a>
<a id="trace-28467"></a>
<a id="trace-28489"></a>
<a id="trace-28491"></a>
<a id="trace-28521"></a>
<a id="trace-28543"></a>
<a id="trace-28545"></a>
<a id="trace-28565"></a>
<a id="trace-28567"></a>
<a id="trace-28638"></a>
<a id="trace-28640"></a>
<a id="trace-28660"></a>
<a id="trace-28662"></a>
<a id="trace-28684"></a>
<a id="trace-28686"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28725"></a>
<a id="trace-28727"></a>
<a id="trace-28801"></a>
<a id="trace-28803"></a>
- 143.30s–160.30s (×34), actor 6, squad 0 (trace 28158): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 142.60s, trace 28143. Next observer evidence: {'until': 144.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4028412781614394, 'next_transition': 28193}.
<a id="trace-28483"></a>
- 151.10s–151.10s (×1), actor 9, squad 1 (trace 28483): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 28400. Next observer evidence: {'until': 174, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2428}.
<a id="trace-28484"></a>
- 151.10s–151.10s (×1), actor 9, squad 1 (trace 28484): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 28400. Next observer evidence: {'until': 174, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2428}.
<a id="trace-28817"></a>
- 160.65s–160.65s (×1), actor 1, squad 0 (trace 28817): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 28739. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2780262678021628, 'next_transition': 29006}.
<a id="trace-28839"></a>
- 160.65s–160.65s (×1), actor 1, squad 0 (trace 28839): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 28739. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2780262678021628, 'next_transition': 29006}.
<a id="trace-29006"></a>
<a id="trace-29008"></a>
<a id="trace-29044"></a>
<a id="trace-29046"></a>
<a id="trace-29068"></a>
<a id="trace-29070"></a>
<a id="trace-29096"></a>
<a id="trace-29171"></a>
<a id="trace-29173"></a>
<a id="trace-29189"></a>
<a id="trace-29191"></a>
<a id="trace-29217"></a>
<a id="trace-29219"></a>
<a id="trace-29240"></a>
<a id="trace-29242"></a>
<a id="trace-29263"></a>
<a id="trace-29265"></a>
<a id="trace-29332"></a>
<a id="trace-29334"></a>
- 161.30s–170.30s (×19), actor 6, squad 0 (trace 29006): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 160.00s, trace 28742. Next observer evidence: {'until': 162.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6338427422875638, 'next_transition': 29044}.
<a id="trace-2428"></a>
- 174.00s–174.00s (×1), actor 1, squad 1 (events line 2428): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2610}.
<a id="trace-29388"></a>
- 174.00s–174.00s (×1), actor 1, squad 0 (trace 29388): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 174.00s, trace 29388. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22682087220624175, 'next_transition': 29395}.
<a id="trace-29389"></a>
- 174.00s–174.00s (×1), actor 1, squad 1 (trace 29389): renew committed intent (75 s lifetime). Knowledge: actor memory at 174.00s, trace 29389. Next observer evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2610}.
<a id="trace-29395"></a>
<a id="trace-29397"></a>
<a id="trace-29464"></a>
<a id="trace-29466"></a>
<a id="trace-29477"></a>
<a id="trace-29479"></a>
- 174.30s–176.30s (×6), actor 1, squad 0 (trace 29395): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 174.00s, trace 29389. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339659836265743, 'next_transition': 29464}.
<a id="trace-2437"></a>
- 176.80s–176.80s (×1), actor 1, squad 0 (events line 2437): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679629714790342, 'next_transition': 29497}.
<a id="trace-29490"></a>
- 176.80s–176.80s (×1), actor 1, squad 0 (trace 29490): renew committed intent (75 s lifetime). Knowledge: actor memory at 176.80s, trace 29490. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679629714790342, 'next_transition': 29497}.
<a id="trace-29497"></a>
<a id="trace-29499"></a>
<a id="trace-29509"></a>
<a id="trace-29519"></a>
<a id="trace-29521"></a>
<a id="trace-29585"></a>
- 177.30s–180.30s (×6), actor 1, squad 0 (trace 29497): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 176.80s, trace 29490. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669907428697577, 'next_transition': 29509}.
<a id="trace-29594"></a>
- 181.05s–181.05s (×1), actor 1, squad 0 (trace 29594): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 29527. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339814857395161, 'next_transition': 29668}.
<a id="trace-29611"></a>
- 181.05s–181.05s (×1), actor 1, squad 0 (trace 29611): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 29527. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339814857395161, 'next_transition': 29668}.
<a id="trace-29668"></a>
<a id="trace-29670"></a>
<a id="trace-29698"></a>
<a id="trace-29700"></a>
<a id="trace-29718"></a>
<a id="trace-29720"></a>
<a id="trace-29744"></a>
<a id="trace-29746"></a>
<a id="trace-29807"></a>
<a id="trace-29809"></a>
<a id="trace-29819"></a>
<a id="trace-29821"></a>
<a id="trace-29833"></a>
<a id="trace-29835"></a>
<a id="trace-29846"></a>
<a id="trace-29859"></a>
<a id="trace-29861"></a>
<a id="trace-29924"></a>
<a id="trace-29926"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29949"></a>
<a id="trace-29951"></a>
<a id="trace-29966"></a>
<a id="trace-29968"></a>
<a id="trace-29979"></a>
<a id="trace-29981"></a>
<a id="trace-30044"></a>
<a id="trace-30046"></a>
<a id="trace-30057"></a>
<a id="trace-30059"></a>
- 181.30s–196.30s (×31), actor 1, squad 0 (trace 29668): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 180.00s, trace 29527. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46198620160012227, 'next_transition': 29698}.
<a id="trace-30065"></a>
- 196.65s–196.65s (×1), actor 1, squad 0 (trace 30065): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 29987. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30226}.
<a id="trace-30066"></a>
- 196.65s–196.65s (×1), actor 1, squad 0 (trace 30066): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 29987. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30226}.
<a id="trace-30226"></a>
<a id="trace-30228"></a>
<a id="trace-30256"></a>
<a id="trace-30258"></a>
<a id="trace-30278"></a>
<a id="trace-30280"></a>
<a id="trace-30351"></a>
<a id="trace-30353"></a>
<a id="trace-30366"></a>
<a id="trace-30368"></a>
<a id="trace-30382"></a>
<a id="trace-30384"></a>
<a id="trace-30400"></a>
<a id="trace-30402"></a>
<a id="trace-30421"></a>
<a id="trace-30423"></a>
<a id="trace-30490"></a>
<a id="trace-30492"></a>
- 197.30s–205.30s (×18), actor 1, squad 0 (trace 30226): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 195.00s, trace 29987. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6158311546042157, 'next_transition': 30256}.
<a id="trace-30500"></a>
- 205.60s–205.60s (×1), actor 1, squad 0 (trace 30500): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1529117254768382, 'next_transition': 30515}.
<a id="trace-30515"></a>
<a id="trace-30517"></a>
- 206.30s–206.30s (×2), actor 1, squad 0 (trace 30515): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 206.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7686161331644912, 'next_transition': 30531}.
<a id="trace-30531"></a>
- 206.60s–206.60s (×1), actor 1, squad 0 (trace 30531): MoveTactically. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3490113311068813, 'next_transition': 30685}.
<a id="trace-30532"></a>
- 206.60s–206.60s (×1), actor 1, squad 0 (trace 30532): traveling overwatch. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3490113311068813, 'next_transition': 30685}.
<a id="trace-30533"></a>
- 206.60s–206.60s (×1), actor 1, squad 0 (trace 30533): received platoon directive. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3490113311068813, 'next_transition': 30685}.
<a id="trace-30685"></a>
<a id="trace-30687"></a>
<a id="trace-30713"></a>
<a id="trace-30715"></a>
<a id="trace-30736"></a>
<a id="trace-30738"></a>
<a id="trace-30810"></a>
<a id="trace-30812"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30848"></a>
<a id="trace-30850"></a>
<a id="trace-30868"></a>
<a id="trace-30870"></a>
<a id="trace-30884"></a>
<a id="trace-30886"></a>
<a id="trace-30951"></a>
<a id="trace-30953"></a>
- 207.30s–215.30s (×18), actor 1, squad 0 (trace 30685): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 30433. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9130007353166278, 'next_transition': 30713}.
<a id="trace-2545"></a>
- 216.15s–216.15s (×1), actor 1, squad 0 (events line 2545): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30965"></a>
- 216.15s–216.15s (×1), actor 1, squad 0 (trace 30965): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.581905 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.15s, trace 30965. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3843163831117199, 'next_transition': 30970}.
<a id="trace-30966"></a>
- 216.15s–216.15s (×1), actor 1, squad 0 (trace 30966): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.581905 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.15s, trace 30966. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3843163831117199, 'next_transition': 30970}.
<a id="trace-30970"></a>
<a id="trace-30972"></a>
<a id="trace-30986"></a>
<a id="trace-30988"></a>
<a id="trace-31007"></a>
<a id="trace-31009"></a>
- 216.30s–218.30s (×6), actor 1, squad 0 (trace 30970): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 216.15s, trace 30966. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9214623931110113, 'next_transition': 30986}.
<a id="trace-31018"></a>
- 218.55s–218.55s (×1), actor 1, squad 0 (trace 31018): bounding overwatch. Knowledge: actor memory at 216.15s, trace 30966. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5371913117992158, 'next_transition': 31191}.
<a id="trace-31019"></a>
- 218.55s–218.55s (×1), actor 1, squad 0 (trace 31019): received platoon directive. Knowledge: actor memory at 216.15s, trace 30966. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5371913117992158, 'next_transition': 31191}.
<a id="trace-31191"></a>
<a id="trace-31193"></a>
<a id="trace-31267"></a>
<a id="trace-31269"></a>
<a id="trace-31282"></a>
<a id="trace-31284"></a>
<a id="trace-31304"></a>
<a id="trace-31306"></a>
<a id="trace-31318"></a>
<a id="trace-31320"></a>
<a id="trace-31337"></a>
<a id="trace-31408"></a>
<a id="trace-31410"></a>
<a id="trace-31427"></a>
<a id="trace-31429"></a>
<a id="trace-31441"></a>
<a id="trace-31443"></a>
<a id="trace-31451"></a>
<a id="trace-31453"></a>
- 219.30s–228.30s (×19), actor 1, squad 0 (trace 31191): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 216.15s, trace 30966. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4863022766575703, 'next_transition': 31267}.
<a id="trace-31456"></a>
- 228.45s–228.45s (×1), actor 1, squad 0 (trace 31456): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 225.00s, trace 31349. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31487}.
<a id="trace-31487"></a>
<a id="trace-31489"></a>
<a id="trace-31560"></a>
<a id="trace-31562"></a>
<a id="trace-31575"></a>
<a id="trace-31577"></a>
<a id="trace-31603"></a>
<a id="trace-31605"></a>
<a id="trace-31614"></a>
<a id="trace-31616"></a>
<a id="trace-31627"></a>
<a id="trace-31689"></a>
<a id="trace-31691"></a>
<a id="trace-31704"></a>
<a id="trace-31706"></a>
<a id="trace-31721"></a>
<a id="trace-31734"></a>
<a id="trace-31736"></a>
- 229.30s–238.30s (×18), actor 1, squad 0 (trace 31487): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 225.00s, trace 31349. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6953892660953713, 'next_transition': 31560}.
<a id="trace-2610"></a>
- 235.85s–235.85s (×1), actor 1, squad 1 (events line 2610): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31700"></a>
- 235.85s–235.85s (×1), actor 1, squad 1 (trace 31700): renew committed intent (75 s lifetime). Knowledge: actor memory at 235.85s, trace 31700. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2829}.
<a id="trace-31744"></a>
- 238.85s–238.85s (×1), actor 1, squad 0 (trace 31744): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 235.85s, trace 31700. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31806}.
<a id="trace-31806"></a>
<a id="trace-31808"></a>
<a id="trace-31876"></a>
<a id="trace-31878"></a>
<a id="trace-31888"></a>
<a id="trace-31890"></a>
<a id="trace-31901"></a>
<a id="trace-31903"></a>
<a id="trace-31911"></a>
<a id="trace-31913"></a>
<a id="trace-31925"></a>
<a id="trace-31991"></a>
<a id="trace-31993"></a>
<a id="trace-32009"></a>
<a id="trace-32011"></a>
<a id="trace-32024"></a>
<a id="trace-32032"></a>
<a id="trace-32034"></a>
<a id="trace-32044"></a>
<a id="trace-32046"></a>
<a id="trace-32109"></a>
<a id="trace-32111"></a>
<a id="trace-32124"></a>
<a id="trace-32126"></a>
- 239.30s–251.30s (×24), actor 1, squad 0 (trace 31806): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 235.85s, trace 31700. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25514792699530164, 'next_transition': 31876}.
<a id="trace-32135"></a>
- 251.85s–251.85s (×1), actor 1, squad 0 (trace 32135): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 250.00s, trace 32053. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32146}.
<a id="trace-32146"></a>
<a id="trace-32148"></a>
- 252.30s–252.30s (×2), actor 1, squad 0 (trace 32146): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 32053. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32156}.
<a id="trace-32156"></a>
- 252.85s–252.85s (×1), actor 1, squad 0 (trace 32156): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 32053. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32304}.
<a id="trace-32304"></a>
<a id="trace-32306"></a>
<a id="trace-32332"></a>
<a id="trace-32334"></a>
<a id="trace-32400"></a>
<a id="trace-32402"></a>
<a id="trace-32420"></a>
<a id="trace-32422"></a>
<a id="trace-32435"></a>
<a id="trace-32437"></a>
<a id="trace-32449"></a>
<a id="trace-32451"></a>
<a id="trace-32469"></a>
<a id="trace-32471"></a>
<a id="trace-32536"></a>
<a id="trace-32538"></a>
<a id="trace-32551"></a>
<a id="trace-32553"></a>
<a id="trace-32566"></a>
<a id="trace-32568"></a>
<a id="trace-32578"></a>
<a id="trace-32580"></a>
<a id="trace-32596"></a>
<a id="trace-32598"></a>
<a id="trace-32670"></a>
<a id="trace-32672"></a>
- 253.30s–265.30s (×26), actor 1, squad 0 (trace 32304): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 32053. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23152729680940518, 'next_transition': 32332}.
<a id="trace-32682"></a>
- 266.25s–266.25s (×1), actor 1, squad 0 (trace 32682): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 265.00s, trace 32611. Next observer evidence: None.
<a id="trace-32963"></a>
<a id="trace-32965"></a>
- 266.30s–266.30s (×2), actor 1, squad 0 (trace 32963): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 265.00s, trace 32611. Next observer evidence: {'until': 266.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2690}.
<a id="trace-2690"></a>
- 266.75s–266.75s (×1), actor 1, squad 0 (events line 2690): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32979}.
<a id="trace-32971"></a>
- 266.75s–266.75s (×1), actor 1, squad 0 (trace 32971): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 266.75s, trace 32971. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32979}.
<a id="trace-32972"></a>
- 266.75s–266.75s (×1), actor 1, squad 0 (trace 32972): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 266.75s, trace 32972. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32979}.
<a id="trace-32979"></a>
<a id="trace-32981"></a>
<a id="trace-33001"></a>
<a id="trace-33003"></a>
- 267.30s–268.30s (×4), actor 1, squad 0 (trace 32979): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 266.75s, trace 32972. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3844266152313185, 'next_transition': 33001}.
<a id="trace-33016"></a>
- 269.15s–269.15s (×1), actor 1, squad 0 (trace 33016): traveling overwatch. Knowledge: actor memory at 266.75s, trace 32972. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38429961145418834, 'next_transition': 33183}.
<a id="trace-33017"></a>
- 269.15s–269.15s (×1), actor 1, squad 0 (trace 33017): received platoon directive. Knowledge: actor memory at 266.75s, trace 32972. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38429961145418834, 'next_transition': 33183}.
<a id="trace-33183"></a>
<a id="trace-33185"></a>
<a id="trace-33259"></a>
<a id="trace-33261"></a>
<a id="trace-33287"></a>
<a id="trace-33289"></a>
<a id="trace-33316"></a>
<a id="trace-33318"></a>
<a id="trace-33330"></a>
<a id="trace-33332"></a>
<a id="trace-33346"></a>
<a id="trace-33348"></a>
- 269.30s–274.30s (×12), actor 1, squad 0 (trace 33183): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 266.75s, trace 32972. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7344522288637831, 'next_transition': 33259}.
<a id="trace-33370"></a>
- 275.15s–275.15s (×1), actor 1, squad 0 (trace 33370): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.730172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 275.15s, trace 33370. Next observer evidence: None.
<a id="trace-33371"></a>
- 275.15s–275.15s (×1), actor 1, squad 0 (trace 33371): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.730172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: None.
<a id="trace-2739"></a>
- 275.15s–275.15s (×1), actor 1, squad 0 (events line 2739): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30976438125644573, 'next_transition': 33418}.
<a id="trace-33418"></a>
<a id="trace-33420"></a>
- 275.30s–275.30s (×2), actor 1, squad 0 (trace 33418): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 276, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.022058708368682, 'next_transition': 33437}.
<a id="trace-33437"></a>
- 276.10s–276.10s (×1), actor 1, squad 0 (trace 33437): ReactToContact: cover and return fire. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 276.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30240157068870865, 'next_transition': 33737}.
<a id="trace-33438"></a>
- 276.10s–276.10s (×1), actor 1, squad 0 (trace 33438): bounding overwatch. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 276.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30240157068870865, 'next_transition': 33737}.
<a id="trace-33439"></a>
- 276.10s–276.10s (×1), actor 1, squad 0 (trace 33439): new contact inside 100 m. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 276.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30240157068870865, 'next_transition': 33737}.
<a id="trace-33737"></a>
<a id="trace-33739"></a>
<a id="trace-33760"></a>
<a id="trace-33762"></a>
- 276.30s–277.30s (×4), actor 1, squad 0 (trace 33737): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5120021094686062, 'next_transition': 33760}.
<a id="trace-33778"></a>
- 278.10s–278.10s (×1), actor 1, squad 0 (trace 33778): received platoon directive; retain contact cover stage. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023987140492899, 'next_transition': 33780}.
<a id="trace-33780"></a>
<a id="trace-33782"></a>
<a id="trace-33802"></a>
<a id="trace-33804"></a>
- 278.30s–279.30s (×4), actor 1, squad 0 (trace 33780): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.15s, trace 33371. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4667573595114558, 'next_transition': 33802}.
<a id="trace-33822"></a>
- 280.05s–280.05s (×1), actor 1, squad 0 (trace 33822): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511979937036204, 'next_transition': 33871}.
<a id="trace-33871"></a>
<a id="trace-33873"></a>
<a id="trace-33887"></a>
<a id="trace-33889"></a>
<a id="trace-33903"></a>
<a id="trace-33905"></a>
- 280.30s–282.30s (×6), actor 1, squad 0 (trace 33871): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07766645278940504, 'next_transition': 33887}.
<a id="trace-33909"></a>
- 282.45s–282.45s (×1), actor 1, squad 0 (trace 33909): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 283.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35750}.
<a id="trace-35685"></a>
- 282.45s–282.45s (×1), actor 1, squad 0 (trace 35685): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 283.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35750}.
<a id="trace-35686"></a>
- 282.45s–282.45s (×1), actor 1, squad 0 (trace 35686): MoveTactically. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 283.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35750}.
<a id="trace-35687"></a>
- 282.45s–282.45s (×1), actor 1, squad 0 (trace 35687): contact cover complete: assessment resumes closure. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 283.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35750}.
<a id="trace-35750"></a>
<a id="trace-35752"></a>
<a id="trace-35772"></a>
<a id="trace-35774"></a>
<a id="trace-35845"></a>
<a id="trace-35847"></a>
<a id="trace-35869"></a>
<a id="trace-35871"></a>
<a id="trace-35892"></a>
<a id="trace-35894"></a>
<a id="trace-35907"></a>
<a id="trace-35909"></a>
<a id="trace-35919"></a>
<a id="trace-35929"></a>
<a id="trace-35933"></a>
<a id="trace-35935"></a>
<a id="trace-35956"></a>
<a id="trace-36003"></a>
<a id="trace-36005"></a>
<a id="trace-36016"></a>
<a id="trace-36021"></a>
<a id="trace-36031"></a>
<a id="trace-36033"></a>
<a id="trace-36047"></a>
<a id="trace-36059"></a>
<a id="trace-36061"></a>
<a id="trace-36075"></a>
<a id="trace-36077"></a>
<a id="trace-36095"></a>
<a id="trace-36097"></a>
<a id="trace-36103"></a>
<a id="trace-36118"></a>
<a id="trace-36164"></a>
<a id="trace-36166"></a>
<a id="trace-36176"></a>
- 283.30s–295.55s (×35), actor 1, squad 0 (trace 35750): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 33811. Next observer evidence: {'until': 284.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0205791557400496, 'next_transition': 35772}.
<a id="trace-36180"></a>
- 295.65s–295.65s (×1), actor 1, squad 0 (trace 36180): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 295.00s, trace 36106. Next observer evidence: {'until': 296, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29078876139829696, 'next_transition': 36289}.
<a id="trace-36289"></a>
<a id="trace-36292"></a>
<a id="trace-36294"></a>
<a id="trace-36301"></a>
<a id="trace-36318"></a>
<a id="trace-36333"></a>
<a id="trace-36335"></a>
<a id="trace-36342"></a>
<a id="trace-36353"></a>
<a id="trace-36362"></a>
<a id="trace-36364"></a>
<a id="trace-36373"></a>
<a id="trace-36387"></a>
<a id="trace-36392"></a>
<a id="trace-36394"></a>
<a id="trace-36405"></a>
- 296.05s–299.55s (×16), actor 1, squad 0 (trace 36289): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 36106. Next observer evidence: {'until': 296.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1383587756522874, 'next_transition': 36292}.
<a id="trace-2829"></a>
- 297.55s–297.55s (×1), actor 1, squad 1 (events line 2829): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36343"></a>
<a id="trace-38745"></a>
- 297.55s–359.15s (×2), actor 1, squad 1 (trace 36343): renew committed intent (75 s lifetime). Knowledge: actor memory at 297.55s, trace 36343. Next observer evidence: {'until': 327.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38745}.
<a id="trace-36408"></a>
- 299.85s–299.85s (×1), actor 1, squad 0 (trace 36408): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 297.55s, trace 36343. Next observer evidence: {'until': 300, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36527}.
<a id="trace-36527"></a>
<a id="trace-36576"></a>
<a id="trace-36586"></a>
<a id="trace-36594"></a>
<a id="trace-36606"></a>
<a id="trace-36619"></a>
<a id="trace-36623"></a>
<a id="trace-36625"></a>
<a id="trace-36630"></a>
<a id="trace-36640"></a>
<a id="trace-36644"></a>
<a id="trace-36646"></a>
<a id="trace-36652"></a>
<a id="trace-36660"></a>
<a id="trace-36664"></a>
<a id="trace-36666"></a>
<a id="trace-36674"></a>
<a id="trace-36690"></a>
<a id="trace-36738"></a>
<a id="trace-36740"></a>
<a id="trace-36752"></a>
<a id="trace-36761"></a>
<a id="trace-36763"></a>
<a id="trace-36765"></a>
<a id="trace-36772"></a>
<a id="trace-36781"></a>
<a id="trace-36786"></a>
<a id="trace-36788"></a>
- 300.05s–307.30s (×28), actor 1, squad 0 (trace 36527): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 300.00s, trace 36513. Next observer evidence: {'until': 300.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36576}.
<a id="trace-36791"></a>
- 307.30s–307.30s (×1), actor 1, squad 0 (trace 36791): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 307.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268150903820113, 'next_transition': 36801}.
<a id="trace-36793"></a>
- 307.30s–307.30s (×1), actor 1, squad 0 (trace 36793): NeedSupport. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 307.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268150903820113, 'next_transition': 36801}.
<a id="trace-36801"></a>
- 307.55s–307.55s (×1), actor 1, squad 0 (trace 36801): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 308, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803988466517266, 'next_transition': 37018}.
<a id="trace-36802"></a>
- 307.55s–307.55s (×1), actor 1, squad 0 (trace 36802): Reorganise: completed/failed drill. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 308, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803988466517266, 'next_transition': 37018}.
<a id="trace-36805"></a>
- 307.55s–307.55s (×1), actor 1, squad 0 (trace 36805): MoveTactically. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 308, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803988466517266, 'next_transition': 37018}.
<a id="trace-36806"></a>
- 307.55s–307.55s (×1), actor 1, squad 0 (trace 36806): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 308, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803988466517266, 'next_transition': 37018}.
<a id="trace-37018"></a>
<a id="trace-37021"></a>
<a id="trace-37023"></a>
<a id="trace-37041"></a>
<a id="trace-37043"></a>
<a id="trace-37108"></a>
<a id="trace-37110"></a>
<a id="trace-37126"></a>
<a id="trace-37128"></a>
<a id="trace-37144"></a>
<a id="trace-37146"></a>
<a id="trace-37159"></a>
<a id="trace-37170"></a>
<a id="trace-37172"></a>
<a id="trace-37235"></a>
- 308.05s–315.30s (×15), actor 1, squad 0 (trace 37018): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 305.00s, trace 36679. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22681509038201203, 'next_transition': 37021}.
<a id="trace-37250"></a>
- 316.25s–316.25s (×1), actor 1, squad 0 (trace 37250): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 315.00s, trace 37182. Next observer evidence: None.
<a id="trace-37305"></a>
<a id="trace-37307"></a>
<a id="trace-37322"></a>
<a id="trace-37324"></a>
<a id="trace-37332"></a>
<a id="trace-37334"></a>
<a id="trace-37347"></a>
<a id="trace-37349"></a>
<a id="trace-37414"></a>
<a id="trace-37416"></a>
<a id="trace-37423"></a>
<a id="trace-37430"></a>
<a id="trace-37433"></a>
<a id="trace-37435"></a>
<a id="trace-37441"></a>
<a id="trace-37446"></a>
<a id="trace-37452"></a>
<a id="trace-37454"></a>
<a id="trace-37459"></a>
<a id="trace-37467"></a>
<a id="trace-37470"></a>
<a id="trace-37472"></a>
<a id="trace-37477"></a>
<a id="trace-37485"></a>
<a id="trace-37493"></a>
<a id="trace-37495"></a>
<a id="trace-37502"></a>
<a id="trace-37516"></a>
<a id="trace-37565"></a>
<a id="trace-37567"></a>
<a id="trace-37575"></a>
- 316.30s–325.55s (×31), actor 1, squad 0 (trace 37305): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 315.00s, trace 37182. Next observer evidence: {'until': 317.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.05670192236600092, 'next_transition': 37322}.
<a id="trace-37579"></a>
- 325.90s–325.90s (×1), actor 1, squad 0 (trace 37579): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 37507. Next observer evidence: {'until': 326, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1879019076539687, 'next_transition': 37772}.
<a id="trace-37580"></a>
- 325.90s–325.90s (×1), actor 1, squad 0 (trace 37580): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 325.00s, trace 37507. Next observer evidence: {'until': 326, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1879019076539687, 'next_transition': 37772}.
<a id="trace-37772"></a>
<a id="trace-37774"></a>
<a id="trace-37776"></a>
<a id="trace-37784"></a>
<a id="trace-37790"></a>
<a id="trace-37798"></a>
<a id="trace-37800"></a>
<a id="trace-37810"></a>
<a id="trace-37816"></a>
<a id="trace-37818"></a>
<a id="trace-37820"></a>
<a id="trace-37825"></a>
<a id="trace-37830"></a>
<a id="trace-37834"></a>
<a id="trace-37836"></a>
<a id="trace-37842"></a>
- 326.05s–329.55s (×16), actor 1, squad 0 (trace 37772): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 325.00s, trace 37507. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17920578785295954, 'next_transition': 37774}.
<a id="trace-37847"></a>
- 329.80s–329.80s (×1), actor 1, squad 0 (trace 37847): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 325.00s, trace 37507. Next observer evidence: {'until': 330, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1343241323255063, 'next_transition': 37861}.
<a id="trace-37861"></a>
<a id="trace-37909"></a>
<a id="trace-37911"></a>
<a id="trace-37919"></a>
<a id="trace-37925"></a>
<a id="trace-37929"></a>
<a id="trace-37931"></a>
<a id="trace-37938"></a>
<a id="trace-37942"></a>
<a id="trace-37946"></a>
<a id="trace-37948"></a>
<a id="trace-37954"></a>
<a id="trace-37958"></a>
- 330.05s–333.05s (×13), actor 1, squad 0 (trace 37861): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 330.00s, trace 37852. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1373806683088998, 'next_transition': 37909}.
<a id="trace-37959"></a>
- 333.05s–333.05s (×1), actor 1, squad 0 (trace 37959): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 330.00s, trace 37852. Next observer evidence: {'until': 333.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1832990786938106, 'next_transition': 37963}.
<a id="trace-37963"></a>
<a id="trace-37965"></a>
<a id="trace-37970"></a>
- 333.30s–333.55s (×3), actor 1, squad 0 (trace 37963): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 330.00s, trace 37852. Next observer evidence: {'until': 333.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18635432091851287, 'next_transition': 37970}.
<a id="trace-2948"></a>
- 333.95s–333.95s (×1), actor 1, squad 0 (events line 2948): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-37972"></a>
- 333.95s–333.95s (×1), actor 1, squad 0 (trace 37972): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 333.95s, trace 37972. Next observer evidence: {'until': 334, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19554160791248512, 'next_transition': 37978}.
<a id="trace-37973"></a>
- 333.95s–333.95s (×1), actor 1, squad 0 (trace 37973): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 333.95s, trace 37973. Next observer evidence: {'until': 334, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19554160791248512, 'next_transition': 37978}.
<a id="trace-37978"></a>
<a id="trace-37982"></a>
<a id="trace-37984"></a>
<a id="trace-37990"></a>
<a id="trace-38049"></a>
<a id="trace-38051"></a>
<a id="trace-38067"></a>
<a id="trace-38069"></a>
- 334.05s–336.30s (×8), actor 1, squad 0 (trace 37978): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 333.95s, trace 37973. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14849602452591115, 'next_transition': 37982}.
<a id="trace-38078"></a>
- 336.70s–336.70s (×1), actor 1, squad 0 (trace 38078): received platoon directive; retain held slots. Knowledge: actor memory at 335.00s, trace 37994. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38085}.
<a id="trace-38085"></a>
<a id="trace-38087"></a>
<a id="trace-38094"></a>
<a id="trace-38099"></a>
<a id="trace-38101"></a>
<a id="trace-38106"></a>
<a id="trace-38112"></a>
<a id="trace-38116"></a>
<a id="trace-38118"></a>
<a id="trace-38122"></a>
<a id="trace-38132"></a>
<a id="trace-38183"></a>
<a id="trace-38185"></a>
<a id="trace-38191"></a>
- 337.30s–340.55s (×14), actor 1, squad 0 (trace 38085): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 335.00s, trace 37994. Next observer evidence: {'until': 338, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38094}.
<a id="trace-38194"></a>
- 340.90s–340.90s (×1), actor 1, squad 0 (trace 38194): NeedSupport. Knowledge: actor memory at 340.00s, trace 38124. Next observer evidence: {'until': 341, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38203}.
<a id="trace-38203"></a>
<a id="trace-38206"></a>
<a id="trace-38208"></a>
<a id="trace-38213"></a>
<a id="trace-38220"></a>
<a id="trace-38224"></a>
<a id="trace-38226"></a>
- 341.05s–342.30s (×7), actor 1, squad 0 (trace 38203): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 340.00s, trace 38124. Next observer evidence: {'until': 341.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38206}.
<a id="trace-3134"></a>
- 342.35s–342.35s (×1), actor 1, squad 0 (events line 3134): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38227"></a>
- 342.35s–342.35s (×1), actor 1, squad 0 (trace 38227): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.534065 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.35s, trace 38227. Next observer evidence: {'until': 342.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38234}.
<a id="trace-38228"></a>
- 342.35s–342.35s (×1), actor 1, squad 0 (trace 38228): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.534065 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.35s, trace 38228. Next observer evidence: {'until': 342.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38234}.
<a id="trace-38234"></a>
<a id="trace-38238"></a>
<a id="trace-38242"></a>
<a id="trace-38244"></a>
<a id="trace-38247"></a>
<a id="trace-38253"></a>
<a id="trace-38258"></a>
<a id="trace-38260"></a>
<a id="trace-38266"></a>
- 342.55s–344.55s (×9), actor 1, squad 0 (trace 38234): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 342.35s, trace 38228. Next observer evidence: {'until': 343, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38238}.
<a id="trace-38262"></a>
<a id="trace-38326"></a>
<a id="trace-38346"></a>
<a id="trace-38362"></a>
<a id="trace-38380"></a>
<a id="trace-38400"></a>
<a id="trace-38519"></a>
<a id="trace-38596"></a>
<a id="trace-38614"></a>
<a id="trace-38625"></a>
<a id="trace-38640"></a>
<a id="trace-38699"></a>
<a id="trace-38715"></a>
<a id="trace-38730"></a>
<a id="trace-38739"></a>
<a id="trace-38754"></a>
- 344.30s–359.30s (×16), actor 39, squad 4 (trace 38262): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=39. Knowledge: actor memory at 340.00s, trace 38128. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38326}.
<a id="trace-38267"></a>
- 344.60s–344.60s (×1), actor 1, squad 0 (trace 38267): received platoon directive; retain held slots. Knowledge: actor memory at 342.35s, trace 38228. Next observer evidence: {'until': 345, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38275}.
<a id="trace-38275"></a>
<a id="trace-38322"></a>
<a id="trace-38324"></a>
<a id="trace-38332"></a>
<a id="trace-38339"></a>
<a id="trace-38342"></a>
<a id="trace-38344"></a>
<a id="trace-38354"></a>
<a id="trace-38358"></a>
<a id="trace-38360"></a>
<a id="trace-38366"></a>
- 345.05s–347.55s (×11), actor 1, squad 0 (trace 38275): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 345.00s, trace 38268. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38322}.
<a id="trace-3252"></a>
- 347.95s–347.95s (×1), actor 1, squad 0 (events line 3252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38368"></a>
- 347.95s–347.95s (×1), actor 1, squad 0 (trace 38368): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.543743 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.95s, trace 38368. Next observer evidence: {'until': 348, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38373}.
<a id="trace-38369"></a>
- 347.95s–347.95s (×1), actor 1, squad 0 (trace 38369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.543743 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.95s, trace 38369. Next observer evidence: {'until': 348, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38373}.
<a id="trace-38373"></a>
<a id="trace-38376"></a>
<a id="trace-38378"></a>
<a id="trace-38383"></a>
<a id="trace-38390"></a>
<a id="trace-38396"></a>
<a id="trace-38398"></a>
<a id="trace-38405"></a>
- 348.05s–349.55s (×8), actor 1, squad 0 (trace 38373): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 347.95s, trace 38369. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38376}.
<a id="trace-38407"></a>
- 349.95s–349.95s (×1), actor 1, squad 0 (trace 38407): MoveTactically. Knowledge: actor memory at 347.95s, trace 38369. Next observer evidence: {'until': 350, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38469}.
<a id="trace-38408"></a>
- 349.95s–349.95s (×1), actor 1, squad 0 (trace 38408): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 347.95s, trace 38369. Next observer evidence: {'until': 350, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38469}.
<a id="trace-38469"></a>
<a id="trace-38515"></a>
<a id="trace-38517"></a>
<a id="trace-38525"></a>
- 350.05s–350.55s (×4), actor 1, squad 0 (trace 38469): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 350.00s, trace 38462. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38515}.
<a id="trace-38532"></a>
- 350.95s–350.95s (×1), actor 1, squad 0 (trace 38532): received platoon directive. Knowledge: actor memory at 350.00s, trace 38462. Next observer evidence: {'until': 351, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17009888690111985, 'next_transition': 38590}.
<a id="trace-38590"></a>
<a id="trace-38592"></a>
<a id="trace-38594"></a>
<a id="trace-38600"></a>
<a id="trace-38608"></a>
<a id="trace-38611"></a>
<a id="trace-38621"></a>
<a id="trace-38623"></a>
<a id="trace-38636"></a>
<a id="trace-38638"></a>
<a id="trace-38695"></a>
<a id="trace-38697"></a>
<a id="trace-38711"></a>
<a id="trace-38713"></a>
<a id="trace-38726"></a>
<a id="trace-38728"></a>
<a id="trace-38735"></a>
<a id="trace-38737"></a>
<a id="trace-38750"></a>
<a id="trace-38752"></a>
- 351.05s–359.30s (×20), actor 1, squad 0 (trace 38590): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 350.00s, trace 38462. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680330823204517, 'next_transition': 38592}.
<a id="trace-3313"></a>
- 359.15s–359.15s (×1), actor 1, squad 1 (events line 3313): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

258 matched order/radio deliveries; 188 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.459s; maximum 2.150s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3392: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3393: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3394: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3395: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3396: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3399: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4367: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4368: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4369: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4370: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4371: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4373: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4374: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5814: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5815: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5816: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5817: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6732: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6737: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6738: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6740: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6742: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6743: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6744: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6745: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6746: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6747: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6748: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6749: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6750: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6751: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 10601: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10602: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10604: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10606: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10607: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10609: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10610: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10611: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10612: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10613: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10614: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10615: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10616: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10617: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10618: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10619: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10620: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 10757: estimate 9.43; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 10758: estimate 9.43; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11202: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11203: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11204: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11205: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11207: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11208: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11210: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11211: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11212: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11213: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11214: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11215: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11216: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11217: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11218: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11219: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11220: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11221: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 11363: estimate 9.28; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 11364: estimate 9.28; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 12784: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12785: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12786: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12787: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12789: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12790: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12792: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12793: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12794: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12795: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12796: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12797: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12798: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12799: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12800: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12801: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12802: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12803: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 16143: estimate 9.40; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 16144: estimate 9.40; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 16167: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 16168: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 16169: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 16170: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 16172: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16173: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 16174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 16175: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 16176: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 16177: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16178: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 16179: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 16180: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16181: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16182: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16183: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16184: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16185: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16186: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 16363: estimate 9.37; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 16364: estimate 9.37; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 16595: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 16596: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 16597: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 16598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16599: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16600: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 16602: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 16603: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16604: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16605: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16606: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 16607: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16608: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16609: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 16610: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16611: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16612: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 16714: estimate 9.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 16715: estimate 9.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 18468: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 18469: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 18470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 18471: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 18472: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 18473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 18474: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 18475: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 18476: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 18477: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 18478: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 18479: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 18480: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 18481: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 18482: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 18483: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 19001: estimate 9.29; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 19002: estimate 9.29; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 19217: estimate 9.24; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 19218: estimate 9.24; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 21726: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 21727: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 21728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 21729: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 21730: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 21731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 21732: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 21733: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 21734: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 21735: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 21736: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 21737: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 21738: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 21739: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 21740: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 21741: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 24557: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 24558: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 24559: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 24560: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 24561: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 24562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 24563: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 24564: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 24565: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 24566: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 24567: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 24568: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 24569: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 24570: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 24571: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 24572: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 25260: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 25261: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 25262: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 25263: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 25264: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 25265: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 25266: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 25267: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 25268: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 25269: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 25270: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 25271: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 25272: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 25273: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 25274: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 25410: estimate 11.49; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 25411: estimate 11.49; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 25487: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 25488: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 25489: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 25490: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 25491: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 25492: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 25493: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 25494: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 25495: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 25496: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 25497: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 25498: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 25499: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 25500: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 25501: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.10s leader 5, trace 25502: estimate 11.38; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 25573: estimate 11.41; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 25574: estimate 11.41; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 25761: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 25762: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 25763: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 25764: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 25765: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 25766: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 25767: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 25768: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 25769: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 25770: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 25771: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 25772: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 25773: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 25774: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 25775: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 25971: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 25972: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 25973: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 25974: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 25975: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 25976: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 25977: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 25978: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 25979: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 25980: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 25981: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 25982: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 25983: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 25984: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 25985: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 26212: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 26213: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 26214: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 26215: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 26216: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 26217: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 26218: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 26219: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 26220: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 26221: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 26222: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 26223: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 26224: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 26225: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 26226: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 26423: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 26424: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 26425: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 26426: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 26427: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 26428: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 26429: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 26430: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 26431: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 26432: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 26433: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 26434: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 26435: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 26436: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 26657: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 26658: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 26659: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 26660: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 26661: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 26662: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 26663: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 26664: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 26665: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 26666: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 26667: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 26668: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 26669: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 26902: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 26903: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 26904: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 26905: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 26906: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 26907: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 26908: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 26909: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 26910: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 26911: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 26912: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 26913: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 26914: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 27081: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 27082: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 27083: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 27084: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 27085: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 27086: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 27087: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 27088: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 27089: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 27090: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 27091: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 27092: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 27093: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 27280: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 27281: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 27282: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 27283: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 27284: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 27285: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 27286: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 27287: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 27288: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 27289: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 27290: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 27291: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 27469: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 27470: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 27471: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 27472: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 27473: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 27474: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 27475: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 27476: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 27477: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 27478: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 27479: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 27480: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.10s leader 5, trace 27482: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.10s leader 5, trace 27483: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.10s leader 5, trace 27484: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.10s leader 5, trace 27485: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.45s leader 6, trace 27574: estimate 10.23; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.45s leader 6, trace 27575: estimate 10.23; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 27604: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 27605: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 27606: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 27607: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 27608: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 27609: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 27610: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 27611: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 27612: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 27613: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 27614: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.60s leader 6, trace 28142: estimate 9.49; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.60s leader 6, trace 28143: estimate 9.49; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 28206: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 28207: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 28208: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 28209: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 28210: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 28211: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 28212: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 28213: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 28214: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 28215: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 28216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 28395: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 28396: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 28397: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 28398: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 28399: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 28400: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 28401: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 28402: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 28403: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 28404: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 28405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 28578: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 28579: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 28580: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 28581: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 28582: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 28583: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 28584: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 28585: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 28586: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 28587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 28739: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 28740: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 28741: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 28742: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 28743: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 28744: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 28745: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 28746: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 28747: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 28748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 29113: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 29114: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 29115: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 29116: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 29117: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 29118: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 29119: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 29120: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 29121: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 29122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 29275: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 29276: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 29277: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 29278: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 29279: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 29280: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 29281: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 29282: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 29283: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 29284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 174.00s leader 1, trace 29388: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 174.00s leader 1, trace 29389: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 29407: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 29408: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 29409: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 29410: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 29411: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 29412: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 29413: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 29414: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 29415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 176.80s leader 1, trace 29490: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 29527: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 29528: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 29529: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 29530: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 29531: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 29532: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 29533: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 29534: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 29535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 29751: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 29752: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 29753: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 29754: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 29755: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 29756: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 29757: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 29758: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 29759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 29868: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 29869: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 29870: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 29871: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 29872: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 29873: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 29874: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 29875: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 29876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 29987: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 29988: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 29989: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 29990: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 29991: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 29992: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 29993: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 29994: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 29995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 30296: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 30297: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 30298: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 30299: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 30300: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 30301: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 30302: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 30303: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 30304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 30433: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 30434: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 30435: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 30436: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 30437: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 30438: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 30439: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 30440: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 30441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 30754: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 30755: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 30756: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 30757: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 30758: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 30759: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 30760: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 30761: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 30762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 30896: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 30897: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 30898: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 30899: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 30900: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 30901: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 30902: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 30903: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 30904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.15s leader 1, trace 30965: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.15s leader 1, trace 30966: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 31212: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 31213: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 31214: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 31215: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 31216: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 31217: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 31218: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 31219: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 31220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 31349: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 31350: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 31351: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 31352: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 31353: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 31354: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 31355: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 31356: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 31357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 31505: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 31506: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 31507: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 31508: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 31509: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 31510: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 31511: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 31512: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 31513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 31634: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 31635: estimate 1.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 31636: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 31637: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 31638: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 31639: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 31640: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 31641: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 31642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.85s leader 1, trace 31700: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 31820: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 31821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 31822: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 31823: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 31824: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 31825: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 31826: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 31827: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 31828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 31935: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 31936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 31937: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 31938: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 31939: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 31940: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 31941: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 31942: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 31943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 32053: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 32054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 32055: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 32056: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 32057: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 32058: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 32059: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 32060: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 32061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 32343: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 32344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 32345: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 32346: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 32347: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 32348: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 32349: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 32350: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 32351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 32479: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 32480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 32481: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 32482: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 32483: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 32484: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 32485: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 32486: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 32487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 32611: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 32612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 32613: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 32614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 32615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 32616: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 32617: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 32618: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 32619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 266.75s leader 1, trace 32971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 266.75s leader 1, trace 32972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 33195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 33196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 33197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 33198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 33199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 33200: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 33201: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 33202: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 33203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 33357: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 33358: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 33359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 33360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 33361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 33362: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 33363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 33364: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 33365: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.15s leader 1, trace 33370: estimate 2.89; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.15s leader 1, trace 33371: estimate 2.89; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 33811: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 33812: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 33813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 33814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 33815: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 33816: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 33817: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 33818: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 35782: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 35783: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 35784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 35785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 35786: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 35787: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 35788: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 35789: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 35944: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 35945: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 35946: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 35947: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 35948: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 35949: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 35950: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 35951: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 36106: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 36107: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 36108: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 36109: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 36110: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 36111: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 36112: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 36113: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.55s leader 1, trace 36343: estimate 5.14; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 36513: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 36514: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 36515: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 36516: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 36517: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 36518: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 36519: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 36520: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 36679: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 36680: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 36681: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 36682: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 36683: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 36684: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 36685: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 36686: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 37052: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 37053: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 37054: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 37055: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 37056: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 37057: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 37058: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 37182: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 37183: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 37184: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 37185: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 37186: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 37187: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 37188: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 37358: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 37359: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 37360: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 37361: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 37362: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 37363: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 37364: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 37507: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 37508: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 37509: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 37510: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 37511: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 37512: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 37852: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 37853: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 37854: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 37855: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 37856: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 37857: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 333.95s leader 1, trace 37972: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 333.95s leader 1, trace 37973: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 37994: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 37995: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 37996: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 37997: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 37998: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 37999: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 38124: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 38125: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 38126: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 38127: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 38128: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.35s leader 1, trace 38227: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.35s leader 1, trace 38228: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 38268: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 38269: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 38270: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 38271: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.95s leader 1, trace 38368: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.95s leader 1, trace 38369: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 38462: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 38463: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 38464: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 38465: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 38645: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 38646: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 38647: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 38648: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 359.15s leader 1, trace 38745: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 38758: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 38759: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 38760: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 38761: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Orin incapacitated
- 1: Soren incapacitated
- 1: Vale killed in action
- 1: Quill incapacitated
- 1: Bren incapacitated
- 1: Renn incapacitated
- 1: Voss killed in action
- 1: Lark killed in action
- 1: Iven killed in action
- 1: Flint incapacitated
- 1: Moss killed in action
- 1: Ash killed in action
- 1: Reed incapacitated
- 1: Bram killed in action
- 1: Kest killed in action
- 1: Holt incapacitated

## Outcome attribution

- 135.10s, evidence 2218: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 135.10s, evidence 2219: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 135.10s, evidence 27482: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560027933884325, 'next_transition': 27540}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 135.10s, evidence 27483: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560027933884325, 'next_transition': 27540}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 135.10s, evidence 27484: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2231}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 135.10s, evidence 27485: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.483491 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2231}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 138.45s, evidence 2230: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 139.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.07229802509059305, 'next_transition': 27596}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 138.45s, evidence 2231: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27622}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 174.00s, evidence 2428: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2610}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 235.85s, evidence 2610: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 297.55s, evidence 2829: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 359.15s, evidence 3313: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
