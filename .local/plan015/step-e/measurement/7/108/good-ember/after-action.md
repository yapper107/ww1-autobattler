# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/108/good-ember/battle-108-1789673776731551533`

## Battle summary

**Ember** · 360 s · 813 shots.

### Turning points

- 24.8s, squad 4: contact (events line 246). First recorded contact.
- 31.3s, squad 0: help call ([trace 2306](#trace-2306)). No completion observed before termination.
- 44.5s, squad 0: withdrawal ([trace 3253](#trace-3253)). 65.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 55.5s, squad 0: help call ([trace 3902](#trace-3902)). No completion observed before termination.
- 119.3s, squad 0: withdrawal ([trace 6975](#trace-6975)). 142.2s, squad 0: took cover and returned fire.
- 131.1s, squad 0: help call ([trace 7719](#trace-7719)). No completion observed before termination.
- 145.8s, squad 0: withdrawal ([trace 8405](#trace-8405)). 298.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 177.3s, squad 0: help call ([trace 9406](#trace-9406)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 55 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 758 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1036](#trace-1036)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.1s, squad 0 chose took cover and returned fire ([trace 1844](#trace-1844)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1035](#trace-1035)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299936538459713, 'next_transition': 1061}.
- 43.3s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 3218](#trace-3218)). Following evidence: None.

### Communication

149 matched deliveries (mean 0.58s, max 6.20s); 246 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.80s, squad 4, contact, evidence events line 246: First recorded contact; .
- 31.30s, squad 0, help call, evidence 2306: NeedSupport; No completion observed before termination.
- 44.45s, squad 0, withdrawal, evidence 3253: BreakContact: believed ratio at least two without superiority; 65.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 55.45s, squad 0, help call, evidence 3902: NeedSupport; No completion observed before termination.
- 119.35s, squad 0, withdrawal, evidence 6975: BreakContact: believed ratio at least two without superiority; 142.2s, squad 0: took cover and returned fire.
- 131.05s, squad 0, help call, evidence 7719: NeedSupport; No completion observed before termination.
- 145.75s, squad 0, withdrawal, evidence 8405: BreakContact: believed ratio at least two without superiority; 298.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 177.30s, squad 0, help call, evidence 9406: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.859309084061472, 'next_transition': 619}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.859309084061472, 'next_transition': 619}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.859309084061472, 'next_transition': 619}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-502"></a>
<a id="trace-514"></a>
<a id="trace-536"></a>
<a id="trace-554"></a>
<a id="trace-565"></a>
<a id="trace-580"></a>
<a id="trace-600"></a>
<a id="trace-621"></a>
<a id="trace-633"></a>
<a id="trace-642"></a>
<a id="trace-724"></a>
<a id="trace-733"></a>
<a id="trace-935"></a>
<a id="trace-957"></a>
<a id="trace-979"></a>
<a id="trace-996"></a>
<a id="trace-1016"></a>
<a id="trace-1034"></a>
<a id="trace-1063"></a>
<a id="trace-1081"></a>
<a id="trace-1162"></a>
<a id="trace-1177"></a>
<a id="trace-1200"></a>
<a id="trace-1220"></a>
<a id="trace-1236"></a>
<a id="trace-1249"></a>
<a id="trace-1271"></a>
<a id="trace-1283"></a>
<a id="trace-1457"></a>
<a id="trace-1475"></a>
<a id="trace-1562"></a>
<a id="trace-1587"></a>
<a id="trace-1604"></a>
<a id="trace-1625"></a>
<a id="trace-1654"></a>
<a id="trace-1667"></a>
<a id="trace-1683"></a>
<a id="trace-1701"></a>
<a id="trace-1718"></a>
<a id="trace-1737"></a>
<a id="trace-1821"></a>
<a id="trace-1829"></a>
<a id="trace-2107"></a>
<a id="trace-2118"></a>
<a id="trace-2141"></a>
<a id="trace-2154"></a>
<a id="trace-2168"></a>
<a id="trace-2194"></a>
<a id="trace-2203"></a>
<a id="trace-2215"></a>
<a id="trace-2289"></a>
<a id="trace-2294"></a>
<a id="trace-2302"></a>
<a id="trace-2315"></a>
<a id="trace-2329"></a>
<a id="trace-2463"></a>
<a id="trace-2478"></a>
<a id="trace-2493"></a>
<a id="trace-2508"></a>
<a id="trace-2602"></a>
<a id="trace-2673"></a>
<a id="trace-2684"></a>
<a id="trace-2705"></a>
<a id="trace-2714"></a>
<a id="trace-2724"></a>
<a id="trace-2729"></a>
<a id="trace-2746"></a>
<a id="trace-2753"></a>
<a id="trace-2896"></a>
<a id="trace-2901"></a>
<a id="trace-2986"></a>
<a id="trace-3142"></a>
<a id="trace-3156"></a>
<a id="trace-3170"></a>
<a id="trace-3183"></a>
<a id="trace-3200"></a>
<a id="trace-3213"></a>
<a id="trace-3232"></a>
<a id="trace-3248"></a>
<a id="trace-3461"></a>
<a id="trace-3537"></a>
<a id="trace-3558"></a>
<a id="trace-3570"></a>
<a id="trace-3580"></a>
<a id="trace-3594"></a>
<a id="trace-3608"></a>
<a id="trace-3622"></a>
<a id="trace-3639"></a>
<a id="trace-3649"></a>
<a id="trace-3658"></a>
<a id="trace-3735"></a>
<a id="trace-3740"></a>
<a id="trace-3750"></a>
<a id="trace-3754"></a>
<a id="trace-3769"></a>
<a id="trace-3782"></a>
<a id="trace-3793"></a>
<a id="trace-3803"></a>
<a id="trace-3820"></a>
<a id="trace-3828"></a>
<a id="trace-3900"></a>
<a id="trace-3911"></a>
<a id="trace-3926"></a>
<a id="trace-3937"></a>
<a id="trace-3951"></a>
<a id="trace-3958"></a>
<a id="trace-3975"></a>
<a id="trace-4091"></a>
<a id="trace-4101"></a>
<a id="trace-4122"></a>
<a id="trace-4196"></a>
<a id="trace-4215"></a>
<a id="trace-4233"></a>
<a id="trace-4242"></a>
<a id="trace-4260"></a>
<a id="trace-4272"></a>
<a id="trace-4284"></a>
<a id="trace-4292"></a>
<a id="trace-4307"></a>
<a id="trace-4319"></a>
<a id="trace-4395"></a>
<a id="trace-4419"></a>
<a id="trace-4432"></a>
<a id="trace-4454"></a>
<a id="trace-4462"></a>
<a id="trace-4487"></a>
<a id="trace-4500"></a>
<a id="trace-4522"></a>
<a id="trace-4531"></a>
<a id="trace-4609"></a>
<a id="trace-4614"></a>
<a id="trace-4623"></a>
<a id="trace-4630"></a>
<a id="trace-4641"></a>
<a id="trace-4649"></a>
<a id="trace-4662"></a>
<a id="trace-4668"></a>
<a id="trace-4683"></a>
<a id="trace-4690"></a>
<a id="trace-4761"></a>
<a id="trace-4768"></a>
<a id="trace-4778"></a>
<a id="trace-4786"></a>
<a id="trace-4796"></a>
<a id="trace-4803"></a>
<a id="trace-4812"></a>
<a id="trace-4819"></a>
<a id="trace-4829"></a>
<a id="trace-4833"></a>
<a id="trace-4903"></a>
<a id="trace-4907"></a>
<a id="trace-4916"></a>
<a id="trace-4921"></a>
<a id="trace-4931"></a>
<a id="trace-4937"></a>
<a id="trace-4950"></a>
<a id="trace-4961"></a>
<a id="trace-4973"></a>
<a id="trace-4982"></a>
<a id="trace-5052"></a>
<a id="trace-5056"></a>
<a id="trace-5063"></a>
<a id="trace-5069"></a>
<a id="trace-5077"></a>
<a id="trace-5083"></a>
<a id="trace-5094"></a>
<a id="trace-5099"></a>
<a id="trace-5142"></a>
<a id="trace-5148"></a>
<a id="trace-5253"></a>
<a id="trace-5271"></a>
<a id="trace-5390"></a>
<a id="trace-5408"></a>
<a id="trace-5428"></a>
<a id="trace-5447"></a>
<a id="trace-5467"></a>
<a id="trace-5475"></a>
<a id="trace-5493"></a>
<a id="trace-5500"></a>
<a id="trace-5571"></a>
<a id="trace-5579"></a>
<a id="trace-5593"></a>
<a id="trace-5606"></a>
<a id="trace-5621"></a>
<a id="trace-5631"></a>
<a id="trace-5653"></a>
<a id="trace-5660"></a>
<a id="trace-5673"></a>
<a id="trace-5680"></a>
<a id="trace-5754"></a>
<a id="trace-5763"></a>
<a id="trace-5777"></a>
<a id="trace-5986"></a>
<a id="trace-6001"></a>
<a id="trace-6024"></a>
<a id="trace-6035"></a>
<a id="trace-6045"></a>
<a id="trace-6066"></a>
<a id="trace-6076"></a>
<a id="trace-6156"></a>
<a id="trace-6164"></a>
<a id="trace-6184"></a>
<a id="trace-6192"></a>
<a id="trace-6203"></a>
<a id="trace-6215"></a>
<a id="trace-6231"></a>
<a id="trace-6240"></a>
<a id="trace-6252"></a>
<a id="trace-6260"></a>
<a id="trace-6338"></a>
<a id="trace-6349"></a>
<a id="trace-6363"></a>
<a id="trace-6423"></a>
<a id="trace-6441"></a>
<a id="trace-6450"></a>
<a id="trace-6462"></a>
<a id="trace-6476"></a>
<a id="trace-6492"></a>
<a id="trace-6500"></a>
<a id="trace-6572"></a>
<a id="trace-6873"></a>
<a id="trace-6887"></a>
<a id="trace-6899"></a>
<a id="trace-6916"></a>
<a id="trace-6929"></a>
<a id="trace-6950"></a>
<a id="trace-6961"></a>
<a id="trace-6972"></a>
<a id="trace-7259"></a>
<a id="trace-7339"></a>
<a id="trace-7350"></a>
<a id="trace-7366"></a>
<a id="trace-7382"></a>
<a id="trace-7398"></a>
<a id="trace-7406"></a>
<a id="trace-7420"></a>
<a id="trace-7426"></a>
<a id="trace-7439"></a>
<a id="trace-7448"></a>
<a id="trace-7523"></a>
<a id="trace-7534"></a>
<a id="trace-7551"></a>
<a id="trace-7564"></a>
<a id="trace-7575"></a>
<a id="trace-7584"></a>
<a id="trace-7597"></a>
<a id="trace-7611"></a>
<a id="trace-7619"></a>
<a id="trace-7629"></a>
<a id="trace-7708"></a>
<a id="trace-7714"></a>
<a id="trace-7732"></a>
<a id="trace-7847"></a>
<a id="trace-7858"></a>
<a id="trace-7877"></a>
<a id="trace-7890"></a>
<a id="trace-7899"></a>
<a id="trace-7917"></a>
<a id="trace-7922"></a>
<a id="trace-7996"></a>
<a id="trace-8002"></a>
<a id="trace-8017"></a>
<a id="trace-8030"></a>
<a id="trace-8041"></a>
<a id="trace-8049"></a>
<a id="trace-8065"></a>
<a id="trace-8072"></a>
<a id="trace-8082"></a>
<a id="trace-8090"></a>
<a id="trace-8165"></a>
<a id="trace-8176"></a>
<a id="trace-8190"></a>
<a id="trace-8194"></a>
<a id="trace-8277"></a>
<a id="trace-8281"></a>
<a id="trace-8296"></a>
<a id="trace-8304"></a>
<a id="trace-8314"></a>
<a id="trace-8335"></a>
<a id="trace-8402"></a>
<a id="trace-8527"></a>
<a id="trace-8540"></a>
<a id="trace-8552"></a>
<a id="trace-8564"></a>
<a id="trace-8569"></a>
<a id="trace-8584"></a>
<a id="trace-8599"></a>
<a id="trace-8607"></a>
<a id="trace-8614"></a>
<a id="trace-8686"></a>
<a id="trace-8692"></a>
<a id="trace-8702"></a>
<a id="trace-8707"></a>
<a id="trace-8720"></a>
<a id="trace-8733"></a>
<a id="trace-8744"></a>
<a id="trace-8752"></a>
<a id="trace-8767"></a>
<a id="trace-8775"></a>
<a id="trace-8848"></a>
<a id="trace-8853"></a>
<a id="trace-8865"></a>
<a id="trace-8870"></a>
<a id="trace-8878"></a>
<a id="trace-8883"></a>
<a id="trace-8890"></a>
<a id="trace-8894"></a>
<a id="trace-8901"></a>
<a id="trace-8906"></a>
<a id="trace-8975"></a>
<a id="trace-8979"></a>
<a id="trace-8988"></a>
<a id="trace-8992"></a>
<a id="trace-8999"></a>
<a id="trace-9005"></a>
<a id="trace-9012"></a>
<a id="trace-9015"></a>
<a id="trace-9022"></a>
<a id="trace-9026"></a>
<a id="trace-9097"></a>
<a id="trace-9103"></a>
<a id="trace-9111"></a>
<a id="trace-9116"></a>
<a id="trace-9126"></a>
<a id="trace-9133"></a>
<a id="trace-9143"></a>
<a id="trace-9149"></a>
<a id="trace-9155"></a>
<a id="trace-9163"></a>
<a id="trace-9235"></a>
<a id="trace-9239"></a>
<a id="trace-9248"></a>
<a id="trace-9255"></a>
<a id="trace-9263"></a>
<a id="trace-9270"></a>
<a id="trace-9278"></a>
<a id="trace-9283"></a>
<a id="trace-9292"></a>
<a id="trace-9298"></a>
<a id="trace-9372"></a>
<a id="trace-9380"></a>
<a id="trace-9389"></a>
<a id="trace-9397"></a>
<a id="trace-9405"></a>
<a id="trace-9417"></a>
<a id="trace-9427"></a>
<a id="trace-9433"></a>
<a id="trace-9440"></a>
<a id="trace-9449"></a>
<a id="trace-9520"></a>
<a id="trace-9524"></a>
<a id="trace-9532"></a>
<a id="trace-9537"></a>
<a id="trace-9544"></a>
<a id="trace-9552"></a>
<a id="trace-9559"></a>
<a id="trace-9564"></a>
<a id="trace-9570"></a>
<a id="trace-9576"></a>
<a id="trace-9647"></a>
<a id="trace-9651"></a>
<a id="trace-9661"></a>
<a id="trace-9667"></a>
<a id="trace-9675"></a>
<a id="trace-9681"></a>
<a id="trace-9688"></a>
<a id="trace-9696"></a>
<a id="trace-9703"></a>
<a id="trace-9710"></a>
<a id="trace-9781"></a>
<a id="trace-9786"></a>
<a id="trace-9795"></a>
<a id="trace-9801"></a>
<a id="trace-9809"></a>
<a id="trace-9816"></a>
<a id="trace-9823"></a>
<a id="trace-9827"></a>
<a id="trace-9833"></a>
<a id="trace-9838"></a>
<a id="trace-9907"></a>
<a id="trace-9911"></a>
<a id="trace-9919"></a>
<a id="trace-9924"></a>
<a id="trace-9931"></a>
<a id="trace-9937"></a>
<a id="trace-9944"></a>
<a id="trace-9948"></a>
<a id="trace-9954"></a>
<a id="trace-9959"></a>
<a id="trace-10027"></a>
<a id="trace-10032"></a>
<a id="trace-10042"></a>
<a id="trace-10048"></a>
<a id="trace-10054"></a>
<a id="trace-10061"></a>
<a id="trace-10070"></a>
<a id="trace-10074"></a>
<a id="trace-10081"></a>
<a id="trace-10087"></a>
<a id="trace-10159"></a>
<a id="trace-10165"></a>
<a id="trace-10173"></a>
<a id="trace-10179"></a>
<a id="trace-10186"></a>
<a id="trace-10192"></a>
<a id="trace-10200"></a>
<a id="trace-10205"></a>
<a id="trace-10211"></a>
<a id="trace-10215"></a>
<a id="trace-10285"></a>
<a id="trace-10290"></a>
<a id="trace-10300"></a>
<a id="trace-10307"></a>
<a id="trace-10313"></a>
<a id="trace-10322"></a>
<a id="trace-10329"></a>
<a id="trace-10335"></a>
<a id="trace-10343"></a>
<a id="trace-10348"></a>
<a id="trace-10419"></a>
<a id="trace-10423"></a>
<a id="trace-10428"></a>
<a id="trace-10434"></a>
<a id="trace-10441"></a>
<a id="trace-10449"></a>
<a id="trace-10456"></a>
<a id="trace-10462"></a>
<a id="trace-10469"></a>
<a id="trace-10475"></a>
<a id="trace-10544"></a>
<a id="trace-10548"></a>
<a id="trace-10553"></a>
<a id="trace-10558"></a>
<a id="trace-10563"></a>
<a id="trace-10570"></a>
<a id="trace-10579"></a>
<a id="trace-10586"></a>
<a id="trace-10593"></a>
<a id="trace-10599"></a>
<a id="trace-10669"></a>
<a id="trace-10674"></a>
<a id="trace-10680"></a>
<a id="trace-10685"></a>
<a id="trace-10692"></a>
<a id="trace-10699"></a>
<a id="trace-10708"></a>
<a id="trace-10715"></a>
<a id="trace-10722"></a>
<a id="trace-10728"></a>
<a id="trace-10797"></a>
<a id="trace-10801"></a>
<a id="trace-10807"></a>
<a id="trace-10812"></a>
<a id="trace-10818"></a>
<a id="trace-10825"></a>
<a id="trace-10831"></a>
<a id="trace-10837"></a>
<a id="trace-10844"></a>
<a id="trace-10849"></a>
<a id="trace-10919"></a>
<a id="trace-10922"></a>
<a id="trace-10928"></a>
<a id="trace-10933"></a>
<a id="trace-10939"></a>
<a id="trace-10946"></a>
<a id="trace-10953"></a>
<a id="trace-10959"></a>
<a id="trace-10968"></a>
<a id="trace-10974"></a>
<a id="trace-11044"></a>
<a id="trace-11049"></a>
<a id="trace-11058"></a>
<a id="trace-11063"></a>
<a id="trace-11070"></a>
<a id="trace-11076"></a>
<a id="trace-11084"></a>
<a id="trace-11091"></a>
<a id="trace-11097"></a>
<a id="trace-11102"></a>
<a id="trace-11172"></a>
<a id="trace-11176"></a>
<a id="trace-11182"></a>
<a id="trace-11186"></a>
<a id="trace-11192"></a>
<a id="trace-11196"></a>
<a id="trace-11205"></a>
<a id="trace-11212"></a>
<a id="trace-11219"></a>
<a id="trace-11225"></a>
<a id="trace-11295"></a>
<a id="trace-11300"></a>
<a id="trace-11306"></a>
<a id="trace-11312"></a>
<a id="trace-11318"></a>
<a id="trace-11323"></a>
<a id="trace-11333"></a>
<a id="trace-11338"></a>
<a id="trace-11344"></a>
<a id="trace-11350"></a>
<a id="trace-11421"></a>
<a id="trace-11425"></a>
<a id="trace-11430"></a>
<a id="trace-11435"></a>
<a id="trace-11442"></a>
<a id="trace-11447"></a>
<a id="trace-11455"></a>
<a id="trace-11460"></a>
<a id="trace-11465"></a>
<a id="trace-11471"></a>
<a id="trace-11541"></a>
<a id="trace-11545"></a>
<a id="trace-11551"></a>
<a id="trace-11555"></a>
<a id="trace-11561"></a>
<a id="trace-11566"></a>
<a id="trace-11577"></a>
<a id="trace-11583"></a>
<a id="trace-11590"></a>
<a id="trace-11596"></a>
<a id="trace-11666"></a>
<a id="trace-11670"></a>
<a id="trace-11677"></a>
<a id="trace-11685"></a>
<a id="trace-11690"></a>
<a id="trace-11697"></a>
<a id="trace-11703"></a>
<a id="trace-11708"></a>
<a id="trace-11714"></a>
<a id="trace-11719"></a>
<a id="trace-11789"></a>
<a id="trace-11794"></a>
<a id="trace-11799"></a>
<a id="trace-11807"></a>
<a id="trace-11813"></a>
<a id="trace-11819"></a>
<a id="trace-11827"></a>
<a id="trace-11832"></a>
<a id="trace-11839"></a>
<a id="trace-11845"></a>
<a id="trace-11915"></a>
<a id="trace-11918"></a>
<a id="trace-11924"></a>
<a id="trace-11931"></a>
<a id="trace-11937"></a>
<a id="trace-11942"></a>
<a id="trace-11949"></a>
<a id="trace-11954"></a>
<a id="trace-11961"></a>
<a id="trace-11967"></a>
<a id="trace-12037"></a>
<a id="trace-12041"></a>
<a id="trace-12047"></a>
<a id="trace-12054"></a>
<a id="trace-12060"></a>
<a id="trace-12068"></a>
<a id="trace-12075"></a>
<a id="trace-12082"></a>
<a id="trace-12092"></a>
<a id="trace-12102"></a>
<a id="trace-12176"></a>
<a id="trace-12181"></a>
<a id="trace-12193"></a>
<a id="trace-12199"></a>
<a id="trace-12212"></a>
<a id="trace-12220"></a>
<a id="trace-12227"></a>
<a id="trace-12233"></a>
<a id="trace-12238"></a>
<a id="trace-12306"></a>
<a id="trace-12309"></a>
<a id="trace-12318"></a>
<a id="trace-12325"></a>
<a id="trace-12333"></a>
<a id="trace-12341"></a>
<a id="trace-12349"></a>
<a id="trace-12355"></a>
<a id="trace-12360"></a>
<a id="trace-12366"></a>
<a id="trace-12433"></a>
<a id="trace-12438"></a>
<a id="trace-12447"></a>
<a id="trace-12457"></a>
<a id="trace-12464"></a>
<a id="trace-12470"></a>
<a id="trace-12480"></a>
<a id="trace-12491"></a>
<a id="trace-12501"></a>
<a id="trace-12508"></a>
<a id="trace-12577"></a>
<a id="trace-12585"></a>
<a id="trace-12595"></a>
<a id="trace-12602"></a>
<a id="trace-12611"></a>
<a id="trace-12618"></a>
<a id="trace-12626"></a>
<a id="trace-12634"></a>
<a id="trace-12641"></a>
<a id="trace-12648"></a>
<a id="trace-12718"></a>
<a id="trace-12727"></a>
<a id="trace-12737"></a>
<a id="trace-12744"></a>
<a id="trace-12753"></a>
<a id="trace-12758"></a>
<a id="trace-12766"></a>
<a id="trace-12772"></a>
<a id="trace-12778"></a>
<a id="trace-12786"></a>
<a id="trace-12854"></a>
<a id="trace-12859"></a>
<a id="trace-12869"></a>
<a id="trace-12877"></a>
<a id="trace-12887"></a>
<a id="trace-12898"></a>
<a id="trace-12909"></a>
<a id="trace-12914"></a>
<a id="trace-12922"></a>
<a id="trace-12930"></a>
<a id="trace-12996"></a>
<a id="trace-13002"></a>
<a id="trace-13011"></a>
<a id="trace-13018"></a>
<a id="trace-13027"></a>
<a id="trace-13032"></a>
<a id="trace-13045"></a>
<a id="trace-13050"></a>
<a id="trace-13062"></a>
<a id="trace-13070"></a>
<a id="trace-13139"></a>
<a id="trace-13146"></a>
<a id="trace-13154"></a>
<a id="trace-13162"></a>
<a id="trace-13170"></a>
<a id="trace-13176"></a>
<a id="trace-13186"></a>
<a id="trace-13192"></a>
<a id="trace-13201"></a>
<a id="trace-13209"></a>
<a id="trace-13277"></a>
<a id="trace-13284"></a>
<a id="trace-13295"></a>
<a id="trace-13304"></a>
<a id="trace-13313"></a>
<a id="trace-13321"></a>
<a id="trace-13331"></a>
<a id="trace-13336"></a>
<a id="trace-13344"></a>
<a id="trace-13350"></a>
<a id="trace-13419"></a>
<a id="trace-13424"></a>
<a id="trace-13434"></a>
<a id="trace-13440"></a>
<a id="trace-13448"></a>
<a id="trace-13460"></a>
<a id="trace-13468"></a>
<a id="trace-13476"></a>
<a id="trace-13488"></a>
<a id="trace-13495"></a>
<a id="trace-13564"></a>
<a id="trace-13569"></a>
<a id="trace-13579"></a>
<a id="trace-13586"></a>
<a id="trace-13593"></a>
<a id="trace-13600"></a>
<a id="trace-13608"></a>
<a id="trace-13616"></a>
<a id="trace-13625"></a>
<a id="trace-13634"></a>
<a id="trace-13703"></a>
<a id="trace-13708"></a>
<a id="trace-13718"></a>
<a id="trace-13727"></a>
<a id="trace-13736"></a>
<a id="trace-13742"></a>
<a id="trace-13750"></a>
<a id="trace-13756"></a>
<a id="trace-13765"></a>
<a id="trace-13773"></a>
<a id="trace-13840"></a>
<a id="trace-13846"></a>
<a id="trace-13857"></a>
<a id="trace-13864"></a>
<a id="trace-13874"></a>
<a id="trace-13880"></a>
<a id="trace-13891"></a>
<a id="trace-13899"></a>
<a id="trace-13909"></a>
<a id="trace-13916"></a>
<a id="trace-13986"></a>
<a id="trace-13992"></a>
<a id="trace-14000"></a>
<a id="trace-14008"></a>
<a id="trace-14017"></a>
<a id="trace-14022"></a>
<a id="trace-14032"></a>
<a id="trace-14040"></a>
<a id="trace-14049"></a>
<a id="trace-14056"></a>
<a id="trace-14124"></a>
<a id="trace-14129"></a>
<a id="trace-14141"></a>
<a id="trace-14148"></a>
<a id="trace-14155"></a>
<a id="trace-14162"></a>
<a id="trace-14171"></a>
<a id="trace-14178"></a>
<a id="trace-14186"></a>
<a id="trace-14193"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48299101370162295, 'next_transition': 351}.
<a id="trace-619"></a>
<a id="trace-631"></a>
<a id="trace-640"></a>
<a id="trace-722"></a>
<a id="trace-731"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999844067385675, 'next_transition': 631}.
<a id="trace-737"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 737): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 644. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36162161238151275, 'next_transition': 933}.
<a id="trace-933"></a>
<a id="trace-1014"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 933): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 647. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4485468517398146, 'next_transition': 1014}.
<a id="trace-142"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299936538459713, 'next_transition': 1061}.
<a id="trace-1035"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1035): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1035. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299936538459713, 'next_transition': 1061}.
<a id="trace-1036"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1036): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1036. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299936538459713, 'next_transition': 1061}.
<a id="trace-1061"></a>
<a id="trace-1079"></a>
<a id="trace-1160"></a>
<a id="trace-1175"></a>
<a id="trace-1198"></a>
<a id="trace-1218"></a>
<a id="trace-1234"></a>
<a id="trace-1247"></a>
<a id="trace-1281"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 1061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1036. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9174433333905633, 'next_transition': 1079}.
<a id="trace-1288"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1288): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1085. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3100735570130911, 'next_transition': 1455}.
<a id="trace-1289"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1289): received platoon directive. Knowledge: actor memory at 15.00s, trace 1085. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3100735570130911, 'next_transition': 1455}.
<a id="trace-1455"></a>
<a id="trace-1473"></a>
<a id="trace-1560"></a>
<a id="trace-1585"></a>
<a id="trace-1623"></a>
<a id="trace-1681"></a>
<a id="trace-1716"></a>
<a id="trace-1735"></a>
<a id="trace-1819"></a>
<a id="trace-1827"></a>
- 19.25s–25.75s (×10), actor 5, squad 0 (trace 1455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1088. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5899812803485558, 'next_transition': 1473}.
<a id="trace-1844"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 1844): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45788814266973193, 'next_transition': 2139}.
<a id="trace-1845"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 1845): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45788814266973193, 'next_transition': 2139}.
<a id="trace-1846"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 1846): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45788814266973193, 'next_transition': 2139}.
<a id="trace-2139"></a>
<a id="trace-2166"></a>
<a id="trace-2213"></a>
<a id="trace-2287"></a>
<a id="trace-2292"></a>
- 27.25s–30.75s (×5), actor 5, squad 0 (trace 2139): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1746. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5625516877871732, 'next_transition': 2166}.
<a id="trace-2304"></a>
- 31.30s–31.30s (×1), actor 1, squad 0 (trace 2304): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199375091458115, 'next_transition': 2313}.
<a id="trace-2306"></a>
- 31.30s–31.30s (×1), actor 1, squad 0 (trace 2306): NeedSupport. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199375091458115, 'next_transition': 2313}.
<a id="trace-2313"></a>
<a id="trace-2327"></a>
- 31.75s–32.25s (×2), actor 5, squad 0 (trace 2313): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2219. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3695948290817936, 'next_transition': 2327}.
<a id="trace-2333"></a>
- 32.30s–32.30s (×1), actor 1, squad 0 (trace 2333): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.139265016684142, 'next_transition': 2476}.
<a id="trace-2337"></a>
- 32.30s–32.30s (×1), actor 1, squad 0 (trace 2337): MoveTactically. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.139265016684142, 'next_transition': 2476}.
<a id="trace-2338"></a>
- 32.30s–32.30s (×1), actor 1, squad 0 (trace 2338): traveling overwatch. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.139265016684142, 'next_transition': 2476}.
<a id="trace-2339"></a>
- 32.30s–32.30s (×1), actor 1, squad 0 (trace 2339): Reorganise complete. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.139265016684142, 'next_transition': 2476}.
<a id="trace-2476"></a>
<a id="trace-2491"></a>
- 33.25s–33.75s (×2), actor 5, squad 0 (trace 2476): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2219. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040057933061174, 'next_transition': 2491}.
<a id="trace-2512"></a>
- 34.65s–34.65s (×1), actor 1, squad 0 (trace 2512): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2217. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.346769587047153, 'next_transition': 2744}.
<a id="trace-2744"></a>
<a id="trace-2751"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 2744): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2609. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5974697916628973, 'next_transition': 2751}.
<a id="trace-2763"></a>
- 39.10s–39.10s (×1), actor 1, squad 0 (trace 2763): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2607. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9078476153164399, 'next_transition': 2899}.
<a id="trace-2764"></a>
- 39.10s–39.10s (×1), actor 1, squad 0 (trace 2764): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2607. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9078476153164399, 'next_transition': 2899}.
<a id="trace-2765"></a>
- 39.10s–39.10s (×1), actor 1, squad 0 (trace 2765): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2607. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9078476153164399, 'next_transition': 2899}.
<a id="trace-2899"></a>
<a id="trace-2984"></a>
- 39.75s–40.25s (×2), actor 5, squad 0 (trace 2899): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2609. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9052976519035948, 'next_transition': 2984}.
<a id="trace-2992"></a>
- 40.45s–40.45s (×1), actor 1, squad 0 (trace 2992): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 2908. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30686786182910125, 'next_transition': 3140}.
<a id="trace-3140"></a>
<a id="trace-3154"></a>
<a id="trace-3168"></a>
<a id="trace-3181"></a>
<a id="trace-3198"></a>
<a id="trace-3211"></a>
- 40.75s–43.25s (×6), actor 5, squad 0 (trace 3140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2910. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.43726199133737, 'next_transition': 3154}.
<a id="trace-3218"></a>
- 43.30s–43.30s (×1), actor 5, squad 0 (trace 3218): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 43.30s, trace 3218. Next observer evidence: None.
<a id="trace-3219"></a>
- 43.30s–43.30s (×1), actor 5, squad 0 (trace 3219): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 43.30s, trace 3219. Next observer evidence: None.
<a id="trace-394"></a>
- 43.30s–43.30s (×1), actor 5, squad 0 (events line 394): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4559971663889851, 'next_transition': 3230}.
<a id="trace-3230"></a>
- 43.75s–43.75s (×1), actor 5, squad 0 (trace 3230): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 43.30s, trace 3219. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2671324568334825, 'next_transition': 3253}.
<a id="trace-3253"></a>
- 44.45s–44.45s (×1), actor 1, squad 0 (trace 3253): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 2908. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.754758545869761, 'next_transition': 3556}.
<a id="trace-3254"></a>
- 44.45s–44.45s (×1), actor 1, squad 0 (trace 3254): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 2908. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.754758545869761, 'next_transition': 3556}.
<a id="trace-3556"></a>
<a id="trace-3568"></a>
<a id="trace-3578"></a>
<a id="trace-3592"></a>
<a id="trace-3606"></a>
<a id="trace-3637"></a>
<a id="trace-3647"></a>
<a id="trace-3656"></a>
<a id="trace-3733"></a>
<a id="trace-3738"></a>
<a id="trace-3748"></a>
<a id="trace-3767"></a>
<a id="trace-3780"></a>
<a id="trace-3791"></a>
<a id="trace-3801"></a>
<a id="trace-3818"></a>
<a id="trace-3826"></a>
- 45.75s–54.75s (×17), actor 5, squad 0 (trace 3556): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3467. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6783492235921584, 'next_transition': 3568}.
<a id="trace-3902"></a>
- 55.45s–55.45s (×1), actor 1, squad 0 (trace 3902): NeedSupport. Knowledge: actor memory at 55.00s, trace 3832. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1259997539680137, 'next_transition': 3909}.
<a id="trace-3909"></a>
<a id="trace-3924"></a>
<a id="trace-3935"></a>
<a id="trace-3949"></a>
<a id="trace-3956"></a>
<a id="trace-3973"></a>
- 55.75s–58.25s (×6), actor 5, squad 0 (trace 3909): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3834. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37799987830685855, 'next_transition': 3924}.
<a id="trace-3980"></a>
- 58.55s–58.55s (×1), actor 1, squad 0 (trace 3980): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3832. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4089}.
<a id="trace-3981"></a>
- 58.55s–58.55s (×1), actor 1, squad 0 (trace 3981): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3832. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4089}.
<a id="trace-4089"></a>
<a id="trace-4099"></a>
<a id="trace-4120"></a>
<a id="trace-4194"></a>
<a id="trace-4213"></a>
<a id="trace-4231"></a>
<a id="trace-4240"></a>
<a id="trace-4258"></a>
<a id="trace-4270"></a>
<a id="trace-4282"></a>
<a id="trace-4290"></a>
<a id="trace-4305"></a>
<a id="trace-4317"></a>
<a id="trace-4393"></a>
- 58.75s–65.25s (×14), actor 5, squad 0 (trace 4089): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3834. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4099}.
<a id="trace-4398"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 4398): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 4325. Next observer evidence: None.
<a id="trace-4406"></a>
<a id="trace-4452"></a>
<a id="trace-4460"></a>
<a id="trace-4520"></a>
<a id="trace-4529"></a>
<a id="trace-4607"></a>
<a id="trace-4612"></a>
<a id="trace-4621"></a>
<a id="trace-4639"></a>
<a id="trace-4660"></a>
<a id="trace-4666"></a>
<a id="trace-4681"></a>
<a id="trace-4688"></a>
<a id="trace-4759"></a>
<a id="trace-4766"></a>
<a id="trace-4776"></a>
<a id="trace-4784"></a>
<a id="trace-4794"></a>
<a id="trace-4801"></a>
<a id="trace-4817"></a>
<a id="trace-4901"></a>
<a id="trace-4914"></a>
<a id="trace-4929"></a>
<a id="trace-4935"></a>
<a id="trace-4948"></a>
<a id="trace-4959"></a>
<a id="trace-4971"></a>
- 65.75s–84.25s (×27), actor 5, squad 0 (trace 4406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4327. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7121958730673916, 'next_transition': 4452}.
<a id="trace-636"></a>
- 84.70s–84.70s (×1), actor 5, squad 0 (events line 636): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4976"></a>
- 84.70s–84.70s (×1), actor 5, squad 0 (trace 4976): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.952053 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 84.70s, trace 4976. Next observer evidence: None.
<a id="trace-4977"></a>
- 84.70s–84.70s (×1), actor 5, squad 0 (trace 4977): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.952053 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 84.70s, trace 4977. Next observer evidence: None.
<a id="trace-4979"></a>
<a id="trace-5050"></a>
<a id="trace-5067"></a>
<a id="trace-5081"></a>
<a id="trace-5092"></a>
- 84.75s–88.25s (×5), actor 5, squad 0 (trace 4979): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.70s, trace 4977. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5050}.
<a id="trace-5106"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 5106): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 4984. Next observer evidence: None.
<a id="trace-5107"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 5107): MoveTactically. Knowledge: actor memory at 85.00s, trace 4984. Next observer evidence: None.
<a id="trace-5108"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 5108): . Knowledge: actor memory at 85.00s, trace 4984. Next observer evidence: None.
<a id="trace-5140"></a>
<a id="trace-5146"></a>
- 89.25s–89.75s (×2), actor 5, squad 0 (trace 5140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4986. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5146}.
<a id="trace-5220"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 5220): received platoon directive. Knowledge: actor memory at 90.00s, trace 5155. Next observer evidence: None.
<a id="trace-5251"></a>
<a id="trace-5269"></a>
- 90.25s–90.75s (×2), actor 5, squad 0 (trace 5251): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5157. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5269}.
<a id="trace-5279"></a>
- 91.20s–91.20s (×1), actor 1, squad 0 (trace 5279): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 5155. Next observer evidence: None.
<a id="trace-5388"></a>
<a id="trace-5406"></a>
<a id="trace-5426"></a>
<a id="trace-5445"></a>
<a id="trace-5465"></a>
<a id="trace-5473"></a>
<a id="trace-5498"></a>
<a id="trace-5577"></a>
<a id="trace-5591"></a>
<a id="trace-5604"></a>
<a id="trace-5619"></a>
<a id="trace-5629"></a>
<a id="trace-5651"></a>
<a id="trace-5658"></a>
<a id="trace-5671"></a>
<a id="trace-5775"></a>
- 91.25s–101.25s (×16), actor 5, squad 0 (trace 5388): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5157. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5406}.
<a id="trace-5780"></a>
- 101.55s–101.55s (×1), actor 1, squad 0 (trace 5780): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 5682. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780310551305296, 'next_transition': 5984}.
<a id="trace-5984"></a>
<a id="trace-5999"></a>
<a id="trace-6022"></a>
<a id="trace-6043"></a>
<a id="trace-6064"></a>
<a id="trace-6182"></a>
<a id="trace-6201"></a>
<a id="trace-6213"></a>
<a id="trace-6229"></a>
<a id="trace-6250"></a>
<a id="trace-6258"></a>
<a id="trace-6347"></a>
<a id="trace-6361"></a>
- 101.75s–111.25s (×13), actor 5, squad 0 (trace 5984): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5684. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1384862008312469, 'next_transition': 5999}.
<a id="trace-6364"></a>
- 111.25s–111.25s (×1), actor 1, squad 0 (trace 6364): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 6264. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6421}.
<a id="trace-6421"></a>
<a id="trace-6448"></a>
<a id="trace-6460"></a>
<a id="trace-6474"></a>
<a id="trace-6490"></a>
<a id="trace-6570"></a>
- 111.75s–115.25s (×6), actor 5, squad 0 (trace 6421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6266. Next observer evidence: {'until': 112.6, 'shots': 10, 'casualties': 0, 'mean_displacement': 0.40950475845831147, 'next_transition': 6448}.
<a id="trace-6578"></a>
- 115.70s–115.70s (×1), actor 1, squad 0 (trace 6578): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 6504. Next observer evidence: None.
<a id="trace-6579"></a>
- 115.70s–115.70s (×1), actor 1, squad 0 (trace 6579): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 115.00s, trace 6504. Next observer evidence: None.
<a id="trace-6871"></a>
<a id="trace-6885"></a>
<a id="trace-6914"></a>
<a id="trace-6927"></a>
<a id="trace-6948"></a>
- 115.75s–118.25s (×5), actor 5, squad 0 (trace 6871): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6506. Next observer evidence: {'until': 116.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.37799933121633966, 'next_transition': 6885}.
<a id="trace-6975"></a>
- 119.35s–119.35s (×1), actor 1, squad 0 (trace 6975): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 6504. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520012384810837, 'next_transition': 7257}.
<a id="trace-6976"></a>
- 119.35s–119.35s (×1), actor 1, squad 0 (trace 6976): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 6504. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520012384810837, 'next_transition': 7257}.
<a id="trace-7257"></a>
<a id="trace-7337"></a>
<a id="trace-7348"></a>
<a id="trace-7364"></a>
- 119.75s–121.25s (×4), actor 5, squad 0 (trace 7257): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6506. Next observer evidence: {'until': 120.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18900049575596362, 'next_transition': 7337}.
<a id="trace-7374"></a>
- 121.55s–121.55s (×1), actor 1, squad 0 (trace 7374): Fixing. Knowledge: actor memory at 120.00s, trace 7262. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37798897959547983, 'next_transition': 7380}.
<a id="trace-7380"></a>
<a id="trace-7396"></a>
<a id="trace-7418"></a>
<a id="trace-7424"></a>
<a id="trace-7437"></a>
<a id="trace-7446"></a>
<a id="trace-7532"></a>
<a id="trace-7549"></a>
<a id="trace-7562"></a>
<a id="trace-7573"></a>
<a id="trace-7582"></a>
<a id="trace-7609"></a>
<a id="trace-7617"></a>
<a id="trace-7627"></a>
<a id="trace-7706"></a>
- 121.75s–130.30s (×15), actor 5, squad 0 (trace 7380): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7264. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0589818270864502, 'next_transition': 7396}.
<a id="trace-7719"></a>
- 131.05s–131.05s (×1), actor 1, squad 0 (trace 7719): NeedSupport. Knowledge: actor memory at 130.00s, trace 7632. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24852116472862917, 'next_transition': 7730}.
<a id="trace-7730"></a>
- 131.30s–131.30s (×1), actor 5, squad 0 (trace 7730): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 7634. Next observer evidence: {'until': 131.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30296733800024656, 'next_transition': 7737}.
<a id="trace-7737"></a>
- 131.65s–131.65s (×1), actor 1, squad 0 (trace 7737): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 7632. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24058380014102304, 'next_transition': 7845}.
<a id="trace-7738"></a>
- 131.65s–131.65s (×1), actor 1, squad 0 (trace 7738): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 7632. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24058380014102304, 'next_transition': 7845}.
<a id="trace-7845"></a>
<a id="trace-7856"></a>
<a id="trace-7888"></a>
<a id="trace-7897"></a>
<a id="trace-7920"></a>
<a id="trace-8000"></a>
<a id="trace-8015"></a>
<a id="trace-8028"></a>
<a id="trace-8047"></a>
<a id="trace-8063"></a>
<a id="trace-8070"></a>
<a id="trace-8080"></a>
<a id="trace-8088"></a>
<a id="trace-8163"></a>
<a id="trace-8174"></a>
- 131.80s–140.80s (×15), actor 5, squad 0 (trace 7845): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 7634. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4862819762233448, 'next_transition': 7856}.
<a id="trace-8181"></a>
- 141.15s–141.15s (×1), actor 1, squad 0 (trace 8181): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 140.00s, trace 8094. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248860301923257, 'next_transition': 8188}.
<a id="trace-8188"></a>
<a id="trace-8192"></a>
- 141.30s–141.80s (×2), actor 5, squad 0 (trace 8188): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 8096. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175095774790214, 'next_transition': 8192}.
<a id="trace-8197"></a>
- 142.15s–142.15s (×1), actor 1, squad 0 (trace 8197): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 8094. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3753192625694423, 'next_transition': 8275}.
<a id="trace-8200"></a>
- 142.15s–142.15s (×1), actor 1, squad 0 (trace 8200): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 8094. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3753192625694423, 'next_transition': 8275}.
<a id="trace-8201"></a>
- 142.15s–142.15s (×1), actor 1, squad 0 (trace 8201): Reorganise complete: known contact. Knowledge: actor memory at 140.00s, trace 8094. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3753192625694423, 'next_transition': 8275}.
<a id="trace-8275"></a>
<a id="trace-8294"></a>
<a id="trace-8302"></a>
<a id="trace-8333"></a>
<a id="trace-8400"></a>
- 142.30s–145.30s (×5), actor 5, squad 0 (trace 8275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 8096. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749899012450195, 'next_transition': 8294}.
<a id="trace-8405"></a>
- 145.75s–145.75s (×1), actor 1, squad 0 (trace 8405): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 145.00s, trace 8336. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.417504647879369, 'next_transition': 8538}.
<a id="trace-8406"></a>
- 145.75s–145.75s (×1), actor 1, squad 0 (trace 8406): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 8336. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.417504647879369, 'next_transition': 8538}.
<a id="trace-8538"></a>
<a id="trace-8550"></a>
<a id="trace-8562"></a>
<a id="trace-8582"></a>
<a id="trace-8597"></a>
<a id="trace-8612"></a>
<a id="trace-8684"></a>
<a id="trace-8690"></a>
<a id="trace-8700"></a>
<a id="trace-8731"></a>
<a id="trace-8742"></a>
- 146.30s–153.30s (×11), actor 5, squad 0 (trace 8538): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8338. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2723115320791432, 'next_transition': 8550}.
<a id="trace-1072"></a>
- 153.80s–153.80s (×1), actor 5, squad 0 (events line 1072): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299989509531552, 'next_transition': 8765}.
<a id="trace-8750"></a>
- 153.80s–153.80s (×1), actor 5, squad 0 (trace 8750): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 8617. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299989509531552, 'next_transition': 8765}.
<a id="trace-8753"></a>
- 153.80s–153.80s (×1), actor 5, squad 0 (trace 8753): renew committed intent (75 s lifetime). Knowledge: actor memory at 153.80s, trace 8753. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299989509531552, 'next_transition': 8765}.
<a id="trace-8765"></a>
<a id="trace-8773"></a>
<a id="trace-8846"></a>
<a id="trace-8851"></a>
<a id="trace-8863"></a>
<a id="trace-8868"></a>
<a id="trace-8876"></a>
<a id="trace-8888"></a>
<a id="trace-8892"></a>
<a id="trace-8899"></a>
<a id="trace-8904"></a>
<a id="trace-8973"></a>
<a id="trace-8977"></a>
<a id="trace-8986"></a>
<a id="trace-8997"></a>
<a id="trace-9003"></a>
<a id="trace-9010"></a>
<a id="trace-9020"></a>
<a id="trace-9095"></a>
<a id="trace-9101"></a>
<a id="trace-9124"></a>
<a id="trace-9131"></a>
<a id="trace-9141"></a>
<a id="trace-9147"></a>
<a id="trace-9161"></a>
<a id="trace-9233"></a>
<a id="trace-9237"></a>
<a id="trace-9253"></a>
<a id="trace-9261"></a>
<a id="trace-9268"></a>
<a id="trace-9276"></a>
<a id="trace-9290"></a>
<a id="trace-9296"></a>
<a id="trace-9370"></a>
<a id="trace-9378"></a>
<a id="trace-9387"></a>
<a id="trace-9395"></a>
- 154.30s–176.80s (×37), actor 5, squad 0 (trace 8765): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 153.80s, trace 8753. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7991742131008563, 'next_transition': 8773}.
<a id="trace-9406"></a>
- 177.30s–177.30s (×1), actor 1, squad 0 (trace 9406): NeedSupport. Knowledge: actor memory at 175.00s, trace 9303. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32229098409860923, 'next_transition': 9415}.
<a id="trace-9415"></a>
<a id="trace-9425"></a>
<a id="trace-9438"></a>
<a id="trace-9447"></a>
<a id="trace-9518"></a>
<a id="trace-9522"></a>
<a id="trace-9530"></a>
<a id="trace-9535"></a>
<a id="trace-9542"></a>
<a id="trace-9550"></a>
<a id="trace-9557"></a>
<a id="trace-9562"></a>
<a id="trace-9568"></a>
<a id="trace-9574"></a>
<a id="trace-9645"></a>
<a id="trace-9649"></a>
<a id="trace-9659"></a>
<a id="trace-9665"></a>
<a id="trace-9673"></a>
<a id="trace-9686"></a>
<a id="trace-9694"></a>
<a id="trace-9701"></a>
<a id="trace-9708"></a>
<a id="trace-9779"></a>
<a id="trace-9784"></a>
<a id="trace-9793"></a>
<a id="trace-9799"></a>
<a id="trace-9807"></a>
<a id="trace-9814"></a>
<a id="trace-9821"></a>
<a id="trace-9825"></a>
<a id="trace-9831"></a>
<a id="trace-9836"></a>
<a id="trace-9905"></a>
<a id="trace-9909"></a>
<a id="trace-9917"></a>
<a id="trace-9922"></a>
<a id="trace-9942"></a>
<a id="trace-9946"></a>
<a id="trace-9952"></a>
<a id="trace-9957"></a>
<a id="trace-10030"></a>
<a id="trace-10040"></a>
<a id="trace-10046"></a>
<a id="trace-10052"></a>
<a id="trace-10059"></a>
<a id="trace-10068"></a>
<a id="trace-10072"></a>
<a id="trace-10085"></a>
<a id="trace-10157"></a>
<a id="trace-10163"></a>
<a id="trace-10171"></a>
<a id="trace-10177"></a>
<a id="trace-10184"></a>
<a id="trace-10190"></a>
<a id="trace-10198"></a>
<a id="trace-10209"></a>
<a id="trace-10283"></a>
<a id="trace-10288"></a>
<a id="trace-10298"></a>
<a id="trace-10305"></a>
<a id="trace-10311"></a>
<a id="trace-10320"></a>
<a id="trace-10333"></a>
<a id="trace-10341"></a>
<a id="trace-10346"></a>
<a id="trace-10417"></a>
<a id="trace-10432"></a>
<a id="trace-10439"></a>
<a id="trace-10447"></a>
<a id="trace-10454"></a>
<a id="trace-10467"></a>
<a id="trace-10473"></a>
<a id="trace-10542"></a>
<a id="trace-10546"></a>
<a id="trace-10556"></a>
<a id="trace-10568"></a>
- 177.80s–222.80s (×77), actor 5, squad 0 (trace 9415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 9305. Next observer evidence: {'until': 178.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9425}.
<a id="trace-1238"></a>
- 222.85s–222.85s (×1), actor 5, squad 0 (events line 1238): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10571"></a>
- 222.85s–222.85s (×1), actor 5, squad 0 (trace 10571): renew committed intent (75 s lifetime). Knowledge: actor memory at 222.85s, trace 10571. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10577}.
<a id="trace-10577"></a>
<a id="trace-10584"></a>
<a id="trace-10591"></a>
<a id="trace-10597"></a>
<a id="trace-10667"></a>
<a id="trace-10672"></a>
<a id="trace-10678"></a>
<a id="trace-10690"></a>
<a id="trace-10697"></a>
<a id="trace-10706"></a>
<a id="trace-10713"></a>
<a id="trace-10726"></a>
<a id="trace-10799"></a>
<a id="trace-10805"></a>
<a id="trace-10810"></a>
<a id="trace-10816"></a>
<a id="trace-10823"></a>
<a id="trace-10835"></a>
<a id="trace-10842"></a>
<a id="trace-10847"></a>
<a id="trace-10917"></a>
<a id="trace-10926"></a>
<a id="trace-10931"></a>
<a id="trace-10937"></a>
<a id="trace-10944"></a>
<a id="trace-10951"></a>
<a id="trace-10957"></a>
<a id="trace-10966"></a>
<a id="trace-10972"></a>
<a id="trace-11042"></a>
<a id="trace-11047"></a>
<a id="trace-11061"></a>
<a id="trace-11068"></a>
<a id="trace-11089"></a>
<a id="trace-11095"></a>
<a id="trace-11100"></a>
<a id="trace-11170"></a>
<a id="trace-11174"></a>
<a id="trace-11180"></a>
<a id="trace-11190"></a>
<a id="trace-11203"></a>
<a id="trace-11210"></a>
<a id="trace-11217"></a>
<a id="trace-11223"></a>
<a id="trace-11293"></a>
<a id="trace-11298"></a>
<a id="trace-11304"></a>
<a id="trace-11310"></a>
<a id="trace-11316"></a>
<a id="trace-11321"></a>
<a id="trace-11331"></a>
<a id="trace-11336"></a>
<a id="trace-11342"></a>
<a id="trace-11348"></a>
<a id="trace-11419"></a>
<a id="trace-11423"></a>
<a id="trace-11433"></a>
<a id="trace-11440"></a>
<a id="trace-11445"></a>
<a id="trace-11453"></a>
<a id="trace-11458"></a>
<a id="trace-11469"></a>
<a id="trace-11543"></a>
<a id="trace-11549"></a>
<a id="trace-11564"></a>
<a id="trace-11575"></a>
<a id="trace-11581"></a>
<a id="trace-11588"></a>
<a id="trace-11594"></a>
<a id="trace-11675"></a>
<a id="trace-11683"></a>
<a id="trace-11695"></a>
<a id="trace-11706"></a>
<a id="trace-11712"></a>
<a id="trace-11717"></a>
<a id="trace-11792"></a>
<a id="trace-11805"></a>
<a id="trace-11811"></a>
<a id="trace-11817"></a>
<a id="trace-11825"></a>
<a id="trace-11830"></a>
<a id="trace-11837"></a>
<a id="trace-11843"></a>
<a id="trace-11913"></a>
<a id="trace-11922"></a>
<a id="trace-11929"></a>
<a id="trace-11935"></a>
<a id="trace-11940"></a>
<a id="trace-11947"></a>
<a id="trace-11952"></a>
<a id="trace-11959"></a>
<a id="trace-11965"></a>
<a id="trace-12035"></a>
<a id="trace-12045"></a>
<a id="trace-12058"></a>
<a id="trace-12066"></a>
<a id="trace-12073"></a>
<a id="trace-12080"></a>
<a id="trace-12090"></a>
<a id="trace-12100"></a>
<a id="trace-12174"></a>
<a id="trace-12179"></a>
<a id="trace-12191"></a>
<a id="trace-12197"></a>
<a id="trace-12204"></a>
<a id="trace-12210"></a>
<a id="trace-12218"></a>
<a id="trace-12225"></a>
<a id="trace-12231"></a>
<a id="trace-12236"></a>
<a id="trace-12304"></a>
<a id="trace-12316"></a>
<a id="trace-12323"></a>
- 223.30s–291.80s (×113), actor 5, squad 0 (trace 10577): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 222.85s, trace 10571. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10584}.
<a id="trace-12326"></a>
- 291.90s–291.90s (×1), actor 5, squad 0 (trace 12326): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.90s, trace 12326. Next observer evidence: None.
<a id="trace-1378"></a>
- 291.90s–291.90s (×1), actor 5, squad 0 (events line 1378): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12331}.
<a id="trace-12331"></a>
<a id="trace-12339"></a>
<a id="trace-12364"></a>
<a id="trace-12436"></a>
<a id="trace-12445"></a>
<a id="trace-12455"></a>
<a id="trace-12462"></a>
- 292.30s–297.30s (×7), actor 5, squad 0 (trace 12331): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 291.90s, trace 12326. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12339}.
<a id="trace-12472"></a>
- 297.85s–297.85s (×1), actor 1, squad 0 (trace 12472): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 295.00s, trace 12367. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12478}.
<a id="trace-12478"></a>
- 298.30s–298.30s (×1), actor 5, squad 0 (trace 12478): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 12368. Next observer evidence: {'until': 298.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12484}.
<a id="trace-12484"></a>
- 298.55s–298.55s (×1), actor 1, squad 0 (trace 12484): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 295.00s, trace 12367. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12489}.
<a id="trace-12489"></a>
<a id="trace-12499"></a>
<a id="trace-12575"></a>
<a id="trace-12583"></a>
<a id="trace-12593"></a>
<a id="trace-12609"></a>
<a id="trace-12616"></a>
<a id="trace-12624"></a>
<a id="trace-12646"></a>
<a id="trace-12716"></a>
<a id="trace-12725"></a>
<a id="trace-12751"></a>
<a id="trace-12784"></a>
<a id="trace-12852"></a>
<a id="trace-12857"></a>
<a id="trace-12867"></a>
<a id="trace-12875"></a>
<a id="trace-12885"></a>
<a id="trace-12907"></a>
<a id="trace-12920"></a>
<a id="trace-12928"></a>
<a id="trace-13000"></a>
<a id="trace-13009"></a>
<a id="trace-13016"></a>
<a id="trace-13025"></a>
<a id="trace-13060"></a>
<a id="trace-13068"></a>
<a id="trace-13144"></a>
<a id="trace-13152"></a>
<a id="trace-13160"></a>
<a id="trace-13168"></a>
<a id="trace-13174"></a>
<a id="trace-13184"></a>
<a id="trace-13190"></a>
<a id="trace-13199"></a>
<a id="trace-13207"></a>
<a id="trace-13275"></a>
<a id="trace-13282"></a>
<a id="trace-13302"></a>
<a id="trace-13311"></a>
<a id="trace-13319"></a>
<a id="trace-13329"></a>
<a id="trace-13342"></a>
<a id="trace-13417"></a>
<a id="trace-13422"></a>
<a id="trace-13432"></a>
<a id="trace-13446"></a>
<a id="trace-13458"></a>
<a id="trace-13474"></a>
<a id="trace-13486"></a>
<a id="trace-13493"></a>
<a id="trace-13562"></a>
<a id="trace-13567"></a>
<a id="trace-13577"></a>
<a id="trace-13584"></a>
<a id="trace-13598"></a>
<a id="trace-13614"></a>
<a id="trace-13632"></a>
<a id="trace-13701"></a>
<a id="trace-13706"></a>
<a id="trace-13716"></a>
<a id="trace-13725"></a>
<a id="trace-13740"></a>
<a id="trace-13754"></a>
<a id="trace-13763"></a>
<a id="trace-13838"></a>
<a id="trace-13855"></a>
<a id="trace-13862"></a>
<a id="trace-13872"></a>
<a id="trace-13878"></a>
<a id="trace-13889"></a>
<a id="trace-13897"></a>
<a id="trace-13907"></a>
<a id="trace-13914"></a>
<a id="trace-13984"></a>
<a id="trace-13990"></a>
<a id="trace-13998"></a>
<a id="trace-14006"></a>
<a id="trace-14015"></a>
<a id="trace-14030"></a>
<a id="trace-14054"></a>
<a id="trace-14139"></a>
<a id="trace-14153"></a>
<a id="trace-14160"></a>
<a id="trace-14169"></a>
<a id="trace-14176"></a>
<a id="trace-14184"></a>
<a id="trace-14191"></a>
- 298.80s–359.80s (×88), actor 5, squad 0 (trace 12489): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 12368. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12499}.

