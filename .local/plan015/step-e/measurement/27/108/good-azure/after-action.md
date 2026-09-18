# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/108/good-azure/battle-108-1789674269877518141`

## Battle summary

**Ember** · 360 s · 62 shots.

### Turning points

- 19.9s, squad 0: contact (events line 196). First recorded contact.
- 44.9s, squad 0: help call ([trace 3685](#trace-3685)). No completion observed before termination.
- 51.4s, squad 0: withdrawal ([trace 4096](#trace-4096)). 75.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 92.5s, squad 0: withdrawal ([trace 5379](#trace-5379)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 9 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 53 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 20.2s, squad 0 chose took cover and returned fire ([trace 1295](#trace-1295)), followed by 0 shots and 0 own casualties; estimate 3.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
- 23.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347794 retreat threshold=0.500000 initiative=delegated ([trace 2362](#trace-2362)). Following evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.

### Communication

73 matched deliveries (mean 0.36s, max 1.95s); 248 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.90s, squad 0, contact, evidence events line 196: First recorded contact; .
- 44.90s, squad 0, help call, evidence 3685: NeedSupport; No completion observed before termination.
- 51.35s, squad 0, withdrawal, evidence 4096: BreakContact: believed ratio at least two without superiority; 75.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 92.45s, squad 0, withdrawal, evidence 5379: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599894221637642, 'next_transition': 353}.
<a id="trace-60"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 60): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-400"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 400): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 400. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-401"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 401): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-414"></a>
<a id="trace-433"></a>
<a id="trace-507"></a>
<a id="trace-519"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400103977663465, 'next_transition': 433}.
<a id="trace-521"></a>
<a id="trace-587"></a>
<a id="trace-610"></a>
<a id="trace-634"></a>
<a id="trace-654"></a>
<a id="trace-679"></a>
<a id="trace-715"></a>
<a id="trace-732"></a>
<a id="trace-828"></a>
<a id="trace-843"></a>
<a id="trace-856"></a>
<a id="trace-873"></a>
<a id="trace-891"></a>
<a id="trace-906"></a>
<a id="trace-925"></a>
<a id="trace-968"></a>
<a id="trace-976"></a>
<a id="trace-1059"></a>
<a id="trace-1116"></a>
<a id="trace-1133"></a>
<a id="trace-1155"></a>
<a id="trace-1169"></a>
<a id="trace-1189"></a>
<a id="trace-1206"></a>
<a id="trace-1214"></a>
<a id="trace-1294"></a>
<a id="trace-1523"></a>
<a id="trace-1542"></a>
<a id="trace-1568"></a>
<a id="trace-1816"></a>
<a id="trace-2072"></a>
<a id="trace-2377"></a>
<a id="trace-2410"></a>
<a id="trace-2547"></a>
<a id="trace-2568"></a>
<a id="trace-2589"></a>
<a id="trace-2602"></a>
<a id="trace-2619"></a>
<a id="trace-2630"></a>
<a id="trace-2646"></a>
<a id="trace-2661"></a>
<a id="trace-2769"></a>
<a id="trace-3006"></a>
<a id="trace-3027"></a>
<a id="trace-3040"></a>
<a id="trace-3300"></a>
<a id="trace-3330"></a>
<a id="trace-3412"></a>
<a id="trace-3426"></a>
<a id="trace-3445"></a>
<a id="trace-3463"></a>
<a id="trace-3479"></a>
<a id="trace-3499"></a>
<a id="trace-3508"></a>
<a id="trace-3519"></a>
<a id="trace-3527"></a>
<a id="trace-3600"></a>
<a id="trace-3606"></a>
<a id="trace-3618"></a>
<a id="trace-3645"></a>
<a id="trace-3651"></a>
<a id="trace-3664"></a>
<a id="trace-3680"></a>
<a id="trace-3759"></a>
<a id="trace-3764"></a>
<a id="trace-3901"></a>
<a id="trace-3912"></a>
<a id="trace-3937"></a>
<a id="trace-3946"></a>
<a id="trace-3958"></a>
<a id="trace-3980"></a>
<a id="trace-3990"></a>
<a id="trace-3998"></a>
<a id="trace-4073"></a>
<a id="trace-4083"></a>
<a id="trace-4093"></a>
<a id="trace-4222"></a>
<a id="trace-4236"></a>
<a id="trace-4247"></a>
<a id="trace-4252"></a>
<a id="trace-4259"></a>
<a id="trace-4265"></a>
<a id="trace-4269"></a>
<a id="trace-4337"></a>
<a id="trace-4342"></a>
<a id="trace-4355"></a>
<a id="trace-4361"></a>
<a id="trace-4373"></a>
<a id="trace-4379"></a>
<a id="trace-4391"></a>
<a id="trace-4398"></a>
<a id="trace-4402"></a>
<a id="trace-4474"></a>
<a id="trace-4487"></a>
<a id="trace-4497"></a>
<a id="trace-4502"></a>
<a id="trace-4508"></a>
<a id="trace-4514"></a>
<a id="trace-4523"></a>
<a id="trace-4611"></a>
<a id="trace-4634"></a>
<a id="trace-4647"></a>
<a id="trace-4657"></a>
<a id="trace-4662"></a>
<a id="trace-4738"></a>
<a id="trace-4746"></a>
<a id="trace-4754"></a>
<a id="trace-4765"></a>
<a id="trace-4773"></a>
<a id="trace-4780"></a>
<a id="trace-4789"></a>
<a id="trace-4808"></a>
<a id="trace-4813"></a>
<a id="trace-4888"></a>
<a id="trace-4898"></a>
<a id="trace-4907"></a>
<a id="trace-4920"></a>
<a id="trace-4929"></a>
<a id="trace-4940"></a>
<a id="trace-4947"></a>
<a id="trace-4954"></a>
<a id="trace-4964"></a>
<a id="trace-4969"></a>
<a id="trace-5060"></a>
<a id="trace-5069"></a>
<a id="trace-5076"></a>
<a id="trace-5086"></a>
<a id="trace-5098"></a>
<a id="trace-5105"></a>
<a id="trace-5112"></a>
<a id="trace-5119"></a>
<a id="trace-5188"></a>
<a id="trace-5205"></a>
<a id="trace-5213"></a>
<a id="trace-5236"></a>
<a id="trace-5251"></a>
<a id="trace-5256"></a>
<a id="trace-5263"></a>
<a id="trace-5270"></a>
<a id="trace-5347"></a>
<a id="trace-5357"></a>
<a id="trace-5375"></a>
<a id="trace-5402"></a>
<a id="trace-5422"></a>
<a id="trace-5436"></a>
<a id="trace-5444"></a>
<a id="trace-5513"></a>
<a id="trace-5521"></a>
<a id="trace-5532"></a>
<a id="trace-5542"></a>
<a id="trace-5554"></a>
<a id="trace-5560"></a>
<a id="trace-5579"></a>
<a id="trace-5591"></a>
<a id="trace-5597"></a>
<a id="trace-5672"></a>
<a id="trace-5684"></a>
<a id="trace-5693"></a>
<a id="trace-5717"></a>
<a id="trace-5725"></a>
<a id="trace-5731"></a>
<a id="trace-5739"></a>
<a id="trace-5744"></a>
<a id="trace-5823"></a>
<a id="trace-5839"></a>
<a id="trace-5857"></a>
<a id="trace-5865"></a>
<a id="trace-5876"></a>
<a id="trace-5885"></a>
<a id="trace-5892"></a>
<a id="trace-5966"></a>
<a id="trace-5972"></a>
<a id="trace-5981"></a>
<a id="trace-5986"></a>
<a id="trace-6000"></a>
<a id="trace-6014"></a>
<a id="trace-6033"></a>
<a id="trace-6040"></a>
<a id="trace-6048"></a>
<a id="trace-6118"></a>
<a id="trace-6133"></a>
<a id="trace-6148"></a>
<a id="trace-6154"></a>
<a id="trace-6163"></a>
<a id="trace-6172"></a>
<a id="trace-6179"></a>
<a id="trace-6187"></a>
<a id="trace-6264"></a>
<a id="trace-6274"></a>
<a id="trace-6297"></a>
<a id="trace-6305"></a>
<a id="trace-6316"></a>
<a id="trace-6322"></a>
<a id="trace-6330"></a>
<a id="trace-6335"></a>
<a id="trace-6405"></a>
<a id="trace-6415"></a>
<a id="trace-6423"></a>
<a id="trace-6449"></a>
<a id="trace-6455"></a>
<a id="trace-6470"></a>
<a id="trace-6480"></a>
<a id="trace-6487"></a>
<a id="trace-6558"></a>
<a id="trace-6564"></a>
<a id="trace-6571"></a>
<a id="trace-6581"></a>
<a id="trace-6591"></a>
<a id="trace-6600"></a>
<a id="trace-6616"></a>
<a id="trace-6706"></a>
<a id="trace-6719"></a>
<a id="trace-6727"></a>
<a id="trace-6738"></a>
<a id="trace-6763"></a>
<a id="trace-6771"></a>
<a id="trace-6855"></a>
<a id="trace-6869"></a>
<a id="trace-6876"></a>
<a id="trace-6886"></a>
<a id="trace-6892"></a>
<a id="trace-6908"></a>
<a id="trace-6924"></a>
<a id="trace-6996"></a>
<a id="trace-7012"></a>
<a id="trace-7027"></a>
<a id="trace-7042"></a>
<a id="trace-7062"></a>
<a id="trace-7070"></a>
<a id="trace-7139"></a>
<a id="trace-7147"></a>
<a id="trace-7157"></a>
<a id="trace-7170"></a>
<a id="trace-7179"></a>
<a id="trace-7186"></a>
<a id="trace-7211"></a>
<a id="trace-7219"></a>
<a id="trace-7224"></a>
<a id="trace-7319"></a>
<a id="trace-7325"></a>
<a id="trace-7338"></a>
<a id="trace-7356"></a>
<a id="trace-7369"></a>
<a id="trace-7441"></a>
<a id="trace-7447"></a>
<a id="trace-7454"></a>
<a id="trace-7463"></a>
<a id="trace-7471"></a>
<a id="trace-7479"></a>
<a id="trace-7487"></a>
<a id="trace-7501"></a>
<a id="trace-7507"></a>
<a id="trace-7580"></a>
<a id="trace-7590"></a>
<a id="trace-7607"></a>
<a id="trace-7616"></a>
<a id="trace-7624"></a>
<a id="trace-7639"></a>
<a id="trace-7726"></a>
<a id="trace-7732"></a>
<a id="trace-7743"></a>
<a id="trace-7762"></a>
<a id="trace-7770"></a>
<a id="trace-7788"></a>
<a id="trace-7797"></a>
<a id="trace-7804"></a>
<a id="trace-7811"></a>
<a id="trace-7880"></a>
<a id="trace-7886"></a>
<a id="trace-7894"></a>
<a id="trace-7901"></a>
<a id="trace-7916"></a>
<a id="trace-7928"></a>
<a id="trace-7935"></a>
<a id="trace-7945"></a>
<a id="trace-7961"></a>
<a id="trace-8032"></a>
<a id="trace-8041"></a>
<a id="trace-8048"></a>
<a id="trace-8055"></a>
<a id="trace-8064"></a>
<a id="trace-8079"></a>
<a id="trace-8085"></a>
<a id="trace-8093"></a>
<a id="trace-8101"></a>
<a id="trace-8179"></a>
<a id="trace-8196"></a>
<a id="trace-8206"></a>
<a id="trace-8221"></a>
<a id="trace-8231"></a>
<a id="trace-8237"></a>
<a id="trace-8246"></a>
<a id="trace-8251"></a>
<a id="trace-8326"></a>
<a id="trace-8336"></a>
<a id="trace-8345"></a>
<a id="trace-8354"></a>
<a id="trace-8370"></a>
<a id="trace-8381"></a>
<a id="trace-8395"></a>
<a id="trace-8402"></a>
<a id="trace-8486"></a>
<a id="trace-8493"></a>
<a id="trace-8501"></a>
<a id="trace-8519"></a>
<a id="trace-8542"></a>
<a id="trace-8549"></a>
<a id="trace-8625"></a>
<a id="trace-8635"></a>
<a id="trace-8644"></a>
<a id="trace-8654"></a>
<a id="trace-8660"></a>
<a id="trace-8668"></a>
<a id="trace-8676"></a>
<a id="trace-8684"></a>
<a id="trace-8762"></a>
<a id="trace-8785"></a>
<a id="trace-8807"></a>
<a id="trace-8822"></a>
<a id="trace-8837"></a>
<a id="trace-8906"></a>
<a id="trace-8914"></a>
<a id="trace-8924"></a>
<a id="trace-8933"></a>
<a id="trace-8945"></a>
<a id="trace-8959"></a>
<a id="trace-8974"></a>
<a id="trace-8987"></a>
<a id="trace-9056"></a>
<a id="trace-9065"></a>
<a id="trace-9074"></a>
<a id="trace-9091"></a>
<a id="trace-9100"></a>
<a id="trace-9109"></a>
<a id="trace-9116"></a>
<a id="trace-9135"></a>
<a id="trace-9140"></a>
<a id="trace-9210"></a>
<a id="trace-9222"></a>
<a id="trace-9246"></a>
<a id="trace-9257"></a>
<a id="trace-9264"></a>
<a id="trace-9275"></a>
<a id="trace-9280"></a>
<a id="trace-9365"></a>
<a id="trace-9375"></a>
<a id="trace-9382"></a>
<a id="trace-9390"></a>
<a id="trace-9398"></a>
<a id="trace-9406"></a>
<a id="trace-9421"></a>
<a id="trace-9496"></a>
<a id="trace-9505"></a>
<a id="trace-9524"></a>
<a id="trace-9541"></a>
<a id="trace-9549"></a>
<a id="trace-9557"></a>
<a id="trace-9565"></a>
<a id="trace-9572"></a>
<a id="trace-9579"></a>
<a id="trace-9653"></a>
<a id="trace-9688"></a>
<a id="trace-9699"></a>
<a id="trace-9808"></a>
<a id="trace-9815"></a>
<a id="trace-9824"></a>
<a id="trace-9845"></a>
<a id="trace-9857"></a>
<a id="trace-9862"></a>
<a id="trace-9936"></a>
<a id="trace-9953"></a>
<a id="trace-9960"></a>
<a id="trace-9981"></a>
<a id="trace-9990"></a>
<a id="trace-10004"></a>
<a id="trace-10087"></a>
<a id="trace-10094"></a>
<a id="trace-10105"></a>
<a id="trace-10133"></a>
<a id="trace-10146"></a>
<a id="trace-10154"></a>
<a id="trace-10159"></a>
<a id="trace-10230"></a>
<a id="trace-10236"></a>
<a id="trace-10244"></a>
<a id="trace-10251"></a>
<a id="trace-10262"></a>
<a id="trace-10271"></a>
<a id="trace-10280"></a>
<a id="trace-10307"></a>
<a id="trace-10312"></a>
<a id="trace-10383"></a>
<a id="trace-10397"></a>
<a id="trace-10412"></a>
<a id="trace-10418"></a>
<a id="trace-10426"></a>
<a id="trace-10435"></a>
<a id="trace-10444"></a>
<a id="trace-10452"></a>
<a id="trace-10530"></a>
<a id="trace-10538"></a>
<a id="trace-10547"></a>
<a id="trace-10556"></a>
<a id="trace-10567"></a>
<a id="trace-10573"></a>
<a id="trace-10582"></a>
<a id="trace-10588"></a>
<a id="trace-10595"></a>
<a id="trace-10602"></a>
<a id="trace-10672"></a>
<a id="trace-10682"></a>
<a id="trace-10690"></a>
<a id="trace-10699"></a>
<a id="trace-10724"></a>
<a id="trace-10735"></a>
<a id="trace-10743"></a>
<a id="trace-10752"></a>
<a id="trace-10757"></a>
<a id="trace-10826"></a>
<a id="trace-10834"></a>
<a id="trace-10841"></a>
<a id="trace-10860"></a>
<a id="trace-10866"></a>
<a id="trace-10878"></a>
<a id="trace-10892"></a>
<a id="trace-10902"></a>
<a id="trace-10907"></a>
<a id="trace-10992"></a>
<a id="trace-11001"></a>
<a id="trace-11009"></a>
<a id="trace-11017"></a>
<a id="trace-11025"></a>
<a id="trace-11034"></a>
<a id="trace-11127"></a>
<a id="trace-11133"></a>
<a id="trace-11142"></a>
<a id="trace-11149"></a>
<a id="trace-11165"></a>
<a id="trace-11175"></a>
<a id="trace-11184"></a>
<a id="trace-11191"></a>
<a id="trace-11196"></a>
<a id="trace-11269"></a>
<a id="trace-11284"></a>
<a id="trace-11299"></a>
<a id="trace-11315"></a>
<a id="trace-11337"></a>
<a id="trace-11344"></a>
<a id="trace-11422"></a>
<a id="trace-11430"></a>
<a id="trace-11449"></a>
<a id="trace-11456"></a>
<a id="trace-11486"></a>
<a id="trace-11493"></a>
<a id="trace-11562"></a>
<a id="trace-11571"></a>
<a id="trace-11578"></a>
<a id="trace-11585"></a>
<a id="trace-11595"></a>
<a id="trace-11603"></a>
<a id="trace-11615"></a>
<a id="trace-11623"></a>
<a id="trace-11632"></a>
<a id="trace-11639"></a>
<a id="trace-11716"></a>
<a id="trace-11724"></a>
<a id="trace-11746"></a>
<a id="trace-11752"></a>
<a id="trace-11762"></a>
<a id="trace-11768"></a>
<a id="trace-11777"></a>
<a id="trace-11858"></a>
<a id="trace-11864"></a>
<a id="trace-11890"></a>
<a id="trace-11898"></a>
<a id="trace-11906"></a>
<a id="trace-11914"></a>
<a id="trace-11920"></a>
<a id="trace-11932"></a>
<a id="trace-12004"></a>
<a id="trace-12018"></a>
<a id="trace-12028"></a>
<a id="trace-12038"></a>
<a id="trace-12065"></a>
<a id="trace-12073"></a>
<a id="trace-12080"></a>
<a id="trace-12154"></a>
<a id="trace-12182"></a>
<a id="trace-12189"></a>
<a id="trace-12200"></a>
<a id="trace-12209"></a>
<a id="trace-12234"></a>
<a id="trace-12305"></a>
<a id="trace-12311"></a>
<a id="trace-12319"></a>
<a id="trace-12335"></a>
<a id="trace-12341"></a>
<a id="trace-12350"></a>
<a id="trace-12362"></a>
<a id="trace-12371"></a>
<a id="trace-12442"></a>
<a id="trace-12452"></a>
<a id="trace-12493"></a>
<a id="trace-12503"></a>
<a id="trace-12509"></a>
<a id="trace-12517"></a>
<a id="trace-12522"></a>
<a id="trace-12591"></a>
<a id="trace-12606"></a>
<a id="trace-12617"></a>
<a id="trace-12627"></a>
<a id="trace-12652"></a>
<a id="trace-12660"></a>
<a id="trace-12670"></a>
<a id="trace-12675"></a>
<a id="trace-12750"></a>
<a id="trace-12765"></a>
<a id="trace-12773"></a>
<a id="trace-12781"></a>
<a id="trace-12792"></a>
<a id="trace-12798"></a>
<a id="trace-12900"></a>
<a id="trace-12909"></a>
<a id="trace-12916"></a>
<a id="trace-12924"></a>
<a id="trace-12932"></a>
<a id="trace-12940"></a>
<a id="trace-12948"></a>
<a id="trace-12955"></a>
<a id="trace-12963"></a>
<a id="trace-13033"></a>
<a id="trace-13040"></a>
<a id="trace-13060"></a>
<a id="trace-13067"></a>
<a id="trace-13082"></a>
<a id="trace-13093"></a>
<a id="trace-13101"></a>
<a id="trace-13108"></a>
<a id="trace-13115"></a>
<a id="trace-13189"></a>
<a id="trace-13200"></a>
<a id="trace-13207"></a>
<a id="trace-13218"></a>
<a id="trace-13248"></a>
<a id="trace-13255"></a>
<a id="trace-13263"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362515923490047, 'next_transition': 587}.
<a id="trace-530"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 530): traveling overwatch. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017748852889, 'next_transition': 585}.
<a id="trace-531"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 531): received platoon directive. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017748852889, 'next_transition': 585}.
<a id="trace-585"></a>
<a id="trace-608"></a>
<a id="trace-632"></a>
<a id="trace-652"></a>
<a id="trace-677"></a>
<a id="trace-713"></a>
<a id="trace-730"></a>
<a id="trace-743"></a>
<a id="trace-826"></a>
<a id="trace-841"></a>
<a id="trace-854"></a>
<a id="trace-871"></a>
<a id="trace-889"></a>
<a id="trace-904"></a>
<a id="trace-923"></a>
<a id="trace-936"></a>
<a id="trace-966"></a>
<a id="trace-974"></a>
<a id="trace-1057"></a>
- 6.20s–15.20s (×19), actor 5, squad 0 (trace 585): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 440. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1569103212523906, 'next_transition': 608}.
<a id="trace-1067"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 1067): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 981. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1114}.
<a id="trace-1114"></a>
<a id="trace-1131"></a>
<a id="trace-1143"></a>
<a id="trace-1153"></a>
<a id="trace-1167"></a>
<a id="trace-1187"></a>
<a id="trace-1195"></a>
<a id="trace-1204"></a>
<a id="trace-1212"></a>
<a id="trace-1292"></a>
- 15.70s–20.25s (×10), actor 5, squad 0 (trace 1114): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 984. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500023692684908, 'next_transition': 1131}.
<a id="trace-1295"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1295): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1521}.
<a id="trace-1296"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1296): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1521}.
<a id="trace-1297"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1297): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1521}.
<a id="trace-1521"></a>
<a id="trace-1540"></a>
<a id="trace-1566"></a>
- 20.75s–21.75s (×3), actor 5, squad 0 (trace 1521): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1219. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6826592529582604, 'next_transition': 1540}.
<a id="trace-1577"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 1577): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999850641121545, 'next_transition': 1814}.
<a id="trace-1814"></a>
- 22.25s–22.25s (×1), actor 5, squad 0 (trace 1814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1219. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420000501638699, 'next_transition': 2070}.
<a id="trace-1817"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 1817): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420000501638699, 'next_transition': 2070}.
<a id="trace-2070"></a>
- 22.75s–22.75s (×1), actor 5, squad 0 (trace 2070): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1219. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37820879294587023, 'next_transition': 2092}.
<a id="trace-2092"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 2092): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1216. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000279178374073, 'next_transition': 2345}.
<a id="trace-2345"></a>
- 23.25s–23.25s (×1), actor 5, squad 0 (trace 2345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1219. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16365367797217567, 'next_transition': 274}.
<a id="trace-274"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 274): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2362"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 2362): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347794 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 2362. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.
<a id="trace-2363"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 2363): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347794 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 2363. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.
<a id="trace-2375"></a>
<a id="trace-2408"></a>
<a id="trace-2439"></a>
<a id="trace-2545"></a>
<a id="trace-2566"></a>
<a id="trace-2587"></a>
- 23.75s–26.25s (×6), actor 5, squad 0 (trace 2375): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 2363. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6155677955711695, 'next_transition': 2408}.
<a id="trace-2597"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 2597): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2459. Next observer evidence: None.
<a id="trace-2600"></a>
<a id="trace-2617"></a>
- 26.75s–27.25s (×2), actor 5, squad 0 (trace 2600): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2462. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4973984391820257, 'next_transition': 2617}.
<a id="trace-2626"></a>
- 27.70s–27.70s (×1), actor 0, squad 0 (trace 2626): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 2459. Next observer evidence: None.
<a id="trace-2628"></a>
<a id="trace-2644"></a>
<a id="trace-2659"></a>
- 27.75s–28.75s (×3), actor 5, squad 0 (trace 2628): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2462. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21395000750434864, 'next_transition': 2644}.
<a id="trace-2666"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 2666): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 2459. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999479887739023, 'next_transition': 2676}.
<a id="trace-2676"></a>
<a id="trace-2689"></a>
<a id="trace-2767"></a>
- 29.25s–30.25s (×3), actor 5, squad 0 (trace 2676): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2462. Next observer evidence: {'until': 29.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15751945206157167, 'next_transition': 2689}.
<a id="trace-2778"></a>
- 30.70s–30.70s (×1), actor 0, squad 0 (trace 2778): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2692. Next observer evidence: None.
<a id="trace-2981"></a>
- 30.75s–30.75s (×1), actor 5, squad 0 (trace 2981): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2695. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260999999999998, 'next_transition': 372}.
<a id="trace-372"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 372): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2983"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2983): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.625706 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2983. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058716666666666605, 'next_transition': 2990}.
<a id="trace-2984"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2984): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.625706 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2984. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058716666666666605, 'next_transition': 2990}.
<a id="trace-2990"></a>
<a id="trace-3004"></a>
<a id="trace-3025"></a>
<a id="trace-3038"></a>
<a id="trace-3053"></a>
- 31.25s–33.25s (×5), actor 5, squad 0 (trace 2990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2984. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05904999999999916, 'next_transition': 3004}.
<a id="trace-3060"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 3060): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2692. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15328450559574983, 'next_transition': 3274}.
<a id="trace-3274"></a>
- 33.75s–33.75s (×1), actor 5, squad 0 (trace 3274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2984. Next observer evidence: None.
<a id="trace-3277"></a>
- 33.80s–33.80s (×1), actor 0, squad 0 (trace 3277): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 2692. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35831168383964496, 'next_transition': 3298}.
<a id="trace-3298"></a>
<a id="trace-3328"></a>
<a id="trace-3410"></a>
<a id="trace-3424"></a>
<a id="trace-3443"></a>
<a id="trace-3461"></a>
- 34.25s–36.75s (×6), actor 5, squad 0 (trace 3298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2984. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08993886232077626, 'next_transition': 3328}.
<a id="trace-3471"></a>
- 37.15s–37.15s (×1), actor 0, squad 0 (trace 3471): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3340. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499564807118854, 'next_transition': 3477}.
<a id="trace-3477"></a>
<a id="trace-3489"></a>
<a id="trace-3497"></a>
- 37.25s–38.25s (×3), actor 5, squad 0 (trace 3477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3343. Next observer evidence: {'until': 37.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1667377880002678, 'next_transition': 3489}.
<a id="trace-3503"></a>
- 38.70s–38.70s (×1), actor 0, squad 0 (trace 3503): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 3340. Next observer evidence: None.
<a id="trace-3506"></a>
<a id="trace-3517"></a>
<a id="trace-3525"></a>
<a id="trace-3598"></a>
<a id="trace-3604"></a>
- 38.75s–40.75s (×5), actor 5, squad 0 (trace 3506): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3343. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0335055816660118, 'next_transition': 3517}.
<a id="trace-490"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (events line 490): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3608"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 3608): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554596 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 3608. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09158126603672216, 'next_transition': 3616}.
<a id="trace-3609"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 3609): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554596 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 3609. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09158126603672216, 'next_transition': 3616}.
<a id="trace-3616"></a>
<a id="trace-3623"></a>
<a id="trace-3630"></a>
<a id="trace-3636"></a>
<a id="trace-3643"></a>
- 41.25s–43.25s (×5), actor 5, squad 0 (trace 3616): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 3609. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09087063607128539, 'next_transition': 3623}.
<a id="trace-3646"></a>
- 43.70s–43.70s (×1), actor 0, squad 0 (trace 3646): received platoon directive; retain held slots. Knowledge: actor memory at 40.00s, trace 3530. Next observer evidence: None.
<a id="trace-3649"></a>
<a id="trace-3662"></a>
<a id="trace-3678"></a>
- 43.75s–44.75s (×3), actor 5, squad 0 (trace 3649): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 3609. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1850796995265553, 'next_transition': 3662}.
<a id="trace-3683"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 3683): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 3530. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039785916088106, 'next_transition': 3757}.
<a id="trace-3685"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 3685): NeedSupport. Knowledge: actor memory at 40.00s, trace 3530. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039785916088106, 'next_transition': 3757}.
<a id="trace-3757"></a>
<a id="trace-3762"></a>
- 45.25s–45.75s (×2), actor 5, squad 0 (trace 3757): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3692. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040109014694029, 'next_transition': 3762}.
<a id="trace-3765"></a>
- 45.90s–45.90s (×1), actor 0, squad 0 (trace 3765): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 3690. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25197314142582733, 'next_transition': 3895}.
<a id="trace-3769"></a>
- 45.90s–45.90s (×1), actor 0, squad 0 (trace 3769): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 3690. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25197314142582733, 'next_transition': 3895}.
<a id="trace-3770"></a>
- 45.90s–45.90s (×1), actor 0, squad 0 (trace 3770): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 3690. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25197314142582733, 'next_transition': 3895}.
<a id="trace-3895"></a>
- 46.05s–46.05s (×1), actor 5, squad 0 (trace 3895): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 46.05s, trace 3895. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200545073470165, 'next_transition': 3899}.
<a id="trace-3899"></a>
<a id="trace-3910"></a>
- 46.25s–46.75s (×2), actor 5, squad 0 (trace 3899): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 46.05s, trace 3895. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.504010901469403, 'next_transition': 3910}.
<a id="trace-603"></a>
- 47.10s–47.10s (×1), actor 5, squad 0 (events line 603): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3925"></a>
- 47.10s–47.10s (×1), actor 5, squad 0 (trace 3925): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.410771 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 3925. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3366527019600071, 'next_transition': 3935}.
<a id="trace-3926"></a>
- 47.10s–47.10s (×1), actor 5, squad 0 (trace 3926): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.410771 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 3926. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3366527019600071, 'next_transition': 3935}.
<a id="trace-3935"></a>
<a id="trace-3944"></a>
<a id="trace-3956"></a>
<a id="trace-3978"></a>
<a id="trace-3988"></a>
- 47.25s–49.25s (×5), actor 5, squad 0 (trace 3935): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 47.10s, trace 3926. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3522889601555642, 'next_transition': 3944}.
<a id="trace-3993"></a>
- 49.70s–49.70s (×1), actor 0, squad 0 (trace 3993): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 3690. Next observer evidence: None.
<a id="trace-3996"></a>
<a id="trace-4071"></a>
<a id="trace-4081"></a>
<a id="trace-4091"></a>
- 49.75s–51.25s (×4), actor 5, squad 0 (trace 3996): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 47.10s, trace 3926. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2275314395242995, 'next_transition': 4071}.
<a id="trace-4096"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 4096): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 4001. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033105534280539875, 'next_transition': 4220}.
<a id="trace-4097"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 4097): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 4001. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033105534280539875, 'next_transition': 4220}.
<a id="trace-4220"></a>
<a id="trace-4234"></a>
<a id="trace-4245"></a>
<a id="trace-4250"></a>
<a id="trace-4257"></a>
<a id="trace-4263"></a>
<a id="trace-4267"></a>
<a id="trace-4335"></a>
<a id="trace-4340"></a>
<a id="trace-4353"></a>
<a id="trace-4359"></a>
<a id="trace-4371"></a>
<a id="trace-4377"></a>
<a id="trace-4384"></a>
<a id="trace-4389"></a>
<a id="trace-4396"></a>
<a id="trace-4400"></a>
<a id="trace-4468"></a>
<a id="trace-4472"></a>
<a id="trace-4479"></a>
<a id="trace-4485"></a>
<a id="trace-4495"></a>
<a id="trace-4500"></a>
<a id="trace-4506"></a>
<a id="trace-4512"></a>
<a id="trace-4521"></a>
<a id="trace-4526"></a>
<a id="trace-4594"></a>
<a id="trace-4602"></a>
<a id="trace-4609"></a>
<a id="trace-4617"></a>
<a id="trace-4627"></a>
<a id="trace-4632"></a>
<a id="trace-4640"></a>
<a id="trace-4645"></a>
<a id="trace-4655"></a>
<a id="trace-4660"></a>
<a id="trace-4730"></a>
<a id="trace-4736"></a>
<a id="trace-4744"></a>
<a id="trace-4752"></a>
<a id="trace-4763"></a>
<a id="trace-4771"></a>
<a id="trace-4778"></a>
<a id="trace-4787"></a>
<a id="trace-4806"></a>
<a id="trace-4811"></a>
- 51.75s–74.75s (×47), actor 5, squad 0 (trace 4220): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4003. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 4234}.
<a id="trace-4827"></a>
- 75.15s–75.15s (×1), actor 4, squad 0 (trace 4827): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 4815. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4886}.
<a id="trace-4886"></a>
<a id="trace-4896"></a>
<a id="trace-4905"></a>
<a id="trace-4918"></a>
<a id="trace-4927"></a>
<a id="trace-4938"></a>
<a id="trace-4945"></a>
<a id="trace-4952"></a>
<a id="trace-4967"></a>
<a id="trace-5041"></a>
<a id="trace-5058"></a>
<a id="trace-5067"></a>
<a id="trace-5074"></a>
<a id="trace-5084"></a>
<a id="trace-5090"></a>
<a id="trace-5096"></a>
<a id="trace-5103"></a>
<a id="trace-5110"></a>
<a id="trace-5117"></a>
<a id="trace-5186"></a>
<a id="trace-5203"></a>
<a id="trace-5211"></a>
<a id="trace-5234"></a>
<a id="trace-5242"></a>
<a id="trace-5249"></a>
<a id="trace-5254"></a>
<a id="trace-5261"></a>
<a id="trace-5268"></a>
<a id="trace-5337"></a>
<a id="trace-5345"></a>
- 75.25s–90.75s (×30), actor 5, squad 0 (trace 4886): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4816. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4896}.
<a id="trace-786"></a>
- 91.05s–91.05s (×1), actor 5, squad 0 (events line 786): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5348"></a>
- 91.05s–91.05s (×1), actor 5, squad 0 (trace 5348): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322118 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 91.05s, trace 5348. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5355}.
<a id="trace-5349"></a>
- 91.05s–91.05s (×1), actor 5, squad 0 (trace 5349): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322118 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 91.05s, trace 5349. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5355}.
<a id="trace-5355"></a>
<a id="trace-5362"></a>
<a id="trace-5373"></a>
- 91.25s–92.25s (×3), actor 5, squad 0 (trace 5355): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 91.05s, trace 5349. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5362}.
<a id="trace-5379"></a>
- 92.45s–92.45s (×1), actor 4, squad 0 (trace 5379): Withdraw to received rally. Knowledge: actor memory at 90.00s, trace 5271. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5386}.
<a id="trace-5380"></a>
- 92.45s–92.45s (×1), actor 4, squad 0 (trace 5380): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 5271. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5386}.
<a id="trace-5386"></a>
<a id="trace-5400"></a>
<a id="trace-5420"></a>
<a id="trace-5434"></a>
<a id="trace-5442"></a>
<a id="trace-5511"></a>
<a id="trace-5519"></a>
<a id="trace-5530"></a>
<a id="trace-5540"></a>
<a id="trace-5552"></a>
<a id="trace-5558"></a>
<a id="trace-5571"></a>
<a id="trace-5577"></a>
<a id="trace-5589"></a>
<a id="trace-5595"></a>
<a id="trace-5670"></a>
<a id="trace-5682"></a>
<a id="trace-5691"></a>
<a id="trace-5699"></a>
<a id="trace-5708"></a>
<a id="trace-5715"></a>
<a id="trace-5723"></a>
<a id="trace-5729"></a>
<a id="trace-5737"></a>
<a id="trace-5742"></a>
<a id="trace-5813"></a>
<a id="trace-5821"></a>
<a id="trace-5830"></a>
<a id="trace-5837"></a>
<a id="trace-5855"></a>
<a id="trace-5863"></a>
<a id="trace-5874"></a>
<a id="trace-5883"></a>
<a id="trace-5890"></a>
<a id="trace-5895"></a>
<a id="trace-5964"></a>
<a id="trace-5970"></a>
<a id="trace-5979"></a>
<a id="trace-5984"></a>
<a id="trace-5998"></a>
<a id="trace-6004"></a>
<a id="trace-6012"></a>
<a id="trace-6031"></a>
<a id="trace-6038"></a>
<a id="trace-6046"></a>
<a id="trace-6116"></a>
<a id="trace-6123"></a>
<a id="trace-6131"></a>
<a id="trace-6146"></a>
<a id="trace-6152"></a>
<a id="trace-6161"></a>
<a id="trace-6170"></a>
<a id="trace-6177"></a>
<a id="trace-6185"></a>
<a id="trace-6262"></a>
<a id="trace-6272"></a>
<a id="trace-6280"></a>
<a id="trace-6284"></a>
<a id="trace-6295"></a>
<a id="trace-6303"></a>
<a id="trace-6314"></a>
<a id="trace-6320"></a>
<a id="trace-6328"></a>
<a id="trace-6333"></a>
<a id="trace-6403"></a>
<a id="trace-6413"></a>
<a id="trace-6421"></a>
<a id="trace-6436"></a>
<a id="trace-6447"></a>
<a id="trace-6453"></a>
<a id="trace-6463"></a>
<a id="trace-6468"></a>
<a id="trace-6478"></a>
<a id="trace-6485"></a>
<a id="trace-6556"></a>
<a id="trace-6562"></a>
<a id="trace-6569"></a>
<a id="trace-6579"></a>
<a id="trace-6589"></a>
<a id="trace-6598"></a>
<a id="trace-6614"></a>
<a id="trace-6622"></a>
<a id="trace-6629"></a>
<a id="trace-6633"></a>
<a id="trace-6704"></a>
<a id="trace-6710"></a>
<a id="trace-6717"></a>
<a id="trace-6725"></a>
<a id="trace-6736"></a>
<a id="trace-6744"></a>
<a id="trace-6752"></a>
<a id="trace-6761"></a>
<a id="trace-6769"></a>
<a id="trace-6776"></a>
<a id="trace-6853"></a>
<a id="trace-6859"></a>
<a id="trace-6867"></a>
<a id="trace-6874"></a>
<a id="trace-6884"></a>
<a id="trace-6890"></a>
<a id="trace-6898"></a>
<a id="trace-6906"></a>
<a id="trace-6915"></a>
<a id="trace-6922"></a>
<a id="trace-6994"></a>
<a id="trace-7000"></a>
<a id="trace-7010"></a>
<a id="trace-7025"></a>
<a id="trace-7035"></a>
<a id="trace-7040"></a>
<a id="trace-7049"></a>
<a id="trace-7054"></a>
<a id="trace-7060"></a>
<a id="trace-7068"></a>
<a id="trace-7137"></a>
<a id="trace-7145"></a>
<a id="trace-7155"></a>
- 92.75s–151.30s (×117), actor 5, squad 0 (trace 5386): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 91.05s, trace 5349. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5400}.
<a id="trace-1106"></a>
- 151.40s–151.40s (×1), actor 5, squad 0 (events line 1106): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7158"></a>
- 151.40s–151.40s (×1), actor 5, squad 0 (trace 7158): renew committed intent (75 s lifetime). Knowledge: actor memory at 151.40s, trace 7158. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7168}.
<a id="trace-7168"></a>
<a id="trace-7177"></a>
<a id="trace-7184"></a>
<a id="trace-7204"></a>
<a id="trace-7209"></a>
<a id="trace-7217"></a>
<a id="trace-7222"></a>
<a id="trace-7291"></a>
<a id="trace-7297"></a>
<a id="trace-7302"></a>
<a id="trace-7310"></a>
<a id="trace-7317"></a>
<a id="trace-7323"></a>
<a id="trace-7336"></a>
<a id="trace-7344"></a>
<a id="trace-7354"></a>
<a id="trace-7367"></a>
<a id="trace-7439"></a>
<a id="trace-7445"></a>
<a id="trace-7452"></a>
<a id="trace-7461"></a>
<a id="trace-7469"></a>
<a id="trace-7477"></a>
<a id="trace-7485"></a>
<a id="trace-7491"></a>
<a id="trace-7499"></a>
<a id="trace-7505"></a>
<a id="trace-7578"></a>
<a id="trace-7588"></a>
<a id="trace-7605"></a>
<a id="trace-7614"></a>
<a id="trace-7622"></a>
<a id="trace-7630"></a>
<a id="trace-7637"></a>
<a id="trace-7645"></a>
<a id="trace-7651"></a>
<a id="trace-7655"></a>
<a id="trace-7724"></a>
<a id="trace-7730"></a>
<a id="trace-7741"></a>
<a id="trace-7750"></a>
<a id="trace-7760"></a>
<a id="trace-7768"></a>
<a id="trace-7786"></a>
<a id="trace-7795"></a>
<a id="trace-7802"></a>
<a id="trace-7809"></a>
<a id="trace-7878"></a>
<a id="trace-7884"></a>
<a id="trace-7892"></a>
<a id="trace-7899"></a>
<a id="trace-7909"></a>
<a id="trace-7914"></a>
<a id="trace-7926"></a>
<a id="trace-7933"></a>
<a id="trace-7943"></a>
<a id="trace-7959"></a>
<a id="trace-8030"></a>
<a id="trace-8039"></a>
<a id="trace-8046"></a>
<a id="trace-8053"></a>
<a id="trace-8062"></a>
<a id="trace-8068"></a>
<a id="trace-8077"></a>
<a id="trace-8083"></a>
<a id="trace-8091"></a>
<a id="trace-8099"></a>
<a id="trace-8168"></a>
<a id="trace-8177"></a>
<a id="trace-8194"></a>
<a id="trace-8204"></a>
<a id="trace-8214"></a>
<a id="trace-8219"></a>
<a id="trace-8229"></a>
<a id="trace-8235"></a>
<a id="trace-8244"></a>
<a id="trace-8249"></a>
<a id="trace-8319"></a>
<a id="trace-8324"></a>
<a id="trace-8334"></a>
<a id="trace-8343"></a>
<a id="trace-8352"></a>
<a id="trace-8368"></a>
<a id="trace-8379"></a>
<a id="trace-8385"></a>
<a id="trace-8393"></a>
<a id="trace-8400"></a>
<a id="trace-8472"></a>
<a id="trace-8477"></a>
<a id="trace-8484"></a>
<a id="trace-8491"></a>
<a id="trace-8499"></a>
<a id="trace-8508"></a>
<a id="trace-8517"></a>
<a id="trace-8526"></a>
<a id="trace-8540"></a>
<a id="trace-8547"></a>
<a id="trace-8618"></a>
<a id="trace-8623"></a>
<a id="trace-8633"></a>
<a id="trace-8642"></a>
<a id="trace-8652"></a>
<a id="trace-8658"></a>
<a id="trace-8666"></a>
<a id="trace-8674"></a>
<a id="trace-8682"></a>
<a id="trace-8691"></a>
<a id="trace-8760"></a>
<a id="trace-8768"></a>
<a id="trace-8783"></a>
<a id="trace-8790"></a>
<a id="trace-8800"></a>
<a id="trace-8805"></a>
<a id="trace-8814"></a>
<a id="trace-8820"></a>
<a id="trace-8830"></a>
<a id="trace-8904"></a>
<a id="trace-8912"></a>
<a id="trace-8922"></a>
- 151.80s–211.30s (×119), actor 5, squad 0 (trace 7168): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 151.40s, trace 7158. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7177}.
<a id="trace-1415"></a>
- 211.40s–211.40s (×1), actor 5, squad 0 (events line 1415): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8925"></a>
- 211.40s–211.40s (×1), actor 5, squad 0 (trace 8925): renew committed intent (75 s lifetime). Knowledge: actor memory at 211.40s, trace 8925. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8931}.
<a id="trace-8931"></a>
<a id="trace-8943"></a>
<a id="trace-8957"></a>
<a id="trace-8967"></a>
<a id="trace-8972"></a>
<a id="trace-8981"></a>
<a id="trace-8985"></a>
<a id="trace-9054"></a>
<a id="trace-9063"></a>
<a id="trace-9072"></a>
<a id="trace-9082"></a>
<a id="trace-9089"></a>
<a id="trace-9098"></a>
<a id="trace-9107"></a>
<a id="trace-9114"></a>
<a id="trace-9133"></a>
<a id="trace-9138"></a>
<a id="trace-9208"></a>
<a id="trace-9214"></a>
<a id="trace-9220"></a>
<a id="trace-9230"></a>
<a id="trace-9237"></a>
<a id="trace-9244"></a>
<a id="trace-9255"></a>
<a id="trace-9262"></a>
<a id="trace-9273"></a>
<a id="trace-9278"></a>
<a id="trace-9350"></a>
<a id="trace-9363"></a>
<a id="trace-9373"></a>
<a id="trace-9380"></a>
<a id="trace-9388"></a>
<a id="trace-9396"></a>
<a id="trace-9404"></a>
<a id="trace-9413"></a>
<a id="trace-9419"></a>
<a id="trace-9424"></a>
<a id="trace-9494"></a>
<a id="trace-9503"></a>
<a id="trace-9515"></a>
<a id="trace-9522"></a>
<a id="trace-9539"></a>
<a id="trace-9547"></a>
<a id="trace-9555"></a>
<a id="trace-9563"></a>
<a id="trace-9570"></a>
<a id="trace-9577"></a>
<a id="trace-9646"></a>
<a id="trace-9651"></a>
<a id="trace-9660"></a>
<a id="trace-9666"></a>
<a id="trace-9676"></a>
<a id="trace-9686"></a>
<a id="trace-9697"></a>
<a id="trace-9705"></a>
<a id="trace-9719"></a>
<a id="trace-9725"></a>
<a id="trace-9793"></a>
<a id="trace-9800"></a>
<a id="trace-9806"></a>
<a id="trace-9813"></a>
<a id="trace-9822"></a>
<a id="trace-9828"></a>
<a id="trace-9838"></a>
<a id="trace-9843"></a>
<a id="trace-9855"></a>
<a id="trace-9860"></a>
<a id="trace-9934"></a>
<a id="trace-9951"></a>
<a id="trace-9958"></a>
<a id="trace-9967"></a>
<a id="trace-9974"></a>
<a id="trace-9979"></a>
<a id="trace-9988"></a>
<a id="trace-9994"></a>
<a id="trace-10002"></a>
<a id="trace-10007"></a>
<a id="trace-10076"></a>
<a id="trace-10085"></a>
<a id="trace-10092"></a>
<a id="trace-10103"></a>
<a id="trace-10123"></a>
<a id="trace-10131"></a>
<a id="trace-10139"></a>
<a id="trace-10144"></a>
<a id="trace-10152"></a>
<a id="trace-10157"></a>
<a id="trace-10228"></a>
<a id="trace-10234"></a>
<a id="trace-10242"></a>
<a id="trace-10249"></a>
<a id="trace-10260"></a>
<a id="trace-10269"></a>
<a id="trace-10278"></a>
<a id="trace-10295"></a>
<a id="trace-10305"></a>
<a id="trace-10310"></a>
<a id="trace-10381"></a>
<a id="trace-10387"></a>
<a id="trace-10395"></a>
<a id="trace-10402"></a>
<a id="trace-10410"></a>
<a id="trace-10416"></a>
<a id="trace-10424"></a>
<a id="trace-10433"></a>
<a id="trace-10442"></a>
<a id="trace-10450"></a>
<a id="trace-10528"></a>
<a id="trace-10536"></a>
<a id="trace-10545"></a>
<a id="trace-10554"></a>
<a id="trace-10565"></a>
<a id="trace-10571"></a>
<a id="trace-10580"></a>
<a id="trace-10586"></a>
<a id="trace-10593"></a>
<a id="trace-10600"></a>
<a id="trace-10670"></a>
<a id="trace-10680"></a>
<a id="trace-10688"></a>
<a id="trace-10697"></a>
- 211.80s–271.80s (×121), actor 5, squad 0 (trace 8931): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 211.40s, trace 8925. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8943}.
<a id="trace-1733"></a>
- 271.95s–271.95s (×1), actor 5, squad 0 (events line 1733): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10709"></a>
- 271.95s–271.95s (×1), actor 5, squad 0 (trace 10709): renew committed intent (75 s lifetime). Knowledge: actor memory at 271.95s, trace 10709. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10717}.
<a id="trace-10717"></a>
<a id="trace-10722"></a>
<a id="trace-10733"></a>
<a id="trace-10741"></a>
<a id="trace-10750"></a>
<a id="trace-10755"></a>
<a id="trace-10824"></a>
<a id="trace-10832"></a>
<a id="trace-10839"></a>
<a id="trace-10848"></a>
<a id="trace-10858"></a>
<a id="trace-10864"></a>
<a id="trace-10876"></a>
<a id="trace-10890"></a>
<a id="trace-10900"></a>
<a id="trace-10905"></a>
<a id="trace-10975"></a>
<a id="trace-10981"></a>
<a id="trace-10990"></a>
<a id="trace-10999"></a>
<a id="trace-11007"></a>
<a id="trace-11015"></a>
<a id="trace-11023"></a>
<a id="trace-11032"></a>
<a id="trace-11040"></a>
<a id="trace-11045"></a>
<a id="trace-11125"></a>
<a id="trace-11131"></a>
<a id="trace-11140"></a>
<a id="trace-11147"></a>
<a id="trace-11155"></a>
<a id="trace-11163"></a>
<a id="trace-11173"></a>
<a id="trace-11182"></a>
<a id="trace-11189"></a>
<a id="trace-11194"></a>
<a id="trace-11267"></a>
<a id="trace-11273"></a>
<a id="trace-11282"></a>
<a id="trace-11297"></a>
<a id="trace-11308"></a>
<a id="trace-11313"></a>
<a id="trace-11321"></a>
<a id="trace-11329"></a>
<a id="trace-11335"></a>
<a id="trace-11342"></a>
<a id="trace-11414"></a>
<a id="trace-11420"></a>
<a id="trace-11428"></a>
<a id="trace-11436"></a>
<a id="trace-11447"></a>
<a id="trace-11454"></a>
<a id="trace-11471"></a>
<a id="trace-11478"></a>
<a id="trace-11484"></a>
<a id="trace-11491"></a>
<a id="trace-11560"></a>
<a id="trace-11569"></a>
<a id="trace-11576"></a>
<a id="trace-11583"></a>
<a id="trace-11593"></a>
<a id="trace-11601"></a>
<a id="trace-11613"></a>
<a id="trace-11621"></a>
<a id="trace-11630"></a>
<a id="trace-11637"></a>
<a id="trace-11714"></a>
<a id="trace-11722"></a>
<a id="trace-11729"></a>
<a id="trace-11737"></a>
<a id="trace-11744"></a>
<a id="trace-11750"></a>
<a id="trace-11760"></a>
<a id="trace-11766"></a>
<a id="trace-11775"></a>
<a id="trace-11783"></a>
<a id="trace-11856"></a>
<a id="trace-11862"></a>
<a id="trace-11872"></a>
<a id="trace-11888"></a>
<a id="trace-11896"></a>
<a id="trace-11904"></a>
<a id="trace-11912"></a>
<a id="trace-11918"></a>
<a id="trace-11926"></a>
<a id="trace-11930"></a>
<a id="trace-12002"></a>
<a id="trace-12008"></a>
<a id="trace-12016"></a>
<a id="trace-12026"></a>
<a id="trace-12036"></a>
<a id="trace-12046"></a>
<a id="trace-12063"></a>
<a id="trace-12071"></a>
<a id="trace-12078"></a>
<a id="trace-12083"></a>
<a id="trace-12152"></a>
<a id="trace-12158"></a>
<a id="trace-12166"></a>
<a id="trace-12172"></a>
<a id="trace-12180"></a>
<a id="trace-12187"></a>
<a id="trace-12198"></a>
<a id="trace-12207"></a>
<a id="trace-12217"></a>
<a id="trace-12232"></a>
<a id="trace-12303"></a>
<a id="trace-12309"></a>
<a id="trace-12317"></a>
<a id="trace-12324"></a>
<a id="trace-12333"></a>
<a id="trace-12339"></a>
<a id="trace-12348"></a>
<a id="trace-12354"></a>
<a id="trace-12360"></a>
<a id="trace-12369"></a>
<a id="trace-12440"></a>
<a id="trace-12450"></a>
<a id="trace-12467"></a>
<a id="trace-12475"></a>
- 272.30s–331.80s (×120), actor 5, squad 0 (trace 10717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 271.95s, trace 10709. Next observer evidence: {'until': 272.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10722}.
<a id="trace-2046"></a>
- 331.95s–331.95s (×1), actor 5, squad 0 (events line 2046): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12480"></a>
- 331.95s–331.95s (×1), actor 5, squad 0 (trace 12480): renew committed intent (75 s lifetime). Knowledge: actor memory at 331.95s, trace 12480. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12486}.
<a id="trace-12486"></a>
<a id="trace-12491"></a>
<a id="trace-12501"></a>
<a id="trace-12507"></a>
<a id="trace-12515"></a>
<a id="trace-12520"></a>
<a id="trace-12589"></a>
<a id="trace-12597"></a>
<a id="trace-12604"></a>
<a id="trace-12615"></a>
<a id="trace-12625"></a>
<a id="trace-12633"></a>
<a id="trace-12650"></a>
<a id="trace-12658"></a>
<a id="trace-12668"></a>
<a id="trace-12673"></a>
<a id="trace-12743"></a>
<a id="trace-12748"></a>
<a id="trace-12755"></a>
<a id="trace-12763"></a>
<a id="trace-12771"></a>
<a id="trace-12779"></a>
<a id="trace-12790"></a>
<a id="trace-12796"></a>
<a id="trace-12808"></a>
<a id="trace-12820"></a>
<a id="trace-12891"></a>
<a id="trace-12898"></a>
<a id="trace-12907"></a>
<a id="trace-12914"></a>
<a id="trace-12922"></a>
<a id="trace-12930"></a>
<a id="trace-12938"></a>
<a id="trace-12946"></a>
<a id="trace-12953"></a>
<a id="trace-12961"></a>
<a id="trace-13031"></a>
<a id="trace-13038"></a>
<a id="trace-13058"></a>
<a id="trace-13065"></a>
<a id="trace-13074"></a>
<a id="trace-13080"></a>
<a id="trace-13091"></a>
<a id="trace-13099"></a>
<a id="trace-13106"></a>
<a id="trace-13113"></a>
<a id="trace-13182"></a>
<a id="trace-13187"></a>
<a id="trace-13198"></a>
<a id="trace-13205"></a>
<a id="trace-13216"></a>
<a id="trace-13230"></a>
<a id="trace-13241"></a>
<a id="trace-13246"></a>
<a id="trace-13253"></a>
<a id="trace-13261"></a>
- 332.30s–359.80s (×56), actor 5, squad 0 (trace 12486): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 331.95s, trace 12480. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12491}.

