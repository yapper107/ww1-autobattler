# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/109/good-azure/battle-109-1789674256161860134`

## Battle summary

**Ember** · 360 s · 113 shots.

### Turning points

- 15.1s, squad 4: contact (events line 172). First recorded contact.
- 19.6s, squad 0: assault ([trace 3380](#trace-3380)). 20.6s, squad 0: advanced tactically.
- 39.8s, squad 1: help call ([trace 5258](#trace-5258)). No completion observed before termination.
- 44.0s, squad 0: help call ([trace 5489](#trace-5489)). 45.8s, squad 1: answered a neighbour with support by fire.
- 45.8s, squad 1: help answer ([trace 5628](#trace-5628)). 106.5s, squad 1: advanced tactically.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 30 shots, 1/8 lost.
- **1** — FightHere; chose took cover and returned fire, answered a neighbour with support by fire and 1 further drill types; no completed objective recorded; 4 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 69 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 10 shots, 1/2 lost.

### Decisions and attribution

At 15.2s, squad 0 chose took cover and returned fire ([trace 1665](#trace-1665)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 18.6s, squad 0 chose FightHere: nearest known group ([trace 2762](#trace-2762)), followed by 1 shots and 0 own casualties; estimate 1.5 against 1 distinct squad-reported contacts; At 18.6s, squad 1 chose FightHere: nearest known group ([trace 2764](#trace-2764)), followed by 1 shots and 0 own casualties; estimate 1.5 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 827}.

### Communication

116 matched deliveries (mean 0.51s, max 1.75s); 489 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.05s, squad 4, contact, evidence events line 172: First recorded contact; .
- 19.60s, squad 0, assault, evidence 3380: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 20.6s, squad 0: advanced tactically.
- 39.75s, squad 1, help call, evidence 5258: NeedSupport; No completion observed before termination.
- 44.05s, squad 0, help call, evidence 5489: NeedSupport; 45.8s, squad 1: answered a neighbour with support by fire.
- 45.80s, squad 1, help answer, evidence 5628: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 106.5s, squad 1: advanced tactically.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703488623488491, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703488623488491, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703488623488491, 'next_transition': 579}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-642"></a>
<a id="trace-644"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-684"></a>
<a id="trace-686"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259973036545917, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 827}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 827}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 827}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-740"></a>
<a id="trace-742"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-945"></a>
<a id="trace-947"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450014260368029, 'next_transition': 740}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-874"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 874): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.104610185676037, 'next_transition': 1837}.
<a id="trace-949"></a>
<a id="trace-1026"></a>
<a id="trace-1065"></a>
<a id="trace-1067"></a>
<a id="trace-1115"></a>
<a id="trace-1117"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1231"></a>
<a id="trace-1233"></a>
<a id="trace-1263"></a>
<a id="trace-1265"></a>
<a id="trace-1292"></a>
<a id="trace-1294"></a>
<a id="trace-1386"></a>
<a id="trace-1388"></a>
<a id="trace-1411"></a>
<a id="trace-1413"></a>
<a id="trace-1436"></a>
<a id="trace-1438"></a>
<a id="trace-1459"></a>
<a id="trace-1461"></a>
<a id="trace-1497"></a>
<a id="trace-1499"></a>
<a id="trace-1517"></a>
<a id="trace-1519"></a>
<a id="trace-1526"></a>
<a id="trace-1528"></a>
<a id="trace-1572"></a>
<a id="trace-1574"></a>
<a id="trace-1656"></a>
<a id="trace-1658"></a>
<a id="trace-1834"></a>
<a id="trace-1836"></a>
<a id="trace-2468"></a>
<a id="trace-2470"></a>
<a id="trace-2532"></a>
<a id="trace-2534"></a>
<a id="trace-2595"></a>
<a id="trace-2597"></a>
<a id="trace-2743"></a>
<a id="trace-2745"></a>
<a id="trace-2777"></a>
<a id="trace-2779"></a>
<a id="trace-3464"></a>
<a id="trace-3466"></a>
<a id="trace-3606"></a>
<a id="trace-3608"></a>
<a id="trace-3715"></a>
<a id="trace-3717"></a>
<a id="trace-3749"></a>
<a id="trace-3751"></a>
<a id="trace-3859"></a>
<a id="trace-3861"></a>
<a id="trace-3914"></a>
<a id="trace-3916"></a>
<a id="trace-3955"></a>
<a id="trace-3957"></a>
<a id="trace-3996"></a>
<a id="trace-3998"></a>
<a id="trace-4039"></a>
<a id="trace-4041"></a>
<a id="trace-4107"></a>
<a id="trace-4109"></a>
<a id="trace-4307"></a>
<a id="trace-4309"></a>
<a id="trace-4324"></a>
<a id="trace-4326"></a>
<a id="trace-4353"></a>
<a id="trace-4355"></a>
<a id="trace-4486"></a>
<a id="trace-4488"></a>
<a id="trace-4513"></a>
<a id="trace-4515"></a>
<a id="trace-4535"></a>
<a id="trace-4537"></a>
<a id="trace-4565"></a>
<a id="trace-4567"></a>
<a id="trace-4673"></a>
<a id="trace-4675"></a>
<a id="trace-4691"></a>
<a id="trace-4693"></a>
<a id="trace-4792"></a>
<a id="trace-4794"></a>
<a id="trace-4808"></a>
<a id="trace-4810"></a>
<a id="trace-4828"></a>
<a id="trace-4830"></a>
<a id="trace-4875"></a>
<a id="trace-4877"></a>
<a id="trace-4901"></a>
<a id="trace-4903"></a>
<a id="trace-4926"></a>
<a id="trace-4928"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
<a id="trace-4962"></a>
<a id="trace-4964"></a>
<a id="trace-4983"></a>
<a id="trace-4985"></a>
<a id="trace-5000"></a>
<a id="trace-5002"></a>
<a id="trace-5087"></a>
<a id="trace-5089"></a>
<a id="trace-5103"></a>
<a id="trace-5105"></a>
<a id="trace-5145"></a>
<a id="trace-5147"></a>
<a id="trace-5169"></a>
<a id="trace-5171"></a>
<a id="trace-5182"></a>
<a id="trace-5184"></a>
<a id="trace-5206"></a>
<a id="trace-5208"></a>
<a id="trace-5222"></a>
<a id="trace-5224"></a>
<a id="trace-5238"></a>
<a id="trace-5240"></a>
<a id="trace-5255"></a>
<a id="trace-5257"></a>
<a id="trace-5348"></a>
<a id="trace-5350"></a>
<a id="trace-5369"></a>
<a id="trace-5371"></a>
<a id="trace-5388"></a>
<a id="trace-5390"></a>
<a id="trace-5403"></a>
<a id="trace-5405"></a>
<a id="trace-5445"></a>
<a id="trace-5447"></a>
<a id="trace-5465"></a>
<a id="trace-5467"></a>
<a id="trace-5481"></a>
<a id="trace-5483"></a>
<a id="trace-5507"></a>
<a id="trace-5509"></a>
<a id="trace-5524"></a>
<a id="trace-5526"></a>
<a id="trace-5608"></a>
<a id="trace-5610"></a>
<a id="trace-5623"></a>
<a id="trace-5625"></a>
<a id="trace-6474"></a>
<a id="trace-6476"></a>
<a id="trace-6488"></a>
<a id="trace-6490"></a>
<a id="trace-6502"></a>
<a id="trace-6504"></a>
<a id="trace-6520"></a>
<a id="trace-6522"></a>
<a id="trace-6542"></a>
<a id="trace-6544"></a>
<a id="trace-6675"></a>
<a id="trace-6677"></a>
<a id="trace-6692"></a>
<a id="trace-6694"></a>
<a id="trace-6717"></a>
<a id="trace-6719"></a>
<a id="trace-6739"></a>
<a id="trace-6741"></a>
<a id="trace-6766"></a>
<a id="trace-6768"></a>
<a id="trace-6801"></a>
<a id="trace-6803"></a>
<a id="trace-6824"></a>
<a id="trace-6826"></a>
<a id="trace-6846"></a>
<a id="trace-6848"></a>
<a id="trace-6921"></a>
<a id="trace-6923"></a>
<a id="trace-6931"></a>
<a id="trace-6933"></a>
<a id="trace-6944"></a>
<a id="trace-6946"></a>
<a id="trace-6978"></a>
<a id="trace-6980"></a>
<a id="trace-6990"></a>
<a id="trace-6992"></a>
<a id="trace-7010"></a>
<a id="trace-7012"></a>
<a id="trace-7025"></a>
<a id="trace-7027"></a>
<a id="trace-7041"></a>
<a id="trace-7043"></a>
<a id="trace-7053"></a>
<a id="trace-7055"></a>
<a id="trace-7129"></a>
<a id="trace-7131"></a>
<a id="trace-7153"></a>
<a id="trace-7155"></a>
<a id="trace-7166"></a>
<a id="trace-7168"></a>
<a id="trace-7183"></a>
<a id="trace-7185"></a>
<a id="trace-7195"></a>
<a id="trace-7197"></a>
<a id="trace-7212"></a>
<a id="trace-7214"></a>
<a id="trace-7228"></a>
<a id="trace-7230"></a>
<a id="trace-7329"></a>
<a id="trace-7331"></a>
<a id="trace-7339"></a>
<a id="trace-7341"></a>
<a id="trace-7355"></a>
<a id="trace-7357"></a>
<a id="trace-7368"></a>
<a id="trace-7370"></a>
<a id="trace-7391"></a>
<a id="trace-7393"></a>
<a id="trace-7418"></a>
<a id="trace-7420"></a>
<a id="trace-7432"></a>
<a id="trace-7434"></a>
<a id="trace-7443"></a>
<a id="trace-7445"></a>
<a id="trace-7535"></a>
<a id="trace-7537"></a>
<a id="trace-7546"></a>
<a id="trace-7548"></a>
<a id="trace-7561"></a>
<a id="trace-7563"></a>
<a id="trace-7571"></a>
<a id="trace-7573"></a>
<a id="trace-7586"></a>
<a id="trace-7588"></a>
<a id="trace-7600"></a>
<a id="trace-7602"></a>
<a id="trace-7614"></a>
<a id="trace-7616"></a>
<a id="trace-7626"></a>
<a id="trace-7628"></a>
<a id="trace-7702"></a>
<a id="trace-7704"></a>
<a id="trace-7727"></a>
<a id="trace-7729"></a>
<a id="trace-7744"></a>
<a id="trace-7746"></a>
<a id="trace-7775"></a>
<a id="trace-7777"></a>
<a id="trace-7789"></a>
<a id="trace-7791"></a>
<a id="trace-7811"></a>
<a id="trace-7813"></a>
<a id="trace-7821"></a>
<a id="trace-7823"></a>
<a id="trace-7896"></a>
<a id="trace-7898"></a>
<a id="trace-7907"></a>
<a id="trace-7909"></a>
<a id="trace-7938"></a>
<a id="trace-7940"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-7978"></a>
<a id="trace-7980"></a>
<a id="trace-7992"></a>
<a id="trace-7994"></a>
<a id="trace-8002"></a>
<a id="trace-8004"></a>
<a id="trace-8096"></a>
<a id="trace-8098"></a>
<a id="trace-8117"></a>
<a id="trace-8119"></a>
<a id="trace-8141"></a>
<a id="trace-8143"></a>
<a id="trace-8157"></a>
<a id="trace-8159"></a>
<a id="trace-8174"></a>
<a id="trace-8176"></a>
<a id="trace-8188"></a>
<a id="trace-8190"></a>
<a id="trace-8212"></a>
<a id="trace-8214"></a>
<a id="trace-8225"></a>
<a id="trace-8227"></a>
<a id="trace-8299"></a>
<a id="trace-8301"></a>
<a id="trace-8320"></a>
<a id="trace-8322"></a>
<a id="trace-8365"></a>
<a id="trace-8367"></a>
<a id="trace-8376"></a>
<a id="trace-8378"></a>
<a id="trace-8395"></a>
<a id="trace-8397"></a>
<a id="trace-8408"></a>
<a id="trace-8410"></a>
<a id="trace-8515"></a>
<a id="trace-8517"></a>
<a id="trace-8527"></a>
<a id="trace-8529"></a>
<a id="trace-8544"></a>
<a id="trace-8546"></a>
<a id="trace-8554"></a>
<a id="trace-8556"></a>
<a id="trace-8568"></a>
<a id="trace-8570"></a>
<a id="trace-8590"></a>
<a id="trace-8592"></a>
<a id="trace-8673"></a>
<a id="trace-8675"></a>
<a id="trace-8686"></a>
<a id="trace-8688"></a>
<a id="trace-8701"></a>
<a id="trace-8703"></a>
<a id="trace-8717"></a>
<a id="trace-8719"></a>
<a id="trace-8738"></a>
<a id="trace-8740"></a>
<a id="trace-8748"></a>
<a id="trace-8750"></a>
<a id="trace-8768"></a>
<a id="trace-8770"></a>
<a id="trace-8784"></a>
<a id="trace-8786"></a>
<a id="trace-8798"></a>
<a id="trace-8800"></a>
<a id="trace-8808"></a>
<a id="trace-8810"></a>
<a id="trace-8890"></a>
<a id="trace-8892"></a>
<a id="trace-8904"></a>
<a id="trace-8906"></a>
<a id="trace-8919"></a>
<a id="trace-8921"></a>
<a id="trace-8945"></a>
<a id="trace-8947"></a>
<a id="trace-8962"></a>
<a id="trace-8964"></a>
<a id="trace-8979"></a>
<a id="trace-8981"></a>
<a id="trace-8992"></a>
<a id="trace-8994"></a>
<a id="trace-9005"></a>
<a id="trace-9007"></a>
<a id="trace-9084"></a>
<a id="trace-9086"></a>
<a id="trace-9095"></a>
<a id="trace-9097"></a>
<a id="trace-9108"></a>
<a id="trace-9110"></a>
<a id="trace-9119"></a>
<a id="trace-9121"></a>
<a id="trace-9132"></a>
<a id="trace-9134"></a>
<a id="trace-9143"></a>
<a id="trace-9145"></a>
<a id="trace-9157"></a>
<a id="trace-9159"></a>
<a id="trace-9169"></a>
<a id="trace-9171"></a>
<a id="trace-9183"></a>
<a id="trace-9185"></a>
<a id="trace-9270"></a>
<a id="trace-9272"></a>
<a id="trace-9283"></a>
<a id="trace-9285"></a>
<a id="trace-9296"></a>
<a id="trace-9298"></a>
<a id="trace-9310"></a>
<a id="trace-9312"></a>
<a id="trace-9329"></a>
<a id="trace-9331"></a>
<a id="trace-9362"></a>
<a id="trace-9364"></a>
<a id="trace-9375"></a>
<a id="trace-9377"></a>
<a id="trace-9386"></a>
<a id="trace-9388"></a>
<a id="trace-9459"></a>
<a id="trace-9461"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9534"></a>
<a id="trace-9536"></a>
<a id="trace-9546"></a>
<a id="trace-9548"></a>
<a id="trace-9565"></a>
<a id="trace-9567"></a>
<a id="trace-9679"></a>
<a id="trace-9681"></a>
<a id="trace-9695"></a>
<a id="trace-9697"></a>
<a id="trace-9705"></a>
<a id="trace-9707"></a>
<a id="trace-9722"></a>
<a id="trace-9724"></a>
<a id="trace-9737"></a>
<a id="trace-9739"></a>
<a id="trace-9761"></a>
<a id="trace-9763"></a>
<a id="trace-9834"></a>
<a id="trace-9836"></a>
<a id="trace-9845"></a>
<a id="trace-9847"></a>
<a id="trace-9868"></a>
<a id="trace-9870"></a>
<a id="trace-9878"></a>
<a id="trace-9880"></a>
<a id="trace-9891"></a>
<a id="trace-9893"></a>
<a id="trace-9901"></a>
<a id="trace-9903"></a>
<a id="trace-9915"></a>
<a id="trace-9917"></a>
<a id="trace-9928"></a>
<a id="trace-9930"></a>
<a id="trace-9942"></a>
<a id="trace-9944"></a>
<a id="trace-9956"></a>
<a id="trace-9958"></a>
<a id="trace-10033"></a>
<a id="trace-10035"></a>
<a id="trace-10041"></a>
<a id="trace-10043"></a>
<a id="trace-10058"></a>
<a id="trace-10060"></a>
<a id="trace-10068"></a>
<a id="trace-10070"></a>
<a id="trace-10081"></a>
<a id="trace-10083"></a>
<a id="trace-10111"></a>
<a id="trace-10113"></a>
<a id="trace-10125"></a>
<a id="trace-10127"></a>
<a id="trace-10138"></a>
<a id="trace-10140"></a>
<a id="trace-10151"></a>
<a id="trace-10153"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
<a id="trace-10235"></a>
<a id="trace-10237"></a>
<a id="trace-10265"></a>
<a id="trace-10267"></a>
<a id="trace-10278"></a>
<a id="trace-10280"></a>
<a id="trace-10288"></a>
<a id="trace-10290"></a>
<a id="trace-10301"></a>
<a id="trace-10303"></a>
<a id="trace-10314"></a>
<a id="trace-10316"></a>
<a id="trace-10327"></a>
<a id="trace-10329"></a>
<a id="trace-10338"></a>
<a id="trace-10340"></a>
<a id="trace-10442"></a>
<a id="trace-10444"></a>
<a id="trace-10452"></a>
<a id="trace-10454"></a>
<a id="trace-10466"></a>
<a id="trace-10468"></a>
<a id="trace-10486"></a>
<a id="trace-10488"></a>
<a id="trace-10503"></a>
<a id="trace-10505"></a>
<a id="trace-10514"></a>
<a id="trace-10516"></a>
<a id="trace-10527"></a>
<a id="trace-10529"></a>
<a id="trace-10538"></a>
<a id="trace-10540"></a>
<a id="trace-10611"></a>
<a id="trace-10613"></a>
<a id="trace-10622"></a>
<a id="trace-10624"></a>
<a id="trace-10647"></a>
<a id="trace-10649"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
<a id="trace-10702"></a>
<a id="trace-10704"></a>
<a id="trace-10719"></a>
<a id="trace-10721"></a>
<a id="trace-10811"></a>
<a id="trace-10813"></a>
<a id="trace-10835"></a>
<a id="trace-10837"></a>
<a id="trace-10845"></a>
<a id="trace-10847"></a>
<a id="trace-10861"></a>
<a id="trace-10863"></a>
<a id="trace-10871"></a>
<a id="trace-10873"></a>
<a id="trace-10884"></a>
<a id="trace-10886"></a>
<a id="trace-10897"></a>
<a id="trace-10899"></a>
<a id="trace-11002"></a>
<a id="trace-11004"></a>
<a id="trace-11011"></a>
<a id="trace-11013"></a>
<a id="trace-11041"></a>
<a id="trace-11043"></a>
<a id="trace-11073"></a>
<a id="trace-11075"></a>
<a id="trace-11083"></a>
<a id="trace-11085"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11109"></a>
<a id="trace-11111"></a>
<a id="trace-11182"></a>
<a id="trace-11184"></a>
<a id="trace-11214"></a>
<a id="trace-11216"></a>
<a id="trace-11241"></a>
<a id="trace-11243"></a>
<a id="trace-11255"></a>
<a id="trace-11257"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11293"></a>
<a id="trace-11295"></a>
<a id="trace-11303"></a>
<a id="trace-11305"></a>
<a id="trace-11376"></a>
<a id="trace-11378"></a>
<a id="trace-11397"></a>
<a id="trace-11399"></a>
<a id="trace-11412"></a>
<a id="trace-11414"></a>
<a id="trace-11437"></a>
<a id="trace-11439"></a>
<a id="trace-11461"></a>
<a id="trace-11463"></a>
<a id="trace-11472"></a>
<a id="trace-11474"></a>
<a id="trace-11489"></a>
<a id="trace-11491"></a>
<a id="trace-11503"></a>
<a id="trace-11505"></a>
<a id="trace-11576"></a>
<a id="trace-11578"></a>
<a id="trace-11584"></a>
<a id="trace-11586"></a>
<a id="trace-11598"></a>
<a id="trace-11600"></a>
<a id="trace-11609"></a>
<a id="trace-11611"></a>
<a id="trace-11622"></a>
<a id="trace-11624"></a>
<a id="trace-11646"></a>
<a id="trace-11648"></a>
<a id="trace-11656"></a>
<a id="trace-11658"></a>
<a id="trace-11670"></a>
<a id="trace-11672"></a>
<a id="trace-11763"></a>
<a id="trace-11765"></a>
<a id="trace-11778"></a>
<a id="trace-11780"></a>
<a id="trace-11796"></a>
<a id="trace-11798"></a>
<a id="trace-11807"></a>
<a id="trace-11809"></a>
<a id="trace-11820"></a>
<a id="trace-11822"></a>
<a id="trace-11830"></a>
<a id="trace-11832"></a>
<a id="trace-11843"></a>
<a id="trace-11845"></a>
<a id="trace-11853"></a>
<a id="trace-11855"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-11876"></a>
<a id="trace-11878"></a>
<a id="trace-11973"></a>
<a id="trace-11975"></a>
<a id="trace-11985"></a>
<a id="trace-11987"></a>
<a id="trace-12024"></a>
<a id="trace-12026"></a>
<a id="trace-12041"></a>
<a id="trace-12043"></a>
<a id="trace-12062"></a>
<a id="trace-12064"></a>
<a id="trace-12072"></a>
<a id="trace-12074"></a>
<a id="trace-12145"></a>
<a id="trace-12147"></a>
<a id="trace-12165"></a>
<a id="trace-12167"></a>
<a id="trace-12187"></a>
<a id="trace-12189"></a>
<a id="trace-12215"></a>
<a id="trace-12217"></a>
<a id="trace-12252"></a>
<a id="trace-12254"></a>
<a id="trace-12266"></a>
<a id="trace-12268"></a>
<a id="trace-12345"></a>
<a id="trace-12347"></a>
<a id="trace-12378"></a>
<a id="trace-12380"></a>
<a id="trace-12400"></a>
<a id="trace-12402"></a>
<a id="trace-12410"></a>
<a id="trace-12412"></a>
<a id="trace-12427"></a>
<a id="trace-12429"></a>
<a id="trace-12439"></a>
<a id="trace-12441"></a>
<a id="trace-12513"></a>
<a id="trace-12515"></a>
<a id="trace-12528"></a>
<a id="trace-12530"></a>
<a id="trace-12563"></a>
<a id="trace-12565"></a>
<a id="trace-12576"></a>
<a id="trace-12578"></a>
<a id="trace-12608"></a>
<a id="trace-12610"></a>
<a id="trace-12707"></a>
<a id="trace-12709"></a>
<a id="trace-12723"></a>
<a id="trace-12725"></a>
<a id="trace-12737"></a>
<a id="trace-12739"></a>
<a id="trace-12766"></a>
<a id="trace-12768"></a>
<a id="trace-12788"></a>
<a id="trace-12790"></a>
<a id="trace-12802"></a>
<a id="trace-12804"></a>
<a id="trace-12815"></a>
<a id="trace-12817"></a>
<a id="trace-12825"></a>
<a id="trace-12827"></a>
<a id="trace-12898"></a>
<a id="trace-12900"></a>
<a id="trace-12918"></a>
<a id="trace-12920"></a>
<a id="trace-12928"></a>
<a id="trace-12930"></a>
<a id="trace-12942"></a>
<a id="trace-12944"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-12968"></a>
<a id="trace-12970"></a>
<a id="trace-12986"></a>
<a id="trace-12988"></a>
<a id="trace-13003"></a>
<a id="trace-13005"></a>
<a id="trace-13020"></a>
<a id="trace-13022"></a>
<a id="trace-13102"></a>
<a id="trace-13104"></a>
<a id="trace-13110"></a>
<a id="trace-13112"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13134"></a>
<a id="trace-13136"></a>
<a id="trace-13147"></a>
<a id="trace-13149"></a>
<a id="trace-13157"></a>
<a id="trace-13159"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13182"></a>
<a id="trace-13184"></a>
<a id="trace-13286"></a>
<a id="trace-13288"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13323"></a>
<a id="trace-13325"></a>
<a id="trace-13342"></a>
<a id="trace-13344"></a>
<a id="trace-13355"></a>
<a id="trace-13357"></a>
<a id="trace-13368"></a>
<a id="trace-13370"></a>
<a id="trace-13378"></a>
<a id="trace-13380"></a>
<a id="trace-13391"></a>
<a id="trace-13393"></a>
<a id="trace-13402"></a>
<a id="trace-13404"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-13499"></a>
<a id="trace-13501"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13526"></a>
<a id="trace-13528"></a>
<a id="trace-13543"></a>
<a id="trace-13545"></a>
<a id="trace-13596"></a>
<a id="trace-13598"></a>
<a id="trace-13669"></a>
<a id="trace-13671"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13691"></a>
<a id="trace-13693"></a>
<a id="trace-13701"></a>
<a id="trace-13703"></a>
<a id="trace-13715"></a>
<a id="trace-13717"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
<a id="trace-13741"></a>
<a id="trace-13743"></a>
<a id="trace-13755"></a>
<a id="trace-13757"></a>
<a id="trace-13772"></a>
<a id="trace-13774"></a>
<a id="trace-13786"></a>
<a id="trace-13788"></a>
<a id="trace-13889"></a>
<a id="trace-13891"></a>
<a id="trace-13899"></a>
<a id="trace-13901"></a>
<a id="trace-13912"></a>
<a id="trace-13914"></a>
<a id="trace-13922"></a>
<a id="trace-13924"></a>
<a id="trace-13935"></a>
<a id="trace-13937"></a>
<a id="trace-13946"></a>
<a id="trace-13948"></a>
<a id="trace-13961"></a>
<a id="trace-13963"></a>
<a id="trace-13972"></a>
<a id="trace-13974"></a>
<a id="trace-14049"></a>
<a id="trace-14051"></a>
<a id="trace-14062"></a>
<a id="trace-14064"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14089"></a>
<a id="trace-14091"></a>
<a id="trace-14113"></a>
<a id="trace-14115"></a>
<a id="trace-14132"></a>
<a id="trace-14134"></a>
<a id="trace-14145"></a>
<a id="trace-14147"></a>
<a id="trace-14158"></a>
<a id="trace-14160"></a>
<a id="trace-14168"></a>
<a id="trace-14170"></a>
<a id="trace-14251"></a>
<a id="trace-14253"></a>
<a id="trace-14266"></a>
<a id="trace-14268"></a>
<a id="trace-14280"></a>
<a id="trace-14282"></a>
<a id="trace-14297"></a>
<a id="trace-14299"></a>
<a id="trace-14307"></a>
<a id="trace-14309"></a>
<a id="trace-14320"></a>
<a id="trace-14322"></a>
<a id="trace-14333"></a>
<a id="trace-14335"></a>
<a id="trace-14346"></a>
<a id="trace-14348"></a>
<a id="trace-14356"></a>
<a id="trace-14358"></a>
<a id="trace-14438"></a>
<a id="trace-14440"></a>
<a id="trace-14450"></a>
<a id="trace-14452"></a>
<a id="trace-14464"></a>
<a id="trace-14466"></a>
<a id="trace-14477"></a>
<a id="trace-14479"></a>
<a id="trace-14501"></a>
<a id="trace-14503"></a>
<a id="trace-14526"></a>
<a id="trace-14528"></a>
<a id="trace-14543"></a>
<a id="trace-14545"></a>
<a id="trace-14553"></a>
<a id="trace-14555"></a>
<a id="trace-14626"></a>
<a id="trace-14628"></a>
<a id="trace-14637"></a>
<a id="trace-14639"></a>
<a id="trace-14663"></a>
<a id="trace-14665"></a>
<a id="trace-14685"></a>
<a id="trace-14687"></a>
<a id="trace-14707"></a>
<a id="trace-14709"></a>
<a id="trace-14717"></a>
<a id="trace-14719"></a>
<a id="trace-14733"></a>
<a id="trace-14735"></a>
<a id="trace-14743"></a>
<a id="trace-14745"></a>
<a id="trace-14820"></a>
<a id="trace-14822"></a>
<a id="trace-14844"></a>
<a id="trace-14846"></a>
<a id="trace-14855"></a>
<a id="trace-14857"></a>
<a id="trace-14871"></a>
<a id="trace-14873"></a>
<a id="trace-14881"></a>
<a id="trace-14883"></a>
<a id="trace-14894"></a>
<a id="trace-14896"></a>
<a id="trace-14907"></a>
<a id="trace-14909"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-15011"></a>
<a id="trace-15013"></a>
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15049"></a>
<a id="trace-15051"></a>
<a id="trace-15066"></a>
<a id="trace-15068"></a>
<a id="trace-15089"></a>
<a id="trace-15091"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15200"></a>
<a id="trace-15202"></a>
<a id="trace-15235"></a>
<a id="trace-15237"></a>
<a id="trace-15250"></a>
<a id="trace-15252"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15304"></a>
<a id="trace-15306"></a>
<a id="trace-15407"></a>
<a id="trace-15409"></a>
<a id="trace-15420"></a>
<a id="trace-15422"></a>
<a id="trace-15433"></a>
<a id="trace-15435"></a>
<a id="trace-15447"></a>
<a id="trace-15449"></a>
<a id="trace-15470"></a>
<a id="trace-15472"></a>
<a id="trace-15482"></a>
<a id="trace-15484"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15626"></a>
<a id="trace-15628"></a>
<a id="trace-15637"></a>
<a id="trace-15639"></a>
<a id="trace-15663"></a>
<a id="trace-15665"></a>
<a id="trace-15676"></a>
<a id="trace-15678"></a>
<a id="trace-15690"></a>
<a id="trace-15692"></a>
<a id="trace-15781"></a>
<a id="trace-15783"></a>
<a id="trace-15799"></a>
<a id="trace-15801"></a>
<a id="trace-15809"></a>
<a id="trace-15811"></a>
<a id="trace-15826"></a>
<a id="trace-15828"></a>
<a id="trace-15847"></a>
<a id="trace-15849"></a>
<a id="trace-15858"></a>
<a id="trace-15860"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15952"></a>
<a id="trace-15954"></a>
<a id="trace-15963"></a>
<a id="trace-15965"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16041"></a>
<a id="trace-16043"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
<a id="trace-16152"></a>
<a id="trace-16154"></a>
<a id="trace-16160"></a>
<a id="trace-16162"></a>
<a id="trace-16174"></a>
<a id="trace-16176"></a>
<a id="trace-16184"></a>
<a id="trace-16186"></a>
<a id="trace-16197"></a>
<a id="trace-16199"></a>
<a id="trace-16210"></a>
<a id="trace-16212"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16240"></a>
<a id="trace-16242"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16279"></a>
<a id="trace-16281"></a>
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16364"></a>
<a id="trace-16366"></a>
<a id="trace-16378"></a>
<a id="trace-16380"></a>
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16401"></a>
<a id="trace-16403"></a>
<a id="trace-16411"></a>
<a id="trace-16413"></a>
<a id="trace-16432"></a>
<a id="trace-16434"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16543"></a>
<a id="trace-16545"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16605"></a>
<a id="trace-16607"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16639"></a>
<a id="trace-16641"></a>
<a id="trace-16650"></a>
<a id="trace-16652"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16783"></a>
<a id="trace-16785"></a>
<a id="trace-16809"></a>
<a id="trace-16811"></a>
<a id="trace-16822"></a>
<a id="trace-16824"></a>
<a id="trace-16844"></a>
<a id="trace-16846"></a>
<a id="trace-16917"></a>
<a id="trace-16919"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-16941"></a>
<a id="trace-16943"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16973"></a>
<a id="trace-16975"></a>
<a id="trace-16988"></a>
<a id="trace-16990"></a>
<a id="trace-17002"></a>
<a id="trace-17004"></a>
<a id="trace-17030"></a>
<a id="trace-17032"></a>
<a id="trace-17116"></a>
<a id="trace-17118"></a>
<a id="trace-17125"></a>
<a id="trace-17127"></a>
<a id="trace-17139"></a>
<a id="trace-17141"></a>
<a id="trace-17168"></a>
<a id="trace-17170"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17191"></a>
<a id="trace-17193"></a>
<a id="trace-17213"></a>
<a id="trace-17215"></a>
<a id="trace-17292"></a>
<a id="trace-17294"></a>
<a id="trace-17332"></a>
<a id="trace-17334"></a>
<a id="trace-17351"></a>
<a id="trace-17353"></a>
<a id="trace-17375"></a>
<a id="trace-17377"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17398"></a>
<a id="trace-17400"></a>
<a id="trace-17408"></a>
<a id="trace-17410"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17517"></a>
<a id="trace-17519"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17548"></a>
<a id="trace-17550"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17608"></a>
<a id="trace-17610"></a>
<a id="trace-17703"></a>
<a id="trace-17705"></a>
<a id="trace-17714"></a>
<a id="trace-17716"></a>
<a id="trace-17727"></a>
<a id="trace-17729"></a>
<a id="trace-17738"></a>
<a id="trace-17740"></a>
<a id="trace-17753"></a>
<a id="trace-17755"></a>
<a id="trace-17764"></a>
<a id="trace-17766"></a>
<a id="trace-17781"></a>
<a id="trace-17783"></a>
<a id="trace-17869"></a>
<a id="trace-17871"></a>
<a id="trace-17880"></a>
<a id="trace-17882"></a>
<a id="trace-17903"></a>
<a id="trace-17905"></a>
<a id="trace-17933"></a>
<a id="trace-17935"></a>
<a id="trace-17946"></a>
<a id="trace-17948"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-17970"></a>
<a id="trace-17972"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18089"></a>
<a id="trace-18091"></a>
<a id="trace-18100"></a>
<a id="trace-18102"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18156"></a>
<a id="trace-18158"></a>
<a id="trace-18177"></a>
<a id="trace-18179"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18259"></a>
<a id="trace-18261"></a>
<a id="trace-18275"></a>
<a id="trace-18277"></a>
<a id="trace-18286"></a>
<a id="trace-18288"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18314"></a>
<a id="trace-18316"></a>
<a id="trace-18331"></a>
<a id="trace-18333"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18357"></a>
<a id="trace-18359"></a>
<a id="trace-18367"></a>
<a id="trace-18369"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18496"></a>
<a id="trace-18498"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18533"></a>
<a id="trace-18535"></a>
<a id="trace-18550"></a>
<a id="trace-18552"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625372285426513, 'next_transition': 1026}.
<a id="trace-967"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 967): traveling overwatch. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299931389408376, 'next_transition': 1022}.
<a id="trace-968"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 968): received platoon directive. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299931389408376, 'next_transition': 1022}.
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1061"></a>
<a id="trace-1063"></a>
<a id="trace-1111"></a>
<a id="trace-1113"></a>
<a id="trace-1147"></a>
<a id="trace-1149"></a>
<a id="trace-1177"></a>
<a id="trace-1179"></a>
<a id="trace-1227"></a>
<a id="trace-1229"></a>
<a id="trace-1259"></a>
<a id="trace-1261"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1382"></a>
<a id="trace-1384"></a>
<a id="trace-1407"></a>
<a id="trace-1409"></a>
<a id="trace-1432"></a>
<a id="trace-1434"></a>
<a id="trace-1455"></a>
<a id="trace-1457"></a>
<a id="trace-1479"></a>
<a id="trace-1481"></a>
<a id="trace-1493"></a>
<a id="trace-1495"></a>
<a id="trace-1513"></a>
<a id="trace-1515"></a>
<a id="trace-1522"></a>
<a id="trace-1524"></a>
<a id="trace-1555"></a>
<a id="trace-1557"></a>
<a id="trace-1568"></a>
<a id="trace-1570"></a>
<a id="trace-1652"></a>
<a id="trace-1654"></a>
- 6.20s–15.20s (×38), actor 5, squad 0 (trace 1022): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 752. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2174385604781202, 'next_transition': 1061}.
<a id="trace-1665"></a>
- 15.25s–15.25s (×1), actor 0, squad 0 (trace 1665): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1745}.
<a id="trace-1666"></a>
- 15.25s–15.25s (×1), actor 0, squad 0 (trace 1666): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1745}.
<a id="trace-1667"></a>
<a id="trace-1745"></a>
- 15.25s–15.60s (×2), actor 0, squad 0 (trace 1667): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: {'until': 15.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1745}.
<a id="trace-1830"></a>
<a id="trace-1832"></a>
<a id="trace-2464"></a>
<a id="trace-2466"></a>
<a id="trace-2528"></a>
<a id="trace-2530"></a>
<a id="trace-2591"></a>
<a id="trace-2593"></a>
<a id="trace-2652"></a>
<a id="trace-2654"></a>
<a id="trace-2739"></a>
<a id="trace-2741"></a>
- 15.70s–18.25s (×12), actor 5, squad 0 (trace 1830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1583. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2464}.
<a id="trace-1837"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1837): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1586. Next observer evidence: None.
<a id="trace-1838"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1838): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1586. Next observer evidence: None.
<a id="trace-1839"></a>
<a id="trace-1956"></a>
<a id="trace-2079"></a>
<a id="trace-2199"></a>
<a id="trace-2327"></a>
- 15.70s–16.10s (×5), actor 8, squad 1 (trace 1839): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1586. Next observer evidence: None.
<a id="trace-302"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 302): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-303"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 303): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2761"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2761): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.390123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2761. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2773}.
<a id="trace-2762"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2762): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.390123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2762. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2773}.
<a id="trace-2763"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2763): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.390123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2763. Next observer evidence: {'until': 19.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.26840046986732347, 'next_transition': 2800}.
<a id="trace-2764"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2764): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.390123 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2764. Next observer evidence: {'until': 19.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.26840046986732347, 'next_transition': 2800}.
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2790"></a>
<a id="trace-2792"></a>
- 18.75s–19.25s (×4), actor 5, squad 0 (trace 2773): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2764. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2790}.
<a id="trace-2800"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 2800): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1586. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7410498491498397, 'next_transition': 3494}.
<a id="trace-2802"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 2802): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1586. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7410498491498397, 'next_transition': 3494}.
<a id="trace-2804"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 2804): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-2806"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 2806): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-3380"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3380): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-3381"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3381): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-3443"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3443): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-3444"></a>
- 19.60s–19.60s (×1), actor 0, squad 0 (trace 3444): Assaulting. Knowledge: actor memory at 15.00s, trace 1578. Next observer evidence: None.
<a id="trace-3459"></a>
<a id="trace-3461"></a>
<a id="trace-3601"></a>
<a id="trace-3603"></a>
- 19.75s–20.25s (×4), actor 5, squad 0 (trace 3459): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2764. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3601}.
<a id="trace-3494"></a>
- 20.05s–20.05s (×1), actor 8, squad 1 (trace 3494): MoveTactically. Knowledge: actor memory at 20.00s, trace 3478. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2822460001717606, 'next_transition': 4110}.
<a id="trace-3495"></a>
- 20.05s–20.05s (×1), actor 8, squad 1 (trace 3495): received platoon directive. Knowledge: actor memory at 20.00s, trace 3478. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2822460001717606, 'next_transition': 4110}.
<a id="trace-3618"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3618): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 3470. Next observer evidence: None.
<a id="trace-3625"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3625): MoveTactically. Knowledge: actor memory at 20.00s, trace 3470. Next observer evidence: None.
<a id="trace-3626"></a>
- 20.60s–20.60s (×1), actor 0, squad 0 (trace 3626): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 20.00s, trace 3470. Next observer evidence: None.
<a id="trace-3710"></a>
<a id="trace-3712"></a>
<a id="trace-3743"></a>
<a id="trace-3745"></a>
- 20.75s–21.25s (×4), actor 5, squad 0 (trace 3710): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3475. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3743}.
<a id="trace-3764"></a>
- 21.60s–21.60s (×1), actor 0, squad 0 (trace 3764): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3470. Next observer evidence: None.
<a id="trace-3765"></a>
- 21.60s–21.60s (×1), actor 0, squad 0 (trace 3765): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3470. Next observer evidence: None.
<a id="trace-3853"></a>
<a id="trace-3855"></a>
<a id="trace-3908"></a>
<a id="trace-3910"></a>
<a id="trace-3949"></a>
<a id="trace-3951"></a>
<a id="trace-3990"></a>
<a id="trace-3992"></a>
<a id="trace-4033"></a>
<a id="trace-4035"></a>
<a id="trace-4068"></a>
<a id="trace-4070"></a>
<a id="trace-4101"></a>
<a id="trace-4103"></a>
- 21.75s–24.75s (×14), actor 5, squad 0 (trace 3853): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3475. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21974984115478324, 'next_transition': 3908}.
<a id="trace-4110"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 4110): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3478. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.69970129408817, 'next_transition': 4364}.
<a id="trace-4111"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 4111): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3478. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.69970129408817, 'next_transition': 4364}.
<a id="trace-4291"></a>
- 25.20s–25.20s (×1), actor 0, squad 0 (trace 4291): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4222. Next observer evidence: None.
<a id="trace-4301"></a>
<a id="trace-4303"></a>
<a id="trace-4318"></a>
<a id="trace-4320"></a>
<a id="trace-4347"></a>
<a id="trace-4349"></a>
<a id="trace-4480"></a>
<a id="trace-4482"></a>
<a id="trace-4507"></a>
<a id="trace-4509"></a>
<a id="trace-4529"></a>
<a id="trace-4531"></a>
<a id="trace-4559"></a>
<a id="trace-4561"></a>
<a id="trace-4574"></a>
<a id="trace-4576"></a>
- 25.25s–28.75s (×16), actor 5, squad 0 (trace 4301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4227. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09778820591661666, 'next_transition': 4318}.
<a id="trace-4364"></a>
- 26.60s–26.60s (×1), actor 8, squad 1 (trace 4364): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 4230. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.997737496998016, 'next_transition': 4700}.
<a id="trace-4584"></a>
- 28.80s–28.80s (×1), actor 0, squad 0 (trace 4584): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4222. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4669}.
<a id="trace-4669"></a>
<a id="trace-4671"></a>
<a id="trace-4687"></a>
<a id="trace-4689"></a>
<a id="trace-4788"></a>
<a id="trace-4790"></a>
<a id="trace-4804"></a>
<a id="trace-4806"></a>
<a id="trace-4824"></a>
<a id="trace-4826"></a>
<a id="trace-4871"></a>
<a id="trace-4873"></a>
<a id="trace-4897"></a>
<a id="trace-4899"></a>
- 29.25s–32.25s (×14), actor 5, squad 0 (trace 4669): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4227. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4687}.
<a id="trace-4700"></a>
- 29.95s–29.95s (×1), actor 8, squad 1 (trace 4700): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4230. Next observer evidence: {'until': 31.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6110179606860235, 'next_transition': 4881}.
<a id="trace-4881"></a>
- 31.80s–31.80s (×1), actor 8, squad 1 (trace 4881): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 4716. Next observer evidence: {'until': 33.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7558159101593457, 'next_transition': 530}.
<a id="trace-4914"></a>
- 32.60s–32.60s (×1), actor 0, squad 0 (trace 4914): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4708. Next observer evidence: None.
<a id="trace-4922"></a>
<a id="trace-4924"></a>
<a id="trace-4941"></a>
<a id="trace-4943"></a>
<a id="trace-4958"></a>
<a id="trace-4960"></a>
<a id="trace-4979"></a>
<a id="trace-4981"></a>
<a id="trace-4996"></a>
<a id="trace-4998"></a>
<a id="trace-5082"></a>
<a id="trace-5084"></a>
<a id="trace-5098"></a>
<a id="trace-5100"></a>
<a id="trace-5122"></a>
<a id="trace-5124"></a>
<a id="trace-5140"></a>
<a id="trace-5142"></a>
<a id="trace-5163"></a>
<a id="trace-5165"></a>
<a id="trace-5176"></a>
<a id="trace-5178"></a>
<a id="trace-5200"></a>
<a id="trace-5202"></a>
<a id="trace-5217"></a>
<a id="trace-5219"></a>
<a id="trace-5233"></a>
<a id="trace-5235"></a>
<a id="trace-5250"></a>
<a id="trace-5252"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
<a id="trace-5364"></a>
<a id="trace-5366"></a>
<a id="trace-5383"></a>
<a id="trace-5385"></a>
<a id="trace-5397"></a>
<a id="trace-5399"></a>
<a id="trace-5419"></a>
<a id="trace-5421"></a>
<a id="trace-5439"></a>
<a id="trace-5441"></a>
<a id="trace-5461"></a>
<a id="trace-5463"></a>
<a id="trace-5477"></a>
<a id="trace-5479"></a>
- 32.75s–43.75s (×46), actor 5, squad 0 (trace 4922): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4713. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625733995211667, 'next_transition': 4941}.
<a id="trace-530"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (events line 530): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4948"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 4948): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.710938 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 4948. Next observer evidence: {'until': 35.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8319007722376774, 'next_transition': 5092}.
<a id="trace-4949"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 4949): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.710938 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 4949. Next observer evidence: {'until': 35.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8319007722376774, 'next_transition': 5092}.
<a id="trace-5092"></a>
- 35.40s–35.40s (×1), actor 8, squad 1 (trace 5092): received platoon directive; retain held slots. Knowledge: actor memory at 35.00s, trace 5018. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3017667511156712, 'next_transition': 699}.
<a id="trace-699"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (events line 699): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5244"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 5244): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.670834 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5244. Next observer evidence: None.
<a id="trace-5245"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 5245): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.670834 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 5245. Next observer evidence: None.
<a id="trace-5258"></a>
- 39.75s–39.75s (×1), actor 8, squad 1 (trace 5258): NeedSupport. Knowledge: actor memory at 35.00s, trace 5018. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.801758029606154, 'next_transition': 5372}.
<a id="trace-5372"></a>
- 40.95s–40.95s (×1), actor 8, squad 1 (trace 5372): received platoon directive; retain held slots. Knowledge: actor memory at 40.00s, trace 5276. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.0447011282825662, 'next_transition': 840}.
<a id="trace-5489"></a>
- 44.05s–44.05s (×1), actor 1, squad 0 (trace 5489): NeedSupport. Knowledge: actor memory at 40.00s, trace 5269. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5503}.
<a id="trace-5503"></a>
<a id="trace-5505"></a>
- 44.25s–44.25s (×2), actor 5, squad 0 (trace 5503): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5273. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 839}.
<a id="trace-839"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 839): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-840"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 840): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5512"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 5512): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.682127 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 5512. Next observer evidence: None.
<a id="trace-5513"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 5513): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.682127 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 5513. Next observer evidence: None.
<a id="trace-5514"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 5514): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.682127 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 5514. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.040779464151748, 'next_transition': 5628}.
<a id="trace-5515"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 5515): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.682127 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 5515. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.040779464151748, 'next_transition': 5628}.
<a id="trace-5520"></a>
<a id="trace-5522"></a>
<a id="trace-5604"></a>
<a id="trace-5606"></a>
<a id="trace-5619"></a>
<a id="trace-5621"></a>
<a id="trace-6470"></a>
<a id="trace-6472"></a>
<a id="trace-6484"></a>
<a id="trace-6486"></a>
<a id="trace-6497"></a>
<a id="trace-6499"></a>
<a id="trace-6515"></a>
<a id="trace-6517"></a>
- 44.75s–47.75s (×14), actor 5, squad 0 (trace 5520): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 5515. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5604}.
<a id="trace-5628"></a>
- 45.80s–45.80s (×1), actor 8, squad 1 (trace 5628): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 5538. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22091016596118893, 'next_transition': 6462}.
<a id="trace-5629"></a>
- 45.80s–45.80s (×1), actor 8, squad 1 (trace 5629): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 5538. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22091016596118893, 'next_transition': 6462}.
<a id="trace-6462"></a>
- 45.85s–45.85s (×1), actor 8, squad 1 (trace 6462): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 45.00s, trace 5538. Next observer evidence: {'until': 75.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.8927454910856347, 'next_transition': 1084}.
<a id="trace-6526"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6526): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 45.00s, trace 5531. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6536}.
<a id="trace-6536"></a>
<a id="trace-6538"></a>
<a id="trace-6552"></a>
<a id="trace-6554"></a>
<a id="trace-6569"></a>
<a id="trace-6571"></a>
<a id="trace-6587"></a>
<a id="trace-6589"></a>
<a id="trace-6669"></a>
<a id="trace-6671"></a>
<a id="trace-6686"></a>
<a id="trace-6688"></a>
<a id="trace-6711"></a>
<a id="trace-6713"></a>
<a id="trace-6733"></a>
<a id="trace-6735"></a>
<a id="trace-6760"></a>
<a id="trace-6762"></a>
<a id="trace-6775"></a>
<a id="trace-6777"></a>
<a id="trace-6796"></a>
<a id="trace-6798"></a>
<a id="trace-6819"></a>
<a id="trace-6821"></a>
<a id="trace-6832"></a>
<a id="trace-6834"></a>
<a id="trace-6841"></a>
<a id="trace-6843"></a>
<a id="trace-6916"></a>
<a id="trace-6918"></a>
<a id="trace-6926"></a>
<a id="trace-6928"></a>
<a id="trace-6939"></a>
<a id="trace-6941"></a>
<a id="trace-6951"></a>
<a id="trace-6953"></a>
<a id="trace-6971"></a>
<a id="trace-6973"></a>
<a id="trace-6983"></a>
<a id="trace-6985"></a>
<a id="trace-7005"></a>
<a id="trace-7007"></a>
<a id="trace-7020"></a>
<a id="trace-7022"></a>
<a id="trace-7036"></a>
<a id="trace-7038"></a>
<a id="trace-7048"></a>
<a id="trace-7050"></a>
<a id="trace-7123"></a>
<a id="trace-7125"></a>
<a id="trace-7133"></a>
<a id="trace-7135"></a>
<a id="trace-7147"></a>
<a id="trace-7149"></a>
<a id="trace-7160"></a>
<a id="trace-7162"></a>
<a id="trace-7177"></a>
<a id="trace-7179"></a>
<a id="trace-7189"></a>
<a id="trace-7191"></a>
<a id="trace-7206"></a>
<a id="trace-7208"></a>
<a id="trace-7222"></a>
<a id="trace-7224"></a>
<a id="trace-7238"></a>
<a id="trace-7240"></a>
<a id="trace-7249"></a>
<a id="trace-7251"></a>
<a id="trace-7323"></a>
<a id="trace-7325"></a>
<a id="trace-7333"></a>
<a id="trace-7335"></a>
<a id="trace-7349"></a>
<a id="trace-7351"></a>
<a id="trace-7362"></a>
<a id="trace-7364"></a>
<a id="trace-7379"></a>
<a id="trace-7381"></a>
<a id="trace-7387"></a>
<a id="trace-7389"></a>
<a id="trace-7402"></a>
<a id="trace-7404"></a>
<a id="trace-7414"></a>
<a id="trace-7416"></a>
<a id="trace-7428"></a>
<a id="trace-7430"></a>
<a id="trace-7439"></a>
<a id="trace-7441"></a>
<a id="trace-7513"></a>
<a id="trace-7515"></a>
<a id="trace-7519"></a>
<a id="trace-7521"></a>
<a id="trace-7531"></a>
<a id="trace-7533"></a>
<a id="trace-7542"></a>
<a id="trace-7544"></a>
<a id="trace-7557"></a>
<a id="trace-7559"></a>
<a id="trace-7567"></a>
<a id="trace-7569"></a>
<a id="trace-7582"></a>
<a id="trace-7584"></a>
<a id="trace-7596"></a>
<a id="trace-7598"></a>
<a id="trace-7610"></a>
<a id="trace-7612"></a>
<a id="trace-7622"></a>
<a id="trace-7624"></a>
<a id="trace-7698"></a>
<a id="trace-7700"></a>
<a id="trace-7723"></a>
<a id="trace-7725"></a>
<a id="trace-7740"></a>
<a id="trace-7742"></a>
<a id="trace-7751"></a>
<a id="trace-7753"></a>
<a id="trace-7763"></a>
<a id="trace-7765"></a>
<a id="trace-7771"></a>
<a id="trace-7773"></a>
<a id="trace-7785"></a>
<a id="trace-7787"></a>
<a id="trace-7795"></a>
<a id="trace-7797"></a>
<a id="trace-7807"></a>
<a id="trace-7809"></a>
<a id="trace-7817"></a>
<a id="trace-7819"></a>
<a id="trace-7892"></a>
<a id="trace-7894"></a>
<a id="trace-7903"></a>
<a id="trace-7905"></a>
<a id="trace-7921"></a>
<a id="trace-7923"></a>
<a id="trace-7934"></a>
<a id="trace-7936"></a>
<a id="trace-7956"></a>
<a id="trace-7958"></a>
<a id="trace-7974"></a>
<a id="trace-7976"></a>
<a id="trace-7988"></a>
<a id="trace-7990"></a>
<a id="trace-7998"></a>
<a id="trace-8000"></a>
<a id="trace-8012"></a>
<a id="trace-8014"></a>
<a id="trace-8020"></a>
<a id="trace-8022"></a>
<a id="trace-8092"></a>
<a id="trace-8094"></a>
<a id="trace-8101"></a>
<a id="trace-8103"></a>
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8125"></a>
<a id="trace-8127"></a>
<a id="trace-8137"></a>
<a id="trace-8139"></a>
<a id="trace-8153"></a>
<a id="trace-8155"></a>
<a id="trace-8170"></a>
<a id="trace-8172"></a>
<a id="trace-8184"></a>
<a id="trace-8186"></a>
<a id="trace-8208"></a>
<a id="trace-8210"></a>
<a id="trace-8221"></a>
<a id="trace-8223"></a>
<a id="trace-8295"></a>
<a id="trace-8297"></a>
<a id="trace-8304"></a>
<a id="trace-8306"></a>
<a id="trace-8316"></a>
<a id="trace-8318"></a>
<a id="trace-8329"></a>
<a id="trace-8331"></a>
<a id="trace-8341"></a>
<a id="trace-8343"></a>
<a id="trace-8349"></a>
<a id="trace-8351"></a>
<a id="trace-8361"></a>
<a id="trace-8363"></a>
<a id="trace-8372"></a>
<a id="trace-8374"></a>
- 48.25s–93.75s (×184), actor 5, squad 0 (trace 6536): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5535. Next observer evidence: {'until': 48.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.026987434639517614, 'next_transition': 6552}.
<a id="trace-8382"></a>
- 94.05s–94.05s (×1), actor 1, squad 0 (trace 8382): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 90.00s, trace 8228. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8391}.
<a id="trace-8383"></a>
- 94.05s–94.05s (×1), actor 1, squad 0 (trace 8383): ; retain contact cover stage. Knowledge: actor memory at 90.00s, trace 8228. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8391}.
<a id="trace-8391"></a>
<a id="trace-8393"></a>
<a id="trace-8404"></a>
<a id="trace-8406"></a>
<a id="trace-8482"></a>
<a id="trace-8484"></a>
<a id="trace-8511"></a>
<a id="trace-8513"></a>
<a id="trace-8523"></a>
<a id="trace-8525"></a>
<a id="trace-8540"></a>
<a id="trace-8542"></a>
<a id="trace-8550"></a>
<a id="trace-8552"></a>
<a id="trace-8564"></a>
<a id="trace-8566"></a>
<a id="trace-8574"></a>
<a id="trace-8576"></a>
<a id="trace-8586"></a>
<a id="trace-8588"></a>
<a id="trace-8596"></a>
<a id="trace-8598"></a>
<a id="trace-8669"></a>
<a id="trace-8671"></a>
- 94.25s–100.25s (×24), actor 5, squad 0 (trace 8391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 8232. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8404}.
<a id="trace-1063"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (events line 1063): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8682}.
<a id="trace-8678"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 8678): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.609483 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 8678. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8682}.
<a id="trace-8679"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 8679): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.609483 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 8679. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8682}.
<a id="trace-8682"></a>
<a id="trace-8684"></a>
<a id="trace-8697"></a>
<a id="trace-8699"></a>
<a id="trace-8713"></a>
<a id="trace-8715"></a>
<a id="trace-8734"></a>
<a id="trace-8736"></a>
<a id="trace-8744"></a>
<a id="trace-8746"></a>
<a id="trace-8764"></a>
<a id="trace-8766"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8794"></a>
<a id="trace-8796"></a>
<a id="trace-8804"></a>
<a id="trace-8806"></a>
<a id="trace-8878"></a>
<a id="trace-8880"></a>
<a id="trace-8886"></a>
<a id="trace-8888"></a>
<a id="trace-8900"></a>
<a id="trace-8902"></a>
<a id="trace-8915"></a>
<a id="trace-8917"></a>
<a id="trace-8930"></a>
<a id="trace-8932"></a>
<a id="trace-8941"></a>
<a id="trace-8943"></a>
<a id="trace-8958"></a>
<a id="trace-8960"></a>
<a id="trace-8975"></a>
<a id="trace-8977"></a>
<a id="trace-8988"></a>
<a id="trace-8990"></a>
<a id="trace-9001"></a>
<a id="trace-9003"></a>
<a id="trace-9080"></a>
<a id="trace-9082"></a>
<a id="trace-9091"></a>
<a id="trace-9093"></a>
<a id="trace-9104"></a>
<a id="trace-9106"></a>
<a id="trace-9115"></a>
<a id="trace-9117"></a>
<a id="trace-9128"></a>
<a id="trace-9130"></a>
<a id="trace-9139"></a>
<a id="trace-9141"></a>
<a id="trace-9153"></a>
<a id="trace-9155"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9179"></a>
<a id="trace-9181"></a>
<a id="trace-9193"></a>
<a id="trace-9195"></a>
<a id="trace-9266"></a>
<a id="trace-9268"></a>
<a id="trace-9279"></a>
<a id="trace-9281"></a>
<a id="trace-9292"></a>
<a id="trace-9294"></a>
<a id="trace-9306"></a>
<a id="trace-9308"></a>
<a id="trace-9325"></a>
<a id="trace-9327"></a>
<a id="trace-9336"></a>
<a id="trace-9338"></a>
<a id="trace-9350"></a>
<a id="trace-9352"></a>
<a id="trace-9358"></a>
<a id="trace-9360"></a>
<a id="trace-9371"></a>
<a id="trace-9373"></a>
<a id="trace-9382"></a>
<a id="trace-9384"></a>
<a id="trace-9455"></a>
<a id="trace-9457"></a>
<a id="trace-9466"></a>
<a id="trace-9468"></a>
<a id="trace-9480"></a>
<a id="trace-9482"></a>
<a id="trace-9490"></a>
<a id="trace-9492"></a>
<a id="trace-9507"></a>
<a id="trace-9509"></a>
<a id="trace-9516"></a>
<a id="trace-9518"></a>
<a id="trace-9530"></a>
<a id="trace-9532"></a>
<a id="trace-9542"></a>
<a id="trace-9544"></a>
<a id="trace-9561"></a>
<a id="trace-9563"></a>
<a id="trace-9577"></a>
<a id="trace-9579"></a>
<a id="trace-9648"></a>
<a id="trace-9650"></a>
<a id="trace-9654"></a>
<a id="trace-9656"></a>
<a id="trace-9665"></a>
<a id="trace-9667"></a>
<a id="trace-9675"></a>
<a id="trace-9677"></a>
<a id="trace-9691"></a>
<a id="trace-9693"></a>
<a id="trace-9701"></a>
<a id="trace-9703"></a>
<a id="trace-9718"></a>
<a id="trace-9720"></a>
<a id="trace-9733"></a>
<a id="trace-9735"></a>
<a id="trace-9746"></a>
<a id="trace-9748"></a>
<a id="trace-9757"></a>
<a id="trace-9759"></a>
<a id="trace-9830"></a>
<a id="trace-9832"></a>
<a id="trace-9841"></a>
<a id="trace-9843"></a>
<a id="trace-9864"></a>
<a id="trace-9866"></a>
<a id="trace-9874"></a>
<a id="trace-9876"></a>
<a id="trace-9887"></a>
<a id="trace-9889"></a>
<a id="trace-9897"></a>
<a id="trace-9899"></a>
<a id="trace-9911"></a>
<a id="trace-9913"></a>
<a id="trace-9924"></a>
<a id="trace-9926"></a>
<a id="trace-9938"></a>
<a id="trace-9940"></a>
<a id="trace-9952"></a>
<a id="trace-9954"></a>
<a id="trace-10029"></a>
<a id="trace-10031"></a>
<a id="trace-10037"></a>
<a id="trace-10039"></a>
<a id="trace-10054"></a>
<a id="trace-10056"></a>
<a id="trace-10064"></a>
<a id="trace-10066"></a>
<a id="trace-10077"></a>
<a id="trace-10079"></a>
<a id="trace-10090"></a>
<a id="trace-10092"></a>
<a id="trace-10107"></a>
<a id="trace-10109"></a>
<a id="trace-10121"></a>
<a id="trace-10123"></a>
<a id="trace-10134"></a>
<a id="trace-10136"></a>
<a id="trace-10147"></a>
<a id="trace-10149"></a>
<a id="trace-10222"></a>
<a id="trace-10224"></a>
<a id="trace-10231"></a>
<a id="trace-10233"></a>
<a id="trace-10249"></a>
<a id="trace-10251"></a>
<a id="trace-10261"></a>
<a id="trace-10263"></a>
<a id="trace-10274"></a>
<a id="trace-10276"></a>
<a id="trace-10284"></a>
<a id="trace-10286"></a>
<a id="trace-10297"></a>
<a id="trace-10299"></a>
<a id="trace-10310"></a>
<a id="trace-10312"></a>
<a id="trace-10323"></a>
<a id="trace-10325"></a>
<a id="trace-10334"></a>
<a id="trace-10336"></a>
<a id="trace-10416"></a>
<a id="trace-10418"></a>
<a id="trace-10425"></a>
<a id="trace-10427"></a>
<a id="trace-10438"></a>
<a id="trace-10440"></a>
<a id="trace-10462"></a>
<a id="trace-10464"></a>
- 100.75s–147.30s (×186), actor 5, squad 0 (trace 8682): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 8679. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8697}.
<a id="trace-1084"></a>
- 105.35s–105.35s (×1), actor 5, squad 1 (events line 1084): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 106.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8912}.
<a id="trace-8883"></a>
- 105.35s–105.35s (×1), actor 5, squad 1 (trace 8883): renew committed intent (75 s lifetime). Knowledge: actor memory at 105.35s, trace 8883. Next observer evidence: {'until': 106.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8912}.
<a id="trace-8912"></a>
- 106.55s–106.55s (×1), actor 9, squad 1 (trace 8912): MoveTactically. Knowledge: actor memory at 105.00s, trace 8818. Next observer evidence: {'until': 136.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1203}.
<a id="trace-8913"></a>
- 106.55s–106.55s (×1), actor 9, squad 1 (trace 8913): received platoon directive. Knowledge: actor memory at 105.00s, trace 8818. Next observer evidence: {'until': 136.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1203}.
<a id="trace-1202"></a>
- 147.35s–147.35s (×1), actor 5, squad 0 (events line 1202): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1203"></a>
- 147.35s–147.35s (×1), actor 5, squad 1 (events line 1203): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10469"></a>
- 147.35s–147.35s (×1), actor 5, squad 0 (trace 10469): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.417325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.35s, trace 10469. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10482}.
<a id="trace-10470"></a>
- 147.35s–147.35s (×1), actor 5, squad 0 (trace 10470): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.417325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.35s, trace 10470. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10482}.
<a id="trace-10471"></a>
- 147.35s–147.35s (×1), actor 5, squad 1 (trace 10471): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.417325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.35s, trace 10471. Next observer evidence: {'until': 148.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10507}.
<a id="trace-10472"></a>
- 147.35s–147.35s (×1), actor 5, squad 1 (trace 10472): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=5.417325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 147.35s, trace 10472. Next observer evidence: {'until': 148.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10507}.
<a id="trace-10482"></a>
<a id="trace-10484"></a>
<a id="trace-10499"></a>
<a id="trace-10501"></a>
<a id="trace-10510"></a>
<a id="trace-10512"></a>
<a id="trace-10523"></a>
<a id="trace-10525"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10607"></a>
<a id="trace-10609"></a>
<a id="trace-10618"></a>
<a id="trace-10620"></a>
<a id="trace-10632"></a>
<a id="trace-10634"></a>
<a id="trace-10643"></a>
<a id="trace-10645"></a>
<a id="trace-10665"></a>
<a id="trace-10667"></a>
<a id="trace-10674"></a>
<a id="trace-10676"></a>
<a id="trace-10689"></a>
<a id="trace-10691"></a>
<a id="trace-10698"></a>
<a id="trace-10700"></a>
<a id="trace-10715"></a>
<a id="trace-10717"></a>
- 147.80s–154.30s (×28), actor 5, squad 0 (trace 10482): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 147.35s, trace 10472. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10499}.
<a id="trace-10507"></a>
- 148.55s–148.55s (×1), actor 9, squad 1 (trace 10507): received platoon directive. Knowledge: actor memory at 145.00s, trace 10348. Next observer evidence: {'until': 154.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1231}.
<a id="trace-1230"></a>
- 154.55s–154.55s (×1), actor 5, squad 0 (events line 1230): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10732}.
<a id="trace-1231"></a>
- 154.55s–154.55s (×1), actor 5, squad 1 (events line 1231): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 155.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10816}.
<a id="trace-10722"></a>
- 154.55s–154.55s (×1), actor 5, squad 0 (trace 10722): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.55s, trace 10722. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10732}.
<a id="trace-10723"></a>
- 154.55s–154.55s (×1), actor 5, squad 0 (trace 10723): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.55s, trace 10723. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10732}.
<a id="trace-10724"></a>
- 154.55s–154.55s (×1), actor 5, squad 1 (trace 10724): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.55s, trace 10724. Next observer evidence: {'until': 155.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10816}.
<a id="trace-10725"></a>
- 154.55s–154.55s (×1), actor 5, squad 1 (trace 10725): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.55s, trace 10725. Next observer evidence: {'until': 155.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10816}.
<a id="trace-10732"></a>
<a id="trace-10734"></a>
<a id="trace-10807"></a>
<a id="trace-10809"></a>
<a id="trace-10819"></a>
<a id="trace-10821"></a>
<a id="trace-10831"></a>
<a id="trace-10833"></a>
<a id="trace-10841"></a>
<a id="trace-10843"></a>
<a id="trace-10857"></a>
<a id="trace-10859"></a>
<a id="trace-10867"></a>
<a id="trace-10869"></a>
<a id="trace-10880"></a>
<a id="trace-10882"></a>
<a id="trace-10893"></a>
<a id="trace-10895"></a>
<a id="trace-10913"></a>
<a id="trace-10915"></a>
<a id="trace-10924"></a>
<a id="trace-10926"></a>
<a id="trace-10998"></a>
<a id="trace-11000"></a>
<a id="trace-11007"></a>
<a id="trace-11009"></a>
<a id="trace-11025"></a>
<a id="trace-11027"></a>
<a id="trace-11037"></a>
<a id="trace-11039"></a>
<a id="trace-11050"></a>
<a id="trace-11052"></a>
<a id="trace-11058"></a>
<a id="trace-11060"></a>
<a id="trace-11069"></a>
<a id="trace-11071"></a>
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11092"></a>
<a id="trace-11094"></a>
<a id="trace-11105"></a>
<a id="trace-11107"></a>
<a id="trace-11178"></a>
<a id="trace-11180"></a>
<a id="trace-11187"></a>
<a id="trace-11189"></a>
- 154.80s–165.80s (×46), actor 5, squad 0 (trace 10732): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 154.55s, trace 10725. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10807}.
<a id="trace-10816"></a>
- 155.75s–155.75s (×1), actor 9, squad 1 (trace 10816): traveling overwatch. Knowledge: actor memory at 155.00s, trace 10748. Next observer evidence: {'until': 185.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1405}.
<a id="trace-10817"></a>
- 155.75s–155.75s (×1), actor 9, squad 1 (trace 10817): received platoon directive. Knowledge: actor memory at 155.00s, trace 10748. Next observer evidence: {'until': 185.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1405}.
<a id="trace-11193"></a>
- 166.05s–166.05s (×1), actor 1, squad 0 (trace 11193): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 165.00s, trace 11112. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11210}.
<a id="trace-11210"></a>
<a id="trace-11212"></a>
<a id="trace-11225"></a>
<a id="trace-11227"></a>
<a id="trace-11237"></a>
<a id="trace-11239"></a>
<a id="trace-11251"></a>
<a id="trace-11253"></a>
<a id="trace-11268"></a>
<a id="trace-11270"></a>
<a id="trace-11278"></a>
<a id="trace-11280"></a>
<a id="trace-11289"></a>
<a id="trace-11291"></a>
<a id="trace-11299"></a>
<a id="trace-11301"></a>
<a id="trace-11372"></a>
<a id="trace-11374"></a>
<a id="trace-11381"></a>
<a id="trace-11383"></a>
<a id="trace-11393"></a>
<a id="trace-11395"></a>
<a id="trace-11408"></a>
<a id="trace-11410"></a>
<a id="trace-11421"></a>
<a id="trace-11423"></a>
<a id="trace-11433"></a>
<a id="trace-11435"></a>
<a id="trace-11457"></a>
<a id="trace-11459"></a>
<a id="trace-11468"></a>
<a id="trace-11470"></a>
<a id="trace-11485"></a>
<a id="trace-11487"></a>
<a id="trace-11499"></a>
<a id="trace-11501"></a>
<a id="trace-11572"></a>
<a id="trace-11574"></a>
<a id="trace-11580"></a>
<a id="trace-11582"></a>
<a id="trace-11594"></a>
<a id="trace-11596"></a>
<a id="trace-11605"></a>
<a id="trace-11607"></a>
<a id="trace-11618"></a>
<a id="trace-11620"></a>
<a id="trace-11628"></a>
<a id="trace-11630"></a>
<a id="trace-11642"></a>
<a id="trace-11644"></a>
<a id="trace-11652"></a>
<a id="trace-11654"></a>
<a id="trace-11666"></a>
<a id="trace-11668"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11759"></a>
<a id="trace-11761"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11792"></a>
<a id="trace-11794"></a>
<a id="trace-11803"></a>
<a id="trace-11805"></a>
<a id="trace-11816"></a>
<a id="trace-11818"></a>
<a id="trace-11826"></a>
<a id="trace-11828"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11849"></a>
<a id="trace-11851"></a>
<a id="trace-11862"></a>
<a id="trace-11864"></a>
<a id="trace-11872"></a>
<a id="trace-11874"></a>
<a id="trace-11945"></a>
<a id="trace-11947"></a>
<a id="trace-11955"></a>
<a id="trace-11957"></a>
<a id="trace-11969"></a>
<a id="trace-11971"></a>
<a id="trace-11981"></a>
<a id="trace-11983"></a>
<a id="trace-12007"></a>
<a id="trace-12009"></a>
<a id="trace-12020"></a>
<a id="trace-12022"></a>
<a id="trace-12037"></a>
<a id="trace-12039"></a>
<a id="trace-12047"></a>
<a id="trace-12049"></a>
<a id="trace-12058"></a>
<a id="trace-12060"></a>
<a id="trace-12068"></a>
<a id="trace-12070"></a>
<a id="trace-12141"></a>
<a id="trace-12143"></a>
<a id="trace-12149"></a>
<a id="trace-12151"></a>
<a id="trace-12161"></a>
<a id="trace-12163"></a>
<a id="trace-12171"></a>
<a id="trace-12173"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12197"></a>
<a id="trace-12199"></a>
<a id="trace-12211"></a>
<a id="trace-12213"></a>
<a id="trace-12224"></a>
<a id="trace-12226"></a>
<a id="trace-12248"></a>
<a id="trace-12250"></a>
<a id="trace-12262"></a>
<a id="trace-12264"></a>
<a id="trace-12335"></a>
<a id="trace-12337"></a>
<a id="trace-12341"></a>
<a id="trace-12343"></a>
<a id="trace-12355"></a>
<a id="trace-12357"></a>
<a id="trace-12363"></a>
<a id="trace-12365"></a>
<a id="trace-12374"></a>
<a id="trace-12376"></a>
<a id="trace-12385"></a>
<a id="trace-12387"></a>
<a id="trace-12396"></a>
<a id="trace-12398"></a>
<a id="trace-12406"></a>
<a id="trace-12408"></a>
<a id="trace-12423"></a>
<a id="trace-12425"></a>
<a id="trace-12435"></a>
<a id="trace-12437"></a>
<a id="trace-12509"></a>
<a id="trace-12511"></a>
<a id="trace-12524"></a>
<a id="trace-12526"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12559"></a>
<a id="trace-12561"></a>
<a id="trace-12572"></a>
<a id="trace-12574"></a>
<a id="trace-12583"></a>
<a id="trace-12585"></a>
<a id="trace-12594"></a>
<a id="trace-12596"></a>
<a id="trace-12604"></a>
<a id="trace-12606"></a>
<a id="trace-12617"></a>
<a id="trace-12619"></a>
<a id="trace-12625"></a>
<a id="trace-12627"></a>
<a id="trace-12696"></a>
<a id="trace-12698"></a>
<a id="trace-12703"></a>
<a id="trace-12705"></a>
<a id="trace-12719"></a>
<a id="trace-12721"></a>
<a id="trace-12733"></a>
<a id="trace-12735"></a>
<a id="trace-12750"></a>
<a id="trace-12752"></a>
<a id="trace-12762"></a>
<a id="trace-12764"></a>
<a id="trace-12784"></a>
<a id="trace-12786"></a>
<a id="trace-12798"></a>
<a id="trace-12800"></a>
<a id="trace-12811"></a>
<a id="trace-12813"></a>
<a id="trace-12821"></a>
<a id="trace-12823"></a>
<a id="trace-12894"></a>
<a id="trace-12896"></a>
<a id="trace-12902"></a>
<a id="trace-12904"></a>
<a id="trace-12914"></a>
<a id="trace-12916"></a>
<a id="trace-12924"></a>
<a id="trace-12926"></a>
<a id="trace-12938"></a>
<a id="trace-12940"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-12964"></a>
<a id="trace-12966"></a>
<a id="trace-12982"></a>
<a id="trace-12984"></a>
<a id="trace-12999"></a>
<a id="trace-13001"></a>
- 166.30s–214.30s (×194), actor 5, squad 0 (trace 11210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 11116. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11225}.
<a id="trace-1404"></a>
- 214.55s–214.55s (×1), actor 5, squad 0 (events line 1404): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13016}.
<a id="trace-1405"></a>
- 214.55s–214.55s (×1), actor 5, squad 1 (events line 1405): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 244.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1578}.
<a id="trace-13009"></a>
- 214.55s–214.55s (×1), actor 5, squad 0 (trace 13009): renew committed intent (75 s lifetime). Knowledge: actor memory at 214.55s, trace 13009. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13016}.
<a id="trace-13010"></a>
- 214.55s–214.55s (×1), actor 5, squad 1 (trace 13010): renew committed intent (75 s lifetime). Knowledge: actor memory at 214.55s, trace 13010. Next observer evidence: {'until': 244.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1578}.
<a id="trace-13016"></a>
<a id="trace-13018"></a>
<a id="trace-13098"></a>
<a id="trace-13100"></a>
<a id="trace-13106"></a>
<a id="trace-13108"></a>
<a id="trace-13120"></a>
<a id="trace-13122"></a>
<a id="trace-13130"></a>
<a id="trace-13132"></a>
<a id="trace-13143"></a>
<a id="trace-13145"></a>
<a id="trace-13153"></a>
<a id="trace-13155"></a>
<a id="trace-13166"></a>
<a id="trace-13168"></a>
<a id="trace-13178"></a>
<a id="trace-13180"></a>
<a id="trace-13193"></a>
<a id="trace-13195"></a>
<a id="trace-13204"></a>
<a id="trace-13206"></a>
<a id="trace-13282"></a>
<a id="trace-13284"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13308"></a>
<a id="trace-13310"></a>
<a id="trace-13319"></a>
<a id="trace-13321"></a>
<a id="trace-13338"></a>
<a id="trace-13340"></a>
<a id="trace-13351"></a>
<a id="trace-13353"></a>
<a id="trace-13364"></a>
<a id="trace-13366"></a>
<a id="trace-13374"></a>
<a id="trace-13376"></a>
<a id="trace-13387"></a>
<a id="trace-13389"></a>
<a id="trace-13398"></a>
<a id="trace-13400"></a>
<a id="trace-13472"></a>
<a id="trace-13474"></a>
<a id="trace-13480"></a>
<a id="trace-13482"></a>
<a id="trace-13495"></a>
<a id="trace-13497"></a>
<a id="trace-13505"></a>
<a id="trace-13507"></a>
<a id="trace-13522"></a>
<a id="trace-13524"></a>
<a id="trace-13539"></a>
<a id="trace-13541"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13560"></a>
<a id="trace-13562"></a>
<a id="trace-13580"></a>
<a id="trace-13582"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13665"></a>
<a id="trace-13667"></a>
<a id="trace-13673"></a>
<a id="trace-13675"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13697"></a>
<a id="trace-13699"></a>
<a id="trace-13711"></a>
<a id="trace-13713"></a>
<a id="trace-13723"></a>
<a id="trace-13725"></a>
<a id="trace-13737"></a>
<a id="trace-13739"></a>
<a id="trace-13751"></a>
<a id="trace-13753"></a>
<a id="trace-13768"></a>
<a id="trace-13770"></a>
<a id="trace-13782"></a>
<a id="trace-13784"></a>
<a id="trace-13855"></a>
<a id="trace-13857"></a>
<a id="trace-13885"></a>
<a id="trace-13887"></a>
<a id="trace-13895"></a>
<a id="trace-13897"></a>
<a id="trace-13908"></a>
<a id="trace-13910"></a>
<a id="trace-13918"></a>
<a id="trace-13920"></a>
<a id="trace-13931"></a>
<a id="trace-13933"></a>
<a id="trace-13942"></a>
<a id="trace-13944"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13968"></a>
<a id="trace-13970"></a>
<a id="trace-14045"></a>
<a id="trace-14047"></a>
<a id="trace-14058"></a>
<a id="trace-14060"></a>
<a id="trace-14075"></a>
<a id="trace-14077"></a>
<a id="trace-14085"></a>
<a id="trace-14087"></a>
<a id="trace-14098"></a>
<a id="trace-14100"></a>
<a id="trace-14109"></a>
<a id="trace-14111"></a>
<a id="trace-14128"></a>
<a id="trace-14130"></a>
<a id="trace-14141"></a>
<a id="trace-14143"></a>
<a id="trace-14154"></a>
<a id="trace-14156"></a>
<a id="trace-14164"></a>
<a id="trace-14166"></a>
<a id="trace-14238"></a>
<a id="trace-14240"></a>
<a id="trace-14247"></a>
<a id="trace-14249"></a>
<a id="trace-14262"></a>
<a id="trace-14264"></a>
<a id="trace-14276"></a>
<a id="trace-14278"></a>
<a id="trace-14293"></a>
<a id="trace-14295"></a>
<a id="trace-14303"></a>
<a id="trace-14305"></a>
<a id="trace-14316"></a>
<a id="trace-14318"></a>
<a id="trace-14329"></a>
<a id="trace-14331"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14352"></a>
<a id="trace-14354"></a>
<a id="trace-14434"></a>
<a id="trace-14436"></a>
<a id="trace-14446"></a>
<a id="trace-14448"></a>
<a id="trace-14460"></a>
<a id="trace-14462"></a>
<a id="trace-14473"></a>
<a id="trace-14475"></a>
<a id="trace-14488"></a>
<a id="trace-14490"></a>
<a id="trace-14497"></a>
<a id="trace-14499"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14539"></a>
<a id="trace-14541"></a>
<a id="trace-14549"></a>
<a id="trace-14551"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14633"></a>
<a id="trace-14635"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14659"></a>
<a id="trace-14661"></a>
<a id="trace-14681"></a>
<a id="trace-14683"></a>
<a id="trace-14691"></a>
<a id="trace-14693"></a>
<a id="trace-14703"></a>
<a id="trace-14705"></a>
<a id="trace-14713"></a>
<a id="trace-14715"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14816"></a>
<a id="trace-14818"></a>
<a id="trace-14828"></a>
<a id="trace-14830"></a>
<a id="trace-14840"></a>
<a id="trace-14842"></a>
<a id="trace-14851"></a>
<a id="trace-14853"></a>
<a id="trace-14867"></a>
<a id="trace-14869"></a>
<a id="trace-14877"></a>
<a id="trace-14879"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
<a id="trace-14903"></a>
<a id="trace-14905"></a>
<a id="trace-14922"></a>
<a id="trace-14924"></a>
<a id="trace-14933"></a>
<a id="trace-14935"></a>
<a id="trace-15007"></a>
<a id="trace-15009"></a>
<a id="trace-15017"></a>
<a id="trace-15019"></a>
<a id="trace-15030"></a>
<a id="trace-15032"></a>
<a id="trace-15045"></a>
<a id="trace-15047"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15074"></a>
<a id="trace-15076"></a>
<a id="trace-15085"></a>
<a id="trace-15087"></a>
<a id="trace-15095"></a>
<a id="trace-15097"></a>
<a id="trace-15108"></a>
<a id="trace-15110"></a>
<a id="trace-15119"></a>
<a id="trace-15121"></a>
<a id="trace-15190"></a>
<a id="trace-15192"></a>
<a id="trace-15196"></a>
<a id="trace-15198"></a>
<a id="trace-15219"></a>
<a id="trace-15221"></a>
<a id="trace-15231"></a>
<a id="trace-15233"></a>
<a id="trace-15246"></a>
<a id="trace-15248"></a>
<a id="trace-15258"></a>
<a id="trace-15260"></a>
<a id="trace-15275"></a>
<a id="trace-15277"></a>
<a id="trace-15287"></a>
<a id="trace-15289"></a>
<a id="trace-15300"></a>
<a id="trace-15302"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
- 214.80s–274.80s (×240), actor 5, squad 0 (trace 13016): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 214.55s, trace 13010. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13098}.
<a id="trace-1577"></a>
- 275.30s–275.30s (×1), actor 5, squad 0 (events line 1577): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1578"></a>
- 275.30s–275.30s (×1), actor 5, squad 1 (events line 1578): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15381"></a>
<a id="trace-15383"></a>
- 275.30s–275.30s (×2), actor 5, squad 0 (trace 15381): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 15319. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15391}.
<a id="trace-15386"></a>
- 275.30s–275.30s (×1), actor 5, squad 0 (trace 15386): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.30s, trace 15386. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15391}.
<a id="trace-15387"></a>
- 275.30s–275.30s (×1), actor 5, squad 1 (trace 15387): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.30s, trace 15387. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1754}.
<a id="trace-15391"></a>
<a id="trace-15393"></a>
<a id="trace-15403"></a>
<a id="trace-15405"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15443"></a>
<a id="trace-15445"></a>
<a id="trace-15466"></a>
<a id="trace-15468"></a>
<a id="trace-15478"></a>
<a id="trace-15480"></a>
<a id="trace-15492"></a>
<a id="trace-15494"></a>
<a id="trace-15504"></a>
<a id="trace-15506"></a>
<a id="trace-15579"></a>
<a id="trace-15581"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15601"></a>
<a id="trace-15603"></a>
<a id="trace-15611"></a>
<a id="trace-15613"></a>
<a id="trace-15622"></a>
<a id="trace-15624"></a>
<a id="trace-15633"></a>
<a id="trace-15635"></a>
<a id="trace-15649"></a>
<a id="trace-15651"></a>
<a id="trace-15659"></a>
<a id="trace-15661"></a>
<a id="trace-15672"></a>
<a id="trace-15674"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
<a id="trace-15777"></a>
<a id="trace-15779"></a>
<a id="trace-15795"></a>
<a id="trace-15797"></a>
<a id="trace-15805"></a>
<a id="trace-15807"></a>
<a id="trace-15822"></a>
<a id="trace-15824"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15843"></a>
<a id="trace-15845"></a>
<a id="trace-15854"></a>
<a id="trace-15856"></a>
<a id="trace-15867"></a>
<a id="trace-15869"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-15948"></a>
<a id="trace-15950"></a>
<a id="trace-15959"></a>
<a id="trace-15961"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15984"></a>
<a id="trace-15986"></a>
<a id="trace-16009"></a>
<a id="trace-16011"></a>
<a id="trace-16020"></a>
<a id="trace-16022"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16065"></a>
<a id="trace-16067"></a>
<a id="trace-16075"></a>
<a id="trace-16077"></a>
<a id="trace-16148"></a>
<a id="trace-16150"></a>
<a id="trace-16156"></a>
<a id="trace-16158"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16180"></a>
<a id="trace-16182"></a>
<a id="trace-16193"></a>
<a id="trace-16195"></a>
<a id="trace-16206"></a>
<a id="trace-16208"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16236"></a>
<a id="trace-16238"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16275"></a>
<a id="trace-16277"></a>
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16360"></a>
<a id="trace-16362"></a>
<a id="trace-16374"></a>
<a id="trace-16376"></a>
<a id="trace-16384"></a>
<a id="trace-16386"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16407"></a>
<a id="trace-16409"></a>
<a id="trace-16420"></a>
<a id="trace-16422"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16444"></a>
<a id="trace-16446"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16529"></a>
<a id="trace-16531"></a>
<a id="trace-16539"></a>
<a id="trace-16541"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16580"></a>
<a id="trace-16582"></a>
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16601"></a>
<a id="trace-16603"></a>
<a id="trace-16614"></a>
<a id="trace-16616"></a>
<a id="trace-16624"></a>
<a id="trace-16626"></a>
<a id="trace-16635"></a>
<a id="trace-16637"></a>
<a id="trace-16646"></a>
<a id="trace-16648"></a>
<a id="trace-16719"></a>
<a id="trace-16721"></a>
<a id="trace-16725"></a>
<a id="trace-16727"></a>
<a id="trace-16738"></a>
<a id="trace-16740"></a>
<a id="trace-16753"></a>
<a id="trace-16755"></a>
<a id="trace-16765"></a>
<a id="trace-16767"></a>
<a id="trace-16779"></a>
<a id="trace-16781"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16831"></a>
<a id="trace-16833"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-16913"></a>
<a id="trace-16915"></a>
<a id="trace-16923"></a>
<a id="trace-16925"></a>
<a id="trace-16937"></a>
<a id="trace-16939"></a>
<a id="trace-16947"></a>
<a id="trace-16949"></a>
<a id="trace-16958"></a>
<a id="trace-16960"></a>
<a id="trace-16969"></a>
<a id="trace-16971"></a>
<a id="trace-16984"></a>
<a id="trace-16986"></a>
<a id="trace-16998"></a>
<a id="trace-17000"></a>
<a id="trace-17015"></a>
<a id="trace-17017"></a>
<a id="trace-17026"></a>
<a id="trace-17028"></a>
<a id="trace-17112"></a>
<a id="trace-17114"></a>
<a id="trace-17121"></a>
<a id="trace-17123"></a>
<a id="trace-17135"></a>
<a id="trace-17137"></a>
<a id="trace-17145"></a>
<a id="trace-17147"></a>
<a id="trace-17156"></a>
<a id="trace-17158"></a>
<a id="trace-17164"></a>
<a id="trace-17166"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17187"></a>
<a id="trace-17189"></a>
<a id="trace-17201"></a>
<a id="trace-17203"></a>
<a id="trace-17209"></a>
<a id="trace-17211"></a>
<a id="trace-17288"></a>
<a id="trace-17290"></a>
<a id="trace-17297"></a>
<a id="trace-17299"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17371"></a>
<a id="trace-17373"></a>
<a id="trace-17381"></a>
<a id="trace-17383"></a>
<a id="trace-17394"></a>
<a id="trace-17396"></a>
<a id="trace-17404"></a>
<a id="trace-17406"></a>
<a id="trace-17477"></a>
<a id="trace-17479"></a>
<a id="trace-17484"></a>
<a id="trace-17486"></a>
<a id="trace-17499"></a>
<a id="trace-17501"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17527"></a>
<a id="trace-17529"></a>
<a id="trace-17544"></a>
<a id="trace-17546"></a>
<a id="trace-17561"></a>
<a id="trace-17563"></a>
<a id="trace-17571"></a>
<a id="trace-17573"></a>
<a id="trace-17591"></a>
<a id="trace-17593"></a>
<a id="trace-17604"></a>
<a id="trace-17606"></a>
- 275.80s–334.80s (×238), actor 5, squad 0 (trace 15391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.30s, trace 15387. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15403}.
<a id="trace-1753"></a>
- 335.30s–335.30s (×1), actor 5, squad 0 (events line 1753): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1754"></a>
- 335.30s–335.30s (×1), actor 5, squad 1 (events line 1754): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17677"></a>
<a id="trace-17679"></a>
- 335.30s–335.30s (×2), actor 5, squad 0 (trace 17677): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 17615. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17687}.
<a id="trace-17682"></a>
- 335.30s–335.30s (×1), actor 5, squad 0 (trace 17682): renew committed intent (75 s lifetime). Knowledge: actor memory at 335.30s, trace 17682. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17687}.
<a id="trace-17683"></a>
- 335.30s–335.30s (×1), actor 5, squad 1 (trace 17683): renew committed intent (75 s lifetime). Knowledge: actor memory at 335.30s, trace 17683. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-17687"></a>
<a id="trace-17689"></a>
<a id="trace-17699"></a>
<a id="trace-17701"></a>
<a id="trace-17710"></a>
<a id="trace-17712"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17749"></a>
<a id="trace-17751"></a>
<a id="trace-17760"></a>
<a id="trace-17762"></a>
<a id="trace-17777"></a>
<a id="trace-17779"></a>
<a id="trace-17794"></a>
<a id="trace-17796"></a>
<a id="trace-17865"></a>
<a id="trace-17867"></a>
<a id="trace-17876"></a>
<a id="trace-17878"></a>
<a id="trace-17899"></a>
<a id="trace-17901"></a>
<a id="trace-17910"></a>
<a id="trace-17912"></a>
<a id="trace-17921"></a>
<a id="trace-17923"></a>
<a id="trace-17929"></a>
<a id="trace-17931"></a>
<a id="trace-17942"></a>
<a id="trace-17944"></a>
<a id="trace-17952"></a>
<a id="trace-17954"></a>
<a id="trace-17966"></a>
<a id="trace-17968"></a>
<a id="trace-17978"></a>
<a id="trace-17980"></a>
<a id="trace-18052"></a>
<a id="trace-18054"></a>
<a id="trace-18064"></a>
<a id="trace-18066"></a>
<a id="trace-18085"></a>
<a id="trace-18087"></a>
<a id="trace-18096"></a>
<a id="trace-18098"></a>
<a id="trace-18109"></a>
<a id="trace-18111"></a>
<a id="trace-18122"></a>
<a id="trace-18124"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18152"></a>
<a id="trace-18154"></a>
<a id="trace-18165"></a>
<a id="trace-18167"></a>
<a id="trace-18173"></a>
<a id="trace-18175"></a>
<a id="trace-18246"></a>
<a id="trace-18248"></a>
<a id="trace-18255"></a>
<a id="trace-18257"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18282"></a>
<a id="trace-18284"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18310"></a>
<a id="trace-18312"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18340"></a>
<a id="trace-18342"></a>
<a id="trace-18353"></a>
<a id="trace-18355"></a>
<a id="trace-18363"></a>
<a id="trace-18365"></a>
<a id="trace-18445"></a>
<a id="trace-18447"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18470"></a>
<a id="trace-18472"></a>
<a id="trace-18480"></a>
<a id="trace-18482"></a>
<a id="trace-18492"></a>
<a id="trace-18494"></a>
<a id="trace-18503"></a>
<a id="trace-18505"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18529"></a>
<a id="trace-18531"></a>
<a id="trace-18546"></a>
<a id="trace-18548"></a>
<a id="trace-18560"></a>
<a id="trace-18562"></a>
- 335.80s–359.80s (×98), actor 5, squad 0 (trace 17687): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.30s, trace 17683. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17699}.

