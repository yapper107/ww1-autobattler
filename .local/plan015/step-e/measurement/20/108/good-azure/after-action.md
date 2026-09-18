# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/108/good-azure/battle-108-1789674096585870302`

## Battle summary

**Ember** · 360 s · 303 shots.

### Turning points

- 15.7s, squad 4: contact (events line 189). First recorded contact.
- 86.2s, squad 0: assault ([trace 6775](#trace-6775)). 87.2s, squad 0: advanced tactically.
- 121.0s, squad 0: assault ([trace 10204](#trace-10204)). 121.7s, squad 0: advanced tactically.
- 176.3s, squad 1: withdrawal ([trace 12665](#trace-12665)). No completion observed before termination.
- 209.4s, squad 0: withdrawal ([trace 20538](#trace-20538)). 214.1s, squad 0: advanced tactically.
- 214.1s, squad 0: help call ([trace 20910](#trace-20910)). No completion observed before termination.
- 218.7s, squad 0: help call ([trace 21213](#trace-21213)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 48 shots, 8/8 lost.
- **1** — FightHere; chose took cover and returned fire, Withdraw to received rally and 1 further drill types; no completed objective recorded; 19 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 235 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 1 shots, 0/2 lost.

### Decisions and attribution

At 235.2s, squad 1 chose renewed the existing objective ([trace 22092](#trace-22092)), followed by 3 shots and 0 own casualties; estimate 10.9 against 5 distinct squad-reported contacts; At 192.9s, squad 0 chose took cover and returned fire ([trace 15776](#trace-15776)), followed by 1 shots and 0 own casualties; estimate 1.3 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.

### Communication

232 matched deliveries (mean 0.41s, max 2.05s); 495 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.70s, squad 4, contact, evidence events line 189: First recorded contact; .
- 86.20s, squad 0, assault, evidence 6775: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 87.2s, squad 0: advanced tactically.
- 121.05s, squad 0, assault, evidence 10204: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 121.7s, squad 0: advanced tactically.
- 176.30s, squad 1, withdrawal, evidence 12665: Withdraw to received rally; No completion observed before termination.
- 209.40s, squad 0, withdrawal, evidence 20538: BreakContact: believed ratio at least two without superiority; 214.1s, squad 0: advanced tactically.
- 214.05s, squad 0, help call, evidence 20910: NeedSupport; No completion observed before termination.
- 218.70s, squad 0, help call, evidence 21213: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915769090189047, 'next_transition': 579}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528748972136569, 'next_transition': 87}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-638"></a>
<a id="trace-640"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-682"></a>
<a id="trace-684"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599870432284823, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450102490100946, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 826}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-738"></a>
<a id="trace-740"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-938"></a>
<a id="trace-940"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889209396387, 'next_transition': 738}.
<a id="trace-826"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 826): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-868"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 868): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.53907893998546, 'next_transition': 1860}.
<a id="trace-942"></a>
<a id="trace-944"></a>
<a id="trace-1023"></a>
<a id="trace-1025"></a>
<a id="trace-1062"></a>
<a id="trace-1064"></a>
<a id="trace-1110"></a>
<a id="trace-1112"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1182"></a>
<a id="trace-1184"></a>
<a id="trace-1229"></a>
<a id="trace-1231"></a>
<a id="trace-1264"></a>
<a id="trace-1266"></a>
<a id="trace-1385"></a>
<a id="trace-1387"></a>
<a id="trace-1407"></a>
<a id="trace-1409"></a>
<a id="trace-1435"></a>
<a id="trace-1437"></a>
<a id="trace-1458"></a>
<a id="trace-1460"></a>
<a id="trace-1482"></a>
<a id="trace-1484"></a>
<a id="trace-1500"></a>
<a id="trace-1502"></a>
<a id="trace-1521"></a>
<a id="trace-1523"></a>
<a id="trace-1719"></a>
<a id="trace-1721"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1829"></a>
<a id="trace-1831"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-2350"></a>
<a id="trace-2352"></a>
<a id="trace-2437"></a>
<a id="trace-2439"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2512"></a>
<a id="trace-2514"></a>
<a id="trace-2805"></a>
<a id="trace-2807"></a>
<a id="trace-2970"></a>
<a id="trace-2972"></a>
<a id="trace-3088"></a>
<a id="trace-3090"></a>
<a id="trace-3124"></a>
<a id="trace-3126"></a>
<a id="trace-3175"></a>
<a id="trace-3177"></a>
<a id="trace-3201"></a>
<a id="trace-3203"></a>
<a id="trace-3233"></a>
<a id="trace-3235"></a>
<a id="trace-3251"></a>
<a id="trace-3253"></a>
<a id="trace-3390"></a>
<a id="trace-3392"></a>
<a id="trace-3416"></a>
<a id="trace-3418"></a>
<a id="trace-3516"></a>
<a id="trace-3518"></a>
<a id="trace-3538"></a>
<a id="trace-3540"></a>
<a id="trace-3558"></a>
<a id="trace-3560"></a>
<a id="trace-3574"></a>
<a id="trace-3576"></a>
<a id="trace-3594"></a>
<a id="trace-3596"></a>
<a id="trace-3607"></a>
<a id="trace-3609"></a>
<a id="trace-3621"></a>
<a id="trace-3623"></a>
<a id="trace-3634"></a>
<a id="trace-3636"></a>
<a id="trace-3735"></a>
<a id="trace-3737"></a>
<a id="trace-3778"></a>
<a id="trace-3780"></a>
<a id="trace-3795"></a>
<a id="trace-3797"></a>
<a id="trace-3809"></a>
<a id="trace-3811"></a>
<a id="trace-3849"></a>
<a id="trace-3851"></a>
<a id="trace-3863"></a>
<a id="trace-3865"></a>
<a id="trace-3942"></a>
<a id="trace-3944"></a>
<a id="trace-3957"></a>
<a id="trace-3959"></a>
<a id="trace-3975"></a>
<a id="trace-3977"></a>
<a id="trace-3994"></a>
<a id="trace-3996"></a>
<a id="trace-4014"></a>
<a id="trace-4016"></a>
<a id="trace-4037"></a>
<a id="trace-4039"></a>
<a id="trace-4048"></a>
<a id="trace-4050"></a>
<a id="trace-4060"></a>
<a id="trace-4062"></a>
<a id="trace-4071"></a>
<a id="trace-4073"></a>
<a id="trace-4147"></a>
<a id="trace-4149"></a>
<a id="trace-4160"></a>
<a id="trace-4162"></a>
<a id="trace-4176"></a>
<a id="trace-4178"></a>
<a id="trace-4222"></a>
<a id="trace-4224"></a>
<a id="trace-4231"></a>
<a id="trace-4233"></a>
<a id="trace-4246"></a>
<a id="trace-4248"></a>
<a id="trace-4255"></a>
<a id="trace-4257"></a>
<a id="trace-4333"></a>
<a id="trace-4335"></a>
<a id="trace-4346"></a>
<a id="trace-4348"></a>
<a id="trace-4363"></a>
<a id="trace-4365"></a>
<a id="trace-4376"></a>
<a id="trace-4378"></a>
<a id="trace-4394"></a>
<a id="trace-4396"></a>
<a id="trace-4405"></a>
<a id="trace-4407"></a>
<a id="trace-4419"></a>
<a id="trace-4421"></a>
<a id="trace-4430"></a>
<a id="trace-4432"></a>
<a id="trace-4445"></a>
<a id="trace-4447"></a>
<a id="trace-4457"></a>
<a id="trace-4459"></a>
<a id="trace-4531"></a>
<a id="trace-4533"></a>
<a id="trace-4543"></a>
<a id="trace-4545"></a>
<a id="trace-4556"></a>
<a id="trace-4558"></a>
<a id="trace-4568"></a>
<a id="trace-4570"></a>
<a id="trace-4583"></a>
<a id="trace-4585"></a>
<a id="trace-4593"></a>
<a id="trace-4595"></a>
<a id="trace-4606"></a>
<a id="trace-4608"></a>
<a id="trace-4617"></a>
<a id="trace-4619"></a>
<a id="trace-4634"></a>
<a id="trace-4636"></a>
<a id="trace-4643"></a>
<a id="trace-4645"></a>
<a id="trace-4718"></a>
<a id="trace-4720"></a>
<a id="trace-4730"></a>
<a id="trace-4732"></a>
<a id="trace-4744"></a>
<a id="trace-4746"></a>
<a id="trace-4755"></a>
<a id="trace-4757"></a>
<a id="trace-4772"></a>
<a id="trace-4774"></a>
<a id="trace-4783"></a>
<a id="trace-4785"></a>
<a id="trace-4813"></a>
<a id="trace-4815"></a>
<a id="trace-4837"></a>
<a id="trace-4839"></a>
<a id="trace-4847"></a>
<a id="trace-4849"></a>
<a id="trace-4933"></a>
<a id="trace-4935"></a>
<a id="trace-4953"></a>
<a id="trace-4955"></a>
<a id="trace-4968"></a>
<a id="trace-4970"></a>
<a id="trace-4976"></a>
<a id="trace-4978"></a>
<a id="trace-4989"></a>
<a id="trace-4991"></a>
<a id="trace-5001"></a>
<a id="trace-5003"></a>
<a id="trace-5018"></a>
<a id="trace-5020"></a>
<a id="trace-5138"></a>
<a id="trace-5140"></a>
<a id="trace-5170"></a>
<a id="trace-5172"></a>
<a id="trace-5191"></a>
<a id="trace-5193"></a>
<a id="trace-5206"></a>
<a id="trace-5208"></a>
<a id="trace-5214"></a>
<a id="trace-5216"></a>
<a id="trace-5300"></a>
<a id="trace-5302"></a>
<a id="trace-5315"></a>
<a id="trace-5317"></a>
<a id="trace-5329"></a>
<a id="trace-5331"></a>
<a id="trace-5349"></a>
<a id="trace-5351"></a>
<a id="trace-5362"></a>
<a id="trace-5364"></a>
<a id="trace-5378"></a>
<a id="trace-5380"></a>
<a id="trace-5389"></a>
<a id="trace-5391"></a>
<a id="trace-5409"></a>
<a id="trace-5411"></a>
<a id="trace-5417"></a>
<a id="trace-5419"></a>
<a id="trace-5491"></a>
<a id="trace-5493"></a>
<a id="trace-5502"></a>
<a id="trace-5504"></a>
<a id="trace-5515"></a>
<a id="trace-5517"></a>
<a id="trace-5524"></a>
<a id="trace-5526"></a>
<a id="trace-5542"></a>
<a id="trace-5544"></a>
<a id="trace-5550"></a>
<a id="trace-5552"></a>
<a id="trace-5566"></a>
<a id="trace-5568"></a>
<a id="trace-5582"></a>
<a id="trace-5584"></a>
<a id="trace-5598"></a>
<a id="trace-5600"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-5704"></a>
<a id="trace-5706"></a>
<a id="trace-5718"></a>
<a id="trace-5720"></a>
<a id="trace-5727"></a>
<a id="trace-5729"></a>
<a id="trace-5742"></a>
<a id="trace-5744"></a>
<a id="trace-5781"></a>
<a id="trace-5783"></a>
<a id="trace-5806"></a>
<a id="trace-5808"></a>
<a id="trace-5830"></a>
<a id="trace-5832"></a>
<a id="trace-5846"></a>
<a id="trace-5848"></a>
<a id="trace-5938"></a>
<a id="trace-5940"></a>
<a id="trace-6793"></a>
<a id="trace-6795"></a>
<a id="trace-6809"></a>
<a id="trace-6811"></a>
<a id="trace-6850"></a>
<a id="trace-6852"></a>
<a id="trace-7009"></a>
<a id="trace-7011"></a>
<a id="trace-7037"></a>
<a id="trace-7039"></a>
<a id="trace-7070"></a>
<a id="trace-7072"></a>
<a id="trace-7085"></a>
<a id="trace-7087"></a>
<a id="trace-7194"></a>
<a id="trace-7196"></a>
<a id="trace-7214"></a>
<a id="trace-7216"></a>
<a id="trace-7249"></a>
<a id="trace-7251"></a>
<a id="trace-7283"></a>
<a id="trace-7285"></a>
<a id="trace-7307"></a>
<a id="trace-7309"></a>
<a id="trace-7330"></a>
<a id="trace-7332"></a>
<a id="trace-7342"></a>
<a id="trace-7344"></a>
<a id="trace-7425"></a>
<a id="trace-7427"></a>
<a id="trace-7436"></a>
<a id="trace-7438"></a>
<a id="trace-7456"></a>
<a id="trace-7458"></a>
<a id="trace-7470"></a>
<a id="trace-7472"></a>
<a id="trace-7490"></a>
<a id="trace-7492"></a>
<a id="trace-7501"></a>
<a id="trace-7503"></a>
<a id="trace-7546"></a>
<a id="trace-7548"></a>
<a id="trace-7565"></a>
<a id="trace-7567"></a>
<a id="trace-7744"></a>
<a id="trace-7746"></a>
<a id="trace-7832"></a>
<a id="trace-7834"></a>
<a id="trace-7850"></a>
<a id="trace-7852"></a>
<a id="trace-7872"></a>
<a id="trace-7874"></a>
<a id="trace-7918"></a>
<a id="trace-7920"></a>
<a id="trace-7932"></a>
<a id="trace-7934"></a>
<a id="trace-7948"></a>
<a id="trace-7950"></a>
<a id="trace-7968"></a>
<a id="trace-7970"></a>
<a id="trace-7983"></a>
<a id="trace-7985"></a>
<a id="trace-8085"></a>
<a id="trace-8087"></a>
<a id="trace-8118"></a>
<a id="trace-8120"></a>
<a id="trace-8141"></a>
<a id="trace-8143"></a>
<a id="trace-8155"></a>
<a id="trace-8157"></a>
<a id="trace-8177"></a>
<a id="trace-8179"></a>
<a id="trace-8192"></a>
<a id="trace-8194"></a>
<a id="trace-8211"></a>
<a id="trace-8213"></a>
<a id="trace-8660"></a>
<a id="trace-8662"></a>
<a id="trace-8683"></a>
<a id="trace-8685"></a>
<a id="trace-8898"></a>
<a id="trace-8900"></a>
<a id="trace-8919"></a>
<a id="trace-8921"></a>
<a id="trace-8960"></a>
<a id="trace-8962"></a>
<a id="trace-9010"></a>
<a id="trace-9012"></a>
<a id="trace-9036"></a>
<a id="trace-9038"></a>
<a id="trace-9059"></a>
<a id="trace-9061"></a>
<a id="trace-9244"></a>
<a id="trace-9246"></a>
<a id="trace-9334"></a>
<a id="trace-9336"></a>
<a id="trace-9379"></a>
<a id="trace-9381"></a>
<a id="trace-9411"></a>
<a id="trace-9413"></a>
<a id="trace-9441"></a>
<a id="trace-9443"></a>
<a id="trace-9464"></a>
<a id="trace-9466"></a>
<a id="trace-9485"></a>
<a id="trace-9487"></a>
<a id="trace-9504"></a>
<a id="trace-9506"></a>
<a id="trace-9515"></a>
<a id="trace-9517"></a>
<a id="trace-9599"></a>
<a id="trace-9601"></a>
<a id="trace-9639"></a>
<a id="trace-9641"></a>
<a id="trace-10491"></a>
<a id="trace-10493"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10573"></a>
<a id="trace-10575"></a>
<a id="trace-10587"></a>
<a id="trace-10589"></a>
<a id="trace-10606"></a>
<a id="trace-10608"></a>
<a id="trace-10623"></a>
<a id="trace-10625"></a>
<a id="trace-10702"></a>
<a id="trace-10704"></a>
<a id="trace-10711"></a>
<a id="trace-10713"></a>
<a id="trace-10735"></a>
<a id="trace-10737"></a>
<a id="trace-10763"></a>
<a id="trace-10765"></a>
<a id="trace-10780"></a>
<a id="trace-10782"></a>
<a id="trace-10817"></a>
<a id="trace-10819"></a>
<a id="trace-10831"></a>
<a id="trace-10833"></a>
<a id="trace-10849"></a>
<a id="trace-10851"></a>
<a id="trace-10932"></a>
<a id="trace-10934"></a>
<a id="trace-10945"></a>
<a id="trace-10947"></a>
<a id="trace-10965"></a>
<a id="trace-10967"></a>
<a id="trace-10981"></a>
<a id="trace-10983"></a>
<a id="trace-11002"></a>
<a id="trace-11004"></a>
<a id="trace-11012"></a>
<a id="trace-11014"></a>
<a id="trace-11028"></a>
<a id="trace-11030"></a>
<a id="trace-11131"></a>
<a id="trace-11133"></a>
<a id="trace-11154"></a>
<a id="trace-11156"></a>
<a id="trace-11165"></a>
<a id="trace-11167"></a>
<a id="trace-11180"></a>
<a id="trace-11182"></a>
<a id="trace-11209"></a>
<a id="trace-11211"></a>
<a id="trace-11223"></a>
<a id="trace-11225"></a>
<a id="trace-11306"></a>
<a id="trace-11308"></a>
<a id="trace-11331"></a>
<a id="trace-11333"></a>
<a id="trace-11344"></a>
<a id="trace-11346"></a>
<a id="trace-11358"></a>
<a id="trace-11360"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
<a id="trace-11389"></a>
<a id="trace-11391"></a>
<a id="trace-11410"></a>
<a id="trace-11412"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11515"></a>
<a id="trace-11517"></a>
<a id="trace-11534"></a>
<a id="trace-11536"></a>
<a id="trace-11555"></a>
<a id="trace-11557"></a>
<a id="trace-11590"></a>
<a id="trace-11592"></a>
<a id="trace-11599"></a>
<a id="trace-11601"></a>
<a id="trace-11673"></a>
<a id="trace-11675"></a>
<a id="trace-11683"></a>
<a id="trace-11685"></a>
<a id="trace-11700"></a>
<a id="trace-11702"></a>
<a id="trace-11713"></a>
<a id="trace-11715"></a>
<a id="trace-11729"></a>
<a id="trace-11731"></a>
<a id="trace-11739"></a>
<a id="trace-11741"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11784"></a>
<a id="trace-11786"></a>
<a id="trace-11794"></a>
<a id="trace-11796"></a>
<a id="trace-11868"></a>
<a id="trace-11878"></a>
<a id="trace-11893"></a>
<a id="trace-11913"></a>
<a id="trace-11915"></a>
<a id="trace-11921"></a>
<a id="trace-11923"></a>
<a id="trace-11938"></a>
<a id="trace-11940"></a>
<a id="trace-11962"></a>
<a id="trace-11964"></a>
<a id="trace-11976"></a>
<a id="trace-11978"></a>
<a id="trace-12050"></a>
<a id="trace-12052"></a>
<a id="trace-12061"></a>
<a id="trace-12063"></a>
<a id="trace-12082"></a>
<a id="trace-12084"></a>
<a id="trace-12095"></a>
<a id="trace-12097"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12120"></a>
<a id="trace-12122"></a>
<a id="trace-12134"></a>
<a id="trace-12136"></a>
<a id="trace-12155"></a>
<a id="trace-12157"></a>
<a id="trace-12167"></a>
<a id="trace-12169"></a>
<a id="trace-12242"></a>
<a id="trace-12244"></a>
<a id="trace-12254"></a>
<a id="trace-12256"></a>
<a id="trace-12273"></a>
<a id="trace-12275"></a>
<a id="trace-12286"></a>
<a id="trace-12288"></a>
<a id="trace-12299"></a>
<a id="trace-12301"></a>
<a id="trace-12325"></a>
<a id="trace-12327"></a>
<a id="trace-12430"></a>
<a id="trace-12432"></a>
<a id="trace-12440"></a>
<a id="trace-12442"></a>
<a id="trace-12458"></a>
<a id="trace-12460"></a>
<a id="trace-12484"></a>
<a id="trace-12486"></a>
<a id="trace-12492"></a>
<a id="trace-12494"></a>
<a id="trace-12510"></a>
<a id="trace-12512"></a>
<a id="trace-12520"></a>
<a id="trace-12522"></a>
<a id="trace-12533"></a>
<a id="trace-12535"></a>
<a id="trace-12543"></a>
<a id="trace-12545"></a>
<a id="trace-12634"></a>
<a id="trace-12636"></a>
<a id="trace-12645"></a>
<a id="trace-12647"></a>
<a id="trace-12662"></a>
<a id="trace-12664"></a>
<a id="trace-12744"></a>
<a id="trace-12746"></a>
<a id="trace-12775"></a>
<a id="trace-12777"></a>
<a id="trace-12803"></a>
<a id="trace-12805"></a>
<a id="trace-12817"></a>
<a id="trace-12819"></a>
<a id="trace-12834"></a>
<a id="trace-12836"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12928"></a>
<a id="trace-12930"></a>
<a id="trace-15234"></a>
<a id="trace-15236"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
<a id="trace-15274"></a>
<a id="trace-15276"></a>
<a id="trace-15295"></a>
<a id="trace-15297"></a>
<a id="trace-15332"></a>
<a id="trace-15334"></a>
<a id="trace-15345"></a>
<a id="trace-15347"></a>
<a id="trace-15362"></a>
<a id="trace-15364"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15468"></a>
<a id="trace-15470"></a>
<a id="trace-15491"></a>
<a id="trace-15493"></a>
<a id="trace-15504"></a>
<a id="trace-15506"></a>
<a id="trace-15536"></a>
<a id="trace-15538"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15579"></a>
<a id="trace-15581"></a>
<a id="trace-15593"></a>
<a id="trace-15595"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15692"></a>
<a id="trace-15694"></a>
<a id="trace-15711"></a>
<a id="trace-15713"></a>
<a id="trace-15725"></a>
<a id="trace-15727"></a>
<a id="trace-15747"></a>
<a id="trace-15749"></a>
<a id="trace-15771"></a>
<a id="trace-15773"></a>
<a id="trace-15992"></a>
<a id="trace-15994"></a>
<a id="trace-16033"></a>
<a id="trace-16035"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
<a id="trace-16212"></a>
<a id="trace-16214"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18953"></a>
<a id="trace-18955"></a>
<a id="trace-19211"></a>
<a id="trace-19213"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19622"></a>
<a id="trace-19624"></a>
<a id="trace-19662"></a>
<a id="trace-19664"></a>
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19738"></a>
<a id="trace-19740"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
<a id="trace-20040"></a>
<a id="trace-20042"></a>
<a id="trace-20162"></a>
<a id="trace-20164"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20476"></a>
<a id="trace-20478"></a>
<a id="trace-20519"></a>
<a id="trace-20521"></a>
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20810"></a>
<a id="trace-20812"></a>
<a id="trace-20828"></a>
<a id="trace-20830"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-20881"></a>
<a id="trace-20883"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-21010"></a>
<a id="trace-21012"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21134"></a>
<a id="trace-21136"></a>
<a id="trace-21168"></a>
<a id="trace-21170"></a>
<a id="trace-21179"></a>
<a id="trace-21181"></a>
<a id="trace-21202"></a>
<a id="trace-21204"></a>
<a id="trace-21225"></a>
<a id="trace-21227"></a>
<a id="trace-21243"></a>
<a id="trace-21245"></a>
<a id="trace-21254"></a>
<a id="trace-21256"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21406"></a>
<a id="trace-21408"></a>
<a id="trace-21476"></a>
<a id="trace-21478"></a>
<a id="trace-21496"></a>
<a id="trace-21498"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21533"></a>
<a id="trace-21535"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
<a id="trace-21699"></a>
<a id="trace-21701"></a>
<a id="trace-21716"></a>
<a id="trace-21718"></a>
<a id="trace-21755"></a>
<a id="trace-21757"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-21983"></a>
<a id="trace-21985"></a>
<a id="trace-21995"></a>
<a id="trace-21997"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22037"></a>
<a id="trace-22039"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22221"></a>
<a id="trace-22223"></a>
<a id="trace-22355"></a>
<a id="trace-22357"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22376"></a>
<a id="trace-22378"></a>
<a id="trace-22402"></a>
<a id="trace-22404"></a>
<a id="trace-22417"></a>
<a id="trace-22419"></a>
<a id="trace-22429"></a>
<a id="trace-22431"></a>
<a id="trace-22498"></a>
<a id="trace-22500"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22550"></a>
<a id="trace-22552"></a>
<a id="trace-22563"></a>
<a id="trace-22565"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22663"></a>
<a id="trace-22665"></a>
<a id="trace-22675"></a>
<a id="trace-22677"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22698"></a>
<a id="trace-22700"></a>
<a id="trace-22718"></a>
<a id="trace-22720"></a>
<a id="trace-22734"></a>
<a id="trace-22736"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22811"></a>
<a id="trace-22813"></a>
<a id="trace-22822"></a>
<a id="trace-22824"></a>
<a id="trace-22834"></a>
<a id="trace-22836"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22856"></a>
<a id="trace-22858"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22886"></a>
<a id="trace-22888"></a>
<a id="trace-22894"></a>
<a id="trace-22896"></a>
<a id="trace-22959"></a>
<a id="trace-22961"></a>
<a id="trace-22980"></a>
<a id="trace-22982"></a>
<a id="trace-22994"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23000"></a>
<a id="trace-23008"></a>
<a id="trace-23010"></a>
<a id="trace-23014"></a>
<a id="trace-23016"></a>
<a id="trace-23027"></a>
<a id="trace-23029"></a>
<a id="trace-23033"></a>
<a id="trace-23035"></a>
<a id="trace-23094"></a>
<a id="trace-23096"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23114"></a>
<a id="trace-23116"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23129"></a>
<a id="trace-23131"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23151"></a>
<a id="trace-23153"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23171"></a>
<a id="trace-23173"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23243"></a>
<a id="trace-23245"></a>
<a id="trace-23254"></a>
<a id="trace-23256"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23270"></a>
<a id="trace-23272"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23299"></a>
<a id="trace-23301"></a>
<a id="trace-23306"></a>
<a id="trace-23308"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23390"></a>
<a id="trace-23392"></a>
<a id="trace-23403"></a>
<a id="trace-23405"></a>
<a id="trace-23407"></a>
<a id="trace-23409"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23434"></a>
<a id="trace-23436"></a>
<a id="trace-23440"></a>
<a id="trace-23442"></a>
<a id="trace-23519"></a>
<a id="trace-23521"></a>
<a id="trace-23526"></a>
<a id="trace-23528"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23541"></a>
<a id="trace-23543"></a>
<a id="trace-23551"></a>
<a id="trace-23553"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23646"></a>
<a id="trace-23648"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23668"></a>
<a id="trace-23670"></a>
<a id="trace-23683"></a>
<a id="trace-23685"></a>
<a id="trace-23694"></a>
<a id="trace-23696"></a>
<a id="trace-23701"></a>
<a id="trace-23703"></a>
<a id="trace-23710"></a>
<a id="trace-23712"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23797"></a>
<a id="trace-23799"></a>
<a id="trace-23802"></a>
<a id="trace-23804"></a>
<a id="trace-23819"></a>
<a id="trace-23821"></a>
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23856"></a>
<a id="trace-23858"></a>
<a id="trace-23925"></a>
<a id="trace-23927"></a>
<a id="trace-23937"></a>
<a id="trace-23939"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-23955"></a>
<a id="trace-23957"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-23994"></a>
<a id="trace-23996"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24068"></a>
<a id="trace-24070"></a>
<a id="trace-24078"></a>
<a id="trace-24080"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24096"></a>
<a id="trace-24098"></a>
<a id="trace-24103"></a>
<a id="trace-24105"></a>
<a id="trace-24114"></a>
<a id="trace-24116"></a>
<a id="trace-24119"></a>
<a id="trace-24121"></a>
<a id="trace-24128"></a>
<a id="trace-24130"></a>
<a id="trace-24137"></a>
<a id="trace-24139"></a>
<a id="trace-24200"></a>
<a id="trace-24202"></a>
<a id="trace-24209"></a>
<a id="trace-24211"></a>
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24245"></a>
<a id="trace-24247"></a>
<a id="trace-24256"></a>
<a id="trace-24258"></a>
<a id="trace-24261"></a>
<a id="trace-24263"></a>
<a id="trace-24271"></a>
<a id="trace-24273"></a>
<a id="trace-24340"></a>
<a id="trace-24342"></a>
<a id="trace-24347"></a>
<a id="trace-24349"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24377"></a>
<a id="trace-24379"></a>
<a id="trace-24388"></a>
<a id="trace-24390"></a>
<a id="trace-24401"></a>
<a id="trace-24403"></a>
<a id="trace-24407"></a>
<a id="trace-24409"></a>
<a id="trace-24420"></a>
<a id="trace-24422"></a>
<a id="trace-24483"></a>
<a id="trace-24485"></a>
<a id="trace-24497"></a>
<a id="trace-24499"></a>
<a id="trace-24504"></a>
<a id="trace-24506"></a>
<a id="trace-24517"></a>
<a id="trace-24519"></a>
<a id="trace-24535"></a>
<a id="trace-24537"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24559"></a>
<a id="trace-24561"></a>
<a id="trace-24629"></a>
<a id="trace-24631"></a>
<a id="trace-24655"></a>
<a id="trace-24657"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24672"></a>
<a id="trace-24674"></a>
<a id="trace-24679"></a>
<a id="trace-24681"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24768"></a>
<a id="trace-24770"></a>
<a id="trace-24783"></a>
<a id="trace-24785"></a>
<a id="trace-24799"></a>
<a id="trace-24801"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24829"></a>
<a id="trace-24831"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24899"></a>
<a id="trace-24901"></a>
<a id="trace-24909"></a>
<a id="trace-24911"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-24957"></a>
<a id="trace-24959"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-24983"></a>
<a id="trace-24985"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25058"></a>
<a id="trace-25060"></a>
<a id="trace-25064"></a>
<a id="trace-25066"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25118"></a>
<a id="trace-25120"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25193"></a>
<a id="trace-25195"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25222"></a>
<a id="trace-25224"></a>
<a id="trace-25233"></a>
<a id="trace-25235"></a>
<a id="trace-25239"></a>
<a id="trace-25241"></a>
<a id="trace-25333"></a>
<a id="trace-25335"></a>
<a id="trace-25343"></a>
<a id="trace-25345"></a>
<a id="trace-25348"></a>
<a id="trace-25350"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25366"></a>
<a id="trace-25368"></a>
<a id="trace-25377"></a>
<a id="trace-25379"></a>
<a id="trace-25383"></a>
<a id="trace-25385"></a>
<a id="trace-25392"></a>
<a id="trace-25394"></a>
<a id="trace-25400"></a>
<a id="trace-25402"></a>
<a id="trace-25464"></a>
<a id="trace-25466"></a>
<a id="trace-25473"></a>
<a id="trace-25475"></a>
<a id="trace-25483"></a>
<a id="trace-25485"></a>
<a id="trace-25493"></a>
<a id="trace-25495"></a>
<a id="trace-25512"></a>
<a id="trace-25514"></a>
<a id="trace-25522"></a>
<a id="trace-25524"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25540"></a>
<a id="trace-25542"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25614"></a>
<a id="trace-25616"></a>
<a id="trace-25623"></a>
<a id="trace-25625"></a>
<a id="trace-25628"></a>
<a id="trace-25630"></a>
<a id="trace-25641"></a>
<a id="trace-25643"></a>
<a id="trace-25662"></a>
<a id="trace-25664"></a>
<a id="trace-25681"></a>
<a id="trace-25683"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 942): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624818187461794, 'next_transition': 1023}.
<a id="trace-964"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 964): traveling overwatch. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299965059263896, 'next_transition': 1019}.
<a id="trace-965"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 965): received platoon directive. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299965059263896, 'next_transition': 1019}.
<a id="trace-1019"></a>
<a id="trace-1021"></a>
<a id="trace-1058"></a>
<a id="trace-1060"></a>
<a id="trace-1106"></a>
<a id="trace-1108"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1178"></a>
<a id="trace-1180"></a>
<a id="trace-1225"></a>
<a id="trace-1227"></a>
<a id="trace-1260"></a>
<a id="trace-1262"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
<a id="trace-1403"></a>
<a id="trace-1405"></a>
<a id="trace-1431"></a>
<a id="trace-1433"></a>
<a id="trace-1454"></a>
<a id="trace-1456"></a>
<a id="trace-1478"></a>
<a id="trace-1480"></a>
<a id="trace-1496"></a>
<a id="trace-1498"></a>
<a id="trace-1517"></a>
<a id="trace-1519"></a>
<a id="trace-1529"></a>
<a id="trace-1531"></a>
- 6.20s–13.70s (×32), actor 5, squad 0 (trace 1019): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 752. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.217528722000318, 'next_transition': 1058}.
<a id="trace-1541"></a>
- 13.95s–13.95s (×1), actor 0, squad 0 (trace 1541): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1300. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1715}.
<a id="trace-1715"></a>
<a id="trace-1717"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1825"></a>
<a id="trace-1827"></a>
<a id="trace-1848"></a>
<a id="trace-1850"></a>
<a id="trace-2346"></a>
<a id="trace-2348"></a>
<a id="trace-2396"></a>
<a id="trace-2398"></a>
<a id="trace-2433"></a>
<a id="trace-2435"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
<a id="trace-2508"></a>
<a id="trace-2510"></a>
- 14.20s–18.25s (×18), actor 5, squad 0 (trace 1715): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1305. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019687984478165863, 'next_transition': 1743}.
<a id="trace-1860"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1860): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-1861"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1861): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-1862"></a>
<a id="trace-1978"></a>
<a id="trace-2099"></a>
<a id="trace-2216"></a>
- 15.90s–16.15s (×4), actor 8, squad 1 (trace 1862): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-2518"></a>
- 18.30s–18.30s (×1), actor 0, squad 0 (trace 2518): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19681469518656447, 'next_transition': 2647}.
<a id="trace-2519"></a>
- 18.30s–18.30s (×1), actor 0, squad 0 (trace 2519): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19681469518656447, 'next_transition': 2647}.
<a id="trace-2520"></a>
<a id="trace-2647"></a>
- 18.30s–18.55s (×2), actor 0, squad 0 (trace 2520): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19681469518656447, 'next_transition': 2647}.
<a id="trace-2774"></a>
<a id="trace-2776"></a>
<a id="trace-2801"></a>
<a id="trace-2803"></a>
- 18.75s–19.25s (×4), actor 5, squad 0 (trace 2774): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1759. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5973368411053384, 'next_transition': 2801}.
<a id="trace-2827"></a>
- 19.50s–19.50s (×1), actor 8, squad 1 (trace 2827): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2992389858039892, 'next_transition': 318}.
<a id="trace-2831"></a>
- 19.55s–19.55s (×1), actor 0, squad 0 (trace 2831): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12265800768255125, 'next_transition': 2966}.
<a id="trace-2966"></a>
<a id="trace-2968"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 2966): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1759. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2021803449600984, 'next_transition': 317}.
<a id="trace-317"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 317): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-318"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 318): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2977"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2977): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2977. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3859401559407787, 'next_transition': 3084}.
<a id="trace-2978"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2978): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2978. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3859401559407787, 'next_transition': 3084}.
<a id="trace-2979"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 2979): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2979. Next observer evidence: {'until': 22, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4795334910116096, 'next_transition': 3208}.
<a id="trace-2980"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 2980): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2980. Next observer evidence: {'until': 22, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4795334910116096, 'next_transition': 3208}.
<a id="trace-3084"></a>
<a id="trace-3086"></a>
<a id="trace-3120"></a>
<a id="trace-3122"></a>
<a id="trace-3171"></a>
<a id="trace-3173"></a>
<a id="trace-3197"></a>
<a id="trace-3199"></a>
<a id="trace-3229"></a>
<a id="trace-3231"></a>
<a id="trace-3247"></a>
<a id="trace-3249"></a>
<a id="trace-3370"></a>
<a id="trace-3372"></a>
- 20.25s–23.25s (×14), actor 5, squad 0 (trace 3084): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3002. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3484514886712042, 'next_transition': 3120}.
<a id="trace-3208"></a>
- 22.05s–22.05s (×1), actor 8, squad 1 (trace 3208): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3005. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7863591504681556, 'next_transition': 3255}.
<a id="trace-3255"></a>
- 23.00s–23.00s (×1), actor 8, squad 1 (trace 3255): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3005. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1297990016812725, 'next_transition': 3563}.
<a id="trace-3378"></a>
- 23.45s–23.45s (×1), actor 1, squad 0 (trace 3378): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2998. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3386}.
<a id="trace-3386"></a>
<a id="trace-3388"></a>
<a id="trace-3412"></a>
<a id="trace-3414"></a>
<a id="trace-3428"></a>
<a id="trace-3430"></a>
<a id="trace-3512"></a>
<a id="trace-3514"></a>
<a id="trace-3534"></a>
<a id="trace-3536"></a>
<a id="trace-3554"></a>
<a id="trace-3556"></a>
<a id="trace-3570"></a>
<a id="trace-3572"></a>
<a id="trace-3590"></a>
<a id="trace-3592"></a>
<a id="trace-3603"></a>
<a id="trace-3605"></a>
<a id="trace-3617"></a>
<a id="trace-3619"></a>
<a id="trace-3630"></a>
<a id="trace-3632"></a>
<a id="trace-3646"></a>
<a id="trace-3648"></a>
<a id="trace-3656"></a>
<a id="trace-3658"></a>
<a id="trace-3731"></a>
<a id="trace-3733"></a>
<a id="trace-3746"></a>
<a id="trace-3748"></a>
<a id="trace-3762"></a>
<a id="trace-3764"></a>
<a id="trace-3774"></a>
<a id="trace-3776"></a>
<a id="trace-3791"></a>
<a id="trace-3793"></a>
<a id="trace-3805"></a>
<a id="trace-3807"></a>
<a id="trace-3819"></a>
<a id="trace-3821"></a>
<a id="trace-3829"></a>
<a id="trace-3831"></a>
<a id="trace-3845"></a>
<a id="trace-3847"></a>
- 23.75s–34.25s (×44), actor 5, squad 0 (trace 3386): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3002. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3412}.
<a id="trace-3563"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 3563): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3441. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.412653179839348, 'next_transition': 398}.
<a id="trace-398"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 398): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3752"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 3752): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.687930 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3752. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5875988840069146, 'next_transition': 3799}.
<a id="trace-3753"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 3753): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.687930 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3753. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5875988840069146, 'next_transition': 3799}.
<a id="trace-3799"></a>
- 32.45s–32.45s (×1), actor 8, squad 1 (trace 3799): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 30.00s, trace 3669. Next observer evidence: None.
<a id="trace-3800"></a>
- 32.50s–32.50s (×1), actor 8, squad 1 (trace 3800): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 3669. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.5872736272829817, 'next_transition': 3960}.
<a id="trace-3854"></a>
- 34.45s–34.45s (×1), actor 1, squad 0 (trace 3854): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 3662. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3859}.
<a id="trace-3859"></a>
<a id="trace-3861"></a>
<a id="trace-3938"></a>
<a id="trace-3940"></a>
<a id="trace-3953"></a>
<a id="trace-3955"></a>
<a id="trace-3971"></a>
<a id="trace-3973"></a>
<a id="trace-3990"></a>
<a id="trace-3992"></a>
<a id="trace-4010"></a>
<a id="trace-4012"></a>
<a id="trace-4021"></a>
<a id="trace-4023"></a>
<a id="trace-4033"></a>
<a id="trace-4035"></a>
<a id="trace-4044"></a>
<a id="trace-4046"></a>
<a id="trace-4056"></a>
<a id="trace-4058"></a>
<a id="trace-4067"></a>
<a id="trace-4069"></a>
<a id="trace-4143"></a>
<a id="trace-4145"></a>
<a id="trace-4156"></a>
<a id="trace-4158"></a>
<a id="trace-4172"></a>
<a id="trace-4174"></a>
<a id="trace-4185"></a>
<a id="trace-4187"></a>
<a id="trace-4199"></a>
<a id="trace-4201"></a>
<a id="trace-4206"></a>
<a id="trace-4208"></a>
<a id="trace-4218"></a>
<a id="trace-4220"></a>
<a id="trace-4227"></a>
<a id="trace-4229"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4251"></a>
<a id="trace-4253"></a>
<a id="trace-4329"></a>
<a id="trace-4331"></a>
<a id="trace-4342"></a>
<a id="trace-4344"></a>
<a id="trace-4359"></a>
<a id="trace-4361"></a>
<a id="trace-4372"></a>
<a id="trace-4374"></a>
<a id="trace-4390"></a>
<a id="trace-4392"></a>
<a id="trace-4401"></a>
<a id="trace-4403"></a>
<a id="trace-4415"></a>
<a id="trace-4417"></a>
<a id="trace-4426"></a>
<a id="trace-4428"></a>
<a id="trace-4441"></a>
<a id="trace-4443"></a>
<a id="trace-4453"></a>
<a id="trace-4455"></a>
<a id="trace-4527"></a>
<a id="trace-4529"></a>
<a id="trace-4539"></a>
<a id="trace-4541"></a>
<a id="trace-4552"></a>
<a id="trace-4554"></a>
<a id="trace-4564"></a>
<a id="trace-4566"></a>
<a id="trace-4579"></a>
<a id="trace-4581"></a>
<a id="trace-4589"></a>
<a id="trace-4591"></a>
<a id="trace-4602"></a>
<a id="trace-4604"></a>
<a id="trace-4613"></a>
<a id="trace-4615"></a>
<a id="trace-4630"></a>
<a id="trace-4632"></a>
<a id="trace-4639"></a>
<a id="trace-4641"></a>
<a id="trace-4714"></a>
<a id="trace-4716"></a>
<a id="trace-4726"></a>
<a id="trace-4728"></a>
<a id="trace-4740"></a>
<a id="trace-4742"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
<a id="trace-4768"></a>
<a id="trace-4770"></a>
<a id="trace-4779"></a>
<a id="trace-4781"></a>
<a id="trace-4799"></a>
<a id="trace-4801"></a>
<a id="trace-4809"></a>
<a id="trace-4811"></a>
<a id="trace-4833"></a>
<a id="trace-4835"></a>
<a id="trace-4843"></a>
<a id="trace-4845"></a>
<a id="trace-4918"></a>
<a id="trace-4920"></a>
<a id="trace-4929"></a>
<a id="trace-4931"></a>
<a id="trace-4942"></a>
<a id="trace-4944"></a>
<a id="trace-4949"></a>
<a id="trace-4951"></a>
<a id="trace-4964"></a>
<a id="trace-4966"></a>
<a id="trace-4972"></a>
<a id="trace-4974"></a>
<a id="trace-4985"></a>
<a id="trace-4987"></a>
<a id="trace-4997"></a>
<a id="trace-4999"></a>
<a id="trace-5014"></a>
<a id="trace-5016"></a>
<a id="trace-5025"></a>
<a id="trace-5027"></a>
<a id="trace-5102"></a>
<a id="trace-5104"></a>
<a id="trace-5116"></a>
<a id="trace-5118"></a>
<a id="trace-5134"></a>
<a id="trace-5136"></a>
<a id="trace-5145"></a>
<a id="trace-5147"></a>
<a id="trace-5159"></a>
<a id="trace-5161"></a>
<a id="trace-5166"></a>
<a id="trace-5168"></a>
<a id="trace-5179"></a>
<a id="trace-5181"></a>
<a id="trace-5187"></a>
<a id="trace-5189"></a>
<a id="trace-5202"></a>
<a id="trace-5204"></a>
<a id="trace-5210"></a>
<a id="trace-5212"></a>
<a id="trace-5285"></a>
<a id="trace-5287"></a>
<a id="trace-5296"></a>
<a id="trace-5298"></a>
<a id="trace-5311"></a>
<a id="trace-5313"></a>
<a id="trace-5325"></a>
<a id="trace-5327"></a>
<a id="trace-5345"></a>
<a id="trace-5347"></a>
<a id="trace-5358"></a>
<a id="trace-5360"></a>
<a id="trace-5374"></a>
<a id="trace-5376"></a>
<a id="trace-5385"></a>
<a id="trace-5387"></a>
<a id="trace-5405"></a>
<a id="trace-5407"></a>
<a id="trace-5413"></a>
<a id="trace-5415"></a>
<a id="trace-5487"></a>
<a id="trace-5489"></a>
<a id="trace-5498"></a>
<a id="trace-5500"></a>
<a id="trace-5511"></a>
<a id="trace-5513"></a>
<a id="trace-5520"></a>
<a id="trace-5522"></a>
<a id="trace-5538"></a>
<a id="trace-5540"></a>
<a id="trace-5546"></a>
<a id="trace-5548"></a>
<a id="trace-5562"></a>
<a id="trace-5564"></a>
<a id="trace-5578"></a>
<a id="trace-5580"></a>
- 34.75s–78.75s (×178), actor 5, squad 0 (trace 3859): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3753. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3938}.
<a id="trace-3960"></a>
- 35.75s–35.75s (×1), actor 8, squad 1 (trace 3960): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 3874. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3968795051397837, 'next_transition': 434}.
<a id="trace-434"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 434): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4001"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 4001): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703555 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 4001. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4449}.
<a id="trace-4002"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 4002): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703555 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 4002. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4449}.
<a id="trace-4449"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 4449): MoveTactically. Knowledge: actor memory at 45.00s, trace 4266. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6854}.
<a id="trace-4450"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 4450): traveling overwatch. Knowledge: actor memory at 45.00s, trace 4266. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6854}.
<a id="trace-4451"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 4451): current contact unknown for 10 s. Knowledge: actor memory at 45.00s, trace 4266. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6854}.
<a id="trace-5603"></a>
- 79.45s–79.45s (×1), actor 1, squad 0 (trace 5603): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 5420. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5606}.
<a id="trace-5604"></a>
- 79.45s–79.45s (×1), actor 1, squad 0 (trace 5604): ; retain contact cover stage. Knowledge: actor memory at 75.00s, trace 5420. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5606}.
<a id="trace-5606"></a>
<a id="trace-5608"></a>
- 79.75s–79.75s (×2), actor 5, squad 0 (trace 5606): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 5424. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 753}.
<a id="trace-753"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 753): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5634"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 5634): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 5634. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5686}.
<a id="trace-5686"></a>
<a id="trace-5688"></a>
<a id="trace-5700"></a>
<a id="trace-5702"></a>
<a id="trace-5714"></a>
<a id="trace-5716"></a>
<a id="trace-5723"></a>
<a id="trace-5725"></a>
<a id="trace-5738"></a>
<a id="trace-5740"></a>
- 80.25s–82.25s (×10), actor 5, squad 0 (trace 5686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 5634. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5700}.
<a id="trace-5745"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 5745): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 5616. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5759}.
<a id="trace-5746"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 5746): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 5616. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5759}.
<a id="trace-5759"></a>
<a id="trace-5761"></a>
<a id="trace-5777"></a>
<a id="trace-5779"></a>
- 82.75s–83.25s (×4), actor 5, squad 0 (trace 5759): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 5634. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5777}.
<a id="trace-5785"></a>
- 83.45s–83.45s (×1), actor 1, squad 0 (trace 5785): received platoon directive; retain contact cover stage. Knowledge: actor memory at 80.00s, trace 5616. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5802}.
<a id="trace-5802"></a>
<a id="trace-5804"></a>
<a id="trace-5826"></a>
<a id="trace-5828"></a>
<a id="trace-5842"></a>
<a id="trace-5844"></a>
<a id="trace-5934"></a>
<a id="trace-5936"></a>
- 83.75s–85.25s (×8), actor 5, squad 0 (trace 5802): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 5634. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5826}.
<a id="trace-5959"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 5959): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-5961"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 5961): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6775"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 6775): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6776"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 6776): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6777"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 6777): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6778"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 6778): Assaulting. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6789"></a>
<a id="trace-6791"></a>
<a id="trace-6805"></a>
<a id="trace-6807"></a>
- 86.25s–86.75s (×4), actor 5, squad 0 (trace 6789): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5857. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6805}.
<a id="trace-6822"></a>
- 87.20s–87.20s (×1), actor 1, squad 0 (trace 6822): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6828"></a>
- 87.20s–87.20s (×1), actor 1, squad 0 (trace 6828): MoveTactically. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6829"></a>
- 87.20s–87.20s (×1), actor 1, squad 0 (trace 6829): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-6846"></a>
<a id="trace-6848"></a>
<a id="trace-6875"></a>
<a id="trace-6877"></a>
- 87.25s–87.75s (×4), actor 5, squad 0 (trace 6846): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5857. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6875}.
<a id="trace-6854"></a>
- 87.40s–87.40s (×1), actor 9, squad 1 (trace 6854): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 5860. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7186}.
<a id="trace-6855"></a>
- 87.40s–87.40s (×1), actor 9, squad 1 (trace 6855): bounding overwatch. Knowledge: actor memory at 85.00s, trace 5860. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7186}.
<a id="trace-6856"></a>
- 87.40s–87.40s (×1), actor 9, squad 1 (trace 6856): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 5860. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7186}.
<a id="trace-6894"></a>
- 88.20s–88.20s (×1), actor 1, squad 0 (trace 6894): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 5853. Next observer evidence: None.
<a id="trace-7005"></a>
<a id="trace-7007"></a>
<a id="trace-7033"></a>
<a id="trace-7035"></a>
<a id="trace-7066"></a>
<a id="trace-7068"></a>
<a id="trace-7081"></a>
<a id="trace-7083"></a>
<a id="trace-7174"></a>
<a id="trace-7176"></a>
<a id="trace-7190"></a>
<a id="trace-7192"></a>
<a id="trace-7210"></a>
<a id="trace-7212"></a>
<a id="trace-7221"></a>
<a id="trace-7223"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7259"></a>
<a id="trace-7261"></a>
<a id="trace-7279"></a>
<a id="trace-7281"></a>
<a id="trace-7303"></a>
<a id="trace-7305"></a>
<a id="trace-7326"></a>
<a id="trace-7328"></a>
<a id="trace-7338"></a>
<a id="trace-7340"></a>
<a id="trace-7421"></a>
<a id="trace-7423"></a>
<a id="trace-7432"></a>
<a id="trace-7434"></a>
<a id="trace-7452"></a>
<a id="trace-7454"></a>
<a id="trace-7466"></a>
<a id="trace-7468"></a>
<a id="trace-7486"></a>
<a id="trace-7488"></a>
<a id="trace-7497"></a>
<a id="trace-7499"></a>
<a id="trace-7522"></a>
<a id="trace-7524"></a>
<a id="trace-7542"></a>
<a id="trace-7544"></a>
<a id="trace-7561"></a>
<a id="trace-7563"></a>
- 88.25s–99.25s (×46), actor 5, squad 0 (trace 7005): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5857. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7033}.
<a id="trace-7186"></a>
- 90.70s–90.70s (×1), actor 9, squad 1 (trace 7186): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 7105. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1020}.
<a id="trace-7188"></a>
- 90.70s–90.70s (×1), actor 9, squad 1 (trace 7188): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 90.00s, trace 7105. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1020}.
<a id="trace-1020"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (events line 1020): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7510"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (trace 7510): renew committed intent (75 s lifetime). Knowledge: actor memory at 98.15s, trace 7510. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7568}.
<a id="trace-7568"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 7568): MoveTactically. Knowledge: actor memory at 95.00s, trace 7356. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7573}.
<a id="trace-7569"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 7569): received platoon directive. Knowledge: actor memory at 95.00s, trace 7356. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7573}.
<a id="trace-7573"></a>
- 99.40s–99.40s (×1), actor 9, squad 1 (trace 7573): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 7356. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9415}.
<a id="trace-7574"></a>
- 99.45s–99.45s (×1), actor 1, squad 0 (trace 7574): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 7349. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7740}.
<a id="trace-7740"></a>
<a id="trace-7742"></a>
<a id="trace-7828"></a>
<a id="trace-7830"></a>
<a id="trace-7846"></a>
<a id="trace-7848"></a>
<a id="trace-7868"></a>
<a id="trace-7870"></a>
<a id="trace-7885"></a>
<a id="trace-7887"></a>
<a id="trace-7905"></a>
<a id="trace-7907"></a>
<a id="trace-7914"></a>
<a id="trace-7916"></a>
<a id="trace-7928"></a>
<a id="trace-7930"></a>
<a id="trace-7944"></a>
<a id="trace-7946"></a>
<a id="trace-7964"></a>
<a id="trace-7966"></a>
<a id="trace-7979"></a>
<a id="trace-7981"></a>
<a id="trace-8065"></a>
<a id="trace-8067"></a>
<a id="trace-8081"></a>
<a id="trace-8083"></a>
<a id="trace-8102"></a>
<a id="trace-8104"></a>
<a id="trace-8114"></a>
<a id="trace-8116"></a>
<a id="trace-8137"></a>
<a id="trace-8139"></a>
<a id="trace-8151"></a>
<a id="trace-8153"></a>
<a id="trace-8173"></a>
<a id="trace-8175"></a>
<a id="trace-8188"></a>
<a id="trace-8190"></a>
<a id="trace-8207"></a>
<a id="trace-8209"></a>
- 99.75s–109.25s (×40), actor 5, squad 0 (trace 7740): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 98.15s, trace 7510. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022503625512892266, 'next_transition': 7828}.
<a id="trace-8217"></a>
- 109.50s–109.50s (×1), actor 1, squad 0 (trace 8217): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 7990. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999515979879382, 'next_transition': 8396}.
<a id="trace-8218"></a>
- 109.50s–109.50s (×1), actor 1, squad 0 (trace 8218): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 7990. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999515979879382, 'next_transition': 8396}.
<a id="trace-8396"></a>
<a id="trace-8398"></a>
- 109.75s–109.75s (×2), actor 5, squad 0 (trace 8396): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 7994. Next observer evidence: {'until': 109.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13499777459744272, 'next_transition': 8402}.
<a id="trace-8402"></a>
- 109.80s–109.80s (×1), actor 1, squad 0 (trace 8402): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 7990. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.025128571428571483, 'next_transition': 8656}.
<a id="trace-8656"></a>
<a id="trace-8658"></a>
<a id="trace-8679"></a>
<a id="trace-8681"></a>
- 110.25s–110.75s (×4), actor 5, squad 0 (trace 8656): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 8585. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10090000000000009, 'next_transition': 8679}.
<a id="trace-8688"></a>
- 110.80s–110.80s (×1), actor 1, squad 0 (trace 8688): new contact inside 100 m. Knowledge: actor memory at 110.00s, trace 8581. Next observer evidence: {'until': 111.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08071272596470203, 'next_transition': 8894}.
<a id="trace-8894"></a>
<a id="trace-8896"></a>
<a id="trace-8915"></a>
<a id="trace-8917"></a>
<a id="trace-8956"></a>
<a id="trace-8958"></a>
<a id="trace-8976"></a>
<a id="trace-8978"></a>
<a id="trace-9006"></a>
<a id="trace-9008"></a>
<a id="trace-9032"></a>
<a id="trace-9034"></a>
<a id="trace-9055"></a>
<a id="trace-9057"></a>
- 111.25s–114.25s (×14), actor 5, squad 0 (trace 8894): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 8585. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10465760777557508, 'next_transition': 8915}.
<a id="trace-9068"></a>
- 114.50s–114.50s (×1), actor 1, squad 0 (trace 9068): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 8581. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06696556071030015, 'next_transition': 9240}.
<a id="trace-9240"></a>
<a id="trace-9242"></a>
<a id="trace-9330"></a>
<a id="trace-9332"></a>
<a id="trace-9345"></a>
<a id="trace-9347"></a>
<a id="trace-9374"></a>
<a id="trace-9376"></a>
<a id="trace-9405"></a>
<a id="trace-9407"></a>
<a id="trace-9435"></a>
<a id="trace-9437"></a>
<a id="trace-9458"></a>
<a id="trace-9460"></a>
- 114.75s–118.25s (×14), actor 5, squad 0 (trace 9240): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 8585. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1560060823097377, 'next_transition': 9330}.
<a id="trace-9415"></a>
- 117.35s–117.35s (×1), actor 9, squad 1 (trace 9415): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 9265. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9621}.
<a id="trace-9416"></a>
- 117.35s–117.35s (×1), actor 9, squad 1 (trace 9416): new contact inside 100 m. Knowledge: actor memory at 115.00s, trace 9265. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9621}.
<a id="trace-9475"></a>
- 118.55s–118.55s (×1), actor 1, squad 0 (trace 9475): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 9258. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08195096824271428, 'next_transition': 9479}.
<a id="trace-9479"></a>
<a id="trace-9481"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9509"></a>
<a id="trace-9511"></a>
<a id="trace-9593"></a>
<a id="trace-9595"></a>
<a id="trace-9633"></a>
<a id="trace-9635"></a>
- 118.75s–120.75s (×10), actor 5, squad 0 (trace 9479): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 9262. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1796765999151287, 'next_transition': 9498}.
<a id="trace-9621"></a>
- 120.65s–120.65s (×1), actor 9, squad 1 (trace 9621): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 120.00s, trace 9527. Next observer evidence: {'until': 124.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1445}.
<a id="trace-9623"></a>
- 120.65s–120.65s (×1), actor 9, squad 1 (trace 9623): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 120.00s, trace 9527. Next observer evidence: {'until': 124.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1445}.
<a id="trace-9661"></a>
- 121.05s–121.05s (×1), actor 1, squad 0 (trace 9661): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08564071253501206, 'next_transition': 10236}.
<a id="trace-10204"></a>
- 121.05s–121.05s (×1), actor 1, squad 0 (trace 10204): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08564071253501206, 'next_transition': 10236}.
<a id="trace-10205"></a>
- 121.05s–121.05s (×1), actor 1, squad 0 (trace 10205): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08564071253501206, 'next_transition': 10236}.
<a id="trace-10206"></a>
- 121.05s–121.05s (×1), actor 1, squad 0 (trace 10206): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08564071253501206, 'next_transition': 10236}.
<a id="trace-10207"></a>
- 121.05s–121.05s (×1), actor 1, squad 0 (trace 10207): Assaulting. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08564071253501206, 'next_transition': 10236}.
<a id="trace-10236"></a>
<a id="trace-10238"></a>
- 121.25s–121.25s (×2), actor 5, squad 0 (trace 10236): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 9524. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20875232270810487, 'next_transition': 10261}.
<a id="trace-10261"></a>
- 121.70s–121.70s (×1), actor 1, squad 0 (trace 10261): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: None.
<a id="trace-10267"></a>
- 121.70s–121.70s (×1), actor 1, squad 0 (trace 10267): MoveTactically. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: None.
<a id="trace-10268"></a>
- 121.70s–121.70s (×1), actor 1, squad 0 (trace 10268): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 120.00s, trace 9520. Next observer evidence: None.
<a id="trace-10444"></a>
<a id="trace-10446"></a>
<a id="trace-10485"></a>
<a id="trace-10487"></a>
<a id="trace-10528"></a>
<a id="trace-10530"></a>
<a id="trace-10567"></a>
<a id="trace-10569"></a>
<a id="trace-10582"></a>
<a id="trace-10584"></a>
<a id="trace-10601"></a>
<a id="trace-10603"></a>
<a id="trace-10618"></a>
<a id="trace-10620"></a>
<a id="trace-10698"></a>
<a id="trace-10700"></a>
<a id="trace-10707"></a>
<a id="trace-10709"></a>
<a id="trace-10731"></a>
<a id="trace-10733"></a>
<a id="trace-10743"></a>
<a id="trace-10745"></a>
<a id="trace-10759"></a>
<a id="trace-10761"></a>
<a id="trace-10776"></a>
<a id="trace-10778"></a>
<a id="trace-10800"></a>
<a id="trace-10802"></a>
<a id="trace-10813"></a>
<a id="trace-10815"></a>
<a id="trace-10827"></a>
<a id="trace-10829"></a>
- 121.75s–129.30s (×32), actor 5, squad 0 (trace 10444): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 9524. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4481074528608084, 'next_transition': 10485}.
<a id="trace-1445"></a>
- 124.55s–124.55s (×1), actor 5, squad 1 (events line 1445): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10714}.
<a id="trace-10612"></a>
- 124.55s–124.55s (×1), actor 5, squad 1 (trace 10612): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.619943 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 124.55s, trace 10612. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10714}.
<a id="trace-10613"></a>
- 124.55s–124.55s (×1), actor 5, squad 1 (trace 10613): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.619943 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 124.55s, trace 10613. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10714}.
<a id="trace-10714"></a>
- 125.75s–125.75s (×1), actor 9, squad 1 (trace 10714): MoveTactically. Knowledge: actor memory at 125.00s, trace 10636. Next observer evidence: {'until': 125.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10719}.
<a id="trace-10715"></a>
- 125.75s–125.75s (×1), actor 9, squad 1 (trace 10715): received platoon directive. Knowledge: actor memory at 125.00s, trace 10636. Next observer evidence: {'until': 125.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10719}.
<a id="trace-10719"></a>
- 125.80s–125.80s (×1), actor 9, squad 1 (trace 10719): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 10636. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1613}.
<a id="trace-10835"></a>
- 129.65s–129.65s (×1), actor 2, squad 0 (trace 10835): traveling overwatch. Knowledge: actor memory at 125.00s, trace 10631. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519969079175367, 'next_transition': 10845}.
<a id="trace-10836"></a>
- 129.65s–129.65s (×1), actor 2, squad 0 (trace 10836): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 125.00s, trace 10631. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519969079175367, 'next_transition': 10845}.
<a id="trace-10845"></a>
<a id="trace-10847"></a>
- 129.80s–129.80s (×2), actor 5, squad 0 (trace 10845): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 10634. Next observer evidence: {'until': 130, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25196208286168786, 'next_transition': 10873}.
<a id="trace-10873"></a>
- 130.10s–130.10s (×1), actor 5, squad 0 (trace 10873): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 130.10s, trace 10873. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520165867557151, 'next_transition': 10928}.
<a id="trace-10874"></a>
- 130.10s–130.10s (×1), actor 2, squad 0 (trace 10874): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 10852. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520165867557151, 'next_transition': 10928}.
<a id="trace-10928"></a>
<a id="trace-10930"></a>
<a id="trace-10941"></a>
<a id="trace-10943"></a>
<a id="trace-10961"></a>
<a id="trace-10963"></a>
<a id="trace-10977"></a>
<a id="trace-10979"></a>
<a id="trace-10998"></a>
<a id="trace-11000"></a>
<a id="trace-11008"></a>
<a id="trace-11010"></a>
<a id="trace-11024"></a>
<a id="trace-11026"></a>
<a id="trace-11033"></a>
<a id="trace-11035"></a>
<a id="trace-11046"></a>
<a id="trace-11048"></a>
<a id="trace-11055"></a>
<a id="trace-11057"></a>
<a id="trace-11127"></a>
<a id="trace-11129"></a>
<a id="trace-11136"></a>
<a id="trace-11138"></a>
<a id="trace-11150"></a>
<a id="trace-11152"></a>
<a id="trace-11161"></a>
<a id="trace-11163"></a>
<a id="trace-11176"></a>
<a id="trace-11178"></a>
<a id="trace-11184"></a>
<a id="trace-11186"></a>
<a id="trace-11198"></a>
<a id="trace-11200"></a>
<a id="trace-11205"></a>
<a id="trace-11207"></a>
<a id="trace-11219"></a>
<a id="trace-11221"></a>
<a id="trace-11228"></a>
<a id="trace-11230"></a>
- 130.30s–139.80s (×40), actor 5, squad 0 (trace 10928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.10s, trace 10873. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560104009866525, 'next_transition': 10941}.
<a id="trace-1518"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (events line 1518): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11250"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (trace 11250): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.15s, trace 11250. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11302}.
<a id="trace-11302"></a>
<a id="trace-11304"></a>
<a id="trace-11312"></a>
<a id="trace-11314"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11340"></a>
<a id="trace-11342"></a>
<a id="trace-11354"></a>
<a id="trace-11356"></a>
<a id="trace-11363"></a>
<a id="trace-11365"></a>
<a id="trace-11378"></a>
<a id="trace-11380"></a>
<a id="trace-11385"></a>
<a id="trace-11387"></a>
<a id="trace-11399"></a>
<a id="trace-11401"></a>
<a id="trace-11406"></a>
<a id="trace-11408"></a>
<a id="trace-11482"></a>
<a id="trace-11484"></a>
<a id="trace-11492"></a>
<a id="trace-11494"></a>
<a id="trace-11511"></a>
<a id="trace-11513"></a>
<a id="trace-11530"></a>
<a id="trace-11532"></a>
<a id="trace-11544"></a>
<a id="trace-11546"></a>
<a id="trace-11551"></a>
<a id="trace-11553"></a>
<a id="trace-11565"></a>
<a id="trace-11567"></a>
<a id="trace-11573"></a>
<a id="trace-11575"></a>
<a id="trace-11586"></a>
<a id="trace-11588"></a>
<a id="trace-11595"></a>
<a id="trace-11597"></a>
<a id="trace-11669"></a>
<a id="trace-11671"></a>
<a id="trace-11679"></a>
<a id="trace-11681"></a>
<a id="trace-11696"></a>
<a id="trace-11698"></a>
<a id="trace-11709"></a>
<a id="trace-11711"></a>
<a id="trace-11725"></a>
<a id="trace-11727"></a>
<a id="trace-11735"></a>
<a id="trace-11737"></a>
<a id="trace-11754"></a>
<a id="trace-11756"></a>
<a id="trace-11766"></a>
<a id="trace-11768"></a>
<a id="trace-11780"></a>
<a id="trace-11782"></a>
<a id="trace-11790"></a>
<a id="trace-11792"></a>
<a id="trace-11864"></a>
<a id="trace-11866"></a>
<a id="trace-11874"></a>
<a id="trace-11876"></a>
<a id="trace-11889"></a>
<a id="trace-11891"></a>
<a id="trace-11898"></a>
<a id="trace-11900"></a>
<a id="trace-11909"></a>
<a id="trace-11911"></a>
<a id="trace-11917"></a>
<a id="trace-11919"></a>
<a id="trace-11934"></a>
<a id="trace-11936"></a>
<a id="trace-11945"></a>
<a id="trace-11947"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-12046"></a>
<a id="trace-12048"></a>
<a id="trace-12057"></a>
<a id="trace-12059"></a>
<a id="trace-12078"></a>
<a id="trace-12080"></a>
<a id="trace-12091"></a>
<a id="trace-12093"></a>
<a id="trace-12106"></a>
<a id="trace-12108"></a>
<a id="trace-12116"></a>
<a id="trace-12118"></a>
<a id="trace-12130"></a>
<a id="trace-12132"></a>
<a id="trace-12141"></a>
<a id="trace-12143"></a>
<a id="trace-12151"></a>
<a id="trace-12153"></a>
<a id="trace-12163"></a>
<a id="trace-12165"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12250"></a>
<a id="trace-12252"></a>
<a id="trace-12269"></a>
<a id="trace-12271"></a>
<a id="trace-12282"></a>
<a id="trace-12284"></a>
<a id="trace-12295"></a>
<a id="trace-12297"></a>
<a id="trace-12305"></a>
<a id="trace-12307"></a>
<a id="trace-12321"></a>
<a id="trace-12323"></a>
<a id="trace-12332"></a>
<a id="trace-12334"></a>
<a id="trace-12343"></a>
<a id="trace-12345"></a>
<a id="trace-12351"></a>
<a id="trace-12353"></a>
<a id="trace-12426"></a>
<a id="trace-12428"></a>
<a id="trace-12436"></a>
<a id="trace-12438"></a>
<a id="trace-12454"></a>
<a id="trace-12456"></a>
<a id="trace-12467"></a>
<a id="trace-12469"></a>
<a id="trace-12480"></a>
<a id="trace-12482"></a>
<a id="trace-12488"></a>
<a id="trace-12490"></a>
<a id="trace-12506"></a>
<a id="trace-12508"></a>
<a id="trace-12516"></a>
<a id="trace-12518"></a>
<a id="trace-12529"></a>
<a id="trace-12531"></a>
<a id="trace-12539"></a>
<a id="trace-12541"></a>
- 140.30s–174.80s (×140), actor 5, squad 0 (trace 11302): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.15s, trace 11250. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11312}.
<a id="trace-1612"></a>
- 175.10s–175.10s (×1), actor 5, squad 0 (events line 1612): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1613"></a>
- 175.10s–175.10s (×1), actor 5, squad 1 (events line 1613): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12564"></a>
- 175.10s–175.10s (×1), actor 5, squad 0 (trace 12564): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.10s, trace 12564. Next observer evidence: None.
<a id="trace-12565"></a>
- 175.10s–175.10s (×1), actor 5, squad 0 (trace 12565): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.10s, trace 12565. Next observer evidence: None.
<a id="trace-12566"></a>
- 175.10s–175.10s (×1), actor 5, squad 1 (trace 12566): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.10s, trace 12566. Next observer evidence: None.
<a id="trace-12567"></a>
- 175.10s–175.10s (×1), actor 5, squad 1 (trace 12567): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.10s, trace 12567. Next observer evidence: None.
<a id="trace-1614"></a>
- 175.15s–175.15s (×1), actor 5, squad 0 (events line 1614): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1615"></a>
- 175.15s–175.15s (×1), actor 5, squad 1 (events line 1615): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12570"></a>
- 175.15s–175.15s (×1), actor 5, squad 0 (trace 12570): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.15s, trace 12570. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12630}.
<a id="trace-12571"></a>
- 175.15s–175.15s (×1), actor 5, squad 0 (trace 12571): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.15s, trace 12571. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12630}.
<a id="trace-12572"></a>
- 175.15s–175.15s (×1), actor 5, squad 1 (trace 12572): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.15s, trace 12572. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12665}.
<a id="trace-12573"></a>
- 175.15s–175.15s (×1), actor 5, squad 1 (trace 12573): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 175.15s, trace 12573. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12665}.
<a id="trace-12630"></a>
<a id="trace-12632"></a>
<a id="trace-12641"></a>
<a id="trace-12643"></a>
<a id="trace-12658"></a>
<a id="trace-12660"></a>
- 175.30s–176.30s (×6), actor 5, squad 0 (trace 12630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.15s, trace 12573. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12641}.
<a id="trace-12665"></a>
- 176.30s–176.30s (×1), actor 9, squad 1 (trace 12665): Withdraw to received rally. Knowledge: actor memory at 175.00s, trace 12553. Next observer evidence: {'until': 187, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15509}.
<a id="trace-12666"></a>
- 176.30s–176.30s (×1), actor 9, squad 1 (trace 12666): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 12553. Next observer evidence: {'until': 187, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15509}.
<a id="trace-12729"></a>
- 176.75s–176.75s (×1), actor 2, squad 0 (trace 12729): ReactToContact: cover and return fire. Knowledge: actor memory at 175.00s, trace 12548. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12740}.
<a id="trace-12730"></a>
- 176.75s–176.75s (×1), actor 2, squad 0 (trace 12730): bounding overwatch. Knowledge: actor memory at 175.00s, trace 12548. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12740}.
<a id="trace-12731"></a>
- 176.75s–176.75s (×1), actor 2, squad 0 (trace 12731): new contact inside 100 m. Knowledge: actor memory at 175.00s, trace 12548. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12740}.
<a id="trace-12740"></a>
<a id="trace-12742"></a>
<a id="trace-12754"></a>
<a id="trace-12756"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12799"></a>
<a id="trace-12801"></a>
<a id="trace-12813"></a>
<a id="trace-12815"></a>
<a id="trace-12830"></a>
<a id="trace-12832"></a>
<a id="trace-12848"></a>
<a id="trace-12850"></a>
<a id="trace-12924"></a>
<a id="trace-12926"></a>
- 176.80s–180.30s (×16), actor 5, squad 0 (trace 12740): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.15s, trace 12573. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12754}.
<a id="trace-12933"></a>
- 180.50s–180.50s (×1), actor 2, squad 0 (trace 12933): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 180.00s, trace 12855. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15230}.
<a id="trace-12935"></a>
- 180.50s–180.50s (×1), actor 2, squad 0 (trace 12935): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 180.00s, trace 12855. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15230}.
<a id="trace-15213"></a>
- 180.50s–180.50s (×1), actor 2, squad 0 (trace 15213): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 180.00s, trace 12855. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15230}.
<a id="trace-15214"></a>
- 180.50s–180.50s (×1), actor 2, squad 0 (trace 15214): MoveTactically. Knowledge: actor memory at 180.00s, trace 12855. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15230}.
<a id="trace-15215"></a>
- 180.50s–180.50s (×1), actor 2, squad 0 (trace 15215): contact cover complete: assessment resumes closure. Knowledge: actor memory at 180.00s, trace 12855. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15230}.
<a id="trace-15230"></a>
<a id="trace-15232"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15341"></a>
<a id="trace-15343"></a>
<a id="trace-15358"></a>
<a id="trace-15360"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15452"></a>
<a id="trace-15454"></a>
<a id="trace-15464"></a>
<a id="trace-15466"></a>
<a id="trace-15487"></a>
<a id="trace-15489"></a>
<a id="trace-15500"></a>
<a id="trace-15502"></a>
<a id="trace-15522"></a>
<a id="trace-15524"></a>
<a id="trace-15532"></a>
<a id="trace-15534"></a>
<a id="trace-15553"></a>
<a id="trace-15555"></a>
<a id="trace-15575"></a>
<a id="trace-15577"></a>
<a id="trace-15589"></a>
<a id="trace-15591"></a>
<a id="trace-15601"></a>
<a id="trace-15603"></a>
<a id="trace-15679"></a>
<a id="trace-15681"></a>
<a id="trace-15688"></a>
<a id="trace-15690"></a>
<a id="trace-15707"></a>
<a id="trace-15709"></a>
<a id="trace-15721"></a>
<a id="trace-15723"></a>
<a id="trace-15743"></a>
<a id="trace-15745"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
- 180.80s–192.80s (×50), actor 5, squad 0 (trace 15230): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 12858. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09449923597574744, 'next_transition': 15249}.
<a id="trace-15509"></a>
- 187.10s–187.10s (×1), actor 9, squad 1 (trace 15509): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 15392. Next observer evidence: {'until': 217, 'shots': 8, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2236}.
<a id="trace-15510"></a>
- 187.10s–187.10s (×1), actor 9, squad 1 (trace 15510): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 15392. Next observer evidence: {'until': 217, 'shots': 8, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2236}.
<a id="trace-15776"></a>
- 192.95s–192.95s (×1), actor 2, squad 0 (trace 15776): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 15609. Next observer evidence: {'until': 193.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8190013646889744, 'next_transition': 15988}.
<a id="trace-15777"></a>
- 192.95s–192.95s (×1), actor 2, squad 0 (trace 15777): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 15609. Next observer evidence: {'until': 193.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8190013646889744, 'next_transition': 15988}.
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16005"></a>
<a id="trace-16007"></a>
<a id="trace-16029"></a>
<a id="trace-16031"></a>
<a id="trace-16048"></a>
<a id="trace-16050"></a>
<a id="trace-16137"></a>
<a id="trace-16139"></a>
<a id="trace-16150"></a>
<a id="trace-16152"></a>
- 193.30s–195.80s (×12), actor 5, squad 0 (trace 15988): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 15612. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.134000246534309, 'next_transition': 16005}.
<a id="trace-16159"></a>
- 196.00s–196.00s (×1), actor 2, squad 0 (trace 16159): Fixing. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: None.
<a id="trace-16168"></a>
- 196.10s–196.10s (×1), actor 5, squad 0 (trace 16168): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 196.10s, trace 16168. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3058560934218778, 'next_transition': 16190}.
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16208"></a>
<a id="trace-16210"></a>
- 196.30s–196.80s (×4), actor 5, squad 0 (trace 16190): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.10s, trace 16168. Next observer evidence: {'until': 196.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16208}.
<a id="trace-16221"></a>
- 197.25s–197.25s (×1), actor 2, squad 0 (trace 16221): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: None.
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16265"></a>
<a id="trace-16267"></a>
- 197.30s–197.80s (×4), actor 5, squad 0 (trace 16229): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.10s, trace 16168. Next observer evidence: {'until': 197.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.02655826771459312, 'next_transition': 16265}.
<a id="trace-16289"></a>
- 198.10s–198.10s (×1), actor 2, squad 0 (trace 16289): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005144667141809027, 'next_transition': 18892}.
<a id="trace-18868"></a>
- 198.10s–198.10s (×1), actor 2, squad 0 (trace 18868): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005144667141809027, 'next_transition': 18892}.
<a id="trace-18869"></a>
- 198.10s–198.10s (×1), actor 2, squad 0 (trace 18869): MoveTactically. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005144667141809027, 'next_transition': 18892}.
<a id="trace-18870"></a>
- 198.10s–198.10s (×1), actor 2, squad 0 (trace 18870): contact cover complete: assessment resumes closure. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005144667141809027, 'next_transition': 18892}.
<a id="trace-18892"></a>
<a id="trace-18894"></a>
<a id="trace-18925"></a>
<a id="trace-18927"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
- 198.30s–199.30s (×6), actor 5, squad 0 (trace 18892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.10s, trace 16168. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22740609820181704, 'next_transition': 18925}.
<a id="trace-18960"></a>
- 199.35s–199.35s (×1), actor 2, squad 0 (trace 18960): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43378027841973416, 'next_transition': 19205}.
<a id="trace-18961"></a>
- 199.35s–199.35s (×1), actor 2, squad 0 (trace 18961): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 16066. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43378027841973416, 'next_transition': 19205}.
<a id="trace-19205"></a>
<a id="trace-19207"></a>
<a id="trace-19289"></a>
<a id="trace-19291"></a>
- 199.80s–200.30s (×4), actor 5, squad 0 (trace 19205): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.10s, trace 16168. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4976250155135807, 'next_transition': 19289}.
<a id="trace-19315"></a>
- 200.65s–200.65s (×1), actor 2, squad 0 (trace 19315): new contact inside 100 m. Knowledge: actor memory at 200.00s, trace 19215. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3841836346136551, 'next_transition': 19557}.
<a id="trace-19557"></a>
<a id="trace-19559"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
<a id="trace-19700"></a>
<a id="trace-19702"></a>
<a id="trace-19732"></a>
<a id="trace-19734"></a>
- 200.80s–203.30s (×12), actor 5, squad 0 (trace 19557): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 19218. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5584187158747185, 'next_transition': 19585}.
<a id="trace-19753"></a>
- 203.70s–203.70s (×1), actor 2, squad 0 (trace 19753): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 200.00s, trace 19215. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19298000856058733, 'next_transition': 19986}.
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20034"></a>
<a id="trace-20036"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20156"></a>
<a id="trace-20158"></a>
- 203.80s–205.30s (×8), actor 5, squad 0 (trace 19986): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 19218. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2923600184481986, 'next_transition': 20034}.
<a id="trace-20172"></a>
- 205.55s–205.55s (×1), actor 2, squad 0 (trace 20172): new contact inside 100 m. Knowledge: actor memory at 205.00s, trace 20086. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03149396793038311, 'next_transition': 20398}.
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20447"></a>
<a id="trace-20449"></a>
<a id="trace-20463"></a>
<a id="trace-20465"></a>
<a id="trace-20471"></a>
<a id="trace-20473"></a>
<a id="trace-20493"></a>
<a id="trace-20495"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20531"></a>
<a id="trace-20533"></a>
- 205.80s–209.30s (×16), actor 5, squad 0 (trace 20398): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 20089. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500504384850697, 'next_transition': 20421}.
<a id="trace-20538"></a>
- 209.40s–209.40s (×1), actor 2, squad 0 (trace 20538): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 205.00s, trace 20086. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3063442204483144, 'next_transition': 20766}.
<a id="trace-20539"></a>
- 209.40s–209.40s (×1), actor 2, squad 0 (trace 20539): rearward bound: one stationary suppressing element. Knowledge: actor memory at 205.00s, trace 20086. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3063442204483144, 'next_transition': 20766}.
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20804"></a>
<a id="trace-20806"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20858"></a>
<a id="trace-20860"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20901"></a>
<a id="trace-20903"></a>
- 210.30s–213.80s (×16), actor 5, squad 0 (trace 20766): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 20689. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0494287400589735, 'next_transition': 20804}.
<a id="trace-20909"></a>
- 214.05s–214.05s (×1), actor 4, squad 0 (trace 20909): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 210.00s, trace 20688. Next observer evidence: None.
<a id="trace-20910"></a>
- 214.05s–214.05s (×1), actor 4, squad 0 (trace 20910): NeedSupport. Knowledge: actor memory at 210.00s, trace 20688. Next observer evidence: None.
<a id="trace-20917"></a>
- 214.10s–214.10s (×1), actor 4, squad 0 (trace 20917): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 20688. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999713820801355, 'next_transition': 20985}.
<a id="trace-20919"></a>
- 214.10s–214.10s (×1), actor 4, squad 0 (trace 20919): MoveTactically. Knowledge: actor memory at 210.00s, trace 20688. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999713820801355, 'next_transition': 20985}.
<a id="trace-20920"></a>
- 214.10s–214.10s (×1), actor 4, squad 0 (trace 20920): Reorganise complete. Knowledge: actor memory at 210.00s, trace 20688. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999713820801355, 'next_transition': 20985}.
<a id="trace-20985"></a>
<a id="trace-20987"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21108"></a>
<a id="trace-21110"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21164"></a>
<a id="trace-21166"></a>
<a id="trace-21175"></a>
<a id="trace-21177"></a>
<a id="trace-21198"></a>
<a id="trace-21200"></a>
- 214.30s–218.30s (×18), actor 5, squad 0 (trace 20985): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 20689. Next observer evidence: {'until': 214.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7201637163425932, 'next_transition': 21003}.
<a id="trace-21205"></a>
- 218.30s–218.30s (×1), actor 4, squad 0 (trace 21205): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 215.00s, trace 21015. Next observer evidence: {'until': 218.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0529128633803832, 'next_transition': 21213}.
<a id="trace-21213"></a>
- 218.70s–218.70s (×1), actor 4, squad 0 (trace 21213): NeedSupport. Knowledge: actor memory at 215.00s, trace 21015. Next observer evidence: {'until': 218.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10503356373612764, 'next_transition': 21221}.
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21239"></a>
<a id="trace-21241"></a>
<a id="trace-21250"></a>
<a id="trace-21252"></a>
<a id="trace-21335"></a>
<a id="trace-21337"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21402"></a>
<a id="trace-21404"></a>
<a id="trace-21429"></a>
<a id="trace-21431"></a>
<a id="trace-21452"></a>
<a id="trace-21454"></a>
<a id="trace-21471"></a>
<a id="trace-21473"></a>
<a id="trace-21491"></a>
<a id="trace-21493"></a>
<a id="trace-21506"></a>
<a id="trace-21508"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21542"></a>
<a id="trace-21544"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21664"></a>
<a id="trace-21666"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21710"></a>
<a id="trace-21712"></a>
<a id="trace-21749"></a>
<a id="trace-21751"></a>
<a id="trace-21775"></a>
<a id="trace-21777"></a>
<a id="trace-21808"></a>
<a id="trace-21810"></a>
<a id="trace-21832"></a>
<a id="trace-21834"></a>
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21929"></a>
<a id="trace-21931"></a>
<a id="trace-21946"></a>
<a id="trace-21948"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22069"></a>
<a id="trace-22071"></a>
- 218.80s–234.80s (×66), actor 5, squad 0 (trace 21221): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 21016. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3410705910829432, 'next_transition': 21239}.
<a id="trace-2235"></a>
- 235.15s–235.15s (×1), actor 5, squad 0 (events line 2235): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2236"></a>
- 235.15s–235.15s (×1), actor 5, squad 1 (events line 2236): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22091"></a>
- 235.15s–235.15s (×1), actor 5, squad 0 (trace 22091): renew committed intent (75 s lifetime). Knowledge: actor memory at 235.15s, trace 22091. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.167000000299401, 'next_transition': 22143}.
<a id="trace-22092"></a>
- 235.15s–235.15s (×1), actor 5, squad 1 (trace 22092): renew committed intent (75 s lifetime). Knowledge: actor memory at 235.15s, trace 22092. Next observer evidence: {'until': 250, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22604}.
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22180"></a>
<a id="trace-22182"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22199"></a>
<a id="trace-22201"></a>
<a id="trace-22216"></a>
<a id="trace-22218"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22242"></a>
<a id="trace-22244"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22334"></a>
<a id="trace-22336"></a>
- 235.30s–240.80s (×24), actor 5, squad 0 (trace 22143): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.15s, trace 22092. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4749500006579638, 'next_transition': 22154}.
<a id="trace-2262"></a>
- 241.10s–241.10s (×1), actor 5, squad 0 (events line 2262): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22342"></a>
- 241.10s–241.10s (×1), actor 5, squad 0 (trace 22342): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.188298 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.10s, trace 22342. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22351}.
<a id="trace-22343"></a>
- 241.10s–241.10s (×1), actor 5, squad 0 (trace 22343): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.188298 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 241.10s, trace 22343. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22351}.
<a id="trace-22351"></a>
<a id="trace-22353"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22413"></a>
<a id="trace-22415"></a>
<a id="trace-22425"></a>
<a id="trace-22427"></a>
<a id="trace-22496"></a>
<a id="trace-22506"></a>
<a id="trace-22518"></a>
<a id="trace-22530"></a>
<a id="trace-22542"></a>
<a id="trace-22548"></a>
<a id="trace-22561"></a>
<a id="trace-22570"></a>
<a id="trace-22580"></a>
<a id="trace-22588"></a>
<a id="trace-22654"></a>
<a id="trace-22661"></a>
<a id="trace-22673"></a>
<a id="trace-22680"></a>
<a id="trace-22689"></a>
<a id="trace-22696"></a>
<a id="trace-22708"></a>
<a id="trace-22716"></a>
<a id="trace-22732"></a>
<a id="trace-22741"></a>
<a id="trace-22809"></a>
<a id="trace-22820"></a>
<a id="trace-22832"></a>
<a id="trace-22840"></a>
<a id="trace-22854"></a>
<a id="trace-22867"></a>
<a id="trace-22882"></a>
<a id="trace-22955"></a>
<a id="trace-22976"></a>
<a id="trace-22990"></a>
<a id="trace-23004"></a>
- 241.30s–263.30s (×47), actor 5, squad 0 (trace 22351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 241.10s, trace 22343. Next observer evidence: {'until': 241.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22361}.
<a id="trace-22604"></a>
- 250.10s–250.10s (×1), actor 9, squad 1 (trace 22604): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 250.00s, trace 22593. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23125}.
<a id="trace-23125"></a>
<a id="trace-23141"></a>
- 267.30s–268.30s (×2), actor 9, squad 1 (trace 23125): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 265.00s, trace 23036. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23141}.
<a id="trace-2338"></a>
- 268.85s–268.85s (×1), actor 9, squad 1 (events line 2338): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23154"></a>
- 268.85s–268.85s (×1), actor 9, squad 1 (trace 23154): renew committed intent (75 s lifetime). Knowledge: actor memory at 268.85s, trace 23154. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23160}.
<a id="trace-23160"></a>
<a id="trace-23231"></a>
<a id="trace-23250"></a>
<a id="trace-23264"></a>
<a id="trace-23276"></a>
<a id="trace-23295"></a>
<a id="trace-23368"></a>
<a id="trace-23386"></a>
<a id="trace-23399"></a>
<a id="trace-23413"></a>
<a id="trace-23430"></a>
<a id="trace-23500"></a>
<a id="trace-23515"></a>
<a id="trace-23533"></a>
<a id="trace-23547"></a>
<a id="trace-23564"></a>
<a id="trace-23629"></a>
<a id="trace-23659"></a>
<a id="trace-23676"></a>
<a id="trace-23690"></a>
<a id="trace-23706"></a>
<a id="trace-23776"></a>
<a id="trace-23793"></a>
<a id="trace-23812"></a>
<a id="trace-23832"></a>
<a id="trace-23845"></a>
<a id="trace-23915"></a>
<a id="trace-23933"></a>
<a id="trace-23946"></a>
<a id="trace-23964"></a>
<a id="trace-23978"></a>
<a id="trace-24057"></a>
<a id="trace-24074"></a>
<a id="trace-24092"></a>
<a id="trace-24110"></a>
<a id="trace-24124"></a>
<a id="trace-24220"></a>
<a id="trace-24236"></a>
<a id="trace-24252"></a>
<a id="trace-24267"></a>
<a id="trace-24336"></a>
<a id="trace-24355"></a>
<a id="trace-24373"></a>
<a id="trace-24397"></a>
<a id="trace-24412"></a>
<a id="trace-24479"></a>
<a id="trace-24493"></a>
<a id="trace-24513"></a>
<a id="trace-24531"></a>
<a id="trace-24555"></a>
<a id="trace-24625"></a>
<a id="trace-24639"></a>
<a id="trace-24651"></a>
<a id="trace-24668"></a>
<a id="trace-24757"></a>
<a id="trace-24779"></a>
<a id="trace-24795"></a>
<a id="trace-24812"></a>
<a id="trace-24825"></a>
<a id="trace-24895"></a>
- 269.30s–330.30s (×60), actor 9, squad 1 (trace 23160): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 268.85s, trace 23154. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23231}.
<a id="trace-2464"></a>
- 330.45s–330.45s (×1), actor 9, squad 1 (events line 2464): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24902"></a>
- 330.45s–330.45s (×1), actor 9, squad 1 (trace 24902): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.45s, trace 24902. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24917}.
<a id="trace-24917"></a>
<a id="trace-24932"></a>
<a id="trace-24953"></a>
<a id="trace-24972"></a>
<a id="trace-25042"></a>
<a id="trace-25070"></a>
<a id="trace-25090"></a>
<a id="trace-25114"></a>
<a id="trace-25184"></a>
<a id="trace-25213"></a>
<a id="trace-25229"></a>
<a id="trace-25248"></a>
<a id="trace-25319"></a>
<a id="trace-25339"></a>
<a id="trace-25355"></a>
<a id="trace-25373"></a>
<a id="trace-25388"></a>
<a id="trace-25460"></a>
<a id="trace-25479"></a>
<a id="trace-25536"></a>
<a id="trace-25606"></a>
<a id="trace-25619"></a>
<a id="trace-25637"></a>
<a id="trace-25654"></a>
<a id="trace-25677"></a>
- 331.30s–359.30s (×25), actor 9, squad 1 (trace 24917): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 330.45s, trace 24902. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24932}.