## Net delivery

73 matched order/radio deliveries; 248 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.364s; maximum 1.950s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1216: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 2362: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 2363: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2459: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2462: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2463: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2468: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2469: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2470: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2692: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2693: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2695: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2696: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2698: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2701: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2702: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2703: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2983: estimate 6.39; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2984: estimate 6.39; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3340: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3341: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3343: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3344: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3346: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3347: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3348: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3349: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3350: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3351: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3530: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3531: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3533: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3534: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3536: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3537: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3538: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3539: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3540: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3541: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 3608: estimate 7.21; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 3609: estimate 7.21; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3690: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3692: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3693: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3695: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3696: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3697: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3698: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3699: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3700: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 46.05s leader 5, trace 3895: estimate 7.33; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 3925: estimate 7.30; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 3926: estimate 7.30; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 4001: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4003: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4004: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4006: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4007: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4008: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4009: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4010: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4011: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4271: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4272: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4274: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4275: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4276: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4277: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4278: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4279: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4404: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4405: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4407: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4408: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4409: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4410: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4411: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4412: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4530: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4531: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4533: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4534: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4535: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4536: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4537: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4538: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4664: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4665: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4667: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4668: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4669: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4670: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4671: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4672: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4816: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4817: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4819: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4820: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4821: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4822: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4823: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4824: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4974: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4975: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4977: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4978: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4979: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4980: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4981: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4982: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5121: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5122: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5124: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5125: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5126: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5127: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5128: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5129: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5272: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5273: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5275: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5276: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5277: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5278: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5279: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5280: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 91.05s leader 5, trace 5348: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 91.05s leader 5, trace 5349: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5446: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5447: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5448: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5450: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5451: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5452: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5453: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5454: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5455: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5598: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5599: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5600: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5602: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5603: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5604: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5605: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5606: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5607: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5746: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5747: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5748: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5750: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5751: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5752: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5753: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5754: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5755: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5899: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5900: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5901: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 5902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5903: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5904: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5905: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5906: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5907: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5908: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6049: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6050: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6051: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6053: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6054: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6055: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6056: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6057: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6058: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6190: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6191: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6192: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6194: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6195: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6196: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6197: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6198: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6199: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6337: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6338: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6339: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6341: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6342: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6343: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6344: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6345: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6346: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6488: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6489: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6490: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 6491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6492: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6493: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6494: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6495: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6496: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6497: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6636: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6637: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6638: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 6639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6640: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6641: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6642: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6643: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6644: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6645: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 6786: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6787: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6788: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 6789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6790: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6791: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6792: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6793: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6794: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6795: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 6926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 6929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6930: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6931: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 6932: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6933: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6934: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6935: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 7074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7075: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7076: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7077: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7078: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7079: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7080: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.40s leader 5, trace 7158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 7226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 7229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 7375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 7514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 7659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 7662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 7812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 7815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 7962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 7971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 8106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 8252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 8255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 8405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 8408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 8556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 8693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 8696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 8838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 8841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 8844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 211.40s leader 5, trace 8925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 8989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 8992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 8995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 8998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 9141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 9144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 9282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 9285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 9429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 9432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 9580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 9583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 9727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 9730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 9867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 9870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 9873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 10009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 10012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 10161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 10164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 10316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 10319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 10454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 10457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 10603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 10606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 271.95s leader 5, trace 10709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 10759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 10762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 10908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 10911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 10914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 10917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 11050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 11053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 11199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 11202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 11346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 11349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 11494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 11497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 11647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 11650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 11786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 11789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 11934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 11937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 11940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 11943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 12087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 12090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 12237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 12240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 12374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 12377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 331.95s leader 5, trace 12480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 12524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 12527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 12676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 12679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 12823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 12826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 12966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 12969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 12972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 12975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 13116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 13119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 13264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 13267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Rook killed in action
- 1: Vale killed in action

## Outcome attribution

- 91.05s, evidence 786: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 91.05s, evidence 5348: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322118 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5355}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 91.05s, evidence 5349: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322118 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5355}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 151.40s, evidence 1106: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 211.40s, evidence 1415: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 271.95s, evidence 1733: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 331.95s, evidence 2046: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
