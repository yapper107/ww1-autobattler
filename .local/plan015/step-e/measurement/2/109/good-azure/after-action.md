# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/2/109/good-azure/battle-109-1789673674413490066`

## Battle summary

**Ember** · 360 s · 78 shots.

### Turning points

- 21.2s, squad 4: contact (events line 227). First recorded contact.
- 25.0s, squad 0: withdrawal ([trace 1807](#trace-1807)). 69.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 43.8s, squad 0: help call ([trace 2764](#trace-2764)). No completion observed before termination.
- 75.3s, squad 0: withdrawal ([trace 4249](#trace-4249)). 121.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 198.5s, squad 0: withdrawal ([trace 10134](#trace-10134)). 222.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 244.7s, squad 0: withdrawal ([trace 11756](#trace-11756)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 8 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 70 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 21.3s, squad 0 chose took cover and returned fire ([trace 1265](#trace-1265)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
- 26.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367904 retreat threshold=0.500000 initiative=delegated ([trace 1997](#trace-1997)). Following evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4070749604888981, 'next_transition': 2013}.

### Communication

169 matched deliveries (mean 0.14s, max 1.65s); 243 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 21.20s, squad 4, contact, evidence events line 227: First recorded contact; .
- 25.00s, squad 0, withdrawal, evidence 1807: BreakContact: believed ratio at least two without superiority; 69.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 43.75s, squad 0, help call, evidence 2764: NeedSupport; No completion observed before termination.
- 75.35s, squad 0, withdrawal, evidence 4249: Withdraw to received rally; 121.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 198.50s, squad 0, withdrawal, evidence 10134: BreakContact: believed ratio at least two without superiority; 222.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 244.70s, squad 0, withdrawal, evidence 11756: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260018416181004, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630004122996275, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300062874932466, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-504"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-550"></a>
<a id="trace-568"></a>
<a id="trace-597"></a>
<a id="trace-609"></a>
<a id="trace-621"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-759"></a>
<a id="trace-775"></a>
<a id="trace-784"></a>
<a id="trace-799"></a>
<a id="trace-819"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.784422458864353, 'next_transition': 504}.
<a id="trace-479"></a>
<a id="trace-506"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-570"></a>
<a id="trace-599"></a>
<a id="trace-611"></a>
<a id="trace-623"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-777"></a>
<a id="trace-786"></a>
<a id="trace-801"></a>
<a id="trace-918"></a>
<a id="trace-1001"></a>
<a id="trace-1016"></a>
<a id="trace-1037"></a>
<a id="trace-1055"></a>
<a id="trace-1071"></a>
<a id="trace-1104"></a>
<a id="trace-1118"></a>
<a id="trace-1145"></a>
<a id="trace-1228"></a>
<a id="trace-1248"></a>
<a id="trace-1263"></a>
<a id="trace-1652"></a>
<a id="trace-1687"></a>
<a id="trace-1693"></a>
<a id="trace-1716"></a>
<a id="trace-1747"></a>
<a id="trace-1795"></a>
<a id="trace-1981"></a>
<a id="trace-1992"></a>
<a id="trace-2015"></a>
<a id="trace-2033"></a>
<a id="trace-2053"></a>
<a id="trace-2065"></a>
<a id="trace-2082"></a>
<a id="trace-2112"></a>
<a id="trace-2121"></a>
<a id="trace-2197"></a>
<a id="trace-2203"></a>
<a id="trace-2219"></a>
<a id="trace-2231"></a>
<a id="trace-2248"></a>
<a id="trace-2268"></a>
<a id="trace-2286"></a>
<a id="trace-2298"></a>
<a id="trace-2320"></a>
<a id="trace-2339"></a>
<a id="trace-2415"></a>
<a id="trace-2423"></a>
<a id="trace-2453"></a>
<a id="trace-2471"></a>
<a id="trace-2481"></a>
<a id="trace-2494"></a>
<a id="trace-2515"></a>
<a id="trace-2528"></a>
<a id="trace-2544"></a>
<a id="trace-2623"></a>
<a id="trace-2633"></a>
<a id="trace-2704"></a>
<a id="trace-2714"></a>
<a id="trace-2740"></a>
<a id="trace-2753"></a>
<a id="trace-2763"></a>
<a id="trace-2789"></a>
<a id="trace-2800"></a>
<a id="trace-2878"></a>
<a id="trace-2888"></a>
<a id="trace-2897"></a>
<a id="trace-2913"></a>
<a id="trace-2922"></a>
<a id="trace-2930"></a>
<a id="trace-2941"></a>
<a id="trace-3049"></a>
<a id="trace-3055"></a>
<a id="trace-3063"></a>
<a id="trace-3070"></a>
<a id="trace-3083"></a>
<a id="trace-3104"></a>
<a id="trace-3111"></a>
<a id="trace-3137"></a>
<a id="trace-3211"></a>
<a id="trace-3220"></a>
<a id="trace-3231"></a>
<a id="trace-3308"></a>
<a id="trace-3321"></a>
<a id="trace-3333"></a>
<a id="trace-3349"></a>
<a id="trace-3363"></a>
<a id="trace-3372"></a>
<a id="trace-3450"></a>
<a id="trace-3469"></a>
<a id="trace-3475"></a>
<a id="trace-3494"></a>
<a id="trace-3502"></a>
<a id="trace-3511"></a>
<a id="trace-3520"></a>
<a id="trace-3618"></a>
<a id="trace-3626"></a>
<a id="trace-3639"></a>
<a id="trace-3656"></a>
<a id="trace-3672"></a>
<a id="trace-3701"></a>
<a id="trace-3771"></a>
<a id="trace-3793"></a>
<a id="trace-3980"></a>
<a id="trace-3995"></a>
<a id="trace-4028"></a>
<a id="trace-4053"></a>
<a id="trace-4072"></a>
<a id="trace-4082"></a>
<a id="trace-4099"></a>
<a id="trace-4114"></a>
<a id="trace-4248"></a>
<a id="trace-4314"></a>
<a id="trace-4334"></a>
<a id="trace-4390"></a>
<a id="trace-4409"></a>
<a id="trace-4447"></a>
<a id="trace-4455"></a>
<a id="trace-4534"></a>
<a id="trace-4544"></a>
<a id="trace-4569"></a>
<a id="trace-4589"></a>
<a id="trace-4601"></a>
<a id="trace-4611"></a>
<a id="trace-4627"></a>
<a id="trace-4734"></a>
<a id="trace-4760"></a>
<a id="trace-4791"></a>
<a id="trace-4799"></a>
<a id="trace-4817"></a>
<a id="trace-4884"></a>
<a id="trace-4897"></a>
<a id="trace-4911"></a>
<a id="trace-4995"></a>
<a id="trace-5026"></a>
<a id="trace-5089"></a>
<a id="trace-5100"></a>
<a id="trace-5116"></a>
<a id="trace-5128"></a>
<a id="trace-5229"></a>
<a id="trace-5241"></a>
<a id="trace-5257"></a>
<a id="trace-5265"></a>
<a id="trace-5282"></a>
<a id="trace-5315"></a>
<a id="trace-5408"></a>
<a id="trace-5417"></a>
<a id="trace-5432"></a>
<a id="trace-5442"></a>
<a id="trace-5460"></a>
<a id="trace-5476"></a>
<a id="trace-5487"></a>
<a id="trace-5498"></a>
<a id="trace-5571"></a>
<a id="trace-5581"></a>
<a id="trace-5682"></a>
<a id="trace-5698"></a>
<a id="trace-5717"></a>
<a id="trace-5745"></a>
<a id="trace-5759"></a>
<a id="trace-5771"></a>
<a id="trace-5786"></a>
<a id="trace-5793"></a>
<a id="trace-5875"></a>
<a id="trace-5891"></a>
<a id="trace-5906"></a>
<a id="trace-5917"></a>
<a id="trace-5937"></a>
<a id="trace-5946"></a>
<a id="trace-6019"></a>
<a id="trace-6028"></a>
<a id="trace-6049"></a>
<a id="trace-6139"></a>
<a id="trace-6155"></a>
<a id="trace-6176"></a>
<a id="trace-6187"></a>
<a id="trace-6204"></a>
<a id="trace-6245"></a>
<a id="trace-6261"></a>
<a id="trace-6275"></a>
<a id="trace-6353"></a>
<a id="trace-6390"></a>
<a id="trace-6440"></a>
<a id="trace-6452"></a>
<a id="trace-6477"></a>
<a id="trace-6612"></a>
<a id="trace-6625"></a>
<a id="trace-6632"></a>
<a id="trace-6643"></a>
<a id="trace-6650"></a>
<a id="trace-6667"></a>
<a id="trace-6742"></a>
<a id="trace-6750"></a>
<a id="trace-6760"></a>
<a id="trace-6771"></a>
<a id="trace-6779"></a>
<a id="trace-6792"></a>
<a id="trace-6802"></a>
<a id="trace-6810"></a>
<a id="trace-6823"></a>
<a id="trace-6885"></a>
<a id="trace-6965"></a>
<a id="trace-6973"></a>
<a id="trace-6988"></a>
<a id="trace-7007"></a>
<a id="trace-7019"></a>
<a id="trace-7050"></a>
<a id="trace-7061"></a>
<a id="trace-7072"></a>
<a id="trace-7080"></a>
<a id="trace-7160"></a>
<a id="trace-7178"></a>
<a id="trace-7198"></a>
<a id="trace-7221"></a>
<a id="trace-7229"></a>
<a id="trace-7241"></a>
<a id="trace-7256"></a>
<a id="trace-7270"></a>
<a id="trace-7289"></a>
<a id="trace-7393"></a>
<a id="trace-7405"></a>
<a id="trace-7420"></a>
<a id="trace-7536"></a>
<a id="trace-7557"></a>
<a id="trace-7575"></a>
<a id="trace-7588"></a>
<a id="trace-7604"></a>
<a id="trace-7692"></a>
<a id="trace-7710"></a>
<a id="trace-7736"></a>
<a id="trace-7769"></a>
<a id="trace-7793"></a>
<a id="trace-7818"></a>
<a id="trace-7900"></a>
<a id="trace-7928"></a>
<a id="trace-7945"></a>
<a id="trace-8066"></a>
<a id="trace-8076"></a>
<a id="trace-8099"></a>
<a id="trace-8111"></a>
<a id="trace-8226"></a>
<a id="trace-8244"></a>
<a id="trace-8271"></a>
<a id="trace-8317"></a>
<a id="trace-8326"></a>
<a id="trace-8347"></a>
<a id="trace-8369"></a>
<a id="trace-8448"></a>
<a id="trace-8477"></a>
<a id="trace-8497"></a>
<a id="trace-8506"></a>
<a id="trace-8529"></a>
<a id="trace-8663"></a>
<a id="trace-8674"></a>
<a id="trace-8760"></a>
<a id="trace-8792"></a>
<a id="trace-8802"></a>
<a id="trace-8837"></a>
<a id="trace-8850"></a>
<a id="trace-8862"></a>
<a id="trace-8882"></a>
<a id="trace-8900"></a>
<a id="trace-8980"></a>
<a id="trace-8989"></a>
<a id="trace-9011"></a>
<a id="trace-9026"></a>
<a id="trace-9040"></a>
<a id="trace-9068"></a>
<a id="trace-9074"></a>
<a id="trace-9084"></a>
<a id="trace-9171"></a>
<a id="trace-9180"></a>
<a id="trace-9194"></a>
<a id="trace-9202"></a>
<a id="trace-9218"></a>
<a id="trace-9226"></a>
<a id="trace-9239"></a>
<a id="trace-9278"></a>
<a id="trace-9295"></a>
<a id="trace-9312"></a>
<a id="trace-9416"></a>
<a id="trace-9431"></a>
<a id="trace-9449"></a>
<a id="trace-9464"></a>
<a id="trace-9494"></a>
<a id="trace-9504"></a>
<a id="trace-9594"></a>
<a id="trace-9614"></a>
<a id="trace-9641"></a>
<a id="trace-9718"></a>
<a id="trace-9867"></a>
<a id="trace-9887"></a>
<a id="trace-10046"></a>
<a id="trace-10101"></a>
<a id="trace-10133"></a>
<a id="trace-10257"></a>
<a id="trace-10273"></a>
<a id="trace-10277"></a>
<a id="trace-10357"></a>
<a id="trace-10369"></a>
<a id="trace-10396"></a>
<a id="trace-10417"></a>
<a id="trace-10455"></a>
<a id="trace-10555"></a>
<a id="trace-10568"></a>
<a id="trace-10573"></a>
<a id="trace-10585"></a>
<a id="trace-10600"></a>
<a id="trace-10614"></a>
<a id="trace-10624"></a>
<a id="trace-10632"></a>
<a id="trace-10711"></a>
<a id="trace-10730"></a>
<a id="trace-10739"></a>
<a id="trace-10751"></a>
<a id="trace-10766"></a>
<a id="trace-10777"></a>
<a id="trace-10784"></a>
<a id="trace-10801"></a>
<a id="trace-10807"></a>
<a id="trace-10880"></a>
<a id="trace-10887"></a>
<a id="trace-10899"></a>
<a id="trace-10909"></a>
<a id="trace-10920"></a>
<a id="trace-10928"></a>
<a id="trace-10940"></a>
<a id="trace-10950"></a>
<a id="trace-11041"></a>
<a id="trace-11049"></a>
<a id="trace-11066"></a>
<a id="trace-11081"></a>
<a id="trace-11091"></a>
<a id="trace-11105"></a>
<a id="trace-11113"></a>
<a id="trace-11128"></a>
<a id="trace-11137"></a>
<a id="trace-11210"></a>
<a id="trace-11227"></a>
<a id="trace-11233"></a>
<a id="trace-11243"></a>
<a id="trace-11251"></a>
<a id="trace-11286"></a>
<a id="trace-11363"></a>
<a id="trace-11371"></a>
<a id="trace-11380"></a>
<a id="trace-11390"></a>
<a id="trace-11400"></a>
<a id="trace-11407"></a>
<a id="trace-11418"></a>
<a id="trace-11425"></a>
<a id="trace-11438"></a>
<a id="trace-11444"></a>
<a id="trace-11531"></a>
<a id="trace-11541"></a>
<a id="trace-11551"></a>
<a id="trace-11562"></a>
<a id="trace-11575"></a>
<a id="trace-11581"></a>
<a id="trace-11593"></a>
<a id="trace-11600"></a>
<a id="trace-11674"></a>
<a id="trace-11680"></a>
<a id="trace-11690"></a>
<a id="trace-11696"></a>
<a id="trace-11715"></a>
<a id="trace-11728"></a>
<a id="trace-11736"></a>
<a id="trace-11752"></a>
<a id="trace-11812"></a>
<a id="trace-11897"></a>
<a id="trace-11908"></a>
<a id="trace-11914"></a>
<a id="trace-11927"></a>
<a id="trace-11933"></a>
<a id="trace-11948"></a>
<a id="trace-11962"></a>
<a id="trace-11970"></a>
<a id="trace-11979"></a>
<a id="trace-12057"></a>
<a id="trace-12065"></a>
<a id="trace-12079"></a>
<a id="trace-12088"></a>
<a id="trace-12104"></a>
<a id="trace-12122"></a>
<a id="trace-12132"></a>
<a id="trace-12140"></a>
<a id="trace-12211"></a>
<a id="trace-12220"></a>
<a id="trace-12237"></a>
<a id="trace-12248"></a>
<a id="trace-12272"></a>
<a id="trace-12280"></a>
<a id="trace-12290"></a>
<a id="trace-12296"></a>
<a id="trace-12369"></a>
<a id="trace-12385"></a>
<a id="trace-12393"></a>
<a id="trace-12403"></a>
<a id="trace-12409"></a>
<a id="trace-12422"></a>
<a id="trace-12431"></a>
<a id="trace-12453"></a>
<a id="trace-12526"></a>
<a id="trace-12543"></a>
<a id="trace-12551"></a>
<a id="trace-12559"></a>
<a id="trace-12577"></a>
<a id="trace-12585"></a>
<a id="trace-12683"></a>
<a id="trace-12701"></a>
<a id="trace-12714"></a>
<a id="trace-12722"></a>
<a id="trace-12740"></a>
<a id="trace-12750"></a>
<a id="trace-12846"></a>
<a id="trace-12852"></a>
<a id="trace-12864"></a>
<a id="trace-12870"></a>
<a id="trace-12883"></a>
<a id="trace-12897"></a>
<a id="trace-12984"></a>
<a id="trace-12991"></a>
<a id="trace-13001"></a>
<a id="trace-13018"></a>
<a id="trace-13024"></a>
<a id="trace-13044"></a>
<a id="trace-13055"></a>
<a id="trace-13066"></a>
<a id="trace-13148"></a>
<a id="trace-13158"></a>
<a id="trace-13164"></a>
<a id="trace-13174"></a>
<a id="trace-13192"></a>
<a id="trace-13200"></a>
<a id="trace-13210"></a>
<a id="trace-13289"></a>
<a id="trace-13300"></a>
<a id="trace-13310"></a>
<a id="trace-13319"></a>
<a id="trace-13336"></a>
<a id="trace-13348"></a>
<a id="trace-13357"></a>
<a id="trace-13368"></a>
<a id="trace-13374"></a>
<a id="trace-13447"></a>
<a id="trace-13454"></a>
<a id="trace-13465"></a>
<a id="trace-13473"></a>
<a id="trace-13482"></a>
<a id="trace-13492"></a>
<a id="trace-13504"></a>
<a id="trace-13512"></a>
<a id="trace-13523"></a>
<a id="trace-13533"></a>
<a id="trace-13607"></a>
<a id="trace-13614"></a>
<a id="trace-13624"></a>
<a id="trace-13630"></a>
<a id="trace-13640"></a>
<a id="trace-13649"></a>
<a id="trace-13668"></a>
<a id="trace-13688"></a>
<a id="trace-13768"></a>
<a id="trace-13783"></a>
<a id="trace-13798"></a>
<a id="trace-13804"></a>
<a id="trace-13815"></a>
<a id="trace-13833"></a>
<a id="trace-13841"></a>
<a id="trace-13933"></a>
<a id="trace-13950"></a>
<a id="trace-13959"></a>
<a id="trace-13971"></a>
<a id="trace-13979"></a>
<a id="trace-13996"></a>
<a id="trace-14067"></a>
<a id="trace-14076"></a>
<a id="trace-14087"></a>
<a id="trace-14103"></a>
<a id="trace-14112"></a>
<a id="trace-14125"></a>
<a id="trace-14133"></a>
<a id="trace-14149"></a>
<a id="trace-14224"></a>
<a id="trace-14234"></a>
<a id="trace-14242"></a>
<a id="trace-14265"></a>
<a id="trace-14276"></a>
<a id="trace-14286"></a>
<a id="trace-14304"></a>
<a id="trace-14377"></a>
<a id="trace-14401"></a>
<a id="trace-14412"></a>
<a id="trace-14431"></a>
<a id="trace-14439"></a>
<a id="trace-14450"></a>
<a id="trace-14457"></a>
<a id="trace-14540"></a>
<a id="trace-14550"></a>
<a id="trace-14556"></a>
<a id="trace-14566"></a>
<a id="trace-14575"></a>
<a id="trace-14584"></a>
<a id="trace-14607"></a>
<a id="trace-14613"></a>
<a id="trace-14704"></a>
<a id="trace-14711"></a>
<a id="trace-14723"></a>
<a id="trace-14729"></a>
<a id="trace-14740"></a>
<a id="trace-14751"></a>
<a id="trace-14759"></a>
<a id="trace-14842"></a>
<a id="trace-14850"></a>
<a id="trace-14860"></a>
<a id="trace-14883"></a>
<a id="trace-14895"></a>
<a id="trace-14903"></a>
<a id="trace-14915"></a>
<a id="trace-14923"></a>
<a id="trace-14994"></a>
<a id="trace-15004"></a>
<a id="trace-15014"></a>
<a id="trace-15020"></a>
<a id="trace-15039"></a>
<a id="trace-15059"></a>
<a id="trace-15075"></a>
<a id="trace-15149"></a>
<a id="trace-15160"></a>
<a id="trace-15168"></a>
<a id="trace-15176"></a>
<a id="trace-15186"></a>
<a id="trace-15192"></a>
<a id="trace-15204"></a>
<a id="trace-15213"></a>
<a id="trace-15224"></a>
<a id="trace-15233"></a>
<a id="trace-15307"></a>
<a id="trace-15315"></a>
<a id="trace-15325"></a>
<a id="trace-15343"></a>
<a id="trace-15351"></a>
<a id="trace-15362"></a>
<a id="trace-15370"></a>
<a id="trace-15380"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512631416355371, 'next_transition': 506}.
<a id="trace-825"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 825): traveling overwatch. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724859198896494, 'next_transition': 916}.
<a id="trace-826"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 826): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724859198896494, 'next_transition': 916}.
<a id="trace-916"></a>
<a id="trace-999"></a>
<a id="trace-1014"></a>
<a id="trace-1035"></a>
<a id="trace-1053"></a>
<a id="trace-1069"></a>
<a id="trace-1082"></a>
<a id="trace-1102"></a>
<a id="trace-1116"></a>
<a id="trace-1129"></a>
<a id="trace-1143"></a>
<a id="trace-1226"></a>
<a id="trace-1246"></a>
<a id="trace-1261"></a>
- 14.70s–21.25s (×14), actor 5, squad 0 (trace 916): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0668709669953038, 'next_transition': 999}.
<a id="trace-1265"></a>
- 21.30s–21.30s (×1), actor 0, squad 0 (trace 1265): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1149. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1393}.
<a id="trace-1266"></a>
- 21.30s–21.30s (×1), actor 0, squad 0 (trace 1266): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1149. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1393}.
<a id="trace-1267"></a>
<a id="trace-1393"></a>
<a id="trace-1517"></a>
- 21.30s–21.50s (×3), actor 0, squad 0 (trace 1267): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1149. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1393}.
<a id="trace-1650"></a>
<a id="trace-1685"></a>
<a id="trace-1691"></a>
<a id="trace-1714"></a>
<a id="trace-1745"></a>
<a id="trace-1767"></a>
<a id="trace-1793"></a>
- 21.75s–24.75s (×7), actor 5, squad 0 (trace 1650): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1151. Next observer evidence: {'until': 22.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6163996294070042, 'next_transition': 1685}.
<a id="trace-1807"></a>
- 25.00s–25.00s (×1), actor 0, squad 0 (trace 1807): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 1799. Next observer evidence: None.
<a id="trace-1808"></a>
- 25.00s–25.00s (×1), actor 0, squad 0 (trace 1808): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 1799. Next observer evidence: None.
<a id="trace-1919"></a>
- 25.05s–25.05s (×1), actor 5, squad 0 (trace 1919): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 25.05s, trace 1919. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44716473010605406, 'next_transition': 1979}.
<a id="trace-1979"></a>
<a id="trace-1990"></a>
- 25.25s–25.75s (×2), actor 5, squad 0 (trace 1979): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.05s, trace 1919. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449932460153838, 'next_transition': 1990}.
<a id="trace-281"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (events line 281): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1997"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (trace 1997): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367904 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 1997. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4070749604888981, 'next_transition': 2013}.
<a id="trace-1998"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (trace 1998): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367904 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 1998. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4070749604888981, 'next_transition': 2013}.
<a id="trace-2013"></a>
<a id="trace-2031"></a>
<a id="trace-2051"></a>
<a id="trace-2063"></a>
<a id="trace-2080"></a>
<a id="trace-2099"></a>
<a id="trace-2110"></a>
<a id="trace-2119"></a>
<a id="trace-2195"></a>
<a id="trace-2201"></a>
<a id="trace-2217"></a>
<a id="trace-2229"></a>
<a id="trace-2246"></a>
<a id="trace-2266"></a>
<a id="trace-2284"></a>
<a id="trace-2296"></a>
<a id="trace-2318"></a>
<a id="trace-2337"></a>
<a id="trace-2413"></a>
<a id="trace-2421"></a>
<a id="trace-2438"></a>
<a id="trace-2451"></a>
<a id="trace-2469"></a>
<a id="trace-2479"></a>
<a id="trace-2492"></a>
<a id="trace-2513"></a>
<a id="trace-2526"></a>
<a id="trace-2542"></a>
<a id="trace-2621"></a>
<a id="trace-2631"></a>
- 26.25s–40.75s (×30), actor 5, squad 0 (trace 2013): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 1998. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39404269836695616, 'next_transition': 2031}.
<a id="trace-2644"></a>
- 41.15s–41.15s (×1), actor 0, squad 0 (trace 2644): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 2546. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574996924600168, 'next_transition': 2702}.
<a id="trace-2645"></a>
- 41.15s–41.15s (×1), actor 0, squad 0 (trace 2645): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 2546. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574996924600168, 'next_transition': 2702}.
<a id="trace-2702"></a>
<a id="trace-2712"></a>
<a id="trace-2728"></a>
<a id="trace-2738"></a>
<a id="trace-2751"></a>
<a id="trace-2761"></a>
- 41.25s–43.75s (×6), actor 5, squad 0 (trace 2702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2548. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149993849200346, 'next_transition': 2712}.
<a id="trace-2764"></a>
- 43.75s–43.75s (×1), actor 0, squad 0 (trace 2764): NeedSupport. Knowledge: actor memory at 40.00s, trace 2546. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5196015092778394, 'next_transition': 2787}.
<a id="trace-2787"></a>
<a id="trace-2798"></a>
<a id="trace-2876"></a>
<a id="trace-2886"></a>
<a id="trace-2895"></a>
<a id="trace-2911"></a>
<a id="trace-2920"></a>
<a id="trace-2928"></a>
<a id="trace-2939"></a>
<a id="trace-2952"></a>
<a id="trace-2958"></a>
<a id="trace-2964"></a>
<a id="trace-3047"></a>
<a id="trace-3053"></a>
<a id="trace-3061"></a>
<a id="trace-3068"></a>
<a id="trace-3081"></a>
<a id="trace-3092"></a>
<a id="trace-3102"></a>
<a id="trace-3109"></a>
<a id="trace-3121"></a>
<a id="trace-3135"></a>
<a id="trace-3209"></a>
<a id="trace-3218"></a>
<a id="trace-3229"></a>
<a id="trace-3240"></a>
- 44.25s–56.75s (×26), actor 5, squad 0 (trace 2787): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2548. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.286079882382872, 'next_transition': 2798}.
<a id="trace-3242"></a>
- 56.75s–56.75s (×1), actor 0, squad 0 (trace 3242): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3139. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7422630162348274, 'next_transition': 3306}.
<a id="trace-3243"></a>
- 56.75s–56.75s (×1), actor 0, squad 0 (trace 3243): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3139. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7422630162348274, 'next_transition': 3306}.
<a id="trace-3306"></a>
<a id="trace-3319"></a>
<a id="trace-3331"></a>
<a id="trace-3347"></a>
<a id="trace-3361"></a>
<a id="trace-3370"></a>
<a id="trace-3448"></a>
<a id="trace-3461"></a>
<a id="trace-3467"></a>
<a id="trace-3473"></a>
<a id="trace-3492"></a>
<a id="trace-3500"></a>
<a id="trace-3509"></a>
<a id="trace-3518"></a>
<a id="trace-3530"></a>
<a id="trace-3539"></a>
<a id="trace-3616"></a>
<a id="trace-3624"></a>
<a id="trace-3637"></a>
<a id="trace-3654"></a>
<a id="trace-3664"></a>
<a id="trace-3670"></a>
<a id="trace-3688"></a>
<a id="trace-3699"></a>
- 57.25s–68.75s (×24), actor 5, squad 0 (trace 3306): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3141. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5905103370913606, 'next_transition': 3319}.
<a id="trace-3702"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3702): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.86623911378131, 'next_transition': 3769}.
<a id="trace-3703"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3703): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.86623911378131, 'next_transition': 3769}.
<a id="trace-3769"></a>
- 69.25s–69.25s (×1), actor 5, squad 0 (trace 3769): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3550. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299751989045946, 'next_transition': 3779}.
<a id="trace-3779"></a>
- 69.65s–69.65s (×1), actor 0, squad 0 (trace 3779): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: None.
<a id="trace-3783"></a>
- 69.70s–69.70s (×1), actor 0, squad 0 (trace 3783): MoveTactically. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: None.
<a id="trace-3784"></a>
- 69.70s–69.70s (×1), actor 0, squad 0 (trace 3784): received platoon directive. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: None.
<a id="trace-3791"></a>
- 69.75s–69.75s (×1), actor 5, squad 0 (trace 3791): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3550. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449895382960853, 'next_transition': 3928}.
<a id="trace-3794"></a>
- 69.75s–69.75s (×1), actor 0, squad 0 (trace 3794): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 3548. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449895382960853, 'next_transition': 3928}.
<a id="trace-3928"></a>
<a id="trace-3954"></a>
<a id="trace-3978"></a>
<a id="trace-3993"></a>
<a id="trace-4026"></a>
<a id="trace-4051"></a>
<a id="trace-4070"></a>
- 70.25s–73.25s (×7), actor 5, squad 0 (trace 3928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 3851. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6826643866253231, 'next_transition': 3954}.
<a id="trace-524"></a>
- 73.65s–73.65s (×1), actor 5, squad 0 (events line 524): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4075"></a>
- 73.65s–73.65s (×1), actor 5, squad 0 (trace 4075): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401813 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 73.65s, trace 4075. Next observer evidence: None.
<a id="trace-4076"></a>
- 73.65s–73.65s (×1), actor 5, squad 0 (trace 4076): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401813 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 73.65s, trace 4076. Next observer evidence: None.
<a id="trace-4080"></a>
<a id="trace-4097"></a>
<a id="trace-4112"></a>
- 73.75s–74.75s (×3), actor 5, squad 0 (trace 4080): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 73.65s, trace 4076. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249533463305154, 'next_transition': 4097}.
<a id="trace-4115"></a>
- 74.75s–74.75s (×1), actor 0, squad 0 (trace 4115): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 3849. Next observer evidence: {'until': 74.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749750196431614, 'next_transition': 4119}.
<a id="trace-4119"></a>
- 74.80s–74.80s (×1), actor 0, squad 0 (trace 4119): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 3849. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500786696525573, 'next_transition': 4246}.
<a id="trace-4246"></a>
- 75.25s–75.25s (×1), actor 5, squad 0 (trace 4246): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4177. Next observer evidence: None.
<a id="trace-4249"></a>
- 75.35s–75.35s (×1), actor 0, squad 0 (trace 4249): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 4175. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315007866965255, 'next_transition': 4312}.
<a id="trace-4250"></a>
- 75.35s–75.35s (×1), actor 0, squad 0 (trace 4250): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 4175. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315007866965255, 'next_transition': 4312}.
<a id="trace-4312"></a>
<a id="trace-4332"></a>
<a id="trace-4345"></a>
<a id="trace-4369"></a>
<a id="trace-4388"></a>
<a id="trace-4407"></a>
<a id="trace-4435"></a>
<a id="trace-4445"></a>
<a id="trace-4453"></a>
<a id="trace-4532"></a>
<a id="trace-4542"></a>
<a id="trace-4560"></a>
<a id="trace-4567"></a>
<a id="trace-4587"></a>
<a id="trace-4599"></a>
<a id="trace-4609"></a>
<a id="trace-4625"></a>
<a id="trace-4639"></a>
<a id="trace-4652"></a>
<a id="trace-4732"></a>
<a id="trace-4743"></a>
<a id="trace-4758"></a>
<a id="trace-4772"></a>
<a id="trace-4789"></a>
<a id="trace-4797"></a>
<a id="trace-4815"></a>
- 75.75s–88.25s (×26), actor 5, squad 0 (trace 4312): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4177. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249533463305315, 'next_transition': 4332}.
<a id="trace-4824"></a>
- 88.55s–88.55s (×1), actor 0, squad 0 (trace 4824): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 4660. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4882}.
<a id="trace-4825"></a>
- 88.55s–88.55s (×1), actor 0, squad 0 (trace 4825): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 4660. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4882}.
<a id="trace-4882"></a>
<a id="trace-4895"></a>
<a id="trace-4909"></a>
<a id="trace-4993"></a>
<a id="trace-5009"></a>
<a id="trace-5024"></a>
<a id="trace-5042"></a>
<a id="trace-5061"></a>
<a id="trace-5070"></a>
<a id="trace-5087"></a>
<a id="trace-5098"></a>
<a id="trace-5114"></a>
<a id="trace-5126"></a>
<a id="trace-5206"></a>
<a id="trace-5227"></a>
<a id="trace-5239"></a>
<a id="trace-5255"></a>
<a id="trace-5263"></a>
<a id="trace-5280"></a>
<a id="trace-5298"></a>
<a id="trace-5313"></a>
<a id="trace-5322"></a>
<a id="trace-5406"></a>
<a id="trace-5415"></a>
<a id="trace-5430"></a>
<a id="trace-5440"></a>
<a id="trace-5458"></a>
<a id="trace-5474"></a>
<a id="trace-5485"></a>
<a id="trace-5496"></a>
- 88.75s–103.75s (×30), actor 5, squad 0 (trace 4882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4662. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875276566572137, 'next_transition': 4895}.
<a id="trace-5511"></a>
- 104.15s–104.15s (×1), actor 0, squad 0 (trace 5511): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 5330. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5569}.
<a id="trace-5512"></a>
- 104.15s–104.15s (×1), actor 0, squad 0 (trace 5512): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 5330. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5569}.
<a id="trace-5569"></a>
<a id="trace-5579"></a>
<a id="trace-5667"></a>
<a id="trace-5680"></a>
<a id="trace-5696"></a>
<a id="trace-5715"></a>
<a id="trace-5734"></a>
<a id="trace-5743"></a>
<a id="trace-5757"></a>
<a id="trace-5769"></a>
<a id="trace-5784"></a>
<a id="trace-5791"></a>
<a id="trace-5873"></a>
<a id="trace-5889"></a>
<a id="trace-5904"></a>
<a id="trace-5915"></a>
<a id="trace-5935"></a>
<a id="trace-5944"></a>
- 104.25s–112.75s (×18), actor 5, squad 0 (trace 5569): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5332. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5579}.
<a id="trace-5958"></a>
- 113.15s–113.15s (×1), actor 0, squad 0 (trace 5958): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 5797. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150035714083232, 'next_transition': 6017}.
<a id="trace-5959"></a>
- 113.15s–113.15s (×1), actor 0, squad 0 (trace 5959): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 5797. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150035714083232, 'next_transition': 6017}.
<a id="trace-6017"></a>
<a id="trace-6026"></a>
<a id="trace-6047"></a>
<a id="trace-6064"></a>
<a id="trace-6137"></a>
<a id="trace-6153"></a>
<a id="trace-6174"></a>
<a id="trace-6185"></a>
<a id="trace-6202"></a>
<a id="trace-6215"></a>
<a id="trace-6231"></a>
<a id="trace-6243"></a>
<a id="trace-6259"></a>
<a id="trace-6273"></a>
<a id="trace-6351"></a>
<a id="trace-6364"></a>
<a id="trace-6377"></a>
- 113.25s–121.25s (×17), actor 5, squad 0 (trace 6017): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 5799. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300073828932509, 'next_transition': 6026}.
<a id="trace-6382"></a>
- 121.70s–121.70s (×1), actor 0, squad 0 (trace 6382): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 6277. Next observer evidence: None.
<a id="trace-6388"></a>
<a id="trace-6403"></a>
<a id="trace-6423"></a>
<a id="trace-6438"></a>
<a id="trace-6450"></a>
<a id="trace-6475"></a>
<a id="trace-6489"></a>
<a id="trace-6572"></a>
<a id="trace-6584"></a>
<a id="trace-6596"></a>
<a id="trace-6610"></a>
<a id="trace-6623"></a>
<a id="trace-6630"></a>
<a id="trace-6641"></a>
<a id="trace-6648"></a>
<a id="trace-6660"></a>
<a id="trace-6665"></a>
<a id="trace-6740"></a>
<a id="trace-6748"></a>
<a id="trace-6758"></a>
<a id="trace-6769"></a>
<a id="trace-6777"></a>
- 121.75s–132.30s (×22), actor 5, squad 0 (trace 6388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6279. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2851673694142403, 'next_transition': 6403}.
<a id="trace-1118"></a>
- 132.60s–132.60s (×1), actor 5, squad 0 (events line 1118): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6783"></a>
- 132.60s–132.60s (×1), actor 5, squad 0 (trace 6783): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.60s, trace 6783. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6790}.
<a id="trace-6784"></a>
- 132.60s–132.60s (×1), actor 5, squad 0 (trace 6784): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.60s, trace 6784. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6790}.
<a id="trace-6790"></a>
<a id="trace-6800"></a>
<a id="trace-6808"></a>
<a id="trace-6821"></a>
- 132.80s–134.30s (×4), actor 5, squad 0 (trace 6790): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.60s, trace 6784. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6800}.
<a id="trace-6824"></a>
- 134.30s–134.30s (×1), actor 0, squad 0 (trace 6824): MoveTactically. Knowledge: actor memory at 130.00s, trace 6669. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6883}.
<a id="trace-6825"></a>
- 134.30s–134.30s (×1), actor 0, squad 0 (trace 6825): traveling overwatch. Knowledge: actor memory at 130.00s, trace 6669. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6883}.
<a id="trace-6826"></a>
- 134.30s–134.30s (×1), actor 0, squad 0 (trace 6826): received platoon directive. Knowledge: actor memory at 130.00s, trace 6669. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6883}.
<a id="trace-6883"></a>
<a id="trace-6963"></a>
<a id="trace-6971"></a>
<a id="trace-6986"></a>
<a id="trace-7005"></a>
<a id="trace-7017"></a>
<a id="trace-7029"></a>
<a id="trace-7048"></a>
<a id="trace-7059"></a>
<a id="trace-7070"></a>
<a id="trace-7078"></a>
<a id="trace-7158"></a>
<a id="trace-7176"></a>
<a id="trace-7189"></a>
<a id="trace-7196"></a>
<a id="trace-7219"></a>
<a id="trace-7227"></a>
<a id="trace-7239"></a>
<a id="trace-7254"></a>
<a id="trace-7268"></a>
<a id="trace-7287"></a>
<a id="trace-7362"></a>
- 134.80s–145.30s (×22), actor 5, squad 0 (trace 6883): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.60s, trace 6784. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05669921736673266, 'next_transition': 6963}.
<a id="trace-1246"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (events line 1246): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568033614969738, 'next_transition': 7391}.
<a id="trace-7370"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (trace 7370): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 7293. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568033614969738, 'next_transition': 7391}.
<a id="trace-7372"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (trace 7372): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.80s, trace 7372. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568033614969738, 'next_transition': 7391}.
<a id="trace-7373"></a>
- 145.80s–145.80s (×1), actor 5, squad 0 (trace 7373): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.80s, trace 7373. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568033614969738, 'next_transition': 7391}.
<a id="trace-7391"></a>
<a id="trace-7418"></a>
- 146.30s–147.30s (×2), actor 5, squad 0 (trace 7391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.80s, trace 7373. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.80326701892175, 'next_transition': 7418}.
<a id="trace-7422"></a>
- 147.50s–147.50s (×1), actor 0, squad 0 (trace 7422): traveling. Knowledge: actor memory at 145.00s, trace 7291. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268208888638799, 'next_transition': 7534}.
<a id="trace-7423"></a>
- 147.50s–147.50s (×1), actor 0, squad 0 (trace 7423): received platoon directive. Knowledge: actor memory at 145.00s, trace 7291. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268208888638799, 'next_transition': 7534}.
<a id="trace-7534"></a>
<a id="trace-7555"></a>
<a id="trace-7573"></a>
<a id="trace-7586"></a>
<a id="trace-7602"></a>
<a id="trace-7690"></a>
<a id="trace-7708"></a>
<a id="trace-7721"></a>
<a id="trace-7734"></a>
<a id="trace-7750"></a>
<a id="trace-7767"></a>
<a id="trace-7782"></a>
<a id="trace-7791"></a>
<a id="trace-7816"></a>
<a id="trace-7824"></a>
<a id="trace-7898"></a>
<a id="trace-7913"></a>
<a id="trace-7926"></a>
<a id="trace-7943"></a>
- 147.80s–156.80s (×19), actor 5, squad 0 (trace 7534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.80s, trace 7373. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679686946693087, 'next_transition': 7555}.
<a id="trace-7951"></a>
- 156.95s–156.95s (×1), actor 0, squad 0 (trace 7951): matching received arrivals: traveling stage complete. Knowledge: actor memory at 155.00s, trace 7829. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450413195228252, 'next_transition': 8064}.
<a id="trace-8064"></a>
<a id="trace-8074"></a>
<a id="trace-8097"></a>
<a id="trace-8109"></a>
<a id="trace-8128"></a>
<a id="trace-8138"></a>
<a id="trace-8224"></a>
<a id="trace-8242"></a>
<a id="trace-8256"></a>
<a id="trace-8269"></a>
<a id="trace-8289"></a>
<a id="trace-8299"></a>
<a id="trace-8315"></a>
<a id="trace-8324"></a>
<a id="trace-8345"></a>
<a id="trace-8367"></a>
<a id="trace-8446"></a>
<a id="trace-8454"></a>
<a id="trace-8475"></a>
<a id="trace-8483"></a>
<a id="trace-8495"></a>
<a id="trace-8504"></a>
<a id="trace-8527"></a>
- 157.30s–168.30s (×23), actor 5, squad 0 (trace 8064): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 7831. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4458382130764595, 'next_transition': 8074}.
<a id="trace-8531"></a>
- 168.35s–168.35s (×1), actor 0, squad 0 (trace 8531): matching received arrivals: traveling stage complete. Knowledge: actor memory at 165.00s, trace 8373. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750155554787273, 'next_transition': 8649}.
<a id="trace-8649"></a>
<a id="trace-8661"></a>
<a id="trace-8672"></a>
<a id="trace-8758"></a>
<a id="trace-8773"></a>
<a id="trace-8790"></a>
<a id="trace-8800"></a>
<a id="trace-8821"></a>
<a id="trace-8835"></a>
<a id="trace-8848"></a>
<a id="trace-8860"></a>
<a id="trace-8880"></a>
<a id="trace-8898"></a>
<a id="trace-8978"></a>
<a id="trace-8987"></a>
<a id="trace-9009"></a>
<a id="trace-9024"></a>
<a id="trace-9038"></a>
- 168.80s–177.30s (×18), actor 5, squad 0 (trace 8649): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 8375. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6583555844109706, 'next_transition': 8661}.
<a id="trace-9042"></a>
- 177.35s–177.35s (×1), actor 0, squad 0 (trace 9042): matching received arrivals: deployment leg complete. Knowledge: actor memory at 175.00s, trace 8903. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450002976190011, 'next_transition': 9048}.
<a id="trace-9048"></a>
<a id="trace-9066"></a>
<a id="trace-9072"></a>
<a id="trace-9082"></a>
<a id="trace-9095"></a>
<a id="trace-9169"></a>
<a id="trace-9178"></a>
<a id="trace-9192"></a>
- 177.80s–181.30s (×8), actor 5, squad 0 (trace 9048): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 8905. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300001984126662, 'next_transition': 9066}.
<a id="trace-1617"></a>
- 181.80s–181.80s (×1), actor 5, squad 0 (events line 1617): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9216}.
<a id="trace-9200"></a>
- 181.80s–181.80s (×1), actor 5, squad 0 (trace 9200): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9099. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9216}.
<a id="trace-9203"></a>
- 181.80s–181.80s (×1), actor 5, squad 0 (trace 9203): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 181.80s, trace 9203. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9216}.
<a id="trace-9204"></a>
- 181.80s–181.80s (×1), actor 5, squad 0 (trace 9204): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 181.80s, trace 9204. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9216}.
<a id="trace-9216"></a>
<a id="trace-9224"></a>
<a id="trace-9237"></a>
- 182.30s–183.30s (×3), actor 5, squad 0 (trace 9216): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 181.80s, trace 9204. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9224}.
<a id="trace-9240"></a>
- 183.50s–183.50s (×1), actor 0, squad 0 (trace 9240): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 9097. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9276}.
<a id="trace-9243"></a>
- 183.50s–183.50s (×1), actor 0, squad 0 (trace 9243): MoveTactically. Knowledge: actor memory at 180.00s, trace 9097. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9276}.
<a id="trace-9244"></a>
- 183.50s–183.50s (×1), actor 0, squad 0 (trace 9244): traveling overwatch. Knowledge: actor memory at 180.00s, trace 9097. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9276}.
<a id="trace-9245"></a>
- 183.50s–183.50s (×1), actor 0, squad 0 (trace 9245): Reorganise complete. Knowledge: actor memory at 180.00s, trace 9097. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9276}.
<a id="trace-9276"></a>
<a id="trace-9293"></a>
<a id="trace-9310"></a>
<a id="trace-9386"></a>
<a id="trace-9397"></a>
<a id="trace-9414"></a>
<a id="trace-9429"></a>
<a id="trace-9439"></a>
<a id="trace-9447"></a>
<a id="trace-9462"></a>
<a id="trace-9476"></a>
<a id="trace-9492"></a>
<a id="trace-9502"></a>
<a id="trace-9592"></a>
<a id="trace-9600"></a>
<a id="trace-9612"></a>
<a id="trace-9627"></a>
<a id="trace-9639"></a>
- 183.80s–192.30s (×18), actor 5, squad 0 (trace 9276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 181.80s, trace 9204. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9293}.
<a id="trace-9644"></a>
- 192.55s–192.55s (×1), actor 0, squad 0 (trace 9644): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 190.00s, trace 9506. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751882427189381, 'next_transition': 9705}.
<a id="trace-9705"></a>
<a id="trace-9716"></a>
<a id="trace-9725"></a>
- 192.80s–193.80s (×3), actor 5, squad 0 (trace 9705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 9508. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512580702357105, 'next_transition': 9716}.
<a id="trace-9727"></a>
- 193.80s–193.80s (×1), actor 0, squad 0 (trace 9727): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 9506. Next observer evidence: None.
<a id="trace-9728"></a>
- 193.80s–193.80s (×1), actor 0, squad 0 (trace 9728): bounding overwatch. Knowledge: actor memory at 190.00s, trace 9506. Next observer evidence: None.
<a id="trace-9729"></a>
<a id="trace-9791"></a>
- 193.80s–193.85s (×2), actor 0, squad 0 (trace 9729): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 9506. Next observer evidence: None.
<a id="trace-9865"></a>
<a id="trace-9885"></a>
- 194.30s–194.80s (×2), actor 5, squad 0 (trace 9865): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 9508. Next observer evidence: {'until': 194.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12484317852034427, 'next_transition': 9885}.
<a id="trace-9900"></a>
- 195.00s–195.00s (×1), actor 0, squad 0 (trace 9900): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 9892. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07071773999543936, 'next_transition': 10032}.
<a id="trace-10032"></a>
<a id="trace-10044"></a>
<a id="trace-10062"></a>
<a id="trace-10083"></a>
<a id="trace-10099"></a>
- 195.30s–197.30s (×5), actor 5, squad 0 (trace 10032): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 9894. Next observer evidence: {'until': 195.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22136593319481218, 'next_transition': 10044}.
<a id="trace-1769"></a>
- 197.40s–197.40s (×1), actor 5, squad 0 (events line 1769): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10102"></a>
- 197.40s–197.40s (×1), actor 5, squad 0 (trace 10102): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506471 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.40s, trace 10102. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10115}.
<a id="trace-10103"></a>
- 197.40s–197.40s (×1), actor 5, squad 0 (trace 10103): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506471 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.40s, trace 10103. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10115}.
<a id="trace-10115"></a>
- 197.80s–197.80s (×1), actor 5, squad 0 (trace 10115): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 197.40s, trace 10103. Next observer evidence: {'until': 198, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10120}.
<a id="trace-10120"></a>
- 198.10s–198.10s (×1), actor 5, squad 0 (trace 10120): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 198.10s, trace 10120. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10131}.
<a id="trace-10131"></a>
- 198.30s–198.30s (×1), actor 5, squad 0 (trace 10131): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 198.10s, trace 10120. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10134}.
<a id="trace-10134"></a>
- 198.50s–198.50s (×1), actor 0, squad 0 (trace 10134): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 9892. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10255}.
<a id="trace-10135"></a>
- 198.50s–198.50s (×1), actor 0, squad 0 (trace 10135): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 9892. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10255}.
<a id="trace-10255"></a>
<a id="trace-10271"></a>
<a id="trace-10275"></a>
<a id="trace-10355"></a>
<a id="trace-10367"></a>
<a id="trace-10379"></a>
<a id="trace-10394"></a>
<a id="trace-10415"></a>
<a id="trace-10434"></a>
<a id="trace-10445"></a>
<a id="trace-10453"></a>
<a id="trace-10468"></a>
<a id="trace-10480"></a>
<a id="trace-10549"></a>
<a id="trace-10553"></a>
<a id="trace-10566"></a>
<a id="trace-10571"></a>
<a id="trace-10578"></a>
<a id="trace-10583"></a>
<a id="trace-10598"></a>
<a id="trace-10612"></a>
<a id="trace-10622"></a>
<a id="trace-10630"></a>
<a id="trace-10709"></a>
<a id="trace-10715"></a>
- 198.80s–210.80s (×25), actor 5, squad 0 (trace 10255): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 198.10s, trace 10120. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10271}.
<a id="trace-10718"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 10718): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 10634. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400227642418061, 'next_transition': 10728}.
<a id="trace-10719"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 10719): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 10634. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400227642418061, 'next_transition': 10728}.
<a id="trace-10728"></a>
<a id="trace-10737"></a>
<a id="trace-10749"></a>
<a id="trace-10764"></a>
<a id="trace-10775"></a>
<a id="trace-10782"></a>
<a id="trace-10799"></a>
<a id="trace-10805"></a>
<a id="trace-10878"></a>
<a id="trace-10885"></a>
<a id="trace-10897"></a>
<a id="trace-10907"></a>
<a id="trace-10918"></a>
<a id="trace-10926"></a>
<a id="trace-10938"></a>
<a id="trace-10948"></a>
<a id="trace-10960"></a>
<a id="trace-10967"></a>
<a id="trace-11039"></a>
<a id="trace-11047"></a>
<a id="trace-11057"></a>
<a id="trace-11064"></a>
- 211.30s–221.80s (×22), actor 5, squad 0 (trace 10728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10635. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600204883695785, 'next_transition': 10737}.
<a id="trace-11069"></a>
- 222.00s–222.00s (×1), actor 1, squad 0 (trace 11069): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 10971. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11079}.
<a id="trace-11079"></a>
<a id="trace-11089"></a>
<a id="trace-11103"></a>
<a id="trace-11111"></a>
<a id="trace-11126"></a>
<a id="trace-11135"></a>
<a id="trace-11208"></a>
<a id="trace-11216"></a>
<a id="trace-11225"></a>
<a id="trace-11231"></a>
<a id="trace-11241"></a>
<a id="trace-11249"></a>
<a id="trace-11261"></a>
<a id="trace-11267"></a>
<a id="trace-11278"></a>
<a id="trace-11284"></a>
<a id="trace-11361"></a>
<a id="trace-11369"></a>
<a id="trace-11378"></a>
<a id="trace-11388"></a>
<a id="trace-11398"></a>
<a id="trace-11405"></a>
<a id="trace-11416"></a>
<a id="trace-11423"></a>
<a id="trace-11436"></a>
<a id="trace-11442"></a>
<a id="trace-11516"></a>
<a id="trace-11529"></a>
<a id="trace-11539"></a>
<a id="trace-11549"></a>
<a id="trace-11560"></a>
<a id="trace-11573"></a>
<a id="trace-11579"></a>
<a id="trace-11591"></a>
<a id="trace-11598"></a>
<a id="trace-11672"></a>
<a id="trace-11678"></a>
<a id="trace-11688"></a>
<a id="trace-11694"></a>
<a id="trace-11704"></a>
<a id="trace-11713"></a>
- 222.30s–242.80s (×41), actor 5, squad 0 (trace 11079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 10972. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11089}.
<a id="trace-2069"></a>
- 243.10s–243.10s (×1), actor 5, squad 0 (events line 2069): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11719"></a>
- 243.10s–243.10s (×1), actor 5, squad 0 (trace 11719): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.211965 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 243.10s, trace 11719. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11726}.
<a id="trace-11720"></a>
- 243.10s–243.10s (×1), actor 5, squad 0 (trace 11720): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.211965 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 243.10s, trace 11720. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11726}.
<a id="trace-11726"></a>
<a id="trace-11734"></a>
<a id="trace-11750"></a>
- 243.30s–244.30s (×3), actor 5, squad 0 (trace 11726): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 243.10s, trace 11720. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11734}.
<a id="trace-11756"></a>
- 244.70s–244.70s (×1), actor 1, squad 0 (trace 11756): Withdraw to received rally. Knowledge: actor memory at 240.00s, trace 11602. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11810}.
<a id="trace-11757"></a>
- 244.70s–244.70s (×1), actor 1, squad 0 (trace 11757): rearward bound: one stationary suppressing element. Knowledge: actor memory at 240.00s, trace 11602. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11810}.
<a id="trace-11810"></a>
<a id="trace-11885"></a>
<a id="trace-11895"></a>
<a id="trace-11906"></a>
<a id="trace-11912"></a>
<a id="trace-11925"></a>
<a id="trace-11931"></a>
<a id="trace-11946"></a>
<a id="trace-11960"></a>
<a id="trace-11968"></a>
<a id="trace-11977"></a>
<a id="trace-12055"></a>
<a id="trace-12063"></a>
<a id="trace-12077"></a>
<a id="trace-12086"></a>
<a id="trace-12097"></a>
<a id="trace-12102"></a>
<a id="trace-12113"></a>
<a id="trace-12120"></a>
<a id="trace-12130"></a>
<a id="trace-12138"></a>
<a id="trace-12209"></a>
<a id="trace-12218"></a>
<a id="trace-12229"></a>
<a id="trace-12235"></a>
<a id="trace-12246"></a>
<a id="trace-12256"></a>
<a id="trace-12270"></a>
<a id="trace-12278"></a>
<a id="trace-12288"></a>
<a id="trace-12294"></a>
<a id="trace-12367"></a>
<a id="trace-12376"></a>
<a id="trace-12383"></a>
<a id="trace-12391"></a>
<a id="trace-12401"></a>
<a id="trace-12407"></a>
<a id="trace-12420"></a>
<a id="trace-12429"></a>
<a id="trace-12442"></a>
<a id="trace-12451"></a>
<a id="trace-12524"></a>
<a id="trace-12532"></a>
<a id="trace-12541"></a>
<a id="trace-12549"></a>
<a id="trace-12557"></a>
<a id="trace-12565"></a>
<a id="trace-12575"></a>
<a id="trace-12583"></a>
<a id="trace-12593"></a>
<a id="trace-12600"></a>
<a id="trace-12673"></a>
<a id="trace-12681"></a>
<a id="trace-12693"></a>
<a id="trace-12699"></a>
<a id="trace-12712"></a>
<a id="trace-12720"></a>
<a id="trace-12729"></a>
<a id="trace-12738"></a>
<a id="trace-12748"></a>
<a id="trace-12754"></a>
<a id="trace-12826"></a>
<a id="trace-12833"></a>
<a id="trace-12844"></a>
<a id="trace-12850"></a>
<a id="trace-12862"></a>
<a id="trace-12868"></a>
<a id="trace-12881"></a>
<a id="trace-12895"></a>
<a id="trace-12903"></a>
<a id="trace-12910"></a>
<a id="trace-12982"></a>
<a id="trace-12989"></a>
<a id="trace-12999"></a>
<a id="trace-13006"></a>
<a id="trace-13016"></a>
<a id="trace-13022"></a>
<a id="trace-13034"></a>
<a id="trace-13042"></a>
<a id="trace-13053"></a>
<a id="trace-13064"></a>
<a id="trace-13137"></a>
<a id="trace-13146"></a>
<a id="trace-13156"></a>
<a id="trace-13162"></a>
<a id="trace-13172"></a>
<a id="trace-13179"></a>
<a id="trace-13190"></a>
<a id="trace-13198"></a>
<a id="trace-13208"></a>
<a id="trace-13215"></a>
<a id="trace-13287"></a>
<a id="trace-13298"></a>
<a id="trace-13308"></a>
<a id="trace-13317"></a>
<a id="trace-13329"></a>
<a id="trace-13334"></a>
<a id="trace-13346"></a>
<a id="trace-13355"></a>
<a id="trace-13366"></a>
<a id="trace-13372"></a>
<a id="trace-13445"></a>
<a id="trace-13452"></a>
<a id="trace-13463"></a>
<a id="trace-13471"></a>
<a id="trace-13480"></a>
<a id="trace-13490"></a>
<a id="trace-13502"></a>
<a id="trace-13510"></a>
<a id="trace-13521"></a>
<a id="trace-13531"></a>
<a id="trace-13605"></a>
<a id="trace-13612"></a>
<a id="trace-13622"></a>
<a id="trace-13628"></a>
<a id="trace-13638"></a>
<a id="trace-13647"></a>
<a id="trace-13656"></a>
<a id="trace-13666"></a>
- 244.80s–303.80s (×119), actor 5, squad 0 (trace 11810): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 243.10s, trace 11720. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11885}.
<a id="trace-2539"></a>
- 304.05s–304.05s (×1), actor 5, squad 0 (events line 2539): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13671"></a>
- 304.05s–304.05s (×1), actor 5, squad 0 (trace 13671): renew committed intent (75 s lifetime). Knowledge: actor memory at 304.05s, trace 13671. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13680}.
<a id="trace-13680"></a>
<a id="trace-13686"></a>
<a id="trace-13759"></a>
<a id="trace-13766"></a>
<a id="trace-13781"></a>
<a id="trace-13787"></a>
<a id="trace-13796"></a>
<a id="trace-13802"></a>
<a id="trace-13813"></a>
<a id="trace-13823"></a>
<a id="trace-13831"></a>
<a id="trace-13839"></a>
<a id="trace-13913"></a>
<a id="trace-13919"></a>
<a id="trace-13931"></a>
<a id="trace-13938"></a>
<a id="trace-13948"></a>
<a id="trace-13957"></a>
<a id="trace-13969"></a>
<a id="trace-13977"></a>
<a id="trace-13987"></a>
<a id="trace-13994"></a>
<a id="trace-14065"></a>
<a id="trace-14074"></a>
<a id="trace-14085"></a>
<a id="trace-14091"></a>
<a id="trace-14101"></a>
<a id="trace-14110"></a>
<a id="trace-14123"></a>
<a id="trace-14131"></a>
<a id="trace-14141"></a>
<a id="trace-14147"></a>
<a id="trace-14222"></a>
<a id="trace-14232"></a>
<a id="trace-14240"></a>
<a id="trace-14248"></a>
<a id="trace-14257"></a>
<a id="trace-14263"></a>
<a id="trace-14274"></a>
<a id="trace-14284"></a>
<a id="trace-14297"></a>
<a id="trace-14302"></a>
<a id="trace-14375"></a>
<a id="trace-14383"></a>
<a id="trace-14392"></a>
<a id="trace-14399"></a>
<a id="trace-14410"></a>
<a id="trace-14419"></a>
<a id="trace-14429"></a>
<a id="trace-14437"></a>
<a id="trace-14448"></a>
<a id="trace-14455"></a>
<a id="trace-14530"></a>
<a id="trace-14538"></a>
<a id="trace-14548"></a>
<a id="trace-14554"></a>
<a id="trace-14564"></a>
<a id="trace-14573"></a>
<a id="trace-14582"></a>
<a id="trace-14596"></a>
<a id="trace-14605"></a>
<a id="trace-14611"></a>
<a id="trace-14684"></a>
<a id="trace-14692"></a>
<a id="trace-14702"></a>
<a id="trace-14709"></a>
<a id="trace-14721"></a>
<a id="trace-14727"></a>
<a id="trace-14738"></a>
<a id="trace-14749"></a>
<a id="trace-14757"></a>
<a id="trace-14765"></a>
<a id="trace-14840"></a>
<a id="trace-14848"></a>
<a id="trace-14858"></a>
<a id="trace-14865"></a>
<a id="trace-14876"></a>
<a id="trace-14881"></a>
<a id="trace-14893"></a>
<a id="trace-14901"></a>
<a id="trace-14913"></a>
<a id="trace-14921"></a>
<a id="trace-14992"></a>
<a id="trace-15002"></a>
<a id="trace-15012"></a>
<a id="trace-15018"></a>
<a id="trace-15029"></a>
<a id="trace-15037"></a>
<a id="trace-15050"></a>
<a id="trace-15057"></a>
<a id="trace-15068"></a>
<a id="trace-15073"></a>
<a id="trace-15147"></a>
<a id="trace-15158"></a>
<a id="trace-15166"></a>
<a id="trace-15174"></a>
<a id="trace-15184"></a>
<a id="trace-15190"></a>
<a id="trace-15202"></a>
<a id="trace-15211"></a>
<a id="trace-15222"></a>
<a id="trace-15231"></a>
<a id="trace-15305"></a>
<a id="trace-15313"></a>
<a id="trace-15323"></a>
<a id="trace-15332"></a>
<a id="trace-15341"></a>
<a id="trace-15349"></a>
<a id="trace-15360"></a>
<a id="trace-15368"></a>
<a id="trace-15378"></a>
<a id="trace-15385"></a>
- 304.30s–359.80s (×112), actor 5, squad 0 (trace 13680): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 304.05s, trace 13671. Next observer evidence: {'until': 304.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13686}.

