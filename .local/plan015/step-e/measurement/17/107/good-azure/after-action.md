# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/107/good-azure/battle-107-1789674010542381589`

## Battle summary

**Ember** · 360 s · 247 shots.

### Turning points

- 19.1s, squad 4: contact (events line 241). First recorded contact.
- 26.9s, squad 0: withdrawal ([trace 5159](#trace-5159)). 68.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 40.5s, squad 1: help call ([trace 10303](#trace-10303)). 68.8s, squad 0: answered a neighbour with support by fire.
- 42.0s, squad 0: help call ([trace 10862](#trace-10862)). 43.3s, squad 1: answered a neighbour with support by fire.
- 43.3s, squad 1: help answer ([trace 11133](#trace-11133)). 79.0s, squad 1: advanced tactically.
- 48.6s, squad 1: help call ([trace 12513](#trace-12513)). 68.8s, squad 0: answered a neighbour with support by fire.
- 68.8s, squad 0: help answer ([trace 13935](#trace-13935)). 94.2s, squad 0: advanced tactically.
- 93.2s, squad 0: help call ([trace 17360](#trace-17360)). No completion observed before termination.
- 93.3s, squad 1: withdrawal ([trace 17386](#trace-17386)). No completion observed before termination.
- 108.4s, squad 0: help call ([trace 18955](#trace-18955)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, answered a neighbour with support by fire and 2 further drill types; withdrew; 3 shots, 3/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; no completed objective recorded; 12 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 183 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 49 shots, 0/4 lost.

### Decisions and attribution

At 41.5s, squad 1 chose advanced tactically ([trace 10569](#trace-10569)), followed by 1 shots and 0 own casualties; estimate 15.6 against 0 distinct squad-reported contacts; At 43.3s, squad 1 chose answered a neighbour with support by fire ([trace 11133](#trace-11133)), followed by 1 shots and 0 own casualties; estimate 15.6 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324748085966, 'next_transition': 1004}.

### Communication

231 matched deliveries (mean 0.43s, max 1.60s); 515 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.15s, squad 4, contact, evidence events line 241: First recorded contact; .
- 26.90s, squad 0, withdrawal, evidence 5159: BreakContact: believed ratio at least two without superiority; 68.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 40.50s, squad 1, help call, evidence 10303: NeedSupport; 68.8s, squad 0: answered a neighbour with support by fire.
- 42.00s, squad 0, help call, evidence 10862: NeedSupport; 43.3s, squad 1: answered a neighbour with support by fire.
- 43.30s, squad 1, help answer, evidence 11133: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.0s, squad 1: advanced tactically.
- 48.60s, squad 1, help call, evidence 12513: NeedSupport; 68.8s, squad 0: answered a neighbour with support by fire.
- 68.80s, squad 0, help answer, evidence 13935: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 94.2s, squad 0: advanced tactically.
- 93.15s, squad 0, help call, evidence 17360: NeedSupport; No completion observed before termination.
- 93.35s, squad 1, withdrawal, evidence 17386: Withdraw to received rally; No completion observed before termination.
- 108.40s, squad 0, help call, evidence 18955: NeedSupport; No completion observed before termination.
- 133.35s, squad 0, withdrawal, evidence 20638: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915524478106426, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395202, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395202, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395202, 'next_transition': 105}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599859215334897, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324748085966, 'next_transition': 1004}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449938735798831, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324748085966, 'next_transition': 1004}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324748085966, 'next_transition': 1004}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1208"></a>
<a id="trace-1210"></a>
<a id="trace-1255"></a>
<a id="trace-1257"></a>
<a id="trace-1282"></a>
<a id="trace-1284"></a>
<a id="trace-1325"></a>
<a id="trace-1327"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1410"></a>
<a id="trace-1412"></a>
<a id="trace-1435"></a>
<a id="trace-1437"></a>
<a id="trace-1455"></a>
<a id="trace-1457"></a>
<a id="trace-1548"></a>
<a id="trace-1550"></a>
<a id="trace-1569"></a>
<a id="trace-1571"></a>
<a id="trace-1592"></a>
<a id="trace-1594"></a>
<a id="trace-1621"></a>
<a id="trace-1623"></a>
<a id="trace-1651"></a>
<a id="trace-1653"></a>
<a id="trace-1679"></a>
<a id="trace-1681"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450031335669117, 'next_transition': 881}.
<a id="trace-995"></a>
<a id="trace-1212"></a>
<a id="trace-1259"></a>
<a id="trace-1261"></a>
<a id="trace-1366"></a>
<a id="trace-1368"></a>
<a id="trace-1414"></a>
<a id="trace-1416"></a>
<a id="trace-1459"></a>
<a id="trace-1461"></a>
<a id="trace-1552"></a>
<a id="trace-1554"></a>
<a id="trace-1573"></a>
<a id="trace-1575"></a>
<a id="trace-1596"></a>
<a id="trace-1598"></a>
<a id="trace-1655"></a>
<a id="trace-1657"></a>
<a id="trace-2016"></a>
<a id="trace-2018"></a>
<a id="trace-2047"></a>
<a id="trace-2049"></a>
<a id="trace-2176"></a>
<a id="trace-2178"></a>
<a id="trace-2241"></a>
<a id="trace-2243"></a>
<a id="trace-2670"></a>
<a id="trace-2672"></a>
<a id="trace-2699"></a>
<a id="trace-2701"></a>
<a id="trace-2716"></a>
<a id="trace-2718"></a>
<a id="trace-2763"></a>
<a id="trace-2765"></a>
<a id="trace-3123"></a>
<a id="trace-3125"></a>
<a id="trace-3153"></a>
<a id="trace-3155"></a>
<a id="trace-3490"></a>
<a id="trace-3492"></a>
<a id="trace-3981"></a>
<a id="trace-3983"></a>
<a id="trace-4488"></a>
<a id="trace-4490"></a>
<a id="trace-4528"></a>
<a id="trace-4530"></a>
<a id="trace-4846"></a>
<a id="trace-4848"></a>
<a id="trace-4893"></a>
<a id="trace-4895"></a>
<a id="trace-4954"></a>
<a id="trace-4956"></a>
<a id="trace-5049"></a>
<a id="trace-5051"></a>
<a id="trace-5078"></a>
<a id="trace-5080"></a>
<a id="trace-5621"></a>
<a id="trace-5623"></a>
<a id="trace-6031"></a>
<a id="trace-6033"></a>
<a id="trace-6078"></a>
<a id="trace-6080"></a>
<a id="trace-6101"></a>
<a id="trace-6103"></a>
<a id="trace-6132"></a>
<a id="trace-6134"></a>
<a id="trace-6177"></a>
<a id="trace-6179"></a>
<a id="trace-6282"></a>
<a id="trace-6284"></a>
<a id="trace-6304"></a>
<a id="trace-6306"></a>
<a id="trace-6331"></a>
<a id="trace-6333"></a>
<a id="trace-6356"></a>
<a id="trace-6358"></a>
<a id="trace-6383"></a>
<a id="trace-6385"></a>
<a id="trace-6413"></a>
<a id="trace-6415"></a>
<a id="trace-6441"></a>
<a id="trace-6443"></a>
<a id="trace-6858"></a>
<a id="trace-6860"></a>
<a id="trace-6891"></a>
<a id="trace-6893"></a>
<a id="trace-7042"></a>
<a id="trace-7044"></a>
<a id="trace-7077"></a>
<a id="trace-7079"></a>
<a id="trace-7106"></a>
<a id="trace-7108"></a>
<a id="trace-7139"></a>
<a id="trace-7141"></a>
<a id="trace-7191"></a>
<a id="trace-7193"></a>
<a id="trace-7235"></a>
<a id="trace-7237"></a>
<a id="trace-7288"></a>
<a id="trace-7290"></a>
<a id="trace-10270"></a>
<a id="trace-10272"></a>
<a id="trace-10388"></a>
<a id="trace-10390"></a>
<a id="trace-10839"></a>
<a id="trace-10841"></a>
<a id="trace-10908"></a>
<a id="trace-10910"></a>
<a id="trace-10939"></a>
<a id="trace-10941"></a>
<a id="trace-11128"></a>
<a id="trace-11130"></a>
<a id="trace-12212"></a>
<a id="trace-12214"></a>
<a id="trace-12258"></a>
<a id="trace-12260"></a>
<a id="trace-12379"></a>
<a id="trace-12381"></a>
<a id="trace-12400"></a>
<a id="trace-12402"></a>
<a id="trace-12426"></a>
<a id="trace-12428"></a>
<a id="trace-12444"></a>
<a id="trace-12446"></a>
<a id="trace-12462"></a>
<a id="trace-12464"></a>
<a id="trace-12483"></a>
<a id="trace-12485"></a>
<a id="trace-12533"></a>
<a id="trace-12535"></a>
<a id="trace-12560"></a>
<a id="trace-12562"></a>
<a id="trace-12660"></a>
<a id="trace-12662"></a>
<a id="trace-12679"></a>
<a id="trace-12681"></a>
<a id="trace-12697"></a>
<a id="trace-12699"></a>
<a id="trace-12714"></a>
<a id="trace-12716"></a>
<a id="trace-12733"></a>
<a id="trace-12735"></a>
<a id="trace-12757"></a>
<a id="trace-12759"></a>
<a id="trace-12776"></a>
<a id="trace-12778"></a>
<a id="trace-12791"></a>
<a id="trace-12793"></a>
<a id="trace-13016"></a>
<a id="trace-13018"></a>
<a id="trace-13108"></a>
<a id="trace-13110"></a>
<a id="trace-13123"></a>
<a id="trace-13125"></a>
<a id="trace-13184"></a>
<a id="trace-13186"></a>
<a id="trace-13209"></a>
<a id="trace-13211"></a>
<a id="trace-13229"></a>
<a id="trace-13231"></a>
<a id="trace-13270"></a>
<a id="trace-13272"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13308"></a>
<a id="trace-13310"></a>
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13431"></a>
<a id="trace-13433"></a>
<a id="trace-13448"></a>
<a id="trace-13450"></a>
<a id="trace-13486"></a>
<a id="trace-13488"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13525"></a>
<a id="trace-13527"></a>
<a id="trace-13551"></a>
<a id="trace-13553"></a>
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13675"></a>
<a id="trace-13677"></a>
<a id="trace-13700"></a>
<a id="trace-13702"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13875"></a>
<a id="trace-13877"></a>
<a id="trace-13928"></a>
<a id="trace-13930"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15714"></a>
<a id="trace-15716"></a>
<a id="trace-15808"></a>
<a id="trace-15810"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15867"></a>
<a id="trace-15869"></a>
<a id="trace-15899"></a>
<a id="trace-15901"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15931"></a>
<a id="trace-15933"></a>
<a id="trace-15976"></a>
<a id="trace-15978"></a>
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16029"></a>
<a id="trace-16031"></a>
<a id="trace-16107"></a>
<a id="trace-16109"></a>
<a id="trace-16116"></a>
<a id="trace-16118"></a>
<a id="trace-16146"></a>
<a id="trace-16148"></a>
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16197"></a>
<a id="trace-16199"></a>
<a id="trace-16214"></a>
<a id="trace-16216"></a>
<a id="trace-16473"></a>
<a id="trace-16475"></a>
<a id="trace-16625"></a>
<a id="trace-16627"></a>
<a id="trace-16646"></a>
<a id="trace-16648"></a>
<a id="trace-16659"></a>
<a id="trace-16661"></a>
<a id="trace-16679"></a>
<a id="trace-16681"></a>
<a id="trace-16690"></a>
<a id="trace-16692"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-16958"></a>
<a id="trace-16960"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-17003"></a>
<a id="trace-17005"></a>
<a id="trace-17048"></a>
<a id="trace-17050"></a>
<a id="trace-17067"></a>
<a id="trace-17069"></a>
<a id="trace-17273"></a>
<a id="trace-17275"></a>
<a id="trace-17301"></a>
<a id="trace-17303"></a>
<a id="trace-17317"></a>
<a id="trace-17319"></a>
<a id="trace-17339"></a>
<a id="trace-17341"></a>
<a id="trace-17350"></a>
<a id="trace-17352"></a>
<a id="trace-17379"></a>
<a id="trace-17381"></a>
<a id="trace-17462"></a>
<a id="trace-17464"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17836"></a>
<a id="trace-17838"></a>
<a id="trace-17976"></a>
<a id="trace-17978"></a>
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18039"></a>
<a id="trace-18041"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18112"></a>
<a id="trace-18114"></a>
<a id="trace-18124"></a>
<a id="trace-18126"></a>
<a id="trace-18146"></a>
<a id="trace-18148"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
<a id="trace-18422"></a>
<a id="trace-18424"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18520"></a>
<a id="trace-18522"></a>
<a id="trace-18532"></a>
<a id="trace-18534"></a>
<a id="trace-18557"></a>
<a id="trace-18559"></a>
<a id="trace-18659"></a>
<a id="trace-18661"></a>
<a id="trace-18867"></a>
<a id="trace-18869"></a>
<a id="trace-18879"></a>
<a id="trace-18881"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-18923"></a>
<a id="trace-18925"></a>
<a id="trace-18948"></a>
<a id="trace-18950"></a>
<a id="trace-18983"></a>
<a id="trace-18985"></a>
<a id="trace-19007"></a>
<a id="trace-19009"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19136"></a>
<a id="trace-19138"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19169"></a>
<a id="trace-19171"></a>
<a id="trace-19187"></a>
<a id="trace-19189"></a>
<a id="trace-19201"></a>
<a id="trace-19203"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19311"></a>
<a id="trace-19313"></a>
<a id="trace-19352"></a>
<a id="trace-19354"></a>
<a id="trace-19536"></a>
<a id="trace-19538"></a>
<a id="trace-19551"></a>
<a id="trace-19553"></a>
<a id="trace-19588"></a>
<a id="trace-19590"></a>
<a id="trace-19619"></a>
<a id="trace-19621"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19732"></a>
<a id="trace-19734"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19799"></a>
<a id="trace-19801"></a>
<a id="trace-19813"></a>
<a id="trace-19815"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19896"></a>
<a id="trace-19898"></a>
<a id="trace-19989"></a>
<a id="trace-19991"></a>
<a id="trace-20002"></a>
<a id="trace-20004"></a>
<a id="trace-20024"></a>
<a id="trace-20026"></a>
<a id="trace-20040"></a>
<a id="trace-20042"></a>
<a id="trace-20056"></a>
<a id="trace-20058"></a>
<a id="trace-20216"></a>
<a id="trace-20218"></a>
<a id="trace-20395"></a>
<a id="trace-20397"></a>
<a id="trace-20414"></a>
<a id="trace-20416"></a>
<a id="trace-20517"></a>
<a id="trace-20519"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20554"></a>
<a id="trace-20556"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20602"></a>
<a id="trace-20604"></a>
<a id="trace-20621"></a>
<a id="trace-20623"></a>
<a id="trace-20634"></a>
<a id="trace-20636"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21073"></a>
<a id="trace-21075"></a>
<a id="trace-21086"></a>
<a id="trace-21088"></a>
<a id="trace-21166"></a>
<a id="trace-21168"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21229"></a>
<a id="trace-21231"></a>
<a id="trace-21258"></a>
<a id="trace-21260"></a>
<a id="trace-21280"></a>
<a id="trace-21282"></a>
<a id="trace-21354"></a>
<a id="trace-21356"></a>
<a id="trace-21364"></a>
<a id="trace-21366"></a>
<a id="trace-21384"></a>
<a id="trace-21386"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21411"></a>
<a id="trace-21413"></a>
<a id="trace-21432"></a>
<a id="trace-21434"></a>
<a id="trace-21442"></a>
<a id="trace-21444"></a>
<a id="trace-21457"></a>
<a id="trace-21459"></a>
<a id="trace-21473"></a>
<a id="trace-21475"></a>
<a id="trace-21547"></a>
<a id="trace-21549"></a>
<a id="trace-21581"></a>
<a id="trace-21583"></a>
<a id="trace-21594"></a>
<a id="trace-21596"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21651"></a>
<a id="trace-21653"></a>
<a id="trace-21675"></a>
<a id="trace-21677"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21787"></a>
<a id="trace-21789"></a>
<a id="trace-21805"></a>
<a id="trace-21807"></a>
<a id="trace-21816"></a>
<a id="trace-21818"></a>
<a id="trace-21837"></a>
<a id="trace-21839"></a>
<a id="trace-21850"></a>
<a id="trace-21852"></a>
<a id="trace-21869"></a>
<a id="trace-21871"></a>
<a id="trace-21954"></a>
<a id="trace-21956"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-21974"></a>
<a id="trace-21976"></a>
<a id="trace-21986"></a>
<a id="trace-21988"></a>
<a id="trace-21999"></a>
<a id="trace-22001"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22069"></a>
<a id="trace-22071"></a>
<a id="trace-22098"></a>
<a id="trace-22100"></a>
<a id="trace-22169"></a>
<a id="trace-22171"></a>
<a id="trace-22197"></a>
<a id="trace-22199"></a>
<a id="trace-22206"></a>
<a id="trace-22208"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22250"></a>
<a id="trace-22252"></a>
<a id="trace-22271"></a>
<a id="trace-22273"></a>
<a id="trace-22288"></a>
<a id="trace-22290"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22376"></a>
<a id="trace-22378"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22405"></a>
<a id="trace-22407"></a>
<a id="trace-22420"></a>
<a id="trace-22422"></a>
<a id="trace-22429"></a>
<a id="trace-22431"></a>
<a id="trace-22444"></a>
<a id="trace-22446"></a>
<a id="trace-22460"></a>
<a id="trace-22462"></a>
<a id="trace-22479"></a>
<a id="trace-22481"></a>
<a id="trace-22493"></a>
<a id="trace-22495"></a>
<a id="trace-22574"></a>
<a id="trace-22576"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22623"></a>
<a id="trace-22625"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22668"></a>
<a id="trace-22670"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22781"></a>
<a id="trace-22783"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22804"></a>
<a id="trace-22806"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22857"></a>
<a id="trace-22859"></a>
<a id="trace-22876"></a>
<a id="trace-22878"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23005"></a>
<a id="trace-23007"></a>
<a id="trace-23020"></a>
<a id="trace-23022"></a>
<a id="trace-23036"></a>
<a id="trace-23038"></a>
<a id="trace-23052"></a>
<a id="trace-23054"></a>
<a id="trace-23062"></a>
<a id="trace-23064"></a>
<a id="trace-23077"></a>
<a id="trace-23079"></a>
<a id="trace-23111"></a>
<a id="trace-23113"></a>
<a id="trace-23127"></a>
<a id="trace-23129"></a>
<a id="trace-23207"></a>
<a id="trace-23209"></a>
<a id="trace-23216"></a>
<a id="trace-23218"></a>
<a id="trace-23242"></a>
<a id="trace-23244"></a>
<a id="trace-23252"></a>
<a id="trace-23254"></a>
<a id="trace-23269"></a>
<a id="trace-23271"></a>
<a id="trace-23279"></a>
<a id="trace-23281"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23329"></a>
<a id="trace-23331"></a>
<a id="trace-23345"></a>
<a id="trace-23347"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23501"></a>
<a id="trace-23503"></a>
<a id="trace-23542"></a>
<a id="trace-23544"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23630"></a>
<a id="trace-23632"></a>
<a id="trace-23640"></a>
<a id="trace-23642"></a>
<a id="trace-23659"></a>
<a id="trace-23661"></a>
<a id="trace-23673"></a>
<a id="trace-23675"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23703"></a>
<a id="trace-23705"></a>
<a id="trace-23719"></a>
<a id="trace-23721"></a>
<a id="trace-23738"></a>
<a id="trace-23740"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23853"></a>
<a id="trace-23855"></a>
<a id="trace-23862"></a>
<a id="trace-23864"></a>
<a id="trace-23876"></a>
<a id="trace-23878"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-23944"></a>
<a id="trace-23946"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-24064"></a>
<a id="trace-24066"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24109"></a>
<a id="trace-24111"></a>
<a id="trace-24123"></a>
<a id="trace-24125"></a>
<a id="trace-24152"></a>
<a id="trace-24154"></a>
<a id="trace-24165"></a>
<a id="trace-24167"></a>
<a id="trace-24188"></a>
<a id="trace-24190"></a>
<a id="trace-24203"></a>
<a id="trace-24205"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24306"></a>
<a id="trace-24308"></a>
<a id="trace-24324"></a>
<a id="trace-24326"></a>
<a id="trace-24350"></a>
<a id="trace-24352"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24385"></a>
<a id="trace-24387"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24419"></a>
<a id="trace-24421"></a>
<a id="trace-24491"></a>
<a id="trace-24493"></a>
<a id="trace-24514"></a>
<a id="trace-24516"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24561"></a>
<a id="trace-24563"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24635"></a>
<a id="trace-24637"></a>
<a id="trace-24707"></a>
<a id="trace-24709"></a>
<a id="trace-24718"></a>
<a id="trace-24720"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24780"></a>
<a id="trace-24782"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24936"></a>
<a id="trace-24938"></a>
<a id="trace-24949"></a>
<a id="trace-24951"></a>
<a id="trace-24961"></a>
<a id="trace-24963"></a>
<a id="trace-24974"></a>
<a id="trace-24976"></a>
<a id="trace-24984"></a>
<a id="trace-24986"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25029"></a>
<a id="trace-25031"></a>
<a id="trace-25042"></a>
<a id="trace-25044"></a>
<a id="trace-25122"></a>
<a id="trace-25124"></a>
<a id="trace-25139"></a>
<a id="trace-25141"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25173"></a>
<a id="trace-25175"></a>
<a id="trace-25198"></a>
<a id="trace-25200"></a>
<a id="trace-25210"></a>
<a id="trace-25212"></a>
<a id="trace-25224"></a>
<a id="trace-25226"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25253"></a>
<a id="trace-25255"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25349"></a>
<a id="trace-25351"></a>
<a id="trace-25363"></a>
<a id="trace-25365"></a>
<a id="trace-25376"></a>
<a id="trace-25378"></a>
<a id="trace-25432"></a>
<a id="trace-25434"></a>
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25474"></a>
<a id="trace-25476"></a>
<a id="trace-25487"></a>
<a id="trace-25489"></a>
<a id="trace-25560"></a>
<a id="trace-25562"></a>
<a id="trace-25569"></a>
<a id="trace-25571"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25594"></a>
<a id="trace-25596"></a>
<a id="trace-25610"></a>
<a id="trace-25612"></a>
<a id="trace-25620"></a>
<a id="trace-25622"></a>
<a id="trace-25636"></a>
<a id="trace-25638"></a>
<a id="trace-25656"></a>
<a id="trace-25658"></a>
<a id="trace-25701"></a>
<a id="trace-25703"></a>
<a id="trace-25785"></a>
<a id="trace-25787"></a>
<a id="trace-25794"></a>
<a id="trace-25796"></a>
<a id="trace-25816"></a>
<a id="trace-25818"></a>
<a id="trace-25831"></a>
<a id="trace-25833"></a>
<a id="trace-25841"></a>
<a id="trace-25843"></a>
<a id="trace-25865"></a>
<a id="trace-25867"></a>
<a id="trace-25883"></a>
<a id="trace-25885"></a>
<a id="trace-25976"></a>
<a id="trace-25978"></a>
<a id="trace-25988"></a>
<a id="trace-25990"></a>
<a id="trace-26015"></a>
<a id="trace-26017"></a>
<a id="trace-26027"></a>
<a id="trace-26029"></a>
<a id="trace-26053"></a>
<a id="trace-26055"></a>
<a id="trace-26086"></a>
<a id="trace-26088"></a>
<a id="trace-26115"></a>
<a id="trace-26117"></a>
<a id="trace-26188"></a>
<a id="trace-26190"></a>
<a id="trace-26198"></a>
<a id="trace-26200"></a>
<a id="trace-26224"></a>
<a id="trace-26226"></a>
<a id="trace-26254"></a>
<a id="trace-26256"></a>
<a id="trace-26283"></a>
<a id="trace-26285"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26409"></a>
<a id="trace-26411"></a>
<a id="trace-26439"></a>
<a id="trace-26441"></a>
<a id="trace-26452"></a>
<a id="trace-26454"></a>
<a id="trace-26494"></a>
<a id="trace-26496"></a>
<a id="trace-26515"></a>
<a id="trace-26517"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26628"></a>
<a id="trace-26630"></a>
<a id="trace-26637"></a>
<a id="trace-26639"></a>
<a id="trace-26659"></a>
<a id="trace-26661"></a>
<a id="trace-26673"></a>
<a id="trace-26675"></a>
<a id="trace-26696"></a>
<a id="trace-26698"></a>
<a id="trace-26728"></a>
<a id="trace-26730"></a>
<a id="trace-26821"></a>
<a id="trace-26823"></a>
<a id="trace-26831"></a>
<a id="trace-26833"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26894"></a>
<a id="trace-26896"></a>
<a id="trace-26906"></a>
<a id="trace-26908"></a>
<a id="trace-26931"></a>
<a id="trace-26933"></a>
<a id="trace-26961"></a>
<a id="trace-26963"></a>
<a id="trace-27040"></a>
<a id="trace-27042"></a>
<a id="trace-27055"></a>
<a id="trace-27057"></a>
<a id="trace-27071"></a>
<a id="trace-27073"></a>
<a id="trace-27087"></a>
<a id="trace-27089"></a>
<a id="trace-27132"></a>
<a id="trace-27134"></a>
<a id="trace-27167"></a>
<a id="trace-27169"></a>
<a id="trace-27181"></a>
<a id="trace-27183"></a>
<a id="trace-27253"></a>
<a id="trace-27255"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27297"></a>
<a id="trace-27299"></a>
<a id="trace-27308"></a>
<a id="trace-27310"></a>
<a id="trace-27330"></a>
<a id="trace-27332"></a>
<a id="trace-27342"></a>
<a id="trace-27344"></a>
<a id="trace-27370"></a>
<a id="trace-27372"></a>
<a id="trace-27383"></a>
<a id="trace-27385"></a>
<a id="trace-27468"></a>
<a id="trace-27470"></a>
<a id="trace-27486"></a>
<a id="trace-27488"></a>
<a id="trace-27499"></a>
<a id="trace-27501"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27524"></a>
<a id="trace-27526"></a>
<a id="trace-27534"></a>
<a id="trace-27536"></a>
<a id="trace-27549"></a>
<a id="trace-27551"></a>
<a id="trace-27560"></a>
<a id="trace-27562"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27591"></a>
<a id="trace-27593"></a>
<a id="trace-27671"></a>
<a id="trace-27673"></a>
<a id="trace-27702"></a>
<a id="trace-27704"></a>
<a id="trace-27727"></a>
<a id="trace-27729"></a>
<a id="trace-27744"></a>
<a id="trace-27746"></a>
<a id="trace-27758"></a>
<a id="trace-27760"></a>
<a id="trace-27772"></a>
<a id="trace-27774"></a>
<a id="trace-27783"></a>
<a id="trace-27785"></a>
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27886"></a>
<a id="trace-27888"></a>
<a id="trace-27935"></a>
<a id="trace-27937"></a>
<a id="trace-27956"></a>
<a id="trace-27958"></a>
<a id="trace-27982"></a>
<a id="trace-27984"></a>
<a id="trace-28016"></a>
<a id="trace-28018"></a>
<a id="trace-28029"></a>
<a id="trace-28031"></a>
<a id="trace-28104"></a>
<a id="trace-28106"></a>
<a id="trace-28126"></a>
<a id="trace-28128"></a>
<a id="trace-28136"></a>
<a id="trace-28138"></a>
<a id="trace-28150"></a>
<a id="trace-28152"></a>
<a id="trace-28161"></a>
<a id="trace-28163"></a>
<a id="trace-28216"></a>
<a id="trace-28218"></a>
<a id="trace-28243"></a>
<a id="trace-28245"></a>
<a id="trace-28324"></a>
<a id="trace-28326"></a>
<a id="trace-28340"></a>
<a id="trace-28342"></a>
<a id="trace-28356"></a>
<a id="trace-28358"></a>
<a id="trace-28379"></a>
<a id="trace-28381"></a>
<a id="trace-28394"></a>
<a id="trace-28396"></a>
<a id="trace-28405"></a>
<a id="trace-28407"></a>
<a id="trace-28424"></a>
<a id="trace-28426"></a>
<a id="trace-28444"></a>
<a id="trace-28446"></a>
<a id="trace-28517"></a>
<a id="trace-28519"></a>
<a id="trace-28536"></a>
<a id="trace-28538"></a>
<a id="trace-28561"></a>
<a id="trace-28563"></a>
<a id="trace-28573"></a>
<a id="trace-28575"></a>
<a id="trace-28587"></a>
<a id="trace-28589"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28657"></a>
<a id="trace-28659"></a>
<a id="trace-28730"></a>
<a id="trace-28732"></a>
<a id="trace-28741"></a>
<a id="trace-28743"></a>
<a id="trace-28760"></a>
<a id="trace-28762"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28802"></a>
<a id="trace-28804"></a>
<a id="trace-28831"></a>
<a id="trace-28833"></a>
<a id="trace-28842"></a>
<a id="trace-28844"></a>
<a id="trace-28878"></a>
<a id="trace-28880"></a>
<a id="trace-28960"></a>
<a id="trace-28962"></a>
<a id="trace-28995"></a>
<a id="trace-28997"></a>
<a id="trace-29007"></a>
<a id="trace-29009"></a>
<a id="trace-29028"></a>
<a id="trace-29030"></a>
<a id="trace-29039"></a>
<a id="trace-29041"></a>
<a id="trace-29088"></a>
<a id="trace-29090"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29173"></a>
<a id="trace-29175"></a>
<a id="trace-29197"></a>
<a id="trace-29199"></a>
<a id="trace-29215"></a>
<a id="trace-29217"></a>
<a id="trace-29228"></a>
<a id="trace-29230"></a>
<a id="trace-29242"></a>
<a id="trace-29244"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29277"></a>
<a id="trace-29279"></a>
<a id="trace-29368"></a>
<a id="trace-29370"></a>
<a id="trace-29410"></a>
<a id="trace-29412"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29457"></a>
<a id="trace-29459"></a>
<a id="trace-29469"></a>
<a id="trace-29471"></a>
<a id="trace-29492"></a>
<a id="trace-29494"></a>
<a id="trace-29579"></a>
<a id="trace-29581"></a>
<a id="trace-29589"></a>
<a id="trace-29591"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29620"></a>
<a id="trace-29622"></a>
<a id="trace-29643"></a>
<a id="trace-29645"></a>
<a id="trace-29678"></a>
<a id="trace-29680"></a>
<a id="trace-29689"></a>
<a id="trace-29691"></a>
<a id="trace-29707"></a>
<a id="trace-29709"></a>
<a id="trace-29723"></a>
<a id="trace-29725"></a>
<a id="trace-29795"></a>
<a id="trace-29797"></a>
<a id="trace-29825"></a>
<a id="trace-29827"></a>
<a id="trace-29835"></a>
<a id="trace-29837"></a>
<a id="trace-29864"></a>
<a id="trace-29866"></a>
<a id="trace-29881"></a>
<a id="trace-29883"></a>
<a id="trace-29928"></a>
<a id="trace-29930"></a>
<a id="trace-29941"></a>
<a id="trace-29943"></a>
<a id="trace-30014"></a>
<a id="trace-30016"></a>
<a id="trace-30026"></a>
<a id="trace-30028"></a>
<a id="trace-30039"></a>
<a id="trace-30041"></a>
<a id="trace-30051"></a>
<a id="trace-30053"></a>
<a id="trace-30070"></a>
<a id="trace-30072"></a>
<a id="trace-30082"></a>
<a id="trace-30084"></a>
<a id="trace-30097"></a>
<a id="trace-30099"></a>
<a id="trace-30132"></a>
<a id="trace-30134"></a>
<a id="trace-30225"></a>
<a id="trace-30227"></a>
<a id="trace-30234"></a>
<a id="trace-30236"></a>
<a id="trace-30260"></a>
<a id="trace-30262"></a>
<a id="trace-30306"></a>
<a id="trace-30308"></a>
<a id="trace-30317"></a>
<a id="trace-30319"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30354"></a>
<a id="trace-30356"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624831201777943, 'next_transition': 1212}.
<a id="trace-1004"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1004): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.93871986446268, 'next_transition': 2246}.
<a id="trace-1685"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1685): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1466. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1944}.
<a id="trace-1686"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1686): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1466. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1944}.
<a id="trace-1944"></a>
<a id="trace-1946"></a>
<a id="trace-1978"></a>
<a id="trace-1980"></a>
<a id="trace-2012"></a>
<a id="trace-2014"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2128"></a>
<a id="trace-2130"></a>
<a id="trace-2172"></a>
<a id="trace-2174"></a>
<a id="trace-2199"></a>
<a id="trace-2201"></a>
<a id="trace-2224"></a>
<a id="trace-2226"></a>
<a id="trace-2237"></a>
<a id="trace-2239"></a>
<a id="trace-2666"></a>
<a id="trace-2668"></a>
<a id="trace-2695"></a>
<a id="trace-2697"></a>
<a id="trace-2712"></a>
<a id="trace-2714"></a>
<a id="trace-2743"></a>
<a id="trace-2745"></a>
<a id="trace-2759"></a>
<a id="trace-2761"></a>
- 13.20s–19.75s (×28), actor 5, squad 0 (trace 1944): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1471. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41343764623536317, 'next_transition': 1978}.
<a id="trace-2246"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2246): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2063. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.713904304459364, 'next_transition': 3499}.
<a id="trace-2247"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2247): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2063. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.713904304459364, 'next_transition': 3499}.
<a id="trace-2780"></a>
- 19.95s–19.95s (×1), actor 0, squad 0 (trace 2780): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2055. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3119}.
<a id="trace-2781"></a>
- 19.95s–19.95s (×1), actor 0, squad 0 (trace 2781): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2055. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3119}.
<a id="trace-2782"></a>
- 19.95s–19.95s (×1), actor 0, squad 0 (trace 2782): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2055. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3119}.
<a id="trace-3119"></a>
<a id="trace-3121"></a>
<a id="trace-3149"></a>
<a id="trace-3151"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 3119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3044. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3149}.
<a id="trace-3163"></a>
- 20.90s–20.90s (×1), actor 0, squad 0 (trace 3163): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3039. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14115932657312158, 'next_transition': 3456}.
<a id="trace-3456"></a>
<a id="trace-3458"></a>
<a id="trace-3486"></a>
<a id="trace-3488"></a>
<a id="trace-3977"></a>
<a id="trace-3979"></a>
<a id="trace-4484"></a>
<a id="trace-4486"></a>
<a id="trace-4524"></a>
<a id="trace-4526"></a>
- 21.25s–23.25s (×10), actor 5, squad 0 (trace 3456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3044. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21911345215683503, 'next_transition': 3486}.
<a id="trace-3499"></a>
- 21.85s–21.85s (×1), actor 8, squad 1 (trace 3499): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3047. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4697143565061637, 'next_transition': 3995}.
<a id="trace-3500"></a>
- 21.85s–21.85s (×1), actor 8, squad 1 (trace 3500): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3047. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4697143565061637, 'next_transition': 3995}.
<a id="trace-3501"></a>
<a id="trace-3995"></a>
- 21.85s–22.40s (×2), actor 8, squad 1 (trace 3501): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3047. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4697143565061637, 'next_transition': 3995}.
<a id="trace-4531"></a>
- 23.25s–23.25s (×1), actor 0, squad 0 (trace 4531): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3039. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11194783638676362, 'next_transition': 404}.
<a id="trace-404"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 404): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-405"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 405): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4806"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4806): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.694033 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4806. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11270602253979795, 'next_transition': 4842}.
<a id="trace-4807"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4807): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.694033 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4807. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11270602253979795, 'next_transition': 4842}.
<a id="trace-4808"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4808): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.694033 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4808. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6975920653499124, 'next_transition': 5090}.
<a id="trace-4809"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4809): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.694033 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4809. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6975920653499124, 'next_transition': 5090}.
<a id="trace-4842"></a>
<a id="trace-4844"></a>
<a id="trace-4889"></a>
<a id="trace-4891"></a>
<a id="trace-4950"></a>
<a id="trace-4952"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
<a id="trace-5074"></a>
<a id="trace-5076"></a>
<a id="trace-5112"></a>
<a id="trace-5114"></a>
<a id="trace-5142"></a>
<a id="trace-5144"></a>
- 23.75s–26.75s (×14), actor 5, squad 0 (trace 4842): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 4809. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3427241875791188, 'next_transition': 4889}.
<a id="trace-5090"></a>
- 25.85s–25.85s (×1), actor 9, squad 1 (trace 5090): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4975. Next observer evidence: {'until': 27.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.510718887632646, 'next_transition': 5629}.
<a id="trace-5159"></a>
- 26.90s–26.90s (×1), actor 0, squad 0 (trace 5159): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 4967. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1886161063661671, 'next_transition': 5616}.
<a id="trace-5160"></a>
- 26.90s–26.90s (×1), actor 0, squad 0 (trace 5160): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 4967. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1886161063661671, 'next_transition': 5616}.
<a id="trace-5616"></a>
<a id="trace-5618"></a>
<a id="trace-6026"></a>
<a id="trace-6028"></a>
<a id="trace-6073"></a>
<a id="trace-6075"></a>
<a id="trace-6096"></a>
<a id="trace-6098"></a>
<a id="trace-6128"></a>
<a id="trace-6130"></a>
<a id="trace-6173"></a>
<a id="trace-6175"></a>
<a id="trace-6278"></a>
<a id="trace-6280"></a>
<a id="trace-6300"></a>
<a id="trace-6302"></a>
<a id="trace-6327"></a>
<a id="trace-6329"></a>
<a id="trace-6352"></a>
<a id="trace-6354"></a>
<a id="trace-6379"></a>
<a id="trace-6381"></a>
<a id="trace-6409"></a>
<a id="trace-6411"></a>
<a id="trace-6437"></a>
<a id="trace-6439"></a>
<a id="trace-6854"></a>
<a id="trace-6856"></a>
<a id="trace-6887"></a>
<a id="trace-6889"></a>
<a id="trace-6920"></a>
<a id="trace-6922"></a>
<a id="trace-7016"></a>
<a id="trace-7018"></a>
<a id="trace-7038"></a>
<a id="trace-7040"></a>
<a id="trace-7073"></a>
<a id="trace-7075"></a>
<a id="trace-7102"></a>
<a id="trace-7104"></a>
<a id="trace-7135"></a>
<a id="trace-7137"></a>
<a id="trace-7154"></a>
<a id="trace-7156"></a>
<a id="trace-7185"></a>
<a id="trace-7187"></a>
<a id="trace-7229"></a>
<a id="trace-7231"></a>
<a id="trace-7282"></a>
<a id="trace-7284"></a>
<a id="trace-7331"></a>
<a id="trace-7333"></a>
<a id="trace-10264"></a>
<a id="trace-10266"></a>
<a id="trace-10343"></a>
<a id="trace-10345"></a>
<a id="trace-10382"></a>
<a id="trace-10384"></a>
- 27.25s–41.25s (×58), actor 5, squad 0 (trace 5616): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4972. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14605135128611457, 'next_transition': 6026}.
<a id="trace-5629"></a>
- 27.45s–27.45s (×1), actor 9, squad 1 (trace 5629): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 4975. Next observer evidence: {'until': 31.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.220975928781324, 'next_transition': 6336}.
<a id="trace-6336"></a>
- 31.35s–31.35s (×1), actor 9, squad 1 (trace 6336): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6203. Next observer evidence: {'until': 33.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.5856540030927886, 'next_transition': 6455}.
<a id="trace-6455"></a>
- 33.55s–33.55s (×1), actor 9, squad 1 (trace 6455): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 6203. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4940478322261592, 'next_transition': 7116}.
<a id="trace-7116"></a>
- 37.00s–37.00s (×1), actor 9, squad 1 (trace 7116): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6939. Next observer evidence: {'until': 40, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.9445417213279058, 'next_transition': 7438}.
<a id="trace-7438"></a>
- 40.15s–40.15s (×1), actor 9, squad 1 (trace 7438): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048383703312816, 'next_transition': 10301}.
<a id="trace-10057"></a>
- 40.15s–40.15s (×1), actor 9, squad 1 (trace 10057): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048383703312816, 'next_transition': 10301}.
<a id="trace-10058"></a>
- 40.15s–40.15s (×1), actor 9, squad 1 (trace 10058): MoveTactically. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048383703312816, 'next_transition': 10301}.
<a id="trace-10059"></a>
- 40.15s–40.15s (×1), actor 9, squad 1 (trace 10059): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048383703312816, 'next_transition': 10301}.
<a id="trace-10246"></a>
- 40.15s–40.15s (×1), actor 9, squad 1 (trace 10246): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048383703312816, 'next_transition': 10301}.
<a id="trace-10301"></a>
- 40.50s–40.50s (×1), actor 9, squad 1 (trace 10301): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 41.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9493567897397684, 'next_transition': 10566}.
<a id="trace-10303"></a>
- 40.50s–40.50s (×1), actor 9, squad 1 (trace 10303): NeedSupport. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 41.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9493567897397684, 'next_transition': 10566}.
<a id="trace-10407"></a>
- 41.50s–41.50s (×1), actor 0, squad 0 (trace 10407): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 7355. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27089952943894924, 'next_transition': 10833}.
<a id="trace-10408"></a>
- 41.50s–41.50s (×1), actor 0, squad 0 (trace 10408): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 7355. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27089952943894924, 'next_transition': 10833}.
<a id="trace-10566"></a>
- 41.50s–41.50s (×1), actor 9, squad 1 (trace 10566): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 43, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1803738109281319, 'next_transition': 10962}.
<a id="trace-10569"></a>
- 41.50s–41.50s (×1), actor 9, squad 1 (trace 10569): MoveTactically. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 43, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1803738109281319, 'next_transition': 10962}.
<a id="trace-10570"></a>
- 41.50s–41.50s (×1), actor 9, squad 1 (trace 10570): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 43, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1803738109281319, 'next_transition': 10962}.
<a id="trace-10833"></a>
<a id="trace-10835"></a>
- 41.75s–41.75s (×2), actor 5, squad 0 (trace 10833): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7360. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4390516104237784, 'next_transition': 10862}.
<a id="trace-10862"></a>
- 42.00s–42.00s (×1), actor 0, squad 0 (trace 10862): NeedSupport. Knowledge: actor memory at 40.00s, trace 7355. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056700079420138376, 'next_transition': 10902}.
<a id="trace-10902"></a>
<a id="trace-10904"></a>
<a id="trace-10933"></a>
<a id="trace-10935"></a>
<a id="trace-11122"></a>
<a id="trace-11124"></a>
<a id="trace-12206"></a>
<a id="trace-12208"></a>
<a id="trace-12252"></a>
<a id="trace-12254"></a>
<a id="trace-12292"></a>
<a id="trace-12294"></a>
<a id="trace-12373"></a>
<a id="trace-12375"></a>
<a id="trace-12394"></a>
<a id="trace-12396"></a>
<a id="trace-12420"></a>
<a id="trace-12422"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
- 42.25s–46.75s (×20), actor 5, squad 0 (trace 10902): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7360. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09917507942013842, 'next_transition': 10933}.
<a id="trace-10962"></a>
- 43.15s–43.15s (×1), actor 9, squad 1 (trace 10962): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1985668165253201, 'next_transition': 11133}.
<a id="trace-11114"></a>
- 43.15s–43.15s (×1), actor 9, squad 1 (trace 11114): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1985668165253201, 'next_transition': 11133}.
<a id="trace-11133"></a>
- 43.30s–43.30s (×1), actor 9, squad 1 (trace 11133): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9320022247291042, 'next_transition': 12265}.
<a id="trace-11134"></a>
- 43.30s–43.30s (×1), actor 9, squad 1 (trace 11134): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9320022247291042, 'next_transition': 12265}.
<a id="trace-12265"></a>
- 44.30s–44.30s (×1), actor 9, squad 1 (trace 12265): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 7363. Next observer evidence: {'until': 48.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.7193055161751508, 'next_transition': 12513}.
<a id="trace-12451"></a>
- 47.05s–47.05s (×1), actor 5, squad 0 (trace 12451): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 47.05s, trace 12451. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33481601679478434, 'next_transition': 12458}.
<a id="trace-12458"></a>
<a id="trace-12460"></a>
<a id="trace-12479"></a>
<a id="trace-12481"></a>
<a id="trace-12504"></a>
<a id="trace-12506"></a>
<a id="trace-12529"></a>
<a id="trace-12531"></a>
<a id="trace-12556"></a>
<a id="trace-12558"></a>
<a id="trace-12568"></a>
<a id="trace-12570"></a>
<a id="trace-12656"></a>
<a id="trace-12658"></a>
<a id="trace-12675"></a>
<a id="trace-12677"></a>
<a id="trace-12693"></a>
<a id="trace-12695"></a>
<a id="trace-12710"></a>
<a id="trace-12712"></a>
<a id="trace-12729"></a>
<a id="trace-12731"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12772"></a>
<a id="trace-12774"></a>
<a id="trace-12787"></a>
<a id="trace-12789"></a>
- 47.25s–53.75s (×28), actor 5, squad 0 (trace 12458): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 47.05s, trace 12451. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44461168253375055, 'next_transition': 12479}.
<a id="trace-12513"></a>
- 48.60s–48.60s (×1), actor 9, squad 1 (trace 12513): NeedSupport. Knowledge: actor memory at 45.00s, trace 12310. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.872777976871864, 'next_transition': 16224}.
<a id="trace-12798"></a>
- 53.90s–53.90s (×1), actor 0, squad 0 (trace 12798): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 12578. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12959400102643975, 'next_transition': 12998}.
<a id="trace-12825"></a>
- 53.90s–53.90s (×1), actor 0, squad 0 (trace 12825): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 12578. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12959400102643975, 'next_transition': 12998}.
<a id="trace-12998"></a>
<a id="trace-13000"></a>
<a id="trace-13012"></a>
<a id="trace-13014"></a>
<a id="trace-13104"></a>
<a id="trace-13106"></a>
<a id="trace-13119"></a>
<a id="trace-13121"></a>
<a id="trace-13145"></a>
<a id="trace-13147"></a>
<a id="trace-13180"></a>
<a id="trace-13182"></a>
<a id="trace-13205"></a>
<a id="trace-13207"></a>
<a id="trace-13225"></a>
<a id="trace-13227"></a>
<a id="trace-13253"></a>
<a id="trace-13255"></a>
<a id="trace-13266"></a>
<a id="trace-13268"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13304"></a>
<a id="trace-13306"></a>
<a id="trace-13388"></a>
<a id="trace-13390"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13427"></a>
<a id="trace-13429"></a>
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13469"></a>
<a id="trace-13471"></a>
<a id="trace-13482"></a>
<a id="trace-13484"></a>
<a id="trace-13505"></a>
<a id="trace-13507"></a>
<a id="trace-13521"></a>
<a id="trace-13523"></a>
<a id="trace-13547"></a>
<a id="trace-13549"></a>
<a id="trace-13568"></a>
<a id="trace-13570"></a>
<a id="trace-13654"></a>
<a id="trace-13656"></a>
<a id="trace-13671"></a>
<a id="trace-13673"></a>
<a id="trace-13696"></a>
<a id="trace-13698"></a>
- 54.25s–66.25s (×50), actor 5, squad 0 (trace 12998): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 12582. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1296000141723348, 'next_transition': 13012}.
<a id="trace-13714"></a>
- 66.55s–66.55s (×1), actor 0, squad 0 (trace 13714): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 13586. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999054170161807, 'next_transition': 13825}.
<a id="trace-13715"></a>
- 66.55s–66.55s (×1), actor 0, squad 0 (trace 13715): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 13586. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999054170161807, 'next_transition': 13825}.
<a id="trace-13825"></a>
<a id="trace-13827"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13871"></a>
<a id="trace-13873"></a>
<a id="trace-13900"></a>
<a id="trace-13902"></a>
- 66.75s–68.25s (×8), actor 5, squad 0 (trace 13825): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13590. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950224476460309, 'next_transition': 13844}.
<a id="trace-13909"></a>
- 68.55s–68.55s (×1), actor 0, squad 0 (trace 13909): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 13586. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480692727945097, 'next_transition': 13924}.
<a id="trace-13924"></a>
<a id="trace-13926"></a>
- 68.75s–68.75s (×2), actor 5, squad 0 (trace 13924): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13590. Next observer evidence: {'until': 68.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24478127274175843, 'next_transition': 13935}.
<a id="trace-13935"></a>
- 68.80s–68.80s (×1), actor 0, squad 0 (trace 13935): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 13586. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4446250073711645, 'next_transition': 15667}.
<a id="trace-13936"></a>
- 68.80s–68.80s (×1), actor 0, squad 0 (trace 13936): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 13586. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4446250073711645, 'next_transition': 15667}.
<a id="trace-15667"></a>
<a id="trace-15669"></a>
<a id="trace-15710"></a>
<a id="trace-15712"></a>
<a id="trace-15804"></a>
<a id="trace-15806"></a>
<a id="trace-15824"></a>
<a id="trace-15826"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15895"></a>
<a id="trace-15897"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-15927"></a>
<a id="trace-15929"></a>
- 69.25s–72.75s (×16), actor 5, squad 0 (trace 15667): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13590. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21240337639027485, 'next_transition': 15710}.
<a id="trace-1083"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (events line 1083): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15940"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 15940): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.433894 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 15940. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095978504748308, 'next_transition': 15962}.
<a id="trace-15941"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 15941): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.433894 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 15941. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095978504748308, 'next_transition': 15962}.
<a id="trace-15962"></a>
<a id="trace-15964"></a>
<a id="trace-15972"></a>
<a id="trace-15974"></a>
<a id="trace-16006"></a>
<a id="trace-16008"></a>
<a id="trace-16025"></a>
<a id="trace-16027"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
<a id="trace-16112"></a>
<a id="trace-16114"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16142"></a>
<a id="trace-16144"></a>
<a id="trace-16161"></a>
<a id="trace-16163"></a>
<a id="trace-16172"></a>
<a id="trace-16174"></a>
<a id="trace-16193"></a>
<a id="trace-16195"></a>
<a id="trace-16210"></a>
<a id="trace-16212"></a>
<a id="trace-16444"></a>
<a id="trace-16446"></a>
<a id="trace-16469"></a>
<a id="trace-16471"></a>
<a id="trace-16559"></a>
<a id="trace-16561"></a>
<a id="trace-16584"></a>
<a id="trace-16586"></a>
<a id="trace-16608"></a>
<a id="trace-16610"></a>
<a id="trace-16621"></a>
<a id="trace-16623"></a>
<a id="trace-16642"></a>
<a id="trace-16644"></a>
<a id="trace-16655"></a>
<a id="trace-16657"></a>
<a id="trace-16675"></a>
<a id="trace-16677"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16930"></a>
<a id="trace-16932"></a>
<a id="trace-16954"></a>
<a id="trace-16956"></a>
<a id="trace-16977"></a>
<a id="trace-16979"></a>
<a id="trace-16999"></a>
<a id="trace-17001"></a>
<a id="trace-17010"></a>
<a id="trace-17012"></a>
<a id="trace-17027"></a>
<a id="trace-17029"></a>
<a id="trace-17044"></a>
<a id="trace-17046"></a>
<a id="trace-17063"></a>
<a id="trace-17065"></a>
<a id="trace-17079"></a>
<a id="trace-17081"></a>
<a id="trace-17269"></a>
<a id="trace-17271"></a>
<a id="trace-17284"></a>
<a id="trace-17286"></a>
<a id="trace-17297"></a>
<a id="trace-17299"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
- 73.25s–91.75s (×76), actor 5, squad 0 (trace 15962): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.95s, trace 15941. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30960691900073617, 'next_transition': 15972}.
<a id="trace-16224"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 16224): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16330}.
<a id="trace-16225"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 16225): MoveTactically. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16330}.
<a id="trace-16226"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 16226): . Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16330}.
<a id="trace-16325"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 16325): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16330}.
<a id="trace-16330"></a>
- 79.00s–79.00s (×1), actor 9, squad 1 (trace 16330): recovering: retry accepted element corridor in column. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: None.
<a id="trace-16429"></a>
- 79.00s–79.00s (×1), actor 9, squad 1 (trace 16429): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: None.
<a id="trace-16434"></a>
- 79.05s–79.05s (×1), actor 9, squad 1 (trace 16434): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 75.00s, trace 16040. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1199}.
<a id="trace-1199"></a>
- 83.75s–83.75s (×1), actor 5, squad 1 (events line 1199): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16757}.
<a id="trace-16693"></a>
- 83.75s–83.75s (×1), actor 5, squad 1 (trace 16693): renew committed intent (75 s lifetime). Knowledge: actor memory at 83.75s, trace 16693. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16757}.
<a id="trace-16757"></a>
- 85.05s–85.05s (×1), actor 9, squad 1 (trace 16757): received platoon directive. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: None.
<a id="trace-16856"></a>
- 85.05s–85.05s (×1), actor 9, squad 1 (trace 16856): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: None.
<a id="trace-16862"></a>
- 85.10s–85.10s (×1), actor 9, squad 1 (trace 16862): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1272}.
<a id="trace-1272"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (events line 1272): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17036"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (trace 17036): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 17036. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17085}.
<a id="trace-17037"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (trace 17037): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 17037. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17085}.
<a id="trace-17085"></a>
- 89.85s–89.85s (×1), actor 9, squad 1 (trace 17085): received platoon directive. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: None.
<a id="trace-17184"></a>
- 89.85s–89.85s (×1), actor 9, squad 1 (trace 17184): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: None.
<a id="trace-17190"></a>
- 89.90s–89.90s (×1), actor 9, squad 1 (trace 17190): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 85.00s, trace 16744. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1323}.
<a id="trace-1322"></a>
- 92.05s–92.05s (×1), actor 5, squad 0 (events line 1322): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1323"></a>
- 92.05s–92.05s (×1), actor 5, squad 1 (events line 1323): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17320"></a>
- 92.05s–92.05s (×1), actor 5, squad 0 (trace 17320): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.05s, trace 17320. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17335}.
<a id="trace-17321"></a>
- 92.05s–92.05s (×1), actor 5, squad 0 (trace 17321): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.05s, trace 17321. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17335}.
<a id="trace-17322"></a>
- 92.05s–92.05s (×1), actor 5, squad 1 (trace 17322): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.05s, trace 17322. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17386}.
<a id="trace-17323"></a>
- 92.05s–92.05s (×1), actor 5, squad 1 (trace 17323): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.05s, trace 17323. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17386}.
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17346"></a>
<a id="trace-17348"></a>
- 92.25s–92.75s (×4), actor 5, squad 0 (trace 17335): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.05s, trace 17323. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17346}.
<a id="trace-17359"></a>
- 93.15s–93.15s (×1), actor 1, squad 0 (trace 17359): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099925977531375, 'next_transition': 17375}.
<a id="trace-17360"></a>
- 93.15s–93.15s (×1), actor 1, squad 0 (trace 17360): NeedSupport. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099925977531375, 'next_transition': 17375}.
<a id="trace-17375"></a>
<a id="trace-17377"></a>
<a id="trace-17458"></a>
<a id="trace-17460"></a>
- 93.25s–93.75s (×4), actor 5, squad 0 (trace 17375): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.05s, trace 17323. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42037300225969204, 'next_transition': 17458}.
<a id="trace-17386"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 17386): Withdraw to received rally. Knowledge: actor memory at 90.00s, trace 17199. Next observer evidence: {'until': 108, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000020000000003, 'next_transition': 18930}.
<a id="trace-17387"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 17387): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 17199. Next observer evidence: {'until': 108, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000020000000003, 'next_transition': 18930}.
<a id="trace-17488"></a>
- 94.15s–94.15s (×1), actor 1, squad 0 (trace 17488): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21017093108647059, 'next_transition': 17637}.
<a id="trace-17493"></a>
- 94.15s–94.15s (×1), actor 1, squad 0 (trace 17493): MoveTactically. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21017093108647059, 'next_transition': 17637}.
<a id="trace-17494"></a>
- 94.15s–94.15s (×1), actor 1, squad 0 (trace 17494): Reorganise complete. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21017093108647059, 'next_transition': 17637}.
<a id="trace-17637"></a>
<a id="trace-17639"></a>
- 94.25s–94.25s (×2), actor 5, squad 0 (trace 17637): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.05s, trace 17323. Next observer evidence: {'until': 94.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21020207253726966, 'next_transition': 17651}.
<a id="trace-17651"></a>
- 94.40s–94.40s (×1), actor 1, squad 0 (trace 17651): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 17193. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21017093108646853, 'next_transition': 17832}.
<a id="trace-17832"></a>
<a id="trace-17834"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-18007"></a>
<a id="trace-18009"></a>
<a id="trace-18035"></a>
<a id="trace-18037"></a>
<a id="trace-18064"></a>
<a id="trace-18066"></a>
<a id="trace-18079"></a>
<a id="trace-18081"></a>
<a id="trace-18108"></a>
<a id="trace-18110"></a>
<a id="trace-18120"></a>
<a id="trace-18122"></a>
<a id="trace-18142"></a>
<a id="trace-18144"></a>
- 94.75s–99.25s (×18), actor 5, squad 0 (trace 17832): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.05s, trace 17323. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4940775012746315, 'next_transition': 17972}.
<a id="trace-18149"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 18149): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 95.00s, trace 17854. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200005523532817, 'next_transition': 18315}.
<a id="trace-18150"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 18150): MoveTactically. Knowledge: actor memory at 95.00s, trace 17854. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200005523532817, 'next_transition': 18315}.
<a id="trace-18151"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 18151): . Knowledge: actor memory at 95.00s, trace 17854. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200005523532817, 'next_transition': 18315}.
<a id="trace-18315"></a>
<a id="trace-18317"></a>
<a id="trace-18400"></a>
<a id="trace-18402"></a>
<a id="trace-18418"></a>
<a id="trace-18420"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18453"></a>
<a id="trace-18455"></a>
<a id="trace-18479"></a>
<a id="trace-18481"></a>
<a id="trace-18493"></a>
<a id="trace-18495"></a>
<a id="trace-18516"></a>
<a id="trace-18518"></a>
<a id="trace-18528"></a>
<a id="trace-18530"></a>
<a id="trace-18553"></a>
<a id="trace-18555"></a>
<a id="trace-18568"></a>
<a id="trace-18570"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
<a id="trace-18655"></a>
<a id="trace-18657"></a>
- 99.75s–105.75s (×26), actor 5, squad 0 (trace 18315): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 17857. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300033196274488, 'next_transition': 18400}.
<a id="trace-18666"></a>
- 105.95s–105.95s (×1), actor 1, squad 0 (trace 18666): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 18580. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3674900603342144, 'next_transition': 18800}.
<a id="trace-18800"></a>
- 106.20s–106.20s (×1), actor 1, squad 0 (trace 18800): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 18580. Next observer evidence: None.
<a id="trace-18863"></a>
<a id="trace-18865"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18903"></a>
<a id="trace-18905"></a>
<a id="trace-18919"></a>
<a id="trace-18921"></a>
<a id="trace-18944"></a>
<a id="trace-18946"></a>
- 106.25s–108.25s (×10), actor 5, squad 0 (trace 18863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18583. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18875}.
<a id="trace-18930"></a>
- 108.00s–108.00s (×1), actor 9, squad 1 (trace 18930): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 18586. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1744}.
<a id="trace-18931"></a>
- 108.00s–108.00s (×1), actor 9, squad 1 (trace 18931): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 18586. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1744}.
<a id="trace-18955"></a>
- 108.40s–108.40s (×1), actor 1, squad 0 (trace 18955): NeedSupport. Knowledge: actor memory at 105.00s, trace 18580. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500098676785102, 'next_transition': 18979}.
<a id="trace-18979"></a>
<a id="trace-18981"></a>
<a id="trace-19003"></a>
<a id="trace-19005"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19109"></a>
<a id="trace-19111"></a>
<a id="trace-19122"></a>
<a id="trace-19124"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19153"></a>
<a id="trace-19155"></a>
<a id="trace-19165"></a>
<a id="trace-19167"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19197"></a>
<a id="trace-19199"></a>
<a id="trace-19220"></a>
<a id="trace-19222"></a>
<a id="trace-19233"></a>
<a id="trace-19235"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19318"></a>
<a id="trace-19320"></a>
- 108.75s–115.75s (×30), actor 5, squad 0 (trace 18979): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18583. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7907203892697598, 'next_transition': 19003}.
<a id="trace-19325"></a>
- 116.10s–116.10s (×1), actor 1, squad 0 (trace 19325): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 19242. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19338}.
<a id="trace-19338"></a>
<a id="trace-19340"></a>
<a id="trace-19348"></a>
<a id="trace-19350"></a>
- 116.25s–116.75s (×4), actor 5, squad 0 (trace 19338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 19245. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19348}.
<a id="trace-19366"></a>
- 117.10s–117.10s (×1), actor 1, squad 0 (trace 19366): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 19242. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20996896331495277, 'next_transition': 19532}.
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19584"></a>
<a id="trace-19586"></a>
<a id="trace-19615"></a>
<a id="trace-19617"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19646"></a>
<a id="trace-19648"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
<a id="trace-19742"></a>
<a id="trace-19744"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19772"></a>
<a id="trace-19774"></a>
<a id="trace-19795"></a>
<a id="trace-19797"></a>
<a id="trace-19809"></a>
<a id="trace-19811"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19892"></a>
<a id="trace-19894"></a>
<a id="trace-19985"></a>
<a id="trace-19987"></a>
<a id="trace-19998"></a>
<a id="trace-20000"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
- 117.25s–127.25s (×42), actor 5, squad 0 (trace 19532): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 19245. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1100025504754822, 'next_transition': 19547}.
<a id="trace-20061"></a>
- 127.45s–127.45s (×1), actor 1, squad 0 (trace 20061): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 19919. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20189}.
<a id="trace-20189"></a>
<a id="trace-20191"></a>
- 127.75s–127.75s (×2), actor 5, squad 0 (trace 20189): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19922. Next observer evidence: {'until': 128, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20197}.
<a id="trace-20197"></a>
- 128.05s–128.05s (×1), actor 1, squad 0 (trace 20197): matching received arrivals: deployment leg complete. Knowledge: actor memory at 125.00s, trace 19919. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20212}.
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
- 128.30s–128.80s (×4), actor 5, squad 0 (trace 20212): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19922. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501653308990072, 'next_transition': 20237}.
<a id="trace-20248"></a>
- 129.05s–129.05s (×1), actor 1, squad 0 (trace 20248): Reorganise: completed/failed drill. Knowledge: actor memory at 125.00s, trace 19919. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999577244421855, 'next_transition': 20391}.
<a id="trace-20253"></a>
- 129.05s–129.05s (×1), actor 1, squad 0 (trace 20253): ReactToContact: cover and return fire. Knowledge: actor memory at 125.00s, trace 19919. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999577244421855, 'next_transition': 20391}.
<a id="trace-20254"></a>
- 129.05s–129.05s (×1), actor 1, squad 0 (trace 20254): Reorganise complete: known contact. Knowledge: actor memory at 125.00s, trace 19919. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999577244421855, 'next_transition': 20391}.
<a id="trace-20391"></a>
<a id="trace-20393"></a>
<a id="trace-20410"></a>
<a id="trace-20412"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20521"></a>
<a id="trace-20523"></a>
<a id="trace-20550"></a>
<a id="trace-20552"></a>
<a id="trace-20577"></a>
<a id="trace-20579"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20617"></a>
<a id="trace-20619"></a>
<a id="trace-20630"></a>
<a id="trace-20632"></a>
- 129.30s–133.30s (×18), actor 5, squad 0 (trace 20391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19922. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36749981103547746, 'next_transition': 20410}.
<a id="trace-20638"></a>
- 133.35s–133.35s (×1), actor 1, squad 0 (trace 20638): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 130.00s, trace 20424. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20818}.
<a id="trace-20639"></a>
- 133.35s–133.35s (×1), actor 1, squad 0 (trace 20639): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 20424. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20818}.
<a id="trace-20818"></a>
<a id="trace-20820"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20860"></a>
<a id="trace-20862"></a>
<a id="trace-20935"></a>
<a id="trace-20937"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20967"></a>
<a id="trace-20969"></a>
<a id="trace-20988"></a>
<a id="trace-20990"></a>
<a id="trace-21002"></a>
<a id="trace-21004"></a>
<a id="trace-21016"></a>
<a id="trace-21018"></a>
<a id="trace-21044"></a>
<a id="trace-21046"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
<a id="trace-21069"></a>
<a id="trace-21071"></a>
<a id="trace-21082"></a>
<a id="trace-21084"></a>
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21162"></a>
<a id="trace-21164"></a>
<a id="trace-21174"></a>
<a id="trace-21176"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21197"></a>
<a id="trace-21199"></a>
<a id="trace-21207"></a>
<a id="trace-21209"></a>
<a id="trace-21225"></a>
<a id="trace-21227"></a>
<a id="trace-21236"></a>
<a id="trace-21238"></a>
<a id="trace-21254"></a>
<a id="trace-21256"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21350"></a>
<a id="trace-21352"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21380"></a>
<a id="trace-21382"></a>
<a id="trace-21394"></a>
<a id="trace-21396"></a>
<a id="trace-21407"></a>
<a id="trace-21409"></a>
<a id="trace-21417"></a>
<a id="trace-21419"></a>
<a id="trace-21428"></a>
<a id="trace-21430"></a>
<a id="trace-21438"></a>
<a id="trace-21440"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21557"></a>
<a id="trace-21559"></a>
<a id="trace-21577"></a>
<a id="trace-21579"></a>
<a id="trace-21590"></a>
<a id="trace-21592"></a>
- 133.80s–151.80s (×74), actor 5, squad 0 (trace 20818): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 20427. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20842}.
<a id="trace-1743"></a>
- 152.05s–152.05s (×1), actor 5, squad 0 (events line 1743): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21606}.
<a id="trace-1744"></a>
- 152.05s–152.05s (×1), actor 5, squad 1 (events line 1744): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2122}.
<a id="trace-21597"></a>
- 152.05s–152.05s (×1), actor 5, squad 0 (trace 21597): renew committed intent (75 s lifetime). Knowledge: actor memory at 152.05s, trace 21597. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21606}.
<a id="trace-21598"></a>
- 152.05s–152.05s (×1), actor 5, squad 1 (trace 21598): renew committed intent (75 s lifetime). Knowledge: actor memory at 152.05s, trace 21598. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2122}.
<a id="trace-21606"></a>
<a id="trace-21608"></a>
<a id="trace-21624"></a>
<a id="trace-21626"></a>
<a id="trace-21637"></a>
<a id="trace-21639"></a>
<a id="trace-21647"></a>
<a id="trace-21649"></a>
- 152.30s–153.80s (×8), actor 5, squad 0 (trace 21606): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 152.05s, trace 21598. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21624}.
<a id="trace-21656"></a>
- 154.20s–154.20s (×1), actor 1, squad 0 (trace 21656): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 150.00s, trace 21476. Next observer evidence: None.
<a id="trace-21662"></a>
<a id="trace-21664"></a>
<a id="trace-21671"></a>
<a id="trace-21673"></a>
<a id="trace-21744"></a>
<a id="trace-21746"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21770"></a>
<a id="trace-21772"></a>
<a id="trace-21783"></a>
<a id="trace-21785"></a>
<a id="trace-21801"></a>
<a id="trace-21803"></a>
<a id="trace-21812"></a>
<a id="trace-21814"></a>
<a id="trace-21833"></a>
<a id="trace-21835"></a>
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21865"></a>
<a id="trace-21867"></a>
<a id="trace-21879"></a>
<a id="trace-21881"></a>
<a id="trace-21950"></a>
<a id="trace-21952"></a>
<a id="trace-21958"></a>
<a id="trace-21960"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-21995"></a>
<a id="trace-21997"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22037"></a>
<a id="trace-22039"></a>
<a id="trace-22065"></a>
<a id="trace-22067"></a>
<a id="trace-22094"></a>
<a id="trace-22096"></a>
<a id="trace-22165"></a>
<a id="trace-22167"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22193"></a>
<a id="trace-22195"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22216"></a>
<a id="trace-22218"></a>
<a id="trace-22223"></a>
<a id="trace-22225"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22267"></a>
<a id="trace-22269"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22356"></a>
<a id="trace-22358"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22401"></a>
<a id="trace-22403"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22425"></a>
<a id="trace-22427"></a>
<a id="trace-22440"></a>
<a id="trace-22442"></a>
<a id="trace-22456"></a>
<a id="trace-22458"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22489"></a>
<a id="trace-22491"></a>
<a id="trace-22562"></a>
<a id="trace-22564"></a>
<a id="trace-22570"></a>
<a id="trace-22572"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
<a id="trace-22600"></a>
<a id="trace-22602"></a>
<a id="trace-22619"></a>
<a id="trace-22621"></a>
<a id="trace-22639"></a>
<a id="trace-22641"></a>
<a id="trace-22653"></a>
<a id="trace-22655"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22777"></a>
<a id="trace-22779"></a>
<a id="trace-22786"></a>
<a id="trace-22788"></a>
<a id="trace-22800"></a>
<a id="trace-22802"></a>
<a id="trace-22810"></a>
<a id="trace-22812"></a>
<a id="trace-22823"></a>
<a id="trace-22825"></a>
<a id="trace-22838"></a>
<a id="trace-22840"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22872"></a>
<a id="trace-22874"></a>
<a id="trace-22904"></a>
<a id="trace-22906"></a>
<a id="trace-22917"></a>
<a id="trace-22919"></a>
<a id="trace-22992"></a>
<a id="trace-22994"></a>
<a id="trace-23001"></a>
<a id="trace-23003"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23032"></a>
<a id="trace-23034"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23073"></a>
<a id="trace-23075"></a>
<a id="trace-23086"></a>
<a id="trace-23088"></a>
<a id="trace-23107"></a>
<a id="trace-23109"></a>
<a id="trace-23123"></a>
<a id="trace-23125"></a>
<a id="trace-23203"></a>
<a id="trace-23205"></a>
<a id="trace-23212"></a>
<a id="trace-23214"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23275"></a>
<a id="trace-23277"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23303"></a>
<a id="trace-23305"></a>
<a id="trace-23325"></a>
<a id="trace-23327"></a>
<a id="trace-23341"></a>
<a id="trace-23343"></a>
<a id="trace-23414"></a>
<a id="trace-23416"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23455"></a>
<a id="trace-23457"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23497"></a>
<a id="trace-23499"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
<a id="trace-23522"></a>
<a id="trace-23524"></a>
<a id="trace-23538"></a>
<a id="trace-23540"></a>
<a id="trace-23553"></a>
<a id="trace-23555"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23636"></a>
<a id="trace-23638"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23669"></a>
<a id="trace-23671"></a>
<a id="trace-23683"></a>
<a id="trace-23685"></a>
<a id="trace-23699"></a>
<a id="trace-23701"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23734"></a>
<a id="trace-23736"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23778"></a>
<a id="trace-23780"></a>
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23872"></a>
<a id="trace-23874"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23898"></a>
<a id="trace-23900"></a>
<a id="trace-23916"></a>
<a id="trace-23918"></a>
<a id="trace-23928"></a>
<a id="trace-23930"></a>
<a id="trace-23940"></a>
<a id="trace-23942"></a>
<a id="trace-23964"></a>
<a id="trace-23966"></a>
<a id="trace-23978"></a>
<a id="trace-23980"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24081"></a>
<a id="trace-24083"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24119"></a>
<a id="trace-24121"></a>
- 154.30s–212.30s (×234), actor 5, squad 0 (trace 21662): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 152.05s, trace 21598. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21671}.
<a id="trace-2121"></a>
- 212.80s–212.80s (×1), actor 5, squad 0 (events line 2121): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24148}.
<a id="trace-2122"></a>
- 212.80s–212.80s (×1), actor 5, squad 1 (events line 2122): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2572}.
<a id="trace-24132"></a>
<a id="trace-24134"></a>
- 212.80s–212.80s (×2), actor 5, squad 0 (trace 24132): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 23988. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24148}.
<a id="trace-24137"></a>
- 212.80s–212.80s (×1), actor 5, squad 0 (trace 24137): renew committed intent (75 s lifetime). Knowledge: actor memory at 212.80s, trace 24137. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24148}.
<a id="trace-24138"></a>
- 212.80s–212.80s (×1), actor 5, squad 1 (trace 24138): renew committed intent (75 s lifetime). Knowledge: actor memory at 212.80s, trace 24138. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2572}.
<a id="trace-24148"></a>
<a id="trace-24150"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24184"></a>
<a id="trace-24186"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24273"></a>
<a id="trace-24275"></a>
<a id="trace-24288"></a>
<a id="trace-24290"></a>
<a id="trace-24302"></a>
<a id="trace-24304"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24356"></a>
<a id="trace-24358"></a>
<a id="trace-24369"></a>
<a id="trace-24371"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24398"></a>
<a id="trace-24400"></a>
<a id="trace-24415"></a>
<a id="trace-24417"></a>
<a id="trace-24487"></a>
<a id="trace-24489"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24525"></a>
<a id="trace-24527"></a>
<a id="trace-24546"></a>
<a id="trace-24548"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24589"></a>
<a id="trace-24591"></a>
<a id="trace-24619"></a>
<a id="trace-24621"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24703"></a>
<a id="trace-24705"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-24727"></a>
<a id="trace-24729"></a>
<a id="trace-24735"></a>
<a id="trace-24737"></a>
<a id="trace-24749"></a>
<a id="trace-24751"></a>
<a id="trace-24759"></a>
<a id="trace-24761"></a>
<a id="trace-24776"></a>
<a id="trace-24778"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24912"></a>
<a id="trace-24914"></a>
<a id="trace-24932"></a>
<a id="trace-24934"></a>
<a id="trace-24945"></a>
<a id="trace-24947"></a>
<a id="trace-24957"></a>
<a id="trace-24959"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-24980"></a>
<a id="trace-24982"></a>
<a id="trace-24995"></a>
<a id="trace-24997"></a>
<a id="trace-25006"></a>
<a id="trace-25008"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25038"></a>
<a id="trace-25040"></a>
<a id="trace-25118"></a>
<a id="trace-25120"></a>
<a id="trace-25135"></a>
<a id="trace-25137"></a>
<a id="trace-25150"></a>
<a id="trace-25152"></a>
<a id="trace-25169"></a>
<a id="trace-25171"></a>
<a id="trace-25194"></a>
<a id="trace-25196"></a>
<a id="trace-25206"></a>
<a id="trace-25208"></a>
<a id="trace-25220"></a>
<a id="trace-25222"></a>
<a id="trace-25231"></a>
<a id="trace-25233"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25262"></a>
<a id="trace-25264"></a>
<a id="trace-25334"></a>
<a id="trace-25336"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25372"></a>
<a id="trace-25374"></a>
<a id="trace-25398"></a>
<a id="trace-25400"></a>
<a id="trace-25408"></a>
<a id="trace-25410"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25453"></a>
<a id="trace-25455"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25483"></a>
<a id="trace-25485"></a>
<a id="trace-25556"></a>
<a id="trace-25558"></a>
<a id="trace-25565"></a>
<a id="trace-25567"></a>
<a id="trace-25580"></a>
<a id="trace-25582"></a>
<a id="trace-25590"></a>
<a id="trace-25592"></a>
<a id="trace-25606"></a>
<a id="trace-25608"></a>
<a id="trace-25616"></a>
<a id="trace-25618"></a>
<a id="trace-25632"></a>
<a id="trace-25634"></a>
<a id="trace-25652"></a>
<a id="trace-25654"></a>
<a id="trace-25674"></a>
<a id="trace-25676"></a>
<a id="trace-25697"></a>
<a id="trace-25699"></a>
<a id="trace-25781"></a>
<a id="trace-25783"></a>
<a id="trace-25790"></a>
<a id="trace-25792"></a>
<a id="trace-25804"></a>
<a id="trace-25806"></a>
<a id="trace-25812"></a>
<a id="trace-25814"></a>
<a id="trace-25827"></a>
<a id="trace-25829"></a>
<a id="trace-25837"></a>
<a id="trace-25839"></a>
<a id="trace-25852"></a>
<a id="trace-25854"></a>
<a id="trace-25861"></a>
<a id="trace-25863"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25972"></a>
<a id="trace-25974"></a>
<a id="trace-25984"></a>
<a id="trace-25986"></a>
<a id="trace-26011"></a>
<a id="trace-26013"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26059"></a>
<a id="trace-26061"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26082"></a>
<a id="trace-26084"></a>
<a id="trace-26100"></a>
<a id="trace-26102"></a>
<a id="trace-26111"></a>
<a id="trace-26113"></a>
<a id="trace-26184"></a>
<a id="trace-26186"></a>
<a id="trace-26194"></a>
<a id="trace-26196"></a>
<a id="trace-26208"></a>
<a id="trace-26210"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26240"></a>
<a id="trace-26242"></a>
<a id="trace-26250"></a>
<a id="trace-26252"></a>
<a id="trace-26279"></a>
<a id="trace-26281"></a>
<a id="trace-26302"></a>
<a id="trace-26304"></a>
<a id="trace-26321"></a>
<a id="trace-26323"></a>
<a id="trace-26332"></a>
<a id="trace-26334"></a>
<a id="trace-26405"></a>
<a id="trace-26407"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26426"></a>
<a id="trace-26428"></a>
<a id="trace-26435"></a>
<a id="trace-26437"></a>
<a id="trace-26448"></a>
<a id="trace-26450"></a>
<a id="trace-26460"></a>
<a id="trace-26462"></a>
<a id="trace-26475"></a>
<a id="trace-26477"></a>
<a id="trace-26490"></a>
<a id="trace-26492"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26536"></a>
<a id="trace-26538"></a>
<a id="trace-26624"></a>
<a id="trace-26626"></a>
<a id="trace-26633"></a>
<a id="trace-26635"></a>
<a id="trace-26647"></a>
<a id="trace-26649"></a>
<a id="trace-26655"></a>
<a id="trace-26657"></a>
<a id="trace-26669"></a>
<a id="trace-26671"></a>
<a id="trace-26680"></a>
<a id="trace-26682"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
- 213.30s–273.30s (×240), actor 5, squad 0 (trace 24148): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 212.80s, trace 24138. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24161}.
<a id="trace-2571"></a>
- 273.45s–273.45s (×1), actor 5, squad 0 (events line 2571): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2572"></a>
- 273.45s–273.45s (×1), actor 5, squad 1 (events line 2572): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26699"></a>
- 273.45s–273.45s (×1), actor 5, squad 0 (trace 26699): renew committed intent (75 s lifetime). Knowledge: actor memory at 273.45s, trace 26699. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26709}.
<a id="trace-26700"></a>
- 273.45s–273.45s (×1), actor 5, squad 1 (trace 26700): renew committed intent (75 s lifetime). Knowledge: actor memory at 273.45s, trace 26700. Next observer evidence: {'until': 303.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3021}.
<a id="trace-26709"></a>
<a id="trace-26711"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26738"></a>
<a id="trace-26740"></a>
<a id="trace-26817"></a>
<a id="trace-26819"></a>
<a id="trace-26827"></a>
<a id="trace-26829"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26876"></a>
<a id="trace-26878"></a>
<a id="trace-26890"></a>
<a id="trace-26892"></a>
<a id="trace-26902"></a>
<a id="trace-26904"></a>
<a id="trace-26917"></a>
<a id="trace-26919"></a>
<a id="trace-26927"></a>
<a id="trace-26929"></a>
<a id="trace-26944"></a>
<a id="trace-26946"></a>
<a id="trace-26957"></a>
<a id="trace-26959"></a>
<a id="trace-27029"></a>
<a id="trace-27031"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27051"></a>
<a id="trace-27053"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27083"></a>
<a id="trace-27085"></a>
<a id="trace-27103"></a>
<a id="trace-27105"></a>
<a id="trace-27128"></a>
<a id="trace-27130"></a>
<a id="trace-27141"></a>
<a id="trace-27143"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27177"></a>
<a id="trace-27179"></a>
<a id="trace-27249"></a>
<a id="trace-27251"></a>
<a id="trace-27260"></a>
<a id="trace-27262"></a>
<a id="trace-27271"></a>
<a id="trace-27273"></a>
<a id="trace-27281"></a>
<a id="trace-27283"></a>
<a id="trace-27293"></a>
<a id="trace-27295"></a>
<a id="trace-27304"></a>
<a id="trace-27306"></a>
<a id="trace-27326"></a>
<a id="trace-27328"></a>
<a id="trace-27338"></a>
<a id="trace-27340"></a>
<a id="trace-27366"></a>
<a id="trace-27368"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27464"></a>
<a id="trace-27466"></a>
<a id="trace-27482"></a>
<a id="trace-27484"></a>
<a id="trace-27495"></a>
<a id="trace-27497"></a>
<a id="trace-27507"></a>
<a id="trace-27509"></a>
<a id="trace-27520"></a>
<a id="trace-27522"></a>
<a id="trace-27530"></a>
<a id="trace-27532"></a>
<a id="trace-27545"></a>
<a id="trace-27547"></a>
<a id="trace-27556"></a>
<a id="trace-27558"></a>
<a id="trace-27587"></a>
<a id="trace-27589"></a>
<a id="trace-27667"></a>
<a id="trace-27669"></a>
<a id="trace-27678"></a>
<a id="trace-27680"></a>
<a id="trace-27698"></a>
<a id="trace-27700"></a>
<a id="trace-27723"></a>
<a id="trace-27725"></a>
<a id="trace-27740"></a>
<a id="trace-27742"></a>
<a id="trace-27754"></a>
<a id="trace-27756"></a>
<a id="trace-27768"></a>
<a id="trace-27770"></a>
<a id="trace-27779"></a>
<a id="trace-27781"></a>
<a id="trace-27797"></a>
<a id="trace-27799"></a>
<a id="trace-27810"></a>
<a id="trace-27812"></a>
<a id="trace-27882"></a>
<a id="trace-27884"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27904"></a>
<a id="trace-27906"></a>
<a id="trace-27918"></a>
<a id="trace-27920"></a>
<a id="trace-27931"></a>
<a id="trace-27933"></a>
<a id="trace-27952"></a>
<a id="trace-27954"></a>
<a id="trace-27978"></a>
<a id="trace-27980"></a>
<a id="trace-27993"></a>
<a id="trace-27995"></a>
<a id="trace-28012"></a>
<a id="trace-28014"></a>
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28100"></a>
<a id="trace-28102"></a>
<a id="trace-28109"></a>
<a id="trace-28111"></a>
<a id="trace-28122"></a>
<a id="trace-28124"></a>
<a id="trace-28132"></a>
<a id="trace-28134"></a>
<a id="trace-28146"></a>
<a id="trace-28148"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28178"></a>
<a id="trace-28180"></a>
<a id="trace-28189"></a>
<a id="trace-28191"></a>
<a id="trace-28212"></a>
<a id="trace-28214"></a>
<a id="trace-28239"></a>
<a id="trace-28241"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28320"></a>
<a id="trace-28322"></a>
<a id="trace-28336"></a>
<a id="trace-28338"></a>
<a id="trace-28352"></a>
<a id="trace-28354"></a>
<a id="trace-28367"></a>
<a id="trace-28369"></a>
<a id="trace-28375"></a>
<a id="trace-28377"></a>
<a id="trace-28390"></a>
<a id="trace-28392"></a>
<a id="trace-28401"></a>
<a id="trace-28403"></a>
<a id="trace-28420"></a>
<a id="trace-28422"></a>
<a id="trace-28440"></a>
<a id="trace-28442"></a>
<a id="trace-28513"></a>
<a id="trace-28515"></a>
<a id="trace-28532"></a>
<a id="trace-28534"></a>
<a id="trace-28557"></a>
<a id="trace-28559"></a>
<a id="trace-28569"></a>
<a id="trace-28571"></a>
<a id="trace-28583"></a>
<a id="trace-28585"></a>
<a id="trace-28593"></a>
<a id="trace-28595"></a>
<a id="trace-28615"></a>
<a id="trace-28617"></a>
<a id="trace-28626"></a>
<a id="trace-28628"></a>
<a id="trace-28642"></a>
<a id="trace-28644"></a>
<a id="trace-28653"></a>
<a id="trace-28655"></a>
<a id="trace-28726"></a>
<a id="trace-28728"></a>
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28756"></a>
<a id="trace-28758"></a>
<a id="trace-28769"></a>
<a id="trace-28771"></a>
<a id="trace-28790"></a>
<a id="trace-28792"></a>
<a id="trace-28798"></a>
<a id="trace-28800"></a>
<a id="trace-28827"></a>
<a id="trace-28829"></a>
<a id="trace-28838"></a>
<a id="trace-28840"></a>
<a id="trace-28857"></a>
<a id="trace-28859"></a>
<a id="trace-28874"></a>
<a id="trace-28876"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-28956"></a>
<a id="trace-28958"></a>
<a id="trace-28970"></a>
<a id="trace-28972"></a>
<a id="trace-28979"></a>
<a id="trace-28981"></a>
<a id="trace-28991"></a>
<a id="trace-28993"></a>
<a id="trace-29003"></a>
<a id="trace-29005"></a>
<a id="trace-29024"></a>
<a id="trace-29026"></a>
<a id="trace-29035"></a>
<a id="trace-29037"></a>
<a id="trace-29061"></a>
<a id="trace-29063"></a>
<a id="trace-29084"></a>
<a id="trace-29086"></a>
<a id="trace-29160"></a>
<a id="trace-29162"></a>
<a id="trace-29169"></a>
<a id="trace-29171"></a>
<a id="trace-29183"></a>
<a id="trace-29185"></a>
<a id="trace-29193"></a>
<a id="trace-29195"></a>
<a id="trace-29211"></a>
<a id="trace-29213"></a>
<a id="trace-29224"></a>
<a id="trace-29226"></a>
<a id="trace-29238"></a>
<a id="trace-29240"></a>
- 273.80s–333.30s (×238), actor 5, squad 0 (trace 26709): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 273.45s, trace 26700. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26724}.
<a id="trace-3020"></a>
- 333.45s–333.45s (×1), actor 5, squad 0 (events line 3020): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3021"></a>
- 333.45s–333.45s (×1), actor 5, squad 1 (events line 3021): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29245"></a>
- 333.45s–333.45s (×1), actor 5, squad 0 (trace 29245): renew committed intent (75 s lifetime). Knowledge: actor memory at 333.45s, trace 29245. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29255}.
<a id="trace-29246"></a>
- 333.45s–333.45s (×1), actor 5, squad 1 (trace 29246): renew committed intent (75 s lifetime). Knowledge: actor memory at 333.45s, trace 29246. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-29255"></a>
<a id="trace-29257"></a>
<a id="trace-29273"></a>
<a id="trace-29275"></a>
<a id="trace-29292"></a>
<a id="trace-29294"></a>
<a id="trace-29364"></a>
<a id="trace-29366"></a>
<a id="trace-29381"></a>
<a id="trace-29383"></a>
<a id="trace-29406"></a>
<a id="trace-29408"></a>
<a id="trace-29416"></a>
<a id="trace-29418"></a>
<a id="trace-29430"></a>
<a id="trace-29432"></a>
<a id="trace-29440"></a>
<a id="trace-29442"></a>
<a id="trace-29453"></a>
<a id="trace-29455"></a>
<a id="trace-29465"></a>
<a id="trace-29467"></a>
<a id="trace-29488"></a>
<a id="trace-29490"></a>
<a id="trace-29505"></a>
<a id="trace-29507"></a>
<a id="trace-29575"></a>
<a id="trace-29577"></a>
<a id="trace-29585"></a>
<a id="trace-29587"></a>
<a id="trace-29605"></a>
<a id="trace-29607"></a>
<a id="trace-29616"></a>
<a id="trace-29618"></a>
<a id="trace-29639"></a>
<a id="trace-29641"></a>
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29674"></a>
<a id="trace-29676"></a>
<a id="trace-29685"></a>
<a id="trace-29687"></a>
<a id="trace-29703"></a>
<a id="trace-29705"></a>
<a id="trace-29719"></a>
<a id="trace-29721"></a>
<a id="trace-29791"></a>
<a id="trace-29793"></a>
<a id="trace-29810"></a>
<a id="trace-29812"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29831"></a>
<a id="trace-29833"></a>
<a id="trace-29846"></a>
<a id="trace-29848"></a>
<a id="trace-29860"></a>
<a id="trace-29862"></a>
<a id="trace-29877"></a>
<a id="trace-29879"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29924"></a>
<a id="trace-29926"></a>
<a id="trace-29937"></a>
<a id="trace-29939"></a>
<a id="trace-30010"></a>
<a id="trace-30012"></a>
<a id="trace-30022"></a>
<a id="trace-30024"></a>
<a id="trace-30035"></a>
<a id="trace-30037"></a>
<a id="trace-30047"></a>
<a id="trace-30049"></a>
<a id="trace-30066"></a>
<a id="trace-30068"></a>
<a id="trace-30078"></a>
<a id="trace-30080"></a>
<a id="trace-30093"></a>
<a id="trace-30095"></a>
<a id="trace-30105"></a>
<a id="trace-30107"></a>
<a id="trace-30128"></a>
<a id="trace-30130"></a>
<a id="trace-30142"></a>
<a id="trace-30144"></a>
<a id="trace-30221"></a>
<a id="trace-30223"></a>
<a id="trace-30230"></a>
<a id="trace-30232"></a>
<a id="trace-30256"></a>
<a id="trace-30258"></a>
<a id="trace-30267"></a>
<a id="trace-30269"></a>
<a id="trace-30278"></a>
<a id="trace-30280"></a>
<a id="trace-30290"></a>
<a id="trace-30292"></a>
<a id="trace-30302"></a>
<a id="trace-30304"></a>
<a id="trace-30313"></a>
<a id="trace-30315"></a>
<a id="trace-30333"></a>
<a id="trace-30335"></a>
<a id="trace-30350"></a>
<a id="trace-30352"></a>
- 333.80s–359.80s (×106), actor 5, squad 0 (trace 29255): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 333.45s, trace 29246. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29273}.

