# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/109/good-ember/battle-109-1789674352278570833`

## Battle summary

**Ember** · 360 s · 381 shots.

### Turning points

- 27.0s, squad 4: contact (events line 252). First recorded contact.
- 38.9s, squad 1: withdrawal ([trace 4195](#trace-4195)). 65.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 49.1s, squad 1: help call ([trace 5173](#trace-5173)). No completion observed before termination.
- 60.9s, squad 0: help call ([trace 7160](#trace-7160)). No completion observed before termination.
- 75.3s, squad 0: help call ([trace 11263](#trace-11263)). No completion observed before termination.
- 104.5s, squad 0: help call ([trace 15857](#trace-15857)). No completion observed before termination.
- 162.9s, squad 0: help call ([trace 22578](#trace-22578)). No completion observed before termination.
- 246.4s, squad 1: withdrawal ([trace 25962](#trace-25962)). 274.4s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 88 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 194 shots, 4/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 94 shots, 0/2 lost.

### Decisions and attribution

At 246.4s, squad 1 chose broke contact ([trace 25962](#trace-25962)), followed by 0 shots and 1 own casualties; estimate 5.8 against 0 distinct squad-reported contacts; At 80.3s, squad 0 chose HelpSquad: received need unanswered for one report round trip ([trace 11630](#trace-11630)), followed by 1 shots and 0 own casualties; estimate 8.0 against 0 distinct squad-reported contacts; At 121.8s, squad 0 chose FightHere: nearest known group ([trace 18997](#trace-18997)), followed by 1 shots and 0 own casualties; estimate 10.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1302](#trace-1302)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6136365854340188, 'next_transition': 1326}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1304](#trace-1304)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.32318354899715, 'next_transition': 2514}.

### Communication

199 matched deliveries (mean 0.63s, max 5.20s); 384 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.00s, squad 4, contact, evidence events line 252: First recorded contact; .
- 38.85s, squad 1, withdrawal, evidence 4195: BreakContact: believed ratio at least two without superiority; 65.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 49.10s, squad 1, help call, evidence 5173: NeedSupport; No completion observed before termination.
- 60.85s, squad 0, help call, evidence 7160: NeedSupport; No completion observed before termination.
- 75.30s, squad 0, help call, evidence 11263: NeedSupport; No completion observed before termination.
- 104.55s, squad 0, help call, evidence 15857: NeedSupport; No completion observed before termination.
- 162.90s, squad 0, help call, evidence 22578: NeedSupport; No completion observed before termination.
- 246.40s, squad 1, withdrawal, evidence 25962: BreakContact: believed ratio at least two without superiority; 274.4s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.027591844326347, 'next_transition': 815}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.027591844326347, 'next_transition': 815}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.027591844326347, 'next_transition': 815}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1156}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1156}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1156}.
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
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-992"></a>
<a id="trace-994"></a>
<a id="trace-1021"></a>
<a id="trace-1023"></a>
<a id="trace-1046"></a>
<a id="trace-1048"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1277"></a>
<a id="trace-1279"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1330"></a>
<a id="trace-1332"></a>
<a id="trace-1365"></a>
<a id="trace-1367"></a>
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
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2444"></a>
<a id="trace-2446"></a>
<a id="trace-2476"></a>
<a id="trace-2478"></a>
<a id="trace-2510"></a>
<a id="trace-2512"></a>
<a id="trace-2702"></a>
<a id="trace-2704"></a>
<a id="trace-2731"></a>
<a id="trace-2733"></a>
<a id="trace-2758"></a>
<a id="trace-2760"></a>
<a id="trace-2786"></a>
<a id="trace-2788"></a>
<a id="trace-2819"></a>
<a id="trace-2821"></a>
<a id="trace-2841"></a>
<a id="trace-2843"></a>
<a id="trace-2872"></a>
<a id="trace-2874"></a>
<a id="trace-2901"></a>
<a id="trace-2903"></a>
<a id="trace-2926"></a>
<a id="trace-2928"></a>
<a id="trace-2957"></a>
<a id="trace-2959"></a>
<a id="trace-3037"></a>
<a id="trace-3039"></a>
<a id="trace-3050"></a>
<a id="trace-3052"></a>
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3093"></a>
<a id="trace-3095"></a>
<a id="trace-3167"></a>
<a id="trace-3169"></a>
<a id="trace-3192"></a>
<a id="trace-3194"></a>
<a id="trace-3215"></a>
<a id="trace-3217"></a>
<a id="trace-3232"></a>
<a id="trace-3234"></a>
<a id="trace-3258"></a>
<a id="trace-3260"></a>
<a id="trace-3272"></a>
<a id="trace-3274"></a>
<a id="trace-3353"></a>
<a id="trace-3355"></a>
<a id="trace-3363"></a>
<a id="trace-3365"></a>
<a id="trace-3380"></a>
<a id="trace-3382"></a>
<a id="trace-3391"></a>
<a id="trace-3393"></a>
<a id="trace-3410"></a>
<a id="trace-3412"></a>
<a id="trace-3424"></a>
<a id="trace-3426"></a>
<a id="trace-3445"></a>
<a id="trace-3447"></a>
<a id="trace-3458"></a>
<a id="trace-3460"></a>
<a id="trace-3584"></a>
<a id="trace-3586"></a>
<a id="trace-3593"></a>
<a id="trace-3595"></a>
<a id="trace-3681"></a>
<a id="trace-3683"></a>
<a id="trace-4013"></a>
<a id="trace-4015"></a>
<a id="trace-4035"></a>
<a id="trace-4037"></a>
<a id="trace-4072"></a>
<a id="trace-4074"></a>
<a id="trace-4098"></a>
<a id="trace-4100"></a>
<a id="trace-4127"></a>
<a id="trace-4129"></a>
<a id="trace-4164"></a>
<a id="trace-4166"></a>
<a id="trace-4187"></a>
<a id="trace-4189"></a>
<a id="trace-4364"></a>
<a id="trace-4366"></a>
<a id="trace-4377"></a>
<a id="trace-4379"></a>
<a id="trace-4463"></a>
<a id="trace-4465"></a>
<a id="trace-4473"></a>
<a id="trace-4475"></a>
<a id="trace-4493"></a>
<a id="trace-4495"></a>
<a id="trace-4510"></a>
<a id="trace-4512"></a>
<a id="trace-4530"></a>
<a id="trace-4532"></a>
<a id="trace-4543"></a>
<a id="trace-4545"></a>
<a id="trace-4565"></a>
<a id="trace-4567"></a>
<a id="trace-4580"></a>
<a id="trace-4582"></a>
<a id="trace-4599"></a>
<a id="trace-4601"></a>
<a id="trace-4611"></a>
<a id="trace-4613"></a>
<a id="trace-4994"></a>
<a id="trace-4996"></a>
<a id="trace-5011"></a>
<a id="trace-5013"></a>
<a id="trace-5040"></a>
<a id="trace-5042"></a>
<a id="trace-5056"></a>
<a id="trace-5058"></a>
<a id="trace-5079"></a>
<a id="trace-5081"></a>
<a id="trace-5110"></a>
<a id="trace-5112"></a>
<a id="trace-5139"></a>
<a id="trace-5141"></a>
<a id="trace-5162"></a>
<a id="trace-5164"></a>
<a id="trace-5191"></a>
<a id="trace-5193"></a>
<a id="trace-5206"></a>
<a id="trace-5208"></a>
<a id="trace-5303"></a>
<a id="trace-5305"></a>
<a id="trace-5324"></a>
<a id="trace-5326"></a>
<a id="trace-5348"></a>
<a id="trace-5350"></a>
<a id="trace-5423"></a>
<a id="trace-5425"></a>
<a id="trace-5799"></a>
<a id="trace-5801"></a>
<a id="trace-6183"></a>
<a id="trace-6185"></a>
<a id="trace-6230"></a>
<a id="trace-6232"></a>
<a id="trace-6272"></a>
<a id="trace-6274"></a>
<a id="trace-6318"></a>
<a id="trace-6320"></a>
<a id="trace-6362"></a>
<a id="trace-6364"></a>
<a id="trace-6481"></a>
<a id="trace-6483"></a>
<a id="trace-6505"></a>
<a id="trace-6507"></a>
<a id="trace-6537"></a>
<a id="trace-6539"></a>
<a id="trace-6556"></a>
<a id="trace-6558"></a>
<a id="trace-6585"></a>
<a id="trace-6587"></a>
<a id="trace-6596"></a>
<a id="trace-6598"></a>
<a id="trace-6622"></a>
<a id="trace-6624"></a>
<a id="trace-6636"></a>
<a id="trace-6638"></a>
<a id="trace-6662"></a>
<a id="trace-6664"></a>
<a id="trace-6679"></a>
<a id="trace-6681"></a>
<a id="trace-7124"></a>
<a id="trace-7126"></a>
<a id="trace-7152"></a>
<a id="trace-7154"></a>
<a id="trace-7463"></a>
<a id="trace-7465"></a>
<a id="trace-7471"></a>
<a id="trace-7473"></a>
<a id="trace-7506"></a>
<a id="trace-7508"></a>
<a id="trace-7548"></a>
<a id="trace-7550"></a>
<a id="trace-7564"></a>
<a id="trace-7566"></a>
<a id="trace-7590"></a>
<a id="trace-7592"></a>
<a id="trace-7618"></a>
<a id="trace-7620"></a>
<a id="trace-7633"></a>
<a id="trace-7635"></a>
<a id="trace-7796"></a>
<a id="trace-7798"></a>
<a id="trace-7818"></a>
<a id="trace-7820"></a>
<a id="trace-7849"></a>
<a id="trace-7851"></a>
<a id="trace-7872"></a>
<a id="trace-7874"></a>
<a id="trace-7926"></a>
<a id="trace-7928"></a>
<a id="trace-7945"></a>
<a id="trace-7947"></a>
<a id="trace-7959"></a>
<a id="trace-7961"></a>
<a id="trace-7980"></a>
<a id="trace-7982"></a>
<a id="trace-7996"></a>
<a id="trace-7998"></a>
<a id="trace-8082"></a>
<a id="trace-8084"></a>
<a id="trace-8094"></a>
<a id="trace-8096"></a>
<a id="trace-8118"></a>
<a id="trace-8120"></a>
<a id="trace-11033"></a>
<a id="trace-11035"></a>
<a id="trace-11062"></a>
<a id="trace-11064"></a>
<a id="trace-11095"></a>
<a id="trace-11097"></a>
<a id="trace-11116"></a>
<a id="trace-11118"></a>
<a id="trace-11131"></a>
<a id="trace-11133"></a>
<a id="trace-11163"></a>
<a id="trace-11165"></a>
<a id="trace-11175"></a>
<a id="trace-11177"></a>
<a id="trace-11257"></a>
<a id="trace-11259"></a>
<a id="trace-11279"></a>
<a id="trace-11281"></a>
<a id="trace-11302"></a>
<a id="trace-11304"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
<a id="trace-11345"></a>
<a id="trace-11347"></a>
<a id="trace-11361"></a>
<a id="trace-11363"></a>
<a id="trace-11380"></a>
<a id="trace-11382"></a>
<a id="trace-11398"></a>
<a id="trace-11400"></a>
<a id="trace-11416"></a>
<a id="trace-11418"></a>
<a id="trace-11432"></a>
<a id="trace-11434"></a>
<a id="trace-11624"></a>
<a id="trace-11626"></a>
<a id="trace-11651"></a>
<a id="trace-11653"></a>
<a id="trace-11686"></a>
<a id="trace-11688"></a>
<a id="trace-11698"></a>
<a id="trace-11700"></a>
<a id="trace-11727"></a>
<a id="trace-11729"></a>
<a id="trace-11744"></a>
<a id="trace-11746"></a>
<a id="trace-11765"></a>
<a id="trace-11767"></a>
<a id="trace-11779"></a>
<a id="trace-11781"></a>
<a id="trace-11803"></a>
<a id="trace-11805"></a>
<a id="trace-11836"></a>
<a id="trace-11838"></a>
<a id="trace-11936"></a>
<a id="trace-11938"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-12009"></a>
<a id="trace-12011"></a>
<a id="trace-12043"></a>
<a id="trace-12045"></a>
<a id="trace-12077"></a>
<a id="trace-12079"></a>
<a id="trace-12103"></a>
<a id="trace-12105"></a>
<a id="trace-12132"></a>
<a id="trace-12134"></a>
<a id="trace-12148"></a>
<a id="trace-12150"></a>
<a id="trace-12170"></a>
<a id="trace-12172"></a>
<a id="trace-12621"></a>
<a id="trace-12623"></a>
<a id="trace-12720"></a>
<a id="trace-12722"></a>
<a id="trace-12739"></a>
<a id="trace-12741"></a>
<a id="trace-12770"></a>
<a id="trace-12772"></a>
<a id="trace-12791"></a>
<a id="trace-12793"></a>
<a id="trace-12825"></a>
<a id="trace-12827"></a>
<a id="trace-12842"></a>
<a id="trace-12844"></a>
<a id="trace-12867"></a>
<a id="trace-12869"></a>
<a id="trace-12883"></a>
<a id="trace-12885"></a>
<a id="trace-12910"></a>
<a id="trace-12912"></a>
<a id="trace-12928"></a>
<a id="trace-12930"></a>
<a id="trace-13011"></a>
<a id="trace-13013"></a>
<a id="trace-13029"></a>
<a id="trace-13031"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15124"></a>
<a id="trace-15126"></a>
<a id="trace-15152"></a>
<a id="trace-15154"></a>
<a id="trace-15166"></a>
<a id="trace-15168"></a>
<a id="trace-15195"></a>
<a id="trace-15197"></a>
<a id="trace-15216"></a>
<a id="trace-15218"></a>
<a id="trace-15242"></a>
<a id="trace-15244"></a>
<a id="trace-15592"></a>
<a id="trace-15594"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
<a id="trace-15730"></a>
<a id="trace-15732"></a>
<a id="trace-15749"></a>
<a id="trace-15751"></a>
<a id="trace-15777"></a>
<a id="trace-15779"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15815"></a>
<a id="trace-15817"></a>
<a id="trace-15827"></a>
<a id="trace-15829"></a>
<a id="trace-15850"></a>
<a id="trace-15852"></a>
<a id="trace-15872"></a>
<a id="trace-15874"></a>
<a id="trace-15959"></a>
<a id="trace-15961"></a>
<a id="trace-15979"></a>
<a id="trace-15981"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16019"></a>
<a id="trace-16021"></a>
<a id="trace-16036"></a>
<a id="trace-16038"></a>
<a id="trace-16054"></a>
<a id="trace-16056"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16142"></a>
<a id="trace-16144"></a>
<a id="trace-16198"></a>
<a id="trace-16200"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18377"></a>
<a id="trace-18379"></a>
<a id="trace-18425"></a>
<a id="trace-18427"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18491"></a>
<a id="trace-18493"></a>
<a id="trace-18528"></a>
<a id="trace-18530"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18569"></a>
<a id="trace-18571"></a>
<a id="trace-18582"></a>
<a id="trace-18584"></a>
<a id="trace-18603"></a>
<a id="trace-18605"></a>
<a id="trace-18613"></a>
<a id="trace-18615"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18712"></a>
<a id="trace-18714"></a>
<a id="trace-18737"></a>
<a id="trace-18739"></a>
<a id="trace-18758"></a>
<a id="trace-18760"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18793"></a>
<a id="trace-18795"></a>
<a id="trace-18815"></a>
<a id="trace-18817"></a>
<a id="trace-18826"></a>
<a id="trace-18828"></a>
<a id="trace-18845"></a>
<a id="trace-18847"></a>
<a id="trace-18856"></a>
<a id="trace-18858"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
<a id="trace-18991"></a>
<a id="trace-18993"></a>
<a id="trace-19011"></a>
<a id="trace-19013"></a>
<a id="trace-19028"></a>
<a id="trace-19030"></a>
<a id="trace-19055"></a>
<a id="trace-19057"></a>
<a id="trace-19072"></a>
<a id="trace-19074"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19101"></a>
<a id="trace-19103"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19196"></a>
<a id="trace-19198"></a>
<a id="trace-19213"></a>
<a id="trace-19215"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19242"></a>
<a id="trace-19244"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19267"></a>
<a id="trace-19269"></a>
<a id="trace-19278"></a>
<a id="trace-19280"></a>
<a id="trace-19296"></a>
<a id="trace-19298"></a>
<a id="trace-19309"></a>
<a id="trace-19311"></a>
<a id="trace-19387"></a>
<a id="trace-19389"></a>
<a id="trace-19400"></a>
<a id="trace-19402"></a>
<a id="trace-19417"></a>
<a id="trace-19419"></a>
<a id="trace-19430"></a>
<a id="trace-19432"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19463"></a>
<a id="trace-19465"></a>
<a id="trace-19476"></a>
<a id="trace-19478"></a>
<a id="trace-19497"></a>
<a id="trace-19499"></a>
<a id="trace-19520"></a>
<a id="trace-19522"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19610"></a>
<a id="trace-19612"></a>
<a id="trace-19623"></a>
<a id="trace-19625"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19651"></a>
<a id="trace-19653"></a>
<a id="trace-19667"></a>
<a id="trace-19669"></a>
<a id="trace-19675"></a>
<a id="trace-19677"></a>
<a id="trace-19689"></a>
<a id="trace-19691"></a>
<a id="trace-19705"></a>
<a id="trace-19707"></a>
<a id="trace-19730"></a>
<a id="trace-19732"></a>
<a id="trace-19749"></a>
<a id="trace-19751"></a>
<a id="trace-19838"></a>
<a id="trace-19840"></a>
<a id="trace-19860"></a>
<a id="trace-19862"></a>
<a id="trace-19880"></a>
<a id="trace-19882"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19926"></a>
<a id="trace-19928"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19954"></a>
<a id="trace-19956"></a>
<a id="trace-19962"></a>
<a id="trace-19964"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-19987"></a>
<a id="trace-19989"></a>
<a id="trace-20066"></a>
<a id="trace-20068"></a>
<a id="trace-20073"></a>
<a id="trace-20075"></a>
<a id="trace-20088"></a>
<a id="trace-20090"></a>
<a id="trace-20096"></a>
<a id="trace-20098"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20285"></a>
<a id="trace-20287"></a>
<a id="trace-20301"></a>
<a id="trace-20303"></a>
<a id="trace-20316"></a>
<a id="trace-20318"></a>
<a id="trace-20336"></a>
<a id="trace-20338"></a>
<a id="trace-20348"></a>
<a id="trace-20350"></a>
<a id="trace-20424"></a>
<a id="trace-20426"></a>
<a id="trace-20435"></a>
<a id="trace-20437"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-22004"></a>
<a id="trace-22006"></a>
<a id="trace-22029"></a>
<a id="trace-22031"></a>
- 1.60s–152.30s (×600), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079417449960735, 'next_transition': 608}.
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
<a id="trace-959"></a>
<a id="trace-961"></a>
<a id="trace-988"></a>
<a id="trace-990"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1273"></a>
<a id="trace-1275"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259981542441484, 'next_transition': 841}.
<a id="trace-1156"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1156): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1077. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5734450065779217, 'next_transition': 128}.
<a id="trace-127"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 127): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6136365854340188, 'next_transition': 1326}.
<a id="trace-128"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 128): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.32318354899715, 'next_transition': 2514}.
<a id="trace-1302"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1302): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1302. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6136365854340188, 'next_transition': 1326}.
<a id="trace-1303"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1303): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1303. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6136365854340188, 'next_transition': 1326}.
<a id="trace-1304"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1304): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1304. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.32318354899715, 'next_transition': 2514}.
<a id="trace-1305"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1305): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.32318354899715, 'next_transition': 2514}.
<a id="trace-1326"></a>
<a id="trace-1328"></a>
<a id="trace-1361"></a>
<a id="trace-1363"></a>
<a id="trace-1385"></a>
<a id="trace-1387"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1326): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2756247301613939, 'next_transition': 1361}.
<a id="trace-1395"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1395): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724931858577545, 'next_transition': 1724}.
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
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1305. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6340592177428321, 'next_transition': 1785}.
<a id="trace-2008"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2008): received platoon directive. Knowledge: actor memory at 15.00s, trace 1822. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899848492768434, 'next_transition': 2337}.
<a id="trace-2337"></a>
<a id="trace-2339"></a>
<a id="trace-2440"></a>
<a id="trace-2442"></a>
<a id="trace-2472"></a>
<a id="trace-2474"></a>
<a id="trace-2698"></a>
<a id="trace-2700"></a>
<a id="trace-2727"></a>
<a id="trace-2729"></a>
<a id="trace-2754"></a>
<a id="trace-2756"></a>
<a id="trace-2782"></a>
<a id="trace-2784"></a>
<a id="trace-2815"></a>
<a id="trace-2817"></a>
<a id="trace-2897"></a>
<a id="trace-2899"></a>
<a id="trace-2922"></a>
<a id="trace-2924"></a>
<a id="trace-2953"></a>
<a id="trace-2955"></a>
- 17.25s–24.75s (×22), actor 5, squad 0 (trace 2337): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1827. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9153077022594553, 'next_transition': 2440}.
<a id="trace-2514"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2514): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1830. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.856263589744593, 'next_transition': 3104}.
<a id="trace-2515"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2515): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1830. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.856263589744593, 'next_transition': 3104}.
<a id="trace-2960"></a>
- 24.75s–24.75s (×1), actor 0, squad 0 (trace 2960): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2618. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875045815362707, 'next_transition': 3046}.
<a id="trace-3046"></a>
<a id="trace-3048"></a>
<a id="trace-3075"></a>
<a id="trace-3077"></a>
<a id="trace-3163"></a>
<a id="trace-3165"></a>
<a id="trace-3188"></a>
<a id="trace-3190"></a>
<a id="trace-3211"></a>
<a id="trace-3213"></a>
<a id="trace-3228"></a>
<a id="trace-3230"></a>
<a id="trace-3254"></a>
<a id="trace-3256"></a>
<a id="trace-3268"></a>
<a id="trace-3270"></a>
<a id="trace-3349"></a>
<a id="trace-3351"></a>
<a id="trace-3359"></a>
<a id="trace-3361"></a>
<a id="trace-3376"></a>
<a id="trace-3378"></a>
<a id="trace-3387"></a>
<a id="trace-3389"></a>
<a id="trace-3420"></a>
<a id="trace-3422"></a>
<a id="trace-3454"></a>
<a id="trace-3456"></a>
<a id="trace-3580"></a>
<a id="trace-3582"></a>
<a id="trace-4009"></a>
<a id="trace-4011"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4094"></a>
<a id="trace-4096"></a>
<a id="trace-4160"></a>
<a id="trace-4162"></a>
<a id="trace-4183"></a>
<a id="trace-4185"></a>
- 25.75s–38.75s (×40), actor 5, squad 0 (trace 3046): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2970. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249272084340077, 'next_transition': 3075}.
<a id="trace-3104"></a>
- 27.20s–27.20s (×1), actor 8, squad 1 (trace 3104): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2973. Next observer evidence: {'until': 34, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.173744165024175, 'next_transition': 3465}.
<a id="trace-3465"></a>
- 34.10s–34.10s (×1), actor 8, squad 1 (trace 3465): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3284. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3686}.
<a id="trace-3466"></a>
- 34.10s–34.10s (×1), actor 8, squad 1 (trace 3466): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3284. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3686}.
<a id="trace-3467"></a>
- 34.10s–34.10s (×1), actor 8, squad 1 (trace 3467): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3284. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3686}.
<a id="trace-3686"></a>
<a id="trace-3793"></a>
<a id="trace-3901"></a>
- 35.35s–35.50s (×3), actor 8, squad 1 (trace 3686): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3607. Next observer evidence: {'until': 35.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04593867678764755, 'next_transition': 3793}.
<a id="trace-350"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 350): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4193"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4193): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4193. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4360}.
<a id="trace-4194"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4194): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4194. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4360}.
<a id="trace-4195"></a>
- 38.85s–38.85s (×1), actor 8, squad 1 (trace 4195): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 3607. Next observer evidence: {'until': 49, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.067510084962153, 'next_transition': 5173}.
<a id="trace-4196"></a>
- 38.85s–38.85s (×1), actor 8, squad 1 (trace 4196): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 3607. Next observer evidence: {'until': 49, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.067510084962153, 'next_transition': 5173}.
<a id="trace-4360"></a>
<a id="trace-4362"></a>
<a id="trace-4373"></a>
<a id="trace-4375"></a>
<a id="trace-4469"></a>
<a id="trace-4471"></a>
<a id="trace-4506"></a>
<a id="trace-4508"></a>
<a id="trace-4526"></a>
<a id="trace-4528"></a>
<a id="trace-4539"></a>
<a id="trace-4541"></a>
<a id="trace-4561"></a>
<a id="trace-4563"></a>
<a id="trace-4576"></a>
<a id="trace-4578"></a>
<a id="trace-4595"></a>
<a id="trace-4597"></a>
<a id="trace-4607"></a>
<a id="trace-4609"></a>
- 39.25s–44.75s (×20), actor 5, squad 0 (trace 4360): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 4194. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4373}.
<a id="trace-4616"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 4616): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 4391. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27562368286536776, 'next_transition': 5036}.
<a id="trace-4623"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 4623): MoveTactically. Knowledge: actor memory at 40.00s, trace 4391. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27562368286536776, 'next_transition': 5036}.
<a id="trace-4624"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 4624): traveling overwatch. Knowledge: actor memory at 40.00s, trace 4391. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27562368286536776, 'next_transition': 5036}.
<a id="trace-4625"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 4625): Reorganise complete. Knowledge: actor memory at 40.00s, trace 4391. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27562368286536776, 'next_transition': 5036}.
<a id="trace-5036"></a>
<a id="trace-5038"></a>
<a id="trace-5052"></a>
<a id="trace-5054"></a>
<a id="trace-5106"></a>
<a id="trace-5108"></a>
<a id="trace-5135"></a>
<a id="trace-5137"></a>
<a id="trace-5158"></a>
<a id="trace-5160"></a>
<a id="trace-5299"></a>
<a id="trace-5301"></a>
<a id="trace-5419"></a>
<a id="trace-5421"></a>
- 46.25s–51.75s (×14), actor 5, squad 0 (trace 5036): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4926. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937604336256594, 'next_transition': 5052}.
<a id="trace-5173"></a>
- 49.10s–49.10s (×1), actor 8, squad 1 (trace 5173): NeedSupport. Knowledge: actor memory at 45.00s, trace 4929. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6675049685395618, 'next_transition': 5358}.
<a id="trace-5358"></a>
- 51.45s–51.45s (×1), actor 8, squad 1 (trace 5358): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 5227. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999990511071164, 'next_transition': 7644}.
<a id="trace-5359"></a>
- 51.45s–51.45s (×1), actor 8, squad 1 (trace 5359): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 5227. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999990511071164, 'next_transition': 7644}.
<a id="trace-5438"></a>
- 52.05s–52.05s (×1), actor 0, squad 0 (trace 5438): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 5219. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787504136497072, 'next_transition': 5809}.
<a id="trace-5439"></a>
- 52.05s–52.05s (×1), actor 0, squad 0 (trace 5439): bounding overwatch. Knowledge: actor memory at 50.00s, trace 5219. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787504136497072, 'next_transition': 5809}.
<a id="trace-5440"></a>
<a id="trace-5809"></a>
- 52.05s–52.35s (×2), actor 0, squad 0 (trace 5440): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 5219. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787504136497072, 'next_transition': 5809}.
<a id="trace-443"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 443): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6163"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6163): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.324831 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6163. Next observer evidence: None.
<a id="trace-6164"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6164): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.324831 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6164. Next observer evidence: None.
<a id="trace-6179"></a>
<a id="trace-6181"></a>
<a id="trace-6226"></a>
<a id="trace-6228"></a>
<a id="trace-6477"></a>
<a id="trace-6479"></a>
<a id="trace-6501"></a>
<a id="trace-6503"></a>
- 52.75s–55.75s (×8), actor 5, squad 0 (trace 6179): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 6164. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.870098339889687, 'next_transition': 6226}.
<a id="trace-6520"></a>
- 56.05s–56.05s (×1), actor 0, squad 0 (trace 6520): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 6384. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12298956606594581, 'next_transition': 6533}.
<a id="trace-6533"></a>
<a id="trace-6535"></a>
<a id="trace-6581"></a>
<a id="trace-6583"></a>
<a id="trace-6618"></a>
<a id="trace-6620"></a>
<a id="trace-6632"></a>
<a id="trace-6634"></a>
<a id="trace-6658"></a>
<a id="trace-6660"></a>
<a id="trace-6675"></a>
<a id="trace-6677"></a>
- 56.25s–59.75s (×12), actor 5, squad 0 (trace 6533): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6389. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8719336779456692, 'next_transition': 6581}.
<a id="trace-6686"></a>
- 59.85s–59.85s (×1), actor 0, squad 0 (trace 6686): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 6384. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16077038069188157, 'next_transition': 7148}.
<a id="trace-7148"></a>
<a id="trace-7150"></a>
- 60.75s–60.75s (×2), actor 5, squad 0 (trace 7148): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 7051. Next observer evidence: {'until': 60.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.05906107670242719, 'next_transition': 7158}.
<a id="trace-7158"></a>
- 60.85s–60.85s (×1), actor 0, squad 0 (trace 7158): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 61, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053908026360853255, 'next_transition': 7189}.
<a id="trace-7160"></a>
- 60.85s–60.85s (×1), actor 0, squad 0 (trace 7160): NeedSupport. Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 61, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053908026360853255, 'next_transition': 7189}.
<a id="trace-7189"></a>
- 61.10s–61.10s (×1), actor 0, squad 0 (trace 7189): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7459}.
<a id="trace-7195"></a>
- 61.10s–61.10s (×1), actor 0, squad 0 (trace 7195): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7459}.
<a id="trace-7196"></a>
- 61.10s–61.10s (×1), actor 0, squad 0 (trace 7196): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7459}.
<a id="trace-7459"></a>
<a id="trace-7461"></a>
<a id="trace-7502"></a>
<a id="trace-7504"></a>
<a id="trace-7586"></a>
<a id="trace-7588"></a>
<a id="trace-7614"></a>
<a id="trace-7616"></a>
<a id="trace-7629"></a>
<a id="trace-7631"></a>
- 61.25s–64.75s (×10), actor 5, squad 0 (trace 7459): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 7051. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7502}.
<a id="trace-7644"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 7644): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 7054. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7803}.
<a id="trace-7666"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 7666): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 7054. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7803}.
<a id="trace-7720"></a>
- 64.90s–64.90s (×1), actor 0, squad 0 (trace 7720): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 7046. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9551155888103045, 'next_transition': 7814}.
<a id="trace-7803"></a>
- 65.40s–65.40s (×1), actor 8, squad 1 (trace 7803): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 7731. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 672}.
<a id="trace-7814"></a>
<a id="trace-7816"></a>
<a id="trace-7845"></a>
<a id="trace-7847"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7941"></a>
<a id="trace-7943"></a>
<a id="trace-7976"></a>
<a id="trace-7978"></a>
<a id="trace-7992"></a>
<a id="trace-7994"></a>
<a id="trace-8078"></a>
<a id="trace-8080"></a>
<a id="trace-8090"></a>
<a id="trace-8092"></a>
<a id="trace-8114"></a>
<a id="trace-8116"></a>
- 65.75s–71.25s (×20), actor 5, squad 0 (trace 7814): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7728. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3815831986628346, 'next_transition': 7845}.
<a id="trace-8125"></a>
- 71.55s–71.55s (×1), actor 0, squad 0 (trace 8125): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 8004. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11029}.
<a id="trace-10815"></a>
- 71.55s–71.55s (×1), actor 0, squad 0 (trace 10815): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 70.00s, trace 8004. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11029}.
<a id="trace-10816"></a>
- 71.55s–71.55s (×1), actor 0, squad 0 (trace 10816): MoveTactically. Knowledge: actor memory at 70.00s, trace 8004. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11029}.
<a id="trace-10817"></a>
- 71.55s–71.55s (×1), actor 0, squad 0 (trace 10817): contact cover complete: assessment resumes closure. Knowledge: actor memory at 70.00s, trace 8004. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11029}.
<a id="trace-11029"></a>
<a id="trace-11031"></a>
<a id="trace-11058"></a>
<a id="trace-11060"></a>
<a id="trace-11127"></a>
<a id="trace-11129"></a>
<a id="trace-11159"></a>
<a id="trace-11161"></a>
<a id="trace-11171"></a>
<a id="trace-11173"></a>
<a id="trace-11253"></a>
<a id="trace-11255"></a>
- 71.75s–75.25s (×12), actor 5, squad 0 (trace 11029): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8008. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11058}.
<a id="trace-11263"></a>
- 75.30s–75.30s (×1), actor 0, squad 0 (trace 11263): NeedSupport. Knowledge: actor memory at 75.00s, trace 11183. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399897955447122, 'next_transition': 11275}.
<a id="trace-11275"></a>
<a id="trace-11277"></a>
<a id="trace-11298"></a>
<a id="trace-11300"></a>
<a id="trace-11313"></a>
<a id="trace-11315"></a>
<a id="trace-11341"></a>
<a id="trace-11343"></a>
<a id="trace-11357"></a>
<a id="trace-11359"></a>
<a id="trace-11394"></a>
<a id="trace-11396"></a>
<a id="trace-11412"></a>
<a id="trace-11414"></a>
<a id="trace-11428"></a>
<a id="trace-11430"></a>
- 75.75s–79.75s (×16), actor 5, squad 0 (trace 11275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11187. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8540927018872807, 'next_transition': 11298}.
<a id="trace-11442"></a>
- 79.95s–79.95s (×1), actor 0, squad 0 (trace 11442): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 75.00s, trace 11183. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5385107943413882, 'next_transition': 11620}.
<a id="trace-11620"></a>
<a id="trace-11622"></a>
- 80.25s–80.25s (×2), actor 5, squad 0 (trace 11620): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11549. Next observer evidence: None.
<a id="trace-671"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (events line 671): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-672"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 672): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11629"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 11629): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.200887 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 11629. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5226136313512563, 'next_transition': 11647}.
<a id="trace-11630"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 11630): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.200887 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 11630. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5226136313512563, 'next_transition': 11647}.
<a id="trace-11631"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 11631): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.200887 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 11631. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2113}.
<a id="trace-11632"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 11632): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.200887 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 11632. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2113}.
<a id="trace-11647"></a>
<a id="trace-11649"></a>
<a id="trace-11682"></a>
<a id="trace-11684"></a>
<a id="trace-11694"></a>
<a id="trace-11696"></a>
<a id="trace-11723"></a>
<a id="trace-11725"></a>
<a id="trace-11740"></a>
<a id="trace-11742"></a>
<a id="trace-11761"></a>
<a id="trace-11763"></a>
<a id="trace-11775"></a>
<a id="trace-11777"></a>
<a id="trace-11799"></a>
<a id="trace-11801"></a>
<a id="trace-11932"></a>
<a id="trace-11934"></a>
<a id="trace-12005"></a>
<a id="trace-12007"></a>
<a id="trace-12039"></a>
<a id="trace-12041"></a>
<a id="trace-12073"></a>
<a id="trace-12075"></a>
<a id="trace-12099"></a>
<a id="trace-12101"></a>
<a id="trace-12128"></a>
<a id="trace-12130"></a>
<a id="trace-12166"></a>
<a id="trace-12168"></a>
- 80.75s–89.25s (×30), actor 5, squad 0 (trace 11647): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 11632. Next observer evidence: {'until': 81.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2155957485276787, 'next_transition': 11682}.
<a id="trace-12178"></a>
- 89.45s–89.45s (×1), actor 0, squad 0 (trace 12178): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 11858. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09708827477589518, 'next_transition': 12617}.
<a id="trace-12179"></a>
- 89.45s–89.45s (×1), actor 0, squad 0 (trace 12179): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 11858. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09708827477589518, 'next_transition': 12617}.
<a id="trace-12617"></a>
<a id="trace-12619"></a>
<a id="trace-12735"></a>
<a id="trace-12737"></a>
<a id="trace-12787"></a>
<a id="trace-12789"></a>
<a id="trace-12821"></a>
<a id="trace-12823"></a>
- 89.75s–92.25s (×8), actor 5, squad 0 (trace 12617): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11862. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4450253536998159, 'next_transition': 12735}.
<a id="trace-12858"></a>
- 93.15s–93.15s (×1), actor 0, squad 0 (trace 12858): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 12626. Next observer evidence: {'until': 94.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.5529086940156118, 'next_transition': 12906}.
<a id="trace-12906"></a>
<a id="trace-12908"></a>
<a id="trace-12924"></a>
<a id="trace-12926"></a>
<a id="trace-13007"></a>
<a id="trace-13009"></a>
- 94.25s–95.25s (×6), actor 5, squad 0 (trace 12906): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 12630. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5632883443069185, 'next_transition': 12924}.
<a id="trace-13034"></a>
- 95.80s–95.80s (×1), actor 0, squad 0 (trace 13034): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000043883181665, 'next_transition': 15096}.
<a id="trace-14978"></a>
- 95.80s–95.80s (×1), actor 0, squad 0 (trace 14978): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000043883181665, 'next_transition': 15096}.
<a id="trace-14979"></a>
- 95.80s–95.80s (×1), actor 0, squad 0 (trace 14979): MoveTactically. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000043883181665, 'next_transition': 15096}.
<a id="trace-14980"></a>
- 95.80s–95.80s (×1), actor 0, squad 0 (trace 14980): contact cover complete: assessment resumes closure. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000043883181665, 'next_transition': 15096}.
<a id="trace-15078"></a>
- 95.80s–95.80s (×1), actor 0, squad 0 (trace 15078): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000043883181665, 'next_transition': 15096}.
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15148"></a>
<a id="trace-15150"></a>
<a id="trace-15162"></a>
<a id="trace-15164"></a>
<a id="trace-15191"></a>
<a id="trace-15193"></a>
<a id="trace-15212"></a>
<a id="trace-15214"></a>
<a id="trace-15238"></a>
<a id="trace-15240"></a>
- 96.25s–99.25s (×14), actor 5, squad 0 (trace 15096): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 12942. Next observer evidence: {'until': 96.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.31499297445055147, 'next_transition': 15120}.
<a id="trace-15249"></a>
- 99.45s–99.45s (×1), actor 0, squad 0 (trace 15249): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12211393609162786, 'next_transition': 15588}.
<a id="trace-15250"></a>
- 99.45s–99.45s (×1), actor 0, squad 0 (trace 15250): new contact inside 100 m. Knowledge: actor memory at 95.00s, trace 12939. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12211393609162786, 'next_transition': 15588}.
<a id="trace-15588"></a>
<a id="trace-15590"></a>
<a id="trace-15680"></a>
<a id="trace-15682"></a>
<a id="trace-15705"></a>
<a id="trace-15707"></a>
<a id="trace-15773"></a>
<a id="trace-15775"></a>
<a id="trace-15788"></a>
<a id="trace-15790"></a>
- 99.75s–102.75s (×10), actor 5, squad 0 (trace 15588): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 12942. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2527559428840105, 'next_transition': 15680}.
<a id="trace-15800"></a>
- 103.00s–103.00s (×1), actor 0, squad 0 (trace 15800): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 15601. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026246579874548915, 'next_transition': 15811}.
<a id="trace-15811"></a>
<a id="trace-15813"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15846"></a>
<a id="trace-15848"></a>
- 103.25s–104.25s (×6), actor 5, squad 0 (trace 15811): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 15604. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099967971102312, 'next_transition': 15823}.
<a id="trace-15857"></a>
- 104.55s–104.55s (×1), actor 0, squad 0 (trace 15857): NeedSupport. Knowledge: actor memory at 100.00s, trace 15601. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.180597174223338, 'next_transition': 15868}.
<a id="trace-15868"></a>
<a id="trace-15870"></a>
<a id="trace-15955"></a>
<a id="trace-15957"></a>
<a id="trace-15975"></a>
<a id="trace-15977"></a>
<a id="trace-16015"></a>
<a id="trace-16017"></a>
<a id="trace-16050"></a>
<a id="trace-16052"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16138"></a>
<a id="trace-16140"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
- 104.75s–109.25s (×16), actor 5, squad 0 (trace 15868): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 15604. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41280826884789784, 'next_transition': 15955}.
<a id="trace-16209"></a>
- 109.50s–109.50s (×1), actor 0, squad 0 (trace 16209): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 15881. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07003000000000004, 'next_transition': 18249}.
<a id="trace-18126"></a>
- 109.50s–109.50s (×1), actor 0, squad 0 (trace 18126): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 105.00s, trace 15881. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07003000000000004, 'next_transition': 18249}.
<a id="trace-18127"></a>
- 109.50s–109.50s (×1), actor 0, squad 0 (trace 18127): MoveTactically. Knowledge: actor memory at 105.00s, trace 15881. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07003000000000004, 'next_transition': 18249}.
<a id="trace-18128"></a>
- 109.50s–109.50s (×1), actor 0, squad 0 (trace 18128): contact cover complete: assessment resumes closure. Knowledge: actor memory at 105.00s, trace 15881. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07003000000000004, 'next_transition': 18249}.
<a id="trace-18231"></a>
- 109.50s–109.50s (×1), actor 0, squad 0 (trace 18231): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 105.00s, trace 15881. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07003000000000004, 'next_transition': 18249}.
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18373"></a>
<a id="trace-18375"></a>
<a id="trace-18421"></a>
<a id="trace-18423"></a>
<a id="trace-18543"></a>
<a id="trace-18545"></a>
<a id="trace-18565"></a>
<a id="trace-18567"></a>
<a id="trace-18578"></a>
<a id="trace-18580"></a>
<a id="trace-18599"></a>
<a id="trace-18601"></a>
<a id="trace-18691"></a>
<a id="trace-18693"></a>
<a id="trace-18733"></a>
<a id="trace-18735"></a>
<a id="trace-18754"></a>
<a id="trace-18756"></a>
<a id="trace-18777"></a>
<a id="trace-18779"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18811"></a>
<a id="trace-18813"></a>
<a id="trace-18822"></a>
<a id="trace-18824"></a>
<a id="trace-18841"></a>
<a id="trace-18843"></a>
<a id="trace-18943"></a>
<a id="trace-18945"></a>
<a id="trace-18967"></a>
<a id="trace-18969"></a>
<a id="trace-18987"></a>
<a id="trace-18989"></a>
- 109.75s–121.75s (×36), actor 5, squad 0 (trace 18249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 15884. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1253618974210907, 'next_transition': 18373}.
<a id="trace-1514"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 1514): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05217147742061755, 'next_transition': 19024}.
<a id="trace-18996"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 18996): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.477476 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 18996. Next observer evidence: {'until': 122.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05217147742061755, 'next_transition': 19024}.
<a id="trace-18997"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 18997): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.477476 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 18997. Next observer evidence: {'until': 122.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05217147742061755, 'next_transition': 19024}.
<a id="trace-19024"></a>
<a id="trace-19026"></a>
<a id="trace-19051"></a>
<a id="trace-19053"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19097"></a>
<a id="trace-19099"></a>
<a id="trace-19175"></a>
<a id="trace-19177"></a>
<a id="trace-19192"></a>
<a id="trace-19194"></a>
<a id="trace-19209"></a>
<a id="trace-19211"></a>
<a id="trace-19220"></a>
<a id="trace-19222"></a>
- 122.75s–126.75s (×16), actor 5, squad 0 (trace 19024): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 18997. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005739610178401117, 'next_transition': 19051}.
<a id="trace-19229"></a>
- 127.05s–127.05s (×1), actor 0, squad 0 (trace 19229): received platoon directive; retain held slots. Knowledge: actor memory at 125.00s, trace 19108. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1134015771495265, 'next_transition': 19238}.
<a id="trace-19238"></a>
<a id="trace-19240"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19274"></a>
<a id="trace-19276"></a>
<a id="trace-19292"></a>
<a id="trace-19294"></a>
<a id="trace-19305"></a>
<a id="trace-19307"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19396"></a>
<a id="trace-19398"></a>
<a id="trace-19413"></a>
<a id="trace-19415"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
- 127.25s–133.80s (×26), actor 5, squad 0 (trace 19238): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19110. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679871918730043, 'next_transition': 19248}.
<a id="trace-19509"></a>
- 134.25s–134.25s (×1), actor 0, squad 0 (trace 19509): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 130.00s, trace 19315. Next observer evidence: {'until': 134.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3511594123934314, 'next_transition': 19528}.
<a id="trace-19528"></a>
<a id="trace-19530"></a>
<a id="trace-19638"></a>
<a id="trace-19640"></a>
<a id="trace-19663"></a>
<a id="trace-19665"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19745"></a>
<a id="trace-19747"></a>
<a id="trace-19834"></a>
<a id="trace-19836"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19876"></a>
<a id="trace-19878"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19922"></a>
<a id="trace-19924"></a>
<a id="trace-19972"></a>
<a id="trace-20061"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
- 134.80s–146.30s (×26), actor 5, squad 0 (trace 19528): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 19317. Next observer evidence: {'until': 136.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25515, 'next_transition': 19638}.
<a id="trace-20115"></a>
- 147.75s–147.75s (×1), actor 0, squad 0 (trace 20115): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 19993. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20296}.
<a id="trace-20116"></a>
- 147.75s–147.75s (×1), actor 0, squad 0 (trace 20116): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 145.00s, trace 19993. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20296}.
<a id="trace-20296"></a>
<a id="trace-20330"></a>
<a id="trace-20332"></a>
<a id="trace-20420"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
- 148.30s–151.30s (×6), actor 5, squad 0 (trace 20296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 19995. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11199778350981397, 'next_transition': 20330}.
<a id="trace-20455"></a>
- 151.40s–151.40s (×1), actor 0, squad 0 (trace 20455): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 150.00s, trace 20354. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841878600566, 'next_transition': 22023}.
<a id="trace-20457"></a>
- 151.40s–151.40s (×1), actor 0, squad 0 (trace 20457): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 20354. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841878600566, 'next_transition': 22023}.
<a id="trace-21995"></a>
- 151.40s–151.40s (×1), actor 0, squad 0 (trace 21995): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 150.00s, trace 20354. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841878600566, 'next_transition': 22023}.
<a id="trace-21996"></a>
- 151.40s–151.40s (×1), actor 0, squad 0 (trace 21996): MoveTactically. Knowledge: actor memory at 150.00s, trace 20354. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841878600566, 'next_transition': 22023}.
<a id="trace-21997"></a>
- 151.40s–151.40s (×1), actor 0, squad 0 (trace 21997): contact cover complete: assessment resumes closure. Knowledge: actor memory at 150.00s, trace 20354. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841878600566, 'next_transition': 22023}.
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22046"></a>
<a id="trace-22064"></a>
<a id="trace-22066"></a>
<a id="trace-22132"></a>
<a id="trace-22148"></a>
<a id="trace-22169"></a>
<a id="trace-22209"></a>
<a id="trace-22271"></a>
<a id="trace-22273"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22459"></a>
<a id="trace-22461"></a>
<a id="trace-22544"></a>
<a id="trace-22546"></a>
- 152.30s–162.30s (×17), actor 5, squad 0 (trace 22023): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 20356. Next observer evidence: {'until': 153.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.4859452980228565, 'next_transition': 22046}.
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22172"></a>
<a id="trace-22174"></a>
<a id="trace-22212"></a>
<a id="trace-22214"></a>
<a id="trace-22275"></a>
<a id="trace-22277"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22548"></a>
<a id="trace-22550"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22726"></a>
<a id="trace-22750"></a>
<a id="trace-22752"></a>
<a id="trace-22770"></a>
<a id="trace-22772"></a>
<a id="trace-22799"></a>
<a id="trace-22801"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22983"></a>
<a id="trace-22985"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
<a id="trace-23353"></a>
<a id="trace-23355"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23472"></a>
<a id="trace-23474"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23763"></a>
<a id="trace-23765"></a>
<a id="trace-23833"></a>
<a id="trace-23835"></a>
<a id="trace-23876"></a>
<a id="trace-23878"></a>
<a id="trace-23905"></a>
<a id="trace-23907"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-24010"></a>
<a id="trace-24012"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24152"></a>
<a id="trace-24154"></a>
<a id="trace-24178"></a>
<a id="trace-24180"></a>
<a id="trace-24252"></a>
<a id="trace-24254"></a>
<a id="trace-24273"></a>
<a id="trace-24275"></a>
<a id="trace-24290"></a>
<a id="trace-24292"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24325"></a>
<a id="trace-24327"></a>
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24406"></a>
<a id="trace-24408"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24448"></a>
<a id="trace-24450"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24560"></a>
<a id="trace-24562"></a>
<a id="trace-24573"></a>
<a id="trace-24575"></a>
<a id="trace-24641"></a>
<a id="trace-24643"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24669"></a>
<a id="trace-24671"></a>
<a id="trace-24683"></a>
<a id="trace-24701"></a>
<a id="trace-24703"></a>
<a id="trace-24768"></a>
<a id="trace-24770"></a>
<a id="trace-24782"></a>
<a id="trace-24784"></a>
<a id="trace-24794"></a>
<a id="trace-24796"></a>
<a id="trace-24810"></a>
<a id="trace-24812"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24894"></a>
<a id="trace-24896"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24923"></a>
<a id="trace-24938"></a>
<a id="trace-24940"></a>
<a id="trace-24954"></a>
<a id="trace-24956"></a>
<a id="trace-25024"></a>
<a id="trace-25026"></a>
<a id="trace-25039"></a>
<a id="trace-25041"></a>
<a id="trace-25055"></a>
<a id="trace-25057"></a>
<a id="trace-25072"></a>
<a id="trace-25074"></a>
<a id="trace-25139"></a>
<a id="trace-25141"></a>
<a id="trace-25210"></a>
<a id="trace-25212"></a>
<a id="trace-25229"></a>
<a id="trace-25231"></a>
<a id="trace-25244"></a>
<a id="trace-25246"></a>
<a id="trace-25264"></a>
<a id="trace-25279"></a>
<a id="trace-25281"></a>
<a id="trace-25352"></a>
<a id="trace-25354"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25499"></a>
<a id="trace-25501"></a>
<a id="trace-25529"></a>
<a id="trace-25531"></a>
<a id="trace-25552"></a>
<a id="trace-25634"></a>
<a id="trace-25636"></a>
<a id="trace-25656"></a>
<a id="trace-25658"></a>
<a id="trace-25675"></a>
<a id="trace-25677"></a>
<a id="trace-25692"></a>
<a id="trace-25694"></a>
<a id="trace-25709"></a>
<a id="trace-25711"></a>
<a id="trace-25785"></a>
<a id="trace-25787"></a>
<a id="trace-25806"></a>
<a id="trace-25808"></a>
<a id="trace-25826"></a>
<a id="trace-25828"></a>
<a id="trace-25845"></a>
<a id="trace-25864"></a>
<a id="trace-25866"></a>
<a id="trace-25937"></a>
<a id="trace-25939"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-26142"></a>
<a id="trace-26144"></a>
<a id="trace-26197"></a>
<a id="trace-26199"></a>
<a id="trace-26253"></a>
<a id="trace-26255"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26366"></a>
<a id="trace-26368"></a>
<a id="trace-26384"></a>
<a id="trace-26386"></a>
<a id="trace-26405"></a>
<a id="trace-26407"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26530"></a>
<a id="trace-26532"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26575"></a>
<a id="trace-26577"></a>
<a id="trace-26652"></a>
<a id="trace-26654"></a>
<a id="trace-26666"></a>
<a id="trace-26668"></a>
<a id="trace-26677"></a>
<a id="trace-26679"></a>
<a id="trace-26693"></a>
<a id="trace-26695"></a>
<a id="trace-26708"></a>
<a id="trace-26710"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26783"></a>
<a id="trace-26785"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26811"></a>
<a id="trace-26813"></a>
<a id="trace-26822"></a>
<a id="trace-26824"></a>
<a id="trace-26887"></a>
<a id="trace-26889"></a>
<a id="trace-26900"></a>
<a id="trace-26902"></a>
<a id="trace-26910"></a>
<a id="trace-26912"></a>
<a id="trace-26934"></a>
<a id="trace-26944"></a>
<a id="trace-26946"></a>
<a id="trace-27016"></a>
<a id="trace-27018"></a>
<a id="trace-27031"></a>
<a id="trace-27033"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27058"></a>
<a id="trace-27069"></a>
<a id="trace-27071"></a>
<a id="trace-27144"></a>
<a id="trace-27146"></a>
<a id="trace-27156"></a>
<a id="trace-27158"></a>
<a id="trace-27167"></a>
<a id="trace-27169"></a>
<a id="trace-27181"></a>
<a id="trace-27191"></a>
<a id="trace-27193"></a>
<a id="trace-27258"></a>
<a id="trace-27260"></a>
<a id="trace-27276"></a>
<a id="trace-27278"></a>
<a id="trace-27288"></a>
<a id="trace-27290"></a>
<a id="trace-27307"></a>
<a id="trace-27309"></a>
<a id="trace-27317"></a>
<a id="trace-27319"></a>
<a id="trace-27382"></a>
<a id="trace-27384"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27408"></a>
<a id="trace-27423"></a>
<a id="trace-27425"></a>
<a id="trace-27443"></a>
<a id="trace-27445"></a>
<a id="trace-27510"></a>
<a id="trace-27512"></a>
<a id="trace-27521"></a>
<a id="trace-27533"></a>
<a id="trace-27544"></a>
<a id="trace-27546"></a>
<a id="trace-27554"></a>
<a id="trace-27556"></a>
<a id="trace-27624"></a>
<a id="trace-27626"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27656"></a>
<a id="trace-27658"></a>
<a id="trace-27668"></a>
<a id="trace-27670"></a>
<a id="trace-27679"></a>
<a id="trace-27681"></a>
<a id="trace-27745"></a>
<a id="trace-27747"></a>
<a id="trace-27761"></a>
<a id="trace-27763"></a>
<a id="trace-27775"></a>
<a id="trace-27777"></a>
<a id="trace-27790"></a>
<a id="trace-27792"></a>
<a id="trace-27805"></a>
<a id="trace-27807"></a>
<a id="trace-27872"></a>
<a id="trace-27874"></a>
<a id="trace-27884"></a>
<a id="trace-27886"></a>
<a id="trace-27895"></a>
<a id="trace-27897"></a>
<a id="trace-27911"></a>
<a id="trace-27913"></a>
<a id="trace-27927"></a>
<a id="trace-27996"></a>
<a id="trace-27998"></a>
<a id="trace-28007"></a>
<a id="trace-28009"></a>
<a id="trace-28019"></a>
<a id="trace-28021"></a>
<a id="trace-28030"></a>
<a id="trace-28043"></a>
<a id="trace-28045"></a>
<a id="trace-28110"></a>
<a id="trace-28126"></a>
<a id="trace-28128"></a>
<a id="trace-28138"></a>
<a id="trace-28140"></a>
<a id="trace-28150"></a>
<a id="trace-28152"></a>
<a id="trace-28163"></a>
<a id="trace-28165"></a>
<a id="trace-28229"></a>
<a id="trace-28231"></a>
<a id="trace-28244"></a>
<a id="trace-28246"></a>
<a id="trace-28257"></a>
<a id="trace-28259"></a>
<a id="trace-28273"></a>
<a id="trace-28275"></a>
<a id="trace-28288"></a>
<a id="trace-28290"></a>
<a id="trace-28360"></a>
<a id="trace-28371"></a>
<a id="trace-28373"></a>
<a id="trace-28381"></a>
<a id="trace-28383"></a>
<a id="trace-28396"></a>
<a id="trace-28411"></a>
<a id="trace-28413"></a>
<a id="trace-28478"></a>
<a id="trace-28490"></a>
<a id="trace-28492"></a>
<a id="trace-28504"></a>
<a id="trace-28514"></a>
<a id="trace-28516"></a>
<a id="trace-28529"></a>
<a id="trace-28531"></a>
<a id="trace-28597"></a>
<a id="trace-28599"></a>
<a id="trace-28611"></a>
<a id="trace-28613"></a>
<a id="trace-28623"></a>
<a id="trace-28625"></a>
<a id="trace-28640"></a>
<a id="trace-28642"></a>
<a id="trace-28652"></a>
<a id="trace-28654"></a>
<a id="trace-28718"></a>
<a id="trace-28720"></a>
<a id="trace-28732"></a>
<a id="trace-28734"></a>
<a id="trace-28747"></a>
<a id="trace-28749"></a>
<a id="trace-28762"></a>
<a id="trace-28764"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28842"></a>
<a id="trace-28844"></a>
<a id="trace-28858"></a>
<a id="trace-28860"></a>
<a id="trace-28872"></a>
<a id="trace-28884"></a>
<a id="trace-28886"></a>
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28966"></a>
<a id="trace-28968"></a>
<a id="trace-28978"></a>
<a id="trace-28980"></a>
<a id="trace-29054"></a>
<a id="trace-29056"></a>
<a id="trace-29071"></a>
<a id="trace-29073"></a>
<a id="trace-29088"></a>
<a id="trace-29090"></a>
- 156.30s–359.30s (×388), actor 38, squad 4 (trace 22150): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 155.00s, trace 22079. Next observer evidence: {'until': 157.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22172}.
<a id="trace-22578"></a>
- 162.90s–162.90s (×1), actor 0, squad 0 (trace 22578): NeedSupport. Knowledge: actor memory at 160.00s, trace 22304. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.708026651831458, 'next_transition': 22601}.
<a id="trace-2113"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (events line 2113): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22802}.
<a id="trace-22597"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 22597): renew committed intent (75 s lifetime). Knowledge: actor memory at 163.25s, trace 22597. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22802}.
<a id="trace-22601"></a>
<a id="trace-22603"></a>
<a id="trace-22637"></a>
<a id="trace-22639"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22746"></a>
<a id="trace-22748"></a>
<a id="trace-22766"></a>
<a id="trace-22768"></a>
<a id="trace-22795"></a>
<a id="trace-22797"></a>
<a id="trace-22885"></a>
<a id="trace-22979"></a>
<a id="trace-22981"></a>
<a id="trace-23015"></a>
<a id="trace-23017"></a>
<a id="trace-23068"></a>
<a id="trace-23138"></a>
<a id="trace-23140"></a>
<a id="trace-23216"></a>
<a id="trace-23350"></a>
<a id="trace-23402"></a>
<a id="trace-23404"></a>
<a id="trace-23468"></a>
<a id="trace-23470"></a>
<a id="trace-23543"></a>
<a id="trace-23545"></a>
<a id="trace-23624"></a>
<a id="trace-23761"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23872"></a>
<a id="trace-23874"></a>
<a id="trace-23901"></a>
<a id="trace-23903"></a>
<a id="trace-23928"></a>
<a id="trace-23930"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
- 163.30s–185.30s (×40), actor 5, squad 0 (trace 22601): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 22597. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7268460117712783, 'next_transition': 22637}.
<a id="trace-22802"></a>
- 168.30s–168.30s (×1), actor 8, squad 1 (trace 22802): MoveTactically. Knowledge: actor memory at 165.00s, trace 22658. Next observer evidence: {'until': 168.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22838}.
<a id="trace-22803"></a>
- 168.30s–168.30s (×1), actor 8, squad 1 (trace 22803): received platoon directive. Knowledge: actor memory at 165.00s, trace 22658. Next observer evidence: {'until': 168.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22838}.
<a id="trace-22838"></a>
- 168.75s–168.75s (×1), actor 8, squad 1 (trace 22838): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 22658. Next observer evidence: {'until': 172, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.180384165486668, 'next_transition': 23052}.
<a id="trace-22839"></a>
- 168.75s–168.75s (×1), actor 8, squad 1 (trace 22839): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 22658. Next observer evidence: {'until': 172, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.180384165486668, 'next_transition': 23052}.
<a id="trace-23052"></a>
- 172.10s–172.10s (×1), actor 8, squad 1 (trace 23052): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 22916. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.900825673251159, 'next_transition': 23447}.
<a id="trace-23447"></a>
- 177.00s–177.00s (×1), actor 8, squad 1 (trace 23447): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 175.00s, trace 23269. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2667}.
<a id="trace-24022"></a>
- 185.80s–185.80s (×1), actor 0, squad 0 (trace 24022): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 185.00s, trace 23945. Next observer evidence: None.
<a id="trace-24025"></a>
- 185.85s–185.85s (×1), actor 0, squad 0 (trace 24025): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 23945. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300011308720005, 'next_transition': 24099}.
<a id="trace-24027"></a>
- 185.85s–185.85s (×1), actor 0, squad 0 (trace 24027): MoveTactically. Knowledge: actor memory at 185.00s, trace 23945. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300011308720005, 'next_transition': 24099}.
<a id="trace-24028"></a>
- 185.85s–185.85s (×1), actor 0, squad 0 (trace 24028): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 185.00s, trace 23945. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300011308720005, 'next_transition': 24099}.
<a id="trace-24099"></a>
<a id="trace-24123"></a>
<a id="trace-24148"></a>
<a id="trace-24150"></a>
- 186.30s–188.30s (×4), actor 5, squad 0 (trace 24099): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 23946. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2230138474882573, 'next_transition': 24123}.
<a id="trace-24158"></a>
- 188.55s–188.55s (×1), actor 0, squad 0 (trace 24158): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 23945. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874868205246348, 'next_transition': 24176}.
<a id="trace-24176"></a>
<a id="trace-24248"></a>
<a id="trace-24250"></a>
- 189.30s–190.30s (×3), actor 5, squad 0 (trace 24176): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 23946. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749736410492727, 'next_transition': 24248}.
<a id="trace-2666"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 2666): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2667"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (events line 2667): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24260"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 24260): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 24260. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299988318243139, 'next_transition': 24271}.
<a id="trace-24261"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (trace 24261): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.042442 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 24261. Next observer evidence: {'until': 218.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3273}.
<a id="trace-24262"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (trace 24262): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.042442 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 24262. Next observer evidence: {'until': 218.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3273}.
<a id="trace-24271"></a>
<a id="trace-24286"></a>
<a id="trace-24288"></a>
- 191.30s–192.30s (×3), actor 5, squad 0 (trace 24271): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 24262. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.575020518120319, 'next_transition': 24286}.
<a id="trace-24293"></a>
- 192.35s–192.35s (×1), actor 0, squad 0 (trace 24293): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 190.00s, trace 24186. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512313989832219, 'next_transition': 24322}.
<a id="trace-24322"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24433"></a>
<a id="trace-24444"></a>
<a id="trace-24446"></a>
<a id="trace-24511"></a>
<a id="trace-24513"></a>
<a id="trace-24524"></a>
<a id="trace-24541"></a>
<a id="trace-24556"></a>
<a id="trace-24558"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24638"></a>
<a id="trace-24650"></a>
<a id="trace-24652"></a>
<a id="trace-24679"></a>
<a id="trace-24681"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24766"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24791"></a>
<a id="trace-24807"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-24892"></a>
<a id="trace-24907"></a>
<a id="trace-24919"></a>
<a id="trace-24921"></a>
<a id="trace-24934"></a>
<a id="trace-24936"></a>
<a id="trace-24950"></a>
<a id="trace-24952"></a>
<a id="trace-25020"></a>
<a id="trace-25022"></a>
<a id="trace-25035"></a>
<a id="trace-25037"></a>
<a id="trace-25051"></a>
<a id="trace-25053"></a>
<a id="trace-25068"></a>
<a id="trace-25070"></a>
<a id="trace-25136"></a>
<a id="trace-25208"></a>
<a id="trace-25227"></a>
<a id="trace-25240"></a>
<a id="trace-25242"></a>
<a id="trace-25259"></a>
<a id="trace-25261"></a>
<a id="trace-25276"></a>
<a id="trace-25350"></a>
<a id="trace-25475"></a>
<a id="trace-25477"></a>
<a id="trace-25495"></a>
<a id="trace-25497"></a>
<a id="trace-25525"></a>
<a id="trace-25527"></a>
<a id="trace-25548"></a>
<a id="trace-25550"></a>
<a id="trace-25631"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
<a id="trace-25707"></a>
<a id="trace-25783"></a>
<a id="trace-25802"></a>
<a id="trace-25804"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25842"></a>
<a id="trace-25862"></a>
<a id="trace-25934"></a>
<a id="trace-25955"></a>
<a id="trace-25957"></a>
<a id="trace-26140"></a>
<a id="trace-26193"></a>
<a id="trace-26195"></a>
<a id="trace-26333"></a>
<a id="trace-26362"></a>
<a id="trace-26364"></a>
<a id="trace-26419"></a>
<a id="trace-26490"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26528"></a>
<a id="trace-26557"></a>
<a id="trace-26559"></a>
<a id="trace-26573"></a>
- 194.30s–259.30s (×95), actor 5, squad 0 (trace 24322): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 24262. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24389}.
<a id="trace-3273"></a>
- 218.50s–218.50s (×1), actor 5, squad 1 (events line 3273): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 223.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25077}.
<a id="trace-24942"></a>
- 218.50s–218.50s (×1), actor 5, squad 1 (trace 24942): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260893 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 218.50s, trace 24942. Next observer evidence: {'until': 223.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25077}.
<a id="trace-24943"></a>
- 218.50s–218.50s (×1), actor 5, squad 1 (trace 24943): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260893 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 218.50s, trace 24943. Next observer evidence: {'until': 223.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25077}.
<a id="trace-25077"></a>
- 223.55s–223.55s (×1), actor 8, squad 1 (trace 25077): MoveTactically. Knowledge: actor memory at 220.00s, trace 24964. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.764971274023289, 'next_transition': 25360}.
<a id="trace-25078"></a>
- 223.55s–223.55s (×1), actor 8, squad 1 (trace 25078): received platoon directive. Knowledge: actor memory at 220.00s, trace 24964. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.764971274023289, 'next_transition': 25360}.
<a id="trace-25360"></a>
- 230.85s–230.85s (×1), actor 8, squad 1 (trace 25360): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 25293. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.2427139713098985, 'next_transition': 25543}.
<a id="trace-25361"></a>
- 230.85s–230.85s (×1), actor 8, squad 1 (trace 25361): new contact inside 100 m. Knowledge: actor memory at 230.00s, trace 25293. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.2427139713098985, 'next_transition': 25543}.
<a id="trace-25543"></a>
- 234.20s–234.20s (×1), actor 8, squad 1 (trace 25543): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 230.00s, trace 25293. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.771009132789834, 'next_transition': 25646}.
<a id="trace-25646"></a>
- 235.80s–235.80s (×1), actor 8, squad 1 (trace 25646): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 235.00s, trace 25565. Next observer evidence: {'until': 246, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.09777045208037047, 'next_transition': 3666}.
<a id="trace-3666"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (events line 3666): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25947"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 25947): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.316185 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 25947. Next observer evidence: {'until': 246.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3987445298997845, 'next_transition': 25962}.
<a id="trace-25948"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 25948): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.316185 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 25948. Next observer evidence: {'until': 246.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3987445298997845, 'next_transition': 25962}.
<a id="trace-25962"></a>
- 246.40s–246.40s (×1), actor 8, squad 1 (trace 25962): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 245.00s, trace 25876. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.040798925735835, 'next_transition': 26543}.
<a id="trace-25963"></a>
- 246.40s–246.40s (×1), actor 8, squad 1 (trace 25963): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 25876. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.040798925735835, 'next_transition': 26543}.
<a id="trace-26543"></a>
- 257.90s–257.90s (×1), actor 9, squad 1 (trace 26543): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 255.00s, trace 26432. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26585}.
<a id="trace-26544"></a>
- 257.90s–257.90s (×1), actor 9, squad 1 (trace 26544): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 255.00s, trace 26432. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26585}.
<a id="trace-26584"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (trace 26584): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.90s, trace 26584. Next observer evidence: None.
<a id="trace-26585"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 26585): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.518900 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 26585. Next observer evidence: None.
<a id="trace-26586"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 26586): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.518900 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 26586. Next observer evidence: None.
<a id="trace-3728"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (events line 3728): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26648}.
<a id="trace-3729"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (events line 3729): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26947}.
<a id="trace-26648"></a>
<a id="trace-26650"></a>
<a id="trace-26662"></a>
<a id="trace-26664"></a>
<a id="trace-26675"></a>
<a id="trace-26689"></a>
<a id="trace-26691"></a>
- 260.30s–263.30s (×7), actor 5, squad 0 (trace 26648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 26590. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26662}.
<a id="trace-26701"></a>
- 264.20s–264.20s (×1), actor 0, squad 0 (trace 26701): current contact unknown for 10 s. Knowledge: actor memory at 260.00s, trace 26589. Next observer evidence: None.
<a id="trace-26704"></a>
<a id="trace-26706"></a>
<a id="trace-26768"></a>
<a id="trace-26770"></a>
<a id="trace-26779"></a>
<a id="trace-26781"></a>
<a id="trace-26790"></a>
<a id="trace-26792"></a>
<a id="trace-26809"></a>
<a id="trace-26819"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26896"></a>
<a id="trace-26898"></a>
<a id="trace-26906"></a>
<a id="trace-26908"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-26941"></a>
<a id="trace-27013"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
- 264.30s–276.30s (×22), actor 5, squad 0 (trace 26704): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 26590. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26768}.
<a id="trace-26947"></a>
- 274.35s–274.35s (×1), actor 9, squad 1 (trace 26947): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 270.00s, trace 26828. Next observer evidence: {'until': 293.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27429}.
<a id="trace-27036"></a>
- 276.65s–276.65s (×1), actor 0, squad 0 (trace 27036): current contact unknown for 10 s. Knowledge: actor memory at 275.00s, trace 26957. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27041}.
<a id="trace-27041"></a>
<a id="trace-27043"></a>
<a id="trace-27054"></a>
<a id="trace-27065"></a>
<a id="trace-27067"></a>
<a id="trace-27140"></a>
<a id="trace-27142"></a>
<a id="trace-27154"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27187"></a>
<a id="trace-27189"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27272"></a>
<a id="trace-27274"></a>
<a id="trace-27284"></a>
<a id="trace-27286"></a>
<a id="trace-27303"></a>
<a id="trace-27305"></a>
<a id="trace-27314"></a>
<a id="trace-27380"></a>
<a id="trace-27392"></a>
<a id="trace-27394"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27421"></a>
<a id="trace-27439"></a>
<a id="trace-27441"></a>
<a id="trace-27518"></a>
<a id="trace-27529"></a>
<a id="trace-27531"></a>
<a id="trace-27542"></a>
<a id="trace-27551"></a>
<a id="trace-27620"></a>
<a id="trace-27622"></a>
<a id="trace-27641"></a>
<a id="trace-27643"></a>
<a id="trace-27653"></a>
<a id="trace-27665"></a>
<a id="trace-27677"></a>
<a id="trace-27741"></a>
<a id="trace-27743"></a>
<a id="trace-27757"></a>
<a id="trace-27759"></a>
<a id="trace-27772"></a>
<a id="trace-27786"></a>
<a id="trace-27788"></a>
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27870"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27907"></a>
<a id="trace-27909"></a>
<a id="trace-27923"></a>
<a id="trace-27992"></a>
<a id="trace-27994"></a>
<a id="trace-28015"></a>
<a id="trace-28017"></a>
<a id="trace-28039"></a>
<a id="trace-28041"></a>
<a id="trace-28106"></a>
<a id="trace-28122"></a>
<a id="trace-28124"></a>
<a id="trace-28159"></a>
<a id="trace-28161"></a>
<a id="trace-28225"></a>
<a id="trace-28227"></a>
<a id="trace-28240"></a>
<a id="trace-28242"></a>
<a id="trace-28254"></a>
<a id="trace-28269"></a>
<a id="trace-28271"></a>
- 277.30s–328.30s (×76), actor 5, squad 0 (trace 27041): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 26958. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27054}.
<a id="trace-27429"></a>
- 293.50s–293.50s (×1), actor 9, squad 1 (trace 27429): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 290.00s, trace 27325. Next observer evidence: {'until': 323.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28279}.
<a id="trace-27430"></a>
- 293.50s–293.50s (×1), actor 9, squad 1 (trace 27430): MoveTactically. Knowledge: actor memory at 290.00s, trace 27325. Next observer evidence: {'until': 323.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28279}.
<a id="trace-27431"></a>
- 293.50s–293.50s (×1), actor 9, squad 1 (trace 27431): traveling overwatch. Knowledge: actor memory at 290.00s, trace 27325. Next observer evidence: {'until': 323.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28279}.
<a id="trace-27432"></a>
- 293.50s–293.50s (×1), actor 9, squad 1 (trace 27432): . Knowledge: actor memory at 290.00s, trace 27325. Next observer evidence: {'until': 323.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28279}.
<a id="trace-28278"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (trace 28278): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.90s, trace 28278. Next observer evidence: None.
<a id="trace-28279"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (trace 28279): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.90s, trace 28279. Next observer evidence: None.
<a id="trace-3877"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (events line 3877): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28284}.
<a id="trace-3878"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (events line 3878): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28403}.
<a id="trace-28284"></a>
<a id="trace-28286"></a>
<a id="trace-28356"></a>
<a id="trace-28358"></a>
<a id="trace-28367"></a>
<a id="trace-28369"></a>
<a id="trace-28379"></a>
<a id="trace-28393"></a>
<a id="trace-28474"></a>
<a id="trace-28476"></a>
<a id="trace-28499"></a>
<a id="trace-28501"></a>
<a id="trace-28512"></a>
<a id="trace-28525"></a>
<a id="trace-28527"></a>
<a id="trace-28594"></a>
<a id="trace-28607"></a>
<a id="trace-28609"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28638"></a>
<a id="trace-28648"></a>
<a id="trace-28650"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28730"></a>
<a id="trace-28743"></a>
<a id="trace-28745"></a>
<a id="trace-28758"></a>
<a id="trace-28760"></a>
<a id="trace-28770"></a>
- 329.30s–349.30s (×31), actor 5, squad 0 (trace 28284): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.90s, trace 28279. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28356}.
<a id="trace-28403"></a>
- 333.85s–333.85s (×1), actor 9, squad 1 (trace 28403): received platoon directive. Knowledge: actor memory at 330.00s, trace 28300. Next observer evidence: {'until': 356.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3947}.
<a id="trace-28779"></a>
- 349.85s–349.85s (×1), actor 0, squad 0 (trace 28779): traveling overwatch. Knowledge: actor memory at 345.00s, trace 28657. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28838}.
<a id="trace-28780"></a>
- 349.85s–349.85s (×1), actor 0, squad 0 (trace 28780): current contact unknown for 10 s. Knowledge: actor memory at 345.00s, trace 28657. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28838}.
<a id="trace-28838"></a>
<a id="trace-28840"></a>
<a id="trace-28854"></a>
<a id="trace-28856"></a>
<a id="trace-28869"></a>
<a id="trace-28880"></a>
<a id="trace-28882"></a>
<a id="trace-28896"></a>
<a id="trace-28898"></a>
<a id="trace-28962"></a>
<a id="trace-28964"></a>
<a id="trace-28975"></a>
- 350.30s–356.30s (×12), actor 5, squad 0 (trace 28838): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 28783. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28854}.
<a id="trace-3946"></a>
- 356.50s–356.50s (×1), actor 5, squad 0 (events line 3946): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29051}.
<a id="trace-3947"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (events line 3947): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 357, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28992}.
<a id="trace-28984"></a>
- 356.50s–356.50s (×1), actor 5, squad 0 (trace 28984): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 356.50s, trace 28984. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29051}.
<a id="trace-28985"></a>
- 356.50s–356.50s (×1), actor 5, squad 0 (trace 28985): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 356.50s, trace 28985. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29051}.
<a id="trace-28986"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (trace 28986): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 356.50s, trace 28986. Next observer evidence: {'until': 357, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28992}.
<a id="trace-28987"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (trace 28987): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 356.50s, trace 28987. Next observer evidence: {'until': 357, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28992}.
<a id="trace-28992"></a>
- 357.05s–357.05s (×1), actor 9, squad 1 (trace 28992): traveling. Knowledge: actor memory at 355.00s, trace 28908. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.347548117411483, 'next_transition': None}.
<a id="trace-28993"></a>
- 357.05s–357.05s (×1), actor 9, squad 1 (trace 28993): current contact unknown for 10 s. Knowledge: actor memory at 355.00s, trace 28908. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.347548117411483, 'next_transition': None}.
<a id="trace-29051"></a>
<a id="trace-29069"></a>
<a id="trace-29086"></a>
- 357.30s–359.30s (×3), actor 5, squad 0 (trace 29051): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 356.50s, trace 28987. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29069}.

