# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/11/109/good-azure/battle-109-1789673879926765275`

## Battle summary

**Draw** · 360 s · 71 shots.

### Turning points

- 22.4s, squad 4: contact (events line 225). First recorded contact.
- 30.2s, squad 0: withdrawal ([trace 2183](#trace-2183)). 70.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 45.9s, squad 0: help call ([trace 3175](#trace-3175)). No completion observed before termination.
- 77.1s, squad 0: withdrawal ([trace 4723](#trace-4723)). 89.8s, squad 0: advanced tactically.
- 88.8s, squad 0: help call ([trace 5251](#trace-5251)). No completion observed before termination.
- 139.2s, squad 0: withdrawal ([trace 7452](#trace-7452)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 0 shots, 1/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 71 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.6s, squad 0 chose took cover and returned fire ([trace 1896](#trace-1896)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
- 31.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.450188 retreat threshold=0.500000 initiative=delegated ([trace 2461](#trace-2461)). Following evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08548658114321561, 'next_transition': 2470}.

### Communication

174 matched deliveries (mean 0.26s, max 2.00s); 244 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.40s, squad 4, contact, evidence events line 225: First recorded contact; .
- 30.20s, squad 0, withdrawal, evidence 2183: BreakContact: believed ratio at least two without superiority; 70.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 45.85s, squad 0, help call, evidence 3175: NeedSupport; No completion observed before termination.
- 77.05s, squad 0, withdrawal, evidence 4723: Withdraw to received rally; 89.8s, squad 0: advanced tactically.
- 88.75s, squad 0, help call, evidence 5251: NeedSupport; No completion observed before termination.
- 139.20s, squad 0, withdrawal, evidence 7452: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200233897180495, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999850983113997, 'next_transition': 431}.
<a id="trace-519"></a>
<a id="trace-753"></a>
<a id="trace-777"></a>
<a id="trace-799"></a>
<a id="trace-843"></a>
<a id="trace-874"></a>
<a id="trace-890"></a>
<a id="trace-903"></a>
<a id="trace-987"></a>
<a id="trace-1000"></a>
<a id="trace-1015"></a>
<a id="trace-1036"></a>
<a id="trace-1071"></a>
<a id="trace-1088"></a>
<a id="trace-1098"></a>
<a id="trace-1130"></a>
<a id="trace-1208"></a>
<a id="trace-1220"></a>
<a id="trace-1353"></a>
<a id="trace-1375"></a>
<a id="trace-1391"></a>
<a id="trace-1434"></a>
<a id="trace-1451"></a>
<a id="trace-1474"></a>
<a id="trace-1554"></a>
<a id="trace-1570"></a>
<a id="trace-1588"></a>
<a id="trace-1599"></a>
<a id="trace-1621"></a>
<a id="trace-1636"></a>
<a id="trace-1748"></a>
<a id="trace-1754"></a>
<a id="trace-1783"></a>
<a id="trace-1863"></a>
<a id="trace-1872"></a>
<a id="trace-1887"></a>
<a id="trace-2015"></a>
<a id="trace-2025"></a>
<a id="trace-2049"></a>
<a id="trace-2066"></a>
<a id="trace-2096"></a>
<a id="trace-2107"></a>
<a id="trace-2444"></a>
<a id="trace-2451"></a>
<a id="trace-2472"></a>
<a id="trace-2489"></a>
<a id="trace-2506"></a>
<a id="trace-2520"></a>
<a id="trace-2539"></a>
<a id="trace-2557"></a>
<a id="trace-2575"></a>
<a id="trace-2586"></a>
<a id="trace-2665"></a>
<a id="trace-2675"></a>
<a id="trace-2706"></a>
<a id="trace-2716"></a>
<a id="trace-2723"></a>
<a id="trace-2737"></a>
<a id="trace-2748"></a>
<a id="trace-2765"></a>
<a id="trace-2773"></a>
<a id="trace-2854"></a>
<a id="trace-2872"></a>
<a id="trace-2884"></a>
<a id="trace-2894"></a>
<a id="trace-2927"></a>
<a id="trace-2935"></a>
<a id="trace-2942"></a>
<a id="trace-3065"></a>
<a id="trace-3077"></a>
<a id="trace-3153"></a>
<a id="trace-3174"></a>
<a id="trace-3196"></a>
<a id="trace-3201"></a>
<a id="trace-3225"></a>
<a id="trace-3244"></a>
<a id="trace-3262"></a>
<a id="trace-3377"></a>
<a id="trace-3390"></a>
<a id="trace-3402"></a>
<a id="trace-3409"></a>
<a id="trace-3426"></a>
<a id="trace-3452"></a>
<a id="trace-3461"></a>
<a id="trace-3494"></a>
<a id="trace-3568"></a>
<a id="trace-3576"></a>
<a id="trace-3596"></a>
<a id="trace-3619"></a>
<a id="trace-3630"></a>
<a id="trace-3649"></a>
<a id="trace-3799"></a>
<a id="trace-3820"></a>
<a id="trace-3838"></a>
<a id="trace-3918"></a>
<a id="trace-3967"></a>
<a id="trace-3978"></a>
<a id="trace-3998"></a>
<a id="trace-4010"></a>
<a id="trace-4023"></a>
<a id="trace-4031"></a>
<a id="trace-4140"></a>
<a id="trace-4151"></a>
<a id="trace-4168"></a>
<a id="trace-4186"></a>
<a id="trace-4209"></a>
<a id="trace-4238"></a>
<a id="trace-4257"></a>
<a id="trace-4266"></a>
<a id="trace-4430"></a>
<a id="trace-4454"></a>
<a id="trace-4486"></a>
<a id="trace-4506"></a>
<a id="trace-4545"></a>
<a id="trace-4574"></a>
<a id="trace-4596"></a>
<a id="trace-4606"></a>
<a id="trace-4684"></a>
<a id="trace-4690"></a>
<a id="trace-4704"></a>
<a id="trace-4839"></a>
<a id="trace-4870"></a>
<a id="trace-4900"></a>
<a id="trace-4923"></a>
<a id="trace-5005"></a>
<a id="trace-5014"></a>
<a id="trace-5041"></a>
<a id="trace-5053"></a>
<a id="trace-5067"></a>
<a id="trace-5078"></a>
<a id="trace-5088"></a>
<a id="trace-5189"></a>
<a id="trace-5209"></a>
<a id="trace-5226"></a>
<a id="trace-5230"></a>
<a id="trace-5241"></a>
<a id="trace-5249"></a>
<a id="trace-5266"></a>
<a id="trace-5271"></a>
<a id="trace-5490"></a>
<a id="trace-5516"></a>
<a id="trace-5571"></a>
<a id="trace-5577"></a>
<a id="trace-5592"></a>
<a id="trace-5598"></a>
<a id="trace-5757"></a>
<a id="trace-5774"></a>
<a id="trace-5791"></a>
<a id="trace-5800"></a>
<a id="trace-5822"></a>
<a id="trace-5844"></a>
<a id="trace-5928"></a>
<a id="trace-5938"></a>
<a id="trace-5952"></a>
<a id="trace-5964"></a>
<a id="trace-5977"></a>
<a id="trace-5989"></a>
<a id="trace-5997"></a>
<a id="trace-6003"></a>
<a id="trace-6019"></a>
<a id="trace-6027"></a>
<a id="trace-6111"></a>
<a id="trace-6128"></a>
<a id="trace-6138"></a>
<a id="trace-6161"></a>
<a id="trace-6175"></a>
<a id="trace-6186"></a>
<a id="trace-6199"></a>
<a id="trace-6205"></a>
<a id="trace-6286"></a>
<a id="trace-6294"></a>
<a id="trace-6306"></a>
<a id="trace-6317"></a>
<a id="trace-6333"></a>
<a id="trace-6446"></a>
<a id="trace-6459"></a>
<a id="trace-6482"></a>
<a id="trace-6498"></a>
<a id="trace-6585"></a>
<a id="trace-6596"></a>
<a id="trace-6610"></a>
<a id="trace-6620"></a>
<a id="trace-6636"></a>
<a id="trace-6668"></a>
<a id="trace-6681"></a>
<a id="trace-6691"></a>
<a id="trace-6767"></a>
<a id="trace-6801"></a>
<a id="trace-6837"></a>
<a id="trace-6844"></a>
<a id="trace-6866"></a>
<a id="trace-7054"></a>
<a id="trace-7065"></a>
<a id="trace-7075"></a>
<a id="trace-7088"></a>
<a id="trace-7098"></a>
<a id="trace-7118"></a>
<a id="trace-7192"></a>
<a id="trace-7201"></a>
<a id="trace-7211"></a>
<a id="trace-7220"></a>
<a id="trace-7232"></a>
<a id="trace-7246"></a>
<a id="trace-7254"></a>
<a id="trace-7262"></a>
<a id="trace-7278"></a>
<a id="trace-7287"></a>
<a id="trace-7365"></a>
<a id="trace-7375"></a>
<a id="trace-7389"></a>
<a id="trace-7402"></a>
<a id="trace-7415"></a>
<a id="trace-7439"></a>
<a id="trace-7449"></a>
<a id="trace-7514"></a>
<a id="trace-7521"></a>
<a id="trace-7606"></a>
<a id="trace-7628"></a>
<a id="trace-7657"></a>
<a id="trace-7672"></a>
<a id="trace-7679"></a>
<a id="trace-7690"></a>
<a id="trace-7699"></a>
<a id="trace-7714"></a>
<a id="trace-7729"></a>
<a id="trace-7825"></a>
<a id="trace-7831"></a>
<a id="trace-7843"></a>
<a id="trace-7849"></a>
<a id="trace-7863"></a>
<a id="trace-7875"></a>
<a id="trace-7885"></a>
<a id="trace-7898"></a>
<a id="trace-7975"></a>
<a id="trace-7990"></a>
<a id="trace-8119"></a>
<a id="trace-8150"></a>
<a id="trace-8178"></a>
<a id="trace-8193"></a>
<a id="trace-8273"></a>
<a id="trace-8298"></a>
<a id="trace-8317"></a>
<a id="trace-8328"></a>
<a id="trace-8335"></a>
<a id="trace-8349"></a>
<a id="trace-8357"></a>
<a id="trace-8452"></a>
<a id="trace-8524"></a>
<a id="trace-8557"></a>
<a id="trace-8597"></a>
<a id="trace-8604"></a>
<a id="trace-8622"></a>
<a id="trace-8636"></a>
<a id="trace-8711"></a>
<a id="trace-8738"></a>
<a id="trace-8755"></a>
<a id="trace-8763"></a>
<a id="trace-8775"></a>
<a id="trace-8798"></a>
<a id="trace-8805"></a>
<a id="trace-8884"></a>
<a id="trace-8908"></a>
<a id="trace-8917"></a>
<a id="trace-8996"></a>
<a id="trace-9012"></a>
<a id="trace-9027"></a>
<a id="trace-9043"></a>
<a id="trace-9055"></a>
<a id="trace-9130"></a>
<a id="trace-9141"></a>
<a id="trace-9155"></a>
<a id="trace-9170"></a>
<a id="trace-9181"></a>
<a id="trace-9212"></a>
<a id="trace-9220"></a>
<a id="trace-9230"></a>
<a id="trace-9316"></a>
<a id="trace-9333"></a>
<a id="trace-9341"></a>
<a id="trace-9348"></a>
<a id="trace-9370"></a>
<a id="trace-9380"></a>
<a id="trace-9397"></a>
<a id="trace-9411"></a>
<a id="trace-9427"></a>
<a id="trace-9447"></a>
<a id="trace-9545"></a>
<a id="trace-9553"></a>
<a id="trace-9571"></a>
<a id="trace-9584"></a>
<a id="trace-9607"></a>
<a id="trace-9612"></a>
<a id="trace-9686"></a>
<a id="trace-9701"></a>
<a id="trace-9715"></a>
<a id="trace-9734"></a>
<a id="trace-9751"></a>
<a id="trace-9758"></a>
<a id="trace-9836"></a>
<a id="trace-9856"></a>
<a id="trace-9871"></a>
<a id="trace-9879"></a>
<a id="trace-9890"></a>
<a id="trace-9895"></a>
<a id="trace-9970"></a>
<a id="trace-9978"></a>
<a id="trace-9996"></a>
<a id="trace-10005"></a>
<a id="trace-10024"></a>
<a id="trace-10115"></a>
<a id="trace-10124"></a>
<a id="trace-10131"></a>
<a id="trace-10148"></a>
<a id="trace-10158"></a>
<a id="trace-10164"></a>
<a id="trace-10176"></a>
<a id="trace-10184"></a>
<a id="trace-10253"></a>
<a id="trace-10269"></a>
<a id="trace-10275"></a>
<a id="trace-10284"></a>
<a id="trace-10290"></a>
<a id="trace-10300"></a>
<a id="trace-10307"></a>
<a id="trace-10320"></a>
<a id="trace-10326"></a>
<a id="trace-10396"></a>
<a id="trace-10406"></a>
<a id="trace-10416"></a>
<a id="trace-10425"></a>
<a id="trace-10432"></a>
<a id="trace-10437"></a>
<a id="trace-10446"></a>
<a id="trace-10452"></a>
<a id="trace-10538"></a>
<a id="trace-10545"></a>
<a id="trace-10564"></a>
<a id="trace-10572"></a>
<a id="trace-10580"></a>
<a id="trace-10590"></a>
<a id="trace-10596"></a>
<a id="trace-10608"></a>
<a id="trace-10613"></a>
<a id="trace-10684"></a>
<a id="trace-10699"></a>
<a id="trace-10705"></a>
<a id="trace-10713"></a>
<a id="trace-10720"></a>
<a id="trace-10753"></a>
<a id="trace-10824"></a>
<a id="trace-10833"></a>
<a id="trace-10844"></a>
<a id="trace-10850"></a>
<a id="trace-10858"></a>
<a id="trace-10863"></a>
<a id="trace-10871"></a>
<a id="trace-10879"></a>
<a id="trace-10890"></a>
<a id="trace-10897"></a>
<a id="trace-10984"></a>
<a id="trace-10990"></a>
<a id="trace-11000"></a>
<a id="trace-11007"></a>
<a id="trace-11017"></a>
<a id="trace-11023"></a>
<a id="trace-11033"></a>
<a id="trace-11040"></a>
<a id="trace-11109"></a>
<a id="trace-11118"></a>
<a id="trace-11127"></a>
<a id="trace-11133"></a>
<a id="trace-11146"></a>
<a id="trace-11159"></a>
<a id="trace-11166"></a>
<a id="trace-11177"></a>
<a id="trace-11183"></a>
<a id="trace-11263"></a>
<a id="trace-11271"></a>
<a id="trace-11279"></a>
<a id="trace-11286"></a>
<a id="trace-11291"></a>
<a id="trace-11300"></a>
<a id="trace-11307"></a>
<a id="trace-11319"></a>
<a id="trace-11324"></a>
<a id="trace-11398"></a>
<a id="trace-11406"></a>
<a id="trace-11414"></a>
<a id="trace-11423"></a>
<a id="trace-11439"></a>
<a id="trace-11452"></a>
<a id="trace-11463"></a>
<a id="trace-11468"></a>
<a id="trace-11539"></a>
<a id="trace-11547"></a>
<a id="trace-11561"></a>
<a id="trace-11569"></a>
<a id="trace-11587"></a>
<a id="trace-11595"></a>
<a id="trace-11608"></a>
<a id="trace-11614"></a>
<a id="trace-11684"></a>
<a id="trace-11702"></a>
<a id="trace-11708"></a>
<a id="trace-11716"></a>
<a id="trace-11721"></a>
<a id="trace-11730"></a>
<a id="trace-11738"></a>
<a id="trace-11758"></a>
<a id="trace-11828"></a>
<a id="trace-11844"></a>
<a id="trace-11852"></a>
<a id="trace-11862"></a>
<a id="trace-11875"></a>
<a id="trace-11881"></a>
<a id="trace-11974"></a>
<a id="trace-11988"></a>
<a id="trace-11999"></a>
<a id="trace-12005"></a>
<a id="trace-12023"></a>
<a id="trace-12035"></a>
<a id="trace-12123"></a>
<a id="trace-12131"></a>
<a id="trace-12138"></a>
<a id="trace-12144"></a>
<a id="trace-12153"></a>
<a id="trace-12160"></a>
<a id="trace-12250"></a>
<a id="trace-12257"></a>
<a id="trace-12267"></a>
<a id="trace-12282"></a>
<a id="trace-12289"></a>
<a id="trace-12302"></a>
<a id="trace-12313"></a>
<a id="trace-12319"></a>
<a id="trace-12397"></a>
<a id="trace-12408"></a>
<a id="trace-12415"></a>
<a id="trace-12423"></a>
<a id="trace-12440"></a>
<a id="trace-12449"></a>
<a id="trace-12459"></a>
<a id="trace-12533"></a>
<a id="trace-12540"></a>
<a id="trace-12550"></a>
<a id="trace-12556"></a>
<a id="trace-12569"></a>
<a id="trace-12578"></a>
<a id="trace-12589"></a>
<a id="trace-12600"></a>
<a id="trace-12608"></a>
<a id="trace-12679"></a>
<a id="trace-12686"></a>
<a id="trace-12696"></a>
<a id="trace-12702"></a>
<a id="trace-12711"></a>
<a id="trace-12716"></a>
<a id="trace-12725"></a>
<a id="trace-12731"></a>
<a id="trace-12742"></a>
<a id="trace-12749"></a>
<a id="trace-12819"></a>
<a id="trace-12830"></a>
<a id="trace-12841"></a>
<a id="trace-12847"></a>
<a id="trace-12857"></a>
<a id="trace-12864"></a>
<a id="trace-12880"></a>
<a id="trace-12895"></a>
<a id="trace-12972"></a>
<a id="trace-12981"></a>
<a id="trace-12995"></a>
<a id="trace-13001"></a>
<a id="trace-13014"></a>
<a id="trace-13032"></a>
<a id="trace-13039"></a>
<a id="trace-13123"></a>
<a id="trace-13137"></a>
<a id="trace-13144"></a>
<a id="trace-13153"></a>
<a id="trace-13159"></a>
<a id="trace-13175"></a>
<a id="trace-13249"></a>
<a id="trace-13257"></a>
<a id="trace-13266"></a>
<a id="trace-13282"></a>
<a id="trace-13289"></a>
<a id="trace-13299"></a>
<a id="trace-13307"></a>
<a id="trace-13321"></a>
<a id="trace-13391"></a>
<a id="trace-13401"></a>
<a id="trace-13411"></a>
<a id="trace-13432"></a>
<a id="trace-13441"></a>
<a id="trace-13450"></a>
<a id="trace-13469"></a>
<a id="trace-13538"></a>
<a id="trace-13557"></a>
<a id="trace-13566"></a>
<a id="trace-13581"></a>
<a id="trace-13587"></a>
<a id="trace-13598"></a>
<a id="trace-13608"></a>
<a id="trace-13686"></a>
<a id="trace-13697"></a>
<a id="trace-13703"></a>
<a id="trace-13711"></a>
<a id="trace-13716"></a>
<a id="trace-13727"></a>
<a id="trace-13745"></a>
<a id="trace-13750"></a>
<a id="trace-13835"></a>
<a id="trace-13846"></a>
<a id="trace-13854"></a>
<a id="trace-13859"></a>
<a id="trace-13869"></a>
<a id="trace-13877"></a>
<a id="trace-13891"></a>
<a id="trace-13965"></a>
<a id="trace-13972"></a>
<a id="trace-13980"></a>
<a id="trace-14000"></a>
<a id="trace-14009"></a>
<a id="trace-14015"></a>
<a id="trace-14030"></a>
<a id="trace-14036"></a>
<a id="trace-14107"></a>
<a id="trace-14117"></a>
<a id="trace-14127"></a>
<a id="trace-14132"></a>
<a id="trace-14145"></a>
<a id="trace-14160"></a>
<a id="trace-14176"></a>
<a id="trace-14248"></a>
<a id="trace-14256"></a>
<a id="trace-14269"></a>
<a id="trace-14275"></a>
<a id="trace-14284"></a>
<a id="trace-14289"></a>
<a id="trace-14299"></a>
<a id="trace-14308"></a>
<a id="trace-14318"></a>
<a id="trace-14325"></a>
<a id="trace-14395"></a>
<a id="trace-14402"></a>
<a id="trace-14411"></a>
<a id="trace-14425"></a>
<a id="trace-14431"></a>
<a id="trace-14442"></a>
<a id="trace-14449"></a>
<a id="trace-14460"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2304604704207489, 'next_transition': 753}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5363055227573638, 'next_transition': 751}.
<a id="trace-751"></a>
<a id="trace-775"></a>
<a id="trace-797"></a>
<a id="trace-817"></a>
<a id="trace-841"></a>
<a id="trace-872"></a>
<a id="trace-888"></a>
<a id="trace-901"></a>
<a id="trace-985"></a>
<a id="trace-998"></a>
<a id="trace-1013"></a>
<a id="trace-1034"></a>
<a id="trace-1052"></a>
<a id="trace-1069"></a>
<a id="trace-1086"></a>
<a id="trace-1096"></a>
<a id="trace-1117"></a>
<a id="trace-1128"></a>
<a id="trace-1206"></a>
<a id="trace-1218"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 751): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9068300386576748, 'next_transition': 775}.
<a id="trace-1222"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1222): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1132. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7967379838644204, 'next_transition': 1351}.
<a id="trace-1223"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1223): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1132. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7967379838644204, 'next_transition': 1351}.
<a id="trace-1351"></a>
<a id="trace-1373"></a>
<a id="trace-1389"></a>
<a id="trace-1406"></a>
<a id="trace-1432"></a>
<a id="trace-1449"></a>
<a id="trace-1460"></a>
<a id="trace-1472"></a>
<a id="trace-1552"></a>
<a id="trace-1568"></a>
<a id="trace-1586"></a>
<a id="trace-1597"></a>
<a id="trace-1619"></a>
<a id="trace-1634"></a>
- 16.25s–22.75s (×14), actor 5, squad 0 (trace 1351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1135. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3012496085646676, 'next_transition': 1373}.
<a id="trace-1643"></a>
- 23.10s–23.10s (×1), actor 0, squad 0 (trace 1643): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1479. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1746}.
<a id="trace-1746"></a>
<a id="trace-1752"></a>
<a id="trace-1768"></a>
<a id="trace-1781"></a>
<a id="trace-1861"></a>
<a id="trace-1870"></a>
<a id="trace-1885"></a>
- 23.25s–26.25s (×7), actor 5, squad 0 (trace 1746): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1482. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1752}.
<a id="trace-1896"></a>
- 26.55s–26.55s (×1), actor 0, squad 0 (trace 1896): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15576958728493695, 'next_transition': 2013}.
<a id="trace-1897"></a>
- 26.55s–26.55s (×1), actor 0, squad 0 (trace 1897): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15576958728493695, 'next_transition': 2013}.
<a id="trace-1898"></a>
- 26.55s–26.55s (×1), actor 0, squad 0 (trace 1898): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15576958728493695, 'next_transition': 2013}.
<a id="trace-2013"></a>
<a id="trace-2023"></a>
<a id="trace-2047"></a>
<a id="trace-2064"></a>
<a id="trace-2076"></a>
<a id="trace-2094"></a>
<a id="trace-2105"></a>
- 26.75s–29.75s (×7), actor 5, squad 0 (trace 2013): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1788. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38268801958726084, 'next_transition': 2023}.
<a id="trace-2122"></a>
- 30.05s–30.05s (×1), actor 5, squad 0 (trace 2122): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 30.05s, trace 2122. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.012563361634353919, 'next_transition': 2183}.
<a id="trace-2183"></a>
- 30.20s–30.20s (×1), actor 0, squad 0 (trace 2183): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 2109. Next observer evidence: None.
<a id="trace-2184"></a>
- 30.20s–30.20s (×1), actor 0, squad 0 (trace 2184): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 2109. Next observer evidence: None.
<a id="trace-2442"></a>
<a id="trace-2449"></a>
- 30.25s–30.75s (×2), actor 5, squad 0 (trace 2442): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.05s, trace 2122. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06576255689135634, 'next_transition': 2449}.
<a id="trace-299"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 299): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2461"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2461): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.450188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2461. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08548658114321561, 'next_transition': 2470}.
<a id="trace-2462"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2462): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.450188 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2462. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08548658114321561, 'next_transition': 2470}.
<a id="trace-2470"></a>
<a id="trace-2487"></a>
<a id="trace-2504"></a>
<a id="trace-2518"></a>
<a id="trace-2537"></a>
<a id="trace-2555"></a>
<a id="trace-2573"></a>
<a id="trace-2584"></a>
<a id="trace-2663"></a>
<a id="trace-2673"></a>
<a id="trace-2688"></a>
<a id="trace-2704"></a>
<a id="trace-2714"></a>
<a id="trace-2721"></a>
<a id="trace-2735"></a>
<a id="trace-2746"></a>
<a id="trace-2763"></a>
<a id="trace-2771"></a>
<a id="trace-2852"></a>
<a id="trace-2870"></a>
<a id="trace-2882"></a>
<a id="trace-2892"></a>
<a id="trace-2908"></a>
<a id="trace-2925"></a>
<a id="trace-2933"></a>
<a id="trace-2940"></a>
- 31.25s–43.75s (×26), actor 5, squad 0 (trace 2470): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2462. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2285124701492309, 'next_transition': 2487}.
<a id="trace-2952"></a>
- 44.20s–44.20s (×1), actor 0, squad 0 (trace 2952): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 2777. Next observer evidence: None.
<a id="trace-2953"></a>
- 44.20s–44.20s (×1), actor 0, squad 0 (trace 2953): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 2777. Next observer evidence: None.
<a id="trace-3063"></a>
<a id="trace-3075"></a>
<a id="trace-3151"></a>
<a id="trace-3172"></a>
- 44.25s–45.75s (×4), actor 5, squad 0 (trace 3063): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2780. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09940295028317826, 'next_transition': 3075}.
<a id="trace-3175"></a>
- 45.85s–45.85s (×1), actor 0, squad 0 (trace 3175): NeedSupport. Knowledge: actor memory at 45.00s, trace 3083. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2129258653334988, 'next_transition': 3194}.
<a id="trace-3194"></a>
<a id="trace-3199"></a>
<a id="trace-3223"></a>
<a id="trace-3242"></a>
<a id="trace-3260"></a>
<a id="trace-3274"></a>
<a id="trace-3287"></a>
<a id="trace-3293"></a>
<a id="trace-3375"></a>
<a id="trace-3388"></a>
<a id="trace-3400"></a>
<a id="trace-3407"></a>
<a id="trace-3424"></a>
<a id="trace-3437"></a>
<a id="trace-3450"></a>
<a id="trace-3459"></a>
<a id="trace-3480"></a>
<a id="trace-3492"></a>
<a id="trace-3566"></a>
<a id="trace-3574"></a>
<a id="trace-3594"></a>
<a id="trace-3606"></a>
<a id="trace-3617"></a>
<a id="trace-3628"></a>
<a id="trace-3647"></a>
- 46.25s–58.25s (×25), actor 5, squad 0 (trace 3194): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3086. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16998918919873832, 'next_transition': 3199}.
<a id="trace-3650"></a>
- 58.25s–58.25s (×1), actor 0, squad 0 (trace 3650): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3497. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999992, 'next_transition': 3797}.
<a id="trace-3687"></a>
- 58.25s–58.25s (×1), actor 0, squad 0 (trace 3687): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3497. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999992, 'next_transition': 3797}.
<a id="trace-3797"></a>
<a id="trace-3818"></a>
<a id="trace-3836"></a>
<a id="trace-3916"></a>
<a id="trace-3937"></a>
<a id="trace-3965"></a>
<a id="trace-3976"></a>
<a id="trace-3996"></a>
<a id="trace-4008"></a>
<a id="trace-4021"></a>
<a id="trace-4029"></a>
<a id="trace-4045"></a>
<a id="trace-4056"></a>
<a id="trace-4138"></a>
<a id="trace-4149"></a>
<a id="trace-4166"></a>
<a id="trace-4184"></a>
<a id="trace-4198"></a>
<a id="trace-4207"></a>
<a id="trace-4227"></a>
<a id="trace-4236"></a>
<a id="trace-4255"></a>
<a id="trace-4264"></a>
<a id="trace-4344"></a>
- 58.75s–70.25s (×24), actor 5, squad 0 (trace 3797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3500. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340000000000039, 'next_transition': 3818}.
<a id="trace-4351"></a>
- 70.40s–70.40s (×1), actor 0, squad 0 (trace 4351): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 4269. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099966057926761, 'next_transition': 4361}.
<a id="trace-4361"></a>
- 70.65s–70.65s (×1), actor 0, squad 0 (trace 4361): MoveTactically. Knowledge: actor memory at 70.00s, trace 4269. Next observer evidence: None.
<a id="trace-4362"></a>
- 70.65s–70.65s (×1), actor 0, squad 0 (trace 4362): traveling overwatch. Knowledge: actor memory at 70.00s, trace 4269. Next observer evidence: None.
<a id="trace-4363"></a>
- 70.65s–70.65s (×1), actor 0, squad 0 (trace 4363): received platoon directive. Knowledge: actor memory at 70.00s, trace 4269. Next observer evidence: None.
<a id="trace-4410"></a>
<a id="trace-4428"></a>
<a id="trace-4452"></a>
<a id="trace-4484"></a>
<a id="trace-4504"></a>
<a id="trace-4543"></a>
<a id="trace-4572"></a>
<a id="trace-4594"></a>
<a id="trace-4604"></a>
- 70.75s–74.75s (×9), actor 5, squad 0 (trace 4410): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4272. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501454925654789, 'next_transition': 4428}.
<a id="trace-583"></a>
- 75.05s–75.05s (×1), actor 5, squad 0 (events line 583): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4623"></a>
- 75.05s–75.05s (×1), actor 5, squad 0 (trace 4623): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490738 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.05s, trace 4623. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559999999999996, 'next_transition': 4682}.
<a id="trace-4624"></a>
- 75.05s–75.05s (×1), actor 5, squad 0 (trace 4624): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490738 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.05s, trace 4624. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559999999999996, 'next_transition': 4682}.
<a id="trace-4682"></a>
<a id="trace-4688"></a>
<a id="trace-4702"></a>
<a id="trace-4711"></a>
- 75.25s–76.75s (×4), actor 5, squad 0 (trace 4682): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.05s, trace 4624. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999992, 'next_transition': 4688}.
<a id="trace-4723"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 4723): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 4609. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28790843653096276, 'next_transition': 4826}.
<a id="trace-4724"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 4724): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 4609. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28790843653096276, 'next_transition': 4826}.
<a id="trace-4826"></a>
<a id="trace-4837"></a>
<a id="trace-4868"></a>
<a id="trace-4887"></a>
<a id="trace-4898"></a>
<a id="trace-4921"></a>
<a id="trace-5003"></a>
<a id="trace-5012"></a>
<a id="trace-5031"></a>
<a id="trace-5039"></a>
<a id="trace-5051"></a>
<a id="trace-5065"></a>
<a id="trace-5076"></a>
<a id="trace-5086"></a>
<a id="trace-5097"></a>
<a id="trace-5106"></a>
<a id="trace-5187"></a>
<a id="trace-5196"></a>
<a id="trace-5207"></a>
<a id="trace-5217"></a>
<a id="trace-5224"></a>
<a id="trace-5228"></a>
<a id="trace-5239"></a>
<a id="trace-5247"></a>
- 77.25s–88.75s (×24), actor 5, squad 0 (trace 4826): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.05s, trace 4624. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999992, 'next_transition': 4837}.
<a id="trace-5250"></a>
- 88.75s–88.75s (×1), actor 1, squad 0 (trace 5250): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299730457725968, 'next_transition': 5264}.
<a id="trace-5251"></a>
- 88.75s–88.75s (×1), actor 1, squad 0 (trace 5251): NeedSupport. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299730457725968, 'next_transition': 5264}.
<a id="trace-5264"></a>
<a id="trace-5269"></a>
- 89.25s–89.75s (×2), actor 5, squad 0 (trace 5264): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5117. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040163076726774, 'next_transition': 5269}.
<a id="trace-5272"></a>
- 89.75s–89.75s (×1), actor 1, squad 0 (trace 5272): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559663272924243, 'next_transition': 5488}.
<a id="trace-5276"></a>
- 89.75s–89.75s (×1), actor 1, squad 0 (trace 5276): MoveTactically. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559663272924243, 'next_transition': 5488}.
<a id="trace-5277"></a>
- 89.75s–89.75s (×1), actor 1, squad 0 (trace 5277): traveling. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559663272924243, 'next_transition': 5488}.
<a id="trace-5278"></a>
- 89.75s–89.75s (×1), actor 1, squad 0 (trace 5278): Reorganise complete. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559663272924243, 'next_transition': 5488}.
<a id="trace-5358"></a>
- 89.75s–89.75s (×1), actor 1, squad 0 (trace 5358): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 85.00s, trace 5115. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559663272924243, 'next_transition': 5488}.
<a id="trace-5488"></a>
<a id="trace-5501"></a>
<a id="trace-5514"></a>
<a id="trace-5522"></a>
- 90.25s–91.75s (×4), actor 5, squad 0 (trace 5488): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5419. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.59850762372331, 'next_transition': 5501}.
<a id="trace-5529"></a>
- 92.05s–92.05s (×1), actor 5, squad 0 (trace 5529): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 92.05s, trace 5529. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6059855397625231, 'next_transition': 5538}.
<a id="trace-5538"></a>
<a id="trace-5555"></a>
- 92.25s–92.75s (×2), actor 5, squad 0 (trace 5538): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.05s, trace 5529. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8909032189513713, 'next_transition': 5555}.
<a id="trace-718"></a>
- 93.15s–93.15s (×1), actor 5, squad 0 (events line 718): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5563"></a>
- 93.15s–93.15s (×1), actor 5, squad 0 (trace 5563): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.389584 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.15s, trace 5563. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35398608832263145, 'next_transition': 5569}.
<a id="trace-5564"></a>
- 93.15s–93.15s (×1), actor 5, squad 0 (trace 5564): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.389584 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.15s, trace 5564. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35398608832263145, 'next_transition': 5569}.
<a id="trace-5569"></a>
<a id="trace-5575"></a>
<a id="trace-5590"></a>
<a id="trace-5596"></a>
- 93.25s–94.75s (×4), actor 5, squad 0 (trace 5569): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 93.15s, trace 5564. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080136662989617, 'next_transition': 5575}.
<a id="trace-5662"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 5662): traveling overwatch. Knowledge: actor memory at 95.00s, trace 5600. Next observer evidence: None.
<a id="trace-5663"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 5663): received platoon directive. Knowledge: actor memory at 95.00s, trace 5600. Next observer evidence: None.
<a id="trace-5674"></a>
- 95.25s–95.25s (×1), actor 5, squad 0 (trace 5674): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5602. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6989978249326997, 'next_transition': 5698}.
<a id="trace-5698"></a>
- 96.20s–96.20s (×1), actor 1, squad 0 (trace 5698): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 5600. Next observer evidence: None.
<a id="trace-5755"></a>
<a id="trace-5772"></a>
<a id="trace-5789"></a>
<a id="trace-5798"></a>
<a id="trace-5820"></a>
<a id="trace-5829"></a>
<a id="trace-5842"></a>
<a id="trace-5850"></a>
<a id="trace-5926"></a>
<a id="trace-5936"></a>
<a id="trace-5950"></a>
<a id="trace-5962"></a>
<a id="trace-5975"></a>
<a id="trace-5987"></a>
<a id="trace-5995"></a>
<a id="trace-6001"></a>
<a id="trace-6017"></a>
<a id="trace-6025"></a>
<a id="trace-6102"></a>
<a id="trace-6109"></a>
<a id="trace-6126"></a>
<a id="trace-6136"></a>
<a id="trace-6146"></a>
<a id="trace-6159"></a>
<a id="trace-6173"></a>
<a id="trace-6184"></a>
<a id="trace-6197"></a>
<a id="trace-6203"></a>
<a id="trace-6284"></a>
<a id="trace-6292"></a>
<a id="trace-6304"></a>
- 96.25s–111.25s (×31), actor 5, squad 0 (trace 5755): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5602. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10200137450054363, 'next_transition': 5772}.
<a id="trace-6308"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 6308): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 6214. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6315}.
<a id="trace-6315"></a>
<a id="trace-6331"></a>
- 111.75s–112.25s (×2), actor 5, squad 0 (trace 6315): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6216. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6331}.
<a id="trace-6335"></a>
- 112.45s–112.45s (×1), actor 1, squad 0 (trace 6335): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 6214. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6444}.
<a id="trace-6444"></a>
<a id="trace-6457"></a>
<a id="trace-6480"></a>
<a id="trace-6496"></a>
<a id="trace-6505"></a>
<a id="trace-6583"></a>
<a id="trace-6594"></a>
<a id="trace-6608"></a>
<a id="trace-6618"></a>
<a id="trace-6634"></a>
<a id="trace-6641"></a>
<a id="trace-6658"></a>
<a id="trace-6666"></a>
<a id="trace-6679"></a>
<a id="trace-6689"></a>
<a id="trace-6765"></a>
<a id="trace-6781"></a>
<a id="trace-6793"></a>
<a id="trace-6799"></a>
<a id="trace-6814"></a>
<a id="trace-6823"></a>
<a id="trace-6835"></a>
<a id="trace-6842"></a>
- 112.75s–123.75s (×23), actor 5, squad 0 (trace 6444): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6216. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299771399027101, 'next_transition': 6457}.
<a id="trace-6848"></a>
- 123.85s–123.85s (×1), actor 1, squad 0 (trace 6848): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 6692. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520008158716961, 'next_transition': 6864}.
<a id="trace-6864"></a>
<a id="trace-6874"></a>
- 124.25s–124.75s (×2), actor 5, squad 0 (trace 6864): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6694. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519988992039444, 'next_transition': 6874}.
<a id="trace-6881"></a>
- 124.85s–124.85s (×1), actor 1, squad 0 (trace 6881): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 6692. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5687689104708895, 'next_transition': 7009}.
<a id="trace-7009"></a>
<a id="trace-7021"></a>
<a id="trace-7038"></a>
<a id="trace-7052"></a>
<a id="trace-7063"></a>
<a id="trace-7073"></a>
<a id="trace-7086"></a>
<a id="trace-7096"></a>
<a id="trace-7107"></a>
<a id="trace-7116"></a>
<a id="trace-7190"></a>
<a id="trace-7199"></a>
<a id="trace-7209"></a>
<a id="trace-7218"></a>
<a id="trace-7230"></a>
<a id="trace-7244"></a>
<a id="trace-7252"></a>
<a id="trace-7260"></a>
<a id="trace-7276"></a>
<a id="trace-7285"></a>
<a id="trace-7363"></a>
<a id="trace-7373"></a>
<a id="trace-7387"></a>
<a id="trace-7400"></a>
- 125.25s–136.80s (×24), actor 5, squad 0 (trace 7009): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6937. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.787507511522885, 'next_transition': 7021}.
<a id="trace-1007"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (events line 1007): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}.
<a id="trace-7407"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (trace 7407): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.494689 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 7407. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}.
<a id="trace-7408"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (trace 7408): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.494689 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 7408. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}.
<a id="trace-7413"></a>
<a id="trace-7422"></a>
<a id="trace-7437"></a>
<a id="trace-7447"></a>
- 137.30s–138.80s (×4), actor 5, squad 0 (trace 7413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.05s, trace 7408. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339964768366089, 'next_transition': 7422}.
<a id="trace-7452"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 7452): Withdraw to received rally. Knowledge: actor memory at 135.00s, trace 7289. Next observer evidence: None.
<a id="trace-7453"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 7453): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 7289. Next observer evidence: None.
<a id="trace-7512"></a>
<a id="trace-7519"></a>
- 139.30s–139.80s (×2), actor 5, squad 0 (trace 7512): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.05s, trace 7408. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7519}.
<a id="trace-1034"></a>
- 140.20s–140.20s (×1), actor 5, squad 0 (events line 1034): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7598"></a>
- 140.20s–140.20s (×1), actor 5, squad 0 (trace 7598): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500076 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 140.20s, trace 7598. Next observer evidence: None.
<a id="trace-7599"></a>
- 140.20s–140.20s (×1), actor 5, squad 0 (trace 7599): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500076 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 140.20s, trace 7599. Next observer evidence: None.
<a id="trace-7604"></a>
<a id="trace-7626"></a>
<a id="trace-7636"></a>
<a id="trace-7655"></a>
<a id="trace-7670"></a>
<a id="trace-7677"></a>
<a id="trace-7688"></a>
<a id="trace-7697"></a>
<a id="trace-7712"></a>
<a id="trace-7727"></a>
<a id="trace-7798"></a>
<a id="trace-7807"></a>
<a id="trace-7823"></a>
<a id="trace-7841"></a>
<a id="trace-7847"></a>
<a id="trace-7861"></a>
<a id="trace-7873"></a>
<a id="trace-7883"></a>
<a id="trace-7896"></a>
<a id="trace-7973"></a>
<a id="trace-7988"></a>
- 140.30s–150.80s (×21), actor 5, squad 0 (trace 7604): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.20s, trace 7599. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.503988742465652, 'next_transition': 7626}.
<a id="trace-7992"></a>
- 150.85s–150.85s (×1), actor 1, squad 0 (trace 7992): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 7900. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8104}.
<a id="trace-7993"></a>
- 150.85s–150.85s (×1), actor 1, squad 0 (trace 7993): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 7900. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8104}.
<a id="trace-8104"></a>
<a id="trace-8117"></a>
<a id="trace-8138"></a>
<a id="trace-8148"></a>
<a id="trace-8166"></a>
<a id="trace-8176"></a>
<a id="trace-8191"></a>
<a id="trace-8200"></a>
<a id="trace-8271"></a>
<a id="trace-8282"></a>
<a id="trace-8296"></a>
<a id="trace-8315"></a>
<a id="trace-8326"></a>
<a id="trace-8333"></a>
<a id="trace-8347"></a>
<a id="trace-8355"></a>
<a id="trace-8369"></a>
<a id="trace-8376"></a>
<a id="trace-8450"></a>
- 151.30s–160.30s (×19), actor 5, squad 0 (trace 8104): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 7902. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8117}.
<a id="trace-8457"></a>
- 160.45s–160.45s (×1), actor 1, squad 0 (trace 8457): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 8378. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3299823591314951, 'next_transition': 8522}.
<a id="trace-8458"></a>
- 160.45s–160.45s (×1), actor 1, squad 0 (trace 8458): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 8378. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3299823591314951, 'next_transition': 8522}.
<a id="trace-8522"></a>
<a id="trace-8537"></a>
<a id="trace-8555"></a>
<a id="trace-8570"></a>
<a id="trace-8580"></a>
<a id="trace-8595"></a>
<a id="trace-8602"></a>
<a id="trace-8620"></a>
<a id="trace-8634"></a>
<a id="trace-8709"></a>
<a id="trace-8721"></a>
<a id="trace-8736"></a>
<a id="trace-8746"></a>
<a id="trace-8753"></a>
<a id="trace-8761"></a>
<a id="trace-8773"></a>
<a id="trace-8787"></a>
<a id="trace-8796"></a>
<a id="trace-8803"></a>
<a id="trace-8882"></a>
<a id="trace-8891"></a>
<a id="trace-8906"></a>
<a id="trace-8915"></a>
<a id="trace-8927"></a>
- 160.80s–172.30s (×24), actor 5, squad 0 (trace 8522): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 8380. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7394966240420255, 'next_transition': 8537}.
<a id="trace-8931"></a>
- 172.45s–172.45s (×1), actor 1, squad 0 (trace 8931): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 170.00s, trace 8812. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599860316686, 'next_transition': 8994}.
<a id="trace-8932"></a>
- 172.45s–172.45s (×1), actor 1, squad 0 (trace 8932): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 170.00s, trace 8812. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599860316686, 'next_transition': 8994}.
<a id="trace-8994"></a>
<a id="trace-9010"></a>
<a id="trace-9025"></a>
<a id="trace-9041"></a>
<a id="trace-9053"></a>
<a id="trace-9128"></a>
<a id="trace-9139"></a>
<a id="trace-9153"></a>
<a id="trace-9168"></a>
<a id="trace-9179"></a>
<a id="trace-9187"></a>
<a id="trace-9210"></a>
<a id="trace-9218"></a>
<a id="trace-9228"></a>
<a id="trace-9239"></a>
<a id="trace-9314"></a>
<a id="trace-9331"></a>
<a id="trace-9339"></a>
<a id="trace-9346"></a>
- 172.80s–181.80s (×19), actor 5, squad 0 (trace 8994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 8814. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039924078793285, 'next_transition': 9010}.
<a id="trace-9356"></a>
- 182.20s–182.20s (×1), actor 1, squad 0 (trace 9356): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 9241. Next observer evidence: None.
<a id="trace-9357"></a>
- 182.20s–182.20s (×1), actor 1, squad 0 (trace 9357): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 9241. Next observer evidence: None.
<a id="trace-9368"></a>
<a id="trace-9378"></a>
<a id="trace-9395"></a>
<a id="trace-9409"></a>
<a id="trace-9425"></a>
<a id="trace-9445"></a>
<a id="trace-9515"></a>
<a id="trace-9530"></a>
<a id="trace-9543"></a>
<a id="trace-9551"></a>
<a id="trace-9563"></a>
<a id="trace-9569"></a>
<a id="trace-9582"></a>
<a id="trace-9594"></a>
<a id="trace-9605"></a>
<a id="trace-9610"></a>
<a id="trace-9684"></a>
<a id="trace-9691"></a>
<a id="trace-9699"></a>
<a id="trace-9707"></a>
<a id="trace-9713"></a>
<a id="trace-9724"></a>
<a id="trace-9732"></a>
<a id="trace-9738"></a>
<a id="trace-9749"></a>
<a id="trace-9756"></a>
<a id="trace-9828"></a>
<a id="trace-9834"></a>
<a id="trace-9843"></a>
<a id="trace-9848"></a>
<a id="trace-9854"></a>
<a id="trace-9861"></a>
<a id="trace-9869"></a>
<a id="trace-9877"></a>
<a id="trace-9888"></a>
<a id="trace-9893"></a>
- 182.30s–199.80s (×36), actor 5, squad 0 (trace 9368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9243. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49500919407737387, 'next_transition': 9378}.
<a id="trace-1446"></a>
- 200.20s–200.20s (×1), actor 5, squad 0 (events line 1446): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9963"></a>
- 200.20s–200.20s (×1), actor 5, squad 0 (trace 9963): renew committed intent (75 s lifetime). Knowledge: actor memory at 200.20s, trace 9963. Next observer evidence: None.
<a id="trace-9968"></a>
<a id="trace-9976"></a>
<a id="trace-9986"></a>
<a id="trace-9994"></a>
<a id="trace-10003"></a>
<a id="trace-10008"></a>
<a id="trace-10015"></a>
<a id="trace-10022"></a>
<a id="trace-10032"></a>
<a id="trace-10038"></a>
<a id="trace-10106"></a>
<a id="trace-10113"></a>
<a id="trace-10122"></a>
<a id="trace-10129"></a>
<a id="trace-10141"></a>
<a id="trace-10146"></a>
<a id="trace-10156"></a>
<a id="trace-10162"></a>
<a id="trace-10174"></a>
<a id="trace-10182"></a>
<a id="trace-10251"></a>
<a id="trace-10260"></a>
<a id="trace-10267"></a>
<a id="trace-10273"></a>
- 200.30s–211.80s (×24), actor 5, squad 0 (trace 9968): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.20s, trace 9963. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9976}.
<a id="trace-10278"></a>
- 212.20s–212.20s (×1), actor 1, squad 0 (trace 10278): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 10185. Next observer evidence: None.
<a id="trace-10282"></a>
<a id="trace-10288"></a>
<a id="trace-10298"></a>
<a id="trace-10305"></a>
<a id="trace-10318"></a>
<a id="trace-10324"></a>
<a id="trace-10394"></a>
<a id="trace-10404"></a>
<a id="trace-10414"></a>
<a id="trace-10423"></a>
<a id="trace-10430"></a>
<a id="trace-10435"></a>
<a id="trace-10444"></a>
<a id="trace-10450"></a>
<a id="trace-10462"></a>
<a id="trace-10466"></a>
<a id="trace-10536"></a>
<a id="trace-10543"></a>
<a id="trace-10552"></a>
<a id="trace-10562"></a>
<a id="trace-10570"></a>
<a id="trace-10578"></a>
<a id="trace-10588"></a>
<a id="trace-10594"></a>
<a id="trace-10606"></a>
<a id="trace-10611"></a>
<a id="trace-10682"></a>
<a id="trace-10689"></a>
<a id="trace-10697"></a>
<a id="trace-10703"></a>
<a id="trace-10711"></a>
<a id="trace-10718"></a>
<a id="trace-10727"></a>
<a id="trace-10736"></a>
<a id="trace-10747"></a>
<a id="trace-10751"></a>
<a id="trace-10822"></a>
<a id="trace-10831"></a>
<a id="trace-10842"></a>
<a id="trace-10848"></a>
<a id="trace-10856"></a>
<a id="trace-10861"></a>
<a id="trace-10869"></a>
<a id="trace-10877"></a>
<a id="trace-10888"></a>
<a id="trace-10895"></a>
<a id="trace-10964"></a>
<a id="trace-10982"></a>
<a id="trace-10988"></a>
<a id="trace-10998"></a>
<a id="trace-11005"></a>
<a id="trace-11015"></a>
<a id="trace-11021"></a>
<a id="trace-11031"></a>
<a id="trace-11038"></a>
<a id="trace-11107"></a>
<a id="trace-11116"></a>
<a id="trace-11125"></a>
<a id="trace-11131"></a>
<a id="trace-11139"></a>
<a id="trace-11144"></a>
<a id="trace-11157"></a>
<a id="trace-11164"></a>
<a id="trace-11175"></a>
<a id="trace-11181"></a>
<a id="trace-11253"></a>
<a id="trace-11261"></a>
<a id="trace-11269"></a>
<a id="trace-11277"></a>
<a id="trace-11284"></a>
<a id="trace-11289"></a>
<a id="trace-11298"></a>
<a id="trace-11305"></a>
<a id="trace-11317"></a>
<a id="trace-11322"></a>
<a id="trace-11396"></a>
<a id="trace-11404"></a>
<a id="trace-11412"></a>
<a id="trace-11421"></a>
<a id="trace-11430"></a>
<a id="trace-11437"></a>
<a id="trace-11445"></a>
<a id="trace-11450"></a>
<a id="trace-11461"></a>
<a id="trace-11466"></a>
<a id="trace-11537"></a>
<a id="trace-11545"></a>
<a id="trace-11554"></a>
<a id="trace-11559"></a>
<a id="trace-11567"></a>
<a id="trace-11577"></a>
<a id="trace-11585"></a>
<a id="trace-11593"></a>
<a id="trace-11606"></a>
<a id="trace-11612"></a>
- 212.30s–259.80s (×95), actor 5, squad 0 (trace 10282): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 10187. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10288}.
<a id="trace-1701"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (events line 1701): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11682"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (trace 11682): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 11619. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11691}.
<a id="trace-11685"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (trace 11685): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.30s, trace 11685. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11691}.
<a id="trace-11691"></a>
<a id="trace-11700"></a>
<a id="trace-11706"></a>
<a id="trace-11714"></a>
<a id="trace-11719"></a>
<a id="trace-11728"></a>
<a id="trace-11736"></a>
<a id="trace-11746"></a>
<a id="trace-11756"></a>
<a id="trace-11826"></a>
<a id="trace-11833"></a>
<a id="trace-11842"></a>
<a id="trace-11850"></a>
<a id="trace-11860"></a>
<a id="trace-11865"></a>
<a id="trace-11873"></a>
<a id="trace-11879"></a>
<a id="trace-11889"></a>
<a id="trace-11895"></a>
<a id="trace-11964"></a>
<a id="trace-11972"></a>
<a id="trace-11981"></a>
<a id="trace-11986"></a>
<a id="trace-11997"></a>
<a id="trace-12003"></a>
<a id="trace-12013"></a>
<a id="trace-12021"></a>
<a id="trace-12033"></a>
<a id="trace-12038"></a>
<a id="trace-12106"></a>
<a id="trace-12114"></a>
<a id="trace-12121"></a>
<a id="trace-12129"></a>
<a id="trace-12136"></a>
<a id="trace-12142"></a>
<a id="trace-12151"></a>
<a id="trace-12158"></a>
<a id="trace-12173"></a>
<a id="trace-12178"></a>
<a id="trace-12248"></a>
<a id="trace-12255"></a>
<a id="trace-12265"></a>
<a id="trace-12274"></a>
<a id="trace-12280"></a>
<a id="trace-12287"></a>
<a id="trace-12295"></a>
<a id="trace-12300"></a>
<a id="trace-12311"></a>
<a id="trace-12317"></a>
<a id="trace-12388"></a>
<a id="trace-12395"></a>
<a id="trace-12406"></a>
<a id="trace-12413"></a>
<a id="trace-12421"></a>
<a id="trace-12429"></a>
<a id="trace-12438"></a>
<a id="trace-12447"></a>
<a id="trace-12457"></a>
<a id="trace-12462"></a>
<a id="trace-12531"></a>
<a id="trace-12538"></a>
<a id="trace-12548"></a>
<a id="trace-12554"></a>
<a id="trace-12563"></a>
<a id="trace-12567"></a>
<a id="trace-12576"></a>
<a id="trace-12587"></a>
<a id="trace-12598"></a>
<a id="trace-12606"></a>
<a id="trace-12677"></a>
<a id="trace-12684"></a>
<a id="trace-12694"></a>
<a id="trace-12700"></a>
<a id="trace-12709"></a>
<a id="trace-12714"></a>
<a id="trace-12723"></a>
<a id="trace-12729"></a>
<a id="trace-12740"></a>
<a id="trace-12747"></a>
<a id="trace-12817"></a>
<a id="trace-12828"></a>
<a id="trace-12839"></a>
<a id="trace-12845"></a>
<a id="trace-12855"></a>
<a id="trace-12862"></a>
<a id="trace-12873"></a>
<a id="trace-12878"></a>
<a id="trace-12889"></a>
<a id="trace-12893"></a>
<a id="trace-12962"></a>
<a id="trace-12970"></a>
<a id="trace-12979"></a>
<a id="trace-12986"></a>
<a id="trace-12993"></a>
<a id="trace-12999"></a>
<a id="trace-13012"></a>
<a id="trace-13018"></a>
<a id="trace-13030"></a>
<a id="trace-13037"></a>
<a id="trace-13108"></a>
<a id="trace-13114"></a>
<a id="trace-13121"></a>
<a id="trace-13128"></a>
<a id="trace-13135"></a>
<a id="trace-13142"></a>
<a id="trace-13151"></a>
<a id="trace-13157"></a>
<a id="trace-13168"></a>
<a id="trace-13173"></a>
<a id="trace-13247"></a>
<a id="trace-13255"></a>
<a id="trace-13264"></a>
<a id="trace-13270"></a>
<a id="trace-13280"></a>
<a id="trace-13287"></a>
<a id="trace-13297"></a>
<a id="trace-13305"></a>
<a id="trace-13315"></a>
<a id="trace-13319"></a>
- 260.80s–319.80s (×119), actor 5, squad 0 (trace 11691): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.30s, trace 11685. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11700}.
<a id="trace-1957"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (events line 1957): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13389"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (trace 13389): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 13326. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13399}.
<a id="trace-13392"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (trace 13392): renew committed intent (75 s lifetime). Knowledge: actor memory at 320.30s, trace 13392. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13399}.
<a id="trace-13399"></a>
<a id="trace-13409"></a>
<a id="trace-13414"></a>
<a id="trace-13425"></a>
<a id="trace-13430"></a>
<a id="trace-13439"></a>
<a id="trace-13448"></a>
<a id="trace-13460"></a>
<a id="trace-13467"></a>
<a id="trace-13536"></a>
<a id="trace-13543"></a>
<a id="trace-13551"></a>
<a id="trace-13555"></a>
<a id="trace-13564"></a>
<a id="trace-13570"></a>
<a id="trace-13579"></a>
<a id="trace-13585"></a>
<a id="trace-13596"></a>
<a id="trace-13606"></a>
<a id="trace-13676"></a>
<a id="trace-13684"></a>
<a id="trace-13695"></a>
<a id="trace-13701"></a>
<a id="trace-13709"></a>
<a id="trace-13714"></a>
<a id="trace-13725"></a>
<a id="trace-13731"></a>
<a id="trace-13743"></a>
<a id="trace-13748"></a>
<a id="trace-13818"></a>
<a id="trace-13826"></a>
<a id="trace-13833"></a>
<a id="trace-13844"></a>
<a id="trace-13852"></a>
<a id="trace-13857"></a>
<a id="trace-13867"></a>
<a id="trace-13875"></a>
<a id="trace-13889"></a>
<a id="trace-13894"></a>
<a id="trace-13963"></a>
<a id="trace-13970"></a>
<a id="trace-13978"></a>
<a id="trace-13985"></a>
<a id="trace-13992"></a>
<a id="trace-13998"></a>
<a id="trace-14007"></a>
<a id="trace-14013"></a>
<a id="trace-14028"></a>
<a id="trace-14034"></a>
<a id="trace-14105"></a>
<a id="trace-14115"></a>
<a id="trace-14125"></a>
<a id="trace-14130"></a>
<a id="trace-14137"></a>
<a id="trace-14143"></a>
<a id="trace-14151"></a>
<a id="trace-14158"></a>
<a id="trace-14169"></a>
<a id="trace-14174"></a>
<a id="trace-14246"></a>
<a id="trace-14254"></a>
<a id="trace-14267"></a>
<a id="trace-14273"></a>
<a id="trace-14282"></a>
<a id="trace-14287"></a>
<a id="trace-14297"></a>
<a id="trace-14306"></a>
<a id="trace-14316"></a>
<a id="trace-14323"></a>
<a id="trace-14393"></a>
<a id="trace-14400"></a>
<a id="trace-14409"></a>
<a id="trace-14415"></a>
<a id="trace-14423"></a>
<a id="trace-14429"></a>
<a id="trace-14440"></a>
<a id="trace-14447"></a>
<a id="trace-14458"></a>
<a id="trace-14466"></a>
- 320.80s–359.80s (×79), actor 5, squad 0 (trace 13399): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.30s, trace 13392. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13409}.