## Net delivery

231 matched order/radio deliveries; 515 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.435s; maximum 1.600s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3039: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3051: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3052: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3053: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3054: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4806: estimate 5.90; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4807: estimate 5.90; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4808: estimate 5.90; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4809: estimate 5.90; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4967: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4972: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4973: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 4976: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 4977: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4978: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4979: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4980: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4981: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4982: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4983: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4984: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4985: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4986: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4987: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 4988: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 4989: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6195: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6200: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6201: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6203: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6204: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6205: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6206: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6207: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6208: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6209: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6210: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6211: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6212: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6213: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6214: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6215: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6216: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6217: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6931: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6932: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6934: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6936: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6937: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6939: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 6940: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 6941: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6942: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6943: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6944: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6945: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6946: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6947: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6948: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6949: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6950: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6951: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 6952: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 6953: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 7355: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7356: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7358: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7360: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7361: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7363: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 7364: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7365: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7366: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7367: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7368: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7369: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7370: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7371: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7372: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7373: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7374: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 7375: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 7376: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 12303: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12304: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12307: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12308: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12310: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 12311: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12312: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12313: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12314: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12315: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12316: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12317: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12318: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 12319: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12320: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12321: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 12322: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 12323: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.05s leader 5, trace 12451: estimate 14.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 12578: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 12579: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 12580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 12581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 12582: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 12583: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 12584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 12585: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 12586: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 12587: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 12588: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 12589: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 12590: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 12591: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 12592: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 12593: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 12594: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 12595: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 12596: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 12597: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 12598: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 13027: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 13028: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 13029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 13030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13031: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 13032: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13034: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13035: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13036: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13037: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13038: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13039: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13040: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13041: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13042: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13043: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13044: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 13045: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 13046: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 13313: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13314: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 13315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13317: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13318: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13320: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13321: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13322: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13323: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13324: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13325: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13326: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13327: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13328: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13329: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13330: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 13331: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 13332: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 13586: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13587: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13590: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13591: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13593: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13594: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13595: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13596: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13597: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13598: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13599: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13600: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13601: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13602: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13603: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13604: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13605: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 15723: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 15724: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 15725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 15726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 15727: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 15728: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 15729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 15730: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 15731: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 15732: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 15733: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 15734: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 15735: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 15736: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 15737: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 15738: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 15739: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 15740: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 15741: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 15742: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 15940: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 15941: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 16033: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 16034: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 16035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16037: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16038: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16040: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16041: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16042: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16043: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16044: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16045: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16046: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16047: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16048: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16049: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16050: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 16051: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 16052: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 16486: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 16487: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 16488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 16489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16490: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16491: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 16492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 16493: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16494: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16495: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16496: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16497: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 16498: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16499: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16500: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16501: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16502: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16503: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 16504: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 16505: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 16693: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 16737: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16738: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 16739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 16740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16741: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16742: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 16744: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16745: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16746: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16747: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16748: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 16749: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16750: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16751: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16752: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 16753: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16754: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 16755: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 16756: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 17036: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 17037: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 17192: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17193: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 17194: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17196: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17197: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17199: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17200: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17201: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17202: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17203: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17204: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17205: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17206: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17207: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17208: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17209: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 17210: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 17211: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 17320: estimate 14.88; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 17321: estimate 14.88; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 17322: estimate 14.88; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 17323: estimate 14.88; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 17854: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 17855: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 17856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 17857: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 17858: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 17859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 17860: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 17861: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 17862: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 17863: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 17864: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 17865: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 17866: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 17867: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 17868: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 17869: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 17870: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 17871: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 17872: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 18324: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 18325: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 18326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18327: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 18328: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18330: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18331: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18332: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 18333: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18334: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18335: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18336: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18337: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18338: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18339: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18340: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 18341: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 18342: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18580: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 18581: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 18582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18583: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 18584: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18586: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18587: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18588: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18589: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18590: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18591: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18592: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18593: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18594: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18595: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18596: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 18597: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 18598: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 19030: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 19031: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 19032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19033: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 19034: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 19035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19036: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 19037: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19038: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19039: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19040: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 19041: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19042: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19043: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19044: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19045: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19046: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 19047: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 19048: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 19242: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 19243: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 19244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19245: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 19246: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 19247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19248: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19249: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19250: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19251: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19252: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19253: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19254: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19255: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19256: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19257: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19258: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 19259: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 19260: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19658: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 19659: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 19660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19661: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19662: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19664: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19665: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19666: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19667: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19668: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19669: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19670: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19671: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19672: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19673: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19674: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 19675: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 19676: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19919: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 19920: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 19921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19922: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19923: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19925: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19926: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19927: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19928: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19929: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19930: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19931: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19932: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19933: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19934: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19935: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 19936: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 19937: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 20424: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 20425: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 20426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 20427: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 20428: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 20429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20430: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 20431: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20432: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 20433: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 20434: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 20435: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20436: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20437: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 20438: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 20439: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20440: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 20441: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 20442: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 20866: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 20867: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 20868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 20869: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 20870: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 20871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 20872: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 20873: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20874: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 20875: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 20876: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 20877: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20878: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 20879: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 20880: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 20881: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20882: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 20883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 20884: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 21090: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 21091: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 21092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 21093: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 21094: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 21095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 21096: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 21097: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 21098: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 21099: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 21100: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 21101: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 21102: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 21103: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 21104: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 21105: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 21106: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 21107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 21108: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 21283: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 21284: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 21285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 21286: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 21287: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 21288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 21289: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 21290: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 21291: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 21292: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 21293: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 21294: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 21295: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 21296: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 21297: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 21298: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 21299: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 21300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 21301: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 21476: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 21477: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 21479: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 21480: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 21481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21482: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 21483: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21484: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21485: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21486: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21487: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21488: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21489: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21490: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21491: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21492: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 21493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 21494: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 152.05s leader 5, trace 21597: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 152.05s leader 5, trace 21598: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 21678: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 21679: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 21680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 21681: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 21682: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 21683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 21684: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 21685: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21686: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21687: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21688: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21689: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21690: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21691: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21692: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21693: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21694: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 21695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 21696: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 21884: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 21885: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 21886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 21887: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 21888: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 21889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 21890: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 21891: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21892: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21893: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21894: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21895: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21896: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21897: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21898: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 21899: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21900: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 21901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 21902: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 22101: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 22102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22103: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 22104: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 22105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22106: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 22107: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22108: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22109: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22110: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 22111: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22112: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22113: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22114: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22115: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22116: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 22117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 22118: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 22292: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 22293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 22294: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 22295: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 22296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 22297: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 22298: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 22299: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 22300: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 22301: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 22302: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 22303: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 22304: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 22305: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 22306: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 22307: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 22308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 22309: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 22496: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 22497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 22498: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 22499: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 22500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 22501: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 22502: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 22503: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 22504: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 22505: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 22506: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 22507: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 22508: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 22509: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 22510: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 22511: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 22512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 22513: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22705: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 22706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22707: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22708: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22710: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22711: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22712: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22713: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22714: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22715: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22716: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22717: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22718: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22719: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22720: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 22721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 22722: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22926: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 22927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22928: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22929: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22931: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22932: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22933: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22934: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22935: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22936: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22937: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22938: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22939: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22940: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22941: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 22942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 22943: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 23130: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 23131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23132: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23133: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 23134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23136: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23137: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23138: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23139: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23140: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23141: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23142: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23143: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23144: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23145: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 23146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 23147: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 23348: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 23349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23350: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 23351: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 23352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 23353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 23354: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23355: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23356: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23357: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23358: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23359: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23360: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23361: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23362: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23363: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 23364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 23365: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 23561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 23562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 23564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 23565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 23566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 23567: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23568: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23572: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23573: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 23577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 23578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 23783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 23784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 23785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 23786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 23788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 23789: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23790: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 23791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 23792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 23793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 23794: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 23795: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 23796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 23797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 23800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 23986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 23987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 23988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 23989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 23990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 23991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 23992: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 23993: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 23994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 23995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 23996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 23997: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 23998: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 23999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 24002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 24003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 212.80s leader 5, trace 24137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 212.80s leader 5, trace 24138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 24208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 24209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 24211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 24212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24214: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24215: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24219: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24220: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 24224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 24225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 24422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 24423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 24425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 24426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 24428: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24429: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24433: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24434: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 24438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 24439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 24638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 24639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 24642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 24643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24644: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24645: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 24648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24649: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24650: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 24654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 24655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 24847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 24848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 24850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 24851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 24852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24853: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24854: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 24857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24858: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24859: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 24864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 25046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 25047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 25049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 25050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 25052: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25053: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 25056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25057: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25058: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 25062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 25063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 25268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 25269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 25271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 25272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25274: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25275: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25279: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25280: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 25284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 25285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 25492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 25493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 25495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 25496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 25498: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25499: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 25502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25503: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25504: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 25508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 25509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 25704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 25705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 25707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 25708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 25709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 25710: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25711: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 25714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25715: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 25716: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 25720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 25721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 25901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 25902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 25905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 25906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 25907: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25908: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 25911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25912: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 25913: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 25917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 25918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 26119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 26120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 26121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 26122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 26123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 26124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 26125: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26126: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 26128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 26129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 26130: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26131: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 26135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 26136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 26339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 26340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 26342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 26343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 26344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 26345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 26349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 26355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 26356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 26546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 26547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 26549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 26550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 26552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 26556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 26562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 26563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.45s leader 5, trace 26699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.45s leader 5, trace 26700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 26748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 26750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 26751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 26753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 26763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 26764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 26964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 26965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 26967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 26968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 26970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 26980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 26981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 27184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 27185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 27187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 27188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 27189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 27190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 27194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 27200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 27201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 27399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 27400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 27403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 27405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 27409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 27415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 27416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 27600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 27601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 27602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 27603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 27604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 27605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 27606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 27609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 27610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 27611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 27614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 27616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 27617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 27816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 27817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 27819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 27820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 27832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 27833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 28037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 28039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 28040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 28042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 28046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 28248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 28249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 28250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 28251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 28252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 28253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 28254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 28258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 28260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 28262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 28264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 28265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 28447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 28448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 28449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 28450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 28451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 28452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 28453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 28457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 28461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 28463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 28464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 28661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 28662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 28663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 28664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 28665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 28666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 28667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 28668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 28669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 28670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 28671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 28672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 28673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 28674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 28675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 28676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 28677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 28678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 28881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 28882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 28884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 28885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 28897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 28898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 29093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 29095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 29096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 29097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 29098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 29102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 29108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 333.45s leader 5, trace 29245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 333.45s leader 5, trace 29246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 29300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 29301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 29302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 29303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 29304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 29305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 29306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 29310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 29312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 29314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 29316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 29317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 29510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 29511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 29512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 29513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 29514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 29515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 29516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 29520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 29522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 29526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 29527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 29726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 29727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 29728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 29729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 29730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 29731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 29732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 29733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 29734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 29735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 29736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 29737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 29738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 29739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 29740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 29741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 29742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 29743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 29945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 29946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 29947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 29948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 29949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 29950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 29951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 29952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 29953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 29954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 29955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 29956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 29957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 29958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 29959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 29960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 29961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 29962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 30148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 30149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 30150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 30151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 30152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 30153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 30157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 30163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 30164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 30359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 30360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 30361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 30362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 30363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 30364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 30368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 30374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Ash incapacitated
- 1: Ellis incapacitated
- 1: Vale killed in action
- 1: Soren incapacitated

## Outcome attribution

- 79.05s, evidence 16434: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1199}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 85.10s, evidence 16862: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1272}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.90s, evidence 17190: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1323}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 1322: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 1323: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 17320: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17335}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 17321: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17335}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 17322: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17386}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 92.05s, evidence 17323: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.403188 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17386}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 152.05s, evidence 1743: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21606}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 152.05s, evidence 1744: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2122}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 212.80s, evidence 2121: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24148}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 212.80s, evidence 2122: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2572}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 273.45s, evidence 2571: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 273.45s, evidence 2572: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 333.45s, evidence 3020: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 333.45s, evidence 3021: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