## Net delivery

169 matched order/radio deliveries; 243 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.138s; maximum 1.650s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1799: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1802: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1803: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1804: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1805: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1806: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.05s leader 5, trace 1919: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 1997: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 1998: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2123: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2125: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2126: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2127: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2128: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2129: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2130: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2343: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2345: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2346: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2347: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2348: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2349: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2350: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2546: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2548: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2549: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2550: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2551: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2552: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2553: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 2806: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2808: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2809: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2810: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2811: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2812: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2813: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 2969: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2971: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2972: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2973: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2974: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2975: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2976: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3139: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3141: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3142: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3143: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3144: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3145: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3146: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3377: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3379: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3380: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3381: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3382: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3383: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3384: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 3548: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3550: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3551: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3552: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3553: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3554: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3555: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 3849: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3851: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3852: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3853: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3854: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3855: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3856: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 73.65s leader 5, trace 4075: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 73.65s leader 5, trace 4076: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4175: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4177: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4178: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4179: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4180: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4181: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4182: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4460: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4462: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4463: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4464: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4465: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4466: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4467: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 4660: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4662: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4663: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4664: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4665: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4666: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4667: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 4912: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4914: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4915: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4916: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4917: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4918: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4919: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5133: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5135: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5136: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5137: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5138: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5139: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5140: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5330: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5332: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5333: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5334: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5335: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5336: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5337: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5589: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5591: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5592: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5593: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5594: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5595: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5596: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 5797: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5799: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5800: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5801: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5802: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5803: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5804: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6067: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6069: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6070: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6071: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6072: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6073: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6074: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6277: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6279: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6280: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6281: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6282: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6283: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6284: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6500: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6502: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6503: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6504: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6505: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6506: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6507: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6669: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6671: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6672: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6673: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6674: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6675: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6676: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.60s leader 5, trace 6783: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.60s leader 5, trace 6784: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 6888: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6890: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6891: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6892: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6893: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6894: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6895: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7084: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7086: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7087: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7088: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7089: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7090: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7091: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 7291: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7293: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7294: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7295: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7296: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7297: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7298: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.80s leader 5, trace 7372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.80s leader 5, trace 7373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7612: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7613: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7614: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7615: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 7829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7833: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7834: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7835: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7836: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 8145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 8681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 8903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.80s leader 5, trace 9203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.80s leader 5, trace 9204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 9892: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9896: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9897: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9898: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9899: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.40s leader 5, trace 10102: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.40s leader 5, trace 10103: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.10s leader 5, trace 10120: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 10278: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10280: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10281: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10282: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10283: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10284: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10285: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10483: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10484: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10485: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10486: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10487: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10488: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10635: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10636: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10637: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10638: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10639: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10640: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10811: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10812: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10813: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10814: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10815: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10816: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10972: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10973: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10974: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10975: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10976: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10977: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11139: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11140: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11141: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11142: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11143: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11144: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11292: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11293: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11294: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11295: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11296: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11297: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11447: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11448: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11449: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11450: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11451: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11452: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11603: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11604: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11605: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11606: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11607: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11608: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 243.10s leader 5, trace 11719: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 243.10s leader 5, trace 11720: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11817: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11818: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11819: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11820: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11821: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11822: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11823: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11983: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11984: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11985: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11986: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11987: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11988: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11989: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12141: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12142: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12143: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12144: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12145: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12146: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12147: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12299: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12300: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12301: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12302: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12303: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12304: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12305: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12455: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12456: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12457: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12458: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12459: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12460: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12461: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 12603: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12604: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12605: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 12606: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12607: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12608: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12609: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12758: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12759: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12760: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12761: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12762: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12763: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12764: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12914: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12915: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12916: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12917: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12918: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12919: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12920: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 13067: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 13068: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 13069: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 13070: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13071: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13072: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13073: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 13219: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 13220: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13221: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 13222: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13223: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13224: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13225: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13376: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13377: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13378: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13379: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13380: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13381: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13382: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13540: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 304.05s leader 5, trace 13671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 13691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 13694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 14000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 14001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 14002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 14003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 14154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 14155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 14157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 14306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 14307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 14309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 14462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 14617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 14618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 14619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 15079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 15080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 15081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 15082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 15083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 15084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 15085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 15236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 15237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 15238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 15239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 15240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 15389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 15390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 15391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 15392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 15393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 15394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 15395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

- 73.65s, evidence 524: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 73.65s, evidence 4075: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401813 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 73.65s, evidence 4076: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.401813 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.10s, evidence 2069: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.10s, evidence 11719: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.211965 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11726}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.10s, evidence 11720: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.211965 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11726}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 304.05s, evidence 2539: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