## Net delivery

149 matched order/radio deliveries; 246 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.580s; maximum 6.200s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1754: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2222: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2223: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2224: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2225: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2226: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2227: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2612: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2613: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2614: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2615: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2616: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2617: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2908: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2913: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2914: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2915: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2916: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2917: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2918: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.30s leader 5, trace 3218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.30s leader 5, trace 3219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3465: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3468: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3470: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3471: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3472: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3473: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3474: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3662: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3664: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3665: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3667: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3668: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3669: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3670: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3671: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3832: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3834: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3835: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3837: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3838: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3839: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3840: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3841: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4124: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4126: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4127: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4129: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4130: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4131: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4132: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4133: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4325: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4327: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4328: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4330: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4331: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4332: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4333: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4334: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4534: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4536: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4537: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4539: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4540: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4541: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4542: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4543: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4692: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4694: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4695: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4697: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4698: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4699: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4700: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4701: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4835: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4837: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4838: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4840: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4841: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4842: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4843: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4844: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.70s leader 5, trace 4976: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.70s leader 5, trace 4977: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4984: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4986: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4987: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4989: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4990: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4991: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4992: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4993: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5155: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5157: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5158: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5160: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5161: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5162: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5163: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5164: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5504: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5506: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5507: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5509: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5510: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5511: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5512: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5513: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5682: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5684: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5685: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5687: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5688: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5689: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5690: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5691: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6082: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6084: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6085: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6087: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6088: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6089: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6090: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6091: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6264: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6265: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6266: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6267: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6269: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6270: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6271: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6272: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6273: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6504: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6505: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6506: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6507: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6508: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6509: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6510: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6511: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6512: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6513: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7262: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7263: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7264: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7265: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7266: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7267: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7268: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7269: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7270: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7271: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7455: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7456: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7457: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7458: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7459: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7460: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7461: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7462: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7463: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7464: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7632: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7633: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7634: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7635: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7636: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7637: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7638: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7639: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7640: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7641: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7925: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7926: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7927: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7928: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7929: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7930: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7931: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7932: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7933: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7934: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8094: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8095: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8096: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8097: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 8098: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8099: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8100: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8101: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8102: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8336: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8337: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8338: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8339: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8340: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8341: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8342: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8343: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8344: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8615: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8616: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8617: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8618: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8619: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8620: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8621: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8622: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8623: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 153.80s leader 5, trace 8753: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8781: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8782: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8783: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8784: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8785: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8786: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8787: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8788: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8789: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8909: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8910: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8911: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8912: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8913: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8914: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8915: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8916: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8917: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9029: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 9030: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9031: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9032: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9033: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9034: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9035: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9036: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9037: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9166: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 9167: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9168: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9169: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9170: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9171: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9172: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9173: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9174: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9303: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9304: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9305: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9306: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9307: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9308: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9309: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9310: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9311: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9452: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9453: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9454: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9455: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9456: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9457: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9458: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9459: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9460: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9579: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9580: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9581: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9582: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9583: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9584: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9585: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9586: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9587: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9713: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 9714: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9715: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9716: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9717: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9718: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9719: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9720: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9721: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9841: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 9842: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9843: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9844: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9845: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9846: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9847: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9848: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 9849: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9962: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 9963: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9964: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9965: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9966: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9967: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9968: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9969: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9970: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10091: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10092: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10093: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10094: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10095: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10096: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10097: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10098: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10099: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10219: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10220: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10221: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10222: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10223: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10224: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10225: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10226: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10227: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10352: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10353: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10354: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10355: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10356: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10357: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10358: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10359: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10360: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10478: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 10479: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10480: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10481: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10482: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10483: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10484: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10485: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10486: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.85s leader 5, trace 10571: estimate 6.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10602: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 10603: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10604: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10605: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10606: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10607: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10608: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10609: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10610: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10731: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 10732: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10733: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10734: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10735: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10736: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10737: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10738: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10739: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10852: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 10853: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10854: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10855: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10856: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10857: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10858: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10859: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10860: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 10977: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 10978: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10979: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 10980: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 10981: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 10982: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 10983: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 10984: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 10985: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11105: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 11106: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11107: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11108: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11109: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11110: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11111: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11112: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11113: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11228: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 11229: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11230: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11231: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11232: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11233: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11234: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11235: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11236: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11353: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 11354: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11355: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11356: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11357: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11358: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11359: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11360: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11361: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11474: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 11475: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11476: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11477: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11478: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11479: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11480: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11481: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11482: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 11599: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 11600: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11601: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11602: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11603: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11604: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11605: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11606: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 11607: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11723: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 11724: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11725: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11726: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11727: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11728: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11729: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11730: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 11731: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 11848: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 11849: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11850: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11851: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 11852: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 11853: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 11854: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 11855: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 11856: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11970: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 11971: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11972: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11973: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11974: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11975: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11976: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11977: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11978: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12108: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12109: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12110: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12111: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12112: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12113: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12114: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12115: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12241: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12242: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12243: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12244: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12245: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12246: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12247: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12248: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.90s leader 5, trace 12326: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 12367: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12368: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12369: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12370: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12371: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12372: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12373: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 12374: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 12510: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12511: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12512: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12513: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12514: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12515: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12516: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 12517: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12652: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12653: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12654: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12655: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12656: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12657: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12658: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 12659: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 12788: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 12789: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 12790: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 12791: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 12792: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 12793: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 12794: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 12795: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12931: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12932: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12933: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12934: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12935: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12936: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12937: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12938: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13074: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13075: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13076: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13077: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13078: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13079: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13080: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 13081: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13210: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13211: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13212: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13213: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13214: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13215: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13216: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13217: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 13352: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13353: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13354: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13355: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13356: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13357: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13358: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 13359: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 13498: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13499: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13500: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13501: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13502: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13503: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13504: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 13505: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 13637: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 13638: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13639: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13640: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13641: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13642: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13643: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 13644: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 13774: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 13775: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 13776: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 13777: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 13778: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 13779: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 13780: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 13781: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13918: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13919: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13920: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13921: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13922: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13923: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13924: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13925: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14057: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14058: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14059: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14060: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14061: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14062: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14063: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14064: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14196: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14197: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14198: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14199: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14200: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14201: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14202: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14203: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bram incapacitated
- 1: Reed killed in action
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
