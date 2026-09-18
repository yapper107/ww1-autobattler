# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/107/good-azure/battle-107-1789673811215497740`

## Battle summary

**Ember** · 360 s · 236 shots.

### Turning points

- 29.7s, squad 4: contact (events line 278). First recorded contact.
- 41.7s, squad 0: withdrawal ([trace 5901](#trace-5901)). 87.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 52.5s, squad 0: help call ([trace 8925](#trace-8925)). 54.0s, squad 1: answered a neighbour with support by fire.
- 54.0s, squad 1: help answer ([trace 9274](#trace-9274)). 58.6s, squad 1: took cover and returned fire.
- 71.7s, squad 1: help call ([trace 11709](#trace-11709)). 88.2s, squad 0: answered a neighbour with support by fire.
- 88.2s, squad 0: help answer ([trace 12912](#trace-12912)). 111.2s, squad 0: advanced tactically.
- 116.0s, squad 0: withdrawal ([trace 16838](#trace-16838)). 123.5s, squad 0: advanced tactically.
- 123.2s, squad 0: help call ([trace 17548](#trace-17548)). No completion observed before termination.
- 127.5s, squad 0: help call ([trace 18134](#trace-18134)). No completion observed before termination.
- 165.4s, squad 0: withdrawal ([trace 19982](#trace-19982)). 237.7s, squad 0: advanced tactically.

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 9 shots, 3/8 lost.
- **1** — FightHere; chose took cover and returned fire, answered a neighbour with support by fire and 1 further drill types; no completed objective recorded; 4 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 182 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 41 shots, 0/2 lost.

### Decisions and attribution

At 57.1s, squad 1 chose FightHere: nearest known group ([trace 10453](#trace-10453)), followed by 1 shots and 0 own casualties; estimate 12.3 against 9 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889323815519, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 827}.

### Communication

262 matched deliveries (mean 0.37s, max 2.25s); 509 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 29.70s, squad 4, contact, evidence events line 278: First recorded contact; .
- 41.70s, squad 0, withdrawal, evidence 5901: BreakContact: believed ratio at least two without superiority; 87.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 52.50s, squad 0, help call, evidence 8925: NeedSupport; 54.0s, squad 1: answered a neighbour with support by fire.
- 53.95s, squad 1, help answer, evidence 9274: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 58.6s, squad 1: took cover and returned fire.
- 71.65s, squad 1, help call, evidence 11709: NeedSupport; 88.2s, squad 0: answered a neighbour with support by fire.
- 88.25s, squad 0, help answer, evidence 12912: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 111.2s, squad 0: advanced tactically.
- 116.05s, squad 0, withdrawal, evidence 16838: BreakContact: believed ratio at least two without superiority; 123.5s, squad 0: advanced tactically.
- 123.25s, squad 0, help call, evidence 17548: NeedSupport; No completion observed before termination.
- 127.55s, squad 0, help call, evidence 18134: NeedSupport; No completion observed before termination.
- 165.45s, squad 0, withdrawal, evidence 19982: Withdraw to received rally; 237.7s, squad 0: advanced tactically.

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
<a id="trace-983"></a>
<a id="trace-985"></a>
<a id="trace-1016"></a>
<a id="trace-1018"></a>
<a id="trace-1046"></a>
<a id="trace-1048"></a>
<a id="trace-1075"></a>
<a id="trace-1077"></a>
<a id="trace-1106"></a>
<a id="trace-1108"></a>
<a id="trace-1134"></a>
<a id="trace-1136"></a>
<a id="trace-1165"></a>
<a id="trace-1167"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1274"></a>
<a id="trace-1276"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1313"></a>
<a id="trace-1315"></a>
<a id="trace-1335"></a>
<a id="trace-1337"></a>
<a id="trace-1365"></a>
<a id="trace-1367"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450017924359778, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1784}.
<a id="trace-953"></a>
<a id="trace-987"></a>
<a id="trace-1020"></a>
<a id="trace-1022"></a>
<a id="trace-1110"></a>
<a id="trace-1112"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1185"></a>
<a id="trace-1187"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
<a id="trace-1317"></a>
<a id="trace-1319"></a>
<a id="trace-1369"></a>
<a id="trace-1371"></a>
<a id="trace-1778"></a>
<a id="trace-1780"></a>
<a id="trace-1847"></a>
<a id="trace-1849"></a>
<a id="trace-1978"></a>
<a id="trace-1980"></a>
<a id="trace-2067"></a>
<a id="trace-2069"></a>
<a id="trace-2086"></a>
<a id="trace-2088"></a>
<a id="trace-2117"></a>
<a id="trace-2119"></a>
<a id="trace-2141"></a>
<a id="trace-2143"></a>
<a id="trace-2186"></a>
<a id="trace-2188"></a>
<a id="trace-2281"></a>
<a id="trace-2283"></a>
<a id="trace-2309"></a>
<a id="trace-2311"></a>
<a id="trace-2368"></a>
<a id="trace-2370"></a>
<a id="trace-2400"></a>
<a id="trace-2402"></a>
<a id="trace-2461"></a>
<a id="trace-2463"></a>
<a id="trace-2494"></a>
<a id="trace-2496"></a>
<a id="trace-2835"></a>
<a id="trace-2837"></a>
<a id="trace-2861"></a>
<a id="trace-2863"></a>
<a id="trace-2890"></a>
<a id="trace-2892"></a>
<a id="trace-2979"></a>
<a id="trace-2981"></a>
<a id="trace-2993"></a>
<a id="trace-2995"></a>
<a id="trace-3077"></a>
<a id="trace-3079"></a>
<a id="trace-3093"></a>
<a id="trace-3095"></a>
<a id="trace-3225"></a>
<a id="trace-3227"></a>
<a id="trace-3250"></a>
<a id="trace-3252"></a>
<a id="trace-3266"></a>
<a id="trace-3268"></a>
<a id="trace-3291"></a>
<a id="trace-3293"></a>
<a id="trace-3394"></a>
<a id="trace-3396"></a>
<a id="trace-3419"></a>
<a id="trace-3421"></a>
<a id="trace-3482"></a>
<a id="trace-3484"></a>
<a id="trace-3498"></a>
<a id="trace-3500"></a>
<a id="trace-3523"></a>
<a id="trace-3525"></a>
<a id="trace-3547"></a>
<a id="trace-3549"></a>
<a id="trace-3723"></a>
<a id="trace-3725"></a>
<a id="trace-3746"></a>
<a id="trace-3748"></a>
<a id="trace-3780"></a>
<a id="trace-3782"></a>
<a id="trace-3902"></a>
<a id="trace-3904"></a>
<a id="trace-3926"></a>
<a id="trace-3928"></a>
<a id="trace-4385"></a>
<a id="trace-4387"></a>
<a id="trace-4839"></a>
<a id="trace-4841"></a>
<a id="trace-5342"></a>
<a id="trace-5344"></a>
<a id="trace-5383"></a>
<a id="trace-5385"></a>
<a id="trace-5430"></a>
<a id="trace-5432"></a>
<a id="trace-5592"></a>
<a id="trace-5594"></a>
<a id="trace-5868"></a>
<a id="trace-5870"></a>
<a id="trace-6404"></a>
<a id="trace-6406"></a>
<a id="trace-6443"></a>
<a id="trace-6445"></a>
<a id="trace-6494"></a>
<a id="trace-6496"></a>
<a id="trace-6559"></a>
<a id="trace-6561"></a>
<a id="trace-6602"></a>
<a id="trace-6604"></a>
<a id="trace-6675"></a>
<a id="trace-6677"></a>
<a id="trace-6872"></a>
<a id="trace-6874"></a>
<a id="trace-6935"></a>
<a id="trace-6937"></a>
<a id="trace-6980"></a>
<a id="trace-6982"></a>
<a id="trace-7034"></a>
<a id="trace-7036"></a>
<a id="trace-7112"></a>
<a id="trace-7114"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7294"></a>
<a id="trace-7296"></a>
<a id="trace-7352"></a>
<a id="trace-7354"></a>
<a id="trace-8255"></a>
<a id="trace-8257"></a>
<a id="trace-8301"></a>
<a id="trace-8303"></a>
<a id="trace-8830"></a>
<a id="trace-8832"></a>
<a id="trace-8872"></a>
<a id="trace-8874"></a>
<a id="trace-8904"></a>
<a id="trace-8906"></a>
<a id="trace-8953"></a>
<a id="trace-8955"></a>
<a id="trace-8992"></a>
<a id="trace-8994"></a>
<a id="trace-9266"></a>
<a id="trace-9268"></a>
<a id="trace-10253"></a>
<a id="trace-10255"></a>
<a id="trace-10357"></a>
<a id="trace-10359"></a>
<a id="trace-10381"></a>
<a id="trace-10383"></a>
<a id="trace-10443"></a>
<a id="trace-10445"></a>
<a id="trace-10466"></a>
<a id="trace-10468"></a>
<a id="trace-10480"></a>
<a id="trace-10482"></a>
<a id="trace-10769"></a>
<a id="trace-10771"></a>
<a id="trace-10794"></a>
<a id="trace-10796"></a>
<a id="trace-10924"></a>
<a id="trace-10926"></a>
<a id="trace-11094"></a>
<a id="trace-11096"></a>
<a id="trace-11123"></a>
<a id="trace-11125"></a>
<a id="trace-11161"></a>
<a id="trace-11163"></a>
<a id="trace-11211"></a>
<a id="trace-11213"></a>
<a id="trace-11235"></a>
<a id="trace-11237"></a>
<a id="trace-11247"></a>
<a id="trace-11249"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11375"></a>
<a id="trace-11377"></a>
<a id="trace-11394"></a>
<a id="trace-11396"></a>
<a id="trace-11425"></a>
<a id="trace-11427"></a>
<a id="trace-11438"></a>
<a id="trace-11440"></a>
<a id="trace-11459"></a>
<a id="trace-11461"></a>
<a id="trace-11471"></a>
<a id="trace-11473"></a>
<a id="trace-11528"></a>
<a id="trace-11530"></a>
<a id="trace-11555"></a>
<a id="trace-11557"></a>
<a id="trace-11575"></a>
<a id="trace-11577"></a>
<a id="trace-11665"></a>
<a id="trace-11667"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11700"></a>
<a id="trace-11702"></a>
<a id="trace-11722"></a>
<a id="trace-11724"></a>
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11756"></a>
<a id="trace-11758"></a>
<a id="trace-11948"></a>
<a id="trace-11950"></a>
<a id="trace-11974"></a>
<a id="trace-11976"></a>
<a id="trace-11995"></a>
<a id="trace-11997"></a>
<a id="trace-12094"></a>
<a id="trace-12096"></a>
<a id="trace-12109"></a>
<a id="trace-12111"></a>
<a id="trace-12164"></a>
<a id="trace-12166"></a>
<a id="trace-12196"></a>
<a id="trace-12198"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12249"></a>
<a id="trace-12251"></a>
<a id="trace-12280"></a>
<a id="trace-12282"></a>
<a id="trace-12416"></a>
<a id="trace-12418"></a>
<a id="trace-12442"></a>
<a id="trace-12444"></a>
<a id="trace-12456"></a>
<a id="trace-12458"></a>
<a id="trace-12481"></a>
<a id="trace-12483"></a>
<a id="trace-12498"></a>
<a id="trace-12500"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12644"></a>
<a id="trace-12646"></a>
<a id="trace-12662"></a>
<a id="trace-12664"></a>
<a id="trace-12796"></a>
<a id="trace-12798"></a>
<a id="trace-12811"></a>
<a id="trace-12813"></a>
<a id="trace-12851"></a>
<a id="trace-12853"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
<a id="trace-14623"></a>
<a id="trace-14625"></a>
<a id="trace-14753"></a>
<a id="trace-14755"></a>
<a id="trace-14789"></a>
<a id="trace-14791"></a>
<a id="trace-14801"></a>
<a id="trace-14803"></a>
<a id="trace-14823"></a>
<a id="trace-14825"></a>
<a id="trace-14833"></a>
<a id="trace-14835"></a>
<a id="trace-14851"></a>
<a id="trace-14853"></a>
<a id="trace-14864"></a>
<a id="trace-14866"></a>
<a id="trace-14883"></a>
<a id="trace-14885"></a>
<a id="trace-14893"></a>
<a id="trace-14895"></a>
<a id="trace-14979"></a>
<a id="trace-14981"></a>
<a id="trace-14996"></a>
<a id="trace-14998"></a>
<a id="trace-15010"></a>
<a id="trace-15012"></a>
<a id="trace-15031"></a>
<a id="trace-15033"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15059"></a>
<a id="trace-15061"></a>
<a id="trace-15076"></a>
<a id="trace-15078"></a>
<a id="trace-15143"></a>
<a id="trace-15145"></a>
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
<a id="trace-15313"></a>
<a id="trace-15315"></a>
<a id="trace-15453"></a>
<a id="trace-15455"></a>
<a id="trace-15474"></a>
<a id="trace-15476"></a>
<a id="trace-15496"></a>
<a id="trace-15498"></a>
<a id="trace-15738"></a>
<a id="trace-15740"></a>
<a id="trace-15757"></a>
<a id="trace-15759"></a>
<a id="trace-15774"></a>
<a id="trace-15776"></a>
<a id="trace-15790"></a>
<a id="trace-15792"></a>
<a id="trace-15807"></a>
<a id="trace-15809"></a>
<a id="trace-15843"></a>
<a id="trace-15845"></a>
<a id="trace-15868"></a>
<a id="trace-15870"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-16337"></a>
<a id="trace-16339"></a>
<a id="trace-16370"></a>
<a id="trace-16372"></a>
<a id="trace-16639"></a>
<a id="trace-16641"></a>
<a id="trace-16665"></a>
<a id="trace-16667"></a>
<a id="trace-16694"></a>
<a id="trace-16696"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-17216"></a>
<a id="trace-17218"></a>
<a id="trace-17249"></a>
<a id="trace-17251"></a>
<a id="trace-17264"></a>
<a id="trace-17266"></a>
<a id="trace-17288"></a>
<a id="trace-17290"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17327"></a>
<a id="trace-17329"></a>
<a id="trace-17341"></a>
<a id="trace-17343"></a>
<a id="trace-17422"></a>
<a id="trace-17424"></a>
<a id="trace-17435"></a>
<a id="trace-17437"></a>
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17523"></a>
<a id="trace-17525"></a>
<a id="trace-17543"></a>
<a id="trace-17545"></a>
<a id="trace-17702"></a>
<a id="trace-17704"></a>
<a id="trace-17853"></a>
<a id="trace-17855"></a>
<a id="trace-17888"></a>
<a id="trace-17890"></a>
<a id="trace-18034"></a>
<a id="trace-18036"></a>
<a id="trace-18053"></a>
<a id="trace-18055"></a>
<a id="trace-18085"></a>
<a id="trace-18087"></a>
<a id="trace-18105"></a>
<a id="trace-18107"></a>
<a id="trace-18125"></a>
<a id="trace-18127"></a>
<a id="trace-18160"></a>
<a id="trace-18162"></a>
<a id="trace-18198"></a>
<a id="trace-18200"></a>
<a id="trace-18211"></a>
<a id="trace-18213"></a>
<a id="trace-18288"></a>
<a id="trace-18290"></a>
<a id="trace-18296"></a>
<a id="trace-18298"></a>
<a id="trace-18315"></a>
<a id="trace-18317"></a>
<a id="trace-18323"></a>
<a id="trace-18325"></a>
<a id="trace-18343"></a>
<a id="trace-18345"></a>
<a id="trace-18358"></a>
<a id="trace-18360"></a>
<a id="trace-18371"></a>
<a id="trace-18373"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
<a id="trace-18395"></a>
<a id="trace-18397"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18639"></a>
<a id="trace-18641"></a>
<a id="trace-18646"></a>
<a id="trace-18648"></a>
<a id="trace-18696"></a>
<a id="trace-18698"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-18948"></a>
<a id="trace-18950"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18976"></a>
<a id="trace-18978"></a>
<a id="trace-19004"></a>
<a id="trace-19006"></a>
<a id="trace-19021"></a>
<a id="trace-19023"></a>
<a id="trace-19094"></a>
<a id="trace-19096"></a>
<a id="trace-19103"></a>
<a id="trace-19105"></a>
<a id="trace-19122"></a>
<a id="trace-19124"></a>
<a id="trace-19133"></a>
<a id="trace-19135"></a>
<a id="trace-19145"></a>
<a id="trace-19147"></a>
<a id="trace-19171"></a>
<a id="trace-19173"></a>
<a id="trace-19189"></a>
<a id="trace-19191"></a>
<a id="trace-19202"></a>
<a id="trace-19204"></a>
<a id="trace-19213"></a>
<a id="trace-19215"></a>
<a id="trace-19290"></a>
<a id="trace-19292"></a>
<a id="trace-19335"></a>
<a id="trace-19337"></a>
<a id="trace-19347"></a>
<a id="trace-19349"></a>
<a id="trace-19364"></a>
<a id="trace-19366"></a>
<a id="trace-19381"></a>
<a id="trace-19383"></a>
<a id="trace-19397"></a>
<a id="trace-19399"></a>
<a id="trace-19424"></a>
<a id="trace-19426"></a>
<a id="trace-19500"></a>
<a id="trace-19502"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19588"></a>
<a id="trace-19590"></a>
<a id="trace-19598"></a>
<a id="trace-19600"></a>
<a id="trace-19618"></a>
<a id="trace-19620"></a>
<a id="trace-19632"></a>
<a id="trace-19634"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19667"></a>
<a id="trace-19669"></a>
<a id="trace-19679"></a>
<a id="trace-19681"></a>
<a id="trace-19764"></a>
<a id="trace-19766"></a>
<a id="trace-19779"></a>
<a id="trace-19781"></a>
<a id="trace-19790"></a>
<a id="trace-19792"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19815"></a>
<a id="trace-19817"></a>
<a id="trace-19824"></a>
<a id="trace-19826"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19853"></a>
<a id="trace-19855"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19904"></a>
<a id="trace-19906"></a>
<a id="trace-19979"></a>
<a id="trace-19981"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20084"></a>
<a id="trace-20086"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20124"></a>
<a id="trace-20126"></a>
<a id="trace-20137"></a>
<a id="trace-20139"></a>
<a id="trace-20147"></a>
<a id="trace-20149"></a>
<a id="trace-20162"></a>
<a id="trace-20164"></a>
<a id="trace-20238"></a>
<a id="trace-20240"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20274"></a>
<a id="trace-20276"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20308"></a>
<a id="trace-20310"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20340"></a>
<a id="trace-20342"></a>
<a id="trace-20358"></a>
<a id="trace-20360"></a>
<a id="trace-20368"></a>
<a id="trace-20370"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20465"></a>
<a id="trace-20467"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20499"></a>
<a id="trace-20501"></a>
<a id="trace-20519"></a>
<a id="trace-20521"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20570"></a>
<a id="trace-20572"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20647"></a>
<a id="trace-20649"></a>
<a id="trace-20656"></a>
<a id="trace-20658"></a>
<a id="trace-20674"></a>
<a id="trace-20676"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20696"></a>
<a id="trace-20698"></a>
<a id="trace-20706"></a>
<a id="trace-20708"></a>
<a id="trace-20728"></a>
<a id="trace-20730"></a>
<a id="trace-20738"></a>
<a id="trace-20740"></a>
<a id="trace-20811"></a>
<a id="trace-20813"></a>
<a id="trace-20821"></a>
<a id="trace-20823"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20843"></a>
<a id="trace-20845"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20899"></a>
<a id="trace-20901"></a>
<a id="trace-20973"></a>
<a id="trace-20975"></a>
<a id="trace-20981"></a>
<a id="trace-20983"></a>
<a id="trace-21002"></a>
<a id="trace-21004"></a>
<a id="trace-21012"></a>
<a id="trace-21014"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21047"></a>
<a id="trace-21049"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21065"></a>
<a id="trace-21067"></a>
<a id="trace-21075"></a>
<a id="trace-21077"></a>
<a id="trace-21145"></a>
<a id="trace-21147"></a>
<a id="trace-21151"></a>
<a id="trace-21153"></a>
<a id="trace-21165"></a>
<a id="trace-21167"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21243"></a>
<a id="trace-21245"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21334"></a>
<a id="trace-21336"></a>
<a id="trace-21344"></a>
<a id="trace-21346"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21377"></a>
<a id="trace-21379"></a>
<a id="trace-21388"></a>
<a id="trace-21390"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21490"></a>
<a id="trace-21492"></a>
<a id="trace-21496"></a>
<a id="trace-21498"></a>
<a id="trace-21506"></a>
<a id="trace-21508"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21552"></a>
<a id="trace-21554"></a>
<a id="trace-21566"></a>
<a id="trace-21568"></a>
<a id="trace-21576"></a>
<a id="trace-21578"></a>
<a id="trace-21651"></a>
<a id="trace-21653"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21679"></a>
<a id="trace-21681"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21702"></a>
<a id="trace-21704"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21726"></a>
<a id="trace-21728"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21746"></a>
<a id="trace-21748"></a>
<a id="trace-21817"></a>
<a id="trace-21819"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21918"></a>
<a id="trace-21920"></a>
<a id="trace-21988"></a>
<a id="trace-21990"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22029"></a>
<a id="trace-22031"></a>
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22162"></a>
<a id="trace-22164"></a>
<a id="trace-22168"></a>
<a id="trace-22170"></a>
<a id="trace-22195"></a>
<a id="trace-22197"></a>
<a id="trace-22203"></a>
<a id="trace-22205"></a>
<a id="trace-22216"></a>
<a id="trace-22218"></a>
<a id="trace-22221"></a>
<a id="trace-22223"></a>
<a id="trace-22235"></a>
<a id="trace-22237"></a>
<a id="trace-22245"></a>
<a id="trace-22247"></a>
<a id="trace-22339"></a>
<a id="trace-22341"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22371"></a>
<a id="trace-22373"></a>
<a id="trace-22377"></a>
<a id="trace-22379"></a>
<a id="trace-22389"></a>
<a id="trace-22391"></a>
<a id="trace-22403"></a>
<a id="trace-22405"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22497"></a>
<a id="trace-22499"></a>
<a id="trace-22506"></a>
<a id="trace-22508"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22545"></a>
<a id="trace-22547"></a>
<a id="trace-22714"></a>
<a id="trace-22716"></a>
<a id="trace-22727"></a>
<a id="trace-22729"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22756"></a>
<a id="trace-22758"></a>
<a id="trace-22847"></a>
<a id="trace-22849"></a>
<a id="trace-22863"></a>
<a id="trace-22865"></a>
<a id="trace-22877"></a>
<a id="trace-22879"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-23106"></a>
<a id="trace-23108"></a>
<a id="trace-23126"></a>
<a id="trace-23128"></a>
<a id="trace-23152"></a>
<a id="trace-23154"></a>
<a id="trace-23228"></a>
<a id="trace-23230"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23303"></a>
<a id="trace-23305"></a>
<a id="trace-23324"></a>
<a id="trace-23326"></a>
<a id="trace-23350"></a>
<a id="trace-23352"></a>
<a id="trace-23439"></a>
<a id="trace-23441"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23473"></a>
<a id="trace-23475"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23520"></a>
<a id="trace-23522"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23618"></a>
<a id="trace-23620"></a>
<a id="trace-23629"></a>
<a id="trace-23631"></a>
<a id="trace-23648"></a>
<a id="trace-23650"></a>
<a id="trace-23662"></a>
<a id="trace-23664"></a>
<a id="trace-23690"></a>
<a id="trace-23692"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23741"></a>
<a id="trace-23743"></a>
<a id="trace-23811"></a>
<a id="trace-23813"></a>
<a id="trace-23820"></a>
<a id="trace-23822"></a>
<a id="trace-23836"></a>
<a id="trace-23838"></a>
<a id="trace-23857"></a>
<a id="trace-23859"></a>
<a id="trace-23875"></a>
<a id="trace-23877"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23914"></a>
<a id="trace-23916"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24019"></a>
<a id="trace-24021"></a>
<a id="trace-24047"></a>
<a id="trace-24049"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24077"></a>
<a id="trace-24079"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24197"></a>
<a id="trace-24199"></a>
<a id="trace-24213"></a>
<a id="trace-24215"></a>
<a id="trace-24231"></a>
<a id="trace-24233"></a>
<a id="trace-24313"></a>
<a id="trace-24315"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24353"></a>
<a id="trace-24355"></a>
<a id="trace-24366"></a>
<a id="trace-24368"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24410"></a>
<a id="trace-24412"></a>
<a id="trace-24486"></a>
<a id="trace-24488"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24507"></a>
<a id="trace-24509"></a>
<a id="trace-24519"></a>
<a id="trace-24521"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24572"></a>
<a id="trace-24574"></a>
<a id="trace-24583"></a>
<a id="trace-24585"></a>
<a id="trace-24653"></a>
<a id="trace-24655"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24684"></a>
<a id="trace-24686"></a>
<a id="trace-24692"></a>
<a id="trace-24694"></a>
<a id="trace-24706"></a>
<a id="trace-24708"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24731"></a>
<a id="trace-24733"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24824"></a>
<a id="trace-24826"></a>
<a id="trace-24833"></a>
<a id="trace-24835"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24852"></a>
<a id="trace-24854"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24869"></a>
<a id="trace-24871"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24885"></a>
<a id="trace-24887"></a>
<a id="trace-24898"></a>
<a id="trace-24900"></a>
<a id="trace-24909"></a>
<a id="trace-24911"></a>
<a id="trace-24985"></a>
<a id="trace-24987"></a>
<a id="trace-25005"></a>
<a id="trace-25007"></a>
<a id="trace-25023"></a>
<a id="trace-25025"></a>
<a id="trace-25036"></a>
<a id="trace-25038"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25055"></a>
<a id="trace-25057"></a>
<a id="trace-25062"></a>
<a id="trace-25064"></a>
<a id="trace-25075"></a>
<a id="trace-25077"></a>
<a id="trace-25153"></a>
<a id="trace-25155"></a>
<a id="trace-25191"></a>
<a id="trace-25193"></a>
<a id="trace-25202"></a>
<a id="trace-25204"></a>
<a id="trace-25222"></a>
<a id="trace-25224"></a>
<a id="trace-25244"></a>
<a id="trace-25246"></a>
<a id="trace-25254"></a>
<a id="trace-25256"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25340"></a>
<a id="trace-25342"></a>
<a id="trace-25347"></a>
<a id="trace-25349"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25402"></a>
<a id="trace-25404"></a>
<a id="trace-25423"></a>
<a id="trace-25425"></a>
<a id="trace-25500"></a>
<a id="trace-25502"></a>
<a id="trace-25512"></a>
<a id="trace-25514"></a>
<a id="trace-25521"></a>
<a id="trace-25523"></a>
<a id="trace-25537"></a>
<a id="trace-25539"></a>
<a id="trace-25546"></a>
<a id="trace-25548"></a>
<a id="trace-25552"></a>
<a id="trace-25554"></a>
<a id="trace-25565"></a>
<a id="trace-25567"></a>
<a id="trace-25579"></a>
<a id="trace-25581"></a>
<a id="trace-25650"></a>
<a id="trace-25652"></a>
<a id="trace-25660"></a>
<a id="trace-25662"></a>
<a id="trace-25684"></a>
<a id="trace-25686"></a>
<a id="trace-25693"></a>
<a id="trace-25695"></a>
<a id="trace-25706"></a>
<a id="trace-25708"></a>
<a id="trace-25722"></a>
<a id="trace-25724"></a>
<a id="trace-25749"></a>
<a id="trace-25751"></a>
<a id="trace-25819"></a>
<a id="trace-25821"></a>
<a id="trace-25825"></a>
<a id="trace-25827"></a>
<a id="trace-25838"></a>
<a id="trace-25840"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25868"></a>
<a id="trace-25870"></a>
<a id="trace-25889"></a>
<a id="trace-25891"></a>
<a id="trace-25898"></a>
<a id="trace-25900"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25997"></a>
<a id="trace-25999"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26029"></a>
<a id="trace-26031"></a>
<a id="trace-26043"></a>
<a id="trace-26045"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26087"></a>
<a id="trace-26089"></a>
<a id="trace-26158"></a>
<a id="trace-26160"></a>
<a id="trace-26169"></a>
<a id="trace-26171"></a>
<a id="trace-26185"></a>
<a id="trace-26187"></a>
<a id="trace-26197"></a>
<a id="trace-26199"></a>
<a id="trace-26205"></a>
<a id="trace-26207"></a>
<a id="trace-26215"></a>
<a id="trace-26217"></a>
<a id="trace-26221"></a>
<a id="trace-26223"></a>
<a id="trace-26234"></a>
<a id="trace-26236"></a>
<a id="trace-26316"></a>
<a id="trace-26318"></a>
<a id="trace-26346"></a>
<a id="trace-26348"></a>
<a id="trace-26355"></a>
<a id="trace-26357"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26390"></a>
<a id="trace-26392"></a>
<a id="trace-26404"></a>
<a id="trace-26406"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26490"></a>
<a id="trace-26492"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26527"></a>
<a id="trace-26529"></a>
<a id="trace-26553"></a>
<a id="trace-26555"></a>
<a id="trace-26560"></a>
<a id="trace-26562"></a>
<a id="trace-26575"></a>
<a id="trace-26577"></a>
<a id="trace-26585"></a>
<a id="trace-26587"></a>
<a id="trace-26657"></a>
<a id="trace-26659"></a>
<a id="trace-26672"></a>
<a id="trace-26674"></a>
<a id="trace-26680"></a>
<a id="trace-26682"></a>
<a id="trace-26702"></a>
<a id="trace-26704"></a>
<a id="trace-26712"></a>
<a id="trace-26714"></a>
<a id="trace-26745"></a>
<a id="trace-26747"></a>
<a id="trace-26755"></a>
<a id="trace-26757"></a>
<a id="trace-26826"></a>
<a id="trace-26828"></a>
<a id="trace-26835"></a>
<a id="trace-26837"></a>
<a id="trace-26844"></a>
<a id="trace-26846"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26866"></a>
<a id="trace-26868"></a>
<a id="trace-26872"></a>
<a id="trace-26874"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26907"></a>
<a id="trace-26909"></a>
<a id="trace-26989"></a>
<a id="trace-26991"></a>
<a id="trace-26997"></a>
<a id="trace-26999"></a>
<a id="trace-27017"></a>
<a id="trace-27019"></a>
<a id="trace-27048"></a>
<a id="trace-27050"></a>
<a id="trace-27054"></a>
<a id="trace-27056"></a>
<a id="trace-27069"></a>
<a id="trace-27071"></a>
<a id="trace-27080"></a>
<a id="trace-27082"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 953): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625042202673963, 'next_transition': 987}.
<a id="trace-1389"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1389): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1195. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663605439545, 'next_transition': 1718}.
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1738"></a>
<a id="trace-1740"></a>
<a id="trace-1774"></a>
<a id="trace-1776"></a>
<a id="trace-1843"></a>
<a id="trace-1845"></a>
<a id="trace-1933"></a>
<a id="trace-1935"></a>
<a id="trace-1974"></a>
<a id="trace-1976"></a>
<a id="trace-2011"></a>
<a id="trace-2013"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2063"></a>
<a id="trace-2065"></a>
<a id="trace-2082"></a>
<a id="trace-2084"></a>
<a id="trace-2113"></a>
<a id="trace-2115"></a>
<a id="trace-2137"></a>
<a id="trace-2139"></a>
<a id="trace-2163"></a>
<a id="trace-2165"></a>
<a id="trace-2182"></a>
<a id="trace-2184"></a>
<a id="trace-2277"></a>
<a id="trace-2279"></a>
<a id="trace-2305"></a>
<a id="trace-2307"></a>
<a id="trace-2335"></a>
<a id="trace-2337"></a>
<a id="trace-2364"></a>
<a id="trace-2366"></a>
<a id="trace-2396"></a>
<a id="trace-2398"></a>
<a id="trace-2457"></a>
<a id="trace-2459"></a>
<a id="trace-2490"></a>
<a id="trace-2492"></a>
- 13.20s–23.25s (×42), actor 5, squad 0 (trace 1718): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41345096266724496, 'next_transition': 1738}.
<a id="trace-1784"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1784): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1203. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2410}.
<a id="trace-1785"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1785): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1203. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2410}.
<a id="trace-2410"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 2410): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 2204. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4163029549701935, 'next_transition': 3109}.
<a id="trace-2498"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2498): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2196. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575006123476091, 'next_transition': 2831}.
<a id="trace-2499"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2499): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2196. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575006123476091, 'next_transition': 2831}.
<a id="trace-2831"></a>
<a id="trace-2833"></a>
<a id="trace-2857"></a>
<a id="trace-2859"></a>
<a id="trace-2886"></a>
<a id="trace-2888"></a>
<a id="trace-2975"></a>
<a id="trace-2977"></a>
<a id="trace-2989"></a>
<a id="trace-2991"></a>
<a id="trace-3033"></a>
<a id="trace-3035"></a>
<a id="trace-3055"></a>
<a id="trace-3057"></a>
<a id="trace-3073"></a>
<a id="trace-3075"></a>
<a id="trace-3089"></a>
<a id="trace-3091"></a>
<a id="trace-3221"></a>
<a id="trace-3223"></a>
<a id="trace-3246"></a>
<a id="trace-3248"></a>
<a id="trace-3262"></a>
<a id="trace-3264"></a>
<a id="trace-3287"></a>
<a id="trace-3289"></a>
<a id="trace-3390"></a>
<a id="trace-3392"></a>
<a id="trace-3415"></a>
<a id="trace-3417"></a>
<a id="trace-3478"></a>
<a id="trace-3480"></a>
<a id="trace-3494"></a>
<a id="trace-3496"></a>
<a id="trace-3519"></a>
<a id="trace-3521"></a>
<a id="trace-3543"></a>
<a id="trace-3545"></a>
- 23.75s–32.75s (×38), actor 5, squad 0 (trace 2831): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2201. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49218755083576826, 'next_transition': 2857}.
<a id="trace-3109"></a>
- 28.20s–28.20s (×1), actor 8, squad 1 (trace 3109): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2909. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.469395944923877, 'next_transition': 3434}.
<a id="trace-3434"></a>
- 31.20s–31.20s (×1), actor 8, squad 1 (trace 3434): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3309. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.57625270007669, 'next_transition': 430}.
<a id="trace-3551"></a>
- 32.85s–32.85s (×1), actor 0, squad 0 (trace 3551): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3301. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150034192459117, 'next_transition': 3719}.
<a id="trace-3719"></a>
<a id="trace-3721"></a>
<a id="trace-3742"></a>
<a id="trace-3744"></a>
<a id="trace-3776"></a>
<a id="trace-3778"></a>
<a id="trace-3792"></a>
<a id="trace-3794"></a>
<a id="trace-3878"></a>
<a id="trace-3880"></a>
<a id="trace-3898"></a>
<a id="trace-3900"></a>
<a id="trace-3922"></a>
<a id="trace-3924"></a>
- 33.25s–36.25s (×14), actor 5, squad 0 (trace 3719): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3306. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13485740065661406, 'next_transition': 3742}.
<a id="trace-3929"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3929): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3805. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38200682368353084, 'next_transition': 4381}.
<a id="trace-3930"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3930): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3805. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38200682368353084, 'next_transition': 4381}.
<a id="trace-3931"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3931): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3805. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38200682368353084, 'next_transition': 4381}.
<a id="trace-4381"></a>
<a id="trace-4383"></a>
- 36.75s–36.75s (×2), actor 5, squad 0 (trace 4381): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3810. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9541192439238296, 'next_transition': 4394}.
<a id="trace-4394"></a>
- 37.20s–37.20s (×1), actor 0, squad 0 (trace 4394): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3805. Next observer evidence: None.
<a id="trace-4835"></a>
<a id="trace-4837"></a>
<a id="trace-4871"></a>
<a id="trace-4873"></a>
- 37.25s–37.75s (×4), actor 5, squad 0 (trace 4835): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3810. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2911293074710533, 'next_transition': 4871}.
<a id="trace-4894"></a>
- 38.20s–38.20s (×1), actor 0, squad 0 (trace 4894): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3805. Next observer evidence: None.
<a id="trace-5338"></a>
<a id="trace-5340"></a>
<a id="trace-5379"></a>
<a id="trace-5381"></a>
<a id="trace-5426"></a>
<a id="trace-5428"></a>
- 38.25s–39.25s (×6), actor 5, squad 0 (trace 5338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3810. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2664388795531315, 'next_transition': 5379}.
<a id="trace-429"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 429): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-430"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (events line 430): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5452"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 5452): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.707085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5452. Next observer evidence: None.
<a id="trace-5453"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 5453): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.707085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5453. Next observer evidence: None.
<a id="trace-5454"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 5454): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.707085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5454. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900104408502114, 'next_transition': 5639}.
<a id="trace-5455"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 5455): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.707085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5455. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900104408502114, 'next_transition': 5639}.
<a id="trace-5467"></a>
<a id="trace-5469"></a>
<a id="trace-5588"></a>
<a id="trace-5590"></a>
<a id="trace-5616"></a>
<a id="trace-5618"></a>
<a id="trace-5864"></a>
<a id="trace-5866"></a>
- 39.75s–41.25s (×8), actor 5, squad 0 (trace 5467): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 5455. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3543821395067494, 'next_transition': 5588}.
<a id="trace-5639"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 5639): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 5496. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.214564056468719, 'next_transition': 6678}.
<a id="trace-5640"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 5640): bounding overwatch. Knowledge: actor memory at 40.00s, trace 5496. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.214564056468719, 'next_transition': 6678}.
<a id="trace-5641"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 5641): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 5496. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.214564056468719, 'next_transition': 6678}.
<a id="trace-5901"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 5901): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 5488. Next observer evidence: None.
<a id="trace-5902"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 5902): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 5488. Next observer evidence: None.
<a id="trace-6400"></a>
<a id="trace-6402"></a>
<a id="trace-6439"></a>
<a id="trace-6441"></a>
<a id="trace-6490"></a>
<a id="trace-6492"></a>
<a id="trace-6555"></a>
<a id="trace-6557"></a>
<a id="trace-6598"></a>
<a id="trace-6600"></a>
<a id="trace-6671"></a>
<a id="trace-6673"></a>
<a id="trace-6728"></a>
<a id="trace-6730"></a>
<a id="trace-6868"></a>
<a id="trace-6870"></a>
<a id="trace-6931"></a>
<a id="trace-6933"></a>
<a id="trace-6976"></a>
<a id="trace-6978"></a>
<a id="trace-7030"></a>
<a id="trace-7032"></a>
<a id="trace-7108"></a>
<a id="trace-7110"></a>
<a id="trace-7159"></a>
<a id="trace-7161"></a>
<a id="trace-7226"></a>
<a id="trace-7228"></a>
<a id="trace-7290"></a>
<a id="trace-7292"></a>
<a id="trace-7348"></a>
<a id="trace-7350"></a>
<a id="trace-7884"></a>
<a id="trace-7886"></a>
<a id="trace-8251"></a>
<a id="trace-8253"></a>
<a id="trace-8297"></a>
<a id="trace-8299"></a>
<a id="trace-8826"></a>
<a id="trace-8828"></a>
<a id="trace-8868"></a>
<a id="trace-8870"></a>
<a id="trace-8900"></a>
<a id="trace-8902"></a>
- 41.75s–52.25s (×44), actor 5, squad 0 (trace 6400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5493. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29493522732626437, 'next_transition': 6439}.
<a id="trace-6678"></a>
- 44.25s–44.25s (×1), actor 8, squad 1 (trace 6678): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5496. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.799105083249958, 'next_transition': 651}.
<a id="trace-651"></a>
- 48.35s–48.35s (×1), actor 5, squad 1 (events line 651): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7242"></a>
- 48.35s–48.35s (×1), actor 5, squad 1 (trace 7242): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.661237 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 48.35s, trace 7242. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8186637512814186, 'next_transition': 7382}.
<a id="trace-7243"></a>
- 48.35s–48.35s (×1), actor 5, squad 1 (trace 7243): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.661237 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 48.35s, trace 7243. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8186637512814186, 'next_transition': 7382}.
<a id="trace-7382"></a>
<a id="trace-7632"></a>
<a id="trace-7895"></a>
<a id="trace-8308"></a>
<a id="trace-8567"></a>
<a id="trace-8999"></a>
- 49.65s–53.35s (×6), actor 8, squad 1 (trace 7382): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6759. Next observer evidence: None.
<a id="trace-8925"></a>
- 52.50s–52.50s (×1), actor 0, squad 0 (trace 8925): NeedSupport. Knowledge: actor memory at 50.00s, trace 8150. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749987342188498, 'next_transition': 8949}.
<a id="trace-8949"></a>
<a id="trace-8951"></a>
<a id="trace-8987"></a>
<a id="trace-8989"></a>
<a id="trace-9261"></a>
<a id="trace-9263"></a>
<a id="trace-10223"></a>
<a id="trace-10225"></a>
<a id="trace-10248"></a>
<a id="trace-10250"></a>
<a id="trace-10352"></a>
<a id="trace-10354"></a>
<a id="trace-10376"></a>
<a id="trace-10378"></a>
<a id="trace-10407"></a>
<a id="trace-10409"></a>
<a id="trace-10438"></a>
<a id="trace-10440"></a>
<a id="trace-10461"></a>
<a id="trace-10463"></a>
<a id="trace-10475"></a>
<a id="trace-10477"></a>
<a id="trace-10502"></a>
<a id="trace-10504"></a>
<a id="trace-10764"></a>
<a id="trace-10766"></a>
<a id="trace-10789"></a>
<a id="trace-10791"></a>
- 52.75s–59.25s (×28), actor 5, squad 0 (trace 8949): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8155. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.90562000663134, 'next_transition': 8987}.
<a id="trace-9274"></a>
- 53.95s–53.95s (×1), actor 8, squad 1 (trace 9274): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 8158. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28895500276859726, 'next_transition': 10195}.
<a id="trace-9275"></a>
- 53.95s–53.95s (×1), actor 8, squad 1 (trace 9275): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 8158. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28895500276859726, 'next_transition': 10195}.
<a id="trace-10195"></a>
- 54.00s–54.00s (×1), actor 8, squad 1 (trace 10195): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 50.00s, trace 8158. Next observer evidence: {'until': 57, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5244050053632214, 'next_transition': 861}.
<a id="trace-861"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (events line 861): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10452"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 10452): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.653056 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 10452. Next observer evidence: {'until': 58.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4161489993079404, 'next_transition': 10513}.
<a id="trace-10453"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 10453): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.653056 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 10453. Next observer evidence: {'until': 58.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4161489993079404, 'next_transition': 10513}.
<a id="trace-10513"></a>
- 58.60s–58.60s (×1), actor 8, squad 1 (trace 10513): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 10276. Next observer evidence: {'until': 61.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.75095081268939, 'next_transition': 11169}.
<a id="trace-10514"></a>
- 58.60s–58.60s (×1), actor 8, squad 1 (trace 10514): received platoon directive. Knowledge: actor memory at 55.00s, trace 10276. Next observer evidence: {'until': 61.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.75095081268939, 'next_transition': 11169}.
<a id="trace-10802"></a>
- 59.40s–59.40s (×1), actor 1, squad 0 (trace 10802): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 10269. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09001120673991422, 'next_transition': 10917}.
<a id="trace-10803"></a>
- 59.40s–59.40s (×1), actor 1, squad 0 (trace 10803): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 10269. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09001120673991422, 'next_transition': 10917}.
<a id="trace-10917"></a>
<a id="trace-10919"></a>
<a id="trace-11034"></a>
<a id="trace-11036"></a>
<a id="trace-11087"></a>
<a id="trace-11089"></a>
<a id="trace-11118"></a>
<a id="trace-11120"></a>
<a id="trace-11156"></a>
<a id="trace-11158"></a>
<a id="trace-11197"></a>
<a id="trace-11199"></a>
<a id="trace-11206"></a>
<a id="trace-11208"></a>
<a id="trace-11229"></a>
<a id="trace-11231"></a>
<a id="trace-11241"></a>
<a id="trace-11243"></a>
<a id="trace-11266"></a>
<a id="trace-11268"></a>
<a id="trace-11283"></a>
<a id="trace-11285"></a>
<a id="trace-11369"></a>
<a id="trace-11371"></a>
<a id="trace-11388"></a>
<a id="trace-11390"></a>
<a id="trace-11419"></a>
<a id="trace-11421"></a>
<a id="trace-11432"></a>
<a id="trace-11434"></a>
<a id="trace-11455"></a>
<a id="trace-11457"></a>
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11507"></a>
<a id="trace-11509"></a>
<a id="trace-11524"></a>
<a id="trace-11526"></a>
<a id="trace-11551"></a>
<a id="trace-11553"></a>
<a id="trace-11571"></a>
<a id="trace-11573"></a>
<a id="trace-11661"></a>
<a id="trace-11663"></a>
<a id="trace-11677"></a>
<a id="trace-11679"></a>
<a id="trace-11696"></a>
<a id="trace-11698"></a>
<a id="trace-11718"></a>
<a id="trace-11720"></a>
<a id="trace-11741"></a>
<a id="trace-11743"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11777"></a>
<a id="trace-11779"></a>
- 59.75s–73.25s (×56), actor 5, squad 0 (trace 10917): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.10s, trace 10453. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699914289493692, 'next_transition': 11034}.
<a id="trace-11169"></a>
- 61.95s–61.95s (×1), actor 8, squad 1 (trace 11169): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 10943. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1069}.
<a id="trace-11171"></a>
- 61.95s–61.95s (×1), actor 8, squad 1 (trace 11171): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 60.00s, trace 10943. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1069}.
<a id="trace-1069"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (events line 1069): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11443"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 11443): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.579777 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 11443. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007950000000001012, 'next_transition': 11520}.
<a id="trace-11444"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 11444): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.579777 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 11444. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007950000000001012, 'next_transition': 11520}.
<a id="trace-11520"></a>
- 68.70s–68.70s (×1), actor 8, squad 1 (trace 11520): received platoon directive; retain held slots. Knowledge: actor memory at 65.00s, trace 11303. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41808500000000004, 'next_transition': 11709}.
<a id="trace-11709"></a>
- 71.65s–71.65s (×1), actor 8, squad 1 (trace 11709): NeedSupport. Knowledge: actor memory at 70.00s, trace 11587. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1239}.
<a id="trace-1239"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (events line 1239): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11764"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 11764): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.589138 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 11764. Next observer evidence: {'until': 75, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29444500000000007, 'next_transition': 12036}.
<a id="trace-11765"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 11765): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.589138 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 11765. Next observer evidence: {'until': 75, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29444500000000007, 'next_transition': 12036}.
<a id="trace-11784"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 11784): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 11580. Next observer evidence: None.
<a id="trace-11785"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 11785): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 11580. Next observer evidence: None.
<a id="trace-11944"></a>
<a id="trace-11946"></a>
<a id="trace-11970"></a>
<a id="trace-11972"></a>
<a id="trace-11991"></a>
<a id="trace-11993"></a>
<a id="trace-12090"></a>
<a id="trace-12092"></a>
<a id="trace-12105"></a>
<a id="trace-12107"></a>
<a id="trace-12137"></a>
<a id="trace-12139"></a>
<a id="trace-12160"></a>
<a id="trace-12162"></a>
<a id="trace-12192"></a>
<a id="trace-12194"></a>
<a id="trace-12208"></a>
<a id="trace-12210"></a>
<a id="trace-12234"></a>
<a id="trace-12236"></a>
<a id="trace-12245"></a>
<a id="trace-12247"></a>
<a id="trace-12268"></a>
<a id="trace-12270"></a>
<a id="trace-12276"></a>
<a id="trace-12278"></a>
<a id="trace-12366"></a>
<a id="trace-12368"></a>
<a id="trace-12378"></a>
<a id="trace-12380"></a>
<a id="trace-12402"></a>
<a id="trace-12404"></a>
<a id="trace-12412"></a>
<a id="trace-12414"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
<a id="trace-12452"></a>
<a id="trace-12454"></a>
<a id="trace-12477"></a>
<a id="trace-12479"></a>
<a id="trace-12494"></a>
<a id="trace-12496"></a>
<a id="trace-12525"></a>
<a id="trace-12527"></a>
<a id="trace-12544"></a>
<a id="trace-12546"></a>
<a id="trace-12640"></a>
<a id="trace-12642"></a>
<a id="trace-12658"></a>
<a id="trace-12660"></a>
- 73.75s–85.75s (×50), actor 5, squad 0 (trace 11944): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.95s, trace 11765. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19550200439564233, 'next_transition': 11970}.
<a id="trace-12036"></a>
- 75.10s–75.10s (×1), actor 8, squad 1 (trace 12036): received platoon directive; retain held slots. Knowledge: actor memory at 75.00s, trace 12017. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13583999999999996, 'next_transition': 1435}.
<a id="trace-1435"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (events line 1435): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12257"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (trace 12257): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582542 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 12257. Next observer evidence: {'until': 81, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12391}.
<a id="trace-12258"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (trace 12258): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582542 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 12258. Next observer evidence: {'until': 81, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12391}.
<a id="trace-12391"></a>
- 81.05s–81.05s (×1), actor 8, squad 1 (trace 12391): received platoon directive; retain held slots. Knowledge: actor memory at 80.00s, trace 12295. Next observer evidence: {'until': 84.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1598}.
<a id="trace-1598"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (events line 1598): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12559"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (trace 12559): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.593661 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 12559. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12825}.
<a id="trace-12560"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (trace 12560): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.593661 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 12560. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12825}.
<a id="trace-12670"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 12670): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 12562. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800035696240449, 'next_transition': 12792}.
<a id="trace-12671"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 12671): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 12562. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800035696240449, 'next_transition': 12792}.
<a id="trace-12792"></a>
<a id="trace-12794"></a>
<a id="trace-12807"></a>
<a id="trace-12809"></a>
<a id="trace-12847"></a>
<a id="trace-12849"></a>
- 86.25s–87.25s (×6), actor 5, squad 0 (trace 12792): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 12566. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000694397450417, 'next_transition': 12807}.
<a id="trace-12825"></a>
- 86.95s–86.95s (×1), actor 8, squad 1 (trace 12825): received platoon directive; retain held slots. Knowledge: actor memory at 85.00s, trace 12569. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.14418, 'next_transition': 1796}.
<a id="trace-12857"></a>
- 87.30s–87.30s (×1), actor 1, squad 0 (trace 12857): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 12562. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26999941611731587, 'next_transition': 12876}.
<a id="trace-12876"></a>
<a id="trace-12878"></a>
<a id="trace-12907"></a>
<a id="trace-12909"></a>
- 87.75s–88.25s (×4), actor 5, squad 0 (trace 12876): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 12566. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400097749853432, 'next_transition': 12907}.
<a id="trace-12912"></a>
- 88.25s–88.25s (×1), actor 1, squad 0 (trace 12912): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 12562. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699817696691843, 'next_transition': 14588}.
<a id="trace-12913"></a>
- 88.25s–88.25s (×1), actor 1, squad 0 (trace 12913): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 85.00s, trace 12562. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699817696691843, 'next_transition': 14588}.
<a id="trace-14588"></a>
<a id="trace-14590"></a>
<a id="trace-14619"></a>
<a id="trace-14621"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
<a id="trace-14762"></a>
<a id="trace-14764"></a>
<a id="trace-14785"></a>
<a id="trace-14787"></a>
<a id="trace-14797"></a>
<a id="trace-14799"></a>
- 88.75s–91.75s (×14), actor 5, squad 0 (trace 14588): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 12566. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9846722205711101, 'next_transition': 14619}.
<a id="trace-1796"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (events line 1796): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14770"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 14770): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.606477 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 14770. Next observer evidence: {'until': 99, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15079}.
<a id="trace-14771"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 14771): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.606477 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 14771. Next observer evidence: {'until': 99, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15079}.
<a id="trace-1805"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (events line 1805): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14808"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (trace 14808): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.609107 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 14808. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000698774779675, 'next_transition': 14819}.
<a id="trace-14809"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (trace 14809): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.609107 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 14809. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000698774779675, 'next_transition': 14819}.
<a id="trace-14819"></a>
<a id="trace-14821"></a>
<a id="trace-14829"></a>
<a id="trace-14831"></a>
<a id="trace-14847"></a>
<a id="trace-14849"></a>
<a id="trace-14860"></a>
<a id="trace-14862"></a>
<a id="trace-14879"></a>
<a id="trace-14881"></a>
<a id="trace-14889"></a>
<a id="trace-14891"></a>
<a id="trace-14975"></a>
<a id="trace-14977"></a>
<a id="trace-14992"></a>
<a id="trace-14994"></a>
<a id="trace-15006"></a>
<a id="trace-15008"></a>
<a id="trace-15027"></a>
<a id="trace-15029"></a>
<a id="trace-15036"></a>
<a id="trace-15038"></a>
<a id="trace-15055"></a>
<a id="trace-15057"></a>
<a id="trace-15072"></a>
<a id="trace-15074"></a>
<a id="trace-15139"></a>
<a id="trace-15141"></a>
<a id="trace-15153"></a>
<a id="trace-15155"></a>
<a id="trace-15236"></a>
<a id="trace-15238"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15265"></a>
<a id="trace-15267"></a>
<a id="trace-15278"></a>
<a id="trace-15280"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15309"></a>
<a id="trace-15311"></a>
<a id="trace-15449"></a>
<a id="trace-15451"></a>
<a id="trace-15470"></a>
<a id="trace-15472"></a>
<a id="trace-15492"></a>
<a id="trace-15494"></a>
<a id="trace-15637"></a>
<a id="trace-15639"></a>
<a id="trace-15723"></a>
<a id="trace-15725"></a>
<a id="trace-15734"></a>
<a id="trace-15736"></a>
<a id="trace-15753"></a>
<a id="trace-15755"></a>
<a id="trace-15770"></a>
<a id="trace-15772"></a>
<a id="trace-15786"></a>
<a id="trace-15788"></a>
<a id="trace-15803"></a>
<a id="trace-15805"></a>
<a id="trace-15839"></a>
<a id="trace-15841"></a>
<a id="trace-15864"></a>
<a id="trace-15866"></a>
<a id="trace-15883"></a>
<a id="trace-15885"></a>
<a id="trace-15922"></a>
<a id="trace-15924"></a>
<a id="trace-16022"></a>
<a id="trace-16024"></a>
<a id="trace-16051"></a>
<a id="trace-16053"></a>
<a id="trace-16073"></a>
<a id="trace-16075"></a>
- 92.25s–111.25s (×76), actor 5, squad 0 (trace 14819): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 14809. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600014335900746, 'next_transition': 14829}.
<a id="trace-15079"></a>
- 99.10s–99.10s (×1), actor 9, squad 1 (trace 15079): MoveTactically. Knowledge: actor memory at 95.00s, trace 14904. Next observer evidence: {'until': 103, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.375279046246319, 'next_transition': 15317}.
<a id="trace-15080"></a>
- 99.10s–99.10s (×1), actor 9, squad 1 (trace 15080): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 95.00s, trace 14904. Next observer evidence: {'until': 103, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.375279046246319, 'next_transition': 15317}.
<a id="trace-15317"></a>
- 103.10s–103.10s (×1), actor 9, squad 1 (trace 15317): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 15170. Next observer evidence: {'until': 104.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3445170907429915, 'next_transition': 15503}.
<a id="trace-15318"></a>
<a id="trace-15503"></a>
- 103.10s–104.50s (×2), actor 9, squad 1 (trace 15318): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 15170. Next observer evidence: {'until': 104.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3445170907429915, 'next_transition': 15503}.
<a id="trace-16078"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 16078): HelpSquad outside weapon range: approach neighbour before allocating firing slots. Knowledge: actor memory at 110.00s, trace 15945. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14268161962839893, 'next_transition': 16333}.
<a id="trace-16079"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 16079): MoveTactically. Knowledge: actor memory at 110.00s, trace 15945. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14268161962839893, 'next_transition': 16333}.
<a id="trace-16080"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 16080): received platoon directive. Knowledge: actor memory at 110.00s, trace 15945. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14268161962839893, 'next_transition': 16333}.
<a id="trace-16333"></a>
<a id="trace-16335"></a>
<a id="trace-16366"></a>
<a id="trace-16368"></a>
- 111.75s–112.25s (×4), actor 5, squad 0 (trace 16333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15949. Next observer evidence: {'until': 112.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16366}.
<a id="trace-16373"></a>
- 112.25s–112.25s (×1), actor 1, squad 0 (trace 16373): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 15945. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02085487600205821, 'next_transition': 16635}.
<a id="trace-16374"></a>
- 112.25s–112.25s (×1), actor 1, squad 0 (trace 16374): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 15945. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02085487600205821, 'next_transition': 16635}.
<a id="trace-16635"></a>
<a id="trace-16637"></a>
<a id="trace-16661"></a>
<a id="trace-16663"></a>
<a id="trace-16690"></a>
<a id="trace-16692"></a>
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-16738"></a>
<a id="trace-16740"></a>
<a id="trace-16821"></a>
<a id="trace-16830"></a>
- 112.75s–115.75s (×12), actor 5, squad 0 (trace 16635): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15949. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40764893146138104, 'next_transition': 16661}.
<a id="trace-16835"></a>
- 116.05s–116.05s (×1), actor 1, squad 0 (trace 16835): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 16750. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11558136724157901, 'next_transition': 17203}.
<a id="trace-16838"></a>
- 116.05s–116.05s (×1), actor 1, squad 0 (trace 16838): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 16750. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11558136724157901, 'next_transition': 17203}.
<a id="trace-16839"></a>
- 116.05s–116.05s (×1), actor 1, squad 0 (trace 16839): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 16750. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11558136724157901, 'next_transition': 17203}.
<a id="trace-17203"></a>
<a id="trace-17214"></a>
<a id="trace-17247"></a>
<a id="trace-17262"></a>
- 116.25s–117.75s (×4), actor 5, squad 0 (trace 17203): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16754. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16340609687572644, 'next_transition': 17214}.
<a id="trace-17276"></a>
- 118.20s–118.20s (×1), actor 5, squad 0 (trace 17276): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 118.20s, trace 17276. Next observer evidence: None.
<a id="trace-17286"></a>
- 118.25s–118.25s (×1), actor 5, squad 0 (trace 17286): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 118.20s, trace 17276. Next observer evidence: {'until': 118.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3347792504957858, 'next_transition': 2241}.
<a id="trace-2241"></a>
- 118.55s–118.55s (×1), actor 5, squad 0 (events line 2241): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33482407304267425, 'next_transition': 17304}.
<a id="trace-17294"></a>
- 118.55s–118.55s (×1), actor 5, squad 0 (trace 17294): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.423120 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 118.55s, trace 17294. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33482407304267425, 'next_transition': 17304}.
<a id="trace-17295"></a>
- 118.55s–118.55s (×1), actor 5, squad 0 (trace 17295): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.423120 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 118.55s, trace 17295. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33482407304267425, 'next_transition': 17304}.
<a id="trace-17304"></a>
<a id="trace-17325"></a>
<a id="trace-17339"></a>
<a id="trace-17420"></a>
<a id="trace-17433"></a>
<a id="trace-17458"></a>
<a id="trace-17473"></a>
<a id="trace-17501"></a>
<a id="trace-17521"></a>
<a id="trace-17541"></a>
- 118.75s–123.25s (×10), actor 5, squad 0 (trace 17304): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 118.55s, trace 17295. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1717862187078423, 'next_transition': 17325}.
<a id="trace-17546"></a>
- 123.25s–123.25s (×1), actor 1, squad 0 (trace 17546): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499407861271195, 'next_transition': 17560}.
<a id="trace-17548"></a>
- 123.25s–123.25s (×1), actor 1, squad 0 (trace 17548): NeedSupport. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499407861271195, 'next_transition': 17560}.
<a id="trace-17560"></a>
- 123.55s–123.55s (×1), actor 1, squad 0 (trace 17560): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359304763013315, 'next_transition': 17700}.
<a id="trace-17565"></a>
- 123.55s–123.55s (×1), actor 1, squad 0 (trace 17565): MoveTactically. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359304763013315, 'next_transition': 17700}.
<a id="trace-17566"></a>
- 123.55s–123.55s (×1), actor 1, squad 0 (trace 17566): Reorganise complete. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.359304763013315, 'next_transition': 17700}.
<a id="trace-17700"></a>
- 123.75s–123.75s (×1), actor 5, squad 0 (trace 17700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 17349. Next observer evidence: {'until': 123.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3572444859476551, 'next_transition': 17708}.
<a id="trace-17708"></a>
- 123.85s–123.85s (×1), actor 1, squad 0 (trace 17708): received platoon directive. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7173861232456044, 'next_transition': 17851}.
<a id="trace-17851"></a>
<a id="trace-17886"></a>
- 124.25s–124.75s (×2), actor 5, squad 0 (trace 17851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 17349. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6688606323240135, 'next_transition': 17886}.
<a id="trace-17900"></a>
- 124.85s–124.85s (×1), actor 1, squad 0 (trace 17900): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 17345. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8832912777383415, 'next_transition': 18032}.
<a id="trace-18032"></a>
<a id="trace-18051"></a>
<a id="trace-18083"></a>
<a id="trace-18103"></a>
<a id="trace-18123"></a>
- 125.25s–127.25s (×5), actor 5, squad 0 (trace 18032): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17958. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662666178968151, 'next_transition': 18051}.
<a id="trace-18134"></a>
- 127.55s–127.55s (×1), actor 1, squad 0 (trace 18134): NeedSupport. Knowledge: actor memory at 125.00s, trace 17955. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502477068772156, 'next_transition': 18141}.
<a id="trace-18141"></a>
<a id="trace-18158"></a>
<a id="trace-18183"></a>
<a id="trace-18196"></a>
<a id="trace-18209"></a>
<a id="trace-18286"></a>
<a id="trace-18294"></a>
<a id="trace-18313"></a>
<a id="trace-18321"></a>
<a id="trace-18341"></a>
<a id="trace-18356"></a>
<a id="trace-18369"></a>
<a id="trace-18379"></a>
<a id="trace-18393"></a>
- 127.75s–134.30s (×14), actor 5, squad 0 (trace 18141): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17958. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944975492759759, 'next_transition': 18158}.
<a id="trace-18402"></a>
- 134.65s–134.65s (×1), actor 1, squad 0 (trace 18402): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 18214. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25196819558031647, 'next_transition': 18407}.
<a id="trace-18407"></a>
<a id="trace-18475"></a>
- 134.80s–135.30s (×2), actor 5, squad 0 (trace 18407): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 18216. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040162194850473, 'next_transition': 18475}.
<a id="trace-18484"></a>
- 135.65s–135.65s (×1), actor 1, squad 0 (trace 18484): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 18410. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200814883649475, 'next_transition': 18590}.
<a id="trace-18590"></a>
<a id="trace-18603"></a>
<a id="trace-18622"></a>
<a id="trace-18637"></a>
<a id="trace-18644"></a>
<a id="trace-18668"></a>
<a id="trace-18677"></a>
<a id="trace-18694"></a>
<a id="trace-18703"></a>
<a id="trace-18781"></a>
- 135.80s–140.30s (×10), actor 5, squad 0 (trace 18590): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 18412. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039762662110213, 'next_transition': 18603}.
<a id="trace-18785"></a>
- 140.45s–140.45s (×1), actor 1, squad 0 (trace 18785): traveling overwatch. Knowledge: actor memory at 140.00s, trace 18710. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300337329852422, 'next_transition': 18900}.
<a id="trace-18786"></a>
- 140.45s–140.45s (×1), actor 1, squad 0 (trace 18786): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 140.00s, trace 18710. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300337329852422, 'next_transition': 18900}.
<a id="trace-18900"></a>
<a id="trace-18917"></a>
<a id="trace-18930"></a>
<a id="trace-18946"></a>
<a id="trace-18954"></a>
<a id="trace-18974"></a>
<a id="trace-18986"></a>
<a id="trace-19002"></a>
<a id="trace-19019"></a>
<a id="trace-19092"></a>
<a id="trace-19101"></a>
<a id="trace-19120"></a>
<a id="trace-19131"></a>
<a id="trace-19143"></a>
<a id="trace-19155"></a>
<a id="trace-19169"></a>
<a id="trace-19187"></a>
<a id="trace-19200"></a>
<a id="trace-19211"></a>
<a id="trace-19288"></a>
<a id="trace-19300"></a>
<a id="trace-19333"></a>
<a id="trace-19345"></a>
<a id="trace-19362"></a>
<a id="trace-19379"></a>
<a id="trace-19391"></a>
<a id="trace-19395"></a>
<a id="trace-19409"></a>
- 140.80s–154.30s (×28), actor 5, squad 0 (trace 18900): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 18712. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079912198573442, 'next_transition': 18917}.
<a id="trace-19414"></a>
- 154.45s–154.45s (×1), actor 1, squad 0 (trace 19414): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 150.00s, trace 19216. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4409939629345857, 'next_transition': 19422}.
<a id="trace-19422"></a>
<a id="trace-19498"></a>
- 154.80s–155.30s (×2), actor 5, squad 0 (trace 19422): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19218. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19498}.
<a id="trace-19504"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 19504): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 19431. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19567}.
<a id="trace-19567"></a>
<a id="trace-19586"></a>
<a id="trace-19596"></a>
<a id="trace-19616"></a>
<a id="trace-19630"></a>
<a id="trace-19657"></a>
<a id="trace-19665"></a>
<a id="trace-19677"></a>
<a id="trace-19687"></a>
<a id="trace-19762"></a>
<a id="trace-19777"></a>
<a id="trace-19788"></a>
<a id="trace-19796"></a>
<a id="trace-19813"></a>
<a id="trace-19822"></a>
- 155.80s–162.80s (×15), actor 5, squad 0 (trace 19567): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19433. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031498571396176664, 'next_transition': 19586}.
<a id="trace-2520"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 2520): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19835"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 19835): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.298440 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.25s, trace 19835. Next observer evidence: None.
<a id="trace-19836"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 19836): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.298440 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.25s, trace 19836. Next observer evidence: None.
<a id="trace-19841"></a>
<a id="trace-19851"></a>
<a id="trace-19872"></a>
<a id="trace-19902"></a>
<a id="trace-19977"></a>
- 163.30s–165.30s (×5), actor 5, squad 0 (trace 19841): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 19836. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37800761897083424, 'next_transition': 19851}.
<a id="trace-19982"></a>
- 165.45s–165.45s (×1), actor 1, squad 0 (trace 19982): Withdraw to received rally. Knowledge: actor memory at 165.00s, trace 19908. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755975264146288, 'next_transition': 20045}.
<a id="trace-19983"></a>
- 165.45s–165.45s (×1), actor 1, squad 0 (trace 19983): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 19908. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755975264146288, 'next_transition': 20045}.
<a id="trace-20045"></a>
<a id="trace-20066"></a>
<a id="trace-20082"></a>
<a id="trace-20093"></a>
<a id="trace-20102"></a>
<a id="trace-20122"></a>
<a id="trace-20135"></a>
<a id="trace-20145"></a>
<a id="trace-20160"></a>
<a id="trace-20236"></a>
<a id="trace-20249"></a>
<a id="trace-20272"></a>
<a id="trace-20286"></a>
<a id="trace-20306"></a>
<a id="trace-20321"></a>
<a id="trace-20331"></a>
<a id="trace-20338"></a>
<a id="trace-20356"></a>
<a id="trace-20366"></a>
<a id="trace-20437"></a>
<a id="trace-20444"></a>
<a id="trace-20463"></a>
<a id="trace-20480"></a>
<a id="trace-20497"></a>
<a id="trace-20517"></a>
<a id="trace-20536"></a>
<a id="trace-20542"></a>
<a id="trace-20557"></a>
<a id="trace-20568"></a>
<a id="trace-20639"></a>
<a id="trace-20645"></a>
<a id="trace-20654"></a>
<a id="trace-20663"></a>
<a id="trace-20672"></a>
<a id="trace-20682"></a>
<a id="trace-20694"></a>
<a id="trace-20704"></a>
<a id="trace-20726"></a>
<a id="trace-20736"></a>
<a id="trace-20809"></a>
<a id="trace-20819"></a>
<a id="trace-20829"></a>
<a id="trace-20841"></a>
<a id="trace-20853"></a>
<a id="trace-20859"></a>
<a id="trace-20870"></a>
<a id="trace-20876"></a>
<a id="trace-20887"></a>
<a id="trace-20897"></a>
<a id="trace-20971"></a>
<a id="trace-20979"></a>
<a id="trace-21000"></a>
<a id="trace-21010"></a>
<a id="trace-21025"></a>
<a id="trace-21033"></a>
<a id="trace-21045"></a>
<a id="trace-21052"></a>
<a id="trace-21063"></a>
<a id="trace-21073"></a>
<a id="trace-21143"></a>
<a id="trace-21149"></a>
<a id="trace-21163"></a>
<a id="trace-21172"></a>
<a id="trace-21187"></a>
<a id="trace-21204"></a>
<a id="trace-21216"></a>
<a id="trace-21223"></a>
<a id="trace-21230"></a>
<a id="trace-21241"></a>
<a id="trace-21314"></a>
<a id="trace-21321"></a>
<a id="trace-21332"></a>
<a id="trace-21342"></a>
<a id="trace-21353"></a>
<a id="trace-21364"></a>
<a id="trace-21375"></a>
<a id="trace-21386"></a>
<a id="trace-21406"></a>
<a id="trace-21417"></a>
<a id="trace-21488"></a>
<a id="trace-21494"></a>
<a id="trace-21504"></a>
<a id="trace-21516"></a>
<a id="trace-21528"></a>
<a id="trace-21533"></a>
<a id="trace-21544"></a>
<a id="trace-21550"></a>
<a id="trace-21564"></a>
<a id="trace-21574"></a>
<a id="trace-21649"></a>
<a id="trace-21666"></a>
<a id="trace-21677"></a>
<a id="trace-21686"></a>
<a id="trace-21700"></a>
<a id="trace-21706"></a>
<a id="trace-21716"></a>
<a id="trace-21724"></a>
<a id="trace-21734"></a>
<a id="trace-21744"></a>
<a id="trace-21815"></a>
<a id="trace-21827"></a>
<a id="trace-21836"></a>
<a id="trace-21849"></a>
<a id="trace-21872"></a>
<a id="trace-21879"></a>
<a id="trace-21889"></a>
<a id="trace-21897"></a>
<a id="trace-21906"></a>
<a id="trace-21916"></a>
<a id="trace-21986"></a>
<a id="trace-21993"></a>
<a id="trace-22004"></a>
<a id="trace-22013"></a>
<a id="trace-22027"></a>
<a id="trace-22036"></a>
- 165.80s–222.80s (×115), actor 5, squad 0 (trace 20045): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 19910. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830163976541706, 'next_transition': 20066}.
<a id="trace-2780"></a>
- 223.25s–223.25s (×1), actor 5, squad 0 (events line 2780): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22047"></a>
- 223.25s–223.25s (×1), actor 5, squad 0 (trace 22047): renew committed intent (75 s lifetime). Knowledge: actor memory at 223.25s, trace 22047. Next observer evidence: None.
<a id="trace-22053"></a>
<a id="trace-22060"></a>
<a id="trace-22080"></a>
<a id="trace-22088"></a>
<a id="trace-22160"></a>
<a id="trace-22166"></a>
<a id="trace-22176"></a>
<a id="trace-22183"></a>
<a id="trace-22193"></a>
<a id="trace-22201"></a>
<a id="trace-22214"></a>
<a id="trace-22233"></a>
<a id="trace-22243"></a>
<a id="trace-22322"></a>
<a id="trace-22337"></a>
<a id="trace-22347"></a>
<a id="trace-22358"></a>
<a id="trace-22369"></a>
<a id="trace-22375"></a>
<a id="trace-22387"></a>
<a id="trace-22393"></a>
<a id="trace-22401"></a>
<a id="trace-22412"></a>
<a id="trace-22483"></a>
<a id="trace-22495"></a>
<a id="trace-22504"></a>
<a id="trace-22519"></a>
<a id="trace-22543"></a>
- 223.30s–237.30s (×28), actor 5, squad 0 (trace 22053): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 223.25s, trace 22047. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22060}.
<a id="trace-22551"></a>
- 237.70s–237.70s (×1), actor 1, squad 0 (trace 22551): MoveTactically. Knowledge: actor memory at 235.00s, trace 22417. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22712}.
<a id="trace-22552"></a>
- 237.70s–237.70s (×1), actor 1, squad 0 (trace 22552): traveling. Knowledge: actor memory at 235.00s, trace 22417. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22712}.
<a id="trace-22553"></a>
- 237.70s–237.70s (×1), actor 1, squad 0 (trace 22553): current contact unknown for 10 s. Knowledge: actor memory at 235.00s, trace 22417. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22712}.
<a id="trace-22712"></a>
<a id="trace-22725"></a>
<a id="trace-22737"></a>
<a id="trace-22754"></a>
<a id="trace-22764"></a>
<a id="trace-22845"></a>
<a id="trace-22861"></a>
<a id="trace-22875"></a>
- 237.80s–241.30s (×8), actor 5, squad 0 (trace 22712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 22419. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22725}.
<a id="trace-2866"></a>
- 241.60s–241.60s (×1), actor 5, squad 0 (events line 2866): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22881"></a>
- 241.60s–241.60s (×1), actor 5, squad 0 (trace 22881): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.60s, trace 22881. Next observer evidence: {'until': 241.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519936392174291, 'next_transition': 22886}.
<a id="trace-22882"></a>
- 241.60s–241.60s (×1), actor 5, squad 0 (trace 22882): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.60s, trace 22882. Next observer evidence: {'until': 241.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519936392174291, 'next_transition': 22886}.
<a id="trace-22886"></a>
<a id="trace-22909"></a>
<a id="trace-22917"></a>
<a id="trace-22929"></a>
- 241.80s–243.30s (×4), actor 5, squad 0 (trace 22886): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 241.60s, trace 22882. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039671281758569, 'next_transition': 22909}.
<a id="trace-22940"></a>
- 243.65s–243.65s (×1), actor 1, squad 0 (trace 22940): received platoon directive. Knowledge: actor memory at 240.00s, trace 22770. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519936392174305, 'next_transition': 23104}.
<a id="trace-23104"></a>
<a id="trace-23124"></a>
<a id="trace-23150"></a>
<a id="trace-23226"></a>
<a id="trace-23233"></a>
<a id="trace-23255"></a>
<a id="trace-23263"></a>
<a id="trace-23279"></a>
<a id="trace-23286"></a>
<a id="trace-23301"></a>
<a id="trace-23322"></a>
<a id="trace-23334"></a>
<a id="trace-23348"></a>
<a id="trace-23437"></a>
<a id="trace-23445"></a>
<a id="trace-23457"></a>
<a id="trace-23471"></a>
<a id="trace-23489"></a>
<a id="trace-23501"></a>
<a id="trace-23513"></a>
<a id="trace-23518"></a>
<a id="trace-23532"></a>
<a id="trace-23541"></a>
<a id="trace-23616"></a>
<a id="trace-23627"></a>
<a id="trace-23646"></a>
<a id="trace-23660"></a>
<a id="trace-23688"></a>
<a id="trace-23696"></a>
<a id="trace-23711"></a>
<a id="trace-23718"></a>
<a id="trace-23732"></a>
<a id="trace-23739"></a>
<a id="trace-23809"></a>
<a id="trace-23818"></a>
<a id="trace-23828"></a>
<a id="trace-23834"></a>
<a id="trace-23850"></a>
<a id="trace-23855"></a>
<a id="trace-23873"></a>
<a id="trace-23890"></a>
<a id="trace-23903"></a>
<a id="trace-23912"></a>
<a id="trace-23983"></a>
<a id="trace-23990"></a>
<a id="trace-24000"></a>
<a id="trace-24006"></a>
<a id="trace-24017"></a>
- 243.80s–267.30s (×48), actor 5, squad 0 (trace 23104): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 241.60s, trace 22882. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040064466647297, 'next_transition': 23124}.
<a id="trace-24022"></a>
- 267.65s–267.65s (×1), actor 1, squad 0 (trace 24022): movement clock expired: request actual-position arrival certification; retain stage and generation. Knowledge: actor memory at 265.00s, trace 23917. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24026}.
<a id="trace-24026"></a>
<a id="trace-24034"></a>
<a id="trace-24045"></a>
<a id="trace-24059"></a>
<a id="trace-24075"></a>
<a id="trace-24159"></a>
<a id="trace-24167"></a>
<a id="trace-24178"></a>
<a id="trace-24184"></a>
<a id="trace-24195"></a>
<a id="trace-24202"></a>
<a id="trace-24211"></a>
<a id="trace-24218"></a>
<a id="trace-24229"></a>
<a id="trace-24238"></a>
<a id="trace-24311"></a>
<a id="trace-24318"></a>
<a id="trace-24333"></a>
<a id="trace-24351"></a>
<a id="trace-24364"></a>
<a id="trace-24371"></a>
<a id="trace-24382"></a>
<a id="trace-24387"></a>
<a id="trace-24400"></a>
<a id="trace-24408"></a>
<a id="trace-24480"></a>
<a id="trace-24484"></a>
<a id="trace-24494"></a>
<a id="trace-24505"></a>
<a id="trace-24517"></a>
<a id="trace-24528"></a>
<a id="trace-24547"></a>
<a id="trace-24555"></a>
<a id="trace-24570"></a>
<a id="trace-24581"></a>
<a id="trace-24651"></a>
<a id="trace-24657"></a>
<a id="trace-24665"></a>
<a id="trace-24672"></a>
<a id="trace-24682"></a>
<a id="trace-24690"></a>
<a id="trace-24704"></a>
<a id="trace-24711"></a>
<a id="trace-24729"></a>
<a id="trace-24740"></a>
<a id="trace-24822"></a>
<a id="trace-24831"></a>
<a id="trace-24843"></a>
<a id="trace-24850"></a>
<a id="trace-24861"></a>
<a id="trace-24867"></a>
<a id="trace-24877"></a>
<a id="trace-24883"></a>
<a id="trace-24907"></a>
<a id="trace-24983"></a>
<a id="trace-24989"></a>
<a id="trace-25003"></a>
<a id="trace-25021"></a>
<a id="trace-25034"></a>
<a id="trace-25044"></a>
<a id="trace-25053"></a>
<a id="trace-25060"></a>
<a id="trace-25073"></a>
<a id="trace-25082"></a>
<a id="trace-25151"></a>
<a id="trace-25157"></a>
<a id="trace-25164"></a>
<a id="trace-25175"></a>
- 267.80s–301.80s (×68), actor 5, squad 0 (trace 24026): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 23919. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24034}.
<a id="trace-3128"></a>
- 302.20s–302.20s (×1), actor 5, squad 0 (events line 3128): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25182"></a>
- 302.20s–302.20s (×1), actor 5, squad 0 (trace 25182): renew committed intent (75 s lifetime). Knowledge: actor memory at 302.20s, trace 25182. Next observer evidence: None.
<a id="trace-25189"></a>
<a id="trace-25200"></a>
<a id="trace-25220"></a>
<a id="trace-25229"></a>
<a id="trace-25242"></a>
<a id="trace-25252"></a>
<a id="trace-25325"></a>
<a id="trace-25331"></a>
<a id="trace-25338"></a>
<a id="trace-25345"></a>
<a id="trace-25357"></a>
<a id="trace-25363"></a>
<a id="trace-25376"></a>
<a id="trace-25382"></a>
<a id="trace-25400"></a>
<a id="trace-25421"></a>
<a id="trace-25494"></a>
<a id="trace-25498"></a>
<a id="trace-25510"></a>
<a id="trace-25519"></a>
<a id="trace-25531"></a>
<a id="trace-25535"></a>
<a id="trace-25544"></a>
<a id="trace-25550"></a>
<a id="trace-25563"></a>
<a id="trace-25577"></a>
<a id="trace-25648"></a>
<a id="trace-25658"></a>
<a id="trace-25682"></a>
<a id="trace-25691"></a>
<a id="trace-25704"></a>
<a id="trace-25712"></a>
<a id="trace-25720"></a>
<a id="trace-25728"></a>
<a id="trace-25739"></a>
<a id="trace-25747"></a>
<a id="trace-25817"></a>
<a id="trace-25823"></a>
<a id="trace-25836"></a>
<a id="trace-25845"></a>
<a id="trace-25860"></a>
<a id="trace-25866"></a>
<a id="trace-25887"></a>
<a id="trace-25896"></a>
<a id="trace-25912"></a>
<a id="trace-25920"></a>
<a id="trace-25990"></a>
<a id="trace-25995"></a>
<a id="trace-26007"></a>
<a id="trace-26012"></a>
<a id="trace-26021"></a>
<a id="trace-26027"></a>
<a id="trace-26041"></a>
<a id="trace-26047"></a>
<a id="trace-26067"></a>
<a id="trace-26085"></a>
<a id="trace-26156"></a>
<a id="trace-26167"></a>
<a id="trace-26178"></a>
<a id="trace-26183"></a>
<a id="trace-26195"></a>
<a id="trace-26203"></a>
<a id="trace-26213"></a>
<a id="trace-26219"></a>
<a id="trace-26232"></a>
<a id="trace-26246"></a>
<a id="trace-26314"></a>
<a id="trace-26325"></a>
<a id="trace-26344"></a>
<a id="trace-26353"></a>
<a id="trace-26367"></a>
<a id="trace-26371"></a>
<a id="trace-26381"></a>
<a id="trace-26388"></a>
<a id="trace-26402"></a>
<a id="trace-26413"></a>
<a id="trace-26481"></a>
<a id="trace-26488"></a>
<a id="trace-26501"></a>
<a id="trace-26509"></a>
<a id="trace-26525"></a>
<a id="trace-26542"></a>
<a id="trace-26551"></a>
<a id="trace-26558"></a>
<a id="trace-26573"></a>
<a id="trace-26583"></a>
<a id="trace-26655"></a>
<a id="trace-26663"></a>
<a id="trace-26670"></a>
<a id="trace-26678"></a>
<a id="trace-26692"></a>
<a id="trace-26700"></a>
<a id="trace-26710"></a>
<a id="trace-26720"></a>
<a id="trace-26743"></a>
<a id="trace-26753"></a>
<a id="trace-26824"></a>
<a id="trace-26833"></a>
<a id="trace-26842"></a>
<a id="trace-26850"></a>
<a id="trace-26864"></a>
<a id="trace-26870"></a>
<a id="trace-26881"></a>
<a id="trace-26889"></a>
<a id="trace-26905"></a>
<a id="trace-26915"></a>
<a id="trace-26987"></a>
<a id="trace-26995"></a>
<a id="trace-27015"></a>
<a id="trace-27023"></a>
<a id="trace-27034"></a>
<a id="trace-27038"></a>
<a id="trace-27046"></a>
<a id="trace-27052"></a>
<a id="trace-27067"></a>
<a id="trace-27078"></a>
- 302.30s–359.80s (×116), actor 5, squad 0 (trace 25189): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.20s, trace 25182. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25200}.

