# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/109/good-ember/battle-109-1789673833592798272`

## Battle summary

**Ember** · 360 s · 425 shots.

### Turning points

- 28.4s, squad 4: contact (events line 254). First recorded contact.
- 39.4s, squad 1: withdrawal ([trace 4730](#trace-4730)). 62.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 51.5s, squad 1: help call ([trace 7008](#trace-7008)). No completion observed before termination.
- 71.8s, squad 0: help call ([trace 17006](#trace-17006)). No completion observed before termination.
- 110.8s, squad 0: withdrawal ([trace 20468](#trace-20468)). 149.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 182.1s, squad 0: withdrawal ([trace 25970](#trace-25970)). 215.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 190.2s, squad 0: help call ([trace 26835](#trace-26835)). No completion observed before termination.
- 199.9s, squad 1: withdrawal ([trace 27928](#trace-27928)). 227.8s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 3 further drill types; withdrew; 46 shots, 3/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 3 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 277 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 99 shots, 0/2 lost.

### Decisions and attribution

At 39.4s, squad 1 chose broke contact ([trace 4730](#trace-4730)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 61.0s, squad 0 chose prepared a base of fire ([trace 8922](#trace-8922)), followed by 1 shots and 0 own casualties; estimate 10.3 against 0 distinct squad-reported contacts; At 61.0s, squad 0 chose advanced tactically ([trace 11948](#trace-11948)), followed by 1 shots and 0 own casualties; estimate 10.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1302](#trace-1302)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666069145664032, 'next_transition': 1327}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1304](#trace-1304)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.4280038473063, 'next_transition': 2514}.

### Communication

267 matched deliveries (mean 0.48s, max 5.50s); 540 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.35s, squad 4, contact, evidence events line 254: First recorded contact; .
- 39.40s, squad 1, withdrawal, evidence 4730: BreakContact: believed ratio at least two without superiority; 62.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 51.45s, squad 1, help call, evidence 7008: NeedSupport; No completion observed before termination.
- 71.75s, squad 0, help call, evidence 17006: NeedSupport; No completion observed before termination.
- 110.85s, squad 0, withdrawal, evidence 20468: BreakContact: believed ratio at least two without superiority; 149.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 182.05s, squad 0, withdrawal, evidence 25970: BreakContact: believed ratio at least two without superiority; 215.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 190.15s, squad 0, help call, evidence 26835: NeedSupport; No completion observed before termination.
- 199.95s, squad 1, withdrawal, evidence 27928: BreakContact: believed ratio at least two without superiority; 227.8s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.079661719518233, 'next_transition': 815}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.079661719518233, 'next_transition': 815}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.079661719518233, 'next_transition': 815}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1155}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1155}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1155}.
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
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-735"></a>
<a id="trace-737"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-845"></a>
<a id="trace-847"></a>
<a id="trace-876"></a>
<a id="trace-878"></a>
<a id="trace-911"></a>
<a id="trace-913"></a>
<a id="trace-932"></a>
<a id="trace-934"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1020"></a>
<a id="trace-1022"></a>
<a id="trace-1045"></a>
<a id="trace-1047"></a>
<a id="trace-1062"></a>
<a id="trace-1064"></a>
<a id="trace-1151"></a>
<a id="trace-1153"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1331"></a>
<a id="trace-1333"></a>
<a id="trace-1366"></a>
<a id="trace-1368"></a>
<a id="trace-1389"></a>
<a id="trace-1391"></a>
<a id="trace-1728"></a>
<a id="trace-1730"></a>
<a id="trace-1751"></a>
<a id="trace-1753"></a>
<a id="trace-1789"></a>
<a id="trace-1791"></a>
<a id="trace-1809"></a>
<a id="trace-1811"></a>
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-1936"></a>
<a id="trace-1938"></a>
<a id="trace-1973"></a>
<a id="trace-1975"></a>
<a id="trace-2005"></a>
<a id="trace-2007"></a>
<a id="trace-2341"></a>
<a id="trace-2343"></a>
<a id="trace-2369"></a>
<a id="trace-2371"></a>
<a id="trace-2412"></a>
<a id="trace-2414"></a>
<a id="trace-2444"></a>
<a id="trace-2446"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2509"></a>
<a id="trace-2511"></a>
<a id="trace-2692"></a>
<a id="trace-2694"></a>
<a id="trace-2721"></a>
<a id="trace-2723"></a>
<a id="trace-2748"></a>
<a id="trace-2750"></a>
<a id="trace-2776"></a>
<a id="trace-2778"></a>
<a id="trace-2809"></a>
<a id="trace-2811"></a>
<a id="trace-2831"></a>
<a id="trace-2833"></a>
<a id="trace-2860"></a>
<a id="trace-2862"></a>
<a id="trace-2886"></a>
<a id="trace-2888"></a>
<a id="trace-2918"></a>
<a id="trace-2920"></a>
<a id="trace-2945"></a>
<a id="trace-2947"></a>
<a id="trace-3023"></a>
<a id="trace-3025"></a>
<a id="trace-3046"></a>
<a id="trace-3048"></a>
<a id="trace-3072"></a>
<a id="trace-3074"></a>
<a id="trace-3085"></a>
<a id="trace-3087"></a>
<a id="trace-3101"></a>
<a id="trace-3103"></a>
<a id="trace-3115"></a>
<a id="trace-3117"></a>
<a id="trace-3137"></a>
<a id="trace-3139"></a>
<a id="trace-3211"></a>
<a id="trace-3213"></a>
<a id="trace-3239"></a>
<a id="trace-3241"></a>
<a id="trace-3261"></a>
<a id="trace-3263"></a>
<a id="trace-3348"></a>
<a id="trace-3350"></a>
<a id="trace-3362"></a>
<a id="trace-3364"></a>
<a id="trace-3379"></a>
<a id="trace-3381"></a>
<a id="trace-3388"></a>
<a id="trace-3390"></a>
<a id="trace-3401"></a>
<a id="trace-3403"></a>
<a id="trace-3413"></a>
<a id="trace-3415"></a>
<a id="trace-3430"></a>
<a id="trace-3432"></a>
<a id="trace-3445"></a>
<a id="trace-3447"></a>
<a id="trace-3463"></a>
<a id="trace-3465"></a>
<a id="trace-3475"></a>
<a id="trace-3477"></a>
<a id="trace-3686"></a>
<a id="trace-3688"></a>
<a id="trace-4335"></a>
<a id="trace-4337"></a>
<a id="trace-4487"></a>
<a id="trace-4489"></a>
<a id="trace-4535"></a>
<a id="trace-4537"></a>
<a id="trace-4566"></a>
<a id="trace-4568"></a>
<a id="trace-4604"></a>
<a id="trace-4606"></a>
<a id="trace-4643"></a>
<a id="trace-4645"></a>
<a id="trace-4691"></a>
<a id="trace-4693"></a>
<a id="trace-4725"></a>
<a id="trace-4727"></a>
<a id="trace-4916"></a>
<a id="trace-4918"></a>
<a id="trace-4997"></a>
<a id="trace-4999"></a>
<a id="trace-5014"></a>
<a id="trace-5016"></a>
<a id="trace-5032"></a>
<a id="trace-5034"></a>
<a id="trace-5049"></a>
<a id="trace-5051"></a>
<a id="trace-5069"></a>
<a id="trace-5071"></a>
<a id="trace-5088"></a>
<a id="trace-5090"></a>
<a id="trace-5109"></a>
<a id="trace-5111"></a>
<a id="trace-5124"></a>
<a id="trace-5126"></a>
<a id="trace-5143"></a>
<a id="trace-5145"></a>
<a id="trace-5542"></a>
<a id="trace-5544"></a>
<a id="trace-5622"></a>
<a id="trace-5624"></a>
<a id="trace-5651"></a>
<a id="trace-5653"></a>
<a id="trace-5678"></a>
<a id="trace-5680"></a>
<a id="trace-5696"></a>
<a id="trace-5698"></a>
<a id="trace-5728"></a>
<a id="trace-5730"></a>
<a id="trace-5750"></a>
<a id="trace-5752"></a>
<a id="trace-5778"></a>
<a id="trace-5780"></a>
<a id="trace-5809"></a>
<a id="trace-5811"></a>
<a id="trace-5824"></a>
<a id="trace-5826"></a>
<a id="trace-5847"></a>
<a id="trace-5849"></a>
<a id="trace-6907"></a>
<a id="trace-6909"></a>
<a id="trace-6933"></a>
<a id="trace-6935"></a>
<a id="trace-6985"></a>
<a id="trace-6987"></a>
<a id="trace-7037"></a>
<a id="trace-7039"></a>
<a id="trace-7064"></a>
<a id="trace-7066"></a>
<a id="trace-7690"></a>
<a id="trace-7692"></a>
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7798"></a>
<a id="trace-7800"></a>
<a id="trace-7832"></a>
<a id="trace-7834"></a>
<a id="trace-7852"></a>
<a id="trace-7854"></a>
<a id="trace-7949"></a>
<a id="trace-7951"></a>
<a id="trace-7983"></a>
<a id="trace-7985"></a>
<a id="trace-8013"></a>
<a id="trace-8015"></a>
<a id="trace-8615"></a>
<a id="trace-8617"></a>
<a id="trace-8643"></a>
<a id="trace-8645"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8713"></a>
<a id="trace-8715"></a>
<a id="trace-8727"></a>
<a id="trace-8729"></a>
<a id="trace-8777"></a>
<a id="trace-8779"></a>
<a id="trace-8800"></a>
<a id="trace-8802"></a>
<a id="trace-8884"></a>
<a id="trace-8886"></a>
<a id="trace-8912"></a>
<a id="trace-8914"></a>
<a id="trace-12272"></a>
<a id="trace-12274"></a>
<a id="trace-12871"></a>
<a id="trace-12873"></a>
<a id="trace-12918"></a>
<a id="trace-12920"></a>
<a id="trace-12955"></a>
<a id="trace-12957"></a>
<a id="trace-12992"></a>
<a id="trace-12994"></a>
<a id="trace-13034"></a>
<a id="trace-13036"></a>
<a id="trace-13097"></a>
<a id="trace-13099"></a>
<a id="trace-13128"></a>
<a id="trace-13130"></a>
<a id="trace-13225"></a>
<a id="trace-13227"></a>
<a id="trace-13253"></a>
<a id="trace-13255"></a>
<a id="trace-13297"></a>
<a id="trace-13299"></a>
<a id="trace-13318"></a>
<a id="trace-13320"></a>
<a id="trace-16710"></a>
<a id="trace-16712"></a>
<a id="trace-16734"></a>
<a id="trace-16736"></a>
<a id="trace-16773"></a>
<a id="trace-16775"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16935"></a>
<a id="trace-16937"></a>
<a id="trace-16955"></a>
<a id="trace-16957"></a>
<a id="trace-16975"></a>
<a id="trace-16977"></a>
- 1.60s–71.25s (×278), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079378314521077, 'next_transition': 608}.
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-872"></a>
<a id="trace-874"></a>
<a id="trace-907"></a>
<a id="trace-909"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-987"></a>
<a id="trace-989"></a>
<a id="trace-1016"></a>
<a id="trace-1018"></a>
<a id="trace-1147"></a>
<a id="trace-1149"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599709265074839, 'next_transition': 841}.
<a id="trace-1155"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1155): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1076. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5733841334734564, 'next_transition': 126}.
<a id="trace-125"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 125): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666069145664032, 'next_transition': 1327}.
<a id="trace-126"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 126): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.4280038473063, 'next_transition': 2514}.
<a id="trace-1302"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1302): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1302. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666069145664032, 'next_transition': 1327}.
<a id="trace-1303"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1303): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1303. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666069145664032, 'next_transition': 1327}.
<a id="trace-1304"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1304): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1304. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.4280038473063, 'next_transition': 2514}.
<a id="trace-1305"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1305): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.4280038473063, 'next_transition': 2514}.
<a id="trace-1327"></a>
<a id="trace-1329"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1385"></a>
<a id="trace-1387"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1327): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31271540904970413, 'next_transition': 1362}.
<a id="trace-1395"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1395): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1068. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725081225673692, 'next_transition': 1724}.
<a id="trace-1724"></a>
<a id="trace-1726"></a>
<a id="trace-1785"></a>
<a id="trace-1787"></a>
<a id="trace-1892"></a>
<a id="trace-1894"></a>
<a id="trace-1932"></a>
<a id="trace-1934"></a>
<a id="trace-1969"></a>
<a id="trace-1971"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6340630846720356, 'next_transition': 1785}.
<a id="trace-2008"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2008): received platoon directive. Knowledge: actor memory at 15.00s, trace 1822. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900108924869747, 'next_transition': 2337}.
<a id="trace-2337"></a>
<a id="trace-2339"></a>
<a id="trace-2440"></a>
<a id="trace-2442"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
<a id="trace-2688"></a>
<a id="trace-2690"></a>
<a id="trace-2717"></a>
<a id="trace-2719"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
<a id="trace-2772"></a>
<a id="trace-2774"></a>
<a id="trace-2805"></a>
<a id="trace-2807"></a>
<a id="trace-2882"></a>
<a id="trace-2884"></a>
<a id="trace-2914"></a>
<a id="trace-2916"></a>
<a id="trace-2941"></a>
<a id="trace-2943"></a>
<a id="trace-3042"></a>
<a id="trace-3044"></a>
- 17.25s–25.75s (×24), actor 5, squad 0 (trace 2337): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1827. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4363851055974504, 'next_transition': 2440}.
<a id="trace-2514"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2514): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1830. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.155904023955284, 'next_transition': 3142}.
<a id="trace-2515"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2515): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1830. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.155904023955284, 'next_transition': 3142}.
<a id="trace-3051"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 3051): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2950. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150003407681824, 'next_transition': 3068}.
<a id="trace-3068"></a>
<a id="trace-3070"></a>
<a id="trace-3097"></a>
<a id="trace-3099"></a>
<a id="trace-3111"></a>
<a id="trace-3113"></a>
<a id="trace-3133"></a>
<a id="trace-3135"></a>
<a id="trace-3207"></a>
<a id="trace-3209"></a>
<a id="trace-3235"></a>
<a id="trace-3237"></a>
<a id="trace-3257"></a>
<a id="trace-3259"></a>
<a id="trace-3344"></a>
<a id="trace-3346"></a>
<a id="trace-3358"></a>
<a id="trace-3360"></a>
<a id="trace-3375"></a>
<a id="trace-3377"></a>
<a id="trace-3384"></a>
<a id="trace-3386"></a>
<a id="trace-3409"></a>
<a id="trace-3411"></a>
<a id="trace-3441"></a>
<a id="trace-3443"></a>
<a id="trace-3459"></a>
<a id="trace-3461"></a>
<a id="trace-4331"></a>
<a id="trace-4333"></a>
<a id="trace-4483"></a>
<a id="trace-4485"></a>
<a id="trace-4562"></a>
<a id="trace-4564"></a>
<a id="trace-4639"></a>
<a id="trace-4641"></a>
<a id="trace-4687"></a>
<a id="trace-4689"></a>
- 26.25s–38.75s (×38), actor 5, squad 0 (trace 3068): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2955. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875085848738416, 'next_transition': 3097}.
<a id="trace-3142"></a>
- 28.40s–28.40s (×1), actor 8, squad 1 (trace 3142): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2958. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5474768244638303, 'next_transition': 3549}.
<a id="trace-3549"></a>
- 35.20s–35.20s (×1), actor 8, squad 1 (trace 3549): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: None.
<a id="trace-3550"></a>
- 35.20s–35.20s (×1), actor 8, squad 1 (trace 3550): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: None.
<a id="trace-3551"></a>
<a id="trace-3691"></a>
<a id="trace-3818"></a>
- 35.20s–35.35s (×3), actor 8, squad 1 (trace 3551): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: None.
<a id="trace-3945"></a>
- 35.40s–35.40s (×1), actor 8, squad 1 (trace 3945): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: None.
<a id="trace-4074"></a>
<a id="trace-4201"></a>
<a id="trace-4346"></a>
- 35.45s–36.05s (×3), actor 8, squad 1 (trace 4074): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: None.
<a id="trace-369"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 369): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4696"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4696): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4696. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4721}.
<a id="trace-4697"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4697): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4697. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4721}.
<a id="trace-4721"></a>
<a id="trace-4723"></a>
<a id="trace-4912"></a>
<a id="trace-4914"></a>
<a id="trace-5010"></a>
<a id="trace-5012"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
<a id="trace-5065"></a>
<a id="trace-5067"></a>
<a id="trace-5084"></a>
<a id="trace-5086"></a>
<a id="trace-5105"></a>
<a id="trace-5107"></a>
<a id="trace-5120"></a>
<a id="trace-5122"></a>
<a id="trace-5139"></a>
<a id="trace-5141"></a>
- 39.25s–44.25s (×18), actor 5, squad 0 (trace 4721): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 4697. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4912}.
<a id="trace-4730"></a>
- 39.40s–39.40s (×1), actor 8, squad 1 (trace 4730): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.00001412657226, 'next_transition': 7006}.
<a id="trace-4731"></a>
- 39.40s–39.40s (×1), actor 8, squad 1 (trace 4731): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 3491. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.00001412657226, 'next_transition': 7006}.
<a id="trace-5151"></a>
- 44.55s–44.55s (×1), actor 0, squad 0 (trace 5151): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 4922. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5538}.
<a id="trace-5158"></a>
- 44.55s–44.55s (×1), actor 0, squad 0 (trace 5158): MoveTactically. Knowledge: actor memory at 40.00s, trace 4922. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5538}.
<a id="trace-5159"></a>
- 44.55s–44.55s (×1), actor 0, squad 0 (trace 5159): traveling overwatch. Knowledge: actor memory at 40.00s, trace 4922. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5538}.
<a id="trace-5160"></a>
- 44.55s–44.55s (×1), actor 0, squad 0 (trace 5160): Reorganise complete. Knowledge: actor memory at 40.00s, trace 4922. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5538}.
<a id="trace-5538"></a>
<a id="trace-5540"></a>
<a id="trace-5674"></a>
<a id="trace-5676"></a>
<a id="trace-5692"></a>
<a id="trace-5694"></a>
<a id="trace-5746"></a>
<a id="trace-5748"></a>
<a id="trace-5774"></a>
<a id="trace-5776"></a>
<a id="trace-5805"></a>
<a id="trace-5807"></a>
- 44.75s–48.75s (×12), actor 5, squad 0 (trace 5538): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4927. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087492398463258, 'next_transition': 5674}.
<a id="trace-5859"></a>
- 49.95s–49.95s (×1), actor 0, squad 0 (trace 5859): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 5547. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498470982948923, 'next_transition': 6400}.
<a id="trace-5860"></a>
- 49.95s–49.95s (×1), actor 0, squad 0 (trace 5860): bounding overwatch. Knowledge: actor memory at 45.00s, trace 5547. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498470982948923, 'next_transition': 6400}.
<a id="trace-5861"></a>
<a id="trace-6400"></a>
- 49.95s–50.20s (×2), actor 0, squad 0 (trace 5861): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5547. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498470982948923, 'next_transition': 6400}.
<a id="trace-6903"></a>
<a id="trace-6905"></a>
<a id="trace-7033"></a>
<a id="trace-7035"></a>
- 50.25s–51.75s (×4), actor 5, squad 0 (trace 6903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6330. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.367657274825091, 'next_transition': 7033}.
<a id="trace-7006"></a>
- 51.45s–51.45s (×1), actor 9, squad 1 (trace 7006): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 6333. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12937}.
<a id="trace-7007"></a>
- 51.45s–51.45s (×1), actor 9, squad 1 (trace 7007): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 6333. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12937}.
<a id="trace-7008"></a>
- 51.45s–51.45s (×1), actor 9, squad 1 (trace 7008): NeedSupport. Knowledge: actor memory at 50.00s, trace 6333. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12937}.
<a id="trace-7077"></a>
- 52.45s–52.45s (×1), actor 0, squad 0 (trace 7077): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 6325. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998013322254033, 'next_transition': 537}.
<a id="trace-537"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 537): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7673"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 7673): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.616417 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 7673. Next observer evidence: None.
<a id="trace-7674"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 7674): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.616417 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 7674. Next observer evidence: None.
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-7758"></a>
<a id="trace-7760"></a>
<a id="trace-7947"></a>
<a id="trace-7981"></a>
- 52.75s–55.75s (×6), actor 5, squad 0 (trace 7686): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 7674. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0694527429248308, 'next_transition': 7758}.
<a id="trace-8004"></a>
- 56.15s–56.15s (×1), actor 0, squad 0 (trace 8004): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 7860. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874999999999999, 'next_transition': 8011}.
<a id="trace-8011"></a>
- 56.25s–56.25s (×1), actor 5, squad 0 (trace 8011): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7865. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874999999999999, 'next_transition': 8022}.
<a id="trace-8022"></a>
- 56.40s–56.40s (×1), actor 0, squad 0 (trace 8022): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 7860. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35531735444747986, 'next_transition': 8641}.
<a id="trace-8641"></a>
<a id="trace-8709"></a>
<a id="trace-8711"></a>
<a id="trace-8723"></a>
<a id="trace-8725"></a>
<a id="trace-8773"></a>
<a id="trace-8775"></a>
<a id="trace-8796"></a>
<a id="trace-8798"></a>
- 57.25s–59.75s (×9), actor 5, squad 0 (trace 8641): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7865. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2723892747636184, 'next_transition': 8709}.
<a id="trace-8892"></a>
- 60.35s–60.35s (×1), actor 0, squad 0 (trace 8892): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.024468600925472164, 'next_transition': 8908}.
<a id="trace-8908"></a>
<a id="trace-8910"></a>
- 60.75s–60.75s (×2), actor 5, squad 0 (trace 8908): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8812. Next observer evidence: {'until': 61, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3651672238456405, 'next_transition': 8922}.
<a id="trace-8917"></a>
- 60.75s–60.75s (×1), actor 0, squad 0 (trace 8917): received platoon directive; retain contact cover stage. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 61, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3651672238456405, 'next_transition': 8922}.
<a id="trace-8922"></a>
- 61.00s–61.00s (×1), actor 0, squad 0 (trace 8922): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13809110618975354, 'next_transition': 12268}.
<a id="trace-11947"></a>
- 61.00s–61.00s (×1), actor 0, squad 0 (trace 11947): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13809110618975354, 'next_transition': 12268}.
<a id="trace-11948"></a>
- 61.00s–61.00s (×1), actor 0, squad 0 (trace 11948): MoveTactically. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13809110618975354, 'next_transition': 12268}.
<a id="trace-11949"></a>
- 61.00s–61.00s (×1), actor 0, squad 0 (trace 11949): contact cover complete: assessment resumes closure. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13809110618975354, 'next_transition': 12268}.
<a id="trace-12268"></a>
<a id="trace-12270"></a>
- 61.25s–61.25s (×2), actor 5, squad 0 (trace 12268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8812. Next observer evidence: {'until': 61.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04636875000000007, 'next_transition': 12278}.
<a id="trace-12278"></a>
- 61.45s–61.45s (×1), actor 0, squad 0 (trace 12278): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37550619310707056, 'next_transition': 12914}.
<a id="trace-12279"></a>
- 61.45s–61.45s (×1), actor 0, squad 0 (trace 12279): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 8807. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37550619310707056, 'next_transition': 12914}.
<a id="trace-12914"></a>
<a id="trace-12916"></a>
<a id="trace-13030"></a>
<a id="trace-13032"></a>
<a id="trace-13093"></a>
<a id="trace-13095"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
- 62.25s–64.75s (×8), actor 5, squad 0 (trace 12914): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8812. Next observer evidence: {'until': 63.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.840934422793407, 'next_transition': 13030}.
<a id="trace-12937"></a>
- 62.60s–62.60s (×1), actor 9, squad 1 (trace 12937): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 60.00s, trace 8815. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 984}.
<a id="trace-13165"></a>
- 65.10s–65.10s (×1), actor 0, squad 0 (trace 13165): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519948114053481, 'next_transition': 13249}.
<a id="trace-13167"></a>
- 65.10s–65.10s (×1), actor 0, squad 0 (trace 13167): Fixing. Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519948114053481, 'next_transition': 13249}.
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13293"></a>
<a id="trace-13295"></a>
<a id="trace-13339"></a>
<a id="trace-13341"></a>
- 65.75s–67.25s (×6), actor 5, squad 0 (trace 13249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13147. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1197485015197889, 'next_transition': 13293}.
<a id="trace-13355"></a>
- 67.60s–67.60s (×1), actor 0, squad 0 (trace 13355): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03262128508543165, 'next_transition': 16706}.
<a id="trace-16392"></a>
- 67.60s–67.60s (×1), actor 0, squad 0 (trace 16392): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03262128508543165, 'next_transition': 16706}.
<a id="trace-16393"></a>
- 67.60s–67.60s (×1), actor 0, squad 0 (trace 16393): MoveTactically. Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03262128508543165, 'next_transition': 16706}.
<a id="trace-16394"></a>
- 67.60s–67.60s (×1), actor 0, squad 0 (trace 16394): contact cover complete: assessment resumes closure. Knowledge: actor memory at 65.00s, trace 13142. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03262128508543165, 'next_transition': 16706}.
<a id="trace-16706"></a>
<a id="trace-16708"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16832"></a>
<a id="trace-16834"></a>
<a id="trace-16931"></a>
<a id="trace-16933"></a>
<a id="trace-16951"></a>
<a id="trace-16953"></a>
<a id="trace-16971"></a>
<a id="trace-16973"></a>
<a id="trace-17003"></a>
<a id="trace-17005"></a>
- 67.75s–71.75s (×16), actor 5, squad 0 (trace 16706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13147. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09900764814207533, 'next_transition': 16730}.
<a id="trace-17006"></a>
- 71.75s–71.75s (×1), actor 0, squad 0 (trace 17006): NeedSupport. Knowledge: actor memory at 70.00s, trace 16846. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5552526725760214, 'next_transition': 17035}.
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17131"></a>
<a id="trace-17133"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
<a id="trace-17236"></a>
<a id="trace-17238"></a>
<a id="trace-17273"></a>
<a id="trace-17275"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
<a id="trace-17332"></a>
<a id="trace-17334"></a>
<a id="trace-17366"></a>
<a id="trace-17368"></a>
<a id="trace-17426"></a>
<a id="trace-17428"></a>
<a id="trace-17451"></a>
<a id="trace-17453"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17556"></a>
<a id="trace-17558"></a>
- 72.25s–80.25s (×28), actor 5, squad 0 (trace 17035): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 16851. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7737559519160677, 'next_transition': 17082}.
<a id="trace-17214"></a>
<a id="trace-17216"></a>
<a id="trace-17269"></a>
<a id="trace-17271"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
<a id="trace-17447"></a>
<a id="trace-17449"></a>
<a id="trace-17552"></a>
<a id="trace-17554"></a>
<a id="trace-17680"></a>
<a id="trace-17682"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-18211"></a>
<a id="trace-18213"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18524"></a>
<a id="trace-18526"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18742"></a>
<a id="trace-18744"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-19010"></a>
<a id="trace-19012"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19723"></a>
<a id="trace-19725"></a>
<a id="trace-19783"></a>
<a id="trace-19785"></a>
<a id="trace-19822"></a>
<a id="trace-19824"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19978"></a>
<a id="trace-19980"></a>
<a id="trace-20004"></a>
<a id="trace-20006"></a>
<a id="trace-20039"></a>
<a id="trace-20041"></a>
<a id="trace-20077"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20281"></a>
<a id="trace-20283"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20330"></a>
<a id="trace-20332"></a>
<a id="trace-20361"></a>
<a id="trace-20363"></a>
<a id="trace-20445"></a>
<a id="trace-20447"></a>
<a id="trace-20756"></a>
<a id="trace-20758"></a>
<a id="trace-20796"></a>
<a id="trace-20798"></a>
<a id="trace-20888"></a>
<a id="trace-20890"></a>
<a id="trace-20920"></a>
<a id="trace-20922"></a>
<a id="trace-21015"></a>
<a id="trace-21047"></a>
<a id="trace-21049"></a>
<a id="trace-21087"></a>
<a id="trace-21115"></a>
<a id="trace-21117"></a>
<a id="trace-21150"></a>
<a id="trace-21152"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21272"></a>
<a id="trace-21299"></a>
<a id="trace-21301"></a>
<a id="trace-21326"></a>
<a id="trace-21492"></a>
<a id="trace-21494"></a>
<a id="trace-21587"></a>
<a id="trace-21589"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21654"></a>
<a id="trace-21656"></a>
<a id="trace-21681"></a>
<a id="trace-21683"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21813"></a>
<a id="trace-21815"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21937"></a>
<a id="trace-21939"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22200"></a>
<a id="trace-22202"></a>
<a id="trace-22239"></a>
<a id="trace-22241"></a>
<a id="trace-22327"></a>
<a id="trace-22329"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22385"></a>
<a id="trace-22387"></a>
<a id="trace-22404"></a>
<a id="trace-22406"></a>
<a id="trace-22436"></a>
<a id="trace-22438"></a>
<a id="trace-22517"></a>
<a id="trace-22519"></a>
<a id="trace-22543"></a>
<a id="trace-22545"></a>
<a id="trace-22566"></a>
<a id="trace-22568"></a>
<a id="trace-22589"></a>
<a id="trace-22591"></a>
<a id="trace-22620"></a>
<a id="trace-22622"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22755"></a>
<a id="trace-22757"></a>
<a id="trace-22785"></a>
<a id="trace-22787"></a>
<a id="trace-22804"></a>
<a id="trace-22806"></a>
<a id="trace-22822"></a>
<a id="trace-22824"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24617"></a>
<a id="trace-24619"></a>
<a id="trace-24641"></a>
<a id="trace-24643"></a>
<a id="trace-24663"></a>
<a id="trace-24665"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24766"></a>
<a id="trace-24768"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24825"></a>
<a id="trace-24827"></a>
<a id="trace-24857"></a>
<a id="trace-24859"></a>
<a id="trace-24953"></a>
<a id="trace-24978"></a>
<a id="trace-24980"></a>
<a id="trace-24998"></a>
<a id="trace-25000"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25063"></a>
<a id="trace-25065"></a>
<a id="trace-25151"></a>
<a id="trace-25153"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25200"></a>
<a id="trace-25202"></a>
<a id="trace-25224"></a>
<a id="trace-25226"></a>
<a id="trace-25250"></a>
<a id="trace-25252"></a>
<a id="trace-25366"></a>
<a id="trace-25368"></a>
<a id="trace-25474"></a>
<a id="trace-25476"></a>
<a id="trace-25516"></a>
<a id="trace-25518"></a>
<a id="trace-25543"></a>
<a id="trace-25545"></a>
<a id="trace-25807"></a>
<a id="trace-25809"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25943"></a>
<a id="trace-25945"></a>
<a id="trace-26254"></a>
<a id="trace-26256"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26391"></a>
<a id="trace-26393"></a>
<a id="trace-26523"></a>
<a id="trace-26525"></a>
<a id="trace-26581"></a>
<a id="trace-26583"></a>
<a id="trace-26641"></a>
<a id="trace-26643"></a>
<a id="trace-26714"></a>
<a id="trace-26716"></a>
<a id="trace-26783"></a>
<a id="trace-26785"></a>
<a id="trace-26897"></a>
<a id="trace-26899"></a>
<a id="trace-26931"></a>
<a id="trace-26933"></a>
<a id="trace-26978"></a>
<a id="trace-26980"></a>
<a id="trace-27144"></a>
<a id="trace-27146"></a>
<a id="trace-27540"></a>
<a id="trace-27542"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27852"></a>
<a id="trace-27854"></a>
<a id="trace-27884"></a>
<a id="trace-27886"></a>
<a id="trace-27911"></a>
<a id="trace-27913"></a>
<a id="trace-28052"></a>
<a id="trace-28054"></a>
<a id="trace-28087"></a>
<a id="trace-28089"></a>
<a id="trace-28124"></a>
<a id="trace-28126"></a>
<a id="trace-28153"></a>
<a id="trace-28155"></a>
<a id="trace-28190"></a>
<a id="trace-28192"></a>
<a id="trace-28283"></a>
<a id="trace-28285"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28339"></a>
<a id="trace-28341"></a>
<a id="trace-28561"></a>
<a id="trace-28600"></a>
<a id="trace-28602"></a>
<a id="trace-28701"></a>
<a id="trace-28703"></a>
<a id="trace-28736"></a>
<a id="trace-28738"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28827"></a>
<a id="trace-28829"></a>
<a id="trace-28847"></a>
<a id="trace-28849"></a>
<a id="trace-28925"></a>
<a id="trace-28927"></a>
<a id="trace-28954"></a>
<a id="trace-28956"></a>
<a id="trace-28985"></a>
<a id="trace-29002"></a>
<a id="trace-29004"></a>
<a id="trace-29021"></a>
<a id="trace-29023"></a>
<a id="trace-29096"></a>
<a id="trace-29098"></a>
<a id="trace-29114"></a>
<a id="trace-29116"></a>
<a id="trace-29134"></a>
<a id="trace-29136"></a>
<a id="trace-29154"></a>
<a id="trace-29156"></a>
<a id="trace-29171"></a>
<a id="trace-29173"></a>
<a id="trace-29255"></a>
<a id="trace-29257"></a>
<a id="trace-29274"></a>
<a id="trace-29276"></a>
<a id="trace-29293"></a>
<a id="trace-29295"></a>
<a id="trace-29320"></a>
<a id="trace-29337"></a>
<a id="trace-29339"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29443"></a>
<a id="trace-29445"></a>
<a id="trace-29464"></a>
<a id="trace-29466"></a>
<a id="trace-29482"></a>
<a id="trace-29484"></a>
<a id="trace-29498"></a>
<a id="trace-29575"></a>
<a id="trace-29577"></a>
<a id="trace-29593"></a>
<a id="trace-29595"></a>
<a id="trace-29618"></a>
<a id="trace-29620"></a>
<a id="trace-29638"></a>
<a id="trace-29640"></a>
<a id="trace-29659"></a>
<a id="trace-29661"></a>
<a id="trace-29736"></a>
<a id="trace-29738"></a>
<a id="trace-29752"></a>
<a id="trace-29754"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29795"></a>
<a id="trace-29815"></a>
<a id="trace-29817"></a>
<a id="trace-29891"></a>
<a id="trace-29893"></a>
<a id="trace-29910"></a>
<a id="trace-29912"></a>
<a id="trace-29926"></a>
<a id="trace-29928"></a>
<a id="trace-29943"></a>
<a id="trace-29945"></a>
<a id="trace-29962"></a>
<a id="trace-29964"></a>
<a id="trace-30042"></a>
<a id="trace-30044"></a>
<a id="trace-30062"></a>
<a id="trace-30064"></a>
<a id="trace-30079"></a>
<a id="trace-30081"></a>
<a id="trace-30098"></a>
<a id="trace-30100"></a>
<a id="trace-30115"></a>
<a id="trace-30117"></a>
<a id="trace-30193"></a>
<a id="trace-30195"></a>
<a id="trace-30217"></a>
<a id="trace-30219"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30254"></a>
<a id="trace-30256"></a>
<a id="trace-30273"></a>
<a id="trace-30275"></a>
<a id="trace-30351"></a>
<a id="trace-30353"></a>
<a id="trace-30368"></a>
<a id="trace-30370"></a>
<a id="trace-30388"></a>
<a id="trace-30390"></a>
<a id="trace-30407"></a>
<a id="trace-30409"></a>
<a id="trace-30430"></a>
<a id="trace-30432"></a>
<a id="trace-30506"></a>
<a id="trace-30508"></a>
<a id="trace-30523"></a>
<a id="trace-30525"></a>
<a id="trace-30545"></a>
<a id="trace-30547"></a>
<a id="trace-30562"></a>
<a id="trace-30564"></a>
<a id="trace-30580"></a>
<a id="trace-30582"></a>
<a id="trace-30661"></a>
<a id="trace-30663"></a>
<a id="trace-30682"></a>
<a id="trace-30684"></a>
<a id="trace-30702"></a>
<a id="trace-30704"></a>
<a id="trace-30720"></a>
<a id="trace-30740"></a>
<a id="trace-30742"></a>
<a id="trace-30818"></a>
<a id="trace-30820"></a>
<a id="trace-30843"></a>
<a id="trace-30845"></a>
<a id="trace-30867"></a>
<a id="trace-30869"></a>
<a id="trace-30882"></a>
<a id="trace-30900"></a>
<a id="trace-30902"></a>
<a id="trace-30974"></a>
<a id="trace-30976"></a>
<a id="trace-30994"></a>
<a id="trace-30996"></a>
<a id="trace-31017"></a>
<a id="trace-31019"></a>
<a id="trace-31039"></a>
<a id="trace-31058"></a>
<a id="trace-31060"></a>
<a id="trace-31135"></a>
<a id="trace-31137"></a>
<a id="trace-31152"></a>
<a id="trace-31154"></a>
<a id="trace-31173"></a>
<a id="trace-31175"></a>
<a id="trace-31194"></a>
<a id="trace-31196"></a>
<a id="trace-31218"></a>
<a id="trace-31220"></a>
<a id="trace-31296"></a>
<a id="trace-31298"></a>
<a id="trace-31317"></a>
<a id="trace-31319"></a>
<a id="trace-31335"></a>
<a id="trace-31350"></a>
<a id="trace-31352"></a>
<a id="trace-31368"></a>
<a id="trace-31370"></a>
<a id="trace-31450"></a>
<a id="trace-31452"></a>
<a id="trace-31468"></a>
<a id="trace-31493"></a>
<a id="trace-31506"></a>
<a id="trace-31508"></a>
<a id="trace-31524"></a>
<a id="trace-31526"></a>
<a id="trace-31601"></a>
<a id="trace-31603"></a>
<a id="trace-31619"></a>
<a id="trace-31621"></a>
<a id="trace-31647"></a>
<a id="trace-31649"></a>
<a id="trace-31671"></a>
<a id="trace-31673"></a>
<a id="trace-31692"></a>
<a id="trace-31694"></a>
<a id="trace-31769"></a>
<a id="trace-31771"></a>
<a id="trace-31785"></a>
<a id="trace-31787"></a>
<a id="trace-31803"></a>
<a id="trace-31805"></a>
<a id="trace-31820"></a>
<a id="trace-31822"></a>
<a id="trace-31846"></a>
<a id="trace-31848"></a>
<a id="trace-31928"></a>
<a id="trace-31930"></a>
<a id="trace-31943"></a>
<a id="trace-31945"></a>
<a id="trace-31964"></a>
<a id="trace-31966"></a>
<a id="trace-31978"></a>
<a id="trace-31980"></a>
<a id="trace-32000"></a>
<a id="trace-32084"></a>
<a id="trace-32086"></a>
<a id="trace-32110"></a>
<a id="trace-32112"></a>
<a id="trace-32131"></a>
<a id="trace-32133"></a>
<a id="trace-32148"></a>
<a id="trace-32167"></a>
<a id="trace-32169"></a>
<a id="trace-32245"></a>
<a id="trace-32262"></a>
<a id="trace-32264"></a>
<a id="trace-32288"></a>
<a id="trace-32290"></a>
<a id="trace-32308"></a>
<a id="trace-32310"></a>
<a id="trace-32329"></a>
<a id="trace-32331"></a>
<a id="trace-32408"></a>
<a id="trace-32410"></a>
<a id="trace-32424"></a>
<a id="trace-32426"></a>
<a id="trace-32444"></a>
<a id="trace-32446"></a>
<a id="trace-32461"></a>
<a id="trace-32463"></a>
<a id="trace-32483"></a>
<a id="trace-32485"></a>
<a id="trace-32570"></a>
<a id="trace-32586"></a>
<a id="trace-32588"></a>
<a id="trace-32604"></a>
<a id="trace-32606"></a>
<a id="trace-32619"></a>
<a id="trace-32637"></a>
<a id="trace-32639"></a>
<a id="trace-32720"></a>
<a id="trace-32741"></a>
<a id="trace-32743"></a>
<a id="trace-32769"></a>
<a id="trace-32783"></a>
<a id="trace-32785"></a>
<a id="trace-32801"></a>
<a id="trace-32803"></a>
<a id="trace-32878"></a>
<a id="trace-32880"></a>
<a id="trace-32896"></a>
<a id="trace-32898"></a>
<a id="trace-32923"></a>
<a id="trace-32925"></a>
<a id="trace-32942"></a>
<a id="trace-32944"></a>
<a id="trace-32962"></a>
<a id="trace-32964"></a>
<a id="trace-33043"></a>
<a id="trace-33045"></a>
<a id="trace-33057"></a>
<a id="trace-33059"></a>
<a id="trace-33077"></a>
<a id="trace-33079"></a>
<a id="trace-33094"></a>
<a id="trace-33096"></a>
<a id="trace-33114"></a>
<a id="trace-33116"></a>
<a id="trace-33197"></a>
<a id="trace-33199"></a>
<a id="trace-33220"></a>
<a id="trace-33222"></a>
<a id="trace-33239"></a>
<a id="trace-33252"></a>
<a id="trace-33254"></a>
<a id="trace-33268"></a>
<a id="trace-33270"></a>
<a id="trace-33352"></a>
<a id="trace-33354"></a>
<a id="trace-33372"></a>
<a id="trace-33374"></a>
<a id="trace-33395"></a>
<a id="trace-33397"></a>
<a id="trace-33415"></a>
<a id="trace-33417"></a>
<a id="trace-33429"></a>
<a id="trace-33431"></a>
- 75.25s–359.30s (×543), actor 38, squad 4 (trace 17214): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 75.00s, trace 17155. Next observer evidence: {'until': 76.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3254974285783397, 'next_transition': 17269}.
<a id="trace-983"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (events line 983): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-984"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 984): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17561"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 17561): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.413098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 17561. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11268463882090686, 'next_transition': 17598}.
<a id="trace-17562"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 17562): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.413098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 17562. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11268463882090686, 'next_transition': 17598}.
<a id="trace-17563"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 17563): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.413098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 17563. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18358}.
<a id="trace-17564"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 17564): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.413098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 17564. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18358}.
<a id="trace-17598"></a>
<a id="trace-17600"></a>
<a id="trace-17631"></a>
<a id="trace-17633"></a>
<a id="trace-17648"></a>
<a id="trace-17650"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17759"></a>
<a id="trace-17761"></a>
<a id="trace-17784"></a>
<a id="trace-17786"></a>
- 80.75s–84.25s (×16), actor 5, squad 0 (trace 17598): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 17564. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5639068389684072, 'next_transition': 17631}.
<a id="trace-17789"></a>
- 84.40s–84.40s (×1), actor 0, squad 0 (trace 17789): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 17474. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7757144827310457, 'next_transition': 18215}.
<a id="trace-18215"></a>
<a id="trace-18217"></a>
<a id="trace-18467"></a>
<a id="trace-18469"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18528"></a>
<a id="trace-18530"></a>
<a id="trace-18544"></a>
<a id="trace-18546"></a>
- 85.25s–87.75s (×10), actor 5, squad 0 (trace 18215): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 18140. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.063124048640491, 'next_transition': 18467}.
<a id="trace-18358"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 18358): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: None.
<a id="trace-18359"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 18359): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: None.
<a id="trace-18361"></a>
- 85.30s–85.30s (×1), actor 9, squad 1 (trace 18361): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: None.
<a id="trace-18363"></a>
- 85.30s–85.30s (×1), actor 9, squad 1 (trace 18363): MoveTactically. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: None.
<a id="trace-18364"></a>
- 85.30s–85.30s (×1), actor 9, squad 1 (trace 18364): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: None.
<a id="trace-18368"></a>
- 85.35s–85.35s (×1), actor 9, squad 1 (trace 18368): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.362527546929345, 'next_transition': 18485}.
<a id="trace-18485"></a>
- 86.60s–86.60s (×1), actor 9, squad 1 (trace 18485): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725055093858717, 'next_transition': 18758}.
<a id="trace-18486"></a>
- 86.60s–86.60s (×1), actor 9, squad 1 (trace 18486): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725055093858717, 'next_transition': 18758}.
<a id="trace-18547"></a>
- 87.75s–87.75s (×1), actor 0, squad 0 (trace 18547): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 18135. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20213562923969525, 'next_transition': 18715}.
<a id="trace-18690"></a>
- 87.75s–87.75s (×1), actor 0, squad 0 (trace 18690): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 85.00s, trace 18135. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20213562923969525, 'next_transition': 18715}.
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18746"></a>
<a id="trace-18748"></a>
<a id="trace-18755"></a>
<a id="trace-18757"></a>
<a id="trace-18847"></a>
<a id="trace-18849"></a>
<a id="trace-18872"></a>
<a id="trace-18874"></a>
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19034"></a>
<a id="trace-19036"></a>
<a id="trace-19112"></a>
<a id="trace-19114"></a>
- 88.25s–95.25s (×18), actor 5, squad 0 (trace 18715): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 18140. Next observer evidence: {'until': 89.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.07619296519569572, 'next_transition': 18746}.
<a id="trace-18758"></a>
- 89.90s–89.90s (×1), actor 9, squad 1 (trace 18758): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1819}.
<a id="trace-18760"></a>
- 89.90s–89.90s (×1), actor 9, squad 1 (trace 18760): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 18143. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1819}.
<a id="trace-19129"></a>
- 95.90s–95.90s (×1), actor 0, squad 0 (trace 19129): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 95.00s, trace 19038. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1578755735588336, 'next_transition': 19147}.
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19162"></a>
<a id="trace-19164"></a>
- 96.25s–96.75s (×4), actor 5, squad 0 (trace 19147): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 19042. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22839057616376532, 'next_transition': 19162}.
<a id="trace-19165"></a>
- 96.75s–96.75s (×1), actor 0, squad 0 (trace 19165): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 19038. Next observer evidence: {'until': 97.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4471587283264763, 'next_transition': 19727}.
<a id="trace-19171"></a>
- 96.75s–96.75s (×1), actor 0, squad 0 (trace 19171): MoveTactically. Knowledge: actor memory at 95.00s, trace 19038. Next observer evidence: {'until': 97.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4471587283264763, 'next_transition': 19727}.
<a id="trace-19172"></a>
- 96.75s–96.75s (×1), actor 0, squad 0 (trace 19172): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 95.00s, trace 19038. Next observer evidence: {'until': 97.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4471587283264763, 'next_transition': 19727}.
<a id="trace-19727"></a>
<a id="trace-19729"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19787"></a>
<a id="trace-19789"></a>
<a id="trace-19801"></a>
<a id="trace-19803"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19848"></a>
<a id="trace-19850"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20043"></a>
<a id="trace-20045"></a>
<a id="trace-20058"></a>
<a id="trace-20060"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
- 97.25s–104.25s (×26), actor 5, squad 0 (trace 19727): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 19042. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1805315544273934, 'next_transition': 19746}.
<a id="trace-20094"></a>
- 104.70s–104.70s (×1), actor 0, squad 0 (trace 20094): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 19864. Next observer evidence: None.
<a id="trace-20166"></a>
- 104.70s–104.70s (×1), actor 0, squad 0 (trace 20166): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 100.00s, trace 19864. Next observer evidence: None.
<a id="trace-20169"></a>
<a id="trace-20171"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20334"></a>
<a id="trace-20336"></a>
<a id="trace-20345"></a>
<a id="trace-20347"></a>
<a id="trace-20365"></a>
<a id="trace-20367"></a>
<a id="trace-20375"></a>
<a id="trace-20377"></a>
<a id="trace-20449"></a>
<a id="trace-20451"></a>
<a id="trace-20457"></a>
<a id="trace-20459"></a>
- 104.75s–110.75s (×22), actor 5, squad 0 (trace 20169): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19868. Next observer evidence: {'until': 105.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48014050269233527, 'next_transition': 20254}.
<a id="trace-1819"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1819): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20813}.
<a id="trace-20317"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 20317): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.288627 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 20317. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20813}.
<a id="trace-20318"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 20318): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.288627 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 20318. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20813}.
<a id="trace-20468"></a>
- 110.85s–110.85s (×1), actor 2, squad 0 (trace 20468): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 20380. Next observer evidence: {'until': 112.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.225989076897473, 'next_transition': 20806}.
<a id="trace-20469"></a>
- 110.85s–110.85s (×1), actor 2, squad 0 (trace 20469): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 20380. Next observer evidence: {'until': 112.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.225989076897473, 'next_transition': 20806}.
<a id="trace-20806"></a>
<a id="trace-20808"></a>
<a id="trace-20892"></a>
<a id="trace-20911"></a>
<a id="trace-20924"></a>
<a id="trace-21017"></a>
- 112.75s–115.25s (×6), actor 5, squad 0 (trace 20806): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 20382. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501423015890098, 'next_transition': 20892}.
<a id="trace-20813"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 20813): MoveTactically. Knowledge: actor memory at 110.00s, trace 20385. Next observer evidence: None.
<a id="trace-20814"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 20814): traveling overwatch. Knowledge: actor memory at 110.00s, trace 20385. Next observer evidence: None.
<a id="trace-20815"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 20815): received platoon directive. Knowledge: actor memory at 110.00s, trace 20385. Next observer evidence: None.
<a id="trace-20821"></a>
- 112.95s–112.95s (×1), actor 9, squad 1 (trace 20821): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 20385. Next observer evidence: {'until': 115, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.5125533528121045, 'next_transition': 20958}.
<a id="trace-20958"></a>
- 115.05s–115.05s (×1), actor 9, squad 1 (trace 20958): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 20946. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21125}.
<a id="trace-20959"></a>
- 115.05s–115.05s (×1), actor 9, squad 1 (trace 20959): bounding overwatch. Knowledge: actor memory at 115.00s, trace 20946. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21125}.
<a id="trace-20960"></a>
- 115.05s–115.05s (×1), actor 9, squad 1 (trace 20960): new contact inside 100 m. Knowledge: actor memory at 115.00s, trace 20946. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21125}.
<a id="trace-21042"></a>
- 116.20s–116.20s (×1), actor 5, squad 0 (trace 21042): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 116.20s, trace 21042. Next observer evidence: None.
<a id="trace-21051"></a>
<a id="trace-21053"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21136"></a>
<a id="trace-21138"></a>
<a id="trace-21154"></a>
<a id="trace-21156"></a>
<a id="trace-21253"></a>
<a id="trace-21255"></a>
<a id="trace-21274"></a>
<a id="trace-21276"></a>
<a id="trace-21286"></a>
<a id="trace-21288"></a>
<a id="trace-21315"></a>
<a id="trace-21317"></a>
<a id="trace-21329"></a>
<a id="trace-21331"></a>
- 116.25s–123.25s (×24), actor 5, squad 0 (trace 21051): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 116.20s, trace 21042. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251999212101943, 'next_transition': 21068}.
<a id="trace-21125"></a>
- 118.35s–118.35s (×1), actor 9, squad 1 (trace 21125): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 20946. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2435}.
<a id="trace-21127"></a>
- 118.35s–118.35s (×1), actor 9, squad 1 (trace 21127): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 115.00s, trace 20946. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2435}.
<a id="trace-21336"></a>
- 123.30s–123.30s (×1), actor 2, squad 0 (trace 21336): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 21167. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13658187897374977, 'next_transition': 21470}.
<a id="trace-21358"></a>
- 123.30s–123.30s (×1), actor 2, squad 0 (trace 21358): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 21167. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13658187897374977, 'next_transition': 21470}.
<a id="trace-21470"></a>
<a id="trace-21472"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21591"></a>
<a id="trace-21593"></a>
<a id="trace-21605"></a>
<a id="trace-21607"></a>
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21642"></a>
<a id="trace-21644"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21666"></a>
<a id="trace-21668"></a>
<a id="trace-21685"></a>
<a id="trace-21687"></a>
- 123.75s–128.30s (×18), actor 5, squad 0 (trace 21470): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 21169. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7268989331978799, 'next_transition': 21511}.
<a id="trace-21688"></a>
- 128.40s–128.40s (×1), actor 2, squad 0 (trace 21688): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 125.00s, trace 21521. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6623409339027598, 'next_transition': 21701}.
<a id="trace-21701"></a>
<a id="trace-21703"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21817"></a>
<a id="trace-21819"></a>
<a id="trace-21826"></a>
<a id="trace-21828"></a>
<a id="trace-21848"></a>
<a id="trace-21850"></a>
<a id="trace-21859"></a>
<a id="trace-21861"></a>
<a id="trace-21879"></a>
<a id="trace-21881"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22096"></a>
<a id="trace-22098"></a>
- 128.80s–137.80s (×28), actor 5, squad 0 (trace 21701): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 21523. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8760517857562584, 'next_transition': 21723}.
<a id="trace-2435"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (events line 2435): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22029"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 22029): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.859115 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 22029. Next observer evidence: {'until': 165.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25378}.
<a id="trace-22030"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 22030): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.859115 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 135.60s, trace 22030. Next observer evidence: {'until': 165.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25378}.
<a id="trace-22101"></a>
- 138.00s–138.00s (×1), actor 2, squad 0 (trace 22101): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 21953. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3426413242314554, 'next_transition': 22204}.
<a id="trace-22138"></a>
- 138.00s–138.00s (×1), actor 2, squad 0 (trace 22138): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 21953. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3426413242314554, 'next_transition': 22204}.
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22331"></a>
<a id="trace-22333"></a>
<a id="trace-22342"></a>
<a id="trace-22344"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22370"></a>
<a id="trace-22372"></a>
<a id="trace-22389"></a>
<a id="trace-22391"></a>
<a id="trace-22408"></a>
<a id="trace-22410"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22440"></a>
<a id="trace-22442"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
<a id="trace-22547"></a>
<a id="trace-22549"></a>
<a id="trace-22570"></a>
<a id="trace-22572"></a>
<a id="trace-22576"></a>
<a id="trace-22578"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
- 138.30s–149.30s (×32), actor 5, squad 0 (trace 22204): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.60s, trace 22030. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3767273535083437, 'next_transition': 22252}.
<a id="trace-2775"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (events line 2775): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22627"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 22627): renew committed intent (75 s lifetime). Knowledge: actor memory at 149.40s, trace 22627. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.433457620087944, 'next_transition': 22639}.
<a id="trace-22639"></a>
<a id="trace-22641"></a>
- 149.80s–149.80s (×2), actor 5, squad 0 (trace 22639): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 149.40s, trace 22627. Next observer evidence: None.
<a id="trace-22644"></a>
- 149.90s–149.90s (×1), actor 2, squad 0 (trace 22644): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 22452. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27591607310227095, 'next_transition': 22725}.
<a id="trace-22725"></a>
<a id="trace-22727"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22759"></a>
<a id="trace-22761"></a>
<a id="trace-22770"></a>
<a id="trace-22772"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22794"></a>
<a id="trace-22796"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22814"></a>
<a id="trace-22816"></a>
<a id="trace-22832"></a>
<a id="trace-22834"></a>
- 150.30s–154.80s (×18), actor 5, squad 0 (trace 22725): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 22652. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27216935903955086, 'next_transition': 22736}.
<a id="trace-22835"></a>
- 154.95s–154.95s (×1), actor 2, squad 0 (trace 22835): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 22650. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24531}.
<a id="trace-22836"></a>
- 154.95s–154.95s (×1), actor 2, squad 0 (trace 22836): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 150.00s, trace 22650. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24531}.
<a id="trace-24531"></a>
<a id="trace-24533"></a>
<a id="trace-24545"></a>
<a id="trace-24547"></a>
<a id="trace-24578"></a>
<a id="trace-24580"></a>
<a id="trace-24600"></a>
<a id="trace-24602"></a>
<a id="trace-24621"></a>
<a id="trace-24623"></a>
<a id="trace-24645"></a>
<a id="trace-24647"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24751"></a>
<a id="trace-24753"></a>
<a id="trace-24770"></a>
<a id="trace-24772"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24807"></a>
<a id="trace-24809"></a>
- 155.30s–162.80s (×24), actor 5, squad 0 (trace 24531): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 24464. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499961269817417, 'next_transition': 24545}.
<a id="trace-3137"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 3137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24819"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 24819): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.993910 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 24819. Next observer evidence: None.
<a id="trace-24820"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 24820): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.993910 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 24820. Next observer evidence: None.
<a id="trace-24829"></a>
<a id="trace-24831"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24861"></a>
<a id="trace-24863"></a>
<a id="trace-24880"></a>
<a id="trace-24882"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24982"></a>
<a id="trace-24984"></a>
<a id="trace-24989"></a>
<a id="trace-24991"></a>
<a id="trace-25002"></a>
<a id="trace-25004"></a>
<a id="trace-25011"></a>
<a id="trace-25013"></a>
<a id="trace-25029"></a>
<a id="trace-25031"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25075"></a>
<a id="trace-25077"></a>
<a id="trace-25166"></a>
<a id="trace-25168"></a>
<a id="trace-25191"></a>
<a id="trace-25193"></a>
<a id="trace-25204"></a>
<a id="trace-25206"></a>
<a id="trace-25214"></a>
<a id="trace-25216"></a>
<a id="trace-25239"></a>
<a id="trace-25241"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25370"></a>
<a id="trace-25372"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25520"></a>
<a id="trace-25522"></a>
<a id="trace-25531"></a>
<a id="trace-25533"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
- 163.30s–178.30s (×46), actor 5, squad 0 (trace 24829): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 24820. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.208998794001715, 'next_transition': 24841}.
<a id="trace-25378"></a>
- 175.45s–175.45s (×1), actor 9, squad 1 (trace 25378): MoveTactically. Knowledge: actor memory at 175.00s, trace 25296. Next observer evidence: None.
<a id="trace-25379"></a>
- 175.45s–175.45s (×1), actor 9, squad 1 (trace 25379): traveling overwatch. Knowledge: actor memory at 175.00s, trace 25296. Next observer evidence: None.
<a id="trace-25380"></a>
- 175.45s–175.45s (×1), actor 9, squad 1 (trace 25380): current contact unknown for 10 s. Knowledge: actor memory at 175.00s, trace 25296. Next observer evidence: None.
<a id="trace-25385"></a>
- 175.50s–175.50s (×1), actor 9, squad 1 (trace 25385): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 25296. Next observer evidence: {'until': 183, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.680133509210215, 'next_transition': 26277}.
<a id="trace-25552"></a>
- 178.45s–178.45s (×1), actor 2, squad 0 (trace 25552): support established: element delivered fire on threat area. Knowledge: actor memory at 175.00s, trace 25291. Next observer evidence: {'until': 178.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25559}.
<a id="trace-25553"></a>
- 178.45s–178.45s (×1), actor 2, squad 0 (trace 25553): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 175.00s, trace 25291. Next observer evidence: {'until': 178.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25559}.
<a id="trace-25559"></a>
- 178.70s–178.70s (×1), actor 2, squad 0 (trace 25559): ReactToContact: cover and return fire. Knowledge: actor memory at 175.00s, trace 25291. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25792}.
<a id="trace-25560"></a>
- 178.70s–178.70s (×1), actor 2, squad 0 (trace 25560): received platoon directive. Knowledge: actor memory at 175.00s, trace 25291. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25792}.
<a id="trace-25792"></a>
<a id="trace-25794"></a>
<a id="trace-25811"></a>
<a id="trace-25813"></a>
<a id="trace-25820"></a>
<a id="trace-25822"></a>
<a id="trace-25906"></a>
<a id="trace-25908"></a>
<a id="trace-25921"></a>
<a id="trace-25923"></a>
<a id="trace-25947"></a>
<a id="trace-25949"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
- 178.80s–181.80s (×14), actor 5, squad 0 (trace 25792): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 25293. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25811}.
<a id="trace-25970"></a>
- 182.05s–182.05s (×1), actor 2, squad 0 (trace 25970): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 180.00s, trace 25830. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16489757916687509, 'next_transition': 26272}.
<a id="trace-25971"></a>
- 182.05s–182.05s (×1), actor 2, squad 0 (trace 25971): rearward bound: one stationary suppressing element. Knowledge: actor memory at 180.00s, trace 25830. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16489757916687509, 'next_transition': 26272}.
<a id="trace-26272"></a>
<a id="trace-26274"></a>
<a id="trace-26340"></a>
<a id="trace-26342"></a>
<a id="trace-26371"></a>
<a id="trace-26373"></a>
<a id="trace-26422"></a>
<a id="trace-26424"></a>
<a id="trace-26527"></a>
<a id="trace-26529"></a>
<a id="trace-26556"></a>
<a id="trace-26558"></a>
<a id="trace-26585"></a>
<a id="trace-26587"></a>
<a id="trace-26616"></a>
<a id="trace-26618"></a>
<a id="trace-26645"></a>
<a id="trace-26647"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26787"></a>
<a id="trace-26789"></a>
- 182.80s–189.30s (×22), actor 5, squad 0 (trace 26272): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 25832. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41636399140307107, 'next_transition': 26340}.
<a id="trace-26277"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 26277): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 25835. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.842530189692837, 'next_transition': 27012}.
<a id="trace-26278"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 26278): MoveTactically. Knowledge: actor memory at 180.00s, trace 25835. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.842530189692837, 'next_transition': 27012}.
<a id="trace-26279"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 26279): bounding overwatch. Knowledge: actor memory at 180.00s, trace 25835. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.842530189692837, 'next_transition': 27012}.
<a id="trace-26280"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 26280): . Knowledge: actor memory at 180.00s, trace 25835. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.842530189692837, 'next_transition': 27012}.
<a id="trace-26835"></a>
- 190.15s–190.15s (×1), actor 2, squad 0 (trace 26835): NeedSupport. Knowledge: actor memory at 190.00s, trace 26816. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3154022845856776, 'next_transition': 26901}.
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26911"></a>
<a id="trace-26913"></a>
<a id="trace-26935"></a>
<a id="trace-26937"></a>
<a id="trace-26961"></a>
<a id="trace-26963"></a>
<a id="trace-26982"></a>
<a id="trace-26984"></a>
<a id="trace-27002"></a>
<a id="trace-27004"></a>
<a id="trace-27148"></a>
<a id="trace-27150"></a>
- 190.30s–193.30s (×14), actor 5, squad 0 (trace 26901): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 26818. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1156909912011783, 'next_transition': 26911}.
<a id="trace-27012"></a>
- 193.20s–193.20s (×1), actor 9, squad 1 (trace 27012): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 26821. Next observer evidence: None.
<a id="trace-27013"></a>
<a id="trace-27151"></a>
<a id="trace-27279"></a>
<a id="trace-27701"></a>
- 193.20s–196.65s (×4), actor 9, squad 1 (trace 27013): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 26821. Next observer evidence: None.
<a id="trace-27424"></a>
- 193.95s–193.95s (×1), actor 2, squad 0 (trace 27424): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 26816. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6854573994400394, 'next_transition': 27544}.
<a id="trace-27425"></a>
- 193.95s–193.95s (×1), actor 2, squad 0 (trace 27425): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 26816. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6854573994400394, 'next_transition': 27544}.
<a id="trace-27544"></a>
<a id="trace-27546"></a>
<a id="trace-27649"></a>
<a id="trace-27651"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27856"></a>
<a id="trace-27858"></a>
<a id="trace-27868"></a>
<a id="trace-27870"></a>
<a id="trace-27888"></a>
<a id="trace-27890"></a>
<a id="trace-27900"></a>
<a id="trace-27902"></a>
<a id="trace-27915"></a>
<a id="trace-27917"></a>
<a id="trace-27925"></a>
<a id="trace-27927"></a>
<a id="trace-28056"></a>
<a id="trace-28058"></a>
<a id="trace-28072"></a>
<a id="trace-28074"></a>
<a id="trace-28105"></a>
<a id="trace-28107"></a>
<a id="trace-28128"></a>
<a id="trace-28130"></a>
<a id="trace-28139"></a>
<a id="trace-28141"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28194"></a>
<a id="trace-28196"></a>
<a id="trace-28210"></a>
<a id="trace-28212"></a>
<a id="trace-28287"></a>
<a id="trace-28289"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28353"></a>
<a id="trace-28355"></a>
- 194.30s–207.80s (×42), actor 5, squad 0 (trace 27544): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 26818. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1274501060239284, 'next_transition': 27649}.
<a id="trace-27928"></a>
- 199.95s–199.95s (×1), actor 9, squad 1 (trace 27928): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 27576. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.946506798499719, 'next_transition': 3779}.
<a id="trace-27929"></a>
- 199.95s–199.95s (×1), actor 9, squad 1 (trace 27929): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 27576. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.946506798499719, 'next_transition': 3779}.
<a id="trace-3779"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 3779): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28204"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 28204): renew committed intent (75 s lifetime). Knowledge: actor memory at 204.65s, trace 28204. Next observer evidence: {'until': 211.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.713266779963888, 'next_transition': 28749}.
<a id="trace-28365"></a>
- 208.15s–208.15s (×1), actor 2, squad 0 (trace 28365): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 28216. Next observer evidence: {'until': 208.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4258898436631899, 'next_transition': 28580}.
<a id="trace-28503"></a>
- 208.15s–208.15s (×1), actor 2, squad 0 (trace 28503): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 28216. Next observer evidence: {'until': 208.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4258898436631899, 'next_transition': 28580}.
<a id="trace-28580"></a>
<a id="trace-28582"></a>
<a id="trace-28604"></a>
<a id="trace-28606"></a>
<a id="trace-28624"></a>
<a id="trace-28626"></a>
<a id="trace-28705"></a>
<a id="trace-28707"></a>
<a id="trace-28724"></a>
<a id="trace-28726"></a>
<a id="trace-28740"></a>
<a id="trace-28742"></a>
<a id="trace-28795"></a>
<a id="trace-28797"></a>
<a id="trace-28813"></a>
<a id="trace-28815"></a>
<a id="trace-28818"></a>
<a id="trace-28820"></a>
<a id="trace-28831"></a>
<a id="trace-28833"></a>
<a id="trace-28838"></a>
<a id="trace-28840"></a>
<a id="trace-28851"></a>
<a id="trace-28853"></a>
<a id="trace-28857"></a>
<a id="trace-28859"></a>
<a id="trace-28929"></a>
<a id="trace-28931"></a>
- 208.80s–215.30s (×28), actor 5, squad 0 (trace 28580): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 28218. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5921989218008307, 'next_transition': 28604}.
<a id="trace-28749"></a>
- 211.70s–211.70s (×1), actor 9, squad 1 (trace 28749): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 28634. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29304}.
<a id="trace-28791"></a>
- 211.70s–211.70s (×1), actor 9, squad 1 (trace 28791): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 28634. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29304}.
<a id="trace-28932"></a>
- 215.40s–215.40s (×1), actor 2, squad 0 (trace 28932): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 28860. Next observer evidence: {'until': 215.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28941}.
<a id="trace-28941"></a>
<a id="trace-28943"></a>
<a id="trace-28958"></a>
<a id="trace-28960"></a>
<a id="trace-28972"></a>
<a id="trace-28974"></a>
<a id="trace-28993"></a>
<a id="trace-28995"></a>
<a id="trace-29006"></a>
<a id="trace-29008"></a>
<a id="trace-29012"></a>
<a id="trace-29014"></a>
<a id="trace-29100"></a>
<a id="trace-29102"></a>
<a id="trace-29105"></a>
<a id="trace-29107"></a>
<a id="trace-29118"></a>
<a id="trace-29120"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29141"></a>
<a id="trace-29143"></a>
<a id="trace-29158"></a>
<a id="trace-29160"></a>
<a id="trace-29175"></a>
<a id="trace-29177"></a>
<a id="trace-29187"></a>
<a id="trace-29189"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29264"></a>
<a id="trace-29266"></a>
<a id="trace-29278"></a>
<a id="trace-29280"></a>
<a id="trace-29285"></a>
<a id="trace-29287"></a>
<a id="trace-29297"></a>
<a id="trace-29299"></a>
<a id="trace-29301"></a>
<a id="trace-29303"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
<a id="trace-29341"></a>
<a id="trace-29343"></a>
<a id="trace-29348"></a>
<a id="trace-29350"></a>
<a id="trace-29424"></a>
<a id="trace-29426"></a>
<a id="trace-29430"></a>
<a id="trace-29432"></a>
<a id="trace-29455"></a>
<a id="trace-29457"></a>
- 215.80s–231.80s (×52), actor 5, squad 0 (trace 28941): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 28862. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28958}.
<a id="trace-29304"></a>
- 227.80s–227.80s (×1), actor 9, squad 1 (trace 29304): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 225.00s, trace 29195. Next observer evidence: None.
<a id="trace-29307"></a>
- 227.85s–227.85s (×1), actor 9, squad 1 (trace 29307): MoveTactically. Knowledge: actor memory at 225.00s, trace 29195. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3986}.
<a id="trace-29308"></a>
- 227.85s–227.85s (×1), actor 9, squad 1 (trace 29308): received platoon directive. Knowledge: actor memory at 225.00s, trace 29195. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3986}.
<a id="trace-3868"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 3868): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29486}.
<a id="trace-29468"></a>
<a id="trace-29470"></a>
- 232.30s–232.30s (×2), actor 5, squad 0 (trace 29468): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 29357. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29486}.
<a id="trace-29471"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 29471): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.30s, trace 29471. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29486}.
<a id="trace-29486"></a>
<a id="trace-29488"></a>
<a id="trace-29492"></a>
<a id="trace-29494"></a>
<a id="trace-29501"></a>
<a id="trace-29503"></a>
<a id="trace-29506"></a>
<a id="trace-29508"></a>
<a id="trace-29579"></a>
<a id="trace-29581"></a>
<a id="trace-29597"></a>
<a id="trace-29599"></a>
<a id="trace-29608"></a>
<a id="trace-29610"></a>
<a id="trace-29622"></a>
<a id="trace-29624"></a>
<a id="trace-29642"></a>
<a id="trace-29644"></a>
<a id="trace-29648"></a>
<a id="trace-29650"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29740"></a>
<a id="trace-29742"></a>
<a id="trace-29744"></a>
<a id="trace-29746"></a>
<a id="trace-29756"></a>
<a id="trace-29758"></a>
<a id="trace-29765"></a>
<a id="trace-29767"></a>
<a id="trace-29776"></a>
<a id="trace-29778"></a>
<a id="trace-29784"></a>
<a id="trace-29786"></a>
<a id="trace-29804"></a>
<a id="trace-29806"></a>
<a id="trace-29819"></a>
<a id="trace-29821"></a>
<a id="trace-29919"></a>
<a id="trace-29921"></a>
<a id="trace-29930"></a>
<a id="trace-29932"></a>
<a id="trace-29934"></a>
<a id="trace-29936"></a>
<a id="trace-29951"></a>
<a id="trace-29953"></a>
<a id="trace-29973"></a>
<a id="trace-29975"></a>
<a id="trace-30048"></a>
<a id="trace-30050"></a>
<a id="trace-30071"></a>
<a id="trace-30073"></a>
<a id="trace-30090"></a>
<a id="trace-30092"></a>
<a id="trace-30102"></a>
<a id="trace-30104"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30124"></a>
<a id="trace-30126"></a>
<a id="trace-30197"></a>
<a id="trace-30199"></a>
<a id="trace-30203"></a>
<a id="trace-30205"></a>
<a id="trace-30221"></a>
<a id="trace-30223"></a>
<a id="trace-30246"></a>
<a id="trace-30248"></a>
<a id="trace-30258"></a>
<a id="trace-30260"></a>
<a id="trace-30265"></a>
<a id="trace-30267"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30355"></a>
<a id="trace-30357"></a>
<a id="trace-30372"></a>
<a id="trace-30374"></a>
<a id="trace-30379"></a>
<a id="trace-30381"></a>
<a id="trace-30396"></a>
<a id="trace-30398"></a>
<a id="trace-30411"></a>
<a id="trace-30413"></a>
<a id="trace-30419"></a>
<a id="trace-30421"></a>
<a id="trace-30437"></a>
<a id="trace-30439"></a>
<a id="trace-30513"></a>
<a id="trace-30515"></a>
<a id="trace-30527"></a>
<a id="trace-30529"></a>
<a id="trace-30534"></a>
<a id="trace-30536"></a>
<a id="trace-30549"></a>
<a id="trace-30551"></a>
<a id="trace-30553"></a>
<a id="trace-30555"></a>
<a id="trace-30566"></a>
<a id="trace-30568"></a>
<a id="trace-30591"></a>
<a id="trace-30593"></a>
<a id="trace-30665"></a>
<a id="trace-30667"></a>
<a id="trace-30686"></a>
<a id="trace-30688"></a>
<a id="trace-30693"></a>
<a id="trace-30695"></a>
<a id="trace-30706"></a>
<a id="trace-30708"></a>
<a id="trace-30712"></a>
<a id="trace-30714"></a>
<a id="trace-30722"></a>
<a id="trace-30724"></a>
<a id="trace-30733"></a>
<a id="trace-30735"></a>
<a id="trace-30744"></a>
<a id="trace-30746"></a>
<a id="trace-30751"></a>
<a id="trace-30753"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30847"></a>
<a id="trace-30849"></a>
<a id="trace-30856"></a>
<a id="trace-30858"></a>
<a id="trace-30871"></a>
<a id="trace-30873"></a>
<a id="trace-30884"></a>
<a id="trace-30886"></a>
<a id="trace-30891"></a>
<a id="trace-30893"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30981"></a>
<a id="trace-30983"></a>
<a id="trace-30998"></a>
<a id="trace-31000"></a>
<a id="trace-31006"></a>
<a id="trace-31008"></a>
<a id="trace-31021"></a>
<a id="trace-31023"></a>
<a id="trace-31029"></a>
<a id="trace-31031"></a>
<a id="trace-31041"></a>
<a id="trace-31043"></a>
<a id="trace-31047"></a>
<a id="trace-31049"></a>
<a id="trace-31062"></a>
<a id="trace-31064"></a>
<a id="trace-31067"></a>
<a id="trace-31069"></a>
<a id="trace-31143"></a>
<a id="trace-31145"></a>
<a id="trace-31156"></a>
<a id="trace-31158"></a>
<a id="trace-31164"></a>
<a id="trace-31166"></a>
<a id="trace-31177"></a>
<a id="trace-31179"></a>
<a id="trace-31183"></a>
<a id="trace-31185"></a>
<a id="trace-31198"></a>
<a id="trace-31200"></a>
<a id="trace-31206"></a>
<a id="trace-31208"></a>
<a id="trace-31222"></a>
<a id="trace-31224"></a>
<a id="trace-31227"></a>
<a id="trace-31229"></a>
<a id="trace-31300"></a>
<a id="trace-31302"></a>
<a id="trace-31309"></a>
<a id="trace-31311"></a>
<a id="trace-31338"></a>
<a id="trace-31340"></a>
<a id="trace-31342"></a>
<a id="trace-31344"></a>
<a id="trace-31354"></a>
<a id="trace-31356"></a>
<a id="trace-31360"></a>
<a id="trace-31362"></a>
<a id="trace-31372"></a>
<a id="trace-31374"></a>
<a id="trace-31380"></a>
<a id="trace-31382"></a>
<a id="trace-31471"></a>
<a id="trace-31473"></a>
<a id="trace-31480"></a>
<a id="trace-31482"></a>
<a id="trace-31496"></a>
<a id="trace-31498"></a>
<a id="trace-31510"></a>
<a id="trace-31512"></a>
<a id="trace-31516"></a>
<a id="trace-31518"></a>
<a id="trace-31528"></a>
<a id="trace-31530"></a>
<a id="trace-31533"></a>
<a id="trace-31535"></a>
<a id="trace-31605"></a>
<a id="trace-31607"></a>
<a id="trace-31609"></a>
<a id="trace-31611"></a>
- 233.30s–300.80s (×206), actor 5, squad 0 (trace 29486): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 29471. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29492}.
<a id="trace-3986"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (events line 3986): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30730"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 30730): renew committed intent (75 s lifetime). Knowledge: actor memory at 273.70s, trace 30730. Next observer evidence: {'until': 303.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31991}.
<a id="trace-4061"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (events line 4061): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31623"></a>
<a id="trace-31625"></a>
- 301.30s–301.30s (×2), actor 5, squad 0 (trace 31623): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 31538. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31633}.
<a id="trace-31626"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (trace 31626): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 31626. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31633}.
<a id="trace-31633"></a>
<a id="trace-31635"></a>
<a id="trace-31651"></a>
<a id="trace-31653"></a>
<a id="trace-31660"></a>
<a id="trace-31662"></a>
<a id="trace-31675"></a>
<a id="trace-31677"></a>
<a id="trace-31685"></a>
<a id="trace-31687"></a>
<a id="trace-31696"></a>
<a id="trace-31698"></a>
<a id="trace-31701"></a>
<a id="trace-31703"></a>
<a id="trace-31773"></a>
<a id="trace-31775"></a>
<a id="trace-31789"></a>
<a id="trace-31791"></a>
<a id="trace-31796"></a>
<a id="trace-31798"></a>
<a id="trace-31812"></a>
<a id="trace-31814"></a>
<a id="trace-31824"></a>
<a id="trace-31826"></a>
<a id="trace-31850"></a>
<a id="trace-31852"></a>
<a id="trace-31857"></a>
<a id="trace-31859"></a>
<a id="trace-31935"></a>
<a id="trace-31937"></a>
<a id="trace-31947"></a>
<a id="trace-31949"></a>
<a id="trace-31955"></a>
<a id="trace-31957"></a>
<a id="trace-31968"></a>
<a id="trace-31970"></a>
<a id="trace-31982"></a>
<a id="trace-31984"></a>
<a id="trace-31988"></a>
<a id="trace-31990"></a>
<a id="trace-32002"></a>
<a id="trace-32004"></a>
<a id="trace-32007"></a>
<a id="trace-32009"></a>
- 301.80s–314.80s (×44), actor 5, squad 0 (trace 31633): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 301.30s, trace 31626. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31651}.
<a id="trace-31991"></a>
- 313.85s–313.85s (×1), actor 9, squad 1 (trace 31991): traveling overwatch. Knowledge: actor memory at 310.00s, trace 31865. Next observer evidence: {'until': 315, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4105}.
<a id="trace-31992"></a>
- 313.85s–313.85s (×1), actor 9, squad 1 (trace 31992): current contact unknown for 10 s. Knowledge: actor memory at 310.00s, trace 31865. Next observer evidence: {'until': 315, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4105}.
<a id="trace-4104"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (events line 4104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4105"></a>
- 315.10s–315.10s (×1), actor 5, squad 1 (events line 4105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-32028"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (trace 32028): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 32028. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32088}.
<a id="trace-32029"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (trace 32029): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 32029. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32088}.
<a id="trace-32030"></a>
- 315.10s–315.10s (×1), actor 5, squad 1 (trace 32030): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 32030. Next observer evidence: {'until': 320, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32195}.
<a id="trace-32031"></a>
- 315.10s–315.10s (×1), actor 5, squad 1 (trace 32031): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 32031. Next observer evidence: {'until': 320, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32195}.
<a id="trace-32088"></a>
<a id="trace-32090"></a>
<a id="trace-32099"></a>
<a id="trace-32101"></a>
<a id="trace-32119"></a>
<a id="trace-32121"></a>
<a id="trace-32135"></a>
<a id="trace-32137"></a>
<a id="trace-32139"></a>
<a id="trace-32141"></a>
<a id="trace-32151"></a>
<a id="trace-32153"></a>
<a id="trace-32159"></a>
<a id="trace-32161"></a>
<a id="trace-32171"></a>
<a id="trace-32173"></a>
<a id="trace-32176"></a>
<a id="trace-32178"></a>
<a id="trace-32247"></a>
<a id="trace-32249"></a>
<a id="trace-32253"></a>
<a id="trace-32255"></a>
<a id="trace-32266"></a>
<a id="trace-32268"></a>
<a id="trace-32275"></a>
<a id="trace-32277"></a>
<a id="trace-32292"></a>
<a id="trace-32294"></a>
<a id="trace-32297"></a>
<a id="trace-32299"></a>
<a id="trace-32312"></a>
<a id="trace-32314"></a>
<a id="trace-32333"></a>
<a id="trace-32335"></a>
<a id="trace-32339"></a>
<a id="trace-32341"></a>
<a id="trace-32412"></a>
<a id="trace-32414"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32428"></a>
<a id="trace-32430"></a>
<a id="trace-32435"></a>
<a id="trace-32437"></a>
<a id="trace-32448"></a>
<a id="trace-32450"></a>
<a id="trace-32452"></a>
<a id="trace-32454"></a>
<a id="trace-32465"></a>
<a id="trace-32467"></a>
<a id="trace-32487"></a>
<a id="trace-32489"></a>
<a id="trace-32494"></a>
<a id="trace-32496"></a>
<a id="trace-32573"></a>
<a id="trace-32575"></a>
<a id="trace-32577"></a>
<a id="trace-32579"></a>
<a id="trace-32595"></a>
<a id="trace-32597"></a>
<a id="trace-32608"></a>
<a id="trace-32610"></a>
<a id="trace-32612"></a>
<a id="trace-32614"></a>
<a id="trace-32622"></a>
<a id="trace-32624"></a>
<a id="trace-32628"></a>
<a id="trace-32630"></a>
<a id="trace-32641"></a>
<a id="trace-32643"></a>
<a id="trace-32646"></a>
<a id="trace-32648"></a>
<a id="trace-32723"></a>
<a id="trace-32725"></a>
<a id="trace-32731"></a>
<a id="trace-32733"></a>
<a id="trace-32745"></a>
<a id="trace-32747"></a>
<a id="trace-32759"></a>
<a id="trace-32761"></a>
<a id="trace-32771"></a>
<a id="trace-32773"></a>
<a id="trace-32775"></a>
<a id="trace-32777"></a>
<a id="trace-32787"></a>
<a id="trace-32789"></a>
<a id="trace-32795"></a>
<a id="trace-32797"></a>
<a id="trace-32805"></a>
<a id="trace-32807"></a>
<a id="trace-32810"></a>
<a id="trace-32812"></a>
<a id="trace-32882"></a>
<a id="trace-32884"></a>
<a id="trace-32888"></a>
<a id="trace-32890"></a>
<a id="trace-32900"></a>
<a id="trace-32902"></a>
<a id="trace-32911"></a>
<a id="trace-32913"></a>
<a id="trace-32927"></a>
<a id="trace-32929"></a>
<a id="trace-32946"></a>
<a id="trace-32948"></a>
<a id="trace-32954"></a>
<a id="trace-32956"></a>
<a id="trace-32966"></a>
<a id="trace-32968"></a>
<a id="trace-32973"></a>
<a id="trace-32975"></a>
<a id="trace-33049"></a>
<a id="trace-33051"></a>
<a id="trace-33061"></a>
<a id="trace-33063"></a>
<a id="trace-33068"></a>
<a id="trace-33070"></a>
<a id="trace-33083"></a>
<a id="trace-33085"></a>
<a id="trace-33098"></a>
<a id="trace-33100"></a>
<a id="trace-33118"></a>
<a id="trace-33120"></a>
<a id="trace-33124"></a>
<a id="trace-33126"></a>
<a id="trace-33201"></a>
<a id="trace-33203"></a>
<a id="trace-33205"></a>
<a id="trace-33207"></a>
<a id="trace-33231"></a>
<a id="trace-33233"></a>
<a id="trace-33241"></a>
<a id="trace-33243"></a>
<a id="trace-33245"></a>
<a id="trace-33247"></a>
<a id="trace-33262"></a>
<a id="trace-33264"></a>
<a id="trace-33272"></a>
<a id="trace-33274"></a>
<a id="trace-33279"></a>
<a id="trace-33281"></a>
<a id="trace-33356"></a>
<a id="trace-33358"></a>
<a id="trace-33360"></a>
<a id="trace-33362"></a>
<a id="trace-33376"></a>
<a id="trace-33378"></a>
<a id="trace-33388"></a>
<a id="trace-33390"></a>
<a id="trace-33399"></a>
<a id="trace-33401"></a>
<a id="trace-33423"></a>
<a id="trace-33425"></a>
<a id="trace-33433"></a>
<a id="trace-33435"></a>
<a id="trace-33438"></a>
<a id="trace-33440"></a>
- 315.30s–359.80s (×156), actor 5, squad 0 (trace 32088): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.10s, trace 32031. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32099}.
<a id="trace-32195"></a>
- 320.05s–320.05s (×1), actor 9, squad 1 (trace 32195): received platoon directive. Knowledge: actor memory at 320.00s, trace 32184. Next observer evidence: {'until': 350, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

267 matched order/radio deliveries; 540 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.481s; maximum 5.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3277: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3278: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3279: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3280: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3281: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3282: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3283: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3284: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3285: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3286: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3493: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3494: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3495: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3496: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3497: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3498: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3499: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3500: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3501: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3502: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4930: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4932: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4933: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4934: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4935: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4936: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4937: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4938: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4939: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4940: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4941: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5553: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5555: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5557: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5558: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5559: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5560: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5561: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5562: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5563: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5564: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5565: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5566: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6325: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6330: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6331: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6334: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6335: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6336: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6337: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6338: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6339: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6340: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6341: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6342: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6343: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 7673: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 7674: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7860: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7865: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7866: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7869: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7870: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7871: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7872: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7873: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7874: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7875: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7876: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7877: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7878: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 8807: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8812: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8813: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8816: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8817: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8818: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8819: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8820: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8821: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8822: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8823: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8824: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8825: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 13142: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13143: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13144: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13147: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13148: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13151: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13152: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13153: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13154: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13155: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13156: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13157: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13158: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13159: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13160: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 16846: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 16847: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16848: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16851: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16852: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16855: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16856: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16857: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16858: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16859: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16860: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16861: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16862: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16863: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16864: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 17142: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 17143: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 17144: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 17145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 17146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 17147: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 17148: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 17149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 17150: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 17151: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 17152: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 17153: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 17154: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 17155: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 17156: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 17157: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 17158: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 17474: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 17475: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 17476: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 17477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 17478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 17479: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 17480: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 17481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17482: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17483: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 17484: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 17485: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 17486: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17487: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 17488: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17489: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17490: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 17561: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 17562: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 17563: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 17564: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 18135: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 18136: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 18137: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 18138: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 18139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 18140: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 18141: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 18142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 18143: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 18144: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 18145: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 18146: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 18147: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 18148: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 18149: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 18150: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 18151: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 18761: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 18762: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 18763: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 18764: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 18765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 18766: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 18767: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 18768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 18769: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 18770: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 18771: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 18772: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 18773: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 18774: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 18775: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 18776: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 18777: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 19038: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 19039: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 19040: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19042: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19043: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 19044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19045: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19046: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19047: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19048: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19049: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19050: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19051: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19052: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19053: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 19864: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 19865: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 19866: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 19867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 19868: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 19869: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 19870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 19871: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 19872: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 19873: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 19874: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 19875: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 19876: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 19877: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 19878: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 19879: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 20176: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 20177: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 20178: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20179: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20180: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 20181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20182: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20183: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20184: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20185: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20186: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20187: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20188: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20189: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20190: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 20317: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 20318: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 20380: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 20381: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 20382: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 20383: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 20384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 20385: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 20386: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 20387: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 20388: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 20389: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 20390: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 20391: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 20392: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 20393: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 20941: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 20942: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 20943: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 20944: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 20945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20946: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20947: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20948: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20949: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 20950: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20951: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20952: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20953: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20954: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.20s leader 5, trace 21042: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 21167: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 21168: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 21169: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 21170: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 21171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 21172: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 21173: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 21174: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 21175: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 21176: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 21177: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 21178: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 21179: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 21180: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 21521: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 21522: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 21523: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 21524: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 21525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 21526: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 21527: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 21528: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 21529: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 21530: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 21531: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 21532: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 21533: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 21534: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 21740: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 21741: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 21742: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 21743: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 21744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 21745: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 21746: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 21747: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 21748: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 21749: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 21750: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 21751: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 21752: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 21753: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 21953: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 21954: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 21955: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 21956: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 21957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 21958: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 21959: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 21960: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 21961: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 21962: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 21963: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 21964: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 21965: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 21966: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 22029: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 22030: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 22256: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 22257: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 22258: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 22259: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 22260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 22261: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 22262: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 22263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 22264: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 22265: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 22266: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 22267: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 22268: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 22269: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 22452: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 22453: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 22454: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 22455: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 22456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 22457: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 22458: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 22459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 22460: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 22461: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 22462: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 22463: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 22464: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 22465: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 22627: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 22650: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 22651: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 22652: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 22653: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 22654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 22655: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 22656: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 22657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 22658: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 22659: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 22660: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 22661: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 22662: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 22663: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 24462: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 24463: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 24464: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 24465: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 24466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 24467: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24468: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 24469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24470: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24471: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24472: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24473: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24474: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 24475: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 24673: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 24674: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 24675: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 24676: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 24677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 24678: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24679: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 24680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24681: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24682: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24683: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24684: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24685: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 24686: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 24819: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 24820: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 24888: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 24889: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 24890: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 24891: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 24892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 24893: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 24894: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 24895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 24896: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 24897: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 24898: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 24899: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 24900: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 24901: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 25083: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 25084: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 25085: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 25086: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 25087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 25088: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25089: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25091: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25092: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25093: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25094: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25095: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25096: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 25291: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 25292: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 25293: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 25294: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 25295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 25296: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25297: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 25298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25299: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25300: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25301: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 25302: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25303: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 25304: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 25830: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 25831: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 25832: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 25833: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 25834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 25835: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 25836: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 25837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 25838: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 25839: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 25840: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 25841: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 25842: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 25843: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 26439: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 26440: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 26441: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 26442: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 26443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 26444: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 26445: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 26446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 26447: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 26448: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 26449: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 26450: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 26451: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 26452: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 26816: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 26817: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 26818: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 26819: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 26820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 26821: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26822: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 26823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26824: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26825: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26826: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 26827: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26828: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26829: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 27571: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 27572: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 27573: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 27574: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 27575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 27576: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27577: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 27578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27579: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27580: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27581: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 27582: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27583: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27584: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 27982: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 27983: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27984: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 27985: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 27986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 27987: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27988: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27990: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27991: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27992: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27993: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27994: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27995: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 28204: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 28216: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 28217: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 28218: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 28219: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 28220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 28221: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 28222: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 28223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 28224: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 28225: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 28226: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 28227: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 28228: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 28229: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 28629: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 28630: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 28631: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 28632: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 28633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 28634: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 28635: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 28636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 28637: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 28638: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 28639: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 28640: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 28641: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 28642: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 28860: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 28861: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28862: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 28863: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 28864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 28865: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28866: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28868: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28869: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28870: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 28871: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28872: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28873: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 29032: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 29033: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 29034: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 29035: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 29036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 29037: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 29038: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 29039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 29040: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 29041: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 29042: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 29043: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 29044: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 29045: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 29190: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 29191: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 29192: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 29193: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 29194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 29195: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 29196: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 29197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 29198: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 29199: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 29200: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 29201: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 29202: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 29203: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 29355: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 29356: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 29357: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 29358: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 29359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 29360: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 29361: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 29362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 29363: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 29364: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 29365: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 29366: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 29367: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 29368: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 29471: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 29511: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 29512: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 29513: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 29514: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 29515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 29516: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 29517: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 29518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 29519: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 29520: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 29521: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 29522: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 29523: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 29524: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 29672: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 29673: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29674: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 29675: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 29676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 29677: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29678: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29680: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29681: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29682: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 29683: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29684: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29685: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 29827: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 29828: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29829: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 29830: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 29831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 29832: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29833: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29835: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29836: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29837: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29838: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29839: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29840: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 29976: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 29977: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29978: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 29979: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 29980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 29981: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29982: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 29983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29984: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29985: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29986: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29987: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29988: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29989: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 30129: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 30130: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 30131: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 30132: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 30133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 30134: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30135: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 30136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30137: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 30138: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30139: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 30140: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30141: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30142: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 30287: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 30288: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30289: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 30290: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 30291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 30292: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30293: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30295: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30296: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30297: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 30298: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30299: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30300: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 30441: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 30442: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 30443: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 30444: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 30445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 30446: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30447: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 30448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30449: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30450: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30451: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30452: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30453: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30454: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 30595: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 30596: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30597: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 30598: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 30599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 30600: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30601: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30603: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30604: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30605: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30606: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30607: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30608: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30730: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 30754: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 30755: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30756: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 30757: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 30758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 30759: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30760: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30762: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30763: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30764: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30765: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30766: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30767: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 30910: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 30911: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 30912: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 30913: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 30914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 30915: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 30916: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 30917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 30918: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 30919: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 30920: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 30921: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 30922: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 30923: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 31070: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 31071: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 31072: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 31073: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 31074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 31075: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 31076: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 31077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31078: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31079: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31080: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 31081: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31082: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31083: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 31232: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 31233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31234: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 31235: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 31236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 31237: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31238: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 31239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31240: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31241: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31242: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31243: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31244: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31245: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 31383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 31384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31385: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 31386: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 31387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 31388: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31389: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31391: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31392: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31393: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31394: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31395: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31396: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 31536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 31537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 31538: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 31539: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 31540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 31541: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 31542: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31545: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31546: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 31547: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31548: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31549: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 31626: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 31705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 31706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 31707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 31708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 31709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 31710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 31711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 31712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 31713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 31714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 31715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 31716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 31717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 31718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 31860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 31861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 31862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 31863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 31864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 31865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 31866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 31867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 31868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 31869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 31870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 31871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 31872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 31873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 32010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 32011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 32012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 32013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 32014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 32015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 32016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 32017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 32021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 32028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 32029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 32030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 32031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 32179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 32180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 32181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 32182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 32183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 32184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 32190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 32342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 32343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 32344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 32345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 32346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 32347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 32348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 32353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 32498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 32499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 32500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 32501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 32502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 32503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 32504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 32505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 32506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 32507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 32508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 32509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 32510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 32511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 32653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 32654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 32655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 32656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 32657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 32658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 32659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 32660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 32661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 32662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 32663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 32664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 32665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 32666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 32814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 32815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 32816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 32817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 32818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 32819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 32820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 32821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 32822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 32823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 32824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 32825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 32826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 32827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 32977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 32978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 32979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 32980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 32981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 32982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 32983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 32984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 32985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 32986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 32987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 32988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 32989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 32990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 33132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 33133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 33134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 33135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 33136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 33137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 33143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 33284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 33285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 33286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 33287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 33288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 33289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 33290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 33291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 33292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 33293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 33294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 33295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 33296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 33297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 33441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 33442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 33443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 33444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 33445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 33446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 33447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 33448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 33449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 33450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 33451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 33452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 33453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 33454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Voss incapacitated
- 1: Lark incapacitated
- 1: Rook killed in action
- 1: Tern incapacitated
- 1: Vale killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
