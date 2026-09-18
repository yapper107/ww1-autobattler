# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/108/good-ember/battle-108-1789673973717443549`

## Battle summary

**Ember** · 360 s · 452 shots.

### Turning points

- 22.2s, squad 1: contact (events line 257). First recorded contact.
- 26.6s, squad 1: withdrawal ([trace 4007](#trace-4007)). 51.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 39.4s, squad 0: withdrawal ([trace 6236](#trace-6236)). 54.2s, squad 0: took cover and returned fire.
- 50.7s, squad 0: help call ([trace 7751](#trace-7751)). 340.1s, squad 1: answered a neighbour with support by fire.
- 58.0s, squad 0: withdrawal ([trace 8530](#trace-8530)). 112.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 77.3s, squad 1: assault ([trace 10336](#trace-10336)). 78.3s, squad 1: advanced tactically.
- 148.1s, squad 0: withdrawal ([trace 17830](#trace-17830)). 190.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 151.5s, squad 1: help call ([trace 18210](#trace-18210)). No completion observed before termination.
- 154.0s, squad 1: help call ([trace 18413](#trace-18413)). No completion observed before termination.
- 158.9s, squad 0: help call ([trace 18728](#trace-18728)). No completion observed before termination.
- 7 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 28 shots, 5/8 lost.
- **1** — FightHere; chose prepared a base of fire, answered a neighbour with support by fire and 3 further drill types; withdrew; 4 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 241 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 179 shots, 0/4 lost.

### Decisions and attribution

At 144.9s, squad 1 chose prepared a base of fire ([trace 15326](#trace-15326)), followed by 1 shots and 1 own casualties; estimate 10.0 against 0 distinct squad-reported contacts; At 144.9s, squad 1 chose advanced tactically ([trace 17242](#trace-17242)), followed by 1 shots and 1 own casualties; estimate 10.0 against 0 distinct squad-reported contacts; At 26.6s, squad 1 chose broke contact ([trace 4007](#trace-4007)), followed by 0 shots and 1 own casualties; estimate 13.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1439](#trace-1439)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08467954922862146, 'next_transition': 1775}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 4001](#trace-4001)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600188334845766, 'next_transition': 4271}.

### Communication

331 matched deliveries (mean 0.49s, max 5.45s); 459 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.20s, squad 1, contact, evidence events line 257: First recorded contact; .
- 26.60s, squad 1, withdrawal, evidence 4007: BreakContact: believed ratio at least two without superiority; 51.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 39.35s, squad 0, withdrawal, evidence 6236: BreakContact: believed ratio at least two without superiority; 54.2s, squad 0: took cover and returned fire.
- 50.65s, squad 0, help call, evidence 7751: NeedSupport; 340.1s, squad 1: answered a neighbour with support by fire.
- 57.95s, squad 0, withdrawal, evidence 8530: BreakContact: believed ratio at least two without superiority; 112.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 77.30s, squad 1, assault, evidence 10336: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 78.3s, squad 1: advanced tactically.
- 148.10s, squad 0, withdrawal, evidence 17830: BreakContact: believed ratio at least two without superiority; 190.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 151.50s, squad 1, help call, evidence 18210: NeedSupport; No completion observed before termination.
- 154.00s, squad 1, help call, evidence 18413: NeedSupport; No completion observed before termination.
- 158.90s, squad 0, help call, evidence 18728: NeedSupport; No completion observed before termination.
- 243.55s, squad 0, help call, evidence 24182: NeedSupport; No completion observed before termination.
- 248.15s, squad 0, withdrawal, evidence 24417: BreakContact: believed ratio at least two without superiority; 269.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 251.75s, squad 0, help call, evidence 24675: NeedSupport; No completion observed before termination.
- 320.25s, squad 0, withdrawal, evidence 28200: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 338.15s, squad 0, help call, evidence 29484: NeedSupport; 340.1s, squad 1: answered a neighbour with support by fire.
- 340.05s, squad 1, help answer, evidence 29640: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 344.9s, squad 1: took cover and returned fire.
- 351.60s, squad 1, withdrawal, evidence 30945: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.510318578617856, 'next_transition': 1103}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.510318578617856, 'next_transition': 1103}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.510318578617856, 'next_transition': 1103}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.29823416975713, 'next_transition': 158}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.29823416975713, 'next_transition': 158}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.29823416975713, 'next_transition': 158}.
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
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1052"></a>
<a id="trace-1054"></a>
<a id="trace-1072"></a>
<a id="trace-1074"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1200"></a>
<a id="trace-1202"></a>
<a id="trace-1220"></a>
<a id="trace-1222"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1411"></a>
<a id="trace-1413"></a>
<a id="trace-1434"></a>
<a id="trace-1436"></a>
<a id="trace-1744"></a>
<a id="trace-1746"></a>
<a id="trace-1771"></a>
<a id="trace-1773"></a>
<a id="trace-1935"></a>
<a id="trace-1937"></a>
<a id="trace-1963"></a>
<a id="trace-1965"></a>
<a id="trace-2058"></a>
<a id="trace-2060"></a>
<a id="trace-2102"></a>
<a id="trace-2104"></a>
<a id="trace-2137"></a>
<a id="trace-2139"></a>
<a id="trace-2174"></a>
<a id="trace-2176"></a>
<a id="trace-2193"></a>
<a id="trace-2195"></a>
<a id="trace-2215"></a>
<a id="trace-2217"></a>
<a id="trace-2242"></a>
<a id="trace-2244"></a>
<a id="trace-2269"></a>
<a id="trace-2271"></a>
<a id="trace-2293"></a>
<a id="trace-2295"></a>
<a id="trace-2319"></a>
<a id="trace-2321"></a>
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2449"></a>
<a id="trace-2451"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2513"></a>
<a id="trace-2515"></a>
<a id="trace-2542"></a>
<a id="trace-2544"></a>
<a id="trace-2740"></a>
<a id="trace-2742"></a>
<a id="trace-3120"></a>
<a id="trace-3122"></a>
<a id="trace-3658"></a>
<a id="trace-3660"></a>
<a id="trace-3710"></a>
<a id="trace-3712"></a>
<a id="trace-3765"></a>
<a id="trace-3767"></a>
<a id="trace-3882"></a>
<a id="trace-3884"></a>
<a id="trace-3924"></a>
<a id="trace-3926"></a>
<a id="trace-3982"></a>
<a id="trace-3984"></a>
<a id="trace-4236"></a>
<a id="trace-4238"></a>
<a id="trace-4275"></a>
<a id="trace-4277"></a>
<a id="trace-4300"></a>
<a id="trace-4302"></a>
<a id="trace-4339"></a>
<a id="trace-4341"></a>
<a id="trace-4365"></a>
<a id="trace-4367"></a>
<a id="trace-4399"></a>
<a id="trace-4401"></a>
<a id="trace-4421"></a>
<a id="trace-4423"></a>
<a id="trace-4523"></a>
<a id="trace-4525"></a>
<a id="trace-4548"></a>
<a id="trace-4550"></a>
<a id="trace-4568"></a>
<a id="trace-4570"></a>
<a id="trace-4584"></a>
<a id="trace-4586"></a>
<a id="trace-4611"></a>
<a id="trace-4613"></a>
<a id="trace-4634"></a>
<a id="trace-4636"></a>
<a id="trace-4652"></a>
<a id="trace-4654"></a>
<a id="trace-4667"></a>
<a id="trace-4669"></a>
<a id="trace-4690"></a>
<a id="trace-4692"></a>
<a id="trace-4708"></a>
<a id="trace-4710"></a>
<a id="trace-5269"></a>
<a id="trace-5271"></a>
<a id="trace-5766"></a>
<a id="trace-5768"></a>
<a id="trace-5820"></a>
<a id="trace-5822"></a>
<a id="trace-5878"></a>
<a id="trace-5880"></a>
<a id="trace-5935"></a>
<a id="trace-5937"></a>
<a id="trace-5974"></a>
<a id="trace-5976"></a>
<a id="trace-6039"></a>
<a id="trace-6041"></a>
<a id="trace-6196"></a>
<a id="trace-6198"></a>
<a id="trace-6229"></a>
<a id="trace-6231"></a>
<a id="trace-6583"></a>
<a id="trace-6585"></a>
<a id="trace-6686"></a>
<a id="trace-6688"></a>
<a id="trace-6730"></a>
<a id="trace-6732"></a>
<a id="trace-6766"></a>
<a id="trace-6768"></a>
<a id="trace-6791"></a>
<a id="trace-6793"></a>
<a id="trace-6831"></a>
<a id="trace-6833"></a>
<a id="trace-6868"></a>
<a id="trace-6870"></a>
<a id="trace-6909"></a>
<a id="trace-6911"></a>
<a id="trace-6953"></a>
<a id="trace-6955"></a>
<a id="trace-7007"></a>
<a id="trace-7009"></a>
<a id="trace-7057"></a>
<a id="trace-7059"></a>
<a id="trace-7157"></a>
<a id="trace-7159"></a>
<a id="trace-7188"></a>
<a id="trace-7190"></a>
<a id="trace-7224"></a>
<a id="trace-7226"></a>
<a id="trace-7256"></a>
<a id="trace-7258"></a>
<a id="trace-7300"></a>
<a id="trace-7302"></a>
<a id="trace-7345"></a>
<a id="trace-7347"></a>
<a id="trace-7415"></a>
<a id="trace-7417"></a>
<a id="trace-7479"></a>
<a id="trace-7481"></a>
<a id="trace-7540"></a>
<a id="trace-7542"></a>
<a id="trace-7598"></a>
<a id="trace-7600"></a>
<a id="trace-7726"></a>
<a id="trace-7728"></a>
<a id="trace-7766"></a>
<a id="trace-7768"></a>
<a id="trace-7860"></a>
<a id="trace-7862"></a>
<a id="trace-7889"></a>
<a id="trace-7891"></a>
<a id="trace-7926"></a>
<a id="trace-7928"></a>
<a id="trace-7963"></a>
<a id="trace-7965"></a>
<a id="trace-8117"></a>
<a id="trace-8119"></a>
<a id="trace-8151"></a>
<a id="trace-8153"></a>
<a id="trace-8297"></a>
<a id="trace-8299"></a>
<a id="trace-8319"></a>
<a id="trace-8321"></a>
<a id="trace-8409"></a>
<a id="trace-8411"></a>
<a id="trace-8434"></a>
<a id="trace-8436"></a>
<a id="trace-8459"></a>
<a id="trace-8461"></a>
<a id="trace-8490"></a>
<a id="trace-8492"></a>
<a id="trace-8507"></a>
<a id="trace-8509"></a>
<a id="trace-8520"></a>
<a id="trace-8522"></a>
<a id="trace-8669"></a>
<a id="trace-8671"></a>
<a id="trace-8700"></a>
<a id="trace-8702"></a>
<a id="trace-8747"></a>
<a id="trace-8749"></a>
<a id="trace-8784"></a>
<a id="trace-8786"></a>
<a id="trace-8889"></a>
<a id="trace-8891"></a>
<a id="trace-8944"></a>
<a id="trace-8946"></a>
<a id="trace-8993"></a>
<a id="trace-8995"></a>
<a id="trace-9032"></a>
<a id="trace-9034"></a>
<a id="trace-9083"></a>
<a id="trace-9085"></a>
<a id="trace-9128"></a>
<a id="trace-9130"></a>
<a id="trace-9162"></a>
<a id="trace-9164"></a>
<a id="trace-9192"></a>
<a id="trace-9194"></a>
<a id="trace-9224"></a>
<a id="trace-9226"></a>
<a id="trace-9242"></a>
<a id="trace-9244"></a>
<a id="trace-9327"></a>
<a id="trace-9329"></a>
<a id="trace-9362"></a>
<a id="trace-9364"></a>
<a id="trace-9374"></a>
<a id="trace-9376"></a>
<a id="trace-9392"></a>
<a id="trace-9394"></a>
<a id="trace-9405"></a>
<a id="trace-9407"></a>
<a id="trace-9426"></a>
<a id="trace-9428"></a>
<a id="trace-9443"></a>
<a id="trace-9445"></a>
<a id="trace-9468"></a>
<a id="trace-9470"></a>
<a id="trace-9481"></a>
<a id="trace-9483"></a>
<a id="trace-9568"></a>
<a id="trace-9570"></a>
<a id="trace-9735"></a>
<a id="trace-9737"></a>
<a id="trace-9755"></a>
<a id="trace-9757"></a>
<a id="trace-9776"></a>
<a id="trace-9778"></a>
<a id="trace-9796"></a>
<a id="trace-9798"></a>
<a id="trace-9816"></a>
<a id="trace-9818"></a>
<a id="trace-9848"></a>
<a id="trace-9850"></a>
<a id="trace-9874"></a>
<a id="trace-9876"></a>
<a id="trace-9899"></a>
<a id="trace-9901"></a>
<a id="trace-9919"></a>
<a id="trace-9921"></a>
<a id="trace-10013"></a>
<a id="trace-10015"></a>
<a id="trace-10025"></a>
<a id="trace-10027"></a>
<a id="trace-10052"></a>
<a id="trace-10054"></a>
<a id="trace-10070"></a>
<a id="trace-10072"></a>
<a id="trace-10092"></a>
<a id="trace-10094"></a>
<a id="trace-10361"></a>
<a id="trace-10363"></a>
<a id="trace-10379"></a>
<a id="trace-10381"></a>
<a id="trace-10421"></a>
<a id="trace-10423"></a>
<a id="trace-10442"></a>
<a id="trace-10444"></a>
<a id="trace-10529"></a>
<a id="trace-10531"></a>
<a id="trace-10624"></a>
<a id="trace-10626"></a>
<a id="trace-10645"></a>
<a id="trace-10647"></a>
<a id="trace-10666"></a>
<a id="trace-10668"></a>
<a id="trace-10800"></a>
<a id="trace-10802"></a>
<a id="trace-10816"></a>
<a id="trace-10818"></a>
<a id="trace-10850"></a>
<a id="trace-10852"></a>
<a id="trace-10876"></a>
<a id="trace-10878"></a>
<a id="trace-10891"></a>
<a id="trace-10893"></a>
<a id="trace-10910"></a>
<a id="trace-10912"></a>
<a id="trace-10936"></a>
<a id="trace-10938"></a>
<a id="trace-11021"></a>
<a id="trace-11023"></a>
<a id="trace-11031"></a>
<a id="trace-11033"></a>
<a id="trace-11045"></a>
<a id="trace-11047"></a>
<a id="trace-11061"></a>
<a id="trace-11063"></a>
<a id="trace-11077"></a>
<a id="trace-11079"></a>
<a id="trace-11092"></a>
<a id="trace-11094"></a>
<a id="trace-11109"></a>
<a id="trace-11111"></a>
<a id="trace-11121"></a>
<a id="trace-11123"></a>
<a id="trace-11140"></a>
<a id="trace-11142"></a>
<a id="trace-11256"></a>
<a id="trace-11258"></a>
<a id="trace-11340"></a>
<a id="trace-11342"></a>
<a id="trace-11353"></a>
<a id="trace-11355"></a>
<a id="trace-11377"></a>
<a id="trace-11379"></a>
<a id="trace-11400"></a>
<a id="trace-11402"></a>
<a id="trace-11434"></a>
<a id="trace-11436"></a>
<a id="trace-11450"></a>
<a id="trace-11452"></a>
<a id="trace-11478"></a>
<a id="trace-11480"></a>
<a id="trace-11495"></a>
<a id="trace-11497"></a>
<a id="trace-11514"></a>
<a id="trace-11516"></a>
<a id="trace-11528"></a>
<a id="trace-11530"></a>
<a id="trace-11609"></a>
<a id="trace-11611"></a>
<a id="trace-11619"></a>
<a id="trace-11621"></a>
<a id="trace-11644"></a>
<a id="trace-11646"></a>
<a id="trace-11656"></a>
<a id="trace-11658"></a>
<a id="trace-11677"></a>
<a id="trace-11679"></a>
<a id="trace-11692"></a>
<a id="trace-11694"></a>
<a id="trace-11713"></a>
<a id="trace-11715"></a>
<a id="trace-11724"></a>
<a id="trace-11726"></a>
<a id="trace-11744"></a>
<a id="trace-11746"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11833"></a>
<a id="trace-11835"></a>
<a id="trace-11841"></a>
<a id="trace-11843"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11882"></a>
<a id="trace-11884"></a>
<a id="trace-11899"></a>
<a id="trace-11901"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-11930"></a>
<a id="trace-11932"></a>
<a id="trace-11943"></a>
<a id="trace-11945"></a>
<a id="trace-11963"></a>
<a id="trace-11965"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-12050"></a>
<a id="trace-12052"></a>
<a id="trace-12059"></a>
<a id="trace-12061"></a>
<a id="trace-12079"></a>
<a id="trace-12081"></a>
<a id="trace-12089"></a>
<a id="trace-12091"></a>
<a id="trace-12108"></a>
<a id="trace-12110"></a>
<a id="trace-12121"></a>
<a id="trace-12123"></a>
<a id="trace-12153"></a>
<a id="trace-12155"></a>
<a id="trace-12165"></a>
<a id="trace-12167"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12194"></a>
<a id="trace-12196"></a>
<a id="trace-12269"></a>
<a id="trace-12271"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12301"></a>
<a id="trace-12303"></a>
<a id="trace-12372"></a>
<a id="trace-12374"></a>
<a id="trace-12392"></a>
<a id="trace-12394"></a>
<a id="trace-12410"></a>
<a id="trace-12412"></a>
<a id="trace-12437"></a>
<a id="trace-12439"></a>
<a id="trace-12462"></a>
<a id="trace-12464"></a>
<a id="trace-12490"></a>
<a id="trace-12492"></a>
<a id="trace-12506"></a>
<a id="trace-12508"></a>
<a id="trace-12589"></a>
<a id="trace-12591"></a>
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12697"></a>
<a id="trace-12699"></a>
<a id="trace-12721"></a>
<a id="trace-12723"></a>
<a id="trace-12744"></a>
<a id="trace-12746"></a>
<a id="trace-12757"></a>
<a id="trace-12759"></a>
<a id="trace-12786"></a>
<a id="trace-12788"></a>
<a id="trace-12802"></a>
<a id="trace-12804"></a>
<a id="trace-12819"></a>
<a id="trace-12821"></a>
<a id="trace-12837"></a>
<a id="trace-12839"></a>
<a id="trace-12926"></a>
<a id="trace-12928"></a>
<a id="trace-12968"></a>
<a id="trace-12970"></a>
<a id="trace-12997"></a>
<a id="trace-12999"></a>
<a id="trace-13016"></a>
<a id="trace-13018"></a>
<a id="trace-13042"></a>
<a id="trace-13044"></a>
<a id="trace-13060"></a>
<a id="trace-13062"></a>
<a id="trace-13080"></a>
<a id="trace-13082"></a>
<a id="trace-13093"></a>
<a id="trace-13095"></a>
<a id="trace-13114"></a>
<a id="trace-13116"></a>
<a id="trace-13127"></a>
<a id="trace-13129"></a>
<a id="trace-13210"></a>
<a id="trace-13212"></a>
<a id="trace-13225"></a>
<a id="trace-13227"></a>
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13300"></a>
<a id="trace-13302"></a>
<a id="trace-13323"></a>
<a id="trace-13325"></a>
<a id="trace-13339"></a>
<a id="trace-13341"></a>
<a id="trace-13365"></a>
<a id="trace-13367"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13411"></a>
<a id="trace-13413"></a>
<a id="trace-13615"></a>
<a id="trace-13617"></a>
<a id="trace-13694"></a>
<a id="trace-13696"></a>
<a id="trace-13708"></a>
<a id="trace-13710"></a>
<a id="trace-13732"></a>
<a id="trace-13734"></a>
<a id="trace-13747"></a>
<a id="trace-13749"></a>
<a id="trace-13775"></a>
<a id="trace-13777"></a>
<a id="trace-13792"></a>
<a id="trace-13794"></a>
<a id="trace-13820"></a>
<a id="trace-13822"></a>
<a id="trace-13833"></a>
<a id="trace-13835"></a>
<a id="trace-14024"></a>
<a id="trace-14026"></a>
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14123"></a>
<a id="trace-14125"></a>
<a id="trace-14148"></a>
<a id="trace-14150"></a>
<a id="trace-14169"></a>
<a id="trace-14171"></a>
<a id="trace-14194"></a>
<a id="trace-14196"></a>
<a id="trace-14223"></a>
<a id="trace-14225"></a>
<a id="trace-14351"></a>
<a id="trace-14353"></a>
<a id="trace-14593"></a>
<a id="trace-14595"></a>
<a id="trace-14626"></a>
<a id="trace-14628"></a>
<a id="trace-14653"></a>
<a id="trace-14655"></a>
<a id="trace-14677"></a>
<a id="trace-14679"></a>
<a id="trace-14765"></a>
<a id="trace-14767"></a>
<a id="trace-14799"></a>
<a id="trace-14801"></a>
<a id="trace-14822"></a>
<a id="trace-14824"></a>
<a id="trace-15014"></a>
<a id="trace-15016"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15064"></a>
<a id="trace-15066"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15143"></a>
<a id="trace-15145"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15312"></a>
<a id="trace-15314"></a>
<a id="trace-17438"></a>
<a id="trace-17440"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17560"></a>
<a id="trace-17562"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17797"></a>
<a id="trace-17799"></a>
<a id="trace-17922"></a>
<a id="trace-17924"></a>
<a id="trace-17980"></a>
<a id="trace-17982"></a>
<a id="trace-18040"></a>
<a id="trace-18042"></a>
<a id="trace-18070"></a>
<a id="trace-18072"></a>
<a id="trace-18157"></a>
<a id="trace-18159"></a>
<a id="trace-18180"></a>
<a id="trace-18182"></a>
<a id="trace-18197"></a>
<a id="trace-18199"></a>
<a id="trace-18225"></a>
<a id="trace-18227"></a>
<a id="trace-18255"></a>
<a id="trace-18257"></a>
<a id="trace-18355"></a>
<a id="trace-18357"></a>
<a id="trace-18382"></a>
<a id="trace-18384"></a>
<a id="trace-18403"></a>
<a id="trace-18405"></a>
<a id="trace-18434"></a>
<a id="trace-18436"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18602"></a>
<a id="trace-18604"></a>
<a id="trace-18620"></a>
<a id="trace-18622"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18675"></a>
<a id="trace-18677"></a>
<a id="trace-18687"></a>
<a id="trace-18689"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18721"></a>
<a id="trace-18723"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18759"></a>
<a id="trace-18761"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18870"></a>
<a id="trace-18872"></a>
<a id="trace-18890"></a>
<a id="trace-18892"></a>
<a id="trace-18914"></a>
<a id="trace-18916"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18974"></a>
<a id="trace-18976"></a>
<a id="trace-18985"></a>
<a id="trace-18987"></a>
<a id="trace-19057"></a>
<a id="trace-19059"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19081"></a>
<a id="trace-19083"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19116"></a>
<a id="trace-19118"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19153"></a>
<a id="trace-19155"></a>
<a id="trace-19171"></a>
<a id="trace-19173"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19193"></a>
<a id="trace-19195"></a>
<a id="trace-19272"></a>
<a id="trace-19274"></a>
<a id="trace-19289"></a>
<a id="trace-19291"></a>
<a id="trace-19302"></a>
<a id="trace-19304"></a>
<a id="trace-19317"></a>
<a id="trace-19319"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19377"></a>
<a id="trace-19379"></a>
<a id="trace-19390"></a>
<a id="trace-19392"></a>
<a id="trace-19412"></a>
<a id="trace-19414"></a>
<a id="trace-19430"></a>
<a id="trace-19432"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19519"></a>
<a id="trace-19521"></a>
<a id="trace-19645"></a>
<a id="trace-19647"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19700"></a>
<a id="trace-19702"></a>
<a id="trace-19715"></a>
<a id="trace-19717"></a>
<a id="trace-19732"></a>
<a id="trace-19734"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19777"></a>
<a id="trace-19779"></a>
<a id="trace-19795"></a>
<a id="trace-19797"></a>
<a id="trace-19881"></a>
<a id="trace-19883"></a>
<a id="trace-19901"></a>
<a id="trace-19903"></a>
<a id="trace-19917"></a>
<a id="trace-19919"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-19997"></a>
<a id="trace-19999"></a>
<a id="trace-20015"></a>
<a id="trace-20017"></a>
<a id="trace-20035"></a>
<a id="trace-20037"></a>
<a id="trace-20056"></a>
<a id="trace-20058"></a>
<a id="trace-20136"></a>
<a id="trace-20138"></a>
<a id="trace-20151"></a>
<a id="trace-20153"></a>
<a id="trace-20176"></a>
<a id="trace-20178"></a>
<a id="trace-20204"></a>
<a id="trace-20206"></a>
<a id="trace-20226"></a>
<a id="trace-20228"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
<a id="trace-20312"></a>
<a id="trace-20314"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20380"></a>
<a id="trace-20382"></a>
<a id="trace-20458"></a>
<a id="trace-20460"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20504"></a>
<a id="trace-20506"></a>
<a id="trace-20534"></a>
<a id="trace-20536"></a>
<a id="trace-20556"></a>
<a id="trace-20558"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20602"></a>
<a id="trace-20604"></a>
<a id="trace-20615"></a>
<a id="trace-20617"></a>
<a id="trace-20630"></a>
<a id="trace-20632"></a>
<a id="trace-20642"></a>
<a id="trace-20644"></a>
<a id="trace-20718"></a>
<a id="trace-20720"></a>
<a id="trace-20733"></a>
<a id="trace-20735"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20782"></a>
<a id="trace-20784"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20948"></a>
<a id="trace-20950"></a>
<a id="trace-20963"></a>
<a id="trace-20965"></a>
<a id="trace-20978"></a>
<a id="trace-20980"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21010"></a>
<a id="trace-21012"></a>
<a id="trace-21028"></a>
<a id="trace-21030"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21066"></a>
<a id="trace-21068"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21182"></a>
<a id="trace-21184"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21219"></a>
<a id="trace-21221"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21260"></a>
<a id="trace-21262"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21407"></a>
<a id="trace-21409"></a>
<a id="trace-21430"></a>
<a id="trace-21432"></a>
<a id="trace-22769"></a>
<a id="trace-22771"></a>
<a id="trace-22788"></a>
<a id="trace-22790"></a>
<a id="trace-22811"></a>
<a id="trace-22813"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22838"></a>
<a id="trace-22840"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22955"></a>
<a id="trace-22957"></a>
<a id="trace-22974"></a>
<a id="trace-22976"></a>
<a id="trace-22991"></a>
<a id="trace-22993"></a>
<a id="trace-23003"></a>
<a id="trace-23005"></a>
<a id="trace-23023"></a>
<a id="trace-23025"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23063"></a>
<a id="trace-23065"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23192"></a>
<a id="trace-23194"></a>
<a id="trace-23206"></a>
<a id="trace-23208"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23269"></a>
<a id="trace-23271"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23302"></a>
<a id="trace-23304"></a>
<a id="trace-23322"></a>
<a id="trace-23324"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23436"></a>
<a id="trace-23438"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23471"></a>
<a id="trace-23473"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23504"></a>
<a id="trace-23506"></a>
<a id="trace-23526"></a>
<a id="trace-23528"></a>
<a id="trace-23543"></a>
<a id="trace-23545"></a>
<a id="trace-23554"></a>
<a id="trace-23556"></a>
<a id="trace-23630"></a>
<a id="trace-23632"></a>
<a id="trace-23647"></a>
<a id="trace-23649"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23682"></a>
<a id="trace-23684"></a>
<a id="trace-23703"></a>
<a id="trace-23705"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23737"></a>
<a id="trace-23739"></a>
<a id="trace-23750"></a>
<a id="trace-23752"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23786"></a>
<a id="trace-23788"></a>
<a id="trace-23860"></a>
<a id="trace-23862"></a>
<a id="trace-23873"></a>
<a id="trace-23875"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23916"></a>
<a id="trace-23918"></a>
<a id="trace-23935"></a>
<a id="trace-23937"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-23967"></a>
<a id="trace-23969"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-24001"></a>
<a id="trace-24003"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24087"></a>
<a id="trace-24089"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24118"></a>
<a id="trace-24120"></a>
<a id="trace-24129"></a>
<a id="trace-24131"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24156"></a>
<a id="trace-24158"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24196"></a>
<a id="trace-24198"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24323"></a>
<a id="trace-24325"></a>
<a id="trace-24344"></a>
<a id="trace-24346"></a>
<a id="trace-24362"></a>
<a id="trace-24364"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24481"></a>
<a id="trace-24483"></a>
<a id="trace-24505"></a>
<a id="trace-24507"></a>
<a id="trace-24532"></a>
<a id="trace-24534"></a>
<a id="trace-24551"></a>
<a id="trace-24553"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24647"></a>
<a id="trace-24649"></a>
<a id="trace-24669"></a>
<a id="trace-24671"></a>
<a id="trace-24684"></a>
<a id="trace-24686"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24728"></a>
<a id="trace-24730"></a>
<a id="trace-24751"></a>
<a id="trace-24753"></a>
<a id="trace-24766"></a>
<a id="trace-24768"></a>
<a id="trace-24786"></a>
<a id="trace-24788"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
<a id="trace-24892"></a>
<a id="trace-24894"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24926"></a>
<a id="trace-24928"></a>
<a id="trace-24950"></a>
<a id="trace-24952"></a>
<a id="trace-24962"></a>
<a id="trace-24964"></a>
<a id="trace-24979"></a>
<a id="trace-24981"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25016"></a>
<a id="trace-25018"></a>
<a id="trace-25030"></a>
<a id="trace-25032"></a>
<a id="trace-25108"></a>
<a id="trace-25110"></a>
<a id="trace-25122"></a>
<a id="trace-25124"></a>
<a id="trace-25146"></a>
<a id="trace-25148"></a>
<a id="trace-25158"></a>
<a id="trace-25160"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25192"></a>
<a id="trace-25194"></a>
<a id="trace-25269"></a>
<a id="trace-25271"></a>
<a id="trace-25282"></a>
<a id="trace-25284"></a>
<a id="trace-25308"></a>
<a id="trace-25310"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25429"></a>
<a id="trace-25431"></a>
<a id="trace-25441"></a>
<a id="trace-25443"></a>
<a id="trace-25467"></a>
<a id="trace-25469"></a>
<a id="trace-25482"></a>
<a id="trace-25484"></a>
<a id="trace-25498"></a>
<a id="trace-25500"></a>
<a id="trace-25511"></a>
<a id="trace-25513"></a>
<a id="trace-25530"></a>
<a id="trace-25532"></a>
<a id="trace-25544"></a>
<a id="trace-25546"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25665"></a>
<a id="trace-25667"></a>
<a id="trace-25691"></a>
<a id="trace-25693"></a>
<a id="trace-25715"></a>
<a id="trace-25717"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25772"></a>
<a id="trace-25774"></a>
<a id="trace-25787"></a>
<a id="trace-25789"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25826"></a>
<a id="trace-25828"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25857"></a>
<a id="trace-25859"></a>
<a id="trace-25932"></a>
<a id="trace-25934"></a>
<a id="trace-25943"></a>
<a id="trace-25945"></a>
<a id="trace-25962"></a>
<a id="trace-25964"></a>
<a id="trace-25972"></a>
<a id="trace-25974"></a>
<a id="trace-25996"></a>
<a id="trace-25998"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26030"></a>
<a id="trace-26032"></a>
<a id="trace-26059"></a>
<a id="trace-26061"></a>
<a id="trace-26075"></a>
<a id="trace-26077"></a>
<a id="trace-26087"></a>
<a id="trace-26089"></a>
<a id="trace-26160"></a>
<a id="trace-26162"></a>
<a id="trace-26170"></a>
<a id="trace-26172"></a>
<a id="trace-26187"></a>
<a id="trace-26189"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26214"></a>
<a id="trace-26216"></a>
<a id="trace-26227"></a>
<a id="trace-26229"></a>
<a id="trace-26245"></a>
<a id="trace-26247"></a>
<a id="trace-26265"></a>
<a id="trace-26267"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26299"></a>
<a id="trace-26301"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26398"></a>
<a id="trace-26400"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26425"></a>
<a id="trace-26427"></a>
<a id="trace-26455"></a>
<a id="trace-26457"></a>
<a id="trace-26471"></a>
<a id="trace-26473"></a>
<a id="trace-26485"></a>
<a id="trace-26487"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26513"></a>
<a id="trace-26515"></a>
<a id="trace-26592"></a>
<a id="trace-26594"></a>
<a id="trace-26605"></a>
<a id="trace-26607"></a>
<a id="trace-26626"></a>
<a id="trace-26628"></a>
<a id="trace-26649"></a>
<a id="trace-26651"></a>
<a id="trace-26666"></a>
<a id="trace-26668"></a>
<a id="trace-26679"></a>
<a id="trace-26681"></a>
<a id="trace-26696"></a>
<a id="trace-26698"></a>
<a id="trace-26710"></a>
<a id="trace-26712"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26736"></a>
<a id="trace-26738"></a>
<a id="trace-26815"></a>
<a id="trace-26817"></a>
<a id="trace-26827"></a>
<a id="trace-26829"></a>
<a id="trace-26905"></a>
<a id="trace-26907"></a>
<a id="trace-26926"></a>
<a id="trace-26928"></a>
<a id="trace-26952"></a>
<a id="trace-26954"></a>
<a id="trace-26972"></a>
<a id="trace-26974"></a>
<a id="trace-27006"></a>
<a id="trace-27008"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27043"></a>
<a id="trace-27045"></a>
<a id="trace-27059"></a>
<a id="trace-27061"></a>
<a id="trace-27136"></a>
<a id="trace-27138"></a>
<a id="trace-27149"></a>
<a id="trace-27151"></a>
<a id="trace-27173"></a>
<a id="trace-27175"></a>
<a id="trace-27182"></a>
<a id="trace-27184"></a>
<a id="trace-27202"></a>
<a id="trace-27204"></a>
<a id="trace-27221"></a>
<a id="trace-27223"></a>
<a id="trace-27244"></a>
<a id="trace-27246"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27285"></a>
<a id="trace-27287"></a>
<a id="trace-27300"></a>
<a id="trace-27302"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27403"></a>
<a id="trace-27405"></a>
<a id="trace-27421"></a>
<a id="trace-27423"></a>
<a id="trace-27437"></a>
<a id="trace-27439"></a>
<a id="trace-27458"></a>
<a id="trace-27460"></a>
<a id="trace-27466"></a>
<a id="trace-27468"></a>
<a id="trace-27512"></a>
<a id="trace-27514"></a>
<a id="trace-27526"></a>
<a id="trace-27528"></a>
<a id="trace-27547"></a>
<a id="trace-27549"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27644"></a>
<a id="trace-27646"></a>
<a id="trace-27660"></a>
<a id="trace-27662"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27714"></a>
<a id="trace-27716"></a>
<a id="trace-27738"></a>
<a id="trace-27740"></a>
<a id="trace-27749"></a>
<a id="trace-27751"></a>
<a id="trace-27772"></a>
<a id="trace-27774"></a>
<a id="trace-27783"></a>
<a id="trace-27785"></a>
<a id="trace-27802"></a>
<a id="trace-27804"></a>
<a id="trace-27824"></a>
<a id="trace-27826"></a>
<a id="trace-27897"></a>
<a id="trace-27899"></a>
<a id="trace-27912"></a>
<a id="trace-27914"></a>
<a id="trace-27941"></a>
<a id="trace-27943"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28060"></a>
<a id="trace-28062"></a>
<a id="trace-28067"></a>
<a id="trace-28069"></a>
<a id="trace-28085"></a>
<a id="trace-28087"></a>
<a id="trace-28101"></a>
<a id="trace-28103"></a>
<a id="trace-28119"></a>
<a id="trace-28121"></a>
<a id="trace-28132"></a>
<a id="trace-28134"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28334"></a>
<a id="trace-28336"></a>
<a id="trace-28357"></a>
<a id="trace-28359"></a>
<a id="trace-28376"></a>
<a id="trace-28378"></a>
<a id="trace-28397"></a>
<a id="trace-28399"></a>
<a id="trace-28412"></a>
<a id="trace-28414"></a>
<a id="trace-28430"></a>
<a id="trace-28432"></a>
<a id="trace-28458"></a>
<a id="trace-28460"></a>
<a id="trace-28497"></a>
<a id="trace-28499"></a>
<a id="trace-28529"></a>
<a id="trace-28531"></a>
<a id="trace-28634"></a>
<a id="trace-28636"></a>
<a id="trace-28677"></a>
<a id="trace-28679"></a>
<a id="trace-28721"></a>
<a id="trace-28723"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28821"></a>
<a id="trace-28823"></a>
<a id="trace-28857"></a>
<a id="trace-28859"></a>
<a id="trace-28889"></a>
<a id="trace-28891"></a>
<a id="trace-28911"></a>
<a id="trace-28913"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-28947"></a>
<a id="trace-28949"></a>
<a id="trace-29035"></a>
<a id="trace-29037"></a>
<a id="trace-29062"></a>
<a id="trace-29064"></a>
<a id="trace-29073"></a>
<a id="trace-29075"></a>
<a id="trace-29099"></a>
<a id="trace-29101"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29152"></a>
<a id="trace-29154"></a>
<a id="trace-29169"></a>
<a id="trace-29171"></a>
<a id="trace-29185"></a>
<a id="trace-29187"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29285"></a>
<a id="trace-29287"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29351"></a>
<a id="trace-29353"></a>
<a id="trace-29391"></a>
<a id="trace-29393"></a>
<a id="trace-29434"></a>
<a id="trace-29436"></a>
<a id="trace-29468"></a>
<a id="trace-29470"></a>
<a id="trace-29504"></a>
<a id="trace-29506"></a>
<a id="trace-29546"></a>
<a id="trace-29548"></a>
<a id="trace-29586"></a>
<a id="trace-29588"></a>
<a id="trace-29601"></a>
<a id="trace-29603"></a>
<a id="trace-30464"></a>
<a id="trace-30466"></a>
<a id="trace-30503"></a>
<a id="trace-30505"></a>
<a id="trace-30520"></a>
<a id="trace-30522"></a>
<a id="trace-30542"></a>
<a id="trace-30544"></a>
<a id="trace-30570"></a>
<a id="trace-30572"></a>
<a id="trace-30578"></a>
<a id="trace-30580"></a>
<a id="trace-30596"></a>
<a id="trace-30598"></a>
<a id="trace-30607"></a>
<a id="trace-30609"></a>
<a id="trace-30621"></a>
<a id="trace-30623"></a>
<a id="trace-30630"></a>
<a id="trace-30632"></a>
<a id="trace-30709"></a>
<a id="trace-30711"></a>
<a id="trace-30723"></a>
<a id="trace-30725"></a>
<a id="trace-30740"></a>
<a id="trace-30742"></a>
<a id="trace-30754"></a>
<a id="trace-30756"></a>
<a id="trace-30769"></a>
<a id="trace-30771"></a>
<a id="trace-30778"></a>
<a id="trace-30780"></a>
<a id="trace-30798"></a>
<a id="trace-30800"></a>
<a id="trace-30815"></a>
<a id="trace-30817"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30840"></a>
<a id="trace-30842"></a>
<a id="trace-30913"></a>
<a id="trace-30915"></a>
<a id="trace-30923"></a>
<a id="trace-30925"></a>
<a id="trace-30938"></a>
<a id="trace-30940"></a>
<a id="trace-30951"></a>
<a id="trace-30953"></a>
<a id="trace-30970"></a>
<a id="trace-30972"></a>
<a id="trace-30977"></a>
<a id="trace-30979"></a>
<a id="trace-30990"></a>
<a id="trace-30992"></a>
<a id="trace-31006"></a>
<a id="trace-31008"></a>
<a id="trace-31020"></a>
<a id="trace-31022"></a>
<a id="trace-31029"></a>
<a id="trace-31031"></a>
<a id="trace-31100"></a>
<a id="trace-31102"></a>
<a id="trace-31108"></a>
<a id="trace-31110"></a>
<a id="trace-31123"></a>
<a id="trace-31125"></a>
<a id="trace-31133"></a>
<a id="trace-31135"></a>
<a id="trace-31152"></a>
<a id="trace-31154"></a>
<a id="trace-31163"></a>
<a id="trace-31165"></a>
<a id="trace-31180"></a>
<a id="trace-31182"></a>
<a id="trace-31194"></a>
<a id="trace-31196"></a>
<a id="trace-31223"></a>
<a id="trace-31225"></a>
<a id="trace-31251"></a>
<a id="trace-31253"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4658356075456507, 'next_transition': 731}.
<a id="trace-1103"></a>
<a id="trace-1136"></a>
<a id="trace-1172"></a>
<a id="trace-1174"></a>
<a id="trace-1196"></a>
<a id="trace-1198"></a>
<a id="trace-1216"></a>
<a id="trace-1218"></a>
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 1103): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5232687798839303, 'next_transition': 1136}.
<a id="trace-158"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 158): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08467954922862146, 'next_transition': 1775}.
<a id="trace-1439"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1439): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1439. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08467954922862146, 'next_transition': 1775}.
<a id="trace-1440"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1440): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08467954922862146, 'next_transition': 1775}.
<a id="trace-1441"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1441): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1229. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250525227632234, 'next_transition': 1740}.
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-1931"></a>
<a id="trace-1933"></a>
<a id="trace-1959"></a>
<a id="trace-1961"></a>
<a id="trace-2054"></a>
<a id="trace-2056"></a>
<a id="trace-2098"></a>
<a id="trace-2100"></a>
<a id="trace-2133"></a>
<a id="trace-2135"></a>
<a id="trace-2170"></a>
<a id="trace-2172"></a>
<a id="trace-2189"></a>
<a id="trace-2191"></a>
<a id="trace-2211"></a>
<a id="trace-2213"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2289"></a>
<a id="trace-2291"></a>
<a id="trace-2315"></a>
<a id="trace-2317"></a>
<a id="trace-2409"></a>
<a id="trace-2411"></a>
<a id="trace-2445"></a>
<a id="trace-2447"></a>
<a id="trace-2509"></a>
<a id="trace-2511"></a>
<a id="trace-3116"></a>
<a id="trace-3118"></a>
- 13.20s–23.25s (×32), actor 5, squad 0 (trace 1740): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.555299025201964, 'next_transition': 1931}.
<a id="trace-1775"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1775): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1237. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.973207471175511, 'next_transition': 2557}.
<a id="trace-1776"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1776): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1237. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.973207471175511, 'next_transition': 2557}.
<a id="trace-2557"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 2557): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2337. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2743}.
<a id="trace-2558"></a>
- 22.50s–22.50s (×1), actor 8, squad 1 (trace 2558): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2337. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2743}.
<a id="trace-2559"></a>
<a id="trace-2743"></a>
<a id="trace-2931"></a>
- 22.50s–23.15s (×3), actor 8, squad 1 (trace 2559): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2337. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2743}.
<a id="trace-3129"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3129): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2329. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6496842349114239, 'next_transition': 3706}.
<a id="trace-3130"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3130): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2329. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6496842349114239, 'next_transition': 3706}.
<a id="trace-3706"></a>
<a id="trace-3708"></a>
<a id="trace-3761"></a>
<a id="trace-3763"></a>
<a id="trace-3878"></a>
<a id="trace-3880"></a>
<a id="trace-3920"></a>
<a id="trace-3922"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 3706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2334. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4702538958444546, 'next_transition': 3761}.
<a id="trace-386"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 386): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4001"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 4001): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 4001. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600188334845766, 'next_transition': 4271}.
<a id="trace-4002"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 4002): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 4002. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600188334845766, 'next_transition': 4271}.
<a id="trace-4007"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 4007): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3795. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 7.967432041430129, 'next_transition': 6049}.
<a id="trace-4008"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 4008): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3795. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 7.967432041430129, 'next_transition': 6049}.
<a id="trace-4271"></a>
<a id="trace-4273"></a>
<a id="trace-4335"></a>
<a id="trace-4337"></a>
<a id="trace-4417"></a>
<a id="trace-4419"></a>
<a id="trace-4519"></a>
<a id="trace-4521"></a>
<a id="trace-4544"></a>
<a id="trace-4546"></a>
<a id="trace-4580"></a>
<a id="trace-4582"></a>
<a id="trace-4607"></a>
<a id="trace-4609"></a>
<a id="trace-4648"></a>
<a id="trace-4650"></a>
<a id="trace-4663"></a>
<a id="trace-4665"></a>
<a id="trace-4686"></a>
<a id="trace-4688"></a>
<a id="trace-4704"></a>
<a id="trace-4706"></a>
- 27.25s–34.75s (×22), actor 5, squad 0 (trace 4271): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 4002. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749964128044656, 'next_transition': 4335}.
<a id="trace-4743"></a>
- 35.10s–35.10s (×1), actor 1, squad 0 (trace 4743): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07141428571428575, 'next_transition': 5267}.
<a id="trace-4744"></a>
- 35.10s–35.10s (×1), actor 1, squad 0 (trace 4744): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07141428571428575, 'next_transition': 5267}.
<a id="trace-4745"></a>
- 35.10s–35.10s (×1), actor 1, squad 0 (trace 4745): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07141428571428575, 'next_transition': 5267}.
<a id="trace-5267"></a>
- 35.25s–35.25s (×1), actor 5, squad 0 (trace 5267): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4723. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10235714285714284, 'next_transition': 5281}.
<a id="trace-5281"></a>
- 35.65s–35.65s (×1), actor 1, squad 0 (trace 5281): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: None.
<a id="trace-5764"></a>
<a id="trace-5876"></a>
<a id="trace-5933"></a>
<a id="trace-6037"></a>
<a id="trace-6194"></a>
- 35.75s–38.75s (×5), actor 5, squad 0 (trace 5764): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4723. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6480851992690261, 'next_transition': 5876}.
<a id="trace-6049"></a>
- 38.30s–38.30s (×1), actor 9, squad 1 (trace 6049): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 4726. Next observer evidence: {'until': 50.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.98589326111583, 'next_transition': 7779}.
<a id="trace-6050"></a>
- 38.30s–38.30s (×1), actor 9, squad 1 (trace 6050): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 4726. Next observer evidence: {'until': 50.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.98589326111583, 'next_transition': 7779}.
<a id="trace-6236"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 6236): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4790464731087735, 'next_transition': 6581}.
<a id="trace-6237"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 6237): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 4719. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4790464731087735, 'next_transition': 6581}.
<a id="trace-6581"></a>
<a id="trace-6684"></a>
- 39.75s–40.25s (×2), actor 5, squad 0 (trace 6581): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4723. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4251440332600997, 'next_transition': 6684}.
<a id="trace-654"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (events line 654): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6693"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6693): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.023999 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6693. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35630105157221553, 'next_transition': 6726}.
<a id="trace-6694"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6694): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.023999 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6694. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35630105157221553, 'next_transition': 6726}.
<a id="trace-6726"></a>
<a id="trace-6728"></a>
<a id="trace-6762"></a>
<a id="trace-6764"></a>
<a id="trace-6787"></a>
<a id="trace-6789"></a>
<a id="trace-6827"></a>
<a id="trace-6829"></a>
<a id="trace-6864"></a>
<a id="trace-6866"></a>
<a id="trace-6905"></a>
<a id="trace-6907"></a>
<a id="trace-6949"></a>
<a id="trace-6951"></a>
<a id="trace-7184"></a>
<a id="trace-7186"></a>
<a id="trace-7220"></a>
<a id="trace-7222"></a>
<a id="trace-7252"></a>
<a id="trace-7254"></a>
<a id="trace-7296"></a>
<a id="trace-7298"></a>
<a id="trace-7341"></a>
<a id="trace-7343"></a>
<a id="trace-7475"></a>
<a id="trace-7477"></a>
<a id="trace-7536"></a>
<a id="trace-7538"></a>
<a id="trace-7594"></a>
<a id="trace-7596"></a>
<a id="trace-7722"></a>
<a id="trace-7724"></a>
- 40.75s–50.25s (×32), actor 5, squad 0 (trace 6726): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 6694. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5102470111582458, 'next_transition': 6762}.
<a id="trace-7751"></a>
- 50.65s–50.65s (×1), actor 1, squad 0 (trace 7751): NeedSupport. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: None.
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7856"></a>
<a id="trace-7858"></a>
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7959"></a>
<a id="trace-7961"></a>
- 50.75s–52.75s (×8), actor 5, squad 0 (trace 7762): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7635. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8573878936129791, 'next_transition': 7856}.
<a id="trace-7779"></a>
- 50.90s–50.90s (×1), actor 9, squad 1 (trace 7779): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7638. Next observer evidence: {'until': 51.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300336498949898, 'next_transition': 7899}.
<a id="trace-7780"></a>
- 50.90s–50.90s (×1), actor 9, squad 1 (trace 7780): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7638. Next observer evidence: {'until': 51.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300336498949898, 'next_transition': 7899}.
<a id="trace-7899"></a>
- 51.90s–51.90s (×1), actor 9, squad 1 (trace 7899): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 50.00s, trace 7638. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05250280415791304, 'next_transition': 1167}.
<a id="trace-7971"></a>
- 53.05s–53.05s (×1), actor 1, squad 0 (trace 7971): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2168435630371222, 'next_transition': 8113}.
<a id="trace-7999"></a>
- 53.05s–53.05s (×1), actor 1, squad 0 (trace 7999): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2168435630371222, 'next_transition': 8113}.
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8147"></a>
<a id="trace-8149"></a>
- 53.25s–53.75s (×4), actor 5, squad 0 (trace 8113): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7635. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.24699430190874566, 'next_transition': 8147}.
<a id="trace-8165"></a>
- 53.85s–53.85s (×1), actor 1, squad 0 (trace 8165): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18375438930567964, 'next_transition': 8175}.
<a id="trace-8175"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 8175): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15749850324425718, 'next_transition': 8293}.
<a id="trace-8180"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 8180): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15749850324425718, 'next_transition': 8293}.
<a id="trace-8181"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 8181): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 7631. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15749850324425718, 'next_transition': 8293}.
<a id="trace-8293"></a>
<a id="trace-8295"></a>
<a id="trace-8315"></a>
<a id="trace-8317"></a>
<a id="trace-8430"></a>
<a id="trace-8432"></a>
<a id="trace-8455"></a>
<a id="trace-8457"></a>
<a id="trace-8486"></a>
<a id="trace-8488"></a>
<a id="trace-8503"></a>
<a id="trace-8505"></a>
<a id="trace-8516"></a>
<a id="trace-8518"></a>
- 54.25s–57.75s (×14), actor 5, squad 0 (trace 8293): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7635. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23979353576765075, 'next_transition': 8315}.
<a id="trace-8530"></a>
- 57.95s–57.95s (×1), actor 1, squad 0 (trace 8530): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 8338. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300003940291914, 'next_transition': 8665}.
<a id="trace-8531"></a>
- 57.95s–57.95s (×1), actor 1, squad 0 (trace 8531): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 8338. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300003940291914, 'next_transition': 8665}.
<a id="trace-8665"></a>
<a id="trace-8667"></a>
<a id="trace-8696"></a>
<a id="trace-8698"></a>
<a id="trace-8743"></a>
<a id="trace-8745"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8885"></a>
<a id="trace-8887"></a>
<a id="trace-8940"></a>
<a id="trace-8942"></a>
<a id="trace-8989"></a>
<a id="trace-8991"></a>
<a id="trace-9028"></a>
<a id="trace-9030"></a>
<a id="trace-9079"></a>
<a id="trace-9081"></a>
<a id="trace-9124"></a>
<a id="trace-9126"></a>
<a id="trace-9158"></a>
<a id="trace-9160"></a>
<a id="trace-9188"></a>
<a id="trace-9190"></a>
<a id="trace-9220"></a>
<a id="trace-9222"></a>
<a id="trace-9238"></a>
<a id="trace-9240"></a>
<a id="trace-9323"></a>
<a id="trace-9325"></a>
<a id="trace-9335"></a>
<a id="trace-9337"></a>
<a id="trace-9388"></a>
<a id="trace-9390"></a>
<a id="trace-9401"></a>
<a id="trace-9403"></a>
<a id="trace-9464"></a>
<a id="trace-9466"></a>
<a id="trace-9477"></a>
<a id="trace-9479"></a>
<a id="trace-9564"></a>
<a id="trace-9566"></a>
- 58.25s–70.25s (×42), actor 5, squad 0 (trace 8665): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8341. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300634237361556, 'next_transition': 8696}.
<a id="trace-1167"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (events line 1167): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9411"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9411): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.155266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9411. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9858}.
<a id="trace-9412"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9412): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.155266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9412. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9858}.
<a id="trace-9574"></a>
- 70.45s–70.45s (×1), actor 1, squad 0 (trace 9574): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 9491. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0841883816872084, 'next_transition': 9731}.
<a id="trace-9575"></a>
- 70.45s–70.45s (×1), actor 1, squad 0 (trace 9575): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 9491. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0841883816872084, 'next_transition': 9731}.
<a id="trace-9731"></a>
<a id="trace-9733"></a>
<a id="trace-9751"></a>
<a id="trace-9753"></a>
<a id="trace-9792"></a>
<a id="trace-9794"></a>
<a id="trace-9844"></a>
<a id="trace-9846"></a>
<a id="trace-9870"></a>
<a id="trace-9872"></a>
<a id="trace-9895"></a>
<a id="trace-9897"></a>
<a id="trace-9915"></a>
<a id="trace-9917"></a>
<a id="trace-10009"></a>
<a id="trace-10011"></a>
<a id="trace-10021"></a>
<a id="trace-10023"></a>
<a id="trace-10048"></a>
<a id="trace-10050"></a>
<a id="trace-10066"></a>
<a id="trace-10068"></a>
<a id="trace-10088"></a>
<a id="trace-10090"></a>
<a id="trace-10357"></a>
<a id="trace-10359"></a>
<a id="trace-10417"></a>
<a id="trace-10419"></a>
<a id="trace-10620"></a>
<a id="trace-10622"></a>
<a id="trace-10662"></a>
<a id="trace-10664"></a>
- 70.75s–81.25s (×32), actor 5, squad 0 (trace 9731): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9494. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3153166508095912, 'next_transition': 9751}.
<a id="trace-9858"></a>
- 73.60s–73.60s (×1), actor 9, squad 1 (trace 9858): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 9497. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10097}.
<a id="trace-9859"></a>
- 73.60s–73.60s (×1), actor 9, squad 1 (trace 9859): new contact inside 100 m. Knowledge: actor memory at 70.00s, trace 9497. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10097}.
<a id="trace-10097"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10097): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10099"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10099): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10336"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10336): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10337"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10337): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10338"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10338): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10339"></a>
- 77.30s–77.30s (×1), actor 9, squad 1 (trace 10339): Assaulting. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10384}.
<a id="trace-10384"></a>
- 78.30s–78.30s (×1), actor 9, squad 1 (trace 10384): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10447}.
<a id="trace-10388"></a>
- 78.30s–78.30s (×1), actor 9, squad 1 (trace 10388): MoveTactically. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10447}.
<a id="trace-10389"></a>
- 78.30s–78.30s (×1), actor 9, squad 1 (trace 10389): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10447}.
<a id="trace-10447"></a>
- 79.30s–79.30s (×1), actor 9, squad 1 (trace 10447): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 9939. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.999999170294399, 'next_transition': 11114}.
<a id="trace-10676"></a>
- 81.55s–81.55s (×1), actor 1, squad 0 (trace 10676): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 10550. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399925571446909, 'next_transition': 10812}.
<a id="trace-10738"></a>
- 81.55s–81.55s (×1), actor 1, squad 0 (trace 10738): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 10550. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399925571446909, 'next_transition': 10812}.
<a id="trace-10812"></a>
<a id="trace-10814"></a>
<a id="trace-10846"></a>
<a id="trace-10848"></a>
<a id="trace-10872"></a>
<a id="trace-10874"></a>
<a id="trace-10887"></a>
<a id="trace-10889"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10932"></a>
<a id="trace-10934"></a>
<a id="trace-11017"></a>
<a id="trace-11019"></a>
<a id="trace-11057"></a>
<a id="trace-11059"></a>
<a id="trace-11088"></a>
<a id="trace-11090"></a>
<a id="trace-11105"></a>
<a id="trace-11107"></a>
<a id="trace-11136"></a>
<a id="trace-11138"></a>
<a id="trace-11252"></a>
<a id="trace-11254"></a>
<a id="trace-11336"></a>
<a id="trace-11338"></a>
<a id="trace-11349"></a>
<a id="trace-11351"></a>
<a id="trace-11373"></a>
<a id="trace-11375"></a>
<a id="trace-11396"></a>
<a id="trace-11398"></a>
<a id="trace-11430"></a>
<a id="trace-11432"></a>
<a id="trace-11446"></a>
<a id="trace-11448"></a>
<a id="trace-11474"></a>
<a id="trace-11476"></a>
<a id="trace-11491"></a>
<a id="trace-11493"></a>
<a id="trace-11524"></a>
<a id="trace-11526"></a>
<a id="trace-11615"></a>
<a id="trace-11617"></a>
<a id="trace-11640"></a>
<a id="trace-11642"></a>
<a id="trace-11652"></a>
<a id="trace-11654"></a>
<a id="trace-11673"></a>
<a id="trace-11675"></a>
<a id="trace-11688"></a>
<a id="trace-11690"></a>
<a id="trace-11709"></a>
<a id="trace-11711"></a>
<a id="trace-11720"></a>
<a id="trace-11722"></a>
<a id="trace-11740"></a>
<a id="trace-11742"></a>
<a id="trace-11855"></a>
<a id="trace-11857"></a>
<a id="trace-11878"></a>
<a id="trace-11880"></a>
<a id="trace-11895"></a>
<a id="trace-11897"></a>
<a id="trace-11911"></a>
<a id="trace-11913"></a>
<a id="trace-11939"></a>
<a id="trace-11941"></a>
<a id="trace-11959"></a>
<a id="trace-11961"></a>
<a id="trace-12075"></a>
<a id="trace-12077"></a>
<a id="trace-12104"></a>
<a id="trace-12106"></a>
<a id="trace-12117"></a>
<a id="trace-12119"></a>
<a id="trace-12149"></a>
<a id="trace-12151"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
- 82.25s–109.25s (×80), actor 5, squad 0 (trace 10812): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10553. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27593472299633776, 'next_transition': 10846}.
<a id="trace-11114"></a>
- 88.70s–88.70s (×1), actor 9, squad 1 (trace 11114): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 10953. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11146}.
<a id="trace-11146"></a>
- 89.70s–89.70s (×1), actor 9, squad 1 (trace 11146): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 10953. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.015930393471223, 'next_transition': 11865}.
<a id="trace-11865"></a>
- 101.30s–101.30s (×1), actor 9, squad 1 (trace 11865): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 11767. Next observer evidence: {'until': 111.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.265133573864501, 'next_transition': 12308}.
<a id="trace-1420"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 1420): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12190}.
<a id="trace-12187"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 12187): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.45s, trace 12187. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12190}.
<a id="trace-12190"></a>
<a id="trace-12192"></a>
<a id="trace-12279"></a>
<a id="trace-12281"></a>
<a id="trace-12297"></a>
<a id="trace-12299"></a>
<a id="trace-12368"></a>
<a id="trace-12370"></a>
- 109.75s–111.75s (×8), actor 5, squad 0 (trace 12190): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 12187. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12279}.
<a id="trace-12308"></a>
- 111.50s–111.50s (×1), actor 9, squad 1 (trace 12308): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 12207. Next observer evidence: {'until': 120.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.00000148902764, 'next_transition': 12932}.
<a id="trace-12397"></a>
- 112.65s–112.65s (×1), actor 1, squad 0 (trace 12397): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 12202. Next observer evidence: None.
<a id="trace-12406"></a>
<a id="trace-12408"></a>
<a id="trace-12433"></a>
<a id="trace-12435"></a>
<a id="trace-12458"></a>
<a id="trace-12460"></a>
<a id="trace-12486"></a>
<a id="trace-12488"></a>
<a id="trace-12585"></a>
<a id="trace-12587"></a>
- 112.75s–115.25s (×10), actor 5, squad 0 (trace 12406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12204. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}.
<a id="trace-12592"></a>
- 115.25s–115.25s (×1), actor 1, squad 0 (trace 12592): MoveTactically. Knowledge: actor memory at 115.00s, trace 12514. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12610}.
<a id="trace-12593"></a>
- 115.25s–115.25s (×1), actor 1, squad 0 (trace 12593): received platoon directive. Knowledge: actor memory at 115.00s, trace 12514. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12610}.
<a id="trace-12610"></a>
- 115.50s–115.50s (×1), actor 1, squad 0 (trace 12610): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 12514. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12666}.
<a id="trace-12666"></a>
<a id="trace-12668"></a>
<a id="trace-12693"></a>
<a id="trace-12695"></a>
<a id="trace-12740"></a>
<a id="trace-12742"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12782"></a>
<a id="trace-12784"></a>
<a id="trace-12833"></a>
<a id="trace-12835"></a>
<a id="trace-12922"></a>
<a id="trace-12924"></a>
<a id="trace-12964"></a>
<a id="trace-12966"></a>
<a id="trace-12993"></a>
<a id="trace-12995"></a>
<a id="trace-13012"></a>
<a id="trace-13014"></a>
<a id="trace-13038"></a>
<a id="trace-13040"></a>
<a id="trace-13076"></a>
<a id="trace-13078"></a>
<a id="trace-13089"></a>
<a id="trace-13091"></a>
<a id="trace-13110"></a>
<a id="trace-13112"></a>
<a id="trace-13123"></a>
<a id="trace-13125"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13245"></a>
<a id="trace-13247"></a>
- 115.75s–126.25s (×34), actor 5, squad 0 (trace 12666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12516. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12693}.
<a id="trace-12932"></a>
- 120.50s–120.50s (×1), actor 9, squad 1 (trace 12932): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 12848. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.557832448579228, 'next_transition': 13418}.
<a id="trace-13267"></a>
- 126.65s–126.65s (×1), actor 1, squad 0 (trace 13267): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 13139. Next observer evidence: None.
<a id="trace-13296"></a>
<a id="trace-13298"></a>
<a id="trace-13319"></a>
<a id="trace-13321"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13385"></a>
<a id="trace-13387"></a>
<a id="trace-13407"></a>
<a id="trace-13409"></a>
<a id="trace-13611"></a>
<a id="trace-13613"></a>
<a id="trace-13690"></a>
<a id="trace-13692"></a>
<a id="trace-13728"></a>
<a id="trace-13730"></a>
<a id="trace-13743"></a>
<a id="trace-13745"></a>
<a id="trace-13771"></a>
<a id="trace-13773"></a>
<a id="trace-13816"></a>
<a id="trace-13818"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-14039"></a>
<a id="trace-14041"></a>
<a id="trace-14144"></a>
<a id="trace-14146"></a>
<a id="trace-14165"></a>
<a id="trace-14167"></a>
<a id="trace-14190"></a>
<a id="trace-14192"></a>
- 126.75s–136.80s (×32), actor 5, squad 0 (trace 13296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 13141. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13319}.
<a id="trace-13418"></a>
- 129.50s–129.50s (×1), actor 9, squad 1 (trace 13418): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 13144. Next observer evidence: {'until': 134.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.667316592497031, 'next_transition': 13846}.
<a id="trace-13595"></a>
- 129.50s–129.50s (×1), actor 9, squad 1 (trace 13595): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 125.00s, trace 13144. Next observer evidence: {'until': 134.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.667316592497031, 'next_transition': 13846}.
<a id="trace-13846"></a>
- 134.25s–134.25s (×1), actor 9, squad 1 (trace 13846): ReactToContact: cover and return fire. Knowledge: actor memory at 130.00s, trace 13625. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1155482671992147, 'next_transition': 1739}.
<a id="trace-13847"></a>
- 134.25s–134.25s (×1), actor 9, squad 1 (trace 13847): new contact inside 100 m. Knowledge: actor memory at 130.00s, trace 13625. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1155482671992147, 'next_transition': 1739}.
<a id="trace-1739"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 1739): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14211"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 14211): renew committed intent (75 s lifetime). Knowledge: actor memory at 137.10s, trace 14211. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7845720337927375, 'next_transition': 14367}.
<a id="trace-14238"></a>
- 137.50s–137.50s (×1), actor 1, squad 0 (trace 14238): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 14049. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14245640736730592, 'next_transition': 14347}.
<a id="trace-14347"></a>
<a id="trace-14349"></a>
<a id="trace-14589"></a>
<a id="trace-14591"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14649"></a>
<a id="trace-14651"></a>
<a id="trace-14673"></a>
<a id="trace-14675"></a>
<a id="trace-14761"></a>
<a id="trace-14763"></a>
<a id="trace-14795"></a>
<a id="trace-14797"></a>
<a id="trace-14818"></a>
<a id="trace-14820"></a>
<a id="trace-15010"></a>
<a id="trace-15012"></a>
<a id="trace-15036"></a>
<a id="trace-15038"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15139"></a>
<a id="trace-15141"></a>
- 137.80s–143.80s (×24), actor 5, squad 0 (trace 14347): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.10s, trace 14211. Next observer evidence: {'until': 138.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14650753018190013, 'next_transition': 14589}.
<a id="trace-14367"></a>
<a id="trace-14831"></a>
- 138.25s–141.60s (×2), actor 9, squad 1 (trace 14367): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 14054. Next observer evidence: {'until': 141.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.616278725885419, 'next_transition': 14831}.
<a id="trace-15152"></a>
- 143.85s–143.85s (×1), actor 1, squad 0 (trace 15152): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 14685. Next observer evidence: {'until': 144.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4086899167915428, 'next_transition': 15308}.
<a id="trace-15153"></a>
- 143.85s–143.85s (×1), actor 1, squad 0 (trace 15153): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 140.00s, trace 14685. Next observer evidence: {'until': 144.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4086899167915428, 'next_transition': 15308}.
<a id="trace-15308"></a>
<a id="trace-15310"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17556"></a>
<a id="trace-17558"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
- 144.80s–147.30s (×10), actor 5, squad 0 (trace 15308): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14687. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7228288970366233, 'next_transition': 17434}.
<a id="trace-15324"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 15324): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-15326"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 15326): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-17241"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 17241): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-17242"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 17242): MoveTactically. Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-17243"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 17243): contact cover complete: assessment resumes closure. Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-17330"></a>
- 144.90s–144.90s (×1), actor 9, squad 1 (trace 17330): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 140.00s, trace 14690. Next observer evidence: {'until': 151.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 4.519971746088285, 'next_transition': 18208}.
<a id="trace-17830"></a>
- 148.10s–148.10s (×1), actor 1, squad 0 (trace 17830): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 145.00s, trace 17338. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17918}.
<a id="trace-17831"></a>
- 148.10s–148.10s (×1), actor 1, squad 0 (trace 17831): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 17338. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17918}.
<a id="trace-17918"></a>
<a id="trace-17920"></a>
<a id="trace-17976"></a>
<a id="trace-17978"></a>
<a id="trace-18066"></a>
<a id="trace-18068"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18176"></a>
<a id="trace-18178"></a>
<a id="trace-18193"></a>
<a id="trace-18195"></a>
<a id="trace-18351"></a>
<a id="trace-18353"></a>
<a id="trace-18378"></a>
<a id="trace-18380"></a>
<a id="trace-18399"></a>
<a id="trace-18401"></a>
<a id="trace-18430"></a>
<a id="trace-18432"></a>
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18598"></a>
<a id="trace-18600"></a>
<a id="trace-18616"></a>
<a id="trace-18618"></a>
<a id="trace-18633"></a>
<a id="trace-18635"></a>
<a id="trace-18646"></a>
<a id="trace-18648"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18717"></a>
<a id="trace-18719"></a>
- 148.30s–158.80s (×36), actor 5, squad 0 (trace 17918): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17340. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06298858626767231, 'next_transition': 17976}.
<a id="trace-18208"></a>
- 151.50s–151.50s (×1), actor 9, squad 1 (trace 18208): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 152.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.3201881368398656, 'next_transition': 18263}.
<a id="trace-18210"></a>
- 151.50s–151.50s (×1), actor 9, squad 1 (trace 18210): NeedSupport. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 152.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.3201881368398656, 'next_transition': 18263}.
<a id="trace-18263"></a>
- 152.50s–152.50s (×1), actor 9, squad 1 (trace 18263): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 154, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7158795102519333, 'next_transition': 18413}.
<a id="trace-18266"></a>
- 152.50s–152.50s (×1), actor 9, squad 1 (trace 18266): MoveTactically. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 154, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7158795102519333, 'next_transition': 18413}.
<a id="trace-18267"></a>
- 152.50s–152.50s (×1), actor 9, squad 1 (trace 18267): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 154, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7158795102519333, 'next_transition': 18413}.
<a id="trace-18413"></a>
- 154.00s–154.00s (×1), actor 9, squad 1 (trace 18413): NeedSupport. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 154.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0192380660622105, 'next_transition': 18450}.
<a id="trace-18450"></a>
- 154.75s–154.75s (×1), actor 9, squad 1 (trace 18450): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.538111602808716, 'next_transition': 19125}.
<a id="trace-18512"></a>
- 154.75s–154.75s (×1), actor 9, squad 1 (trace 18512): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 150.00s, trace 18087. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.538111602808716, 'next_transition': 19125}.
<a id="trace-18728"></a>
- 158.90s–158.90s (×1), actor 1, squad 0 (trace 18728): NeedSupport. Knowledge: actor memory at 155.00s, trace 18525. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1307117877010332, 'next_transition': 18741}.
<a id="trace-18741"></a>
<a id="trace-18743"></a>
<a id="trace-18755"></a>
<a id="trace-18757"></a>
<a id="trace-18831"></a>
<a id="trace-18833"></a>
<a id="trace-18851"></a>
<a id="trace-18853"></a>
<a id="trace-18866"></a>
<a id="trace-18868"></a>
<a id="trace-18910"></a>
<a id="trace-18912"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-18945"></a>
<a id="trace-18972"></a>
<a id="trace-19055"></a>
<a id="trace-19066"></a>
<a id="trace-19112"></a>
<a id="trace-19114"></a>
<a id="trace-19128"></a>
<a id="trace-19130"></a>
<a id="trace-19149"></a>
<a id="trace-19151"></a>
<a id="trace-19167"></a>
<a id="trace-19169"></a>
<a id="trace-19189"></a>
<a id="trace-19191"></a>
<a id="trace-19268"></a>
<a id="trace-19270"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19313"></a>
<a id="trace-19315"></a>
<a id="trace-19339"></a>
<a id="trace-19341"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19373"></a>
<a id="trace-19375"></a>
<a id="trace-19408"></a>
<a id="trace-19410"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19501"></a>
<a id="trace-19503"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
- 159.30s–175.80s (×48), actor 5, squad 0 (trace 18741): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 18527. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10258545900857508, 'next_transition': 18755}.
<a id="trace-19125"></a>
- 167.70s–167.70s (×1), actor 11, squad 1 (trace 19125): traveling overwatch. Knowledge: actor memory at 165.00s, trace 18996. Next observer evidence: {'until': 197.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2855}.
<a id="trace-19126"></a>
- 167.70s–167.70s (×1), actor 11, squad 1 (trace 19126): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 18996. Next observer evidence: {'until': 197.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2855}.
<a id="trace-19522"></a>
- 175.80s–175.80s (×1), actor 1, squad 0 (trace 19522): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 19433. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19641}.
<a id="trace-19523"></a>
- 175.80s–175.80s (×1), actor 1, squad 0 (trace 19523): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 19433. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19641}.
<a id="trace-19641"></a>
<a id="trace-19643"></a>
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19711"></a>
<a id="trace-19713"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
- 176.30s–178.30s (×8), actor 5, squad 0 (trace 19641): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 19435. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599330140923928, 'next_transition': 19666}.
<a id="trace-2581"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 2581): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9902947874105201, 'next_transition': 19773}.
<a id="trace-19744"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 19744): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 19744. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9902947874105201, 'next_transition': 19773}.
<a id="trace-19773"></a>
<a id="trace-19775"></a>
<a id="trace-19791"></a>
<a id="trace-19793"></a>
<a id="trace-19877"></a>
<a id="trace-19879"></a>
<a id="trace-19897"></a>
<a id="trace-19899"></a>
<a id="trace-19913"></a>
<a id="trace-19915"></a>
<a id="trace-19928"></a>
<a id="trace-19930"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
<a id="trace-19972"></a>
<a id="trace-19974"></a>
<a id="trace-19993"></a>
<a id="trace-19995"></a>
<a id="trace-20011"></a>
<a id="trace-20013"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20132"></a>
<a id="trace-20134"></a>
<a id="trace-20147"></a>
<a id="trace-20149"></a>
<a id="trace-20172"></a>
<a id="trace-20174"></a>
<a id="trace-20200"></a>
<a id="trace-20202"></a>
<a id="trace-20222"></a>
<a id="trace-20224"></a>
- 179.30s–187.30s (×34), actor 5, squad 0 (trace 19773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 19744. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.717674574102409, 'next_transition': 19791}.
<a id="trace-20247"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 20247): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 20065. Next observer evidence: None.
<a id="trace-20248"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 20248): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 20065. Next observer evidence: None.
<a id="trace-20308"></a>
<a id="trace-20310"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20353"></a>
<a id="trace-20355"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20454"></a>
<a id="trace-20456"></a>
- 188.30s–190.30s (×10), actor 5, squad 0 (trace 20308): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 20067. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599762839967102, 'next_transition': 20331}.
<a id="trace-20467"></a>
- 190.40s–190.40s (×1), actor 1, squad 0 (trace 20467): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 190.00s, trace 20383. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20474}.
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20500"></a>
<a id="trace-20502"></a>
<a id="trace-20530"></a>
<a id="trace-20532"></a>
<a id="trace-20552"></a>
<a id="trace-20554"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20611"></a>
<a id="trace-20613"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20638"></a>
<a id="trace-20640"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20729"></a>
<a id="trace-20731"></a>
<a id="trace-20745"></a>
<a id="trace-20747"></a>
<a id="trace-20759"></a>
<a id="trace-20761"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20851"></a>
<a id="trace-20853"></a>
<a id="trace-20944"></a>
<a id="trace-20946"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-20974"></a>
<a id="trace-20976"></a>
<a id="trace-20995"></a>
<a id="trace-20997"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21024"></a>
<a id="trace-21026"></a>
<a id="trace-21038"></a>
<a id="trace-21040"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21142"></a>
<a id="trace-21144"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
- 190.80s–205.80s (×54), actor 5, squad 0 (trace 20474): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 20385. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20500}.
<a id="trace-2854"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (events line 2854): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2855"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (events line 2855): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21167"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 21167): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.751587 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 206.15s, trace 21167. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21178}.
<a id="trace-21168"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 21168): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.751587 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 206.15s, trace 21168. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21178}.
<a id="trace-21169"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (trace 21169): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.15s, trace 21169. Next observer evidence: {'until': 212, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21415}.
<a id="trace-21178"></a>
<a id="trace-21180"></a>
<a id="trace-21197"></a>
<a id="trace-21199"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21229"></a>
<a id="trace-21231"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21272"></a>
<a id="trace-21274"></a>
<a id="trace-21362"></a>
<a id="trace-21364"></a>
<a id="trace-21372"></a>
<a id="trace-21374"></a>
<a id="trace-21388"></a>
<a id="trace-21390"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
- 206.30s–212.30s (×22), actor 5, squad 0 (trace 21178): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 21169. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21197}.
<a id="trace-21415"></a>
- 212.10s–212.10s (×1), actor 11, squad 1 (trace 21415): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 21298. Next observer evidence: {'until': 242, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24491}.
<a id="trace-21416"></a>
- 212.10s–212.10s (×1), actor 11, squad 1 (trace 21416): MoveTactically. Knowledge: actor memory at 210.00s, trace 21298. Next observer evidence: {'until': 242, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24491}.
<a id="trace-21417"></a>
- 212.10s–212.10s (×1), actor 11, squad 1 (trace 21417): . Knowledge: actor memory at 210.00s, trace 21298. Next observer evidence: {'until': 242, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24491}.
<a id="trace-21434"></a>
- 212.35s–212.35s (×1), actor 1, squad 0 (trace 21434): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 210.00s, trace 21293. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22765}.
<a id="trace-21435"></a>
- 212.35s–212.35s (×1), actor 1, squad 0 (trace 21435): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 210.00s, trace 21293. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22765}.
<a id="trace-22765"></a>
<a id="trace-22767"></a>
<a id="trace-22807"></a>
<a id="trace-22809"></a>
<a id="trace-22821"></a>
<a id="trace-22823"></a>
<a id="trace-22834"></a>
<a id="trace-22836"></a>
<a id="trace-22917"></a>
<a id="trace-22919"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-22999"></a>
<a id="trace-23001"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23059"></a>
<a id="trace-23061"></a>
<a id="trace-23079"></a>
<a id="trace-23081"></a>
- 212.80s–219.80s (×22), actor 5, squad 0 (trace 22765): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 21295. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44099899228794764, 'next_transition': 22807}.
<a id="trace-2990"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (events line 2990): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202318726127604, 'next_transition': 23157}.
<a id="trace-23104"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (trace 23104): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.792317 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 220.00s, trace 23104. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202318726127604, 'next_transition': 23157}.
<a id="trace-23105"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (trace 23105): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.792317 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 220.00s, trace 23105. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202318726127604, 'next_transition': 23157}.
<a id="trace-23157"></a>
<a id="trace-23159"></a>
<a id="trace-23174"></a>
<a id="trace-23176"></a>
<a id="trace-23202"></a>
<a id="trace-23204"></a>
<a id="trace-23244"></a>
<a id="trace-23246"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23277"></a>
<a id="trace-23279"></a>
<a id="trace-23298"></a>
<a id="trace-23300"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23432"></a>
<a id="trace-23434"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23522"></a>
<a id="trace-23524"></a>
<a id="trace-23550"></a>
<a id="trace-23552"></a>
<a id="trace-23643"></a>
<a id="trace-23645"></a>
<a id="trace-23661"></a>
<a id="trace-23663"></a>
<a id="trace-23678"></a>
<a id="trace-23680"></a>
<a id="trace-23699"></a>
<a id="trace-23701"></a>
<a id="trace-23713"></a>
<a id="trace-23715"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
<a id="trace-23856"></a>
<a id="trace-23858"></a>
<a id="trace-23893"></a>
<a id="trace-23895"></a>
<a id="trace-23912"></a>
<a id="trace-23914"></a>
<a id="trace-23931"></a>
<a id="trace-23933"></a>
<a id="trace-23946"></a>
<a id="trace-23948"></a>
<a id="trace-23963"></a>
<a id="trace-23965"></a>
<a id="trace-23981"></a>
<a id="trace-23983"></a>
<a id="trace-23997"></a>
<a id="trace-23999"></a>
<a id="trace-24009"></a>
<a id="trace-24011"></a>
<a id="trace-24083"></a>
<a id="trace-24085"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24141"></a>
<a id="trace-24143"></a>
- 220.30s–242.30s (×74), actor 5, squad 0 (trace 23157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 23105. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8819817270480756, 'next_transition': 23174}.
<a id="trace-24181"></a>
- 243.55s–243.55s (×1), actor 1, squad 0 (trace 24181): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 240.00s, trace 24019. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03727760834602993, 'next_transition': 24192}.
<a id="trace-24182"></a>
- 243.55s–243.55s (×1), actor 1, squad 0 (trace 24182): NeedSupport. Knowledge: actor memory at 240.00s, trace 24019. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03727760834602993, 'next_transition': 24192}.
<a id="trace-24192"></a>
<a id="trace-24194"></a>
<a id="trace-24214"></a>
<a id="trace-24216"></a>
- 243.80s–244.30s (×4), actor 5, squad 0 (trace 24192): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 24021. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24214}.
<a id="trace-24224"></a>
- 244.55s–244.55s (×1), actor 1, squad 0 (trace 24224): Reorganise: completed/failed drill. Knowledge: actor memory at 240.00s, trace 24019. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875392847344152, 'next_transition': 24240}.
<a id="trace-24227"></a>
- 244.55s–244.55s (×1), actor 1, squad 0 (trace 24227): ReactToContact: cover and return fire. Knowledge: actor memory at 240.00s, trace 24019. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875392847344152, 'next_transition': 24240}.
<a id="trace-24228"></a>
- 244.55s–244.55s (×1), actor 1, squad 0 (trace 24228): Reorganise complete: known contact. Knowledge: actor memory at 240.00s, trace 24019. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875392847344152, 'next_transition': 24240}.
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24319"></a>
<a id="trace-24321"></a>
<a id="trace-24340"></a>
<a id="trace-24342"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
- 244.80s–247.30s (×10), actor 5, squad 0 (trace 24240): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 24021. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149907389511637, 'next_transition': 24319}.
<a id="trace-24417"></a>
- 248.15s–248.15s (×1), actor 1, squad 0 (trace 24417): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 245.00s, trace 24251. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1134056050202102, 'next_transition': 24477}.
<a id="trace-24418"></a>
- 248.15s–248.15s (×1), actor 1, squad 0 (trace 24418): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 24251. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1134056050202102, 'next_transition': 24477}.
<a id="trace-24477"></a>
<a id="trace-24479"></a>
<a id="trace-24501"></a>
<a id="trace-24503"></a>
<a id="trace-24528"></a>
<a id="trace-24530"></a>
<a id="trace-24547"></a>
<a id="trace-24549"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24643"></a>
<a id="trace-24645"></a>
<a id="trace-24665"></a>
<a id="trace-24667"></a>
- 248.30s–251.30s (×14), actor 5, squad 0 (trace 24477): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 24252. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3402177583915933, 'next_transition': 24501}.
<a id="trace-24491"></a>
- 248.75s–248.75s (×1), actor 11, squad 1 (trace 24491): ReactToContact: cover and return fire. Knowledge: actor memory at 245.00s, trace 24255. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24701}.
<a id="trace-24492"></a>
- 248.75s–248.75s (×1), actor 11, squad 1 (trace 24492): bounding overwatch. Knowledge: actor memory at 245.00s, trace 24255. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24701}.
<a id="trace-24493"></a>
- 248.75s–248.75s (×1), actor 11, squad 1 (trace 24493): new contact inside 100 m. Knowledge: actor memory at 245.00s, trace 24255. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24701}.
<a id="trace-24675"></a>
- 251.75s–251.75s (×1), actor 1, squad 0 (trace 24675): NeedSupport. Knowledge: actor memory at 250.00s, trace 24557. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680006310789502, 'next_transition': 24680}.
<a id="trace-24680"></a>
<a id="trace-24682"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24724"></a>
<a id="trace-24726"></a>
<a id="trace-24747"></a>
<a id="trace-24749"></a>
<a id="trace-24762"></a>
<a id="trace-24764"></a>
<a id="trace-24782"></a>
<a id="trace-24784"></a>
<a id="trace-24801"></a>
<a id="trace-24803"></a>
<a id="trace-24874"></a>
<a id="trace-24876"></a>
<a id="trace-24888"></a>
<a id="trace-24890"></a>
<a id="trace-24922"></a>
<a id="trace-24924"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-24958"></a>
<a id="trace-24960"></a>
<a id="trace-24975"></a>
<a id="trace-24977"></a>
<a id="trace-24995"></a>
<a id="trace-24997"></a>
<a id="trace-25026"></a>
<a id="trace-25028"></a>
<a id="trace-25118"></a>
<a id="trace-25120"></a>
<a id="trace-25142"></a>
<a id="trace-25144"></a>
<a id="trace-25188"></a>
<a id="trace-25190"></a>
- 251.80s–262.80s (×36), actor 5, squad 0 (trace 24680): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 24558. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31187412034115125, 'next_transition': 24709}.
<a id="trace-24701"></a>
- 252.25s–252.25s (×1), actor 11, squad 1 (trace 24701): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 250.00s, trace 24561. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3878}.
<a id="trace-24703"></a>
- 252.25s–252.25s (×1), actor 11, squad 1 (trace 24703): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 250.00s, trace 24561. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3878}.
<a id="trace-25205"></a>
- 263.25s–263.25s (×1), actor 1, squad 0 (trace 25205): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 260.00s, trace 25035. Next observer evidence: None.
<a id="trace-25206"></a>
- 263.25s–263.25s (×1), actor 1, squad 0 (trace 25206): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 260.00s, trace 25035. Next observer evidence: None.
<a id="trace-25265"></a>
<a id="trace-25267"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25304"></a>
<a id="trace-25306"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25463"></a>
<a id="trace-25465"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25507"></a>
<a id="trace-25509"></a>
<a id="trace-25540"></a>
<a id="trace-25542"></a>
<a id="trace-25562"></a>
<a id="trace-25564"></a>
- 263.30s–269.30s (×18), actor 5, squad 0 (trace 25265): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 25036. Next observer evidence: {'until': 263.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25278}.
<a id="trace-25575"></a>
- 269.45s–269.45s (×1), actor 1, squad 0 (trace 25575): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 265.00s, trace 25337. Next observer evidence: {'until': 269.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856812647225995, 'next_transition': 25583}.
<a id="trace-25583"></a>
<a id="trace-25585"></a>
<a id="trace-25687"></a>
<a id="trace-25689"></a>
<a id="trace-25722"></a>
<a id="trace-25724"></a>
<a id="trace-25768"></a>
<a id="trace-25770"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25806"></a>
<a id="trace-25808"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25838"></a>
<a id="trace-25840"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
<a id="trace-25928"></a>
<a id="trace-25930"></a>
<a id="trace-25958"></a>
<a id="trace-25960"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26002"></a>
<a id="trace-26004"></a>
<a id="trace-26026"></a>
<a id="trace-26028"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26071"></a>
<a id="trace-26073"></a>
<a id="trace-26083"></a>
<a id="trace-26085"></a>
<a id="trace-26156"></a>
<a id="trace-26158"></a>
<a id="trace-26183"></a>
<a id="trace-26185"></a>
<a id="trace-26210"></a>
<a id="trace-26212"></a>
<a id="trace-26223"></a>
<a id="trace-26225"></a>
<a id="trace-26241"></a>
<a id="trace-26243"></a>
<a id="trace-26261"></a>
<a id="trace-26263"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26295"></a>
<a id="trace-26297"></a>
<a id="trace-26379"></a>
<a id="trace-26381"></a>
<a id="trace-26394"></a>
<a id="trace-26396"></a>
<a id="trace-26410"></a>
<a id="trace-26412"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26440"></a>
<a id="trace-26442"></a>
<a id="trace-26451"></a>
<a id="trace-26453"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26481"></a>
<a id="trace-26483"></a>
- 269.80s–288.80s (×68), actor 5, squad 0 (trace 25583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 25338. Next observer evidence: {'until': 270.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5513854453046125, 'next_transition': 25687}.
<a id="trace-3878"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (events line 3878): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25879"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (trace 25879): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.20s, trace 25879. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5603}.
<a id="trace-4263"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (events line 4263): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26499}.
<a id="trace-26490"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 26490): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.00s, trace 26490. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26499}.
<a id="trace-26499"></a>
<a id="trace-26501"></a>
<a id="trace-26509"></a>
<a id="trace-26511"></a>
<a id="trace-26588"></a>
<a id="trace-26590"></a>
<a id="trace-26622"></a>
<a id="trace-26624"></a>
<a id="trace-26645"></a>
<a id="trace-26647"></a>
<a id="trace-26662"></a>
<a id="trace-26664"></a>
<a id="trace-26675"></a>
<a id="trace-26677"></a>
<a id="trace-26732"></a>
<a id="trace-26734"></a>
- 289.30s–294.80s (×16), actor 5, squad 0 (trace 26499): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.00s, trace 26490. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26509}.
<a id="trace-26799"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 26799): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 295.00s, trace 26740. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26823}.
<a id="trace-26800"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 26800): MoveTactically. Knowledge: actor memory at 295.00s, trace 26740. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26823}.
<a id="trace-26801"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 26801): traveling overwatch. Knowledge: actor memory at 295.00s, trace 26740. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26823}.
<a id="trace-26802"></a>
- 295.25s–295.25s (×1), actor 1, squad 0 (trace 26802): . Knowledge: actor memory at 295.00s, trace 26740. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26823}.
<a id="trace-26823"></a>
<a id="trace-26825"></a>
- 295.80s–295.80s (×2), actor 5, squad 0 (trace 26823): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 26741. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26843}.
<a id="trace-26843"></a>
- 296.25s–296.25s (×1), actor 1, squad 0 (trace 26843): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 295.00s, trace 26740. Next observer evidence: None.
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26922"></a>
<a id="trace-26924"></a>
<a id="trace-26948"></a>
<a id="trace-26950"></a>
<a id="trace-27002"></a>
<a id="trace-27004"></a>
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27039"></a>
<a id="trace-27041"></a>
<a id="trace-27132"></a>
<a id="trace-27134"></a>
<a id="trace-27145"></a>
<a id="trace-27147"></a>
<a id="trace-27169"></a>
<a id="trace-27171"></a>
<a id="trace-27198"></a>
<a id="trace-27200"></a>
<a id="trace-27217"></a>
<a id="trace-27219"></a>
<a id="trace-27240"></a>
<a id="trace-27242"></a>
<a id="trace-27296"></a>
<a id="trace-27298"></a>
<a id="trace-27386"></a>
<a id="trace-27388"></a>
<a id="trace-27399"></a>
<a id="trace-27401"></a>
<a id="trace-27454"></a>
<a id="trace-27456"></a>
- 296.30s–307.30s (×32), actor 5, squad 0 (trace 26901): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 26741. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26922}.
<a id="trace-27481"></a>
- 308.25s–308.25s (×1), actor 1, squad 0 (trace 27481): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 305.00s, trace 27321. Next observer evidence: {'until': 309.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6915175480707245, 'next_transition': 27559}.
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27640"></a>
<a id="trace-27642"></a>
<a id="trace-27656"></a>
<a id="trace-27658"></a>
<a id="trace-27685"></a>
<a id="trace-27687"></a>
<a id="trace-27710"></a>
<a id="trace-27712"></a>
<a id="trace-27734"></a>
<a id="trace-27736"></a>
<a id="trace-27768"></a>
<a id="trace-27770"></a>
<a id="trace-27798"></a>
<a id="trace-27800"></a>
<a id="trace-27820"></a>
<a id="trace-27822"></a>
<a id="trace-27908"></a>
<a id="trace-27910"></a>
- 309.80s–315.80s (×20), actor 5, squad 0 (trace 27559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 27322. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8174253260945719, 'next_transition': 27640}.
<a id="trace-27919"></a>
- 316.05s–316.05s (×1), actor 1, squad 0 (trace 27919): matching received arrivals: deployment leg complete. Knowledge: actor memory at 315.00s, trace 27827. Next observer evidence: {'until': 316.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27937}.
<a id="trace-27937"></a>
<a id="trace-27939"></a>
- 316.30s–316.30s (×2), actor 5, squad 0 (trace 27937): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 27828. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039387085446883664, 'next_transition': 28028}.
<a id="trace-27944"></a>
- 316.30s–316.30s (×1), actor 1, squad 0 (trace 27944): Reorganise: completed/failed drill. Knowledge: actor memory at 315.00s, trace 27827. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039387085446883664, 'next_transition': 28028}.
<a id="trace-27947"></a>
- 316.30s–316.30s (×1), actor 1, squad 0 (trace 27947): ReactToContact: cover and return fire. Knowledge: actor memory at 315.00s, trace 27827. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039387085446883664, 'next_transition': 28028}.
<a id="trace-27948"></a>
- 316.30s–316.30s (×1), actor 1, squad 0 (trace 27948): bounding overwatch. Knowledge: actor memory at 315.00s, trace 27827. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039387085446883664, 'next_transition': 28028}.
<a id="trace-27949"></a>
- 316.30s–316.30s (×1), actor 1, squad 0 (trace 27949): Reorganise complete: known contact. Knowledge: actor memory at 315.00s, trace 27827. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039387085446883664, 'next_transition': 28028}.
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28056"></a>
<a id="trace-28058"></a>
<a id="trace-28115"></a>
<a id="trace-28117"></a>
<a id="trace-28128"></a>
<a id="trace-28130"></a>
- 316.80s–319.80s (×8), actor 5, squad 0 (trace 28028): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 27828. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5100243564135537, 'next_transition': 28056}.
<a id="trace-28200"></a>
- 320.25s–320.25s (×1), actor 1, squad 0 (trace 28200): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 320.00s, trace 28136. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28330}.
<a id="trace-28201"></a>
- 320.25s–320.25s (×1), actor 1, squad 0 (trace 28201): rearward bound: one stationary suppressing element. Knowledge: actor memory at 320.00s, trace 28136. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28330}.
<a id="trace-28330"></a>
<a id="trace-28332"></a>
<a id="trace-28353"></a>
<a id="trace-28355"></a>
<a id="trace-28372"></a>
<a id="trace-28374"></a>
<a id="trace-28393"></a>
<a id="trace-28395"></a>
<a id="trace-28408"></a>
<a id="trace-28410"></a>
<a id="trace-28426"></a>
<a id="trace-28428"></a>
<a id="trace-28454"></a>
<a id="trace-28456"></a>
<a id="trace-28493"></a>
<a id="trace-28495"></a>
<a id="trace-28525"></a>
<a id="trace-28527"></a>
<a id="trace-28630"></a>
<a id="trace-28632"></a>
<a id="trace-28673"></a>
<a id="trace-28675"></a>
<a id="trace-28769"></a>
<a id="trace-28771"></a>
<a id="trace-28817"></a>
<a id="trace-28819"></a>
<a id="trace-28853"></a>
<a id="trace-28855"></a>
<a id="trace-28885"></a>
<a id="trace-28887"></a>
- 320.80s–328.30s (×30), actor 5, squad 0 (trace 28330): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 28137. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28353}.
<a id="trace-5602"></a>
- 331.75s–331.75s (×1), actor 6, squad 0 (events line 5602): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37805260803814633, 'next_transition': 29120}.
<a id="trace-5603"></a>
- 331.75s–331.75s (×1), actor 6, squad 1 (events line 5603): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 333.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29160}.
<a id="trace-29092"></a>
- 331.75s–331.75s (×1), actor 6, squad 0 (trace 29092): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 331.75s, trace 29092. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37805260803814633, 'next_transition': 29120}.
<a id="trace-29093"></a>
- 331.75s–331.75s (×1), actor 6, squad 0 (trace 29093): renew committed intent (75 s lifetime). Knowledge: actor memory at 331.75s, trace 29093. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37805260803814633, 'next_transition': 29120}.
<a id="trace-29094"></a>
- 331.75s–331.75s (×1), actor 6, squad 1 (trace 29094): renew committed intent (75 s lifetime). Knowledge: actor memory at 331.75s, trace 29094. Next observer evidence: {'until': 333.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29160}.
<a id="trace-29120"></a>
<a id="trace-29122"></a>
<a id="trace-29146"></a>
<a id="trace-29148"></a>
<a id="trace-29179"></a>
<a id="trace-29181"></a>
<a id="trace-29279"></a>
<a id="trace-29281"></a>
<a id="trace-29345"></a>
<a id="trace-29347"></a>
<a id="trace-29430"></a>
- 332.30s–337.30s (×11), actor 6, squad 0 (trace 29120): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 331.75s, trace 29094. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31009849689700014, 'next_transition': 29146}.
<a id="trace-29160"></a>
- 333.65s–333.65s (×1), actor 11, squad 1 (trace 29160): MoveTactically. Knowledge: actor memory at 330.00s, trace 28964. Next observer evidence: None.
<a id="trace-29161"></a>
- 333.65s–333.65s (×1), actor 11, squad 1 (trace 29161): received platoon directive. Knowledge: actor memory at 330.00s, trace 28964. Next observer evidence: None.
<a id="trace-29165"></a>
- 333.70s–333.70s (×1), actor 11, squad 1 (trace 29165): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 330.00s, trace 28964. Next observer evidence: {'until': 340, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29640}.
<a id="trace-29484"></a>
- 338.15s–338.15s (×1), actor 1, squad 0 (trace 29484): NeedSupport. Knowledge: actor memory at 335.00s, trace 29209. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19216666666666646, 'next_transition': 29498}.
<a id="trace-29498"></a>
<a id="trace-29500"></a>
<a id="trace-29580"></a>
<a id="trace-29582"></a>
<a id="trace-30458"></a>
<a id="trace-30460"></a>
<a id="trace-30514"></a>
<a id="trace-30516"></a>
<a id="trace-30564"></a>
<a id="trace-30566"></a>
<a id="trace-30592"></a>
<a id="trace-30615"></a>
<a id="trace-30617"></a>
<a id="trace-30703"></a>
<a id="trace-30705"></a>
<a id="trace-30733"></a>
<a id="trace-30735"></a>
<a id="trace-30762"></a>
<a id="trace-30764"></a>
<a id="trace-30790"></a>
<a id="trace-30792"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30907"></a>
<a id="trace-30909"></a>
<a id="trace-30932"></a>
<a id="trace-30934"></a>
<a id="trace-30964"></a>
<a id="trace-30966"></a>
<a id="trace-30984"></a>
<a id="trace-30986"></a>
<a id="trace-31014"></a>
<a id="trace-31016"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31117"></a>
<a id="trace-31119"></a>
<a id="trace-31146"></a>
<a id="trace-31148"></a>
<a id="trace-31174"></a>
<a id="trace-31176"></a>
<a id="trace-31217"></a>
<a id="trace-31219"></a>
- 338.30s–359.30s (×43), actor 6, squad 0 (trace 29498): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 335.00s, trace 29210. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2302933771820493, 'next_transition': 29580}.
<a id="trace-29640"></a>
- 340.05s–340.05s (×1), actor 11, squad 1 (trace 29640): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 340.00s, trace 29621. Next observer evidence: None.
<a id="trace-29641"></a>
- 340.05s–340.05s (×1), actor 11, squad 1 (trace 29641): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 340.00s, trace 29621. Next observer evidence: None.
<a id="trace-30402"></a>
- 340.10s–340.10s (×1), actor 11, squad 1 (trace 30402): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 340.00s, trace 29621. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.9299635092834375, 'next_transition': 5795}.
<a id="trace-5795"></a>
- 342.95s–342.95s (×1), actor 6, squad 1 (events line 5795): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30583"></a>
- 342.95s–342.95s (×1), actor 6, squad 1 (trace 30583): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234878 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.95s, trace 30583. Next observer evidence: {'until': 344.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.30005776243361, 'next_transition': 30636}.
<a id="trace-30584"></a>
- 342.95s–342.95s (×1), actor 6, squad 1 (trace 30584): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234878 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.95s, trace 30584. Next observer evidence: {'until': 344.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.30005776243361, 'next_transition': 30636}.
<a id="trace-30636"></a>
- 344.85s–344.85s (×1), actor 11, squad 1 (trace 30636): ReactToContact: cover and return fire. Knowledge: actor memory at 340.00s, trace 29621. Next observer evidence: {'until': 348, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30784}.
<a id="trace-30637"></a>
<a id="trace-30784"></a>
- 344.85s–348.10s (×2), actor 11, squad 1 (trace 30637): new contact inside 100 m. Knowledge: actor memory at 340.00s, trace 29621. Next observer evidence: {'until': 348, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30784}.
<a id="trace-30945"></a>
- 351.60s–351.60s (×1), actor 11, squad 1 (trace 30945): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 350.00s, trace 30849. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-30946"></a>
- 351.60s–351.60s (×1), actor 11, squad 1 (trace 30946): rearward bound: one stationary suppressing element. Knowledge: actor memory at 350.00s, trace 30849. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

