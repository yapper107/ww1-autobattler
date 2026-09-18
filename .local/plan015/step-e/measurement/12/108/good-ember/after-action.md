# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/108/good-ember/battle-108-1789673898476715141`

## Battle summary

**Ember** · 360 s · 62 shots.

### Turning points

- 27.1s, squad 4: contact (events line 287). First recorded contact.
- 30.9s, squad 0: withdrawal ([trace 2093](#trace-2093)). 68.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 49.0s, squad 0: help call ([trace 3566](#trace-3566)). No completion observed before termination.
- 114.2s, squad 0: withdrawal ([trace 6447](#trace-6447)). 141.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 125.8s, squad 0: help call ([trace 7061](#trace-7061)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 1 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 61 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 771](#trace-771)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 30.9s, squad 0 chose broke contact ([trace 2093](#trace-2093)), followed by 0 shots and 0 own casualties; estimate 5.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 770](#trace-770)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899745839727147, 'next_transition': 793}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.043283 retreat threshold=0.220000 initiative=requires intent ([trace 3082](#trace-3082)). Following evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9453784120059279, 'next_transition': 3104}.

### Communication

123 matched deliveries (mean 0.26s, max 5.35s); 244 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.10s, squad 4, contact, evidence events line 287: First recorded contact; .
- 30.85s, squad 0, withdrawal, evidence 2093: BreakContact: believed ratio at least two without superiority; 68.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 49.00s, squad 0, help call, evidence 3566: NeedSupport; No completion observed before termination.
- 114.25s, squad 0, withdrawal, evidence 6447: BreakContact: believed ratio at least two without superiority; 141.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 125.75s, squad 0, help call, evidence 7061: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.506668098731385, 'next_transition': 458}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.506668098731385, 'next_transition': 458}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.506668098731385, 'next_transition': 458}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-361"></a>
<a id="trace-368"></a>
<a id="trace-387"></a>
<a id="trace-395"></a>
<a id="trace-408"></a>
<a id="trace-417"></a>
<a id="trace-436"></a>
<a id="trace-460"></a>
<a id="trace-473"></a>
<a id="trace-481"></a>
<a id="trace-564"></a>
<a id="trace-572"></a>
<a id="trace-691"></a>
<a id="trace-705"></a>
<a id="trace-723"></a>
<a id="trace-740"></a>
<a id="trace-756"></a>
<a id="trace-768"></a>
<a id="trace-795"></a>
<a id="trace-809"></a>
<a id="trace-893"></a>
<a id="trace-903"></a>
<a id="trace-925"></a>
<a id="trace-940"></a>
<a id="trace-954"></a>
<a id="trace-964"></a>
<a id="trace-985"></a>
<a id="trace-994"></a>
<a id="trace-1088"></a>
<a id="trace-1099"></a>
<a id="trace-1184"></a>
<a id="trace-1208"></a>
<a id="trace-1226"></a>
<a id="trace-1242"></a>
<a id="trace-1268"></a>
<a id="trace-1275"></a>
<a id="trace-1290"></a>
<a id="trace-1298"></a>
<a id="trace-1319"></a>
<a id="trace-1337"></a>
<a id="trace-1415"></a>
<a id="trace-1424"></a>
<a id="trace-1450"></a>
<a id="trace-1462"></a>
<a id="trace-1522"></a>
<a id="trace-1851"></a>
<a id="trace-1883"></a>
<a id="trace-1896"></a>
<a id="trace-1918"></a>
<a id="trace-1935"></a>
<a id="trace-2045"></a>
<a id="trace-2076"></a>
<a id="trace-2269"></a>
<a id="trace-2306"></a>
<a id="trace-2354"></a>
<a id="trace-2411"></a>
<a id="trace-2461"></a>
<a id="trace-2510"></a>
<a id="trace-2561"></a>
<a id="trace-2616"></a>
<a id="trace-2731"></a>
<a id="trace-2778"></a>
<a id="trace-2811"></a>
<a id="trace-2841"></a>
<a id="trace-2886"></a>
<a id="trace-2897"></a>
<a id="trace-2917"></a>
<a id="trace-2944"></a>
<a id="trace-2955"></a>
<a id="trace-2962"></a>
<a id="trace-3041"></a>
<a id="trace-3056"></a>
<a id="trace-3076"></a>
<a id="trace-3106"></a>
<a id="trace-3140"></a>
<a id="trace-3180"></a>
<a id="trace-3232"></a>
<a id="trace-3325"></a>
<a id="trace-3362"></a>
<a id="trace-3398"></a>
<a id="trace-3479"></a>
<a id="trace-3490"></a>
<a id="trace-3510"></a>
<a id="trace-3520"></a>
<a id="trace-3536"></a>
<a id="trace-3542"></a>
<a id="trace-3553"></a>
<a id="trace-3564"></a>
<a id="trace-3578"></a>
<a id="trace-3584"></a>
<a id="trace-3669"></a>
<a id="trace-3674"></a>
<a id="trace-3684"></a>
<a id="trace-3691"></a>
<a id="trace-3704"></a>
<a id="trace-3716"></a>
<a id="trace-3724"></a>
<a id="trace-3729"></a>
<a id="trace-3751"></a>
<a id="trace-3758"></a>
<a id="trace-3830"></a>
<a id="trace-3841"></a>
<a id="trace-3853"></a>
<a id="trace-3867"></a>
<a id="trace-3878"></a>
<a id="trace-3888"></a>
<a id="trace-3911"></a>
<a id="trace-3918"></a>
<a id="trace-3932"></a>
<a id="trace-3943"></a>
<a id="trace-4027"></a>
<a id="trace-4116"></a>
<a id="trace-4131"></a>
<a id="trace-4138"></a>
<a id="trace-4164"></a>
<a id="trace-4179"></a>
<a id="trace-4190"></a>
<a id="trace-4207"></a>
<a id="trace-4221"></a>
<a id="trace-4231"></a>
<a id="trace-4310"></a>
<a id="trace-4338"></a>
<a id="trace-4350"></a>
<a id="trace-4366"></a>
<a id="trace-4380"></a>
<a id="trace-4395"></a>
<a id="trace-4407"></a>
<a id="trace-4479"></a>
<a id="trace-4494"></a>
<a id="trace-4574"></a>
<a id="trace-4594"></a>
<a id="trace-4611"></a>
<a id="trace-4622"></a>
<a id="trace-4652"></a>
<a id="trace-4663"></a>
<a id="trace-4680"></a>
<a id="trace-4688"></a>
<a id="trace-4707"></a>
<a id="trace-4723"></a>
<a id="trace-4798"></a>
<a id="trace-4809"></a>
<a id="trace-4824"></a>
<a id="trace-4833"></a>
<a id="trace-4849"></a>
<a id="trace-4856"></a>
<a id="trace-4873"></a>
<a id="trace-4888"></a>
<a id="trace-4900"></a>
<a id="trace-4907"></a>
<a id="trace-4992"></a>
<a id="trace-5007"></a>
<a id="trace-5024"></a>
<a id="trace-5033"></a>
<a id="trace-5048"></a>
<a id="trace-5059"></a>
<a id="trace-5075"></a>
<a id="trace-5082"></a>
<a id="trace-5102"></a>
<a id="trace-5113"></a>
<a id="trace-5194"></a>
<a id="trace-5201"></a>
<a id="trace-5217"></a>
<a id="trace-5233"></a>
<a id="trace-5247"></a>
<a id="trace-5260"></a>
<a id="trace-5336"></a>
<a id="trace-5345"></a>
<a id="trace-5363"></a>
<a id="trace-5373"></a>
<a id="trace-5459"></a>
<a id="trace-5475"></a>
<a id="trace-5492"></a>
<a id="trace-5504"></a>
<a id="trace-5518"></a>
<a id="trace-5532"></a>
<a id="trace-5545"></a>
<a id="trace-5560"></a>
<a id="trace-5577"></a>
<a id="trace-5591"></a>
<a id="trace-5673"></a>
<a id="trace-5681"></a>
<a id="trace-5698"></a>
<a id="trace-5708"></a>
<a id="trace-5723"></a>
<a id="trace-5731"></a>
<a id="trace-5747"></a>
<a id="trace-5764"></a>
<a id="trace-5776"></a>
<a id="trace-5789"></a>
<a id="trace-5869"></a>
<a id="trace-5878"></a>
<a id="trace-5895"></a>
<a id="trace-5907"></a>
<a id="trace-5928"></a>
<a id="trace-5940"></a>
<a id="trace-5950"></a>
<a id="trace-5962"></a>
<a id="trace-5977"></a>
<a id="trace-5989"></a>
<a id="trace-6066"></a>
<a id="trace-6075"></a>
<a id="trace-6093"></a>
<a id="trace-6103"></a>
<a id="trace-6114"></a>
<a id="trace-6125"></a>
<a id="trace-6141"></a>
<a id="trace-6147"></a>
<a id="trace-6163"></a>
<a id="trace-6170"></a>
<a id="trace-6248"></a>
<a id="trace-6258"></a>
<a id="trace-6377"></a>
<a id="trace-6384"></a>
<a id="trace-6396"></a>
<a id="trace-6408"></a>
<a id="trace-6418"></a>
<a id="trace-6429"></a>
<a id="trace-6446"></a>
<a id="trace-6608"></a>
<a id="trace-6684"></a>
<a id="trace-6694"></a>
<a id="trace-6712"></a>
<a id="trace-6719"></a>
<a id="trace-6737"></a>
<a id="trace-6767"></a>
<a id="trace-6796"></a>
<a id="trace-6805"></a>
<a id="trace-6823"></a>
<a id="trace-6834"></a>
<a id="trace-6908"></a>
<a id="trace-6914"></a>
<a id="trace-6927"></a>
<a id="trace-6931"></a>
<a id="trace-6944"></a>
<a id="trace-6947"></a>
<a id="trace-6956"></a>
<a id="trace-6961"></a>
<a id="trace-6974"></a>
<a id="trace-6983"></a>
<a id="trace-7056"></a>
<a id="trace-7060"></a>
<a id="trace-7076"></a>
<a id="trace-7080"></a>
<a id="trace-7092"></a>
<a id="trace-7102"></a>
<a id="trace-7112"></a>
<a id="trace-7125"></a>
<a id="trace-7138"></a>
<a id="trace-7146"></a>
<a id="trace-7224"></a>
<a id="trace-7229"></a>
<a id="trace-7241"></a>
<a id="trace-7248"></a>
<a id="trace-7258"></a>
<a id="trace-7265"></a>
<a id="trace-7276"></a>
<a id="trace-7285"></a>
<a id="trace-7295"></a>
<a id="trace-7302"></a>
<a id="trace-7374"></a>
<a id="trace-7382"></a>
<a id="trace-7391"></a>
<a id="trace-7397"></a>
<a id="trace-7406"></a>
<a id="trace-7414"></a>
<a id="trace-7429"></a>
<a id="trace-7437"></a>
<a id="trace-7448"></a>
<a id="trace-7458"></a>
<a id="trace-7535"></a>
<a id="trace-7543"></a>
<a id="trace-7556"></a>
<a id="trace-7566"></a>
<a id="trace-7577"></a>
<a id="trace-7582"></a>
<a id="trace-7598"></a>
<a id="trace-7605"></a>
<a id="trace-7614"></a>
<a id="trace-7621"></a>
<a id="trace-7695"></a>
<a id="trace-7701"></a>
<a id="trace-7712"></a>
<a id="trace-7722"></a>
<a id="trace-7735"></a>
<a id="trace-7743"></a>
<a id="trace-7755"></a>
<a id="trace-7761"></a>
<a id="trace-7770"></a>
<a id="trace-7777"></a>
<a id="trace-7850"></a>
<a id="trace-7857"></a>
<a id="trace-7867"></a>
<a id="trace-7873"></a>
<a id="trace-7883"></a>
<a id="trace-7892"></a>
<a id="trace-7907"></a>
<a id="trace-7916"></a>
<a id="trace-7927"></a>
<a id="trace-7933"></a>
<a id="trace-8007"></a>
<a id="trace-8014"></a>
<a id="trace-8024"></a>
<a id="trace-8031"></a>
<a id="trace-8042"></a>
<a id="trace-8047"></a>
<a id="trace-8061"></a>
<a id="trace-8068"></a>
<a id="trace-8079"></a>
<a id="trace-8089"></a>
<a id="trace-8162"></a>
<a id="trace-8168"></a>
<a id="trace-8179"></a>
<a id="trace-8188"></a>
<a id="trace-8199"></a>
<a id="trace-8206"></a>
<a id="trace-8219"></a>
<a id="trace-8224"></a>
<a id="trace-8234"></a>
<a id="trace-8241"></a>
<a id="trace-8314"></a>
<a id="trace-8323"></a>
<a id="trace-8333"></a>
<a id="trace-8339"></a>
<a id="trace-8350"></a>
<a id="trace-8357"></a>
<a id="trace-8374"></a>
<a id="trace-8381"></a>
<a id="trace-8390"></a>
<a id="trace-8396"></a>
<a id="trace-8469"></a>
<a id="trace-8476"></a>
<a id="trace-8486"></a>
<a id="trace-8494"></a>
<a id="trace-8505"></a>
<a id="trace-8511"></a>
<a id="trace-8527"></a>
<a id="trace-8533"></a>
<a id="trace-8543"></a>
<a id="trace-8553"></a>
<a id="trace-8627"></a>
<a id="trace-8633"></a>
<a id="trace-8643"></a>
<a id="trace-8650"></a>
<a id="trace-8660"></a>
<a id="trace-8668"></a>
<a id="trace-8681"></a>
<a id="trace-8686"></a>
<a id="trace-8697"></a>
<a id="trace-8708"></a>
<a id="trace-8782"></a>
<a id="trace-8789"></a>
<a id="trace-8799"></a>
<a id="trace-8806"></a>
<a id="trace-8819"></a>
<a id="trace-8827"></a>
<a id="trace-8840"></a>
<a id="trace-8848"></a>
<a id="trace-8857"></a>
<a id="trace-8864"></a>
<a id="trace-8937"></a>
<a id="trace-8945"></a>
<a id="trace-8957"></a>
<a id="trace-8964"></a>
<a id="trace-8975"></a>
<a id="trace-8981"></a>
<a id="trace-8994"></a>
<a id="trace-9001"></a>
<a id="trace-9014"></a>
<a id="trace-9023"></a>
<a id="trace-9095"></a>
<a id="trace-9101"></a>
<a id="trace-9112"></a>
<a id="trace-9119"></a>
<a id="trace-9131"></a>
<a id="trace-9140"></a>
<a id="trace-9153"></a>
<a id="trace-9159"></a>
<a id="trace-9169"></a>
<a id="trace-9177"></a>
<a id="trace-9250"></a>
<a id="trace-9262"></a>
<a id="trace-9271"></a>
<a id="trace-9277"></a>
<a id="trace-9287"></a>
<a id="trace-9294"></a>
<a id="trace-9307"></a>
<a id="trace-9315"></a>
<a id="trace-9327"></a>
<a id="trace-9333"></a>
<a id="trace-9405"></a>
<a id="trace-9413"></a>
<a id="trace-9423"></a>
<a id="trace-9431"></a>
<a id="trace-9444"></a>
<a id="trace-9451"></a>
<a id="trace-9464"></a>
<a id="trace-9471"></a>
<a id="trace-9481"></a>
<a id="trace-9488"></a>
<a id="trace-9562"></a>
<a id="trace-9568"></a>
<a id="trace-9580"></a>
<a id="trace-9587"></a>
<a id="trace-9598"></a>
<a id="trace-9607"></a>
<a id="trace-9619"></a>
<a id="trace-9624"></a>
<a id="trace-9635"></a>
<a id="trace-9643"></a>
<a id="trace-9717"></a>
<a id="trace-9724"></a>
<a id="trace-9735"></a>
<a id="trace-9741"></a>
<a id="trace-9753"></a>
<a id="trace-9762"></a>
<a id="trace-9774"></a>
<a id="trace-9782"></a>
<a id="trace-9791"></a>
<a id="trace-9797"></a>
<a id="trace-9871"></a>
<a id="trace-9877"></a>
<a id="trace-9886"></a>
<a id="trace-9896"></a>
<a id="trace-9908"></a>
<a id="trace-9915"></a>
<a id="trace-9928"></a>
<a id="trace-9935"></a>
<a id="trace-9947"></a>
<a id="trace-9955"></a>
<a id="trace-10027"></a>
<a id="trace-10033"></a>
<a id="trace-10045"></a>
<a id="trace-10052"></a>
<a id="trace-10063"></a>
<a id="trace-10070"></a>
<a id="trace-10086"></a>
<a id="trace-10093"></a>
<a id="trace-10104"></a>
<a id="trace-10111"></a>
<a id="trace-10185"></a>
<a id="trace-10195"></a>
<a id="trace-10204"></a>
<a id="trace-10265"></a>
<a id="trace-10280"></a>
<a id="trace-10287"></a>
<a id="trace-10305"></a>
<a id="trace-10322"></a>
<a id="trace-10334"></a>
<a id="trace-10342"></a>
<a id="trace-10424"></a>
<a id="trace-10435"></a>
<a id="trace-10446"></a>
<a id="trace-10456"></a>
<a id="trace-10475"></a>
<a id="trace-10488"></a>
<a id="trace-10498"></a>
<a id="trace-10561"></a>
<a id="trace-10575"></a>
<a id="trace-10585"></a>
<a id="trace-10659"></a>
<a id="trace-10665"></a>
<a id="trace-10681"></a>
<a id="trace-10700"></a>
<a id="trace-10714"></a>
<a id="trace-10724"></a>
<a id="trace-10744"></a>
<a id="trace-10751"></a>
<a id="trace-10766"></a>
<a id="trace-10777"></a>
<a id="trace-10855"></a>
<a id="trace-10868"></a>
<a id="trace-10932"></a>
<a id="trace-10941"></a>
<a id="trace-10955"></a>
<a id="trace-10963"></a>
<a id="trace-10975"></a>
<a id="trace-10988"></a>
<a id="trace-11006"></a>
<a id="trace-11020"></a>
<a id="trace-11097"></a>
<a id="trace-11107"></a>
<a id="trace-11122"></a>
<a id="trace-11130"></a>
<a id="trace-11145"></a>
<a id="trace-11150"></a>
<a id="trace-11172"></a>
<a id="trace-11188"></a>
<a id="trace-11200"></a>
<a id="trace-11209"></a>
<a id="trace-11287"></a>
<a id="trace-11295"></a>
<a id="trace-11310"></a>
<a id="trace-11320"></a>
<a id="trace-11334"></a>
<a id="trace-11341"></a>
<a id="trace-11352"></a>
<a id="trace-11358"></a>
<a id="trace-11369"></a>
<a id="trace-11376"></a>
<a id="trace-11449"></a>
<a id="trace-11457"></a>
<a id="trace-11466"></a>
<a id="trace-11474"></a>
<a id="trace-11486"></a>
<a id="trace-11495"></a>
<a id="trace-11508"></a>
<a id="trace-11517"></a>
<a id="trace-11527"></a>
<a id="trace-11533"></a>
<a id="trace-11605"></a>
<a id="trace-11612"></a>
<a id="trace-11622"></a>
<a id="trace-11631"></a>
<a id="trace-11639"></a>
<a id="trace-11645"></a>
<a id="trace-11657"></a>
<a id="trace-11665"></a>
<a id="trace-11677"></a>
<a id="trace-11687"></a>
<a id="trace-11761"></a>
<a id="trace-11767"></a>
<a id="trace-11777"></a>
<a id="trace-11786"></a>
<a id="trace-11795"></a>
<a id="trace-11803"></a>
<a id="trace-11812"></a>
<a id="trace-11818"></a>
<a id="trace-11829"></a>
<a id="trace-11836"></a>
<a id="trace-11909"></a>
<a id="trace-11917"></a>
<a id="trace-11927"></a>
<a id="trace-11936"></a>
<a id="trace-11951"></a>
<a id="trace-11958"></a>
<a id="trace-11969"></a>
<a id="trace-11977"></a>
<a id="trace-11987"></a>
<a id="trace-11993"></a>
<a id="trace-12066"></a>
<a id="trace-12072"></a>
<a id="trace-12082"></a>
<a id="trace-12091"></a>
<a id="trace-12103"></a>
<a id="trace-12109"></a>
<a id="trace-12121"></a>
<a id="trace-12134"></a>
<a id="trace-12145"></a>
<a id="trace-12153"></a>
<a id="trace-12225"></a>
<a id="trace-12230"></a>
<a id="trace-12240"></a>
<a id="trace-12248"></a>
<a id="trace-12258"></a>
<a id="trace-12265"></a>
<a id="trace-12276"></a>
<a id="trace-12284"></a>
<a id="trace-12295"></a>
<a id="trace-12304"></a>
<a id="trace-12381"></a>
<a id="trace-12390"></a>
<a id="trace-12399"></a>
<a id="trace-12407"></a>
<a id="trace-12423"></a>
<a id="trace-12434"></a>
<a id="trace-12441"></a>
<a id="trace-12452"></a>
<a id="trace-12458"></a>
<a id="trace-12534"></a>
<a id="trace-12541"></a>
<a id="trace-12552"></a>
<a id="trace-12565"></a>
<a id="trace-12576"></a>
<a id="trace-12582"></a>
<a id="trace-12593"></a>
<a id="trace-12599"></a>
<a id="trace-12609"></a>
<a id="trace-12616"></a>
<a id="trace-12688"></a>
<a id="trace-12694"></a>
<a id="trace-12711"></a>
<a id="trace-12723"></a>
<a id="trace-12737"></a>
<a id="trace-12745"></a>
<a id="trace-12762"></a>
<a id="trace-12768"></a>
<a id="trace-12780"></a>
<a id="trace-12789"></a>
<a id="trace-12862"></a>
<a id="trace-12869"></a>
<a id="trace-12879"></a>
<a id="trace-12884"></a>
<a id="trace-12896"></a>
<a id="trace-12903"></a>
<a id="trace-12915"></a>
<a id="trace-12922"></a>
<a id="trace-12932"></a>
<a id="trace-12939"></a>
<a id="trace-13014"></a>
<a id="trace-13021"></a>
<a id="trace-13034"></a>
<a id="trace-13040"></a>
<a id="trace-13052"></a>
<a id="trace-13057"></a>
<a id="trace-13067"></a>
<a id="trace-13073"></a>
<a id="trace-13083"></a>
<a id="trace-13091"></a>
<a id="trace-13164"></a>
<a id="trace-13170"></a>
<a id="trace-13182"></a>
<a id="trace-13191"></a>
<a id="trace-13203"></a>
<a id="trace-13212"></a>
<a id="trace-13224"></a>
<a id="trace-13229"></a>
<a id="trace-13240"></a>
<a id="trace-13247"></a>
<a id="trace-13319"></a>
<a id="trace-13327"></a>
<a id="trace-13336"></a>
<a id="trace-13343"></a>
<a id="trace-13355"></a>
<a id="trace-13362"></a>
<a id="trace-13375"></a>
<a id="trace-13381"></a>
<a id="trace-13392"></a>
<a id="trace-13399"></a>
<a id="trace-13473"></a>
<a id="trace-13481"></a>
<a id="trace-13491"></a>
<a id="trace-13499"></a>
<a id="trace-13510"></a>
<a id="trace-13516"></a>
<a id="trace-13528"></a>
<a id="trace-13535"></a>
<a id="trace-13547"></a>
<a id="trace-13556"></a>
<a id="trace-13629"></a>
<a id="trace-13636"></a>
<a id="trace-13645"></a>
<a id="trace-13652"></a>
<a id="trace-13667"></a>
<a id="trace-13676"></a>
<a id="trace-13686"></a>
<a id="trace-13691"></a>
<a id="trace-13702"></a>
<a id="trace-13709"></a>
<a id="trace-13782"></a>
<a id="trace-13790"></a>
<a id="trace-13802"></a>
<a id="trace-13807"></a>
<a id="trace-13819"></a>
<a id="trace-13827"></a>
<a id="trace-13837"></a>
<a id="trace-13849"></a>
<a id="trace-13859"></a>
<a id="trace-13865"></a>
<a id="trace-13938"></a>
<a id="trace-13945"></a>
<a id="trace-13956"></a>
<a id="trace-13963"></a>
<a id="trace-13975"></a>
<a id="trace-13981"></a>
<a id="trace-13993"></a>
<a id="trace-14001"></a>
<a id="trace-14011"></a>
<a id="trace-14019"></a>
<a id="trace-14094"></a>
<a id="trace-14101"></a>
<a id="trace-14111"></a>
<a id="trace-14118"></a>
<a id="trace-14129"></a>
<a id="trace-14136"></a>
<a id="trace-14147"></a>
<a id="trace-14153"></a>
<a id="trace-14165"></a>
<a id="trace-14173"></a>
<a id="trace-14246"></a>
<a id="trace-14254"></a>
<a id="trace-14263"></a>
<a id="trace-14269"></a>
<a id="trace-14282"></a>
<a id="trace-14291"></a>
<a id="trace-14303"></a>
<a id="trace-14310"></a>
<a id="trace-14321"></a>
<a id="trace-14328"></a>
<a id="trace-14401"></a>
<a id="trace-14409"></a>
<a id="trace-14421"></a>
<a id="trace-14429"></a>
<a id="trace-14440"></a>
<a id="trace-14445"></a>
<a id="trace-14457"></a>
<a id="trace-14463"></a>
<a id="trace-14473"></a>
<a id="trace-14483"></a>
<a id="trace-14556"></a>
<a id="trace-14561"></a>
<a id="trace-14572"></a>
<a id="trace-14578"></a>
<a id="trace-14591"></a>
<a id="trace-14601"></a>
<a id="trace-14611"></a>
<a id="trace-14617"></a>
<a id="trace-14630"></a>
<a id="trace-14637"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6015953836021876, 'next_transition': 232}.
<a id="trace-458"></a>
<a id="trace-471"></a>
<a id="trace-479"></a>
<a id="trace-562"></a>
<a id="trace-570"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 458): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450187795450303, 'next_transition': 471}.
<a id="trace-577"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 577): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 484. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724963650723586, 'next_transition': 689}.
<a id="trace-689"></a>
<a id="trace-754"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 689): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 486. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.8156799777786476, 'next_transition': 754}.
<a id="trace-142"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899745839727147, 'next_transition': 793}.
<a id="trace-770"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 770): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 770. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899745839727147, 'next_transition': 793}.
<a id="trace-771"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 771): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 771. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899745839727147, 'next_transition': 793}.
<a id="trace-793"></a>
<a id="trace-807"></a>
<a id="trace-891"></a>
<a id="trace-901"></a>
<a id="trace-923"></a>
<a id="trace-938"></a>
<a id="trace-952"></a>
<a id="trace-962"></a>
<a id="trace-992"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 793): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 771. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662524388513804, 'next_transition': 807}.
<a id="trace-999"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 999): traveling overwatch. Knowledge: actor memory at 15.00s, trace 815. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534648384248664, 'next_transition': 1086}.
<a id="trace-1000"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1000): received platoon directive. Knowledge: actor memory at 15.00s, trace 815. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534648384248664, 'next_transition': 1086}.
<a id="trace-1086"></a>
<a id="trace-1097"></a>
<a id="trace-1182"></a>
<a id="trace-1206"></a>
<a id="trace-1240"></a>
<a id="trace-1288"></a>
<a id="trace-1317"></a>
<a id="trace-1335"></a>
<a id="trace-1413"></a>
<a id="trace-1422"></a>
- 19.25s–25.75s (×10), actor 5, squad 0 (trace 1086): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 817. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449885999191305, 'next_transition': 1097}.
<a id="trace-1471"></a>
- 27.15s–27.15s (×1), actor 0, squad 0 (trace 1471): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1339. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1520}.
<a id="trace-1520"></a>
- 27.25s–27.25s (×1), actor 5, squad 0 (trace 1520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1341. Next observer evidence: None.
<a id="trace-1523"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 1523): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1339. Next observer evidence: None.
<a id="trace-1524"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 1524): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1339. Next observer evidence: None.
<a id="trace-1525"></a>
<a id="trace-1632"></a>
<a id="trace-1739"></a>
- 27.25s–27.35s (×3), actor 0, squad 0 (trace 1525): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1339. Next observer evidence: None.
<a id="trace-1881"></a>
<a id="trace-1933"></a>
<a id="trace-2043"></a>
<a id="trace-2074"></a>
- 28.25s–30.75s (×4), actor 5, squad 0 (trace 1881): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1341. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9048396696189807, 'next_transition': 1933}.
<a id="trace-2093"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2093): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 1941. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002108152330833783, 'next_transition': 2304}.
<a id="trace-2094"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2094): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 1941. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002108152330833783, 'next_transition': 2304}.
<a id="trace-2304"></a>
<a id="trace-2352"></a>
<a id="trace-2459"></a>
<a id="trace-2508"></a>
<a id="trace-2559"></a>
<a id="trace-2614"></a>
<a id="trace-2729"></a>
<a id="trace-2776"></a>
<a id="trace-2839"></a>
<a id="trace-2884"></a>
<a id="trace-2915"></a>
<a id="trace-2942"></a>
<a id="trace-2960"></a>
<a id="trace-3039"></a>
<a id="trace-3054"></a>
<a id="trace-3074"></a>
- 31.75s–41.25s (×16), actor 5, squad 0 (trace 2304): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1943. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0008311212306275816, 'next_transition': 2352}.
<a id="trace-504"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 504): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3082"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3082): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.043283 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3082. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9453784120059279, 'next_transition': 3104}.
<a id="trace-3083"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3083): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.043283 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3083. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9453784120059279, 'next_transition': 3104}.
<a id="trace-3104"></a>
<a id="trace-3138"></a>
<a id="trace-3178"></a>
<a id="trace-3230"></a>
- 41.75s–43.25s (×4), actor 5, squad 0 (trace 3104): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 3083. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1218448955820046, 'next_transition': 3138}.
<a id="trace-3263"></a>
- 43.65s–43.65s (×1), actor 0, squad 0 (trace 3263): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 2967. Next observer evidence: None.
<a id="trace-3264"></a>
- 43.65s–43.65s (×1), actor 0, squad 0 (trace 3264): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 2967. Next observer evidence: None.
<a id="trace-3323"></a>
<a id="trace-3488"></a>
<a id="trace-3508"></a>
<a id="trace-3518"></a>
<a id="trace-3534"></a>
<a id="trace-3540"></a>
<a id="trace-3562"></a>
- 43.75s–48.75s (×7), actor 5, squad 0 (trace 3323): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 3083. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.773386171478757, 'next_transition': 3488}.
<a id="trace-3566"></a>
- 49.00s–49.00s (×1), actor 0, squad 0 (trace 3566): NeedSupport. Knowledge: actor memory at 45.00s, trace 3406. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4284155653108096, 'next_transition': 3576}.
<a id="trace-3576"></a>
<a id="trace-3582"></a>
<a id="trace-3667"></a>
<a id="trace-3672"></a>
<a id="trace-3682"></a>
<a id="trace-3702"></a>
<a id="trace-3714"></a>
<a id="trace-3722"></a>
<a id="trace-3727"></a>
<a id="trace-3749"></a>
<a id="trace-3756"></a>
<a id="trace-3839"></a>
<a id="trace-3851"></a>
<a id="trace-3865"></a>
<a id="trace-3876"></a>
<a id="trace-3886"></a>
<a id="trace-3909"></a>
<a id="trace-3916"></a>
<a id="trace-3930"></a>
<a id="trace-3941"></a>
<a id="trace-4025"></a>
- 49.25s–60.25s (×21), actor 5, squad 0 (trace 3576): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3408. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567885826093706, 'next_transition': 3582}.
<a id="trace-4029"></a>
- 60.35s–60.35s (×1), actor 0, squad 0 (trace 4029): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 3947. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4114}.
<a id="trace-4051"></a>
- 60.35s–60.35s (×1), actor 0, squad 0 (trace 4051): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 3947. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4114}.
<a id="trace-4114"></a>
<a id="trace-4129"></a>
<a id="trace-4136"></a>
<a id="trace-4162"></a>
<a id="trace-4177"></a>
<a id="trace-4188"></a>
<a id="trace-4205"></a>
<a id="trace-4219"></a>
<a id="trace-4229"></a>
<a id="trace-4308"></a>
<a id="trace-4316"></a>
<a id="trace-4364"></a>
<a id="trace-4378"></a>
- 60.75s–67.75s (×13), actor 5, squad 0 (trace 4114): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3949. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662392178261169, 'next_transition': 4129}.
<a id="trace-4413"></a>
- 68.90s–68.90s (×1), actor 0, squad 0 (trace 4413): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 4240. Next observer evidence: None.
<a id="trace-4417"></a>
- 68.95s–68.95s (×1), actor 0, squad 0 (trace 4417): MoveTactically. Knowledge: actor memory at 65.00s, trace 4240. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450086830073281, 'next_transition': 4477}.
<a id="trace-4418"></a>
- 68.95s–68.95s (×1), actor 0, squad 0 (trace 4418): traveling overwatch. Knowledge: actor memory at 65.00s, trace 4240. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450086830073281, 'next_transition': 4477}.
<a id="trace-4419"></a>
- 68.95s–68.95s (×1), actor 0, squad 0 (trace 4419): received platoon directive. Knowledge: actor memory at 65.00s, trace 4240. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450086830073281, 'next_transition': 4477}.
<a id="trace-4477"></a>
<a id="trace-4492"></a>
<a id="trace-4572"></a>
<a id="trace-4592"></a>
<a id="trace-4609"></a>
<a id="trace-4650"></a>
<a id="trace-4678"></a>
<a id="trace-4686"></a>
<a id="trace-4705"></a>
<a id="trace-4721"></a>
<a id="trace-4796"></a>
<a id="trace-4807"></a>
<a id="trace-4822"></a>
<a id="trace-4831"></a>
<a id="trace-4847"></a>
<a id="trace-4854"></a>
<a id="trace-4886"></a>
<a id="trace-4990"></a>
<a id="trace-5022"></a>
<a id="trace-5046"></a>
<a id="trace-5057"></a>
<a id="trace-5073"></a>
<a id="trace-5080"></a>
<a id="trace-5100"></a>
<a id="trace-5111"></a>
<a id="trace-5192"></a>
<a id="trace-5231"></a>
<a id="trace-5258"></a>
- 69.25s–87.75s (×28), actor 5, squad 0 (trace 4477): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4242. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449839314371921, 'next_transition': 4492}.
<a id="trace-5268"></a>
- 87.95s–87.95s (×1), actor 0, squad 0 (trace 5268): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 5120. Next observer evidence: {'until': 88, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5271}.
<a id="trace-5271"></a>
- 88.00s–88.00s (×1), actor 0, squad 0 (trace 5271): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 5120. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5334}.
<a id="trace-5334"></a>
<a id="trace-5361"></a>
<a id="trace-5371"></a>
<a id="trace-5457"></a>
<a id="trace-5473"></a>
<a id="trace-5490"></a>
<a id="trace-5502"></a>
<a id="trace-5516"></a>
<a id="trace-5530"></a>
<a id="trace-5543"></a>
<a id="trace-5558"></a>
<a id="trace-5589"></a>
<a id="trace-5679"></a>
<a id="trace-5696"></a>
<a id="trace-5706"></a>
<a id="trace-5721"></a>
<a id="trace-5729"></a>
<a id="trace-5745"></a>
<a id="trace-5762"></a>
<a id="trace-5774"></a>
<a id="trace-5893"></a>
<a id="trace-5905"></a>
<a id="trace-5926"></a>
<a id="trace-5938"></a>
<a id="trace-5960"></a>
<a id="trace-5975"></a>
<a id="trace-6091"></a>
<a id="trace-6112"></a>
<a id="trace-6123"></a>
<a id="trace-6139"></a>
<a id="trace-6161"></a>
<a id="trace-6168"></a>
- 88.25s–109.75s (×32), actor 5, squad 0 (trace 5334): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5122. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0142647644223017, 'next_transition': 5361}.
<a id="trace-1113"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (events line 1113): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06600958737183589, 'next_transition': 6256}.
<a id="trace-6250"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (trace 6250): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.45s, trace 6250. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06600958737183589, 'next_transition': 6256}.
<a id="trace-6256"></a>
- 110.75s–110.75s (×1), actor 5, squad 0 (trace 6256): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 6250. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2072045622687878, 'next_transition': 6375}.
<a id="trace-6259"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 6259): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 6174. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2072045622687878, 'next_transition': 6375}.
<a id="trace-6260"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 6260): bounding overwatch. Knowledge: actor memory at 110.00s, trace 6174. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2072045622687878, 'next_transition': 6375}.
<a id="trace-6261"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 6261): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 6174. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2072045622687878, 'next_transition': 6375}.
<a id="trace-6375"></a>
<a id="trace-6382"></a>
<a id="trace-6406"></a>
<a id="trace-6416"></a>
<a id="trace-6427"></a>
<a id="trace-6444"></a>
- 111.25s–114.25s (×6), actor 5, squad 0 (trace 6375): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 6250. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14579600903316933, 'next_transition': 6382}.
<a id="trace-6447"></a>
- 114.25s–114.25s (×1), actor 0, squad 0 (trace 6447): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 6174. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6682}.
<a id="trace-6448"></a>
- 114.25s–114.25s (×1), actor 0, squad 0 (trace 6448): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 6174. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6682}.
<a id="trace-6682"></a>
<a id="trace-6692"></a>
<a id="trace-6710"></a>
- 115.25s–116.25s (×3), actor 5, squad 0 (trace 6682): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6613. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6692}.
<a id="trace-6714"></a>
- 116.40s–116.40s (×1), actor 0, squad 0 (trace 6714): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 6611. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.44066455316719, 'next_transition': 6735}.
<a id="trace-6735"></a>
<a id="trace-6765"></a>
<a id="trace-6794"></a>
<a id="trace-6832"></a>
<a id="trace-6906"></a>
<a id="trace-6912"></a>
<a id="trace-6925"></a>
<a id="trace-6929"></a>
<a id="trace-6942"></a>
<a id="trace-6954"></a>
<a id="trace-6959"></a>
<a id="trace-6972"></a>
<a id="trace-6981"></a>
- 117.25s–124.75s (×13), actor 5, squad 0 (trace 6735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6613. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5490861702040624, 'next_transition': 6765}.
<a id="trace-7061"></a>
- 125.75s–125.75s (×1), actor 1, squad 0 (trace 7061): NeedSupport. Knowledge: actor memory at 125.00s, trace 6989. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0999967361083622, 'next_transition': 7078}.
<a id="trace-7078"></a>
- 126.75s–126.75s (×1), actor 5, squad 0 (trace 7078): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6990. Next observer evidence: {'until': 126.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000981213024, 'next_transition': 7082}.
<a id="trace-7082"></a>
- 126.85s–126.85s (×1), actor 1, squad 0 (trace 7082): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 6989. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399983192572442, 'next_transition': 7090}.
<a id="trace-7083"></a>
- 126.85s–126.85s (×1), actor 1, squad 0 (trace 7083): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 6989. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399983192572442, 'next_transition': 7090}.
<a id="trace-7090"></a>
<a id="trace-7100"></a>
<a id="trace-7123"></a>
<a id="trace-7136"></a>
<a id="trace-7144"></a>
<a id="trace-7222"></a>
<a id="trace-7239"></a>
<a id="trace-7246"></a>
<a id="trace-7256"></a>
<a id="trace-7274"></a>
<a id="trace-7283"></a>
<a id="trace-7300"></a>
<a id="trace-7380"></a>
<a id="trace-7389"></a>
<a id="trace-7395"></a>
<a id="trace-7412"></a>
<a id="trace-7427"></a>
<a id="trace-7435"></a>
<a id="trace-7446"></a>
<a id="trace-7456"></a>
<a id="trace-7533"></a>
<a id="trace-7541"></a>
- 127.25s–140.80s (×22), actor 5, squad 0 (trace 7090): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6990. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.839931570612031, 'next_transition': 7100}.
<a id="trace-7547"></a>
- 141.05s–141.05s (×1), actor 1, squad 0 (trace 7547): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 140.00s, trace 7465. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7554}.
<a id="trace-7554"></a>
<a id="trace-7564"></a>
<a id="trace-7575"></a>
<a id="trace-7596"></a>
<a id="trace-7603"></a>
<a id="trace-7619"></a>
<a id="trace-7693"></a>
<a id="trace-7710"></a>
<a id="trace-7720"></a>
<a id="trace-7733"></a>
<a id="trace-7753"></a>
<a id="trace-7759"></a>
<a id="trace-7775"></a>
<a id="trace-7848"></a>
<a id="trace-7855"></a>
<a id="trace-7865"></a>
<a id="trace-7890"></a>
<a id="trace-7905"></a>
<a id="trace-7914"></a>
<a id="trace-7925"></a>
<a id="trace-7931"></a>
<a id="trace-8005"></a>
<a id="trace-8012"></a>
<a id="trace-8022"></a>
<a id="trace-8029"></a>
<a id="trace-8040"></a>
<a id="trace-8059"></a>
<a id="trace-8066"></a>
<a id="trace-8077"></a>
<a id="trace-8087"></a>
<a id="trace-8160"></a>
<a id="trace-8166"></a>
<a id="trace-8177"></a>
<a id="trace-8197"></a>
<a id="trace-8204"></a>
<a id="trace-8217"></a>
<a id="trace-8232"></a>
<a id="trace-8312"></a>
<a id="trace-8321"></a>
<a id="trace-8348"></a>
<a id="trace-8355"></a>
<a id="trace-8372"></a>
<a id="trace-8379"></a>
<a id="trace-8394"></a>
<a id="trace-8467"></a>
<a id="trace-8474"></a>
<a id="trace-8492"></a>
<a id="trace-8503"></a>
<a id="trace-8509"></a>
<a id="trace-8525"></a>
<a id="trace-8541"></a>
<a id="trace-8551"></a>
<a id="trace-8625"></a>
<a id="trace-8631"></a>
<a id="trace-8641"></a>
<a id="trace-8648"></a>
<a id="trace-8666"></a>
<a id="trace-8679"></a>
<a id="trace-8695"></a>
- 141.30s–179.30s (×59), actor 5, squad 0 (trace 7554): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 7466. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-1572"></a>
- 179.55s–179.55s (×1), actor 5, squad 0 (events line 1572): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.
<a id="trace-8702"></a>
- 179.55s–179.55s (×1), actor 5, squad 0 (trace 8702): renew committed intent (75 s lifetime). Knowledge: actor memory at 179.55s, trace 8702. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.
<a id="trace-8706"></a>
<a id="trace-8780"></a>
<a id="trace-8787"></a>
<a id="trace-8797"></a>
<a id="trace-8804"></a>
<a id="trace-8817"></a>
<a id="trace-8825"></a>
<a id="trace-8838"></a>
<a id="trace-8846"></a>
<a id="trace-8855"></a>
<a id="trace-8862"></a>
<a id="trace-8935"></a>
<a id="trace-8943"></a>
<a id="trace-8955"></a>
<a id="trace-8962"></a>
<a id="trace-8973"></a>
<a id="trace-8992"></a>
<a id="trace-8999"></a>
<a id="trace-9012"></a>
<a id="trace-9021"></a>
<a id="trace-9093"></a>
<a id="trace-9099"></a>
<a id="trace-9110"></a>
<a id="trace-9117"></a>
<a id="trace-9129"></a>
<a id="trace-9138"></a>
<a id="trace-9151"></a>
<a id="trace-9157"></a>
<a id="trace-9167"></a>
<a id="trace-9175"></a>
<a id="trace-9248"></a>
<a id="trace-9260"></a>
<a id="trace-9269"></a>
<a id="trace-9275"></a>
<a id="trace-9305"></a>
<a id="trace-9313"></a>
<a id="trace-9325"></a>
<a id="trace-9331"></a>
<a id="trace-9411"></a>
<a id="trace-9421"></a>
<a id="trace-9429"></a>
<a id="trace-9442"></a>
<a id="trace-9449"></a>
<a id="trace-9462"></a>
<a id="trace-9469"></a>
<a id="trace-9486"></a>
<a id="trace-9560"></a>
<a id="trace-9566"></a>
<a id="trace-9578"></a>
<a id="trace-9585"></a>
<a id="trace-9596"></a>
<a id="trace-9605"></a>
<a id="trace-9617"></a>
<a id="trace-9633"></a>
<a id="trace-9715"></a>
<a id="trace-9722"></a>
<a id="trace-9733"></a>
<a id="trace-9739"></a>
<a id="trace-9751"></a>
<a id="trace-9760"></a>
<a id="trace-9780"></a>
<a id="trace-9789"></a>
<a id="trace-9795"></a>
<a id="trace-9869"></a>
<a id="trace-9894"></a>
<a id="trace-9906"></a>
<a id="trace-9913"></a>
<a id="trace-9926"></a>
<a id="trace-9945"></a>
<a id="trace-9953"></a>
<a id="trace-10025"></a>
<a id="trace-10031"></a>
- 179.80s–220.80s (×72), actor 5, squad 0 (trace 8706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 179.55s, trace 8702. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8780}.
<a id="trace-1886"></a>
- 221.00s–221.00s (×1), actor 5, squad 0 (events line 1886): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10050}.
<a id="trace-10037"></a>
- 221.00s–221.00s (×1), actor 5, squad 0 (trace 10037): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 221.00s, trace 10037. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10050}.
<a id="trace-10038"></a>
- 221.00s–221.00s (×1), actor 5, squad 0 (trace 10038): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 221.00s, trace 10038. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10050}.
<a id="trace-10050"></a>
<a id="trace-10068"></a>
<a id="trace-10084"></a>
<a id="trace-10091"></a>
<a id="trace-10102"></a>
<a id="trace-10109"></a>
<a id="trace-10183"></a>
<a id="trace-10193"></a>
<a id="trace-10202"></a>
- 221.80s–226.30s (×9), actor 5, squad 0 (trace 10050): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 221.00s, trace 10038. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10068}.
<a id="trace-10205"></a>
- 226.35s–226.35s (×1), actor 1, squad 0 (trace 10205): MoveTactically. Knowledge: actor memory at 225.00s, trace 10113. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000000000036, 'next_transition': 10278}.
<a id="trace-10206"></a>
- 226.35s–226.35s (×1), actor 1, squad 0 (trace 10206): traveling. Knowledge: actor memory at 225.00s, trace 10113. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000000000036, 'next_transition': 10278}.
<a id="trace-10207"></a>
- 226.35s–226.35s (×1), actor 1, squad 0 (trace 10207): received platoon directive. Knowledge: actor memory at 225.00s, trace 10113. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000000000036, 'next_transition': 10278}.
<a id="trace-10278"></a>
<a id="trace-10285"></a>
<a id="trace-10303"></a>
<a id="trace-10320"></a>
<a id="trace-10340"></a>
<a id="trace-10433"></a>
<a id="trace-10444"></a>
<a id="trace-10454"></a>
<a id="trace-10473"></a>
<a id="trace-10486"></a>
- 227.30s–232.80s (×10), actor 5, squad 0 (trace 10278): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 10114. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299999999999955, 'next_transition': 10285}.
<a id="trace-10504"></a>
- 233.65s–233.65s (×1), actor 1, squad 0 (trace 10504): matching received arrivals: traveling stage complete. Knowledge: actor memory at 230.00s, trace 10349. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000000064, 'next_transition': 10559}.
<a id="trace-10559"></a>
<a id="trace-10573"></a>
<a id="trace-10583"></a>
<a id="trace-10657"></a>
<a id="trace-10679"></a>
<a id="trace-10698"></a>
<a id="trace-10712"></a>
<a id="trace-10722"></a>
<a id="trace-10742"></a>
<a id="trace-10749"></a>
<a id="trace-10764"></a>
<a id="trace-10775"></a>
<a id="trace-10853"></a>
<a id="trace-10866"></a>
- 233.80s–240.80s (×14), actor 5, squad 0 (trace 10559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 10350. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.839999999999994, 'next_transition': 10573}.
<a id="trace-10871"></a>
- 240.85s–240.85s (×1), actor 1, squad 0 (trace 10871): matching received arrivals: traveling stage complete. Knowledge: actor memory at 240.00s, trace 10780. Next observer evidence: {'until': 241.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.362500000000002, 'next_transition': 10939}.
<a id="trace-10939"></a>
<a id="trace-10953"></a>
<a id="trace-10986"></a>
<a id="trace-11004"></a>
<a id="trace-11018"></a>
<a id="trace-11095"></a>
<a id="trace-11105"></a>
<a id="trace-11120"></a>
<a id="trace-11143"></a>
- 241.80s–247.30s (×9), actor 5, squad 0 (trace 10939): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 10781. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600666666666644, 'next_transition': 10953}.
<a id="trace-11156"></a>
- 248.05s–248.05s (×1), actor 1, squad 0 (trace 11156): traveling overwatch. Knowledge: actor memory at 245.00s, trace 11025. Next observer evidence: None.
<a id="trace-11157"></a>
- 248.05s–248.05s (×1), actor 1, squad 0 (trace 11157): matching received arrivals: traveling stage complete. Knowledge: actor memory at 245.00s, trace 11025. Next observer evidence: None.
<a id="trace-11161"></a>
- 248.10s–248.10s (×1), actor 1, squad 0 (trace 11161): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 11025. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11170}.
<a id="trace-11170"></a>
<a id="trace-11186"></a>
<a id="trace-11198"></a>
<a id="trace-11207"></a>
<a id="trace-11285"></a>
<a id="trace-11293"></a>
<a id="trace-11308"></a>
<a id="trace-11318"></a>
<a id="trace-11332"></a>
<a id="trace-11339"></a>
<a id="trace-11350"></a>
<a id="trace-11356"></a>
<a id="trace-11367"></a>
<a id="trace-11374"></a>
<a id="trace-11447"></a>
<a id="trace-11455"></a>
<a id="trace-11472"></a>
<a id="trace-11484"></a>
<a id="trace-11493"></a>
<a id="trace-11506"></a>
<a id="trace-11515"></a>
<a id="trace-11531"></a>
<a id="trace-11610"></a>
<a id="trace-11620"></a>
<a id="trace-11643"></a>
<a id="trace-11655"></a>
<a id="trace-11663"></a>
<a id="trace-11675"></a>
<a id="trace-11685"></a>
<a id="trace-11775"></a>
<a id="trace-11784"></a>
<a id="trace-11801"></a>
<a id="trace-11816"></a>
<a id="trace-11827"></a>
<a id="trace-11834"></a>
<a id="trace-11915"></a>
<a id="trace-11934"></a>
<a id="trace-11949"></a>
<a id="trace-11956"></a>
<a id="trace-11967"></a>
<a id="trace-11975"></a>
<a id="trace-11985"></a>
<a id="trace-11991"></a>
<a id="trace-12064"></a>
<a id="trace-12080"></a>
<a id="trace-12089"></a>
<a id="trace-12101"></a>
<a id="trace-12107"></a>
<a id="trace-12119"></a>
<a id="trace-12132"></a>
<a id="trace-12143"></a>
<a id="trace-12151"></a>
<a id="trace-12223"></a>
<a id="trace-12238"></a>
<a id="trace-12256"></a>
<a id="trace-12263"></a>
<a id="trace-12274"></a>
<a id="trace-12282"></a>
<a id="trace-12293"></a>
<a id="trace-12302"></a>
<a id="trace-12379"></a>
<a id="trace-12388"></a>
<a id="trace-12397"></a>
<a id="trace-12405"></a>
<a id="trace-12415"></a>
<a id="trace-12421"></a>
<a id="trace-12432"></a>
<a id="trace-12439"></a>
<a id="trace-12450"></a>
<a id="trace-12456"></a>
- 248.30s–289.80s (×70), actor 5, squad 0 (trace 11170): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 11026. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099999999999985, 'next_transition': 11186}.
<a id="trace-2475"></a>
- 290.00s–290.00s (×1), actor 5, squad 0 (events line 2475): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12532}.
<a id="trace-12468"></a>
- 290.00s–290.00s (×1), actor 5, squad 0 (trace 12468): renew committed intent (75 s lifetime). Knowledge: actor memory at 290.00s, trace 12468. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12532}.
<a id="trace-12532"></a>
<a id="trace-12550"></a>
<a id="trace-12563"></a>
<a id="trace-12574"></a>
<a id="trace-12580"></a>
<a id="trace-12614"></a>
<a id="trace-12692"></a>
- 290.30s–295.80s (×7), actor 5, squad 0 (trace 12532): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 12468. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12550}.
<a id="trace-12697"></a>
- 296.00s–296.00s (×1), actor 1, squad 0 (trace 12697): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 295.00s, trace 12618. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12709}.
<a id="trace-12698"></a>
- 296.00s–296.00s (×1), actor 1, squad 0 (trace 12698): MoveTactically. Knowledge: actor memory at 295.00s, trace 12618. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12709}.
<a id="trace-12699"></a>
- 296.00s–296.00s (×1), actor 1, squad 0 (trace 12699): . Knowledge: actor memory at 295.00s, trace 12618. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12709}.
<a id="trace-12709"></a>
<a id="trace-12721"></a>
<a id="trace-12735"></a>
<a id="trace-12760"></a>
<a id="trace-12766"></a>
<a id="trace-12778"></a>
<a id="trace-12860"></a>
<a id="trace-12867"></a>
<a id="trace-12877"></a>
<a id="trace-12894"></a>
<a id="trace-12901"></a>
<a id="trace-12913"></a>
<a id="trace-12937"></a>
<a id="trace-13012"></a>
<a id="trace-13019"></a>
<a id="trace-13050"></a>
<a id="trace-13089"></a>
<a id="trace-13162"></a>
<a id="trace-13168"></a>
<a id="trace-13180"></a>
<a id="trace-13189"></a>
<a id="trace-13201"></a>
<a id="trace-13222"></a>
<a id="trace-13238"></a>
<a id="trace-13245"></a>
<a id="trace-13325"></a>
<a id="trace-13334"></a>
<a id="trace-13341"></a>
<a id="trace-13353"></a>
<a id="trace-13390"></a>
<a id="trace-13397"></a>
<a id="trace-13479"></a>
<a id="trace-13489"></a>
<a id="trace-13497"></a>
<a id="trace-13508"></a>
<a id="trace-13514"></a>
<a id="trace-13526"></a>
<a id="trace-13533"></a>
<a id="trace-13545"></a>
<a id="trace-13554"></a>
<a id="trace-13627"></a>
<a id="trace-13634"></a>
<a id="trace-13650"></a>
<a id="trace-13665"></a>
<a id="trace-13674"></a>
<a id="trace-13684"></a>
<a id="trace-13700"></a>
<a id="trace-13780"></a>
<a id="trace-13788"></a>
<a id="trace-13800"></a>
<a id="trace-13817"></a>
<a id="trace-13825"></a>
<a id="trace-13847"></a>
<a id="trace-13857"></a>
<a id="trace-13863"></a>
<a id="trace-13936"></a>
<a id="trace-13943"></a>
<a id="trace-13954"></a>
<a id="trace-13961"></a>
<a id="trace-13979"></a>
<a id="trace-13999"></a>
<a id="trace-14017"></a>
<a id="trace-14092"></a>
<a id="trace-14099"></a>
<a id="trace-14109"></a>
<a id="trace-14116"></a>
<a id="trace-14134"></a>
<a id="trace-14151"></a>
<a id="trace-14163"></a>
<a id="trace-14244"></a>
<a id="trace-14261"></a>
<a id="trace-14267"></a>
<a id="trace-14280"></a>
<a id="trace-14289"></a>
<a id="trace-14301"></a>
<a id="trace-14308"></a>
<a id="trace-14319"></a>
<a id="trace-14326"></a>
<a id="trace-14399"></a>
<a id="trace-14407"></a>
<a id="trace-14419"></a>
<a id="trace-14427"></a>
<a id="trace-14438"></a>
<a id="trace-14455"></a>
<a id="trace-14481"></a>
<a id="trace-14570"></a>
<a id="trace-14589"></a>
<a id="trace-14599"></a>
<a id="trace-14609"></a>
<a id="trace-14615"></a>
- 296.30s–358.80s (×90), actor 5, squad 0 (trace 12709): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 12619. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12721}.
<a id="trace-3004"></a>
- 359.00s–359.00s (×1), actor 5, squad 0 (events line 3004): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14628}.
<a id="trace-14622"></a>
- 359.00s–359.00s (×1), actor 5, squad 0 (trace 14622): renew committed intent (75 s lifetime). Knowledge: actor memory at 359.00s, trace 14622. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14628}.
<a id="trace-14628"></a>
<a id="trace-14635"></a>
- 359.30s–359.80s (×2), actor 5, squad 0 (trace 14628): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 359.00s, trace 14622. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14635}.