## Net delivery

199 matched order/radio deliveries; 384 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.634s; maximum 5.200s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 20.00s leader 0, trace 2618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3286: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3287: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3288: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3289: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3290: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3291: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3292: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3293: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3294: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3295: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3609: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3610: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3611: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3612: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3613: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3614: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3615: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3616: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3617: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3618: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4399: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4401: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4402: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4403: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4404: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4405: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4406: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4407: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4408: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4409: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4410: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4927: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 4929: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 4930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4931: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4932: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4933: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4934: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4935: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4936: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4937: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4938: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 4939: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 4940: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5224: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5225: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 5227: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5229: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5230: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5231: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5232: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5233: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5234: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5235: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5236: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5237: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5238: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6163: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6164: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 6384: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6389: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6390: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 6392: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6394: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6395: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6396: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6397: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6398: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6399: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6400: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6401: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6402: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6403: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 7046: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7051: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7052: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 7054: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 7055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7056: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7057: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7058: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7059: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7060: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7061: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7062: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7063: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7064: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 7065: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 7724: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7728: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7729: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 7731: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7733: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7734: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7735: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7736: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7737: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7738: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7739: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7740: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7741: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7742: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 8004: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8008: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8009: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 8011: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8013: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8014: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8015: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8016: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8017: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8018: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8019: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8020: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8021: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8022: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 11183: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11187: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11188: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 11190: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11192: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11193: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11194: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11195: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11196: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11197: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11198: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11199: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11200: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11201: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 11545: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 11546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 11547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11549: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11550: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 11551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 11552: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 11553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11554: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11555: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11556: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11557: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11558: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11559: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11560: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11561: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 11562: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 11563: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 11629: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 11630: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 11631: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 11632: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 11858: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 11859: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11860: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11862: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11863: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 11865: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11867: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11868: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11869: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11870: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11871: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11872: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11873: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11874: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11875: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11876: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 12626: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 12627: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12628: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12629: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12630: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12631: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 12633: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12635: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12636: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12637: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12638: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12639: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12640: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12641: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12642: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12643: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 12939: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 12940: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12941: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12942: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12943: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 12945: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12947: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12948: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12949: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12950: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12951: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12952: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12953: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12954: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12955: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 15601: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 15602: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15603: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15604: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15605: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15606: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 15607: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15609: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15610: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15611: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15612: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15613: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15614: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15615: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15616: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15617: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 15881: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15882: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15883: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15884: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15885: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15886: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 15887: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15889: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15890: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15891: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15892: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15893: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15894: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15895: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15896: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15897: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 18278: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 18279: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 18280: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18281: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18282: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 18283: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 18284: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18286: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18287: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18288: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18289: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18290: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18291: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18292: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18293: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18294: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 18622: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 18623: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 18624: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 18625: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 18626: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 18627: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 18628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 18629: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 18630: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 18631: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 18632: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 18633: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 18634: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 18635: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 18636: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 18862: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 18863: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 18864: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 18865: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 18866: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 18867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 18868: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 18869: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 18870: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 18871: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 18872: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 18873: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 18874: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 18875: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 18996: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 18997: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 19108: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 19109: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19110: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19111: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 19112: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19114: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19115: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19116: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19117: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19118: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19119: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19120: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19121: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 19315: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 19316: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19317: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19318: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 19319: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19321: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19322: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19323: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19324: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19325: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19326: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19327: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19328: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 19539: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 19540: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 19541: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 19542: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 19543: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19545: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19546: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19547: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19548: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19549: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19551: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19552: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 19759: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 19760: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 19761: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 19762: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 19763: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 19764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 19765: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 19766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 19767: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 19768: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 19769: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 19770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 19771: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 19772: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 19993: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 19994: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19995: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 19996: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 19997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19998: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20000: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20001: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20002: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20004: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20005: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 20354: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 20355: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 20356: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 20357: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20359: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20361: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20362: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20363: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20365: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20366: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 22071: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 22072: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 22073: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 22074: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 22075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22076: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 22078: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22079: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 22080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22081: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22082: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 22304: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 22305: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 22306: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 22307: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22309: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 22311: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22312: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22314: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22315: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 22597: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 22655: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 22656: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22657: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 22658: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22660: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 22662: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22663: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22665: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22666: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 22913: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 22914: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 22915: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 22916: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 22917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 22918: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 22919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 22920: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 22921: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 22922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 22923: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 22924: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 23266: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 23267: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 23268: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 23269: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23271: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 23273: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23274: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23276: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23277: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 23675: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 23676: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 23677: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 23678: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 23679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23680: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23682: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 23683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23684: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23685: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 23945: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 23946: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 23947: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 23948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 23949: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 23950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 23951: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 23952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 23953: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 23954: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 24186: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 24187: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 24188: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 24189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24190: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24192: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 24193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24194: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24195: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 24260: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 24261: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 24262: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 24330: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 24331: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 24332: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 24333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24334: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24336: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24338: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24339: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 24453: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 24454: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 24455: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 24456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 24457: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 24458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 24459: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 24460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 24461: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 24462: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 24580: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 24581: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 24582: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 24583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 24584: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 24585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 24586: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 24587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 24588: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 24589: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 24707: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24708: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 24709: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24711: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24713: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24715: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24716: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 24833: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24834: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 24835: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24837: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24839: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24841: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24842: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 24942: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 24943: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 24962: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24963: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 24964: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24966: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24968: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24970: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24971: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 25150: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 25151: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 25152: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25154: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 25155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 25156: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 25157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 25158: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 25159: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 25291: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 25292: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 25293: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 25294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 25295: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 25296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 25297: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 25298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 25299: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 25300: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 25563: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25564: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 25565: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25567: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25569: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25571: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25572: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 25719: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25720: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 25721: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25723: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25725: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25727: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25728: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 25874: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25875: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 25876: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25878: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25880: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25882: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25883: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 25947: estimate 5.70; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 25948: estimate 5.70; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 26272: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 26273: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 26274: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 26275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 26276: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 26277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 26278: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 26279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 26280: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 26281: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 26430: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 26431: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 26432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 26433: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 26434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 26435: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 26436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 26437: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 26438: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 26584: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 26585: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 26586: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 26589: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 26590: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26592: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26594: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26596: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26597: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 26712: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26713: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 26714: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26715: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26717: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26719: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26720: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 0, trace 26826: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26827: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26828: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26829: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26831: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26833: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26834: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 0, trace 26957: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26958: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26959: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26960: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26962: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26964: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26965: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 0, trace 27082: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 27083: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 27084: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27085: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 27087: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 27088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 27089: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 27090: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 0, trace 27198: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27199: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 27200: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27201: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27203: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27205: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27206: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 0, trace 27323: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27324: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27325: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27326: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27328: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27330: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27331: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 0, trace 27452: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 27453: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 27454: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27455: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27457: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 27459: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27460: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 0, trace 27564: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27565: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27566: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27567: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27569: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27571: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27572: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 0, trace 27685: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27686: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27687: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27688: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27690: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27692: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27693: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 0, trace 27811: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27812: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27813: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27814: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27816: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27818: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27819: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 0, trace 27933: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 27934: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 27935: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 27936: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 27937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 27938: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27940: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27941: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 0, trace 28049: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 28050: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 28051: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 28052: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 28053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 28054: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 28055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 28056: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 28057: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 0, trace 28168: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28169: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28170: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28171: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28173: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28175: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28176: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 28278: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 28279: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 0, trace 28298: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 28299: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28300: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28301: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28303: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28305: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28306: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 0, trace 28417: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 28418: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28419: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 28420: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 28421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 28422: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28424: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28425: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 0, trace 28534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 28535: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 28536: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 28537: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 28538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 28539: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 28540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 28541: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 28542: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 0, trace 28657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 28658: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 28659: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 28660: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 28661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 28662: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 28663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 28664: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 28665: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 0, trace 28782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 28783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 28784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28785: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 28786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 28787: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28789: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 28790: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 0, trace 28906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 28907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 28908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 28909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 28910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 28911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 28912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 28913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 28914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 28984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 28985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 28986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 28987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 0, trace 29095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 29096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 29097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 29098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 29099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 29100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 29101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 29102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 29103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Rook killed in action
- 1: Voss incapacitated
- 1: Ash incapacitated
- 1: Tern killed in action
- 1: Flint killed in action
- 1: Reed killed in action
- 1: Moss incapacitated
- 1: Lark killed in action
- 1: Bram killed in action
- 1: Soren incapacitated
- 1: Bren incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