## Net delivery

174 matched order/radio deliveries; 244 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.260s; maximum 2.000s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1792: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1793: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1794: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1795: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1796: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2109: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2113: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2115: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2116: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2117: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2118: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2119: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2120: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.05s leader 5, trace 2122: estimate 7.39; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2461: estimate 7.39; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2462: estimate 7.39; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2590: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2593: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2594: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2596: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2597: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2598: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2599: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2600: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2601: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2777: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2780: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2781: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2783: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2784: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2785: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2786: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2787: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2788: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3083: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3086: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3087: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3089: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3090: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3091: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3092: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3093: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3094: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3299: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3302: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3303: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3305: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3306: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3307: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3308: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3309: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3310: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3497: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3500: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3501: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3503: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3504: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3505: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3506: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3507: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3508: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3841: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3844: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3845: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3847: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3848: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3849: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3850: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3851: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3852: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4067: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4070: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4071: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4073: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4074: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4075: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4076: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4077: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4078: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4269: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4272: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4273: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4275: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4276: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4277: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4278: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4279: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4280: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4609: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4612: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4613: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4615: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4616: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4617: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4618: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4619: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4620: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.05s leader 5, trace 4623: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.05s leader 5, trace 4624: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4925: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4928: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4929: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4931: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4932: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4933: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4934: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4935: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4936: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5114: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5117: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5118: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5120: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5121: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5122: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5123: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5124: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5125: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5419: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5420: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5422: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5423: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5424: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5425: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5426: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5427: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 5529: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.15s leader 5, trace 5563: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.15s leader 5, trace 5564: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5600: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5602: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5603: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5605: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5606: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5607: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5608: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5609: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5854: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5856: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5857: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5859: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5860: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5861: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5862: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5863: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6034: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6036: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6037: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6039: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6040: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6041: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6042: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6043: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6214: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6216: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6217: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6219: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6220: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6221: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6222: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6223: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6510: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6512: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6513: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6515: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6516: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6517: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6518: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6519: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6692: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6694: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6695: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6697: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6698: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6699: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6700: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6701: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6935: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6937: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6938: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6940: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6941: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6942: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6943: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6944: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7120: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7122: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7123: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7125: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7126: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7127: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7128: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7129: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7289: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7291: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7292: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7294: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7295: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7296: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7297: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7298: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 7407: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 7408: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7530: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7532: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7533: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 7534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7535: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7536: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7537: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7538: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7539: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.20s leader 5, trace 7598: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.20s leader 5, trace 7599: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7732: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7734: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7735: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 7736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7737: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7738: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7739: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7740: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7741: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 7904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7905: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7906: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7907: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7908: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7909: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8209: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8210: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8211: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8212: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8213: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 8382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8383: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8384: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8385: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8386: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8387: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 8639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 8642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8643: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8644: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8645: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8646: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8647: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 8813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 8816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8817: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8818: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8819: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8820: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8821: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 9060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9061: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9062: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9063: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9064: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9065: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 9245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9246: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9247: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9248: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9249: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9250: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 9454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9455: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9456: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9457: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9458: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9459: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 9614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 9617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 9764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 9769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 9901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 9904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.20s leader 5, trace 9963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 10044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 10189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 10333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 10470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 10473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 10616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 10619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 10757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 10760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 10899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 10902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 11042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 11045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 11188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 11191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 11327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 11330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 11471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 11474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 11618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 11621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.30s leader 5, trace 11685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 11759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 11760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 11763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 11768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 11898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 11901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 11906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 12042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 12045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 12181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 12184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 12322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 12325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 12467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 12470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 12609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 12610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 12613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 12750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 12751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 12754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 12759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 12898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 12901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 12906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 13041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 13178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 13181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 13182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 13186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 13325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 13328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 13333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.30s leader 5, trace 13392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 13471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 13474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 13609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 13610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 13613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 13618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 13752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 13753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 13756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 13761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 13896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 13897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 13898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 13900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 13905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 14039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 14042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 14180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 14183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 14327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 14330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 14469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 14472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bram incapacitated

## Outcome attribution

- 75.05s, evidence 583: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 75.05s, evidence 4623: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490738 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559999999999996, 'next_transition': 4682}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 75.05s, evidence 4624: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.490738 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559999999999996, 'next_transition': 4682}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 1007: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 7407: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.494689 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 7408: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.494689 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780000476190433, 'next_transition': 7413}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