331 matched order/radio deliveries; 459 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.486s; maximum 5.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3795: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3801: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3802: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3803: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3804: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3805: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3806: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3809: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3810: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 4001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 4002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4438: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4443: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4444: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4445: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4446: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4447: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4448: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4449: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4450: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4451: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4452: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4453: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4454: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4719: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4721: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4723: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4724: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4729: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4730: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4731: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4732: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4733: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4734: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4735: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4736: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4737: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4738: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4739: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4740: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6595: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6597: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6599: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6600: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6605: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6606: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6607: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6608: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6609: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6610: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6611: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6612: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6613: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6614: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6615: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6616: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6693: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6694: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7080: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7081: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7082: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7084: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7085: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 7088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 7089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7090: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7091: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7092: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7093: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7094: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7095: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7096: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7097: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7098: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7099: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 7100: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 7101: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7631: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7632: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7633: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7635: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7636: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 7639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 7640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7641: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7642: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7643: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7644: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7645: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7646: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7647: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7648: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7649: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7650: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 7651: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 7652: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8338: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8339: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8341: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8342: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8347: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8348: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8349: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8350: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8351: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8352: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8353: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8354: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8355: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8356: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8357: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8358: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8797: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8798: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8800: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8801: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8806: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8807: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8808: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8809: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8810: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8811: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8812: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8813: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8814: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8815: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8816: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8817: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9256: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9257: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9259: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9260: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 9263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 9264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9265: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9266: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9267: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9268: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9269: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9270: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9271: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9272: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9273: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9274: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 9275: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 9276: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9411: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9412: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9491: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9492: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9494: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9495: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 9498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 9499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9500: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9501: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9502: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9503: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9504: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9505: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9506: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9507: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9508: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9509: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 9510: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 9511: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9933: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9934: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9936: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9937: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9939: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9942: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9943: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9944: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9945: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9946: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9947: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9948: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9949: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9950: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9951: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9952: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9953: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10550: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10551: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10553: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10554: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10556: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 10557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 10558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10559: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10560: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10561: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10562: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10563: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10564: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10565: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10566: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10567: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10568: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 10569: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 10570: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10947: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 10948: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10950: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10951: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 10953: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 10954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 10955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10956: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10957: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10958: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10959: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10960: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10961: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10962: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10963: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10964: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10965: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 10966: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 10967: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11266: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11267: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11269: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11270: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11272: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 11273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 11274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11275: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11276: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11277: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11278: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11279: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11280: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11281: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11282: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11283: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11284: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 11285: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 11286: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11538: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11540: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11541: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 11543: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 11544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 11545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11546: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11547: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11548: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11549: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11550: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11551: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11552: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11553: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11554: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11555: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 11556: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 11557: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11762: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11764: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 11765: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 11766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 11767: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 11768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11770: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11771: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11772: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11773: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 11774: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11775: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 11776: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11777: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 11778: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 11779: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 11780: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 11781: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11982: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11984: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11985: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 11987: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 11988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 11989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11990: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11991: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11992: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11993: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11994: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11995: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11996: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11997: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11998: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11999: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 12000: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 12001: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 12187: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12202: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12204: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12205: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 12207: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 12208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 12209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12210: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12211: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12212: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12213: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12214: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12215: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12216: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12217: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 12218: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 12219: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 12220: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 12221: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12514: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12516: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12517: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 12519: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 12520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 12521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12522: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12523: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12524: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12525: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12526: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12527: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12528: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12529: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12530: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 12531: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 12532: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 12533: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12843: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12845: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12846: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 12848: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 12849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 12850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12851: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12852: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12853: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12854: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12855: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12856: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12857: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12858: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 12859: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 12860: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 12861: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 12862: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13139: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13141: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13142: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13144: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 13145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 13146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13147: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13148: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13149: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13150: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13151: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13152: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13153: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13154: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13155: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13156: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 13157: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 13158: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13620: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13622: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13623: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13625: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 13626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 13627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13628: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13629: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13630: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13631: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13632: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13633: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13634: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13635: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13636: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13637: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 13638: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 13639: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14049: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14051: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14052: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 14053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14054: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 14055: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 14056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14057: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14058: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14059: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14060: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14061: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14062: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14063: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14064: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14065: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14066: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 14067: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 14068: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 14211: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14685: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14687: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14688: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 14689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14690: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 14691: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 14692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14693: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14694: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14695: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14696: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14697: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14698: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14699: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14700: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14701: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14702: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 14703: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 14704: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17338: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17340: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17341: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17343: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 17344: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 17345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17346: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17347: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17348: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17349: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17350: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17351: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17352: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17353: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17354: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17355: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 17356: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 17357: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 18082: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 18084: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18085: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 18086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18087: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 18088: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 18089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18090: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18091: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 18092: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18093: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18094: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18095: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18096: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18097: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18098: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18099: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 18100: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 18101: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 18525: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 18526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 18527: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 18528: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 18529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 18530: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 18531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18532: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18533: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18534: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18535: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18536: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18537: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18538: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18539: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18540: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18541: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 18542: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 18543: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 18764: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 18765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18766: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 18767: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 18768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 18769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18770: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18771: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18772: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18773: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18774: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18775: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18776: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18777: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18778: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18779: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 18780: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18781: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18991: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18993: estimate 15.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18994: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 18996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18997: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18998: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18999: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 19000: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 19001: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 19002: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 19003: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 19004: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 19005: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 19006: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 19007: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 19008: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 19202: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 19203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 19204: estimate 15.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 19205: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 19206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 19207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 19208: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 19209: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 19210: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 19211: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 19212: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 19213: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 19214: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 19215: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 19216: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19217: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 19218: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 19219: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 19433: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 19434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 19435: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 19436: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 19437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 19438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19439: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19440: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 19441: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19442: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19443: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19444: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19445: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19446: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19447: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19448: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 19449: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 19450: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 19744: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 19802: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 19803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19804: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19805: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 19806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 19807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19808: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19809: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 19810: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19811: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19812: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19813: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19814: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19815: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19816: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19817: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 19818: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 19819: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 20065: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 20066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 20067: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20068: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 20069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 20070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 20071: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 20072: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 20073: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 20074: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 20075: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 20076: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 20077: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 20078: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 20079: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 20080: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 20081: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 20082: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 20383: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 20384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 20385: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20386: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 20387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 20388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20389: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 20390: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 20391: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 20392: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 20393: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 20394: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 20395: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 20396: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 20397: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 20398: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 20399: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 20400: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 20645: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 20646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 20647: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 20648: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 20649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 20651: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 20652: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 20653: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 20654: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 20655: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 20656: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 20657: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 20658: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 20659: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 20660: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 20661: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 20662: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 20866: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 20867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 20868: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 20869: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 20870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 20871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 20872: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 20873: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 20874: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 20875: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 20876: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 20877: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 20878: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 20879: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 20880: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 20881: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 20882: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 20883: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 21072: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21074: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21075: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 21076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 21077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21078: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21079: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21080: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21081: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21082: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21083: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21084: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21085: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21086: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21087: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 21088: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 21089: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 21167: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 21168: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 21169: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 21293: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 21294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 21295: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21296: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 21297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 21298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 21299: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21300: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 21301: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21302: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21303: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21304: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21305: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21306: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21307: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21308: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 21309: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 21310: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 22844: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 22845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22846: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22847: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 22849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22850: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22851: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22852: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22853: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22854: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22855: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22856: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22857: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22858: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22859: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22860: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22861: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 23086: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 23087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23088: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23089: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 23091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23092: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23093: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23094: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23095: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23096: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23097: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23098: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23099: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23100: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23101: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 23102: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 23103: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23104: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23105: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 23327: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 23328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23329: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 23330: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 23331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23333: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23334: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23335: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23336: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23337: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23338: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23339: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23340: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23341: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23342: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 23343: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 23344: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 23564: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 23565: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23566: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 23567: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 23568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 23569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23570: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23571: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23572: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23573: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23574: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23575: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23576: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23577: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23578: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23579: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 23580: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 23581: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 23792: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 23793: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23794: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23795: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 23796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 23797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23798: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23799: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23800: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23801: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23802: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23803: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23804: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23805: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23806: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23807: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 23808: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23809: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 24019: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 24020: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 24021: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 24022: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 24023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 24024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 24025: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24026: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 24027: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24028: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 24029: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24030: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 24031: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24032: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24033: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24034: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 24035: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 24036: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 24251: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 24252: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 24253: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 24254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 24255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 24256: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24257: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24258: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24259: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24260: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24261: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24262: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24263: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24264: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24265: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 24266: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 24267: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24557: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24558: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 24559: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 24560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 24561: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24562: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24563: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24564: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24565: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24566: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24567: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24568: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24569: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24570: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24571: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 24572: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 24573: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24809: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24810: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24811: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 11, trace 24813: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24814: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24815: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24816: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24817: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24818: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24819: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24820: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24821: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24822: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24823: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24824: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24825: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 25035: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25036: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25037: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 25038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 11, trace 25039: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25040: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25041: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25042: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25043: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25044: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25045: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25046: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25047: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25048: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25049: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 25050: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 25051: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 25337: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25338: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25339: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 25340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 11, trace 25341: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 25342: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25343: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25344: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25345: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25346: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25347: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25348: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25349: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25350: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25351: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 25352: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 25353: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25590: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25591: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25592: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 25593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 11, trace 25594: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25595: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25596: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25597: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25598: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25599: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25600: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25601: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25602: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25603: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25604: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 25605: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 25606: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 25861: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25862: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25863: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 25864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 11, trace 25865: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 25866: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25867: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25868: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25869: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25870: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25871: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25872: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25873: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25874: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25875: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 25876: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 25877: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 25879: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 26092: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26093: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 26094: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 26095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 11, trace 26096: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 26097: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26098: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26099: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26100: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26101: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26102: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26103: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26104: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26105: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26106: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 26107: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 26108: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 26302: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26303: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 26304: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 26305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 11, trace 26306: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 26307: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26308: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26309: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26310: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26311: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26312: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26313: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26314: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26315: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26316: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 26317: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 26318: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 26490: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 26517: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26518: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 26519: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 26520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 11, trace 26521: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 26522: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26523: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26524: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26525: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 26526: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26527: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26528: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26529: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26530: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26531: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 26532: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 26533: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 26740: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 26741: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 26742: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 26743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 11, trace 26744: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 26745: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26746: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26747: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26748: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 26749: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26750: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26751: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26752: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26753: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26754: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 26755: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 26756: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 27062: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27063: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 27064: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 27065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 11, trace 27066: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27067: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27068: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27069: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27070: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27071: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27072: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27073: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27074: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27075: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27076: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 27077: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 27078: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 27321: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27322: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 27323: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 27324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 11, trace 27325: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 27326: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27327: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27328: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27329: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27330: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27331: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27332: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27333: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27334: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27335: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 27336: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 27337: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 27573: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27574: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 27575: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 27576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 11, trace 27577: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 27578: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27579: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27580: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27581: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27582: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27583: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27584: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27585: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27586: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27587: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 27588: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 27589: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 27827: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 27828: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 27829: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 27830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 11, trace 27831: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 27832: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 27833: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 27834: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 27835: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 27836: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 27837: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 27838: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27839: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27840: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27841: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 27842: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 27843: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 28136: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 28137: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 28138: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 28139: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 11, trace 28140: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 28141: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 28142: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 28143: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 28144: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 28145: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 28146: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 28147: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 28148: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 28149: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 28150: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 28151: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 28152: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 28548: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28549: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 28550: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 28551: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 11, trace 28552: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28553: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28554: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28555: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28556: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28557: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28558: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28559: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28560: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28561: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28562: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 28563: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 28564: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 28961: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 28962: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 28963: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 11, trace 28964: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 28965: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28966: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28967: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28968: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28969: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28970: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28971: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28972: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28973: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28974: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 28975: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 28976: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 331.75s leader 6, trace 29092: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 331.75s leader 6, trace 29093: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 331.75s leader 6, trace 29094: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 29209: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 29210: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 29211: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 11, trace 29212: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 29213: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29214: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29215: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29216: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 29217: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29218: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 29219: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29220: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 29221: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29222: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 29223: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 29224: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 29618: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 29619: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 29620: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 11, trace 29621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 29622: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29623: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29624: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29625: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 29626: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29627: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 29628: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29629: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29630: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29631: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 29632: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 29633: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.95s leader 6, trace 30583: estimate 12.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.95s leader 6, trace 30584: estimate 12.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30643: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 30644: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 30645: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 11, trace 30646: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30647: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30648: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30649: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30650: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30651: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30652: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30653: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30654: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30655: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30656: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 30657: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30658: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30846: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 30847: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 30848: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 11, trace 30849: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30850: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30851: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30852: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30853: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30854: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30855: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30856: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30857: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30858: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30859: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 30860: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30861: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 31035: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 31036: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 31037: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 11, trace 31038: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 31039: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31040: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 31041: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31042: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 31043: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 31044: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31045: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 31046: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31047: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31048: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 31049: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 31050: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 31265: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 31266: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 31267: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 11, trace 31268: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 31269: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 31270: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 31271: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 31272: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 31273: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 31274: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 31275: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 31276: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 31277: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 31278: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 31279: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 31280: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Ash incapacitated
- 1: Dane killed in action
- 1: Cole incapacitated
- 1: Tern killed in action
- 1: Iven killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