## Net delivery

262 matched order/radio deliveries; 509 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.373s; maximum 2.250s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3311: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3312: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3313: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3314: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3315: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3316: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3319: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3320: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3815: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3816: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3817: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3818: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3819: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3820: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3821: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3822: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3823: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3824: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5452: estimate 11.31; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5453: estimate 11.31; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5454: estimate 11.31; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5455: estimate 11.31; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5488: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5493: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5494: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5498: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5499: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5500: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5501: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5502: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5503: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5504: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5505: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5506: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5507: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6751: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6756: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6757: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 6759: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6761: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6762: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6763: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6764: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6765: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6766: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6767: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6768: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6769: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6770: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 48.35s leader 5, trace 7242: estimate 12.10; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 48.35s leader 5, trace 7243: estimate 12.10; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8150: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8151: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8153: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8155: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8156: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 8158: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8160: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8161: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8162: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8163: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8164: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8165: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8166: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8167: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8168: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8169: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 10268: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10269: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 10270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10271: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10273: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10274: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 10276: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10277: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10278: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10279: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10280: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10281: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10282: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10283: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10284: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10285: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10286: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10287: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 10452: estimate 12.25; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 10453: estimate 12.25; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10936: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10938: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10940: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10941: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 10943: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10944: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10945: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10946: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10947: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10948: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10949: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10950: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10951: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10952: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10953: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10954: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11296: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 11297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11298: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11300: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11301: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 11303: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11304: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11305: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11306: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11307: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11308: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11309: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11310: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11311: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11312: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11313: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11314: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 11443: estimate 12.07; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 11444: estimate 12.07; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11580: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11582: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11584: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11585: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 11587: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11588: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11589: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11590: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11591: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11592: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11593: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11594: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11595: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11596: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11597: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11598: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 11764: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 11765: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12010: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12012: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12014: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12015: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 12017: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12018: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12019: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12020: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12021: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12022: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12023: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12024: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12025: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12026: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12027: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12028: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 12257: estimate 12.02; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 12258: estimate 12.02; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12288: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 12289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12290: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12292: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12293: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 12295: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12296: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12297: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12298: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12299: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12300: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12301: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12302: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12303: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12304: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12305: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12306: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 12559: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 12560: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 12562: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 12563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 12564: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12566: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12567: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 12568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 12569: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12570: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12571: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12572: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12573: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12574: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12575: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12576: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12577: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12578: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 12579: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 12580: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14664: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14666: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14668: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14669: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 14671: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14672: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14673: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14674: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14675: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14676: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14677: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14678: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14679: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14680: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14681: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14682: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 14770: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 14771: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 14808: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 14809: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14897: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 14898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14899: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14901: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14902: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14904: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14905: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14906: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14907: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14908: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14909: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14910: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14911: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14912: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14913: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14914: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15163: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 15164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 15165: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15167: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15168: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15170: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15171: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15172: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15173: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15174: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15175: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15176: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15177: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15178: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15179: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15180: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15648: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15649: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15650: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15652: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15653: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15655: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15656: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15657: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15658: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15659: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15660: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15661: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15662: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15663: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15664: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15945: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 15946: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15947: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15949: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15950: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15952: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15953: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15954: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15955: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15956: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15957: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15958: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15959: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15960: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15961: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16750: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 16751: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16752: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16754: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16755: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16757: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16758: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16759: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16760: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16761: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16762: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16763: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16764: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16765: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16766: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 118.20s leader 5, trace 17276: estimate 11.83; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 118.55s leader 5, trace 17294: estimate 11.82; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 118.55s leader 5, trace 17295: estimate 11.82; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17345: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 17346: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17347: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17349: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17350: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17352: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17353: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17354: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17355: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17356: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17357: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17358: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17359: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17360: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17361: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17955: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 17956: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17958: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17959: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17961: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17962: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17963: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17964: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17965: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17966: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17967: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17968: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17969: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17970: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18214: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18216: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18217: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18219: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18220: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18221: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18222: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18223: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18224: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18225: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18226: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18227: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18228: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18410: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18412: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18413: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18415: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18416: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18417: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18418: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18419: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18420: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18421: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18422: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18423: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18424: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18710: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18712: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18713: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18715: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18716: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18717: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18718: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18719: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18720: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18721: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18722: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18723: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18724: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19024: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19026: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19027: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 19028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19029: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19030: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19031: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19032: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19033: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19034: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19035: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19036: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19037: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19038: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19216: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19218: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19219: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19221: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19222: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19223: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19224: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19225: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19226: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19227: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19228: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19229: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19230: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 19431: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19433: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19434: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 19435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19436: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19437: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19438: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19439: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19440: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19441: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19442: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19443: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19444: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19445: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 19692: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19694: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 19695: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 19696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19697: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19698: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 19699: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19700: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 19701: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19702: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19703: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19704: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19705: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19706: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 19835: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 19836: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 19908: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 19909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 19910: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 19911: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 19912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 19913: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 19914: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 19915: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 19916: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 19917: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 19918: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 19919: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 19920: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 19921: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 19922: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 20166: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 20167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20168: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 20169: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 20170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20171: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20172: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20173: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20174: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20175: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20176: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20177: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20178: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20179: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20180: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 20371: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 20372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 20373: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 20374: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 20375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20376: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20377: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20378: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20379: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 20380: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20381: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20382: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20383: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20384: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20385: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 20573: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 20574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20575: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20576: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 20577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20578: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20579: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20580: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20581: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20582: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20583: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20584: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20585: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20586: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20587: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 20742: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 20743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 20744: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20745: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 20746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 20747: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 20748: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 20749: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 20750: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 20751: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 20752: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 20753: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 20754: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 20755: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 20756: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 20902: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 20903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 20904: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20905: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 20906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20907: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 20908: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 20909: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 20910: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 20911: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 20912: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 20913: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 20914: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 20915: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 20916: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 21078: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21080: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21081: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21083: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21084: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21085: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21086: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21087: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21088: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21089: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21090: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21091: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21092: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 21249: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21251: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21252: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21254: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21255: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21256: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21257: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21258: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21259: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21260: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21261: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21262: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21263: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 21421: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 21422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21423: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21424: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 21425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21426: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21427: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21428: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21429: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21430: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21431: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21432: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21433: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21434: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21435: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 21579: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 21580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 21581: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21582: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 21584: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21585: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 21586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21587: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21588: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21589: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21590: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21591: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21592: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21593: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 21749: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 21750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 21751: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 21752: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 21753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 21754: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 21755: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 21756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 21757: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 21758: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 21759: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 21760: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 21761: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 21762: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 21763: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 21921: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 21922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 21923: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 21924: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 21925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 21926: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 21927: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 21928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 21929: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 21930: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 21931: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 21932: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 21933: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 21934: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 21935: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 223.25s leader 5, trace 22047: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 22093: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 22094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22095: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22096: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 22097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22098: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22099: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22101: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22102: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22103: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22104: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22105: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22106: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22107: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 22254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 22255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 22258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22259: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22260: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22262: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22263: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22264: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22265: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22266: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22267: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22268: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 22417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 22418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 22421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 22770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 22771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 22772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 22773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 22774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 22775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 22776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 22777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.60s leader 5, trace 22881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.60s leader 5, trace 22882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 23162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 23357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 23358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 23546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 23547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 23548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 23549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 23550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 23551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 23553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 23744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 23745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 23746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 23747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 23748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 23749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 23751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 23917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 23918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 23919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 23920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 23921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 23922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 23923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 23924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 23927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 24082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 24083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 24246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 24413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 24414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 24415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 24417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 24586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 24587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 24588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 24590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 24591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 24593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 24755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 24756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 24758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 24759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 24760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 24761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 24763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 24764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 24765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 24766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 24767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 24768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 24769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 24916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 24917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 24918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 24919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 24920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 24921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 24922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 24923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 24924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 24925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 24926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 24927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 24928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 24929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 24930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 25085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 25086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.20s leader 5, trace 25182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 25260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 25261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 25263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 25264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 25428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 25429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 25430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 25431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 25432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 25435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 25583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 25585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 25586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 25587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 25588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 25590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 25596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 25752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 25755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 25756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 25760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 25761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 25762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 25763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 25764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 25765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 25766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 25925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 25926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 25927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 25928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 25929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 25930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 25931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 25932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 25933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 25934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 25935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 25936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 25937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 25938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 25939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 26090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 26091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 26093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 26094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 26250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 26252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 26253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 26416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 26417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 26418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 26419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 26420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 26421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 26588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 26589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 26590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 26592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 26594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 26596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 26597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 26598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 26599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 26600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 26601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 26602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 26759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 26760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 26761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 26762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 26763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 26764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 26765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 26766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 26767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 26768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 26769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 26770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 26771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 26772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 26773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 26918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 26919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 26920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 26921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 26922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 26923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 26924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 26925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 26926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 26927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 26928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 26929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 26930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 26931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 26932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 27084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 27085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 27087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 27088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bren killed in action
- 1: Cole killed in action
- 1: Ash killed in action
- 1: Soren incapacitated

## Outcome attribution

- 163.25s, evidence 2520: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 163.25s, evidence 19835: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.298440 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 163.25s, evidence 19836: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.298440 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 223.25s, evidence 2780: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