## Net delivery

116 matched order/radio deliveries; 489 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.508s; maximum 1.750s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2761: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2762: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2763: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2764: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3470: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3475: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3476: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3478: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3480: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3481: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3482: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3483: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3485: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3486: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3487: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3488: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3489: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4222: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4227: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4228: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4230: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4232: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4233: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4234: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4235: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4237: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4238: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4239: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4240: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4241: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4708: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4713: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4714: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4716: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4718: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4719: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4720: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4721: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4723: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4724: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4725: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4726: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4727: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 4948: estimate 11.25; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 4949: estimate 11.25; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5010: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5015: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5016: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5018: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5020: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5021: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5022: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5023: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5024: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5025: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5026: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5027: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5028: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5029: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5244: estimate 11.93; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 5245: estimate 11.93; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5273: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5274: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5276: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5278: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5279: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5280: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5281: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5282: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5283: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5284: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5285: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5286: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5287: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 5512: estimate 11.73; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 5513: estimate 11.73; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 5514: estimate 11.73; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 5515: estimate 11.73; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5531: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5535: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5536: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5538: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5540: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5541: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5542: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5543: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5544: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5545: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5546: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5547: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5548: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5549: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6598: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6599: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6600: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6601: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6602: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6603: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6604: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 6605: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6607: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6608: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6609: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6610: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6611: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6612: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6613: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6614: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6615: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6616: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6851: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6852: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6853: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6854: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6855: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6856: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6857: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6859: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6860: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6861: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6862: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6863: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6864: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6865: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6866: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6867: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7056: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7057: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7058: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7059: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7060: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7061: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7062: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 7063: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7064: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7065: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7066: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7067: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7068: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7069: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7070: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7071: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7072: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7256: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7257: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7258: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7259: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7260: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7261: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7262: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7263: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7264: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7265: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7266: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7267: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7268: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7269: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7270: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7271: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7272: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7446: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 7447: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 7448: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7449: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7450: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7451: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7452: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 7453: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7454: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7455: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7456: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7457: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7458: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7459: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7460: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7461: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 7462: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7629: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 7630: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 7631: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7632: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7633: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7634: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7635: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 7636: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7637: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7638: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7639: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7640: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7641: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7642: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7643: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7644: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 7645: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 7824: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 7825: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 7826: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 7827: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 7828: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 7829: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 7830: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 7831: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 7832: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 7833: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 7834: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 7835: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 7836: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 7837: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 7838: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 7839: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 7840: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8025: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 8026: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 8027: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8028: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8029: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8030: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 8031: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 8032: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8033: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 8034: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 8035: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 8036: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 8037: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 8038: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 8039: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 8040: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 8041: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 8228: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 8229: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 8230: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 8231: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 8232: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 8233: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 8234: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 8235: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 8236: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 8237: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 8238: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 8239: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 8240: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 8241: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 8242: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 8243: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 8244: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 8415: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 8416: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 8417: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 8418: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 8419: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 8420: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 8421: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 8422: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 8423: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 8424: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 8425: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 8426: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 8427: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 8428: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 8429: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 8430: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 8431: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 8602: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 8603: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 8604: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 8605: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 8606: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 8607: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 8608: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 8609: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 8610: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 8611: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 8612: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 8613: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 8614: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 8615: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 8616: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 8617: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 8618: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 8678: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 8679: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 8811: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 8812: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 8813: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8814: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8815: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8816: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8817: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 8818: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8819: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8820: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 8821: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 8822: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8823: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8824: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8825: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8826: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 8827: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.35s leader 5, trace 8883: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 9014: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 9015: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 9016: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 9017: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 9018: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 9019: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 9020: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 9021: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 9022: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 9023: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 9024: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 9025: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 9026: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 9027: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 9028: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 9029: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 9030: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 9198: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 9199: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 9200: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9201: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 9202: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 9203: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 9204: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 9205: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9206: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9207: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9208: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9209: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9210: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9211: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9212: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9213: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 9214: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9389: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 9390: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9391: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9392: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9393: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9394: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 9395: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 9396: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9397: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9398: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9399: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9400: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9401: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9402: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9403: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9404: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 9405: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 9582: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 9583: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 9584: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 9585: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 9586: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 9587: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 9588: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 9589: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 9590: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 9591: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 9592: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 9593: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 9594: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 9595: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 9596: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 9597: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 9598: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 9764: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 9765: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 9766: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9767: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 9768: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 9769: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 9770: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 9771: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 9772: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9773: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 9774: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 9775: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9776: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9777: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9778: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9779: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 9780: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 9959: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 9960: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 9961: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9962: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9963: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9964: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9965: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 9966: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9967: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9968: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 9969: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 9970: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9971: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9972: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9973: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9974: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 9975: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 10154: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 10155: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 10156: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 10157: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 10158: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 10159: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 10160: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 10161: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 10162: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 10163: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 10164: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 10165: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 10166: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 10167: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 10168: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 10169: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 10170: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 10341: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 10342: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 10343: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 10344: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10345: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10346: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 10347: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 10348: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 10349: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10350: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 10351: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 10352: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 10353: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 10354: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10355: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10356: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 10357: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.35s leader 5, trace 10469: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.35s leader 5, trace 10470: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.35s leader 5, trace 10471: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.35s leader 5, trace 10472: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 10541: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 10542: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 10543: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 10544: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 10545: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 10546: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 10547: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 10548: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 10549: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 10550: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 10551: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 10552: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 10553: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 10554: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 10555: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 10556: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 10557: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.55s leader 5, trace 10722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.55s leader 5, trace 10723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.55s leader 5, trace 10724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.55s leader 5, trace 10725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 10741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 10742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 10743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 10744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 10745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 10746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 10747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 10748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 10749: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 10750: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 10751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 10752: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 10753: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 10754: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 10755: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 10756: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 10757: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 10931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 10932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 10933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 10934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 10935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 10936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 10937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 10938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 10939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 10941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 10942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 10944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 10947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 11112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 11113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 11114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 11115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 11116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 11117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 11118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 11119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 11120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 11121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 11122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 11123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 11124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 11125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 11126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 11127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 11128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 11306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 11307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 11308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 11309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 11310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 11311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 11312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 11313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 11314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 11315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 11316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 11317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 11318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 11319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 11320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 11321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 11506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 11507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 11508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 11509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 11510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 11511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 11512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 11513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 11514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 11515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 11516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 11517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 11518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 11519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 11520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 11521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 11522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 11686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 11687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 11688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 11689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 11690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 11691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 11692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 11693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 11694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 11695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 11696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 11697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 11698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 11699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 11700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 11701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 11702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 11879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 11880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 11881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 11882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 11883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 11884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 11885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 11886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 11887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 11889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 11890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 11891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 11892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 11893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 11894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 11895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 12075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 12076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 12077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 12078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 12079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 12080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 12081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 12082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 12083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 12084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 12085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 12086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 12087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 12088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 12089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 12090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 12091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 12269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 12270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 12271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 12272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 12273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 12274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 12275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 12276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 12277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 12278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 12279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 12280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 12281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 12282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 12283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 12284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 12285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 12443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 12444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 12445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 12446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 12447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 12448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 12449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 12450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 12451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 12452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 12453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 12454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 12455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 12456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 12457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 12458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 12459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 12630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 12631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 12632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 12633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 12634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 12635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 12636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 12637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 12638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 12639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 12640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 12641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 12642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 12643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 12644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 12645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 12646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 12828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 12829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 12830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 12832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 12833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 12834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 12835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 12836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 12838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 12839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 12840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 12841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 12844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 214.55s leader 5, trace 13009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 214.55s leader 5, trace 13010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 13029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 13030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 13031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 13032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 13033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 13034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 13035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 13036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 13037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 13038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 13039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 13040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 13041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 13042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 13043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 13045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 13209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 13210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 13211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 13212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 13213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 13214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 13215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 13216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 13217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 13218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 13219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 13220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 13221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 13222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 13223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 13224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 13225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 13405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 13406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 13407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 13408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 13409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 13410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 13411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 13412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 13413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 13414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 13415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 13416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 13417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 13418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 13419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 13420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 13421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 13599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 13600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 13601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 13602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 13604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 13605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 13606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 13607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 13608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 13609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 13610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 13611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 13612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 13615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 13789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 13790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 13791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 13792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 13793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 13794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 13795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 13796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 13797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 13798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 13799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 13800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 13801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 13802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 13803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 13804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 13805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 13975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 13976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 13977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 13978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 13979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 13980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 13981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 13982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 13983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 13984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 13985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 13986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 13987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 13988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 13989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 13990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 13991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 14171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 14172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 14173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 14174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 14175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 14176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 14177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 14178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 14180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 14181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 14182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 14183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 14184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 14185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 14186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 14187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 14359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 14360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 14361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 14362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 14363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 14364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 14365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 14366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 14367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 14368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 14369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 14370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 14371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 14372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 14373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 14374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 14375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 14556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 14557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 14558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 14559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 14560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 14561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 14562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 14563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 14564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 14565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 14566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 14567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 14568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 14569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 14570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 14571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 14572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 14750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 14751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 14752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 14753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 14754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 14755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 14756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 14757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 14758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 14759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 14760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 14761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 14762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 14763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 14764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 14765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 14766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 14941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 14942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 14943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 14944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 14945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 14946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 14947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 14948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 14949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 14950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 14951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 14952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 14953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 14954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 14955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 14956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 14957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 15124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 15125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 15126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 15127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 15128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 15129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 15130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 15131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 15132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 15133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 15134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 15135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 15136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 15137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 15138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 15139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 15140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 15315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 15316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 15317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 15318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 15319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 15320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 15321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 15322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 15323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 15324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 15325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 15326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 15327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 15328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 15329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 15330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 15331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.30s leader 5, trace 15386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.30s leader 5, trace 15387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 15509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 15510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 15511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 15512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 15513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 15514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 15515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 15516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 15517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 15518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 15519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 15520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 15521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 15522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 15523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 15524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 15525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 15693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 15694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 15695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 15696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 15697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 15698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 15699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 15700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 15701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 15702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 15703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 15704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 15705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 15706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 15707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 15708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 15709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 15882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 15883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 15884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 15885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 15886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 15887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 15888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 15889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 15890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 15891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 15892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 15893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 15894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 15895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 15896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 15897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 15898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 16082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 16083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 16084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 16085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 16086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 16087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 16088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 16089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 16090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 16091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 16092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 16093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 16094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 16095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 16096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 16097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 16098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 16282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 16283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 16284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 16285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 16286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 16287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 16288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 16289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 16290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 16291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 16292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 16293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 16294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 16295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 16296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 16297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 16298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 16461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 16462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 16463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 16464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 16465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 16466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 16467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 16468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 16469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 16470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 16471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 16472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 16473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 16474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 16475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 16476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 16477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 16653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 16654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 16655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 16656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 16657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 16658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 16659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 16660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 16661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 16662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 16663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 16664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 16665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 16666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 16667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 16668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 16669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 16847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 16848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 16849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 16850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 16851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 16852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 16853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 16854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 16855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 16856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 16857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 16858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 16859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 16860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 16861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 16862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 16863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 17043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 17044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 17045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 17046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 17047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 17048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 17049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 17050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 17051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 17052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 17053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 17054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 17055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 17056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 17057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 17058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 17059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 17218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 17219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 17220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 17221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 17222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 17223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 17224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 17225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 17226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 17227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 17228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 17229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 17230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 17231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 17232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 17233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 17234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 17411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 17412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 17413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 17414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 17415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 17416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 17417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 17418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 17419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 17420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 17421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 17422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 17423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 17424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 17425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 17426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 17427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 17611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 17612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 17613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 17614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 17615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 17616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 17617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 17618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 17619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 17620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 17621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 17622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 17623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 17624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 17625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 17626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 17627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.30s leader 5, trace 17682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.30s leader 5, trace 17683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 17799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 17800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 17801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 17802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 17803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 17804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 17805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 17806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 17807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 17808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 17809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 17810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 17811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 17812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 17813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 17814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 17815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 17986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 17987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 17988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 17990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 17991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 17992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 17993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 17994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 17995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 17996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 17997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 17998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 18000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 18001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 18180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 18181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 18182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 18183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 18184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 18185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 18186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 18187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 18188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 18189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 18190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 18191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 18192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 18193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 18194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 18195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 18196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 18370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 18371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 18372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 18373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 18374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 18375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 18376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 18377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 18378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 18379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 18380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 18381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 18382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 18383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 18384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 18385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 18386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 18565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 18566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 18567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 18568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 18569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 18570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 18571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 18572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 18573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 18574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 18575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 18576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 18577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 18578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 18579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 18580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 18581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bren killed in action
- 1: Renn incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