## Net delivery

123 matched order/radio deliveries; 244 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.261s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1941: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1945: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1946: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1947: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1948: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2638: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2641: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2642: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2643: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2644: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2645: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2967: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2969: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2970: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2971: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2972: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2973: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2974: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3082: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3083: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3406: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3408: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3409: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3410: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3411: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3412: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3413: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3590: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3592: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3593: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3594: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3595: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3596: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3597: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3760: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3762: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3763: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3764: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3765: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3766: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3767: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3947: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3949: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3950: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3951: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3952: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3953: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3954: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4240: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4242: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4243: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4244: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4245: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4246: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4247: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4499: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4501: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4502: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4503: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4504: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4505: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4506: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4726: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4728: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4729: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4730: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4731: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4732: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4733: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4912: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4914: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4915: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4916: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4917: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4918: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4919: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5120: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5122: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5123: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5124: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5125: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5126: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5127: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5377: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5379: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5380: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5381: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5382: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5383: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5384: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5598: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5600: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5601: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5602: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5603: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5604: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5605: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5792: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5794: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5795: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5796: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5797: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5798: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5799: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5995: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5997: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5998: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5999: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6000: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6001: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6002: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 6174: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6176: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6177: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6178: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6179: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6180: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6181: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.45s leader 5, trace 6250: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6611: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6613: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6614: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6615: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6616: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6617: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6618: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6837: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6838: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6839: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6840: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6841: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6842: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6990: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6991: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6992: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6993: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6994: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6995: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7148: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7149: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7150: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7151: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7152: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7153: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7305: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7306: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7307: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7308: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7309: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7310: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7466: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7467: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7468: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7469: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7470: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7471: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7625: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7626: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7627: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7628: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7629: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7630: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7780: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7781: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7782: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7783: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7784: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7785: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7939: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7940: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7941: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7942: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7943: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7944: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8092: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8093: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8094: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8095: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8096: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8097: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8244: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8245: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8246: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8247: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8248: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8249: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8400: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8401: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8402: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8403: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8404: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8405: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8556: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8557: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8558: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8559: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8560: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8561: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.55s leader 5, trace 8702: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8711: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8712: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8713: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8714: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8715: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8716: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8869: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8870: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8871: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8872: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8873: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8874: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9025: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9026: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9027: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9028: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9029: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9030: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9180: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9181: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9182: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9183: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9184: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9185: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9337: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9338: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9339: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9340: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9341: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9342: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9491: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 9492: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9493: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9494: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9495: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9496: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9646: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9647: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9648: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9649: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9650: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9651: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9804: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9805: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9806: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9807: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 221.00s leader 5, trace 10037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 221.00s leader 5, trace 10038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 10780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 10782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 10783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 10784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 10785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 10786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 11689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 11997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 12791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 13252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 13711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 13869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 359.00s leader 5, trace 14622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