## Net delivery

232 matched order/radio deliveries; 495 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.414s; maximum 2.050s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2977: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2978: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2979: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2980: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2997: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3002: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3003: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3005: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3007: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3008: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3009: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3010: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3012: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3013: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3014: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3015: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3016: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3438: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3439: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3441: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3443: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3444: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3445: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3446: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3448: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3449: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3450: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3451: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3452: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3666: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3667: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3669: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3671: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3672: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3673: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3674: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3676: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3677: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3678: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3679: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3680: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3752: estimate 10.18; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3753: estimate 10.18; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3871: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3872: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3874: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3876: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3877: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3878: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3879: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3881: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3882: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3883: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3884: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3885: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 4001: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 4002: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4078: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4079: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4082: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4083: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4084: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4085: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4087: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4088: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4089: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4090: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4091: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4263: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4264: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 4266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4267: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4268: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4269: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4270: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4272: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4273: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4274: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 4275: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 4276: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 4461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 4462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4464: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4465: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 4467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4468: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4469: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 4470: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 4471: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4473: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4474: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4475: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 4476: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 4477: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 4648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 4649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4651: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4652: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 4654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4655: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4656: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 4657: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 4658: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4660: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4661: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4662: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 4663: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 4664: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 4851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 4852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4854: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4855: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 4857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4858: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4859: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 4860: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 4861: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4863: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4864: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4865: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 4866: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 4867: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 5036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 5037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5039: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5040: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 5042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5043: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5044: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 5045: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 5046: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5048: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5049: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5050: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 5051: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 5052: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 5219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 5220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5222: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5223: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 5225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5226: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5227: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 5228: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 5229: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5231: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5232: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5233: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 5234: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 5235: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 5421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 5422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5424: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5425: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 5427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5428: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5429: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 5430: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 5431: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5433: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5434: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5435: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 5436: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 5437: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 5617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 5618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5620: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5621: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 5623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5624: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5625: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 5626: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 5627: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5629: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5630: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5631: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 5632: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 5633: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 5634: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5853: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 5854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 5855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5857: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5858: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 5860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5861: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5862: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 5863: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 5864: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5866: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5867: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5868: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 5869: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 5870: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 7098: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 7099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 7100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 7102: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 7103: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 7105: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7106: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7107: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 7108: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 7109: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 7110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7111: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7112: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7113: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 7114: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 7115: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 7349: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 7350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 7351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 7353: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 7354: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 7356: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7357: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7358: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 7359: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 7360: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 7361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7362: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7363: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7364: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 7365: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 7366: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 7510: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7749: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 7750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 7751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7753: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7754: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 7755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 7756: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7757: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7758: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 7759: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 7760: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7762: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7763: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7764: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 7765: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 7766: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 7990: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 7991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 7992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 7993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 7994: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 7995: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 7996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 7997: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 7998: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 7999: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 8000: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 8001: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8003: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8004: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8005: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 8006: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 8007: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 8581: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 8582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 8583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 8585: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 8586: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 8587: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 8588: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8589: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8590: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 8591: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 8592: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 8593: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8594: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8595: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8596: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 8597: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 8598: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 9258: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 9259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 9260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 9262: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 9263: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 9264: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 9265: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9266: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9267: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9268: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9269: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9270: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9271: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9272: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9273: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 9274: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 9275: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9520: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 9521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9524: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9525: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 9526: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 9527: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9528: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9529: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9530: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9531: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9532: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9533: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9534: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9535: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 9536: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 9537: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 124.55s leader 5, trace 10612: estimate 9.68; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 124.55s leader 5, trace 10613: estimate 9.68; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 10631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 10632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10634: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10635: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 10636: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 10637: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 10638: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 10639: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 10640: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 10641: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 10642: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 10643: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 10644: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 10645: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 10646: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 10852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 10853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 10854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 10855: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 10856: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 10857: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 10858: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 10859: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 10860: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 10861: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 10862: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 10863: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 10864: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 10865: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 10866: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 10867: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.10s leader 5, trace 10873: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 11061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 11062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 11063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 11064: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 11065: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 11066: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 11067: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 11068: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 11069: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 11070: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 11071: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 11072: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 11073: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 11074: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 11075: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 11076: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 11234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 11235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11237: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11238: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 11239: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 11240: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11241: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 11242: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11243: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11244: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11245: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11246: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11247: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 11248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 11249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.15s leader 5, trace 11250: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 11413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 11414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 11415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 11416: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 11417: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 11418: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 11419: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 11420: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 11421: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 11422: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 11423: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 11424: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 11425: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 11426: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 11427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 11428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 11602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 11603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 11604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 11605: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 11606: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 11607: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 11608: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 11609: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 11610: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 11611: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 11612: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 11613: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 11614: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 11615: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 11616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 11617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 11797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 11798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11800: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11801: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 11802: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 11803: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 11804: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 11805: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 11806: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 11807: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 11808: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 11809: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 11810: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 11811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 11812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 11979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 11980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11982: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11983: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 11984: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 11985: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 11986: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 11987: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 11988: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 11989: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 11990: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 11991: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 11992: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 11993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 11994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 12170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 12171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 12172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 12173: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 12174: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 12175: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 12176: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 12177: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 12178: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 12179: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 12180: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 12181: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 12182: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 12183: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 12184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 12185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 12359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 12360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 12361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 12362: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 12363: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 12364: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 12365: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 12366: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 12367: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 12368: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 12369: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 12370: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 12371: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 12372: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 12373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 12374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 12548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 12549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 12550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12551: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 12552: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 12553: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 12554: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 12555: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 12556: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 12557: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 12558: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 12559: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 12560: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 12561: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 12562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 12563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.10s leader 5, trace 12564: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.10s leader 5, trace 12565: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.10s leader 5, trace 12566: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.10s leader 5, trace 12567: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.15s leader 5, trace 12570: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.15s leader 5, trace 12571: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.15s leader 5, trace 12572: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.15s leader 5, trace 12573: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 12855: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 12856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 12857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12858: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 12859: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 12860: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 12861: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 12862: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 12863: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 12864: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 12865: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 12866: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 12867: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 12868: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 12869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 12870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 15387: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 15388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 15389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 15390: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 15391: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 15392: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 15393: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 15394: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 15395: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 15396: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 15397: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 15398: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 15399: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 15400: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 15401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 15402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 15609: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 15610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15612: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 15613: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 15614: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 15615: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15616: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 15617: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 15618: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 15619: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15620: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 15621: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15622: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 15623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 15624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 16066: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 16067: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 16068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 16069: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 16070: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16071: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 16072: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 16073: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 16074: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 16075: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 16076: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16077: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16078: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 16079: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 16080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 16081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 196.10s leader 5, trace 16168: estimate 8.86; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 19215: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 19216: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19218: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19219: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19220: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19221: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19222: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19223: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19224: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19225: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19226: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19227: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19228: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 20086: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 20087: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 20088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20089: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20090: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20091: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20092: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20093: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20094: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20095: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20096: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20097: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20098: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20099: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 20687: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 20688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20689: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20690: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20691: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20692: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20693: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20694: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20695: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20696: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20697: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20698: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20699: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 21015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 21016: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 21017: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 21018: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 21019: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 21020: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 21021: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 21022: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 21023: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 21024: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 21025: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 21026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 21027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 21263: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 21264: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 21265: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 21266: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 21267: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 21268: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 21269: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 21270: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 21271: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 21272: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 21273: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 21274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 21275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 21562: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 21563: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 21564: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 21565: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 21566: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 21567: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 21568: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 21569: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 21570: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 21571: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 21572: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 21573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 21574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 21841: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 21842: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 21843: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21844: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 21845: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 21846: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21847: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21848: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21849: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21850: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21851: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22078: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22079: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 22080: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22081: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22082: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22083: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22084: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22085: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22086: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22087: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.15s leader 5, trace 22091: estimate 10.86; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.15s leader 5, trace 22092: estimate 10.86; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 22262: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 22263: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 22264: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 22265: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 22266: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22267: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22268: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22269: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22270: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22271: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.10s leader 5, trace 22342: estimate 10.62; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 241.10s leader 5, trace 22343: estimate 10.62; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 22433: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 22434: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 22435: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 22436: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 22437: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 22438: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 22439: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 22440: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 22441: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 22442: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 22443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 22591: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 22592: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 22593: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 22594: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 22595: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 22596: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 22597: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 22598: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 22599: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 22600: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 22601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 22602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 22747: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 22748: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 22749: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 22750: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 22751: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 22752: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 22753: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 22754: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 22755: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 22756: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 22757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 22758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 22897: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 22898: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 22899: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 22900: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 22901: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 22902: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 22903: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 22904: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 22905: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 22906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 22907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 23036: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 23037: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 23038: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23039: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23040: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 23041: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23042: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23043: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.85s leader 9, trace 23154: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 23174: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 23175: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 23176: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 23177: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 23178: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 23179: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 23180: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 23181: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 23182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 23183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 23312: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 23313: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 23314: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 23315: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 23316: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 23317: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 23318: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 23319: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 23320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 23321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 23444: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 23445: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 23446: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 23447: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 23448: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 23449: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 23450: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 23451: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 23452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 23453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 23573: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 23574: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 23575: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 23576: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 23577: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 23578: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 23579: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 23580: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 23581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 23582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 23720: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 23721: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 23722: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 23723: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 23724: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 23725: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 23726: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 23727: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 23728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 23729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 23859: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23860: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23861: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23862: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23863: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23864: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23865: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23866: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23998: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23999: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 24000: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 24001: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 24002: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 24003: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 24004: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 24005: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 24006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 24007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 24140: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 24141: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 24142: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 24143: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 24144: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 24145: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 24146: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 24147: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 24148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 24149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 24280: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 24281: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 24282: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 24283: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 24284: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 24285: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 24286: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 24287: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 24288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 24289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 24423: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 24424: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 24425: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 24426: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 24427: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 24428: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 24429: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 24430: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 24431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 24432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24569: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24570: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24571: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24572: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24573: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24574: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24575: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24576: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 24698: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24699: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24700: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24701: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24702: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24703: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24704: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24705: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 24838: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24839: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24840: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24841: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24842: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24843: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24844: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 24845: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.45s leader 9, trace 24902: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 24986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24987: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24988: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24989: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24990: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24991: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24992: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24993: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 25128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 25129: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 25130: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 25131: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 25132: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 25133: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25134: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 25135: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 25260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 25261: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 25262: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 25263: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 25264: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 25265: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25266: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 25267: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 25404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 25405: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 25406: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25407: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 25408: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25409: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25410: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25411: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 25550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25551: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25552: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25553: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25554: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25555: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25556: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25557: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 25691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25692: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25693: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25694: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25695: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25696: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25697: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25698: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Rook killed in action
- 1: Reed killed in action
- 1: Ash incapacitated
- 1: Kest killed in action
- 1: Soren incapacitated
- 1: Tern incapacitated
- 1: Moss killed in action
- 1: Iven incapacitated

## Outcome attribution

- 175.10s, evidence 1612: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.10s, evidence 1613: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.10s, evidence 12564: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.10s, evidence 12565: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.10s, evidence 12566: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.10s, evidence 12567: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.499902 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 241.10s, evidence 2262: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 241.10s, evidence 22342: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.188298 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22351}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 241.10s, evidence 22343: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.188298 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22351}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
